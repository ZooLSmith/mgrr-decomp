// src/unsorted/unit_009A03F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009A03F0..009A0530, 3 functions

#include "mgrr.h"

// 009A03F0  FUN_009a03f0  size=68  [run]
int FUN_009a03f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x478,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cCustomizePointDisp::cCustomizePointDisp_3();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cCustomizeMenu";
      FUN_00d29ca0(0x67,9);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}

// 009A04A0  FUN_009a04a0  size=141  [run]
void __fastcall FUN_009a04a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_00cb2310(uVar1,0);
  FUN_00ce4d70(1);
  FUN_00cf9770(*(undefined4 *)(param_1 + 0x34),&DAT_016416fa,0,0xffffffff);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

// 009A0530  FUN_009a0530  size=1121  [run]
void __fastcall FUN_009a0530(int param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_ac [2];
  float local_a4 [2];
  float local_9c [21];
  float local_48 [2];
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 == '\x01') {
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x40),local_40,0x20);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x20),local_40);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x24),local_40);
    fVar5 = (float10)FUN_0098fb60(1,local_40,0);
    FUN_00cb32a0(local_a4,*(undefined4 *)(param_1 + 0x1c));
    local_ac[0] = 0.0;
    local_9c[0x11] = 0.0;
    local_9c[0] = 0.0;
    local_9c[0x12] = 0.0;
    local_9c[1] = 0.0;
    local_9c[2] = 0.0;
    local_9c[3] = 0.0;
    local_9c[4] = 0.0;
    local_9c[5] = 0.0;
    local_9c[6] = 0.0;
    local_9c[7] = 0.0;
    local_9c[8] = 0.0;
    local_9c[9] = 0.0;
    local_9c[10] = 0.0;
    local_9c[0xb] = 0.0;
    local_9c[0xc] = 0.0;
    local_9c[0xd] = 0.0;
    local_9c[0xe] = 0.0;
    local_9c[0xf] = 0.0;
    local_9c[0x10] = 0.0;
    local_9c[0x13] = -NAN;
    iVar4 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0x2c),local_9c);
    if (iVar4 != 0) {
      local_ac[0] = local_9c[0x11] + local_9c[0];
    }
    iVar4 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x2c));
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x34),
                 (local_a4[0] - 4.0) * 3.0 + *(float *)(iVar4 + 0x10) * local_ac[0] + (float)fVar5);
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x20),1,3);
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x24),1,3);
    *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x38) + '\x01';
  }
  else if (cVar1 == '\x02') {
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x40),local_40,0x20);
    fVar5 = (float10)FUN_0098fb60(1,local_40,0);
    FUN_00cb32a0(local_a4,*(undefined4 *)(param_1 + 0x1c));
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x28),(local_a4[0] + (float)fVar5) - 4.0);
    local_ac[0] = 0.0;
    local_9c[0x11] = 0.0;
    local_9c[0] = 0.0;
    local_9c[0x12] = 0.0;
    local_9c[1] = 0.0;
    local_9c[2] = 0.0;
    local_9c[3] = 0.0;
    local_9c[4] = 0.0;
    local_9c[5] = 0.0;
    local_9c[6] = 0.0;
    local_9c[7] = 0.0;
    local_9c[8] = 0.0;
    local_9c[9] = 0.0;
    local_9c[10] = 0.0;
    local_9c[0xb] = 0.0;
    local_9c[0xc] = 0.0;
    local_9c[0xd] = 0.0;
    local_9c[0xe] = 0.0;
    local_9c[0xf] = 0.0;
    local_9c[0x10] = 0.0;
    local_9c[0x13] = -NAN;
    iVar4 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0x2c),local_9c);
    if (iVar4 != 0) {
      local_ac[0] = local_9c[0x11] + local_9c[0];
    }
    iVar4 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x2c));
    fVar3 = (local_a4[0] - 4.0) * 3.0 + *(float *)(iVar4 + 0x10) * local_ac[0] + (float)fVar5;
    FUN_00cb3240(local_ac,*(undefined4 *)(param_1 + 0x1c));
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x1c),fVar3 / local_ac[0]);
    iVar4 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x34));
    if (*(float *)(iVar4 + 0xc0) < fVar3) {
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x34),fVar3);
    }
    iVar4 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x20));
    if (iVar4 == 0) {
      *(char *)(param_1 + 0x38) = *(char *)(param_1 + 0x38) + '\x01';
      return;
    }
  }
  else if (cVar1 == '\n') {
    iVar4 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar4 == iVar2) {
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
    else if (iVar4 < iVar2) {
      iVar4 = iVar4 + *(int *)(param_1 + 0x44);
      *(int *)(param_1 + 0x40) = iVar4;
      if (iVar2 < iVar4) {
        *(int *)(param_1 + 0x40) = iVar2;
      }
    }
    else if ((iVar2 < iVar4) &&
            (iVar4 = iVar4 + *(int *)(param_1 + 0x44), *(int *)(param_1 + 0x40) = iVar4,
            iVar4 < iVar2)) {
      *(int *)(param_1 + 0x40) = iVar2;
    }
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x40),local_20,0x20);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x20),local_20);
    FUN_00cce090(*(undefined4 *)(param_1 + 0x24),local_20);
    fVar5 = (float10)FUN_0098fb60(1,local_20,0);
    FUN_00cb32a0(local_48,*(undefined4 *)(param_1 + 0x1c));
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x28),(local_48[0] + (float)fVar5) - 4.0);
    local_ac[0] = 0.0;
    local_9c[0x11] = 0.0;
    local_9c[0x12] = 0.0;
    local_9c[0] = 0.0;
    local_9c[1] = 0.0;
    local_9c[2] = 0.0;
    local_9c[3] = 0.0;
    local_9c[4] = 0.0;
    local_9c[5] = 0.0;
    local_9c[6] = 0.0;
    local_9c[7] = 0.0;
    local_9c[8] = 0.0;
    local_9c[9] = 0.0;
    local_9c[10] = 0.0;
    local_9c[0xb] = 0.0;
    local_9c[0xc] = 0.0;
    local_9c[0xd] = 0.0;
    local_9c[0xe] = 0.0;
    local_9c[0xf] = 0.0;
    local_9c[0x10] = 0.0;
    local_9c[0x13] = -NAN;
    iVar4 = FUN_00d29cc0(*(undefined4 *)(param_1 + 0x2c),local_9c);
    if (iVar4 != 0) {
      local_ac[0] = local_9c[0x11] + local_9c[0];
    }
    iVar4 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x2c));
    fVar3 = (local_48[0] - 4.0) * 3.0 + *(float *)(iVar4 + 0x10) * local_ac[0] + (float)fVar5;
    FUN_00cb3240(local_a4,*(undefined4 *)(param_1 + 0x1c));
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x1c),fVar3 / local_a4[0]);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x34),fVar3);
    return;
  }
  return;
}

