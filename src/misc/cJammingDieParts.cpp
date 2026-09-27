// src/misc/cJammingDieParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE3A00..00D31190, 5 functions

#include "mgrr.h"
#include "cJammingDieParts.h"

// 00CE3A00  cJammingDieParts::vf00  size=63  [class]
undefined4 * __thiscall cJammingDieParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEF5C0  cJammingDieParts::vf08  size=52  [class]
void __fastcall cJammingDieParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 != 0) {
    FUN_00cdeec0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CEF600  cJammingDieParts::create  size=137  [class]
void __fastcall cJammingDieParts::create(int param_1)

{
  float fVar1;
  int extraout_EDX;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    fVar1 = *(float *)(param_1 + 0x24) + 1.0;
    *(float *)(param_1 + 0x24) = fVar1;
    if (30.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x24) = 0x41f00000;
    }
    FUN_00cd5090(*(float *)(param_1 + 0x24) * 0.033333335);
    fVar1 = *(float *)(extraout_EDX + 0x24);
    if (!NAN(fVar1) && 30.0 < fVar1 != (fVar1 == 30.0)) {
      *(int *)(extraout_EDX + 0x20) = *(int *)(extraout_EDX + 0x20) + 1;
    }
  }
  else if (*(int *)(param_1 + 0x20) == 1) {
    fVar1 = *(float *)(param_1 + 0x24) + 1.0;
    *(float *)(param_1 + 0x24) = fVar1;
    if (180.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x24) = 0x43340000;
    }
    fVar1 = *(float *)(param_1 + 0x24);
    if (!NAN(fVar1) && 180.0 < fVar1 != (fVar1 == 180.0)) {
      *(undefined4 *)(param_1 + 0x20) = 2;
      return;
    }
  }
  return;
}

// 00D31130  cJammingDieParts::cJammingDieParts  size=93  [class]
undefined4 * cJammingDieParts::cJammingDieParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x28,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[9] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[8] = 0;
    puVar1[3] = "cJammingDieParts";
    puVar1[2] = 5;
    uVar2 = FUN_00d29960(0x28);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D31190  FUN_00d31190  size=103  [callgraph]
void __fastcall FUN_00d31190(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_01dc0ec0 == 0) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else if (*(int *)(param_1 + 4) == 0) {
    uVar1 = cJammingDieParts::cJammingDieParts();
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    DAT_01dc0ec4 = (uint)(*(int *)(*(int *)(param_1 + 4) + 0x20) == 2);
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    DAT_01dc0ec0 = 0;
    return;
  }
  DAT_01dc0ec4 = 0;
  DAT_01dc0ec0 = 0;
  return;
}

