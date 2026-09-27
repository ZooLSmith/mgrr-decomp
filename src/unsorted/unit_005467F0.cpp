// src/unsorted/unit_005467F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005467F0..00546EC0, 4 functions

#include "types.h"

// 005467F0  FUN_005467f0  size=1159  [run]
void __fastcall FUN_005467f0(int *param_1)

{
  float fVar1;
  short sVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  bool bVar7;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00543960();
    uVar6 = 1;
    iVar4 = FUN_00ac46b0(&local_3c,1);
    if (iVar4 != 0) {
      local_30 = local_3c - (float)param_1[0x10];
      local_2c = local_38 - (float)param_1[0x11];
      local_28 = local_34 - (float)param_1[0x12];
      if ((25.0 < local_28 * local_28 + local_2c * local_2c + local_30 * local_30) &&
         (pfVar3 = (float *)FUN_00a925a0(local_20),
         pfVar3[2] * local_28 + *pfVar3 * local_30 + pfVar3[1] * local_2c < 0.0)) {
        uVar6 = 0;
      }
    }
    iVar4 = hkpAllCdPointCollector::hkpAllCdPointCollector_41(param_1 + 0x398,0x41c80000,uVar6);
    param_1[0x38f] = 0x3c03126f;
    param_1[0x390] = 0x3ba3d70a;
    param_1[0x391] = 0x3e0a3d71;
    if (iVar4 == 0) {
      param_1[0x370] = param_1[0x370] | 0x40;
    }
    else {
      param_1[0x370] = param_1[0x370] & 0xffffffbf;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
  case 1:
    param_1[0x370] = param_1[0x370] | 3;
    FUN_00543700(param_1 + 0x398,0x3d4ccccd,0x3e32b8c2);
    if (((float)param_1[0x38e] < (float)param_1[0x391]) &&
       (fVar1 = (float)param_1[0x38f] * (float)param_1[0x244] + (float)param_1[0x38e],
       param_1[0x38e] = (int)fVar1, (float)param_1[0x391] <= fVar1)) {
      param_1[0x38e] = param_1[0x391];
    }
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      uVar6 = 0x3f800000;
    }
    else {
      uVar6 = 0xbf800000;
    }
    piVar5 = (int *)FUN_00a8b8a0(&local_30,uVar6);
    param_1[0x39c] = *piVar5;
    param_1[0x39d] = piVar5[1];
    param_1[0x39e] = piVar5[2];
    param_1[0x39f] = piVar5[3];
    (**(code **)(*param_1 + 0x14))();
    if (((float)param_1[0x3a9] <= 0.0) && ((float)param_1[0x2a4] < 144.0)) {
      sVar2 = FUN_00dde2d0(2,4);
      iVar4 = FUN_00542150((int)sVar2,param_1[0x2a1] + 0x40);
      if (iVar4 != 0) {
        param_1[0x3a9] = 0x41200000;
      }
    }
    if (0.0 < (float)param_1[0x3a5]) {
      param_1[0x370] = param_1[0x370] | 0x1000;
    }
    fVar1 = (float)param_1[0x14] - (float)param_1[0x398];
    if (((float)param_1[0x16] - (float)param_1[0x39a]) *
        ((float)param_1[0x16] - (float)param_1[0x39a]) + fVar1 * fVar1 < 4.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((((30.0 < (float)param_1[0x373]) && (iVar4 = param_1[0x374], iVar4 != 2)) && (iVar4 != 3))
       && (fVar1 - (float)param_1[0x244] < 0.0)) {
      if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
        bVar7 = iVar4 == 1;
      }
      else {
        bVar7 = iVar4 == 0;
      }
      if (bVar7) {
        param_1[0x187] = 3;
        param_1[0x248] = 0;
        return;
      }
    }
    break;
  case 2:
    fVar1 = (float)param_1[0x38e] - (float)param_1[0x390] * (float)param_1[0x244];
    param_1[0x38e] = (int)fVar1;
    if (fVar1 <= 0.0) {
      param_1[0x38e] = 0;
    }
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      uVar6 = 0x3f800000;
    }
    else {
      uVar6 = 0xbf800000;
    }
    piVar5 = (int *)FUN_00a8b8a0(&local_30,uVar6);
    param_1[0x39c] = *piVar5;
    param_1[0x39d] = piVar5[1];
    param_1[0x39e] = piVar5[2];
    param_1[0x39f] = piVar5[3];
    (**(code **)(*param_1 + 0x14))();
    if ((float)param_1[0x244] * (float)param_1[0x38e] < (float)param_1[0x244] * 0.001) {
      FUN_00543990();
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x38e] - (float)param_1[0x390] * (float)param_1[0x244];
    param_1[0x38e] = (int)fVar1;
    if (fVar1 <= 0.0) {
      param_1[0x38e] = 0;
    }
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      uVar6 = 0x3f800000;
    }
    else {
      uVar6 = 0xbf800000;
    }
    piVar5 = (int *)FUN_00a8b8a0(&local_30,uVar6);
    param_1[0x39c] = *piVar5;
    param_1[0x39d] = piVar5[1];
    param_1[0x39e] = piVar5[2];
    param_1[0x39f] = piVar5[3];
    (**(code **)(*param_1 + 0x14))();
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (((float)param_1[0x244] * (float)param_1[0x38e] < (float)param_1[0x244] * 0.001) &&
       (30.0 < (float)param_1[0x244] + fVar1)) {
      FUN_00543990();
      FUN_00a8caf0(4,0,0,0);
      return;
    }
  }
  return;
}

// 00546D10  FUN_00546d10  size=485  [run]
void __fastcall FUN_00546d10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_ESI;
  float10 fVar3;
  float fVar4;
  float fVar5;
  
  BehaviorEmBase::vf4C();
  iVar2 = FUN_00ac4770();
  if (iVar2 == 0) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 0:
      FUN_00543420();
      break;
    case 1:
      FUN_005434f0();
      break;
    case 5:
      FUN_00544d80();
    }
  }
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_005434b0();
    break;
  case 1:
    FUN_00543600();
    break;
  case 2:
    FUN_00545ed0();
    break;
  case 3:
    FUN_005467f0();
    break;
  case 4:
    FUN_00544b20();
    break;
  case 5:
    FUN_00544e30();
    break;
  case 6:
  case 7:
  case 8:
    if (*(int *)(param_1 + 0x61c) == 0) {
      *(undefined4 *)(param_1 + 0x61c) = 1;
    }
    break;
  case 9:
    FUN_005463e0();
  }
  FUN_00541f30();
  if (*(int *)(param_1 + 0x4e4) == 0) {
    FUN_00545d30();
    FUN_00545c00();
    if (0.0 < *(float *)(param_1 + 0xe94)) {
      *(float *)(param_1 + 0xe94) =
           *(float *)(param_1 + 0xe94) - *(float *)(param_1 + 0x910) * 0.016666668;
    }
    if (*(float *)(param_1 + 0xe94) <= 0.0) {
      *(float *)(param_1 + 0xea4) =
           *(float *)(param_1 + 0xea4) - *(float *)(param_1 + 0x910) * 0.016666668;
    }
    iVar2 = *(int *)(param_1 + 0xe98);
    uVar1 = iVar2 - 1;
    *(uint *)(param_1 + 0xe98) = uVar1;
    if (0 < iVar2) {
      fVar4 = (float)(int)uVar1 * 0.1308997;
      if ((uVar1 & 1) != 0) {
        fVar4 = -fVar4;
      }
      fVar3 = (float10)FUN_00dde300(0xbdb2b8c2,0x3db2b8c2);
      fVar4 = (float)(fVar3 + (float10)fVar4);
      fVar3 = (float10)FUN_00dde300(0xbdcccccd,0x3dcccccd);
      fVar5 = (float)(fVar3 + (float10)*(float *)(param_1 + 0xea0));
      fVar3 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xe9c) + fVar4,unaff_ESI,fVar4,fVar5);
      FUN_005449b0(fVar5,(float)fVar3);
      *(undefined4 *)(param_1 + 0xe94) = 0x41700000;
    }
    return;
  }
  return;
}

// 00546E40  FUN_00546e40  size=40  [run]
void FUN_00546e40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    FUN_00e36ac0(param_1,param_2);
  }
  return;
}

// 00546EC0  FUN_00546ec0  size=37  [run]
void __thiscall FUN_00546ec0(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  *(undefined2 *)(param_1 + 4) = param_3;
  return;
}

