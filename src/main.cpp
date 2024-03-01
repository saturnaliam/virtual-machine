#include <stdio.h>
#include "include/execute.hpp"
#include "include/cpu.hpp"

int main(void) {
  ram[0] = 0x0;
  ram[1] = 0xFF;
  ram[2] = 0x08;
  ram[3] = 0x1;
  ram[0xFF08] = 0xFF;

  execute_instruction();

  printf("%x", ram[0xFF08]);
}
