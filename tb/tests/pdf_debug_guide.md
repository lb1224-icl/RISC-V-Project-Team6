# PDF Test Debugging Guide

## Overview
This guide helps identify where the PDF test fails by providing debugging tools and checkpoints.

## Files Created

1. **verify_pdf_debug.cpp** - Enhanced test with periodic checkpoints
2. **run_pdf_debug.sh** - Script to run the debug test
3. **pdf_debug_guide.md** - This guide

## Running the Debug Test

```bash
cd tb/tests
chmod +x run_pdf_debug.sh
./run_pdf_debug.sh
```

Or manually:
```bash
cd tb
./doit.sh tests/verify_pdf_debug.cpp
```

## What the Debug Test Does

The debug test monitors execution and reports:
- Current value of `a0` register at regular intervals
- Whether execution appears stuck
- Estimated execution phase
- Diagnostic information

## Key Checkpoints in PDF Program

### 1. After `init` function
- Should initialize 256 bytes at `base_pdf` (0x100) to 0
- Check: Memory at 0x100-0x1FF should be all zeros

### 2. After `build` function  
- Should read data from `base_data` (0x10000) and build PDF
- Check: Memory at 0x100-0x1FF should have non-zero values
- Check: Loop should terminate when bin count reaches `max_count` (200)

### 3. After `display` function
- Should sum all PDF values into register `s1` (x9)
- Check: Register `s1` should contain sum (expected: 15363)
- Check: Loop should iterate 255 times (indices 0-254)

### 4. At `finish` function
- Should copy `s1` to `a0`
- Check: `a0` should equal `s1` (expected: 15363)

## Debugging Steps

### Step 1: Check if program reaches finish
- Open waveform: `gtkwave test_out/5_pdf/waveform.vcd`
- Look at PC (program counter) signal
- Verify PC reaches the `finish` label address
- If PC stops earlier, note where it stops

### Step 2: Check register values
- Monitor register `s1` (x9) - should accumulate sum in `display`
- Monitor register `a0` (x10) - should be set to `s1` in `finish`
- Monitor register `ra` (x1) - return address for function calls
- Check if `ra` is preserved across function calls

### Step 3: Check memory contents
- Memory at `base_pdf` (0x100): Should be initialized by `init`, populated by `build`
- Memory at `base_data` (0x10000): Should contain gaussian data
- Use memory dump or check in waveform

### Step 4: Check branch prediction
- Monitor `flush` signal - indicates branch misprediction
- Monitor `branch_predicted` signal - indicates if branch was predicted
- Check if BNE branches in loops are predicted correctly

### Step 5: Check for infinite loops
- If execution appears stuck, check:
  - Loop condition (BNE comparisons)
  - Register values in loop (a1, a2, t1, a4, etc.)
  - Whether loop counter is incrementing correctly

## Common Issues and Solutions

### Issue: a0 = 0
**Possible causes:**
1. Program never reached `finish` - Check PC in waveform
2. `display` function never executed - Check if JAL to display was taken
3. Loop in `display` never ran - Check if BNE branch was taken
4. Register `s1` was overwritten - Check s1 value throughout execution
5. Memory reads return 0 - Check memory initialization

**Debug:**
- Check PC to see where execution stops
- Check if `s1` register is ever set to non-zero
- Check memory at `base_pdf` to see if it's initialized

### Issue: a0 != 15363 (but not 0)
**Possible causes:**
1. Loop reads wrong number of bytes (off-by-one)
2. Memory not properly initialized
3. Sum calculation incorrect

**Debug:**
- Count loop iterations in `display`
- Verify memory contents at `base_pdf`
- Check if `s1` accumulates correctly

### Issue: Program stuck in loop
**Possible causes:**
1. Branch prediction incorrect for BNE
2. Loop condition never becomes false
3. Register not incrementing

**Debug:**
- Check branch prediction state for BNE
- Monitor loop counter register (a1, a2, etc.)
- Check if flush occurs on branch misprediction

## Waveform Analysis Tips

1. **Add these signals to waveform:**
   - `cpu.u_fetch.pc_f` - Program counter
   - `cpu.u_decode.reg_file.a0` - Register a0
   - `cpu.u_decode.reg_file.ram_array[9]` - Register s1 (x9)
   - `cpu.u_fetch.flush` - Flush signal
   - `cpu.branch_predictor.branch_predicted` - Branch prediction

2. **Look for:**
   - PC jumps to function addresses (init, build, display, finish)
   - Register s1 accumulating values
   - Flush signals indicating mispredictions
   - Memory write/read operations

3. **Key addresses to check:**
   - `main`: Start of program
   - `init`: Function to initialize PDF buffer
   - `build`: Function to build PDF
   - `display`: Function to sum PDF values
   - `finish`: Function to set a0 and wait

## Expected Values

- **After init**: Memory 0x100-0x1FF = all zeros
- **After build**: Memory 0x100-0x1FF = PDF values (varies)
- **After display**: Register s1 = 15363
- **At finish**: Register a0 = 15363

## Next Steps After Debugging

Once you identify where the test fails:
1. Document the failure point
2. Check the specific function/instruction causing the issue
3. Verify related signals (registers, memory, branch prediction)
4. Fix the root cause
5. Re-run the test to verify the fix

