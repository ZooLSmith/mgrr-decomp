// src/boss/bm0235/Bm0235.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00411750..00AB8F70, 7 functions

#include "types.h"

// 00411750  Bm0235::vf44  size=30  [class]
void Bm0235::vf44(void)

{
  BehaviorBgBase::vf44();
  DAT_01b34ba0 = 0;
  FUN_00dd7270();
  return;
}

// 00411770  Bm0235::vf40  size=92  [class]
undefined4 __fastcall Bm0235::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00dd7240();
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined1 *)(param_1 + 0xb40) = 0;
  uVar2 = FUN_00e03ea0("P220_RABO_SIGNAL");
  *(undefined4 *)(param_1 + 0xc00) = uVar2;
  return 1;
}

// 004117D0  FUN_004117d0  size=122  [between]
int __thiscall FUN_004117d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  FUN_00e01ca0();
  *(undefined4 *)(param_1 + 0x110) = param_2;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  FUN_00dffad0(param_2);
  FUN_00e020f0(*(undefined4 *)(param_3 + 0x4f0));
  FUN_00dffb30(param_4);
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return param_1;
}

// 00411850  Bm0235::vf4C  size=389  [class]
void __fastcall Bm0235::vf4C(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_160 [124];
  undefined4 local_e4;
  
  BehaviorBgBase::vf4C();
  if (DAT_018b9174 == 0x220) {
    iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0xc00),1);
    if (iVar1 != 0) {
      iVar1 = FUN_00c1bd80();
      if (iVar1 != 0) {
        if (*(char *)(param_1 + 0xb40) == '\0') {
          if (*(int *)(param_1 + 0xc20) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc08));
          }
          FUN_004117d0(1,param_1,param_1 + 0xb50);
          FUN_00a963e0(local_160);
          if (DAT_01b34ba0 == 0) {
            FUN_00e5e050("r204_se_env_alarm",0);
            DAT_01b34ba0 = 1;
          }
          local_e4 = 0;
          if (*(int *)(param_1 + 0xc20) != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc08));
          }
        }
        *(undefined1 *)(param_1 + 0xb40) = 1;
        *(undefined4 *)(param_1 + 0xb44) = 0;
      }
      if (*(char *)(param_1 + 0xb40) != '\0') {
        fVar2 = (float10)FUN_00a92ff0();
        *(float *)(param_1 + 0xb44) =
             (float)(fVar2 * (float10)0.016666668 + (float10)*(float *)(param_1 + 0xb44));
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0xb44) = 0;
          return;
        }
        if (*(int *)(param_1 + 0xc20) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc08));
        }
        if (DAT_01b34ba0 != 0) {
          FUN_00e5e050("Stop_r204_se_env_alarm",0);
          DAT_01b34ba0 = 0;
        }
        FUN_00eaa6e0(0x43960000,0);
        *(undefined1 *)(param_1 + 0xb40) = 0;
        if (*(int *)(param_1 + 0xc20) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc08));
        }
      }
    }
  }
  return;
}

// 00AB0250  Bm0235::Bm0235  size=39  [class]
undefined4 * __fastcall Bm0235::Bm0235(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  cEspControler::cEspControler();
  param_1[0x308] = 0;
  return param_1;
}

// 00AB0280  Bm0235::vf04  size=6  [class]
undefined * Bm0235::vf04(void)

{
  return &DAT_01b34ba4;
}

// 00AB8F70  Bm0235::vf00  size=65  [class]
undefined4 __thiscall Bm0235::vf00(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

