// src/boss/bm6040/Bm6040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00604170..00AB9AD0, 6 functions

#include "mgrr.h"
#include "Bm6040.h"

// 00604170  Bm6040::vf40  size=58  [class]
undefined4 __fastcall Bm6040::vf40(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xb64) = 0;
  iVar1 = Bm6041::vf40();
  if (iVar1 != 0) {
    iVar1 = FUN_00dd7240();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xb60) = 0;
      return 1;
    }
  }
  return 0;
}

// 006041B0  Bm6040::vf44  size=41  [class]
void __fastcall Bm6040::vf44(int param_1)

{
  if (*(int *)(param_1 + 0xb58) != 0) {
    FUN_00dd7270();
  }
  DAT_01dc1370 = 0;
  BehaviorBgBase::vf44();
  return;
}

// 006041E0  Bm6040::vf50  size=262  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Bm6040::vf50(int *param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  LPCRITICAL_SECTION unaff_EBX;
  LPCRITICAL_SECTION lpCriticalSection;
  
  Bm0201::vf50();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x2d0);
  if (param_1[0x2d6] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_1[0x2d9] != 0) {
    FUN_00d35bc0();
  }
  if (param_1[0x2d8] == 0) {
    DAT_01dc1370 = 0;
    (**(code **)(*param_1 + 0x20))();
  }
  else {
    (**(code **)(*param_1 + 0x1c))();
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
    if (iVar2 != 0) {
      pfVar3 = (float *)(**(code **)(*param_1 + 0x68))();
      pfVar4 = (float *)FUN_00a7c8b0();
      lpCriticalSection = unaff_EBX;
      if (SQRT((*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3) +
               (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1]) +
               (pfVar4[2] - pfVar3[2]) * (pfVar4[2] - pfVar3[2])) < 5.0) {
        DAT_01dc1370 = 0;
        goto LAB_006042d4;
      }
    }
    DAT_01dc1370 = 1;
    _DAT_01dc5020 = param_1[0x10];
    _DAT_01dc5024 = param_1[0x11];
    _DAT_01dc5028 = param_1[0x12];
    _DAT_01dc502c = param_1[0x13];
  }
LAB_006042d4:
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 00AB17F0  Bm6040::Bm6040  size=28  [class]
undefined4 * __fastcall Bm6040::Bm6040(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  param_1[0x2d6] = 0;
  return param_1;
}

// 00AB1810  Bm6040::vf04  size=6  [class]
undefined * Bm6040::vf04(void)

{
  return &DAT_01b354f0;
}

// 00AB9AD0  Bm6040::vf00  size=54  [class]
undefined4 __thiscall Bm6040::vf00(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

