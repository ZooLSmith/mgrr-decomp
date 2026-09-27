// src/unsorted/unit_00576760.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00576760..00577B60, 4 functions

#include "types.h"

// 00576760  FUN_00576760  size=1273  [run]
/* WARNING: Removing unreachable block (ram,0x00576978) */
/* WARNING: Removing unreachable block (ram,0x00576af8) */

void FUN_00576760(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  undefined1 **ppuVar3;
  float fVar4;
  undefined1 **ppuVar5;
  float fVar6;
  undefined1 *puStack_cc;
  undefined *puStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  float *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  
  local_b4 = &local_60;
  local_6c = *param_2;
  local_b8 = 0;
  local_b0 = 8;
  local_68 = param_2[1];
  local_a8 = 0.0;
  local_ac = 1;
  local_64 = param_2[2];
  local_88 = *param_3;
  local_84 = param_3[1];
  local_80 = param_3[2];
  local_78 = local_88 - local_6c;
  local_74 = local_84 - local_68;
  local_70 = local_80 - local_64;
  local_7c = SQRT(local_70 * local_70 + local_78 * local_78 + local_74 * local_74);
  local_a4 = local_7c * 0.33333334;
  if (param_4 < local_a4) {
    local_a4 = param_4;
  }
  if (local_a4 < param_5) {
    local_a4 = param_5;
  }
  local_7c = local_7c * 0.16666667;
  local_a0 = (local_6c + local_88) * 0.5;
  local_98 = (local_80 + local_64) * 0.5;
  if (local_84 <= local_68) {
    local_9c = local_68 + local_a4;
  }
  else {
    local_9c = local_84 + local_a4;
    if (local_84 + 5.0 < local_68) {
      local_9c = local_a4 * 0.5 + local_84;
    }
  }
  local_78 = local_78 * 0.16666667;
  local_74 = local_74 * 0.16666667;
  local_70 = local_70 * 0.16666667;
  local_94 = local_a0 - local_78;
  local_90 = local_9c - local_74;
  local_8c = local_98 - local_70;
  local_c4 = local_94 - local_6c;
  local_c0 = local_90 - local_68;
  local_bc = local_8c - local_64;
  fVar4 = local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0;
  local_60 = local_6c;
  local_5c = local_68;
  local_58 = local_64;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    puStack_c8 = &DAT_0163d0ac;
    puStack_cc = (undefined1 *)0x57698a;
    FUN_00dd5650();
    local_c4 = 0.0;
    local_c0 = 1.0;
    local_bc = 0.0;
  }
  puStack_c8 = (undefined *)&local_c4;
  puStack_cc = (undefined1 *)&local_c4;
  ppuVar5 = &puStack_cc;
  ppuVar3 = &puStack_cc;
  D3DXVec3Normalize();
  pfVar1 = local_b4;
  if ((int)local_b4 < local_b8) {
    pfVar1 = (float *)((int)local_bc + (int)local_b4 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)puStack_cc * local_84 + local_74;
      pfVar1[1] = (float)puStack_c8 * local_84 + local_70;
      pfVar1[2] = local_c4 * local_84 + local_6c;
    }
    pfVar1 = (float *)((int)local_b4 + 1);
    if ((int)pfVar1 < local_b8) {
      pfVar1 = (float *)((int)local_bc + (int)pfVar1 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_9c;
        pfVar1[1] = local_98;
        pfVar1[2] = local_94;
      }
      pfVar1 = (float *)((int)local_b4 + 2);
      if ((int)pfVar1 < local_b8) {
        pfVar1 = (float *)((int)local_bc + (int)pfVar1 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_a8;
          pfVar1[1] = local_a4;
          pfVar1[2] = local_a0;
        }
        pfVar1 = (float *)((int)local_b4 + 3);
      }
    }
  }
  local_b4 = pfVar1;
  local_9c = local_80 + local_a8;
  local_98 = local_7c + local_a4;
  local_94 = local_78 + local_a0;
  puStack_cc = (undefined1 *)(local_90 - local_9c);
  puStack_c8 = (undefined *)(local_8c - local_98);
  local_c4 = local_88 - local_94;
  fVar4 = local_c4 * local_c4 +
          (float)puStack_cc * (float)puStack_cc + (float)puStack_c8 * (float)puStack_c8;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    puStack_cc = (undefined1 *)0x0;
    puStack_c8 = (undefined *)0x3f800000;
    local_c4 = 0.0;
  }
  D3DXVec3Normalize();
  fVar4 = (float)ppuVar3 * local_8c;
  fVar6 = (float)ppuVar5 * local_8c;
  puStack_cc = (undefined1 *)((float)puStack_cc * local_8c);
  fVar2 = local_bc;
  if ((int)local_bc < (int)local_c0) {
    pfVar1 = (float *)((int)local_c4 + (int)local_bc * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_a4;
      pfVar1[1] = local_a0;
      pfVar1[2] = local_9c;
    }
    fVar2 = (float)((int)local_bc + 1);
    if ((int)fVar2 < (int)local_c0) {
      pfVar1 = (float *)((int)local_c4 + (int)fVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_98 - fVar4;
        pfVar1[1] = local_94 - fVar6;
        pfVar1[2] = local_90 - (float)puStack_cc;
      }
      fVar2 = (float)((int)local_bc + 2);
      if ((int)fVar2 < (int)local_c0) {
        pfVar1 = (float *)((int)local_c4 + (int)fVar2 * 0xc);
        if (pfVar1 == (float *)0x0) {
          fVar2 = (float)((int)local_bc + 3);
        }
        else {
          *pfVar1 = local_98;
          pfVar1[1] = local_94;
          pfVar1[2] = local_90;
          fVar2 = (float)((int)local_bc + 3);
        }
      }
    }
  }
  local_bc = fVar2;
  FUN_00a5e090(&puStack_c8);
  if ((local_c4 != 0.0) && (local_bc = 0.0, local_b8 != 0)) {
    FUN_00dd48d0(local_c4,0,fVar4,fVar6);
  }
  return;
}

// 00576C60  FUN_00576c60  size=2263  [run]
void __fastcall FUN_00576c60(int *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a8d6c0(param_1 + 0x10);
    iVar6 = FUN_00a8d770();
    if ((iVar6 == 0) || (cVar5 = FUN_00c9d9a0(1), cVar5 == '\0')) {
      FUN_00a9f2f0(&DAT_01641bd4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 6;
      return;
    }
    (**(code **)(*param_1 + 0x318))();
    iVar6 = param_1[0x1d9];
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 1)) {
      *(undefined4 *)(iVar6 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
    }
    FUN_00c9da70();
    FUN_00a8d790(&local_38);
    param_1[0x3fc] = (int)local_38;
    param_1[0x3fd] = (int)local_34;
    param_1[0x3fe] = (int)local_30;
    param_1[0x3ff] = 0x3f800000;
    FUN_00576760(param_1 + 0x3a8,param_1 + 0x10,param_1 + 0x3fc,0x3fb33333,0);
    FUN_00a9e290(&DAT_01641c14,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00576dd3;
  case 1:
LAB_00576dd3:
    FUN_0055ca10(param_1 + 0x3fc,0x3ecccccd,0x3eb2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00a9e290(&DAT_01641c0c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f99999a);
      FUN_00a581b0(&local_38,0,0x40000000);
      uVar9 = 0;
      param_1[600] = (int)((float)param_1[0x14] - local_38);
      param_1[0x259] = (int)((float)param_1[0x15] - local_34);
      param_1[0x25a] = (int)((float)param_1[0x16] - local_30);
      param_1[0x249] = 0;
      FUN_00a92f90(0);
      fVar8 = (float10)FUN_0043f390(uVar9);
      param_1[0x24a] = (int)(float)fVar8;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar9 = 0;
    FUN_00a92f90(0);
    fVar7 = (float10)FUN_00407b40(uVar9);
    fVar7 = fVar7 / (float10)(float)param_1[0x24a];
    param_1[0x249] = (int)(float)fVar7;
    fVar8 = (float10)1;
    if (fVar8 < fVar7 != (fVar8 == fVar7)) {
      param_1[0x249] = (int)(float)fVar8;
    }
    FUN_00a581b0(&local_38,0,param_1[0x249]);
    FUN_00a585a0(&local_2c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x25];
    fVar8 = (float10)fpatan((float10)local_2c,(float10)local_24);
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)fVar1));
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)0.2 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar8;
    param_1[0x14] = (int)local_38;
    param_1[0x15] = (int)local_34;
    param_1[0x16] = (int)local_30;
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00a9e290(&DAT_01641c04,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x24b] = 0;
      param_1[0x24c] = 0x3c888889;
      return;
    }
    break;
  case 3:
    param_1[0x24b] = (int)((float)param_1[0x244] * (float)param_1[0x24c] + (float)param_1[0x24b]);
    fVar8 = (float10)FUN_00fdc1f0();
    param_1[0x24c] = (int)(float)(fVar8 * (float10)(float)param_1[0x24c]);
    fVar1 = (float)param_1[0x24b] / (float)param_1[0x24a];
    bVar3 = NAN(fVar1);
    bVar4 = 1.0 < fVar1 != (fVar1 == 1.0);
    if (!bVar3 && bVar4) {
      fVar1 = 1.0;
    }
    FUN_00a581b0(&local_38,0,fVar1 + 1.0);
    FUN_00a585a0(&local_2c,0,fVar1 + 1.0);
    fVar1 = (float)param_1[0x25];
    fVar8 = (float10)fpatan((float10)local_2c,(float10)local_24);
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)fVar1));
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)0.2 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar8;
    param_1[0x14] = (int)local_38;
    param_1[0x15] = (int)local_34;
    param_1[0x16] = (int)local_30;
    if (!bVar3 && bVar4) {
      FUN_00a9e290(&DAT_01641bfc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 5;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar6 != 0) {
      FUN_00a9e290(&DAT_01641bfc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      iVar6 = FUN_00a8d770();
      if ((iVar6 == 0) || (cVar5 = FUN_00c9d9a0(1), cVar5 == '\0')) {
        FUN_00c9da70();
        FUN_00a9f2f0(&DAT_01641bd4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x187] = 6;
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(1);
          return;
        }
      }
      else {
        FUN_00c9da70();
        FUN_00a8d790(&local_38);
        param_1[0x3fc] = (int)local_38;
        param_1[0x3fd] = (int)local_34;
        param_1[0x3fe] = (int)local_30;
        param_1[0x3ff] = 0x3f800000;
        FUN_00576760(param_1 + 0x3a8,param_1 + 0x10,param_1 + 0x3fc,0x41600000,0);
        FUN_00a9e290(&DAT_01641c14,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(0);
        }
        pcVar2 = *(code **)(*param_1 + 0x314);
        param_1[0x187] = 1;
        (*pcVar2)();
        iVar6 = param_1[0x1d9];
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 0)) {
          *(undefined4 *)(iVar6 + 0x104) = 0;
          return;
        }
      }
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8d790(&local_38);
    local_20 = local_38;
    local_1c = local_34;
    local_18 = local_30;
    local_14 = 0x3f800000;
    FUN_0055ca10(&local_20,0x3e4ccccd,0x3e0efa35);
    iVar6 = FUN_00a97e60(0x40400000,1);
    if (iVar6 != 0) {
      iVar6 = FUN_00a8d800();
      if (iVar6 == 0) {
        pcVar2 = *(code **)(*param_1 + 0x20);
        param_1[0x187] = 7;
        (*pcVar2)();
        param_1[0x139] = 1;
        FUN_00a805f0();
        return;
      }
      iVar6 = FUN_00a8d770();
      if ((iVar6 != 0) && (cVar5 = FUN_00c9d9a0(1), cVar5 != '\0')) {
        FUN_00c9da70();
        FUN_00a8d790(&local_2c);
        param_1[0x3fc] = (int)local_2c;
        param_1[0x3fd] = local_28;
        param_1[0x3fe] = (int)local_24;
        param_1[0x3ff] = 0x3f800000;
        (**(code **)(*param_1 + 0x318))();
        iVar6 = param_1[0x1d9];
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 1)) {
          *(undefined4 *)(iVar6 + 0x104) = 1;
          *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
        }
        FUN_00576760(param_1 + 0x3a8,param_1 + 0x10,param_1 + 0x3fc,0x41600000,0);
        FUN_00a9e290(&DAT_01641c14,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(0);
        }
        param_1[0x187] = 1;
      }
    }
  }
  return;
}

// 00577560  FUN_00577560  size=1499  [run]
void __fastcall FUN_00577560(int *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 uVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c [2];
  float local_4;
  
  switch(param_1[0x187]) {
  case 0:
    local_18 = (float)param_1[0x10];
    local_14 = (float)param_1[0x11];
    local_10 = (float)param_1[0x12];
    FUN_00a5e410(local_18,local_14,local_10,&local_18);
    param_1[0x3fc] = (int)local_18;
    param_1[0x3fd] = (int)local_14;
    param_1[0x3fe] = (int)local_10;
    param_1[0x3ff] = 0x3f800000;
    FUN_00576760(param_1 + 0x3c0,param_1 + 0x10,param_1 + 0x3fc,0x3fb33333,0);
    FUN_00a9e290(&DAT_01641c14,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_0055ca10(param_1 + 0x3fc,0x3ecccccd,0x3eb2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a9e290(&DAT_01641c0c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f99999a);
      FUN_00a581b0(&local_18,0,0x40000000);
      param_1[600] = (int)((float)param_1[0x14] - local_18);
      param_1[0x259] = (int)((float)param_1[0x15] - local_14);
      param_1[0x25a] = (int)((float)param_1[0x16] - local_10);
      param_1[0x249] = 0;
      FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        fVar6 = (float10)FUN_00e36a50(0);
        param_1[0x24a] = (int)(float)fVar6;
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x24a] = -0x40800000;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar7 = 0;
    FUN_00a92f90(0);
    fVar5 = (float10)FUN_00407b40(uVar7);
    fVar5 = fVar5 / (float10)(float)param_1[0x24a];
    param_1[0x249] = (int)(float)fVar5;
    fVar6 = (float10)1;
    if (fVar6 < fVar5 != (fVar6 == fVar5)) {
      param_1[0x249] = (int)(float)fVar6;
    }
    FUN_00a581b0(&local_18,0,param_1[0x249]);
    FUN_00a585a0(local_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x25];
    fVar6 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)fVar1));
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.2 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar6;
    param_1[0x14] = (int)local_18;
    param_1[0x15] = (int)local_14;
    param_1[0x16] = (int)local_10;
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a9e290(&DAT_01641c04,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x24b] = 0;
      param_1[0x24c] = 0x3c888889;
      return;
    }
    break;
  case 3:
    param_1[0x24b] = (int)((float)param_1[0x24c] * (float)param_1[0x244] + (float)param_1[0x24b]);
    fVar6 = (float10)FUN_00fdc1f0();
    param_1[0x24c] = (int)(float)(fVar6 * (float10)(float)param_1[0x24c]);
    fVar1 = (float)param_1[0x24b] / (float)param_1[0x24a];
    bVar2 = NAN(fVar1);
    bVar3 = 1.0 < fVar1 != (fVar1 == 1.0);
    if (!bVar2 && bVar3) {
      fVar1 = 1.0;
    }
    FUN_00a581b0(&local_18,0,fVar1 + 1.0);
    FUN_00a585a0(local_c,0,fVar1 + 1.0);
    fVar1 = (float)param_1[0x25];
    fVar6 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)fVar1));
    fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.2 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar6;
    param_1[0x14] = (int)local_18;
    param_1[0x15] = (int)local_14;
    param_1[0x16] = (int)local_10;
    if (!bVar2 && bVar3) {
      FUN_00a9e290(&DAT_01641bfc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 5;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar4 != 0) {
      FUN_00a9e290(&DAT_01641bfc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      iVar4 = param_1[0x128];
      if ((iVar4 != 1) && (iVar4 != 3)) {
        if (iVar4 != 2) {
          FUN_00a8caf0(0xffffffff,0,0,0);
          FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
          return;
        }
        FUN_00a8caf0(1,0,0,0);
        return;
      }
      FUN_00a8caf0(0,0,0,0);
    }
  }
  return;
}

// 00577B60  FUN_00577b60  size=436  [run]
undefined4 __fastcall FUN_00577b60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int local_4;
  
  if ((((int *)param_1[0xdc] != (int *)0x0) && (*(int *)param_1[0xdc] != 0)) ||
     ((*(byte *)(param_1 + 0x130) & 1) == 0)) {
    return 0;
  }
  local_4 = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  piVar5 = (int *)param_1[0x19f];
  piVar4 = piVar5 + param_1[0x1a1] * 0x54;
  do {
    if (piVar5 == piVar4) {
      return 0;
    }
    iVar1 = *piVar5;
    if (((iVar1 == 0) || (iVar1 == 1)) || ((iVar1 == 2 || ((iVar1 == 0x1b0 || (iVar1 == 0x147))))))
    {
LAB_00577c01:
      iVar3 = 0;
      piVar2 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar2 + 0x28))(0);
      if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
        puVar6 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d70(puVar6);
        if (iVar1 != 0) {
          iVar3 = (**(code **)(*piVar2 + 0x32c))();
        }
      }
      if ((((piVar5[0x23] & 0x200U) != 0) || ((iVar3 != 0 && (iVar1 = FUN_00a8e520(), iVar1 != 0))))
         && (piVar5[0x25] != 0)) {
        if (local_4 != 0) {
          param_1[0x238] = *(int *)(local_4 + 0x40);
          param_1[0x239] = *(int *)(local_4 + 0x44);
          param_1[0x23a] = *(int *)(local_4 + 0x48);
          param_1[0x23b] = *(int *)(local_4 + 0x4c);
        }
        param_1[0x234] = piVar5[8];
        param_1[0x235] = piVar5[9];
        param_1[0x236] = piVar5[10];
        param_1[0x237] = piVar5[0xb];
        FUN_00a8e5d0(param_1,piVar5,0);
        (**(code **)(*param_1 + 0x198))(local_4,piVar5,0x100);
        param_1[0x23d] = 1;
        return 1;
      }
    }
    else {
      iVar1 = FUN_00a81330();
      if (iVar1 != param_1[0x13c]) {
        if (iVar1 != 0) {
          local_4 = FUN_00a7c8a0();
        }
        goto LAB_00577c01;
      }
    }
    piVar5 = piVar5 + 0x54;
  } while( true );
}

