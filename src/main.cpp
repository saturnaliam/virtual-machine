#include <stdio.h>
#include "include/execute.hpp"
#include "include/cpu.hpp"
#include <assert.h>

void test() {
  // adding test
  ram[0x0] = 0x0;
  ram[0x1] = 0x11;
  ram[0x2] = 0x11;
  ram[0x3] = 0x2; 
  ram[0x1111] = 0x4;
  execute_instruction();
  assert(ram[0x1111] == 6);
  puts("ADD okay!");

  // mvx test
  ram[0x4] = 0x4;
  ram[0x5] = 0x11;
  ram[0x6] = 0x11;
  execute_instruction();
  assert(ix == 6);
  puts("MVX okay!");

  // mvy test
  ram[0x7] = 0x5;
  ram[0x8] = 0x11;
  ram[0x9] = 0x11;
  execute_instruction();
  assert(iy == 6);
  puts("MVY okay!");
}

int main(void) {
  test();
}
