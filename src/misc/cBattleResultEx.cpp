// src/misc/cBattleResultEx.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D08AA0..00D36BD0, 5 functions

#include "types.h"

// 00D08AA0  cBattleResultEx::vf00  size=102  [class]
undefined4 * __thiscall cBattleResultEx::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xdc])(1);
    param_1[0xdc] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_39();
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

// 00D08B10  cBattleResultEx::vf08  size=2451  [class]
void __fastcall cBattleResultEx::vf08(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x8c);
  }
  *(uint *)(param_1 + 0x374) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x9a);
  }
  *(uint *)(param_1 + 0x378) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x9c);
  }
  *(uint *)(param_1 + 0x37c) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x9e);
  }
  *(uint *)(param_1 + 0x380) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xa0);
  }
  *(uint *)(param_1 + 900) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xa2);
  }
  *(uint *)(param_1 + 0x388) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xa4);
  }
  *(uint *)(param_1 + 0x38c) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xa6);
  }
  *(uint *)(param_1 + 0x390) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xae);
  }
  *(uint *)(param_1 + 0x394) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x398) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb2);
  }
  *(uint *)(param_1 + 0x39c) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb4);
  }
  *(uint *)(param_1 + 0x3a0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  }
  *(uint *)(param_1 + 0x3a4) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb8);
  }
  *(uint *)(param_1 + 0x3a8) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xba);
  }
  *(uint *)(param_1 + 0x3ac) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xc2);
  }
  *(uint *)(param_1 + 0x3b0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xc4);
  }
  *(uint *)(param_1 + 0x3b4) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xc6);
  }
  *(uint *)(param_1 + 0x3b8) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xd8);
  }
  *(uint *)(param_1 + 0x3bc) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xda);
  }
  *(uint *)(param_1 + 0x3c0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xdc);
  }
  *(uint *)(param_1 + 0x3c4) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xea);
  }
  *(uint *)(param_1 + 0x3c8) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xec);
  }
  *(uint *)(param_1 + 0x3f8) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xee);
  }
  *(uint *)(param_1 + 0x3f4) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xf0);
  }
  *(uint *)(param_1 + 0x3f0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xf2);
  }
  *(uint *)(param_1 + 0x3ec) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xf4);
  }
  *(uint *)(param_1 + 1000) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xf6);
  }
  *(uint *)(param_1 + 0x3e4) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xf8);
  }
  *(uint *)(param_1 + 0x3e0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xfa);
  }
  *(uint *)(param_1 + 0x3dc) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xfc);
  }
  *(uint *)(param_1 + 0x3d8) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xfe);
  }
  *(uint *)(param_1 + 0x3d4) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x100);
  }
  *(uint *)(param_1 + 0x3d0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x102);
  }
  *(uint *)(param_1 + 0x3cc) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x104);
  }
  *(uint *)(param_1 + 0x428) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x106);
  }
  *(uint *)(param_1 + 0x424) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x108);
  }
  *(uint *)(param_1 + 0x420) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x10a);
  }
  *(uint *)(param_1 + 0x41c) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x10c);
  }
  *(uint *)(param_1 + 0x418) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x10e);
  }
  *(uint *)(param_1 + 0x414) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x110);
  }
  *(uint *)(param_1 + 0x410) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x112);
  }
  *(uint *)(param_1 + 0x40c) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x114);
  }
  *(uint *)(param_1 + 0x408) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x116);
  }
  *(uint *)(param_1 + 0x404) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x118);
  }
  *(uint *)(param_1 + 0x400) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x11a);
  }
  *(uint *)(param_1 + 0x3fc) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x13c);
  }
  *(uint *)(param_1 + 0x42c) = uVar5;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x430) = uVar6;
  if (((iVar1 != 0) && (uVar5 < *(uint *)(iVar1 + 0x80))) &&
     (piVar2 = *(int **)(uVar5 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 8))();
    if (iVar1 == 0) {
      piVar2 = piVar2 + 4;
      goto LAB_00d08f6c;
    }
  }
  piVar2 = (int *)0x0;
LAB_00d08f6c:
  *(int **)(param_1 + 0x34) = piVar2;
  FUN_00cc35c0();
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x374) < *(uint *)(iVar1 + 0x80))) &&
     (piVar2 = *(int **)(*(int *)(iVar1 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x374) * 0x400),
     piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 8))();
    if (iVar1 == 3) {
      uVar3 = FUN_00e03ea0(&DAT_016416fa);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 0;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar1 = FUN_00cb1cd0(uVar3);
        if (-1 < iVar1) {
          piVar2[0x2a] = iVar1;
          piVar2[0x2b] = 0;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  if (((DAT_018b9148 & 0xf00) == 0xc00) || ((DAT_018b9148 & 0xf00) == 0xd00)) {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((iVar1 != 0) &&
       ((*(uint *)(param_1 + 0x380) < *(uint *)(iVar1 + 0x80) &&
        (piVar2 = *(int **)(*(uint *)(param_1 + 0x380) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
        piVar2 != (int *)0x0)))) {
      iVar1 = (**(code **)(*piVar2 + 8))();
      if (iVar1 == 3) {
        uVar3 = FUN_00e03ea0("RESULT_TITLE_12");
        piVar2[0x2a] = -1;
        piVar2[0x2b] = 0;
        if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
          iVar1 = FUN_00cb1cd0(uVar3);
          if (-1 < iVar1) {
            piVar2[0x2a] = iVar1;
            piVar2[0x2b] = 0;
            piVar2[0x2e] = 0;
          }
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 != 0) && (*(uint *)(param_1 + 900) < *(uint *)(iVar1 + 0x80))) &&
       (piVar2 = *(int **)(*(uint *)(param_1 + 900) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
       piVar2 != (int *)0x0)) {
      iVar1 = (**(code **)(*piVar2 + 8))();
      if (iVar1 == 3) {
        uVar3 = FUN_00e03ea0("RESULT_TITLE_12");
        piVar2[0x2a] = -1;
        piVar2[0x2b] = 0;
        if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
          iVar1 = FUN_00cb1cd0(uVar3);
          if (-1 < iVar1) {
            piVar2[0x2a] = iVar1;
            piVar2[0x2b] = 0;
            piVar2[0x2e] = 0;
          }
        }
      }
    }
  }
  else {
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x380),"RESULT_TITLE_10",0,0xffffffff);
    FUN_00cf9770(*(undefined4 *)(param_1 + 900),"RESULT_TITLE_10",0,0xffffffff);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x378) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x378) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x394) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x394) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x39c) < *(uint *)(iVar1 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x39c) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 8))();
    if (iVar1 == 3) {
      uVar3 = FUN_00e03ea0("RESULT_TITLE_11");
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 0;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar1 = FUN_00cb1cd0(uVar3);
        if (-1 < iVar1) {
          piVar2[0x2a] = iVar1;
          piVar2[0x2b] = 0;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3a0) < *(uint *)(iVar1 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x3a0) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 8))();
    if (iVar1 == 3) {
      uVar3 = FUN_00e03ea0("RESULT_TITLE_11");
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 0;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar1 = FUN_00cb1cd0(uVar3);
        if (-1 < iVar1) {
          piVar2[0x2a] = iVar1;
          piVar2[0x2b] = 0;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3b4) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x3b4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3b8) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x3b8) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3bc) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x3bc) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3c0) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x3c0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3c4) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x3c4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3c8) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x3c8) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = 0x18;
  puVar7 = (uint *)(param_1 + 0x3cc);
  do {
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*puVar7 < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *puVar7 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    puVar7 = puVar7 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cded00(*(undefined4 *)(param_1 + 0x3b0),2);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3b4) < *(uint *)(iVar1 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x3b4) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 8))();
    if (iVar1 == 3) {
      uVar3 = FUN_00e03ea0("RESULT_TITLE_00");
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar1 = FUN_00cb1cd0(uVar3);
        if (-1 < iVar1) {
          piVar2[0x2a] = iVar1;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x3b8) < *(uint *)(iVar1 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x3b8) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar2 + 8))();
    if (iVar1 == 3) {
      uVar3 = FUN_00e03ea0("RESULT_TITLE_00");
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar1 = FUN_00cb1cd0(uVar3);
        if (-1 < iVar1) {
          piVar2[0x2a] = iVar1;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  uVar3 = FUN_009a29d0();
  *(undefined4 *)(param_1 + 0x370) = uVar3;
  return;
}

// 00D28270  FUN_00d28270  size=1892  [callgraph]
void __fastcall FUN_00d28270(int param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  char local_5;
  float local_4;
  
  if (*(char *)(param_1 + 0x241) != '\0') {
    switch(*(char *)(param_1 + 0x240)) {
    case '\0':
      piVar2 = (int *)FUN_00c1b9a0();
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xac))();
      *(undefined4 *)(param_1 + 0x2b8) = puVar3[1];
      *(undefined4 *)(param_1 + 700) = puVar3[2];
      *(undefined4 *)(param_1 + 0x2c4) = puVar3[4];
      *(undefined4 *)(param_1 + 0x2c8) = puVar3[5];
      *(undefined4 *)(param_1 + 0x2c0) = puVar3[3];
      *(undefined4 *)(param_1 + 0x2d4) = puVar3[8];
      *(undefined4 *)(param_1 + 0x2d8) = puVar3[6];
      piVar2 = (int *)FUN_00c1b9a0();
      uVar5 = (**(code **)(*piVar2 + 0xa4))();
      *(undefined4 *)(param_1 + 0x2cc) = uVar5;
      piVar2 = (int *)FUN_00c1b9a0();
      iVar4 = (**(code **)(*piVar2 + 0xa8))();
      *(uint *)(param_1 + 0x2dc) = (uint)(iVar4 == 0);
      cXmlBinary::cXmlBinary_35(*puVar3);
      piVar2 = (int *)FUN_00c13920();
      (**(code **)(*piVar2 + 0xa4))(*(undefined4 *)(param_1 + 0x304));
      DAT_01b7614c = (undefined *)((int)DAT_01b7614c + *(int *)(param_1 + 0x304));
      if (9999999 < (int)DAT_01b7614c) {
        DAT_01b7614c = &DAT_0098967f;
      }
      DAT_01b7589c = (undefined *)((int)DAT_01b7589c + *(int *)(param_1 + 0x304));
      if (0x98967e < (int)DAT_01b7589c) {
        DAT_01b7589c = &DAT_0098967f;
      }
      piVar2 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar2 + 0xb0))();
      *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
      return;
    case '\x01':
      cVar7 = '\0';
      local_5 = '\0';
      puVar3 = (undefined4 *)(param_1 + 0x15c);
      do {
        if (puVar3[0x3b] == 0x10) {
          if (cVar7 != '\x05') {
            FUN_00cb2310(puVar3[-0x11],1);
            FUN_00cb2310(*puVar3,1);
            FUN_00cb2310(puVar3[6],1);
            FUN_00ccdf90(*puVar3,1,3);
            FUN_00ccdf90(puVar3[6],1,3);
          }
        }
        else if ((((int)puVar3[0x3b] < 0x11) && (iVar4 = FUN_00cb2760(puVar3[-6]), iVar4 != 0)) &&
                (fVar9 = (float10)(float)puVar3[0x4e] + (float10)*(float *)(iVar4 + 0xd0),
                *(float *)(iVar4 + 0xd0) = (float)fVar9, extraout_ST0 < fVar9)) {
          local_5 = local_5 + '\x01';
          *(float *)(iVar4 + 0xd0) = (float)extraout_ST0;
        }
        puVar3[0x3b] = puVar3[0x3b] + -1;
        cVar7 = cVar7 + '\x01';
        puVar3 = puVar3 + 1;
      } while (cVar7 < '\x06');
      if ('\x05' < local_5) {
        *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
        *(float *)(param_1 + 0x330) =
             (*(float *)(param_1 + 0x2b8) - *(float *)(param_1 + 0x30c)) * 0.1;
        *(float *)(param_1 + 0x334) =
             ((float)*(int *)(param_1 + 700) - *(float *)(param_1 + 0x310)) * 0.1;
        *(float *)(param_1 + 0x338) =
             ((float)*(int *)(param_1 + 0x2c0) - *(float *)(param_1 + 0x314)) * 0.1;
        *(float *)(param_1 + 0x33c) =
             ((float)*(int *)(param_1 + 0x2c4) - *(float *)(param_1 + 0x318)) * 0.1;
        *(float *)(param_1 + 0x340) =
             ((float)*(int *)(param_1 + 0x2c8) - *(float *)(param_1 + 0x31c)) * 0.1;
        *(float *)(param_1 + 0x344) =
             ((float)*(int *)(param_1 + 0x2cc) - *(float *)(param_1 + 800)) * 0.1;
        return;
      }
      break;
    case '\x02':
      iVar4 = FUN_00cdcd80();
      if (iVar4 != 0) {
        *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x130),0xc2080000);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x218),0xc2080000);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x21c),0xc2080000);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x220),0xc2080000);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x134),0xc2080000);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x138),0xc2080000);
        if (*(int *)(param_1 + 0x2f8) == 0) {
          iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x134));
          if (iVar4 != 0) {
            *(float *)(iVar4 + 0xc4) = (float)((float10)*(float *)(iVar4 + 0xc4) - extraout_ST0_00);
          }
          iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x21c));
          if (iVar4 != 0) {
            *(float *)(iVar4 + 0xc4) = (float)((float10)*(float *)(iVar4 + 0xc4) - extraout_ST0_01);
          }
          iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x138));
          if (iVar4 != 0) {
            *(float *)(iVar4 + 0xc4) = (float)((float10)*(float *)(iVar4 + 0xc4) - extraout_ST0_02);
          }
          iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x220));
          if (iVar4 != 0) {
            *(float *)(iVar4 + 0xc4) = (float)((float10)*(float *)(iVar4 + 0xc4) - extraout_ST0_03);
          }
        }
        if (*(int *)(param_1 + 0x2fc) == 0) {
          iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x138));
          if (iVar4 != 0) {
            *(float *)(iVar4 + 0xc4) = (float)((float10)*(float *)(iVar4 + 0xc4) - extraout_ST0_04);
          }
          iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x220));
          if (iVar4 != 0) {
            *(float *)(iVar4 + 0xc4) = (float)((float10)*(float *)(iVar4 + 0xc4) - extraout_ST0_05);
            return;
          }
        }
      }
      break;
    case '\x03':
      if (*(int *)(param_1 + 0x2f8) == 0) {
LAB_00d2882e:
        *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
        return;
      }
      *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + 1;
      if (*(char *)(param_1 + 0x242) == '\0') {
        *(undefined4 *)(param_1 + 0x260) = 0x15;
      }
      uVar6 = *(uint *)(param_1 + 0x260) & 0x80000003;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x130),uVar6);
      if (0xc < *(int *)(param_1 + 0x260)) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x130),1);
        *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
        iVar4 = FUN_009c4bf0();
        if ((1 < iVar4) && (DAT_018b9174 == 0xf07)) {
          if (DAT_018b9148 == 0x610) {
            FUN_009c6540(0x13);
            return;
          }
          if (DAT_018b9148 == 0x750) {
            FUN_009c6540(0x14);
            return;
          }
        }
      }
      break;
    case '\x04':
      if (*(int *)(param_1 + 0x2fc) == 0) goto LAB_00d2882e;
      *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 1;
      if (*(char *)(param_1 + 0x242) == '\0') {
        *(undefined4 *)(param_1 + 0x264) = 0x15;
      }
      uVar6 = *(uint *)(param_1 + 0x264) & 0x80000003;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x134),uVar6);
      if (0xc < *(int *)(param_1 + 0x264)) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x134),1);
        *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
        return;
      }
      break;
    case '\x05':
      if (*(int *)(param_1 + 0x300) == 0) goto LAB_00d2882e;
      *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
      if (*(char *)(param_1 + 0x242) == '\0') {
        *(undefined4 *)(param_1 + 600) = 0x15;
      }
      uVar6 = *(uint *)(param_1 + 600) & 0x80000003;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),uVar6);
      if (0xc < *(int *)(param_1 + 600)) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x138),1);
        *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
        return;
      }
      break;
    case '\x06':
      iVar8 = 0;
      puVar3 = (undefined4 *)(param_1 + 0x26c);
      iVar4 = 9;
      do {
        *puVar3 = 0;
        puVar3[-9] = 0;
        FUN_00cdcbe0(iVar8);
        iVar8 = iVar8 + 1;
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
      return;
    case '\a':
      iVar4 = FUN_00d1b520();
      if (iVar4 != 0) {
        fVar1 = -34.0;
        local_4 = -34.0;
        *(undefined4 *)(param_1 + 0x290) = 0;
        if (*(int *)(param_1 + 0x2f8) == 0) {
          fVar1 = -68.0;
          local_4 = -68.0;
        }
        if (*(int *)(param_1 + 0x2fc) == 0) {
          fVar1 = fVar1 - 34.0;
          local_4 = fVar1;
        }
        if (*(int *)(param_1 + 0x300) == 0) {
          fVar1 = fVar1 - 34.0;
          local_4 = fVar1;
        }
        if (fVar1 == 0.0) {
          *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
          return;
        }
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x13c),fVar1);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0x140),local_4);
        *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
        return;
      }
      break;
    case '\b':
      iVar4 = FUN_00d1b950();
      if (iVar4 != 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x140),1);
        FUN_00d085f0(*(undefined4 *)(param_1 + 0x2d0));
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x22c),6);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x230),6);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x1fc),1);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1fc),1,3);
        *(char *)(param_1 + 0x240) = *(char *)(param_1 + 0x240) + '\x01';
        return;
      }
      break;
    case '\t':
      if (*(int *)(param_1 + 0x244) == 0) {
        uVar5 = FUN_00cdcd80();
        *(undefined4 *)(param_1 + 0x244) = uVar5;
        return;
      }
    }
  }
  return;
}

// 00D28A00  cBattleResultEx::vf14  size=412  [class]
void __fastcall cBattleResultEx::vf14(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x434);
  if (cVar1 == '\0') {
    iVar4 = FUN_00eb4340(DAT_01be8e4c);
    if (iVar4 == 0) goto LAB_00d28b81;
    FUN_00e5e050("core_se_sys_chapter_window_open",0);
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x3b4) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x3b4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x3b8) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x3b8) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3b4),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x3b8),1,3);
  }
  else if (cVar1 == '\x01') {
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x3b4) < *(uint *)(iVar4 + 0x80))) &&
       (piVar2 = *(int **)(*(uint *)(param_1 + 0x3b4) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
       piVar2 != (int *)0x0)) {
      iVar4 = (**(code **)(*piVar2 + 8))();
      if ((iVar4 == 3) && (piVar2[0x5c] != 0)) goto LAB_00d28b81;
    }
    iVar4 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x3b8));
    if (iVar4 != 0) goto LAB_00d28b81;
    *(undefined1 *)(param_1 + 0x25d) = 1;
  }
  else {
    if ((cVar1 != '\x02') || (*(int *)(param_1 + 0x260) == 0)) goto LAB_00d28b81;
    if (*(int *)(param_1 + 0x370) != 0) {
      puVar3 = (undefined4 *)FUN_00cb2790(*(undefined4 *)(param_1 + 0x430));
      FUN_009a2df0("chapter_result",*puVar3,puVar3[1],0x41700000,0);
    }
    *(undefined1 *)(param_1 + 0x436) = 1;
  }
  *(char *)(param_1 + 0x434) = *(char *)(param_1 + 0x434) + '\x01';
LAB_00d28b81:
  FUN_00d28270();
  if (*(int *)(param_1 + 0x370) != 0) {
    FUN_009a2a10();
    return;
  }
  return;
}

// 00D36BD0  cBattleResultEx::cBattleResultEx  size=136  [class]
undefined4 * cBattleResultEx::cBattleResultEx(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x43c,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    cCustomObjCtrlManager::cCustomObjCtrlManager_40();
    *(undefined1 *)(puVar1 + 0x10d) = 0;
    *(undefined2 *)(puVar1 + 0x10e) = 0;
    *(undefined1 *)((int)puVar1 + 0x436) = 0;
    puVar1[0xdc] = 0;
    puVar1[3] = "cChapterResult";
    puVar1[2] = 10;
    uVar2 = FUN_00d29960(0x80);
    puVar1[5] = uVar2;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

