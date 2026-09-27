// src/misc/cCheckPointDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEAEC0..00D2B180, 4 functions

#include "mgrr.h"
#include "cCheckPointDispParts.h"

// 00CEAEC0  cCheckPointDispParts::vf00  size=63  [class]
undefined4 * __thiscall cCheckPointDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEAF00  cCheckPointDispParts::vf08  size=70  [class]
void __fastcall cCheckPointDispParts::vf08(int param_1)

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
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(3);
  }
  return;
}

// 00CEAF50  cCheckPointDispParts::create  size=326  [class]
void __fastcall cCheckPointDispParts::create(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar2 = FUN_00932720();
      uVar4 = uVar2 & 0xf00;
      if (((((0xff < uVar4) && (uVar4 < 0x701)) || (uVar4 == 0xa00)) ||
          ((uVar4 == 0xc00 || (uVar4 == 0xd00)))) &&
         ((uVar2 != 0xc08 && ((uVar2 != 0xc09 && (uVar2 != 0xd21)))))) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        if (*(int *)(param_1 + 0x14) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(2);
        }
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x20),1,3);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        return;
      }
LAB_00ceb062:
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    break;
  case 1:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar3 = FUN_00cdf400(2), iVar3 != 0)) {
      FUN_00cdeec0(0);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      return;
    }
    break;
  case 2:
    iVar3 = FUN_00e03960();
    fVar1 = *(float *)(iVar3 + 0x7c) + *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x2c) = fVar1;
    if (180.0 < fVar1) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(undefined4 *)(param_1 + 0x24) = 3;
      goto LAB_00ceb062;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar3 = FUN_00cdf400(1), iVar3 != 0)) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return;
}

// 00D2B180  cCheckPointDispParts::cCheckPointDispParts  size=109  [class]
undefined4 * cCheckPointDispParts::cCheckPointDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0xb] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[3] = "cCheckPointDispParts";
    puVar1[2] = 0xb;
    uVar2 = FUN_00d29960(8);
    puVar1[5] = uVar2;
    puVar1[4] = 0;
    puVar3 = puVar1;
  }
  return puVar3;
}

