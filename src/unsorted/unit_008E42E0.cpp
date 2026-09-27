// src/unsorted/unit_008E42E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E42E0..008E4580, 4 functions

#include "mgrr.h"

// 008E42E0  FUN_008e42e0  size=50  [run]
void FUN_008e42e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  hkBaseObject::hkBaseObject_246(param_1,&local_20);
  return;
}

// 008E4320  FUN_008e4320  size=205  [run]
void FUN_008e4320(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  puVar4 = (undefined4 *)FUN_008e1d50();
  local_20 = *puVar4;
  local_1c = puVar4[1];
  local_18 = puVar4[2];
  hkBaseObject::hkBaseObject_246(param_1,&local_20);
  if ((DAT_01885d68 != 1) &&
     (iVar3 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4), *(int *)(iVar3 + 4) == 0)) {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return;
}

// 008E43F0  FUN_008e43f0  size=392  [run]
void __thiscall FUN_008e43f0(int param_1,float *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90 [48];
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_004066f0();
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e43f0(param_2,param_3);
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  hkBaseObject::hkBaseObject_205(&local_a0,param_2);
  uStack_94 = 0;
  FID_conflict__memcpy(local_90,param_3,0x40);
  local_60 = *param_2 + local_60;
  local_5c = param_2[1] + local_5c;
  local_58 = param_2[2] + local_58;
  FUN_01005190(local_90);
  local_20 = local_a0;
  uStack_1c = uStack_9c;
  uStack_18 = uStack_98;
  uStack_14 = uStack_94;
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    puVar3 = local_50;
    FUN_012696c0(puVar3);
    FUN_011a1220(puVar3);
  }
  else {
    puVar3 = local_50;
    FUN_0126f3e0(puVar3);
    FUN_011a0170(puVar3);
  }
  *(undefined4 *)(param_1 + 0x90) = local_a0;
  *(undefined4 *)(param_1 + 0x94) = uStack_9c;
  *(undefined4 *)(param_1 + 0x98) = uStack_98;
  *(float *)(param_1 + 0xa0) = *param_2;
  *(float *)(param_1 + 0xa4) = param_2[1];
  *(float *)(param_1 + 0xa8) = param_2[2];
  *(float *)(param_1 + 0xac) = param_2[3];
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E4580  FUN_008e4580  size=502  [run]
void __thiscall FUN_008e4580(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_3 != 0) {
    puVar3 = *(undefined4 **)(param_1 + 0xd0);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  FUN_004066f0();
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e4580(param_2,1);
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  hkBaseObject::hkBaseObject_205(&local_20,param_2);
  local_30 = local_20;
  uStack_2c = local_1c;
  uStack_28 = local_18;
  uStack_24 = 0;
  if (DAT_01885d68 != 1) {
    iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
      if (DAT_01885db8 == 0) {
        FUN_00dd72e0();
      }
      else {
        FUN_00dd5650(&DAT_0163b898);
      }
    }
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    FUN_01269660(&local_30);
  }
  else {
    puVar3 = &local_30;
    FUN_0126f3e0(puVar3);
    FUN_011a00e0(puVar3);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  *(undefined4 *)(param_1 + 0x90) = local_30;
  *(undefined4 *)(param_1 + 0x94) = uStack_2c;
  *(undefined4 *)(param_1 + 0x98) = uStack_28;
  *(undefined4 *)(param_1 + 0xa0) = *param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_2[1];
  *(undefined4 *)(param_1 + 0xa8) = param_2[2];
  *(undefined4 *)(param_1 + 0xac) = param_2[3];
  *(undefined4 *)(param_1 + 0x1b0) = *param_2;
  *(undefined4 *)(param_1 + 0x1b4) = param_2[1];
  *(undefined4 *)(param_1 + 0x1b8) = param_2[2];
  *(undefined4 *)(param_1 + 0x1bc) = param_2[3];
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

