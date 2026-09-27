// src/unsorted/unit_00EFCA70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EFCA70..00EFEE20, 17 functions

#include "mgrr.h"

// 00EFCA70  FUN_00efca70  size=125  [run]
float10 __fastcall FUN_00efca70(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar2 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
  }
  uVar2 = FUN_00e9fe70();
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    fVar4 = (float10)FUN_00edbf30(uVar2,param_1 + 400,*(undefined4 *)(uVar3 + 0xc),
                                  *(undefined4 *)(uVar3 + 0x10));
    return (float10)(float)fVar4;
  }
  return (float10)1.0;
}

// 00EFCAF0  FUN_00efcaf0  size=147  [run]
float10 __fastcall FUN_00efcaf0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar2 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar2);
    }
  }
  uVar2 = FUN_00e9fe70();
  if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
    fVar4 = (float10)FUN_00edc040(uVar2,param_1 + 400,*(undefined4 *)(uVar3 + 0x60),
                                  *(undefined4 *)(uVar3 + 100));
    return (float10)(float)fVar4;
  }
  return (float10)1.0;
}

// 00EFCB90  FUN_00efcb90  size=27  [run]
void __fastcall FUN_00efcb90(int param_1)

{
  FUN_00edfc20(param_1 + 0x3a0);
  FUN_00efb130(param_1 + 0x3a0);
  return;
}

// 00EFCBB0  FUN_00efcbb0  size=906  [run]
undefined4 __fastcall FUN_00efcbb0(int param_1)

{
  float *pfVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint local_8;
  
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = **(uint **)(param_1 + 0x58);
    if ((local_8 + 0xf & 0xfffffff0) != local_8) {
      uVar3 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x20), puVar2 == (uint *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar2;
    if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
      uVar3 = FUN_00f59ed0(2);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(local_8 + 0xe);
  if ((*(uint *)(param_1 + 0x30) & 0x4000000) == 0) {
    if (*(char *)(uVar7 + 0x10) != '\0') {
      *(undefined2 *)(param_1 + 0x4e) = 0xfffe;
    }
    if (((*(uint *)(param_1 + 0x30) & 0x4000000) == 0) && (-2 < *(short *)(param_1 + 0x4e))) {
      uVar3 = FUN_00a7c930();
      iVar4 = FUN_00a7c990(uVar3);
      if (iVar4 != 0) {
        *(undefined2 *)(param_1 + 0x4e) = 0xfffe;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x214) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x200) = 0x3f800000;
  if ((*(int *)(param_1 + 0x84) != 0) && ((*(byte *)(*(int *)(param_1 + 0x84) + 0x68) & 2) != 0)) {
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(uint **)(param_1 + 0x58);
      if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
        uVar3 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
    }
    if (*(char *)(uVar7 + 0x14) == -1) {
      *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(*(int *)(param_1 + 0x84) + 0x28);
    }
  }
  if ((*(uint *)(local_8 + 4) & 0x8000) != 0) {
    *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(param_1 + 0xf0);
  }
  if (-2 < *(short *)(param_1 + 0x4e)) {
    iVar4 = FUN_00a7c990(&DAT_01ee11f4);
    if ((iVar4 != 0) || (iVar4 = FUN_00a81330(), iVar4 == 0)) {
      FUN_009cca90(param_1,&DAT_016d9e94,(int)*(short *)(param_1 + 0x4e));
      return 0;
    }
    sVar6 = *(short *)(param_1 + 0x4e);
    if ((((((*(uint *)(param_1 + 0x6c) & 0x4000) != 0) &&
          (iVar4 = FUN_00a7c990(&DAT_01ee11f4), iVar4 == 0)) && (iVar4 = FUN_00a81330(), iVar4 != 0)
         ) && ((iVar4 = FUN_00a7c890(), iVar4 != 0 && (iVar5 = FUN_00e26e90(), iVar5 != 0)))) &&
       (iVar5 = *(int *)(iVar4 + 0xd8), iVar5 != 0)) {
      uVar7 = 0;
      if (*(uint *)(iVar4 + 0xdc) != 0) {
        do {
          if (*(short *)(iVar5 + uVar7 * 4) == sVar6) {
            sVar6 = *(short *)(iVar5 + 2 + uVar7 * 4);
            *(short *)(param_1 + 0x4e) = sVar6;
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x400;
            break;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar4 + 0xdc));
      }
    }
    if (((*(uint *)(param_1 + 0x30) & 0x4000000) != 0) ||
       ((*(uint *)(param_1 + 0x38) & 0x2000) == 0)) {
      if ((*(uint *)(param_1 + 0x38) & 0x4000) == 0) {
        iVar4 = FUN_00a7c990(&DAT_01ee11f4);
        if (((iVar4 == 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
           (iVar4 = FUN_00a7c800(), iVar4 != 0)) {
          iVar4 = FUN_00a12290((int)sVar6);
        }
        else {
          iVar4 = 0;
        }
        *(int *)(param_1 + 0x50) = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
      }
      else {
        iVar4 = FUN_00a7c990(&DAT_01ee11f4);
        if (((iVar4 == 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
           (iVar4 = FUN_00a7c800(), iVar4 != 0)) {
          uVar3 = FUN_00a12290(0xffffffff);
        }
        else {
          uVar3 = 0;
        }
        *(undefined4 *)(param_1 + 0x50) = uVar3;
        iVar4 = FUN_00a7c990(&DAT_01ee11f4);
        if (((iVar4 != 0) || (iVar4 = FUN_00a81330(), iVar4 == 0)) ||
           ((iVar4 = FUN_00a7c800(), iVar4 == 0 || (iVar4 = FUN_00a12290((int)sVar6), iVar4 == 0))))
        {
          return 0;
        }
        pfVar1 = (float *)(param_1 + 0x180);
        D3DXVec3TransformNormal(pfVar1,pfVar1,iVar4 + 0x10);
        *pfVar1 = *(float *)(iVar4 + 0x40) + *pfVar1;
        *(float *)(param_1 + 0x184) = *(float *)(iVar4 + 0x44) + *(float *)(param_1 + 0x184);
        *(float *)(param_1 + 0x188) = *(float *)(iVar4 + 0x48) + *(float *)(param_1 + 0x188);
      }
      *(undefined2 *)(param_1 + 0x400) = *(undefined2 *)(local_8 + 0x10);
    }
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
  }
  return 1;
}

// 00EFCF40  FUN_00efcf40  size=580  [run]
undefined4 FUN_00efcf40(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  uint uVar8;
  int unaff_EBX;
  short sVar9;
  
  *(undefined2 *)param_1[2] = *(undefined2 *)(param_2[2] + 0xe);
  if (((*(uint *)*param_1 & 0x4000000) == 0) && (*(char *)(param_2[3] + 0x10) != '\0')) {
    *(undefined2 *)param_1[2] = 0xfffe;
  }
  if (((*(uint *)*param_1 & 0x4000000) == 0) && (-2 < *(short *)param_1[2])) {
    uVar3 = FUN_00a7c930();
    iVar4 = FUN_00a7c990(uVar3);
    if (iVar4 != 0) {
      *(undefined2 *)param_1[2] = 0xfffe;
    }
  }
  puVar1 = (undefined4 *)param_1[3];
  iVar4 = param_2[4];
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[0xf] = 0x3f800000;
  puVar1[10] = 0x3f800000;
  puVar1[5] = 0x3f800000;
  *puVar1 = 0x3f800000;
  iVar4 = *(int *)(iVar4 + 0x24);
  if (((iVar4 != 0) && ((*(byte *)(iVar4 + 0x68) & 2) != 0)) && (*(char *)(param_2[2] + 0x14) == -1)
     ) {
    *(undefined2 *)param_1[2] = *(undefined2 *)(iVar4 + 0x28);
  }
  if ((*(uint *)(param_2[2] + 4) & 0x8000) != 0) {
    *(undefined2 *)param_1[2] = *(undefined2 *)(param_2[4] + 0x90);
  }
  if (-2 < *(short *)param_1[2]) {
    iVar4 = FUN_00a81330();
    if ((iVar4 == 0) || (iVar4 = FUN_00a7c7e0(), iVar4 == 0)) {
      if ((*(uint *)(*param_2 + 4) & 0x400) == 0) {
        return 0;
      }
      puVar6 = (undefined2 *)param_1[2];
      uVar7 = 0xfffe;
    }
    else {
      sVar9 = *(short *)param_1[2];
      if ((((*(uint *)(param_2[4] + 0xc) & 0x4000) != 0) && (iVar4 = FUN_00a7c890(), iVar4 != 0)) &&
         (iVar5 = FUN_00a8a8e0(), iVar5 != 0)) {
        uVar8 = 0;
        if (*(uint *)(iVar4 + 0xdc) != 0) {
          do {
            if (*(short *)(iVar5 + uVar8 * 4) == sVar9) {
              sVar9 = *(short *)(iVar5 + 2 + uVar8 * 4);
              *(short *)param_1[2] = sVar9;
              *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(iVar4 + 0xdc));
        }
      }
      if (((*(uint *)*param_1 & 0x4000000) == 0) && ((*(uint *)*param_2 & 0x2000) != 0))
      goto LAB_00efd16d;
      FUN_00a7c800();
      iVar4 = FUN_00a12210((int)sVar9);
      if (iVar4 == 0) {
        return 0;
      }
      if ((*(uint *)*param_2 & 0x4000) == 0) {
        *(int *)param_1[1] = iVar4;
        puVar6 = (undefined2 *)param_1[4];
        uVar7 = *(undefined2 *)(param_2[2] + 0x10);
      }
      else {
        uVar3 = FUN_00a12210(0xffffffff);
        *(undefined4 *)param_1[1] = uVar3;
        pfVar2 = (float *)param_1[5];
        D3DXVec3TransformNormal(pfVar2,pfVar2,iVar4 + 0x10);
        *pfVar2 = *(float *)(iVar4 + 0x40) + *pfVar2;
        pfVar2[1] = *(float *)(iVar4 + 0x44) + pfVar2[1];
        pfVar2[2] = *(float *)(iVar4 + 0x48) + pfVar2[2];
        puVar6 = (undefined2 *)param_1[4];
        uVar7 = *(undefined2 *)(*(int *)(unaff_EBX + 8) + 0x10);
      }
    }
    *puVar6 = uVar7;
  }
LAB_00efd16d:
  if (*(int *)param_1[1] != 0) {
    *(uint *)*param_1 = *(uint *)*param_1 | 4;
  }
  return 1;
}

// 00EFD190  FUN_00efd190  size=96  [run]
void __thiscall FUN_00efd190(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x24);
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    *(uint *)(param_2 + 8) = uVar1;
    FUN_00edfc20(param_2);
    return;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_00edfc20(param_2);
  return;
}

// 00EFD1F0  FUN_00efd1f0  size=102  [run]
void __thiscall FUN_00efd1f0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_4;
  if (param_4 != 0) {
    FUN_00efc630(param_2,param_3,param_4,param_4 + 0x10,*(undefined4 *)(param_1 + 0x84));
    __security_check_cookie(local_4 ^ (uint)&local_4);
    return;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  __security_check_cookie(local_4 ^ (uint)&local_4);
  return;
}

// 00EFD260  FUN_00efd260  size=27  [run]
void FUN_00efd260(undefined4 param_1)

{
  FUN_00efb130(param_1);
  FUN_00efbd40(param_1);
  return;
}

// 00EFD280  FUN_00efd280  size=1919  [run]
/* WARNING: Removing unreachable block (ram,0x00efd508) */
/* WARNING: Removing unreachable block (ram,0x00efd8a9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00efd280(float *param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined1 *puVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puStack_164;
  undefined4 *puStack_160;
  undefined4 *puStack_15c;
  undefined4 *puStack_158;
  float *pfStack_154;
  float fStack_150;
  float *pfStack_14c;
  undefined1 *puStack_148;
  float fStack_144;
  float fStack_140;
  float local_13c;
  float *local_138;
  float *local_134;
  float fStack_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float afStack_110 [2];
  float local_108;
  uint local_104;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float *local_d8;
  float local_d4;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [40];
  uint uStack_54;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_124;
  local_134 = (float *)0xefd2a8;
  local_104 = FUN_00a283a0();
  local_ec = (float)(int)local_104;
  if ((int)local_104 < 0) {
    local_ec = local_ec + 4.2949673e+09;
  }
  local_ec = local_ec / 1280.0;
  local_134 = (float *)0xefd2c9;
  iVar8 = FUN_00a283d0();
  local_e8 = (float)iVar8;
  if (iVar8 < 0) {
    local_e8 = local_e8 + 4.2949673e+09;
  }
  local_e8 = local_e8 / 720.0;
  local_e4 = 1.0;
  if ((**(uint **)(param_2[2] + 8) & 0x100000) == 0) {
    local_ec = local_e8;
    local_e4 = local_e8;
  }
  pfVar1 = (float *)param_2[7];
  if (*pfVar1 == 0.0) {
    if (pfVar1[1] == 0.0) {
      if (pfVar1[2] == 0.0) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      bVar6 = false;
    }
  }
  else {
    bVar6 = false;
  }
  local_c0 = *pfVar1;
  local_bc = pfVar1[1];
  pfVar2 = (float *)param_2[6];
  local_b8 = pfVar1[2];
  iVar8 = param_2[3];
  local_104 = (uint)!bVar6;
  local_108 = *(float *)(*(int *)(param_2[2] + 4) + 8);
  if (local_108 != 0.0) {
    local_120 = *(float *)(iVar8 + 0x40) - *pfVar2;
    local_11c = *(float *)(iVar8 + 0x44) - pfVar2[1];
    local_118 = *(float *)(iVar8 + 0x48) - pfVar2[2];
    local_114 = *(float *)(iVar8 + 0x4c) - pfVar2[3];
    if (((local_120 != 0.0) || (local_11c != 0.0)) || (local_118 != 0.0)) {
      local_138 = &local_120;
      local_13c = 2.2024711e-38;
      local_134 = local_138;
      FUN_00ddf460();
      local_120 = local_108 * local_120;
      local_11c = local_11c * local_108;
      local_118 = local_118 * local_108;
      local_114 = local_108 * local_114;
      goto LAB_00efd438;
    }
  }
  local_120 = 0.0;
  local_11c = 0.0;
  local_118 = 0.0;
  local_114 = 1.0;
LAB_00efd438:
  local_e0 = local_120 + *pfVar2;
  local_dc = pfVar2[1] + local_11c;
  local_d8 = (float *)(pfVar2[2] + local_118);
  local_d4 = pfVar2[3] + local_114;
  if ((*(uint *)(param_2[1] + 4) & 0x100000) != 0) {
    local_e0 = local_e0 * local_ec;
    local_dc = local_e8 * local_dc;
    local_d8 = (float *)((float)local_d8 * local_e4);
  }
  fStack_140 = *param_1;
  local_134 = local_d8;
  local_138 = (float *)local_dc;
  local_13c = local_e0;
  fStack_144 = 2.2024988e-38;
  D3DXMatrixTranslation();
  fVar3 = *param_1;
  fVar5 = (float)(*(int *)(param_2[3] + 0x68) / 2);
  local_118 = (float)(*(int *)(param_2[3] + 100) / 2);
  puStack_148 = &stack0xfffffed0;
  pfStack_14c = afStack_110;
  fStack_150 = 2.2025099e-38;
  fStack_144 = fVar3;
  local_d4 = fVar5;
  D3DXVec3TransformNormal();
  uVar7 = _DAT_01ee1280 & 1;
  *(float *)((int)fVar3 + 0x30) = *(float *)((int)fVar3 + 0x30) + local_11c;
  *(float *)((int)fVar3 + 0x34) = local_118 + *(float *)((int)fVar3 + 0x34);
  *(float *)((int)fVar3 + 0x38) = local_114 + *(float *)((int)fVar3 + 0x38);
  if (uVar7 == 0) {
    _DAT_01ee1280 = _DAT_01ee1280 | 1;
    _DAT_01ee1270 = 3.1415927;
    _DAT_01ee1274 = 0.0;
    _DAT_01ee1278 = 0.0;
  }
  uStack_84 = 0;
  fVar3 = *param_1;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  fStack_a4 = 0.0;
  fStack_ac = 0.0;
  fStack_b0 = 0.0;
  uStack_b4 = 0;
  local_b8 = 0.0;
  uStack_80 = 0x3f800000;
  uStack_94 = 0x3f800000;
  fStack_a8 = 1.0;
  local_bc = 1.0;
  if (_DAT_01ee1278 != 0.0) {
    pfStack_154 = (float *)auStack_7c;
    fStack_150 = _DAT_01ee1278;
    puStack_158 = (undefined4 *)0xefd5fa;
    D3DXMatrixRotationZ();
    puStack_160 = &uStack_c4;
    puStack_15c = &uStack_84;
    puStack_164 = (undefined1 *)0xefd612;
    puStack_158 = puStack_160;
    D3DXMatrixMultiply();
  }
  if (_DAT_01ee1274 != 0.0) {
    pfStack_154 = (float *)auStack_7c;
    fStack_150 = _DAT_01ee1274;
    puStack_158 = (undefined4 *)0xefd63e;
    D3DXMatrixRotationY();
    puStack_160 = &uStack_c4;
    puStack_15c = &uStack_84;
    puStack_164 = (undefined1 *)0xefd656;
    puStack_158 = puStack_160;
    D3DXMatrixMultiply();
  }
  if (_DAT_01ee1270 != 0.0) {
    pfStack_154 = (float *)auStack_7c;
    fStack_150 = _DAT_01ee1270;
    puStack_158 = (undefined4 *)0xefd680;
    D3DXMatrixRotationX();
    puStack_160 = &uStack_c4;
    puStack_15c = &uStack_84;
    puStack_164 = (undefined1 *)0xefd698;
    puStack_158 = puStack_160;
    D3DXMatrixMultiply();
  }
  pfStack_154 = &local_bc;
  puStack_15c = (undefined4 *)0xefd6ab;
  puStack_158 = (undefined4 *)fVar3;
  fStack_150 = fVar3;
  D3DXMatrixMultiply();
  if (fVar5 != 0.0) {
    puVar4 = (undefined1 *)*param_1;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_9c = 0;
    fStack_a4 = 0.0;
    fStack_a8 = 0.0;
    fStack_ac = 0.0;
    fStack_b0 = 0.0;
    local_b8 = 0.0;
    local_bc = 0.0;
    local_c0 = 0.0;
    uStack_c4 = 0;
    uStack_8c = 0x3f800000;
    uStack_a0 = 0x3f800000;
    uStack_b4 = 0x3f800000;
    uStack_c8 = 0x3f800000;
    if (local_e0 != 0.0) {
      puStack_160 = &uStack_88;
      puStack_15c = (undefined4 *)local_e0;
      puStack_164 = (undefined1 *)0xefd750;
      D3DXMatrixRotationZ();
      puStack_164 = auStack_d0;
      D3DXMatrixMultiply(puStack_164,&uStack_90);
    }
    if (local_e4 != 0.0) {
      puStack_160 = &uStack_88;
      puStack_15c = (undefined4 *)local_e4;
      puStack_164 = (undefined1 *)0xefd792;
      D3DXMatrixRotationY();
      puStack_164 = auStack_d0;
      D3DXMatrixMultiply(puStack_164,&uStack_90);
    }
    if (local_e8 != 0.0) {
      puStack_160 = &uStack_88;
      puStack_15c = (undefined4 *)local_e8;
      puStack_164 = (undefined1 *)0xefd7d2;
      D3DXMatrixRotationX();
      puStack_164 = auStack_d0;
      D3DXMatrixMultiply(puStack_164,&uStack_90);
    }
    puStack_160 = &uStack_c8;
    puStack_164 = puVar4;
    puStack_15c = (undefined4 *)puVar4;
    D3DXMatrixMultiply();
  }
  puVar4 = (undefined1 *)*param_1;
  puStack_15c = (undefined4 *)&stack0xfffffed8;
  puStack_160 = &uStack_88;
  if ((*(byte *)(*param_2 + 4) & 0x40) == 0) {
    fVar3 = (float)param_2[10];
    local_120 = 1.0;
  }
  else {
    fVar3 = (float)param_2[10];
    local_120 = (float)param_2[0xb] * 100.0;
  }
  fStack_124 = fVar3 * 100.0 * afStack_110[0];
  puStack_164 = (undefined1 *)0xefd853;
  FUN_00ddd140();
  puStack_160 = &uStack_88;
  puStack_164 = puVar4;
  puStack_15c = (undefined4 *)puVar4;
  D3DXMatrixMultiply();
  iVar8 = *(int *)(param_2[2] + 4);
  local_138 = *(float **)(iVar8 + 0x18);
  fVar3 = *param_1;
  local_e4 = *(float *)(iVar8 + 0x14);
  local_dc = 0.0;
  local_e0 = (float)local_138;
  D3DXVec3TransformNormal(&local_134,&local_e4,fVar3);
  *(float *)((int)fVar3 + 0x30) = fStack_140 + *(float *)((int)fVar3 + 0x30);
  *(float *)((int)fVar3 + 0x34) = local_13c + *(float *)((int)fVar3 + 0x34);
  *(float *)((int)fVar3 + 0x38) = (float)local_138 + *(float *)((int)fVar3 + 0x38);
  pfVar1 = (float *)param_1[1];
  if (pfVar1 != (float *)0x0) {
    if ((*(float *)(iVar8 + 0x14) == 0.5) && (*(float *)(iVar8 + 0x18) == 0.5)) {
      *pfVar1 = local_120;
      pfVar1[1] = local_11c;
      pfVar1[2] = local_118;
      pfVar1[3] = local_114;
      __security_check_cookie(uStack_54 ^ (uint)&puStack_164);
      return;
    }
    if ((_DAT_01ee1280 & 2) == 0) {
      _DAT_01ee1280 = _DAT_01ee1280 | 2;
      _DAT_01ee1260 = 0xbf000000;
      _DAT_01ee1264 = 0xbf000000;
      _DAT_01ee1268 = 0;
    }
    pfVar1 = (float *)*param_1;
    D3DXVec3TransformNormal(&fStack_140,&DAT_01ee1260,pfVar1);
    if (&local_e0 != pfVar1) {
      FID_conflict__memcpy(&local_e0,pfVar1,0x40);
    }
    pfVar1 = (float *)param_1[1];
    fStack_b0 = fStack_b0 + fStack_140;
    fStack_ac = fStack_ac + local_13c;
    fStack_a8 = fStack_a8 + (float)local_138;
    *pfVar1 = fStack_b0;
    pfVar1[1] = fStack_ac;
    pfVar1[2] = fStack_a8;
    pfVar1[3] = fStack_a4;
  }
  __security_check_cookie(uStack_54 ^ (uint)&puStack_164);
  return;
}

// 00EFDA00  FUN_00efda00  size=1011  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00efda00(int param_1,undefined1 *param_2,int *param_3,int param_4)

{
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined1 local_60 [32];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_94;
  if ((*(char *)(*param_3 + 0x1c) != '\0') || (*(char *)(*param_3 + 0x1d) != '\0'))
  goto LAB_00efdddc;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    if ((_DAT_01ee12a0 & 1) == 0) {
      _DAT_01ee12a0 = _DAT_01ee12a0 | 1;
      _DAT_01ee1290 = 0xbf000000;
      _DAT_01ee1294 = 0xbf000000;
      _DAT_01ee1298 = 0;
    }
    D3DXVec3TransformNormal(&local_70,&DAT_01ee1290,param_2);
    if (local_60 != param_2) {
      FID_conflict__memcpy(local_60,param_2,0x40);
    }
    local_30 = local_30 + local_70;
    local_2c = local_2c + fStack_6c;
    local_28 = local_28 + fStack_68;
  }
  else {
    FID_conflict__memcpy(local_60,param_2,0x40);
  }
  if ((*(uint *)(param_1 + 0x38) & 0x100000) == 0) {
    local_90 = *(float *)(param_4 + 0x40) - *(float *)(param_4 + 0x50);
    local_8c = *(float *)(param_4 + 0x44) - *(float *)(param_4 + 0x54);
    local_88 = *(float *)(param_4 + 0x48) - *(float *)(param_4 + 0x58);
    local_84 = *(float *)(param_4 + 0x4c) - *(float *)(param_4 + 0x5c);
    fStack_94 = local_90 * local_90 + local_8c * local_8c + local_88 * local_88;
    if (fStack_94 < 0.0 == (fStack_94 == 0.0)) {
      FUN_00ddf460(&local_90,&local_90);
    }
    else {
LAB_00efdca2:
      FUN_00dd5650(&DAT_0163d0ac);
      local_90 = 0.0;
      local_8c = 1.0;
      local_88 = 0.0;
    }
  }
  else {
    local_90 = *(float *)(param_4 + 0x40) - local_30;
    local_8c = *(float *)(param_4 + 0x44) - local_2c;
    local_88 = *(float *)(param_4 + 0x48) - local_28;
    local_84 = *(float *)(param_4 + 0x4c) - local_24;
    if (((local_90 == 0.0) && (local_8c == 0.0)) && (local_88 == 0.0)) {
      local_90 = *(float *)(param_4 + 0x40) - *(float *)(param_4 + 0x50);
      local_8c = *(float *)(param_4 + 0x44) - *(float *)(param_4 + 0x54);
      local_88 = *(float *)(param_4 + 0x48) - *(float *)(param_4 + 0x58);
      local_84 = *(float *)(param_4 + 0x4c) - *(float *)(param_4 + 0x5c);
      fStack_94 = local_90 * local_90 + local_8c * local_8c + local_88 * local_88;
      if (fStack_94 < 0.0 != (fStack_94 == 0.0)) goto LAB_00efdca2;
      FUN_00ddf460(&local_90,&local_90);
    }
    else {
      FUN_00ddf460(&local_90,&local_90);
    }
  }
  fStack_80 = fStack_40;
  fStack_7c = fStack_3c;
  fStack_78 = fStack_38;
  uStack_74 = uStack_34;
  fStack_94 = fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c;
  if (fStack_94 != 0.0) {
    if (NAN(fStack_94) || fStack_94 < 0.0 == (fStack_94 == 0.0)) {
      FUN_00ddf460(&fStack_80,&fStack_80);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_80 = 0.0;
      fStack_7c = 1.0;
      fStack_78 = 0.0;
    }
  }
  fStack_94 = ABS(fStack_78 * local_88 + fStack_80 * local_90 + fStack_7c * local_8c);
  fStack_94 = fStack_94 * fStack_94;
  if ((*(uint *)(param_1 + 0x3c) & 0x20000) != 0) {
    fStack_94 = 1.0 - fStack_94;
  }
  *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0x124) * fStack_94;
LAB_00efdddc:
  __security_check_cookie(local_14 ^ (uint)&fStack_94);
  return;
}

// 00EFDE00  FUN_00efde00  size=1321  [run]
void __thiscall FUN_00efde00(int param_1,int param_2,int *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_68;
  float local_64;
  undefined8 local_50;
  float fStack_48;
  undefined8 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  iVar2 = *param_3;
  if ((*(byte *)(iVar2 + 0x1c) == 0) && (*(char *)(iVar2 + 0x1d) == '\0')) {
    return;
  }
  bVar1 = *(byte *)(iVar2 + 0x1d);
  fVar3 = (float)*(byte *)(iVar2 + 0x1c);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    local_40 = (double)CONCAT44(*(float *)(param_1 + 0x104) * -0.5,
                                *(float *)(param_1 + 0x100) * -0.5);
    local_38 = 0.0;
    D3DXVec3TransformNormal(&local_50,&local_40,param_2);
    *(float *)(param_2 + 0x30) = (float)local_50 + *(float *)(param_2 + 0x30);
    *(float *)(param_2 + 0x34) = *(float *)(param_2 + 0x34) + local_50._4_4_;
    *(float *)(param_2 + 0x38) = *(float *)(param_2 + 0x38) + fStack_48;
  }
  if ((*(uint *)(param_1 + 0x38) & 0x100000) == 0) {
    local_30 = *(float *)(param_4 + 0x40) - *(float *)(param_4 + 0x50);
    local_2c = *(float *)(param_4 + 0x44) - *(float *)(param_4 + 0x54);
    fStack_28 = *(float *)(param_4 + 0x48) - *(float *)(param_4 + 0x58);
    fStack_24 = *(float *)(param_4 + 0x4c) - *(float *)(param_4 + 0x5c);
    fVar4 = local_30 * local_30 + local_2c * local_2c + fStack_28 * fStack_28;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
      goto LAB_00efdfea;
    }
  }
  else {
    local_40 = *(double *)(param_2 + 0x30);
    local_38 = *(float *)(param_2 + 0x38);
    local_34 = *(float *)(param_2 + 0x3c);
    local_30 = *(float *)(param_4 + 0x40) - *(float *)(param_2 + 0x30);
    local_2c = *(float *)(param_4 + 0x44) - *(float *)(param_2 + 0x34);
    fStack_28 = *(float *)(param_4 + 0x48) - local_38;
    fStack_24 = *(float *)(param_4 + 0x4c) - local_34;
    if (((local_30 != 0.0) || (local_2c != 0.0)) || (fStack_28 != 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
      goto LAB_00efdfea;
    }
    local_30 = *(float *)(param_4 + 0x40) - *(float *)(param_4 + 0x50);
    local_2c = *(float *)(param_4 + 0x44) - *(float *)(param_4 + 0x54);
    fStack_28 = *(float *)(param_4 + 0x48) - *(float *)(param_4 + 0x58);
    fStack_24 = *(float *)(param_4 + 0x4c) - *(float *)(param_4 + 0x5c);
    fVar4 = local_30 * local_30 + local_2c * local_2c + fStack_28 * fStack_28;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
      goto LAB_00efdfea;
    }
  }
  FUN_00dd5650(&DAT_0163d0ac);
  local_30 = 0.0;
  local_2c = 1.0;
  fStack_28 = 0.0;
LAB_00efdfea:
  fStack_20 = *(float *)(param_2 + 0x20);
  fStack_1c = *(float *)(param_2 + 0x24);
  fStack_18 = *(float *)(param_2 + 0x28);
  uStack_14 = *(undefined4 *)(param_2 + 0x2c);
  fVar4 = fStack_20 * fStack_20 + fStack_1c * fStack_1c + fStack_18 * fStack_18;
  if (fVar4 != 0.0) {
    if (NAN(fVar4) || fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&fStack_20,&fStack_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_20 = 0.0;
      fStack_1c = 1.0;
      fStack_18 = 0.0;
    }
  }
  local_50 = (double)local_2c;
  local_40 = (double)fStack_28;
  fVar5 = (float10)FUN_00fdef70();
  fVar6 = (float10)FUN_00fdef70();
  if ((float)fVar6 * (float)fVar5 != 0.0) {
    fVar5 = (float10)FUN_00fdc4e0();
    fStack_68 = (float)fVar5 * 57.29578;
    if ((*(uint *)(param_1 + 0x3c) & 0x100000) != 0) {
      fStack_68 = 90.0 - fStack_68;
    }
    local_64 = 1.0;
    if ((fStack_68 < (float)bVar1) &&
       (local_64 = (fStack_68 - fVar3) / ((float)bVar1 - fVar3), 1.0 < local_64)) {
      local_64 = 1.0;
    }
    *(float *)(param_1 + 0x124) = local_64 * *(float *)(param_1 + 0x124);
    return;
  }
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  return;
}

// 00EFE330  FUN_00efe330  size=1105  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00efe330(undefined4 *param_1,int *param_2)

{
  undefined1 *_Src;
  int iVar1;
  float10 fVar2;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined1 local_60 [32];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_a4;
  if ((*(char *)(*(int *)param_2[2] + 0x1c) != '\0') ||
     (*(char *)(*(int *)param_2[2] + 0x1d) != '\0')) goto LAB_00efe76c;
  if ((*(byte *)*param_2 & 1) == 0) {
    if ((_DAT_01ee12c0 & 1) == 0) {
      _DAT_01ee12c0 = _DAT_01ee12c0 | 1;
      _DAT_01ee12b0 = 0xbf000000;
      _DAT_01ee12b4 = 0xbf000000;
      _DAT_01ee12b8 = 0;
    }
    _Src = (undefined1 *)*param_1;
    D3DXVec3TransformNormal(&local_70,&DAT_01ee12b0,_Src);
    if (local_60 != _Src) {
      FID_conflict__memcpy(local_60,_Src,0x40);
    }
    local_30 = local_30 + local_70;
    local_2c = local_2c + fStack_6c;
    local_28 = local_28 + fStack_68;
  }
  else {
    FID_conflict__memcpy(local_60,(void *)*param_1,0x40);
  }
  if ((*(uint *)*param_2 & 0x100000) == 0) {
    iVar1 = param_2[3];
    local_a0 = *(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x50);
    local_9c = *(float *)(iVar1 + 0x44) - *(float *)(iVar1 + 0x54);
    local_98 = *(float *)(iVar1 + 0x48) - *(float *)(iVar1 + 0x58);
    local_94 = *(float *)(iVar1 + 0x4c) - *(float *)(iVar1 + 0x5c);
    fStack_84 = local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c;
    fVar2 = (float10)FUN_00fdef70();
    fStack_a4 = (float)fVar2;
    if (fStack_a4 != 0.0) {
      if (fStack_84 <= 0.0) goto LAB_00efe539;
      FUN_00ddf460(&local_a0,&local_a0);
    }
  }
  else {
    iVar1 = param_2[3];
    local_a0 = *(float *)(iVar1 + 0x40) - local_30;
    local_9c = *(float *)(iVar1 + 0x44) - local_2c;
    local_98 = *(float *)(iVar1 + 0x48) - local_28;
    local_94 = *(float *)(iVar1 + 0x4c) - local_24;
    if (((local_a0 == 0.0) && (local_9c == 0.0)) && (local_98 == 0.0)) {
      local_a0 = *(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x50);
      local_9c = *(float *)(iVar1 + 0x44) - *(float *)(iVar1 + 0x54);
      local_98 = *(float *)(iVar1 + 0x48) - *(float *)(iVar1 + 0x58);
      local_94 = *(float *)(iVar1 + 0x4c) - *(float *)(iVar1 + 0x5c);
      fStack_84 = local_a0 * local_a0 + local_9c * local_9c + local_98 * local_98;
      if (fStack_84 < 0.0 == (fStack_84 == 0.0)) {
        FUN_00ddf460(&local_a0,&local_a0);
      }
      else {
LAB_00efe539:
        FUN_00dd5650(&DAT_0163d0ac);
        local_a0 = 0.0;
        local_9c = 1.0;
        local_98 = 0.0;
      }
    }
    else {
      FUN_00ddf460(&local_a0,&local_a0);
    }
  }
  fStack_80 = fStack_40;
  fStack_7c = fStack_3c;
  fStack_78 = fStack_38;
  uStack_74 = uStack_34;
  fStack_a4 = fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c;
  if (fStack_a4 != 0.0) {
    if (NAN(fStack_a4) || fStack_a4 < 0.0 == (fStack_a4 == 0.0)) {
      FUN_00ddf460(&fStack_80,&fStack_80);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_80 = 0.0;
      fStack_7c = 1.0;
      fStack_78 = 0.0;
    }
  }
  fStack_a4 = ABS(fStack_78 * local_98 + fStack_80 * local_a0 + fStack_7c * local_9c);
  fStack_84 = fStack_a4 * fStack_a4;
  if ((*(uint *)(*param_2 + 4) & 0x20000) != 0) {
    fStack_84 = 1.0 - fStack_84;
  }
  *(float *)param_1[2] = *(float *)param_1[2] * fStack_84;
LAB_00efe76c:
  __security_check_cookie(local_14 ^ (uint)&fStack_a4);
  return;
}

// 00EFE790  FUN_00efe790  size=1357  [run]
/* WARNING: Removing unreachable block (ram,0x00efebb4) */

void FUN_00efe790(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_6c;
  undefined8 local_50;
  float fStack_48;
  undefined8 local_40;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)param_2[2];
  if ((*(byte *)(iVar2 + 0x1c) == 0) && (*(char *)(iVar2 + 0x1d) == '\0')) {
    return;
  }
  bVar1 = *(byte *)(iVar2 + 0x1d);
  fVar3 = (float)*(byte *)(iVar2 + 0x1c);
  if ((*(byte *)*param_2 & 1) == 0) {
    local_40 = (double)CONCAT44((float)param_2[10] * -0.5,(float)param_2[9] * -0.5);
    local_38 = 0.0;
    D3DXVec3TransformNormal(&local_50,&local_40,param_3);
    *(float *)(param_3 + 0x30) = (float)local_50 + *(float *)(param_3 + 0x30);
    *(float *)(param_3 + 0x34) = *(float *)(param_3 + 0x34) + local_50._4_4_;
    *(float *)(param_3 + 0x38) = *(float *)(param_3 + 0x38) + fStack_48;
  }
  if ((*(uint *)*param_2 & 0x100000) == 0) {
    iVar2 = param_2[3];
    local_30 = *(float *)(iVar2 + 0x40) - *(float *)(iVar2 + 0x50);
    fStack_2c = *(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x54);
    fStack_28 = *(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x58);
    fStack_24 = *(float *)(iVar2 + 0x4c) - *(float *)(iVar2 + 0x5c);
    fVar4 = local_30 * local_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
      goto LAB_00efe977;
    }
  }
  else {
    iVar2 = param_2[3];
    local_40 = *(double *)(param_3 + 0x30);
    local_38 = *(float *)(param_3 + 0x38);
    local_34 = *(float *)(param_3 + 0x3c);
    local_30 = *(float *)(iVar2 + 0x40) - *(float *)(param_3 + 0x30);
    fStack_2c = *(float *)(iVar2 + 0x44) - *(float *)(param_3 + 0x34);
    fStack_28 = *(float *)(iVar2 + 0x48) - local_38;
    fStack_24 = *(float *)(iVar2 + 0x4c) - local_34;
    if (((local_30 != 0.0) || (fStack_2c != 0.0)) || (fStack_28 != 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
      goto LAB_00efe977;
    }
    local_30 = *(float *)(iVar2 + 0x40) - *(float *)(iVar2 + 0x50);
    fStack_2c = *(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x54);
    fStack_28 = *(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x58);
    fStack_24 = *(float *)(iVar2 + 0x4c) - *(float *)(iVar2 + 0x5c);
    fVar4 = local_30 * local_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
      goto LAB_00efe977;
    }
  }
  FUN_00dd5650(&DAT_0163d0ac);
  local_30 = 0.0;
  fStack_2c = 1.0;
  fStack_28 = 0.0;
LAB_00efe977:
  fStack_20 = *(float *)(param_3 + 0x20);
  fStack_1c = *(float *)(param_3 + 0x24);
  fStack_18 = *(float *)(param_3 + 0x28);
  uStack_14 = *(undefined4 *)(param_3 + 0x2c);
  fVar4 = fStack_20 * fStack_20 + fStack_1c * fStack_1c + fStack_18 * fStack_18;
  if (fVar4 != 0.0) {
    if (NAN(fVar4) || fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&fStack_20,&fStack_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_20 = 0.0;
      fStack_1c = 1.0;
      fStack_18 = 0.0;
    }
  }
  local_50 = (double)fStack_2c;
  local_40 = (double)fStack_28;
  fVar5 = (float10)FUN_00fdef70();
  fVar6 = (float10)FUN_00fdef70();
  if ((float)fVar6 * (float)fVar5 != 0.0) {
    fVar5 = (float10)FUN_00fdc4e0();
    fStack_6c = (float)fVar5 * 57.29578;
    if ((*(uint *)(*param_2 + 4) & 0x100000) != 0) {
      fStack_6c = 90.0 - fStack_6c;
    }
    if ((float)bVar1 <= fStack_6c) {
      **(float **)(param_1 + 8) = **(float **)(param_1 + 8) * 1.0;
      return;
    }
    fVar3 = (fStack_6c - fVar3) / ((float)bVar1 - fVar3);
    if (fVar3 <= 1.0) {
      **(float **)(param_1 + 8) = **(float **)(param_1 + 8) * fVar3;
      return;
    }
    **(float **)(param_1 + 8) = **(float **)(param_1 + 8) * 1.0;
    return;
  }
  **(undefined4 **)(param_1 + 8) = 0x3f800000;
  return;
}

// 00EFECE0  FUN_00efece0  size=62  [run]
void __fastcall FUN_00efece0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  if (*(int *)(param_1 + 0x50) != 0) {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
    FUN_00efb130(piVar1);
    FUN_00efbd40(piVar1);
    return;
  }
  *piVar1 = 0;
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  return;
}

// 00EFED20  FUN_00efed20  size=202  [run]
void __fastcall FUN_00efed20(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  fVar3 = (float10)FUN_00efca70();
  *(float *)(param_1 + 0x124) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x124));
  fVar3 = (float10)FUN_00efcaf0();
  fVar1 = (float)(fVar3 * (float10)*(float *)(param_1 + 0x124));
  *(float *)(param_1 + 0x124) = fVar1;
  if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
    fVar2 = 1.0;
  }
  else if (*(float *)(param_1 + 0x90) == 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
  }
  fVar1 = fVar1 * fVar2;
  *(float *)(param_1 + 0x124) = fVar1;
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    *(float *)(param_1 + 0x124) = fVar1 * *(float *)(param_1 + 0x128);
  }
  if ((*(uint *)(param_1 + 0x3c) & 0x800) != 0) {
    *(float *)(param_1 + 0x124) =
         *(float *)(*(int *)(param_1 + 0x28) + 0x1efc) * *(float *)(param_1 + 0x124);
  }
  return;
}

// 00EFEDF0  FUN_00efedf0  size=38  [run]
void __thiscall FUN_00efedf0(int param_1,undefined4 param_2)

{
  FUN_00edfcd0(param_1 + 0x3c8);
  FUN_00efda00(param_2,param_1 + 0x3c8,*(undefined4 *)(param_1 + 0x28));
  return;
}

// 00EFEE20  FUN_00efee20  size=38  [run]
void __thiscall FUN_00efee20(int param_1,undefined4 param_2)

{
  FUN_00edfcd0(param_1 + 0x3c8);
  FUN_00efde00(param_2,param_1 + 0x3c8,*(undefined4 *)(param_1 + 0x28));
  return;
}

