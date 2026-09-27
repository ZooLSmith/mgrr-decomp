// src/misc/cEnemyItemDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD31C0..00D2E5E0, 5 functions

#include "types.h"

// 00CD31C0  cEnemyItemDispParts::cEnemyItemDispParts  size=142  [class]
void __fastcall cEnemyItemDispParts::cEnemyItemDispParts(undefined4 *param_1)

{
  param_1[0x1c] = 0;
  param_1[0x23] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x26] = 0;
  param_1[0x1a] = 0;
  param_1[0x27] = 0;
  param_1[0x1b] = 0x3f800000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return;
}

// 00CEDEB0  cEnemyItemDispParts::vf00  size=30  [class]
undefined4 __thiscall cEnemyItemDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_14();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CFF7B0  cEnemyItemDispParts::vf14  size=1201  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEnemyItemDispParts::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  switch(*(undefined4 *)(param_1 + 0x4c)) {
  case 0:
    if ((*(int *)(param_1 + 0x50) != -1) && (*(float *)(param_1 + 0x70) <= 9.0)) {
      uVar7 = 0xffffffff;
      uVar6 = 0;
      uVar4 = FUN_00ca9c50(*(undefined4 *)(param_1 + 0x78),0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),uVar4,uVar6,uVar7);
      uVar4 = FUN_00ca9c70(*(undefined4 *)(param_1 + 0x78));
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x30),uVar4);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),0);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    break;
  case 1:
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x7c)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdef90(0,1);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(3);
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(undefined4 *)(param_1 + 0x48) = 1;
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar5 = FUN_00cdf400(1), iVar5 != 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 3;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x50) == -1) ||
       (fVar1 = *(float *)(param_1 + 0x70), !NAN(fVar1) && 10.0 < fVar1 != (fVar1 == 10.0))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(4);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 5;
    }
    else {
      iVar5 = FUN_00ca8620(param_1 + 0x7c,0x96);
      if (iVar5 != 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(4);
        }
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      }
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0x50) == -1) ||
       (fVar1 = *(float *)(param_1 + 0x70), !NAN(fVar1) && 10.0 < fVar1 != (fVar1 == 10.0))) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
    break;
  case 5:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar5 = FUN_00cdf400(2), iVar5 != 0)) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  if ((*(int *)(param_1 + 0x4c) != 0) || (*(int *)(param_1 + 0x84) != 0)) {
    local_60 = *(undefined4 *)(param_1 + 0x60);
    local_5c = *(float *)(param_1 + 100) + _DAT_018b7a4c;
    local_58 = *(undefined4 *)(param_1 + 0x68);
    local_54 = 0x3f800000;
    iVar5 = FUN_00d9fa80(&local_80,(float *)(param_1 + 0x60));
    if ((iVar5 != 0) && (iVar5 = FUN_00d9fa80(&local_70,&local_60), iVar5 != 0)) {
      local_a0 = 0.0;
      local_9c = 0.0;
      local_98 = 0.0;
      local_94 = 1.0;
      iVar5 = FUN_00c12740(0);
      fVar1 = *(float *)(param_1 + 0x60) - *(float *)(iVar5 + 0x1b0);
      fVar3 = *(float *)(param_1 + 100) - *(float *)(iVar5 + 0x1b4);
      fVar2 = *(float *)(param_1 + 0x68) - *(float *)(iVar5 + 0x1b8);
      fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      local_84 = 1.0;
      if (10.0 < fVar1) {
        if (10.0 < fVar1) {
          local_84 = 0.7;
        }
      }
      else {
        local_84 = (0.3 - (fVar1 - 5.0) * 0.2 * 0.3) + 0.7;
        if (1.0 < local_84) {
          local_84 = 1.0;
        }
      }
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x44),local_84);
      FUN_00cb2c20(*(undefined4 *)(param_1 + 0x44),local_84);
      local_94 = *(float *)(param_1 + 0x8c);
      local_a0 = (local_70 - local_80) * local_94;
      local_9c = (local_6c - local_7c) * local_94;
      local_98 = (local_68 - local_78) * local_94;
      local_94 = (local_64 - local_74) * local_94;
      D3DXMatrixRotationZ(local_50,_DAT_018b7a48 * 0.017453292);
      D3DXVec3TransformNormal(&stack0xffffff58,&stack0xffffff58,&local_58);
      iVar5 = *(int *)(param_1 + 0x98);
      local_a0 = local_a0 + local_80;
      local_9c = local_9c + local_7c;
      local_98 = local_78 + local_98;
      local_94 = local_74 + local_94;
      if (*(int *)(iVar5 + 0x18) != 0) {
        *(float *)(iVar5 + 0x80) = local_80;
        *(float *)(iVar5 + 0x84) = local_7c;
      }
      iVar5 = *(int *)(param_1 + 0x9c);
      if (*(int *)(iVar5 + 0x18) != 0) {
        *(float *)(iVar5 + 0x80) = local_a0;
        *(float *)(iVar5 + 0x84) = local_9c;
      }
      local_70 = local_a0 - *(float *)(param_1 + 0xa0) * local_84;
      local_6c = local_9c - *(float *)(param_1 + 0xa4) * local_84;
      local_68 = local_98 - *(float *)(param_1 + 0xa8) * local_84;
      local_64 = local_94 - *(float *)(param_1 + 0xac) * local_84;
      if (*(int *)(param_1 + 0x18) != 0) {
        *(float *)(*(int *)(param_1 + 0x18) + 0x40) = local_70;
        *(float *)(*(int *)(param_1 + 0x18) + 0x44) = local_6c;
        *(float *)(*(int *)(param_1 + 0x18) + 0x48) = local_68;
      }
      FUN_00cb5540(&local_80,&local_a0,0x3f800000);
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x74);
      }
    }
  }
  FUN_00cd32e0();
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}

// 00D2E440  cEnemyItemDispParts::vf08  size=416  [class]
void __fastcall cEnemyItemDispParts::vf08(int param_1)

{
  uint *puVar1;
  int iVar2;
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
  *(uint *)(param_1 + 0x1c) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x8c);
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x8e);
  }
  *(uint *)(param_1 + 0x28) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xf2);
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x106);
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x11a);
  }
  *(uint *)(param_1 + 0x34) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x128);
  }
  *(uint *)(param_1 + 0x38) = uVar3;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x148);
  }
  *(uint *)(param_1 + 0x3c) = uVar5;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x14a);
  }
  *(uint *)(param_1 + 0x40) = uVar5;
  if (iVar4 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar4 + 0x14c);
  }
  *(uint *)(param_1 + 0x44) = uVar5;
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = uVar3 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = FUN_00d29960(4);
  *(int *)(param_1 + 0x94) = iVar4;
  *(undefined4 *)(iVar4 + 0x210) = 4;
  *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x214) = 1;
  puVar1 = (uint *)(*(int *)(param_1 + 0x94) + 0x28);
  *puVar1 = *puVar1 | 0x10000;
  *(undefined4 *)(*(int *)(param_1 + 0x94) + 4) = 0;
  piVar6 = (int *)(param_1 + 0x98);
  iVar4 = 2;
  do {
    iVar2 = FUN_00d29960(5);
    *piVar6 = iVar2;
    *(undefined4 *)(iVar2 + 0x1e4) = 4;
    *(undefined4 *)(*piVar6 + 0x1e8) = 1;
    *(uint *)(*piVar6 + 0x28) = *(uint *)(*piVar6 + 0x28) | 0x10000;
    iVar2 = *piVar6;
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar2 + 4) = 0;
  } while (iVar4 != 0);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cab4a0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00D2E5E0  FUN_00d2e5e0  size=923  [callgraph]
void __fastcall FUN_00d2e5e0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int *piVar17;
  undefined *puVar18;
  uint local_138;
  uint uStack_130;
  float local_110;
  undefined1 local_10c [116];
  uint auStack_98 [37];
  
  local_110 = 0.0;
  _memset(local_10c,0,0x7c);
  local_138 = 0;
  if (DAT_01dc0a08 != 0) {
    iVar16 = 0x20;
    piVar17 = param_1;
    do {
      piVar17 = piVar17 + 1;
      if ((undefined4 *)*piVar17 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar17)(1);
        *piVar17 = 0;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    DAT_01dc0a08 = 0;
  }
  iVar16 = FUN_00c12740(0);
  fVar1 = *(float *)(iVar16 + 0x1b0);
  fVar2 = *(float *)(iVar16 + 0x1b4);
  param_1 = param_1 + 1;
  uStack_130 = 0;
  fVar3 = *(float *)(iVar16 + 0x1b8);
  piVar17 = param_1;
  do {
    if (((&DAT_01dc0248)[uStack_130] == 0) || ((&DAT_01dc0908)[uStack_130] == 0)) {
      puVar9 = (undefined4 *)*piVar17;
      if (((puVar9 != (undefined4 *)0x0) && (puVar9[0x12] == 0)) &&
         ((puVar9[0x13] != 0 || (puVar9[0x14] == -1)))) {
        (**(code **)*puVar9)(1);
        *piVar17 = 0;
      }
    }
    else {
      iVar16 = FUN_00a7c8a0();
      fVar4 = *(float *)(iVar16 + 0x40);
      fVar5 = *(float *)(iVar16 + 0x44);
      fVar6 = *(float *)(iVar16 + 0x48);
      uVar14 = 0;
      auStack_98[local_138 + 2] = uStack_130;
      fVar4 = fVar1 - fVar4;
      fVar5 = fVar2 - fVar5;
      fVar6 = fVar3 - fVar6;
      fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      *(float *)(local_10c + uStack_130 * 4 + -4) = fVar4;
      if (3 < (int)local_138) {
        iVar16 = (local_138 - 4 >> 2) + 1;
        uVar14 = iVar16 * 4;
        puVar15 = auStack_98 + local_138;
        do {
          uVar13 = puVar15[2];
          if (*(float *)(local_10c + uVar13 * 4 + -4) < *(float *)(local_10c + puVar15[1] * 4 + -4))
          {
            puVar15[2] = puVar15[1];
            puVar15[1] = uVar13;
          }
          uVar13 = puVar15[1];
          if (*(float *)(local_10c + uVar13 * 4 + -4) < *(float *)(local_10c + *puVar15 * 4 + -4)) {
            puVar15[1] = *puVar15;
            *puVar15 = uVar13;
          }
          uVar13 = *puVar15;
          if (*(float *)(local_10c + uVar13 * 4 + -4) < *(float *)(local_10c + puVar15[-1] * 4 + -4)
             ) {
            *puVar15 = puVar15[-1];
            puVar15[-1] = uVar13;
          }
          uVar13 = puVar15[-1];
          if (*(float *)(local_10c + uVar13 * 4 + -4) < *(float *)(local_10c + puVar15[-2] * 4 + -4)
             ) {
            puVar15[-1] = puVar15[-2];
            puVar15[-2] = uVar13;
          }
          puVar15 = puVar15 + -4;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      if (uVar14 < local_138) {
        iVar16 = local_138 - uVar14;
        puVar15 = auStack_98 + iVar16 + 2;
        do {
          uVar14 = *puVar15;
          if (*(float *)(local_10c + uVar14 * 4 + -4) < *(float *)(local_10c + puVar15[-1] * 4 + -4)
             ) {
            *puVar15 = puVar15[-1];
            puVar15[-1] = uVar14;
          }
          puVar15 = puVar15 + -1;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
      local_138 = local_138 + 1;
      if (*piVar17 == 0) {
        iVar16 = FUN_00dd3500(0xb0,&DAT_01b7be50);
        if (iVar16 == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = cEnemyItemDispParts::cEnemyItemDispParts();
          if (iVar16 != 0) {
            *(char **)(iVar16 + 0xc) = "cEnemyItemDispParts";
            *(undefined4 *)(iVar16 + 8) = 2;
            uVar10 = FUN_00d29960(0x1b);
            *(undefined4 *)(iVar16 + 0x14) = uVar10;
          }
        }
        *piVar17 = iVar16;
        if (iVar16 == 0) goto LAB_00d2e873;
      }
      piVar11 = (int *)FUN_00a7c8a0();
      iVar16 = FUN_00a12210(1);
      if (iVar16 != 0) {
        if (piVar11 != (int *)0x0) {
          puVar18 = &DAT_01be9c78;
          (**(code **)(*piVar11 + 4))(&DAT_01be9c78);
          FUN_00dd6d80(puVar18);
        }
        iVar7 = piVar11[0x12d];
        iVar12 = FUN_00ac4700();
        iVar8 = *piVar17;
        uVar14 = 0;
        do {
          if ((&DAT_018b2b28)[uVar14 * 2] == iVar12) {
            iVar12 = *(int *)(uVar14 * 8 + 0x18b2b2c);
            if (iVar12 != -1) {
              *(int *)(iVar8 + 0x50) = iVar7;
              *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)(iVar16 + 0x40);
              *(undefined4 *)(iVar8 + 100) = *(undefined4 *)(iVar16 + 0x44);
              *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(iVar16 + 0x48);
              *(undefined4 *)(iVar8 + 0x6c) = *(undefined4 *)(iVar16 + 0x4c);
              *(int *)(iVar8 + 0x78) = iVar12;
              *(float *)(iVar8 + 0x70) = fVar4;
            }
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < 0xf);
      }
    }
LAB_00d2e873:
    uStack_130 = uStack_130 + 1;
    piVar17 = piVar17 + 1;
    if (0x1f < uStack_130) {
      uVar14 = 0;
      do {
        iVar16 = *param_1;
        if (iVar16 != 0) {
          uVar13 = 0;
          if (local_138 != 0) {
            do {
              if (auStack_98[uVar13 + 2] == uVar14) {
                if (*(int *)(iVar16 + 0x4c) == 0) {
                  *(uint *)(iVar16 + 0x90) = uVar13 * 0xc;
                }
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < local_138);
          }
          (**(code **)(*(int *)*param_1 + 4))();
        }
        (&DAT_01dc0988)[uVar14] = (&DAT_01dc0908)[uVar14];
        (&DAT_01dc0908)[uVar14] = 0;
        (&DAT_01dc0248)[uVar14] = 0;
        uVar14 = uVar14 + 1;
        param_1 = param_1 + 1;
        if (0x1f < uVar14) {
          return;
        }
      } while( true );
    }
  } while( true );
}

