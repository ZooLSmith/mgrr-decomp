// src/lib/MessageMapBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E92900..00E96570, 5 functions

#include "types.h"

// 00E92900  lib::MessageMapBase::vf00  size=31  [class]
undefined4 * __thiscall lib::MessageMapBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E962A0  lib::MessageMapBase::vf04  size=44  [class]
void lib::MessageMapBase::vf04(int param_1)

{
  FUN_00e952d0(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// 00E96440  FUN_00e96440  size=72  [between]
int * FUN_00e96440(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)param_1[2];
  if (*(char *)((int)piVar2 + 0xd) == '\0') {
    piVar3 = (int *)piVar2[1];
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      do {
        piVar2 = piVar3;
        piVar3 = (int *)piVar3[1];
      } while (*(char *)((int)piVar3 + 0xd) == '\0');
      return piVar2;
    }
  }
  else {
    cVar1 = *(char *)(*param_1 + 0xd);
    piVar3 = (int *)*param_1;
    while ((piVar2 = piVar3, cVar1 == '\0' && (param_1 == (int *)piVar2[2]))) {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar3 = (int *)*piVar2;
      param_1 = piVar2;
    }
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      piVar2 = param_1;
    }
  }
  return piVar2;
}

// 00E964F0  FUN_00e964f0  size=70  [between]
void __thiscall FUN_00e964f0(int *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 == param_2) {
    iVar1 = FUN_00e96440(*param_1);
    if ((((iVar1 == 0) || (*(char *)(iVar1 + 0xd) != '\0')) ||
        (*(int *)(iVar1 + 0x14) != param_1[2])) ||
       (((*(int *)(iVar1 + 0x18) != param_1[3] || (*(int *)(iVar1 + 0x1c) != param_1[4])) ||
        (*(int *)(iVar1 + 0x20) != param_1[5])))) {
      iVar1 = 0;
    }
    *param_1 = iVar1;
  }
  return;
}

// 00E96570  lib::MessageMapBase::MessageMapBase  size=110  [class]
void __fastcall lib::MessageMapBase::MessageMapBase(undefined4 *param_1)

{
  *param_1 = MessageMap::vftable;
  FUN_00e93fc0();
  thunk_FUN_00ea9d90();
  if ((param_1[0x22] != 0) && ((code *)param_1[0x23] != (code *)0x0)) {
    (*(code *)param_1[0x23])(param_1[0x22],param_1 + 0x1c);
  }
  FUN_00ea4380();
  if ((param_1[0x19] != 0) && ((code *)param_1[0x1a] != (code *)0x0)) {
    (*(code *)param_1[0x1a])(param_1[0x19],param_1 + 0x11);
  }
  if ((param_1[0xe] != 0) && ((code *)param_1[0xf] != (code *)0x0)) {
    (*(code *)param_1[0xf])(param_1[0xe],param_1 + 6);
  }
  *param_1 = vftable;
  return;
}

