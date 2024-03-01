# Instructions

| Instruction | Opcode | # of Arguments | Usage                                                                      |
| ----------- | ------ | -------------- | -------------------------------------------------------------------------- |
| ADD x,y     | 0x0    | 2              | Adds the value at memory address x and a number y, stores the result in x. |
| ADC x,y     | 0x1    | 2              | ADD instruction, but with carry.                                           |
| SUB x,y     | 0x2    | 2              | Subtracts y from the value at memory address x, stores the result in x.    |
| SUBC x,y    | 0x3    | 2              | SUB instruction, but with carry.                                           |
| MVX x       | 0x4    | 1              | Moves the value at memory address x into ix.                               |
| MVY x       | 0x5    | 1              | Same as MVY, but with iy.                                                  |
