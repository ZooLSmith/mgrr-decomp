// src/misc/cStealthKillTargetParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF5F0..00D34290, 5 functions

#include "mgrr.h"
#include "cStealthKillTargetParts.h"

// 00CBF5F0  cStealthKillTargetParts::vf08  size=1  [class]
void cStealthKillTargetParts::vf08(void)

{
  return;
}

// 00CDEB00  cStealthKillTargetParts::vf00  size=63  [class]
undefined4 * __thiscall cStealthKillTargetParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CF2240  cStealthKillTargetParts::create  size=299  [class]
void __fastcall cStealthKillTargetParts::create(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_20 [28];
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_00cf2301;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(2);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  else {
    if (iVar3 != 1) {
      if (((iVar3 == 2) && (*(int *)(param_1 + 0x18) != 0)) && (iVar3 = FUN_00cdf400(1), iVar3 != 0)
         ) {
        FUN_00cdeec0(3);
        if (*(int *)(param_1 + 0x34) == 0) {
          if (*(int *)(param_1 + 0x3c) != 0) {
            *(undefined4 *)(param_1 + 0x30) = 1;
            *(undefined4 *)(param_1 + 0x3c) = 0;
          }
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x38) = 1;
          *(undefined4 *)(param_1 + 0x3c) = 0;
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
      }
      goto LAB_00cf2301;
    }
    if (((*(int *)(param_1 + 0x3c) == 0 && *(int *)(param_1 + 0x34) == 0) ||
        (*(int *)(param_1 + 0x18) == 0)) || (iVar3 = FUN_00cdf400(0), iVar3 == 0))
    goto LAB_00cf2301;
    FUN_00cdeec0(1);
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
LAB_00cf2301:
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar3 = FUN_00d9fa80(local_20,(undefined4 *)(param_1 + 0x20));
    if (iVar3 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x18) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = uVar1;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = uVar2;
      }
      if (*(int *)(param_1 + 0x14) == 0) {
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      return;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00D34220  cStealthKillTargetParts::cStealthKillTargetParts  size=100  [class]
undefined4 * cStealthKillTargetParts::cStealthKillTargetParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[7] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[3] = "cStealthKillTargetParts";
    puVar1[2] = 4;
    uVar2 = FUN_00d29960(0x47);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D34290  FUN_00d34290  size=261  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d34290(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (DAT_01dbf940 == 0) {
    DAT_01dbf94c = 0;
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (puVar5 == (undefined4 *)0x0) {
    if (DAT_01dbf940 == 1) {
      uVar4 = cStealthKillTargetParts::cStealthKillTargetParts();
      *(undefined4 *)(param_1 + 4) = uVar4;
    }
  }
  else if (puVar5[0xe] != 0) {
    (**(code **)*puVar5)(1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    DAT_01dbf940 = 0;
    DAT_01dbf948 = DAT_01dbf94c;
    return;
  }
  if (DAT_01dbf94c != 0) {
    bVar6 = DAT_01dbf94c != DAT_01dbf948;
    puVar5 = (undefined4 *)FUN_00a7c8b0();
    uVar3 = _DAT_01dbf944;
    uVar4 = puVar5[2];
    uVar1 = puVar5[3];
    iVar2 = *(int *)(param_1 + 4);
    if (*(int *)(iVar2 + 0x3c) == 0) {
      if (bVar6 == 0) {
        *(undefined4 *)(iVar2 + 0x20) = *puVar5;
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
        *(undefined4 *)(iVar2 + 0x28) = uVar4;
        *(undefined4 *)(iVar2 + 0x2c) = uVar1;
        *(undefined4 *)(iVar2 + 0x30) = 1;
        *(undefined4 *)(iVar2 + 0x38) = 0;
        *(undefined4 *)(iVar2 + 0x3c) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 0x30) = 1;
        *(undefined4 *)(iVar2 + 0x38) = 0;
        *(uint *)(iVar2 + 0x3c) = (uint)bVar6;
      }
    }
  }
  if (DAT_01dbf940 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x34) = 1;
  }
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  DAT_01dbf940 = 0;
  DAT_01dbf948 = DAT_01dbf94c;
  return;
}

