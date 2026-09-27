// src/misc/cWeakPointDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1710..00D36380, 5 functions

#include "types.h"

// 00CC1710  cWeakPointDispParts::vf08  size=132  [class]
void __fastcall cWeakPointDispParts::vf08(int param_1)

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
    uVar2 = (uint)*(ushort *)(iVar1 + 0xec);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xee);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf0);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf2);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xf4);
  }
  *(uint *)(param_1 + 0x30) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  return;
}

// 00CDE9B0  cWeakPointDispParts::vf00  size=63  [class]
undefined4 * __thiscall cWeakPointDispParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CF3100  cWeakPointDispParts::vf14  size=828  [class]
void __fastcall cWeakPointDispParts::vf14(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar4 = 0;
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0:
    if (*(int *)(param_1 + 100) == 0) {
      if ((*(int *)(param_1 + 0x68) == 0) || (10.0 < *(float *)(param_1 + 0x54))) break;
    }
    else if (*(int *)(param_1 + 0x68) == 0) break;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    }
    uVar4 = 1;
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    break;
  case 1:
    if (*(int *)(param_1 + 100) == 0) {
      if ((*(int *)(param_1 + 0x68) == 0) ||
         (fVar1 = *(float *)(param_1 + 0x54), !NAN(fVar1) && 11.0 < fVar1 != (fVar1 == 11.0)))
      goto LAB_00cf319f;
LAB_00cf319a:
      if (*(int *)(param_1 + 0x58) != 0) goto LAB_00cf319f;
    }
    else {
      if (*(int *)(param_1 + 0x68) != 0) goto LAB_00cf319a;
LAB_00cf319f:
      if (*(int *)(param_1 + 0x58) != 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(1);
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(3);
        }
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
        uVar4 = 1;
        break;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    uVar4 = 1;
    break;
  case 2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar3 = FUN_00cdf400(1), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x6c) = 3;
    }
    uVar4 = 1;
    break;
  case 3:
    if ((*(int *)(param_1 + 0x68) == 0) ||
       (fVar1 = *(float *)(param_1 + 0x54), !NAN(fVar1) && 11.0 < fVar1 != (fVar1 == 11.0))) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x6c) == 1) && (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x60))) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(3);
      }
    }
    else {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      FUN_00e5e050("core_se_btl_zangeki_mark",0);
    }
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5c);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  iVar3 = FUN_00d9fa80(&local_20,param_1 + 0x40);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = local_20;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = local_1c;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = local_18;
    }
    iVar3 = FUN_00f98a90();
    fVar1 = (*(float *)(param_1 + 0x50) + 14.0) / ((float)iVar3 * 0.00078125 * 34.0);
    iVar3 = FUN_00f98aa0();
    fVar2 = (*(float *)(param_1 + 0x50) + 14.0) / ((float)iVar3 * 0.0013888889 * 34.0);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x30),fVar1);
    FUN_00cb2c20(*(undefined4 *)(param_1 + 0x30),fVar2);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x1c),fVar1);
    FUN_00cb2c20(*(undefined4 *)(param_1 + 0x1c),fVar2);
    iVar3 = FUN_00f98a90();
    fVar1 = (*(float *)(param_1 + 0x50) - (float)iVar3 * 0.00078125 * 20.0) * 0.5;
    iVar3 = FUN_00f98aa0();
    fVar2 = (*(float *)(param_1 + 0x50) - (float)iVar3 * 0.0013888889 * 20.0) * 0.5;
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x20),-fVar1);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x20),-fVar2);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x24),fVar1);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x24),-fVar2);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x28),-fVar1);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x28),fVar2);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x2c),fVar1);
    FUN_00cb2900(*(undefined4 *)(param_1 + 0x2c),fVar2);
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = uVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}

// 00D36300  cWeakPointDispParts::cWeakPointDispParts  size=125  [class]
undefined4 * cWeakPointDispParts::cWeakPointDispParts(void)

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
    puVar1[0x15] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0x3f800000;
    puVar1[3] = "cWeakPointDispParts";
    puVar1[2] = 6;
    uVar2 = FUN_00d29960(0x54);
    puVar1[5] = uVar2;
    puVar3 = puVar1;
  }
  return puVar3;
}

// 00D36380  FUN_00d36380  size=405  [callgraph]
void __fastcall FUN_00d36380(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (DAT_01dc1490 != 0) {
    iVar6 = FUN_00c12740(0);
    local_20 = *(float *)(iVar6 + 0x1b0);
    piVar7 = (int *)(param_1 + 4);
    local_1c = *(float *)(iVar6 + 0x1b4);
    local_18 = *(float *)(iVar6 + 0x1b8);
    uVar8 = 0;
    piVar9 = piVar7;
    do {
      if (*(int *)((int)&DAT_01dbf770 + uVar8) == 0) {
        *(undefined4 *)((int)&DAT_01dc1378 + uVar8) = 0;
      }
      if (*(int *)((int)&DAT_01dc1378 + uVar8) == 0) {
        puVar2 = (undefined4 *)*piVar9;
        if ((puVar2 != (undefined4 *)0x0) && (puVar2[0x1b] == 0)) {
          (**(code **)*puVar2)(1);
          *piVar9 = 0;
        }
      }
      else {
        if (*piVar9 == 0) {
          iVar6 = cWeakPointDispParts::cWeakPointDispParts();
          *piVar9 = iVar6;
        }
        iVar6 = *(int *)((int)&DAT_01dc1378 + uVar8);
        fStack_30 = *(float *)(iVar6 + 0x10);
        fStack_2c = *(float *)(iVar6 + 0x14);
        fStack_28 = *(float *)(iVar6 + 0x18);
        uStack_24 = *(undefined4 *)(iVar6 + 0x1c);
        iVar3 = *(int *)(iVar6 + 0x24);
        uVar1 = *(undefined4 *)(iVar6 + 0x20);
        uVar4 = *(undefined4 *)(iVar6 + 0x28);
        uVar5 = *(undefined4 *)(iVar6 + 0x2c);
        iVar6 = *piVar9;
        *(float *)(iVar6 + 0x40) = fStack_30;
        *(float *)(iVar6 + 0x44) = fStack_2c;
        *(float *)(iVar6 + 0x48) = fStack_28;
        *(undefined4 *)(iVar6 + 0x4c) = uStack_24;
        *(undefined4 *)(iVar6 + 0x50) = uVar1;
        *(float *)(iVar6 + 0x54) =
             SQRT((local_18 - fStack_28) * (local_18 - fStack_28) +
                  (local_1c - fStack_2c) * (local_1c - fStack_2c) +
                  (local_20 - fStack_30) * (local_20 - fStack_30));
        if (iVar3 != 0) {
          *(int *)(iVar6 + 0x58) = iVar3;
        }
        *(undefined4 *)(iVar6 + 0x5c) = uVar4;
        *(undefined4 *)(iVar6 + 100) = uVar5;
        *(undefined4 *)(iVar6 + 0x68) = 1;
        iVar6 = FUN_00a81330();
        if (iVar6 != 0) {
          iVar6 = FUN_00a7c8a0();
          if (iVar6 != 0) {
            FUN_00cda7a0(&fStack_30,*(undefined4 *)(iVar6 + 0x4b4));
          }
        }
      }
      uVar8 = uVar8 + 4;
      piVar9 = piVar9 + 1;
    } while (uVar8 < 0x78);
    uVar8 = 0;
    do {
      if (*piVar7 != 0) {
        (**(code **)(*(int *)*piVar7 + 4))();
      }
      *(undefined4 *)((int)&DAT_01dbf770 + uVar8) = 0;
      uVar8 = uVar8 + 4;
      piVar7 = piVar7 + 1;
    } while (uVar8 < 0x78);
  }
  return;
}

