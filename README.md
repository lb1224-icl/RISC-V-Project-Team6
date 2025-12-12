# Team 6 Pipelined RV32I

## Table of Contents:
1. [Overview](#overview)
2. [Group Details](#group-details)
3. [Work Split](#work-split)
4. [Repo Structure Explanation](#repo-structure)
5. [Test instructions](#test) 
6. [Evidence: F1 Simulation Lights](#working-simulation)
7. [RISCV Stages](#riscv-stages)
    - [Basic Single Cycle RISCV](#single-cycle-processor)
    - [Wiring and Datapaths](#data-memory)
    - [Pipelined RISCV](#pipelined-riscv)



---
## Overview

The result of this coursework is 3 CPUS: blah blah blah

## Group Details

| Name                     | CID      | GitHub          | Email             | Link to Personal Statement|
|--------------------------|----------|-----------------|-------------------|---------------------------|
| Lucca Butler-Cassar      | 02559782 | **lb1224-icl**  | lb1224@ic.ac.uk   | [Lucca's Statement](statements/Lucca.md)
| Ryota Hosokawa           | 02591705 | **Ryota7hos1**  | rh1524@ic.ac.uk   | [Ryota's Statement](statements/Ryota.md)
| Ethan Cann               | 02592695 | **EthanCann**   | ssc624@ic.ac.uk   | [Ethan's Statement](statements/Ethan.md)
| Charlie Sampson          | 02?????? | **??????????**  | ??????@@ic.ac.uk  | [Charlie's Statement](statements/Charlie.md)



## Work Split 

| **Sections**            | **Lucca** | **Ryota** | **Ethan** | **Charlie** |
|-------------------------|:---------:|:---------:|:---------:|:-----------:|
| Program Counter         | ✔️        |           |           |             |
| Instruction Memory      | ✔️        |           | ✔️        |             |
| Data Memory             | ✔️        |           |           |             |
| Control Unit            |           |           | ✔️        |             |
| Register File           |           | ✔️        |           |             |
| Sign Extend             |           |           | ✔️        |             |
| ALU                     |           | ✔️        |           |             |
| Mult & Div Units        |           | ✔️        | ✔️        | ✔️         |
| Pipeline Registers      |           |           |           | ✔️          |
| Hazard Unit             |           |           |           | ✔️          |
| Branch Pred Unit        |           |     ✔️    |           |             |
| Cache                   | ✔️        |           |           |             |
| Muxes                   | ✔️        | ✔️        |           |             |
| Top Level Datapaths     | ✔️        | ✔️        | ✔️        | ✔️          |
| General Debugging (CPU) | ✔️        | ✔️        | ✔️        | ✔️          |


## Repo Structure 

## Working Simulation

[![🎥 Watch the video](tb/Simulation_Video/VID-20251212-WA0014.gif)](tb/Simulation_Video/VID-20251212-WA0014.mp4)




## Test Instructions




## RISCV Stages

