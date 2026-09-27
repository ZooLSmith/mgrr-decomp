// src/unsorted/unit_0053D620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0053D620..0053E5A0, 5 functions

#include "mgrr.h"

// 0053D620  FUN_0053d620  size=450  [run]
void __fastcall FUN_0053d620(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0x1010) < 2) || (5 < *(uint *)(param_1 + 0x1010))) {
    FUN_00522dd0();
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) < 6.25) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      FUN_00533f90(0,0,0);
      FUN_0053aa20();
      FUN_00519510();
      FUN_0051d620(0x10022,0,0,0,0);
      return;
    }
    FUN_0051d620(0x10022,0,0,0,0);
  }
  fVar1 = *(float *)(param_1 + 0xa8c);
  if (((!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) && (*(float *)(param_1 + 0xaa0) < 0.5235988)
      ) && (*(float *)(param_1 + 0x14a8) < 0.0)) {
    FUN_0051d620(0x50003,0,0,0,0);
  }
  fVar1 = *(float *)(param_1 + 0xaa0);
  if ((((!NAN(fVar1) && 0.5235988 < fVar1 != (fVar1 == 0.5235988)) &&
       (*(float *)(param_1 + 0xaa0) <= 2.443461)) &&
      ((*(float *)(param_1 + 0xa8c) <= 36.0 &&
       ((*(float *)(param_1 + 0x14a8) < 0.0 &&
        (FUN_0051d620(0x50007,0,0,0,0), *(float *)(param_1 + 0xa8c) <= 12.25)))))) &&
     (sVar2 = FUN_00dde2d0(0,2), sVar2 != 0)) {
    FUN_0051d620(0x5000e,0,0,0,0);
    sVar2 = FUN_00dde2d0(0,1);
    if ((sVar2 != 0) && (iVar3 = FUN_00ac4780(), iVar3 != 0)) {
      FUN_0051d620(0x5000f,0,0,0,0);
      return;
    }
  }
  return;
}

// 0053D7F0  FUN_0053d7f0  size=819  [run]
void __fastcall FUN_0053d7f0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] != 0) {
    if ((param_1[0x57e] != 0) && (param_1[0x50a] == 0)) {
      FUN_0051d620(0x10010,0,0,0,0);
      return;
    }
    iVar2 = FUN_0051a3c0();
    if ((iVar2 == 0) || ((0.7853982 <= (float)param_1[0x2a8] || (36.0 < (float)param_1[0x2a4])))) {
      iVar2 = FUN_0051da50();
      if (iVar2 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,1);
        FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 != 0) {
          FUN_0051d620(0x50009,0,0,0,0);
        }
      }
      if (param_1[0x50a] == 0) {
        iVar2 = FUN_0051d990();
        if (iVar2 == 0) {
          if (9 < param_1[0x521]) {
            uVar6 = 0;
            uVar5 = 0;
            uVar4 = 0;
            uVar3 = 0;
            sVar1 = FUN_00dde2d0(0,1);
            FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
            param_1[0x528] = 1;
            return;
          }
          if (((9 < param_1[0x4c9]) && ((float)param_1[0x2a4] <= 25.0)) &&
             ((float)param_1[0x2a8] < 0.7853982)) {
            uVar6 = 0;
            uVar5 = 0;
            uVar4 = 0;
            uVar3 = 0;
            sVar1 = FUN_00dde2d0(0,1);
            FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
            param_1[0x528] = 1;
            return;
          }
          iVar2 = param_1[0x506];
          if (iVar2 == 0) {
            FUN_00523310();
            return;
          }
          if (iVar2 == 1) {
            FUN_00523650();
            return;
          }
          if (iVar2 == 2) {
            FUN_005394a0();
            return;
          }
        }
        else if (iVar2 == 2) {
          if (param_1[0x128] != 2) {
            FUN_0051d620(0x10019,0,0,0,0);
            return;
          }
          FUN_0051d620(0x10009,0,0,0,0);
          return;
        }
      }
      else {
        (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
        if (((float)param_1[0x2a3] <= 1.44) && ((float)param_1[0x2a8] < 0.7853982)) {
          FUN_0051d620(0x50006,0,0,0,0);
        }
        if ((int *)param_1[0x2a1] != (int *)0x0) {
          iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x330))();
          if (((iVar2 != 0) && ((float)param_1[0x2a3] <= 6.25)) &&
             ((float)param_1[0x2a8] < 0.7853982)) {
            FUN_0051d620(0x50009,0,0,0,0);
          }
        }
        if (((180.0 < (float)param_1[0x248]) && ((float)param_1[0x2a3] <= 49.0)) &&
           ((float)param_1[0x2a8] < 1.5707964)) {
          FUN_0051d620(0x50009,0,0,0,0);
          return;
        }
      }
    }
    else {
      FUN_0051d620(0x5000e,0,0,0,0);
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        iVar2 = FUN_00518a90();
        if (iVar2 != 0) {
          FUN_0051d620(0x50010,0,0,0,0);
        }
      }
    }
  }
  return;
}

// 0053E150  FUN_0053e150  size=745  [run]
void __fastcall FUN_0053e150(int *param_1)

{
  float fVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x58,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0051cd50(1,1,1,1);
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x568] = 0;
    param_1[0x569] = 0;
    param_1[0x56a] = 0;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    FUN_0051a1b0(param_1[0x515]);
  case 1:
    FUN_00ac80a0(0,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x59,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_00a8d280();
    param_1[0x248] = 0x439b0000;
    param_1[0x251] = 0;
    param_1[0x249] = 0x42700000;
    param_1[0x24a] = (int)((float)param_1[0x15] + 1.0);
    goto LAB_0053e2b9;
  case 3:
LAB_0053e2b9:
    (**(code **)(*param_1 + 0x318))();
    FUN_00ac80a0(0,0x3f800000);
    fVar1 = (float)param_1[0x15];
    param_1[0x15] = (int)(fVar1 + 0.01);
    if ((float)param_1[0x24a] <= fVar1 + 0.01) {
      param_1[0x15] = param_1[0x24a];
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = 4;
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (-1 < param_1[0x251])) {
      param_1[0x249] = 0x41000000;
      FUN_0053ac80(param_1[0x251]);
      param_1[0x251] = param_1[0x251] + 1;
      if (0x13 < param_1[0x251]) {
        param_1[0x251] = -1;
        return;
      }
    }
    break;
  case 4:
    FUN_00aa4080(0x20,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0052b0b0(0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x52a] = 0x42700000;
      iVar2 = FUN_0051a330();
      if (iVar2 != 0) {
        FUN_0051d620(0x60003,0,0,0,0);
        return;
      }
    }
  }
  return;
}

// 0053E460  FUN_0053e460  size=310  [run]
void __fastcall FUN_0053e460(int param_1)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((2 < *(int *)(param_1 + 0x61c)) && (*(int *)(param_1 + 0x134c) == 1)) {
    FUN_00eaa6e0(0x3f800000,0);
    if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x764) != 0)) {
      uVar1 = FUN_009f8b40();
      FUN_008e26e0(uVar1);
    }
    FUN_00e5e0c0("em01a0_se_mov_body_separate",param_1,0xffffffff,0);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    FUN_0052b620(&local_20,&local_30);
    FUN_0052b790(&local_20,&local_30);
    FUN_0052b900(&local_20,&local_30);
    FUN_0052b9c0(&local_20,&local_30);
    *(uint *)(param_1 + 0x1440) = *(uint *)(param_1 + 0x1440) | 2;
    FUN_00c27f40(10,0xbf800000);
    FUN_0053aa20();
    FUN_0051d620(0x60002,0,0,0,0);
    *(undefined4 *)(param_1 + 0x10d0) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x10d4) = 4;
    *(undefined4 *)(param_1 + 0x100c) = 0;
    *(undefined4 *)(param_1 + 0x1630) = 0;
  }
  return;
}

// 0053E5A0  FUN_0053e5a0  size=1609  [run]
void __fastcall FUN_0053e5a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [156];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a94bc0(1,0);
    FUN_00aa4080(0xbb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0051cd50(1,1,1,1);
    param_1[0x577] = -0x40800000;
    param_1[0x579] = -0x40800000;
    param_1[0x250] = 0;
    param_1[0x576] = 0;
    param_1[0x57a] = 0;
    param_1[0x578] = 0;
    FUN_00c5ad80(param_1[0x4cf]);
    pcVar2 = *(code **)(*param_1 + 0x358);
    param_1[0x4cf] = -1;
    (*pcVar2)(0x193,param_1 + 0x4d8);
    param_1[0x249] = 0x3f800000;
    param_1[0x251] = 0;
    param_1[0x252] = 0;
    param_1[0x4d3] = 0;
    param_1[0x4d4] = 0;
    FUN_0052b0b0(0);
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0xbc,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0051cd50(1,1,1,1);
    param_1[0x248] = 0x43960000;
    goto LAB_0053e789;
  case 3:
LAB_0053e789:
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        iVar3 = FUN_0051a4d0();
        *(undefined2 *)(iVar3 + 0x824) = 3;
        *(undefined4 *)(iVar3 + 0x828) = 0x78;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_00c5ad80(param_1[0x4cf]);
      param_1[0x4cf] = -1;
      FUN_00eaa6e0(0x3f800000,0);
      param_1[0x187] = 4;
    }
    goto switchD_0053e5cc_default;
  case 4:
    FUN_00aa4080(0xbd,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cd50(1,1,1,1);
    FUN_00c5ad80(param_1[0x4cf]);
    param_1[0x4cf] = -1;
    FUN_00eaa6e0(0x3f800000,0);
    iVar3 = FUN_00ac8120();
    if (iVar3 != 0) {
      iVar3 = FUN_00ac8120();
      *(undefined4 *)(iVar3 + 0x3bcc) = 1;
    }
    goto LAB_0053e8da;
  case 5:
LAB_0053e8da:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((((param_1[0x506] != 0) && (param_1[0x438] != 0)) &&
        (((char)param_1[0x435] == '\x02' || ((char)param_1[0x435] == '\x03')))) &&
       (fVar1 = (float)param_1[0x515] + (float)param_1[0x515], (float)param_1[0x434] < fVar1)) {
      FUN_0051a240(fVar1);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x52a] = 0x42700000;
      if (((uint)param_1[0x404] < 2) || (5 < (uint)param_1[0x404])) {
        FUN_0051d620(0x10009,0,0,0,0);
      }
    }
  default:
    goto switchD_0053e5cc_default;
  }
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_0051a4d0();
      *(undefined2 *)(iVar3 + 0x824) = 3;
      *(undefined4 *)(iVar3 + 0x828) = 0x78;
    }
  }
  FUN_00ac80a0(0x40000000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0053e5cc_default:
  iVar3 = FUN_00a8c760(10);
  if (iVar3 != 0) {
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_c0,0x3f800000,0x40400000,1,4);
    if (param_1[0x252] == 0) {
      (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x4d8);
      param_1[0x252] = 1;
    }
    if (2 < param_1[0x4d4]) {
      FUN_00c5ad80(param_1[0x4cf]);
      param_1[0x4cf] = -1;
      FUN_00eaa6e0(0x3f800000,0);
      iVar3 = FUN_00ac8120();
      if (iVar3 != 0) {
        iVar3 = FUN_00ac8120();
        *(undefined4 *)(iVar3 + 0x3bcc) = 1;
      }
      param_1[0x187] = 4;
    }
    if ((param_1[0x251] == 0) && (iVar3 = FUN_00ac82f0(), iVar3 != 0)) {
      uStack_c4 = 0x41200000;
      param_1[0x251] = 1;
      iVar3 = FUN_00ac4780();
      if (iVar3 == 0) {
        uStack_c4 = 0x41a00000;
      }
      iVar3 = FUN_00ac4780();
      if (iVar3 == 1) {
        uStack_c4 = 0x41200000;
      }
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      FUN_00405140(param_1[0x13c],0x10,0x302,&uStack_b0,&uStack_c0,uStack_c4,0x3f000000,0xbf800000);
      iVar3 = FUN_00c5abe0(auStack_a0);
      param_1[0x4cf] = iVar3;
      FUN_00c52770(iVar3,0x40600000);
      FUN_00c52700(param_1[0x4cf],1);
      FUN_00c52ab0(param_1[0x4cf],1);
    }
    if ((param_1[0x251] == 1) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) {
      param_1[0x251] = 2;
      param_1[0x187] = 4;
      FUN_00c5ad80(param_1[0x4cf]);
      param_1[0x4cf] = -1;
      FUN_00eaa6e0(0x3f800000,0);
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

