// src/phase/app/pf20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47730..00D707E0, 7 functions

#include "types.h"

// 00D47730  Pf20::vf18  size=1  [class]
void Pf20::vf18(void)

{
  return;
}

// 00D47740  Pf20::vf1C  size=3  [class]
void Pf20::vf1C(void)

{
  return;
}

// 00D47750  Pf20::vf0C  size=23  [class]
void __fastcall Pf20::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x11c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d47764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xc))();
    return;
  }
  return;
}

// 00D47770  Pf20::vf08  size=51  [class]
void __fastcall Pf20::vf08(int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_4;
  
  local_4 = param_1;
  iVar2 = TelegraphNetContents::TelegraphNetContents(1,&DAT_01b7bd48);
  pcVar1 = *(code **)(*(int *)(param_1 + 0xc) + 8);
  *(int *)(param_1 + 0x11c) = iVar2;
  local_4 = *(int *)(iVar2 + 8);
  (*pcVar1)(&local_4);
  return;
}

// 00D60330  Pf20::vf14  size=211  [class]
void Pf20::vf14(void)

{
  undefined1 *puVar1;
  undefined **local_90;
  undefined1 *local_8c;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  local_8c = local_80;
  local_88 = 0;
  local_84 = 0x20;
  local_90 = lib::StaticArray<Entity*,32>::vftable;
  FUN_00a7f440(0xd013e,&local_90);
  puVar1 = local_8c;
  if (local_8c != local_8c + local_88 * 4) {
    do {
      FUN_00a805f0();
      puVar1 = puVar1 + 4;
    } while (puVar1 != local_8c + local_88 * 4);
  }
  local_8c = local_80;
  local_88 = 0;
  local_84 = 0x20;
  local_90 = lib::StaticArray<Entity*,32>::vftable;
  FUN_00a7f440(0xd013f,&local_90);
  puVar1 = local_8c;
  if (local_8c != local_8c + local_88 * 4) {
    do {
      FUN_00a805f0();
      puVar1 = puVar1 + 4;
    } while (puVar1 != local_8c + local_88 * 4);
  }
  return;
}

// 00D60410  Pf20::vf10  size=92  [class]
void __fastcall Pf20::vf10(int param_1)

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

// 00D707E0  Pf20::vf00  size=54  [class]
undefined4 * __thiscall Pf20::vf00(undefined4 *param_1,byte param_2)

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

