// src/misc/esp111.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CFFC0..009DF510, 6 functions

#include "mgrr.h"
#include "esp111.h"

// 009CFFC0  esp111::vf08  size=5  [class]
void __fastcall esp111::vf08(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) != 0) {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
    FUN_00efb130(piVar1);
    FUN_00efbd40(piVar1);
    return;
  }
  *piVar1 = 0;
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  return;
}

// 009CFFD0  esp111::addOtTransList  size=81  [class]
void __fastcall esp111::addOtTransList(int param_1)

{
  if (*(float *)(param_1 + 0x90) != 0.0) {
    *(float *)(param_1 + 0x124) =
         (*(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90)) * *(float *)(param_1 + 0x124);
  }
  if ((DAT_01bea060 & 0x40000000) == 0) {
    FUN_00a28940(*(undefined4 *)(param_1 + 0x450),(float)*(int *)(param_1 + 0x458));
  }
  return;
}

// 009D0030  esp111::vf14  size=23  [class]
void __fastcall esp111::vf14(int param_1)

{
  FUN_00a28940(0xffffffff,(float)*(int *)(param_1 + 0x458));
  return;
}

// 009D42F0  esp111::esp111  size=18  [class]
undefined4 * __fastcall esp111::esp111(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 009D9350  esp111::preTrans  size=114  [class]
undefined4 __thiscall
esp111::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar3;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar4 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (psVar1 != (short *)0x0) {
        *(int *)(param_1 + 0x450) = (int)*psVar1;
        *(int *)(param_1 + 0x458) = (int)psVar1[1];
      }
    }
    return 1;
  }
  return 0;
}

// 009DF510  esp111::vf00  size=30  [class]
undefined4 __thiscall esp111::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

