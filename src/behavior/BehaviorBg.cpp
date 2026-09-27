// src/behavior/BehaviorBg.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA6FC0..00AC3E20, 9 functions

#include "mgrr.h"
#include "BehaviorBg.h"

// 00AA6FC0  BehaviorBg::BehaviorBg  size=18  [class]
undefined4 * __fastcall BehaviorBg::BehaviorBg(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  return param_1;
}

// 00AA6FE0  BehaviorBg::vf04  size=6  [class]
undefined * BehaviorBg::vf04(void)

{
  return &DAT_01be9c50;
}

// 00AA7900  BehaviorBg::destruct  size=30  [class]
undefined4 __thiscall BehaviorBg::destruct(undefined4 param_1,byte param_2)

{
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC3DD0  BehaviorBg::startup  size=12  [class]
bool BehaviorBg::startup(void)

{
  int iVar1;
  
  iVar1 = BehaviorBgBase::startup();
  return iVar1 != 0;
}

// 00AC3DE0  BehaviorBg::thunk_vf4C  size=5  [class]
void __fastcall BehaviorBg::thunk_vf4C(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  if (((*(int *)(param_1 + 0x4f0) == 0) || (iVar3 = FUN_00a7c890(), iVar3 == 0)) ||
     ((*(byte *)(iVar3 + 0x94) & 1) == 0)) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x774);
  *(undefined4 *)(param_1 + 0x778) = 0;
  if ((iVar3 != 0) &&
     (puVar4 = *(undefined4 **)(iVar3 + 4), puVar4 != puVar4 + *(int *)(iVar3 + 8) * 0xc)) {
    do {
      uVar1 = *puVar4;
      iVar3 = FUN_00e26e90();
      if (iVar3 == 0) {
        fVar10 = (float10)-1.0;
      }
      else {
        fVar10 = (float10)FUN_00e36970(uVar1);
      }
      puVar4[10] = (float)fVar10;
      puVar4[0xb] = 0;
      iVar3 = FUN_00e33270(puVar4 + 2);
      if (iVar3 == -1) {
        if (puVar4[0xb] == 0) {
          puVar4[0xb] = 1;
          goto LAB_00aa37ac;
        }
        puVar4 = (undefined4 *)FUN_00aa2a50(puVar4);
      }
      else {
LAB_00aa37ac:
        puVar4 = puVar4 + 0xc;
      }
    } while (puVar4 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x774) + 8) * 0x30 +
                       *(int *)(*(int *)(param_1 + 0x774) + 4)));
  }
  FUN_00e3e620();
  FUN_00e22e40();
  FUN_00e3f050();
  iVar3 = *(int *)(param_1 + 0x7a0);
  if ((iVar3 != 0) && (iVar5 = *(int *)(iVar3 + 4), iVar5 != iVar5 + *(int *)(iVar3 + 8) * 0x1c)) {
    do {
      if ((*(int *)(iVar5 + 0x10) == 0) ||
         ((iVar3 = FUN_00a94db0(*(int *)(iVar5 + 0x10)), iVar3 == 0 &&
          (iVar3 = FUN_00a9f760(*(undefined4 *)(iVar5 + 0x10)), iVar3 != 0)))) {
        iVar5 = iVar5 + 0x1c;
      }
      else {
        FUN_00a8c9f0(iVar5);
        iVar5 = FUN_00a9be00(iVar5);
      }
    } while (iVar5 != *(int *)(*(int *)(param_1 + 0x7a0) + 4) +
                      *(int *)(*(int *)(param_1 + 0x7a0) + 8) * 0x1c);
  }
  iVar3 = *(int *)(param_1 + 0x7a4);
  if ((iVar3 != 0) && (puVar4 = *(undefined4 **)(iVar3 + 4), puVar4 != puVar4 + *(int *)(iVar3 + 8))
     ) {
    do {
      uVar1 = *puVar4;
      uVar11 = 0;
      uVar6 = FUN_00a95ca0(0);
      iVar3 = FUN_00d77270(uVar6,uVar11);
      if (iVar3 == 0) {
        puVar9 = puVar4 + 1;
      }
      else {
        FUN_00d7b0f0();
        piVar7 = (int *)FUN_00d773c0();
        (**(code **)(*piVar7 + 0x10))(uVar1);
        iVar3 = *(int *)(param_1 + 0x7a4);
        uVar2 = *(uint *)(iVar3 + 8);
        iVar5 = *(int *)(iVar3 + 4);
        puVar9 = (undefined4 *)(iVar5 + uVar2 * 4);
        if ((((puVar4 != puVar9) && (iVar5 != 0)) && (uVar2 != 0)) &&
           ((uint)((int)puVar4 - iVar5 >> 2) < uVar2)) {
          for (puVar8 = puVar4; puVar8 != puVar9 + -1; puVar8 = puVar8 + 1) {
            *puVar8 = puVar8[1];
          }
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
          puVar9 = puVar4;
        }
      }
      puVar4 = puVar9;
    } while (puVar9 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x7a4) + 4) +
                       *(int *)(*(int *)(param_1 + 0x7a4) + 8) * 4));
  }
  FUN_00a96270();
  return;
}

// 00AC3DF0  BehaviorBg::vf50  size=16  [class]
void BehaviorBg::vf50(void)

{
  FUN_00a93170();
  BehaviorBgBase::vf50();
  return;
}

// 00AC3E00  BehaviorBg::vfA8  size=5  [class]
undefined4 BehaviorBg::vfA8(void)

{
  return 1;
}

// 00AC3E10  BehaviorBg::vfAC  size=5  [class]
undefined4 BehaviorBg::vfAC(void)

{
  return 1;
}

// 00AC3E20  BehaviorBg::vfB0  size=5  [class]
undefined4 BehaviorBg::vfB0(void)

{
  return 1;
}

