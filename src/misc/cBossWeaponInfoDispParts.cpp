// src/misc/cBossWeaponInfoDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD03A0..00D2A5F0, 6 functions

#include "types.h"

// 00CD03A0  cBossWeaponInfoDispParts::cBossWeaponInfoDispParts  size=174  [class]
undefined4 * cBossWeaponInfoDispParts::cBossWeaponInfoDispParts(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  extraout_EDX[0x2c] = 0;
  *extraout_EDX = vftable;
  extraout_EDX[0x2a] = 0;
  extraout_EDX[0x2b] = 0;
  extraout_EDX[0x3d] = 0;
  extraout_EDX[0x2d] = 0;
  extraout_EDX[0x2e] = 0;
  extraout_EDX[0x2f] = 0;
  extraout_EDX[0x24] = 0;
  extraout_EDX[0x25] = 0;
  extraout_EDX[0x26] = 0;
  extraout_EDX[0x27] = 0;
  extraout_EDX[0x28] = 0;
  extraout_EDX[0x29] = 0;
  extraout_EDX[0x30] = 0;
  extraout_EDX[0x31] = 0;
  extraout_EDX[0x32] = 0;
  extraout_EDX[0x33] = 0x3f800000;
  extraout_EDX[0x37] = 0x3f800000;
  extraout_EDX[0x34] = 0;
  extraout_EDX[0x35] = 0;
  extraout_EDX[0x36] = 0;
  extraout_EDX[0x38] = 0;
  extraout_EDX[0x39] = 0;
  extraout_EDX[0x3a] = 0;
  extraout_EDX[0x3b] = 0x3f800000;
  return extraout_EDX;
}

// 00CEAC20  cBossWeaponInfoDispParts::vf00  size=30  [class]
undefined4 __thiscall cBossWeaponInfoDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_22();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CFE1D0  cBossWeaponInfoDispParts::vf14  size=1682  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cBossWeaponInfoDispParts::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [16];
  undefined1 local_90 [20];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_60 [92];
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    pfVar5 = (float *)0x0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x78);
    if ((((iVar3 == 0) || (*(int *)(iVar3 + 0x10) == 0)) ||
        (iVar3 = iVar3 + *(int *)(iVar3 + 0x10), iVar3 == 0)) ||
       (*(uint *)(iVar2 + 0x80) <= *(uint *)(param_1 + 0xa4))) {
      pfVar5 = (float *)0x0;
    }
    else {
      pfVar5 = (float *)(*(uint *)(param_1 + 0xa4) * 0x1b0 + iVar3);
    }
  }
  local_d4 = 1.909107e-38;
  iVar2 = FUN_00f98a90();
  *(float *)(param_1 + 0xe0) = (float)iVar2 * 0.00078125 * *pfVar5;
  local_d4 = 1.9091108e-38;
  iVar2 = FUN_00f98aa0();
  *(float *)(param_1 + 0xe4) = (float)iVar2 * 0.0013888889 * pfVar5[1];
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 0:
    if (DAT_01dc0e0c != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 0;
    }
    local_d4 = 6.44597e-44;
    local_d8 = 1.9091229e-38;
    iVar2 = FUN_00416d50();
    if (iVar2 == 0) {
      local_dc = *(float *)(param_1 + 0xf0);
      local_d4 = -NAN;
      local_d8 = 0.0;
      local_dc = (float)FUN_00ca9c50();
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x90));
      local_d4 = *(float *)(param_1 + 0xf0);
      local_d8 = 1.9091318e-38;
      local_d4 = (float)FUN_00ca9c70();
      local_d8 = *(float *)(param_1 + 0x98);
      local_dc = 1.9091344e-38;
      FUN_00cb2ce0();
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 10;
    }
    goto LAB_00cfe2f0;
  case 1:
LAB_00cfe2f0:
    if ((DAT_01bea090 & 0x80000000) == 0) {
      if ((DAT_01dc14f8 == 0) || (*(int *)(DAT_01dc14f8 + 0x228) < 7)) break;
    }
    else if ((DAT_01dc14fc == 0) || (*(int *)(DAT_01dc14fc + 0x8c) < 7)) {
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    }
    if (((DAT_01dc1500 != 0) && (5 < *(int *)(DAT_01dc1500 + 0x3c))) ||
       (((DAT_018b9174 & 0xf00) == 0xe00 && ((int)DAT_018b9174 < 0xef3)))) {
      uVar4 = *(uint *)(param_1 + 0xac) & 0x80000003;
      local_d8 = (float)(param_1 + 0xac);
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      local_d4 = 1.68156e-44;
      *(uint *)(*(int *)(param_1 + 0xb8) + 4) = (uint)((int)uVar4 < 2);
      local_dc = 1.9091587e-38;
      iVar2 = FUN_00ca8620();
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x14) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
        }
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
      }
    }
    break;
  case 2:
    uVar4 = *(uint *)(param_1 + 0xac) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xbc) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0xac) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xb4) + 4) = (uint)((int)uVar4 < 2);
    uVar4 = *(uint *)(param_1 + 0xac) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    local_d8 = *(float *)(param_1 + 0xa0);
    local_d4 = (float)(uint)((int)uVar4 < 2);
    local_dc = 1.9091786e-38;
    fVar6 = (float10)FUN_00cb2310();
    fVar7 = (float10)_DAT_018b7a44 + (float10)*(float *)(param_1 + 0xb0);
    *(float *)(param_1 + 0xb0) = (float)fVar7;
    if (fVar6 < fVar7) {
      *(float *)(param_1 + 0xb0) = (float)fVar6;
    }
    local_d4 = 1.68156e-44;
    local_dc = 1.909185e-38;
    local_d8 = (float)extraout_EDX;
    iVar2 = FUN_00ca8620();
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = 1;
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    }
    break;
  case 3:
    fVar1 = _DAT_018b7a44 + *(float *)(param_1 + 0xb0);
    *(float *)(param_1 + 0xb0) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
    }
    goto LAB_00cfe499;
  case 4:
    local_d8 = *(float *)(param_1 + 0x90);
    local_d4 = 1.4013e-45;
    local_dc = 1.9092019e-38;
    FUN_00cb2310();
    local_dc = *(float *)(param_1 + 0x90);
    local_d4 = 4.2039e-45;
    local_d8 = 1.4013e-45;
    FUN_00ccdf90();
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    break;
  case 5:
  case 7:
    local_d4 = 4.2039e-44;
    goto LAB_00cfe49b;
  case 6:
    uVar4 = *(uint *)(param_1 + 0xac) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xb8) + 4) = (uint)(1 < (int)uVar4);
    uVar4 = *(uint *)(param_1 + 0xac) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xb4) + 4) = (uint)(1 < (int)uVar4);
LAB_00cfe499:
    local_d4 = 1.68156e-44;
LAB_00cfe49b:
    local_d8 = (float)(param_1 + 0xac);
    local_dc = 1.9091964e-38;
    iVar2 = FUN_00ca8620();
    if (iVar2 != 0) {
LAB_00cfe4ac:
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    }
    break;
  case 8:
    local_d4 = *(float *)(param_1 + 0x90);
    local_d8 = 1.9092211e-38;
    iVar2 = FUN_00cb2e50();
    if (iVar2 != 0) break;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    goto LAB_00cfe563;
  case 9:
LAB_00cfe563:
    uVar4 = *(uint *)(param_1 + 0xac) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    local_d8 = *(float *)(param_1 + 0xa0);
    local_d4 = (float)(uint)(1 < (int)uVar4);
    local_dc = 1.9092295e-38;
    FUN_00cb2310();
    uVar4 = *(uint *)(param_1 + 0xac) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xbc) + 4) = (uint)(1 < (int)uVar4);
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    if (*(int *)(param_1 + 0xac) < 9) break;
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
      break;
    }
    goto LAB_00cfe4ac;
  }
  if (DAT_01dc14c8 != 0) {
    local_d4 = 1.909243e-38;
    iVar2 = FUN_00b8c050();
    if ((iVar2 != 0) && (*(int *)(param_1 + 0xf4) == 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0xb8) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xb4) + 4) = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0xa8) = 10;
      *(undefined4 *)(param_1 + 0xf4) = 1;
    }
  }
  if (*(int *)(param_1 + 0xa8) != 10) {
    *(float *)(param_1 + 0x40) =
         ((*(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xc0)) * *(float *)(param_1 + 0xb0) +
         *(float *)(param_1 + 0xc0)) - *(float *)(param_1 + 0xe0);
    *(float *)(param_1 + 0x44) =
         (*(float *)(param_1 + 0xc4) +
         *(float *)(param_1 + 0xb0) * (*(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xc4))) -
         *(float *)(param_1 + 0xe4);
    local_d4 = 300.0;
    local_d8 = 400.0;
    local_dc = 6.0;
    FUN_00cb33d0(*(undefined4 *)(param_1 + 0x9c),0x40c00000);
    local_c0 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x40);
    local_bc = *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x44);
    local_b8 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x48);
    local_d4 = 1.9092767e-38;
    iVar2 = FUN_00f98a90();
    local_c0 = (float)iVar2 * 0.00078125 * local_c0;
    local_d4 = 1.9092805e-38;
    iVar2 = FUN_00f98aa0();
    local_bc = (float)iVar2 * 0.0013888889 * local_bc;
    local_d4 = 0.0;
    local_d8 = *(float *)(param_1 + 0xe4);
    local_dc = *(float *)(param_1 + 0xe0);
    D3DXMatrixTranslation(local_90);
    local_c0 = *(float *)(param_1 + 0x80);
    local_bc = *(float *)(param_1 + 0x84);
    local_b8 = *(float *)(param_1 + 0x88);
    uStack_b4 = *(undefined4 *)(param_1 + 0x8c);
    thunk_FUN_00ddc1d0(auStack_60,&local_c0,5);
    D3DXMatrixMultiply(auStack_a0,auStack_a0,auStack_60);
    fStack_7c = fStack_7c + local_dc;
    fStack_78 = fStack_78 + local_d8;
    fStack_74 = fStack_74 + local_d4;
    local_c0 = fStack_70;
    iStack_b0 = FUN_00f98aa0();
    iVar3 = FUN_00f98a90();
    iVar2 = *(int *)(param_1 + 0xb8);
    local_dc = (float)iVar3 * 0.00078125 * *(float *)(param_1 + 0xc0);
    local_d8 = (float)iStack_b0 * 0.0013888889 * *(float *)(param_1 + 0xc4);
    local_d4 = 0.0;
    if (*(int *)(iVar2 + 0x18) != 0) {
      *(float *)(iVar2 + 0x80) = local_dc;
      *(float *)(iVar2 + 0x84) = local_d8;
    }
    FUN_00cb5540(&local_dc,&stack0xffffff34,0x3f800000);
    if (*(int *)(*(int *)(param_1 + 0xbc) + 0x18) != 0) {
      FID_conflict__memcpy((void *)(*(int *)(param_1 + 0xbc) + 0x50),auStack_ac,0x40);
    }
  }
  return;
}

// 00D2A380  FUN_00d2a380  size=72  [callgraph]
int FUN_00d2a380(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x100,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cBossWeaponInfoDispParts::cBossWeaponInfoDispParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cBossWeaponInfoDispParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(6);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D2A3D0  cBossWeaponInfoDispParts::vf08  size=527  [class]
void __fastcall cBossWeaponInfoDispParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar3 + 0x96);
  }
  *(uint *)(param_1 + 0x90) = uVar2;
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar3 + 0xa2);
  }
  *(uint *)(param_1 + 0x94) = uVar4;
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar3 + 0x106);
  }
  *(uint *)(param_1 + 0x98) = uVar4;
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar3 + 0x13a);
  }
  *(uint *)(param_1 + 0x9c) = uVar4;
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar3 + 0x148);
  }
  *(uint *)(param_1 + 0xa0) = uVar4;
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(iVar3 + 0x14a);
  }
  *(uint *)(param_1 + 0xa4) = uVar4;
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = uVar2 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = FUN_00d29960(4);
  *(int *)(param_1 + 0xb4) = iVar3;
  *(undefined4 *)(iVar3 + 0x210) = 0xc;
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x214) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + 4) = 0;
  piVar5 = (int *)(param_1 + 0xb8);
  iVar3 = 2;
  do {
    iVar1 = FUN_00d29960(5);
    *piVar5 = iVar1;
    *(undefined4 *)(iVar1 + 0x1e4) = 0xc;
    *(undefined4 *)(*piVar5 + 0x1e8) = 0;
    iVar1 = *piVar5;
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4) = 0;
  } while (iVar3 != 0);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(5);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  if (DAT_01dc14c8 != 0) {
    iVar3 = FUN_00b7f5f0();
    if (iVar3 == 2) {
      *(undefined4 *)(param_1 + 0xf0) = 0x1b;
      goto LAB_00d2a5d4;
    }
    if (iVar3 == 3) {
      *(undefined4 *)(param_1 + 0xf0) = 0x1c;
      goto LAB_00d2a5d4;
    }
    if (iVar3 == 4) {
      *(undefined4 *)(param_1 + 0xf0) = 0x1d;
      goto LAB_00d2a5d4;
    }
  }
  *(undefined4 *)(param_1 + 0xa8) = 10;
LAB_00d2a5d4:
  if (DAT_01dc2d70 != 0) {
    *(undefined4 *)(param_1 + 0xa8) = 10;
  }
  return;
}

// 00D2A5F0  FUN_00d2a5f0  size=160  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d2a5f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_01dc074c != 0) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
      *(undefined4 *)(param_1 + 4) = 0;
      _DAT_01dc0748 = 0;
    }
    if (*(int *)(param_1 + 4) == 0) {
      if ((DAT_01bea094 & 0x20000) == 0) {
        uVar2 = FUN_00d2a380();
        *(undefined4 *)(param_1 + 4) = uVar2;
      }
      else {
        _DAT_01dc0748 = 0;
      }
      DAT_01dc074c = 0;
    }
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    if ((DAT_01bea094 & 0x40000) == 0) {
      (**(code **)(**(int **)(param_1 + 4) + 4))();
      DAT_01dc0750 = 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1[0x2a] == 10) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
        *(undefined4 *)(param_1 + 4) = 0;
      }
      _DAT_01dc0748 = 0;
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    DAT_01dc0750 = 0;
  }
  return;
}

