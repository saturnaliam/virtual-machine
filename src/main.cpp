#include <iostream>
#include "include/cpu.hpp"

int main(void) {
  ram[0x5] = 0x4F;
  std::cout << ram[0x5] << "hi";
}
