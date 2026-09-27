// src/managers/charactercontrolmanager/CharacterControlManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E3760..008EBB70, 11 functions

#include "types.h"

// 008E3760  CharacterControlManagerImplement::vf0C  size=53  [class]
void __fastcall CharacterControlManagerImplement::vf0C(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 4), piVar2 != piVar2 + *(int *)(iVar1 + 8))) {
    do {
      *(uint *)(*piVar2 + 0x168) = *(uint *)(*piVar2 + 0x168) | 4;
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                              *(int *)(*(int *)(param_1 + 4) + 8) * 4));
  }
  return;
}

// 008E37A0  CharacterControlManagerImplement::vf14  size=389  [class]
void __fastcall CharacterControlManagerImplement::vf14(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  int *piVar5;
  int local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  if (*(int *)(param_1 + 4) != 0) {
    pvVar4 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar4 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
      *puVar1 = "TtCHAR_COL_CHECK_RIDE";
      uVar3 = rdtsc();
      puVar1[1] = (int)uVar3;
      *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
    }
    piVar5 = *(int **)(*(int *)(param_1 + 4) + 4);
    if (piVar5 != piVar5 + *(int *)(*(int *)(param_1 + 4) + 8)) {
      do {
        iVar2 = *piVar5;
        if ((*(int *)(iVar2 + 0xf0) != 0) && ((*(byte *)(iVar2 + 0x168) & 3) == 0)) {
          local_50 = *(float *)(iVar2 + 0xa0);
          local_4c = *(float *)(iVar2 + 0xa4);
          local_48 = *(float *)(iVar2 + 0xa8);
          local_2c = *(int *)(iVar2 + 0x100) << 0x10 | 0x11;
          local_44 = *(float *)(iVar2 + 0xac);
          local_60[0] = iVar2 + 0x160;
          local_40 = *(float *)(iVar2 + 0xa0) - local_50;
          local_60[1] = 0;
          local_28 = 0;
          local_3c = (*(float *)(iVar2 + 0xa4) - 1.0) - local_4c;
          local_24 = 0;
          local_20 = 0;
          local_38 = *(float *)(iVar2 + 0xa8) - local_48;
          local_1c = "CharColCheckRide";
          local_34 = *(float *)(iVar2 + 0xac) - local_44;
          local_30 = 0x3dcccccd;
          FUN_0090fb00(local_60);
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != (int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                *(int *)(*(int *)(param_1 + 4) + 8) * 4));
    }
    pvVar4 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar4 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
      *puVar1 = &DAT_0164b09c;
      uVar3 = rdtsc();
      puVar1[1] = (int)uVar3;
      *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
    }
  }
  return;
}

// 008E3930  CharacterControlManagerImplement::vf04  size=171  [class]
void __fastcall CharacterControlManagerImplement::vf04(int *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (param_1[1] != 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar3 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
      *puVar1 = "TtCHARACTER_CONTROL_PRE_UPDATE";
      uVar2 = rdtsc();
      puVar1[1] = (int)uVar2;
      *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
    }
    (**(code **)(*param_1 + 0x10))();
    uVar4 = *(uint *)(param_1[1] + 4);
    if (uVar4 < uVar4 + *(int *)(param_1[1] + 8) * 4) {
      do {
        FUN_008e27c0();
        uVar4 = uVar4 + 4;
      } while (uVar4 < (uint)(*(int *)(param_1[1] + 4) + *(int *)(param_1[1] + 8) * 4));
    }
    pvVar3 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar3 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
      *puVar1 = &DAT_0164b09c;
      uVar2 = rdtsc();
      puVar1[1] = (int)uVar2;
      *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
    }
  }
  return;
}

// 008E6870  CharacterControlManagerImplement::vf18  size=988  [class]
void __thiscall CharacterControlManagerImplement::vf18(int param_1,float param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  LPVOID pvVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_98;
  int local_94;
  float local_90 [4];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 4) != 0) {
    local_98 = param_1;
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar1 = "TtCHAR_COL_UPDATE_RIDE";
      uVar3 = rdtsc();
      puVar1[1] = (int)uVar3;
      *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
    }
    piVar8 = *(int **)(*(int *)(param_1 + 4) + 4);
    if (piVar8 != piVar8 + *(int *)(*(int *)(param_1 + 4) + 8)) {
      do {
        iVar2 = *piVar8;
        *(undefined4 *)(iVar2 + 0x80) = 0;
        if ((*(int *)(iVar2 + 0xf0) != 0) && ((*(byte *)(iVar2 + 0x168) & 3) == 0)) {
          bVar4 = false;
          iVar6 = FUN_00907640(iVar2 + 0x160,&local_94,0);
          if (iVar6 != 0) {
            if ((DAT_01885d68 != 1) &&
               (iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4),
               *(int *)(iVar6 + 4) == 0)) {
              if ((*(int *)(iVar6 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
                FUN_00dd72c0();
              }
              *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
            }
            iVar6 = 0;
            if (0 < *(int *)(local_94 + 0x14)) {
              piVar7 = (int *)(*(int *)(local_94 + 0x10) + 0x28);
              do {
                iVar9 = *piVar7;
                if ((*(char *)(iVar9 + 0x18) == '\x01') &&
                   (iVar9 = *(char *)(iVar9 + 0x10) + iVar9, iVar9 != 0)) {
                  FUN_008e4320(&local_60);
                  fVar11 = local_60 - *(float *)(iVar9 + 0x140);
                  fVar12 = fStack_5c - *(float *)(iVar9 + 0x144);
                  fVar13 = fStack_58 - *(float *)(iVar9 + 0x148);
                  fVar14 = fStack_54 - *(float *)(iVar9 + 0x14c);
                  local_c0 = *(float *)(iVar9 + 0x1c0);
                  local_bc = *(float *)(iVar9 + 0x1c4);
                  local_b8 = *(float *)(iVar9 + 0x1c8);
                  uStack_64 = *(undefined4 *)(iVar9 + 0x1cc);
                  local_b0 = (*(float *)(iVar9 + 0x1c4) * fVar13 -
                             *(float *)(iVar9 + 0x1c8) * fVar12) + *(float *)(iVar9 + 0x1b0);
                  local_ac = (*(float *)(iVar9 + 0x1c8) * fVar11 -
                             *(float *)(iVar9 + 0x1c0) * fVar13) + *(float *)(iVar9 + 0x1b4);
                  local_a8 = (*(float *)(iVar9 + 0x1c0) * fVar12 -
                             *(float *)(iVar9 + 0x1c4) * fVar11) + *(float *)(iVar9 + 0x1b8);
                  fStack_74 = (*(float *)(iVar9 + 0x1cc) * fVar14 -
                              *(float *)(iVar9 + 0x1cc) * fVar14) + *(float *)(iVar9 + 0x1bc);
                  bVar4 = true;
                  *(int *)(iVar2 + 0x80) = iVar9;
                  local_80 = local_b0;
                  fStack_7c = local_ac;
                  fStack_78 = local_a8;
                  local_70 = local_c0;
                  fStack_6c = local_bc;
                  fStack_68 = local_b8;
                  break;
                }
                iVar6 = iVar6 + 1;
                piVar7 = piVar7 + 0xc;
              } while (iVar6 < *(int *)(local_94 + 0x14));
            }
            if ((DAT_01885d68 != 1) &&
               (iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4),
               *(int *)(iVar6 + 4) == 0)) {
              piVar7 = (int *)(iVar6 + 8);
              *piVar7 = *piVar7 + -1;
              if ((*piVar7 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
                FUN_00dd7300();
              }
            }
            if (bVar4) {
              fVar11 = 60.0 / param_2;
              fVar12 = param_2 * 0.016666668 * fVar11;
              local_b0 = local_b0 / fVar12;
              local_ac = local_ac / fVar12;
              local_a8 = local_a8 / fVar12;
              local_a4 = local_a4 / fVar12;
              *(float *)(iVar2 + 0x15c) = local_a4;
              *(float *)(iVar2 + 0x150) = local_b0;
              *(float *)(iVar2 + 0x154) = local_ac;
              *(float *)(iVar2 + 0x158) = local_a8;
              local_c0 = local_c0 / fVar11;
              local_bc = local_bc / fVar11;
              local_b8 = local_b8 / fVar11;
              local_b4 = local_b4 / fVar11;
              local_90[0] = 0.0;
              local_90[1] = 0.0;
              local_90[2] = 1.0;
              FUN_00ddc1d0(local_50,&local_c0,5);
              D3DXVec3TransformNormal(local_90,local_90,local_50);
              local_90[1] = 0.0;
              fVar11 = (local_90[0] * 0.0 + local_90[2]) /
                       (SQRT(local_90[2] * local_90[2] + local_90[0] * local_90[0]) * 1.0);
              if (local_90[2] * 0.0 - local_90[0] < 0.0) {
                fVar10 = (float10)FUN_00ddbb50(fVar11);
                fVar10 = (float10)FUN_00ddba30((float)(fVar10 + (float10)*(float *)(*(int *)(iVar2 +
                                                                                            0xf0) +
                                                                                   0x94)));
                *(float *)(*(int *)(iVar2 + 0xf0) + 0x94) = (float)fVar10;
                *(uint *)(iVar2 + 0x16c) = *(uint *)(iVar2 + 0x16c) | 1;
              }
              else {
                fVar10 = (float10)FUN_00ddbb50(fVar11);
                fVar10 = (float10)FUN_00ddba30((float)((float10)*(float *)(*(int *)(iVar2 + 0xf0) +
                                                                          0x94) - fVar10));
                *(float *)(*(int *)(iVar2 + 0xf0) + 0x94) = (float)fVar10;
                *(uint *)(iVar2 + 0x16c) = *(uint *)(iVar2 + 0x16c) | 1;
              }
              goto LAB_008e6bfb;
            }
          }
          *(uint *)(iVar2 + 0x16c) = *(uint *)(iVar2 + 0x16c) & 0xfffffffe;
        }
LAB_008e6bfb:
        piVar8 = piVar8 + 1;
      } while (piVar8 != (int *)(*(int *)(*(int *)(local_98 + 4) + 4) +
                                *(int *)(*(int *)(local_98 + 4) + 8) * 4));
    }
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar1 = &DAT_0164b09c;
      uVar3 = rdtsc();
      puVar1[1] = (int)uVar3;
      *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
    }
  }
  return;
}

// 008EA200  CharacterControlManagerImplement::vf20  size=53  [class]
void __fastcall CharacterControlManagerImplement::vf20(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  (**(code **)(**(int **)(param_1 + 4) + 8))(&stack0x00000004);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 008EA240  CharacterControlManagerImplement::vf24  size=44  [class]
undefined4 __fastcall CharacterControlManagerImplement::vf24(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return uVar1;
}

// 008EA270  CharacterControlManagerImplement::vf28  size=53  [class]
undefined4 __thiscall CharacterControlManagerImplement::vf28(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_2 * 4);
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return uVar1;
}

// 008EA2F0  CharacterControlManagerImplement::vf00  size=77  [class]
undefined4 * __thiscall CharacterControlManagerImplement::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00dd7270();
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  FUN_00dd7270();
  *param_1 = CharacterControlManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008EA340  CharacterControlManagerImplement::vf1C  size=32  [class]
undefined4 CharacterControlManagerImplement::vf1C(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x1e0,&DAT_01b7c218);
  if (iVar1 != 0) {
    uVar2 = lib::StaticArray<CharacterControl*,8>::StaticArray<CharacterControl*,8>();
    return uVar2;
  }
  return 0;
}

// 008EA360  CharacterControlManagerImplement::vf10  size=349  [class]
void __fastcall CharacterControlManagerImplement::vf10(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004066f0();
    piVar5 = *(int **)(*(int *)(param_1 + 4) + 4);
    if (piVar5 != piVar5 + *(int *)(*(int *)(param_1 + 4) + 8)) {
      do {
        iVar1 = *piVar5;
        if ((*(byte *)(iVar1 + 0x168) & 4) == 0) {
          piVar6 = *(int **)(iVar1 + 0x54);
          if (piVar6 != piVar6 + *(int *)(iVar1 + 0x58)) {
            do {
              if ((*(byte *)(*piVar6 + 0x168) & 4) == 0) {
                piVar7 = piVar6 + 1;
              }
              else {
                FUN_008e9d80();
                uVar2 = *(uint *)(iVar1 + 0x58);
                iVar3 = *(int *)(iVar1 + 0x54);
                piVar7 = (int *)(iVar3 + uVar2 * 4);
                if ((((piVar6 != piVar7) && (iVar3 != 0)) && (uVar2 != 0)) &&
                   ((uint)((int)piVar6 - iVar3 >> 2) < uVar2)) {
                  for (piVar4 = piVar6; piVar4 != piVar7 + -1; piVar4 = piVar4 + 1) {
                    *piVar4 = piVar4[1];
                  }
                  *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) + -1;
                  piVar7 = piVar6;
                }
              }
              piVar6 = piVar7;
            } while (piVar7 != (int *)(*(int *)(iVar1 + 0x54) + *(int *)(iVar1 + 0x58) * 4));
          }
          piVar6 = piVar5 + 1;
        }
        else {
          FUN_008e9d80();
          iVar1 = *(int *)(param_1 + 4);
          uVar2 = *(uint *)(iVar1 + 8);
          iVar3 = *(int *)(iVar1 + 4);
          piVar6 = (int *)(iVar3 + uVar2 * 4);
          if (((piVar5 != piVar6) && (iVar3 != 0)) &&
             ((uVar2 != 0 && ((uint)((int)piVar5 - iVar3 >> 2) < uVar2)))) {
            for (piVar7 = piVar5; piVar7 != piVar6 + -1; piVar7 = piVar7 + 1) {
              *piVar7 = piVar7[1];
            }
            *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
            piVar6 = piVar5;
          }
        }
        piVar5 = piVar6;
      } while (piVar6 != (int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                *(int *)(*(int *)(param_1 + 4) + 8) * 4));
    }
    if (DAT_01885d68 != 1) {
      piVar5 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar5 = *piVar5 + -1;
      if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 008EBB70  CharacterControlManagerImplement::vf08  size=339  [class]
void __fastcall CharacterControlManagerImplement::vf08(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_28 [5];
  int aiStack_14 [5];
  
  if (*(int *)(param_1 + 4) != 0) {
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar1 = "TtHARACTER_CONTROL_UPDATE";
      uVar4 = rdtsc();
      puVar1[1] = (int)uVar4;
      *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
    }
    iVar6 = FUN_00f98a40();
    uVar9 = *(uint *)(*(int *)(param_1 + 4) + 8);
    uVar11 = 5 - (iVar6 != 0);
    if (uVar9 != 0) {
      iVar6 = 0;
      if (0 < (int)uVar11) {
        do {
          uVar7 = FUN_00a1d5c0();
          lVar3 = (ulonglong)(uVar9 / uVar11 + 1) * 4;
          iVar8 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,uVar7);
          aiStack_14[iVar6] = iVar8;
          local_28[iVar6] = 0;
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uVar11);
      }
      FUN_00dd75d0(&LAB_008eb920,local_28,0xffffffff);
      iVar6 = *(int *)(param_1 + 4);
      uVar9 = 0;
      if (*(int *)(iVar6 + 8) != 0) {
        do {
          uVar10 = uVar9 % uVar11;
          iVar2 = local_28[uVar10];
          iVar8 = uVar9 * 4;
          uVar9 = uVar9 + 1;
          *(undefined4 *)(aiStack_14[uVar10] + -4 + (iVar2 + 1) * 4) =
               *(undefined4 *)(*(int *)(iVar6 + 4) + iVar8);
          local_28[uVar10] = iVar2 + 1;
          iVar6 = *(int *)(param_1 + 4);
        } while (uVar9 < *(uint *)(iVar6 + 8));
      }
      if (0 < local_28[0]) {
        FUN_00dd79a0(uVar11);
      }
      iVar6 = 0;
      if (0 < (int)uVar11) {
        do {
          FUN_00dd4940(aiStack_14[iVar6]);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uVar11);
      }
    }
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar1 = &DAT_0164b09c;
      uVar4 = rdtsc();
      puVar1[1] = (int)uVar4;
      *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
    }
  }
  return;
}

