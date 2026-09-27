// src/unsorted/unit_00CA6D30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CA6D30..00CA6D30, 1 functions

#include "types.h"

// 00CA6D30  FUN_00ca6d30  size=565  [run]
void __thiscall FUN_00ca6d30(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iStack_80;
  char *pcStack_7c;
  int iStack_78;
  char *pcStack_74;
  undefined4 *puStack_70;
  undefined1 *puStack_6c;
  int iStack_68;
  undefined *puStack_64;
  int *piStack_60;
  char *pcStack_5c;
  int *piStack_58;
  char *pcStack_54;
  undefined1 uStack_3c;
  undefined3 uStack_3b;
  
  pcStack_54 = "CorpsRoot";
  piStack_58 = param_3;
  pcStack_5c = (char *)0xca6d50;
  iVar1 = (**(code **)(*param_2 + 0x18))();
  if (iVar1 != -1) {
    piStack_60 = param_2;
    puStack_64 = (undefined *)0xca6d64;
    pcStack_5c = (char *)iVar1;
    FUN_00ca6270();
    piStack_60 = param_2;
    puStack_64 = (undefined *)0xca6d6d;
    pcStack_5c = (char *)iVar1;
    FUN_00ca2660();
    piStack_60 = param_2;
    puStack_64 = (undefined *)0xca6d76;
    pcStack_5c = (char *)iVar1;
    FUN_00ca2900();
    piStack_60 = param_2;
    puStack_64 = (undefined *)0xca6d7f;
    pcStack_5c = (char *)iVar1;
    FUN_00ca2b50();
    pcStack_5c = "Setting";
    piStack_60 = param_3;
    puStack_64 = (undefined *)0xca6dba;
    iVar1 = (**(code **)(*param_2 + 0x18))();
    puStack_64 = &DAT_016511c4;
    puStack_6c = (undefined1 *)0xca6dce;
    iStack_68 = iVar1;
    pcStack_74 = (char *)(**(code **)(*param_2 + 0x9c))();
    if (pcStack_74 != (char *)0xffffffff) {
      puStack_6c = (undefined1 *)0x20;
      puStack_70 = &piStack_58;
      iStack_78 = 0xca6de7;
      (**(code **)(*param_2 + 0xa4))();
    }
    puStack_6c = &DAT_01661994;
    pcStack_74 = (char *)0xca6df9;
    puStack_70 = (undefined4 *)iVar1;
    iStack_78 = (**(code **)(*param_2 + 0x9c))();
    if (iStack_78 != -1) {
      pcStack_74 = (char *)(param_1 + 0x713c);
      pcStack_7c = (char *)0xca6e12;
      (**(code **)(*param_2 + 0xe8))();
    }
    pcStack_74 = "Barrier";
    pcStack_7c = (char *)0xca6e24;
    iStack_78 = iVar1;
    iStack_80 = (**(code **)(*param_2 + 0x9c))();
    if (iStack_80 != -1) {
      pcStack_7c = (char *)(param_1 + 0x7130);
      (**(code **)(*param_2 + 0xe8))();
    }
    pcStack_7c = "delay";
    iStack_80 = iVar1;
    iVar2 = (**(code **)(*param_2 + 0x9c))();
    if (iVar2 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 0x7134);
    }
    iVar2 = (**(code **)(*param_2 + 0x9c))(iVar1,&DAT_016b218c);
    if (iVar2 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar2,param_1 + 0x7140);
    }
    iVar2 = (**(code **)(*param_2 + 0x9c))(iVar1,"release");
    if (iVar2 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar2,param_1 + 0x7144);
    }
    iVar2 = param_1 + 29000;
    uVar5 = 0;
    uStack_3c = (undefined1)iVar2;
    do {
      piStack_60 = (int *)0x64616f6c;
      pcStack_5c = (char *)0x676e69;
      piStack_58 = (int *)0x0;
      pcStack_54 = (char *)0x0;
      if (uVar5 != 0) {
        _sprintf_s((char *)&piStack_60,0x20,"loading%d",uVar5);
      }
      iVar3 = (**(code **)(*param_2 + 0x9c))(iVar1,&piStack_60);
      uStack_3b = (undefined3)((uint)iVar2 >> 8);
      if (iVar3 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar3,CONCAT31(uStack_3b,uStack_3c));
      }
      iVar2 = CONCAT31(uStack_3b,uStack_3c) + 4;
      uStack_3c = (undefined1)iVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 6);
    uVar4 = FUN_00e03ea0(&iStack_80);
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  return;
}

