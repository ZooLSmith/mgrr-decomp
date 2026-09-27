// src/unsorted/unit_00A1D280.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A1D280..00A1D5C0, 9 functions

#include "mgrr.h"

// 00A1D280  FUN_00a1d280  size=66  [run]
bool FUN_00a1d280(int param_1)

{
  uint uVar1;
  
  if (0x16 < param_1) {
    return false;
  }
  uVar1 = (&DAT_01b77e60)[param_1];
  if ((int)uVar1 < 0) {
    uVar1 = DAT_01b7b798 & uVar1 & 0x7fffffff;
  }
  else {
    uVar1 = FUN_00dd93a0(uVar1);
  }
  return uVar1 != 0;
}

// 00A1D2D0  FUN_00a1d2d0  size=66  [run]
bool FUN_00a1d2d0(int param_1)

{
  uint uVar1;
  
  if (0x16 < param_1) {
    return false;
  }
  uVar1 = (&DAT_01b77e60)[param_1];
  if ((int)uVar1 < 0) {
    uVar1 = DAT_01b7b79c & uVar1 & 0x7fffffff;
  }
  else {
    uVar1 = FUN_00dd9400(uVar1);
  }
  return uVar1 != 0;
}

// 00A1D370  FUN_00a1d370  size=15  [run]
void FUN_00a1d370(void)

{
  FUN_00df8ce0(1);
  FUN_00ddb230();
  return;
}

// 00A1D390  FUN_00a1d390  size=16  [run]
undefined4 FUN_00a1d390(void)

{
  FUN_00dd7240();
  return 1;
}

// 00A1D3A0  FUN_00a1d3a0  size=10  [run]
void FUN_00a1d3a0(void)

{
  FUN_00dd7270();
  return;
}

// 00A1D3F0  FUN_00a1d3f0  size=1  [run]
void FUN_00a1d3f0(void)

{
  return;
}

// 00A1D400  FUN_00a1d400  size=371  [run]
void FUN_00a1d400(void)

{
  int iVar1;
  
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  iVar1 = 5;
  do {
    Hw::cHeapVariable::vf08();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  Hw::cHeapPhysical::vf08();
  return;
}

// 00A1D580  FUN_00a1d580  size=50  [run]
void FUN_00a1d580(void)

{
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  Hw::cHeapVariable::vf08();
  return;
}

// 00A1D5C0  FUN_00a1d5c0  size=19  [run]
undefined * FUN_00a1d5c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd7ad0();
  return &DAT_01b7bea8 + iVar1 * 0x58;
}

