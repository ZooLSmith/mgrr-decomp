// src/misc/esp51.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD580..00F386D0, 4 functions

#include "types.h"

// 00ECD580  esp51::esp51  size=18  [class]
undefined4 * __fastcall esp51::esp51(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0BC0  esp51::vf00  size=30  [class]
undefined4 __thiscall esp51::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EDACD0  esp51::thunk_vf14  size=5  [class]
void esp51::thunk_vf14(void)

{
  if (DAT_01ede1a8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ede190);
  }
  DAT_01eddaf0 = 0;
  if (DAT_01ede1a8 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede190);
  }
  return;
}

// 00F386D0  esp51::vf04  size=169  [class]
undefined4 __thiscall
esp51::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x450) = 0x3f7eb852;
    *(undefined4 *)(param_1 + 0x454) = 0;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar4 != (undefined4 *)0x0)) {
      pfVar2 = (float *)*puVar4;
      if ((float *)((int)pfVar2 + 0xfU & 0xfffffff0) != pfVar2) {
        uVar5 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (pfVar2 != (float *)0x0) {
        fVar1 = *pfVar2;
        *(float *)(param_1 + 0x450) = fVar1;
        if (fVar1 < 0.0 != (fVar1 == 0.0)) {
          *(undefined4 *)(param_1 + 0x450) = 0x3f7eb852;
        }
        *(float *)(param_1 + 0x454) = pfVar2[1];
      }
    }
    *(undefined4 *)(param_1 + 0x458) = 0;
    return 1;
  }
  return 0;
}

