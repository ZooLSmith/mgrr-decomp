// src/misc/KogekkoWallContents.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DD6B0..008DF500, 8 functions

#include "mgrr.h"
#include "KogekkoWallContents.h"

// 008DD6B0  KogekkoWallContents::KogekkoWallContents  size=54  [class]
undefined4 * __thiscall
KogekkoWallContents::KogekkoWallContents(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  *param_1 = vftable;
  FUN_00a7c930();
  param_1[6] = 0;
  param_1[0x10] = 0;
  return param_1;
}

// 008DD6F0  KogekkoWallContents::vf00  size=6  [class]
undefined * KogekkoWallContents::vf00(void)

{
  return &DAT_01b35d80;
}

// 008DD700  KogekkoWallContents::vf04  size=31  [class]
undefined4 * __thiscall KogekkoWallContents::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = ContentsBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DDE10  FUN_008dde10  size=805  [callgraph]
void __fastcall FUN_008dde10(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int local_d8 [2];
  undefined1 auStack_d0 [64];
  undefined4 auStack_90 [20];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = FUN_00a00ca0(0x20040,0);
  if ((iVar1 != 0) && (local_d8[0] = FUN_00a81330(), local_d8[0] != 0)) {
    FUN_00a7c8a0();
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 5) {
      piVar2 = (int *)FUN_00a7c8a0();
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x84))();
      *(undefined4 *)(param_1 + 0x20) = *puVar3;
      *(undefined4 *)(param_1 + 0x24) = puVar3[1];
      *(undefined4 *)(param_1 + 0x28) = puVar3[2];
      *(undefined4 *)(param_1 + 0x2c) = puVar3[3];
      iVar1 = FUN_00a7c8a0();
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x4c);
      iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 4);
      if (iVar1 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 + iVar1) {
        puVar3 = (undefined4 *)(iVar1 + 0x14);
        do {
          iVar4 = FUN_00a81330();
          if (iVar4 == 0) {
            FUN_00a7c8a0();
            iVar4 = FUN_00a12210(puVar3[-4]);
            puVar3[-1] = *(undefined4 *)(iVar4 + 0x40);
            *puVar3 = *(undefined4 *)(iVar4 + 0x44);
            puVar3[1] = *(undefined4 *)(iVar4 + 0x48);
            puVar3[2] = *(undefined4 *)(iVar4 + 0x4c);
            iVar4 = FUN_00a12210(puVar3[-4]);
            puVar3[3] = *(undefined4 *)(iVar4 + 0x90);
            puVar3[4] = *(undefined4 *)(iVar4 + 0x94);
            puVar3[5] = *(undefined4 *)(iVar4 + 0x98);
            puVar3[6] = *(undefined4 *)(iVar4 + 0x9c);
            iVar4 = FUN_00a12210(puVar3[-4]);
            puVar7 = (undefined4 *)(iVar4 + 0x10);
            puVar9 = puVar3 + 7;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            FUN_0040b190();
            uStack_40 = puVar3[-1];
            uStack_3c = *puVar3;
            uStack_38 = puVar3[1];
            auStack_90[0] = 6;
            uStack_34 = puVar3[3];
            uStack_30 = puVar3[4];
            uStack_2c = puVar3[5];
            uVar5 = FUN_00a82090("kogekkoWall",0x20040,auStack_90);
            uVar5 = FUN_00a7f290(uVar5);
            FUN_00a7c960(uVar5);
            piVar2 = (int *)FUN_00a7c8a0();
            if (piVar2 != (int *)0x0) {
              puVar10 = &DAT_01be9d00;
              (**(code **)(*piVar2 + 4))(&DAT_01be9d00);
              iVar4 = FUN_00dd6d80(puVar10);
              if (iVar4 != 0) {
                iVar4 = FUN_00a12210(0);
                puVar7 = puVar3 + 7;
                puVar9 = (undefined4 *)(iVar4 + 0x10);
                for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar9 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar9 = puVar9 + 1;
                }
                iVar4 = FUN_00a12210(0);
                *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) | 4;
                piVar8 = piVar2 + 0x2c;
                piVar2[0x3a] = 0;
                piVar2[0x39] = 0;
                piVar2[0x38] = 0;
                piVar2[0x37] = 0;
                piVar2[0x35] = 0;
                piVar2[0x34] = 0;
                piVar2[0x33] = 0;
                piVar2[0x32] = 0;
                piVar2[0x30] = 0;
                piVar2[0x2f] = 0;
                piVar2[0x2e] = 0;
                piVar2[0x2d] = 0;
                piVar2[0x3b] = 0x3f800000;
                piVar2[0x36] = 0x3f800000;
                piVar2[0x31] = 0x3f800000;
                *piVar8 = 0x3f800000;
                if (*(float *)(param_1 + 0x28) != 0.0) {
                  D3DXMatrixRotationZ(auStack_d0,*(undefined4 *)(param_1 + 0x28));
                  D3DXMatrixMultiply(piVar8,local_d8,piVar8);
                }
                if (*(float *)(param_1 + 0x24) != 0.0) {
                  D3DXMatrixRotationY(auStack_d0,*(undefined4 *)(param_1 + 0x24));
                  D3DXMatrixMultiply(piVar8,local_d8,piVar8);
                }
                if (*(float *)(param_1 + 0x20) != 0.0) {
                  D3DXMatrixRotationX(auStack_d0,*(undefined4 *)(param_1 + 0x20));
                  D3DXMatrixMultiply(piVar8,local_d8,piVar8);
                }
              }
            }
          }
          iVar1 = iVar1 + 0x70;
          puVar3 = puVar3 + 0x1c;
        } while (iVar1 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 +
                          *(int *)(*(int *)(param_1 + 0x40) + 4));
      }
      if (*(int *)(param_1 + 0xc) != 1) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
      }
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
  }
  return;
}

// 008DE140  FUN_008de140  size=1388  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008de140(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined *puVar13;
  int local_100;
  float local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  local_100 = 5;
  local_fc = 5.60519e-45;
  local_f8 = 0x12;
  local_f4 = 0x11;
  local_f0 = 6;
  local_ec = 0x10;
  sVar5 = FUN_00dde2d0(0,5);
  if ((DAT_01b7b914 & 0x800) != 0) {
    iVar11 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    if (iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 + iVar11) {
      do {
        iVar6 = FUN_00a81330();
        if ((iVar6 != 0) && (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) {
          puVar13 = &DAT_01be9d00;
          (**(code **)(*piVar7 + 4))(&DAT_01be9d00);
          iVar6 = FUN_00dd6d80(puVar13);
          if (iVar6 != 0) {
            FUN_00b1fb10(0);
          }
        }
        iVar11 = iVar11 + 0x70;
      } while (iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 +
                         *(int *)(*(int *)(param_1 + 0x40) + 4));
    }
    iVar11 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    if (iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 + iVar11) {
      iVar6 = (&local_100)[sVar5];
      do {
        if (((*(int *)(iVar11 + 4) == iVar6) && (iVar8 = FUN_00a81330(), iVar8 != 0)) &&
           (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) {
          puVar13 = &DAT_01be9d00;
          (**(code **)(*piVar7 + 4))(&DAT_01be9d00);
          iVar8 = FUN_00dd6d80(puVar13);
          if (iVar8 != 0) {
            FUN_00b1fb10(1);
            break;
          }
        }
        iVar11 = iVar11 + 0x70;
      } while (iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 +
                         *(int *)(*(int *)(param_1 + 0x40) + 4));
    }
    piVar7 = (int *)FUN_00c13920();
    iVar11 = (**(code **)(*piVar7 + 0x28))(0);
    if ((iVar11 != 0) &&
       (iVar11 = FUN_00a7c8a0(), fVar3 = *(float *)(iVar11 + 0x40) - *(float *)(param_1 + 0x30),
       fVar4 = *(float *)(iVar11 + 0x48) - *(float *)(param_1 + 0x38),
       fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3), fVar3 < 5.0 != (fVar3 == 5.0))) {
      piVar7 = (int *)FUN_00a7c8d0();
      local_100 = *piVar7;
      local_f8 = piVar7[2];
      local_f4 = piVar7[3];
      local_fc = *(float *)(param_1 + 0x24) * -1.0;
      FUN_00a7cf00(&local_100);
    }
  }
  if (((_DAT_01b7b910 & 0x800) == 0) &&
     (iVar11 = *(int *)(*(int *)(param_1 + 0x40) + 4),
     iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 + iVar11)) {
    do {
      iVar6 = FUN_00a81330();
      if ((iVar6 != 0) && (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) {
        puVar13 = &DAT_01be9d00;
        (**(code **)(*piVar7 + 4))(&DAT_01be9d00);
        iVar6 = FUN_00dd6d80(puVar13);
        if (iVar6 != 0) {
          FUN_00b1fb10(0);
        }
      }
      iVar11 = iVar11 + 0x70;
    } while (iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 +
                       *(int *)(*(int *)(param_1 + 0x40) + 4));
  }
  iVar11 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if (iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 + iVar11) {
    do {
      iVar6 = FUN_00a81330();
      if ((iVar6 != 0) && (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) {
        puVar13 = &DAT_01be9d00;
        (**(code **)(*piVar7 + 4))(&DAT_01be9d00);
        iVar8 = FUN_00dd6d80(puVar13);
        if ((iVar8 != 0) && ((piVar7[0x38d] != 0 && ((*(byte *)(iVar6 + 0x28) & 2) != 0)))) {
          FUN_008dd610();
          if (*(int *)(param_1 + 0xc) != 2) {
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
          }
          *(undefined4 *)(param_1 + 0xc) = 2;
          break;
        }
      }
      iVar11 = iVar11 + 0x70;
    } while (iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 +
                       *(int *)(*(int *)(param_1 + 0x40) + 4));
  }
  if ((*(int *)(param_1 + 0xc) != 2) &&
     (iVar11 = *(int *)(*(int *)(param_1 + 0x40) + 4),
     iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 + iVar11)) {
    piVar7 = (int *)(iVar11 + 0x18);
    do {
      iVar6 = FUN_00a81330();
      if (iVar6 == 0) {
        uStack_98 = 0;
        uStack_9c = 0;
        uStack_a0 = 0;
        uStack_a4 = 0;
        uStack_ac = 0;
        uStack_b0 = 0;
        uStack_b4 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_c4 = 0;
        uStack_6c = 0xffffffff;
        uStack_c8 = 0;
        uStack_e0 = 7;
        uStack_cc = 0;
        uStack_94 = 0x3f800000;
        uStack_a8 = 0x3f800000;
        uStack_bc = 0x3f800000;
        uStack_d0 = 0x3f800000;
        uStack_78 = 0x3f800000;
        uStack_74 = 0x3f800000;
        uStack_70 = 0x3f800000;
        iStack_90 = piVar7[-2];
        iStack_88 = *piVar7;
        uStack_8c = *(undefined4 *)(param_1 + 0x34);
        uStack_84 = *(undefined4 *)(param_1 + 0x20);
        uStack_80 = *(undefined4 *)(param_1 + 0x24);
        uStack_7c = *(undefined4 *)(param_1 + 0x28);
        iStack_dc = iVar6;
        iStack_d8 = iVar6;
        iStack_d4 = iVar6;
        iStack_68 = iVar6;
        iStack_64 = iVar6;
        uVar9 = FUN_00a82090("kogekkoWall",0x20040,&uStack_e0);
        uVar9 = FUN_00a7f290(uVar9);
        FUN_00a7c960(uVar9);
        piVar10 = (int *)FUN_00a7c8a0();
        if (piVar10 != (int *)0x0) {
          puVar13 = &DAT_01be9d00;
          (**(code **)(*piVar10 + 4))(&DAT_01be9d00);
          iVar6 = FUN_00dd6d80(puVar13);
          if (iVar6 != 0) {
            iVar6 = piVar7[-2];
            piVar12 = piVar10 + 0x2c;
            iVar8 = *piVar7;
            iVar1 = piVar7[1];
            iVar2 = *(int *)(param_1 + 0x34);
            piVar10[0x370] = piVar7[-2];
            piVar10[0x371] = piVar7[-1];
            piVar10[0x372] = *piVar7;
            piVar10[0x373] = piVar7[1];
            piVar10[0x374] = piVar7[2];
            piVar10[0x375] = piVar7[3];
            piVar10[0x376] = piVar7[4];
            piVar10[0x377] = piVar7[5];
            piVar10[0x378] = iVar6;
            piVar10[0x379] = iVar2;
            piVar10[0x37a] = iVar8;
            piVar10[0x37b] = iVar1;
            piVar10[0x3a] = 0;
            piVar10[0x39] = 0;
            piVar10[0x38] = 0;
            piVar10[0x37] = 0;
            piVar10[0x35] = 0;
            piVar10[0x34] = 0;
            piVar10[0x33] = 0;
            piVar10[0x32] = 0;
            piVar10[0x30] = 0;
            piVar10[0x2f] = 0;
            piVar10[0x2e] = 0;
            piVar10[0x2d] = 0;
            piVar10[0x3b] = 0x3f800000;
            piVar10[0x36] = 0x3f800000;
            piVar10[0x31] = 0x3f800000;
            *piVar12 = 0x3f800000;
            if (*(float *)(param_1 + 0x28) != 0.0) {
              D3DXMatrixRotationZ(auStack_50,*(undefined4 *)(param_1 + 0x28));
              D3DXMatrixMultiply(piVar12,auStack_58,piVar12);
            }
            if (*(float *)(param_1 + 0x24) != 0.0) {
              D3DXMatrixRotationY(auStack_50,*(undefined4 *)(param_1 + 0x24));
              D3DXMatrixMultiply(piVar12,auStack_58,piVar12);
            }
            if (*(float *)(param_1 + 0x20) != 0.0) {
              D3DXMatrixRotationX(auStack_50,*(undefined4 *)(param_1 + 0x20));
              D3DXMatrixMultiply(piVar12,auStack_58,piVar12);
            }
          }
        }
      }
      iVar11 = iVar11 + 0x70;
      piVar7 = piVar7 + 0x1c;
    } while (iVar11 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 +
                       *(int *)(*(int *)(param_1 + 0x40) + 4));
  }
  return;
}

// 008DE6B0  KogekkoWallContents::vf0C  size=22  [class]
void __fastcall KogekkoWallContents::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_008dde10();
    return;
  }
  if (*(int *)(param_1 + 0xc) == 1) {
    FUN_008de140();
    return;
  }
  return;
}

// 008DE6D0  KogekkoWallContents::vf10  size=117  [class]
void __fastcall KogekkoWallContents::vf10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if (iVar2 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 + iVar2) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a805f0();
      }
      iVar2 = iVar2 + 0x70;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 +
                      *(int *)(*(int *)(param_1 + 0x40) + 4));
  }
  if (*(int *)(*(int *)(param_1 + 0x40) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_00a00bd0(0x20040,0);
  return;
}

// 008DF500  KogekkoWallContents::vf08  size=147  [class]
undefined4 __fastcall KogekkoWallContents::vf08(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_84;
  undefined1 local_80 [4];
  int local_7c;
  
  iVar2 = 0;
  FUN_00a00a60(0x20040,0);
  puVar1 = (undefined4 *)FUN_00dd3500(0x18,*(undefined4 *)(param_1 + 4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = lib::AllocatedArray<KogekkoWallContents::Unit>::vftable;
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  local_84 = *(undefined4 *)(param_1 + 4);
  FUN_008df270(0x14,&local_84);
  *(undefined4 **)(param_1 + 0x40) = puVar1;
  do {
    FUN_00a7c930();
    local_7c = iVar2;
    (**(code **)(**(int **)(param_1 + 0x40) + 8))(local_80);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  return 1;
}

