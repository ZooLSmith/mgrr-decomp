// src/misc/cCustomObjWorkBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3870..00D120A0, 6 functions

#include "types.h"

// 00CB3870  cCustomObjWorkBase::vf10  size=11  [class]
void __fastcall cCustomObjWorkBase::vf10(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cb3879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x40) + 0xc))();
  return;
}

// 00CB3880  cCustomObjWorkBase::vf04  size=1  [class]
void cCustomObjWorkBase::vf04(void)

{
  return;
}

// 00CB3890  cCustomObjWorkBase::vf08  size=66  [class]
void __thiscall cCustomObjWorkBase::vf08(int param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x1c) == 0) &&
     (((*(int *)(param_1 + 500) == 0 || (*(int *)(param_1 + 4) != 0)) ||
      (*(int *)(param_1 + 0x1f8) != 0)))) {
    (**(code **)(*(int *)(param_1 + 0x40) + 0x10))(param_2);
    *(undefined4 *)(param_1 + 500) = 1;
  }
  return;
}

// 00CCE830  cCustomObjWorkBase::vf0C  size=219  [class]
void __thiscall cCustomObjWorkBase::vf0C(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_ECX;
  undefined4 uVar2;
  undefined1 local_10 [16];
  
  if (((*(int *)(param_1 + 0x1c) == 0) &&
      ((1 < DAT_01be8e44 || ((*(uint *)(param_1 + 0x28) & 0x40000) != 0)))) &&
     ((*(int *)(param_1 + 4) != 0 || (*(int *)(param_1 + 0x1f8) != 0)))) {
    if (((DAT_01bea060 & 0x2000000) == 0) || ((*(uint *)(param_1 + 0x28) & 0x200000) == 0)) {
      if (*(int *)(param_1 + 0x200) != 0) {
        iVar1 = *(int *)(param_1 + 0x200) + -1;
        *(int *)(param_1 + 0x200) = iVar1;
        if (-1 < iVar1) {
          return;
        }
        *(undefined4 *)(param_1 + 0x200) = 0;
        return;
      }
    }
    else if (DAT_018b9174 == 0xa15) {
      *(undefined4 *)(param_1 + 0x200) = 5;
      return;
    }
    FUN_00cca790(local_10);
    uVar2 = 0;
    if (*(int *)(extraout_ECX + 8) == 0x1a) {
      uVar2 = 1;
    }
    else if (*(int *)(extraout_ECX + 8) == 0) {
      uVar2 = 2;
    }
    (**(code **)(*(int *)(extraout_ECX + 0x40) + 0x14))
              (param_2,0,*(undefined4 *)(extraout_ECX + 0x30),uVar2,
               *(undefined4 *)(extraout_ECX + 0x204),local_10,local_10,0);
  }
  return;
}

// 00CF9A40  cCustomObjWorkBase::vf14  size=5  [class]
undefined4 cCustomObjWorkBase::vf14(void)

{
  return 0;
}

// 00D120A0  cCustomObjWorkBase::vf00  size=65  [class]
undefined4 * __thiscall cCustomObjWorkBase::vf00(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x10] + 0xc);
  *param_1 = vftable;
  (*pcVar1)();
  param_1[0x10] = cUICtrl::vftable;
  FUN_00cc7640();
  *param_1 = cUIWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

