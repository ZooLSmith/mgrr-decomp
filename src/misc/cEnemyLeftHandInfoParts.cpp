// src/misc/cEnemyLeftHandInfoParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8330..00D2E9D0, 6 functions

#include "mgrr.h"
#include "cEnemyLeftHandInfoParts.h"

// 00CB8330  cEnemyLeftHandInfoParts::vf08  size=142  [class]
void __fastcall cEnemyLeftHandInfoParts::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x8a);
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x14a);
  }
  *(uint *)(param_1 + 0x24) = uVar3;
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x28) = uVar3;
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cab4a0(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CEDED0  cEnemyLeftHandInfoParts::vf00  size=63  [class]
undefined4 * __thiscall cEnemyLeftHandInfoParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CEDF10  FUN_00cedf10  size=91  [callgraph]
void __fastcall FUN_00cedf10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(5);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 1;
  }
  return;
}

// 00CEDF70  FUN_00cedf70  size=95  [callgraph]
void __fastcall FUN_00cedf70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cded00(*(undefined4 *)(param_1 + 0x24),4);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x20) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  return;
}

// 00CFFC80  cEnemyLeftHandInfoParts::vf14  size=937  [class]
void __fastcall cEnemyLeftHandInfoParts::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    if ((*(int *)(param_1 + 0x34) != -1) &&
       (*(float *)(param_1 + 0x60) <= *(float *)(param_1 + 0x74))) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    break;
  case 1:
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x6c)) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdef90(1,1);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(3);
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar4 = FUN_00cdf400(3), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0x30) = 3;
    }
    break;
  case 3:
    if ((*(int *)(param_1 + 0x34) == -1) ||
       (*(float *)(param_1 + 0x74) < *(float *)(param_1 + 0x60) !=
        (*(float *)(param_1 + 0x74) == *(float *)(param_1 + 0x60)))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar4 = FUN_00cdf400(2), iVar4 != 0)) {
      FUN_00cdeec0(4);
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
      local_34 = 1.0;
      iVar4 = FUN_00c12740(0);
      fVar1 = *(float *)(param_1 + 0x40) - *(float *)(iVar4 + 0x1b0);
      fVar3 = *(float *)(param_1 + 0x44) - *(float *)(iVar4 + 0x1b4);
      fVar2 = *(float *)(param_1 + 0x48) - *(float *)(iVar4 + 0x1b8);
      fVar1 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
      if ((NAN(fVar1) || 35.0 < fVar1 == (fVar1 == 35.0)) || (60.0 < fVar1)) {
        if (60.0 < fVar1) {
          local_34 = 0.7;
        }
      }
      else {
        local_34 = (0.3 - (fVar1 - 35.0) * 0.04 * 0.3) + 0.7;
      }
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x28),local_34);
      FUN_00cb2c20(*(undefined4 *)(param_1 + 0x28),local_34);
      iVar4 = FUN_00c12740(0);
      iVar5 = FUN_00c12740(0);
      local_30 = *(float *)(iVar5 + 0x1c0) - *(float *)(iVar4 + 0x1b0);
      local_2c = *(float *)(iVar5 + 0x1c4) - *(float *)(iVar4 + 0x1b4);
      local_28 = *(float *)(iVar5 + 0x1c8) - *(float *)(iVar4 + 0x1b8);
      local_24 = *(float *)(iVar5 + 0x1cc) - *(float *)(iVar4 + 0x1bc);
      fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_30 = 0.0;
        local_2c = 1.0;
        local_28 = 0.0;
      }
      fVar1 = (float)(*(uint *)(param_1 + 0x68) != 0);
      uVar6 = (uint)((1.0 - (fVar1 + fVar1)) * 0.2 <
                    *(float *)(param_1 + 0x58) * local_28 +
                    local_30 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x54) * local_2c);
      if (uVar6 != *(uint *)(param_1 + 0x68)) {
        if (uVar6 == 0) {
          FUN_00cedf70();
        }
        else {
          FUN_00cedf10();
        }
        *(uint *)(param_1 + 0x68) = uVar6;
      }
      if (*(int *)(param_1 + 100) == 0) {
        if (*(float *)(param_1 + 0x60) <= 10.0) {
          if (*(int *)(param_1 + 0x18) != 0) {
            FUN_00cdeec0(0);
          }
          FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
          *(undefined4 *)(param_1 + 100) = 1;
        }
      }
      else if (11.0 < *(float *)(param_1 + 0x60)) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(1);
        }
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return;
}

// 00D2E9D0  cEnemyLeftHandInfoParts::cEnemyLeftHandInfoParts  size=1107  [class]
void __fastcall cEnemyLeftHandInfoParts::cEnemyLeftHandInfoParts(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int *piVar16;
  undefined *puVar17;
  float fStack_8c;
  uint uStack_84;
  uint local_80;
  undefined1 auStack_60 [16];
  float local_50 [6];
  uint local_38 [13];
  
  local_50[0] = 0.0;
  local_50[1] = 0.0;
  local_50[2] = 0.0;
  local_50[3] = 0.0;
  local_50[4] = 0.0;
  local_50[5] = 0.0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_80 = 0;
  if (DAT_01dc0a4c != 0) {
    iVar15 = 8;
    piVar16 = param_1;
    do {
      piVar16 = piVar16 + 1;
      if ((undefined4 *)*piVar16 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar16)(1);
        *piVar16 = 0;
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    DAT_01dc0a4c = 0;
  }
  iVar15 = FUN_00c12740(0);
  fVar1 = *(float *)(iVar15 + 0x1b0);
  fVar2 = *(float *)(iVar15 + 0x1b4);
  param_1 = param_1 + 1;
  uStack_84 = 0;
  fVar3 = *(float *)(iVar15 + 0x1b8);
  piVar16 = param_1;
  do {
    if (((&DAT_01dc0228)[uStack_84] == 0) || ((&DAT_01dc0a0c)[uStack_84] == 0)) {
      puVar8 = (undefined4 *)*piVar16;
      if (((puVar8 != (undefined4 *)0x0) && (puVar8[0xb] == 0)) &&
         ((puVar8[0xc] != 0 || (puVar8[0xd] == -1)))) {
        (**(code **)*puVar8)(1);
        *piVar16 = 0;
      }
    }
    else {
      iVar15 = FUN_00a7c8a0();
      fVar4 = *(float *)(iVar15 + 0x40);
      fVar5 = *(float *)(iVar15 + 0x44);
      fVar6 = *(float *)(iVar15 + 0x48);
      uVar13 = 0;
      local_38[local_80 + 2] = uStack_84;
      fVar4 = fVar1 - fVar4;
      fVar5 = fVar2 - fVar5;
      fVar6 = fVar3 - fVar6;
      fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
      local_50[uStack_84] = fVar4;
      if (3 < (int)local_80) {
        iVar15 = (local_80 - 4 >> 2) + 1;
        uVar13 = iVar15 * 4;
        puVar14 = local_38 + local_80;
        do {
          uVar12 = puVar14[2];
          if (local_50[uVar12] < local_50[puVar14[1]]) {
            puVar14[2] = puVar14[1];
            puVar14[1] = uVar12;
          }
          uVar12 = puVar14[1];
          if (local_50[uVar12] < local_50[*puVar14]) {
            puVar14[1] = *puVar14;
            *puVar14 = uVar12;
          }
          uVar12 = *puVar14;
          if (local_50[uVar12] < local_50[puVar14[-1]]) {
            *puVar14 = puVar14[-1];
            puVar14[-1] = uVar12;
          }
          uVar12 = puVar14[-1];
          if (local_50[uVar12] < local_50[puVar14[-2]]) {
            puVar14[-1] = puVar14[-2];
            puVar14[-2] = uVar12;
          }
          puVar14 = puVar14 + -4;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      if (uVar13 < local_80) {
        iVar15 = local_80 - uVar13;
        puVar14 = local_38 + iVar15 + 2;
        do {
          uVar13 = *puVar14;
          if (local_50[uVar13] < local_50[puVar14[-1]]) {
            *puVar14 = puVar14[-1];
            puVar14[-1] = uVar13;
          }
          puVar14 = puVar14 + -1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      local_80 = local_80 + 1;
      if (*piVar16 == 0) {
        puVar8 = (undefined4 *)FUN_00dd3500(0x80,&DAT_01b7be50);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8[1] = 0;
          puVar8[0x18] = 0;
          puVar8[2] = 0;
          puVar8[0x1d] = 0;
          puVar8[3] = 0;
          puVar8[4] = 1;
          puVar8[5] = 0;
          puVar8[6] = 0;
          *puVar8 = vftable;
          puVar8[0xb] = 0;
          puVar8[0xc] = 0;
          puVar8[0x19] = 0;
          puVar8[0x1a] = 0;
          puVar8[0x1b] = 0;
          puVar8[0x1c] = 0;
          puVar8[0xd] = 0xffffffff;
          puVar8[0xe] = 0xffffffff;
          puVar8[0x10] = 0;
          puVar8[0x11] = 0;
          puVar8[0x12] = 0;
          puVar8[0x13] = 0x3f800000;
          puVar8[0x17] = 0x3f800000;
          puVar8[0x14] = 0;
          puVar8[0x15] = 0;
          puVar8[0x16] = 0;
          puVar8[3] = "cEnemyLeftHandInfoParts";
          puVar8[2] = 4;
          uVar9 = FUN_00d29960(0x1c);
          puVar8[5] = uVar9;
        }
        *piVar16 = (int)puVar8;
        if (puVar8 == (undefined4 *)0x0) goto LAB_00d2ed99;
      }
      piVar10 = (int *)FUN_00a7c8a0();
      if (piVar10 != (int *)0x0) {
        fStack_8c = (float)piVar10[99];
        iVar15 = piVar10[0x66];
        if (fStack_8c == -1.0) {
          puVar17 = &DAT_01be9c78;
          (**(code **)(*piVar10 + 4))(&DAT_01be9c78);
          FUN_00dd6d80(puVar17);
          iVar11 = FUN_00a81330();
          if ((iVar11 != 0) && (iVar11 = FUN_00a7c8a0(), iVar11 != 0)) {
            fStack_8c = *(float *)(iVar11 + 0x18c);
            iVar15 = *(int *)(iVar11 + 0x198);
          }
        }
        if (fStack_8c < 0.0) {
          fStack_8c = 1000.0;
        }
        if (iVar15 == -1) {
          fStack_8c = fStack_8c * 0.85;
        }
        iVar15 = FUN_00a12210(0xd);
        if (iVar15 != 0) {
          iVar11 = piVar10[0x12d];
          iVar7 = *piVar16;
          puVar8 = (undefined4 *)FUN_00a925a0(auStack_60);
          *(int *)(iVar7 + 0x34) = iVar11;
          *(undefined4 *)(iVar7 + 0x40) = *(undefined4 *)(iVar15 + 0x40);
          *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(iVar15 + 0x44);
          *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(iVar15 + 0x48);
          *(undefined4 *)(iVar7 + 0x4c) = *(undefined4 *)(iVar15 + 0x4c);
          *(undefined4 *)(iVar7 + 0x50) = *puVar8;
          *(undefined4 *)(iVar7 + 0x54) = puVar8[1];
          *(undefined4 *)(iVar7 + 0x58) = puVar8[2];
          *(undefined4 *)(iVar7 + 0x5c) = puVar8[3];
          *(float *)(iVar7 + 0x60) = fVar4;
          *(float *)(iVar7 + 0x74) = fStack_8c;
        }
      }
    }
LAB_00d2ed99:
    uStack_84 = uStack_84 + 1;
    piVar16 = piVar16 + 1;
    if (7 < uStack_84) {
      uVar13 = 0;
      do {
        iVar15 = *param_1;
        if (iVar15 != 0) {
          uVar12 = 0;
          if (local_80 != 0) {
            do {
              if (local_38[uVar12 + 2] == uVar13) {
                if (*(int *)(iVar15 + 0x30) == 0) {
                  *(uint *)(iVar15 + 0x70) = uVar12 * 0xc;
                }
                break;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < local_80);
          }
          (**(code **)(*(int *)*param_1 + 4))();
        }
        (&DAT_01dc0a2c)[uVar13] = (&DAT_01dc0a0c)[uVar13];
        (&DAT_01dc0a0c)[uVar13] = 0;
        (&DAT_01dc0228)[uVar13] = 0;
        uVar13 = uVar13 + 1;
        param_1 = param_1 + 1;
        if (7 < uVar13) {
          return;
        }
      } while( true );
    }
  } while( true );
}

