#include "div_tb.h"
#include <cstdint>
#include <iostream>

struct TestCase {
    uint32_t numerator;
    uint32_t denominator;
    uint32_t ctrl; // 0=DIV, 1=DIVU, 2=REM, 3=REMU
    uint32_t expected;
    const char* name;
};

TEST_F(div_testbench, BasicVectorTests) {
    const TestCase tests[] = {
        // Signed DIV
        { 10u,           2u,           0u, 5u,           "DIV 10/2"   },
        { (uint32_t)-15, 3u,           0u, (uint32_t)-5, "DIV -15/3"  },
        { 7u,            2u,           0u, 3u,           "DIV 7/2"    },
        { (uint32_t)-16, (uint32_t)-4, 0u, 4u,           "DIV -16/-4" },

        // Unsigned DIVU
        { 10u,         2u,  1u, 5u,          "DIVU 10/2"         },
        { 0xFFFFFFFFu, 2u,  1u, 0x7FFFFFFFu, "DIVU UINT32_MAX/2" },
        { 100u,        10u, 1u, 10u,         "DIVU 100/10"       },

        // Signed REM
        { 10u,           3u, 2u, 1u,           "REM 10 % 3"  },
        { (uint32_t)-10, 3u, 2u, (uint32_t)-1, "REM -10 % 3" },
        { 7u,            2u, 2u, 1u,           "REM 7 % 2"   },

        // Unsigned REMU
        { 10u,         3u,  3u, 1u, "REMU 10 % 3"        },
        { 0xFFFFFFFFu, 10u, 3u, 5u, "REMU UINT32_MAX%10" },
        { 100u,        10u, 3u, 0u, "REMU 100 % 10"      }
    };

    for (const auto& t : tests) {
        uint32_t got = run_div(t.numerator, t.denominator, t.ctrl, t.name);

        if (got == t.expected) {
            std::cout << "PASS: " << t.name
                      << " got=0x" << std::hex << got << std::dec << "\n";
        } else {
            std::cout << "FAIL: " << t.name
                      << " got=0x" << std::hex << got
                      << " expected=0x" << t.expected << std::dec << "\n";
        }

        EXPECT_EQ(got, t.expected) << "Failed: " << t.name;
    }
}
