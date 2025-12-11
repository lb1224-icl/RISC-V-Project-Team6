.text
.globl main
main:
    # MUL: 7 * -3 = -21
    li t0, 7
    li t1, -3
    mul t2, t0, t1

    # MULH (signed × signed): 0x7fffffff * 0x7fffffff -> upper = 0x3fffffff
    li t3, 0x7fffffff
    li t4, 0x7fffffff
    mulh t5, t3, t4

    # MULHSU (signed × unsigned): -2 * 0x80000000 -> upper = 0xffffffff
    li t6, -2
    li s2, 0x80000000
    mulhsu s0, t6, s2

    # MULHU (unsigned × unsigned): 0xffffffff * 2 -> upper = 1
    li s1, -1
    li s2, 2
    mulhu s3, s1, s2

    # Accumulate all results into a0
    add a0, t2, t5          # -21 + 0x3fffffff
    add a0, a0, s0          # + 0xffffffff
    add a0, a0, s3          # + 1
    # Expected a0 = 0x3fffffea (1073741802)

finish:
    bne a0, zero, finish
