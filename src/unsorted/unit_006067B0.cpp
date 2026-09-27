// src/unsorted/unit_006067B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006067B0..00606960, 8 functions

#include "mgrr.h"

// 006067B0  FUN_006067b0  size=185  [run]
void __fastcall FUN_006067b0(int param_1)

{
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffff0fff;
  FUN_00ac8dd0("CG_MecBody",0);
  FUN_00ac8dd0("CG_MecR",0);
  FUN_00ac8dd0("CG_MecL",0);
  FUN_00ac8dd0("CG_body",0);
  FUN_00ac8dd0(&DAT_01645d14,0);
  FUN_00ac8dd0(&DAT_01645d0c,0);
  FUN_00ac8dd0("CG_head",0);
  FUN_00ac8dd0("CG_Hakama",0);
  FUN_00ac9300("Hakama_CLS_CUT");
  FUN_00ac9300("Hakama_CLS_Base");
  FUN_00ac9300("Armband_CLS");
  FUN_00ac9210("Hakama");
  FUN_00ac9210("Armband");
  return;
}

// 00606870  FUN_00606870  size=33  [run]
void __fastcall FUN_00606870(int param_1)

{
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x8000;
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffffefff;
  FUN_00ac8dd0("CG_MecR",1);
  return;
}

// 006068A0  FUN_006068a0  size=33  [run]
void __fastcall FUN_006068a0(int param_1)

{
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x4000;
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffffefff;
  FUN_00ac8dd0("CG_MecL",1);
  return;
}

// 006068D0  FUN_006068d0  size=73  [run]
void __fastcall FUN_006068d0(int param_1)

{
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffffefff;
  FUN_00ac94e0(&DAT_01645d70);
  FUN_00ac9300("Armband_brk0");
  FUN_00ac9300("Hakama_brk0_DEC");
  FUN_00ac94e0("_brk0_");
  FUN_00ac9420("_brk1_");
  return;
}

// 00606920  FUN_00606920  size=31  [run]
void __thiscall FUN_00606920(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x894) = param_2;
  }
  return;
}

// 00606940  FUN_00606940  size=1  [run]
void FUN_00606940(void)

{
  return;
}

// 00606950  FUN_00606950  size=7  [run]
undefined4 __fastcall FUN_00606950(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5740);
}

// 00606960  FUN_00606960  size=7  [run]
int __fastcall FUN_00606960(int param_1)

{
  return param_1 + 0x5750;
}

