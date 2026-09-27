// src/unsorted/unit_00FC2260.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FC2260..00FC2260, 1 functions

#include "types.h"

// 00FC2260  FUN_00fc2260  size=483  [run]
void __thiscall FUN_00fc2260(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0xf9c) != (char)param_2) {
    *(char *)(param_1 + 0xf9c) = (char)param_2;
    uVar3 = 3;
    iVar2 = DAT_01f21e38;
    while (iVar2 != 0) {
      FUN_00fc0330(param_2);
      uVar3 = uVar3 + 1;
      iVar2 = (&DAT_01f21bf8)[(uVar3 & 0xffff) * 0x30];
    }
    bVar1 = *(byte *)(param_1 + 0xf9c);
    if ((DAT_01f72900 != bVar1) &&
       (DAT_01f728f0 = DAT_01f728f0 ^ ((uint)bVar1 << 0x18 ^ DAT_01f728f0) & 0x1f000000,
       DAT_01f72900 = bVar1, bVar1 != 1)) {
      DAT_01f728f0 = DAT_01f728f0 & 0xfffff3f3 | 0x303;
    }
    bVar1 = *(byte *)(param_1 + 0xf9c);
    if ((DAT_01f72948 != bVar1) &&
       (DAT_01f72938 = DAT_01f72938 ^ ((uint)bVar1 << 0x18 ^ DAT_01f72938) & 0x1f000000,
       DAT_01f72948 = bVar1, bVar1 != 1)) {
      DAT_01f72938 = DAT_01f72938 & 0xfffff3f3 | 0x303;
    }
    bVar1 = *(byte *)(param_1 + 0xf9c);
    if ((DAT_01f72990 != bVar1) &&
       (DAT_01f72980 = DAT_01f72980 ^ ((uint)bVar1 << 0x18 ^ DAT_01f72980) & 0x1f000000,
       DAT_01f72990 = bVar1, bVar1 != 1)) {
      DAT_01f72980 = DAT_01f72980 & 0xfffff3f3 | 0x303;
    }
    bVar1 = *(byte *)(param_1 + 0xf9c);
    if ((DAT_01f729d8 != bVar1) &&
       (DAT_01f729c8 = DAT_01f729c8 ^ ((uint)bVar1 << 0x18 ^ DAT_01f729c8) & 0x1f000000,
       DAT_01f729d8 = bVar1, bVar1 != 1)) {
      DAT_01f729c8 = DAT_01f729c8 & 0xfffff3f3 | 0x303;
    }
    bVar1 = *(byte *)(param_1 + 0xf9c);
    if ((DAT_01f72a20 != bVar1) &&
       (DAT_01f72a10 = DAT_01f72a10 ^ ((uint)bVar1 << 0x18 ^ DAT_01f72a10) & 0x1f000000,
       DAT_01f72a20 = bVar1, bVar1 != 1)) {
      DAT_01f72a10 = DAT_01f72a10 & 0xfffff3f3 | 0x303;
    }
    bVar1 = *(byte *)(param_1 + 0xf9c);
    if ((DAT_01f72a68 != bVar1) &&
       (DAT_01f72a58 = DAT_01f72a58 ^ ((uint)bVar1 << 0x18 ^ DAT_01f72a58) & 0x1f000000,
       DAT_01f72a68 = bVar1, bVar1 != 1)) {
      DAT_01f72a58 = DAT_01f72a58 & 0xfffff3f3 | 0x303;
    }
  }
  return;
}

