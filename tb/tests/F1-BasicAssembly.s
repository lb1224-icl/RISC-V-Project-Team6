init:
    addi s1, zero, 1        # trigger value
    addi s2, zero, 0xFF     # all lights ON target
    j    rst

rst:
    addi a0, zero, 0        # lights = 0
    addi t0, zero, 0        # trigger = 0
    j    mainloop

mainloop:
    beq  t0, s1, fsm        # wait for trigger
    j    mainloop

fsm:
    slli t1, a0, 1          # shift
    addi a0, t1, 1          # add new '1'
    bne  a0, s2, fsm        # stop when a0 == 0xFF
    j    rst
