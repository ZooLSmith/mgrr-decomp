// src/unsorted/unit_00470B90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00470B90..00471310, 7 functions

#include "mgrr.h"

// 00470B90  FUN_00470b90  size=403  [run]
void __fastcall FUN_00470b90(int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x148a);
  if (((bVar2 & 0x10) != 0) && ((bVar2 & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
    return;
  }
  if (((((bVar2 & 0x10) == 0) || ((bVar2 & 8) == 0)) && (*(int *)(param_1 + 0x1128) != 0)) &&
     (((*(float *)(param_1 + 0xe48) < 0.0 && (iVar3 = FUN_00c15850(), iVar3 != 0)) &&
      ((*(float *)(param_1 + 0xaa0) <= 1.0471976 && (*(float *)(param_1 + 0xa8c) < 6.25)))))) {
    FUN_00a8caf0(0x1a,0,0,0);
  }
  if ((*(byte *)(param_1 + 0x148a) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x1128) == 0) goto LAB_00470cce;
    if (((*(float *)(param_1 + 0x1414) < 0.0) && (iVar3 = FUN_00c15850(), iVar3 != 0)) &&
       (((*(byte *)(param_1 + 0x148a) & 0x20) == 0 &&
        ((*(float *)(param_1 + 0xaa0) <= 0.5235988 &&
         (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)))))))
    {
      FUN_00a8caf0(0x19,0,0,0);
    }
  }
  if (((*(int *)(param_1 + 0x1128) != 0) && (*(float *)(param_1 + 0xe48) < 0.0)) &&
     (*(float *)(param_1 + 0x920) < 0.0)) {
    FUN_00a8caf0(0x16,0,0,0);
  }
LAB_00470cce:
  if (*(float *)(param_1 + 0x920) < 0.0) {
    if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
      FUN_00a8caf0(0x17,0,0,0);
    }
    if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
      FUN_00a8caf0(0x18,0,0,0);
    }
  }
  return;
}

// 00470D30  FUN_00470d30  size=382  [run]
void __fastcall FUN_00470d30(int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x148a);
  if (((bVar2 & 0x10) != 0) && ((bVar2 & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
    return;
  }
  if ((((((bVar2 & 0x10) == 0) || ((bVar2 & 8) == 0)) && (*(int *)(param_1 + 0x1128) != 0)) &&
      ((*(float *)(param_1 + 0xe48) < 0.0 && (iVar3 = FUN_00c15850(), iVar3 != 0)))) &&
     ((*(float *)(param_1 + 0xaa0) <= 1.0471976 && (*(float *)(param_1 + 0xa8c) < 6.25)))) {
    FUN_00a8caf0(0x1a,0,0,0);
  }
  if ((*(byte *)(param_1 + 0x148a) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x1128) != 0) {
      if (((*(float *)(param_1 + 0x1414) < 0.0) && (iVar3 = FUN_00c15850(), iVar3 != 0)) &&
         (((*(byte *)(param_1 + 0x148a) & 0x20) == 0 &&
          ((*(float *)(param_1 + 0xaa0) <= 0.5235988 &&
           (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0))))))
         ) {
        FUN_00a8caf0(0x19,0,0,0);
      }
      goto LAB_00470e32;
    }
  }
  else {
LAB_00470e32:
    if ((*(int *)(param_1 + 0x1128) != 0) && (0.0 <= *(float *)(param_1 + 0x920)))
    goto LAB_00470e59;
  }
  FUN_00a8caf0(0x15,0,0,0);
LAB_00470e59:
  if (*(float *)(param_1 + 0x924) < 0.0) {
    if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
      FUN_00a8caf0(0x17,0,0,0);
    }
    if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
      FUN_00a8caf0(0x18,0,0,0);
    }
  }
  return;
}

// 00470EB0  FUN_00470eb0  size=283  [run]
void __fastcall FUN_00470eb0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x61,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43960000;
    param_1[0x249] = 0x42700000;
    if ((param_1[0x139] != 0) || (param_1[0x21c] < 1)) {
      FUN_00a8caf0(0x50,0,0,0);
      return;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00470f64;
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00470f64:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    return;
  }
  return;
}

// 00470FD0  FUN_00470fd0  size=192  [run]
void __fastcall FUN_00470fd0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1[0x53b] = 1;
  uVar3 = 0x6f;
  if (param_1[0x187] == 0) {
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      uVar3 = 0x70;
    }
    FUN_00aa4080(uVar3,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((param_1[0x139] != 0) || (param_1[0x21c] < 1)) {
      FUN_00a8caf0(0x50,0,0,0);
    }
  }
  return;
}

// 00471090  FUN_00471090  size=303  [run]
void __fastcall FUN_00471090(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  param_1[0x53b] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x74,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x139] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    pcVar2 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)(2,0);
    return;
  case 2:
    pcVar2 = *(code **)(*param_1 + 0x20);
    param_1[0x248] = 0x43340000;
    param_1[0x187] = 3;
    (*pcVar2)();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00c57120(param_1[0x13c]);
    piVar4 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar4);
    param_1[0x1af] = 1;
    break;
  case 3:
    break;
  default:
    goto switchD_004710b0_default;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
switchD_004710b0_default:
  return;
}

// 00471270  FUN_00471270  size=150  [run]
void __fastcall FUN_00471270(int param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_54 = 0x3f000000;
  local_38 = 0xffffffff;
  local_50 = 0;
  local_4 = 0xffffffff;
  local_10 = *(undefined4 *)(param_1 + 0xd30);
  local_4c = 0xffffffff;
  local_48 = *(undefined4 *)(param_1 + 0xb9c);
  local_c = *(undefined4 *)(param_1 + 0xd34);
  local_8 = *(undefined4 *)(param_1 + 0xd38);
  local_44 = (int)*(short *)(param_1 + 0xab2);
  local_30 = 1;
  local_40 = 0xfffffffe;
  local_3c = 0;
  local_2c = 0;
  local_34 = 0x1010101;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 00471310  FUN_00471310  size=354  [run]
void __fastcall FUN_00471310(int param_1)

{
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_54 = 0x3f000000;
  local_44 = (int)*(short *)(param_1 + 0xab2);
  local_50 = 0;
  local_10 = *(undefined4 *)(param_1 + 0xd30);
  local_c = *(undefined4 *)(param_1 + 0xd34);
  local_8 = *(undefined4 *)(param_1 + 0xd38);
  local_3c = 0;
  local_2c = 0;
  local_48 = *(undefined4 *)(param_1 + 0xb9c);
  local_40 = 0xfffffffe;
  local_38 = 0xffffffff;
  local_4 = 0xffffffff;
  local_34 = 0x1010101;
  local_4c = 0xffffffff;
  local_30 = 2;
  FUN_00c5e350(param_1,&local_54,&local_30);
  local_10 = 0;
  local_c = 0;
  local_48 = 0xffffffff;
  local_8 = 0;
  local_44 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_54 = 0x3f000000;
  local_3c = 0;
  local_38 = 0xffffffff;
  local_2c = 0;
  local_50 = 0;
  local_4 = 0xffffffff;
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_34 = 0x1010101;
  local_4c = 0xffffffff;
  local_58 = *(undefined4 *)(param_1 + 0x48);
  local_30 = 2;
  local_5c = *(float *)(param_1 + 0x44) - 1.0;
  FUN_00c15bb0(&local_60,0x41f00000,0x41700000);
  local_10 = *(undefined4 *)(param_1 + 0xd30);
  local_c = *(undefined4 *)(param_1 + 0xd34);
  local_8 = *(undefined4 *)(param_1 + 0xd38);
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

