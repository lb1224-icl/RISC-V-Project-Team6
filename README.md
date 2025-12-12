# Team 6 Pipelined RV32I

## Table of Contents:
1. [Overview](#overview)
2. [Group Details](#group-details)
3. [Work Split](#work-split)
4. [Repo Structure Explanation](#repo-structure)
5. [Test instructions](#test) 
6. [Evidence: F1 Simulation Lights](#working-simulation)
7. [RISCV Stages](#riscv-stages)



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
| Data Memory             | ✔️        | ✔️       |           |             |
| Control Unit            |           |           | ✔️        |             |
| Register File           |           | ✔️        |           |             |
| Sign Extend             |           |           | ✔️        |             |
| ALU                     |           | ✔️        |           |             |
| Mult & Div Units        |           | ✔️        | ✔️        | ✔️         |
| Pipeline Registers      |           |           |           | ✔️          |
| Hazard Unit             |           |           |           | ✔️          |
| Branch Pred Unit        |           |  ✔️       |           |             |
| Cache                   | ✔️        |           |           |             |
| Muxes                   | ✔️        | ✔️        |           |             |
| Top Level Datapaths     | ✔️        | ✔️        | ✔️        | ✔️          |
| General Debugging (CPU) | ✔️        | ✔️        | ✔️        | ✔️          |


## Repo Structure 

### Branch Visualization:

<img src="tb/Photos/Branches.jpeg" alt="Branch Visual" width="400">

The branches that are labelled:
-  `b-playground` is our foundation for building the **single cycle RISCV processor** without any pipelining or further extensions. It has sub branches: `b-` which is where everyone did their individual work to merge back to b-playground at the end.
-  `p-playground` is our foundation for building **pipelined RICCV processor** and also include the further progressing stages e.g. **branch prediction, multi-level cache...**. It has sub branches: `p-` which is once again where everyone did their individual work to merge back to p-playground at the end. There are a few branches that end in words like "safety" and "debug" which are used individually to try debug and solve code errors after having merged everything together.
- `main` is the head branch where our **best performing RISCV Processor** and all testing codes are available.


## Working Simulation 
### **Watch the Full Video:** [F1_SIMULATON_LIGHTS_VIDEO.mp4](tb/Simulation_Video/F1_SIM.mp4)

<img src="tb/Simulation_Video/F1_SIM.gif" alt="F1 Simulation" width="400">



## Test Instructions


## RISCV Stages

[Basic Single Cycle RISCV]
[Pipelined RISCV]
[Multi-Level Cache]
[Every Instruction]
[Multiplication and Division]
[Branch Prediction]
