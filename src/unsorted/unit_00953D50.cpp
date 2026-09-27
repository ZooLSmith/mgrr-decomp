// src/unsorted/unit_00953D50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00953D50..00954070, 4 functions

#include "types.h"

// 00953D50  FUN_00953d50  size=209  [run]
void __thiscall FUN_00953d50(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar2 = Hw::cHeapGlobal::vf0C();
  if (iVar2 != 0) {
    if (param_1[1] != 0) {
      param_1[2] = 0;
    }
    if (DAT_01bea030 == 8) {
      uVar3 = 0xb;
      iVar2 = 9;
    }
    else if (DAT_01bea030 == 9) {
      uVar3 = 0x14;
      iVar2 = 7;
    }
    else {
      uVar3 = 0;
      iVar2 = 0xb;
    }
    uVar1 = iVar2 + uVar3;
    if (uVar3 < uVar1) {
      iVar2 = (int)&DAT_01886950 - (int)param_2;
      piVar6 = param_2 + uVar3;
      do {
        iVar4 = *(int *)(iVar2 + (int)piVar6);
        if (iVar4 == 0) {
          return;
        }
        if ((*piVar6 != -1) && (iVar4 = FUN_0094dfd0(iVar4), iVar4 != 0)) {
          piVar5 = (int *)cItemPossessionBase::cItemPossessionBase_2(iVar4);
          param_2 = piVar5;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(&param_2);
          }
          (**(code **)(*piVar5 + 0x28))(*piVar6);
        }
        uVar3 = uVar3 + 1;
        piVar6 = piVar6 + 1;
      } while ((int)uVar3 < (int)uVar1);
    }
  }
  return;
}

// 00953E30  FUN_00953e30  size=179  [run]
void __thiscall FUN_00953e30(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *local_4;
  
  local_4 = param_1;
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  for (piVar3 = (int *)PTR_DAT_01886ea4; piVar3 != (int *)(PTR_DAT_01886ea4 + DAT_01886ea8 * 4);
      piVar3 = piVar3 + 1) {
    piVar1 = (int *)PTR_DAT_01886ea4;
    if (*(int *)(*piVar3 + 8) == param_2) goto joined_r0x00953eae;
  }
  iVar2 = FUN_0094dfd0(param_2);
  if ((iVar2 != 0) &&
     (piVar3 = (int *)cItemPossessionBase::cItemPossessionBase_2(iVar2), piVar3 != (int *)0x0)) {
    local_4 = piVar3;
    (**(code **)(PTR_vftable_01886ea0 + 8))(&local_4);
    iVar2 = *piVar3;
LAB_00953ec6:
    (**(code **)(iVar2 + 0x1c))();
  }
LAB_00953ecb:
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return;
joined_r0x00953eae:
  if (piVar1 == (int *)(PTR_DAT_01886ea4 + DAT_01886ea8 * 4)) goto LAB_00953ecb;
  piVar3 = (int *)*piVar1;
  if (piVar3[4] == param_2) {
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      goto LAB_00953ec6;
    }
    goto LAB_00953ecb;
  }
  piVar1 = piVar1 + 1;
  goto joined_r0x00953eae;
}

// 00953EF0  FUN_00953ef0  size=375  [run]
void FUN_00953ef0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_0094dfd0(0x1e2eeb96);
  if (((iVar1 == 0) || (iVar2 = FUN_00c82370(3), iVar2 != 0)) ||
     (DAT_01b37360 = FUN_00952ff0(iVar1), DAT_01b37360 == 0)) {
    DAT_01b37360 = 0;
  }
  else {
    *(uint *)(DAT_01b37360 + 4) = *(uint *)(DAT_01b37360 + 4) | 0x4000;
    *(uint *)(DAT_01b37360 + 4) = *(uint *)(DAT_01b37360 + 4) | 0x2000;
    *(uint *)(DAT_01b37360 + 4) = *(uint *)(DAT_01b37360 + 4) | 0x100;
    if (*(int *)(DAT_01b37360 + 0x50) != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar3 + 0x20))();
    }
  }
  iVar1 = FUN_0094dfd0(0x18ba9938);
  if (((iVar1 == 0) || (iVar2 = FUN_00c82370(2), iVar2 != 0)) ||
     (DAT_01b37364 = FUN_00952ff0(iVar1), DAT_01b37364 == 0)) {
    DAT_01b37364 = 0;
  }
  else {
    *(uint *)(DAT_01b37364 + 4) = *(uint *)(DAT_01b37364 + 4) | 0x4000;
    *(uint *)(DAT_01b37364 + 4) = *(uint *)(DAT_01b37364 + 4) | 0x2000;
    *(uint *)(DAT_01b37364 + 4) = *(uint *)(DAT_01b37364 + 4) | 0x100;
    if (*(int *)(DAT_01b37364 + 0x50) != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar3 + 0x20))();
    }
  }
  iVar1 = FUN_0094dfd0(0x53e64a9d);
  if (((iVar1 != 0) && (iVar2 = FUN_00c82370(1), iVar2 == 0)) &&
     (DAT_01b37368 = FUN_00952ff0(iVar1), DAT_01b37368 != 0)) {
    *(uint *)(DAT_01b37368 + 4) = *(uint *)(DAT_01b37368 + 4) | 0x4000;
    *(uint *)(DAT_01b37368 + 4) = *(uint *)(DAT_01b37368 + 4) | 0x2000;
    *(uint *)(DAT_01b37368 + 4) = *(uint *)(DAT_01b37368 + 4) | 0x100;
    if (*(int *)(DAT_01b37368 + 0x50) == 0) {
      return;
    }
    piVar3 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x0095405c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0x20))();
    return;
  }
  DAT_01b37368 = 0;
  return;
}

// 00954070  FUN_00954070  size=221  [run]
void FUN_00954070(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  iVar1 = FUN_0094dfd0(0x6929db00);
  if (iVar1 == 0) {
    DAT_01b3736c = 0;
    return;
  }
  if (DAT_018b9174 == 0xd30) {
    uVar4 = 2;
  }
  else {
    if (DAT_018b9174 != 0xd50) goto LAB_009540cc;
    uVar4 = 4;
  }
  iVar2 = FUN_00c82370(uVar4);
  if (iVar2 != 0) {
    DAT_01b3736c = 0;
    return;
  }
  DAT_01b3736c = FUN_00952ff0(iVar1);
LAB_009540cc:
  if (DAT_01b3736c == 0) {
    DAT_01b3736c = 0;
    return;
  }
  *(uint *)(DAT_01b3736c + 4) = *(uint *)(DAT_01b3736c + 4) | 0x4000;
  *(uint *)(DAT_01b3736c + 4) = *(uint *)(DAT_01b3736c + 4) | 0x2000;
  *(uint *)(DAT_01b3736c + 4) = *(uint *)(DAT_01b3736c + 4) | 0x100;
  if (*(int *)(DAT_01b3736c + 0x50) == 0) {
    return;
  }
  piVar3 = (int *)FUN_00a7c8a0();
  (**(code **)(*piVar3 + 0x20))();
  piVar3 = (int *)FUN_00a7c8a0();
  if (piVar3 == (int *)0x0) {
    return;
  }
  puVar5 = &DAT_01b35390;
  (**(code **)(*piVar3 + 4))(&DAT_01b35390);
  iVar1 = FUN_00dd6d80(puVar5);
  if (iVar1 != 0) {
    FUN_005e86c0(1);
    return;
  }
  return;
}

