// src/unsorted/unit_00CBE6E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBE6E0..00CBEEC0, 8 functions

#include "mgrr.h"

// 00CBE6E0  FUN_00cbe6e0  size=26  [run]
void __fastcall FUN_00cbe6e0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
  }
  return;
}

// 00CBE700  FUN_00cbe700  size=23  [run]
int __thiscall FUN_00cbe700(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 < param_1[5]) && (*param_1 != 0)) {
    iVar1 = *param_1 + param_2 * 8;
  }
  return iVar1;
}

// 00CBE730  FUN_00cbe730  size=80  [run]
void __fastcall FUN_00cbe730(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    iVar4 = 0;
    if (0 < param_1[1]) {
      iVar3 = 0;
      do {
        iVar1 = *param_1;
        iVar2 = *(int *)(iVar1 + iVar3);
        if (iVar2 != 0) {
          FUN_00dd4940(iVar2);
          *(undefined4 *)(iVar1 + iVar3) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x18;
      } while (iVar4 < param_1[1]);
    }
    if (*param_1 != 0) {
      FUN_00dd4940(*param_1);
      *param_1 = 0;
    }
  }
  return;
}

// 00CBE780  FUN_00cbe780  size=30  [run]
int __thiscall FUN_00cbe780(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((-1 < param_2) && (param_2 < param_1[1])) && (*param_1 != 0)) {
    iVar1 = *param_1 + param_2 * 0x18;
  }
  return iVar1;
}

// 00CBE7F0  FUN_00cbe7f0  size=196  [run]
float10 __thiscall FUN_00cbe7f0(int param_1,int param_2,float param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  float local_10;
  
  iVar3 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 8) {
      local_10 = (float)piVar2[1];
      goto LAB_00cbe847;
    }
  }
  local_10 = 0.0;
LAB_00cbe847:
  uVar1 = *(uint *)(param_1 + 0x90 + param_2 * 4);
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (uVar1 < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 8) {
      return ((float10)(float)piVar2[3] + (float10)(float)piVar2[3] + (float10)param_3) /
             (float10)local_10;
    }
  }
  return ((float10)0 + (float10)0 + (float10)param_3) / (float10)local_10;
}

// 00CBE8F0  FUN_00cbe8f0  size=220  [run]
float10 __thiscall FUN_00cbe8f0(int param_1,int param_2,int param_3,float param_4)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  float local_10;
  
  iVar4 = *(int *)(param_1 + 0x220 + param_2 * 0x1c);
  puVar1 = (uint *)(param_1 + 0x19c + param_3 * 4 + param_2 * 0xc);
  uVar2 = *puVar1;
  if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
     (piVar3 = *(int **)(uVar2 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), piVar3 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar3 + 8))();
    if (iVar4 == 8) {
      local_10 = (float)piVar3[1];
      goto LAB_00cbe964;
    }
  }
  local_10 = 0.0;
LAB_00cbe964:
  iVar4 = *(int *)(param_1 + param_2 * 0x1c + 0x220);
  uVar2 = *puVar1;
  if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
     (piVar3 = *(int **)(uVar2 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), piVar3 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar3 + 8))();
    if (iVar4 == 8) {
      return ((float10)(float)piVar3[3] + (float10)(float)piVar3[3] + (float10)param_4) /
             (float10)local_10;
    }
  }
  return ((float10)0 + (float10)0 + (float10)param_4) / (float10)local_10;
}

// 00CBE9D0  FUN_00cbe9d0  size=1234  [run]
void __fastcall FUN_00cbe9d0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x5d8) == 0) {
    *(undefined4 *)(param_1 + 0x39c) = 4;
    *(undefined4 *)(param_1 + 0x34c) = 0;
    *(undefined4 *)(param_1 + 0x3a0) = 4;
    *(undefined4 *)(param_1 + 0x350) = 0;
    *(undefined4 *)(param_1 + 0x3a8) = 4;
    *(undefined4 *)(param_1 + 0x358) = 0;
    *(undefined4 *)(param_1 + 0x3b4) = 4;
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(undefined4 *)(param_1 + 0x394) = 0;
    *(undefined4 *)(param_1 + 0x3b0) = 4;
    goto switchD_00cbeddf_default;
  }
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0xffffffff;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x498);
  do {
    if (*(int *)(param_1 + 0x494) == 0) break;
    if ((*piVar2 != -1) && (*(float *)(param_1 + 0x324) < (float)*piVar2 * 0.016666668)) {
      *(int *)(param_1 + 0x39c) = iVar3;
      *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x4ac + iVar3 * 4);
      *(int *)(param_1 + 0x370) = iVar3;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 5);
  *(undefined4 *)(param_1 + 0x3a0) = 0xffffffff;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x4c4);
  do {
    if (*(int *)(param_1 + 0x4c0) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x328))) {
      *(int *)(param_1 + 0x3a0) = iVar3;
      *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_1 + 0x4d8 + iVar3 * 4);
      *(int *)(param_1 + 0x374) = iVar3;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 5);
  *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x4f0);
  do {
    if (*(int *)(param_1 + 0x4ec) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x32c))) {
      *(int *)(param_1 + 0x3a4) = iVar3;
      *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_1 + 0x504 + iVar3 * 4);
      *(int *)(param_1 + 0x378) = iVar3;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 5);
  *(undefined4 *)(param_1 + 0x3a8) = 0xffffffff;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x51c);
  do {
    if (*(int *)(param_1 + 0x518) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x330))) {
      *(int *)(param_1 + 0x3a8) = iVar3;
      *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x530 + iVar3 * 4);
      *(int *)(param_1 + 0x37c) = iVar3;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 5);
  *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x548);
  do {
    if (*(int *)(param_1 + 0x544) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x334))) {
      *(int *)(param_1 + 0x3ac) = iVar3;
      *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_1 + 0x55c + iVar3 * 4);
      *(int *)(param_1 + 0x380) = iVar3;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 5);
  *(undefined4 *)(param_1 + 0x3b4) = 0xffffffff;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x584);
  do {
    if (*(int *)(param_1 + 0x580) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x348))) {
      *(int *)(param_1 + 0x3b4) = iVar3;
      *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x598 + iVar3 * 4);
      *(int *)(param_1 + 900) = iVar3;
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 5);
  if ((*(int *)(param_1 + 0x338) == 0) && (*(int *)(param_1 + 0x570) != -1)) {
    *(int *)(param_1 + 0x364) = *(int *)(param_1 + 0x570);
    *(undefined4 *)(param_1 + 0x388) = 0;
    iVar3 = FUN_009c4bf0();
    if (1 < iVar3) {
      if (DAT_018b9174 == 0x170) {
        uVar4 = 0x10;
      }
      else if (DAT_018b9174 == 0x380) {
        uVar4 = 0x11;
      }
      else if (DAT_018b9174 == 0x470) {
        uVar4 = 0x12;
      }
      else if (DAT_018b9174 == 0xc60) {
        uVar4 = 0x35;
      }
      else {
        if (DAT_018b9174 != 0xd60) goto LAB_00cbec55;
        uVar4 = 0x39;
      }
      FUN_009c6540(uVar4);
    }
  }
LAB_00cbec55:
  if ((*(int *)(param_1 + 0x344) != 0) && (*(int *)(param_1 + 0x57c) != -1)) {
    *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x57c);
    *(undefined4 *)(param_1 + 0x38c) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x578);
  bVar1 = false;
  if (iVar3 == -1) {
LAB_00cbec8d:
    if (*(int *)(param_1 + 0x33c) == 0) goto LAB_00cbec95;
  }
  else {
    if (*(int *)(param_1 + 0x33c) != 0) {
      bVar1 = true;
      goto LAB_00cbec8d;
    }
LAB_00cbec95:
    if ((0 < *(int *)(param_1 + 0x340)) && (iVar3 != -1)) {
      *(int *)(param_1 + 0x36c) = iVar3;
      *(undefined4 *)(param_1 + 0x390) = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x350) +
          *(int *)(param_1 + 0x35c) + *(int *)(param_1 + 0x34c) + *(int *)(param_1 + 0x36c) +
          *(int *)(param_1 + 0x358) + *(int *)(param_1 + 0x354) + *(int *)(param_1 + 0x368) +
          *(int *)(param_1 + 0x364) + *(int *)(param_1 + 0x360);
  *(int *)(param_1 + 0x394) = iVar3;
  if (9999999 < iVar3) {
    *(undefined **)(param_1 + 0x394) = &DAT_0098967f;
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0xffffffff;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x5b0);
  do {
    if (*(int *)(param_1 + 0x5ac) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x394))) {
      *(int *)(param_1 + 0x3b0) = iVar3;
      *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0x5c4 + iVar3 * 4);
      break;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 5);
  iVar3 = FUN_00932720();
  if ((0x9ff < iVar3) && (iVar3 = FUN_00932720(), iVar3 < 0xb00)) {
    *(undefined4 *)(param_1 + 0x394) = 0;
    *(undefined4 *)(param_1 + 0x34c) = 0;
    *(undefined4 *)(param_1 + 0x350) = 0;
    *(undefined4 *)(param_1 + 0x354) = 0;
    *(undefined4 *)(param_1 + 0x358) = 0;
    *(undefined4 *)(param_1 + 0x35c) = 0;
    *(undefined4 *)(param_1 + 0x364) = 0;
    *(undefined4 *)(param_1 + 0x36c) = 0;
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(undefined4 *)(param_1 + 0x368) = 0;
  }
  iVar3 = FUN_00932720();
  if ((iVar3 < 0xa00) || (iVar3 = FUN_00932720(), 0xaff < iVar3)) {
    if (bVar1) {
      piVar2 = (int *)FUN_00c209f0();
      (**(code **)(*piVar2 + 0x14))(1);
    }
    else {
      switch(*(undefined4 *)(param_1 + 0x3b0)) {
      case 0:
        piVar2 = (int *)FUN_00c209f0();
        (**(code **)(*piVar2 + 0x14))(2);
        break;
      case 1:
        piVar2 = (int *)FUN_00c209f0();
        (**(code **)(*piVar2 + 0x14))(3);
        break;
      case 2:
        piVar2 = (int *)FUN_00c209f0();
        (**(code **)(*piVar2 + 0x14))(4);
        break;
      case 3:
        piVar2 = (int *)FUN_00c209f0();
        (**(code **)(*piVar2 + 0x14))(5);
        break;
      case 4:
        piVar2 = (int *)FUN_00c209f0();
        (**(code **)(*piVar2 + 0x14))(6);
      }
    }
  }
switchD_00cbeddf_default:
  FUN_009c4c20(*(undefined4 *)(param_1 + 0x488),*(int *)(param_1 + 0x3b0) + 1);
  return;
}

// 00CBEEC0  FUN_00cbeec0  size=90  [run]
void __thiscall FUN_00cbeec0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x198) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x198) * 0x400 + 0x2a0 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x94);
    uVar2 = *(undefined4 *)(iVar3 + 0x98);
    *param_2 = *(undefined4 *)(iVar3 + 0x90);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

