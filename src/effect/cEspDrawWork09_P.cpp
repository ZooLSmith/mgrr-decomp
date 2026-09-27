// src/effect/cEspDrawWork09_P.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED7E40..00F3F860, 4 functions

#include "mgrr.h"
#include "cEspDrawWork09_P.h"

// 00ED7E40  cEspDrawWork09_P::draw  size=59  [class]
void __fastcall cEspDrawWork09_P::draw(int param_1)

{
  FUN_00f45d30(0);
  FUN_00f458a0();
  FUN_00f98f80(&PTR_vftable_018da4c0);
  FUN_00f99010(0,param_1 + 0xd0);
  FUN_00f9dfb0(5);
  FUN_00f45940();
  return;
}

// 00F01CE0  cEspDrawWork09_P::cEspDrawWork09_P_2  size=131  [class]
undefined4 * __thiscall cEspDrawWork09_P::cEspDrawWork09_P_2(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_01edd490 != 0) {
    puVar1 = (undefined4 *)cPrimHeap::allocBuffer(0x100,0x20);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[9] = 0;
      *puVar1 = vftable;
      FUN_00f9c880();
      iVar2 = FUN_00f510b0(puVar1 + 0x34,0xc,4,param_2);
      if (iVar2 == 0) {
        FUN_009cca90(param_1,&DAT_016db070);
        return (undefined4 *)0x0;
      }
      return puVar1;
    }
  }
  FUN_009cca90(param_1,&DAT_016db048);
  return (undefined4 *)0x0;
}

// 00F3B400  cEspDrawWork09_P::cEspDrawWork09_P  size=31  [class]
undefined4 * __fastcall cEspDrawWork09_P::cEspDrawWork09_P(undefined4 *param_1)

{
  param_1[9] = 0;
  *param_1 = vftable;
  FUN_00f9c880();
  return param_1;
}

// 00F3F860  cEspDrawWork09_P::vf00  size=42  [class]
undefined4 * __thiscall cEspDrawWork09_P::vf00(undefined4 *param_1,byte param_2)

{
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

