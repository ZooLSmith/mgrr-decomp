// lib/havok/unit_0092C090.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092C090..0092C130, 4 functions

#include "mgrr.h"
#include "HkRemoveManagerImplement.h"
#include "HkRemovePhantom.h"
#include "HkRemoveRagdoll.h"

// 0092C090  HkRemovePhantom::vf08  size=45  [run]
void __fastcall HkRemovePhantom::vf08(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_01193b40(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  FUN_010060a0();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0092C0C0  HkRemoveRagdoll::vf08  size=8  [run]
void __fastcall HkRemoveRagdoll::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0092C120  HkRemoveManagerImplement::vf28  size=9  [run]
bool __fastcall HkRemoveManagerImplement::vf28(int param_1)

{
  return 0 < *(int *)(param_1 + 4);
}

// 0092C130  HkRemoveManagerImplement::vf24  size=19  [run]
void __thiscall HkRemoveManagerImplement::vf24(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return;
}

