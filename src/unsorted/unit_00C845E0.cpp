// src/unsorted/unit_00C845E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C845E0..00C84B30, 10 functions

#include "mgrr.h"

// 00C845E0  FUN_00c845e0  size=93  [run]
void FUN_00c845e0(void)

{
  int iVar1;
  
  iVar1 = DAT_01dbd1d8;
  if (DAT_01dbd1d0 != 0) {
    *(undefined4 *)(DAT_01dbd1d8 + 0xc) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 8) = 0xbf800000;
    *(undefined4 *)(iVar1 + 4) = 0xffffffff;
    DAT_01dbd1d4 = 0;
    if (DAT_01dbd1d8 != 0) {
      FUN_00dd4920(DAT_01dbd1d8);
      DAT_01dbd1d8 = 0;
    }
    if (DAT_01dbd1d0 != 0) {
      FUN_00dd4920(DAT_01dbd1d0);
      DAT_01dbd1d0 = 0;
    }
  }
  return;
}

// 00C84690  FUN_00c84690  size=131  [run]
undefined4 __thiscall FUN_00c84690(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_28;
  int local_24 [5];
  undefined4 local_10;
  
  iVar2 = 0;
  local_28 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      piVar3 = (int *)(*(int *)(param_2 + 4) + iVar2);
      piVar4 = local_24;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      if (local_24[0] == 0) {
        if (*(int *)(param_1 + 0x6f4) != 0) {
          FUN_00ebdd50(*(int *)(param_1 + 0x6f4));
          *(undefined4 *)(param_1 + 0x6f4) = 0;
        }
        *(undefined4 *)(param_1 + 0x6f4) = local_10;
      }
      local_28 = local_28 + 1;
      iVar2 = iVar2 + 0x24;
    } while (local_28 < *(int *)(param_2 + 0xc));
  }
  return 0;
}

// 00C84760  FUN_00c84760  size=43  [run]
bool __thiscall FUN_00c84760(int param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(uint *)(param_1 + 0x698) < 0x10;
  if (bVar1) {
    (**(code **)(*(int *)(param_1 + 0x690) + 8))(&param_2);
  }
  return bVar1;
}

// 00C84790  FUN_00c84790  size=108  [run]
void __fastcall FUN_00c84790(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  iVar1 = FUN_00de3560();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x6c);
    iVar1 = 0x20;
    do {
      *puVar2 = 0x3c8efa35;
      puVar2[-7] = 0;
      puVar2[1] = 0xffffffff;
      puVar2 = puVar2 + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x6e0) == 0) {
      pcVar3 = "_pos.bxm";
    }
    else {
      pcVar3 = "_VRpos.bxm";
    }
    iVar1 = FUN_00de4550(pcVar3,0);
    if (iVar1 != 0) {
      cXmlBinary::cXmlBinary_16(iVar1,&DAT_01b7bd48);
    }
  }
  return;
}

// 00C84800  FUN_00c84800  size=74  [run]
void FUN_00c84800(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  FUN_00c78580(param_1,&local_20);
  *param_2 = local_20;
  param_2[1] = local_1c;
  param_2[2] = local_18;
  return;
}

// 00C848C0  FUN_00c848c0  size=152  [run]
undefined4 __thiscall FUN_00c848c0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_018b9174;
  iVar3 = *(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x18) == 2) {
    return 0;
  }
  if (iVar3 == *(int *)(param_1 + 0x6e4)) {
    return 1;
  }
  if (iVar3 == *(int *)(param_1 + 0x6f0)) {
    return 0;
  }
  iVar2 = FUN_00d45860(DAT_018b9174,param_3);
  if ((iVar3 != *(int *)(param_1 + 0x6e8)) && (iVar3 = FUN_00d45910(uVar1,iVar3), iVar2 < iVar3)) {
    return 0;
  }
  if ((*(int *)(param_2 + 0x24) != *(int *)(param_1 + 0x6ec)) &&
     (iVar3 = FUN_00d45910(uVar1,*(int *)(param_2 + 0x24)), iVar3 < iVar2)) {
    return 0;
  }
  return 1;
}

// 00C84960  FUN_00c84960  size=129  [run]
bool __thiscall FUN_00c84960(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = DAT_018b9174;
  if (param_2 == 0) {
    return false;
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x18) == 2) {
    return false;
  }
  if (((iVar2 != *(int *)(param_1 + 0x6e4)) && (iVar2 != *(int *)(param_1 + 0x6e8))) &&
     (*(int *)(param_2 + 0x24) != *(int *)(param_1 + 0x6ec))) {
    iVar2 = FUN_00d45910(DAT_018b9174,iVar2);
    iVar3 = FUN_00d45910(uVar1,*(undefined4 *)(param_2 + 0x24));
    return iVar2 <= iVar3;
  }
  return true;
}

// 00C849F0  FUN_00c849f0  size=113  [run]
void __fastcall FUN_00c849f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined *puVar5;
  
  *(undefined4 *)(param_1 + 0x6fc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x6f8) = 0xffffffff;
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_00b7c970();
      *(undefined4 *)(param_1 + 0x6f8) = uVar3;
      fVar4 = (float10)FUN_00bda020();
      *(float *)(param_1 + 0x6fc) = (float)fVar4;
    }
  }
  return;
}

// 00C84A70  FUN_00c84a70  size=96  [run]
void __fastcall FUN_00c84a70(undefined4 *param_1)

{
  int *piVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3f800000;
  piVar1 = (int *)param_1[0xe];
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (piVar1 != (int *)0x0) {
    if ((*(byte *)(piVar1 + 0x132) & 2) == 0) {
      *(byte *)(piVar1 + 0x132) = *(byte *)(piVar1 + 0x132) | 2;
      (**(code **)(*piVar1 + 0x20))();
      (**(code **)(*piVar1 + 0xc))();
    }
    param_1[0xe] = 0;
  }
  return;
}

// 00C84B30  FUN_00c84b30  size=23  [run]
void __fastcall FUN_00c84b30(int param_1)

{
  if (*(int *)(param_1 + 4) == 4) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00c788d0();
    return;
  }
  FUN_00c789d0();
  return;
}

