// src/unsorted/unit_00D32290.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D32290..00D32E00, 4 functions

#include "types.h"

// 00D32290  FUN_00d32290  size=72  [run]
int FUN_00d32290(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x1a0,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cRadarMap::cRadarMap();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cRadarMap";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(0x37);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D322E0  FUN_00d322e0  size=1530  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d322e0(int param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 local_5c;
  undefined4 local_58;
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
  undefined1 local_20 [28];
  
  iVar4 = DAT_01dc2d60;
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x18) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 0:
    if ((*(int *)(param_1 + 0x5c) == 0) &&
       ((DAT_01dc14c8 == 0 || (iVar3 = FUN_00b8c050(), iVar3 == 0)))) {
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x3c) = 9;
        FUN_00cbdbd0(1);
      }
      break;
    }
    iVar4 = FUN_00d29960(4);
    *(int *)(param_1 + 0x4c) = iVar4;
    *(undefined4 *)(iVar4 + 0x214) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = 0;
    piVar7 = (int *)(param_1 + 0x50);
    iVar4 = 2;
    do {
      iVar3 = FUN_00d29960(5);
      *piVar7 = iVar3;
      *(undefined4 *)(iVar3 + 0x1e8) = 0;
      iVar3 = *piVar7;
      piVar7 = piVar7 + 1;
      iVar4 = iVar4 + -1;
      *(undefined4 *)(iVar3 + 4) = 0;
    } while (iVar4 != 0);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    goto LAB_00d323a8;
  case 1:
LAB_00d323a8:
    if ((DAT_01bea090 & 0x80000000) == 0) {
      if ((DAT_01dc14f8 != 0) && (2 < *(int *)(DAT_01dc14f8 + 0x228))) {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      }
    }
    else if ((DAT_01dc14fc != 0) && (2 < *(int *)(DAT_01dc14fc + 0x8c))) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
    break;
  case 2:
    uVar6 = *(uint *)(param_1 + 0x40) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    uVar9 = 0xc;
    *(uint *)(*(int *)(param_1 + 0x50) + 4) = (uint)((int)uVar6 < 2);
    goto LAB_00d3241e;
  case 3:
    uVar6 = *(uint *)(param_1 + 0x40) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x4c) + 4) = (uint)((int)uVar6 < 2);
    fVar2 = _DAT_018b8c60;
    uVar6 = *(uint *)(param_1 + 0x40) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x54) + 4) = (uint)((int)uVar6 < 2);
    fVar2 = fVar2 + *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x44) = fVar2;
    if (fVar2 <= 1.0) {
      uVar9 = 0xc;
    }
    else {
      uVar9 = 0xc;
      *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    }
    goto LAB_00d3241e;
  case 4:
    fVar2 = _DAT_018b8c60 + *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x44) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x44) == 1.0) {
      FUN_00e5e050("core_se_sys_map_on",0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x38),1);
      *(undefined4 *)(*(int *)(param_1 + 0x54) + 4) = 0;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
    break;
  case 5:
    uVar6 = *(uint *)(param_1 + 0x40) & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cbdbd0((int)uVar6 < 2);
    iVar4 = FUN_00ca8620(param_1 + 0x40,8);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    break;
  case 6:
    uVar9 = 0x1e;
LAB_00d3241e:
    iVar4 = FUN_00ca8620(param_1 + 0x40,uVar9);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
    break;
  case 7:
    uVar6 = *(uint *)(param_1 + 0x40) & 0x80000003;
    puVar1 = (uint *)(param_1 + 0x40);
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x38),2 < (int)uVar6);
    uVar6 = *puVar1 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x4c) + 4) = (uint)(2 < (int)uVar6);
    uVar6 = *puVar1 & 0x80000003;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x50) + 4) = (uint)(2 < (int)uVar6);
    uVar8 = FUN_00ca8620(puVar1,0xc);
    piVar7 = (int *)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_00cae160();
        *(undefined4 *)(param_1 + 0x4c) = 0;
        piVar7 = extraout_EDX;
      }
      iVar4 = 2;
      do {
        if (*piVar7 != 0) {
          FUN_00cae160();
          *extraout_EDX_00 = 0;
          piVar7 = extraout_EDX_00;
        }
        piVar7 = piVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x3c) = 9;
  case 9:
    if ((DAT_018b9174 == 0xd30) && ((DAT_01bea090 & 0x40) == 0)) {
      if ((iVar4 != *(int *)(param_1 + 0x184)) &&
         (((iVar4 == 0 && (iVar3 = FUN_00d4f120("PD30_M2_CLEAR",1), iVar3 != 0)) &&
          (iVar3 = FUN_00d4f120("PD30_MISSION3",0), iVar3 == 0)))) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      *(int *)(param_1 + 0x184) = iVar4;
    }
    break;
  case 10:
    uVar6 = *(uint *)(param_1 + 0x40) & 0x80000001;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffffe) + 1;
    }
    FUN_00cbdbd0(0 < (int)uVar6);
    iVar3 = FUN_00ca8620(param_1 + 0x40,4);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
    goto LAB_00d3267e;
  case 0xb:
LAB_00d3267e:
    if ((DAT_01bea090 & 0x40) == 0) {
      *(uint *)(param_1 + 0x3c) = -(uint)(iVar4 != 0) & 9;
    }
  }
  if (*(int *)(param_1 + 0x3c) < 10) {
    if ((DAT_01bea090 & 0x40) != 0) {
      iVar4 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
          *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x50);
      if (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
          *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
          *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      *(undefined4 *)(param_1 + 0x3c) = 10;
    }
    if (((0 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0x3c) < 8)) &&
       (*(int *)(param_1 + 0x5c) == 0)) {
      FUN_00cbdbd0(1);
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
          *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x50);
      if (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
          *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
          *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar4 + 0x80))) &&
         (iVar4 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0x3b0) = 0;
      }
      *(undefined4 *)(param_1 + 0x3c) = 8;
    }
  }
  if ((*(int *)(param_1 + 0x3c) < 1) || (7 < *(int *)(param_1 + 0x3c))) {
    if (DAT_01dc1304 != 0) {
      DAT_01dc1304 = 0;
      return;
    }
  }
  else {
    puVar5 = (undefined4 *)FUN_00caac30(2);
    local_50 = *puVar5;
    local_4c = puVar5[1];
    local_48 = puVar5[2];
    local_44 = puVar5[3];
    FUN_00d9fa80(&local_30,&local_50);
    iVar4 = *(int *)(param_1 + 0x50);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) {
      *(undefined4 *)(iVar4 + 0x80) = local_30;
      *(undefined4 *)(iVar4 + 0x84) = local_2c;
    }
    FUN_00cbd8a0(&local_5c);
    local_40 = local_5c;
    local_3c = local_58;
    local_38 = local_54;
    local_34 = 0x3f800000;
    FUN_00caccc0(local_20,&local_40);
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00cb5540(&local_30,local_20,*(undefined4 *)(param_1 + 0x44));
    }
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 != 0) {
      uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x204);
      if (*(int *)(iVar4 + 0x18) != 0) {
        *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x200);
        *(undefined4 *)(iVar4 + 0x84) = uVar9;
        return;
      }
    }
  }
  return;
}

// 00D32910  FUN_00d32910  size=816  [run]
void __fastcall FUN_00d32910(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
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
  undefined1 local_20 [28];
  
  switch(*(undefined4 *)(param_1 + 0x170)) {
  case 0:
    if (*(int *)(param_1 + 0x16c) != 0) {
      *(undefined4 *)(param_1 + 0x16c) = 0;
      iVar3 = FUN_00d29960(4);
      *(int *)(param_1 + 0x178) = iVar3;
      *(undefined4 *)(iVar3 + 0x214) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x178) + 4) = 0;
      piVar6 = (int *)(param_1 + 0x17c);
      local_60 = 2;
      do {
        iVar3 = FUN_00d29960(5);
        *piVar6 = iVar3;
        *(undefined4 *)(iVar3 + 0x1e8) = 0;
        iVar3 = *piVar6;
        piVar6 = piVar6 + 1;
        local_60 = local_60 + -1;
        *(undefined4 *)(iVar3 + 4) = 0;
      } while (local_60 != 0);
      *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
    }
    break;
  case 1:
    if ((DAT_01dc14f8 != 0) && (6 < *(int *)(DAT_01dc14f8 + 0x228))) {
      *(undefined4 *)(param_1 + 0x170) = 2;
    }
    break;
  case 2:
    uVar5 = *(uint *)(param_1 + 0x174) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    iVar3 = *(int *)(param_1 + 0x17c);
    goto LAB_00d329ef;
  case 3:
    uVar5 = *(uint *)(param_1 + 0x174) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x178) + 4) = (uint)((int)uVar5 < 2);
    uVar5 = *(uint *)(param_1 + 0x174) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    iVar3 = *(int *)(param_1 + 0x180);
LAB_00d329ef:
    bVar7 = (int)uVar5 < 2;
LAB_00d329f7:
    *(uint *)(iVar3 + 4) = (uint)bVar7;
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
    iVar2 = *(int *)(param_1 + 0x174);
    bVar8 = SBORROW4(iVar2,0xc);
    iVar3 = iVar2 + -0xc;
    bVar7 = iVar2 == 0xc;
LAB_00d32a0c:
    if (!bVar7 && bVar8 == iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
    }
    break;
  case 4:
    *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
    bVar8 = SBORROW4(*(int *)(param_1 + 0x174),6);
    iVar3 = *(int *)(param_1 + 0x174) + -6;
    bVar7 = iVar3 == 0;
    goto LAB_00d32a0c;
  case 5:
    uVar5 = *(uint *)(param_1 + 0x174) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x178) + 4) = (uint)(2 < (int)uVar5);
    uVar5 = *(uint *)(param_1 + 0x174) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x17c) + 4) = (uint)(2 < (int)uVar5);
    uVar5 = *(uint *)(param_1 + 0x174) & 0x80000003;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    iVar3 = *(int *)(param_1 + 0x180);
    bVar7 = 2 < (int)uVar5;
    goto LAB_00d329f7;
  case 6:
    if (*(int *)(param_1 + 0x178) != 0) {
      FUN_00cae160();
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x17c);
    if (iVar3 != 0) {
      if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
        *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x180);
    if (iVar3 != 0) {
      if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
        *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  if ((0 < *(int *)(param_1 + 0x170)) && (*(int *)(param_1 + 0x170) < 6)) {
    puVar4 = (undefined4 *)FUN_00caac30(2);
    local_50 = *puVar4;
    local_4c = puVar4[1];
    local_48 = puVar4[2];
    local_44 = puVar4[3];
    FUN_00d9fa80(&local_30,&local_50);
    iVar3 = *(int *)(param_1 + 0x17c);
    if (*(int *)(iVar3 + 0x18) != 0) {
      *(undefined4 *)(iVar3 + 0x80) = local_30;
      *(undefined4 *)(iVar3 + 0x84) = local_2c;
    }
    FUN_00cbdb40(&local_5c);
    local_40 = local_5c;
    local_3c = local_58;
    local_38 = local_54;
    local_34 = 0x3f800000;
    FUN_00caccc0(local_20,&local_40);
    FUN_00cb5540(&local_30,local_20,0x3f800000);
    iVar3 = *(int *)(param_1 + 0x180);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x178) + 0x204);
    if (*(int *)(iVar3 + 0x18) != 0) {
      *(undefined4 *)(iVar3 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x178) + 0x200);
      *(undefined4 *)(iVar3 + 0x84) = uVar1;
      return;
    }
  }
  return;
}

// 00D32E00  FUN_00d32e00  size=86  [run]
int FUN_00d32e00(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00dd3500(0x5e0,&DAT_01b7be50);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = cCustomObjCtrlManager::cCustomObjCtrlManager_24();
  if (iVar1 != 0) {
    *(char **)(iVar1 + 0xc) = "cResultDispParts";
    *(undefined4 *)(iVar1 + 8) = 8;
    iVar2 = FUN_00d29960(0x3e);
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1f8) = 1;
    }
  }
  return iVar1;
}

