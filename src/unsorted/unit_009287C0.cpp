// src/unsorted/unit_009287C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009287C0..00928E50, 9 functions

#include "mgrr.h"

// 009287C0  FUN_009287c0  size=106  [run]
void __thiscall FUN_009287c0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  char local_10 [16];
  
  *param_1 = 0x43fa0000;
  _sprintf_s(local_10,0x10,"Lv%d",(uint)*(byte *)((int)param_1 + 6));
  iVar1 = (**(code **)(*param_2 + 0x18))(param_1[7],local_10);
  if (iVar1 != -1) {
    iVar1 = (**(code **)(*param_2 + 0x18))(iVar1,&DAT_0164d470);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0x54))(iVar1,param_1);
    }
  }
  return;
}

// 00928830  FUN_00928830  size=122  [run]
float10 FUN_00928830(int *param_1)

{
  int iVar1;
  float fVar2;
  char local_10 [16];
  
  _sprintf_s(local_10,0x10,"Lv%d");
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 == -1) {
    return (float10)0;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(iVar1,"EffKt");
  fVar2 = 0.0;
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x54))(iVar1,&stack0xffffffdc);
  }
  return (float10)fVar2;
}

// 009288B0  FUN_009288b0  size=126  [run]
undefined4 __thiscall FUN_009288b0(int param_1,int param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_retaddr;
  char local_10 [12];
  undefined4 uStack_4;
  
  piVar2 = (int *)(param_2 + 0x24);
  _sprintf_s(local_10,0x10,"Lv%d",(uint)param_3);
  iVar1 = (**(code **)(*piVar2 + 0x18))(*(undefined4 *)(param_1 + 0x1c),local_10);
  if (iVar1 != -1) {
    iVar1 = (**(code **)(*piVar2 + 0x18))(iVar1,"Command");
    if (iVar1 != -1) {
      (**(code **)(*piVar2 + 0x74))(iVar1,uStack_4,unaff_retaddr);
      return 1;
    }
  }
  return 0;
}

// 00928930  FUN_00928930  size=43  [run]
byte * FUN_00928930(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  bVar1 = *param_1;
  pbVar3 = param_1;
  while (bVar1 != 0) {
    iVar2 = _toupper((uint)*pbVar3);
    *pbVar3 = (byte)iVar2;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
  }
  return param_1;
}

// 00928960  FUN_00928960  size=63  [run]
undefined4 __thiscall FUN_00928960(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))(param_2,param_3);
  if (iVar1 == -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0xec))(iVar1,param_2);
  return 1;
}

// 00928A20  FUN_00928a20  size=120  [run]
undefined4 __thiscall FUN_00928a20(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xa0,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 0xa0,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00928D50  FUN_00928d50  size=43  [run]
void __thiscall FUN_00928d50(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar3 = 0;
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 0x10) + 0x24 + iVar3);
      *puVar1 = *puVar1 | param_2;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xa0;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x20));
  }
  return;
}

// 00928DE0  FUN_00928de0  size=97  [run]
float10 __fastcall FUN_00928de0(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  fVar5 = (float10)0;
  uVar3 = (uint)*(byte *)(param_1 + 0x20);
  iVar4 = 0;
  if (3 < uVar3) {
    iVar2 = (uVar3 - 4 >> 2) + 1;
    iVar4 = iVar2 * 4;
    pfVar1 = (float *)(*(int *)(param_1 + 0x10) + 0x140);
    do {
      iVar2 = iVar2 + -1;
      fVar5 = fVar5 + (float10)pfVar1[-0x50] + (float10)pfVar1[-0x28] + (float10)*pfVar1 +
              (float10)pfVar1[0x28];
      pfVar1 = pfVar1 + 0xa0;
    } while (iVar2 != 0);
  }
  if (iVar4 < (int)uVar3) {
    pfVar1 = (float *)(iVar4 * 0xa0 + *(int *)(param_1 + 0x10));
    iVar4 = uVar3 - iVar4;
    do {
      fVar5 = fVar5 + (float10)*pfVar1;
      pfVar1 = pfVar1 + 0x28;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return fVar5;
}

// 00928E50  FUN_00928e50  size=49  [run]
undefined4 __thiscall FUN_00928e50(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(byte *)(param_1 + 0x20) != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    do {
      if (*(ushort *)(iVar2 + 4) == (ushort)param_2) {
        return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar2 + 6));
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xa0;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x20));
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),0xff);
}

