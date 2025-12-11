.text
.globl main
main:
    # Signed division/remainder: -100 / 7 = -14 rem -2
    li t0, -100
    li t1, 7
    div t2, t0, t1          # t2 = -14
    rem t3, t0, t1          # t3 = -2

    # Unsigned division/remainder: 0xffffffff / 3 = 0x55555555 rem 0
    li t4, -1
    li t5, 3
    divu t6, t4, t5         # t6 = 0x55555555
    remu s2, t4, t5

    # Accumulate into a0
    add a0, t2, t3
    add a0, a0, t6
    add a0, a0, s2
    # expected a0 = 1431655749

finish:
    bne a0, zero, finish
