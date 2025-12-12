# Ethan – RISC-V Project Contribution Report

## Table of Contents
1. [Introduction](#1-introduction)
2. [Machine/Assembly code & Instruction Memory](#2-machineassembly-code--instruction-memory)
3. [Immediate Sign Extension](#3-immediate-sign-extension)
4. [Decode Stage Top File](#4-decode-stage-top-file)
5. [Control Unit](#5-control-unit)
    -  [Minimal Instructions](#51-minimal-instructions)
    -  [All Instructions](#52-all-instructions)
    -  [Multiplication and Division Controls](#53-multiplication-and-division-controls)
6. [Unit Tests](#6-unit-tests)
7. [Lessons Learned & Future Work](#7-lessons-learned--future-work)

---

## 1. Introduction

This document formalises the work I (GitHub handle `EthanCann`) carried out on the RISC-V core. Throughout, I emphasise collaboration where it is due and show evidence via commit hashes so that you can `git show` any claim.
My main areas of work were in the decode stage for the single-cycle CPU, the neccessary datapaths throughout the entire system and the unit tests for the majority of modules excluding the cache, branch prediction and multiplication/division unit. I worked aside all 3 other members to debug all stages during integration steps. Also, Me and Lucca were more allocated to doing git merges and readme files as we were mor experienced with git.

---

## 2. Machine/Assembly code & Instruction Memory

Lucca did the intial write up for the assembly language and I went through to proof check this to make sure it is correct and all makes logical sense because this is the foundation of our testing and may cause unexpected issues later on. After we had done this I had calculated the machine codes and then fed this into a text file to be used by the instruction memory. When creating the instruction memory, I was unsure about whether to include the offset within the sv code. I later discovered that there was offset built within the assemble.sh file. In the end, once we had merged everything to b-playground, a lot of the machine code seemed to have been incorrect in the end and so Me, Lucca and Ryota spent a long time debugging this and correcting it all. Especially one of the significant issues was that we forgot that the jump and branch instruction immediates would be shifted left by 1 when we try to generate the machine code because the very first bit is filled with a 0 automatically.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| LFSR-driven pseudo-random wait | `tb/tests/F1-LFSRAssembly.s` | `8097e49 (b-playground)` | Corrected the shift logic to correctly achieve the LFSR as it was doing XOR on the wrong bits. |
| Instruction Memory | `rtl/memory/instr.mem.txt`, `rtl/memory/instr_mem.sv` | `87c463f (b-playground)` | Created the basic module for the instruction memory and then calculated the machine code conversions of the assembly code instructions to load it into a text file for the instr_mem.sv module. |
| Debugging | `rtl/memory/instr.mem.txt` | `875a6ef (b-playground)` | Debugging due to incorrect machine code (done on ryota's computer) |
| Size and offsetting Issue | `rtl/memory/instr_mem.sv` | `c374fb1 (b-playground)` | Have the correct size for the instruction memory and have reversed my initial change of the offsetting the memory within the sv file. |

---

## 3. Immediate Sign Extension

I created the sign extension module which passes through the different instruction types and depending on what allocation of immediate bits it had within the 32 bit word, the extension was done differently. Later on, I also decided to increase the number of bits of imm_src to allow for all the other instructions I wanted to implement by the end of the assignment.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Sign Extension | `rtl/sign_extend/sign_extend.sv` | `61af44e (b-sign_ext)` | Built the minimal logic for I,S,B,R type instructions to work functionally for the F1 Simulations. |
| Sign Extend Control Signal | `rtl/cu/control_unit.sv`,`rtl/sign_extend/sign_extend.sv` | `9767507 (b-playground)` | Changed the value of imm_src in both the sign extend and control unit to achieve a wider variety of intruction types to be sign extended. |
| U and J Instructions | `rtl/sign_extend/sign_extend.sv` | `5a8bd2f (b-sign_ext)` | To further implement both U and J type instructions, I extended the Sign Extend module to include cases and logic for those types |

----

## 4. Decode Stage Top File

To make the transition to pipelined stages much easier, I suggested that we split the single cycle CPU into 5 sub top files named after the 5 stages of a pipelined processor: Fetch, Decode, Execute, Memory and Writeback. I worked on creating the Decode.sv sub top file. It was logically just wiring up the control unit, sign extend and reg file together but I also had to make sure that any wires from the fetch stage that were just passing through to the execute stage were also included. After doing this and merging these together all into b-playground, I proof checked all the codes along with Lucca and Ryota and found a lot of syntax errors located in everyones code so went on to fix those. In the process of debugging, a key method was to display certain values at the top level output so that we can keep track and see where it wetn wrong.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Decode Block | `rtl/sub_top_files/decode.sv` | `be59bfa (b-playground)` | Finished all the internal wiring for the decode sub top file. |
| Fixing Syntax | `rtl/*` | `cef3083 (b-playground)` | Looked through all the modules that we all created to clean up any syntax issues. |


## 5. Control Unit

### 5.1 Minimal Instructions

One of the main roles I took was to create the control unit. For the single cycle RISCV processor, the number of instructions needed was about half of the total, However, trying to decode the logic and considering how the logic for the main_decoder and the alu_decoder cross over was an interesting difficulty. I also made sure to add error messages as the default case within these modules so that we can easily pinpoint where the RISCV processor had failed when we run it.

### 5.2 All Instructions

Then proceeding onto implementing the rest of the other instructions was another role I took on. The types of instructions that were similar to those used in the F1 simulation was quite easy to implement as I already understood the logic (although I had to consider funct3 and funct7 a lot more). However, it proved more of a challenge when I moved onto implementing the B, J, U type instructions. For example:
- I realised that the branch logic had to be taken out of the control unit if we were to implement pipelining due to the clock cycle it had to be in.
- The jal and jalr instruction required another control signal outisde of the control unit within the execution stage to determine whether we took the ALU output (jalr) or the PC+Imm  (jal).
- The lui instruction intially had no way to write back to the register file hence, I edited the ALU to include another route for the lui so that it can simply pass through. Likwise the auipc instruction required an extra mux with more select line logic to allow the PC value to also be fed into the ALU for calculation.

### 5.3 Multiplication and Division Controls 

Furthermore, Charlie and Ryota created a Multiplication and Division Unit which required a few signals as well as down to the hazard unit. Therefore, I decoded the instructions for each of the instructions using different opcode values to keep it simple. However, later on, Charlie and I realised that the opcode values that the processor can take is limited to very specific numbers hence we changed it to be funct3 and funct7 logic dependant while overlapping with the R type instructions.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Basic Control Unit | `rtl/cu/control_unit.sv`, `rtl/cu/main_decoder.sv`, `rtl/cu/alu_decoder.sv`| `e66ea2f (b-cu)` | Created the main decoder and alu decoder, successfully connecting the modules together and added the logic for the minimal instructions. |
| Full Control Unit | `rtl/cu/control_unit.sv` | `d2817a2 (p-cu)` | Implemented all instructions for the RISCV processor as well as rerouting the lui instruction through the ALU. |
| Branch Logic | `rtl/cu/*`, `rtl/sub_top_files/execute` | `d54bf7f (p-cu)` | Rerouted the branch logic to be in the execute stage of the pipeline. |
| Mult and Div Logic | `rtl/cu/*` | `92ae214 (p-cu)` | Created the intial logics and wiring for the multiplication and division unit. |


---

## 6. Unit Tests

To be able to confidently say that the RISCV system works correctly, I created unit tests for the majority of modules so that we can test all sorts of sequences of inputs and expected outputs and using Gtests really came in handy to run a smooth and very precise testing system. I often used a "golden model" for large-scale randomization which helped created unpredictable tests.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Unit Tests | `tb/tests/unit_tests/*`| `70cf282 (p-mul-div-debug)` | All units tests finished and were all successfully passed by the RISCV processor also made the unit_test_doit.sh file so that it can run all the unit tests instead of needing to have a seperate shell file for each. |
| Cleaning Files | `tb/tests/*` | `8524010  (main)` | Kept all the unit tests in a single location. |

---

## 7. Lessons Learned & Future Work

### What I Learnt
- **Using GitHub** GitHub has so many useful tools and I now understand why it is such a useful working environment.
- **Naming and coding conventions** keeping naming conventions consistent would mean that linking up all the modules om top files would be much easier as you can easily understand where each logic is coming from.
- **Unit Testing** Adding unit tests and GTest harnesses early saved hours compared to debugging purely via GTKWave and can give you confidence in working modules.

### What Went Wrong
- **Assembly to Machine Code** Converting our assembly into machine code went wrong as we forgot about the lowest bit in jumps always being 0. Remembering this could have saved a lot of time in the integration stage
- **Merge Conflicts** There was time to time confusion about what branch we are working in so setting up a clear structure from the beginning is very important. there were a few times where we partially lost work due to merge conflicts.

### If I Had More Time
- **Cleaning up logic** I feel like I wasted a lot of bits where unneccesary such as feeding some modules the entire instruction word eventhough they wouldn't use some bit of it.
- **Superscalar** I was particularily interested in the logic for superscalar and would've enjoyed implementing this if I had more time.

---
