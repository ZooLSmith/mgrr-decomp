// src/phase/app/pa70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47AF0..00D72560, 5 functions

#include "types.h"

// 00D47AF0  Pa70::vf0C  size=321  [class]
void Pa70::vf0C(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)FUN_00dd2380();
  (**(code **)(*piVar1 + 8))();
  FUN_00cad2a0();
  iVar2 = FUN_00c13920();
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00c13920();
      (**(code **)(*piVar1 + 0x28))(0);
      puVar3 = (undefined4 *)FUN_00a7c8b0();
      uStack_28 = *puVar3;
      uStack_24 = puVar3[1];
      uStack_20 = puVar3[2];
      uStack_1c = puVar3[3];
      iVar2 = FUN_00c19c00(1,0,0);
      iVar4 = FUN_00c19c00(1,0,1);
      piVar1 = (int *)FUN_00a6e640();
      iVar5 = (**(code **)(*piVar1 + 0x2c))(&uStack_28,2,2);
      if (iVar5 == 0) {
        if (iVar2 != 0) {
          iVar2 = FUN_00a7c8a0();
          if (iVar2 != 0) {
            piVar1 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar1 + 0x20))();
          }
        }
        if (iVar4 != 0) {
          iVar2 = FUN_00a7c8a0();
          if (iVar2 != 0) {
            piVar1 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar1 + 0x20))();
          }
        }
      }
      else {
        if (iVar2 != 0) {
          iVar2 = FUN_00a7c8a0();
          if (iVar2 != 0) {
            piVar1 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar1 + 0x1c))();
          }
        }
        if (iVar4 != 0) {
          iVar2 = FUN_00a7c8a0();
          if (iVar2 != 0) {
            piVar1 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar1 + 0x1c))();
            return;
          }
        }
      }
    }
  }
  return;
}

// 00D47C40  Pa70::vf14  size=50  [class]
void Pa70::vf14(undefined4 param_1,undefined4 param_2)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_10 = SubPhaseSignalContext::vftable;
  local_8 = param_1;
  local_4 = param_2;
  FUN_00d89e90(0x3b,&local_10);
  return;
}

// 00D51EC0  Pa70::vf08  size=164  [class]
void Pa70::vf08(void)

{
  int *piVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  DAT_01bea094 = DAT_01bea094 | 0x1000000;
  FUN_00cad2a0();
  WindActionImplement::WindActionImplement_2(&DAT_01b7bd48);
  piVar1 = (int *)FUN_00dd2380();
  local_40 = 0;
  local_3c = 0;
  local_38 = 0xc47a0000;
  local_30 = 0x42c80000;
  local_2c = 0x3f800000;
  local_28 = 0x447a0000;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xc3480000;
  (**(code **)(*piVar1 + 4))(&local_20,&local_30,&local_40,0x3f800000,0x3f800000);
  FUN_00a33520(0,0xa40,1);
  return;
}

// 00D51F70  Pa70::vf10  size=16  [class]
void Pa70::vf10(void)

{
  FUN_00dd2390();
  DAT_01bea094 = DAT_01bea094 & 0xfeffffff;
  return;
}

// 00D72560  Pa70::vf00  size=97  [class]
undefined4 * __thiscall Pa70::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x47] = cPhaseAbstract::vftable;
  param_1[0x4a] = lib::Array<int>::vftable;
  if (param_1[0x4b] != 0) {
    param_1[0x4c] = 0;
  }
  param_1[0x4b] = 0;
  param_1[0x4d] = 0;
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

