// src/misc/esp105.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CFEA0..009E23C0, 6 functions

#include "types.h"

// 009CFEA0  esp105::vf10  size=1  [class]
void esp105::vf10(void)

{
  return;
}

// 009D4250  esp105::esp105  size=18  [class]
undefined4 * __fastcall esp105::esp105(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009D88B0  esp105::vf04  size=116  [class]
undefined4 __thiscall
esp105::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
    psVar2 = (short *)*puVar4;
    if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if ((psVar2 != (short *)0x0) &&
       (sVar1 = *psVar2, *(int *)(param_1 + 0x450) = (int)sVar1, 8 < (uint)(int)sVar1)) {
      return 0;
    }
  }
  return 1;
}

// 009DF440  esp105::vf00  size=30  [class]
undefined4 __thiscall esp105::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E2360  esp105::vf08  size=82  [class]
void __fastcall esp105::vf08(int param_1)

{
  uint uVar1;
  
  esp39::vf08();
  uVar1 = *(uint *)(param_1 + 0x450);
  if (DAT_01b788a8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b78890);
  }
  (&DAT_01b78874)[uVar1 >> 5] = (&DAT_01b78874)[uVar1 >> 5] | 0x80000000U >> ((byte)uVar1 & 0x1f);
  if (DAT_01b788a8 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b78890);
  }
  return;
}

// 009E23C0  esp105::vf14  size=77  [class]
void __fastcall esp105::vf14(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x450);
  if (DAT_01b788a8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b78890);
  }
  (&DAT_01b78874)[uVar1 >> 5] = (&DAT_01b78874)[uVar1 >> 5] & ~(0x80000000U >> ((byte)uVar1 & 0x1f))
  ;
  if (DAT_01b788a8 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b78890);
  }
  return;
}

