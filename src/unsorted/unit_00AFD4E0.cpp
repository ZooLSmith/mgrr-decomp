// src/unsorted/unit_00AFD4E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AFD4E0..00AFE400, 3 functions

#include "mgrr.h"

// 00AFD4E0  FUN_00afd4e0  size=2035  [run]
void __fastcall FUN_00afd4e0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((float)param_1[0x7fa] <= 0.0) {
    iVar5 = FUN_00a81330();
    if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
       (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0xd90) = 1;
    }
    iVar5 = FUN_00a81330();
    if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
       (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0xd90) = 1;
    }
    iVar5 = FUN_00a81330();
    if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
       (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0xd90) = 1;
    }
    iVar5 = FUN_00a81330();
    if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
       (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0xd90) = 1;
    }
  }
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(10,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar5 = param_1[0x2a1];
    param_1[0x248] = 0x44160000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0x41a00000;
    param_1[0x250] = 0;
    if (iVar5 != 0) {
      fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
      fStack_1c = *(float *)(iVar5 + 0x44) - (float)param_1[0x11];
      fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
      fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
      fVar1 = fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_20,&fStack_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_20 = 0.0;
        fStack_1c = 1.0;
        fStack_18 = 0.0;
      }
      sVar4 = FUN_00dde2d0(0xfffffff6,10);
      iVar5 = param_1[0x2a1];
      fVar1 = (float)(int)sVar4;
      fStack_20 = fStack_20 * fVar1;
      fStack_1c = fStack_1c * fVar1;
      fStack_18 = fStack_18 * fVar1;
      fStack_14 = fStack_14 * fVar1;
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      param_1[0x71c] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
      param_1[0x71d] = (int)(fVar1 + fStack_1c);
      param_1[0x71e] = (int)(fVar2 + fStack_18);
      param_1[0x71f] = (int)(fStack_14 + fVar3);
    }
    iVar5 = param_1[0x2a1];
    if (iVar5 != 0) {
      fVar7 = (float10)fpatan((float10)*(float *)(iVar5 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar5 + 0x48) - (float10)(float)param_1[0x12]);
      fVar6 = (float10)FUN_00ddba30((float)(fVar7 + (float10)3.1415927));
      iVar5 = FUN_00afb020(&fStack_20,0xffffffff,(float)fVar6,0x3fb2b8c2,0x42200000);
      if (iVar5 == 1) {
LAB_00afd7ed:
        param_1[0x71c] = (int)fStack_20;
        param_1[0x71d] = (int)fStack_1c;
        param_1[0x71e] = (int)fStack_18;
        param_1[0x71f] = (int)fStack_14;
      }
      else {
        fVar6 = (float10)FUN_00ddba30((float)fVar7);
        iVar5 = FUN_00afb020(&fStack_20,0xffffffff,(float)fVar6,0x40490fdb,0x42200000);
        if (iVar5 == 1) goto LAB_00afd7ed;
      }
      if (param_1[0xbe4] != 0) {
        param_1[0x249] = 0x41e00000;
        if ((float)param_1[0x16] <= 0.0) {
          param_1[0x71c] = 0x42be0000;
          param_1[0x71d] = 0x4122b852;
          param_1[0x71e] = 0x42940000;
        }
        else {
          param_1[0x71c] = 0x42d20000;
          param_1[0x71d] = 0x41266666;
          param_1[0x71e] = -0x3d64f5c3;
        }
      }
    }
    param_1[0x24a] = 0;
    param_1[0x880] = 0;
    param_1[0x812] = param_1[0x811];
    param_1[0x811] = -1;
    param_1[0x24b] = 0x42700000;
    param_1[0x251] = 0;
    fVar1 = SQRT(((float)param_1[0x71e] - (float)param_1[0x12]) *
                 ((float)param_1[0x71e] - (float)param_1[0x12]) +
                 ((float)param_1[0x71c] - (float)param_1[0x10]) *
                 ((float)param_1[0x71c] - (float)param_1[0x10]));
    if (NAN(fVar1) || 30.0 < fVar1 == (fVar1 == 30.0)) goto switchD_00afd5d7_caseD_1;
    param_1[0x24b] = (int)((fVar1 - 30.0) * 0.5 + 60.0);
    break;
  case 1:
switchD_00afd5d7_caseD_1:
    break;
  case 2:
    FUN_00aa4080(0xb,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00afda2f;
  case 3:
LAB_00afda2f:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aebe20(param_1 + 0xbe6,param_1 + 0x10,param_1[0x880]);
    FUN_00a581b0(&fStack_20,0,param_1[0x24a]);
    param_1[0x880] = param_1[0x24a];
    fVar1 = (2.0 / (float)param_1[0x24b]) * (float)param_1[0x244] + (float)param_1[0x24a];
    param_1[0x24a] = (int)fVar1;
    if (2.0 <= fVar1) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    goto LAB_00afd9dc;
  case 4:
    FUN_00aa4080(0xc,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00afdb07;
  case 5:
LAB_00afdb07:
    (**(code **)(*param_1 + 0x314))();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.7);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.7);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a8caf0(0,0,0,0);
      if (((float)param_1[0x2a8] < 1.5707964) && (1600.0 < (float)param_1[0x2a4])) {
        if (param_1[0xc30] == 0) {
          uVar8 = 0x18;
        }
        else {
          uVar8 = 0xb;
        }
        FUN_00a8caf0(uVar8,0,0,0);
      }
      if ((((float)param_1[0x2a8] < 1.5707964) && (3600.0 < (float)param_1[0x2a4])) &&
         (sVar4 = FUN_00dde2d0(0,1), sVar4 != 0)) {
        FUN_00a8caf0(3,0,0,0);
      }
      if (((param_1[0x812] == 3) && ((float)param_1[0x2a8] < 1.5707964)) &&
         (1600.0 < (float)param_1[0x2a4])) {
        FUN_00a8caf0(3,0,0,0);
      }
      if (param_1[0xbe4] != 0) {
        FUN_00a8caf0(0x18,0,0,0);
      }
    }
    goto LAB_00afd9dc;
  default:
    goto switchD_00afd5d7_default;
  }
  iVar5 = FUN_00a950a0(0,0x42dc0000);
  if (iVar5 != 0) {
    if (param_1[0x251] == 0) {
      FUN_00afb2b0(param_1 + 0xbe6,param_1 + 0x10,param_1 + 0x71c);
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x251] = 1;
  }
  if (param_1[0x251] == 1) {
    FUN_00aebe20(param_1 + 0xbe6,param_1 + 0x10,param_1[0x880]);
    FUN_00a581b0(&fStack_20,0,param_1[0x24a]);
    param_1[0x880] = param_1[0x24a];
    param_1[0x24a] =
         (int)((2.0 / (float)param_1[0x24b]) * (float)param_1[0x244] + (float)param_1[0x24a]);
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
  }
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_00afd9dc:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_00afd5d7_default:
  if ((param_1[0x2a1] != 0) && (param_1[0x187] == 3)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    if (param_1[0xbe4] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e0efa35,0);
    }
  }
  return;
}

// 00AFDCF0  FUN_00afdcf0  size=1778  [run]
void __fastcall FUN_00afdcf0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_3c;
  float local_30;
  float local_28;
  float local_20;
  float local_18;
  
  if (((*(int *)(param_1 + 0x61c) < 3) || (5 < *(int *)(param_1 + 0x61c))) ||
     (*(int *)(param_1 + 0x1f98) == 0)) {
    local_30 = 0.0;
    local_28 = 0.0;
    *(undefined4 *)(param_1 + 0x1550) = 1;
    iVar7 = FUN_00a12210(0x20);
    if (iVar7 != 0) {
      local_30 = *(float *)(iVar7 + 0x40);
      local_28 = *(float *)(iVar7 + 0x48);
    }
    local_20 = 0.0;
    local_18 = 0.0;
    iVar7 = FUN_00a12210(0xf00);
    if (iVar7 != 0) {
      local_20 = *(float *)(iVar7 + 0x40);
      local_18 = *(float *)(iVar7 + 0x48);
    }
    local_3c = *(float *)(param_1 + 0x94);
    switch(*(undefined4 *)(param_1 + 0x61c)) {
    case 0:
      FUN_00a9f4c0("RHUMITUKE",0x3f000000,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x55,0x3f000000,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x52,0x3f000000,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,2,0x58,0x3f000000,0x8000000);
      *(undefined4 *)(param_1 + 0x924) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x940) = 1;
      sVar6 = FUN_00dde2d0(0,3);
      if (sVar6 == 1) {
        *(undefined4 *)(param_1 + 0x940) = 2;
      }
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x1d20) = 0;
      FUN_00aed150();
      *(undefined4 *)(param_1 + 0x1f98) = 0;
      FUN_00ae8d00();
      FUN_00eaa6e0(0x41200000,0);
      FUN_00afb740(param_1 + 0x3010,0xf00);
    case 1:
      FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x924));
      FUN_00ac80a0(0x3f666666,0x3f800000);
      iVar7 = FUN_00a94ce0(0);
      if (iVar7 != 0) {
        *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        if (*(int *)(param_1 + 0x940) < 1) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
        }
        fVar1 = local_30 - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
        fVar2 = local_28 - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
        if ((35.75 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (*(int *)(param_1 + 0x1d20) != 0)) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
        }
        *(undefined4 *)(param_1 + 0x61c) = 4;
      }
      break;
    case 2:
      FUN_00a9f4c0("RHUMITUKE",0x3daaaaab,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x56,0x3daaaaab,0);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x53,0x3daaaaab,0);
      FUN_00a9f600(0xffffffff,0,0,0,2,0x59,0x3daaaaab,0);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    case 3:
      FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x924));
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar7 = FUN_00a94ce0(0);
      if (iVar7 != 0) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
        if (0 < *(int *)(param_1 + 0x940)) {
          *(undefined4 *)(param_1 + 0x61c) = 2;
        }
        fVar1 = local_30 - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
        fVar2 = local_28 - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
        if ((35.75 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (*(int *)(param_1 + 0x1d20) != 0)) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
        }
      }
      break;
    case 4:
      FUN_00eaa6e0(0x41200000,0);
      FUN_00a9f4c0("RHUMITUKE",0x3daaaaab,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x57,0x3daaaaab,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x54,0x3daaaaab,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,2,0x5a,0x3daaaaab,0x8000000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    case 5:
      FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x924));
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar7 = FUN_00a94ce0(0);
      if (iVar7 != 0) {
        FUN_00a8caf0(0,0,0,0);
        *(undefined4 *)(param_1 + 0xdd8) = 0x42700000;
        iVar7 = FUN_00ac4780();
        if (iVar7 == 2) {
          *(undefined4 *)(param_1 + 0xdd8) = 0x41f00000;
        }
        iVar7 = FUN_00ac4780();
        if (2 < iVar7) {
          *(undefined4 *)(param_1 + 0xdd8) = 0x40c00000;
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0xa84);
    if (iVar7 != 0) {
      local_30 = local_30 - *(float *)(iVar7 + 0x40);
      local_28 = local_28 - *(float *)(iVar7 + 0x48);
      fVar5 = SQRT(local_28 * local_28 + local_30 * local_30);
      fVar1 = *(float *)(iVar7 + 0x40);
      fVar2 = *(float *)(param_1 + 0x40);
      fVar3 = *(float *)(iVar7 + 0x48);
      fVar4 = *(float *)(param_1 + 0x48);
      fVar8 = (float10)fpatan((float10)local_20 - (float10)*(float *)(param_1 + 0x40),
                              (float10)local_18 - (float10)*(float *)(param_1 + 0x48));
      fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)*(float *)(param_1 + 0x94)));
      fVar9 = (float10)fpatan((float10)(fVar1 - fVar2),(float10)(fVar3 - fVar4));
      fVar8 = (float10)FUN_00ddba30((float)(fVar9 - fVar8));
      local_3c = (float)fVar8;
      fVar1 = *(float *)(param_1 + 0x924);
      iVar7 = FUN_00a8c760(0);
      if (((iVar7 != 0) && (*(int *)(param_1 + 0x1d20) == 0)) && (9.873 < fVar5)) {
        if (fVar5 < 10.97) {
          fVar1 = 0.0;
        }
        if (30.75 < fVar5) {
          fVar1 = 2.0;
        }
        if ((10.97 <= fVar5) && (fVar5 < 19.4)) {
          fVar1 = (fVar5 - 10.97) * 0.11862397;
        }
        if ((19.4 <= fVar5) && (fVar5 < 30.75)) {
          fVar1 = (fVar5 - 19.4) * 0.08810572 + 1.0;
        }
        *(float *)(param_1 + 0x924) =
             (fVar1 - *(float *)(param_1 + 0x924)) * 0.3 + *(float *)(param_1 + 0x924);
      }
    }
    iVar7 = FUN_00a8c760(0);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0x1d20) == 0)) {
      FUN_00a8db10((undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x94),local_3c,
                   0x3dcccccd,0x3ae4c388,0x3d567750);
    }
  }
  else {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00a8caf0(0x28,0,0,0);
    *(undefined4 *)(param_1 + 0x1fc4) = 0;
    *(undefined4 *)(param_1 + 0x204c) = 0xffffffff;
    if ((*(byte *)(param_1 + 0xdc4) & 0xc0) != 0xc0) {
      *(undefined4 *)(param_1 + 0x2054) = 0x41200000;
      *(undefined4 *)(param_1 + 0x204c) = 0x10;
      *(undefined4 *)(param_1 + 0x2050) = 0x42700000;
      FUN_00c81b30(0x2d);
      return;
    }
  }
  return;
}

// 00AFE400  FUN_00afe400  size=1778  [run]
void __fastcall FUN_00afe400(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_3c;
  float local_30;
  float local_28;
  float local_20;
  float local_18;
  
  if (((*(int *)(param_1 + 0x61c) < 3) || (5 < *(int *)(param_1 + 0x61c))) ||
     (*(int *)(param_1 + 0x1f98) == 0)) {
    local_30 = 0.0;
    local_28 = 0.0;
    *(undefined4 *)(param_1 + 0x1550) = 1;
    iVar7 = FUN_00a12210(0x2b);
    if (iVar7 != 0) {
      local_30 = *(float *)(iVar7 + 0x40);
      local_28 = *(float *)(iVar7 + 0x48);
    }
    local_20 = 0.0;
    local_18 = 0.0;
    iVar7 = FUN_00a12210(0xf00);
    if (iVar7 != 0) {
      local_20 = *(float *)(iVar7 + 0x40);
      local_18 = *(float *)(iVar7 + 0x48);
    }
    local_3c = *(float *)(param_1 + 0x94);
    switch(*(undefined4 *)(param_1 + 0x61c)) {
    case 0:
      FUN_00a9f4c0("LHUMITUKE",0x3f000000,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x5e,0x3f000000,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x5b,0x3f000000,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,2,0x61,0x3f000000,0x8000000);
      *(undefined4 *)(param_1 + 0x924) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x940) = 1;
      sVar6 = FUN_00dde2d0(0,3);
      if (sVar6 == 1) {
        *(undefined4 *)(param_1 + 0x940) = 2;
      }
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x1d20) = 0;
      FUN_00aed150();
      *(undefined4 *)(param_1 + 0x1f98) = 0;
      FUN_00ae8d00();
      FUN_00eaa6e0(0x41200000,0);
      FUN_00afb740(param_1 + 0x3010,0xf00);
    case 1:
      FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x924));
      FUN_00ac80a0(0x3f666666,0x3f800000);
      iVar7 = FUN_00a94ce0(0);
      if (iVar7 != 0) {
        *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        if (*(int *)(param_1 + 0x940) < 1) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
        }
        fVar1 = local_30 - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
        fVar2 = local_28 - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
        if ((42.4 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (*(int *)(param_1 + 0x1d20) != 0)) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
        }
        *(undefined4 *)(param_1 + 0x61c) = 4;
      }
      break;
    case 2:
      FUN_00a9f4c0("LHUMITUKE",0x3daaaaab,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x5f,0x3daaaaab,0);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x5c,0x3daaaaab,0);
      FUN_00a9f600(0xffffffff,0,0,0,2,0x62,0x3daaaaab,0);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    case 3:
      FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x924));
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar7 = FUN_00a94ce0(0);
      if (iVar7 != 0) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
        if (0 < *(int *)(param_1 + 0x940)) {
          *(undefined4 *)(param_1 + 0x61c) = 2;
        }
        fVar1 = local_30 - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
        fVar2 = local_28 - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
        if ((42.4 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (*(int *)(param_1 + 0x1d20) != 0)) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
        }
      }
      break;
    case 4:
      FUN_00a9f4c0("LHUMITUKE",0x3daaaaab,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x60,0x3daaaaab,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x5d,0x3daaaaab,0x8000000);
      FUN_00a9f600(0xffffffff,0,0,0,2,99,0x3daaaaab,0x8000000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      FUN_00eaa6e0(0x41200000,0);
    case 5:
      FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x924));
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar7 = FUN_00a94ce0(0);
      if (iVar7 != 0) {
        FUN_00a8caf0(0,0,0,0);
        *(undefined4 *)(param_1 + 0xdd8) = 0x42700000;
        iVar7 = FUN_00ac4780();
        if (iVar7 == 2) {
          *(undefined4 *)(param_1 + 0xdd8) = 0x41f00000;
        }
        iVar7 = FUN_00ac4780();
        if (2 < iVar7) {
          *(undefined4 *)(param_1 + 0xdd8) = 0x40c00000;
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0xa84);
    if (iVar7 != 0) {
      local_30 = local_30 - *(float *)(iVar7 + 0x40);
      local_28 = local_28 - *(float *)(iVar7 + 0x48);
      fVar5 = SQRT(local_28 * local_28 + local_30 * local_30);
      fVar1 = *(float *)(iVar7 + 0x40);
      fVar2 = *(float *)(param_1 + 0x40);
      fVar3 = *(float *)(iVar7 + 0x48);
      fVar4 = *(float *)(param_1 + 0x48);
      fVar8 = (float10)fpatan((float10)local_20 - (float10)*(float *)(param_1 + 0x40),
                              (float10)local_18 - (float10)*(float *)(param_1 + 0x48));
      fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)*(float *)(param_1 + 0x94)));
      fVar9 = (float10)fpatan((float10)(fVar1 - fVar2),(float10)(fVar3 - fVar4));
      fVar8 = (float10)FUN_00ddba30((float)(fVar9 - fVar8));
      local_3c = (float)fVar8;
      fVar1 = *(float *)(param_1 + 0x924);
      iVar7 = FUN_00a8c760(0);
      if (((iVar7 != 0) && (*(int *)(param_1 + 0x1d20) == 0)) && (11.987999 < fVar5)) {
        if (fVar5 < 13.32) {
          fVar1 = 0.0;
        }
        if (37.4 < fVar5) {
          fVar1 = 2.0;
        }
        if ((13.32 <= fVar5) && (fVar5 < 25.85)) {
          fVar1 = (fVar5 - 13.32) * 0.07980846;
        }
        if ((25.85 <= fVar5) && (fVar5 < 37.4)) {
          fVar1 = (fVar5 - 25.85) * 0.086580075 + 1.0;
        }
        *(float *)(param_1 + 0x924) =
             (fVar1 - *(float *)(param_1 + 0x924)) * 0.3 + *(float *)(param_1 + 0x924);
      }
    }
    iVar7 = FUN_00a8c760(0);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0x1d20) == 0)) {
      FUN_00a8db10((undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x94),local_3c,
                   0x3dcccccd,0x3ae4c388,0x3d567750);
    }
  }
  else {
    FUN_00eaa6e0(0x41200000,0);
    FUN_00a8caf0(0x29,0,0,0);
    *(undefined4 *)(param_1 + 0x1fc4) = 0;
    *(undefined4 *)(param_1 + 0x204c) = 0xffffffff;
    if ((*(byte *)(param_1 + 0xdc4) & 0x30) != 0x30) {
      *(undefined4 *)(param_1 + 0x2054) = 0x41200000;
      *(undefined4 *)(param_1 + 0x204c) = 0xe;
      *(undefined4 *)(param_1 + 0x2050) = 0x42700000;
      FUN_00c81b30(0x2d);
      return;
    }
  }
  return;
}

