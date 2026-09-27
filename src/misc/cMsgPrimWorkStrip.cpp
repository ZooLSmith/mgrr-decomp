// src/misc/cMsgPrimWorkStrip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCD3C0..00D20740, 8 functions

#include "types.h"

// 00CCD3C0  cMsgPrimWorkStrip::cMsgPrimWorkStrip_3  size=18  [class]
undefined4 * __fastcall cMsgPrimWorkStrip::cMsgPrimWorkStrip_3(undefined4 *param_1)

{
  cMsgPrimWorkBase::cMsgPrimWorkBase();
  *param_1 = vftable;
  return param_1;
}

// 00CCD3E0  cMsgPrimWorkStrip::vf08  size=6  [class]
undefined4 cMsgPrimWorkStrip::vf08(void)

{
  return 5;
}

// 00CCD3F0  cMsgPrimWorkStrip::vf0C  size=10  [class]
int __fastcall cMsgPrimWorkStrip::vf0C(int param_1)

{
  return *(int *)(param_1 + 0x130) + -2;
}

// 00CCD420  cMsgPrimWorkStrip::vf00  size=47  [class]
undefined4 * __thiscall cMsgPrimWorkStrip::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CE8450  cMsgPrimWorkStrip::cMsgPrimWorkStrip_2  size=905  [class]
void __thiscall
cMsgPrimWorkStrip::cMsgPrimWorkStrip_2(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int local_ac;
  uint local_a8;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  uint local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  uint local_54;
  undefined4 local_50 [19];
  
  iVar7 = FUN_00ce6ab0(param_3);
  if (iVar7 != 0) {
    uVar14 = param_3[0x1b];
    puVar13 = param_3;
    puVar9 = local_50;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_00cacde0(local_50,uVar14);
    iVar7 = *(int *)(param_4 + 300);
    iVar8 = *(int *)(param_4 + 0x130) + iVar7;
    if (iVar7 < iVar8) {
      puVar13 = (undefined4 *)(iVar7 * 0x70 + 0x178 + param_4);
      do {
        if ((((-1 < iVar7) && (iVar7 < *(int *)(param_4 + 0x138))) &&
            (puVar13 != (undefined4 *)0x38)) &&
           ((*param_2 != 0 &&
            (puVar9 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar9 != (undefined4 *)0x0)
            ))) {
          cMsgPrimWorkBase::cMsgPrimWorkBase();
          *puVar9 = vftable;
          iVar11 = *(int *)(param_1 + 8) * 2;
          if ((0 < iVar11) && (iVar10 = FUN_00cb0890(param_2,iVar11,iVar11), iVar10 != 0)) {
            puVar9[0x13] = 0;
            puVar9[0x4c] = 0;
            puVar9[0x4d] = iVar11;
            iVar11 = param_3[0x1b];
            puVar9[0x49] = iVar11;
            puVar9[0x4b] = (uint)(iVar11 == 3);
            FUN_00cb0980(param_3,param_3[0x1a],0);
            FUN_00ce4380(param_4 + 0x5c,param_4 + 0x78);
            uVar14 = param_3[0x1d];
            puVar9[0x16] = *(undefined4 *)(param_4 + 0x134);
            puVar9[0x29] = uVar14;
            uVar14 = puVar13[-2];
            uVar1 = *puVar13;
            fVar2 = (float)puVar13[-1];
            fVar6 = (float)(*(int *)(param_1 + 8) + -1);
            local_ac = 0;
            fVar3 = (float)puVar13[1];
            fVar4 = (float)puVar13[-1];
            fVar5 = (float)puVar13[-5];
            if (0 < *(int *)(param_1 + 8)) {
              do {
                iVar11 = *(int *)(param_1 + 0x28);
                local_80 = (*(float *)(iVar11 + 4 + local_ac * 8) -
                           *(float *)(iVar11 + local_ac * 8)) * *(float *)(param_1 + 0x24) +
                           *(float *)(iVar11 + local_ac * 8) + (float)puVar13[-10];
                local_7c = (fVar5 / fVar6) * (float)local_ac + (float)puVar13[-9];
                local_70 = (float)local_ac * ((fVar3 - fVar4) / fVar6) + fVar2;
                local_78 = 0;
                local_a8 = (uint)(longlong)ROUND((float)param_3[0x13] * 255.0);
                uVar12 = local_a8 << 8;
                local_a8 = (uint)(longlong)ROUND((float)param_3[0x10] * 255.0);
                uVar12 = uVar12 | local_a8;
                local_a8 = (uint)(longlong)ROUND((float)param_3[0x11] * 255.0);
                uVar12 = uVar12 << 8 | local_a8;
                local_a8 = (uint)(longlong)ROUND((float)param_3[0x12] * 255.0);
                local_6c = uVar12 << 8 | local_a8;
                local_68 = (float)puVar13[-6] + local_80;
                local_60 = 0;
                local_74 = uVar14;
                local_64 = local_7c;
                local_5c = uVar1;
                local_58 = local_70;
                local_54 = local_6c;
                iVar11 = FUN_00cb17f0(&local_80,2);
                if (iVar11 == 0) {
                  return;
                }
                local_ac = local_ac + 1;
              } while (local_ac < *(int *)(param_1 + 8));
            }
            if (param_3[0x1e] == 2) {
              iVar11 = 0;
              uVar14 = 0x3e;
            }
            else if (param_3[0x1e] == 1) {
              iVar11 = param_3[0x1c];
              iVar10 = param_3[0x1f];
              if (DAT_01dc5030 != 0) {
                if (iVar10 == 0) {
                  iVar11 = iVar11 + -1;
                  uVar14 = 0x69;
                  goto LAB_00ce87b4;
                }
                if ((iVar10 != 1) && (iVar10 == 2)) {
                  iVar11 = iVar11 + 1;
                }
              }
              uVar14 = 0x69;
            }
            else if (param_3[0x1b] == 3) {
              iVar11 = 0;
              uVar14 = 0x61;
            }
            else {
              iVar11 = param_3[0x1c];
              iVar10 = param_3[0x1f];
              if (DAT_01dc5030 != 0) {
                if (iVar10 == 0) {
                  iVar11 = iVar11 + -1;
                }
                else if ((iVar10 != 1) && (iVar10 == 2)) {
                  iVar11 = iVar11 + 1;
                }
              }
              uVar14 = 0x67;
            }
LAB_00ce87b4:
            FUN_00a30800(puVar9,uVar14,iVar11);
          }
        }
        iVar7 = iVar7 + 1;
        puVar13 = puVar13 + 0x1c;
      } while (iVar7 < iVar8);
    }
  }
  return;
}

// 00CE93D0  cMsgPrimWorkStrip::cMsgPrimWorkStrip  size=999  [class]
void __thiscall
cMsgPrimWorkStrip::cMsgPrimWorkStrip(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int local_b4;
  uint local_b0;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  uint local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  uint local_54;
  undefined4 local_50 [19];
  
  if (3 < *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = 3;
  }
  iVar8 = FUN_00ce6ab0(param_3);
  if (iVar8 != 0) {
    uVar15 = param_3[0x1b];
    puVar9 = param_3;
    puVar10 = local_50;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_00cacde0(local_50,uVar15);
    iVar8 = *(int *)(param_4 + 300);
    iVar14 = *(int *)(param_4 + 0x130) + iVar8;
    if (iVar8 < iVar14) {
      puVar9 = (undefined4 *)(iVar8 * 0x70 + 0x178 + param_4);
      do {
        if ((((-1 < iVar8) && (iVar8 < *(int *)(param_4 + 0x138))) && (puVar9 != (undefined4 *)0x38)
            ) && ((*param_2 != 0 &&
                  (puVar10 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20),
                  puVar10 != (undefined4 *)0x0)))) {
          cMsgPrimWorkBase::cMsgPrimWorkBase();
          *puVar10 = vftable;
          iVar12 = *(int *)(param_1 + 0x2c);
          iVar6 = *(int *)(param_1 + 8) * 2;
          if ((0 < iVar6) && (iVar11 = FUN_00cb0890(param_2,iVar6,iVar6), iVar11 != 0)) {
            puVar10[0x4d] = iVar6;
            puVar10[0x13] = (uint)(iVar12 == 0) * 2 + 5;
            puVar10[0x4c] = 0;
            iVar12 = param_3[0x1b];
            puVar10[0x49] = iVar12;
            puVar10[0x4b] = (uint)(iVar12 == 3);
            FUN_00cb0980(local_50,param_3[0x1a],0);
            FUN_00ce4380(param_4 + 0x5c,param_4 + 0x78);
            uVar15 = param_3[0x1d];
            puVar10[0x16] = *(undefined4 *)(param_4 + 0x134);
            puVar10[0x29] = uVar15;
            puVar10[0x44] = *(undefined4 *)(param_1 + 0x2c);
            uVar15 = *(undefined4 *)(param_1 + 0x30);
            puVar10[0x46] = *(undefined4 *)(param_1 + 0x34);
            puVar10[0x45] = uVar15;
            puVar10[0x48] = param_3[0x20];
            uVar15 = puVar9[-2];
            uVar1 = *puVar9;
            fVar2 = (float)puVar9[-1];
            fVar7 = (float)(*(int *)(param_1 + 8) + -1);
            local_b4 = 0;
            fVar3 = (float)puVar9[1];
            fVar4 = (float)puVar9[-1];
            fVar5 = (float)puVar9[-5];
            if (0 < *(int *)(param_1 + 8)) {
              do {
                iVar12 = *(int *)(param_1 + 0x28);
                local_80 = (*(float *)(iVar12 + 4 + local_b4 * 8) -
                           *(float *)(iVar12 + local_b4 * 8)) * *(float *)(param_1 + 0x24) +
                           *(float *)(iVar12 + local_b4 * 8) + (float)puVar9[-10];
                local_7c = (fVar5 / fVar7) * (float)local_b4 + (float)puVar9[-9];
                local_70 = (float)local_b4 * ((fVar3 - fVar4) / fVar7) + fVar2;
                local_78 = 0;
                local_b0 = (uint)(longlong)ROUND((float)param_3[0x13] * 255.0);
                uVar13 = local_b0 << 8;
                local_b0 = (uint)(longlong)ROUND((float)param_3[0x10] * 255.0);
                uVar13 = uVar13 | local_b0;
                local_b0 = (uint)(longlong)ROUND((float)param_3[0x11] * 255.0);
                uVar13 = uVar13 << 8 | local_b0;
                local_b0 = (uint)(longlong)ROUND((float)param_3[0x12] * 255.0);
                local_6c = uVar13 << 8 | local_b0;
                local_68 = local_80 + (float)puVar9[-6];
                local_60 = 0;
                local_74 = uVar15;
                local_64 = local_7c;
                local_5c = uVar1;
                local_58 = local_70;
                local_54 = local_6c;
                iVar12 = FUN_00cb17f0(&local_80,2);
                if (iVar12 == 0) {
                  return;
                }
                local_b4 = local_b4 + 1;
              } while (local_b4 < *(int *)(param_1 + 8));
            }
            if (param_3[0x1e] == 2) {
              iVar12 = 0;
              uVar15 = 0x3e;
            }
            else if (param_3[0x1e] == 1) {
              iVar12 = param_3[0x1c];
              iVar6 = param_3[0x1f];
              if (DAT_01dc5030 != 0) {
                if (iVar6 == 0) {
                  iVar12 = iVar12 + -1;
                  uVar15 = 0x69;
                  goto LAB_00ce9790;
                }
                if ((iVar6 != 1) && (iVar6 == 2)) {
                  iVar12 = iVar12 + 1;
                }
              }
              uVar15 = 0x69;
            }
            else if (param_3[0x1b] == 3) {
              iVar12 = 0;
              uVar15 = 0x61;
            }
            else {
              iVar12 = param_3[0x1c];
              iVar6 = param_3[0x1f];
              if (DAT_01dc5030 != 0) {
                if (iVar6 == 0) {
                  iVar12 = iVar12 + -1;
                }
                else if ((iVar6 != 1) && (iVar6 == 2)) {
                  iVar12 = iVar12 + 1;
                }
              }
              uVar15 = 0x67;
            }
LAB_00ce9790:
            FUN_00a30800(puVar10,uVar15,iVar12);
          }
        }
        iVar8 = iVar8 + 1;
        puVar9 = puVar9 + 0x1c;
      } while (iVar8 < iVar14);
    }
  }
  return;
}

// 00D202E0  cMsgPrimWorkStrip::cMsgPrimWorkStrip_4  size=1109  [class]
void __thiscall
cMsgPrimWorkStrip::cMsgPrimWorkStrip_4(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 uVar17;
  int local_c8;
  int local_c4;
  uint local_c0;
  int local_b0;
  int *local_ac;
  int local_a4;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  uint local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  uint local_54;
  undefined4 local_50 [19];
  
  iVar8 = FUN_00d1fbf0(param_3);
  if (iVar8 != 0) {
    uVar17 = param_3[0x1b];
    puVar10 = param_3;
    puVar15 = local_50;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar15 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar15 = puVar15 + 1;
    }
    FUN_00cacde0(local_50,uVar17);
    iVar8 = *(int *)(param_4 + 0x108);
    local_a4 = 0;
    if (0 < iVar8) {
      local_b0 = 0;
      do {
        if ((local_a4 < 0) || (*(int *)(param_4 + 0x108) <= local_a4)) {
          local_ac = (int *)0x0;
        }
        else {
          local_ac = (int *)(*(int *)(param_4 + 0x10c) + local_b0);
        }
        iVar14 = *local_ac;
        iVar12 = local_ac[1] + iVar14;
        if (iVar14 < iVar12) {
          iVar9 = iVar14 * 0x70;
          do {
            if ((((-1 < iVar14) && (iVar14 < *(int *)(param_4 + 0x110))) &&
                (iVar16 = *(int *)(param_4 + 0x114) + iVar9, iVar16 != 0)) &&
               ((*param_2 != 0 &&
                (puVar10 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20),
                puVar10 != (undefined4 *)0x0)))) {
              cMsgPrimWorkBase::cMsgPrimWorkBase();
              *puVar10 = vftable;
              iVar6 = *(int *)(param_1 + 8) * 2;
              if ((0 < iVar6) && (iVar11 = FUN_00cb0890(param_2,iVar6,iVar6), iVar11 != 0)) {
                puVar10[0x4d] = iVar6;
                puVar10[0x13] = 0;
                puVar10[0x4c] = 0;
                iVar6 = param_3[0x1b];
                puVar10[0x49] = iVar6;
                puVar10[0x4b] = (uint)(iVar6 == 3);
                FUN_00cb0980(param_3,param_3[0x1a],0);
                FUN_00ce4380(param_4 + 0x34,param_4 + 0x50);
                uVar17 = param_3[0x1d];
                puVar10[0x16] = local_ac[2];
                puVar10[0x29] = uVar17;
                uVar17 = *(undefined4 *)(iVar16 + 0x30);
                uVar1 = *(undefined4 *)(iVar16 + 0x38);
                fVar2 = *(float *)(iVar16 + 0x34);
                fVar7 = (float)(*(int *)(param_1 + 8) + -1);
                local_c4 = 0;
                fVar3 = *(float *)(iVar16 + 0x3c);
                fVar4 = *(float *)(iVar16 + 0x34);
                fVar5 = *(float *)(iVar16 + 0x24);
                if (0 < *(int *)(param_1 + 8)) {
                  do {
                    iVar6 = *(int *)(param_1 + 0x28);
                    local_80 = (*(float *)(iVar6 + 4 + local_c4 * 8) -
                               *(float *)(iVar6 + local_c4 * 8)) * *(float *)(param_1 + 0x24) +
                               *(float *)(iVar6 + local_c4 * 8) + *(float *)(iVar16 + 0x10);
                    local_7c = (fVar5 / fVar7) * (float)local_c4 + *(float *)(iVar16 + 0x14);
                    local_70 = (float)local_c4 * ((fVar3 - fVar4) / fVar7) + fVar2;
                    local_78 = 0;
                    local_c0 = (uint)(longlong)ROUND((float)param_3[0x13] * 255.0);
                    uVar13 = local_c0 << 8;
                    local_c0 = (uint)(longlong)ROUND((float)param_3[0x10] * 255.0);
                    uVar13 = uVar13 | local_c0;
                    local_c0 = (uint)(longlong)ROUND((float)param_3[0x11] * 255.0);
                    uVar13 = uVar13 << 8 | local_c0;
                    local_c0 = (uint)(longlong)ROUND((float)param_3[0x12] * 255.0);
                    local_6c = uVar13 << 8 | local_c0;
                    local_68 = *(float *)(iVar16 + 0x20) + local_80;
                    local_60 = 0;
                    if ((int)puVar10[0x4d] < puVar10[0x4c] + 2) {
                      return;
                    }
                    if (puVar10[0x14] == 0) {
                      return;
                    }
                    if (puVar10[0x15] == 0) {
                      return;
                    }
                    local_74 = uVar17;
                    local_64 = local_7c;
                    local_5c = uVar1;
                    local_58 = local_70;
                    local_54 = local_6c;
                    FID_conflict__memcpy
                              ((void *)(puVar10[0x14] + puVar10[0x4c] * 0x18),&local_80,0x30);
                    local_c8 = 0;
                    do {
                      *(short *)(puVar10[0x15] + (puVar10[0x4c] + local_c8) * 2) =
                           *(short *)(puVar10 + 0x4c) + (short)local_c8;
                      local_c8 = local_c8 + 1;
                    } while (local_c8 < 2);
                    puVar10[0x4c] = puVar10[0x4c] + 2;
                    local_c4 = local_c4 + 1;
                  } while (local_c4 < *(int *)(param_1 + 8));
                }
                if (param_3[0x1e] == 2) {
                  iVar16 = 0;
                  uVar17 = 0x3e;
                }
                else if (param_3[0x1e] == 1) {
                  iVar16 = param_3[0x1c];
                  iVar6 = param_3[0x1f];
                  if (DAT_01dc5030 != 0) {
                    if (iVar6 == 0) {
                      iVar16 = iVar16 + -1;
                      uVar17 = 0x69;
                      goto LAB_00d206f0;
                    }
                    if ((iVar6 != 1) && (iVar6 == 2)) {
                      iVar16 = iVar16 + 1;
                    }
                  }
                  uVar17 = 0x69;
                }
                else if (param_3[0x1b] == 3) {
                  iVar16 = 0;
                  uVar17 = 0x61;
                }
                else {
                  iVar16 = param_3[0x1c];
                  iVar6 = param_3[0x1f];
                  if (DAT_01dc5030 != 0) {
                    if (iVar6 == 0) {
                      iVar16 = iVar16 + -1;
                    }
                    else if ((iVar6 != 1) && (iVar6 == 2)) {
                      iVar16 = iVar16 + 1;
                    }
                  }
                  uVar17 = 0x67;
                }
LAB_00d206f0:
                FUN_00a30800(puVar10,uVar17,iVar16);
              }
            }
            iVar14 = iVar14 + 1;
            iVar9 = iVar9 + 0x70;
          } while (iVar14 < iVar12);
        }
        local_b0 = local_b0 + 0xc;
        local_a4 = local_a4 + 1;
      } while (local_a4 < iVar8);
    }
  }
  return;
}

// 00D20740  cMsgPrimWorkStrip::cMsgPrimWorkStrip_5  size=1289  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
cMsgPrimWorkStrip::cMsgPrimWorkStrip_5(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  int local_c8;
  int local_c4;
  uint local_c0;
  int local_b8;
  int local_b4;
  int *local_b0;
  int local_a8;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  uint local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  uint local_54;
  undefined4 local_50 [19];
  
  if (3 < *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 8) = 3;
  }
  uVar17 = param_3[0x1b];
  puVar10 = param_3;
  puVar16 = local_50;
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar16 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar16 = puVar16 + 1;
  }
  FUN_00cacde0(local_50,uVar17);
  iVar12 = FUN_00d1fbf0(param_3);
  if (iVar12 != 0) {
    iVar12 = *(int *)(param_4 + 0x108);
    local_a8 = 0;
    if (0 < iVar12) {
      local_b8 = 0;
      do {
        if ((local_a8 < 0) || (*(int *)(param_4 + 0x108) <= local_a8)) {
          local_b0 = (int *)0x0;
        }
        else {
          local_b0 = (int *)(*(int *)(param_4 + 0x10c) + local_b8);
        }
        iVar15 = *local_b0;
        iVar13 = local_b0[1] + iVar15;
        if (iVar15 < iVar13) {
          local_b4 = iVar15 * 0x70;
          do {
            if ((((-1 < iVar15) && (iVar15 < *(int *)(param_4 + 0x110))) &&
                (iVar9 = *(int *)(param_4 + 0x114) + local_b4, iVar9 != 0)) &&
               ((*param_2 != 0 &&
                (puVar10 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20),
                puVar10 != (undefined4 *)0x0)))) {
              cMsgPrimWorkBase::cMsgPrimWorkBase();
              *puVar10 = vftable;
              iVar6 = *(int *)(param_1 + 0x2c);
              iVar7 = *(int *)(param_1 + 8) * 2;
              if ((0 < iVar7) && (iVar11 = FUN_00cb0890(param_2,iVar7,iVar7), iVar11 != 0)) {
                puVar10[0x4d] = iVar7;
                puVar10[0x13] = (uint)(iVar6 == 0) * 2 + 5;
                puVar10[0x4c] = 0;
                iVar6 = param_3[0x1b];
                puVar10[0x49] = iVar6;
                puVar10[0x4b] = (uint)(iVar6 == 3);
                FUN_00cb0980(local_50,param_3[0x1a],0);
                FUN_00ce4380(param_4 + 0x34,param_4 + 0x50);
                uVar17 = param_3[0x1d];
                puVar10[0x16] = local_b0[2];
                puVar10[0x29] = uVar17;
                puVar10[0x44] = *(undefined4 *)(param_1 + 0x2c);
                uVar17 = *(undefined4 *)(param_1 + 0x34);
                puVar10[0x45] = *(undefined4 *)(param_1 + 0x30);
                puVar10[0x46] = uVar17;
                puVar10[0x48] = param_3[0x20];
                puVar10[0x47] = 0;
                puVar10[0x40] = 0x3f800000;
                puVar10[0x41] = 0x3f800000;
                puVar10[0x42] = 0x3f800000;
                puVar10[0x43] = 0x3f800000;
                uVar17 = _DAT_018d5df0;
                if ((param_3[0x1e] == 2) && ((DAT_01bea070._3_1_ & 1) == 0)) {
                  puVar10[0x40] = _DAT_018d5df0;
                  puVar10[0x41] = uVar17;
                  puVar10[0x42] = uVar17;
                  puVar10[0x43] = 0x3f800000;
                  puVar10[0x47] = 1;
                }
                uVar17 = *(undefined4 *)(iVar9 + 0x30);
                uVar1 = *(undefined4 *)(iVar9 + 0x38);
                fVar2 = *(float *)(iVar9 + 0x34);
                fVar8 = (float)(*(int *)(param_1 + 8) + -1);
                local_c4 = 0;
                fVar3 = *(float *)(iVar9 + 0x3c);
                fVar4 = *(float *)(iVar9 + 0x34);
                fVar5 = *(float *)(iVar9 + 0x24);
                if (0 < *(int *)(param_1 + 8)) {
                  do {
                    iVar6 = *(int *)(param_1 + 0x28);
                    local_80 = (*(float *)(iVar6 + 4 + local_c4 * 8) -
                               *(float *)(iVar6 + local_c4 * 8)) * *(float *)(param_1 + 0x24) +
                               *(float *)(iVar6 + local_c4 * 8) + *(float *)(iVar9 + 0x10);
                    local_7c = (fVar5 / fVar8) * (float)local_c4 + *(float *)(iVar9 + 0x14);
                    local_70 = (float)local_c4 * ((fVar3 - fVar4) / fVar8) + fVar2;
                    local_78 = 0;
                    local_c0 = (uint)(longlong)ROUND((float)param_3[0x13] * 255.0);
                    uVar14 = local_c0 << 8;
                    local_c0 = (uint)(longlong)ROUND((float)param_3[0x10] * 255.0);
                    uVar14 = uVar14 | local_c0;
                    local_c0 = (uint)(longlong)ROUND((float)param_3[0x11] * 255.0);
                    uVar14 = uVar14 << 8 | local_c0;
                    local_c0 = (uint)(longlong)ROUND((float)param_3[0x12] * 255.0);
                    local_6c = uVar14 << 8 | local_c0;
                    local_68 = *(float *)(iVar9 + 0x20) + local_80;
                    local_60 = 0;
                    if ((int)puVar10[0x4d] < puVar10[0x4c] + 2) {
                      return;
                    }
                    if (puVar10[0x14] == 0) {
                      return;
                    }
                    if (puVar10[0x15] == 0) {
                      return;
                    }
                    local_74 = uVar17;
                    local_64 = local_7c;
                    local_5c = uVar1;
                    local_58 = local_70;
                    local_54 = local_6c;
                    FID_conflict__memcpy
                              ((void *)(puVar10[0x14] + puVar10[0x4c] * 0x18),&local_80,0x30);
                    local_c8 = 0;
                    do {
                      *(short *)(puVar10[0x15] + (puVar10[0x4c] + local_c8) * 2) =
                           *(short *)(puVar10 + 0x4c) + (short)local_c8;
                      local_c8 = local_c8 + 1;
                    } while (local_c8 < 2);
                    puVar10[0x4c] = puVar10[0x4c] + 2;
                    local_c4 = local_c4 + 1;
                  } while (local_c4 < *(int *)(param_1 + 8));
                }
                if (param_3[0x1e] == 2) {
                  iVar9 = 0;
                  uVar17 = 0x3e;
                }
                else if (param_3[0x1e] == 1) {
                  iVar9 = param_3[0x1c];
                  iVar6 = param_3[0x1f];
                  if (DAT_01dc5030 != 0) {
                    if (iVar6 == 0) {
                      iVar9 = iVar9 + -1;
                      uVar17 = 0x69;
                      goto LAB_00d20c0c;
                    }
                    if ((iVar6 != 1) && (iVar6 == 2)) {
                      iVar9 = iVar9 + 1;
                    }
                  }
                  uVar17 = 0x69;
                }
                else if (param_3[0x1b] == 3) {
                  iVar9 = 0;
                  uVar17 = 0x61;
                }
                else {
                  iVar9 = param_3[0x1c];
                  iVar6 = param_3[0x1f];
                  if (DAT_01dc5030 != 0) {
                    if (iVar6 == 0) {
                      iVar9 = iVar9 + -1;
                    }
                    else if ((iVar6 != 1) && (iVar6 == 2)) {
                      iVar9 = iVar9 + 1;
                    }
                  }
                  uVar17 = 0x67;
                }
LAB_00d20c0c:
                FUN_00a30800(puVar10,uVar17,iVar9);
              }
            }
            local_b4 = local_b4 + 0x70;
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar13);
        }
        local_b8 = local_b8 + 0xc;
        local_a8 = local_a8 + 1;
      } while (local_a8 < iVar12);
    }
  }
  return;
}

