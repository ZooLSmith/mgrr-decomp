// src/misc/cStingerMissileLockOnParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE3E80..00D34460, 5 functions

#include "mgrr.h"
#include "cStingerMissileLockOnParts.h"

// 00CE3E80  cStingerMissileLockOnParts::vf00  size=63  [class]
undefined4 * __thiscall cStingerMissileLockOnParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CF2370  cStingerMissileLockOnParts::vf08  size=33  [class]
void __fastcall cStingerMissileLockOnParts::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CF23A0  cStingerMissileLockOnParts::create  size=220  [class]
void __fastcall cStingerMissileLockOnParts::create(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(1);
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
  }
  else if (((*(int *)(param_1 + 0x1c) == 1) && (*(int *)(param_1 + 0x18) != 0)) &&
          (iVar1 = FUN_00cdf400(1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  iVar1 = FUN_00d9fa80(&local_20,param_1 + 0x30);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = local_18;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    }
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x44)) {
    if (*(int *)(param_1 + 0x40) == 0) {
      if (*(int *)(param_1 + 0x18) == 0) goto LAB_00cf246a;
      uVar2 = 3;
    }
    else {
      if (*(int *)(param_1 + 0x18) == 0) goto LAB_00cf246a;
      uVar2 = 2;
    }
    FUN_00cdeec0(uVar2);
  }
LAB_00cf246a:
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 00D34410  FUN_00d34410  size=69  [callgraph]
int FUN_00d34410(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x70,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cStingerMissileSiteParts::cStingerMissileSiteParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cStingerMissileSiteParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(0x49);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D34460  cStingerMissileLockOnParts::cStingerMissileLockOnParts  size=722  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cStingerMissileLockOnParts::cStingerMissileLockOnParts(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int local_4;
  
  if (DAT_01dc1340 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      uVar5 = FUN_00d34410();
      *(undefined4 *)(param_1 + 4) = uVar5;
      _DAT_01dc1344 = 1;
    }
    uVar10 = 0;
    piVar7 = &DAT_01dbf8f4;
    puVar6 = &DAT_01dc4ee8;
    local_4 = 3;
    uVar5 = _DAT_01dc4ed0;
    uVar1 = _DAT_01dc4ed4;
    uVar2 = _DAT_01dc4ed8;
    uVar3 = _DAT_01dc4edc;
    do {
      if ((piVar7[-1] != 0) && (piVar7[-1] == DAT_01dbf89c)) {
        uVar10 = 1;
        uVar5 = puVar6[-2];
        uVar1 = puVar6[-1];
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
      }
      if ((*piVar7 != 0) && (*piVar7 == DAT_01dbf89c)) {
        uVar10 = 1;
        uVar5 = puVar6[2];
        uVar1 = puVar6[3];
        uVar2 = puVar6[4];
        uVar3 = puVar6[5];
      }
      if ((piVar7[1] != 0) && (piVar7[1] == DAT_01dbf89c)) {
        uVar10 = 1;
        uVar5 = puVar6[6];
        uVar1 = puVar6[7];
        uVar2 = puVar6[8];
        uVar3 = puVar6[9];
      }
      if ((piVar7[2] != 0) && (piVar7[2] == DAT_01dbf89c)) {
        uVar10 = 1;
        uVar5 = puVar6[10];
        uVar1 = puVar6[0xb];
        uVar2 = puVar6[0xc];
        uVar3 = puVar6[0xd];
      }
      if ((piVar7[3] != 0) && (piVar7[3] == DAT_01dbf89c)) {
        uVar10 = 1;
        uVar5 = puVar6[0xe];
        uVar1 = puVar6[0xf];
        uVar2 = puVar6[0x10];
        uVar3 = puVar6[0x11];
      }
      piVar7 = piVar7 + 5;
      puVar6 = puVar6 + 0x14;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    iVar9 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar9 + 0x30) = uVar5;
    *(undefined4 *)(iVar9 + 0x34) = uVar1;
    *(undefined4 *)(iVar9 + 0x38) = uVar2;
    *(undefined4 *)(iVar9 + 0x3c) = uVar3;
    *(undefined4 *)(iVar9 + 0x40) = uVar10;
    *(undefined4 *)(iVar9 + 0x24) = 1;
    *(uint *)(*(int *)(param_1 + 4) + 0x44) = (uint)(DAT_01dbf89c != 0);
  }
  uVar8 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6[10] == 2) {
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
        *(undefined4 *)(param_1 + 4) = 0;
      }
      _DAT_01dc1344 = 0;
    }
  }
  piVar11 = (int *)(param_1 + 8);
  piVar7 = piVar11;
  do {
    if (*(int *)((int)&DAT_01dbf8a0 + uVar8) == 0) {
      *(undefined4 *)((int)&DAT_01dbf8f0 + uVar8) = 0;
    }
    if (*(int *)((int)&DAT_01dbf8f0 + uVar8) == 0) {
LAB_00d34671:
      puVar6 = (undefined4 *)*piVar7;
      if (puVar6 != (undefined4 *)0x0) goto LAB_00d34677;
    }
    else {
      puVar6 = (undefined4 *)*piVar7;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7be50);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 1;
          puVar6[5] = 0;
          puVar6[6] = 0;
          *puVar6 = vftable;
          puVar6[7] = 0;
          puVar6[0x10] = 0;
          puVar6[0x11] = 0;
          puVar6[0xc] = 0;
          puVar6[0xd] = 0;
          puVar6[0xe] = 0;
          puVar6[0xf] = 0;
          puVar6[3] = "cStingerMissileLockOnParts";
          puVar6[2] = 5;
          uVar5 = FUN_00d29960(0x48);
          puVar6[5] = uVar5;
        }
        *piVar7 = (int)puVar6;
        goto LAB_00d34671;
      }
LAB_00d34677:
      if (puVar6[7] == 2) {
        (**(code **)*puVar6)(1);
        *piVar7 = 0;
      }
    }
    uVar8 = uVar8 + 4;
    piVar7 = piVar7 + 1;
    if (0x3b < uVar8) {
      puVar6 = &DAT_01dc4ee8;
      iVar9 = 0;
      local_4 = 0xf;
      do {
        if (*piVar11 != 0) {
          if (*(int *)((int)&DAT_01dbf8a0 + iVar9) != 0) {
            iVar4 = *piVar11;
            *(undefined4 *)(iVar4 + 0x30) = puVar6[-2];
            *(undefined4 *)(iVar4 + 0x34) = puVar6[-1];
            *(undefined4 *)(iVar4 + 0x38) = *puVar6;
            *(undefined4 *)(iVar4 + 0x3c) = puVar6[1];
            *(undefined4 *)(iVar4 + 0x20) = 1;
            *(undefined4 *)(*piVar11 + 0x40) = 0;
            if ((DAT_01dbf89c != 0) && (*(int *)((int)&DAT_01dbf8f0 + iVar9) == DAT_01dbf89c)) {
              *(undefined4 *)(*piVar11 + 0x40) = 1;
            }
          }
          (**(code **)(*(int *)*piVar11 + 4))();
        }
        *(undefined4 *)((int)&DAT_01dbf8a0 + iVar9) = 0;
        puVar6 = puVar6 + 4;
        iVar9 = iVar9 + 4;
        piVar11 = piVar11 + 1;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      DAT_01dc1340 = 0;
      DAT_01dbf89c = 0;
      return;
    }
  } while( true );
}

