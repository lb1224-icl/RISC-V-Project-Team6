init:
    addi s2, zero, 0xFF     # all lights on pattern
    addi s3, zero, 3        # delay length (tune this)
    addi a3, zero, 1        # LFSR seed
    j    rst

rst:
    addi a0, zero, 0        # lights = 0
    addi a4, zero, 0        # random delay counter
    j    on_seq

# Turn lights ON one-by-one with delay between each
on_seq:
    jal  ra, delay          # slow it down
    slli t1, a0, 1
    addi a0, t1, 1
    bne  a0, s2, on_seq

    j    random_wait

random_wait:
    # generate the random number ONCE
    # LFSR update
    srli a2, a3, 3
    andi a2, a2, 1
    xor  a2, a2, a3
    andi a2, a2, 1
    slli a3, a3, 1
    or   a3, a3, a2
    andi a3, a3, 0xF    # now a3 is the random delay target

    addi a4, zero, 0   # reset counter

    j    random_loop

random_loop:
    beq  a4, a3, rst   # stop when counter == random number

    jal  ra, delay     # delay one tick
    addi a4, a4, 1     # increment counter

    j random_loop



# Simple delay loop: runs s3 iterations
delay:
    addi a1, a1, 1
    bne  a1, s3, delay
    addi a1, zero, 0
    ret
