// src/unsorted/unit_0092FBC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092FBC0..00930320, 8 functions

#include "types.h"

// 0092FBC0  FUN_0092fbc0  size=22  [run]
void __fastcall FUN_0092fbc0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0092FBE0  FUN_0092fbe0  size=22  [run]
void __fastcall FUN_0092fbe0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0092FC00  FUN_0092fc00  size=22  [run]
void __fastcall FUN_0092fc00(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0092FC40  FUN_0092fc40  size=67  [run]
void FUN_0092fc40(void)

{
  hkSerializeDeprecated2::hkSerializeDeprecated2();
  if (0 < *(int *)(DAT_0209b83c + 0x10)) {
    FUN_010dd1c0();
  }
  FUN_0104c650();
  FUN_01047660();
  FUN_01045e40();
  FUN_011bd890();
  FUN_011b8390();
  FUN_011b4600();
  FUN_012766d0();
  FUN_01148b90();
  FUN_011f3eb0();
  return;
}

// 0092FC90  FUN_0092fc90  size=140  [run]
void __fastcall FUN_0092fc90(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_004066f0();
  iVar2 = *param_1;
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0x38)) {
    do {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x34) + iVar4 * 4);
      iVar5 = 0;
      if (0 < *(int *)(iVar3 + 0x50)) {
        do {
          FUN_0118fe70();
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar3 + 0x50));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0x38));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 0092FD20  FUN_0092fd20  size=1068  [run]
void FUN_0092fd20(float param_1,float *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_4c;
  int local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_14;
  
  FUN_004066f0();
  iVar6 = DAT_01885d20;
  piVar7 = (int *)(DAT_01885d20 + 0x28);
  local_48 = 0;
  if (0 < *(int *)(DAT_01885d20 + 0x2c)) {
    do {
      iVar1 = *(int *)(*piVar7 + local_48 * 4);
      local_4c = 0;
      if (0 < *(int *)(iVar1 + 0x50)) {
        do {
          iVar8 = *(int *)(*(int *)(iVar1 + 0x4c) + local_4c * 4);
          if ((*(char *)(iVar8 + 0x28) == '\x01') &&
             (iVar8 = (int)*(char *)(iVar8 + 0x20) + iVar8 + 0x10, iVar8 != 0)) {
            local_14 = *(float *)(iVar8 + 300);
            fVar2 = *(float *)(iVar8 + 0x120) - *param_2;
            fVar5 = *(float *)(iVar8 + 0x124) - param_2[1];
            fVar4 = *(float *)(iVar8 + 0x128) - param_2[2];
            fVar3 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4);
            if (fVar3 < param_3 != (fVar3 == param_3)) {
              local_34 = local_14 - param_2[3];
              local_40 = fVar2;
              local_3c = fVar5;
              local_38 = fVar4;
              if (((fVar2 != 0.0) || (fVar5 != 0.0)) || (fVar4 != 0.0)) {
                fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
                if (fVar2 < 0.0 == (fVar2 == 0.0)) {
                  FUN_00ddf460(&local_40,&local_40);
                }
                else {
                  FUN_00dd5650(&DAT_0163d0ac);
                  local_40 = 0.0;
                  local_3c = 1.0;
                  local_38 = 0.0;
                }
              }
              local_30 = local_40 * param_1;
              local_2c = local_3c * param_1;
              local_28 = local_38 * param_1;
              local_24 = param_1 * local_34;
              FUN_009190d0(iVar8,&local_30,param_2);
            }
          }
          local_4c = local_4c + 1;
        } while (local_4c < *(int *)(iVar1 + 0x50));
      }
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)(iVar6 + 0x2c));
  }
  iVar6 = DAT_01885d20;
  piVar7 = (int *)(DAT_01885d20 + 0x34);
  local_48 = 0;
  if (0 < *(int *)(DAT_01885d20 + 0x38)) {
    do {
      iVar1 = *(int *)(*piVar7 + local_48 * 4);
      iVar8 = 0;
      if (0 < *(int *)(iVar1 + 0x50)) {
        do {
          iVar9 = *(int *)(*(int *)(iVar1 + 0x4c) + iVar8 * 4);
          if ((*(char *)(iVar9 + 0x28) == '\x01') &&
             (iVar9 = (int)*(char *)(iVar9 + 0x20) + iVar9 + 0x10, iVar9 != 0)) {
            local_14 = *(float *)(iVar9 + 300);
            fVar2 = *(float *)(iVar9 + 0x120) - *param_2;
            fVar5 = *(float *)(iVar9 + 0x124) - param_2[1];
            fVar4 = *(float *)(iVar9 + 0x128) - param_2[2];
            fVar3 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4);
            if (fVar3 < param_3 != (fVar3 == param_3)) {
              local_34 = local_14 - param_2[3];
              local_40 = fVar2;
              local_3c = fVar5;
              local_38 = fVar4;
              if (((fVar2 != 0.0) || (fVar5 != 0.0)) || (fVar4 != 0.0)) {
                fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
                if (fVar2 < 0.0 == (fVar2 == 0.0)) {
                  FUN_00ddf460(&local_40,&local_40);
                }
                else {
                  FUN_00dd5650(&DAT_0163d0ac);
                  local_40 = 0.0;
                  local_3c = 1.0;
                  local_38 = 0.0;
                }
              }
              local_30 = local_40 * param_1;
              local_2c = local_3c * param_1;
              local_28 = local_38 * param_1;
              local_24 = param_1 * local_34;
              FUN_009190d0(iVar9,&local_30,param_2);
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(iVar1 + 0x50));
      }
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)(iVar6 + 0x38));
  }
  if (DAT_01885d68 != 1) {
    piVar7 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar7 = *piVar7 + -1;
    if (((*piVar7 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00930150  FUN_00930150  size=438  [run]
void FUN_00930150(undefined4 param_1,float *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_4;
  
  pfVar6 = param_2;
  FUN_004066f0();
  iVar5 = DAT_01885d20;
  piVar8 = (int *)(DAT_01885d20 + 0x28);
  local_4 = 0;
  if (0 < *(int *)(DAT_01885d20 + 0x2c)) {
    do {
      iVar1 = *(int *)(*piVar8 + local_4 * 4);
      iVar9 = 0;
      if (0 < *(int *)(iVar1 + 0x50)) {
        do {
          iVar7 = *(int *)(*(int *)(iVar1 + 0x4c) + iVar9 * 4);
          if (((*(char *)(iVar7 + 0x28) == '\x01') &&
              (iVar7 = (int)*(char *)(iVar7 + 0x20) + iVar7 + 0x10, iVar7 != 0)) &&
             (fVar2 = *(float *)(iVar7 + 0x120) - *param_2,
             fVar4 = *(float *)(iVar7 + 0x124) - param_2[1],
             fVar3 = *(float *)(iVar7 + 0x128) - param_2[2],
             fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3),
             fVar2 < param_3 != (fVar2 == param_3))) {
            FUN_009190d0(iVar7,param_1,param_2);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(iVar1 + 0x50));
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(iVar5 + 0x2c));
  }
  iVar5 = DAT_01885d20;
  piVar8 = (int *)(DAT_01885d20 + 0x34);
  param_2 = (float *)0x0;
  if (0 < *(int *)(DAT_01885d20 + 0x38)) {
    do {
      iVar1 = *(int *)(*piVar8 + (int)param_2 * 4);
      iVar9 = 0;
      if (0 < *(int *)(iVar1 + 0x50)) {
        do {
          iVar7 = *(int *)(*(int *)(iVar1 + 0x4c) + iVar9 * 4);
          if (((*(char *)(iVar7 + 0x28) == '\x01') &&
              (iVar7 = (int)*(char *)(iVar7 + 0x20) + iVar7 + 0x10, iVar7 != 0)) &&
             (fVar2 = *(float *)(iVar7 + 0x120) - *pfVar6,
             fVar4 = *(float *)(iVar7 + 0x124) - pfVar6[1],
             fVar3 = *(float *)(iVar7 + 0x128) - pfVar6[2],
             fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3),
             fVar2 < param_3 != (fVar2 == param_3))) {
            FUN_009190d0(iVar7,param_1,pfVar6);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(iVar1 + 0x50));
      }
      param_2 = (float *)((int)param_2 + 1);
    } while ((int)param_2 < *(int *)(iVar5 + 0x38));
  }
  if (DAT_01885d68 != 1) {
    piVar8 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar8 = *piVar8 + -1;
    if (((*piVar8 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00930320  FUN_00930320  size=28  [run]
void FUN_00930320(void)

{
  FUN_00dd7270();
  FUN_00dd7270();
  hkMemoryAllocator::~hkMemoryAllocator();
  return;
}

