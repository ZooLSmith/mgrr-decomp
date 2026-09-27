// src/ui/cUIWorkBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CAE290..00CF8790, 14 functions

#include "types.h"

// 00CAE290  cUIWorkBase::vf04  size=1  [class]
void cUIWorkBase::vf04(void)

{
  return;
}

// 00CCA790  FUN_00cca790  size=238  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cca790(int param_1,float *param_2)

{
  *param_2 = 1.0;
  param_2[1] = 1.0;
  param_2[2] = 1.0;
  param_2[3] = 1.0;
  if ((*(uint *)(param_1 + 0x28) & 0x4000000) != 0) {
    *param_2 = _DAT_01dc2030;
    param_2[1] = _DAT_01dc2034;
    param_2[2] = _DAT_01dc2038;
    param_2[3] = _DAT_01dc203c;
  }
  if ((*(uint *)(param_1 + 0x28) & 0x8000000) == 0) {
    if (((DAT_01bea094 & 0x40000) == 0) || ((*(uint *)(param_1 + 0x28) & 0x8000) == 0)) {
      if (*(int *)(param_1 + 0x20) == 0) {
        *param_2 = *param_2 * _DAT_01dc2020;
        param_2[1] = param_2[1] * _DAT_01dc2024;
        param_2[2] = param_2[2] * _DAT_01dc2028;
        param_2[3] = param_2[3] * _DAT_01dc202c;
      }
      else if (1.0 < _DAT_01dc202c != (_DAT_01dc202c == 1.0)) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
  }
  if ((*(uint *)(param_1 + 0x28) & 0x2000000) == 0) {
    *param_2 = *param_2 * _DAT_01dc2040;
    param_2[1] = param_2[1] * _DAT_01dc2044;
    param_2[2] = param_2[2] * _DAT_01dc2048;
    param_2[3] = param_2[3] * _DAT_01dc204c;
  }
  return;
}

// 00CCA880  cUIWorkBase::vf10  size=8  [class]
void cUIWorkBase::vf10(void)

{
  FUN_00cc7640();
  return;
}

// 00CCA890  cUIWorkBase::vf0C  size=125  [class]
void __thiscall cUIWorkBase::vf0C(int param_1,undefined4 param_2)

{
  int extraout_ECX;
  undefined4 uVar1;
  undefined1 local_10 [16];
  
  if ((((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 4) != 0)) &&
      ((1 < DAT_01be8e44 || ((*(uint *)(param_1 + 0x28) & 0x40000) != 0)))) &&
     ((DAT_01dc2d7c == 0 || ((*(uint *)(param_1 + 0x28) & 0x80000) != 0)))) {
    FUN_00cca790(local_10);
    uVar1 = 0;
    if (*(int *)(extraout_ECX + 8) == 0x1a) {
      uVar1 = 1;
    }
    else if (*(int *)(extraout_ECX + 8) == 0) {
      uVar1 = 2;
    }
    (**(code **)(*(int *)(extraout_ECX + 0x40) + 4))
              (param_2,0,*(undefined4 *)(extraout_ECX + 0x30),uVar1,local_10,local_10,0);
  }
  return;
}

// 00CE3180  cUIWorkBase::vf08  size=25  [class]
void __thiscall cUIWorkBase::vf08(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_00ce01f0(param_2);
  }
  return;
}

// 00CEAAD0  cUIWorkBase::cUIWorkBase_5  size=143  [class]
undefined4 * __fastcall cUIWorkBase::cUIWorkBase_5(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  cUICtrl::cUICtrl();
  param_1[0x78] = 0;
  param_1[0x85] = 0;
  *param_1 = cBodyLine::vftable;
  param_1[0x84] = 8;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  return param_1;
}

// 00CEAB90  cUIWorkBase::cUIWorkBase_6  size=93  [class]
undefined4 * __fastcall cUIWorkBase::cUIWorkBase_6(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  cUICtrl::cUICtrl();
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  *param_1 = cBodyLineMark::vftable;
  param_1[0x79] = 8;
  return param_1;
}

// 00CEB510  cUIWorkBase::cUIWorkBase_4  size=77  [class]
undefined4 * __fastcall cUIWorkBase::cUIWorkBase_4(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  cUICtrl::cUICtrl();
  param_1[0x78] = 0;
  *param_1 = cDamageDispBase::vftable;
  return param_1;
}

// 00CEDDD0  cUIWorkBase::cUIWorkBase_8  size=107  [class]
undefined4 * __fastcall cUIWorkBase::cUIWorkBase_8(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  cUICtrl::cUICtrl();
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *param_1 = cMissileTarget::vftable;
  return param_1;
}

// 00CEF690  cUIWorkBase::cUIWorkBase_7  size=77  [class]
undefined4 * __fastcall cUIWorkBase::cUIWorkBase_7(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  cUICtrl::cUICtrl();
  param_1[0x78] = 0;
  *param_1 = cJammingDispBase::vftable;
  return param_1;
}

// 00CF3450  cUIWorkBase::cUIWorkBase  size=143  [class]
undefined4 * __fastcall cUIWorkBase::cUIWorkBase(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  cUICtrl::cUICtrl();
  param_1[0x78] = 0;
  param_1[0x85] = 0;
  *param_1 = cWeakPointLine::vftable;
  param_1[0x84] = 8;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  return param_1;
}

// 00CF36F0  cUIWorkBase::cUIWorkBase_2  size=93  [class]
undefined4 * __fastcall cUIWorkBase::cUIWorkBase_2(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  cUICtrl::cUICtrl();
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  *param_1 = cWeakPointLineMark::vftable;
  param_1[0x79] = 8;
  return param_1;
}

// 00CF7FE0  cUIWorkBase::cUIWorkBase_3  size=141  [class]
undefined4 * __fastcall cUIWorkBase::cUIWorkBase_3(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 1;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  cUICtrl::cUICtrl();
  param_1[1] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *param_1 = cCkMsgDisp::vftable;
  param_1[0x7d] = 0xffffffff;
  param_1[0x7f] = 1;
  return param_1;
}

// 00CF8790  cUIWorkBase::vf00  size=62  [class]
undefined4 * __thiscall cUIWorkBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00cc7640();
  param_1[0x10] = cUICtrl::vftable;
  FUN_00cc7640();
  *param_1 = cUIWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

