// src/phase/app/pf13.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D476C0..00D70CA0, 7 functions

#include "mgrr.h"
#include "Pf13.h"

// 00D476C0  Pf13::vf1C  size=3  [class]
void Pf13::vf1C(void)

{
  return;
}

// 00D476D0  Pf13::vf0C  size=1  [class]
void Pf13::vf0C(void)

{
  return;
}

// 00D476E0  Pf13::vf10  size=24  [class]
void Pf13::vf10(void)

{
  FUN_00900ca0();
  FUN_00c81b80(0xf);
  return;
}

// 00D50E90  Pf13::vf14  size=789  [class]
void __thiscall Pf13::vf14(int param_1,undefined4 param_2,byte *param_3,undefined4 param_4)

{
  float fVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  
  *(undefined4 *)(param_1 + 0x134) = param_4;
  pcVar8 = "gekko_bt_start";
  pbVar3 = param_3;
  do {
    bVar2 = *pbVar3;
    bVar10 = bVar2 < (byte)*pcVar8;
    if (bVar2 != *pcVar8) {
LAB_00d50ed0:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d50ed5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar10 = bVar2 < (byte)pcVar8[1];
    if (bVar2 != pcVar8[1]) goto LAB_00d50ed0;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00d50ed5:
  if (iVar4 == 0) {
    FUN_00c81b30(0xf);
    FUN_009453f0(0,1);
  }
  pcVar8 = "cyborg_bt_start";
  pbVar3 = param_3;
  do {
    bVar2 = *pbVar3;
    bVar10 = bVar2 < (byte)*pcVar8;
    if (bVar2 != *pcVar8) {
LAB_00d50f20:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d50f25;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar10 = bVar2 < (byte)pcVar8[1];
    if (bVar2 != pcVar8[1]) goto LAB_00d50f20;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00d50f25:
  if (iVar4 == 0) {
    iVar9 = 0;
    iVar4 = FUN_00a7f860();
    if (0 < iVar4) {
      do {
        iVar4 = FUN_00a7f870(iVar9);
        if (((iVar4 != 0) && (iVar5 = FUN_00a7c7e0(), iVar5 != 0)) &&
           ((*(byte *)(iVar4 + 0x28) & 2) == 0)) {
          piVar6 = (int *)FUN_00a7c8a0();
          iVar4 = FUN_009f9460(piVar6[300]);
          if ((((iVar4 != 0) || (iVar4 = FUN_009f94a0(piVar6[300]), iVar4 != 0)) ||
              (iVar4 = FUN_009f9480(piVar6[300]), iVar4 != 0)) &&
             (pfVar7 = (float *)FUN_00a7c8b0(), 610.0 < *pfVar7)) {
            iVar4 = FUN_00a7c8b0();
            fVar1 = *(float *)(iVar4 + 8);
            if (((NAN(fVar1) || -390.0 < fVar1 == (fVar1 == -390.0)) &&
                (iVar4 = piVar6[300], iVar4 != 0xd0200)) &&
               ((iVar4 != 0xd0201 && (iVar4 != 0xe0187)))) {
              (**(code **)(*piVar6 + 0x20))();
            }
          }
        }
        iVar9 = iVar9 + 1;
        iVar4 = FUN_00a7f860();
      } while (iVar9 < iVar4);
    }
  }
  pcVar8 = "cyborg_bt";
  pbVar3 = param_3;
  do {
    bVar2 = *pbVar3;
    bVar10 = bVar2 < (byte)*pcVar8;
    if (bVar2 != *pcVar8) {
LAB_00d51040:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d51045;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar10 = bVar2 < (byte)pcVar8[1];
    if (bVar2 != pcVar8[1]) goto LAB_00d51040;
    pbVar3 = pbVar3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00d51045:
  if (iVar4 == 0) {
    iVar9 = 0;
    iVar4 = FUN_00a7f860();
    if (0 < iVar4) {
      do {
        iVar4 = FUN_00a7f870(iVar9);
        if (((iVar4 != 0) && (iVar5 = FUN_00a7c7e0(), iVar5 != 0)) &&
           ((*(byte *)(iVar4 + 0x28) & 2) == 0)) {
          piVar6 = (int *)FUN_00a7c8a0();
          iVar4 = FUN_009f9460(piVar6[300]);
          if ((((iVar4 != 0) || (iVar4 = FUN_009f94a0(piVar6[300]), iVar4 != 0)) ||
              (iVar4 = FUN_009f9480(piVar6[300]), iVar4 != 0)) &&
             (pfVar7 = (float *)FUN_00a7c8b0(), 610.0 < *pfVar7)) {
            iVar4 = FUN_00a7c8b0();
            fVar1 = *(float *)(iVar4 + 8);
            if (((NAN(fVar1) || -390.0 < fVar1 == (fVar1 == -390.0)) &&
                (iVar4 = piVar6[300], iVar4 != 0xd0200)) &&
               ((iVar4 != 0xd0201 && (iVar4 != 0xe0187)))) {
              (**(code **)(*piVar6 + 0x1c))();
            }
          }
        }
        iVar9 = iVar9 + 1;
        iVar4 = FUN_00a7f860();
      } while (iVar9 < iVar4);
    }
  }
  pcVar8 = "cyborg_bt_tutorial";
  do {
    bVar2 = *param_3;
    bVar10 = bVar2 < (byte)*pcVar8;
    if (bVar2 != *pcVar8) {
LAB_00d51160:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00d51165;
    }
    if (bVar2 == 0) break;
    bVar2 = param_3[1];
    bVar10 = bVar2 < (byte)pcVar8[1];
    if (bVar2 != pcVar8[1]) goto LAB_00d51160;
    param_3 = param_3 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_00d51165:
  if (iVar4 == 0) {
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    FUN_00dc1270(0x43070000,1);
    *(undefined4 *)(param_1 + 300) = 0x40100000;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}

// 00D5FEE0  Pf13::vf08  size=1102  [class]
void __fastcall Pf13::vf08(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iStack_144;
  int iStack_140;
  int *local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_ec [232];
  
  FUN_00c81b80(0xf);
  *(undefined4 *)(param_1 + 0x138) = 0;
  FUN_004066f0();
  local_13c = (int *)0x0;
  piVar3 = (int *)FUN_00c14bb0();
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(&local_13c,0x121);
  if (((puVar4 != (undefined4 *)0x0) && (iStack_144 != 0)) && (iStack_140 = 0, 0 < iStack_144)) {
    local_13c = (int *)(param_1 + 0x11c);
    do {
      iVar7 = 0;
      iVar5 = (**(code **)(*(int *)*puVar4 + 0xc))();
      if (0 < iVar5) {
        do {
          piVar3 = (int *)(**(code **)(*(int *)*puVar4 + 0x14))(auStack_ec,iVar7);
          iVar5 = FUN_00fdbbd0(*(uint *)(*piVar3 + 0x78) & 0xfffffffe,"wheel");
          if (iVar5 != 0) {
            piVar3 = (int *)(**(code **)(*(int *)*puVar4 + 0x14))(&uStack_f8,iVar7);
            iVar5 = *piVar3;
            FUN_0118f7b0();
            FUN_0119fa20(&uStack_f8);
            uStack_110 = 0;
            uStack_114 = 0;
            uStack_118 = 0;
            uVar8 = uStack_f8 >> 0x10;
            uStack_11c = 0;
            uStack_124 = 0;
            uStack_128 = 0;
            uStack_12c = 0;
            uStack_130 = 0;
            uStack_138 = 0;
            local_13c = (int *)0x0;
            iStack_140 = 0;
            iStack_144 = 0;
            uStack_10c = 0x3f800000;
            uStack_120 = 0x3f800000;
            uStack_134 = 0x3f800000;
            FUN_01006000();
            uVar2 = uStack_f4;
            piVar3 = (int *)FUN_00900480();
            iVar7 = (**(code **)(*piVar3 + 0x10))(uVar2,&stack0xfffffeb8,0x1c,uVar8,0);
            lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar7);
            FUN_009009c0("breakWheel");
            FUN_00900bd0();
            uVar8 = 0;
            if (iVar5 != 0) {
              uVar8 = *(uint *)(iVar5 + 0xc);
              if (uVar8 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(uint *)((-(uint)(uVar8 != 0) & uVar8) + 0x30);
              }
            }
            if (iVar7 == 0) {
LAB_00d60137:
              if (DAT_01885d68 != 1) {
                iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
                if ((*(int *)(iVar5 + 4) == 0) && (DAT_01b35fac != 0)) {
                  if (DAT_01885db8 == 0) {
                    FUN_00dd72e0();
                  }
                  else {
                    FUN_00dd5650(&DAT_0163b898);
                  }
                }
                piVar3 = (int *)(iVar5 + 4);
                *piVar3 = *piVar3 + 1;
              }
            }
            else {
              if (DAT_01885d68 != 1) {
                iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
                if ((*(int *)(iVar5 + 4) == 0) && (DAT_01b35fac != 0)) {
                  if (DAT_01885db8 == 0) {
                    FUN_00dd72e0();
                  }
                  else {
                    FUN_00dd5650(&DAT_0163b898);
                  }
                }
                piVar3 = (int *)(iVar5 + 4);
                *piVar3 = *piVar3 + 1;
              }
              puVar6 = (uint *)(-(uint)(*(uint *)(iVar7 + 0xc) != 0) & *(uint *)(iVar7 + 0xc));
              *puVar6 = *puVar6 | 0x400;
              puVar6[0xc] = uVar8;
              if (DAT_01885d68 != 1) {
                piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
                *piVar3 = *piVar3 + -1;
                if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                  FUN_00dd7320();
                }
                goto LAB_00d60137;
              }
            }
            if ((iVar7 == 0) || (uVar8 = *(uint *)(iVar7 + 0xc), uVar8 == 0)) {
              if (DAT_01885d68 != 1) {
                iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
                goto LAB_00d601e4;
              }
            }
            else {
              puVar6 = (uint *)(-(uint)(uVar8 != 0) & uVar8);
              *puVar6 = *puVar6 | 0x400;
              puVar6[0xc] = puVar6[0xc] & 0xfffffffb;
              if (DAT_01885d68 != 1) {
                iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_00d601e4:
                piVar3 = (int *)(iVar5 + 4);
                *piVar3 = *piVar3 + -1;
                piVar1 = (int *)(iVar5 + 4);
                if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
                  FUN_00dd7320();
                }
                if (DAT_01885d68 != 1) {
                  if ((*piVar1 == 0) && (DAT_01b35fac != 0)) {
                    if (DAT_01885db8 == 0) {
                      FUN_00dd72e0();
                    }
                    else {
                      FUN_00dd5650(&DAT_0163b898);
                    }
                  }
                  *piVar1 = *piVar1 + 1;
                }
              }
            }
            if ((iVar7 == 0) || (uVar8 = *(uint *)(iVar7 + 0xc), uVar8 == 0)) {
              if (DAT_01885d68 == 1) break;
              iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
            }
            else {
              puVar6 = (uint *)(-(uint)(uVar8 != 0) & uVar8);
              *puVar6 = *puVar6 | 0x400;
              puVar6[0xc] = puVar6[0xc] | 5;
              if (DAT_01885d68 == 1) break;
              iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
            }
            piVar3 = (int *)(iVar5 + 4);
            *piVar3 = *piVar3 + -1;
            if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
            break;
          }
          iVar7 = iVar7 + 1;
          iVar5 = (**(code **)(*(int *)*puVar4 + 0xc))();
        } while (iVar7 < iVar5);
      }
      if (*local_13c != 0) break;
      iStack_140 = iStack_140 + 1;
      puVar4 = puVar4 + 1;
    } while (iStack_140 < iStack_144);
  }
  if (DAT_01885d68 != 1) {
    piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar3 = *piVar3 + -1;
    if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00D70720  Pf13::vf00  size=54  [class]
undefined4 * __thiscall Pf13::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D70CA0  Pf13::vf18  size=1065  [class]
void __fastcall Pf13::vf18(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  float10 fVar13;
  int iStack_214;
  undefined1 auStack_204 [4];
  uint uStack_200;
  uint uStack_1fc;
  uint uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined1 auStack_1c8 [24];
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  undefined1 auStack_190 [396];
  
  iVar6 = FUN_00e03ea0("cyborg_bt");
  if (((DAT_018b9178 == iVar6) || (iVar6 = FUN_00e03ea0("gekko_bt"), DAT_018b9178 == iVar6)) &&
     (iVar6 = FUN_00a7f600(0xd013d), iVar6 == 0)) {
    iVar6 = FUN_00a7f600(0xe0069);
    if (iVar6 != 0) {
      FUN_00a805f0();
    }
    piVar7 = (int *)FUN_00c14bb0();
    iVar6 = (**(code **)(*piVar7 + 0x20))("bld_densen1",0x121);
    if (iVar6 != 0) {
      piVar7 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar7 + 0x20))();
    }
  }
  if (((1.0 < *(float *)(param_1 + 0x130)) &&
      (iVar6 = FUN_00e03ea0("cyborg_bt_start"), DAT_018b9178 != iVar6)) &&
     ((iVar6 = FUN_00e03ea0("gekko_bt_start"), DAT_018b9178 != iVar6 &&
      ((*(int *)(param_1 + 0x138) == 0 && (iVar6 = FUN_00a7f600(0xe0187), iVar6 != 0)))))) {
    uVar8 = FUN_00a7c8a0();
    iVar6 = FUN_00d4c910(uVar8);
    if ((iVar6 != 0) && (((*(byte *)(iVar6 + 0x4c0) & 1) != 0 && (*(int *)(iVar6 + 0x878) != 0)))) {
      FUN_004066f0();
      puStack_1a0 = auStack_190;
      uStack_1ac = 0x7f7fffee;
      ppuStack_1b0 = hkpAllCdPointCollector::vftable;
      uStack_198 = 0x80000008;
      iStack_19c = 0;
      FUN_00900350(&ppuStack_1b0);
      puVar11 = puStack_1a0;
      if (puStack_1a0 != puStack_1a0 + iStack_19c * 0x30) {
LAB_00d70e40:
        piVar7 = (int *)FUN_008f7780((int)*(char *)(*(int *)(puVar11 + 0x28) + 0x10) +
                                     *(int *)(puVar11 + 0x28));
        if ((piVar7 == (int *)0x0) || (piVar7[300] != 0xe0187)) goto LAB_00d70e64;
        iVar6 = (**(code **)(*(int *)piVar7[0x1ec] + 0xc))();
        if (0 < iVar6) {
          do {
            piVar9 = (int *)(**(code **)(*(int *)piVar7[0x1ec] + 0x14))(auStack_204,0);
            iVar6 = *piVar9;
            uVar12 = uStack_200 | 0x100000;
            puVar10 = (uint *)(**(code **)(*piVar7 + 0x68))();
            uStack_1e8 = *puVar10;
            uStack_1e4 = puVar10[1];
            uStack_1e0 = puVar10[2];
            puVar10 = (uint *)FUN_00a925a0(auStack_1c8);
            uVar1 = *puVar10;
            uVar2 = puVar10[1];
            uVar3 = puVar10[2];
            if ((iVar6 != 0) && (uVar5 = *(uint *)(iVar6 + 0xc), uVar5 != 0)) {
              puVar10 = (uint *)(-(uint)(uVar5 != 0) & uVar5);
              *puVar10 = *puVar10 | 0x80000;
              puVar10[0x15] = 0x18e;
              *puVar10 = *puVar10 | 0x100000;
              puVar10[0x16] = 0x47c34f80;
              *puVar10 = *puVar10 | 0x800000;
              puVar10[0x19] = 100;
              *puVar10 = *puVar10 | 0x200000;
              puVar10[0x17] = uVar12;
              *puVar10 = *puVar10 | 0x400000;
              puVar10[0x18] = uStack_1fc;
              *puVar10 = *puVar10 | 0x1000000;
              puVar10[0x1a] = uStack_1e8;
              *puVar10 = *puVar10 | 0x2000000;
              puVar10[0x1b] = uStack_1e4;
              *puVar10 = *puVar10 | 0x4000000;
              puVar10[0x1c] = uStack_1e0;
              *puVar10 = *puVar10 | 0x8000000;
              puVar10[0x1d] = uVar1;
              *puVar10 = *puVar10 | 0x10000000;
              puVar10[0x1e] = uVar2;
              *puVar10 = *puVar10 | 0x20000000;
              puVar10[0x1f] = uVar3;
            }
            iStack_214 = iStack_214 + 1;
            iVar6 = (**(code **)(*(int *)piVar7[0x1ec] + 0xc))();
          } while (iStack_214 < iVar6);
        }
        *(undefined4 *)(param_1 + 0x138) = 1;
      }
LAB_00d70fff:
      hkpCdPointCollector::hkpCdPointCollector();
      if (DAT_01885d68 != 1) {
        piVar7 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar7 = *piVar7 + -1;
        if (((*piVar7 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
  }
  if (0.0 < *(float *)(param_1 + 300)) {
    fVar4 = *(float *)(param_1 + 300);
    fVar13 = (float10)FUN_00e03a90(0);
    fVar13 = (float10)fVar4 - fVar13 * (float10)0.016666668;
    *(float *)(param_1 + 300) = (float)fVar13;
    if (fVar13 <= (float10)0) {
      *(float *)(param_1 + 300) = (float)(float10)0;
      DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
    }
  }
  fVar13 = (float10)FUN_00e03a90(0);
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(float *)(param_1 + 0x130) =
       (float)(fVar13 * (float10)0.016666668 + (float10)*(float *)(param_1 + 0x130));
  return;
LAB_00d70e64:
  puVar11 = puVar11 + 0x30;
  if (puVar11 == puStack_1a0 + iStack_19c * 0x30) goto LAB_00d70fff;
  goto LAB_00d70e40;
}

