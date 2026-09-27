// src/unsorted/unit_00B356F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B356F0..00B358D0, 2 functions

#include "types.h"

// 00B356F0  FUN_00b356f0  size=465  [run]
void __fastcall FUN_00b356f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [80];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x38d,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00b3575c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00b3575c:
  piVar4 = (int *)FUN_00c13920();
  iVar5 = (**(code **)(*piVar4 + 0x28))(0);
  if ((((iVar5 != 0) && (*(int *)(param_1 + 0x19c4) != 0)) && (DAT_01bea004 == 0)) &&
     (((DAT_01bea000 == DAT_01be9ffc && (*DAT_01be9ff4 == 0x13007)) &&
      (iVar5 = FUN_00a7c8a0(), fVar1 = *(float *)(iVar5 + 0x40) - *(float *)(param_1 + 0x40),
      fVar3 = *(float *)(iVar5 + 0x44) - *(float *)(param_1 + 0x44),
      fVar2 = *(float *)(iVar5 + 0x48) - *(float *)(param_1 + 0x48),
      fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1), fVar1 < 7.0 != (fVar1 == 7.0)))))
  {
    piVar4 = (int *)FUN_009f8b60();
    uStack_74 = *(undefined4 *)(param_1 + 0x40);
    iVar5 = *piVar4;
    fStack_70 = *(float *)(param_1 + 0x44) + 0.5;
    uStack_6c = *(undefined4 *)(param_1 + 0x48);
    fStack_68 = *(float *)(param_1 + 0x4c) + fStack_68;
    iVar6 = FUN_00a7c8a0();
    uStack_84 = *(undefined4 *)(iVar6 + 0x40);
    fStack_80 = *(float *)(iVar6 + 0x44) + 0.5;
    uStack_7c = *(undefined4 *)(iVar6 + 0x48);
    fStack_78 = *(float *)(iVar6 + 0x4c) + fStack_68;
    FUN_00445d40(&uStack_74,&uStack_84,iVar5 << 0x10 | 3,0,0x60,0,"vrWallCheck",0);
    uStack_88 = 0;
    uStack_8c = 0;
    iVar5 = RayCastSingleHitWork::RayCastSingleHitWork_2
                      (auStack_64,0,&uStack_88,&uStack_8c,auStack_54);
    if (iVar5 == 0) {
      piVar4 = (int *)FUN_00c209f0();
      (**(code **)(*piVar4 + 0x14))(9);
      *(undefined4 *)(param_1 + 0x19c4) = 0;
    }
  }
  return;
}

// 00B358D0  FUN_00b358d0  size=250  [run]
void __fastcall FUN_00b358d0(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_00b358e4_caseD_1;
  case 2:
    FUN_00aa4080(0x394,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    return;
  }
  *(undefined4 *)(param_1 + 0x19c0) = 1;
  FUN_00ac8e10(0);
  FUN_00ac8eb0(1,1);
  FUN_00c4d1a0(*(undefined4 *)(param_1 + 0x4f0),1);
  FUN_00aa4080(0x393,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
switchD_00b358e4_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

