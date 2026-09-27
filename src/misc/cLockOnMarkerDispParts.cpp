// src/misc/cLockOnMarkerDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBB8E0..00D315B0, 6 functions

#include "mgrr.h"
#include "cLockOnMarkerDispParts.h"

// 00CBB8E0  cLockOnMarkerDispParts::vf08  size=1  [class]
void cLockOnMarkerDispParts::vf08(void)

{
  return;
}

// 00CBB8F0  FUN_00cbb8f0  size=141  [callgraph]
void __fastcall FUN_00cbb8f0(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  pfVar1 = (float *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x24) = 0x3ecccccd;
  *pfVar1 = (*(float *)(param_1 + 0x40) - *pfVar1) * 0.4 + *pfVar1;
  *(float *)(param_1 + 0x54) =
       (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x54)) * 0.4 + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) =
       (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x58)) * 0.4 + *(float *)(param_1 + 0x58);
  iVar2 = FUN_00d9fa80(&local_20,pfVar1);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = local_18;
    return;
  }
  return;
}

// 00CEF6E0  cLockOnMarkerDispParts::vf00  size=63  [class]
undefined4 * __thiscall cLockOnMarkerDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEF720  cLockOnMarkerDispParts::create  size=380  [class]
void __fastcall cLockOnMarkerDispParts::create(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(4);
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
      FUN_00cb26d0((undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x1c) = 2;
    }
    break;
  case 2:
    FUN_00cbb8f0(0);
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar3 = FUN_00ca8620(param_1 + 0x20,0x2d);
      if ((int)uVar3 != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 3;
      }
      if (*(int *)((ulonglong)uVar3 >> 0x20) == 0x23) {
        if (*(int *)(param_1 + 0x30) == 0) {
          if (*(int *)(param_1 + 0x18) != 0) {
            FUN_00cdeec0(2);
          }
        }
        else if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(6);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 4;
    }
    break;
  case 3:
    FUN_00cbb8f0(1);
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(3);
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 4;
    }
    break;
  case 4:
    if (((*(int *)(param_1 + 0x18) == 0) || (iVar1 = FUN_00cdf400(1), iVar1 == 0)) ||
       (iVar1 = FUN_00ce4dd0(3), iVar1 == 0)) break;
    FUN_00cdeec0(5);
  case 0:
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(uint *)(*(int *)(param_1 + 0x14) + 4) = (uint)(1 < *(int *)(param_1 + 0x1c));
  }
  if ((0 < *(int *)(param_1 + 0x1c)) && (*(int *)(param_1 + 0x1c) < 4)) {
    puVar2 = (undefined4 *)FUN_00caac30(0);
    *(undefined4 *)(param_1 + 0x40) = *puVar2;
    *(undefined4 *)(param_1 + 0x44) = puVar2[1];
    *(undefined4 *)(param_1 + 0x48) = puVar2[2];
    *(undefined4 *)(param_1 + 0x4c) = puVar2[3];
  }
  return;
}

// 00D31520  cLockOnMarkerDispParts::cLockOnMarkerDispParts  size=139  [class]
undefined4 * cLockOnMarkerDispParts::cLockOnMarkerDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x60,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[9] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[3] = "cLockOnMarkerDispParts";
    puVar1[2] = 4;
    uVar2 = FUN_00d29960(0x2b);
    puVar1[4] = 0;
    puVar1[5] = uVar2;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00D315B0  FUN_00d315b0  size=433  [callgraph]
void __fastcall FUN_00d315b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  
  piVar5 = (int *)(param_1 + 4);
  uVar7 = 0;
  piVar6 = piVar5;
  do {
    if (*(int *)((int)&DAT_01dc0ed0 + uVar7) != 0) {
      iVar4 = *piVar6;
      if (iVar4 == 0) {
        iVar4 = cLockOnMarkerDispParts::cLockOnMarkerDispParts();
        *piVar6 = iVar4;
        *(undefined4 *)(iVar4 + 0x28) = 1;
        *(undefined4 *)((int)&DAT_01dbfb40 + uVar7) = 0;
      }
      else if (*(int *)((int)&DAT_01dbfb40 + uVar7) != 0) {
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(undefined4 *)(iVar4 + 0x1c) = 0;
        *(undefined4 *)(iVar4 + 0x20) = 0;
        *(undefined4 *)(iVar4 + 0x28) = 0;
        *(undefined4 *)(iVar4 + 0x2c) = 0;
        *(undefined4 *)(iVar4 + 0x30) = 0;
        *(undefined4 *)(iVar4 + 0x40) = 0;
        *(undefined4 *)(iVar4 + 0x44) = 0;
        *(undefined4 *)(iVar4 + 0x48) = 0;
        *(undefined4 *)(iVar4 + 0x4c) = 0;
        *(undefined4 *)(iVar4 + 0x50) = 0;
        *(undefined4 *)(iVar4 + 0x54) = 0;
        *(undefined4 *)(iVar4 + 0x58) = 0;
        *(undefined4 *)(iVar4 + 0x5c) = 0;
        if (*(int *)(iVar4 + 0x18) != 0) {
          FUN_00cdeec0(5);
        }
        *(undefined4 *)(*piVar6 + 0x28) = 1;
        *(undefined4 *)((int)&DAT_01dbfb40 + uVar7) = 0;
      }
    }
    if (*piVar6 == 0) {
      *(undefined4 *)((int)&DAT_01dbfb18 + uVar7) = 0;
    }
    else {
      if (*(int *)((int)&DAT_01dbfb18 + uVar7) != 0) {
        *(undefined4 *)((int)&DAT_01dbfb18 + uVar7) = 0;
        iVar4 = *piVar6;
        *(undefined4 *)(iVar4 + 0x28) = 0;
        *(undefined4 *)(iVar4 + 0x2c) = 1;
      }
      puVar1 = (undefined4 *)*piVar6;
      if (((int)puVar1[7] < 2) && (puVar1[10] != 1)) {
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
          *piVar6 = 0;
        }
        *(undefined4 *)((int)&DAT_01dc0ed0 + uVar7) = 0;
      }
    }
    uVar7 = uVar7 + 4;
    piVar6 = piVar6 + 1;
  } while (uVar7 < 0x28);
  iVar4 = 0;
  do {
    if (*piVar5 != 0) {
      (**(code **)(*(int *)*piVar5 + 4))();
      if (*(int *)(param_1 + 0x2c) == -1) {
        iVar2 = *piVar5;
        iVar3 = *(int *)(iVar2 + 0x1c);
        if ((1 < iVar3) && (iVar3 < 4)) {
          if ((*(int *)(iVar2 + 0x30) != 0) && ((iVar3 == 3 && (*(int *)(iVar2 + 0x18) != 0)))) {
            FUN_00cdeec0(7);
          }
          *(undefined4 *)(iVar2 + 0x30) = 0;
          *(int *)(param_1 + 0x2c) = iVar4;
        }
      }
      else if (*(int *)(param_1 + 0x2c) == iVar4) {
        iVar2 = *piVar5;
        iVar3 = *(int *)(iVar2 + 0x1c);
        if ((iVar3 < 2) || (3 < iVar3)) {
          *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
        }
        else {
          if (((*(int *)(iVar2 + 0x30) != 0) && (iVar3 == 3)) && (*(int *)(iVar2 + 0x18) != 0)) {
            FUN_00cdeec0(7);
          }
          *(undefined4 *)(iVar2 + 0x30) = 0;
        }
      }
      else {
        *(undefined4 *)(*piVar5 + 0x30) = 1;
      }
    }
    (&DAT_01dc0ef8)[iVar4] = (&DAT_01dc0ed0)[iVar4];
    iVar2 = *piVar5;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
    *(uint *)(&DAT_01dbfb64 + iVar4 * 4) = (uint)(iVar2 != 0);
  } while (iVar4 < 10);
  return;
}

