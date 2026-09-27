// src/unsorted/unit_009A76D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009A76D0..009A76D0, 1 functions

#include "mgrr.h"

// 009A76D0  FUN_009a76d0  size=236  [run]
void __fastcall FUN_009a76d0(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  int local_8;
  int local_4;
  
  iVar1 = 0;
  local_8 = 0;
  pfVar2 = (float *)&DAT_01b6efe0;
  local_4 = 0x14;
  iVar3 = 0;
  do {
    if (*pfVar2 != 0.0) {
      iVar1 = iVar1 + 1;
      fVar4 = (float10)cXmlBinary::cXmlBinary_61(iVar3,1);
      if ((float10)*pfVar2 < fVar4) {
        local_8 = local_8 + 1;
      }
    }
    iVar3 = iVar3 + 1;
    pfVar2 = pfVar2 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  if (iVar1 == 0x14) {
    FUN_009c6540(0x30);
  }
  if (local_8 == 0x14) {
    FUN_009c6540(0x31);
    *(undefined1 *)(param_1 + 0x5a3) = 1;
  }
  iVar1 = 0;
  if (*(short *)(param_1 + 0x5c8) != 0) {
    local_8 = 0;
    iVar3 = 0x19;
    pfVar2 = (float *)&DAT_01b6f120;
    local_4 = 0x1e;
    do {
      if (*pfVar2 != 0.0) {
        iVar1 = iVar1 + 1;
        fVar4 = (float10)cXmlBinary::cXmlBinary_61(iVar3,1);
        if ((float10)*pfVar2 < fVar4) {
          local_8 = local_8 + 1;
        }
      }
      pfVar2 = pfVar2 + 4;
      iVar3 = iVar3 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    if (iVar1 == 0x1e) {
      FUN_009c6540(0x32);
    }
    if (local_8 == 0x1e) {
      FUN_009c6540(0x33);
    }
  }
  return;
}

