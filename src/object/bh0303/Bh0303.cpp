// src/object/bh0303/Bh0303.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00603DF0..00AB9A20, 6 functions

#include "types.h"

// 00603DF0  Bh0303::vf40  size=31  [class]
undefined4 __fastcall Bh0303::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Bh0140::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc10) = 0;
  return 1;
}

// 00603E10  Bh0303::vf1D0  size=32  [class]
void __thiscall Bh0303::vf1D0(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0xec) != 0) {
    *(undefined4 *)(param_1 + 0xc10) = 1;
  }
  Bh0056::vf1D0();
  return;
}

// 00603E30  Bh0303::vf30  size=67  [class]
void __fastcall Bh0303::vf30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x4ec);
  iVar2 = FUN_00e03ea0(&DAT_016459ac);
  if (((iVar1 == iVar2) && (DAT_018b9174 == 0xc40)) && (*(int *)(param_1 + 0xc10) != 0)) {
    DAT_01b354e0 = 1;
  }
  Bh0056::vf30();
  return;
}

// 00AB16E0  Bh0303::Bh0303  size=18  [class]
undefined4 * __fastcall Bh0303::Bh0303(undefined4 *param_1)

{
  BehaviorBh::BehaviorBh();
  *param_1 = vftable;
  return param_1;
}

// 00AB1700  Bh0303::vf04  size=6  [class]
undefined * Bh0303::vf04(void)

{
  return &DAT_01b354e4;
}

// 00AB9A20  Bh0303::vf00  size=54  [class]
undefined4 __thiscall Bh0303::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

