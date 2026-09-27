// src/unsorted/unit_00932F40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00932F40..009330F0, 2 functions

#include "types.h"

// 00932F40  FUN_00932f40  size=232  [run]
void FUN_00932f40(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 unaff_EBX;
  int iVar7;
  undefined4 unaff_EDI;
  undefined4 uStack_4;
  
  iVar1 = param_1;
  iVar7 = param_2;
  iVar3 = param_2;
  if ((param_1 != 0) &&
     (piVar2 = (int *)FUN_00a7c8a0(), iVar7 = param_2, iVar3 = param_2, piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 0xbc))(param_2);
  }
  if (iVar3 != 0) {
    if ((*(byte *)(iVar7 + 0x34) & 0x80) != 0) {
      FUN_00e5e1b0(iVar3);
      return;
    }
    uVar4 = FUN_00a7c800(*(undefined4 *)(iVar7 + 0x30),0);
    uVar4 = FUN_00e5e0c0(iVar3,uVar4);
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      iVar3 = 0;
      while ((*(uint *)(iVar7 + 0x34) & 1 << ((byte)iVar3 & 0x1f)) == 0) {
        iVar3 = iVar3 + 1;
        if (1 < iVar3) {
          return;
        }
      }
      if (iVar3 != -1) {
        uStack_4 = 0;
        param_1 = 0xffffffff;
        (**(code **)(*piVar2 + 0xf4))(iVar3,&uStack_4,&param_1);
        uVar5 = FUN_009cb9f0(*(undefined4 *)(iVar1 + 0x24),unaff_EDI,unaff_EBX);
        uVar6 = AK::SoundEngine::GetIDFromString("RigidAttrTypes");
        FUN_00e5cb10(uVar4,uVar6,uVar5);
      }
    }
  }
  return;
}

// 009330F0  FUN_009330f0  size=75  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009330f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,undefined4 param_6,undefined4 param_7)

{
  if (param_5 < 0.0) {
    param_5 = _DAT_01bea264;
  }
  FUN_00da4f60(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

