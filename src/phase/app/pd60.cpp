// src/phase/app/pd60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4BD20..00D6E250, 7 functions

#include "types.h"

// 00D4BD20  cPd60::vf14  size=18  [class]
void __fastcall cPd60::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x11c) != 0) {
    lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_4();
  }
  return;
}

// 00D4BD40  cPd60::vf1C  size=3  [class]
void cPd60::vf1C(void)

{
  return;
}

// 00D4BD50  cPd60::vf08  size=96  [class]
void __fastcall cPd60::vf08(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4;
  
  local_4 = param_1;
  iVar2 = TelegraphNetContents::TelegraphNetContents(1,&DAT_01b7bd48);
  pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 8);
  *(int *)(param_1 + 0x11c) = iVar2;
  local_4 = *(int *)(iVar2 + 8);
  (*pcVar1)(&local_4);
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  uVar3 = FUN_00e03ea0("PD60_KHAMSIN");
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  uVar3 = FUN_00e03ea0("PD60_RESULT");
  *(undefined4 *)(param_1 + 0x128) = uVar3;
  return;
}

// 00D4BDB0  cPd60::vf0C  size=10  [class]
void cPd60::vf0C(void)

{
  FUN_00cad2a0();
  return;
}

// 00D56D70  cPd60::vf18  size=112  [class]
void __fastcall cPd60::vf18(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x120) == -1) {
    iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x124),1);
    if (iVar1 != 0) {
      iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0x128),1);
      if (iVar1 == 0) {
        iVar1 = FUN_00c19c00(0,0,0);
        if (iVar1 != 0) {
          iVar1 = FUN_00a7c8a0();
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4b0) == 0x20130)) {
            *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar1 + 0x83c);
          }
        }
      }
    }
  }
  return;
}

// 00D65B30  cPd60::vf10  size=92  [class]
void __fastcall cPd60::vf10(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x11c) + 8);
    FUN_008dc7e0(iVar2);
    piVar3 = *(int **)(param_1 + 0x10);
    piVar1 = piVar3 + *(int *)(param_1 + 0x14);
    for (; (piVar3 != piVar1 && (*piVar3 != iVar2)); piVar3 = piVar3 + 1) {
    }
    if ((piVar3 != (int *)0x0) &&
       (piVar3 != (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4))) {
      FUN_00c3e0f0(piVar3);
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  return;
}

// 00D6E250  cPd60::vf00  size=54  [class]
undefined4 * __thiscall cPd60::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

