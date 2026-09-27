// src/unsorted/unit_009F7040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F7040..009F8470, 14 functions

#include "types.h"

// 009F7040  FUN_009f7040  size=104  [run]
undefined4 __thiscall FUN_009f7040(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009f6cd0;
  piVar2[2] = 0x4e0;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009F7110  FUN_009f7110  size=104  [run]
undefined4 __thiscall FUN_009f7110(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009f6f20;
  piVar2[2] = 0x520;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009F7180  FUN_009f7180  size=104  [run]
undefined4 __thiscall FUN_009f7180(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009f6f80;
  piVar2[2] = 0x520;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009F71F0  FUN_009f71f0  size=104  [run]
undefined4 __thiscall FUN_009f71f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00f40c20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f40c30(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(param_1 + -0x9ebf8 + param_2 * 0x14);
  }
  else {
    piVar2 = (int *)(param_1 + 8 + param_2 * 0x14);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  *piVar2 = param_2;
  piVar2[1] = (int)&LAB_009f6fe0;
  piVar2[2] = 0x520;
  piVar2[4] = param_3;
  piVar2[3] = 0;
  return 1;
}

// 009F7260  FUN_009f7260  size=601  [run]
bool FUN_009f7260(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_009f11c0(0x3c,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_009ed640(100,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_009ed6b0(0x65,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_009ed720(0x66,param_2);
        if (iVar1 != 0) {
          iVar1 = FUN_009f1230(0x67,param_2);
          if (iVar1 != 0) {
            iVar1 = FUN_009ed790(0x68,param_2);
            if (iVar1 != 0) {
              iVar1 = FUN_009ed800(0x69,param_2);
              if (iVar1 != 0) {
                iVar1 = FUN_009ed870(0x6a,param_2);
                if (iVar1 != 0) {
                  iVar1 = FUN_009f3da0(0x6b,param_2);
                  if (iVar1 != 0) {
                    iVar1 = FUN_009ed8e0(0x6c,param_2);
                    if (iVar1 != 0) {
                      iVar1 = FUN_009ed950(0x6d,param_2);
                      if (iVar1 != 0) {
                        iVar1 = FUN_009f3e10(0x6e,param_2);
                        if (iVar1 != 0) {
                          iVar1 = FUN_009ed9c0(0x6f,param_2);
                          if (iVar1 != 0) {
                            iVar1 = FUN_009eda30(0x70,param_2);
                            if (iVar1 != 0) {
                              iVar1 = FUN_009edaa0(0x71,param_2);
                              if (iVar1 != 0) {
                                iVar1 = FUN_009edb10(0x72,param_2);
                                if (iVar1 != 0) {
                                  iVar1 = FUN_009edb80(0x73,param_2);
                                  if (iVar1 != 0) {
                                    iVar1 = FUN_009edbf0(0x74,param_2);
                                    if (iVar1 != 0) {
                                      iVar1 = FUN_009edc60(0x75,param_2);
                                      if (iVar1 != 0) {
                                        iVar1 = FUN_009edcd0(0x76,param_2);
                                        if (iVar1 != 0) {
                                          iVar1 = FUN_009edd40(0x78,param_2);
                                          if (iVar1 != 0) {
                                            iVar1 = FUN_009eddb0(0x79,param_2);
                                            if (iVar1 != 0) {
                                              iVar1 = FUN_009ede20(0x7a,param_2);
                                              if (iVar1 != 0) {
                                                iVar1 = FUN_009e7a40(0x7d,param_2);
                                                if (iVar1 != 0) {
                                                  iVar1 = FUN_009e7ab0(0x82,param_2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = FUN_009ede90(0x87,param_2);
                                                    if (iVar1 != 0) {
                                                      iVar1 = FUN_009f7040(0x8c,param_2);
                                                      if (iVar1 != 0) {
                                                        iVar1 = FUN_009f7110(0x96,param_2);
                                                        if (iVar1 != 0) {
                                                          iVar1 = FUN_009f7180(0x97,param_2);
                                                          if (iVar1 != 0) {
                                                            iVar1 = FUN_009edf00(0xa0,param_2);
                                                            if (iVar1 != 0) {
                                                              iVar1 = FUN_009f71f0(0xa1,param_2);
                                                              if (iVar1 != 0) {
                                                                iVar1 = FUN_009edf70(0xa2,param_2);
                                                                if (iVar1 != 0) {
                                                                  iVar1 = FUN_009f12a0(0xaa,param_2)
                                                                  ;
                                                                  return iVar1 != 0;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 009F74F0  FUN_009f74f0  size=12  [run]
undefined4 __fastcall FUN_009f74f0(undefined4 param_1)

{
  FUN_00e240c0();
  return param_1;
}

// 009F7560  FUN_009f7560  size=1089  [run]
void FUN_009f7560(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar6 = *param_4 - *param_3;
  fVar15 = param_4[1] - param_3[1];
  fVar16 = param_4[2] - param_3[2];
  fVar1 = param_4[3];
  fVar2 = param_3[3];
  fVar7 = *param_5 - *param_3;
  fVar8 = param_5[1] - param_3[1];
  fVar17 = param_5[2] - param_3[2];
  fVar3 = param_5[3];
  fVar4 = param_3[3];
  fVar9 = (param_2[2] - param_3[2]) * fVar16 +
          (*param_2 - *param_3) * fVar6 + (param_2[1] - param_3[1]) * fVar15;
  fVar5 = fVar17 * (param_2[2] - param_3[2]) +
          fVar8 * (param_2[1] - param_3[1]) + fVar7 * (*param_2 - *param_3);
  if ((fVar9 <= 0.0) && (fVar5 <= 0.0)) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    return;
  }
  fVar11 = (param_2[2] - param_4[2]) * fVar16 +
           (*param_2 - *param_4) * fVar6 + (param_2[1] - param_4[1]) * fVar15;
  fVar10 = (param_2[2] - param_4[2]) * fVar17 +
           (*param_2 - *param_4) * fVar7 + (param_2[1] - param_4[1]) * fVar8;
  if ((0.0 <= fVar11) && (fVar10 <= fVar11)) {
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    param_1[3] = param_4[3];
    return;
  }
  fVar14 = fVar10 * fVar9 - fVar11 * fVar5;
  if (((fVar14 <= 0.0) && (0.0 <= fVar9)) && (fVar11 < 0.0 != (fVar11 == 0.0))) {
    fVar9 = fVar9 / (fVar9 - fVar11);
    fVar3 = param_3[1];
    fVar4 = param_3[2];
    fVar5 = param_3[3];
    *param_1 = *param_3 + fVar9 * fVar6;
    param_1[1] = fVar3 + fVar9 * fVar15;
    param_1[2] = fVar9 * fVar16 + fVar4;
    param_1[3] = fVar9 * (fVar1 - fVar2) + fVar5;
    return;
  }
  fVar12 = (param_2[2] - param_5[2]) * fVar16 +
           (*param_2 - *param_5) * fVar6 + (param_2[1] - param_5[1]) * fVar15;
  fVar13 = (param_2[2] - param_5[2]) * fVar17 +
           (*param_2 - *param_5) * fVar7 + (param_2[1] - param_5[1]) * fVar8;
  if ((!NAN(fVar13) && 0.0 < fVar13 != (fVar13 == 0.0)) && (fVar12 <= fVar13)) {
    *param_1 = *param_5;
    param_1[1] = param_5[1];
    param_1[2] = param_5[2];
    param_1[3] = param_5[3];
    return;
  }
  fVar9 = fVar12 * fVar5 - fVar13 * fVar9;
  if (((fVar9 <= 0.0) && (0.0 <= fVar5)) && (fVar13 < 0.0 != (fVar13 == 0.0))) {
    fVar5 = fVar5 / (fVar5 - fVar13);
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar6 = param_3[3];
    *param_1 = *param_3 + fVar5 * fVar7;
    param_1[1] = fVar1 + fVar8 * fVar5;
    param_1[2] = fVar5 * fVar17 + fVar2;
    param_1[3] = (fVar3 - fVar4) * fVar5 + fVar6;
    return;
  }
  fVar5 = fVar13 * fVar11 - fVar12 * fVar10;
  if (((fVar5 <= 0.0) && (fVar10 = fVar10 - fVar11, !NAN(fVar10) && 0.0 < fVar10 != (fVar10 == 0.0))
      ) && (fVar12 = fVar12 - fVar13, !NAN(fVar12) && 0.0 < fVar12 != (fVar12 == 0.0))) {
    fVar10 = fVar10 / (fVar12 + fVar10);
    fVar1 = param_5[1];
    fVar2 = param_4[1];
    fVar3 = param_5[2];
    fVar4 = param_4[2];
    fVar6 = param_5[3];
    fVar5 = param_4[3];
    fVar7 = param_4[1];
    fVar8 = param_4[2];
    fVar9 = param_4[3];
    *param_1 = (*param_5 - *param_4) * fVar10 + *param_4;
    param_1[1] = (fVar1 - fVar2) * fVar10 + fVar7;
    param_1[2] = (fVar3 - fVar4) * fVar10 + fVar8;
    param_1[3] = (fVar6 - fVar5) * fVar10 + fVar9;
    return;
  }
  fVar12 = 1.0 / (fVar5 + fVar9 + fVar14);
  fVar9 = fVar12 * fVar9;
  fVar12 = fVar12 * fVar14;
  fVar5 = param_3[1];
  fVar10 = param_3[2];
  fVar11 = param_3[3];
  *param_1 = *param_3 + fVar9 * fVar6 + fVar12 * fVar7;
  param_1[1] = fVar9 * fVar15 + fVar5 + fVar12 * fVar8;
  param_1[2] = fVar9 * fVar16 + fVar10 + fVar17 * fVar12;
  param_1[3] = (fVar1 - fVar2) * fVar9 + fVar11 + fVar12 * (fVar3 - fVar4);
  return;
}

// 009F79C0  FUN_009f79c0  size=205  [run]
void __thiscall FUN_009f79c0(undefined4 *param_1,int param_2)

{
  param_1[0x2e2] = 0x3f800000;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[0x2e3] = 0x3f860a92;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0x2e4] = 0;
  param_1[700] = 0;
  param_1[0x2bd] = 0;
  param_1[0x2f0] = 0x3dcccccd;
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2e9] = 1;
  param_1[0x2f1] = 0;
  param_1[0x2eb] = 0;
  param_1[0x2ea] = 0;
  if (param_2 == 0) {
    param_1[0x2e5] = 0;
    param_1[0x2e8] = 0x3fc00000;
  }
  param_1[0x2f5] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2ec] = 0;
  param_1[0x2f4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[0x24c] = 0;
  param_1[0x24d] = 0;
  param_1[3] = 0;
  param_1[0x2f6] = 0;
  return;
}

// 009F7A90  FUN_009f7a90  size=147  [run]
void __fastcall FUN_009f7a90(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (((*param_1 != 0) && (param_1[6] != 0)) && (uVar3 = 0, param_1[6] != 0)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1[7] + 0xb0 + iVar2);
      iVar4 = param_1[7] + iVar2;
      if (iVar1 != 0) {
        FUN_00f95f40(iVar4 + 0x50,iVar1,0xffffffff,0);
      }
      if (*(int *)(iVar4 + 0xb4) != 0) {
        FUN_00f95f40(iVar4 + 0x50,*(int *)(iVar4 + 0xb4),0xffffffff,0);
      }
      if ((*(int *)(iVar4 + 0xc0) != 0) && (*(int *)(iVar4 + 0xc4) != 0)) {
        FUN_00f95f40(iVar4 + 0x50,*(int *)(iVar4 + 0xc0),0xffffffff,0);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x100;
    } while (uVar3 < (uint)param_1[6]);
  }
  return;
}

// 009F7B30  FUN_009f7b30  size=79  [run]
void __fastcall FUN_009f7b30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x24) != 0)) &&
      (*(int *)(param_1 + 0xafc) != 0)) && (uVar2 = 0, *(int *)(param_1 + 0x24) != 0)) {
    iVar1 = 0;
    do {
      FUN_00f96100(*(int *)(param_1 + 0x28) + iVar1 + 0x30,
                   *(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc + iVar1),0xffffffff,0,0);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x24));
  }
  return;
}

// 009F7B80  FUN_009f7b80  size=593  [run]
void __thiscall FUN_009f7b80(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  int *piStack_ac;
  undefined1 *puStack_a8;
  int *piStack_a4;
  undefined1 *local_a0;
  float fStack_9c;
  undefined1 *puStack_98;
  float local_94;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [8];
  undefined1 local_50 [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  if (*param_2 == 1) {
    local_94 = (float)param_2[1];
    iVar2 = *(int *)(param_1 + 0xb00);
    if (-1 < (int)local_94) {
      puStack_98 = (undefined1 *)0x9f7c39;
      iVar2 = FUN_00a12210();
    }
    if (iVar2 != 0) {
      fVar3 = (float10)fsin((float10)(float)param_2[0x21]);
      puStack_98 = local_50;
      local_94 = (float)(fVar3 * (float10)(float)param_2[0x1f]);
      fStack_9c = 1.4646456e-38;
      D3DXMatrixRotationY();
      fStack_9c = (float)(iVar2 + 0x10);
      piStack_a4 = (int *)auStack_58;
      puStack_a8 = (undefined1 *)0x9f7c6d;
      local_a0 = (undefined1 *)piStack_a4;
      D3DXMatrixMultiply();
      puStack_a8 = auStack_64;
      piStack_ac = param_2 + 4;
      D3DXVec3TransformNormal(&local_94);
      local_a0 = (undefined1 *)(fStack_40 + (float)local_a0);
      fStack_9c = fStack_3c + fStack_9c;
      puStack_98 = (undefined1 *)(fStack_38 + (float)puStack_98);
      D3DXVec3TransformNormal(&stack0xffffff70,param_2 + 8,auStack_70);
      fStack_9c = fStack_4c + fStack_9c;
      puStack_98 = (undefined1 *)(fStack_48 + (float)puStack_98);
      local_94 = fStack_44 + local_94;
      FUN_00f95fa0(&piStack_ac,&fStack_9c,0xffffff00,0);
      fsin((float10)(float)param_2[0x1c]);
      if (param_3 == 0) {
        FUN_00f95fa0(&piStack_ac,&stack0xffffff74,0xff000000,0);
        uVar4 = 0xff000000;
      }
      else {
        FUN_00f95fa0(&piStack_ac,&stack0xffffff74,0xff00ffff,0);
        uVar4 = 0xffff00ff;
      }
      FUN_00f96100(&stack0xffffff74,0x3ca3d70a,uVar4,0,0);
    }
    return;
  }
  local_a0 = (undefined1 *)((float)param_2[0xc] * *(float *)(param_1 + 0xb14));
  local_94 = 0.0;
  piVar1 = param_2 + 0x14;
  puStack_98 = (undefined1 *)0x0;
  piStack_a4 = piVar1;
  if (param_3 != 0) {
    fStack_9c = -1.714704e+38;
    puStack_a8 = (undefined1 *)0x9f7bbf;
    FUN_00f96100();
    local_a0 = (undefined1 *)((float)param_2[0x1d] * *(float *)(param_1 + 0xb14));
    local_94 = 0.0;
    puStack_98 = (undefined1 *)0x0;
    fStack_9c = -NAN;
    puStack_a8 = (undefined1 *)0x9f7bde;
    piStack_a4 = piVar1;
    FUN_00f96100();
    return;
  }
  fStack_9c = -1.7014118e+38;
  puStack_a8 = (undefined1 *)0x9f7bf9;
  FUN_00f96100();
  local_a0 = (undefined1 *)((float)param_2[0x1d] * *(float *)(param_1 + 0xb14));
  local_94 = 0.0;
  puStack_98 = (undefined1 *)0x0;
  fStack_9c = -1.7014118e+38;
  puStack_a8 = (undefined1 *)0x9f7c18;
  piStack_a4 = piVar1;
  FUN_00f96100();
  return;
}

// 009F82E0  FUN_009f82e0  size=230  [run]
void FUN_009f82e0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_0165bed4);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0x6c))(iVar1,param_1);
    }
    iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_0165bed0);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0x6c))(iVar1,param_1 + 2);
    }
    iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"weight");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 4);
    }
    iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"radius");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 8);
    }
    iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"offset1");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0xc);
    }
    iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"offset2");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0x48))(iVar1,param_1 + 0x18);
    }
  }
  return;
}

// 009F8460  FUN_009f8460  size=11  [run]
void __fastcall FUN_009f8460(int param_1)

{
  *(uint *)(param_1 + 0xbd8) = *(uint *)(param_1 + 0xbd8) | 0x80000000;
  return;
}

// 009F8470  FUN_009f8470  size=11  [run]
void __fastcall FUN_009f8470(int param_1)

{
  *(uint *)(param_1 + 0xbd8) = *(uint *)(param_1 + 0xbd8) & 0x7fffffff;
  return;
}

