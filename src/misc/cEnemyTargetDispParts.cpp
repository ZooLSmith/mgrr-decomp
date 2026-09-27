// src/misc/cEnemyTargetDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB88B0..00D2F590, 5 functions

#include "types.h"

// 00CB88B0  cEnemyTargetDispParts::vf08  size=109  [class]
void __fastcall cEnemyTargetDispParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x8e);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x90);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x148);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 != 0) {
    FUN_00cab4a0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CEE100  cEnemyTargetDispParts::vf00  size=63  [class]
undefined4 * __thiscall cEnemyTargetDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D00450  cEnemyTargetDispParts::vf14  size=618  [class]
void __fastcall cEnemyTargetDispParts::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    if ((*(int *)(param_1 + 0x34) != -1) &&
       (*(float *)(param_1 + 0x50) <= *(float *)(param_1 + 0x60))) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    break;
  case 1:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    if (*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x58)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdef90(0,1);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      if (*(int *)(param_1 + 0x54) == 0) {
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"HUD_PIECE_32",0,0xffffffff);
        uVar5 = *(undefined4 *)(param_1 + 0x20);
        pcVar6 = "HUD_PIECE_32";
      }
      else {
        FUN_00cf9770(*(undefined4 *)(param_1 + 0x1c),"HUD_PIECE_34",0,0xffffffff);
        uVar5 = *(undefined4 *)(param_1 + 0x20);
        pcVar6 = "HUD_PIECE_34";
      }
      FUN_00cf9770(uVar5,pcVar6,0,0xffffffff);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x20),1,3);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar4 = FUN_00cdf400(1), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x34) == -1) ||
       (*(float *)(param_1 + 0x60) < *(float *)(param_1 + 0x50) !=
        (*(float *)(param_1 + 0x60) == *(float *)(param_1 + 0x50)))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar4 = FUN_00cdf400(2), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar4 = FUN_00d9fa80(&local_20,(float *)(param_1 + 0x40));
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = local_18;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x2c);
      }
      local_24 = 1.0;
      iVar4 = FUN_00c12740(0);
      fVar1 = *(float *)(param_1 + 0x40) - *(float *)(iVar4 + 0x1b0);
      fVar3 = *(float *)(param_1 + 0x44) - *(float *)(iVar4 + 0x1b4);
      fVar2 = *(float *)(param_1 + 0x48) - *(float *)(iVar4 + 0x1b8);
      fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
      if ((NAN(fVar1) || 35.0 < fVar1 == (fVar1 == 35.0)) || (60.0 < fVar1)) {
        if (60.0 < fVar1) {
          local_24 = 0.7;
        }
      }
      else {
        local_24 = (0.3 - (fVar1 - 35.0) * 0.04 * 0.3) + 0.7;
      }
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x28),local_24);
      FUN_00cb2c20(*(undefined4 *)(param_1 + 0x28),local_24);
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return;
}

// 00D2F500  cEnemyTargetDispParts::cEnemyTargetDispParts  size=131  [class]
undefined4 * cEnemyTargetDispParts::cEnemyTargetDispParts(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x70,&DAT_01b7be50);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[0x14] = 0;
    puVar1[2] = 0;
    puVar1[0x18] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0xd] = 0xffffffff;
    puVar1[0xe] = 0xffffffff;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0x3f800000;
    puVar1[3] = "cEnemyTargetDispParts";
    puVar1[2] = 3;
    uVar2 = FUN_00d29960(0x1f);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D2F590  FUN_00d2f590  size=1056  [callgraph]
void __fastcall FUN_00d2f590(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined *puVar12;
  float fStack_160;
  uint uStack_15c;
  uint local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int *piStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float local_110;
  undefined1 local_10c [116];
  uint auStack_98 [37];
  
  local_110 = 0.0;
  _memset(local_10c,0,0x7c);
  local_158 = 0;
  if (DAT_01dc0c54 != 0) {
    iVar11 = 0x20;
    piVar6 = param_1;
    do {
      piVar6 = piVar6 + 1;
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
        *piVar6 = 0;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    DAT_01dc0c54 = 0;
  }
  iVar11 = FUN_00c12740(0);
  fStack_130 = *(float *)(iVar11 + 0x1b0);
  fStack_12c = *(float *)(iVar11 + 0x1b4);
  param_1 = param_1 + 1;
  uStack_15c = 0;
  fStack_128 = *(float *)(iVar11 + 0x1b8);
  piStack_138 = param_1;
  do {
    if (((&DAT_01dc00a8)[uStack_15c] == 0) || ((&DAT_01dc0c58)[uStack_15c] == 0)) {
      puVar5 = (undefined4 *)*param_1;
      if (((puVar5 != (undefined4 *)0x0) && (puVar5[0xb] == 0)) &&
         ((puVar5[0xc] != 0 || (puVar5[0xd] == -1)))) {
        (**(code **)*puVar5)(1);
        *param_1 = 0;
      }
    }
    else {
      iVar11 = FUN_00a7c8a0();
      fVar1 = *(float *)(iVar11 + 0x40);
      fVar2 = *(float *)(iVar11 + 0x44);
      fVar3 = *(float *)(iVar11 + 0x48);
      uVar9 = 0;
      auStack_98[local_158 + 2] = uStack_15c;
      fVar1 = fStack_130 - fVar1;
      fVar2 = fStack_12c - fVar2;
      fVar3 = fStack_128 - fVar3;
      fStack_134 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
      *(float *)(local_10c + uStack_15c * 4 + -4) = fStack_134;
      if (3 < (int)local_158) {
        iVar11 = (local_158 - 4 >> 2) + 1;
        uVar9 = iVar11 * 4;
        puVar10 = auStack_98 + local_158;
        do {
          uVar8 = puVar10[2];
          if (*(float *)(local_10c + uVar8 * 4 + -4) < *(float *)(local_10c + puVar10[1] * 4 + -4))
          {
            puVar10[2] = puVar10[1];
            puVar10[1] = uVar8;
          }
          uVar8 = puVar10[1];
          if (*(float *)(local_10c + uVar8 * 4 + -4) < *(float *)(local_10c + *puVar10 * 4 + -4)) {
            puVar10[1] = *puVar10;
            *puVar10 = uVar8;
          }
          uVar8 = *puVar10;
          if (*(float *)(local_10c + uVar8 * 4 + -4) < *(float *)(local_10c + puVar10[-1] * 4 + -4))
          {
            *puVar10 = puVar10[-1];
            puVar10[-1] = uVar8;
          }
          uVar8 = puVar10[-1];
          if (*(float *)(local_10c + uVar8 * 4 + -4) < *(float *)(local_10c + puVar10[-2] * 4 + -4))
          {
            puVar10[-1] = puVar10[-2];
            puVar10[-2] = uVar8;
          }
          puVar10 = puVar10 + -4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      if (uVar9 < local_158) {
        iVar11 = local_158 - uVar9;
        puVar10 = auStack_98 + iVar11 + 2;
        do {
          uVar9 = *puVar10;
          if (*(float *)(local_10c + uVar9 * 4 + -4) < *(float *)(local_10c + puVar10[-1] * 4 + -4))
          {
            *puVar10 = puVar10[-1];
            puVar10[-1] = uVar9;
          }
          puVar10 = puVar10 + -1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      local_158 = local_158 + 1;
      if (*param_1 == 0) {
        iVar11 = cEnemyTargetDispParts::cEnemyTargetDispParts();
        *param_1 = iVar11;
        if (iVar11 == 0) goto LAB_00d2f8fc;
      }
      piVar6 = (int *)FUN_00a7c8a0();
      if (piVar6 != (int *)0x0) {
        fStack_160 = (float)piVar6[99];
        iVar11 = piVar6[0x66];
        if (fStack_160 == -1.0) {
          puVar12 = &DAT_01be9c78;
          (**(code **)(*piVar6 + 4))(&DAT_01be9c78);
          FUN_00dd6d80(puVar12);
          iVar7 = FUN_00a81330();
          if ((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
            fStack_160 = *(float *)(iVar7 + 0x18c);
            iVar11 = *(int *)(iVar7 + 0x198);
          }
        }
        if (fStack_160 < 0.0) {
          fStack_160 = 1000.0;
        }
        if (iVar11 == -1) {
          fStack_160 = fStack_160 * 0.85;
        }
        iVar11 = FUN_00a12210(piVar6[0x20b]);
        if (iVar11 != 0) {
          if (piVar6[0x12d] == 0x20140) {
            uStack_120 = 0;
            uStack_11c = 0x3e8ccccd;
            uStack_118 = 0x3d03126f;
            uStack_114 = 0x3f800000;
            D3DXVec4Transform(&uStack_150,&uStack_120,iVar11 + 0x10);
          }
          else {
            uStack_150 = *(undefined4 *)(iVar11 + 0x40);
            uStack_14c = *(undefined4 *)(iVar11 + 0x44);
            uStack_148 = *(undefined4 *)(iVar11 + 0x48);
            uStack_144 = 0;
          }
          iVar11 = *param_1;
          uVar4 = (&DAT_01dc0d58)[uStack_15c];
          *(int *)(iVar11 + 0x34) = piVar6[0x12d];
          *(undefined4 *)(iVar11 + 0x40) = uStack_150;
          *(undefined4 *)(iVar11 + 0x44) = uStack_14c;
          *(undefined4 *)(iVar11 + 0x48) = uStack_148;
          *(undefined4 *)(iVar11 + 0x4c) = uStack_144;
          *(undefined4 *)(iVar11 + 0x54) = uVar4;
          *(float *)(iVar11 + 0x50) = fStack_134;
          *(float *)(iVar11 + 0x60) = fStack_160;
        }
      }
    }
LAB_00d2f8fc:
    uStack_15c = uStack_15c + 1;
    param_1 = param_1 + 1;
    if (0x1f < uStack_15c) {
      uVar9 = 0;
      piVar6 = piStack_138;
      do {
        iVar11 = *piVar6;
        if (iVar11 != 0) {
          uVar8 = 0;
          if (local_158 != 0) {
            do {
              if (auStack_98[uVar8 + 2] == uVar9) {
                if (*(int *)(iVar11 + 0x30) == 0) {
                  *(uint *)(iVar11 + 0x5c) = uVar8 * 0xc;
                }
                break;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < local_158);
          }
          (**(code **)(*(int *)*piVar6 + 4))();
        }
        (&DAT_01dc0cd8)[uVar9] = (&DAT_01dc0c58)[uVar9];
        (&DAT_01dc0c58)[uVar9] = 0;
        (&DAT_01dc0d58)[uVar9] = 0;
        (&DAT_01dc00a8)[uVar9] = 0;
        uVar9 = uVar9 + 1;
        piVar6 = piVar6 + 1;
        if (0x1f < uVar9) {
          return;
        }
      } while( true );
    }
  } while( true );
}

