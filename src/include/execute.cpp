#include "execute.hpp"

void execute_instruction() {
  const u8 instruction = ram[pc++];

  switch (instruction) {
    case 0x0: { // ADD x,y
      const u16 x = get_dword();
      const u8 x_value = ram[x]; // gets the value stored at x
      const u8 y = ram[pc++]; // stores the value of y
      
      ram[x] += y;
      break;
    }

    case 0x1: // ADC x,y
      break;
    case 0x2: // SUB x,y
      break;
    case 0x3: // SUBC x,y
      break;
    case 0x4: // MVR x,y
      break;
  }
}
