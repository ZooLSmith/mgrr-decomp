// src/unsorted/unit_00D78E50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D78E50..00D78E90, 2 functions

#include "mgrr.h"

// 00D78E50  FUN_00d78e50  size=51  [run]
void __thiscall FUN_00d78e50(int param_1,int param_2)

{
  FUN_00a6ae60(param_2);
  _strncpy_s((char *)(param_1 + 0x394),0x20,(char *)(*(uint *)(param_2 + 0x78) & 0xfffffffe),0x1f);
  return;
}

// 00D78E90  FUN_00d78e90  size=40  [run]
void __fastcall FUN_00d78e90(int param_1)

{
  FUN_00a6ae80();
  _strncpy_s((char *)(param_1 + 0x394),0x20,"leaveRigidBody",0x1f);
  return;
}

