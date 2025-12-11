.text
.globl main
main:
    li t0, 7
    li t1, -3
    mul t2, t0, t1          # t2 = -21

    li t3, 0x10000
    li t4, 0x20000
    mulh t5, t3, t4         # t5 = upper 32 bits of 0x200000000 (=2)

    li s0, -100
    li s1, 7
    div s2, s0, s1          # s2 = -14
    rem s3, s0, s1          # s3 = -2

    li s4, -1
    li s5, 3
    divu s6, s4, s5         # s6 = 0x55555555
    remu s7, s4, s5         # s7 = 0

    add a0, t2, t5          # accumulate results
    add a0, a0, s2
    add a0, a0, s3
    add a0, a0, s6
    add a0, a0, s7          # a0 = 1431655730

finish:                     # expected result is 1431655730
    bne a0, zero, finish    # loop forever
