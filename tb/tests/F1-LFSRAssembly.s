init:
    addi s2, zero, 0xFF     # all lights on pattern
    addi a3, zero, 1        # LFSR seed
    j    rst

rst:
    addi a0, zero, 0        # lights = 0
    addi a4, zero, 0        # random delay counter
    j    on_seq

# Turn lights ON one-by-one
on_seq:
    slli t1, a0, 1
    addi a0, t1, 1
    bne  a0, s2, on_seq

    j    random_wait        # all on → wait random time

# Random delay based on LFSR value a3
random_wait:
    beq  a4, a3, rst    # when counter == LFSR, stop

    # 4-bit LFSR update in a3
    srli a2, a3, 3
    andi a2, a2, 1
    xor  a2, a2, a3
    andi a2, a2, 1
    slli a3, a3, 1
    or   a3, a3, a2
    andi a3, a3, 0xF

    addi a4, a4, 1
    j    random_wait

