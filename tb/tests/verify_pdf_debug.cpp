#include <cstdlib>
#include <utility>
#include <iostream>
#include <fstream>
#include <iomanip>

#include "cpu_testbench.h"

#define CYCLES 10000
#define CHECK_INTERVAL 1000  // Check state every N cycles

// Helper function to read register value from CPU
// Note: This assumes we can access internal signals - may need adjustment
uint32_t readRegister(Vdut* top, int reg_num) {
    // This is a placeholder - actual implementation depends on CPU interface
    // For now, we'll monitor a0 which is exposed
    return top->a0;
}

// Helper to check if we're at a specific PC range (approximate)
bool checkPCInRange(Vdut* top, uint32_t min_pc, uint32_t max_pc) {
    // PC is not directly exposed, so we'll use other heuristics
    // For now, return true - would need to add PC to CPU interface
    return true;
}

TEST_F(CpuTestbench, TestPdfDebug)
{
    setupTest("5_pdf");
    setData("reference/gaussian.mem");
    initSimulation();
    
    std::cout << "\n=== PDF Test Debug Mode ===\n";
    std::cout << "Starting simulation...\n";
    
    uint32_t last_a0 = 0;
    uint32_t cycles_since_change = 0;
    bool reached_finish = false;
    uint32_t max_cycles = CYCLES * 100;
    uint32_t check_count = 0;
    
    // Track execution phases
    enum Phase {
        PHASE_START,
        PHASE_AFTER_INIT,
        PHASE_AFTER_BUILD,
        PHASE_AFTER_DISPLAY,
        PHASE_FINISH,
        PHASE_STUCK
    };
    Phase current_phase = PHASE_START;
    
    for (uint32_t cycle = 0; cycle < max_cycles; cycle++) {
        runSimulation(1);
        
        uint32_t current_a0 = top_->a0;
        
        // Check for phase transitions based on a0 value
        // This is a heuristic - actual implementation would check PC
        if (current_a0 != last_a0) {
            cycles_since_change = 0;
            last_a0 = current_a0;
            
            // If a0 changes to non-zero, we might have reached finish
            if (current_a0 != 0 && !reached_finish) {
                std::cout << "Cycle " << cycle << ": a0 changed to " << current_a0 
                          << " (possible finish reached)\n";
                reached_finish = true;
                current_phase = PHASE_FINISH;
            }
        } else {
            cycles_since_change++;
        }
        
        // Periodic status reports
        if (cycle % CHECK_INTERVAL == 0) {
            check_count++;
            std::cout << "\n--- Checkpoint " << check_count << " at cycle " << cycle << " ---\n";
            std::cout << "  a0 = " << std::dec << current_a0 
                      << " (0x" << std::hex << std::setw(8) << std::setfill('0') 
                      << current_a0 << std::dec << ")\n";
            std::cout << "  Cycles since last a0 change: " << cycles_since_change << "\n";
            std::cout << "  Current phase: ";
            switch(current_phase) {
                case PHASE_START: std::cout << "START"; break;
                case PHASE_AFTER_INIT: std::cout << "AFTER_INIT"; break;
                case PHASE_AFTER_BUILD: std::cout << "AFTER_BUILD"; break;
                case PHASE_AFTER_DISPLAY: std::cout << "AFTER_DISPLAY"; break;
                case PHASE_FINISH: std::cout << "FINISH"; break;
                case PHASE_STUCK: std::cout << "STUCK"; break;
            }
            std::cout << "\n";
            
            // If we've been stuck for a long time, mark as stuck
            if (cycles_since_change > CHECK_INTERVAL * 10 && current_a0 == 0) {
                current_phase = PHASE_STUCK;
                std::cout << "  WARNING: Execution appears stuck!\n";
            }
        }
        
        // Early exit if we detect we're in the finish wait loop with correct value
        if (reached_finish && current_a0 == 15363) {
            std::cout << "\n=== SUCCESS: Reached finish with correct value ===\n";
            std::cout << "Final a0 = " << current_a0 << " at cycle " << cycle << "\n";
            break;
        }
        
        // Early exit if we detect we're stuck in wait loop with wrong value
        if (reached_finish && current_a0 != 0 && current_a0 != 15363) {
            std::cout << "\n=== ERROR: Reached finish with wrong value ===\n";
            std::cout << "Final a0 = " << current_a0 << " (expected 15363) at cycle " << cycle << "\n";
            break;
        }
    }
    
    std::cout << "\n=== Final Status ===\n";
    std::cout << "Total cycles: " << max_cycles << "\n";
    std::cout << "Final a0: " << top_->a0 << " (expected: 15363)\n";
    std::cout << "Reached finish: " << (reached_finish ? "YES" : "NO") << "\n";
    
    if (top_->a0 == 0) {
        std::cout << "\n=== DIAGNOSIS ===\n";
        std::cout << "a0 is still 0. Possible causes:\n";
        std::cout << "1. Program never reached 'finish' function\n";
        std::cout << "2. 'display' function never executed or loop never ran\n";
        std::cout << "3. Register s1 was not preserved (overwritten)\n";
        std::cout << "4. Memory reads returned 0 (memory not initialized)\n";
        std::cout << "5. Program stuck in infinite loop before finish\n";
        std::cout << "\nCheck the waveform file: test_out/5_pdf/waveform.vcd\n";
    } else if (top_->a0 != 15363) {
        std::cout << "\n=== DIAGNOSIS ===\n";
        std::cout << "a0 has wrong value. Possible causes:\n";
        std::cout << "1. Loop in 'display' didn't iterate correctly\n";
        std::cout << "2. Memory not properly initialized by 'init' or 'build'\n";
        std::cout << "3. Off-by-one error in loop (reads 255 instead of 256 bytes)\n";
        std::cout << "4. Register s1 calculation incorrect\n";
    }
    
    // Write diagnostic info to file
    std::ofstream diag("test_out/5_pdf/diagnostic.txt");
    diag << "PDF Test Diagnostic Report\n";
    diag << "==========================\n\n";
    diag << "Final a0: " << top_->a0 << " (expected: 15363)\n";
    diag << "Reached finish: " << (reached_finish ? "YES" : "NO") << "\n";
    diag << "Total cycles: " << max_cycles << "\n";
    diag << "Cycles since last a0 change: " << cycles_since_change << "\n\n";
    diag << "Next steps:\n";
    diag << "1. Open waveform.vcd in GTKWave\n";
    diag << "2. Check PC value to see where execution stops\n";
    diag << "3. Check register s1 (x9) value\n";
    diag << "4. Check memory at base_pdf (0x100) to verify initialization\n";
    diag << "5. Check memory at base_data (0x10000) to verify data loaded\n";
    diag.close();
    
    EXPECT_EQ(top_->a0, 15363);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}

