// src/unsorted/unit_00876530.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00876530..00877DB0, 23 functions

#include "mgrr.h"

// 00876530  FUN_00876530  size=110  [run]
bool FUN_00876530(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar1 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar4);
    piVar2 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar2);
  }
  iVar3 = (**(code **)(*piVar2 + 800))(0x3c888889);
  return iVar3 != 0;
}

// 008765A0  FUN_008765a0  size=1585  [run]
undefined4 FUN_008765a0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  uint local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float *local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint local_5c;
  float *local_58;
  uint local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_20;
  float local_1c;
  float local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    local_a8 = 0;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar9);
    local_a8 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  local_5c = *(uint *)(*(int *)(local_a8 + 0x170) + 8);
  local_9c = 0;
  if (2 < local_5c) {
    local_a4 = 0.0;
    local_a0 = 0.0;
    if (local_5c != 1) {
      local_74 = *(float **)(*(int *)(local_a8 + 0x170) + 4);
      fVar1 = 0.0;
      uVar7 = 0;
      do {
        local_98 = *local_74;
        local_94 = local_74[1];
        local_34 = uVar7 + 1;
        if (local_34 < local_5c) {
          local_54 = local_34 - uVar7;
          local_58 = local_74 + 2;
          uVar8 = local_34;
          do {
            if (7 < local_54) break;
            local_a4 = *local_58;
            fVar1 = local_58[1];
            local_40 = local_a4 - local_98;
            local_a0 = fVar1;
            if (1200.0 < SQRT((fVar1 - local_94) * (fVar1 - local_94) + local_40 * local_40)) {
              bVar3 = true;
              local_9c = 1;
              if (uVar7 <= uVar8) {
                local_38 = (local_94 - fVar1) * (local_94 - fVar1);
                local_3c = (local_98 - local_a4) * (local_98 - local_a4);
                pfVar5 = local_74;
                uVar6 = uVar7;
                do {
                  local_c0 = *pfVar5;
                  local_bc = pfVar5[1];
                  if ((bVar3) && (SQRT(local_c0 * local_c0 + local_bc * local_bc) < 950.0)) {
                    bVar3 = false;
                  }
                  fVar2 = -local_94;
                  if (local_3c <= local_38) {
                    if (200.0 < ABS(local_c0 -
                                    ((local_40 / (-fVar1 - fVar2)) * (-local_bc - fVar2) + local_98)
                                   )) {
                      local_9c = 0;
                      break;
                    }
                  }
                  else if (200.0 < ABS(local_bc -
                                       -(fVar2 + (local_c0 - local_98) *
                                                 ((-fVar1 - fVar2) / local_40)))) {
                    local_9c = 0;
                    break;
                  }
                  uVar6 = uVar6 + 1;
                  pfVar5 = pfVar5 + 2;
                } while (uVar6 <= uVar8);
              }
              if ((*(int *)(local_a8 + 0x3f4) != 0) && (bVar3)) {
                local_9c = 0;
                goto LAB_008767ff;
              }
              if (local_9c != 0) goto LAB_00876825;
            }
            uVar8 = uVar8 + 1;
            local_54 = local_54 + 1;
            local_58 = local_58 + 2;
          } while (uVar8 < local_5c);
        }
        if (local_9c != 0) {
LAB_00876825:
          if (*(int *)(local_a8 + 0x570) == 0) {
            local_20 = (local_98 + local_a4) * 0.5;
            local_1c = (local_94 + fVar1) * 0.5;
            local_84 = (local_14 + local_64) * 0.5;
            local_70 = local_98 - local_20;
            local_6c = local_94 - local_1c;
            local_44 = local_64 - local_84;
            local_20 = local_a4 - local_20;
            local_1c = fVar1 - local_1c;
            local_84 = local_14 - local_84;
            local_50 = local_70 * 100.0 + local_70;
            local_4c = local_6c + local_6c * 100.0;
            local_48 = 0;
            local_44 = local_44 * 100.0 + local_44;
            local_90 = local_20 * 100.0 + local_20;
            local_8c = local_1c + local_1c * 100.0;
            local_88 = 0;
            local_84 = local_84 * 100.0 + local_84;
            local_c0 = -local_50;
            local_bc = -local_4c;
            local_b4 = -local_44;
            local_b8 = 0;
            if ((local_c0 != 0.0) || (local_bc != 0.0)) {
              fVar1 = local_bc * local_bc + local_c0 * local_c0;
              if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                FUN_00ddf460(&local_c0,&local_c0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_c0 = 0.0;
                local_bc = 1.0;
                local_b8 = 0;
              }
            }
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            FUN_00860410(&local_70,&local_50,&local_c0,&local_30,0x447a0000);
            local_c0 = -local_90;
            local_bc = -local_8c;
            local_b4 = -local_84;
            local_b8 = 0;
            if ((local_c0 != 0.0) || (local_bc != 0.0)) {
              fVar1 = local_bc * local_bc + local_c0 * local_c0;
              if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                FUN_00ddf460(&local_c0,&local_c0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_c0 = 0.0;
                local_bc = 1.0;
                local_b8 = 0;
              }
            }
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            FUN_00860410(&local_20,&local_90,&local_c0,&local_30,0x447a0000);
            local_98 = local_70;
            local_94 = local_6c;
            local_a4 = local_20;
            local_a0 = local_1c;
            fVar1 = local_1c;
          }
          local_68 = local_a4;
          local_70 = local_98;
          local_6c = local_94;
          local_64 = fVar1;
          FUN_00874800(*(undefined4 *)(local_a8 + 0x178),&local_70);
          uVar7 = local_a8;
          local_70 = local_98;
          local_6c = local_94;
          local_68 = local_a4;
          local_64 = local_a0;
          FUN_00874800(*(undefined4 *)(local_a8 + 0x17c),&local_70);
          if (*(int *)(*(int *)(uVar7 + 0x170) + 4) != 0) {
            *(undefined4 *)(*(int *)(uVar7 + 0x170) + 8) = 0;
          }
          return 1;
        }
LAB_008767ff:
        local_74 = local_74 + 2;
        uVar7 = local_34;
      } while (local_34 < local_5c - 1);
    }
  }
  return 0;
}

// 00876BE0  FUN_00876be0  size=712  [run]
undefined4 FUN_00876be0(undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  undefined *puVar11;
  undefined4 *local_54;
  uint local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    local_54 = param_1;
  }
  else {
    puVar11 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar5 = FUN_00dd6d80(puVar11);
    local_54 = (undefined4 *)(-(uint)(iVar5 != 0) & (uint)param_1);
  }
  iVar5 = local_54[0x5c];
  uVar1 = *(uint *)(iVar5 + 8);
  if (2 < uVar1) {
    local_38 = 0.0;
    local_34 = 0.0;
    local_4c = 0;
    local_30 = 0.0;
    local_2c = 0.0;
    local_18 = 0.0;
    local_14 = 0.0;
    if (uVar1 != 1) {
      pfVar10 = *(float **)(iVar5 + 4);
      uVar8 = 1;
      do {
        local_28 = *pfVar10;
        local_24 = pfVar10[1];
        if (uVar8 < uVar1) {
          iVar7 = uVar8 - local_4c;
          uVar9 = uVar8;
          pfVar4 = pfVar10;
          do {
            pfVar6 = pfVar4 + 2;
            if (1 < uVar9) {
              local_18 = local_30;
              local_14 = local_2c;
            }
            if (uVar9 != 0) {
              local_30 = local_38;
              local_2c = local_34;
            }
            local_38 = *pfVar6;
            local_34 = pfVar4[3];
            fVar2 = (float)iVar7;
            if (iVar7 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
            if ((((((fVar2 < 5.0) &&
                   (750.0 < SQRT((local_34 - local_24) * (local_34 - local_24) +
                                 (local_38 - local_28) * (local_38 - local_28)))) &&
                  (750.0 < SQRT(local_28 * local_28 + local_24 * local_24))) &&
                 ((ABS(local_38) < 50.0 && (ABS(local_34) < 50.0)))) &&
                ((ABS(local_30) < 50.0 && ((ABS(local_2c) < 50.0 && (ABS(local_18) < 50.0)))))) &&
               (ABS(local_14) < 50.0)) {
              fVar2 = pfVar4[3];
              fVar3 = *pfVar6;
              local_28 = -local_28;
              local_24 = -local_24;
              if (*(int *)(iVar5 + 4) != 0) {
                *(undefined4 *)(iVar5 + 8) = 0;
              }
              local_30 = fVar3;
              local_2c = fVar2;
              local_18 = local_28;
              local_14 = local_24;
              FUN_00874800(local_54[0x5e],&local_30);
              local_28 = local_18;
              local_24 = local_14;
              local_30 = fVar3;
              local_2c = fVar2;
              FUN_00874800(local_54[0x5f],&local_30);
              return 1;
            }
            uVar9 = uVar9 + 1;
            iVar7 = iVar7 + 1;
            pfVar4 = pfVar6;
          } while (uVar9 < uVar1);
        }
        local_4c = local_4c + 1;
        pfVar10 = pfVar10 + 2;
        uVar8 = uVar8 + 1;
      } while (local_4c < uVar1 - 1);
    }
  }
  return 0;
}

// 00876EB0  FUN_00876eb0  size=272  [run]
void FUN_00876eb0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  param_1 = (undefined4 *)0x42700000;
  local_4 = 0x3c23d70a;
  local_8 = 0x3c23d70a;
  if (param_2 != 0) {
    local_4 = 0x3ccccccd;
    local_8 = 0x3ccccccd;
    param_1 = (undefined4 *)0x42480000;
  }
  FUN_00b8bcd0();
  if (((*(int *)(uVar4 + 0xe0) == 0) && (*(int *)(uVar4 + 0x188) == 0)) &&
     (*(int *)(uVar4 + 0x330) != 0x13)) {
    local_8 = *(undefined4 *)(uVar4 + 0x5d0);
  }
  *(undefined4 *)(uVar3 + 0x341c) = 0x3f800000;
  FUN_00b85350(param_1,local_4,local_8,0,1,0x3e99999a);
  *(undefined4 *)(uVar3 + 0x3428) = 0;
  *(undefined4 *)(uVar3 + 0x342c) = 0;
  *(undefined4 **)(uVar4 + 0x5cc) = param_1;
  return;
}

// 00876FD0  FUN_00876fd0  size=221  [run]
void FUN_00876fd0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar10 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar10);
    uVar8 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar8 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar10 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar6 = FUN_00dd6d80(puVar10);
    uVar9 = -(uint)(iVar6 != 0) & (uint)piVar1;
  }
  iVar6 = FUN_00a7ca20();
  piVar2 = *(int **)(iVar6 + 0x18);
  for (piVar1 = *(int **)(iVar6 + 0x14); piVar1 != piVar2; piVar1 = (int *)piVar1[2]) {
    iVar6 = *(int *)(*piVar1 + 0x24);
    if ((((iVar6 == 0xf0086) || (iVar6 == 0xf0087)) || (iVar6 == 0xf0089)) &&
       (pfVar7 = (float *)FUN_00a7c8b0(), fVar3 = *(float *)(uVar9 + 0x40) - *pfVar7,
       fVar5 = *(float *)(uVar9 + 0x44) - pfVar7[1], fVar4 = *(float *)(uVar9 + 0x48) - pfVar7[2],
       SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) < *(float *)(uVar8 + 0x574))) {
      FUN_00c5bc40(*piVar1,1);
    }
  }
  return;
}

// 008770B0  FUN_008770b0  size=170  [run]
void FUN_008770b0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar1 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  if ((DAT_01bea090 & 0x80000000) == 0) {
    iVar2 = FUN_00b7cda0();
    if (iVar2 == 1) {
      return;
    }
    iVar2 = FUN_00bc32b0();
    if (iVar2 == 0) {
      FUN_00bda140();
    }
  }
  if ((-1 < (int)DAT_01bea090) && ((DAT_01bea090 & 2) == 0)) {
    fVar4 = (float10)(**(code **)(*piVar3 + 0x3b0))();
    FUN_00bc3000((float)(fVar4 * (float10)(float)piVar3[0xce3]));
  }
  return;
}

// 00877160  FUN_00877160  size=239  [run]
void FUN_00877160(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar6 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar4 = -(uint)(iVar5 != 0) & (uint)piVar3;
  }
  if (*(int *)(uVar6 + 0x52c) == 0) {
    if (*(int *)(uVar6 + 0x530) == 0) {
      uVar1 = *(undefined4 *)(uVar4 + 0x4060);
      uVar2 = *(undefined4 *)(uVar4 + 0x4064);
    }
    else {
      uVar1 = *(undefined4 *)(uVar4 + 0x4068);
      uVar2 = *(undefined4 *)(uVar4 + 0x406c);
      if (((((DAT_01bea094 & 0x800) != 0) && (iVar5 = *(int *)(uVar4 + 0x40c8), iVar5 != 0x14)) &&
          (iVar5 != 0xc)) && (iVar5 != 8)) {
        uVar1 = 0x3f800000;
        uVar2 = 0x3f800000;
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)(uVar4 + 0x4070);
    uVar2 = *(undefined4 *)(uVar4 + 0x4074);
  }
  *(undefined4 *)(uVar4 + 0x341c) = 0x3f800000;
  FUN_00b85350(param_3,uVar1,uVar2,*(undefined4 *)(uVar4 + 0x3450),0,param_2);
  return;
}

// 00877250  FUN_00877250  size=266  [run]
undefined4 FUN_00877250(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar9);
    uVar8 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar8 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar9 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar6 = FUN_00dd6d80(puVar9);
    uVar7 = -(uint)(iVar6 != 0) & (uint)piVar1;
  }
  param_1 = (undefined4 *)0x3f99999a;
  fVar2 = 1.2;
  if (((0.0 < *(float *)(uVar7 + 0x341c)) && (*(int *)(uVar7 + 0x3450) != 0)) &&
     ((param_2[300] == 0x2c080 || (param_2[300] == 0x2c081)))) {
    puVar9 = &DAT_01b35900;
    (**(code **)(*param_2 + 4))(&DAT_01b35900);
    iVar6 = FUN_00dd6d80(puVar9);
    fVar2 = (float)param_1;
    if ((iVar6 != 0) && (iVar6 = FUN_00a8cbe0(0x70004), iVar6 != 0)) {
      fVar2 = 2.0;
    }
  }
  fVar5 = (float)param_2[0x10] - *(float *)(uVar7 + 0x40);
  fVar4 = (float)param_2[0x11] - *(float *)(uVar7 + 0x44);
  fVar3 = (float)param_2[0x12] - *(float *)(uVar7 + 0x48);
  if (*(float *)(uVar8 + 0x574) * fVar2 <= SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3)) {
    return 0;
  }
  return 1;
}

// 00877430  FUN_00877430  size=111  [run]
void FUN_00877430(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(uVar3 + 0x524) = uRam0000341c;
    return;
  }
  puVar4 = &DAT_01b35b20;
  (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
  iVar2 = FUN_00dd6d80(puVar4);
  *(undefined4 *)(uVar3 + 0x524) = *(undefined4 *)((-(uint)(iVar2 != 0) & (uint)piVar1) + 0x341c);
  return;
}

// 008774A0  FUN_008774a0  size=121  [run]
void FUN_008774a0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar2 + 0x5e0) == (int *)0x0) {
    FUN_00b7ab30(*(undefined4 *)(uVar2 + 0x524));
    return;
  }
  puVar3 = &DAT_01b35b20;
  (**(code **)(**(int **)(uVar2 + 0x5e0) + 4))(&DAT_01b35b20);
  FUN_00dd6d80(puVar3);
  FUN_00b7ab30(*(undefined4 *)(uVar2 + 0x524));
  return;
}

// 00877520  FUN_00877520  size=608  [run]
void FUN_00877520(undefined4 *param_1)

{
  void *_Src;
  float fVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  float fVar7;
  undefined1 *puVar8;
  void *apvStack_fc [5];
  undefined4 *puStack_e8;
  undefined *local_e4;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_e4 = &DAT_01b35b78;
    puStack_e8 = (undefined4 *)0x877547;
    (**(code **)*param_1)();
    puStack_e8 = (undefined4 *)0x87754e;
    iVar2 = FUN_00dd6d80();
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
    local_e4 = &DAT_01b35b20;
    puStack_e8 = (undefined4 *)0x877572;
    (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))();
    puStack_e8 = (undefined4 *)0x877579;
    FUN_00dd6d80();
  }
  local_e4 = (undefined *)0x0;
  local_c8 = 0.0;
  puStack_e8 = (undefined4 *)0x877596;
  iVar2 = FUN_00a8cbe0();
  if (iVar2 != 0) {
    local_e4 = (undefined *)0x0;
    puStack_e8 = (undefined4 *)0x8775a7;
    iVar2 = FUN_00a8cbe0();
    if (iVar2 == 0) {
      local_c8 = 1.4013e-45;
    }
  }
  local_c4 = *(float *)(*(int *)(uVar3 + 0x38c + (int)local_c8 * 4) + 0x8d8);
  local_e4 = (undefined *)0xffffffff;
  puStack_e8 = (undefined4 *)0x8775d1;
  iVar2 = FUN_00a12210();
  _Src = (void *)(iVar2 + 0x10);
  local_e4 = (undefined *)
             -(*(float *)(iVar2 + 0x18) /
              SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                   *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                   *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30)));
  puStack_e8 = (undefined4 *)0x8775fd;
  FUN_00ddbaa0();
  local_70 = 0;
  apvStack_fc[4] = &local_70;
  local_6c = 0;
  local_68 = 0x3f800000;
  apvStack_fc[3] = (void *)0x877623;
  puStack_e8 = apvStack_fc[4];
  local_e4 = _Src;
  D3DXVec3TransformNormal();
  local_6c = 0x3f800000;
  apvStack_fc[1] = &local_6c;
  local_68 = 0;
  uStack_64 = 0;
  apvStack_fc[0] = (void *)0x87764d;
  apvStack_fc[2] = apvStack_fc[1];
  apvStack_fc[3] = _Src;
  D3DXVec3TransformNormal();
  puVar8 = &stack0xffffff28;
  uStack_d4 = 0x3f800000;
  uStack_d0 = 0;
  apvStack_fc[0] = _Src;
  D3DXVec3TransformNormal(puVar8,puVar8);
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  uStack_bc = 0;
  local_c4 = 0.0;
  local_c8 = 0.0;
  fStack_cc = 0.0;
  uStack_d0 = 0;
  uStack_98 = 0x3f800000;
  uStack_ac = 0x3f800000;
  uStack_c0 = 0x3f800000;
  uStack_d4 = 0x3f800000;
  FID_conflict__memcpy(&uStack_d4,_Src,0x40);
  fVar7 = *(float *)(uVar3 + 0x3b0) + *(float *)(uVar3 + 0x374);
  puVar6 = auStack_74;
  D3DXMatrixRotationX(puVar6,fVar7);
  D3DXMatrixMultiply(&stack0xffffff24,auStack_7c,&stack0xffffff24);
  D3DXMatrixRotationZ(auStack_88,apvStack_fc[0]);
  D3DXMatrixMultiply(apvStack_fc + 3,auStack_90,apvStack_fc + 3);
  fVar1 = *(float *)(uVar3 + 0x3a4) + 1.35;
  fStack_cc = fStack_cc + (float)puVar6 * fVar1;
  local_c8 = fVar7 * fVar1 + local_c8;
  local_c4 = (float)puVar8 * fVar1 + local_c4;
  ppvVar4 = apvStack_fc;
  puVar5 = &DAT_01d61860;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *ppvVar4;
    ppvVar4 = ppvVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_005ee3d0(apvStack_fc);
  return;
}

// 00877780  FUN_00877780  size=108  [run]
undefined4 FUN_00877780(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 1;
}

// 008777F0  FUN_008777f0  size=108  [run]
undefined4 FUN_008777f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 2;
}

// 00877860  FUN_00877860  size=108  [run]
undefined4 FUN_00877860(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 1;
}

// 008778D0  FUN_008778d0  size=108  [run]
undefined4 FUN_008778d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 1;
}

// 00877940  FUN_00877940  size=99  [run]
void FUN_00877940(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar3);
  }
  if ((*(int *)(param_2 + 0x24) != 6) && (*(int *)(param_2 + 0x24) != 5)) {
    DAT_01dc08bc = 0;
  }
  return;
}

// 008779B0  FUN_008779b0  size=163  [run]
undefined4 FUN_008779b0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  iVar3 = *(int *)(uVar2 + 0x40c8);
  if ((((iVar3 != 0xd) && (iVar3 != 9)) && (iVar3 != 0xf)) && (iVar3 != 0xc)) {
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = FUN_00876530(param_1);
      if ((iVar3 != 0) && (*(int *)(uVar4 + 0xe0) == 0)) {
        return 0;
      }
    }
  }
  return 1;
}

// 00877A60  FUN_00877a60  size=109  [run]
undefined4 FUN_00877a60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (*(int *)(uVar2 + 0x40c8) == 8) {
    return *(undefined4 *)(uVar4 + 0xe8);
  }
  return 1;
}

// 00877AD0  FUN_00877ad0  size=143  [run]
void FUN_00877ad0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar1 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  iVar2 = (**(code **)(*piVar3 + 0x84))();
  uStack_1c = *(undefined4 *)(iVar2 + 4);
  uStack_20 = 0;
  uStack_18 = 0;
  (**(code **)(*piVar3 + 0x88))(&uStack_20);
  return;
}

// 00877B60  FUN_00877b60  size=369  [run]
void FUN_00877b60(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar5 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar6 != 0) & (uint)piVar3;
  }
  if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
    fVar1 = *(float *)(uVar5 + 0x3bd4);
    fVar2 = *(float *)(uVar5 + 0x3bd8);
  }
  else {
    fVar1 = *(float *)(uVar5 + 0x3bdc);
    fVar2 = *(float *)(uVar5 + 0x3be0);
  }
  local_18 = 0;
  local_14 = local_14 - local_14;
  local_20 = fVar1;
  local_1c = fVar2;
  if ((fVar1 != 0.0) || (fVar2 != 0.0)) {
    fVar4 = fVar1 * fVar1 + fVar2 * fVar2;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
    }
  }
  fVar1 = ABS(fVar2) + ABS(fVar1);
  if (1000.0 < fVar1) {
    *param_1 = local_20 * 1000.0;
    param_1[1] = local_1c * 1000.0;
    return;
  }
  *param_1 = local_20 * fVar1;
  param_1[1] = fVar1 * local_1c;
  return;
}

// 00877CE0  FUN_00877ce0  size=42  [run]
void FUN_00877ce0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00877b60(&local_8,param_1);
  *param_2 = local_8;
  *param_3 = local_4;
  return;
}

// 00877D10  FUN_00877d10  size=145  [run]
void FUN_00877d10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  if ((DAT_01b77e30 != 1) && (DAT_01b77e30 != 3)) {
    uVar1 = *(undefined4 *)(uVar3 + 0x3bd8);
    *param_1 = *(undefined4 *)(uVar3 + 0x3bd4);
    param_1[1] = uVar1;
    return;
  }
  uVar1 = *(undefined4 *)(uVar3 + 0x3be0);
  *param_1 = *(undefined4 *)(uVar3 + 0x3bdc);
  param_1[1] = uVar1;
  return;
}

// 00877DB0  FUN_00877db0  size=42  [run]
void FUN_00877db0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00877d10(&local_8,param_1);
  *param_2 = local_8;
  *param_3 = local_4;
  return;
}

