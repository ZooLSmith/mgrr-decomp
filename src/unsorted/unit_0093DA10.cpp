// src/unsorted/unit_0093DA10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093DA10..0093DDA0, 11 functions

#include "mgrr.h"

// 0093DA10  FUN_0093da10  size=213  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0093da10(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = 0;
  if ((*(int *)(param_1 + 0x898) != 0) && (DAT_01dc5564 + _DAT_01dc555c < 1)) {
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  if (0.0 < *(float *)(param_1 + 0x89c)) {
    if (0 < *(int *)(param_1 + 0x8a0)) {
      do {
        piVar2 = (int *)FUN_00c1c650();
        (**(code **)(*piVar2 + 0x28))();
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x8a0));
    }
    fVar4 = (float10)FUN_00e049b0();
    fVar4 = (float10)*(float *)(param_1 + 0x89c) - fVar4;
    *(float *)(param_1 + 0x89c) = (float)fVar4;
    if (fVar4 < (float10)0) {
      *(float *)(param_1 + 0x89c) = (float)(float10)0;
      *(undefined4 *)(param_1 + 0x8a0) = 1;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x8a4)) {
    fVar1 = *(float *)(param_1 + 0x8a4) - 1.0;
    *(float *)(param_1 + 0x8a4) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)(param_1 + 0x8a4) = 0xbf800000;
      _DAT_01dc5560 = 100;
      _DAT_01dc5568 = 100;
      return;
    }
  }
  return;
}

// 0093DB40  FUN_0093db40  size=53  [run]
undefined4 __thiscall FUN_0093db40(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  while ((iVar1 = *(int *)((uint)bVar2 * 0xb0 + 0x54 + param_1), iVar1 == -1 || (iVar1 != param_2)))
  {
    bVar2 = bVar2 + 1;
    if (0xb < bVar2) {
      return 0;
    }
  }
  return 1;
}

// 0093DB80  FUN_0093db80  size=11  [run]
void __fastcall FUN_0093db80(int param_1)

{
  *(undefined4 *)(param_1 + 0x898) = 1;
  return;
}

// 0093DB90  FUN_0093db90  size=53  [run]
undefined4 __thiscall FUN_0093db90(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    if (*(int *)((uint)bVar1 * 0xb0 + 0x54 + param_1) == param_2) {
      return *(undefined4 *)((bVar1 + 1) * 0xb0 + param_1);
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0xc);
  return 0;
}

// 0093DBD0  FUN_0093dbd0  size=70  [run]
undefined4 __thiscall FUN_0093dbd0(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    if (*(int *)((uint)bVar1 * 0xb0 + 0x54 + param_1) == param_2) {
      if (*(float *)((uint)bVar1 * 0xb0 + 0xc0 + param_1) <= 0.0) {
        return 0;
      }
      return 1;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0xc);
  return 0;
}

// 0093DC20  FUN_0093dc20  size=41  [run]
void __thiscall FUN_0093dc20(int param_1,int param_2)

{
  if ((DAT_01bea060 & 0x2000000) == 0) {
    *(undefined4 *)(param_1 + 0x89c) = 0x3f800000;
    if (*(int *)(param_1 + 0x8a0) < param_2) {
      *(int *)(param_1 + 0x8a0) = param_2;
    }
  }
  return;
}

// 0093DC50  FUN_0093dc50  size=28  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0093dc50(int param_1)

{
  *(undefined4 *)(param_1 + 0x8a4) = 0x40a00000;
  _DAT_01dc5560 = 0x80;
  _DAT_01dc5568 = 0x80;
  return;
}

// 0093DC70  FUN_0093dc70  size=42  [run]
void __thiscall FUN_0093dc70(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (-1 < param_2) {
    uVar2 = 0;
    while (-1 < *(int *)(param_1 + uVar2 * 4)) {
      bVar1 = (char)uVar2 + 1;
      uVar2 = (uint)bVar1;
      if (0xb < bVar1) {
        return;
      }
    }
    *(int *)(param_1 + uVar2 * 4) = param_2;
  }
  return;
}

// 0093DCB0  FUN_0093dcb0  size=12  [run]
undefined4 __fastcall FUN_0093dcb0(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 0093DCD0  FUN_0093dcd0  size=100  [run]
undefined4 FUN_0093dcd0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d467a0();
  if ((((((iVar1 == 0) || (*(int *)(*param_1 + 0x24) != 0x42131)) &&
        (iVar1 = *(int *)(*param_1 + 0x24), iVar1 != 0x42000)) &&
       ((iVar1 != 0x42005 && (iVar1 != 0x42070)))) &&
      ((iVar1 != 0x42300 && ((iVar1 != 0x42380 && (iVar1 != 0x42220)))))) && (iVar1 != 0x423a0)) {
    return 0;
  }
  return 1;
}

// 0093DDA0  FUN_0093dda0  size=10  [run]
void __thiscall FUN_0093dda0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

