// src/unsorted/unit_008F3BF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008F3BF0..008F4630, 16 functions

#include "mgrr.h"

// 008F3BF0  FUN_008f3bf0  size=60  [run]
void __fastcall FUN_008f3bf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F3C30  FUN_008f3c30  size=61  [run]
void __fastcall FUN_008f3c30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F3C70  FUN_008f3c70  size=8  [run]
void FUN_008f3c70(void)

{
  FUN_008f3970(0);
  return;
}

// 008F3C80  FUN_008f3c80  size=8  [run]
void FUN_008f3c80(void)

{
  FUN_008f3970(1);
  return;
}

// 008F3CB0  FUN_008f3cb0  size=194  [run]
void __thiscall FUN_008f3cb0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_4;
  
  if ((param_1[5] != 0) &&
     (uStack_4 = param_1, iVar3 = (**(code **)(*param_1 + 0x1c))(), iVar3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        if (*(int *)(*(int *)(iVar3 + 8) + iVar5 * 4) != 0) {
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 8) + iVar5 * 4);
          pcVar4 = (char *)FUN_0118fae0((int)&uStack_4 + 3);
          if (*pcVar4 == '\0') {
            FUN_0118fe70();
          }
          FUN_008f33d0(param_2,uVar2,"applyTransformFromObject");
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0xc));
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F3D80  FUN_008f3d80  size=219  [run]
void __thiscall FUN_008f3d80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_4;
  
  if ((param_1[5] != 0) &&
     (uStack_4 = param_1, iVar3 = (**(code **)(*param_1 + 0x1c))(), iVar3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    iVar6 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        if (*(int *)(*(int *)(iVar3 + 8) + iVar6 * 4) != 0) {
          iVar2 = *(int *)(*(int *)(iVar3 + 8) + iVar6 * 4);
          pcVar4 = (char *)FUN_0118fae0((int)&uStack_4 + 3);
          if (*pcVar4 == '\0') {
            FUN_0118fe70();
          }
          iVar5 = FUN_00fdbbd0(*(uint *)(iVar2 + 0x78) & 0xfffffffe,param_3);
          if (iVar5 != 0) {
            FUN_008f33d0(param_2,iVar2,"applyTransformFromObject");
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar3 + 0xc));
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F3E60  FUN_008f3e60  size=97  [run]
void __thiscall FUN_008f3e60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (((param_1[5] != 0) && (iVar1 = (**(code **)(*param_1 + 0x1c))(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x1c))(), *(int *)(iVar1 + 0xc) != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    iVar1 = **(int **)(iVar1 + 8);
    iVar2 = FUN_00fdbbd0(*(uint *)(iVar1 + 0x78) & 0xfffffffe,param_3);
    if (iVar2 == 0) {
      FUN_008f3840(param_2,iVar1,"mappingHk2PartsNullOnly");
    }
  }
  return;
}

// 008F3ED0  FUN_008f3ed0  size=71  [run]
void __thiscall FUN_008f3ed0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[5] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x1c))();
      if (*(int *)(iVar1 + 0xc) != 0) {
        iVar1 = (**(code **)(*param_1 + 0x1c))();
        FUN_008f3840(param_2,**(undefined4 **)(iVar1 + 8),"mappingHk2PartsNullOnly");
      }
    }
  }
  return;
}

// 008F3F20  FUN_008f3f20  size=188  [run]
void FUN_008f3f20(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_004066f0();
  iVar3 = param_3;
  iVar5 = 0;
  if (0 < *(int *)(param_3 + 0xc)) {
    do {
      iVar2 = *(int *)(iVar3 + 8);
      if (*(int *)(iVar2 + iVar5 * 4) != 0) {
        iVar2 = *(int *)(iVar2 + iVar5 * 4);
        pcVar4 = (char *)FUN_0118fae0(&param_3);
        if ((*pcVar4 == '\0') && (param_2 != 0)) {
          FUN_0118fe70();
        }
        if (*(int *)(iVar2 + 8) == 0) {
          FUN_011929d0(iVar2,1);
        }
        FUN_008f33d0(param_1,iVar2,"setAllTransformFromObject");
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar3 + 0xc));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008F3FE0  FUN_008f3fe0  size=51  [run]
void __thiscall FUN_008f3fe0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[5] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x1c))();
      FUN_008f3f20(param_2,param_3,uVar2);
    }
  }
  return;
}

// 008F4020  FUN_008f4020  size=201  [run]
void __thiscall FUN_008f4020(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uStack_4;
  
  if ((param_1[5] != 0) &&
     (uStack_4 = param_1, iVar3 = (**(code **)(*param_1 + 0x1c))(), iVar3 != 0)) {
    FUN_004066f0();
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        if (*(int *)(*(int *)(iVar3 + 8) + iVar5 * 4) != 0) {
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 8) + iVar5 * 4);
          pcVar4 = (char *)FUN_0118fae0((int)&uStack_4 + 3);
          if ((*pcVar4 == '\0') && (param_3 != 0)) {
            FUN_0118fe70();
          }
          FUN_008f3840(param_2,uVar2,"setAllTransformToObject");
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0xc));
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 008F40F0  FUN_008f40f0  size=209  [run]
void __thiscall FUN_008f40f0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[5] != 0) {
    iVar3 = (**(code **)(*param_1 + 0x1c))();
    if (iVar3 != 0) {
      FUN_004066f0();
      iVar3 = (**(code **)(*param_1 + 0x1c))();
      iVar4 = (**(code **)(*param_1 + 0x1c))();
      if (0 < *(int *)(iVar3 + 0xc)) {
        iVar5 = 0;
        do {
          if (*(int *)(*(int *)(iVar4 + 8) + iVar5 * 4) != 0) {
            iVar2 = *(int *)(*(int *)(iVar4 + 8) + iVar5 * 4);
            if (*(char *)(iVar2 + 0xe8) == '\x01') {
              FUN_008f3840(param_2,iVar2,"setAllTransform");
            }
            else {
              FUN_008f33d0(param_2,iVar2,"setAllTransForm");
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar3 + 0xc));
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
  }
  return;
}

// 008F41D0  FUN_008f41d0  size=61  [run]
void __fastcall FUN_008f41d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F4230  FUN_008f4230  size=955  [run]
void FUN_008f4230(undefined4 *param_1,float *param_2)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float local_110 [5];
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float afStack_a0 [12];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_b0 = param_2[0xc];
  local_ac = param_2[0xd];
  local_a8 = param_2[0xe];
  local_110[0] = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
  local_110[1] = SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6]);
  fVar5 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
  local_fc = param_2[6] / fVar5;
  local_f8 = param_2[10] / fVar5;
  fVar2 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar5));
  local_f4 = (float)fVar2;
  fVar3 = (float10)fpatan((float10)local_fc,(float10)local_f8);
  local_60 = (float)fVar3;
  fVar4 = (float10)fpatan((float10)param_2[1] / (float10)local_110[1],
                          (float10)*param_2 / (float10)local_110[0]);
  fVar3 = (float10)0;
  local_b8 = (float)fVar3;
  local_bc = (float)fVar3;
  local_c0 = (float)fVar3;
  local_c4 = (float)fVar3;
  local_cc = (float)fVar3;
  local_d0 = (float)fVar3;
  local_d4 = (float)fVar3;
  local_d8 = (float)fVar3;
  local_e0 = (float)fVar3;
  local_e4 = (float)fVar3;
  local_e8 = (float)fVar3;
  local_ec = (float)fVar3;
  local_b4 = 0x3f800000;
  local_c8 = 0x3f800000;
  local_dc = 0x3f800000;
  local_f0 = 0x3f800000;
  if (fVar3 != fVar4) {
    D3DXMatrixRotationZ(local_50,(float)fVar4);
    D3DXMatrixMultiply(&local_f8,auStack_58,&local_f8);
    fVar2 = (float10)local_f4;
  }
  if ((float10)0 != fVar2) {
    D3DXMatrixRotationY(local_50,(float)fVar2);
    D3DXMatrixMultiply(&local_f8,auStack_58,&local_f8);
  }
  if (local_60 != 0.0) {
    D3DXMatrixRotationX(local_50,local_60);
    D3DXMatrixMultiply(&local_f8,auStack_58,&local_f8);
  }
  local_c0 = local_b0;
  local_bc = local_ac;
  local_b8 = local_a8;
  FUN_01005190(&local_f0);
  fVar5 = afStack_a0[5] + afStack_a0[0] + afStack_a0[10];
  if (fVar5 <= 0.0) {
    local_110[0] = 1.4013e-45;
    local_110[1] = 2.8026e-45;
    local_110[2] = 0.0;
    uVar1 = (uint)(afStack_a0[0] < afStack_a0[5]);
    if (afStack_a0[uVar1 * 5] < afStack_a0[10]) {
      uVar1 = 2;
    }
    fVar5 = local_110[uVar1];
    fVar6 = local_110[(int)fVar5];
    fVar7 = SQRT((afStack_a0[uVar1 * 5] - (afStack_a0[(int)fVar6 * 5] + afStack_a0[(int)fVar5 * 5]))
                 + 1.0);
    fVar8 = 0.5 / fVar7;
    local_110[uVar1] = fVar7 * 0.5;
    local_110[3] = (afStack_a0[(int)fVar6 + (int)fVar5 * 4] -
                   afStack_a0[(int)fVar5 + (int)fVar6 * 4]) * fVar8;
    local_110[(int)fVar5] =
         (afStack_a0[uVar1 + (int)fVar5 * 4] + afStack_a0[(int)fVar5 + uVar1 * 4]) * fVar8;
    local_110[(int)fVar6] =
         (afStack_a0[uVar1 + (int)fVar6 * 4] + afStack_a0[(int)fVar6 + uVar1 * 4]) * fVar8;
  }
  else {
    local_110[3] = SQRT(fVar5 + 1.0);
    local_110[2] = 0.5 / local_110[3];
    local_110[0] = (afStack_a0[6] - afStack_a0[9]) * local_110[2];
    local_110[1] = (afStack_a0[8] - afStack_a0[2]) * local_110[2];
    local_110[2] = (afStack_a0[1] - afStack_a0[4]) * local_110[2];
    local_110[3] = local_110[3] * 0.5;
  }
  fVar5 = local_110[2] * local_110[2] + local_110[0] * local_110[0];
  fVar6 = local_110[3] * local_110[3] + local_110[1] * local_110[1];
  fVar7 = local_110[0] * local_110[0] + local_110[2] * local_110[2];
  fVar8 = local_110[1] * local_110[1] + local_110[3] * local_110[3];
  fVar9 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  fVar6 = fVar8 + fVar7;
  fVar7 = fVar7 + fVar8;
  auVar10._4_4_ = fVar5;
  auVar10._0_4_ = fVar9;
  auVar10._8_4_ = fVar6;
  auVar10._12_4_ = fVar7;
  auVar10 = rsqrtps(in_XMM3,auVar10);
  fVar8 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar13 = auVar10._12_4_;
  param_1[4] = (3.0 - fVar8 * fVar9 * fVar8) * fVar8 * 0.5 * local_110[0];
  param_1[5] = (3.0 - fVar11 * fVar5 * fVar11) * fVar11 * 0.5 * local_110[1];
  param_1[6] = (3.0 - fVar12 * fVar6 * fVar12) * fVar12 * 0.5 * local_110[2];
  param_1[7] = (3.0 - fVar13 * fVar7 * fVar13) * fVar13 * 0.5 * local_110[3];
  *param_1 = uStack_70;
  param_1[1] = uStack_6c;
  param_1[2] = uStack_68;
  param_1[3] = uStack_64;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  return;
}

// 008F45F0  FUN_008f45f0  size=60  [run]
void __fastcall FUN_008f45f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 008F4630  FUN_008f4630  size=61  [run]
void __fastcall FUN_008f4630(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

