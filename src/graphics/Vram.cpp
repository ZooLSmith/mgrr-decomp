// src/graphics/Vram.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A1D7B0..00A1D7B0, 1 functions

#include "types.h"

// 00A1D7B0  Vram::transfarVramToMainMemory  size=59  [class]
void Vram::transfarVramToMainMemory(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(short *)((int)&DAT_01b7b6f0 + uVar1) == 1) {
      FUN_00dd5650(&DAT_0165dc5c);
    }
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0xa0);
  _memset(&DAT_01b7b6f0,0,0xa0);
  return;
}

