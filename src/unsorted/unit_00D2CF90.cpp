// src/unsorted/unit_00D2CF90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D2CF90..00D2DBE0, 3 functions

#include "types.h"

// 00D2CF90  FUN_00d2cf90  size=72  [run]
int FUN_00d2cf90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x410,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cCustomObjCtrlManager::cCustomObjCtrlManager_18();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cDryCellGauge2";
      *(undefined4 *)(iVar1 + 8) = 9;
      uVar2 = FUN_00d29960(0x13);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D2CFE0  FUN_00d2cfe0  size=3066  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d2cfe0(int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  char *pcVar11;
  uint local_c;
  uint local_8;
  uint local_4;
  
  FUN_00cb33d0(*(undefined4 *)(param_1 + 0x144),0x40000000,0x40000000,0x43960000,0x43480000);
  local_8 = 0;
  local_c = 0;
  do {
    iVar7 = local_c * 0x18;
    iVar4 = local_c - 1;
    fVar2 = 0.0;
    if (((0.0 < *(float *)(&DAT_01dc429c + local_c * 0x18)) &&
        (fVar2 = *(float *)(&DAT_01dc4294 + iVar7) / *(float *)(&DAT_01dc429c + iVar7),
        *(int *)(param_1 + 0x1c8) != 0)) && (local_c != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      uVar9 = *(uint *)(param_1 + 0x124 + iVar4 * 4);
      if (((iVar3 != 0) && (uVar9 < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = uVar9 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 1;
      }
    }
    if (0.0 < *(float *)(&DAT_01dc4294 + iVar7)) {
      local_8 = local_8 + 1;
    }
    if (*(float *)(&DAT_01dc429c + iVar7) == 0.0) {
      if (local_c != 0) {
        iVar7 = *(int *)(param_1 + 0x18);
        uVar9 = *(uint *)(param_1 + 0x124 + iVar4 * 4);
        if (((iVar7 != 0) && (uVar9 < *(uint *)(iVar7 + 0x80))) &&
           (iVar4 = uVar9 * 0x400 + *(int *)(iVar7 + 0x7c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x3b0) = 0;
        }
      }
    }
    else if ((fVar2 != *(float *)(param_1 + 0x3a8 + local_c * 4)) ||
            (*(uint *)(param_1 + 0x3c0) != DAT_01dc0880)) {
      local_4 = (uint)(local_c < DAT_01dc0880);
      if (local_c == 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        if (((iVar4 != 0) && (*(uint *)(param_1 + 0xc4) < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = *(uint *)(param_1 + 0xc4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(uint *)(iVar4 + 0x3b0) = (uint)(fVar2 == 1.0);
        }
        iVar4 = *(int *)(param_1 + 0x18);
        if (((iVar4 != 0) && (*(uint *)(param_1 + 0xcc) < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = *(uint *)(param_1 + 0xcc) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(uint *)(iVar4 + 0x3b0) = (uint)(fVar2 != 1.0);
        }
        iVar4 = *(int *)(param_1 + 0x18);
        uVar9 = *(uint *)(param_1 + 0xcc);
        if (((iVar4 != 0) && (uVar9 < *(uint *)(iVar4 + 0x80))) &&
           (*(int *)(iVar4 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
          if (uVar9 < *(uint *)(iVar4 + 0x80)) {
            iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar9 * 0x400;
          }
          else {
            iVar4 = 0;
          }
          *(float *)(iVar4 + 0xd0) = fVar2;
        }
      }
      else {
        iVar3 = param_1 + 0x30c + iVar4 * 0x1c;
        iVar6 = *(int *)(iVar3 + 0x18);
        iVar7 = param_1 + iVar4 * 0x14;
        if (((iVar6 != 0) && (*(uint *)(iVar7 + 0x148) < *(uint *)(iVar6 + 0x80))) &&
           (iVar6 = *(uint *)(iVar7 + 0x148) * 0x400 + *(int *)(iVar6 + 0x7c), iVar6 != 0)) {
          *(uint *)(iVar6 + 0x3b0) = (uint)(fVar2 == 1.0);
        }
        iVar6 = *(int *)(iVar3 + 0x18);
        if (((iVar6 != 0) && (*(uint *)(iVar7 + 0x150) < *(uint *)(iVar6 + 0x80))) &&
           (iVar6 = *(uint *)(iVar7 + 0x150) * 0x400 + *(int *)(iVar6 + 0x7c), iVar6 != 0)) {
          *(uint *)(iVar6 + 0x3b0) = (uint)(fVar2 != 1.0);
        }
        iVar3 = *(int *)(iVar3 + 0x18);
        uVar9 = *(uint *)(iVar7 + 0x150);
        if (((iVar3 != 0) && (uVar9 < *(uint *)(iVar3 + 0x80))) &&
           (*(int *)(iVar3 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
          if (uVar9 < *(uint *)(iVar3 + 0x80)) {
            iVar7 = *(int *)(iVar3 + 0x7c) + 0x2a0 + uVar9 * 0x400;
          }
          else {
            iVar7 = 0;
          }
          *(float *)(iVar7 + 0xd0) = fVar2;
        }
        if (*(int *)(param_1 + 0x1c8) != 0) {
          iVar7 = *(int *)(param_1 + 0x18);
          uVar9 = *(uint *)(param_1 + 0x124 + iVar4 * 4);
          if (((iVar7 != 0) && (uVar9 < *(uint *)(iVar7 + 0x80))) &&
             (iVar4 = uVar9 * 0x400 + *(int *)(iVar7 + 0x7c), iVar4 != 0)) {
            *(uint *)(iVar4 + 0x3b0) = local_4;
          }
        }
      }
    }
    *(float *)(param_1 + 0x3a8 + local_c * 4) = fVar2;
    local_c = local_c + 1;
  } while (local_c < 6);
  iVar4 = 0;
  local_c = 0;
  if ((int)local_8 < 2) {
    if (_DAT_01dc4294 == 0.0) {
      iVar4 = 2;
      local_c = 2;
    }
    else if (_DAT_01dc4294 < _DAT_01dc429c) {
      iVar4 = 1;
      local_c = 1;
    }
  }
  if ((local_8 != *(uint *)(param_1 + 0x1b0)) || (*(int *)(param_1 + 0x1b4) != iVar4)) {
    piVar8 = (int *)(param_1 + 0x324);
    iVar4 = 5;
    do {
      if (*piVar8 != 0) {
        FUN_00cdeec0(local_c);
      }
      piVar8 = piVar8 + 7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(local_c);
    }
    if ((int)local_8 < *(int *)(param_1 + 0x1b0)) {
      FUN_00e5e050("core_se_btl_battery_lost",0);
    }
    if (*(int *)(param_1 + 0x1b4) != local_c) {
      uVar9 = ~(DAT_01bea094 >> 0x12) & 1;
      if (local_c == 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xe0) < *(uint *)(iVar4 + 0x80))) &&
            (piVar8 = *(int **)(*(uint *)(param_1 + 0xe0) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
            piVar8 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar8 + 8))(), iVar4 == 3)) {
          uVar5 = FUN_00e03ea0("HUD_PIECE_38");
          piVar8[0x2a] = -1;
          piVar8[0x2b] = 0;
          if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
             (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
            piVar8[0x2a] = iVar4;
            piVar8[0x2b] = 0;
            piVar8[0x2e] = 0;
          }
        }
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe0),uVar9,3);
        if (*(int *)(param_1 + 0x1b4) == 1) {
          FUN_00e5e050("core_se_btl_battery_blue",0);
        }
        *(undefined4 *)(param_1 + 0x300) = 1;
      }
      else if (local_c == 1) {
        iVar4 = *(int *)(param_1 + 0x18);
        if (((iVar4 != 0) && (*(uint *)(param_1 + 0xe0) < *(uint *)(iVar4 + 0x80))) &&
           ((piVar8 = *(int **)(*(uint *)(param_1 + 0xe0) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
            piVar8 != (int *)0x0 && (iVar4 = (**(code **)(*piVar8 + 8))(), iVar4 == 3)))) {
          uVar5 = FUN_00e03ea0("HUD_PIECE_39");
          piVar8[0x2a] = -1;
          piVar8[0x2b] = 0;
          if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
             (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
            piVar8[0x2a] = iVar4;
            piVar8[0x2b] = 0;
            piVar8[0x2e] = 0;
          }
        }
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe0),uVar9,3);
        if ((*(int *)(param_1 + 0x1b4) == 0) || (*(int *)(param_1 + 0x1b4) == -1)) {
          FUN_00e5e050("core_se_btl_battery_yellow",0);
        }
        *(undefined4 *)(param_1 + 0x300) = 0;
      }
      else if (local_c == 2) {
        iVar4 = *(int *)(param_1 + 0x18);
        if (((iVar4 != 0) && (*(uint *)(param_1 + 0xe0) < *(uint *)(iVar4 + 0x80))) &&
           ((piVar8 = *(int **)(*(uint *)(param_1 + 0xe0) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
            piVar8 != (int *)0x0 && (iVar4 = (**(code **)(*piVar8 + 8))(), iVar4 == 3)))) {
          uVar5 = FUN_00e03ea0("HUD_PIECE_40");
          piVar8[0x2a] = -1;
          piVar8[0x2b] = 0;
          if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
             (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
            piVar8[0x2a] = iVar4;
            piVar8[0x2b] = 0;
            piVar8[0x2e] = 0;
          }
        }
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe0),uVar9,3);
        *(undefined4 *)(param_1 + 0x300) = 0;
      }
    }
  }
  if (local_8 != DAT_01dc0880) {
    if (*(int *)(param_1 + 0x3f0) == 1) {
      *(undefined4 *)(param_1 + 0x3f0) = 0;
    }
    goto LAB_00d2dad2;
  }
  uVar9 = ~(DAT_01bea094 >> 0x12) & 1;
  if (*(float *)(&DAT_01dc4284 + local_8 * 0x18) < *(float *)(&DAT_01dc427c + local_8 * 0x18) !=
      (*(float *)(&DAT_01dc4284 + local_8 * 0x18) == *(float *)(&DAT_01dc427c + local_8 * 0x18))) {
    if (*(int *)(param_1 + 0x3f0) == 0) {
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x138) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x138) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0x138),3);
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0xe0) < *(uint *)(iVar4 + 0x80))) &&
         ((piVar8 = *(int **)(*(int *)(iVar4 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0xe0) * 0x400),
          piVar8 != (int *)0x0 && (iVar4 = (**(code **)(*piVar8 + 8))(), iVar4 == 3)))) {
        uVar5 = FUN_00e03ea0("HUD_PIECE_37");
        piVar8[0x2a] = -1;
        piVar8[0x2b] = 0;
        if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
           (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
          piVar8[0x2a] = iVar4;
          piVar8[0x2b] = 0;
          piVar8[0x2e] = 0;
        }
      }
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe0),uVar9,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe4),uVar9,3);
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0xc4) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0xc4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0xcc) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0xcc) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0xcc),3);
      }
      puVar10 = (uint *)(param_1 + 0x150);
      piVar8 = (int *)(param_1 + 0x324);
      local_4 = 5;
      do {
        iVar4 = *piVar8;
        if (((iVar4 != 0) && (puVar10[-2] < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = puVar10[-2] * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x3b0) = 1;
        }
        iVar4 = *piVar8;
        if (((iVar4 != 0) && (*puVar10 < *(uint *)(iVar4 + 0x80))) &&
           (iVar4 = *puVar10 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x3b0) = 1;
        }
        iVar4 = *piVar8;
        if (((iVar4 != 0) && (*puVar10 < *(uint *)(iVar4 + 0x80))) &&
           ((iVar4 = *puVar10 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0 &&
            (iVar7 = FUN_00cc8370(3), iVar7 != 0)))) {
          *(undefined4 *)(iVar4 + 0x3d8) = *(undefined4 *)(iVar7 + 4);
          *(undefined4 *)(iVar4 + 0x3dc) = *(undefined4 *)(iVar7 + 8);
          *(undefined1 *)(iVar4 + 0x3ec) = *(undefined1 *)(iVar7 + 0xc);
          *(undefined1 *)(iVar4 + 0x3ed) = 0;
          *(undefined4 *)(iVar4 + 0x3d4) = *(undefined4 *)(iVar7 + 4);
          uVar5 = *(undefined4 *)(iVar7 + 4);
          *(undefined1 *)(iVar4 + 0x3ee) = 1;
          *(undefined4 *)(iVar4 + 0x3d0) = uVar5;
          *(undefined4 *)(iVar4 + 0x3fc) = 3;
        }
        puVar10 = puVar10 + 5;
        piVar8 = piVar8 + 7;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      if ((DAT_01bea064 & 0x1000) == 0) {
        FUN_00e5e050("core_se_btl_battery_max",0);
      }
    }
    *(undefined4 *)(param_1 + 0x3f0) = 1;
    goto LAB_00d2dad2;
  }
  if (*(int *)(param_1 + 0x3f0) == 1) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cded00(*(undefined4 *)(param_1 + 0x138),4);
    }
    uVar1 = *(uint *)(param_1 + 0xe0);
    iVar4 = *(int *)(param_1 + 0x18);
    if (local_c == 0) {
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         ((piVar8 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), piVar8 != (int *)0x0
          && (iVar4 = (**(code **)(*piVar8 + 8))(), iVar4 == 3)))) {
        pcVar11 = "HUD_PIECE_38";
LAB_00d2d929:
        uVar5 = FUN_00e03ea0(pcVar11);
        piVar8[0x2b] = 0;
        piVar8[0x2a] = -1;
        if (((piVar8[5] != 0) && (*(int *)(piVar8[5] + 4) != 0)) &&
           (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
          piVar8[0x2e] = 0;
          piVar8[0x2b] = 0;
          piVar8[0x2a] = iVar4;
        }
      }
    }
    else if ((((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
             (piVar8 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
             piVar8 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar8 + 8))(), iVar4 == 3)) {
      pcVar11 = "HUD_PIECE_39";
      goto LAB_00d2d929;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe0),uVar9,3);
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0xc4) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0xc4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x324);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x148) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x148) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x340);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x15c) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x15c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x35c);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x170) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x170) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x378);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x184) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x184) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x394);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x198) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x198) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar9 = *(uint *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  if ((((((iVar4 != 0) && (uVar9 < *(uint *)(iVar4 + 0x80))) &&
        (iVar7 = uVar9 * 0x400 + *(int *)(iVar4 + 0x7c), iVar7 != 0)) &&
       ((*(int *)(iVar7 + 0x3b0) != 0 && (iVar7 = FUN_00cdf400(4), iVar7 != 0)))) &&
      (uVar9 < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = uVar9 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
LAB_00d2dad2:
  FUN_00d22bf0(0);
  FUN_00d13c20(0);
  if (((byte)DAT_01bea090 & 0x80) == 0) {
    DAT_01dc0860 = DAT_01dc0898;
    DAT_01dc0864 = DAT_01dc089c;
    FUN_00cfecd0();
  }
  _DAT_01dc4290 = 0;
  _DAT_01dc4294 = 0.0;
  _DAT_01dc4298 = 0;
  _DAT_01dc429c = 0.0;
  _DAT_01dc42a8 = 0;
  _DAT_01dc42ac = 0;
  _DAT_01dc42b0 = 0;
  _DAT_01dc42b4 = 0;
  _DAT_01dc42c0 = 0;
  _DAT_01dc42c4 = 0;
  _DAT_01dc42c8 = 0;
  _DAT_01dc42cc = 0;
  _DAT_01dc42d8 = 0;
  _DAT_01dc42dc = 0;
  _DAT_01dc42e0 = 0;
  _DAT_01dc42e4 = 0;
  _DAT_01dc42f0 = 0;
  _DAT_01dc42f4 = 0;
  _DAT_01dc42f8 = 0;
  _DAT_01dc42fc = 0;
  _DAT_01dc4308 = 0;
  _DAT_01dc430c = 0;
  _DAT_01dc4310 = 0;
  _DAT_01dc4314 = 0;
  if (DAT_01dc0880 < *(uint *)(param_1 + 0x3c0)) {
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  *(uint *)(param_1 + 0x1b0) = local_8;
  *(uint *)(param_1 + 0x1b4) = local_c;
  *(uint *)(param_1 + 0x3c0) = DAT_01dc0880;
  return;
}

// 00D2DBE0  FUN_00d2dbe0  size=214  [run]
int __thiscall FUN_00d2dbe0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 3)) {
      piVar2 = (int *)0x0;
    }
    FUN_00d1fa60(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

