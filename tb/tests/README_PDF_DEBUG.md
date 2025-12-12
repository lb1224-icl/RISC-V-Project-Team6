# PDF Test Debugging Files

## Quick Start

To debug the PDF test failure, run:

```bash
cd tb/tests
./run_pdf_debug.sh
```

This will:
1. Run the PDF test with enhanced debugging
2. Generate periodic status reports
3. Create diagnostic files in `test_out/5_pdf/`

## Files Created

### 1. `verify_pdf_debug.cpp`
Enhanced test that:
- Monitors `a0` register at regular intervals
- Detects if execution appears stuck
- Tracks execution phases
- Generates diagnostic report

### 2. `run_pdf_debug.sh`
Convenience script to run the debug test

### 3. `pdf_debug_guide.md`
Detailed debugging guide with:
- Step-by-step debugging instructions
- Common issues and solutions
- Waveform analysis tips
- Expected values at each checkpoint

## Output Files

After running the debug test, check:

1. **`test_out/5_pdf/diagnostic.txt`** - Diagnostic report
2. **`test_out/5_pdf/waveform.vcd`** - Waveform (open in GTKWave)
3. **`test_out/5_pdf/program.hex`** - Program memory dump
4. **`test_out/5_pdf/data.hex`** - Data memory dump

## What to Look For

### If a0 = 0:
- Check if program reaches `finish` function (check PC in waveform)
- Check if `s1` register is ever set (should accumulate sum)
- Check if memory at `base_pdf` (0x100) is initialized

### If a0 != 15363:
- Count loop iterations in `display` function
- Verify memory contents are correct
- Check if `s1` calculation is correct

### If program appears stuck:
- Check branch prediction for BNE instructions
- Verify loop counters are incrementing
- Check for infinite loops

## Next Steps

1. Run the debug test: `./run_pdf_debug.sh`
2. Review `diagnostic.txt` for summary
3. Open `waveform.vcd` in GTKWave for detailed analysis
4. Follow the guide in `pdf_debug_guide.md` for specific issues

