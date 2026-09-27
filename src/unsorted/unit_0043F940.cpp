// src/unsorted/unit_0043F940.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043F940..0043FA90, 4 functions

#include "types.h"

// 0043F940  FUN_0043f940  size=97  [run]
int __thiscall FUN_0043f940(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar3) + 0x40);
      if (iVar1 != 0) {
        iVar1 = FUN_00fdbbd0(iVar1,param_2);
        if (iVar1 != 0) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar2 < *(short *)(param_1 + 0x324));
  }
  return -1;
}

// 0043F9B0  FUN_0043f9b0  size=119  [run]
int __thiscall FUN_0043f9b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
    return 0;
  }
  iVar2 = 0;
  while ((iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar2) + 0x40), iVar1 == 0 ||
         (iVar1 = FUN_00fdbbd0(iVar1,param_2), iVar1 == 0))) {
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x70;
    if (*(short *)(param_1 + 0x324) <= iVar3) {
      return 0;
    }
  }
  if (iVar3 == -1) {
    return 0;
  }
  return iVar3 * 0x70 + *(int *)(param_1 + 800);
}

// 0043FA60  FUN_0043fa60  size=42  [run]
undefined4 __thiscall FUN_0043fa60(int param_1,int param_2)

{
  if ((param_2 <= (int)(uint)*(byte *)(param_1 + 0xdae)) &&
     ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
    return 1;
  }
  return 0;
}

// 0043FA90  FUN_0043fa90  size=19  [run]
void __fastcall FUN_0043fa90(int param_1)

{
  if ((*(byte *)(param_1 + 0xdb4) & 8) == 0) {
    *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 1;
  }
  return;
}

