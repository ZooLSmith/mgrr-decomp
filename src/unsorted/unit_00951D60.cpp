// src/unsorted/unit_00951D60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00951D60..00951FB0, 6 functions

#include "types.h"

// 00951D60  FUN_00951d60  size=61  [run]
void FUN_00951d60(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  FUN_0094ec70(param_1,param_2);
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return;
}

// 00951DA0  FUN_00951da0  size=120  [run]
undefined4 FUN_00951da0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar4 = 1;
    if ((uVar1 != 0) && (*(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x20) != 0)) {
      return 0;
    }
    iVar3 = FUN_008f7780(param_1);
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 0x4b4);
      iVar3 = FUN_009f9480(uVar2);
      if ((((iVar3 != 0) || (iVar3 = FUN_009f94a0(uVar2), iVar3 != 0)) ||
          (iVar3 = FUN_009f9460(uVar2), iVar3 != 0)) || (iVar3 = FUN_009f94c0(uVar2), iVar3 != 0)) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

// 00951E20  FUN_00951e20  size=16  [run]
void FUN_00951e20(undefined4 param_1)

{
  FUN_0094f150(param_1);
  return;
}

// 00951E30  FUN_00951e30  size=250  [run]
void FUN_00951e30(void)

{
  bool bVar1;
  int *piVar2;
  
  if (DAT_01b37360 != (int *)0x0) {
    bVar1 = false;
    piVar2 = (int *)PTR_DAT_01886b24;
    if (PTR_DAT_01886b24 == PTR_DAT_01886b24 + DAT_01886b28 * 4) {
LAB_00951e66:
      (**(code **)(*DAT_01b37360 + 4))(1);
    }
    else {
      do {
        if ((int *)*piVar2 == DAT_01b37360) {
          bVar1 = true;
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4));
      if (!bVar1) goto LAB_00951e66;
      FUN_00950c70(DAT_01b37360);
    }
    DAT_01b37360 = (int *)0x0;
  }
  if (DAT_01b37364 == (int *)0x0) goto LAB_00951ed0;
  bVar1 = false;
  piVar2 = (int *)PTR_DAT_01886b24;
  if (PTR_DAT_01886b24 == PTR_DAT_01886b24 + DAT_01886b28 * 4) {
LAB_00951eb4:
    (**(code **)(*DAT_01b37364 + 4))(1);
  }
  else {
    do {
      if ((int *)*piVar2 == DAT_01b37364) {
        bVar1 = true;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4));
    if (!bVar1) goto LAB_00951eb4;
    FUN_00950c70(DAT_01b37364);
  }
  DAT_01b37364 = (int *)0x0;
LAB_00951ed0:
  if (DAT_01b37368 == (int *)0x0) {
    return;
  }
  bVar1 = false;
  piVar2 = (int *)PTR_DAT_01886b24;
  if (PTR_DAT_01886b24 != PTR_DAT_01886b24 + DAT_01886b28 * 4) {
    do {
      if ((int *)*piVar2 == DAT_01b37368) {
        bVar1 = true;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4));
    if (bVar1) {
      FUN_00950c70(DAT_01b37368);
      DAT_01b37368 = (int *)0x0;
      return;
    }
  }
  (**(code **)(*DAT_01b37368 + 4))(1);
  DAT_01b37368 = (int *)0x0;
  return;
}

// 00951F30  FUN_00951f30  size=96  [run]
void FUN_00951f30(void)

{
  bool bVar1;
  int *piVar2;
  
  if (DAT_01b3736c == (int *)0x0) {
    return;
  }
  bVar1 = false;
  piVar2 = (int *)PTR_DAT_01886b24;
  if (PTR_DAT_01886b24 != PTR_DAT_01886b24 + DAT_01886b28 * 4) {
    do {
      if ((int *)*piVar2 == DAT_01b3736c) {
        bVar1 = true;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(PTR_DAT_01886b24 + DAT_01886b28 * 4));
    if (bVar1) {
      FUN_00950c70(DAT_01b3736c);
      DAT_01b3736c = (int *)0x0;
      return;
    }
  }
  (**(code **)(*DAT_01b3736c + 4))(1);
  DAT_01b3736c = (int *)0x0;
  return;
}

// 00951FB0  FUN_00951fb0  size=158  [run]
void __fastcall FUN_00951fb0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != puVar1 + *(int *)(param_1 + 8)) {
    do {
      FUN_00a00bd0(*puVar1,0);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4));
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar2 = 0;
  do {
    FUN_00a00bd0(*(undefined4 *)((int)&DAT_0164fa10 + uVar2),0);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x50);
  uVar2 = 0;
  do {
    FUN_00a00bd0(*(undefined4 *)((int)&DAT_0164fa60 + uVar2),0);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x18);
  uVar2 = 0;
  do {
    FUN_00a00bd0(*(undefined4 *)((int)&DAT_0164fa78 + uVar2),0);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x14);
  return;
}

