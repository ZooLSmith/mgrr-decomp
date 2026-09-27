// src/misc/cItemStageDropInstant.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949590..009501D0, 14 functions

#include "types.h"

// 00949590  cItemStageDropInstant::vf18  size=39  [class]
void __thiscall cItemStageDropInstant::vf18(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00a7ce90(param_2);
    FUN_00a7c8a0();
    switchD_0080dbae::default();
  }
  return;
}

// 0094CE00  cItemStageDropInstant::vf20  size=3  [class]
void cItemStageDropInstant::vf20(void)

{
  return;
}

// 0094CE50  cItemStageDropInstant::vf0C  size=363  [class]
void __fastcall cItemStageDropInstant::vf0C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float10 fVar11;
  undefined *puVar12;
  
  iVar10 = 1;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00a7c8a0(*(undefined4 *)(param_1 + 0x80));
    FUN_009f8ae0();
    piVar7 = (int *)FUN_00a7c8a0();
    if (piVar7 != (int *)0x0) {
      puVar12 = &DAT_01b35390;
      (**(code **)(*piVar7 + 4))(&DAT_01b35390);
      iVar8 = FUN_00dd6d80(puVar12);
      if (iVar8 != 0) {
        iVar10 = (**(code **)(*piVar7 + 0x300))();
        FUN_005e86c0((*(uint *)(param_1 + 4) & 0x2000) != 0);
        if ((*(int *)(param_1 + 0x60) != 0) && ((*(uint *)(param_1 + 4) & 0x2000) == 0)) {
          pfVar9 = (float *)(**(code **)(*piVar7 + 0x68))();
          fVar1 = *(float *)(param_1 + 0x74);
          fVar2 = pfVar9[1];
          fVar3 = *(float *)(param_1 + 0x78);
          fVar4 = pfVar9[2];
          fVar5 = *(float *)(param_1 + 0x7c);
          fVar6 = pfVar9[3];
          iVar8 = *(int *)(param_1 + 0x60);
          *(float *)(iVar8 + 0x10) = *pfVar9 + *(float *)(param_1 + 0x70);
          *(float *)(iVar8 + 0x14) = fVar1 + fVar2;
          *(float *)(iVar8 + 0x18) = fVar3 + fVar4;
          *(float *)(iVar8 + 0x1c) = fVar5 + fVar6;
          FUN_00d903d0(*(undefined4 *)(param_1 + 0x60));
        }
        iVar8 = (**(code **)(*piVar7 + 0x300))();
        if (iVar8 != 1) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x100;
          goto LAB_0094cf3e;
        }
      }
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
  }
LAB_0094cf3e:
  iVar8 = FUN_00a7c8b0();
  if (*(float *)(iVar8 + 4) <= -1000.0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((((*(uint *)(param_1 + 4) & 0x4000) == 0) && ((DAT_01bea094 & 0x200) == 0)) && (iVar10 != 0))
  {
    fVar11 = (float10)FUN_00e03a90(0);
    fVar11 = (float10)*(float *)(param_1 + 0x58) - fVar11 * (float10)0.016666668;
    *(float *)(param_1 + 0x58) = (float)fVar11;
    if (fVar11 <= (float10)0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      *(float *)(param_1 + 0x58) = (float)(float10)0;
      return;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x10);
  return;
}

// 0094CFC0  FUN_0094cfc0  size=56  [between]
undefined4 __thiscall FUN_0094cfc0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((((uVar1 & 0x10000) != 0) && ((uVar1 & 0x20000) == 0)) && ((~(uVar1 >> 8) & 1) != 0)) {
    uVar2 = FUN_00d900c0(*(undefined4 *)(param_1 + 0x60),param_2);
    return uVar2;
  }
  return 0;
}

// 0094D000  FUN_0094d000  size=96  [between]
void __thiscall FUN_0094d000(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffdffff;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01b35390;
        (**(code **)(*piVar2 + 4))(&DAT_01b35390);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          FUN_005e87b0(param_2);
        }
      }
    }
  }
  return;
}

// 0094D060  cItemStageDropInstant::vf14  size=97  [class]
void __fastcall cItemStageDropInstant::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      piVar3 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b35390;
        (**(code **)(*piVar2 + 4))(&DAT_01b35390);
        iVar1 = FUN_00dd6d80(puVar4);
        piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar2);
      }
      iVar1 = (**(code **)(*piVar3 + 0x300))();
      if (iVar1 == 1) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
        return;
      }
    }
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x100;
  return;
}

// 0094D0D0  cItemStageDropInstant::vf24  size=68  [class]
void __fastcall cItemStageDropInstant::vf24(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01b35398;
        (**(code **)(*piVar2 + 4))(&DAT_01b35398);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          FUN_005e88c0();
          return;
        }
      }
    }
  }
  return;
}

// 0094D120  cItemStageDropInstant::vf08  size=60  [class]
void __thiscall cItemStageDropInstant::vf08(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((*(int *)(param_1 + 0x50) != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01b35390;
    (**(code **)(*piVar1 + 4))(&DAT_01b35390);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_005e9f50(param_2);
    }
  }
  return;
}

// 0094D1B0  cItemStageDropInstant::vf00  size=6  [class]
char * cItemStageDropInstant::vf00(void)

{
  return "cItemStageDropInstant";
}

// 0094D1C0  cItemStageDropInstant::vf10  size=6  [class]
char * cItemStageDropInstant::vf10(void)

{
  return "cItemStageDrop";
}

// 0094D200  cItemStageDropInstant::vf2C  size=36  [class]
void __thiscall cItemStageDropInstant::vf2C(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x4c) & 0x20000000) != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x54);
    *(undefined1 *)(param_1 + 0x94) = 1;
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  return;
}

// 009500F0  cItemStageDropInstant::vf28  size=157  [class]
void __fastcall cItemStageDropInstant::vf28(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar2 = FUN_0094aa20(*(undefined4 *)(param_1 + 0x10));
    uVar3 = FUN_00a7c8a0();
    iVar4 = FUN_00d46780();
    if ((((iVar4 != 0) || (iVar4 = FUN_00d467a0(), iVar4 != 0)) &&
        ((*(uint *)(param_1 + 4) & 0x10000) != 0)) &&
       (PTR_DAT_01886d84 != PTR_DAT_01886d84 + DAT_01886d88 * 4)) {
      piVar5 = (int *)PTR_DAT_01886d84;
      do {
        piVar1 = (int *)*piVar5;
        if (*piVar1 == *(int *)(param_1 + 0x68)) {
          if ((piVar1 != (int *)0x0) && ((piVar1[0x13] & 0x40000U) != 0)) {
            return;
          }
          break;
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != (int *)(PTR_DAT_01886d84 + DAT_01886d88 * 4));
    }
    FUN_00cbb410(uVar3,0xffffffff,uVar2,0xf00);
  }
  return;
}

// 00950190  cItemStageDropInstant::vf04  size=57  [class]
undefined4 * __thiscall cItemStageDropInstant::vf04(undefined4 *param_1,byte param_2)

{
  param_1[0x18] = 0;
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009501D0  cItemStageDropInstant::vf1C  size=174  [class]
void __fastcall cItemStageDropInstant::vf1C(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (PTR_DAT_01886ea4 != PTR_DAT_01886ea4 + DAT_01886ea8 * 4) {
    piVar3 = (int *)PTR_DAT_01886ea4;
    while (piVar1 = (int *)*piVar3, piVar1[4] != *(int *)(param_1 + 0x10)) {
      piVar3 = piVar3 + 1;
      if (piVar3 == (int *)(PTR_DAT_01886ea4 + DAT_01886ea8 * 4)) {
        return;
      }
    }
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x2c))(), iVar2 == 0)) {
      if (*(int *)(param_1 + 0xc) == 7) {
        (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_1 + 0x44));
      }
      else {
        (**(code **)(*piVar1 + 0x1c))();
      }
      FUN_00e5e050("core_se_sys_item_get",0);
      FUN_0094f090(*(undefined4 *)(param_1 + 0x10));
      if (*(int *)(param_1 + 0x50) != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar3 + 0x20))();
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      if ((*(uint *)(param_1 + 4) & 0x10000) != 0) {
        FUN_0094e3e0(*(undefined4 *)(param_1 + 0x68));
      }
    }
  }
  return;
}

