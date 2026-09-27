// src/unsorted/unit_00710F30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00710F30..00711B80, 12 functions

#include "mgrr.h"

// 00710F30  FUN_00710f30  size=248  [run]
void __fastcall FUN_00710f30(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_10 [4];
  
  local_10[0] = 0x36f;
  local_10[1] = 0x370;
  local_10[2] = 0x49f;
  local_10[3] = 0x4a0;
  uVar1 = FUN_00dde2a0(0,100);
  uVar4 = 0x8000000;
  uVar2 = local_10[uVar1 & 1];
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    if (param_1[0x3a6] == 8) {
      uVar4 = 0x8000040;
    }
    else if (param_1[0x3a6] != 9) goto LAB_00710fa7;
    uVar1 = FUN_00dde2a0(0,100);
    uVar2 = local_10[(uVar1 & 1) + 2];
  }
LAB_00710fa7:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0070fe80();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00711026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00711030  FUN_00711030  size=209  [run]
void __fastcall FUN_00711030(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x372;
  uVar2 = 0x8000000;
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    if (param_1[0x3a6] == 8) {
      uVar2 = 0x8000040;
    }
    else if (param_1[0x3a6] != 9) goto LAB_00711063;
    uVar1 = 0x4a1;
  }
LAB_00711063:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c4d1a0(param_1[0x13c],0);
    (**(code **)(*param_1 + 0x358))(0xe4,param_1 + 0x464);
    param_1[0x5a3] = 0x43480000;
    param_1[0x5a4] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00711110  FUN_00711110  size=194  [run]
void __fastcall FUN_00711110(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if (((param_1[0x3a9] & 0x20000U) != 0) && (param_1[0x3a6] == 8)) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0x4ab,0,0x3e2aaaab,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007111E0  FUN_007111e0  size=360  [run]
void __fastcall FUN_007111e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    iVar1 = *(int *)(param_1 + 0x618);
    uVar2 = 0x3bf;
    if (iVar1 == 0x10000007) {
      uVar2 = 0x3c3;
    }
    if (iVar1 == 0x10000008) {
      uVar2 = 0x3c7;
    }
    if (iVar1 == 0x10000009) {
      uVar2 = 0x3cb;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_0070cdb0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 2:
    iVar1 = *(int *)(param_1 + 0x618);
    uVar2 = 0x3c0;
    if (iVar1 == 0x10000007) {
      uVar2 = 0x3c4;
    }
    if (iVar1 == 0x10000008) {
      uVar2 = 0x3c8;
    }
    if (iVar1 == 0x10000009) {
      uVar2 = 0x3cc;
    }
    break;
  case 3:
  case 5:
    goto switchD_007111f4_caseD_3;
  case 4:
    iVar1 = *(int *)(param_1 + 0x618);
    uVar2 = 0x3c1;
    if (iVar1 == 0x10000007) {
      uVar2 = 0x3c5;
    }
    if (iVar1 == 0x10000008) {
      uVar2 = 0x3c9;
    }
    if (iVar1 == 0x10000009) {
      uVar2 = 0x3cd;
    }
    break;
  default:
    return;
  }
  FUN_00aa4080(uVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
switchD_007111f4_caseD_3:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00711360  FUN_00711360  size=574  [run]
void __fastcall FUN_00711360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    iVar1 = *(int *)(param_1 + 0x618);
    uVar3 = 0x3d8;
    if (iVar1 == 0x1000000b) {
      uVar3 = 0x3dc;
    }
    if (iVar1 == 0x1000000c) {
      uVar3 = 0x3e0;
    }
    if (iVar1 == 0x1000000d) {
      uVar3 = 0x3e4;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_0070cdb0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 2:
    FUN_00a9f4c0("KamaeMoveSlider",0x3e2aaaab,0,0);
    iVar1 = *(int *)(param_1 + 0x618);
    uVar3 = 0x3d9;
    uVar2 = 0x3af;
    uVar4 = 0x3b0;
    if (iVar1 == 0x1000000b) {
      uVar3 = 0x3dd;
      uVar2 = 0x3b2;
      uVar4 = 0x3b3;
    }
    if (iVar1 == 0x1000000c) {
      uVar3 = 0x3e1;
      uVar2 = 0x3b5;
      uVar4 = 0x3b6;
    }
    if (iVar1 == 0x1000000d) {
      uVar3 = 0x3e5;
      uVar2 = 0x3b8;
      uVar4 = 0x3b9;
    }
    FUN_00a9f600(0xffffffff,0,0,1,0,uVar2,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,uVar3,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,uVar4,0x3e2aaaab,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 3:
    break;
  case 4:
    iVar1 = *(int *)(param_1 + 0x618);
    uVar3 = 0x3da;
    if (iVar1 == 0x1000000b) {
      uVar3 = 0x3de;
    }
    if (iVar1 == 0x1000000c) {
      uVar3 = 0x3e2;
    }
    if (iVar1 == 0x1000000d) {
      uVar3 = 0x3e6;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007115C0  FUN_007115c0  size=204  [run]
void __fastcall FUN_007115c0(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_007115d4_caseD_1;
  case 2:
    FUN_00aa4080(0x3f2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    return;
  }
  FUN_00aa4080(0x3f1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  FUN_0070cdb0();
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
switchD_007115d4_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 007116A0  FUN_007116a0  size=240  [run]
void __fastcall FUN_007116a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_007116b4_caseD_1;
  case 2:
    uVar2 = 0x3f7;
    if (*(int *)(param_1 + 0x618) == 0x10000011) {
      uVar2 = 0x3fb;
    }
    FUN_00aa4080(uVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    return;
  }
  uVar2 = 0x3f6;
  if (*(int *)(param_1 + 0x618) == 0x10000011) {
    uVar2 = 0x3fa;
  }
  FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  FUN_0070cdb0();
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
switchD_007116b4_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 007117A0  FUN_007117a0  size=376  [run]
void __fastcall FUN_007117a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar1 = 0x3ff;
    if (*(int *)(param_1 + 0x618) == 0x10000013) {
      uVar1 = 0x403;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_0070cdb0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 2:
    FUN_00a9f4c0("KamaeTurnSlider",0x3e2aaaab,0,0);
    uVar4 = 0x400;
    uVar1 = 0x3b5;
    uVar3 = 0x3b6;
    if (*(int *)(param_1 + 0x618) == 0x10000013) {
      uVar4 = 0x404;
      uVar1 = 0x3b8;
      uVar3 = 0x3b9;
    }
    FUN_00a9f600(0xffffffff,0,0,1,0,uVar1,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,uVar4,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,uVar3,0x3e2aaaab,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 3:
    break;
  default:
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00711930  FUN_00711930  size=119  [run]
void __fastcall FUN_00711930(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x410,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007119a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007119B0  FUN_007119b0  size=97  [run]
uint FUN_007119b0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01b35940;
      (**(code **)(*piVar2 + 4))(&DAT_01b35940);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 00711A20  FUN_00711a20  size=346  [run]
void __fastcall FUN_00711a20(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x47f,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    FUN_00c27260(param_1[0x66d]);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00711b30;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x456] = (int)((float)param_1[0x66d] * 60.0);
    if ((*(byte *)(param_1 + 0x12a) & 0x40) != 0) {
      param_1[0x456] = (int)((float)param_1[0x66d] * 60.0 + 120.0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00711b30:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00711B80  FUN_00711b80  size=141  [run]
void __fastcall FUN_00711b80(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x455;
    if (param_1[300] == 0x2c150) {
      uVar1 = 0x461;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00711c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

