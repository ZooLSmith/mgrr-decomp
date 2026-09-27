// src/misc/cEnemyNameParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8680..00D2F0B0, 4 functions

#include "types.h"

// 00CB8680  cEnemyNameParts::vf08  size=204  [class]
void __fastcall cEnemyNameParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9c);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8a);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x9e);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb2);
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x148);
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14a);
  }
  *(uint *)(param_1 + 0x38) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x3c) = uVar2;
  if (iVar1 != 0) {
    FUN_00cab4a0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CDE940  cEnemyNameParts::vf00  size=63  [class]
undefined4 * __thiscall cEnemyNameParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D00040  cEnemyNameParts::vf14  size=1016  [class]
void __fastcall cEnemyNameParts::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  float local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined4 *)(param_1 + 0x44)) {
  case 0:
    if ((*(int *)(param_1 + 0x48) != -1) &&
       (*(float *)(param_1 + 0x60) <= *(float *)(param_1 + 0x68))) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x44) = 1;
    }
    break;
  case 1:
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    if (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x78)) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdef90(0,1);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0();
      }
      uVar7 = 0xffffffff00000000;
      uVar4 = FUN_00ca92b0(*(undefined4 *)(param_1 + 0x48),0,1,*(undefined4 *)(param_1 + 0x6c),
                           *(undefined4 *)(param_1 + 0x70),0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),uVar4,uVar7);
      uVar7 = 0xffffffff00000000;
      uVar4 = FUN_00ca92b0(*(undefined4 *)(param_1 + 0x48),0,1,*(undefined4 *)(param_1 + 0x6c),
                           *(undefined4 *)(param_1 + 0x70),0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),uVar4,uVar7);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x20),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x24),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x28),1,3);
      *(undefined4 *)(param_1 + 0x40) = 1;
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x48);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0();
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar6 = FUN_00cdf400(), iVar6 != 0)) {
      *(undefined4 *)(param_1 + 0x44) = 3;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x48) == -1) ||
       (*(float *)(param_1 + 0x68) < *(float *)(param_1 + 0x60) !=
        (*(float *)(param_1 + 0x68) == *(float *)(param_1 + 0x60)))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0();
      }
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar6 = FUN_00cdf400(), iVar6 != 0)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  iVar6 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) goto LAB_00d0042a;
  iVar5 = FUN_00d9fa80(&local_20,(float *)(param_1 + 0x50));
  if (iVar5 == 0) goto LAB_00d0042a;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = local_18;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    if (*(float *)(param_1 + 0x60) <= 10.0) {
      iVar6 = 1;
      goto LAB_00d00263;
    }
  }
  else if ((*(int *)(param_1 + 0x74) == 1) && (iVar6 = 1, 11.0 < *(float *)(param_1 + 0x60))) {
    iVar6 = 0;
LAB_00d00263:
    *(int *)(param_1 + 0x74) = iVar6;
  }
  local_28[0] = 1.0;
  iVar5 = FUN_00c12740();
  fVar1 = *(float *)(param_1 + 0x50) - *(float *)(iVar5 + 0x1b0);
  fVar3 = *(float *)(param_1 + 0x54) - *(float *)(iVar5 + 0x1b4);
  fVar2 = *(float *)(param_1 + 0x58) - *(float *)(iVar5 + 0x1b8);
  fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  if ((NAN(fVar1) || 35.0 < fVar1 == (fVar1 == 35.0)) || (60.0 < *(float *)(param_1 + 0x60))) {
    if (60.0 < fVar1) {
      local_28[0] = 0.7;
    }
  }
  else {
    local_28[0] = (0.3 - (fVar1 - 35.0) * 0.04 * 0.3) + 0.7;
  }
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x3c),local_28[0]);
  FUN_00cb2c20(*(undefined4 *)(param_1 + 0x3c),local_28[0]);
  iVar5 = *(int *)(param_1 + 0x18);
  if (((((iVar5 == 0) || (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x2c))) ||
       (iVar5 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 == 0)) ||
      (*(int *)(iVar5 + 0x3b0) == 0)) && (iVar6 != 0)) {
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x20),1,3);
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(int *)(iVar5 + 0x3b0) = iVar6;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 == 0) || (*(uint *)(iVar5 + 0x80) <= *(uint *)(param_1 + 0x30))) ||
     ((iVar5 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 == 0 ||
      (*(int *)(iVar5 + 0x3b0) == 0)))) {
    if (iVar6 == 0) {
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x24),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x28),1,3);
    }
  }
  else {
    _sprintf_s((char *)local_28,8,"%2.1fM",(double)*(float *)(param_1 + 0x60));
    FUN_00cce090(*(undefined4 *)(param_1 + 0x24),local_28);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x28),local_28);
  }
  iVar5 = *(int *)(param_1 + 0x18);
  if (((iVar5 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar5 + 0x80))) &&
     (iVar5 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
    *(uint *)(iVar5 + 0x3b0) = (uint)(iVar6 == 0);
  }
LAB_00d0042a:
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}

// 00D2F0B0  cEnemyNameParts::cEnemyNameParts  size=1094  [class]
void __fastcall cEnemyNameParts::cEnemyNameParts(int *param_1)

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
  int iVar13;
  uint *puVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  float local_138;
  uint local_134;
  uint local_130;
  float local_110;
  undefined1 local_10c [116];
  uint auStack_98 [37];
  
  local_110 = 0.0;
  _memset(local_10c,0,0x7c);
  local_134 = 0;
  iVar8 = FUN_00c12740(0);
  fVar1 = *(float *)(iVar8 + 0x1b0);
  fVar2 = *(float *)(iVar8 + 0x1b4);
  fVar3 = *(float *)(iVar8 + 0x1b8);
  if (DAT_01dc0c50 != 0) {
    iVar8 = 0x20;
    piVar15 = param_1;
    do {
      piVar15 = piVar15 + 1;
      if ((undefined4 *)*piVar15 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar15)(1);
        *piVar15 = 0;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    DAT_01dc0c50 = 0;
  }
  uVar17 = 0;
  param_1 = param_1 + 1;
  local_130 = 0;
  piVar15 = param_1;
  do {
    if (((&DAT_01dc0128)[local_130] == 0) || ((&DAT_01dc0b50)[local_130] == 0)) {
      puVar9 = (undefined4 *)*piVar15;
      if (((puVar9 != (undefined4 *)0x0) && (puVar9[0x10] == 0)) &&
         ((puVar9[0x11] != 0 || (puVar9[0x12] == -1)))) {
        (**(code **)*puVar9)(1);
        *piVar15 = 0;
      }
    }
    else {
      iVar8 = FUN_00a7c8a0();
      fVar4 = *(float *)(iVar8 + 0x40);
      fVar5 = *(float *)(iVar8 + 0x44);
      uVar16 = 0;
      fVar6 = *(float *)(iVar8 + 0x48);
      auStack_98[uVar17 + 2] = local_130;
      fVar4 = fVar1 - fVar4;
      fVar5 = fVar2 - fVar5;
      fVar6 = fVar3 - fVar6;
      fVar4 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      *(float *)(local_10c + local_130 * 4 + -4) = fVar4;
      if (3 < (int)uVar17) {
        puVar14 = auStack_98 + uVar17;
        iVar8 = (uVar17 - 4 >> 2) + 1;
        uVar16 = iVar8 * 4;
        do {
          uVar17 = puVar14[2];
          if (*(float *)(local_10c + uVar17 * 4 + -4) < *(float *)(local_10c + puVar14[1] * 4 + -4))
          {
            puVar14[2] = puVar14[1];
            puVar14[1] = uVar17;
          }
          uVar17 = puVar14[1];
          if (*(float *)(local_10c + uVar17 * 4 + -4) < *(float *)(local_10c + *puVar14 * 4 + -4)) {
            puVar14[1] = *puVar14;
            *puVar14 = uVar17;
          }
          uVar17 = *puVar14;
          if (*(float *)(local_10c + uVar17 * 4 + -4) < *(float *)(local_10c + puVar14[-1] * 4 + -4)
             ) {
            *puVar14 = puVar14[-1];
            puVar14[-1] = uVar17;
          }
          uVar17 = puVar14[-1];
          if (*(float *)(local_10c + uVar17 * 4 + -4) < *(float *)(local_10c + puVar14[-2] * 4 + -4)
             ) {
            puVar14[-1] = puVar14[-2];
            puVar14[-2] = uVar17;
          }
          puVar14 = puVar14 + -4;
          iVar8 = iVar8 + -1;
          uVar17 = local_134;
        } while (iVar8 != 0);
      }
      if (uVar16 < uVar17) {
        iVar8 = uVar17 - uVar16;
        puVar14 = auStack_98 + iVar8 + 2;
        do {
          uVar17 = *puVar14;
          if (*(float *)(local_10c + uVar17 * 4 + -4) < *(float *)(local_10c + puVar14[-1] * 4 + -4)
             ) {
            *puVar14 = puVar14[-1];
            puVar14[-1] = uVar17;
          }
          puVar14 = puVar14 + -1;
          iVar8 = iVar8 + -1;
          uVar17 = local_134;
        } while (iVar8 != 0);
      }
      uVar17 = uVar17 + 1;
      local_134 = uVar17;
      if (*piVar15 == 0) {
        puVar9 = (undefined4 *)FUN_00dd3500(0x80,&DAT_01b7be50);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          puVar9[1] = 0;
          puVar9[0x18] = 0;
          puVar9[2] = 0;
          puVar9[0x1a] = 0;
          puVar9[3] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          *puVar9 = vftable;
          puVar9[0x10] = 0;
          puVar9[0x11] = 0;
          puVar9[0x19] = 0;
          puVar9[0x1b] = 0;
          puVar9[0x1c] = 0;
          puVar9[0x1d] = 0;
          puVar9[0x1e] = 0;
          puVar9[0x1f] = 0;
          puVar9[4] = 1;
          puVar9[0x12] = 0xffffffff;
          puVar9[0x13] = 0xffffffff;
          puVar9[0x14] = 0;
          puVar9[0x15] = 0;
          puVar9[0x16] = 0;
          puVar9[0x17] = 0x3f800000;
          puVar9[2] = 1;
          puVar9[3] = "cEnemyNameParts";
          uVar10 = FUN_00d29960(0x1e);
          puVar9[5] = uVar10;
        }
        *piVar15 = (int)puVar9;
        if (puVar9 == (undefined4 *)0x0) goto LAB_00d2f44e;
      }
      piVar11 = (int *)FUN_00a7c8a0();
      if (piVar11 != (int *)0x0) {
        local_138 = (float)piVar11[99];
        iVar8 = piVar11[0x66];
        if (local_138 == -1.0) {
          puVar18 = &DAT_01be9c78;
          (**(code **)(*piVar11 + 4))(&DAT_01be9c78);
          FUN_00dd6d80(puVar18);
          iVar12 = FUN_00a81330();
          if ((iVar12 != 0) && (iVar12 = FUN_00a7c8a0(), iVar12 != 0)) {
            local_138 = *(float *)(iVar12 + 0x18c);
            iVar8 = *(int *)(iVar12 + 0x198);
          }
        }
        if (local_138 < 0.0) {
          local_138 = 1000.0;
        }
        if (iVar8 == -1) {
          local_138 = local_138 * 0.85;
        }
        iVar13 = FUN_00a12210(0xffffffff);
        iVar8 = piVar11[0x128];
        iVar12 = piVar11[0x12a];
        iVar7 = *piVar15;
        *(int *)(iVar7 + 0x48) = piVar11[0x12d];
        *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(iVar13 + 0x40);
        *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)(iVar13 + 0x44);
        *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(iVar13 + 0x48);
        *(undefined4 *)(iVar7 + 0x5c) = *(undefined4 *)(iVar13 + 0x4c);
        *(int *)(iVar7 + 0x6c) = iVar8;
        *(float *)(iVar7 + 0x60) = fVar4;
        *(int *)(iVar7 + 0x70) = iVar12;
        *(float *)(iVar7 + 0x68) = local_138;
        if ((*(int *)(iVar7 + 0x4c) != -1) && (*(int *)(iVar7 + 0x48) != *(int *)(iVar7 + 0x4c))) {
          *(undefined4 *)(iVar7 + 0x40) = 0;
          *(undefined4 *)(iVar7 + 0x44) = 0;
          *(undefined4 *)(iVar7 + 0x4c) = 0xffffffff;
        }
      }
    }
LAB_00d2f44e:
    local_130 = local_130 + 1;
    piVar15 = piVar15 + 1;
    if (0x1f < local_130) {
      uVar17 = 0;
      do {
        if (*param_1 != 0) {
          uVar16 = 0;
          if (local_134 != 0) {
            do {
              if (auStack_98[uVar16 + 2] == uVar17) {
                *(uint *)(*param_1 + 0x7c) = uVar16 * 0xc;
                break;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < local_134);
          }
          (**(code **)(*(int *)*param_1 + 4))();
        }
        (&DAT_01dc0bd0)[uVar17] = (&DAT_01dc0b50)[uVar17];
        (&DAT_01dc0b50)[uVar17] = 0;
        (&DAT_01dc0128)[uVar17] = 0;
        uVar17 = uVar17 + 1;
        param_1 = param_1 + 1;
        if (0x1f < uVar17) {
          return;
        }
      } while( true );
    }
  } while( true );
}

