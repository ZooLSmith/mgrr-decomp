// src/unsorted/unit_00F4E3D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4E3D0..00F4E800, 9 functions

#include "types.h"

// 00F4E3D0  FUN_00f4e3d0  size=127  [run]
void __fastcall FUN_00f4e3d0(int param_1)

{
  FUN_00f4dbf0();
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x2c),0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x2c),0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  Hw::
  cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
  ::
  cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
            ();
  return;
}

// 00F4E450  FUN_00f4e450  size=56  [run]
int __thiscall FUN_00f4e450(int param_1,void *param_2)

{
  void *pvVar1;
  
  if (0 < (int)*(size_t *)(param_1 + 0x34)) {
    pvVar1 = _bsearch(param_2,*(void **)(param_1 + 0x2c),*(size_t *)(param_1 + 0x34),4,
                      (_PtFuncCompare *)&LAB_00f4d510);
    if (pvVar1 != (void *)0x0) {
      return (int)pvVar1 - *(int *)(param_1 + 0x2c) >> 2;
    }
  }
  return -1;
}

// 00F4E490  FUN_00f4e490  size=111  [run]
void __thiscall FUN_00f4e490(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(int *)(param_1 + 0x34) < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x18) != 0)) {
    puVar2 = (undefined4 *)FUN_00f4cd70();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_3;
      if (*(int *)(param_1 + 0x30) <= *(int *)(param_1 + 0x34)) {
        *param_2 = *(int *)(param_1 + 0x28);
        return;
      }
      iVar1 = *(int *)(param_1 + 0x34) * 4;
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x2c) + iVar1);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar2;
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      *param_2 = *(int *)(param_1 + 0x2c) + iVar1;
      return;
    }
  }
  *param_2 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) * 4;
  return;
}

// 00F4E580  FUN_00f4e580  size=83  [run]
void __thiscall FUN_00f4e580(int param_1,int *param_2,void *param_3)

{
  void *pvVar1;
  int iVar2;
  
  if (0 < (int)*(size_t *)(param_1 + 0x34)) {
    pvVar1 = _bsearch(param_3,*(void **)(param_1 + 0x2c),*(size_t *)(param_1 + 0x34),4,
                      (_PtFuncCompare *)&LAB_00f4d510);
    if (pvVar1 != (void *)0x0) {
      iVar2 = (int)pvVar1 - *(int *)(param_1 + 0x2c) >> 2;
      if (-1 < iVar2) {
        *param_2 = *(int *)(param_1 + 0x2c) + iVar2 * 4;
        return;
      }
    }
  }
  *param_2 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) * 4;
  return;
}

// 00F4E5E0  FUN_00f4e5e0  size=125  [run]
int * __thiscall FUN_00f4e5e0(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  
  uVar1 = param_3;
  if (*(int *)(param_1 + 0x30) <= *(int *)(param_1 + 0x34)) {
    *param_2 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) * 4;
    return param_2;
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar2 = FUN_00f4d6c0(param_3,param_1 + 0x28,0,*(int *)(param_1 + 0x34) + -1,&LAB_00f4d510,
                         &param_3);
    piVar3 = (int *)(*(code *)(&PTR_LAB_018d7494)[iVar2])(&param_3,param_3,uVar1);
    *unaff_EDI = *piVar3;
    return unaff_EDI;
  }
  FUN_00f4e490(param_2,param_3);
  return param_2;
}

// 00F4E660  FUN_00f4e660  size=62  [run]
undefined4 __thiscall FUN_00f4e660(int param_1,int *param_2,undefined4 *param_3)

{
  FUN_00f4e5e0(&param_2,param_2);
  if (param_2 == (int *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x34) * 4)) {
    return 0;
  }
  *(undefined4 *)(*param_2 + 4) = *param_3;
  return 1;
}

// 00F4E6F0  FUN_00f4e6f0  size=115  [run]
void FUN_00f4e6f0(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    if (*(int **)((int)&DAT_01ee6580 + uVar1) != (int *)0x0) {
      (**(code **)(**(int **)((int)&DAT_01ee6580 + uVar1) + 8))();
      if (*(undefined4 **)((int)&DAT_01ee6580 + uVar1) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)&DAT_01ee6580 + uVar1))(1);
      }
      *(undefined4 *)((int)&DAT_01ee6580 + uVar1) = 0;
    }
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x40);
  iVar2 = 0;
  do {
    FUN_00fa46e0();
    FUN_00fa4560();
    iVar2 = iVar2 + 0x1c;
  } while (iVar2 < 0x38);
  FUN_00fa46e0();
  FUN_00fa4560();
  return;
}

// 00F4E7C0  FUN_00f4e7c0  size=22  [run]
undefined * FUN_00f4e7c0(void)

{
  return &DAT_01ee65fc + DAT_01ee65c0 * 0x1c;
}

// 00F4E800  FUN_00f4e800  size=174  [run]
void FUN_00f4e800(void)

{
  FUN_00f99df0();
  FUN_00f99b10();
  DAT_01ee65c0 = DAT_01ee65c0 + 1 & 0x80000001;
  if ((int)DAT_01ee65c0 < 0) {
    DAT_01ee65c0 = (DAT_01ee65c0 - 1 | 0xfffffffe) + 1;
  }
  FUN_00f96ef0();
  FUN_00f96e20();
  FUN_00f99db0();
  FUN_00f99ac0();
  return;
}

