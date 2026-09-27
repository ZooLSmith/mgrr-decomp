// src/misc/cCredit.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDD0A0..00D421B0, 3 functions

#include "types.h"

// 00CDD0A0  cCredit::~cCredit  size=129  [class]
void __fastcall cCredit::~cCredit(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[1];
  *param_1 = vftable;
  if (piVar2 != (int *)0x0) {
    piVar2[1] = 0;
    if (*piVar2 != 0) {
      FUN_00dd4940(*piVar2);
      *piVar2 = 0;
    }
  }
  if (param_1[1] != 0) {
    FUN_00dd4920(param_1[1]);
    param_1[1] = 0;
  }
  piVar2 = param_1 + 2;
  iVar1 = 0x18;
  do {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (param_1[0x1f] != 0) {
    FUN_00dd4940(param_1[0x1f]);
    param_1[0x1f] = 0;
  }
  return;
}

// 00CF39E0  cCredit::vf00  size=30  [class]
undefined4 __thiscall cCredit::vf00(undefined4 param_1,byte param_2)

{
  ~cCredit();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D421B0  cCredit::cCredit  size=82  [class]
undefined4 * cCredit::cCredit(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x80,&DAT_01b7be50);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x1c] = 0;
    puVar1[1] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *puVar1 = vftable;
    _memset(puVar1 + 2,0,0x60);
    cCreditParts::cCreditParts();
    puVar2 = puVar1;
  }
  return puVar2;
}

