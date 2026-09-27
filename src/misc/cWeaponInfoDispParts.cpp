// src/misc/cWeaponInfoDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDA9C0..00D368E0, 6 functions

#include "mgrr.h"
#include "cWeaponInfoDispParts.h"

// 00CDA9C0  cWeaponInfoDispParts::cWeaponInfoDispParts  size=192  [class]
undefined4 * cWeaponInfoDispParts::cWeaponInfoDispParts(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  extraout_EDX[0x2b] = 0;
  *extraout_EDX = vftable;
  extraout_EDX[0x29] = 0;
  extraout_EDX[0x2a] = 0;
  extraout_EDX[0x41] = 0;
  extraout_EDX[0x2c] = 0;
  extraout_EDX[0x2d] = 0;
  extraout_EDX[0x2e] = 0;
  extraout_EDX[0x2f] = 0;
  extraout_EDX[0x30] = 0;
  extraout_EDX[0x31] = 0;
  extraout_EDX[0x32] = 0;
  extraout_EDX[0x24] = 0;
  extraout_EDX[0x25] = 0;
  extraout_EDX[0x26] = 0;
  extraout_EDX[0x27] = 0;
  extraout_EDX[0x28] = 0;
  extraout_EDX[0x34] = 0;
  extraout_EDX[0x35] = 0;
  extraout_EDX[0x36] = 0;
  extraout_EDX[0x37] = 0x3f800000;
  extraout_EDX[0x3b] = 0x3f800000;
  extraout_EDX[0x38] = 0;
  extraout_EDX[0x39] = 0;
  extraout_EDX[0x3a] = 0;
  extraout_EDX[0x3c] = 0;
  extraout_EDX[0x3d] = 0;
  extraout_EDX[0x3e] = 0;
  extraout_EDX[0x3f] = 0x3f800000;
  return extraout_EDX;
}

// 00CF3780  cWeaponInfoDispParts::vf00  size=30  [class]
undefined4 __thiscall cWeaponInfoDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D06BC0  cWeaponInfoDispParts::vf14  size=2224  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cWeaponInfoDispParts::vf14(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 extraout_EDX;
  float unaff_EBX;
  float *pfVar8;
  float unaff_ESI;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  float fStack_124;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  undefined1 local_f0 [20];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 auStack_cc [4];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined4 auStack_9c [15];
  undefined1 auStack_60 [92];
  
  iVar5 = *(int *)(param_1 + 0x18);
  iVar9 = 0;
  if (iVar5 == 0) {
    pfVar8 = (float *)0x0;
  }
  else {
    iVar3 = *(int *)(iVar5 + 0x78);
    if ((((iVar3 == 0) || (*(int *)(iVar3 + 0x10) == 0)) ||
        (iVar3 = iVar3 + *(int *)(iVar3 + 0x10), iVar3 == 0)) ||
       (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x9c))) {
      pfVar8 = (float *)0x0;
    }
    else {
      pfVar8 = (float *)(*(uint *)(param_1 + 0x9c) * 0x1b0 + iVar3);
    }
  }
  local_118 = (float)FUN_00f98a90();
  *(float *)(param_1 + 0xf0) = (float)(int)local_118 * 0.00078125 * *pfVar8;
  local_118 = (float)FUN_00f98aa0();
  *(float *)(param_1 + 0xf4) = (float)(int)local_118 * 0.0013888889 * pfVar8[1];
  switch(*(undefined4 *)(param_1 + 0xa4)) {
  case 0:
    iVar5 = FUN_00416d50(0x2e);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x100) != 10) {
        uVar13 = 0xffffffff;
        uVar12 = 0;
        uVar14 = FUN_00ca9c50(*(int *)(param_1 + 0x100),0,0xffffffff);
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x90),uVar14,uVar12,uVar13);
        uVar14 = FUN_00ca9c70(*(undefined4 *)(param_1 + 0x100));
        FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x94),uVar14);
        if (DAT_01b39200 != 0) {
          piVar4 = (int *)FUN_00c209f0();
          (**(code **)(*piVar4 + 0x14))(7);
          DAT_01b39200 = 0;
        }
      }
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xa4) = 0xe;
    }
    goto LAB_00d06cea;
  case 1:
LAB_00d06cea:
    if ((DAT_01bea090 & 0x80000000) == 0) {
      if (DAT_01dc14f8 == 0) goto switchD_00d06c5b_default;
      iVar5 = *(int *)(DAT_01dc14f8 + 0x228);
    }
    else {
      if (DAT_01dc14fc == 0) goto switchD_00d06c5b_default;
      iVar5 = *(int *)(DAT_01dc14fc + 0x8c);
    }
    if ((2 < iVar5) &&
       (((DAT_01dc1500 == 0 || (*(int *)(DAT_01dc1500 + 0x88) != 0)) ||
        ((2 < *(int *)(DAT_01dc1500 + 0x3c) || (iVar5 = FUN_00a4a350(DAT_018b9174), iVar5 != 0))))))
    {
      uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(*(int *)(param_1 + 0xbc) + 4) = (uint)((int)uVar7 < 2);
      iVar5 = FUN_00ca8620(param_1 + 0xa8,0xc);
      if (iVar5 != 0) {
        if (*(int *)(param_1 + 0x14) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
        }
        *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
      }
    }
    goto switchD_00d06c5b_default;
  case 2:
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc0) + 4) = (uint)((int)uVar7 < 2);
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    iVar5 = *(int *)(param_1 + 0xb0);
    goto LAB_00d06df8;
  case 3:
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc4) + 4) = (uint)((int)uVar7 < 2);
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    iVar5 = *(int *)(param_1 + 0xb4);
LAB_00d06df8:
    bVar1 = (int)uVar7 < 2;
LAB_00d06dfb:
    *(uint *)(iVar5 + 4) = (uint)bVar1;
    break;
  case 4:
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 200) + 4) = (uint)((int)uVar7 < 2);
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xb8) + 4) = (uint)((int)uVar7 < 2);
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    fVar10 = (float10)FUN_00cb2310(*(undefined4 *)(param_1 + 0x98),(int)uVar7 < 2);
    fVar11 = (float10)_DAT_018b7a54 + (float10)*(float *)(param_1 + 0xac);
    *(float *)(param_1 + 0xac) = (float)fVar11;
    if (fVar10 < fVar11) {
      *(float *)(param_1 + 0xac) = (float)fVar10;
    }
    iVar5 = FUN_00ca8620(extraout_EDX,0xc);
    if (iVar5 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 200) + 4) = 1;
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    }
    goto switchD_00d06c5b_default;
  case 5:
    fVar2 = _DAT_018b7a54 + *(float *)(param_1 + 0xac);
    *(float *)(param_1 + 0xac) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
    }
    break;
  case 6:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),1);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),1,3);
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    goto switchD_00d06c5b_default;
  case 7:
    uVar14 = 0x1e;
    goto LAB_00d06e00;
  case 8:
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xb8) + 4) = (uint)(1 < (int)uVar7);
    break;
  case 9:
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc4) + 4) = (uint)(1 < (int)uVar7);
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xb4) + 4) = (uint)(1 < (int)uVar7);
    break;
  case 10:
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xc0) + 4) = (uint)(1 < (int)uVar7);
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xb0) + 4) = (uint)(1 < (int)uVar7);
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    bVar1 = 1 < (int)uVar7;
    goto LAB_00d06dfb;
  case 0xb:
    uVar14 = 6;
    goto LAB_00d06e00;
  case 0xc:
    iVar5 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x90));
    if (iVar5 != 0) goto switchD_00d06c5b_default;
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    goto LAB_00d070b4;
  case 0xd:
LAB_00d070b4:
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x98),1 < (int)uVar7);
    uVar7 = *(uint *)(param_1 + 0xa8) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 200) + 4) = (uint)(1 < (int)uVar7);
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    if (*(int *)(param_1 + 0xa8) < 9) goto switchD_00d06c5b_default;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
      goto switchD_00d06c5b_default;
    }
    goto LAB_00d06e11;
  default:
    goto switchD_00d06c5b_default;
  }
  uVar14 = 0xc;
LAB_00d06e00:
  iVar5 = FUN_00ca8620(param_1 + 0xa8,uVar14);
  if (iVar5 != 0) {
LAB_00d06e11:
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  }
switchD_00d06c5b_default:
  if (((DAT_01dc14c8 != 0) && (iVar5 = FUN_00b8c050(), iVar5 != 0)) &&
     (*(int *)(param_1 + 0x104) == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 200) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb4) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xb8) + 4) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0xe;
    *(undefined4 *)(param_1 + 0x104) = 1;
  }
  if (*(int *)(param_1 + 0xa4) != 0xe) {
    *(float *)(param_1 + 0x40) =
         ((*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xd0)) * *(float *)(param_1 + 0xac) +
         *(float *)(param_1 + 0xd0)) - *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0x44) =
         (*(float *)(param_1 + 0xac) * (*(float *)(param_1 + 0xe4) - *(float *)(param_1 + 0xd4)) +
         *(float *)(param_1 + 0xd4)) - *(float *)(param_1 + 0xf4);
    FUN_00cb33d0(*(undefined4 *)(param_1 + 0xa0),0x40c00000,0x40c00000,0x43c80000,0x43960000);
    local_110 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x40);
    local_10c = *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x44);
    local_108 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x48);
    local_118 = (float)FUN_00f98a90();
    local_110 = (float)(int)local_118 * 0.00078125 * local_110;
    local_118 = (float)FUN_00f98aa0();
    local_10c = (float)(int)local_118 * 0.0013888889 * local_10c;
    D3DXMatrixTranslation
              (local_f0,*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4),0);
    local_110 = *(float *)(param_1 + 0x80);
    local_10c = *(float *)(param_1 + 0x84);
    local_108 = *(float *)(param_1 + 0x88);
    uStack_104 = *(undefined4 *)(param_1 + 0x8c);
    thunk_FUN_00ddc1d0(auStack_60,&local_110,5);
    D3DXMatrixMultiply(auStack_100,auStack_100,auStack_60);
    fStack_11c = fStack_dc + unaff_ESI;
    puVar15 = (undefined4 *)&stack0xfffffed4;
    piVar4 = (int *)(param_1 + 0xbc);
    local_118 = fStack_d8 + unaff_EBX;
    fStack_114 = fStack_d4 + fStack_124;
    local_110 = fStack_d0;
    fStack_dc = fStack_11c;
    fStack_d8 = local_118;
    fStack_d4 = fStack_114;
    do {
      puVar6 = (undefined4 *)FUN_00caac30(*puVar15);
      *(undefined4 *)((int)auStack_9c + iVar9) = *puVar6;
      *(undefined4 *)((int)auStack_9c + iVar9 + 4) = puVar6[1];
      *(undefined4 *)((int)auStack_9c + iVar9 + 8) = puVar6[2];
      *(undefined4 *)((int)auStack_9c + iVar9 + 0xc) = puVar6[3];
      FUN_00d9fa80((undefined4 *)((int)auStack_cc + iVar9),(int)auStack_9c + iVar9);
      uVar14 = *(undefined4 *)((int)auStack_cc + iVar9 + 4);
      iVar5 = *piVar4;
      if (*(int *)(iVar5 + 0x18) != 0) {
        *(undefined4 *)(iVar5 + 0x80) = *(undefined4 *)((int)auStack_cc + iVar9);
        *(undefined4 *)(iVar5 + 0x84) = uVar14;
      }
      puVar15 = puVar15 + 1;
      piVar4 = piVar4 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar9 < 0x30);
    FUN_00cb5540(auStack_cc,auStack_bc,0x3f800000);
    FUN_00cb5540(auStack_bc,auStack_ac,0x3f800000);
    FUN_00cb5540(auStack_ac,&fStack_11c,0x3f800000);
    if (*(int *)(*(int *)(param_1 + 200) + 0x18) != 0) {
      FID_conflict__memcpy((void *)(*(int *)(param_1 + 200) + 0x50),&local_10c,0x40);
    }
  }
  return;
}

// 00D365E0  FUN_00d365e0  size=72  [callgraph]
int FUN_00d365e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x110,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cWeaponInfoDispParts::cWeaponInfoDispParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cWeaponInfoDispParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(0x58);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D36630  cWeaponInfoDispParts::vf08  size=631  [class]
void __fastcall cWeaponInfoDispParts::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar3;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x106);
  }
  *(uint *)(param_1 + 0x94) = uVar5;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x148);
  }
  *(uint *)(param_1 + 0x98) = uVar5;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x14a);
  }
  *(uint *)(param_1 + 0x9c) = uVar5;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x14c);
  }
  *(uint *)(param_1 + 0xa0) = uVar5;
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = 3;
  piVar6 = (int *)(param_1 + 0xb0);
  do {
    iVar1 = FUN_00d29960(4);
    *piVar6 = iVar1;
    *(undefined4 *)(iVar1 + 0x210) = 0xc;
    *(undefined4 *)(*piVar6 + 0x214) = 0;
    iVar1 = *piVar6;
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4) = 0;
  } while (iVar4 != 0);
  piVar6 = (int *)(param_1 + 0xbc);
  iVar4 = 4;
  do {
    iVar1 = FUN_00d29960(5);
    *piVar6 = iVar1;
    *(undefined4 *)(iVar1 + 0x1e4) = 0xc;
    *(undefined4 *)(*piVar6 + 0x1e8) = 0;
    iVar1 = *piVar6;
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4) = 0;
  } while (iVar4 != 0);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  if (DAT_01dc14c8 != 0) {
    uVar2 = FUN_00b7f5d0();
    switch(uVar2) {
    default:
      *(undefined4 *)(param_1 + 0x100) = 0x14;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x100) = 0x16;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x100) = 0x17;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x100) = 0x15;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x100) = 0x18;
      break;
    case 5:
    case 10:
      *(undefined4 *)(param_1 + 0x100) = 0x19;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x100) = 0x1a;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x100) = 9;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x100) = 0x72;
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x100) = 10;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x100) = 0x9b;
    }
  }
  if (DAT_01dc2d70 != 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0xe;
  }
  if (DAT_01bea030 == 1) {
    if (((DAT_018b9174 & 0xfff) == 0xa15) &&
       ((iVar4 = FUN_00d45a70("btl_ray02_2_start"), iVar4 != 0 ||
        (iVar4 = FUN_00d45a70("btl_ray02_3_start"), iVar4 != 0)))) {
      *(undefined4 *)(param_1 + 0xa4) = 0xe;
    }
  }
  else if (DAT_01bea030 == 4) {
    *(undefined4 *)(param_1 + 0xa4) = 0xe;
    return;
  }
  return;
}

// 00D368E0  FUN_00d368e0  size=156  [callgraph]
void __fastcall FUN_00d368e0(int param_1)

{
  undefined4 *puVar1;
  
  if (DAT_01dc13f0 != 0) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
      *(undefined4 *)(param_1 + 4) = 0;
      DAT_01dc1504 = 0;
      DAT_01dc13f4 = 0;
    }
    if (*(int *)(param_1 + 4) == 0) {
      if ((DAT_01bea094 & 0x20000) == 0) {
        DAT_01dc1504 = FUN_00d365e0();
        *(undefined4 *)(param_1 + 4) = DAT_01dc1504;
      }
      else {
        DAT_01dc13f4 = 0;
      }
      DAT_01dc13f0 = 0;
    }
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    if ((DAT_01bea094 & 0x40000) == 0) {
      (**(code **)(**(int **)(param_1 + 4) + 4))();
    }
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1[0x29] == 0xe) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
        *(undefined4 *)(param_1 + 4) = 0;
      }
      DAT_01dc1504 = 0;
      DAT_01dc13f4 = 0;
    }
  }
  return;
}

