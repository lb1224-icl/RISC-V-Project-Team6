.text
.globl main
.equ base_data, 0x10000    # matches your PDF test mapping
main:
    li t0, base_data       # t0 = &data[0] (0x10000)
    li t1, 1000            # t1 = numerator = 1000

    # Load from data memory (first access to this cache line)
    # This should cause a D-cache miss
    lbu t2, 0(t0)          # t2 = mem[base_data] = 0x55 = 85

    # Immediately use t2 as denominator (load-use hazard)
    div t3, t1, t2         # t3 = 1000 / 85 = 11  (trunc toward 0)
    rem t4, t1, t2         # t4 = 1000 % 85 = 65

    # a0 = quotient + remainder
    add a0, t3, t4         # a0 = 11 + 65 = 76

    # a0 += loaded denominator (another forwarding path: from t2)
    add a0, a0, t2         # a0 = 76 + 85 = 161

finish:
    beq x0, x0, finish     # infinite loop
