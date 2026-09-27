// src/unsorted/unit_0052EC40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0052EC40..0052EC40, 1 functions

#include "types.h"

// 0052EC40  FUN_0052ec40  size=2604  [run]
void __fastcall FUN_0052ec40(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined4 uVar17;
  int *piStack_c0;
  int *local_bc;
  float fStack_b8;
  float local_b4;
  undefined4 local_b0 [4];
  undefined1 local_a0 [80];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_20 [4];
  float local_1c;
  
  local_b4 = 0.0;
  iVar6 = FUN_00a81330();
  if (iVar6 != 0) {
    piVar7 = (int *)FUN_00a7c8a0();
    if (piVar7 == (int *)0x0) {
      local_b4 = 0.0;
    }
    else {
      puVar16 = &DAT_01be9db8;
      (**(code **)(*piVar7 + 4))(&DAT_01be9db8);
      iVar6 = FUN_00dd6d80(puVar16);
      local_b4 = (float)(-(uint)(iVar6 != 0) & (uint)piVar7);
    }
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0xde,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
    FUN_0040b190();
    local_50 = *(undefined4 *)(param_1 + 0x50);
    puVar1 = (undefined4 *)(param_1 + 0x50);
    local_4c = *(undefined4 *)(param_1 + 0x54);
    puVar3 = (undefined4 *)(param_1 + 0x90);
    local_48 = *(undefined4 *)(param_1 + 0x58);
    local_44 = *puVar3;
    local_40 = *(undefined4 *)(param_1 + 0x94);
    local_3c = *(undefined4 *)(param_1 + 0x98);
    iVar6 = FUN_00a82090("Mon Qte Car",0xf00d8,local_a0);
    if (iVar6 != 0) {
      uVar11 = FUN_00a7c7f0();
      FUN_00a7c960(uVar11);
    }
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
    FUN_0040b190();
    local_50 = *puVar1;
    local_4c = *(undefined4 *)(param_1 + 0x54);
    local_48 = *(undefined4 *)(param_1 + 0x58);
    local_44 = *puVar3;
    local_40 = *(undefined4 *)(param_1 + 0x94);
    local_3c = *(undefined4 *)(param_1 + 0x98);
    iVar6 = FUN_00a82090("Mon Qte Cut",0x201b7,local_a0);
    if (iVar6 != 0) {
      uVar11 = FUN_00a7c7f0();
      FUN_00a7c960(uVar11);
    }
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
    FUN_0040b190();
    local_50 = *puVar1;
    local_4c = *(undefined4 *)(param_1 + 0x54);
    local_48 = *(undefined4 *)(param_1 + 0x58);
    local_44 = *puVar3;
    local_40 = *(undefined4 *)(param_1 + 0x94);
    local_3c = *(undefined4 *)(param_1 + 0x98);
    iVar6 = FUN_00a82090("Mon Qte Head",0x201b9,local_a0);
    if (iVar6 != 0) {
      uVar11 = FUN_00a7c7f0();
      FUN_00a7c960(uVar11);
    }
    uVar12 = 0xf5011;
    uVar11 = FUN_00e03ea0("throw_obj",0xf5011);
    iVar6 = FUN_00a18d70(uVar11,uVar12);
    if (iVar6 != 0) {
      uVar11 = FUN_00a7c7f0();
      FUN_00a7c960(uVar11);
    }
    uVar12 = 0xf5010;
    uVar11 = FUN_00e03ea0("emblem",0xf5010);
    iVar6 = FUN_00a18d70(uVar11,uVar12);
    if (iVar6 != 0) {
      uVar11 = FUN_00a7c7f0();
      FUN_00a7c960(uVar11);
    }
    local_bc = (int *)FUN_00518b00();
    if (local_bc != (int *)0x0) {
      iVar6 = FUN_00a92f90();
      *(uint *)(iVar6 + 0x90) = *(uint *)(iVar6 + 0x90) & 0xfffffffb;
      (**(code **)(*local_bc + 0x6c))(puVar1);
      (**(code **)(*piStack_c0 + 0x88))(puVar3);
    }
    iVar6 = FUN_00518b30();
    if (iVar6 != 0) {
      iVar8 = FUN_00a92f90();
      *(uint *)(iVar8 + 0x90) = *(uint *)(iVar8 + 0x90) & 0xfffffffb;
      FUN_00940d50(*(undefined4 *)(iVar6 + 0x83c),0x3f000000);
    }
    FUN_00940d50(*(undefined4 *)(param_1 + 0x83c),0x40000000);
    iVar6 = FUN_00518ad0();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640f04;
      FUN_00518ad0(&DAT_01640f04,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
    iVar6 = FUN_00518b00();
    if (iVar6 != 0) {
      FUN_00518b00();
      iVar6 = FUN_00a92f90();
      *(uint *)(iVar6 + 0x90) = *(uint *)(iVar6 + 0x90) & 0xfffffffb;
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640f04;
      FUN_00518b00(&DAT_01640f04,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
    iVar6 = FUN_00518b60();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640f04;
      FUN_00518b60(&DAT_01640f04,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
      iVar6 = FUN_00a4a2d0();
      if (iVar6 != 0) {
        iVar6 = FUN_00518b60();
        fStack_b8 = 0.0;
        if (0 < *(short *)(iVar6 + 0x324)) {
          local_bc = (int *)0x0;
          do {
            iVar8 = *(int *)(iVar6 + 800);
            iVar9 = *(int *)(*(int *)((int)local_bc + iVar8 + 0x60) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_0163ef44), iVar9 != 0)) {
              puVar2 = (uint *)((int)local_bc + iVar8 + 0x38);
              *puVar2 = *puVar2 & 0xfffffffe;
            }
            local_bc = local_bc + 0x1c;
            fStack_b8 = (float)((int)fStack_b8 + 1);
          } while ((int)fStack_b8 < (int)*(short *)(iVar6 + 0x324));
        }
      }
    }
    iVar6 = FUN_00518b90();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640f04;
      FUN_00518b90(&DAT_01640f04,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
      iVar6 = FUN_00518b90();
      fStack_b8 = 0.0;
      if (0 < *(short *)(iVar6 + 0x324)) {
        local_bc = (int *)0x0;
        do {
          iVar8 = *(int *)(iVar6 + 800);
          iVar9 = *(int *)(*(int *)((int)local_bc + iVar8 + 0x60) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"head_1"), iVar9 != 0)) {
            puVar2 = (uint *)((int)local_bc + iVar8 + 0x38);
            *puVar2 = *puVar2 & 0xfffffffe;
          }
          local_bc = local_bc + 0x1c;
          fStack_b8 = (float)((int)fStack_b8 + 1);
        } while ((int)fStack_b8 < (int)*(short *)(iVar6 + 0x324));
      }
      iVar6 = FUN_00518b90();
      fStack_b8 = 0.0;
      if (0 < *(short *)(iVar6 + 0x324)) {
        local_bc = (int *)0x0;
        do {
          iVar8 = *(int *)(iVar6 + 800);
          iVar9 = *(int *)(*(int *)((int)local_bc + iVar8 + 0x60) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"_DEC1"), iVar9 != 0)) {
            puVar2 = (uint *)((int)local_bc + iVar8 + 0x38);
            *puVar2 = *puVar2 & 0xfffffffe;
          }
          local_bc = local_bc + 0x1c;
          fStack_b8 = (float)((int)fStack_b8 + 1);
        } while ((int)fStack_b8 < (int)*(short *)(iVar6 + 0x324));
      }
      iVar6 = FUN_00a4a2d0();
      if (iVar6 != 0) {
        iVar6 = FUN_00518b90();
        fStack_b8 = 0.0;
        if (0 < *(short *)(iVar6 + 0x324)) {
          local_bc = (int *)0x0;
          do {
            iVar8 = *(int *)(iVar6 + 800);
            iVar9 = *(int *)(*(int *)((int)local_bc + iVar8 + 0x60) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_0163ef44), iVar9 != 0)) {
              puVar2 = (uint *)((int)local_bc + iVar8 + 0x38);
              *puVar2 = *puVar2 & 0xfffffffe;
            }
            local_bc = local_bc + 0x1c;
            fStack_b8 = (float)((int)fStack_b8 + 1);
          } while ((int)fStack_b8 < (int)*(short *)(iVar6 + 0x324));
        }
      }
    }
    break;
  case 1:
  case 3:
  case 5:
    break;
  case 2:
    FUN_00aa4080(0xdf,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar6 = FUN_00518ad0();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640efc;
      FUN_00518ad0(&DAT_01640efc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
    iVar6 = FUN_00518b00();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640efc;
      FUN_00518b00(&DAT_01640efc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
    break;
  case 4:
    FUN_00aa4080(0xe0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar6 = FUN_00518ad0();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640ef4;
      FUN_00518ad0(&DAT_01640ef4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
    iVar6 = FUN_00518b00();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640ef4;
      FUN_00518b00(&DAT_01640ef4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
    break;
  case 6:
    FUN_00aa4080(0xe1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar6 = FUN_00518ad0();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640eec;
      FUN_00518ad0(&DAT_01640eec,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
    iVar6 = FUN_00518b00();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640eec;
      FUN_00518b00(&DAT_01640eec,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    goto switchD_0052ecab_default;
  case 8:
    FUN_00aa4080(0xef,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar6 = FUN_00518ad0();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640ee4;
      FUN_00518ad0(&DAT_01640ee4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
    iVar6 = FUN_00518b00();
    if (iVar6 != 0) {
      uVar17 = 0x3f800000;
      uVar15 = 0xbf800000;
      uVar14 = 0x8000000;
      uVar13 = 0x3f800000;
      uVar12 = 0;
      uVar11 = 0;
      puVar16 = &DAT_01640ee4;
      FUN_00518b00(&DAT_01640ee4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar16,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17);
    }
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
  default:
    goto switchD_0052ecab_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
switchD_0052ecab_default:
  if (local_b4 != 0.0) {
    FUN_00a8ce90(local_b0,local_20);
    fVar10 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + local_1c);
    *(float *)((int)local_b4 + 0x94) = (float)fVar10;
    D3DXVec3TransformNormal(local_b0,local_b0,param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0x44);
    fVar5 = *(float *)(param_1 + 0x48);
    *(float *)((int)local_b4 + 0x50) = *(float *)(param_1 + 0x40) + (float)local_bc;
    *(float *)((int)local_b4 + 0x54) = fVar4 + fStack_b8;
    *(float *)((int)local_b4 + 0x58) = fVar5 + local_b4;
    *(undefined4 *)((int)local_b4 + 0x5c) = local_b0[0];
  }
  return;
}

