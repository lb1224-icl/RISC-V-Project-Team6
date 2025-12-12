# Charlie Sampson – RISC-V Project Contribution Report

## Table of Contents
1. [Introduction](#1-introduction)
2. [Pipelining the CPU & Hazard Handling](#2-pipelining-the-cpu--hazard-handling)
3. [Cache Integration & Memory Correctness](#3-cache-integration--memory-correctness)
4. [Multicycle Divider Design & Pipeline Integration](#4-multicycle-divider-design--pipeline-integration)
5. [Verification, Debugging & Test Development](#5-verification-debugging--test-development)
6. [Lessons Learned & Future Improvements](#6-lessons-learned--future-improvements)

---

## 1. Introduction

This document details the work I carried out on the RISC-V CPU project, with particular emphasis on pipelining, hazard management, multi-cycle execution units and memory-system integration.

Where appropriate, collaboration with teammates during system integration and debugging is highlighted, while individual technical ownership is clearly identified. All claims are supported by commit history, which can be inspected using `git show`.

My primary contributions include:
- Pipelining the CPU and implementing the hazard unit
- Integrating a 32-cycle divider into the pipelined architecture
- Identifying and fixing byte-addressing and data-alignment issues in the memory system
- Integrating cache and divider stalls into unified pipeline control
- Developing verification tests for multiplication and division instructions

---

## 2. Pipelining the CPU & Hazard Handling

I was responsible for pipelining the originally single-cycle CPU and implementing the hazard unit required to ensure correct execution in the presence of data, control and structural hazards. Initial pipelining and hazard unit implementations can be seen here along with further initial adjustments: [`5250b0c`] [`cb3178f`] [`3c0f3a6`] [`f9b87d0`] [`9f702c7`] [`5a3aa28d`].

### Responsibilities
- Introducing pipeline registers between all five stages (fd_reg, de_reg, em_reg, mw_reg)
- Implementing data forwarding paths to reduce unnecessary stalls
- Designing a hazard detection unit to control stalling and flushing
- Debugging interactions between hazards, cache stalls and the multi-cycle execution units

This work required close coordination with teammates, as pipelining affected all parts of the CPU. I worked collaboratively to resolve naming inconsistencies and to ensure correct signal propagation.

A key challenge was ensuring that multiple independent stall sources (cache misses and division operations) interacted correctly without deadlocking the pipeline or corrupting architectural state.

---

## 3. Cache Integration & Memory Correctness

During cache integration, I identified and corrected a fundamental memory-system bug related to byte addressing.

### Byte-Addressing Bug Discovery

While debugging failing tests involving load instructions, I discovered that the data memory effectively operated in a word-only mode. It did not correctly select or align byte lanes and always loaded and stored full 32-bit words [`61bc8e5`].

### Cache-Driven Fixes

When integrating the MMU and cache system, I observed that the cache expects store data to already be aligned into correct byte lanes and load data also needed to be aligned correctly.

To address this, I implemented correct byte-lane selection logic and introduced a byte_shift signal to align store and load data.

### Immediate Cache Stall Fix

I also corrected a timing issue in cache stalling. The original design stalled the pipeline one cycle too late on read misses. I replaced this with immediate miss detection:

```systemverilog
assign mem_ready = (state != S_FILL) && !(mem_valid && !mem_we && !(l1_hit | l2_hit | l3_hit));
```

This ensured the pipeline stalls in the same cycle a miss is detected and remains stalled throughout the refill process [`b10aebe`].

---

## 4. Multicycle Divider Design & Pipeline Integration

I worked alongside Ryota to help design a 32-cycle restoring divider supporting the full RISC-V division instruction set:
- `DIV`
- `DIVU`
- `REM`
- `REMU`

### Divider Architecture

The divider is implemented as a four-state finite-state machine:
- `IDLE`
- `INIT`
- `DIVIDE`
- `DONE`

The divider passed standalone unit tests early in development, validating the arithmetic logic independently of the pipeline.

---

### Pipeline Integration Challenges

The most significant challenges arose during pipeline integration, rather than in the divider arithmetic itself.

#### One-Cycle Start Pulse

Initially, the divider would unintentionally restart because the start signal remained high while the instruction was still in the pipeline [66ff45c]. I fixed this by converting the start signal into a one-cycle pulse, gated by cache stall status:

```systemverilog
assign start_pulse = start & ~start_q & ~cache_stall;
```

This prevented unintended re-entry into the INIT state.

#### Busy Signalling

Early stall logic relied on a division_done signal, which failed to stall the pipeline immediately when a division entered the execute stage. I replaced this with a busy-based approach, where the pipeline stalls whenever the divider is active:

```Systemverilog
assign div_busy = start & busy_q;
```

This ensured the pipeline only unstalled when results were guaranteed to be valid [`b8ec88c`] [`379aee5`].

#### Operand Preservation During Stalls

A critical bug appeared because divider initialisation occurred two cycles after stalling, by which point forwarded operand values were no longer available. Rather than restructuring the FSM, I introduced operand registers to capture the forwarded operands (effectively delaying operands by one cycle). This preserved correct forwarding behaviour and resolved the remaining division failures.

After these fixes, all multiplication and division tests passed.

---

## 6. Verification, Debugging & Test Development

I developed targeted tests for the M-extension instructions. I created targeted tests to check potential issues, particularly to do with cache and division interaction cases (6_mul.s/7_div.s/8_mul_div.s/9_div_cache.s). I also created unit tests for the divider and the hazard unit.

---

## 7. Lessons Learned & Future Improvements

### What I Learned
I have become very confident with System Verilog and debugging designs. Throughout the project, I needed to think very hard about how different modules interacted with each other, so understanding circuit timing was crucial. I have also become an efficient collaborator on GitHub, which is something I was previously not very confident with.

### Future Improvements
If I were to do this again, I would try to integrate components even more carefully and draw extra diagrams to help with spotting potential issues. I would try to understand how each component works in extra detail to make debugging more efficient.
