// src/unsorted/unit_00D35090.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D35090..00D35870, 7 functions

#include "types.h"

// 00D35090  FUN_00d35090  size=72  [run]
int FUN_00d35090(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x240,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cTutorialDispParts::cTutorialDispParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cTutorialDispParts";
      *(undefined4 *)(iVar1 + 8) = 8;
      uVar2 = FUN_00d29960(0x4c);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D350E0  FUN_00d350e0  size=254  [run]
int __thiscall FUN_00d350e0(int param_1,uint param_2)

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
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
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
  local_8 = 0xffffffff;
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 3)) {
      piVar2 = (int *)0x0;
    }
    FUN_00d1fa60(piVar2,&local_54);
  }
  *(undefined4 *)(param_1 + 0x228) = local_8;
  *(undefined4 *)(param_1 + 0x22c) = local_4;
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00D351E0  FUN_00d351e0  size=915  [run]
int __fastcall FUN_00d351e0(int param_1)

{
  uint uVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float local_14;
  int local_10;
  
  local_10 = 0x18;
  puVar6 = (undefined4 *)(param_1 + 0x118);
  do {
    *(undefined4 *)(local_10 + 0x198 + param_1) = 0;
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && ((uint)puVar6[-2] < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = puVar6[-2] * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x188);
    iVar5 = *(int *)(iVar4 + -0x10 + local_10);
    if ((DAT_01dc1418 != '\0') && (*(int *)(iVar4 + local_10) != 0)) {
      iVar5 = *(int *)(iVar4 + local_10);
    }
    if ((iVar5 != 0) && (*(int *)(iVar4 + 0x10 + local_10) != 0)) {
      FUN_00cb2d60(*puVar6);
      FUN_00cb2d60(puVar6[1]);
      FUN_00ce4ff0(*puVar6,iVar5,0);
      FUN_00ce4ff0(puVar6[1],iVar5,0);
      fVar7 = (float10)FUN_00d350e0(*puVar6);
      local_14 = (float)fVar7;
      if (DAT_01dc2cd8 != 0) {
        if ((*(int *)(param_1 + 0x228) == 3) && (*(int *)(param_1 + 0x22c) == 3)) {
          iVar4 = FUN_00f98a90();
          fVar7 = (float10)iVar4 * (float10)0.00078125 + (float10)iVar4 * (float10)0.00078125;
        }
        else {
          if (*(int *)(param_1 + 0x228) != 5) goto LAB_00d352ee;
          iVar4 = FUN_00f98a90();
          fVar7 = (float10)iVar4 * (float10)0.00078125 * (float10)4.0;
        }
        fVar7 = (float10)local_14 - fVar7;
        local_14 = (float)fVar7;
      }
LAB_00d352ee:
      fVar7 = (float10)FUN_00cc04c0(puVar6[-1],(float)fVar7,0);
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = puVar6[-1];
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (uVar1 * 0x400 + 0x2a0 + *(int *)(iVar4 + 0x7c) != 0)) {
        if (uVar1 < *(uint *)(iVar4 + 0x80)) {
          *(float *)(*(int *)(iVar4 + 0x7c) + 0x370 + uVar1 * 0x400) = (float)fVar7;
        }
        else {
          fRam000000d0 = (float)fVar7;
        }
      }
      iVar4 = *(int *)(param_1 + 0x18);
      if (((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= (uint)puVar6[-1])) ||
         ((piVar2 = *(int **)(puVar6[-1] * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
          piVar2 == (int *)0x0 || (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 != 8)))) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = (float)piVar2[3];
      }
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = puVar6[2];
      local_14 = fVar3 + fVar3 + local_14;
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (uVar1 * 0x400 + 0x2a0 + *(int *)(iVar4 + 0x7c) != 0)) {
        if (uVar1 < *(uint *)(iVar4 + 0x80)) {
          iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar1 * 0x400;
        }
        else {
          iVar4 = 0;
        }
        fVar7 = (float10)FUN_00ddb510(local_14,0);
        *(float *)(iVar4 + 0xc0) = (float)fVar7;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = puVar6[3];
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (uVar1 * 0x400 + 0x2a0 + *(int *)(iVar4 + 0x7c) != 0)) {
        if (uVar1 < *(uint *)(iVar4 + 0x80)) {
          iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar1 * 0x400;
        }
        else {
          iVar4 = 0;
        }
        fVar7 = (float10)FUN_00ddb510(local_14,0);
        *(float *)(iVar4 + 0xc0) = (float)fVar7;
      }
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = puVar6[4];
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (uVar1 * 0x400 + 0x2a0 + *(int *)(iVar4 + 0x7c) != 0)) {
        if (uVar1 < *(uint *)(iVar4 + 0x80)) {
          iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar1 * 0x400;
        }
        else {
          iVar4 = 0;
        }
        fVar7 = (float10)FUN_00ddb510(local_14,0);
        *(float *)(iVar4 + 0xc0) = (float)fVar7;
      }
      FUN_00ce4ff0(puVar6[3],*(undefined4 *)(*(int *)(param_1 + 0x188) + 0x10 + local_10),0);
      FUN_00ce4ff0(puVar6[4],*(undefined4 *)(*(int *)(param_1 + 0x188) + 0x10 + local_10),0);
      fVar7 = (float10)FUN_00d350e0(puVar6[3]);
      if (DAT_01dc2cd8 == 0) {
        uVar8 = puVar6[2];
        uVar9 = 0x3f800000;
      }
      else {
        uVar8 = puVar6[2];
        uVar9 = 0x40000000;
      }
      fVar7 = (float10)FUN_00cc04c0(uVar8,(float)fVar7,uVar9);
      iVar4 = *(int *)(param_1 + 0x18);
      uVar1 = puVar6[2];
      if (((iVar4 != 0) && (uVar1 < *(uint *)(iVar4 + 0x80))) &&
         (iVar5 = uVar1 * 0x400, iVar5 + 0x2a0 + *(int *)(iVar4 + 0x7c) != 0)) {
        if (uVar1 < *(uint *)(iVar4 + 0x80)) {
          iVar4 = *(int *)(iVar4 + 0x7c);
          *(float *)(iVar4 + 0x370 + iVar5) = (float)fVar7;
          iVar4 = iVar4 + 0x2a0 + iVar5;
        }
        else {
          iVar4 = 0;
          fRam000000d0 = (float)fVar7;
        }
      }
    }
    local_10 = local_10 + 4;
    puVar6 = puVar6 + 7;
    if (0x27 < local_10) {
      return iVar4;
    }
  } while( true );
}

// 00D35580  FUN_00d35580  size=229  [run]
void __fastcall FUN_00d35580(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        uVar3 = FUN_00d35090();
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_1 + 8) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x18c) = 0;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x18c) = 1;
      FUN_00cc0880(*(undefined4 *)(param_1 + 0xc),param_1 + 0x30,*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 400) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x194) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x198) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x19c) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  else if (((iVar1 == 2) && (puVar2 = *(undefined4 **)(param_1 + 0x2c), puVar2[99] == 0)) &&
          (puVar2[0x7c] == 0)) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 00D35740  FUN_00d35740  size=72  [run]
int FUN_00d35740(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xf0,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cUnLockInfoDispParts::cUnLockInfoDispParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cUnLockInfoDispParts";
      *(undefined4 *)(iVar1 + 8) = 10;
      uVar2 = FUN_00d29960(0x4e);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D35790  FUN_00d35790  size=214  [run]
int __thiscall FUN_00d35790(int param_1,uint param_2)

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

// 00D35870  FUN_00d35870  size=490  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d35870(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 8) == -1) {
    uVar4 = 0;
    do {
      if ((&DAT_01dbf830)[uVar4] != 0) {
        *(uint *)(param_1 + 8) = uVar4;
        if ((&DAT_01dbf7e8)[uVar4] == 0) {
          if (*(int *)(param_1 + 4) == 0) {
            uVar5 = FUN_00d35740();
            *(undefined4 *)(param_1 + 4) = uVar5;
          }
          iVar2 = *(int *)(param_1 + 4);
          uVar5 = *(undefined4 *)(&DAT_01dbf854 + *(int *)(param_1 + 8) * 4);
          uVar3 = *(undefined4 *)(&DAT_01dbf878 + *(int *)(param_1 + 8) * 4);
          if (*(int *)(iVar2 + 0xc0) == 0) {
            *(undefined4 *)(iVar2 + 0xbc) = 1;
            *(undefined4 *)(iVar2 + 0xd0) = uVar3;
            *(undefined4 *)(iVar2 + 0xd4) = uVar5;
          }
          (&DAT_01dbf830)[*(int *)(param_1 + 8)] = 0;
          (&DAT_01dbf7e8)[*(int *)(param_1 + 8)] = 0;
        }
        goto LAB_00d35985;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 9);
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (((puVar1 != (undefined4 *)0x0) && (puVar1[0x2f] == 0)) && (puVar1[0x30] == 0)) {
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (((puVar1 != (undefined4 *)0x0) && (puVar1[0x2f] == 0)) && (puVar1[0x30] == 0)) {
      uVar4 = 0;
      do {
        if ((&DAT_01dbf830)[uVar4] != 0) {
          *(uint *)(param_1 + 8) = uVar4;
          if ((&DAT_01dbf7e8)[uVar4] == 0) {
            uVar5 = *(undefined4 *)(&DAT_01dbf854 + uVar4 * 4);
            uVar3 = *(undefined4 *)(&DAT_01dbf878 + uVar4 * 4);
            if (puVar1[0x30] == 0) {
              puVar1[0x2f] = 1;
              puVar1[0x34] = uVar3;
              puVar1[0x35] = uVar5;
            }
            (&DAT_01dbf830)[*(int *)(param_1 + 8)] = 0;
            (&DAT_01dbf7e8)[*(int *)(param_1 + 8)] = 0;
          }
          goto LAB_00d35985;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 9);
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(&DAT_01dbf878 + *(int *)(param_1 + 8) * 4) = 0xffffffff;
      *(undefined4 *)(&DAT_01dbf854 + *(int *)(param_1 + 8) * 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
  }
LAB_00d35985:
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  DAT_01dbf80c = DAT_01dbf830;
  DAT_01dbf810 = DAT_01dbf834;
  _DAT_01dbf814 = DAT_01dbf838;
  _DAT_01dbf818 = DAT_01dbf83c;
  _DAT_01dbf81c = DAT_01dbf840;
  _DAT_01dbf820 = DAT_01dbf844;
  _DAT_01dbf824 = DAT_01dbf848;
  _DAT_01dbf828 = DAT_01dbf84c;
  _DAT_01dbf82c = DAT_01dbf850;
  DAT_01dc1368 = (uint)(*(int *)(param_1 + 8) != -1);
  return;
}

