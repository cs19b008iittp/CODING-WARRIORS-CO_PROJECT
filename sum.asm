.text
main:
addi R1, R2, 0
addi R2, R2, 0
addi R3, R3, 11
loop:
slt R4, R1, R3
beq R4, 0, 13
add R2, R2, R1
addi R1, R1, 1
j 6
.data