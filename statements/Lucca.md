F1 assembly code:
Added assembly code for F1 basic (no random delay)
Added random delay to assembly
Added delay per cycle for F1 as too fast
Changed this to little endian machine code
Debug at end as realised all jumps were not by bytes but words

Memory:
Converted instr_mem to byte addressed
Created ram (data_memory) - byte addressed

Single cycle come together:
Worked on integration between all parts on single cycle (learnt should have done more frequent meetings as littered with name differences)
Made cpu.sv the top file to bring together all stages
(Lot of time debugging as missing certain components e.g. mux for RET instruction)
Tested against all other tests given and debugged specific areas

Cache:
Created direct map cached
Changed to 2-way set associative
Set up fsm to handle ram vs cache

