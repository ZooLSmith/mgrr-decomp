// src/unsorted/unit_009D21F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D21F0..009D23F0, 4 functions

#include "mgrr.h"

// 009D21F0  FUN_009d21f0  size=128  [run]
undefined4 __fastcall FUN_009d21f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *local_4;
  
  local_4 = (int *)(param_1 + 0x78);
  piVar4 = &DAT_0188f818;
  do {
    iVar3 = 0;
    piVar5 = local_4;
    piVar6 = piVar4;
    do {
      if (*piVar5 != 0) {
        return 0;
      }
      piVar1 = (int *)(*(code *)piVar6[-1])(&DAT_01b7f3f0);
      *piVar5 = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      iVar2 = (**(code **)(*piVar1 + 8))(piVar6[-2]);
      if (iVar2 == 0) {
        return 0;
      }
      piVar5[-1] = *piVar6;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0x1f;
      piVar6 = piVar6 + 3;
    } while (iVar3 < 6);
    local_4 = local_4 + 0xba;
    piVar4 = piVar4 + 0x12;
    if (0x188f8a7 < (int)piVar4) {
      return 1;
    }
  } while( true );
}

// 009D2270  FUN_009d2270  size=41  [run]
void __fastcall FUN_009d2270(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 2;
  do {
    iVar2 = 6;
    do {
      (**(code **)(*param_1 + 0x10))();
      param_1 = param_1 + 0x1f;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 009D22A0  FUN_009d22a0  size=48  [run]
void FUN_009d22a0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = Fw::StringCopyCat(param_1);
  uVar2 = Fw::StringCopyCat_2(param_1);
  FUN_00fa01a0(uVar1,uVar2);
  return;
}

// 009D23F0  FUN_009d23f0  size=22  [run]
void __fastcall FUN_009d23f0(int param_1)

{
  FUN_00f7fcb0();
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return;
}

