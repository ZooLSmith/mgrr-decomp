// src/unsorted/unit_006198F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006198F0..0061B910, 37 functions

#include "types.h"

// 006198F0  FUN_006198f0  size=210  [run]
void __fastcall FUN_006198f0(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = 0x367;
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    if (param_1[0x3a6] == 8) {
      uVar2 = 0x40;
    }
    else if (param_1[0x3a6] != 9) goto LAB_00619920;
    uVar1 = 0x491;
  }
LAB_00619920:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00619985;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00619985:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 006199E0  FUN_006199e0  size=259  [run]
void __fastcall FUN_006199e0(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x368;
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    if (param_1[0x3a6] == 8) {
      uVar2 = 0x499;
    }
    else if (param_1[0x3a6] == 9) {
      uVar2 = 0x493;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00619a99;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x456] = 0x41f00000;
  }
LAB_00619a99:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00619B00  FUN_00619b00  size=140  [run]
void __fastcall FUN_00619b00(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0x36b;
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xe98) == 8) {
      uVar1 = 0x49b;
    }
    else if (*(int *)(param_1 + 0xe98) == 9) {
      uVar1 = 0x495;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00619BA0  FUN_00619ba0  size=167  [run]
void __fastcall FUN_00619ba0(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x36d;
  if ((param_1[0x3a9] & 0x20000U) != 0) {
    if (param_1[0x3a6] == 8) {
      uVar2 = 0x49c;
    }
    else if (param_1[0x3a6] == 9) {
      uVar2 = 0x496;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x00619c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00619C70  FUN_00619c70  size=258  [run]
void __fastcall FUN_00619c70(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    uVar3 = 0;
    uVar1 = (uint)param_1[0x3a9] >> 0x11 & 1;
    uVar2 = 0x374;
    if (uVar1 != 0) {
      if (param_1[0x3a6] == 8) {
        uVar2 = 0x4a4;
        uVar3 = 0x40;
      }
      else if (param_1[0x3a6] == 9) {
        uVar2 = 0x4a3;
      }
    }
    if (param_1[0x186] == 0x6000a) {
      uVar3 = 0;
      uVar2 = 0x375;
      if (uVar1 != 0) {
        if (param_1[0x3a6] == 8) {
          uVar2 = 0x4a3;
          uVar3 = 0x40;
        }
        else if (param_1[0x3a6] == 9) {
          uVar2 = 0x4a4;
        }
      }
    }
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00619d3e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00619d3e:
  (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x393702d3,0);
  return;
}

// 00619D80  FUN_00619d80  size=102  [run]
void __fastcall FUN_00619d80(int param_1)

{
  undefined4 uVar1;
  
  FUN_00a94bc0(2,0);
  uVar1 = 0x36c;
  if ((*(uint *)(param_1 + 0xea4) & 0x20000) != 0) {
    if (*(int *)(param_1 + 0xe98) == 8) {
      uVar1 = 0x49d;
    }
    if (*(int *)(param_1 + 0xe98) == 9) {
      uVar1 = 0x497;
    }
  }
  FUN_00aa4080(uVar1,2,0,0x3f800000,0x8000010,0,0x3f800000);
  return;
}

// 00619E80  FUN_00619e80  size=220  [run]
void __fastcall FUN_00619e80(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x37f;
    if ((*(byte *)(param_1 + 0x606) & 2) != 0) {
      uVar1 = 0x388;
    }
    FUN_00aa4080(uVar1,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00619f1f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x456] = 0x41f00000;
  }
LAB_00619f1f:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00619F70  FUN_00619f70  size=224  [run]
void __fastcall FUN_00619f70(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("HAIZURI ASS WAIT",0x3e088889,0,0);
    uVar1 = (*(uint *)(param_1 + 0x1818) & 2) << 5 | 0x80000;
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x386,0x3e088889,uVar1);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x382,0x3e088889,uVar1);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x385,0x3e088889,uVar1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061A060  FUN_0061a060  size=136  [run]
void __fastcall FUN_0061a060(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(900,0,0x3e088889,0x3f800000,(param_1[0x606] & 2U | 0x400000) << 5,0xbf800000,
                 0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x0061a0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0061A0F0  FUN_0061a0f0  size=79  [run]
void __fastcall FUN_0061a0f0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1818);
  FUN_00a94bc0(2,0);
  FUN_00aa4080(899,2,0,0x3f800000,(uVar1 & 2) << 5 | 0x8000010,0,0x3f800000);
  return;
}

// 0061A150  FUN_0061a150  size=145  [run]
void __fastcall FUN_0061a150(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 2) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0x389,0,0x3e088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0061a1df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0061A200  FUN_0061a200  size=145  [run]
void __fastcall FUN_0061a200(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((*(byte *)(param_1 + 0x606) & 2) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0x53c,0,0x3e2aaaab,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0061a28f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0061A2B0  FUN_0061a2b0  size=96  [run]
void __fastcall FUN_0061a2b0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3a5,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061A320  FUN_0061a320  size=99  [run]
void __fastcall FUN_0061a320(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3a8,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061A390  FUN_0061a390  size=226  [run]
void __fastcall FUN_0061a390(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("KamaeWaitSlider",0x3e2aaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x3ac,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x3a9,0x3e2aaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x3ad,0x3e2aaaab,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1074) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061A490  FUN_0061a490  size=99  [run]
void __fastcall FUN_0061a490(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3aa,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061A540  FUN_0061a540  size=124  [run]
void __fastcall FUN_0061a540(int param_1)

{
  float fVar1;
  float local_8;
  undefined1 local_4 [4];
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
    thunk_FUN_00dde510(&local_8,local_4,*(int *)(param_1 + 0xa84) + 0x40,param_1 + 0x40);
    local_8 = local_8 * 1.2732395;
    fVar1 = -1.0;
    if ((local_8 < -1.0) || (fVar1 = 1.0, 1.0 < local_8)) {
      local_8 = fVar1;
    }
    *(float *)(param_1 + 0x1660) =
         (local_8 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
  }
  return;
}

// 0061A5E0  FUN_0061a5e0  size=124  [run]
void __fastcall FUN_0061a5e0(int param_1)

{
  float fVar1;
  float local_8;
  undefined1 local_4 [4];
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
    thunk_FUN_00dde510(&local_8,local_4,*(int *)(param_1 + 0xa84) + 0x40,param_1 + 0x40);
    local_8 = local_8 * 1.2732395;
    fVar1 = -1.0;
    if ((local_8 < -1.0) || (fVar1 = 1.0, 1.0 < local_8)) {
      local_8 = fVar1;
    }
    *(float *)(param_1 + 0x1660) =
         (local_8 - *(float *)(param_1 + 0x1660)) * 0.1 + *(float *)(param_1 + 0x1660);
  }
  return;
}

// 0061A6B0  FUN_0061a6b0  size=117  [run]
void __fastcall FUN_0061a6b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x41e;
    if (*(int *)(param_1 + 0x618) == 0x10000017) {
      uVar1 = 0x41f;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061A740  FUN_0061a740  size=117  [run]
void __fastcall FUN_0061a740(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x426;
    if (*(int *)(param_1 + 0x618) == 0x10000017) {
      uVar1 = 0x427;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061A8A0  FUN_0061a8a0  size=138  [run]
void __fastcall FUN_0061a8a0(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x220))(0x41200000);
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      uVar2 = 0x423;
    }
    else {
      uVar2 = 0x424;
    }
    FUN_00aa4080(uVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061A940  FUN_0061a940  size=170  [run]
void __fastcall FUN_0061a940(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x3f2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1074) = 1;
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x3f3,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  default:
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061AA10  FUN_0061aa10  size=109  [run]
void __fastcall FUN_0061aa10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_0061aa6a;
  }
  FUN_00aa4120(0x3c0,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_0061aa6a:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061AAD0  FUN_0061aad0  size=109  [run]
void __fastcall FUN_0061aad0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_0061ab2a;
  }
  FUN_00aa4080(0x438,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_0061ab2a:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061AB50  FUN_0061ab50  size=99  [run]
void __fastcall FUN_0061ab50(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x430,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061ABD0  FUN_0061abd0  size=99  [run]
void __fastcall FUN_0061abd0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x431,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061AC40  FUN_0061ac40  size=304  [run]
void __fastcall FUN_0061ac40(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x433,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x434,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x435,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 0061ADA0  FUN_0061ada0  size=99  [run]
void __fastcall FUN_0061ada0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x418,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061AE10  FUN_0061ae10  size=40  [run]
void __fastcall FUN_0061ae10(int param_1)

{
  *(undefined4 *)(param_1 + 0x1a84) = 0;
  FUN_00eaa6e0(0x41200000,0);
  return;
}

// 0061AEF0  FUN_0061aef0  size=952  [run]
void __fastcall FUN_0061aef0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2a8,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((*(byte *)((int)param_1 + 0xea6) & 1) != 0) {
      param_1[0x3a9] = param_1[0x3a9] & 0xfffeffff;
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x250] == param_1[0x6dd]) {
        param_1[0x187] = 8;
      }
    }
    iVar1 = FUN_00a8c760(0xf);
    iVar2 = 0x2b2;
    goto LAB_0061b0b2;
  case 2:
    FUN_00aa4080(0x2b6,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0x2a9,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((*(byte *)((int)param_1 + 0xea6) & 1) != 0) {
      param_1[0x3a9] = param_1[0x3a9] & 0xfffeffff;
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x250] == param_1[0x6dd]) {
        param_1[0x187] = 8;
      }
    }
    iVar1 = FUN_00a8c760(0xf);
    iVar2 = 0x2b1;
LAB_0061b0b2:
    if ((iVar1 != 0) && ((param_1[0x3a9] & 0x8000U) != 0)) {
      param_1[0x3a9] = param_1[0x3a9] & 0xffff7fff;
      param_1[0x251] = iVar2;
      param_1[0x187] = 10;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x251] = iVar2;
      param_1[0x187] = 10;
    }
    break;
  case 6:
    FUN_00aa4080(0x2b7,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = 0;
    }
    break;
  case 8:
    FUN_00aa4080(0x2b8,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    break;
  case 10:
    FUN_00aa4080(param_1[0x251],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 0061B2F0  FUN_0061b2f0  size=227  [run]
void __fastcall FUN_0061b2f0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2b4,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0061b378;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0061b378:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e32b8c2,0);
  }
  return;
}

// 0061B580  FUN_0061b580  size=159  [run]
void __fastcall FUN_0061b580(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x280,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0061b608;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0061b608:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 0061B630  FUN_0061b630  size=159  [run]
void __fastcall FUN_0061b630(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x281,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0061b6b8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0061b6b8:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 0061B6E0  FUN_0061b6e0  size=159  [run]
void __fastcall FUN_0061b6e0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x282,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0061b768;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0061b768:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
  }
  return;
}

// 0061B7A0  FUN_0061b7a0  size=92  [run]
void __fastcall FUN_0061b7a0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x454,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0061B830  FUN_0061b830  size=169  [run]
/* WARNING: Removing unreachable block (ram,0x0061b891) */

void __fastcall FUN_0061b830(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short local_4 [2];
  
  local_4[0] = 0x489;
  local_4[1] = 0x48a;
  if (param_1[0x187] == 0) {
    uVar8 = 0x3f800000;
    uVar7 = 0xbf800000;
    uVar6 = 0x8000000;
    uVar5 = 0x3f800000;
    uVar4 = 0x3e2aaaab;
    uVar3 = 0;
    uVar1 = FUN_00dde2a0(1,100);
    FUN_00aa4080((int)local_4[uVar1 & 1],uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
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
                    /* WARNING: Could not recover jumptable at 0x0061b8d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0061B910  FUN_0061b910  size=133  [run]
void __fastcall FUN_0061b910(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x487,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x128] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0061b993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

