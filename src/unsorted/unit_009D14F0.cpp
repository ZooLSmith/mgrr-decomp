// src/unsorted/unit_009D14F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D14F0..009D1FC0, 15 functions

#include "mgrr.h"

// 009D14F0  FUN_009d14f0  size=31  [run]
void __fastcall FUN_009d14f0(int *param_1)

{
  if (param_1[0x117] != 0) {
    (**(code **)(*param_1 + 0x24))();
    param_1[0x117] = 0;
  }
  return;
}

// 009D1560  FUN_009d1560  size=34  [run]
undefined4 __fastcall FUN_009d1560(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 1;
}

// 009D1590  FUN_009d1590  size=23  [run]
void __fastcall FUN_009d1590(undefined4 *param_1)

{
  FUN_00dd7270();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 009D15B0  FUN_009d15b0  size=118  [run]
void __thiscall FUN_009d15b0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2[0x117] != 0) {
    (**(code **)(*param_2 + 0x24))();
    param_2[0x117] = 0;
  }
  iVar1 = param_2[0x114];
  iVar2 = param_2[0x115];
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x454) = iVar2;
    param_2[0x114] = 0;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x450) = iVar1;
    param_2[0x115] = 0;
  }
  if (param_2 == (int *)*param_1) {
    *param_1 = iVar2;
  }
  if (param_2 == (int *)param_1[1]) {
    param_1[1] = iVar2;
  }
  if (0 < param_1[2]) {
    param_1[2] = param_1[2] + -1;
  }
  return;
}

// 009D16E0  FUN_009d16e0  size=286  [run]
void __thiscall FUN_009d16e0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x118);
  fVar2 = *(float *)(param_1 + 0x110);
  if (fVar2 == fVar1) {
    return;
  }
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00ec6e40(fVar2,fVar1);
  }
  if (*(int *)(param_2 + 8) != 0) {
    FUN_00ec6e40(fVar2,fVar1);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_00ec6e40(fVar2,fVar1);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_00ec9530(fVar2);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    FUN_00ec9530(fVar2);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_00ec9530(fVar2);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    FUN_00eca680(*(undefined4 *)(param_2 + 0x2c),fVar1,fVar2);
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_00eca490(*(undefined4 *)(param_2 + 0x30),fVar1,fVar2);
  return;
}

// 009D18A0  FUN_009d18a0  size=10  [run]
void __thiscall FUN_009d18a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}

// 009D18F0  FUN_009d18f0  size=44  [run]
void __thiscall FUN_009d18f0(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + 0x30 + (param_2 >> 5) * 4);
  uVar2 = 0x80000000 >> ((byte)param_2 & 0x1f);
  if (param_3 != 0) {
    *puVar1 = *puVar1 | uVar2;
    return;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return;
}

// 009D19D0  FUN_009d19d0  size=90  [run]
void __fastcall FUN_009d19d0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1[uVar1] != 0) {
      FUN_00dd4920(param_1[uVar1]);
      param_1[uVar1] = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  if (param_1[7] != 0) {
    FUN_00dd4940(param_1[7]);
    param_1[7] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 009D1AA0  FUN_009d1aa0  size=33  [run]
void __fastcall FUN_009d1aa0(int param_1)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x14) != 0.0) {
    iVar1 = FUN_00e03960();
    *(float *)(param_1 + 0x18) = *(float *)(iVar1 + 0x7c) + *(float *)(param_1 + 0x18);
  }
  return;
}

// 009D1AD0  FUN_009d1ad0  size=205  [run]
void __fastcall FUN_009d1ad0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int local_8;
  uint local_4;
  
  if (param_1[1] != 0) {
    FUN_009d19d0();
  }
  local_4 = 0;
  if (param_1[2] != 0) {
    local_8 = 0;
    do {
      puVar1 = (undefined4 *)(*param_1 + local_8);
      uVar2 = 0;
      do {
        if (puVar1[uVar2] != 0) {
          FUN_00dd4920(puVar1[uVar2]);
          puVar1[uVar2] = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 7);
      if (puVar1[7] != 0) {
        FUN_00dd4940(puVar1[7]);
        puVar1[7] = 0;
      }
      local_8 = local_8 + 0x28;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      local_4 = local_4 + 1;
      puVar1[7] = 0;
      puVar1[8] = 0;
    } while (local_4 < (uint)param_1[2]);
  }
  if (param_1[1] != 0) {
    FUN_00dd4920(param_1[1]);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}

// 009D1CA0  FUN_009d1ca0  size=63  [run]
void __fastcall FUN_009d1ca0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1[1] != 0) {
    iVar4 = 0;
    do {
      iVar1 = *param_1;
      if (*(float *)(iVar1 + 0x14 + iVar4) != 0.0) {
        iVar2 = FUN_00e03960();
        *(float *)(iVar1 + 0x18 + iVar4) =
             *(float *)(iVar2 + 0x7c) + *(float *)(iVar1 + 0x18 + iVar4);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x1c;
    } while (uVar3 < (uint)param_1[1]);
  }
  return;
}

// 009D1CE0  FUN_009d1ce0  size=276  [run]
void __fastcall FUN_009d1ce0(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  if (param_1[1] != 0) {
    local_10 = 0;
    do {
      piVar3 = (int *)(*param_1 + local_10);
      if (piVar3[1] != 0) {
        FUN_009d19d0();
      }
      local_c = 0;
      if (piVar3[2] != 0) {
        local_14 = 0;
        do {
          puVar2 = (undefined4 *)(*piVar3 + local_14);
          uVar1 = 0;
          do {
            if (puVar2[uVar1] != 0) {
              FUN_00dd4920(puVar2[uVar1]);
              puVar2[uVar1] = 0;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < 7);
          if (puVar2[7] != 0) {
            FUN_00dd4940(puVar2[7]);
            puVar2[7] = 0;
          }
          local_14 = local_14 + 0x28;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          local_c = local_c + 1;
          puVar2[7] = 0;
          puVar2[8] = 0;
        } while (local_c < (uint)piVar3[2]);
      }
      if (piVar3[1] != 0) {
        FUN_00dd4920(piVar3[1]);
        piVar3[1] = 0;
      }
      if (*piVar3 != 0) {
        FUN_00dd4940(*piVar3);
        *piVar3 = 0;
      }
      local_10 = local_10 + 0x1c;
      piVar3[5] = 0;
      local_8 = local_8 + 1;
      piVar3[6] = 0;
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[2] = 0;
    } while (local_8 < (uint)param_1[1]);
  }
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  return;
}

// 009D1E40  FUN_009d1e40  size=161  [run]
undefined4 FUN_009d1e40(int param_1)

{
  if (((((((param_1 != 0xd000f) && (param_1 != 0xd0080)) && (param_1 != 0xd0084)) &&
        ((param_1 != 0xd0085 && (param_1 != 0xd00cd)))) &&
       (((param_1 != 0xd00ed && ((param_1 != 0xd0171 && (param_1 != 0xd017b)))) &&
        (param_1 != 0xd01f1)))) &&
      ((((param_1 != 0xd01f2 && (param_1 != 0xd0226)) && (param_1 != 0xd0315)) &&
       (((param_1 != 0xd0316 && (param_1 != 0xd0504)) &&
        ((param_1 != 0xd00e6 && ((param_1 != 0xd00e7 && (param_1 != 0xd00ee)))))))))) &&
     ((param_1 != 0xe0084 && ((param_1 != 0xe0085 && (param_1 != 0xe0086)))))) {
    return 0;
  }
  return 1;
}

// 009D1F40  FUN_009d1f40  size=121  [run]
bool FUN_009d1f40(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_009cae00();
  local_2c = param_1[10];
  local_30 = param_1[0xb];
  local_28 = param_1[0x11];
  if (param_1[0xe] == 0) {
    local_20 = *param_1;
    local_1c = param_1[1];
    local_18 = param_1[2];
    local_14 = param_1[3];
  }
  else {
    iVar1 = param_1[0xe];
    local_20 = *(undefined4 *)(iVar1 + 0x30);
    local_1c = *(undefined4 *)(iVar1 + 0x34);
    local_18 = *(undefined4 *)(iVar1 + 0x38);
  }
  iVar1 = SoundSeAttrSystem::Se(&local_30);
  return iVar1 != 0;
}

// 009D1FC0  FUN_009d1fc0  size=95  [run]
void FUN_009d1fc0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = 0;
    if (*(int *)((int)&DAT_01b7a93c + uVar1) != 0) {
      do {
        FUN_009d1ad0();
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)&DAT_01b7a93c + uVar1));
    }
    if (*(int *)((int)&DAT_01b7a938 + uVar1) != 0) {
      FUN_00dd4940(*(int *)((int)&DAT_01b7a938 + uVar1));
      *(undefined4 *)((int)&DAT_01b7a938 + uVar1) = 0;
    }
    *(undefined4 *)((int)&DAT_01b7a93c + uVar1) = 0;
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x18);
  return;
}

