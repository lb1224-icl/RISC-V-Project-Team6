# PDF Test Failure Analysis

## Test Overview
The PDF test expects `a0 = 15363` but gets `a0 = 0`, indicating the program is either:
1. Not executing properly
2. Getting stuck in an infinite loop
3. Not computing the correct result

## Program Flow
1. `main` calls `init` (initializes PDF buffer to 0)
2. `main` calls `build` (builds PDF from data)
3. `main` calls `display` (sums PDF values into s1)
4. `main` jumps to `finish` (copies s1 to a0)

## Critical Issue: Loop Logic in `display` Function

```assembly
LI      a1, 0               # a1 = offset into pdf array
LI      a2, 255             # a2 = max index of pdf array
_loop3:                         # repeat
    LBU     a0, base_pdf(a1)    #   a0 = mem[base_pdf+a1)
    ADD     s1, s1, a0          #   s1 += mem[base_pdf+a1)
    ADDI    a1, a1, 1           #   incr
    BNE     a1, a2, _loop3      # until end of pdf array
```

### Loop Analysis
- Loop condition: `BNE a1, a2` means "branch if a1 != a2"
- a1 starts at 0, increments by 1 each iteration
- a2 = 255 (constant)
- Loop exits when `a1 == a2` (i.e., when a1 = 255)

### Iteration Trace
- Iteration 0: Read index 0, a1 becomes 1, check 1 != 255 (true, continue)
- Iteration 1: Read index 1, a1 becomes 2, check 2 != 255 (true, continue)
- ...
- Iteration 254: Read index 254, a1 becomes 255, check 255 != 255 (false, exit)

**Result**: Loop reads indices 0-254 (255 bytes), NOT 0-255 (256 bytes)!

## Potential Issues

### 1. Loop Off-by-One Error
The loop reads 255 bytes instead of 256. However, if the PDF array is 256 bytes (0x100), this might be intentional or a bug in the test itself.

### 2. Branch Prediction for BNE
When BNE is first encountered (no cache hit):
- `branch_en = 0` (predict not taken)
- Branch executes
- If branch is actually taken (`eq = 1` for BNE when operands differ):
  - Flush occurs (expected)
  - State initialized to `2'b10` (weakly taken)
- On next encounter, branch is predicted taken

This should work correctly after the first misprediction.

### 3. Register Preservation
- `s1` is a saved register (x9)
- Should be preserved across function calls
- If `s1 = 0` at finish, either:
  - `display` never executed
  - `display` executed but s1 was overwritten
  - Loop in `display` never ran

### 4. Memory Operations
- LBU (load byte unsigned) operations in the loop
- If memory is not initialized correctly, reads return 0
- This would cause s1 to remain 0

## Debugging Steps

1. **Verify loop executes**: Check if the loop in `display` runs at all
2. **Check memory initialization**: Verify `init` function properly initializes memory
3. **Check build function**: Verify `build` function properly populates the PDF array
4. **Verify register s1**: Check if s1 is being preserved correctly
5. **Check branch prediction**: Verify BNE branch prediction works correctly for loops

## Most Likely Cause

Given that `a0 = 0` (not a partial sum), the most likely causes are:
1. Program never reaches `finish` function (stuck in loop or crashed)
2. `display` function never executes (JAL/RET issue)
3. Memory reads return 0 (memory not initialized or wrong addresses)
4. Register s1 is not preserved (register file issue)

Since TestJalRet passes, JAL/RET should work. The issue is likely:
- Memory initialization/access problem
- Loop not executing correctly
- Register preservation issue

