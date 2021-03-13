array : 7 8 4 1 5
addi R10, R10, 4
addi R4, R4, 1
sub R8, R8, R4
addi R31, R31, 0
sub R9, R31, R4
beq R8, R10, 28
addi R8, R8, 1
j 10
addi R9, R9, 1   
sub R11, R10, R8  
beq R9, R11, 6
addi R12, R9, 1
lw R13, R9
lw R14, R12
slt R16, R13, R14
beq R16, R31, 19
j 10
addi R15, R13, 0     
addi R13, R14, 0
addi R14, R15, 0
sw R13, R9
sw R14, R12
j 10

