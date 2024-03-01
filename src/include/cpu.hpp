#ifndef CPU_HPP
#define CPU_HPP

#include "utils.hpp"

inline u8 ram[UINT16_MAX];
inline u16 pc;
inline u8 acc;
inline u8 status;
inline u8 ix;
inline u8 iy;

static u16 get_dword() {
  const u8 upper = ram[pc++];
  const u8 lower = ram[pc++];
  const u16 combined = (upper << 8) + lower;

  return combined;
}

#endif
