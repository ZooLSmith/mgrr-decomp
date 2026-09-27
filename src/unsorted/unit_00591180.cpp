// src/unsorted/unit_00591180.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00591180..005923D0, 5 functions

#include "mgrr.h"

// 00591180  FUN_00591180  size=304  [run]
void __fastcall FUN_00591180(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  (**(code **)(*param_1 + 0xf8))(0);
  piVar1 = (int *)FUN_00ac89d0();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xf8))(0);
  }
  FUN_0058ae10(0xf0003);
  iVar2 = FUN_00585400();
  if (iVar2 == 0) {
    FUN_00c18610(2,0);
    iVar2 = FUN_00585400();
    if (iVar2 != 0) {
      FUN_004fbb20(param_1[0x13c]);
    }
  }
  piVar1 = (int *)FUN_00585400();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xf8))(0);
    FUN_00a93090(2);
    (**(code **)(*piVar1 + 0x1c))();
    (**(code **)(*piVar1 + 0x150))(0x6a,param_1[0x13c]);
  }
  FUN_00a9e120(0,0x702,0xffffffff);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_01b35144;
      (**(code **)(*piVar1 + 4))(&DAT_01b35144);
      iVar2 = FUN_00dd6d70(puVar3);
      if (iVar2 != 0) {
        FUN_00aa4520(0x123,param_1[0x13c],0,0,0x3f800000,0,0xbf800000,0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x005912ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar1 + 100))();
        return;
      }
    }
  }
  return;
}

// 005912B0  FUN_005912b0  size=671  [run]
undefined4 __fastcall FUN_005912b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 local_168;
  int iStack_164;
  int aiStack_160 [87];
  
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar8 = &DAT_01b34eb0;
    (**(code **)(*piVar3 + 4))(&DAT_01b34eb0);
    iVar2 = FUN_00dd6d70(puVar8);
    if ((iVar2 != 0) &&
       ((iVar2 = FUN_00a81330(), iVar2 != 0 &&
        (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)))) {
      puVar8 = &DAT_01b35140;
      (**(code **)(*piVar3 + 4))(&DAT_01b35140);
      iVar2 = FUN_00dd6d70(puVar8);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
      goto LAB_0059133f;
    }
  }
  uVar4 = 0;
LAB_0059133f:
  local_168 = 0x140;
  if (uVar4 != 0) {
    local_168 = *(undefined4 *)(uVar4 + 0x1980);
  }
  iVar2 = FUN_00a8ef10();
  if (iVar2 == 0) {
    param_1[0x1a1] = 0;
    FUN_00ac2080(0);
    piVar3 = (int *)param_1[0x19f];
    piVar6 = piVar3 + param_1[0x1a1] * 0x54;
    iStack_164 = 0;
    FUN_00445db0();
    iVar2 = -1;
    for (; piVar3 != piVar6; piVar3 = piVar3 + 0x54) {
      iVar1 = piVar3[1];
      if ((*piVar3 != 0x147) && (iVar2 <= iVar1)) {
        FUN_00448f50(piVar3);
        iStack_164 = 1;
        iVar2 = iVar1;
      }
    }
    iVar2 = FUN_00a8f040(aiStack_160);
    if ((iVar2 == 0) && (piVar3 = (int *)0x0, iStack_164 != 0)) {
      if (((aiStack_160[0] != 0) &&
          (((aiStack_160[0] != 1 && (aiStack_160[0] != 2)) && (aiStack_160[0] != 0x1b0)))) &&
         (aiStack_160[0] != 0x147)) {
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          piVar3 = (int *)FUN_00a7c8a0();
        }
        if (aiStack_160[0] == 0x143) {
          if (piVar3 == (int *)0x0) {
            return 1;
          }
          uVar7 = 3;
          (**(code **)(*piVar3 + 0x150))(0x6c,param_1[0x13c]);
          uVar5 = FUN_00a7c7f0();
          FUN_00a7c960(uVar5);
        }
        else {
          (**(code **)(*param_1 + 0x30c))(local_168,0);
          piVar6 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar6 + 0x2c))();
          iVar2 = FUN_00a8eea0();
          if (iVar2 < 1) {
            uVar7 = 0xb;
          }
          else {
            uVar7 = 8;
            uVar4 = FUN_00dde2d0(0,100);
            if ((uVar4 & 1) != 0) {
              uVar7 = 9;
            }
          }
          (**(code **)(*param_1 + 0x198))(piVar3,&local_168,1);
          iVar2 = FUN_00a81330();
          if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
            (**(code **)(*piVar3 + 0x150))(0x6d,param_1[0x13c]);
          }
          FUN_00a7c950();
        }
        FUN_00a8cb60(uVar7);
        FUN_00a8cb60(uVar7);
      }
      return 1;
    }
  }
  return 0;
}

// 00591550  FUN_00591550  size=3332  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00591550(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 uVar13;
  undefined *puVar14;
  uint local_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_184;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [12];
  undefined1 auStack_164 [4];
  undefined1 auStack_160 [348];
  
  iVar1 = FUN_00a81330();
  uVar5 = 0;
  local_1a4 = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar14 = &DAT_01b34eb0;
      (**(code **)(*piVar2 + 4))(&DAT_01b34eb0);
      iVar1 = FUN_00dd6d70(puVar14);
      uVar5 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      local_1a4 = 0;
    }
    else {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        local_1a4 = 0;
      }
      else {
        puVar14 = &DAT_01b35140;
        (**(code **)(*piVar2 + 4))(&DAT_01b35140);
        iVar1 = FUN_00dd6d70(puVar14);
        local_1a4 = -(uint)(iVar1 != 0) & (uint)piVar2;
      }
    }
  }
  uVar3 = FUN_00a81330();
  fVar6 = (float10)FUN_00fdc1f0();
  fVar9 = (float10)1;
  fVar6 = fVar9 - fVar6;
  fStack_184 = (float)fVar6;
  switch(param_1[0x187]) {
  case 0:
    FUN_004168f0(6);
    (**(code **)(*param_1 + 0x220))(0x42700000);
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    FUN_00a9f4c0("RiseBuildPl",0,0,0);
    FUN_00a9f650(uVar3,0xffffffff,0,0,0,0,0x140,0,0);
    FUN_00a9f650(uVar3,0xffffffff,0,1,0,0,0x142,0,0);
    FUN_00a9f650(uVar3,0xffffffff,0,0xffffffff,0,0,0x145,0,0);
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x187] = 2;
    FUN_004cb9a0(0x34);
    FUN_00e020f0(param_1[0x13c]);
    uVar3 = FUN_00a8c890(0);
    FUN_00dffb30(uVar3);
    FUN_00a8c8b0(0x20310,auStack_164);
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    param_1[0x248] = 0;
    param_1[0x24b] = 0;
    return;
  case 1:
    FUN_00a9f4c0("RiseBuildPl",0,0,0);
    FUN_00a9f650(uVar3,0xffffffff,0,0,0,0,0x140,0,0);
    FUN_00a9f650(uVar3,0xffffffff,0,1,0,0,0x142,0,0);
    FUN_00a9f650(uVar3,0xffffffff,0,0xffffffff,0,0,0x145,0,0);
    FUN_004cb9a0(0x34);
    FUN_00e020f0(param_1[0x13c]);
    uVar3 = FUN_00a8c890(0);
    FUN_00dffb30(uVar3);
    FUN_00a8c8b0(0x20310,auStack_160);
    param_1[0x24a] = 0;
    param_1[0x248] = 0;
    param_1[0x24b] = 0;
    fStack_1a0 = 0.0;
    fStack_19c = 0.0;
    fStack_198 = 0.0;
    FUN_0057baf0(&fStack_1a0,0);
    fVar6 = (float10)fStack_184;
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00591846;
  case 2:
LAB_00591846:
    fVar12 = (float10)0;
    fVar7 = (float10)200.0;
    fVar8 = (float10)0.00125;
    fVar9 = fVar12;
    if (fVar7 < (float10)(float)param_1[0x342]) {
      fVar9 = ((float10)(float)param_1[0x342] - fVar7) * fVar8;
    }
    if ((float)param_1[0x342] < -200.0) {
      fVar9 = ((float10)(float)param_1[0x342] + fVar7) * fVar8;
    }
    fVar10 = fVar12;
    if (fVar7 < (float10)(float)param_1[0x343]) {
      fVar10 = ((float10)(float)param_1[0x343] - fVar7) * fVar8;
    }
    if ((float)param_1[0x343] < -200.0) {
      fVar10 = ((float10)(float)param_1[0x343] + fVar7) * fVar8;
    }
    fVar11 = fVar12;
    if (fVar7 < (float10)(float)param_1[0x344]) {
      fVar11 = ((float10)(float)param_1[0x344] - fVar7) * fVar8;
    }
    if ((float)param_1[0x344] < -200.0) {
      fVar11 = fVar8 * ((float10)(float)param_1[0x344] + fVar7);
    }
    param_1[0x248] =
         (int)(float)((fVar9 - (float10)(float)param_1[0x248]) * fVar6 +
                     (float10)(float)param_1[0x248]);
    param_1[0x24a] =
         (int)(float)((fVar10 - (float10)(float)param_1[0x24a]) * fVar6 +
                     (float10)(float)param_1[0x24a]);
    param_1[0x24b] =
         (int)(float)((float10)(float)param_1[0x24b] +
                     (fVar11 - (float10)(float)param_1[0x24b]) * fVar6);
    FUN_00a947e0(0,param_1[0x248],(float)fVar12,(float)fVar12);
    fStack_1a0 = 0.0;
    fStack_19c = 0.0;
    fStack_198 = 0.0;
    if ((0.001 < ABS((float)param_1[0x248])) || (0.001 < ABS((float)param_1[0x24a]))) {
      pfVar4 = (float *)FUN_00a8b9b0(auStack_180,
                                     -((float)param_1[0x248] * *(float *)(local_1a4 + 0x1974) *
                                      (float)param_1[0x244]));
      fStack_1a0 = *pfVar4;
      fStack_19c = pfVar4[1];
      fStack_198 = pfVar4[2];
      fStack_194 = pfVar4[3];
      pfVar4 = (float *)FUN_00a8b8a0(auStack_170,
                                     *(float *)(local_1a4 + 0x1974) * (float)param_1[0x24a] *
                                     (float)param_1[0x244]);
      fStack_1a0 = fStack_1a0 + *pfVar4;
      fStack_19c = pfVar4[1] + fStack_19c;
      fStack_198 = pfVar4[2] + fStack_198;
      fStack_194 = pfVar4[3] + fStack_194;
    }
    FUN_0057baf0(&fStack_1a0,*(float *)(local_1a4 + 0x1978) * (float)param_1[0x24b]);
    *(int *)(uVar5 + 0x1590) = param_1[0x248];
    if (((float)param_1[0x249] <= 0.0) &&
       ((param_1[0x33f] &
        (param_1[0x392] | param_1[0x38f] | param_1[0x38e] | param_1[0x389] | param_1[0x388] |
         param_1[0x386] | param_1[0x382])) != 0)) {
      *(undefined4 *)(uVar5 + 0x15d0) = 2;
      param_1[0x249] = (int)(*(float *)(local_1a4 + 0x1984) * 60.0);
      FUN_00dda360(0,0x3f19999a,0x3f19999a,10);
    }
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
LAB_00591a6d:
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  case 3:
    FUN_00a8c9b0(0,0x34,0,0);
    FUN_00aa4520(0x17d,uVar3,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x187] = 4;
    return;
  case 4:
    FUN_00b94790((float)fVar9,(float)fVar9);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4520(0x17e,uVar3,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      iVar1 = *(int *)(local_1a4 + 0x1988);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = iVar1;
      return;
    }
    break;
  case 5:
    FUN_00cbc8f0(0x4000,1);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00b7a7c0();
    if ((iVar1 != 0) && (param_1[0x250] = param_1[0x250] - iVar1, param_1[0x250] < 1)) {
      if (uVar5 != 0) {
        FUN_00a8cb60(6);
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    FUN_00aa4520(0x17f,uVar3,0,0x3e088889,(float)fVar9,0x8000000,0xbf800000,(float)fVar9);
    FUN_00a7c950();
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 7:
  case 10:
    FUN_00b94790((float)fVar9,(float)fVar9);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 1;
      return;
    }
    break;
  case 8:
    FUN_00a8c9b0(0,0x34,0,0);
    uVar13 = 0x147;
    goto LAB_00591d4d;
  case 9:
    FUN_00a8c9b0(0,0x34,0,0);
    uVar13 = 0x148;
LAB_00591d4d:
    FUN_00aa4520(uVar13,uVar3,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = 10;
    goto LAB_00591a6d;
  case 0xb:
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x150))(0x6d,param_1[0x13c]);
    }
    FUN_00a8c9b0(0,0x34,0,0);
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
    }
    if ((uVar5 != 0) && (iVar1 = FUN_00a94360(), iVar1 == 0)) {
      FUN_00a8c5f0(0,*(undefined4 *)(uVar5 + 0x4f0),param_1[0x13c],0xffffffff,0xffffffff);
    }
    (**(code **)(*param_1 + 0x318))();
    param_1[0x139] = 1;
    FUN_00aa4520(0x149,uVar3,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00591a6d;
  case 0xc:
    FUN_00b94790((float)fVar9,(float)fVar9);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00d5ea40("P470_QTE_DEAD",1,0);
      return;
    }
    break;
  case 0xd:
    FUN_00aa4520(0x14c,uVar3,0,0x3daaaaab,(float)fVar9,0x8000000,0xbf800000,(float)fVar9);
    FUN_00a8c9b0(0,0x34,0,0);
    param_1[0x249] = 0x41200000;
    param_1[0x250] = 0;
    FUN_00e5e1b0("bgm_Sundowner_QTE3");
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00591f79;
  case 0xe:
LAB_00591f79:
    FUN_00db3e80(0x40a00000,1,&DAT_01bea1d0);
    fStack_184 = (float)FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x20);
    if (iVar1 != 0) {
      if (param_1[0x250] == 0) {
        param_1[0x250] = 1;
        FUN_00a9e060(0);
        param_1[0x14] = *(int *)(uVar5 + 0x50);
        param_1[0x15] = *(int *)(uVar5 + 0x54);
        param_1[0x16] = *(int *)(uVar5 + 0x58);
        param_1[0x17] = *(int *)(uVar5 + 0x5c);
        param_1[0x24] = *(int *)(uVar5 + 0x90);
        param_1[0x25] = *(int *)(uVar5 + 0x94);
        param_1[0x26] = *(int *)(uVar5 + 0x98);
        param_1[0x27] = *(int *)(uVar5 + 0x9c);
        FUN_00b7dbe0(0x21);
        FUN_00b7aa80();
      }
      FUN_00b85350(0x40a00000,param_1[0x1028],param_1[0x1028],1,1,0x3dcccccd);
    }
    if ((0.0 < (float)param_1[0xd07]) && (iVar1 = FUN_00b7a500(), iVar1 != 0)) {
      FUN_00b89c20(0x13d,0xf,0x21,uVar3,0,0x41f00000,0x41f00000,0x42480000);
      return;
    }
    break;
  case 0xf:
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
    }
    if ((uVar5 != 0) && (iVar1 = FUN_00a94360(), iVar1 == 0)) {
      FUN_00a8c5f0(0,*(undefined4 *)(uVar5 + 0x4f0),param_1[0x13c],0xffffffff,0xffffffff);
    }
    (**(code **)(*param_1 + 0x318))();
    FUN_00b94790(0x3f800000,0x3f800000);
    uVar13 = *(undefined4 *)(local_1a4 + 0x1970);
    FUN_00a9f4c0("RiseBuildPl",uVar13,0,0);
    FUN_00a9f650(uVar3,0xffffffff,0,0,0,0,0x140,uVar13,0);
    FUN_00a9f650(uVar3,0xffffffff,0,1,0,0,0x142,uVar13,0);
    FUN_00a9f650(uVar3,0xffffffff,0,0xffffffff,0,0,0x145,uVar13,0);
    FUN_004cb9a0(0x34);
    FUN_00e020f0(param_1[0x13c]);
    uVar3 = FUN_00a8c890(0);
    FUN_00dffb30(uVar3);
    FUN_00a8c8b0(0x20310,auStack_160);
    param_1[0x187] = 2;
    return;
  case 0x10:
    goto LAB_00591a6d;
  }
  return;
}

// 005922A0  FUN_005922a0  size=295  [run]
undefined4 __fastcall FUN_005922a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  if ((param_1[0x128] == 7) && (param_1[0x186] != 0x8000a)) {
    param_1[0x1a1] = 0;
    FUN_00ac2080(0);
    piVar4 = (int *)param_1[0x19f];
    piVar2 = piVar4 + param_1[0x1a1] * 0x54;
    for (; piVar4 != piVar2; piVar4 = piVar4 + 0x54) {
      iVar1 = *piVar4;
      if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) &&
         (((iVar1 != 0x1b0 && (iVar1 != 0x147)) && (iVar1 == 0x142)))) {
        (**(code **)(*param_1 + 0x344))(8,2,1);
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          uVar3 = FUN_00a7c8a0();
        }
        (**(code **)(*param_1 + 0x198))(uVar3,piVar4,1);
        (**(code **)(*param_1 + 0x20))();
        (**(code **)(param_1[0x3bc] + 8))(0,0,0);
        FUN_00aa92c0(0xd);
        FUN_004dd770(0x8000b,0,0,0,0);
      }
    }
    return 1;
  }
  return 0;
}

// 005923D0  FUN_005923d0  size=1940  [run]
void __fastcall FUN_005923d0(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined *puVar17;
  undefined1 auStack_164 [352];
  
  iVar4 = FUN_00a81330();
  uVar7 = 0;
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar17 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d70(puVar17);
    uVar7 = -(uint)(iVar4 != 0) & (uint)piVar5;
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  param_1[0x15] = (int)(((float)param_1[0x561] - (float)param_1[0x15]) * 0.1 + (float)param_1[0x15])
  ;
  switch(param_1[0x187]) {
  case 0:
    iVar4 = FUN_00fdbbd0(DAT_018b925c,&DAT_01641f14);
    if (iVar4 != 0) {
      if (uVar7 != 0) {
        uVar6 = FUN_009f8b40();
        FUN_00ac8a80(uVar6);
        FUN_00a8c5f0(0,param_1[0x13c],*(undefined4 *)(uVar7 + 0x4f0),0xffffffff,0xffffffff);
        FUN_00a93090(2);
      }
      FUN_00a9f4c0("RiseBuild",0,0,0);
      uVar15 = 0;
      uVar13 = 0;
      uVar16 = 0x12d;
      uVar14 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0xffffffff;
      uVar6 = FUN_00a81330(0xffffffff,0,0,0,0,0x12d,0,0);
      FUN_00a9f650(uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16,uVar13,uVar15);
      uVar15 = 0;
      uVar13 = 0;
      uVar16 = 0x12f;
      uVar14 = 0;
      uVar12 = 0;
      uVar11 = 1;
      uVar10 = 0;
      uVar9 = 0xffffffff;
      uVar6 = FUN_00a81330(0xffffffff,0,1,0,0,0x12f,0,0);
      FUN_00a9f650(uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16,uVar13,uVar15);
      uVar15 = 0;
      uVar13 = 0;
      uVar16 = 0x132;
      uVar14 = 0;
      uVar12 = 0;
      uVar11 = 0xffffffff;
      uVar10 = 0;
      uVar9 = 0xffffffff;
      uVar6 = FUN_00a81330(0xffffffff,0,0xffffffff,0,0,0x132,0,0);
      FUN_00a9f650(uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16,uVar13,uVar15);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      FUN_004cb9a0(0x35);
      FUN_00e020f0(param_1[0x13c]);
      uVar6 = FUN_00a8c890(0);
      FUN_00dffb30(uVar6);
      FUN_00a8c8b0(0x20310,auStack_164);
      iVar4 = FUN_00a92f90();
      if (iVar4 != 0) {
        FUN_00a92f90();
        FUN_00e36b50(0,0x10,0);
      }
      param_1[0x24f] = 0;
      param_1[599] = 0;
      return;
    }
    break;
  case 1:
    FUN_00a9f4c0("RiseBuild",0,0,0);
    uVar15 = 0;
    uVar13 = 0;
    uVar16 = 0x12d;
    uVar14 = 0;
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0xffffffff;
    uVar6 = FUN_00a81330(0xffffffff,0,0,0,0,0x12d,0,0);
    FUN_00a9f650(uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16,uVar13,uVar15);
    uVar15 = 0;
    uVar13 = 0;
    uVar16 = 0x12f;
    uVar14 = 0;
    uVar12 = 0;
    uVar11 = 1;
    uVar10 = 0;
    uVar9 = 0xffffffff;
    uVar6 = FUN_00a81330(0xffffffff,0,1,0,0,0x12f,0,0);
    FUN_00a9f650(uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16,uVar13,uVar15);
    uVar15 = 0;
    uVar13 = 0;
    uVar16 = 0x132;
    uVar14 = 0;
    uVar12 = 0;
    uVar11 = 0xffffffff;
    uVar10 = 0;
    uVar9 = 0xffffffff;
    uVar6 = FUN_00a81330(0xffffffff,0,0xffffffff,0,0,0x132,0,0);
    FUN_00a9f650(uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16,uVar13,uVar15);
    iVar4 = FUN_00a92f90();
    if (iVar4 != 0) {
      FUN_00a92f90();
      FUN_00e36b50(0,0x10,0);
    }
    param_1[0x24f] = 0;
    param_1[599] = 0;
    param_1[0x187] = param_1[0x187] + 1;
  case 2:
    fVar1 = (float)param_1[0x564];
    bVar3 = 0.1 <= ABS(fVar1);
    if (param_1[599] == 0) {
      if (bVar3) {
        param_1[599] = 1;
        FUN_00aa92c0(0x11);
      }
    }
    else if (bVar3) {
      param_1[0x24f] = 0;
    }
    else {
      fVar2 = (float)param_1[0x24f];
      param_1[0x24f] = (int)((float)param_1[0x244] + fVar2);
      if (10.0 < (float)param_1[0x244] + fVar2) {
        param_1[599] = 0;
        FUN_00a8c9b0(0,0x11,0,0);
      }
    }
    FUN_00a947e0(0,fVar1,0,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x14] = (int)((float)param_1[0x55c] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x55d] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x55e]);
    param_1[0x17] = (int)((float)param_1[0x55f] + (float)param_1[0x17]);
    if ((((float)param_1[0x55c] != 0.0) || ((float)param_1[0x55d] != 0.0)) ||
       ((float)param_1[0x55e] != 0.0)) {
      param_1[600] = param_1[0x55c];
      param_1[0x259] = param_1[0x55d];
      param_1[0x25a] = param_1[0x55e];
      param_1[0x25b] = param_1[0x55f];
    }
    fVar8 = (float10)FUN_00ddba30((float)param_1[0x25] + (float)param_1[0x575]);
    param_1[0x25] = (int)(float)fVar8;
    if (param_1[0x574] != 0) {
      FUN_0058ab60();
      param_1[0x574] = param_1[0x574] + -1;
      return;
    }
    break;
  case 3:
    uVar16 = 0x3f800000;
    uVar14 = 0xbf800000;
    uVar12 = 0x8000000;
    uVar11 = 0x3f800000;
    uVar10 = 0x3e088889;
    uVar9 = 0;
    uVar6 = FUN_00a81330(0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(0x181,uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16);
    if (param_1[599] != 0) {
      FUN_00a8c9b0(0,0x11,0,0);
      param_1[599] = 0;
    }
    param_1[0x574] = 0;
    param_1[0x187] = 4;
    return;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      uVar16 = 0x3f800000;
      uVar14 = 0xbf800000;
      uVar12 = 0;
      uVar11 = 0x3f800000;
      uVar10 = 0x3d088889;
      uVar9 = 0;
      uVar6 = FUN_00a81330(0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00aa4520(0x182,uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
  case 0xe:
    goto LAB_00592914;
  case 6:
    uVar16 = 0x3f800000;
    uVar14 = 0xbf800000;
    uVar12 = 0x8000000;
    uVar11 = 0x3f800000;
    uVar10 = 0x3e088889;
    uVar9 = 0;
    uVar6 = FUN_00a81330(0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(0x183,uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 7:
  case 10:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 1;
      return;
    }
    break;
  case 8:
    uVar16 = 0x3f800000;
    uVar14 = 0xbf800000;
    uVar12 = 0x8000000;
    uVar11 = 0x3f800000;
    uVar10 = 0x3daaaaab;
    uVar9 = 0;
    uVar6 = FUN_00a81330(0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(0x134,uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16);
    if (param_1[599] != 0) {
      FUN_00a8c9b0(0,0x11,0,0);
      param_1[599] = 0;
    }
    param_1[0x187] = 10;
    goto LAB_00592914;
  case 9:
    uVar16 = 0x3f800000;
    uVar14 = 0xbf800000;
    uVar12 = 0x8000000;
    uVar11 = 0x3f800000;
    uVar10 = 0x3daaaaab;
    uVar9 = 0;
    uVar6 = FUN_00a81330(0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(0x135,uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16);
    param_1[0x187] = 10;
    goto LAB_00592914;
  case 0xb:
    (**(code **)(param_1[0x3bc] + 8))(0,0,0);
    uVar16 = 0x3f800000;
    uVar14 = 0xbf800000;
    uVar12 = 0x8000000;
    uVar11 = 0x3f800000;
    uVar10 = 0x3daaaaab;
    uVar9 = 0;
    uVar6 = FUN_00a81330(0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(0x136,uVar6,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16);
    goto LAB_00592af6;
  case 0xc:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 0xd:
LAB_00592af6:
    if (param_1[599] != 0) {
      FUN_00a8c9b0(0,0x11,0,0);
      param_1[599] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
LAB_00592914:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

