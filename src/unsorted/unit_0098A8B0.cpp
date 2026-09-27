// src/unsorted/unit_0098A8B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098A8B0..0098A900, 2 functions

#include "mgrr.h"

// 0098A8B0  FUN_0098a8b0  size=68  [run]
void FUN_0098a8b0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00932720();
  iVar3 = 0;
  do {
    *(undefined4 *)((int)&DAT_01b391d4 + iVar3) = 0xffffffff;
    iVar2 = FUN_00c66700(*(undefined4 *)((int)&PTR_s_borris_0188dfe4 + iVar3),uVar1,0);
    iVar4 = iVar3 + 4;
    *(uint *)((int)&DAT_01b391d4 + iVar3) = (uint)(iVar2 != -1);
    iVar3 = iVar4;
  } while (iVar4 < 0x1c);
  return;
}

// 0098A900  FUN_0098a900  size=43  [run]
void FUN_0098a900(void)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_s_borris_0188dfe4;
  do {
    uVar1 = FUN_00c32c20(*ppuVar2);
    FUN_00c66510(uVar1);
    ppuVar2 = ppuVar2 + 1;
  } while ((int)ppuVar2 < 0x188e000);
  return;
}

