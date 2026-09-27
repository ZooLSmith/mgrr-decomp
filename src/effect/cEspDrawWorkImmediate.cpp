// src/effect/cEspDrawWorkImmediate.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8500..00F3F9C0, 2 functions

#include "mgrr.h"
#include "cEspDrawWorkImmediate.h"

// 00ED8500  cEspDrawWorkImmediate::draw  size=151  [class]
void __fastcall cEspDrawWorkImmediate::draw(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0xd0);
  if (puVar2[1] == 0) {
    FUN_00ed4580(param_1,&DAT_016db9cc,*puVar2);
  }
  else {
    iVar3 = FUN_00eca140(*puVar2);
    if (iVar3 != 0) {
      fVar4 = (float10)FUN_00eca1e0(**(undefined4 **)(param_1 + 0xd0));
      fVar1 = (float)(fVar4 * (float10)1.6666666269302368);
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
      fVar1 = *(float *)(param_1 + 0x8c) * fVar1;
      *(float *)(param_1 + 0x8c) = fVar1;
      if (fVar1 < 0.01 == (fVar1 == 0.01)) {
        cEspDrawWork::draw();
        return;
      }
    }
  }
  return;
}

// 00F3F9C0  cEspDrawWorkImmediate::vf00  size=31  [class]
undefined4 * __thiscall cEspDrawWorkImmediate::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

