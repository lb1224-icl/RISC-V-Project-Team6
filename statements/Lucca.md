# Lucca – RISC-V Project Contribution Report

## Table of Contents
1. [Introduction](#1-introduction)
2. [Machine/Assembly code for the F1 Demo](#2-machineassembly-code-for-the-f1-demo)
3. [Fetch Stage](#3-fetch-stage)
4. [Single-Cycle RAM ](#4-single-cycle-ram)
5. [Single-Cycle CPU Integration](#5-single-cycle-cpu-integration)
6. [Cache Hierarchy & MMU](#6-cache-hierarchy--mmu)
7. [Verification & Tooling](#7-verification--tooling)
8. [Lessons Learned & Future Work](#8-lessons-learned--future-work)

---

## 1. Introduction

This document formalises the work I (GitHub handle `lb1224-icl`) carried out on the RISC-V core. Throughout, I emphasise collaboration where it is due and show evidence via commit hashes so that you can `git show` any claim.
My main areas of work were in the fetch stage for the single-cycle CPU, the single-cycle CPU.sv (top file) and the multi-level cache for the pipelined CPU. I also worked aside all 3 other members to debug all stages during integration steps

---

## 2. Machine/Assembly code for the F1 Demo

I began the project by providing runnable assembly/machine code for the F1 light sequence so we could test the different stages of the single-cycle processor with correct instructions

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Basic sequencer for the F1 LEDs | `tb/tests/F1-BasicAssembly.s` | `e9ff1ba (b-playground)` | Created the initial loop |
| Design cleanup & timing fixes | `tb/tests/F1-BasicAssembly.s` | `f68682e (b-playground)` | Removed redundant instructions and ensured deterministic state after reset. |
| LFSR-driven pseudo-random wait | `tb/tests/F1-LFSRAssembly.s` | `46a7e90 (b-playground)` | Added a 4-bit LFSR so each lap features a unique reset time. |
| Small Delay | `tb/tests/F1-LFSRAssembly.s` | `a85049c (b-playground)` | Inserted explicit delay counters so the animation was human-observable. |
| Debugging | `rtl/memory/instr.mem` | `875a6ef (b-playground)` | Debugging due to incorrect machine code (done on ryota's computer) |

---

## 3. Fetch Stage

To make moving to pipelined stages easier, we split the single cycle CPU into 5 sub top files named after the 5 stages of a pipelined processor. I worked on the fetch stage.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| PC control block | `tb/basic/pc/*.sv` | `ed063cc (b-pc)` | Built pc units for storing current PC and logic for deciding the next |
| Fetch top file | `sub_top_files/fetch.sv` | `57346c8 (b-fetch)` | Created a top file to handle all logic inside fetch stage (Initial instr_mem made by Ryota, PC logic finalised by me)|

I changed some of this in the pipeline stage to allow for PCTargetE to come from the Execute stage

## 4. Single-Cycle RAM 

I designed the single cycle RAM and altered the instruction memory to be byte addressable.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Initial data memory | `tb/basic/memory/ram.sv` | `3f05ccc (b-memory)` | Created byte-addressable RAM |
| RAM zero-register guard | `rtl/memory/ram.sv` | `55d60d3 (b-memory)` | Prevented writes when the decoded index was zero, mirroring x0 semantics |
| Fixes and clean-ups | `tb/basic/memory/ram.sv` | `89ce9bb`, `da282fc` `(b-memory)` | Resolved indexing bugs |
| Readability | `rtl/memory/instr_mem.sv`, `rtl/alu/reg_file.sv` | `e4d9e05 (b-memory)` | Clarified signalling between register file and instr_mem |
| Full byte-addressed + little-endian load | `rtl/memory/instr_mem.sv`, `rtl/memory/instr.mem` | `96b1dfb (b-memory)` | Finalised the current instr_mem that reassembles 32-bit words out of 4 bytes |

**Debugging** I had altered `instr_mem.sv` to be little endian byte addressed but forgot to switch the order of the machine code. This resulted in lots of opcode 0 errors which I initially interpreted incorrectly as nothing being written into the `mem_array`. 

---

## 5. Single-Cycle CPU Integration

Once the files in sub_top_files were made, I integrated them into a single-cycle `CPU .sv` top file to execute the given tests and our F1 sequence on.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| First cpu.sv top-level | `rtl/sub_top_files/cpu.sv`, `rtl/sub_top_files/*` | `9f702c7 (b-playground)` | Brought fetch, decode, execute, memory, and writeback together for the single-cycle core |
| Wiring/namespace clean-up | `rtl/sub_top_files/cpu.sv` | `5a3aa28 (b-playground)` | Normalised signal names and added the missing wires |

**Debugging** Ryota, Ethan and I had to debug a lot of sections here as there were unreliable naming convensions used between files. This could have been avoided if we followed the brief from the beginning and stuck with the same naming conventions between modules. We learnt from this and did not make the same mistake when moving to a pipelined version. We were also missing signals such as a signal to indicate which jump type we were performing. 

**Future Work** When we moved to pipelining, everyone edited this file individually to add their respective wires between stages

---

## 6. Cache Hierarchy & MMU 

The final input was making a cache hierarchy and coupling it to the pipeline through an MMU wrapper.  This work was primarily done on the `p-memory` branch and is captured cleanly in commit `175fa74` where i merged my work to lower branches.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| Direct-Mapped Cache | `rtl/memory/l1_cache_dm.sv` (no longer exists, is in previous commits)| `ec922909  (p-memory)` | Created a direct mapped cache to practice how caches work |
| L1 N-way cache | `rtl/memory/l1_cache_n_way.sv` | `175fa74 (p-memory)` | Two-way set-associative, write-through policy to minimise control complexity |
| L2/L3 caches | `rtl/memory/l2_cache_n_way.sv`, `rtl/memory/l3_cache_n_way.sv` | `175fa74 (p-memory)` | Shared block-wide interface to keep refill latency fixed at four cycles |
| MMU + fill FSM | `rtl/memory/mmu.sv` | `175fa74 (p-memory)` | Handles promotion/demotion between cache levels, miss buffers, and RAM transactions |
| Pipeline handshake | `rtl/cpu.sv`, `rtl/p_regs/*`, `rtl/hazard_unit/hazard_unit.sv` | `175fa74 (p-memory)` | Added `mem_ready`, `cache_stall`, and gating so the pipeline only advances when the MMU responds. Worked with Charlie to implement with hazard unit |

**Key Design Points.**
- **FSM Coordination.** The MMU implements a two-state FSM (`IDLE`/`FILL`) that bursts four words from RAM while keeping L1 ⊂ L2 ⊂ L3 validity intact
- **Promotion Policy.** Hits in lower levels trigger promotions (e.g., L3->L2->L1) in the same cycle
- **Write Policy** Write-through policy was used for simplicity. Discussed more in "Future Work" Section 
- **Pipeline Awareness.** The hazard unit exports `cache_stall`, letting every pipeline register freeze cleanly when `mem_ready==0`

---

## 7. Verification & Tooling

To help with unit tests of the cache, I created lots of testbenches for each section to extensively test the number of cycles misses took, hit-miss ratios and correct data after continuous read and writes.

| Feature | Files | Commit(s) | Notes |
| --- | --- | --- | --- |
| CPU testbench tweaks for F1 | `tb/tests/cpu_tb.cpp`, `tb/tests/F1-LFSRAssembly.s` | `65e4747 (b-playground)` | Fixed assembly code and added debug error messages to find erros easier in future |
| Generalised doit.sh for testbenches | `tb/unit_tests_cache/cache.sh` | `7d50692  (p-memory)` | Generalised shell file so making new testbenches was easy |
| Testbenches for cache | `tb/unit_tests_cache/*` | `be46f6a1`, `03f4197b`, `(p-memory)` | Created testbenches for the cache units using GTest |

---

## 8. Lessons Learned & Future Work

### What I Learnt
- **SystemVerilog fluency.** Moving from simple RAMs to a three-level cache hierarchy tuned my understanding of blocking vs. non-blocking assignments, packed arrays, and parameterisable modules.
- **Git Workflow.** Using topic branches (`b-memory`, `p-cache`, etc.) and descriptive commit messages (e.g., *“Byte address instr_mem and little endian instr.mem”*) proved valuable when debugging later.
- **Verification-first thinking.** Adding unit tests and GTest harnesses early saved hours compared to debugging purely via GTKWave.

### What Went Wrong
- **Assembly to Machine Code** Converting our assembly into machine code went wrong as we forgot about the lowest bit in jumps always being 0. Remembering this could have saved a lot of time in the integration stage
- **Synchronous/Asynchronous Mishap** By designing the FSM of the MMU to be synchronous, I accidentally made the cache have psuedo-synchronous reads. This made the CPU fail all testbenches by being one cycle off on all reads. I added GTest debug messages which made this very easy to spot.

### If I Had More Time
- **Write-back and Dirty Bits.** The current caches are write-through, adding dirty tracking plus a write-back policy would cut external bandwidth.
- **Prefetching / Victim Buffers.** A simple next-line prefetcher or a small victim cache behind L1 would hide compulsory misses and smoothen burst traffic into the MMU.

---
