init:
    addi s2, zero, 0xFF     # all lights on pattern
    j    rst

rst:
    addi a0, zero, 0        # lights = 0
    j    on_seq

# Turn lights ON one-by-one (single cycle per step)
on_seq:
    slli t1, a0, 1
    addi a0, t1, 1          # add next light (fill from LSB up)
    bne  a0, s2, on_seq     # loop until all bits are 1

    # all lights on → turn them all off instantly
    j    rst
