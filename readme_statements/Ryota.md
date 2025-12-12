# Ryota – RISC-V Project Contribution Report

## Table of Contents
1. [Introduction](#1-introduction)
2. [Register File & Data Memory](#2-register-file--data-memory)
3. [ALU](#3-alu)
4. [ALU Extensions (MUL/DIV)](#4-alu-extensions-muldiv)
5. [Execution & Write Back Stage](#5-execution--write-back-stage)
6. [2-bit Branch Prediction](#6-2-bit-branch-prediction)
7. [Lessons Learned & Future Work](#7-lessons-learned--future-work)

---
![name it wtv](file directory fkshf/kwhf/fhf.jpg)
## 1. Introduction

This document summarises the contributions I (GitHub user Ryota7hos1) made to the RISC-V core. 
Throughout, I provide commit references so that each claim can be checked using: "git show"
My work focused primarily on: implementing and verifying register file and ALU components, extending the ALU with M-extension operations (MUL/DIV), integrating these components into the Execute stage, and designing the branch prediction unit, including redirect logic and pipeline flush handling. 
I also worked alongside all 3 other members to debug all stages during integration steps.
Beyond coding, I also took on organisational responsibilities. 
I planned weekly milestones, defined clear per-member expectations, and maintained a schedule so the team shared a consistent understanding of priorities and progress. 
This ensured we stayed aligned and delivered a final CPU design we could all be proud of. The final CPU successfully passes all test cases including the PDF test, demonstrating a fully functional 5-stage pipelined RISC-V processor.
---

## 2. Register File & Data Memory

I began the project by making a simple register file as required in the lab4 requirements and a data memory. Using the lecture slides as a guide I have made a synchronous write asynchronous read register file and a Data Memory. The register file implements 32 registers (with x0 hardwired to 0) and supports simultaneous read of two registers and write of one register per cycle.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Basic Register File | `rtl/alu/reg_file.sv` | `d089689 (b-alu)` | Created the Register File |
| Basic Data Memory | `rtl/alu/data_mem.sv` | `582bb01 (b-alu)` | Created a basic Data Memory |
| Top File | `rtl/alu/top_alu.sv` | `0a67b4e (b-alu)` | Created a Top File for the lab4 RegFile ALU system |

---

## 3. ALU

In the task distribution for lab 4 I have been assigned the ALU unit and thus I worked on the ALU. I have implemented very basic instructions first, and then added more and more complex ones, adding output signal eq logics and obtaining further inputs from the control unit to make execution simpler. The ALU supports arithmetic operations (ADD, SUB), logical operations (AND, OR, XOR), shift operations (SLL, SRL, SRA), and comparison operations (SLT, SLTU). The `eq` output signal is used for branch comparison logic.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Minimal ALU | `rtl/alu/alu.sv` | `d089689 (b-alu)` | Made a minimal ALU with just add, sub and BNE instructions |
| Basic ALU | `rtl/alu/alu.sv` | `582bb01 (b-alu)` | Made a basic ALU with more instructions adding more instructions (implementation was wrong so later fixed)|
| Updated(1/2) ALU | `rtl/alu/alu.sv` | `9f9ffd1 (b-alu)` | Changed alu file to accommodate for the changes in alu_ctrl signal from the control unit (half way done)|
| Updated(2/2) ALU | `rtl/alu/alu.sv` | `d9d28ef (b-alu)` | Added more instructions and introduced new architecture for alu |
| F1 ALU | `rtl/alu/alu.sv` | `ce4d44c (b-alu)` | Added all instructions needed for f1 task (single cycle) |

## 4. ALU Extensions MUL/DIV

I have added new units outside of the ALU in the execute stage to do multiplication and division covered. We have implemented the 32-cycle divider, because this is overall better than having a 1-cycle divider with huge combinational logic. The multiplication unit handles MUL, MULH, MULHSU, and MULHU instructions using a 64-bit intermediate result. The division unit implements a state machine (IDLE, INIT, DIVIDE, DONE) and provides a `div_busy` signal for hazard unit integration.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Multiplication Unit | `rtl/alu/mul.sv` | `2540667 (p-alu)` | Added a multiplication unit with 64-bit intermediate |
| Division Unit | `rtl/alu/div.sv` | `493dc7c (p-alu)` | Made multiple versions of a division unit to test around with |
| Fixes and clean-ups | `tb/basic/memory/ram.sv` | `34a170b (p-alu)` | Fixed division unit so that individual testbenchs for it works |
| Multiplication Unit TB | `rtl/alu/mul_tb.cpp` | `c665533 (p-alu)` | Added an individual testbench for the multiplication unit |

**Debugging** The division unit had many problems for integrating it into the whole CPU and Charlie who was in charge of the hazard unit did significant work integrating it into the cpu

---

## 5. Execution & Write Back Stage

To make moving to pipelined stages easier, we split the single cycle CPU into 5 sub top files named after the 5 stages of a pipelined processor. I was in charge of the Execution stage naturally as I made the ALU, and also the Write Back stage. The writeback stage selects between ALU result, memory read data, PC+4, or zero based on the `result_src` control signal.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| First exec.sv top-level | `rtl/sub_top_files/execute.sv`, `rtl/writeback/mux_4.sv` | `d8dd180 (b-execute)` | Brought in Units like ALU from before to form a top level sheet for the execute stage |
| Fixing up small details | `rtl/sub_top_files/execute.sv` | `678b8da (b-execute)` | Details like data size and such that were incomplete on last design was implemented |
| Adding extra parts | `rtl/alu/mul.sv` | `2540667 (p-alu)` | Extra parts were added to the execution stage throughout the project and this mul.sv is just 1 example of it |
| Writeback Stage | `rtl/alu/mux_4.sv`, `rtl/sub_top_files/writeback.sv` | `f7457cf (b-writeback)` | Writeback stage was mostly just making a Mux and a top level file |

Changes to the execution stage (like adding the mul and div units or adding a mux for execution stage output) were implemented all throughout the project

---

## 6. 2-bit Branch Prediction 

The final input was making a branch prediction unit(bpu) with some functions of the hazard unit like flushing registers on a predict miss. This work was primarily done on paper for planning and on the `p-bpu` and `p-branch-prediction`  branches. The design of the branch prediction unit can be found below. NPU = Next PC Unit, TUU = Table Update Unit, BPU = Branch Predict Unit.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| BPU rough draft design | `rtl/bpu/tuu.sv`, `rtl/bpu/npu.sv`, `rtl/bpu/fd.sv`, `rtl/bpu/cache.sv` | `a06efab (p-bpu)` | Implemented sub units of the bpu with syntax errors|
| Initial BPU | `rtl/bpu/bpu.sv`, `rtl/bpu/tuu.sv`, `rtl/bpu/cache.sv` | `2d8ac1e (p-bpu)` | Implemented a top bpu file and fixed syntax errors and illegal operations in the sub units |
| Integrating bpu into the cpu | `rtl/bpu/tuu.sv`, `rtl/bpu/tb_bpu.cpp`(moved to a different directory) | `b0a4aa4 (p-branch-prediction)` | Started integrating the bpu into the cpu and added some testbenches to check its functionality (with Charlie on his computer)|
| Debugging 1 | `rtl/bpu/npu.sv` | `d3a7f11 (p-branch-prediction)` | We have fully integrated the bpu into the cpu, but there were obvious bugs that we needed to deal with with connection and some logic|
| Debugging 2 | `rtl/bpu/tuu.sv` | `87d79dd (p-branch-prediction)` | Recognized some implementations of instructions in TUU like `JALR` were wrong|
| Branch Prediction Unit | `rtl/bpu/npu.sv`, `rtl/bpu/bpu.sv` | `267307c (p-branch-prediction)` | Fixed underlying errors in logic (flushing) to obtain the correct pc value |

**Key Design Points.**

- **Divide and Conquer.** The BPU is divided into subsystems to make the logic in each sub system simpler and to make it easier to spot errors:
  - BPU (Branch Prediction Unit): Top-level coordinator
  - TUU (Table Update Unit): Prediction logic and cache management
  - NPU (Next PC Unit): PC selection and flush handling

- **Direct-Mapped Cache Architecture.** The BPU uses a 16-entry direct-mapped cache with dual-port design (separate read/write ports). Each cache entry stores a PC tag, target address, and 2-bit saturating counter state. Cache updates occur on the negative clock edge to avoid read/write conflicts.

- **Multilevel Prediction.** 
  1. Cache hit: Use stored state (MSB of state → prediction)
  2. Cache miss with static heuristics:
     - JAL: Always predict taken (unconditional jump)
     - Backward branches: Predict taken (typical loops)
     - Forward branches: Predict not taken (typical conditionals)
  Rationale: Handles common patterns even without history.

- **Flush Correction Mechanism.** When a misprediction is detected, the flush correction uses the execute-stage PC (`pc_tu`) for accurate correction:
  - Sequential path: `pc_tu + 4` (execute PC + 4)
  - Jump/branch taken: `pcplusimm_tu` (computed target from execute stage)
  - Fallback: `pc_circuit` (from fetch stage)

- **JALR Exclusion.** JALR always jumps (it's unconditional), but the target address depends on register value (`rs1 + imm`), not PC-relative offset, so the target cannot be predicted statically. 

- **Immediate Extraction.** Extracts immediates depending on instruction value to use for computing target PC value and flush correction. JAL immediates use J-type encoding, while branch immediates use B-type encoding.
  
<img src="tb/Photos/bpu.pdf" alt="Branch Prediction Unit Planning" width="400">

---

## 7. Lessons Learned & Future Work

### What I Learnt
- **CPU Cycle.** While having as many things happen in 1 CPU cycle looks good, it may actually be slower. For example making a 1-cycle divider actually makes each CPU cycle much slower making the overall execution slower. This demonstrates the trade-off between cycle time and cycles per instruction (CPI). This was some ideas that I came across when I was designing the divider with Charlie and was a very important find.
- **Git Workflow.** It was my first time actually using github (branches, push/pull, etc) so it took a bit to get used to, but I have a very useful tool for collaboration in my toolkit now. Using `git checkout` for accessing past commits was very good.

### What Went Wrong
- **Branch Prediction Unit Logic** Some cases for the branch prediction unit logic was not considered and that caused issues in debugging. (ex. JALR should be considered as its own case but I had it together with other branch and jump instructions) 
- **Division Unit Integration** While the initial design of the 32-cycle divider went well, the integration of that into the cpu caused a lot of issues and it took a long time to debug. A clearer testbench with messages on how the hazard unit would react to its outputs would have helped spot the issues quicker.

### If I Had More Time
- **JALR Implementation in bpu.** JALR always jumps (it's unconditional), but predicting where it jumps to is difficult because the target address depends on register value (`rs1 + imm`), which cannot be determined statically. A complete branch prediction unit may implement target address prediction for JALR using techniques like return address stack (RAS) or register value prediction, even if it cannot be updated in the cache.
- **Superscalar/dual core.** Superscalar and dual core were ideas that we came up with to make the executions faster, but we decided that we would not have enough time to implement its fetch logics and make a proper hazard unit for it so we had to pass this time, but it would have been a very interesting idea to implement on our cpu.

---
