// src/enemy/em0120/Em0120.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004DB240..00AB73A0, 112 functions

#include "mgrr.h"
#include "Em0120.h"

// 004DB240  Em0120::vf14C  size=5  [class]
undefined4 Em0120::vf14C(void)

{
  return 0;
}

// 004DB250  Em0120::vf158  size=5  [class]
undefined4 Em0120::vf158(void)

{
  return 0;
}

// 004DB260  Em0120::vf184  size=6  [class]
undefined4 Em0120::vf184(void)

{
  return 0xffffffff;
}

// 004DB270  Em0120::vf188  size=43  [class]
void Em0120::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 004DB2A0  Em0120::vf44  size=383  [class]
void __fastcall Em0120::vf44(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4a0) == 6) || (*(int *)(param_1 + 0x4a0) == 7)) {
    FUN_0057e9b0();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if ((iVar1 != 0) && (*(int **)(param_1 + 0x7b0) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00a97d20();
  RayCastManager::getWork(param_1 + 0x10d8);
  RayCastManager::getWork(param_1 + 0x10dc);
  RayCastManager::getWork(param_1 + 0x10e0);
  RayCastManager::getWork(param_1 + 0x10e4);
  RayCastManager::getWork(param_1 + 0x10ec);
  RayCastManager::getWork(param_1 + 0x10f0);
  RayCastManager::getWork(param_1 + 0x10f4);
  RayCastManager::getWork(param_1 + 0x10f8);
  RayCastManager::getWork(param_1 + 0x10fc);
  if (*(int *)(param_1 + 0x11f4) != 0) {
    RayCastManager::getWork(param_1 + 0x10e8);
    RayCastManager::getWork(param_1 + 0x1100);
  }
  RayCastManager::getWork(param_1 + 0x1104);
  RayCastManager::getWork(param_1 + 0x1108);
  FUN_00a92a00();
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(param_1);
  FUN_00900ca0();
  BehaviorEmBase::vf44();
  return;
}

// 004DB420  Em0120::vf54  size=34  [class]
void __fastcall Em0120::vf54(int param_1)

{
  BehaviorEmBase::vf54();
  if ((*(int *)(param_1 + 0x4a0) != 6) && (*(int *)(param_1 + 0x4a0) != 7)) {
    return;
  }
  FUN_00588340();
  return;
}

// 004DB4F0  FUN_004db4f0  size=20  [between]
void __fastcall FUN_004db4f0(int *param_1)

{
  if (3 < param_1[0x205]) {
                    /* WARNING: Could not recover jumptable at 0x004db501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 004DB510  FUN_004db510  size=884  [between]
void __fastcall FUN_004db510(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_4c;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  float local_38 [2];
  float local_30;
  undefined1 local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[0x187] == 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(0x10);
    }
    param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
    param_1[99] = 0x447a0000;
    iVar3 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_0163f484,param_1[0x2c9]);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00a5dcc0(iVar3);
    }
    FUN_00a9f4c0("BezierMove",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x86,0x3daaaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x39,0x3daaaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x3a,0x3daaaaab,0x80000);
    param_1[0x249] = 0;
    param_1[0x24d] = param_1[0x25];
    param_1[0x24e] = 0;
    param_1[0x24f] = 0;
    if (((param_1[0x2c0] & 0x100U) != 0) || (param_1[0x4d6] != 0)) {
      param_1[0x249] = param_1[900];
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x4d6] = 1;
  local_20 = param_1[0x14];
  local_1c = param_1[0x15];
  local_18 = param_1[0x16];
  local_14 = param_1[0x17];
  fVar4 = (float10)FUN_00a581b0(&local_44,(float)param_1[0x244] * 0.25,param_1[0x249]);
  param_1[0x249] = (int)(float)fVar4;
  param_1[900] = (int)(float)fVar4;
  param_1[0x14] = local_44;
  param_1[0x15] = local_40;
  param_1[0x16] = local_3c;
  FUN_00a585a0(local_38,0x3e800000,(float)fVar4);
  fVar4 = (float10)fpatan((float10)local_38[0],(float10)local_30);
  param_1[0x25] = (int)(float)fVar4;
  FUN_00a581b0(local_2c,0x40400000,param_1[0x249]);
  thunk_FUN_00dde510(local_48,&local_4c,local_2c,&local_20);
  local_4c = local_4c * 1.2732395;
  fVar2 = -0.7;
  if ((-0.7 <= local_4c) && (fVar2 = local_4c, 0.7 < local_4c)) {
    fVar2 = 0.7;
  }
  fVar2 = (fVar2 - (float)param_1[0x24e]) * 0.1 + (float)param_1[0x24e];
  param_1[0x24e] = (int)fVar2;
  if ((float)param_1[0x24f] <= fVar2) {
    if (fVar2 <= (float)param_1[0x24f]) goto LAB_004db7eb;
    fVar2 = (float)param_1[0x24f] + 0.005;
  }
  else {
    fVar2 = (float)param_1[0x24f] - 0.005;
  }
  param_1[0x24f] = (int)fVar2;
LAB_004db7eb:
  FUN_00a947e0(0,0,param_1[0x24f],0);
  iVar3 = FUN_00a54a60(param_1[0x249]);
  if (iVar3 != 0) {
    if ((param_1[0x2c0] & 0x500U) == 0) {
      if ((param_1[0x2c0] & 0x800U) != 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      if (param_1[0x1d9] != 0) {
        FUN_008e5c50(7);
      }
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0xd9] = param_1[0xd9] | 2;
      param_1[0x4d6] = 0;
      (*pcVar1)();
      return;
    }
    FUN_009fdde0();
  }
  return;
}

// 004DB890  FUN_004db890  size=210  [between]
undefined4 __thiscall FUN_004db890(int *param_1,float param_2,float param_3)

{
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  if ((float)param_1[0x11] <= param_2) {
    if (param_2 <= (float)param_1[0x11]) {
      return 1;
    }
    local_1c = param_2 - (float)param_1[0x11];
    if (local_1c < param_3) {
      local_20 = 0;
      local_18 = 0;
      (**(code **)(*param_1 + 0x70))(&local_20);
      return 1;
    }
    local_1c = (float)param_1[0x244] * param_3;
  }
  else {
    if ((float)param_1[0x11] - param_2 < param_3) {
      local_20 = 0;
      local_1c = -((float)param_1[0x11] - param_2);
      local_18 = 0;
      (**(code **)(*param_1 + 0x70))(&local_20);
      return 1;
    }
    local_1c = -param_3;
  }
  local_20 = 0;
  local_18 = 0;
  (**(code **)(*param_1 + 0x70))(&local_20);
  return 0;
}

// 004DB970  FUN_004db970  size=512  [between]
undefined4 __thiscall FUN_004db970(int *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 *puVar2;
  float fStack_58;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  switch(param_1[0x4d0]) {
  case 0:
    param_1[0x4d1] = 0;
    if (param_2 < (float)param_1[0x11]) {
      param_1[0x4d0] = 1;
    }
    if ((float)param_1[0x11] < param_2) {
      param_1[0x4d0] = 3;
    }
    break;
  case 1:
    fVar1 = (float)param_1[0x4d1];
    param_1[0x4d1] = (int)(fVar1 - param_4);
    if (fVar1 - param_4 < -param_3) {
      param_1[0x4d1] = (int)-param_3;
    }
    local_50 = 0;
    local_4c = (float)param_1[0x244] * (float)param_1[0x4d1];
    local_48 = 0;
    (**(code **)(*param_1 + 0x70))(&local_50);
    if (fStack_58 < param_2) {
      param_1[0x4d0] = param_1[0x4d0] + 1;
    }
    else if (fStack_58 - (float)param_1[0x4d2] < 3.0) {
      param_1[0x4d0] = param_1[0x4d0] + 1;
    }
    break;
  case 2:
    fVar1 = (float)param_1[0x4d1];
    param_1[0x4d1] = (int)(param_4 + fVar1);
    if (0.0 < param_4 + fVar1) {
      param_1[0x4d1] = 0;
    }
    local_40 = 0;
    puVar2 = &local_40;
    local_3c = (float)param_1[0x244] * (float)param_1[0x4d1];
    local_38 = 0;
    goto LAB_004dbb40;
  case 3:
    fVar1 = (float)param_1[0x4d1];
    param_1[0x4d1] = (int)(param_4 + fVar1);
    if (param_3 < param_4 + fVar1) {
      param_1[0x4d1] = (int)param_3;
    }
    local_30 = 0;
    local_2c = (float)param_1[0x244] * (float)param_1[0x4d1];
    local_28 = 0;
    (**(code **)(*param_1 + 0x70))(&local_30);
    if (param_2 < (float)param_1[0x11]) {
      param_1[0x4d0] = param_1[0x4d0] + 1;
    }
    break;
  case 4:
    fVar1 = (float)param_1[0x4d1];
    param_1[0x4d1] = (int)(fVar1 - param_4);
    if (fVar1 - param_4 < 0.0) {
      param_1[0x4d1] = 0;
    }
    local_20 = 0;
    puVar2 = &local_20;
    local_1c = (float)param_1[0x244] * (float)param_1[0x4d1];
    local_18 = 0;
LAB_004dbb40:
    (**(code **)(*param_1 + 0x70))(puVar2);
  }
  if ((float)param_1[0x4d1] != 0.0) {
    return 0;
  }
  return 1;
}

// 004DBB90  FUN_004dbb90  size=120  [between]
undefined4 __thiscall FUN_004dbb90(int *param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar1 = FUN_00907640(param_1 + 0x43b,0,local_20);
  if (iVar1 != 0) {
    uVar2 = FUN_004db890(local_1c + param_2,param_3);
    return uVar2;
  }
  local_30 = 0;
  local_2c = -((float)param_1[0x244] * param_3);
  local_28 = 0;
  (**(code **)(*param_1 + 0x70))(&local_30);
  return 0;
}

// 004DBC10  FUN_004dbc10  size=1092  [between]
undefined4 __thiscall FUN_004dbc10(int param_1,byte param_2,float param_3)

{
  float fVar1;
  int iVar2;
  undefined1 local_54 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_40 = *(float *)(param_1 + 0x40);
  local_3c = *(float *)(param_1 + 0x44);
  local_38 = *(float *)(param_1 + 0x48);
  iVar2 = FUN_00a12210(0xf);
  local_20 = *(float *)(iVar2 + 0x40);
  local_1c = *(float *)(iVar2 + 0x44);
  local_18 = *(float *)(iVar2 + 0x48);
  iVar2 = FUN_00a12210(0x13);
  local_30 = *(float *)(iVar2 + 0x40);
  local_2c = *(float *)(iVar2 + 0x44);
  local_28 = *(float *)(iVar2 + 0x48);
  if (((param_2 & 1) != 0) && (iVar2 = FUN_00907640(param_1 + 0x10ec,0,&local_50), iVar2 != 0)) {
    if (param_3 <= 0.0) {
      return 1;
    }
    fVar1 = SQRT((local_48 - local_38) * (local_48 - local_38) +
                 (local_4c - local_3c) * (local_4c - local_3c) +
                 (local_50 - local_40) * (local_50 - local_40));
    if (fVar1 < param_3 != (fVar1 == param_3)) {
      return 1;
    }
  }
  if ((param_2 & 2) != 0) {
    iVar2 = FUN_00907640(param_1 + 0x10d8,local_54,&local_50);
    if (iVar2 != 0) {
      if (param_3 <= 0.0) {
        return 1;
      }
      fVar1 = SQRT((local_48 - local_38) * (local_48 - local_38) +
                   (local_4c - local_3c) * (local_4c - local_3c) +
                   (local_50 - local_40) * (local_50 - local_40));
      if (fVar1 < param_3 != (fVar1 == param_3)) {
        return 1;
      }
    }
    iVar2 = FUN_00907640(param_1 + 0x10f0,0,&local_50);
    if (iVar2 != 0) {
      if (param_3 <= 0.0) {
        return 1;
      }
      fVar1 = SQRT((local_48 - local_38) * (local_48 - local_38) +
                   (local_4c - local_3c) * (local_4c - local_3c) +
                   (local_50 - local_40) * (local_50 - local_40));
      if (fVar1 < param_3 != (fVar1 == param_3)) {
        return 1;
      }
    }
  }
  if ((param_2 & 4) != 0) {
    iVar2 = FUN_00907640(param_1 + 0x10dc,0,&local_50);
    if (iVar2 != 0) {
      if (param_3 <= 0.0) {
        return 1;
      }
      fVar1 = SQRT((local_48 - local_38) * (local_48 - local_38) +
                   (local_4c - local_3c) * (local_4c - local_3c) +
                   (local_50 - local_40) * (local_50 - local_40));
      if (fVar1 < param_3 != (fVar1 == param_3)) {
        return 1;
      }
    }
    iVar2 = FUN_00907640(param_1 + 0x10f4,0,&local_50);
    if (iVar2 != 0) {
      if (param_3 <= 0.0) {
        return 1;
      }
      fVar1 = SQRT((local_48 - local_38) * (local_48 - local_38) +
                   (local_4c - local_3c) * (local_4c - local_3c) +
                   (local_50 - local_40) * (local_50 - local_40));
      if (fVar1 < param_3 != (fVar1 == param_3)) {
        return 1;
      }
    }
  }
  if ((param_2 & 8) != 0) {
    iVar2 = FUN_00907640(param_1 + 0x10e0,0,&local_50);
    if (iVar2 != 0) {
      if (param_3 <= 0.0) {
        return 1;
      }
      fVar1 = SQRT((local_48 - local_28) * (local_48 - local_28) +
                   (local_4c - local_2c) * (local_4c - local_2c) +
                   (local_50 - local_30) * (local_50 - local_30));
      if (fVar1 < param_3 != (fVar1 == param_3)) {
        return 1;
      }
    }
    iVar2 = FUN_00907640(param_1 + 0x10f8,0,&local_50);
    if (iVar2 != 0) {
      if (param_3 <= 0.0) {
        return 1;
      }
      fVar1 = SQRT((local_48 - local_28) * (local_48 - local_28) +
                   (local_4c - local_2c) * (local_4c - local_2c) +
                   (local_50 - local_30) * (local_50 - local_30));
      if (fVar1 < param_3 != (fVar1 == param_3)) {
        return 1;
      }
    }
  }
  if ((param_2 & 0x10) != 0) {
    iVar2 = FUN_00907640(param_1 + 0x10e4,0,&local_50);
    if (iVar2 != 0) {
      if (param_3 <= 0.0) {
        return 1;
      }
      fVar1 = SQRT((local_48 - local_18) * (local_48 - local_18) +
                   (local_4c - local_1c) * (local_4c - local_1c) +
                   (local_50 - local_20) * (local_50 - local_20));
      if (fVar1 < param_3 != (fVar1 == param_3)) {
        return 1;
      }
    }
    iVar2 = FUN_00907640(param_1 + 0x10fc,0,&local_50);
    if (iVar2 != 0) {
      if (param_3 <= 0.0) {
        return 1;
      }
      fVar1 = SQRT((local_48 - local_18) * (local_48 - local_18) +
                   (local_4c - local_1c) * (local_4c - local_1c) +
                   (local_50 - local_20) * (local_50 - local_20));
      if (fVar1 < param_3 != (fVar1 == param_3)) {
        return 1;
      }
    }
  }
  return 0;
}

// 004DC060  FUN_004dc060  size=1300  [between]
undefined4 __thiscall FUN_004dc060(int param_1,byte param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = *(float *)(param_1 + 0x40);
  local_1c = *(float *)(param_1 + 0x44);
  local_18 = *(float *)(param_1 + 0x48);
  local_3c = 0;
  local_40 = 0.0;
  if ((param_2 & 1) != 0) {
    iVar2 = FUN_00907640(param_1 + 0x10ec,0,&local_30);
    if (iVar2 == 0) {
      *param_3 = 0.0;
      return 1;
    }
    fVar1 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                 (local_2c - local_1c) * (local_2c - local_1c) +
                 (local_30 - local_20) * (local_30 - local_20));
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      local_3c = 1;
      local_40 = fVar1;
    }
  }
  if ((param_2 & 2) != 0) {
    local_38 = 10000.0;
    iVar2 = FUN_00907640(param_1 + 0x10d8,0,&local_30);
    if (iVar2 != 0) {
      local_38 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                      (local_2c - local_1c) * (local_2c - local_1c) +
                      (local_30 - local_20) * (local_30 - local_20));
    }
    iVar3 = FUN_00907640(param_1 + 0x10f0,0,&local_30);
    if (iVar3 == 0) {
      fVar1 = 10000.0;
    }
    else {
      fVar1 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                   (local_2c - local_1c) * (local_2c - local_1c) +
                   (local_30 - local_20) * (local_30 - local_20));
    }
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *param_3 = 0.0;
      return 2;
    }
    if (local_38 < fVar1 != (local_38 == fVar1)) {
      fVar1 = local_38;
    }
    if (local_40 < fVar1 != (local_40 == fVar1)) {
      local_3c = 2;
      local_40 = fVar1;
    }
  }
  if ((param_2 & 4) != 0) {
    local_38 = 10000.0;
    iVar2 = FUN_00907640(param_1 + 0x10dc,0,&local_30);
    if (iVar2 != 0) {
      local_38 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                      (local_2c - local_1c) * (local_2c - local_1c) +
                      (local_30 - local_20) * (local_30 - local_20));
    }
    iVar3 = FUN_00907640(param_1 + 0x10f4,0,&local_30);
    if (iVar3 == 0) {
      fVar1 = 10000.0;
    }
    else {
      fVar1 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                   (local_2c - local_1c) * (local_2c - local_1c) +
                   (local_30 - local_20) * (local_30 - local_20));
    }
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *param_3 = 0.0;
      return 4;
    }
    if (local_38 < fVar1 != (local_38 == fVar1)) {
      fVar1 = local_38;
    }
    if (local_40 < fVar1 != (local_40 == fVar1)) {
      local_3c = 4;
      local_40 = fVar1;
    }
  }
  if ((param_2 & 8) != 0) {
    local_38 = 10000.0;
    iVar2 = FUN_00907640(param_1 + 0x10e0,0,&local_30);
    if (iVar2 != 0) {
      local_38 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                      (local_2c - local_1c) * (local_2c - local_1c) +
                      (local_30 - local_20) * (local_30 - local_20));
    }
    iVar3 = FUN_00907640(param_1 + 0x10f8,0,&local_30);
    if (iVar3 == 0) {
      fVar1 = 10000.0;
    }
    else {
      fVar1 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                   (local_2c - local_1c) * (local_2c - local_1c) +
                   (local_30 - local_20) * (local_30 - local_20));
    }
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *param_3 = 0.0;
      return 8;
    }
    if (local_38 < fVar1 != (local_38 == fVar1)) {
      fVar1 = local_38;
    }
    if (local_40 < fVar1 != (local_40 == fVar1)) {
      local_3c = 8;
      local_40 = fVar1;
    }
  }
  fVar1 = local_40;
  if ((param_2 & 0x10) != 0) {
    local_38 = 10000.0;
    iVar2 = FUN_00907640(param_1 + 0x10e4,0,&local_30);
    if (iVar2 != 0) {
      local_38 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                      (local_2c - local_1c) * (local_2c - local_1c) +
                      (local_30 - local_20) * (local_30 - local_20));
    }
    iVar3 = FUN_00907640(param_1 + 0x10fc,0,&local_30);
    if (iVar3 == 0) {
      fVar1 = 10000.0;
    }
    else {
      fVar1 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                   (local_2c - local_1c) * (local_2c - local_1c) +
                   (local_30 - local_20) * (local_30 - local_20));
    }
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *param_3 = 0.0;
      return 0x10;
    }
    if (local_38 < fVar1 != (local_38 == fVar1)) {
      fVar1 = local_38;
    }
    if (local_40 < fVar1 == (local_40 == fVar1)) {
      *param_3 = SQRT(local_40);
      return local_3c;
    }
    local_3c = 0x10;
  }
  *param_3 = SQRT(fVar1);
  return local_3c;
}

// 004DC580  FUN_004dc580  size=159  [between]
void __thiscall FUN_004dc580(int *param_1,undefined4 param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  fVar3 = (float10)FUN_00a8eaa0(param_2);
  local_24 = (float)fVar3;
  if ((float10)param_3 < fVar3) {
    local_24 = param_3;
  }
  fVar1 = 1.0;
  if ((1.0 < param_4) || (fVar1 = 0.0, param_4 < 0.0)) {
    param_4 = fVar1;
  }
  iVar2 = (**(code **)(*param_1 + 0x84))();
  uStack_1c = *(undefined4 *)(iVar2 + 4);
  uStack_18 = *(undefined4 *)(iVar2 + 8);
  uStack_14 = *(undefined4 *)(iVar2 + 0xc);
  fStack_20 = local_24 * param_4;
  (**(code **)(*param_1 + 0x88))(&fStack_20);
  return;
}

// 004DC620  FUN_004dc620  size=202  [between]
void __thiscall FUN_004dc620(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00a84720();
  switchD_0080dbae::default();
  if (*(float *)(param_1 + 0x1440) < 45.0) {
    *(float *)(param_1 + 0x1440) = *(float *)(param_1 + 0x910) * 5.0 + *(float *)(param_1 + 0x1440);
  }
  if (45.0 < *(float *)(param_1 + 0x1440) != (*(float *)(param_1 + 0x1440) == 45.0)) {
    *(undefined4 *)(param_1 + 0x1440) = 0x42340000;
  }
  iVar1 = FUN_00a82a20();
  fVar2 = (float10)FUN_00ddba30(-*(float *)(param_1 + 0x1440) * 0.017453292 +
                                *(float *)(iVar1 + 0x90));
  iVar1 = FUN_00a82a20();
  *(float *)(iVar1 + 0x90) = (float)fVar2;
  FUN_00a84780(param_2,1,0,0,0,0x3f800000);
  switchD_0080dbae::default();
  return;
}

// 004DC770  FUN_004dc770  size=36  [between]
void __fastcall FUN_004dc770(int param_1)

{
  undefined1 local_20 [28];
  
  FUN_00907640(param_1 + 0x1104,0,local_20);
  return;
}

// 004DC7A0  FUN_004dc7a0  size=36  [between]
void __fastcall FUN_004dc7a0(int param_1)

{
  undefined1 local_20 [28];
  
  FUN_00907640(param_1 + 0x1108,0,local_20);
  return;
}

// 004DC7D0  FUN_004dc7d0  size=55  [between]
void __fastcall FUN_004dc7d0(int param_1)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined4 local_1c;
  
  iVar1 = FUN_00907640(param_1 + 0x10ec,0,local_20);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1348) = local_1c;
  }
  return;
}

// 004DC810  FUN_004dc810  size=269  [between]
void __fastcall FUN_004dc810(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if ((0.0 < *(float *)(param_1 + 0x1218)) || (*(float *)(param_1 + 0x1344) != 0.0)) {
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) {
LAB_004dc887:
    fVar2 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x116c),
                                  *(undefined4 *)(param_1 + 0x1170));
    fVar2 = fVar2 + (float10)*(float *)(param_1 + 0x1348);
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44);
    fVar2 = (float10)fVar1;
    if (fVar2 <= (float10)2.0 + (float10)*(float *)(param_1 + 0x44)) {
      if ((float10)*(float *)(param_1 + 0x44) - (float10)4.0 <= fVar2) {
        fVar2 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x116c),
                                      *(undefined4 *)(param_1 + 0x1170));
        fVar2 = fVar2 + (float10)fVar1;
        goto LAB_004dc8ad;
      }
      if (fVar2 < (float10)*(float *)(param_1 + 0x1348) !=
          (fVar2 == (float10)*(float *)(param_1 + 0x1348))) goto LAB_004dc887;
    }
    fVar2 = fVar2 + (float10)*(float *)(param_1 + 0x116c);
  }
LAB_004dc8ad:
  *(float *)(param_1 + 0x121c) = (float)fVar2;
  fVar2 = (float10)FUN_00dde300(*(float *)(param_1 + 0x1174) * 60.0,
                                *(float *)(param_1 + 0x1178) * 60.0);
  *(float *)(param_1 + 0x1218) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x1340) = 0;
  return;
}

// 004DCB90  FUN_004dcb90  size=201  [between]
void __fastcall FUN_004dcb90(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_004dcba4_caseD_1;
  case 2:
    FUN_00aa4080(0x32,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    return;
  }
  FUN_00aa4080(0x31,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(undefined4 *)(param_1 + 0xe1c) = 0;
switchD_004dcba4_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 004DD3E0  FUN_004dd3e0  size=223  [between]
void __fastcall FUN_004dd3e0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return;
    }
    goto LAB_004dd48e;
  }
  sVar1 = FUN_00dde2a0(0,1);
  (**(code **)(*param_1 + 0x220))(0x41200000);
  if (sVar1 == 0) {
    uVar3 = 99;
LAB_004dd480:
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  else if (sVar1 == 1) {
    uVar3 = 100;
    goto LAB_004dd480;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_004dd48e:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004dd4bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004DD4C0  FUN_004dd4c0  size=44  [between]
void __fastcall FUN_004dd4c0(int param_1)

{
  if (*(float *)(param_1 + 0xe14) <= 0.02) {
    *(float *)(param_1 + 0xe14) = *(float *)(param_1 + 0x910) * 0.0005 + *(float *)(param_1 + 0xe14)
    ;
  }
  return;
}

// 004DD580  FUN_004dd580  size=135  [between]
void __fastcall FUN_004dd580(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00a8d280();
    FUN_00aa4080(0x58,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
  param_1[0x485] = 0;
                    /* WARNING: Could not recover jumptable at 0x004dd605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 004DD630  FUN_004dd630  size=129  [between]
void __fastcall FUN_004dd630(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a8d280();
    FUN_00aa4080(0x9a,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004dd6af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004DD6C0  Em0120::vf1A4  size=55  [class]
void __thiscall Em0120::vf1A4(int param_1,int *param_2,byte param_3)

{
  if (((param_3 & 4) != 0) && (*param_2 == 0x13d)) {
    *(uint *)(param_1 + 0xde0) = *(uint *)(param_1 + 0xde0) | 0x20000000;
  }
  if (((param_3 & 1) != 0) && (*param_2 == 0x13d)) {
    *(uint *)(param_1 + 0xde0) = *(uint *)(param_1 + 0xde0) | 0x40000000;
  }
  return;
}

// 004DD770  FUN_004dd770  size=149  [between]
void __thiscall
FUN_004dd770(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
  if ((param_2 & 0xffff0000) != 0x40000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdcc) = uVar1;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
  }
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  *(int *)(param_1 + 0xdc0) = param_3;
  if (param_3 < 0) {
    FUN_00a962d0(1,0);
    *(undefined4 *)(param_1 + 0xddc) = 0x40;
    return;
  }
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xddc) = 0;
  return;
}

// 004DD910  FUN_004dd910  size=67  [between]
undefined4 __fastcall FUN_004dd910(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0xde0) & 0x10000000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    return local_8;
  }
  FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  return local_8;
}

// 004DD960  Em0120::vf208  size=36  [class]
void __thiscall Em0120::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 1.5;
  return;
}

// 004DD990  Em0120::vf6C  size=5  [class]
void __fastcall Em0120::vf6C(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7ce90();
    return;
  }
  return;
}

// 004DD9A0  Em0120::thunk_vf70  size=5  [class]
void __fastcall Em0120::thunk_vf70(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7cec0();
    return;
  }
  return;
}

// 004DD9D0  FUN_004dd9d0  size=242  [between]
bool FUN_004dd9d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0x10000005) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x10000014) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x10000015) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x10000016) {
          iVar1 = FUN_00a8cab0();
          if (iVar1 != 0x10000017) {
            iVar1 = FUN_00a8cab0();
            if (iVar1 != 0x10000018) {
              iVar1 = FUN_00a8cab0();
              if (iVar1 != 0x10000019) {
                iVar1 = FUN_00a8cab0();
                if (iVar1 != 0x1000001a) {
                  iVar1 = FUN_00a8cab0();
                  if (iVar1 != 0x1000001f) {
                    iVar1 = FUN_00a8cab0();
                    if (iVar1 != 0x10000020) {
                      iVar1 = FUN_00a8cab0();
                      if (iVar1 != 0x10000021) {
                        iVar1 = FUN_00a8cab0();
                        if (iVar1 != 0x10000022) {
                          iVar1 = FUN_00a8cab0();
                          if (iVar1 != 0x10000023) {
                            iVar1 = FUN_00a8cab0();
                            if (iVar1 != 0x10000024) {
                              iVar1 = FUN_00a8cab0();
                              return iVar1 != 0x1000002a;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 004DDC00  FUN_004ddc00  size=102  [between]
void __fastcall FUN_004ddc00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004DDC80  Em0120::thunk_vf1C0  size=5  [class]
void __thiscall Em0120::thunk_vf1C0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_retaddr;
  undefined4 uVar7;
  undefined *puVar8;
  
  piVar5 = param_2;
  uVar6 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    param_2 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  piVar5 = param_3;
  if (param_3 != (int *)0x0) {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar5;
  }
  uVar3 = FUN_009f8b40();
  FUN_009f8ae0(uVar3);
  if (uVar6 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c940(uVar3);
    FUN_00a7c960(&param_2);
    uVar3 = FUN_009f8b40();
    FUN_009f8ae0(uVar3);
  }
  uVar1 = param_1[300];
  if (uVar1 < 0x20141) {
    if (uVar1 != 0x20140) {
      switch(uVar1) {
      case 0x20010:
      case 0x20050:
        goto switchD_00ace80d_caseD_20010;
      case 0x20030:
      case 0x20033:
      case 0x20035:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x2003f,0x20030);
        break;
      case 0x20071:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20070);
        break;
      case 0x20081:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20080);
      }
      goto switchD_00ace80d_caseD_20011;
    }
switchD_00ace80d_caseD_20010:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x20012,0x20010);
    FUN_00a92f90();
    iVar2 = 0x2014f;
  }
  else {
    switch(uVar1) {
    case 0x20142:
    case 0x20144:
    case 0x20160:
      goto switchD_00ace80d_caseD_20010;
    default:
      goto switchD_00ace80d_caseD_20011;
    case 0x20150:
    case 0x20152:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      FUN_00a92f90();
      iVar2 = 0x2015f;
      break;
    case 0x20170:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      iVar2 = param_1[300];
      FUN_00a92f90();
    }
  }
  FUN_00e27330(iVar2,0x20010);
switchD_00ace80d_caseD_20011:
  iVar2 = 0;
  iVar4 = FUN_00ac89d0();
  if (iVar4 == 0) {
    iVar4 = param_1[0xcc];
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x330);
  }
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0xcc);
  }
  param_1[0x295] = iVar2;
  if ((unaff_retaddr != 0) && (piVar5 = (int *)FUN_00acdea0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01be9c78;
    (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
    iVar2 = FUN_00dd6d80(puVar8);
    if (iVar2 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      iVar2 = *param_1;
      param_1[0x139] = piVar5[0x139];
      uVar3 = (**(code **)(*piVar5 + 0x1d8))();
      (**(code **)(iVar2 + 0x1d4))(uVar3);
      if ((piVar5[0x351] & 0x80000000U) != 0) {
        uVar7 = 0;
        uVar3 = FUN_00a82d50(0);
        FUN_00a88b50(uVar3,uVar7);
      }
      FUN_0040ac60(piVar5 + 0x2ac);
      *(short *)(param_1 + 0x36b) = (short)piVar5[0x36b];
      param_1[0x36c] = piVar5[0x36c];
      *(char *)(param_1 + 0x36d) = (char)piVar5[0x36d];
      param_1[0x28c] = piVar5[0x28c];
      param_1[0x28d] = piVar5[0x28d];
      param_1[0x28e] = piVar5[0x28e];
      param_1[0x28f] = piVar5[0x28f];
      param_1[0x290] = piVar5[0x290];
      *(char *)(param_1 + 0x291) = (char)piVar5[0x291];
      param_1[0x292] = piVar5[0x292];
      param_1[0x12a] = piVar5[0x12a];
      param_1[0x296] = piVar5[0x296];
    }
  }
  (**(code **)(*param_1 + 0x334))(uVar6,unaff_retaddr);
  return;
}

// 004DDCD0  FUN_004ddcd0  size=42  [between]
uint FUN_004ddcd0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9d20;
  (**(code **)(*param_1 + 4))(&DAT_01be9d20);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 004DDD00  FUN_004ddd00  size=42  [between]
uint FUN_004ddd00(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34eb0;
  (**(code **)(*param_1 + 4))(&DAT_01b34eb0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 004DDD30  Em0120::vf150  size=364  [class]
void __thiscall Em0120::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    return;
  }
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  if (param_2 == 0x76) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdcc) = uVar1;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    uVar1 = 0x80008;
    goto LAB_004dde7a;
  }
  if (param_2 == 0x6a) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar2 = FUN_00a8cab0();
    uVar1 = 0x8000c;
LAB_004dde68:
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
  }
  else {
    if (param_2 != 0x6c) {
      if (param_2 == 0x6d) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
        uVar1 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdcc) = uVar1;
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        uVar1 = 0x8000b;
        goto LAB_004dde7a;
      }
      if (param_2 != 0x6b) {
        return;
      }
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
      uVar2 = FUN_00a8cab0();
      uVar1 = 0x8000d;
      goto LAB_004dde68;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    uVar1 = 0x8000a;
  }
  *(undefined4 *)(param_1 + 0xdcc) = uVar2;
LAB_004dde7a:
  FUN_00a8caf0(uVar1,0,0,0);
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xddc) = 0;
  return;
}

// 004DDEA0  FUN_004ddea0  size=205  [between]
void __fastcall FUN_004ddea0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar2 = &DAT_01be9c78;
  (**(code **)(*param_1 + 4))(&DAT_01be9c78);
  iVar1 = FUN_00dd6d80(puVar2);
  if ((iVar1 != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) {
    FUN_00a7c8a0();
  }
  iVar1 = FUN_00a10040(0x14);
  if ((iVar1 != 2) && (iVar1 = FUN_00a10040(0x14), iVar1 != 1)) {
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_0093c1f0((int)*(char *)((int)param_1 + 0xbab),param_1[0x13c],4,0,&uStack_20,&uStack_30,
                 0x41200000,0x3f000000,0xbf800000);
  }
  return;
}

// 004DDF70  FUN_004ddf70  size=1156  [between]
void __fastcall FUN_004ddf70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  char *pcVar5;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [64];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return;
  }
  iVar1 = FUN_00a8eea0();
  if (iVar1 < 1) {
    return;
  }
  if (*(int *)(param_1 + 0xa50) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x674) == 0) {
    if (*(float *)(param_1 + 0x10d0) < 30.0) {
      *(float *)(param_1 + 0x10d0) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x10d0);
      return;
    }
    local_90 = *(float *)(param_1 + 0x40);
    local_8c = *(float *)(param_1 + 0x44);
    local_88 = *(float *)(param_1 + 0x48);
    local_84 = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = FUN_00a12210(0xf);
    local_70 = *(undefined4 *)(iVar1 + 0x40);
    local_6c = *(undefined4 *)(iVar1 + 0x44);
    local_68 = *(undefined4 *)(iVar1 + 0x48);
    local_64 = *(undefined4 *)(iVar1 + 0x4c);
    iVar1 = FUN_00a12210(0x13);
    local_80 = *(undefined4 *)(iVar1 + 0x40);
    local_7c = *(float *)(iVar1 + 0x44);
    local_78 = *(undefined4 *)(iVar1 + 0x48);
    local_74 = *(undefined4 *)(iVar1 + 0x4c);
    uVar2 = FUN_009f8b40(0,0,0);
    uVar2 = FUN_00410130(7,uVar2);
    uVar3 = FUN_009f8b40(0,0,0);
    uVar3 = FUN_00410130(0x1e,uVar3);
    switch(*(undefined4 *)(param_1 + 0x10d4)) {
    case 0:
      local_a0 = 0.0;
      local_9c = -20.0;
      local_98 = 0.0;
      FUN_0090fa30(param_1 + 0x10ec,0,&local_90,0x3f800000,&local_a0,uVar3,"Slider Ground Down");
      *(int *)(param_1 + 0x10d4) = *(int *)(param_1 + 0x10d4) + 1;
      return;
    case 1:
      local_a0 = 0.0;
      local_9c = 0.0;
      local_98 = 20.0;
      FUN_00ddc1d0(local_60,param_1 + 0x90,5);
      D3DXVec3TransformNormal(&local_a0,&local_a0,local_60);
      FUN_0090f870(param_1 + 0x10d8,0,&local_9c,param_1 + 0x90,param_1 + 0x1320,&stack0xffffff54,
                   uVar2,"Slider CharCol Front");
      pcVar5 = "Slider Ground Front";
      pfVar4 = &local_9c;
      iVar1 = param_1 + 0x10f0;
      break;
    case 2:
      local_a0 = 0.0;
      local_9c = 0.0;
      local_98 = -20.0;
      FUN_00ddc1d0(local_60,param_1 + 0x90,5);
      D3DXVec3TransformNormal(&local_a0,&local_a0,local_60);
      FUN_0090f870(param_1 + 0x10dc,0,&local_9c,param_1 + 0x90,param_1 + 0x1320,&stack0xffffff54,
                   uVar2,"Slider CharCol Back");
      pcVar5 = "Slider Ground Back";
      pfVar4 = &local_9c;
      iVar1 = param_1 + 0x10f4;
      break;
    case 3:
      local_a0 = -22.0;
      local_9c = 0.0;
      local_98 = 0.0;
      FUN_00ddc1d0(local_60,param_1 + 0x90,5);
      D3DXVec3TransformNormal(&local_a0,&local_a0,local_60);
      FUN_0090f870(param_1 + 0x10e0,0,&local_8c,param_1 + 0x90,param_1 + 0x1320,&stack0xffffff54,
                   uVar2,"Slider CharCol Right");
      pcVar5 = "Slider Ground Right";
      pfVar4 = &local_8c;
      iVar1 = param_1 + 0x10f8;
      break;
    case 4:
      local_a0 = 22.0;
      local_9c = 0.0;
      local_98 = 0.0;
      FUN_00ddc1d0(local_60,param_1 + 0x90,5);
      D3DXVec3TransformNormal(&local_a0,&local_a0,local_60);
      FUN_0090f870(param_1 + 0x10e4,0,&local_7c,param_1 + 0x90,param_1 + 0x1320,&stack0xffffff54,
                   uVar2,"Slider CharCol Left");
      pcVar5 = "Slider Ground Left";
      pfVar4 = &local_7c;
      iVar1 = param_1 + 0x10fc;
      break;
    case 5:
      if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
        pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(local_20);
        fStack_a4 = *pfVar4 - fStack_94;
        local_a0 = pfVar4[1] - local_90;
        local_9c = pfVar4[2] - local_8c;
        local_98 = pfVar4[3] - local_88;
        FUN_0090f870(param_1 + 0x1104,0,&fStack_94,param_1 + 0x90,param_1 + 0x1300,&fStack_a4,uVar3,
                     "Slider CharCol ToPl");
        FUN_0090f870(param_1 + 0x1108,0,&fStack_94,param_1 + 0x90,param_1 + 0x1310,&fStack_a4,uVar3,
                     "Slider CharCol ToPl");
      }
      *(undefined4 *)(param_1 + 0x10d4) = 0;
      *(undefined4 *)(param_1 + 0x10d0) = 0;
    default:
      return;
    }
    FUN_0090f870(iVar1,0,pfVar4,param_1 + 0x90,param_1 + 0x1320,&stack0xffffff54,uVar3,pcVar5);
    *(int *)(param_1 + 0x10d4) = *(int *)(param_1 + 0x10d4) + 1;
    return;
  }
  return;
}

// 004DE670  FUN_004de670  size=1928  [between]
void __fastcall FUN_004de670(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  switch(param_1[0x443]) {
  case 2:
    pfVar2 = (float *)FUN_00a925a0(&local_30);
    goto LAB_004de73e;
  case 4:
    pfVar2 = (float *)FUN_00a925a0(&local_40);
    local_60 = *pfVar2 * -1.0;
    local_5c = pfVar2[1] * -1.0;
    local_58 = pfVar2[2] * -1.0;
    local_54 = pfVar2[3] * -1.0;
    break;
  case 8:
    pfVar2 = (float *)FUN_00a92640(&local_50);
    local_60 = *pfVar2 * -1.0;
    local_5c = pfVar2[1] * -1.0;
    local_58 = pfVar2[2] * -1.0;
    local_54 = pfVar2[3] * -1.0;
    break;
  case 0x10:
    pfVar2 = (float *)FUN_00a92640(local_20);
LAB_004de73e:
    local_60 = *pfVar2;
    local_5c = pfVar2[1];
    local_58 = pfVar2[2];
    local_54 = pfVar2[3];
  }
  switch(param_1[0x187]) {
  case 0:
    switch(param_1[0x443]) {
    case 2:
      FUN_00aa4080(0xcc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x249] = 0;
      param_1[0x187] = param_1[0x187] + 1;
      break;
    default:
      param_1[0x249] = 0;
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 4:
      FUN_00aa4080(0xcf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x249] = 0;
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 8:
      FUN_00aa4080(0xd2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x249] = 0;
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 0x10:
      FUN_00aa4080(0xd5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x249] = 0;
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 1:
    break;
  case 2:
    switch(param_1[0x443]) {
    case 2:
      FUN_00aa4080(0xcd,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    default:
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 4:
      FUN_00aa4080(0xd0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 8:
      FUN_00aa4080(0xd3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 0x10:
      FUN_00aa4080(0xd6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_004dea9b;
  case 3:
LAB_004dea9b:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 + 0.005);
    if (0.1 < fVar1 + 0.005) {
      param_1[0x249] = 0x3dcccccd;
    }
    fVar1 = (float)param_1[0x249];
    local_34 = (float)param_1[0x244];
    local_40 = local_60 * fVar1 * local_34;
    local_3c = local_5c * fVar1 * local_34;
    local_38 = local_58 * fVar1 * local_34;
    local_34 = local_34 * local_54 * fVar1;
    (**(code **)(*param_1 + 0x70))(&local_40);
    switch(param_1[0x443]) {
    case 2:
      uVar5 = 2;
      break;
    default:
      goto switchD_004deb3c_caseD_3;
    case 4:
      uVar5 = 4;
      break;
    case 8:
      uVar5 = 8;
      break;
    case 0x10:
      uVar5 = 0x10;
    }
    iVar3 = FUN_004dbc10(uVar5,0x40000000);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
switchD_004deb3c_caseD_3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_004de777_default;
  case 4:
    switch(param_1[0x443]) {
    case 2:
      FUN_00aa4080(0xce,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    default:
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 4:
      FUN_00aa4080(0xd1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 8:
      FUN_00aa4080(0xd4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 0x10:
      FUN_00aa4080(0xd7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_004decd0;
  case 5:
LAB_004decd0:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - 0.003);
    if (fVar1 - 0.003 < 0.0) {
      param_1[0x249] = 0;
    }
    fVar1 = (float)param_1[0x249];
    local_24 = (float)param_1[0x244];
    local_30 = local_60 * fVar1 * local_24;
    local_2c = local_5c * fVar1 * local_24;
    local_28 = local_58 * fVar1 * local_24;
    local_24 = local_24 * local_54 * fVar1;
    (**(code **)(*param_1 + 0x70))(&local_30);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x443] == 4) {
        param_1[0x4d3] = 1;
      }
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_004de777_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar1 + 0.005);
  if (0.1 < fVar1 + 0.005) {
    param_1[0x249] = 0x3dcccccd;
  }
  fVar1 = (float)param_1[0x249];
  local_44 = (float)param_1[0x244];
  local_50 = local_60 * fVar1 * local_44;
  local_4c = local_5c * fVar1 * local_44;
  local_48 = local_58 * fVar1 * local_44;
  local_44 = local_44 * local_54 * fVar1;
  (**(code **)(*param_1 + 0x70))(&local_50);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    fVar4 = (float10)FUN_00dde300((float)param_1[0x461] * 60.0,(float)param_1[0x462] * 60.0);
    param_1[0x248] = (int)(float)fVar4;
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_004de777_default:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  FUN_004db970(param_1[0x487],param_1[0x45f],param_1[0x460]);
  return;
}

// 004DEED0  FUN_004deed0  size=957  [between]
void __fastcall FUN_004deed0(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xcc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 + 0.005);
    if (0.1 < fVar1 + 0.005) {
      param_1[0x249] = 0x3dcccccd;
    }
    fVar1 = (float)param_1[0x249];
    pfVar2 = (float *)FUN_00a925a0(local_40);
    local_64 = (float)param_1[0x244];
    local_70 = *pfVar2 * fVar1 * local_64;
    local_6c = pfVar2[1] * fVar1 * local_64;
    local_68 = pfVar2[2] * fVar1 * local_64;
    local_64 = pfVar2[3] * fVar1 * local_64;
    (**(code **)(*param_1 + 0x70))(&local_70);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      fVar4 = (float10)FUN_00dde300((float)param_1[0x461] * 60.0,(float)param_1[0x462] * 60.0);
      param_1[0x248] = (int)(float)fVar4;
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0xcd,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 + 0.005);
    if (0.1 < fVar1 + 0.005) {
      param_1[0x249] = 0x3dcccccd;
    }
    fVar1 = (float)param_1[0x249];
    pfVar2 = (float *)FUN_00a925a0(local_30);
    local_54 = (float)param_1[0x244];
    local_60 = *pfVar2 * fVar1 * local_54;
    local_5c = pfVar2[1] * fVar1 * local_54;
    local_58 = pfVar2[2] * fVar1 * local_54;
    local_54 = pfVar2[3] * fVar1 * local_54;
    (**(code **)(*param_1 + 0x70))(&local_60);
    iVar3 = FUN_004dbc10(2,0x40000000);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0xce,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - 0.003);
    if (fVar1 - 0.003 < 0.0) {
      param_1[0x249] = 0;
    }
    fVar1 = (float)param_1[0x249];
    pfVar2 = (float *)FUN_00a925a0(local_20);
    local_44 = (float)param_1[0x244];
    local_50 = *pfVar2 * fVar1 * local_44;
    local_4c = pfVar2[1] * fVar1 * local_44;
    local_48 = pfVar2[2] * fVar1 * local_44;
    local_44 = pfVar2[3] * fVar1 * local_44;
    (**(code **)(*param_1 + 0x70))(&local_50);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  FUN_004db970(param_1[0x487],param_1[0x45f],param_1[0x460]);
  return;
}

// 004DF2B0  FUN_004df2b0  size=975  [between]
void __fastcall FUN_004df2b0(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xcf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 + 0.005);
    if (0.1 < fVar1 + 0.005) {
      param_1[0x249] = 0x3dcccccd;
    }
    pfVar2 = (float *)FUN_00a925a0(local_40);
    fVar1 = (float)param_1[0x249];
    local_64 = (float)param_1[0x244];
    local_70 = *pfVar2 * -1.0 * fVar1 * local_64;
    local_6c = pfVar2[1] * -1.0 * fVar1 * local_64;
    local_68 = pfVar2[2] * -1.0 * fVar1 * local_64;
    local_64 = fVar1 * pfVar2[3] * -1.0 * local_64;
    (**(code **)(*param_1 + 0x70))(&local_70);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      fVar4 = (float10)FUN_00dde300((float)param_1[0x461] * 60.0,(float)param_1[0x462] * 60.0);
      param_1[0x248] = (int)(float)fVar4;
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0xd0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 + 0.005);
    if (0.1 < fVar1 + 0.005) {
      param_1[0x249] = 0x3dcccccd;
    }
    pfVar2 = (float *)FUN_00a925a0(local_30);
    fVar1 = (float)param_1[0x249];
    local_54 = (float)param_1[0x244];
    local_60 = *pfVar2 * -1.0 * fVar1 * local_54;
    local_5c = pfVar2[1] * -1.0 * fVar1 * local_54;
    local_58 = pfVar2[2] * -1.0 * fVar1 * local_54;
    local_54 = fVar1 * pfVar2[3] * -1.0 * local_54;
    (**(code **)(*param_1 + 0x70))(&local_60);
    iVar3 = FUN_004dbc10(2,0x40000000);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0xd1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - 0.003);
    if (fVar1 - 0.003 < 0.0) {
      param_1[0x249] = 0;
    }
    pfVar2 = (float *)FUN_00a925a0(local_20);
    fVar1 = (float)param_1[0x249];
    local_44 = (float)param_1[0x244];
    local_50 = *pfVar2 * -1.0 * fVar1 * local_44;
    local_4c = pfVar2[1] * -1.0 * fVar1 * local_44;
    local_48 = pfVar2[2] * -1.0 * fVar1 * local_44;
    local_44 = fVar1 * pfVar2[3] * -1.0 * local_44;
    (**(code **)(*param_1 + 0x70))(&local_50);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  FUN_004db970(param_1[0x487],param_1[0x45f],param_1[0x460]);
  return;
}

// 004DF6A0  FUN_004df6a0  size=957  [between]
void __fastcall FUN_004df6a0(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xd5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 + 0.005);
    if (0.1 < fVar1 + 0.005) {
      param_1[0x249] = 0x3dcccccd;
    }
    fVar1 = (float)param_1[0x249];
    pfVar2 = (float *)FUN_00a92640(local_40);
    local_64 = (float)param_1[0x244];
    local_70 = *pfVar2 * fVar1 * local_64;
    local_6c = pfVar2[1] * fVar1 * local_64;
    local_68 = pfVar2[2] * fVar1 * local_64;
    local_64 = pfVar2[3] * fVar1 * local_64;
    (**(code **)(*param_1 + 0x70))(&local_70);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      fVar4 = (float10)FUN_00dde300((float)param_1[0x461] * 60.0,(float)param_1[0x462] * 60.0);
      param_1[0x248] = (int)(float)fVar4;
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0xd6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 + 0.005);
    if (0.1 < fVar1 + 0.005) {
      param_1[0x249] = 0x3dcccccd;
    }
    fVar1 = (float)param_1[0x249];
    pfVar2 = (float *)FUN_00a92640(local_30);
    local_54 = (float)param_1[0x244];
    local_60 = *pfVar2 * fVar1 * local_54;
    local_5c = pfVar2[1] * fVar1 * local_54;
    local_58 = pfVar2[2] * fVar1 * local_54;
    local_54 = pfVar2[3] * fVar1 * local_54;
    (**(code **)(*param_1 + 0x70))(&local_60);
    iVar3 = FUN_004dbc10(2,0x40000000);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0xd7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - 0.003);
    if (fVar1 - 0.003 < 0.0) {
      param_1[0x249] = 0;
    }
    fVar1 = (float)param_1[0x249];
    pfVar2 = (float *)FUN_00a92640(local_20);
    local_44 = (float)param_1[0x244];
    local_50 = *pfVar2 * fVar1 * local_44;
    local_4c = pfVar2[1] * fVar1 * local_44;
    local_48 = pfVar2[2] * fVar1 * local_44;
    local_44 = pfVar2[3] * fVar1 * local_44;
    (**(code **)(*param_1 + 0x70))(&local_50);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  FUN_004db970(param_1[0x487],param_1[0x45f],param_1[0x460]);
  return;
}

// 004DFA80  FUN_004dfa80  size=983  [between]
void __fastcall FUN_004dfa80(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xd2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x249] = 0;
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 + 0.005);
    if (0.1 < fVar1 + 0.005) {
      param_1[0x249] = 0x3dcccccd;
    }
    pfVar2 = (float *)FUN_00a92640(local_40);
    fVar1 = (float)param_1[0x249];
    local_64 = (float)param_1[0x244];
    local_70 = *pfVar2 * -1.0 * fVar1 * local_64;
    local_6c = pfVar2[1] * -1.0 * fVar1 * local_64;
    local_68 = pfVar2[2] * -1.0 * fVar1 * local_64;
    local_64 = fVar1 * pfVar2[3] * -1.0 * local_64;
    (**(code **)(*param_1 + 0x70))(&local_70);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      fVar4 = (float10)FUN_00dde300((float)param_1[0x461] * 60.0,(float)param_1[0x462] * 60.0);
      param_1[0x248] = (int)(float)fVar4;
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0xd3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 + 0.005);
    if (0.1 < fVar1 + 0.005) {
      param_1[0x249] = 0x3dcccccd;
    }
    pfVar2 = (float *)FUN_00a92640(local_30);
    fVar1 = (float)param_1[0x249];
    local_54 = (float)param_1[0x244];
    local_60 = *pfVar2 * -1.0 * fVar1 * local_54;
    local_5c = pfVar2[1] * -1.0 * fVar1 * local_54;
    local_58 = pfVar2[2] * -1.0 * fVar1 * local_54;
    local_54 = fVar1 * pfVar2[3] * -1.0 * local_54;
    (**(code **)(*param_1 + 0x70))(&local_60);
    iVar3 = FUN_004dbc10(2,0x40000000);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0xd4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - 0.003);
    if (fVar1 - 0.003 < 0.0) {
      param_1[0x249] = 0;
    }
    pfVar2 = (float *)FUN_00a92640(local_20);
    fVar1 = (float)param_1[0x249];
    local_44 = (float)param_1[0x244];
    local_50 = *pfVar2 * -1.0 * fVar1 * local_44;
    local_4c = pfVar2[1] * -1.0 * fVar1 * local_44;
    local_48 = pfVar2[2] * -1.0 * fVar1 * local_44;
    local_44 = fVar1 * pfVar2[3] * -1.0 * local_44;
    (**(code **)(*param_1 + 0x70))(&local_50);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  FUN_004db970(param_1[0x487],param_1[0x45f],param_1[0x460]);
  return;
}

// 004E07B0  FUN_004e07b0  size=952  [between]
void __fastcall FUN_004e07b0(int *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float local_9c [2];
  int *local_94;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  local_94 = (int *)0x4e07c3;
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    local_94 = param_1 + 0x10;
    local_9c[1] = 7.165994e-39;
    FUN_00a8d6c0();
    local_94 = (int *)0x32;
    local_9c[1] = 7.166006e-39;
    FUN_00aa3f60();
    local_94 = (int *)0x0;
    local_9c[1] = 7.166023e-39;
    FUN_008e6c60();
    local_94 = (int *)0x0;
    local_9c[1] = 7.16604e-39;
    FUN_008e0ae0();
    local_94 = (int *)0x0;
    local_9c[1] = 7.166057e-39;
    FUN_008e0af0();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_94 = &local_7c;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_9c[1] = 7.166102e-39;
    FUN_00a8d790();
    if (param_1[0x202] == 0) {
      local_94 = (int *)0x4e09c5;
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    local_94 = (int *)0x0;
    local_9c[1] = 7.16613e-39;
    cVar2 = FUN_00c9db20();
    local_94 = (int *)0x0;
    local_9c[1] = 2.0;
    local_9c[0] = 7.166159e-39;
    iVar4 = FUN_00a97e60();
    if ((iVar4 != 0) && (cVar2 != '\0')) {
      local_94 = (int *)0x3f800000;
      local_9c[1] = -1.0;
      local_9c[0] = 3.85186e-34;
      FUN_00aa4080(0x33,0,0x3e4ccccd,0x3f800000);
      local_94 = (int *)0x3f800000;
      local_9c[1] = 1.0;
      local_9c[0] = 7.166266e-39;
      FUN_00ac80a0();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    local_94 = (int *)0x3f800000;
    local_9c[1] = 1.0;
    local_9c[0] = 7.16631e-39;
    FUN_00ac80a0();
    local_60 = local_7c;
    local_94 = &local_60;
    local_5c = local_78;
    local_58 = local_74;
    local_54 = 0x3f800000;
    local_9c[1] = 7.166369e-39;
    FUN_00a8e880();
    local_94 = (int *)0x0;
    local_9c[1] = 0.08726646;
    local_9c[0] = 0.00017453292;
    fVar8 = 0.2;
    (**(code **)(*param_1 + 0x308))();
    fVar5 = (float10)FUN_00a8eaa0(auStack_70);
    param_1[0x24] = (int)(float)fVar5;
    puVar6 = &local_60;
    local_7c = 0;
    local_78 = 0x3e99999a;
    fVar7 = (float)fVar5;
    D3DXMatrixRotationX();
    D3DXVec3TransformNormal(&stack0xffffff78,&stack0xffffff78,auStack_68);
    D3DXMatrixRotationY(&local_74,param_1[0x25]);
    D3DXVec3TransformNormal(local_9c,local_9c,&local_7c);
    param_1[0x14] = (int)((float)param_1[0x14] + (float)puVar6);
    param_1[0x15] = (int)((float)param_1[0x15] + fVar7);
    param_1[0x16] = (int)((float)param_1[0x16] + fVar8);
    param_1[0x17] = (int)((float)param_1[0x17] + local_9c[0]);
    return;
  case 2:
    local_94 = (int *)0x3f800000;
    local_9c[1] = 1.0;
    local_9c[0] = 7.16671e-39;
    FUN_00ac80a0();
    local_94 = (int *)0x0;
    local_9c[1] = 7.166724e-39;
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      local_94 = (int *)0x1;
      local_9c[1] = 7.166759e-39;
      FUN_008e6c60();
      local_94 = (int *)0x1;
      local_9c[1] = 7.166776e-39;
      FUN_008e0ae0();
      local_94 = (int *)0x1;
      local_9c[1] = 7.166792e-39;
      FUN_008e0af0();
      if ((param_1[0x12a] & 0x40U) != 0) {
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = param_1[0x4d7];
        local_94 = (int *)0x4e0a3e;
        iVar4 = FUN_00a8cab0();
        local_94 = (int *)0x0;
        local_9c[1] = 0.0;
        param_1[0x373] = iVar4;
        local_9c[0] = 0.0;
        param_1[0x374] = param_1[0x370];
        FUN_00a8caf0(0x80000);
        local_94 = (int *)0x0;
        local_9c[1] = 0.0;
        param_1[0x370] = 0;
        local_9c[0] = 7.16691e-39;
        FUN_00a962d0();
        param_1[0x377] = 0;
        return;
      }
      if ((param_1[0x12a] & 0x20U) == 0) {
        local_94 = (int *)0x3f800000;
        local_9c[1] = -1.0;
        local_9c[0] = 3.85186e-34;
        FUN_00aa4080(0x4b,0,0x3e4ccccd,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x128] = 0;
      local_94 = (int *)0x4e0acb;
      (*pcVar1)();
      if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
        param_1[0xd9] = param_1[0xd9] | 0x400000;
        *(undefined4 *)param_1[0xdc] = 0;
      }
      if (param_1[0xdc] != 0) {
        *(undefined4 *)(param_1[0xdc] + 4) = 0;
        *(undefined4 *)(param_1[0xdc] + 8) = 1;
        return;
      }
    }
    break;
  case 3:
    local_94 = (int *)0x3f800000;
    local_9c[1] = 1.0;
    local_9c[0] = 7.167139e-39;
    FUN_00ac80a0();
    local_94 = (int *)0x0;
    local_9c[1] = 7.167153e-39;
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x128] = 0;
      local_94 = (int *)0x4e0b31;
      (*pcVar1)();
      if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
        param_1[0xd9] = param_1[0xd9] | 0x400000;
        *(undefined4 *)param_1[0xdc] = 0;
      }
      if (param_1[0xdc] != 0) {
        *(undefined4 *)(param_1[0xdc] + 4) = 0;
        *(undefined4 *)(param_1[0xdc] + 8) = 1;
      }
    }
  }
  return;
}

// 004E0B80  FUN_004e0b80  size=394  [between]
void __fastcall FUN_004e0b80(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [124];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xf0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00ac90b0();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] == 2) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a95540(0,0x50);
    if (iVar1 != 0) {
      piVar2 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar2);
      iVar1 = FUN_00c5def0(param_1[0x13c]);
      param_1[0x25c] = iVar1;
      FUN_00405230();
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      FUN_00c151f0(1,param_1[0x13c],0,&local_90,0,0x41000000,0x3f800000,0,0);
      FUN_00c57830(local_80);
      param_1[0x1b1] = 0;
      param_1[0x1b4] = 0;
      param_1[0x1b5] = 0;
      param_1[0x1b6] = 0;
      param_1[0x1b7] = local_84;
      param_1[0x1bb] = 1;
      param_1[0x1ba] = 0x3fc00000;
      param_1[0x1b9] = -1;
      param_1[0x1b8] = 0;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004E0D10  FUN_004e0d10  size=280  [between]
undefined4 __thiscall FUN_004e0d10(int param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  if ((param_3 != 0) && (iVar7 = FUN_00907640(param_1 + 0x10d8,0,&local_20), iVar7 != 0)) {
    if (param_2 < 0.0) {
      return 1;
    }
    fVar4 = local_20 - fVar1;
    fVar5 = local_1c - fVar2;
    fVar6 = local_18 - fVar3;
    fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
    if (fVar4 < param_2 * param_2 != (fVar4 == param_2 * param_2)) {
      return 1;
    }
  }
  if ((param_4 != 0) && (iVar7 = FUN_00907640(param_1 + 0x10f0,0,&local_20), iVar7 != 0)) {
    if (param_2 < 0.0) {
      return 1;
    }
    local_20 = local_20 - fVar1;
    local_1c = local_1c - fVar2;
    local_18 = local_18 - fVar3;
    fVar1 = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
    if (fVar1 < param_2 * param_2 != (fVar1 == param_2 * param_2)) {
      return 1;
    }
  }
  return 0;
}

// 004E0E30  FUN_004e0e30  size=698  [between]
void __fastcall FUN_004e0e30(float param_1)

{
  int iVar1;
  undefined4 uVar2;
  float local_4;
  
  local_4 = param_1;
  if ((*(float *)((int)param_1 + 0xa9c) < -0.7853982) ||
     (0.7853982 < *(float *)((int)param_1 + 0xa9c))) {
LAB_004e0f42:
    if ((-2.3561945 < *(float *)((int)param_1 + 0xa9c)) &&
       (*(float *)((int)param_1 + 0xa9c) < -0.7853982)) {
      iVar1 = FUN_004dbc10(0x16,0);
      if (iVar1 != 0) {
        local_4 = 0.0;
        uVar2 = FUN_004dc060(0x16,&local_4);
        *(undefined4 *)((int)param_1 + 0x110c) = uVar2;
        if ((3.0 < local_4) || (local_4 == 0.0)) goto LAB_004e0ebc;
        goto LAB_004e0fc3;
      }
      *(undefined4 *)((int)param_1 + 0x110c) = 0x10;
LAB_004e0f1c:
      *(uint *)((int)param_1 + 0x364) = *(uint *)((int)param_1 + 0x364) | 2;
      *(undefined4 *)((int)param_1 + 0x18c) = *(undefined4 *)((int)param_1 + 0x135c);
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)((int)param_1 + 0xdd0) = *(undefined4 *)((int)param_1 + 0xdc0);
      goto LAB_004e0ee2;
    }
LAB_004e0fc3:
    if ((0.7853982 < *(float *)((int)param_1 + 0xa9c)) &&
       (*(float *)((int)param_1 + 0xa9c) < 2.3561945)) {
      iVar1 = FUN_004dbc10(0xe,0);
      if (iVar1 == 0) {
        *(undefined4 *)((int)param_1 + 0x110c) = 8;
        goto LAB_004e0f1c;
      }
      local_4 = 0.0;
      uVar2 = FUN_004dc060(0xe,&local_4);
      *(undefined4 *)((int)param_1 + 0x110c) = uVar2;
      if ((3.0 < local_4) || (local_4 == 0.0)) goto LAB_004e0ebc;
    }
    if ((*(float *)((int)param_1 + 0xa9c) < 2.3561945) ||
       (-2.3561945 < *(float *)((int)param_1 + 0xa9c))) {
      return;
    }
    iVar1 = FUN_004dbc10(0x1c,0);
    if (iVar1 == 0) goto LAB_004e0f12;
    local_4 = 0.0;
    uVar2 = FUN_004dc060(0x1c,&local_4);
    *(undefined4 *)((int)param_1 + 0x110c) = uVar2;
    if ((local_4 <= 3.0) && (local_4 != 0.0)) {
      return;
    }
  }
  else {
    iVar1 = FUN_004dbc10(0x1c,0);
    if (iVar1 == 0) {
LAB_004e0f12:
      *(undefined4 *)((int)param_1 + 0x110c) = 4;
      goto LAB_004e0f1c;
    }
    local_4 = 0.0;
    uVar2 = FUN_004dc060(0x1c,&local_4);
    *(undefined4 *)((int)param_1 + 0x110c) = uVar2;
    if ((local_4 <= 3.0) && (local_4 != 0.0)) goto LAB_004e0f42;
  }
LAB_004e0ebc:
  *(uint *)((int)param_1 + 0x364) = *(uint *)((int)param_1 + 0x364) | 2;
  *(undefined4 *)((int)param_1 + 0x18c) = *(undefined4 *)((int)param_1 + 0x135c);
  uVar2 = FUN_00a8cab0();
  *(undefined4 *)((int)param_1 + 0xdd0) = *(undefined4 *)((int)param_1 + 0xdc0);
LAB_004e0ee2:
  *(undefined4 *)((int)param_1 + 0xdcc) = uVar2;
  FUN_00a8caf0(0x10003,0,0,0);
  *(undefined4 *)((int)param_1 + 0xdc0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)((int)param_1 + 0xddc) = 0;
  return;
}

// 004E10F0  FUN_004e10f0  size=375  [between]
void __fastcall FUN_004e10f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_24 [4];
  undefined1 local_20 [28];
  
  if ((*(int **)(param_1 + 0xa84) != (int *)0x0) && (*(int *)(param_1 + 0x4a0) != 1)) {
    (**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(local_20);
    iVar1 = FUN_00a8cab0();
    if (((iVar1 == 0x20000) && (iVar1 = FUN_00a8cac0(), 1 < iVar1)) ||
       (*(int *)(param_1 + 0x1214) != 0)) {
      FUN_004dc620(auStack_24);
      return;
    }
    FUN_00a84720();
    if (0.0 < *(float *)(param_1 + 0x1440)) {
      *(float *)(param_1 + 0x1440) =
           *(float *)(param_1 + 0x1440) - *(float *)(param_1 + 0x910) * 5.0;
    }
    if (*(float *)(param_1 + 0x1440) < 0.0) {
      *(undefined4 *)(param_1 + 0x1440) = 0;
    }
    iVar1 = FUN_00a82a20();
    fVar2 = (float10)FUN_00ddba30(-*(float *)(param_1 + 0x1440) * 0.017453292 +
                                  *(float *)(iVar1 + 0x90));
    iVar1 = FUN_00a82a20();
    *(float *)(iVar1 + 0x90) = (float)fVar2;
    FUN_00a84780(auStack_24,0,0,0,0,0x3f800000);
    switchD_0080dbae::default();
    iVar1 = FUN_00a8cab0();
    if ((iVar1 != 0x20001) && (iVar1 = FUN_00a8cac0(), iVar1 == 3)) {
      FUN_00a84720();
      switchD_0080dbae::default();
      FUN_00a84780(auStack_24,0,0,0,0,0x3f800000);
      switchD_0080dbae::default();
    }
  }
  return;
}

// 004E1270  FUN_004e1270  size=133  [between]
undefined4 __fastcall FUN_004e1270(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((*(int *)(param_1 + 0x4a0) != 3) || (DAT_018b9174 != 0x430)) {
    return 0;
  }
  pcVar4 = "P430_SLIDER_RUN_INIT";
  pbVar2 = &DAT_018b917c;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_004e12b0:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_004e12b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_004e12b0;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004e12b5:
  if (iVar3 != 0) {
    pcVar4 = "P430_SLIDER_RUN";
    pbVar2 = &DAT_018b917c;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_004e12e3:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_004e12e8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_004e12e3;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_004e12e8:
    if (iVar3 != 0) {
      return 0;
    }
  }
  return 1;
}

// 004E1300  FUN_004e1300  size=91  [between]
void FUN_004e1300(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01be9d20;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d20);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && (iVar1 = FUN_00b2ec00(), iVar1 == 0)) {
        FUN_00b2ed20();
      }
    }
  }
  FUN_00a7c950();
  return;
}

// 004E1460  FUN_004e1460  size=97  [between]
uint FUN_004e1460(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01be9d20;
      (**(code **)(*piVar2 + 4))(&DAT_01be9d20);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 004E14D0  FUN_004e14d0  size=214  [between]
void __thiscall
FUN_004e14d0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
  if ((*(int *)(param_1 + 0x618) == 0x1000002b) && (*(int *)(param_1 + 0x764) != 0)) {
    FUN_008e5c50(7);
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
  if ((param_2 & 0xffff0000) != 0x40000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdcc) = uVar1;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
  }
  FUN_00a8caf0(param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xddc) = 0;
  iVar2 = FUN_004e1460();
  if (iVar2 != 0) {
    FUN_00b39f00(param_2,param_3,param_4,param_5);
  }
  *(undefined4 *)(param_1 + 0xe14) = 0;
  return;
}

// 004E15B0  Em0120::getAttackInfo  size=455  [class]
undefined4 __thiscall Em0120::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 != 0) && (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 != 0)) {
    puVar1 = *(uint **)(iVar2 + 8);
    puVar1[5] = *(uint *)(param_1 + 0x4f0);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    uVar4 = FUN_00ac8520(*param_2);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
    puVar1[2] = uVar5;
    puVar1[1] = uVar4;
    puVar1[3] = unaff_ESI;
    *(undefined1 *)(puVar1 + 4) = uStack_8;
    *puVar1 = (uint)*param_2;
    switch(*param_2) {
    case 4:
      *puVar1 = 0x13d;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      *(undefined2 *)(puVar1 + 0x21) = 0x1550;
      return unaff_EBX;
    case 5:
      *puVar1 = 0x13e;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      *(undefined2 *)(puVar1 + 0x21) = 0x1550;
      return unaff_EBX;
    case 6:
      *puVar1 = 0x13f;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x1550;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      return unaff_EBX;
    case 7:
      *puVar1 = 0x140;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      *(undefined2 *)(puVar1 + 0x21) = 0x1551;
      return unaff_EBX;
    case 10:
      *puVar1 = 0x143;
      *(undefined1 *)((int)puVar1 + 0x11) = 10;
    }
    return unaff_EBX;
  }
  FUN_00dd5650(&DAT_0163f5e0);
  return 0;
}

// 004E17A0  FUN_004e17a0  size=942  [between]
void __fastcall FUN_004e17a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  int iVar4;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [4];
  float fStack_2c;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a8d280();
    FUN_00aa4080(0xaa,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x85,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x445] = 0;
    param_1[0x248] = 0;
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a925a0(&local_60);
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x2a1] + 0x204))(local_30);
      FUN_00a8e880(&local_34);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
      fStack_5c = (fStack_2c - (float)param_1[0x11]) * 0.5;
    }
    fVar1 = (float)param_1[0x445] + 0.01;
    param_1[0x445] = (int)fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x445] = 0x40000000;
    }
    fVar1 = (float)param_1[0x445];
    fStack_44 = (float)param_1[0x244];
    fStack_50 = local_60 * fVar1 * fStack_44;
    fStack_4c = fVar1 * fStack_5c * fStack_44;
    fStack_48 = fStack_58 * fVar1 * fStack_44;
    fStack_44 = fStack_44 * fStack_54 * fVar1;
    (**(code **)(*param_1 + 0x70))(&fStack_50);
    if ((1.5707964 < (float)param_1[0x2a8]) || ((param_1[0x378] & 0x40000000U) != 0)) {
      param_1[0x378] = param_1[0x378] & 0xbfffffff;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    if ((param_1[0x378] & 0x20000000U) != 0) {
      param_1[0x378] = param_1[0x378] & 0xdfffffff;
      FUN_00a8cb60(6);
      return;
    }
    iVar4 = FUN_004e0d10(0x3f800000,0,1);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xab,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x445];
    param_1[0x445] = (int)(fVar1 - 0.1);
    if (fVar1 - 0.1 < 0.0) {
      param_1[0x445] = 0;
    }
    fVar1 = (float)param_1[0x445];
    pfVar3 = (float *)FUN_00a925a0(local_20);
    local_34 = (float)param_1[0x244];
    local_40 = *pfVar3 * fVar1 * local_34;
    local_3c = pfVar3[1] * fVar1 * local_34;
    local_38 = pfVar3[2] * fVar1 * local_34;
    local_34 = pfVar3[3] * fVar1 * local_34;
    (**(code **)(*param_1 + 0x70))(&local_40);
    goto LAB_004e1ad1;
  case 6:
    FUN_00aa4080(0xac,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_004e1ad1:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x38d] = 0x42700000;
      (*pcVar2)();
      return;
    }
  }
  return;
}

// 004E1B70  FUN_004e1b70  size=245  [between]
int __thiscall FUN_004e1b70(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = false;
  if ((((*(uint *)(param_2 + 0x8c) & 0x200) != 0) || ((*(uint *)(param_2 + 0x90) & 0x60000) != 0))
     || ((*(uint *)(param_2 + 0x8c) & 0x400) != 0)) {
    bVar1 = true;
  }
  iVar2 = FUN_00ac82f0();
  if ((iVar2 != 0) || (bVar1)) {
    iVar2 = FUN_00ac8350();
    if ((((iVar2 != 0) || (bVar1)) && (*(int *)(param_2 + 0x94) != 0)) &&
       ((*(int *)(param_2 + 0xec) != 0 || (bVar1)))) {
      iVar2 = FUN_00ac8cd0(param_2);
      if (iVar2 != 0) {
        uVar3 = 0;
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          FUN_00a81330();
          uVar3 = FUN_00a7c8a0();
        }
        FUN_00a8e5d0(param_1,param_2,0);
        (**(code **)(*param_1 + 0x1ec))();
        (**(code **)(*param_1 + 0x198))(uVar3,param_2,0x100);
        (**(code **)(*param_1 + 0x344))(8,param_1[0x372],param_1[0x371]);
        return param_2;
      }
    }
  }
  return 0;
}

// 004E1C70  FUN_004e1c70  size=567  [between]
void __fastcall FUN_004e1c70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    fVar3 = (float10)FUN_00dde300(0x3f800000,0x40000000);
    *(float *)(param_1 + 0x11fc) = (float)(fVar3 * (float10)15.0);
    if (*(int *)(param_1 + 0xde8) == 0) {
      if (*(int *)(param_1 + 0xdec) == 0) {
        FUN_00aa4080(0xb1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        *(uint *)(param_1 + 0xdec) = (uint)(*(int *)(param_1 + 0xdec) == 0);
      }
      else {
        FUN_00aa4080(0xaf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        *(uint *)(param_1 + 0xdec) = (uint)(*(int *)(param_1 + 0xdec) == 0);
      }
    }
    else if (*(int *)(param_1 + 0xdec) == 0) {
      *(undefined4 *)(param_1 + 0xdec) = 1;
      FUN_00aa4080(0xb2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    else {
      FUN_00aa4080(0xb0,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(uint *)(param_1 + 0xdec) = (uint)(*(int *)(param_1 + 0xdec) == 0);
    }
    if ((*(int *)(param_1 + 0x1200) == 0) && (iVar1 = *(int *)(param_1 + 0x764), iVar1 != 0)) {
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
      }
      local_20 = 0;
      local_1c = 0xbfc00000;
      local_18 = 0;
      FUN_008e0d30(&local_20);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x135c);
  if (*(int *)(param_1 + 0x1358) == 0) {
    if ((*(uint *)(param_1 + 0xde0) & 0x10000000) != 0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = uVar2;
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdcc) = uVar2;
      *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
      uVar4 = 0x30002;
      goto LAB_004e1e84;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = uVar2;
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    uVar4 = 0x10000;
  }
  else {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = uVar2;
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    uVar4 = 0x1000b;
  }
  *(undefined4 *)(param_1 + 0xdcc) = uVar2;
LAB_004e1e84:
  FUN_00a8caf0(uVar4,0,0,0);
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xddc) = 0;
  return;
}

// 004E1EB0  FUN_004e1eb0  size=507  [between]
void __fastcall FUN_004e1eb0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined2 *)(param_1 + 0x824) = 4;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x3b,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x95,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1168) * 60.0;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 <= 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x3d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
      if (*(int *)(param_1 + 0x1358) == 0) {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        uVar4 = 0x10000;
      }
      else {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        uVar4 = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xdcc) = uVar3;
      FUN_00a8caf0(uVar4,0,0,0);
      *(undefined4 *)(param_1 + 0xdc0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xddc) = 0;
      return;
    }
  }
  return;
}

// 004E20D0  FUN_004e20d0  size=360  [between]
void __fastcall FUN_004e20d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    if ((*(uint *)(param_1 + 0xde0) & 0x10000000) == 0) {
      FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    }
    else {
      FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
    }
    if (local_8 != 0) {
      *(undefined2 *)(param_1 + 0x824) = 1;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
    }
    FUN_00aa4120(0x92,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(uint *)(param_1 + 0xde0) = *(uint *)(param_1 + 0xde0) | 0x10000000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((*(uint *)(param_1 + 0xde0) & 0x10000000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  }
  if (local_8 == 0) {
    *(uint *)(param_1 + 0xde0) = *(uint *)(param_1 + 0xde0) & 0xefffffff;
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    if (*(int *)(param_1 + 0x1358) == 0) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
      uVar2 = 0x10000;
    }
    else {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
      uVar2 = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xdcc) = uVar1;
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xdc0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xddc) = 0;
  }
  return;
}

// 004E23B0  FUN_004e23b0  size=809  [between]
void __fastcall FUN_004e23b0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xb8,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e800000;
    param_1[0x288] = 1;
    param_1[0x289] = 0x41f00000;
    goto LAB_004e2439;
  case 1:
LAB_004e2439:
    iVar1 = FUN_00a8c760(0xc);
    if (iVar1 == 0) {
      pcVar2 = *(code **)(*param_1 + 0x314);
    }
    else {
      pcVar2 = *(code **)(*param_1 + 0x318);
    }
    (*pcVar2)();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xb9,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    FUN_008e0d30(&uStack_30);
    param_1[0x249] = (int)((float)param_1[0x475] * 60.0);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if ((iVar1 != 0) || ((float)param_1[0x249] <= 0.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xba,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if (*(int *)(iVar1 + 0x104) != 1) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      local_20 = 0;
      local_1c = 0xbfc00000;
      local_18 = 0;
      FUN_008e0d30(&local_20);
      iVar1 = param_1[0x4d7];
      if (param_1[0x4d6] == 0) {
        if ((param_1[0x378] & 0x10000000U) == 0) {
          param_1[0xd9] = param_1[0xd9] | 2;
          param_1[99] = iVar1;
          iVar1 = FUN_00a8cab0();
          param_1[0x374] = param_1[0x370];
          uVar3 = 0x10000;
        }
        else {
          param_1[0xd9] = param_1[0xd9] | 2;
          param_1[99] = iVar1;
          iVar1 = FUN_00a8cab0();
          param_1[0x374] = param_1[0x370];
          uVar3 = 0x30002;
        }
        param_1[0x373] = iVar1;
      }
      else {
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = iVar1;
        iVar1 = FUN_00a8cab0();
        param_1[0x373] = iVar1;
        param_1[0x374] = param_1[0x370];
        uVar3 = 0x1000b;
      }
      FUN_00a8caf0(uVar3,0,0,0);
      param_1[0x370] = 0;
      FUN_00a962d0(0,0);
      param_1[0x377] = 0;
      return;
    }
  }
  return;
}

// 004E2700  FUN_004e2700  size=73  [between]
void __thiscall FUN_004e2700(int param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 0x800) == 0) {
    *(undefined4 *)(param_1 + 0xdc4) = 0;
  }
  if ((*(uint *)(param_2 + 0x8c) & 0x100000) != 0) {
    *(undefined4 *)(param_1 + 0xdc8) = 2;
  }
  if ((*(uint *)(param_2 + 0x90) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xdc8) = 4;
  }
  return;
}

// 004E2750  Em0120::vf34C  size=144  [class]
void __fastcall Em0120::vf34C(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4a0) != 1) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdcc) = uVar1;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xdc0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xddc) = 0;
    return;
  }
  if (*(int *)(param_1 + 0xe1c) != 0) {
    FUN_004e14d0(0x10000002,0,0,0);
    return;
  }
  FUN_004e14d0(0x10000000,0,0,0);
  return;
}

// 004E27E0  FUN_004e27e0  size=206  [between]
void __fastcall FUN_004e27e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x4a0) != 1) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdcc) = uVar3;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xdc0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xddc) = 0;
    return;
  }
  uVar1 = *(uint *)(param_1 + 0xb00);
  if ((uVar1 & 1) != 0) {
LAB_004e283f:
    FUN_004e14d0(0x10000026,0,0,0);
    return;
  }
  if ((uVar1 & 2) == 0) {
    if (((uVar1 & 4) != 0) || ((uVar1 & 0x100) != 0)) goto LAB_004e283f;
    if ((uVar1 & 8) != 0) {
      iVar2 = *(int *)(param_1 + 0xe1c);
      goto joined_r0x004e2831;
    }
  }
  iVar2 = *(int *)(param_1 + 0xe1c);
joined_r0x004e2831:
  if (iVar2 == 0) {
    FUN_004e14d0(0x10000000,0,0,0);
    return;
  }
  FUN_004e14d0(0x10000002,0,0,0);
  return;
}

// 004E28B0  Em0120::vf360  size=36  [class]
void __fastcall Em0120::vf360(int param_1)

{
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  return;
}

// 004E28E0  Em0120::vf268  size=61  [class]
undefined4 __thiscall Em0120::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4e4) == 0) && (*param_4 == 10)) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x10002) {
      FUN_00ac9040();
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    return 1;
  }
  return 0;
}

// 004E2920  FUN_004e2920  size=349  [between]
void __fastcall FUN_004e2920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0x4a0) != 3) && (*(int *)(param_1 + 0x4e4) == 0)) &&
     (*(int *)(param_1 + 0x1200) == 0)) {
    if (*(int *)(param_1 + 0x4a0) == 1) {
      iVar1 = FUN_004dd910();
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0xde0) = *(uint *)(param_1 + 0xde0) & 0xefffffff;
        return;
      }
      if ((*(uint *)(param_1 + 0xde0) & 0x10000000) == 0) {
        *(uint *)(param_1 + 0xde0) = *(uint *)(param_1 + 0xde0) | 0x10000000;
        iVar1 = FUN_004dd9d0();
        if (iVar1 != 0) {
          FUN_004e14d0(0x10000025,0,0,0);
          return;
        }
      }
      else {
        iVar1 = FUN_004dd9d0();
        if (iVar1 != 0) {
          iVar1 = FUN_00a8cab0();
          if (iVar1 != 0x10000025) {
            FUN_004e14d0(0x10000025,1,0,0);
            return;
          }
        }
      }
    }
    else if ((*(int *)(param_1 + 0x1358) == 0) && ((*(uint *)(param_1 + 0xde0) & 0x10000000) == 0))
    {
      iVar1 = FUN_004dd910();
      if (iVar1 != 0) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 == 0x20000) {
          FUN_00a8c9b0(0,5,0,0);
        }
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdcc) = uVar2;
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        FUN_00a8caf0(0x30002,0,0,0);
        *(undefined4 *)(param_1 + 0xdc0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xddc) = 0;
      }
    }
  }
  return;
}

// 004E2A80  FUN_004e2a80  size=241  [between]
void __fastcall FUN_004e2a80(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xe5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1 + 0x940) == 0) {
    switchD_0080dbae::default();
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      iVar1 = FUN_00a12210(0x700);
      iVar3 = FUN_00a7c8a0();
      *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar1 + 0x4c);
      FUN_00a7c8a0();
      switchD_0080dbae::default();
    }
    *(undefined4 *)(param_1 + 0x940) = 1;
  }
  return;
}

// 004E2B80  FUN_004e2b80  size=333  [between]
void __fastcall FUN_004e2b80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uStack_18;
  
  piVar4 = (int *)FUN_00c13920();
  iVar5 = (**(code **)(*piVar4 + 0x28))(0);
  if (iVar5 != 0) {
    fVar6 = (float10)FUN_00dde300(0,0x3e99999a);
    fVar7 = (float10)FUN_00dde300(0,0x3f000000);
    fVar8 = (float10)FUN_00dde300(0,0x3e99999a);
    uVar9 = 5;
    FUN_00a7c8a0(5);
    iVar5 = FUN_00a12210(uVar9);
    fVar1 = *(float *)(iVar5 + 0x44);
    fVar2 = *(float *)(iVar5 + 0x48);
    fVar3 = *(float *)(iVar5 + 0x4c);
    *(float *)(param_1 + 0x1530) =
         ((*(float *)(param_1 + 0x1520) + (float)(fVar6 - (float10)0.15) + *(float *)(iVar5 + 0x40))
         - *(float *)(param_1 + 0x1530)) * 0.1 + *(float *)(param_1 + 0x1530);
    *(float *)(param_1 + 0x1534) =
         ((*(float *)(param_1 + 0x1524) + (float)(fVar7 * (float10)-1.0) + fVar1) -
         *(float *)(param_1 + 0x1534)) * 0.1 + *(float *)(param_1 + 0x1534);
    *(float *)(param_1 + 0x1538) =
         ((*(float *)(param_1 + 0x1528) + (float)(fVar8 - (float10)0.15) + fVar2) -
         *(float *)(param_1 + 0x1538)) * 0.1 + *(float *)(param_1 + 0x1538);
    *(float *)(param_1 + 0x153c) =
         ((*(float *)(param_1 + 0x152c) + uStack_18 + fVar3) - *(float *)(param_1 + 0x153c)) * 0.1 +
         *(float *)(param_1 + 0x153c);
  }
  return;
}

// 004E2CD0  FUN_004e2cd0  size=443  [between]
void __fastcall FUN_004e2cd0(int param_1)

{
  float fVar1;
  int iVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(short *)(param_1 + 0xab4) != 6) {
    FUN_00a84720();
    switchD_0080dbae::default();
    iVar2 = FUN_00a12210(0x503);
    local_30 = *(float *)(iVar2 + 0x40);
    local_2c = *(float *)(iVar2 + 0x44);
    local_28 = *(float *)(iVar2 + 0x48);
    local_24 = *(float *)(iVar2 + 0x4c);
    local_40 = *(float *)(param_1 + 0x1530) - local_30;
    local_3c = *(float *)(param_1 + 0x1534) - local_2c;
    local_38 = *(float *)(param_1 + 0x1538) - local_28;
    local_34 = *(float *)(param_1 + 0x153c) - local_24;
    if (((local_40 != 0.0) || (local_3c != 0.0)) || (local_38 != 0.0)) {
      fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_38 = 0.0;
        local_3c = 1.0;
        local_40 = 0.0;
      }
    }
    local_40 = local_40 * -1.0;
    local_3c = local_3c * -1.0;
    local_38 = local_38 * -1.0;
    local_20 = local_30 + local_40;
    local_1c = local_2c + local_3c;
    local_18 = local_38 + local_28;
    local_14 = local_34 + local_24;
    FUN_00a84780(&local_20,1,1,0,0,0x3f800000);
  }
  return;
}

// 004E2E90  FUN_004e2e90  size=469  [between]
undefined4 __fastcall FUN_004e2e90(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  
  param_1[0xd9] = param_1[0xd9] | 2;
  param_1[99] = param_1[0x4d7];
  iVar3 = FUN_00a8cab0();
  param_1[0x373] = iVar3;
  param_1[0x374] = param_1[0x370];
  FUN_00a8caf0(0x80000,0,0,0);
  param_1[0x370] = 0;
  FUN_00a962d0(0,0);
  pcVar1 = *(code **)(*param_1 + 0x220);
  param_1[0x377] = 0;
  (*pcVar1)(0x41200000);
  if ((short)param_1[0x2ad] != 6) {
    FUN_00a82790(param_1[0x13c],0x503,0xffffffff);
    param_1[0x514] = param_1[0x514] | 2;
    FUN_00a82870(0x3fb2b8c2,0xbfb2b8c2,0x3f000000,0x3ae4c388,0x3e0efa35);
    FUN_00a82840(0x3f860a92,0xbeb2b8c2,0x3f000000,0x3ae4c388,0x3e0efa35);
    sVar2 = FUN_00dde2d0(0,10);
    param_1[0x548] = (int)((float)(sVar2 + -5) * 0.05);
    sVar2 = FUN_00dde2d0(0,10);
    param_1[0x549] = (int)((float)(sVar2 + -5) * 0.05);
    sVar2 = FUN_00dde2d0(0,10);
    param_1[0x54a] = (int)((float)(sVar2 + -5) * 0.05);
    piVar4 = (int *)FUN_00c13920();
    (**(code **)(*piVar4 + 0x28))(0);
    iVar3 = FUN_00a7c8a0();
    param_1[0x54c] = *(int *)(iVar3 + 0x40);
    param_1[0x54d] = *(int *)(iVar3 + 0x44);
    param_1[0x54e] = *(int *)(iVar3 + 0x48);
    param_1[0x54f] = *(int *)(iVar3 + 0x4c);
  }
  param_1[0x554] = 0;
  return 1;
}

// 004E3070  Em0120::vf33C  size=1357  [class]
void __thiscall Em0120::vf33C(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_8;
  
  iVar5 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_8 = 0x42000;
  if (*(int *)(param_1 + 0x4a0) == 3) {
    local_8 = 0x42006;
    iVar2 = FUN_00a8cab0();
    if (iVar2 != 0x80005) {
      *(undefined4 *)(param_3 + 0x18) = 0x42006;
      return;
    }
  }
  uVar6 = 2;
  iVar2 = 0x10;
  do {
    uVar4 = 0x80000000 >> ((byte)(uVar6 - 2) & 0x1f);
    uVar3 = uVar6 - 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar3 * 4) & uVar4) != 0) &&
       ((*(uint *)(param_3 + uVar3 * 4) & uVar4) == 0)) {
      iVar5 = iVar5 + 1;
    }
    uVar4 = 0x80000000 >> ((byte)(uVar6 - 1) & 0x1f);
    uVar3 = uVar6 - 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar3 * 4) & uVar4) != 0) &&
       ((*(uint *)(param_3 + uVar3 * 4) & uVar4) == 0)) {
      iVar5 = iVar5 + 1;
    }
    uVar3 = 0x80000000 >> ((byte)uVar6 & 0x1f);
    if (((*(uint *)(param_3 + 0x10 + (uVar6 >> 5) * 4) & uVar3) != 0) &&
       ((*(uint *)(param_3 + (uVar6 >> 5) * 4) & uVar3) == 0)) {
      iVar5 = iVar5 + 1;
    }
    uVar4 = 0x80000000 >> ((byte)(uVar6 + 1) & 0x1f);
    uVar3 = uVar6 + 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar3 * 4) & uVar4) != 0) &&
       ((*(uint *)(param_3 + uVar3 * 4) & uVar4) == 0)) {
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (iVar5 == 0x40) {
    *(undefined4 *)(param_3 + 0x18) = local_8;
    FUN_00dd5650(&DAT_0163f620);
    return;
  }
  iVar2 = 0;
  uVar6 = 2;
  iVar5 = 5;
  do {
    bVar1 = (byte)uVar6;
    uVar4 = 0x80000000 >> (bVar1 - 2 & 0x1f);
    uVar3 = uVar6 - 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar3 * 4) & uVar4) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar3 * 4) & uVar4) == 0)) {
      iVar2 = iVar2 + 1;
    }
    uVar4 = 0x80000000 >> (bVar1 - 1 & 0x1f);
    uVar3 = uVar6 - 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar3 * 4) & uVar4) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar3 * 4) & uVar4) == 0)) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = 0x80000000 >> (bVar1 & 0x1f);
    if (((*(uint *)(param_3 + 0x10 + (uVar6 >> 5) * 4) & uVar3) != 0) &&
       ((*(uint *)(param_3 + 8 + (uVar6 >> 5) * 4) & uVar3) == 0)) {
      iVar2 = iVar2 + 1;
    }
    uVar4 = 0x80000000 >> (bVar1 + 1 & 0x1f);
    uVar3 = uVar6 + 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar3 * 4) & uVar4) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar3 * 4) & uVar4) == 0)) {
      iVar2 = iVar2 + 1;
    }
    uVar4 = 0x80000000 >> (bVar1 + 2 & 0x1f);
    uVar3 = uVar6 + 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar3 * 4) & uVar4) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar3 * 4) & uVar4) == 0)) {
      iVar2 = iVar2 + 1;
    }
    uVar4 = 0x80000000 >> (bVar1 + 3 & 0x1f);
    uVar3 = uVar6 + 3 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar3 * 4) & uVar4) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar3 * 4) & uVar4) == 0)) {
      iVar2 = iVar2 + 1;
    }
    uVar6 = uVar6 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((iVar2 == 1) ||
     ((((uVar6 = *(uint *)(param_3 + 0x10), (uVar6 & 0x10000000) != 0 &&
        ((*(uint *)(param_3 + 8) >> 0x1c & 1) != 0)) && ((uVar6 & 0x200000) != 0)) &&
      ((*(uint *)(param_3 + 8) >> 0x15 & 1) != 0)))) goto LAB_004e359b;
  if ((int)uVar6 < 0) {
    if (*(int *)(param_3 + 8) < 0) {
      iVar5 = FUN_0043f860(1);
      if (iVar5 != 0) {
        iVar5 = FUN_0043f860(2);
        if (iVar5 != 0) {
          iVar5 = FUN_0043f830(0xd);
          if (iVar5 != 0) goto LAB_004e35ac;
          iVar5 = FUN_0043f830(0xe);
          if (iVar5 != 0) goto LAB_004e35ac;
          iVar5 = FUN_0043f830(0xf);
          if (iVar5 != 0) goto LAB_004e35ac;
        }
      }
    }
    if (((int)uVar6 < 0) && (*(int *)(param_3 + 8) < 0)) {
      iVar5 = FUN_0043f830(1);
      if (iVar5 != 0) goto LAB_004e357d;
      iVar5 = FUN_0043f830(2);
      if (iVar5 != 0) goto LAB_004e357d;
    }
  }
  iVar5 = FUN_0043f860(1);
  if (iVar5 != 0) {
    iVar5 = FUN_0043f860(2);
    if (iVar5 != 0) {
      iVar5 = FUN_0043f830(0xd);
      if (iVar5 != 0) goto LAB_004e359b;
      iVar5 = FUN_0043f830(0xe);
      if (iVar5 != 0) goto LAB_004e359b;
      iVar5 = FUN_0043f830(0xf);
      if (iVar5 != 0) goto LAB_004e359b;
    }
  }
  iVar5 = FUN_0043f830(0);
  if (iVar5 != 0) {
    iVar5 = FUN_0043f830(1);
    if (iVar5 != 0) {
      iVar5 = FUN_0043f830(2);
      if (iVar5 != 0) {
        iVar5 = FUN_0043f860(3);
        if (iVar5 == 0) {
          *param_2 = 3;
          *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x4b4);
          return;
        }
        iVar5 = FUN_0043f830(10);
        if (iVar5 != 0) goto LAB_004e35ac;
        iVar5 = FUN_0043f860(10);
        if (iVar5 != 0) goto LAB_004e357d;
        *param_2 = 4;
        goto LAB_004e3422;
      }
    }
  }
  iVar5 = FUN_0043f830(0);
  if (iVar5 == 0) {
    iVar5 = FUN_0043f860(0);
    if (iVar5 == 0) {
LAB_004e3422:
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x4b4);
      return;
    }
    iVar5 = FUN_0043f860(0);
    if (iVar5 == 0) {
      iVar5 = FUN_0043f830(1);
      if (iVar5 != 0) goto LAB_004e359b;
      goto LAB_004e35ac;
    }
  }
  else {
    iVar5 = FUN_0043f860(1);
    if (iVar5 == 0) {
      iVar5 = FUN_0043f860(2);
      if (iVar5 != 0) {
        iVar5 = FUN_0043f830(4);
        if (iVar5 == 0) {
          iVar5 = FUN_0043f830(0x13);
          if (iVar5 == 0) {
            iVar5 = FUN_0043f860(4);
            if (iVar5 == 0) {
              iVar5 = FUN_0043f860(0x13);
              if (iVar5 == 0) goto LAB_004e34a8;
            }
          }
        }
LAB_004e359b:
        *(undefined4 *)(param_3 + 0x18) = local_8;
        return;
      }
LAB_004e34a8:
      *param_2 = 1;
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x4b4);
      return;
    }
    iVar5 = FUN_0043f860(2);
    if (iVar5 == 0) {
      iVar5 = FUN_0043f860(1);
      if (iVar5 == 0) {
        *param_2 = 2;
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x4b4);
        return;
      }
      iVar5 = FUN_0043f830(5);
      if (iVar5 == 0) {
        iVar5 = FUN_0043f830(0x12);
        if (iVar5 == 0) {
          iVar5 = FUN_0043f860(5);
          if (iVar5 == 0) {
            iVar5 = FUN_0043f860(0x12);
            if (iVar5 == 0) {
              *param_2 = 2;
              *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x4b4);
              return;
            }
          }
        }
      }
LAB_004e35ac:
      *(undefined4 *)(param_3 + 0x18) = local_8;
      return;
    }
  }
LAB_004e357d:
  *(undefined4 *)(param_3 + 0x18) = local_8;
  return;
}

// 004E35C0  Em0120::vf1BC  size=620  [class]
void __thiscall Em0120::vf1BC(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  
  if (param_2 != (int *)0x0) {
    puVar11 = &DAT_01b34eb0;
    (**(code **)(*param_2 + 4))(&DAT_01b34eb0);
    iVar2 = FUN_00dd6d80(puVar11);
    if ((iVar2 != 0) && (param_2 != param_1)) {
      if (param_2[0x128] == 3) {
        FUN_00a8cb50(0x80007);
        FUN_00a8cb60(0);
        uVar10 = 0x3f800000;
        uVar9 = 0xbf800000;
        uVar3 = FUN_00a95d20(0);
        uVar8 = 0x3f800000;
        uVar7 = 0;
        uVar6 = 0;
        uVar4 = FUN_00a95df0(0);
        FUN_00a9e290(uVar4,uVar6,uVar7,uVar8,uVar3,uVar9,uVar10);
        fVar5 = (float10)FUN_00a958c0(0);
        FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          Animation::Motion::Unit::setCurrentTime(0,(float)fVar5);
        }
        if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
          param_1[0xd9] = param_1[0xd9] | 0x400000;
          *(undefined4 *)param_1[0xdc] = 0;
        }
        if (param_1[0xdc] != 0) {
          *(undefined4 *)(param_1[0xdc] + 4) = 0;
          *(undefined4 *)(param_1[0xdc] + 8) = 1;
        }
      }
      else {
        uVar3 = FUN_00a8cae0();
        uVar4 = FUN_00a8cad0(uVar3);
        uVar6 = FUN_00a8cac0(uVar4);
        uVar8 = 0;
        uVar7 = FUN_00a8cab0(0,uVar6);
        FUN_004dd770(uVar7,uVar8,uVar6,uVar4,uVar3);
        uVar10 = 0x3f800000;
        uVar9 = 0xbf800000;
        uVar3 = FUN_00a95d20(0);
        uVar8 = 0x3f800000;
        uVar7 = 0;
        uVar6 = 0;
        uVar4 = FUN_00a95df0(0);
        FUN_00a9e290(uVar4,uVar6,uVar7,uVar8,uVar3,uVar9,uVar10);
        fVar5 = (float10)FUN_00a958c0(0);
        FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          Animation::Motion::Unit::setCurrentTime(0,(float)fVar5);
        }
      }
      FUN_0040ac60(param_2 + 0x2ac);
      param_1[0x12a] = param_2[0x12a];
    }
  }
  if (param_1[0x128] != 3) {
    piVar1 = (int *)param_1[0xcc];
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x4d7];
    FUN_00a8caf0(0x40001,0,0,0);
    param_1[0x370] = 0;
    FUN_00a962d0(0,0);
    param_1[0x377] = 0;
    iVar2 = *piVar1;
    if (iVar2 == 1) {
      FUN_00a8cb60(2);
      return;
    }
    if (iVar2 == 2) {
      FUN_00a8cb60(4);
      return;
    }
    if (iVar2 == 3) {
      FUN_00a8cb60(6);
      return;
    }
    if (iVar2 == 4) {
      FUN_00a8cb60(8);
    }
  }
  return;
}

// 004E3830  Em0120::vf338  size=74  [class]
void __thiscall Em0120::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = true;
  if (0 < param_4) {
    piVar2 = (int *)(param_3 + 0x18);
    do {
      if (*piVar2 == param_1[0x12d]) {
        bVar1 = false;
      }
      piVar2 = piVar2 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (!bVar1) {
      return;
    }
  }
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x364))(0xffffffff);
  }
  return;
}

// 004E3880  Em0120::vf30  size=106  [class]
void __fastcall Em0120::vf30(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x128] == 3) && (param_1[0x480] == 0)) {
    (**(code **)(*param_1 + 0x344))(8,1,1);
  }
  iVar1 = FUN_004e1460();
  if (iVar1 != 0) {
    FUN_00b39f00(0xa0008,0,0,0);
    FUN_00b4ae90();
    FUN_00a9e0d0(*(undefined4 *)(iVar1 + 0x4f0));
    FUN_00a7c950();
    return;
  }
  return;
}

// 004E38F0  Em0120::vf48  size=98  [class]
void __fastcall Em0120::vf48(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = *(float *)(param_1 + 0xe34);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0xe34) = *(float *)(param_1 + 0xe34) - *(float *)(param_1 + 0x910);
  }
  *(float *)(param_1 + 0x1218) = *(float *)(param_1 + 0x1218) - *(float *)(param_1 + 0x910);
  BehaviorEmBase::vf48();
  if (*(int *)(param_1 + 0x4a0) == 3) {
    FUN_004e2b80();
  }
  uVar2 = FUN_00ac48f0(0);
  *(undefined4 *)(param_1 + 0x1118) = uVar2;
  FUN_004e2920();
  return;
}

// 004E3960  Em0120::vf50  size=96  [class]
void __fastcall Em0120::vf50(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x764) == 0) || (*(int *)(*(int *)(param_1 + 0x764) + 0x10c) != 0)) {
    iVar1 = FUN_00a8c240();
    if (iVar1 == 0) {
      FUN_00a93170();
    }
  }
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x4a0) == 3) {
    FUN_004e2cd0();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f3cb0(param_1);
    }
  }
  return;
}

// 004E39C0  FUN_004e39c0  size=229  [between]
undefined4 __fastcall FUN_004e39c0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0xe20) = 0x41f00000;
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0xe28) = 0x3ca3d70a;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xe1c) = 0;
  *(undefined4 *)(param_1 + 0xe24) = 0x3d0efa35;
  *(undefined4 *)(param_1 + 0xe04) = 0;
  *(undefined4 *)(param_1 + 0xe08) = 0;
  *(undefined4 *)(param_1 + 0xe2c) = 0;
  *(undefined4 *)(param_1 + 0xe0c) = 0;
  *(undefined4 *)(param_1 + 0xe30) = 0;
  *(undefined4 *)(param_1 + 0xe10) = 0;
  *(undefined4 *)(param_1 + 0xe14) = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163f64c), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  if ((*(byte *)(param_1 + 0xb00) & 0x80) != 0) {
    if (*(int *)(param_1 + 0xb08) != -1) {
      FUN_004e14d0(0x1000002c,0,0,0);
      return 1;
    }
    FUN_004e14d0(0x10000002,0,0,0);
  }
  return 1;
}

// 004E3AB0  FUN_004e3ab0  size=258  [between]
void __fastcall FUN_004e3ab0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = FUN_004e1460();
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x814) != 4) {
      *(undefined2 *)(param_1 + 0x209) = 2;
      param_1[0x20a] = 0x78;
    }
    *(undefined4 *)(iVar2 + 0x894) = 0;
    FUN_00b39f00(0x10000029,0,0,0);
    FUN_00a9e0d0(*(undefined4 *)(iVar2 + 0x4f0));
    FUN_00b4ae90();
    FUN_004e1300();
  }
  pcVar1 = *(code **)(*param_1 + 0x1fc);
  param_1[0x128] = 0;
  iVar2 = (*pcVar1)();
  if ((iVar2 == 0) && (param_1[0x480] == 0)) {
    (**(code **)(*param_1 + 0x34c))();
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_0093c1f0((int)*(char *)((int)param_1 + 0xbab),param_1[0x13c],2,0,&uStack_20,&uStack_30,
                 0x41200000,0x3f000000,0xbf800000);
  }
  return;
}

// 004E3BC0  FUN_004e3bc0  size=104  [between]
void __fastcall FUN_004e3bc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004e1460();
  if (iVar1 != 0) {
    iVar1 = FUN_004e1460();
    if (*(int *)(iVar1 + 0x814) == 4) {
      FUN_004e14d0(0x10000002,0,0,0);
      return;
    }
  }
  if (*(int *)(param_1 + 0x808) != 0) {
    iVar1 = FUN_004e1460();
    if (iVar1 != 0) {
      iVar1 = FUN_004e1460();
      if (*(int *)(iVar1 + 0x814) < 4) {
        FUN_004e14d0(0x1000002c,0,0,0);
      }
    }
  }
  return;
}

// 004E3C30  FUN_004e3c30  size=201  [between]
void __fastcall FUN_004e3c30(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(5,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x387] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_004e3c95;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_004e3c95:
  iVar1 = FUN_004e1460();
  if (((iVar1 != 0) && (iVar1 = FUN_004e1460(), *(int *)(iVar1 + 0x814) == 4)) &&
     (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3d4ccccd,0x393702d3,0x3d567750,0);
  }
  return;
}

// 004E3D80  FUN_004e3d80  size=446  [between]
void __fastcall FUN_004e3d80(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_004e1460();
  if ((iVar3 != 0) && (iVar3 = FUN_004e1460(), *(int *)(iVar3 + 0x814) < 4)) {
    FUN_004e14d0(0x10000003,0,0,0);
  }
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(float *)(param_1 + 0x920) <= 0.0)) {
    *(undefined4 *)(param_1 + 0xe04) = 1;
    sVar2 = FUN_00dde2a0(0,2);
    if ((sVar2 == 0) &&
       ((iVar3 = FUN_004e1460(), iVar3 != 0 && ((*(uint *)(iVar3 + 0x4a8) & 0x400000) == 0)))) {
      if (*(float *)(param_1 + 0xa90) <= 25.0) {
        FUN_004e14d0(0x10000015,0,0,0);
        return;
      }
      FUN_004e14d0(0x10000014,0,0,0);
      return;
    }
    fVar1 = *(float *)(param_1 + 0x44) - *(float *)(*(int *)(param_1 + 0xa84) + 0x44);
    if (NAN(fVar1) || 5.0 < fVar1 == (fVar1 == 5.0)) {
      if (4.0 <= fVar1) {
        *(undefined4 *)(param_1 + 0xe14) = 0;
      }
      else {
        FUN_004dd4c0();
        *(float *)(param_1 + 0x54) =
             *(float *)(param_1 + 0xe14) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x54);
      }
    }
    else {
      FUN_004dd4c0();
      *(float *)(param_1 + 0x54) =
           *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xe14) * *(float *)(param_1 + 0x910);
    }
    if (*(float *)(param_1 + 0xa90) <= 100.0) {
      sVar2 = FUN_00dde2a0(0,1);
      if (sVar2 == 0) {
        iVar3 = FUN_00907640(param_1 + 0x10e0,0,0);
        if (iVar3 == 0) {
          FUN_004e14d0(0x1000000c,0,0,0);
          return;
        }
        iVar3 = FUN_00907640(param_1 + 0x10e4,0,0);
        if (iVar3 != 0) {
          FUN_004e14d0(0x10000005,0,0,0);
          return;
        }
        FUN_004e14d0(0x1000000d,0,0,0);
        return;
      }
      if (sVar2 != 1) {
        return;
      }
    }
    FUN_004e14d0(0x10000005,0,0,0);
  }
  return;
}

// 004E47F0  FUN_004e47f0  size=888  [between]
void __fastcall FUN_004e47f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 5;
    if ((*(uint *)(param_1 + 0xb00) & 0x100) != 0) {
      uVar2 = 0x4b;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if ((*(uint *)(param_1 + 0xb00) & 0x100) == 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    else {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 1:
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar2 = FUN_00a81330();
    FUN_00a9e0d0(uVar2);
    iVar1 = FUN_004e1460();
    if (iVar1 != 0) {
      FUN_004e1460();
      FUN_00b4ae90();
    }
    FUN_004e1300();
    if (*(int *)(param_1 + 0x4e4) == 0) {
      *(undefined4 *)(param_1 + 0x4a0) = 0;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        uVar3 = 0x10000;
      }
      else {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        uVar3 = 0x1000002a;
      }
      *(undefined4 *)(param_1 + 0xdcc) = uVar2;
      FUN_00a8caf0(uVar3,0,0,0);
      *(undefined4 *)(param_1 + 0xdc0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xddc) = 0;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    if (*(int *)(param_1 + 0x4e4) != 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdcc) = uVar2;
      *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
      uVar2 = 0x1000002a;
      goto LAB_004e4b3e;
    }
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    uVar2 = 0x10000;
    goto LAB_004e4b38;
  default:
    goto switchD_004e4810_default;
  }
  if (((*(uint *)(param_1 + 0xb00) & 0x100) != 0) &&
     (iVar1 = FUN_00d46690(*(undefined1 *)(param_1 + 0xb24)), iVar1 != 0)) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    fVar4 = (float10)FUN_00a581b0(&local_c,0,*(undefined4 *)(param_1 + 0xe10));
    *(float *)(param_1 + 0xe10) = (float)fVar4;
    *(undefined4 *)(param_1 + 0x50) = local_c;
    *(undefined4 *)(param_1 + 0x54) = local_8;
    *(undefined4 *)(param_1 + 0x58) = local_4;
    *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(10);
  if (iVar1 != 0) {
    uVar2 = FUN_00a81330();
    FUN_00a9e0d0(uVar2);
    iVar1 = FUN_004e1460();
    if (iVar1 != 0) {
      FUN_004e1460();
      FUN_00b4ae90();
    }
    FUN_004e1300();
    if (*(int *)(param_1 + 0x4e4) == 0) {
      *(undefined4 *)(param_1 + 0x4a0) = 0;
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
switchD_004e4810_default:
    return;
  }
  if (*(int *)(param_1 + 0x4e4) == 0) {
    if ((*(uint *)(param_1 + 0xb00) & 0x100) == 0) {
      return;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0xe0c) = 1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdcc) = uVar2;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    uVar2 = 0x1000b;
  }
  else {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    uVar2 = 0x1000002a;
LAB_004e4b38:
    *(undefined4 *)(param_1 + 0xdcc) = uVar3;
  }
LAB_004e4b3e:
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xddc) = 0;
  return;
}

// 004E4B80  FUN_004e4b80  size=313  [between]
void __fastcall FUN_004e4b80(int *param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    iVar2 = param_1[0x2a1];
    if ((iVar2 != 0) && (param_1[0x186] != 0x10000017)) {
      fVar4 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar2 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x25] = (int)(float)fVar4;
    }
    cVar3 = '\0';
    sVar1 = FUN_00dde2a0(0,1);
    if (sVar1 == 0) {
      cVar3 = (param_1[0x186] == 0x10000017) + '^';
    }
    else if (sVar1 == 1) {
      cVar3 = (param_1[0x186] == 0x10000017) + '`';
    }
    FUN_00aa4080(cVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_004e1460();
  if ((iVar2 != 0) && (iVar2 = FUN_004e1460(), 3 < *(int *)(iVar2 + 0x814))) {
    FUN_004e14d0(0x1000000b,0,0,0);
    iVar2 = param_1[0x2a1];
    if (iVar2 == 0) {
      return;
    }
    fVar4 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)param_1[0x10],
                            (float10)*(float *)(iVar2 + 0x48) - (float10)(float)param_1[0x12]);
    param_1[0x25] = (int)(float)fVar4;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004e4cb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004E4CC0  FUN_004e4cc0  size=710  [between]
void __fastcall FUN_004e4cc0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x74,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x225] = 0x3e800000;
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x289] = 0x41700000;
    param_1[0x288] = 1;
    (*pcVar1)(1);
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x228] = 0;
    (*pcVar1)();
    param_1[0x187] = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e0af0(1);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x75,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x481] = 0;
    param_1[0x187] = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 4;
      return;
    }
    iVar3 = FUN_00907640(param_1 + 0x43b,0,param_1 + 0x37c);
    if (iVar3 != 0) {
      if ((float)param_1[0x380] - (float)param_1[0x11] < 0.001 !=
          ((float)param_1[0x380] - (float)param_1[0x11] == 0.001)) {
        param_1[0x481] = param_1[0x481] + 1;
      }
      param_1[0x380] = param_1[0x11];
      if (((float)param_1[0x11] <= (float)param_1[0x37d] + 2.0) &&
         (fVar2 = (float)param_1[0x244] * 0.8 * (float)param_1[0x225], param_1[0x225] = (int)fVar2,
         0.01 <= fVar2)) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      if (((float)param_1[0x11] < (float)param_1[0x37d] + 0.6 !=
           ((float)param_1[0x11] == (float)param_1[0x37d] + 0.6)) || (4 < (uint)param_1[0x481])) {
        param_1[0x187] = param_1[0x187] + 1;
        iVar3 = FUN_004e1460();
        if (iVar3 != 0) {
          iVar3 = FUN_004e1460();
          *(int *)(iVar3 + 0x61c) = *(int *)(iVar3 + 0x61c) + 1;
          return;
        }
      }
    }
    break;
  case 4:
    FUN_00aa4080(0x76,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x228] = 1;
    (*pcVar1)(0);
    (**(code **)(*param_1 + 0x318))();
    if (param_1[0x1d9] != 0) {
      FUN_008e0af0(0);
    }
    param_1[0x187] = 5;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004e4f81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004E5090  FUN_004e5090  size=1025  [between]
void __fastcall FUN_004e5090(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  float local_4c;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38 [2];
  float local_30;
  undefined1 local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e5c50(0x10);
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x18c) = 0x447a0000;
    iVar3 = FUN_00d46690(*(undefined1 *)(param_1 + 0xb24));
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_0163f484,*(undefined4 *)(param_1 + 0xb24));
      FUN_004e27e0();
    }
    else {
      FUN_00a5dcc0(iVar3);
    }
    FUN_00a9f4c0("BezierMove",0,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x32,0,0x80000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x35,0,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x36,0,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0xe1c) = 0;
    *(undefined4 *)(param_1 + 0x938) = 0;
    *(undefined4 *)(param_1 + 0x93c) = 0;
    if ((*(uint *)(param_1 + 0xb00) & 0x100) != 0) {
      *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_1 + 0xe10);
    }
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x33,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0xb08) != -1) {
        FUN_004e14d0(0x1000002c,0,0,0);
        return;
      }
      FUN_004e27e0();
      return;
    }
  default:
    goto switchD_004e50ae_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_20 = *(undefined4 *)(param_1 + 0x50);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  local_14 = *(undefined4 *)(param_1 + 0x5c);
  fVar4 = (float10)FUN_00a581b0(&local_44,0x3e800000,*(undefined4 *)(param_1 + 0x924));
  *(float *)(param_1 + 0x924) = (float)fVar4;
  *(float *)(param_1 + 0xe10) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x50) = local_44;
  *(undefined4 *)(param_1 + 0x54) = local_40;
  *(undefined4 *)(param_1 + 0x58) = local_3c;
  FUN_00a585a0(local_38,0x3e800000,(float)fVar4);
  fVar4 = (float10)fpatan((float10)local_38[0],(float10)local_30);
  *(float *)(param_1 + 0x94) = (float)fVar4;
  FUN_00a581b0(local_2c,0x40400000,*(undefined4 *)(param_1 + 0x924));
  thunk_FUN_00dde510(local_48,&local_4c,local_2c,&local_20);
  local_4c = local_4c * 1.2732395;
  fVar1 = -0.7;
  if ((-0.7 <= local_4c) && (fVar1 = local_4c, 0.7 < local_4c)) {
    fVar1 = 0.7;
  }
  fVar1 = (fVar1 - *(float *)(param_1 + 0x938)) * 0.1 + *(float *)(param_1 + 0x938);
  *(float *)(param_1 + 0x938) = fVar1;
  if (*(float *)(param_1 + 0x93c) <= fVar1) {
    if (*(float *)(param_1 + 0x93c) < fVar1) {
      fVar1 = *(float *)(param_1 + 0x93c) + 0.005;
      goto LAB_004e5344;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x93c) - 0.005;
LAB_004e5344:
    *(float *)(param_1 + 0x93c) = fVar1;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x93c),0);
  cVar2 = FUN_00a58a60(*(undefined4 *)(param_1 + 0x924),&DAT_0163f660);
  if (((cVar2 != '\0') && ((*(uint *)(param_1 + 0x4a8) & 0x100) != 0)) &&
     (*(int *)(param_1 + 0xe0c) == 0)) {
    FUN_004e14d0(0x10000026,0,0,0);
  }
  iVar3 = FUN_00a54a60(*(undefined4 *)(param_1 + 0x924));
  if (iVar3 != 0) {
    if ((*(uint *)(param_1 + 0x4a8) & 0x100) != 0) {
      FUN_009fdde0();
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_004e1460();
    if (iVar3 != 0) {
      iVar3 = FUN_00a8cac0();
      FUN_00a8cb60(iVar3 + 1);
      return;
    }
  }
switchD_004e50ae_default:
  return;
}

// 004E54B0  FUN_004e54b0  size=48  [between]
void FUN_004e54b0(void)

{
  int iVar1;
  
  iVar1 = FUN_004e1460();
  if (iVar1 != 0) {
    iVar1 = FUN_004e1460();
    if (3 < *(int *)(iVar1 + 0x814)) {
      FUN_004e14d0(0x1000000a,0,0,0);
    }
  }
  return;
}

// 004E54E0  FUN_004e54e0  size=758  [between]
void __fastcall FUN_004e54e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  undefined1 **ppuStack_108;
  undefined4 **ppuStack_104;
  undefined4 **ppuStack_100;
  undefined1 *puStack_fc;
  undefined4 *puStack_f8;
  undefined4 *local_f4;
  int *local_f0;
  undefined4 *puStack_ec;
  undefined4 *local_e8;
  int *local_e4;
  undefined1 auStack_c8 [8];
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 local_54 [4];
  undefined4 local_50 [19];
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    local_e4 = param_1 + 0x10;
    local_e8 = (undefined4 *)0x4e550e;
    FUN_00a8d6c0();
    param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
    param_1[0x24] = 0;
    param_1[99] = 0x447a0000;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    goto LAB_004e5579;
  }
  local_e4 = (int *)0x3f800000;
  local_e8 = (undefined4 *)0xbf800000;
  puStack_ec = (undefined4 *)0x0;
  local_f0 = (int *)0x3f800000;
  local_f4 = (undefined4 *)0x3e4ccccd;
  puStack_f8 = (undefined4 *)0x0;
  puStack_fc = (undefined1 *)0x10;
  ppuStack_100 = (undefined4 **)0x4e555e;
  FUN_00aa4120();
  local_e4 = (int *)0x1f;
  local_e8 = (undefined4 *)0x4e556d;
  fVar3 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))();
  param_1[0x42d] = (int)(float)fVar3;
  param_1[0x187] = param_1[0x187] + 1;
LAB_004e5579:
  local_e4 = &local_bc;
  local_e8 = (undefined4 *)0x4e5585;
  puStack_ec = (undefined4 *)FUN_00a8d790();
  if (puStack_ec != (undefined4 *)0x0) {
    if (param_1[0x202] != 0) {
      local_e4 = (int *)0x0;
      local_e8 = (undefined4 *)0x40000000;
      puStack_ec = (undefined4 *)0x4e55b9;
      FUN_00a97e60();
    }
    local_e4 = param_1 + 0x10;
    local_e8 = &local_bc;
    puStack_ec = (undefined4 *)local_54;
    local_f0 = &local_c0;
    local_f4 = (undefined4 *)0x4e55d4;
    thunk_FUN_00dde510();
    if (ABS(local_b8 - (float)param_1[0x11]) < 0.5) {
      local_c0 = 0;
    }
    local_e4 = (int *)0x4;
    local_70 = local_c0;
    local_e8 = &local_70;
    local_6c = param_1[0x25];
    puStack_ec = local_50;
    local_68 = 0;
    local_78 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_8c = 0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_a0 = 0.0;
    local_a4 = 0.0;
    local_a8 = 0;
    local_ac = 0;
    local_74 = 0x3f800000;
    local_88 = 0x3f800000;
    local_9c = 1.0;
    local_b0 = 0x3f800000;
    local_f0 = (int *)0x4e5662;
    thunk_FUN_00ddc1d0();
    puStack_ec = &local_b0;
    local_e8 = local_50;
    local_f0 = (int *)0x4e567a;
    local_e4 = puStack_ec;
    D3DXMatrixMultiply();
    local_f0 = param_1 + 0x2c;
    puStack_f8 = &local_bc;
    puStack_fc = (undefined1 *)0x4e568e;
    local_f4 = puStack_f8;
    D3DXMatrixMultiply();
    puStack_fc = auStack_c8;
    local_e8 = (undefined4 *)0x0;
    local_e4 = (undefined4 *)0x0;
    puVar1 = (undefined4 *)param_1[0x42d];
    ppuStack_104 = &local_e8;
    ppuStack_108 = (undefined1 **)0x4e56b4;
    ppuStack_100 = ppuStack_104;
    D3DXVec3TransformNormal();
    local_f4 = (undefined4 *)(local_a4 + (float)local_f4);
    local_f0 = (int *)(local_a0 + (float)local_f0);
    puStack_ec = (undefined4 *)((float)puStack_ec + local_9c);
    if ((0.0 <= (float)local_e4 * 57.29578) || ((float)local_f0 <= 0.0)) {
      if ((0.0 < (float)local_e4 * 57.29578) && ((float)local_f0 < 0.0)) {
        local_f0 = (int *)((float)local_f0 * -1.0);
      }
    }
    else {
      local_f0 = (int *)((float)local_f0 * -1.0);
    }
    ppuStack_108 = (undefined1 **)&local_f4;
    (**(code **)(*param_1 + 0x70))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    puStack_f8 = local_e4;
    puStack_ec = (undefined4 *)0x3f800000;
    local_f4 = puVar1;
    FUN_00a8e880(&puStack_f8);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    iVar2 = FUN_00f96420();
    if (iVar2 == 0x1e) {
      FUN_00f96100(&ppuStack_108,0x3f000000,0xff8080ff,0,0);
    }
    return;
  }
  local_f0 = (int *)0x10000000;
  local_f4 = (undefined4 *)0x4e5598;
  local_e8 = puStack_ec;
  local_e4 = puStack_ec;
  FUN_004e14d0();
  return;
}

// 004E57E0  FUN_004e57e0  size=700  [between]
void __fastcall FUN_004e57e0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *puVar5;
  
  *(undefined4 *)(param_1 + 0xe08) = 1;
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  iVar2 = FUN_00c19c00(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2),
                       *(undefined4 *)(param_1 + 0xb20));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_0163f668);
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdcc) = uVar3;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
  }
  else {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar2,0x700,0xffffffff);
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar5 = &DAT_01be9d20;
      (**(code **)(*piVar4 + 4))(&DAT_01be9d20);
      iVar2 = FUN_00dd6d80(puVar5);
      if (iVar2 != 0) {
        FUN_00b4ae00(*(undefined4 *)(param_1 + 0x4f0));
        uVar3 = FUN_009f8b40();
        FUN_009f8ae0(uVar3);
        FUN_004e27e0();
        iVar2 = piVar4[0x360];
        if (iVar2 != 0) {
          bVar1 = *(float *)(param_1 + 0xbb4) <= 0.0;
          if (!bVar1) {
            *(float *)(iVar2 + 0xc) = *(float *)(param_1 + 0xbac) * 0.017453292;
            *(float *)(iVar2 + 0x10) = *(float *)(param_1 + 0xbb0) * 0.017453292;
            *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0xbb4);
            iVar2 = piVar4[0x360];
            *(float *)(iVar2 + 0x30) = *(float *)(param_1 + 0xbac) * 0.017453292;
            *(float *)(iVar2 + 0x34) = *(float *)(param_1 + 0xbb0) * 0.017453292;
            *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0xbb4);
          }
          if (*(float *)(param_1 + 0xbc0) <= 0.0) {
            if (bVar1) goto LAB_004e59a4;
          }
          else {
            iVar2 = piVar4[0x360];
            *(float *)(iVar2 + 0x18) = *(float *)(param_1 + 3000) * 0.017453292;
            *(float *)(iVar2 + 0x1c) = *(float *)(param_1 + 0xbbc) * 0.017453292;
            *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0xbc0);
            iVar2 = piVar4[0x360];
            *(float *)(iVar2 + 0x3c) = *(float *)(param_1 + 3000) * 0.017453292;
            *(float *)(iVar2 + 0x40) = *(float *)(param_1 + 0xbbc) * 0.017453292;
            *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(param_1 + 0xbc0);
          }
          FUN_00a82b40(piVar4[0x360],4);
          uVar3 = FUN_00a82d50();
          FUN_00a85340(uVar3);
        }
LAB_004e59a4:
        if ((*(int *)(param_1 + 0xb24) != -1) && ((*(byte *)(param_1 + 0xb00) & 0x80) == 0)) {
          FUN_004e14d0(0x1000002b,0,0,0);
          return;
        }
        if (*(int *)(param_1 + 0xb08) != -1) {
          FUN_004e14d0(0x1000002c,0,0,0);
          return;
        }
        FUN_004e14d0(0x10000001,0,0,0);
        return;
      }
    }
    FUN_00dd5650(&DAT_0163f668);
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdcc) = uVar3;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
  }
  FUN_00a8caf0(0x10000,0,0,0);
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xddc) = 0;
  return;
}

// 004E5AA0  FUN_004e5aa0  size=1032  [between]
undefined4 __thiscall FUN_004e5aa0(int *param_1,int *param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint extraout_EDX;
  int iVar5;
  uint unaff_ESI;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar3 = *param_2;
  if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) || ((iVar3 == 0x1b0 || (iVar3 == 0x147)))) {
    return 0;
  }
  iVar5 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  if (((*(byte *)(param_2 + 0x23) & 0x40) != 0) && (iVar3 = FUN_00ac8170(iVar5), iVar3 == 0)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x30c))(param_2[1],0);
  if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x4c0) & 0x10) != 0)) {
    (**(code **)(*param_1 + 0x21c))(iVar5,(char)param_2[4],0x3c23d70a,0);
    iVar3 = *param_2;
    if ((iVar3 == 0x47) || ((iVar3 == 0x48 || (iVar3 == 0x42)))) {
      uVar9 = 0x40000000;
    }
    else {
      uVar9 = 0x41200000;
    }
    (**(code **)(*param_1 + 0x220))(uVar9);
  }
  uVar4 = param_2[0x23];
  if ((uVar4 & 0x20000) != 0) {
    FUN_004e14d0(0x10000024,0,0,0);
    return 1;
  }
  if ((uVar4 & 0x20) != 0) {
    FUN_004e14d0(0x10000025,0,0,0);
    return 1;
  }
  if ((uVar4 & 0x10000) != 0) {
    unaff_ESI = 0x40;
  }
  if (*param_2 == 0x18d) {
    uVar9 = 0x1000001a;
  }
  else if ((iVar5 == 0) || (*(int *)(iVar5 + 0x4b0) != 0x20091)) {
    if ((param_2[0x24] & 0x800000U) == 0) {
      fVar1 = (float)param_1[0x2a7] * 57.29578;
      if ((param_2[0x24] & 0x2000000U) == 0) {
        bVar2 = false;
        if ((fVar1 < -90.0) && (!NAN(fVar1) && -180.0 < fVar1 != (fVar1 == -180.0))) {
          bVar2 = true;
        }
        if ((90.0 < fVar1) && (fVar1 < 180.0)) {
          bVar2 = true;
        }
        if (bVar2) {
          if (!bVar2) goto LAB_004e5d5c;
          uVar9 = 0x10000017;
        }
        else {
          uVar9 = 0x10000016;
        }
      }
      else {
        bVar2 = false;
        if ((fVar1 < -90.0) && (!NAN(fVar1) && -180.0 < fVar1 != (fVar1 == -180.0))) {
          bVar2 = true;
        }
        if ((90.0 < fVar1) && (fVar1 < 180.0)) {
          bVar2 = true;
        }
        if (bVar2) {
          if (!bVar2) goto LAB_004e5d5c;
          uVar9 = 0x10000020;
        }
        else {
          uVar9 = 0x1000001f;
        }
      }
    }
    else {
      uVar9 = 0x10000021;
    }
  }
  else {
    uVar9 = 0x1000001a;
  }
  FUN_004e14d0(uVar9,0,0,0);
LAB_004e5d5c:
  uVar4 = unaff_ESI | 1;
  if (param_1[0x21c] < 1) {
    if (param_1[0x294] != 0) {
      FUN_004e2700(param_2);
      uVar4 = extraout_EDX;
    }
    (**(code **)(*param_1 + 0x198))(iVar5,param_2,uVar4);
    param_1[0x139] = 1;
    iVar3 = FUN_004e1460();
    if (iVar3 == 0) {
      param_1[0xd9] = param_1[0xd9] | 2;
      param_1[99] = param_1[0x4d7];
      iVar3 = FUN_00a8cab0();
      param_1[0x374] = param_1[0x370];
    }
    else {
      iVar3 = FUN_004e1460();
      if (iVar3 != 0) {
        uVar10 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar9 = 0x10000029;
        FUN_004e1460(0x10000029,0,0,0);
        FUN_00b39f00(uVar9,uVar7,uVar8,uVar10);
        iVar3 = FUN_004e1460();
        FUN_00a9e0d0(*(undefined4 *)(iVar3 + 0x4f0));
        FUN_004e1460();
        FUN_00b4ae90();
        FUN_004e1300();
      }
      param_1[0xd9] = param_1[0xd9] | 2;
      param_1[99] = param_1[0x4d7];
      iVar3 = FUN_00a8cab0();
      param_1[0x374] = param_1[0x370];
    }
    param_1[0x373] = iVar3;
    FUN_00a8caf0(0x1000002a,0,0,0);
    param_1[0x370] = 0;
    FUN_00a962d0(0,0);
    param_1[0x377] = 0;
    return 1;
  }
  (**(code **)(*param_1 + 0x198))(iVar5,param_2,uVar4);
  fVar6 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar6;
  return 1;
}

// 004E5EB0  FUN_004e5eb0  size=1564  [between]
void __fastcall FUN_004e5eb0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [8];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a8d280();
    FUN_00aa4080(0x9f,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    FUN_00aa4080(0xa0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x445] = param_1[0x463];
    param_1[0x248] = (int)((float)param_1[0x469] * 60.0);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  case 4:
    fVar1 = (float)param_1[0x445] - (float)param_1[0x466];
    param_1[0x445] = (int)fVar1;
    if (fVar1 < (float)param_1[0x468]) {
      param_1[0x187] = 5;
    }
    pfVar3 = (float *)FUN_00a925a0(local_20);
    local_a4 = (float)param_1[0x244];
    local_b0 = fVar1 * *pfVar3 * local_a4;
    local_ac = pfVar3[1] * fVar1 * local_a4;
    local_a8 = pfVar3[2] * fVar1 * local_a4;
    local_a4 = local_a4 * pfVar3[3] * fVar1;
    (**(code **)(*param_1 + 0x70))(&local_b0);
    return;
  case 5:
    FUN_00aa4080(0xa1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x445];
    param_1[0x445] = (int)(fVar1 - (float)param_1[0x467]);
    if (fVar1 - (float)param_1[0x467] < 0.0) {
      param_1[0x445] = 0;
    }
    fVar1 = (float)param_1[0x445];
    pfVar3 = (float *)FUN_00a925a0(local_30);
    local_94 = (float)param_1[0x244];
    local_a0 = *pfVar3 * fVar1 * local_94;
    local_9c = pfVar3[1] * fVar1 * local_94;
    local_98 = pfVar3[2] * fVar1 * local_94;
    local_94 = pfVar3[3] * fVar1 * local_94;
    (**(code **)(*param_1 + 0x70))(&local_a0);
    goto LAB_004e644d;
  case 7:
    FUN_00aa4080(0xa2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_004e644d:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x38d] = 0x41f00000;
      (*pcVar2)();
      return;
    }
  default:
    goto switchD_004e5ed2_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a925a0(&local_d0);
  if ((int *)param_1[0x2a1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2a1] + 0x204))(&local_c0);
    FUN_00a8e880(&fStack_c4);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3d567750,0);
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(&local_c0,1,0,0,0,0x3f800000);
    switchD_0080dbae::default();
    iVar4 = FUN_00a82a20();
    if (iVar4 != 0) {
      iVar4 = FUN_00a82a20();
      pfVar3 = (float *)(iVar4 + 0x10);
      pfVar6 = afStack_80;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    FUN_00ddbaa0(-(afStack_80[2] /
                  SQRT(fStack_58 * fStack_58 + fStack_5c * fStack_5c + fStack_60 * fStack_60)));
    fStack_e0 = local_c0 - (float)param_1[0x10];
    fStack_dc = fStack_bc - (float)param_1[0x11];
    fStack_d8 = fStack_b8 - (float)param_1[0x12];
    fStack_d4 = fStack_b4 - (float)param_1[0x13];
    if (((fStack_e0 != 0.0) || (fStack_dc != 0.0)) || (fStack_d8 != 0.0)) {
      fVar1 = fStack_d8 * fStack_d8 + fStack_dc * fStack_dc + fStack_e0 * fStack_e0;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_e0,&fStack_e0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_e0 = 0.0;
        fStack_dc = 1.0;
        fStack_d8 = 0.0;
      }
    }
    pfVar3 = (float *)FUN_00a925a0(auStack_40);
    local_d0 = *pfVar3;
    fStack_c8 = pfVar3[2];
    fStack_c4 = pfVar3[3];
    fStack_cc = fStack_dc;
  }
  fVar1 = (float)param_1[0x445];
  param_1[0x445] = (int)((float)param_1[0x464] + fVar1);
  if ((float)param_1[0x465] <= (float)param_1[0x464] + fVar1) {
    param_1[0x445] = param_1[0x465];
  }
  fVar1 = (float)param_1[0x445];
  fStack_84 = (float)param_1[0x244];
  local_90 = local_d0 * fVar1 * fStack_84;
  fStack_8c = fVar1 * fStack_cc * fStack_84;
  fStack_88 = fStack_c8 * fVar1 * fStack_84;
  fStack_84 = fStack_84 * fStack_c4 * fVar1;
  (**(code **)(*param_1 + 0x70))(&local_90);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (((float)param_1[0x46a] * 0.017453292 < (float)param_1[0x2a8]) &&
     (fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if ((param_1[0x378] & 0x40000000U) != 0) {
    param_1[0x378] = param_1[0x378] & 0xbfffffff;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if ((param_1[0x378] & 0x20000000U) != 0) {
    param_1[0x378] = param_1[0x378] & 0xdfffffff;
    FUN_00a8cb60(7);
    return;
  }
  iVar4 = FUN_004e0d10(param_1[0x46b],0,1);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_004e5ed2_default:
  return;
}

// 004E64F0  FUN_004e64f0  size=1557  [between]
void __fastcall FUN_004e64f0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [8];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a8d280();
    FUN_00aa4080(0xaa,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    FUN_00aa4080(0x85,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x445] = param_1[0x46c];
    param_1[0x248] = 0x42700000;
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  case 4:
    fVar1 = (float)param_1[0x445] - (float)param_1[0x46f];
    param_1[0x445] = (int)fVar1;
    if (fVar1 < (float)param_1[0x471]) {
      param_1[0x187] = 5;
    }
    pfVar3 = (float *)FUN_00a925a0(local_20);
    local_a4 = (float)param_1[0x244];
    local_b0 = fVar1 * *pfVar3 * local_a4;
    local_ac = pfVar3[1] * fVar1 * local_a4;
    local_a8 = pfVar3[2] * fVar1 * local_a4;
    local_a4 = local_a4 * pfVar3[3] * fVar1;
    (**(code **)(*param_1 + 0x70))(&local_b0);
    return;
  case 5:
    FUN_00aa4080(0xab,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x445];
    param_1[0x445] = (int)(fVar1 - (float)param_1[0x470]);
    if (fVar1 - (float)param_1[0x470] < 0.0) {
      param_1[0x445] = 0;
    }
    fVar1 = (float)param_1[0x445];
    pfVar3 = (float *)FUN_00a925a0(local_30);
    local_94 = (float)param_1[0x244];
    local_a0 = *pfVar3 * fVar1 * local_94;
    local_9c = pfVar3[1] * fVar1 * local_94;
    local_98 = pfVar3[2] * fVar1 * local_94;
    local_94 = pfVar3[3] * fVar1 * local_94;
    (**(code **)(*param_1 + 0x70))(&local_a0);
    goto LAB_004e6a86;
  case 7:
    FUN_00aa4080(0xac,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_004e6a86:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x38d] = 0x41f00000;
      (*pcVar2)();
      return;
    }
  default:
    goto switchD_004e6512_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a925a0(&local_d0);
  if ((int *)param_1[0x2a1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2a1] + 0x204))(&local_c0);
    FUN_00a8e880(&fStack_c4);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3d567750,0);
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(&local_c0,1,0,0,0,0x3f800000);
    switchD_0080dbae::default();
    iVar4 = FUN_00a82a20();
    if (iVar4 != 0) {
      iVar4 = FUN_00a82a20();
      pfVar3 = (float *)(iVar4 + 0x10);
      pfVar6 = afStack_80;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    FUN_00ddbaa0(-(afStack_80[2] /
                  SQRT(fStack_58 * fStack_58 + fStack_5c * fStack_5c + fStack_60 * fStack_60)));
    fStack_e0 = local_c0 - (float)param_1[0x10];
    fStack_dc = fStack_bc - (float)param_1[0x11];
    fStack_d8 = fStack_b8 - (float)param_1[0x12];
    fStack_d4 = fStack_b4 - (float)param_1[0x13];
    if (((fStack_e0 != 0.0) || (fStack_dc != 0.0)) || (fStack_d8 != 0.0)) {
      fVar1 = fStack_d8 * fStack_d8 + fStack_dc * fStack_dc + fStack_e0 * fStack_e0;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_e0,&fStack_e0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_e0 = 0.0;
        fStack_dc = 1.0;
        fStack_d8 = 0.0;
      }
    }
    pfVar3 = (float *)FUN_00a925a0(auStack_40);
    local_d0 = *pfVar3;
    fStack_c8 = pfVar3[2];
    fStack_c4 = pfVar3[3];
    fStack_cc = fStack_dc;
  }
  fVar1 = (float)param_1[0x445];
  param_1[0x445] = (int)((float)param_1[0x46d] + fVar1);
  if ((float)param_1[0x46e] <= (float)param_1[0x46d] + fVar1) {
    param_1[0x445] = param_1[0x46e];
  }
  fVar1 = (float)param_1[0x445];
  fStack_84 = (float)param_1[0x244];
  local_90 = local_d0 * fVar1 * fStack_84;
  fStack_8c = fVar1 * fStack_cc * fStack_84;
  fStack_88 = fStack_c8 * fVar1 * fStack_84;
  fStack_84 = fStack_84 * fStack_c4 * fVar1;
  (**(code **)(*param_1 + 0x70))(&local_90);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (((float)param_1[0x473] * 0.017453292 < (float)param_1[0x2a8]) &&
     (fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if ((param_1[0x378] & 0x40000000U) != 0) {
    param_1[0x378] = param_1[0x378] & 0xbfffffff;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if ((param_1[0x378] & 0x20000000U) != 0) {
    param_1[0x378] = param_1[0x378] & 0xdfffffff;
    FUN_00a8cb60(7);
    return;
  }
  iVar4 = FUN_004e0d10(param_1[0x474],1,1);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_004e6512_default:
  return;
}

// 004E6B30  FUN_004e6b30  size=791  [between]
void __fastcall FUN_004e6b30(int param_1)

{
  float fVar1;
  short sVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  undefined4 uStack_35c;
  undefined1 auStack_358 [4];
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  uint uStack_334;
  undefined4 local_32c;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  uint local_294;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined2 uStack_1bc;
  short sStack_1ba;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  
  if ((DAT_01bea060 & 0x40000000) == 0) {
    sVar2 = (ushort)(*(int *)(param_1 + 0x1550) != 0) * 4 + 0xf;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 0x23;
    local_32c = 0x30360;
    local_220 = 0x65;
    puVar4 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar4;
    local_31c = 0x14;
    local_314 = 0x14;
    local_30c = *(undefined4 *)(param_1 + 0x4f0);
    local_294 = local_294 | 0xc0;
    local_320 = 0x141;
    local_318 = 100;
    local_310 = 0xa00;
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    piVar6 = (int *)FUN_00c13920();
    local_1c0 = (**(code **)(*piVar6 + 0x28))(0);
    uStack_334 = uStack_334 | 0x24;
    uStack_1b4 = 0;
    uStack_1b0 = 0x3fa66666;
    uStack_1bc = 0xffff;
    fStack_1ac = 0.0;
    uStack_1a8 = uStack_348;
    sStack_1ba = sVar2;
    iVar7 = FUN_00a12210(sVar2);
    fStack_364 = SQRT(*(float *)(iVar7 + 0x14) * *(float *)(iVar7 + 0x14) +
                      *(float *)(iVar7 + 0x10) * *(float *)(iVar7 + 0x10) +
                      *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18));
    fStack_360 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                      *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                      *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
    fVar3 = SQRT(*(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38) +
                 *(float *)(iVar7 + 0x34) * *(float *)(iVar7 + 0x34) +
                 *(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30));
    fStack_368 = *(float *)(iVar7 + 0x28) / fVar3;
    fVar1 = *(float *)(iVar7 + 0x38);
    fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar7 + 0x18) / fVar3));
    fVar9 = (float10)fpatan((float10)fStack_368,(float10)(fVar1 / fVar3));
    fStack_354 = (float)fVar9;
    fStack_350 = (float)fVar8;
    fVar8 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)fStack_360,
                            (float10)*(float *)(iVar7 + 0x10) / (float10)fStack_364);
    fStack_34c = (float)fVar8;
    uStack_344 = *(undefined4 *)(iVar7 + 0x40);
    uStack_340 = *(undefined4 *)(iVar7 + 0x44);
    uStack_33c = *(undefined4 *)(iVar7 + 0x48);
    uStack_338 = *(undefined4 *)(iVar7 + 0x4c);
    piVar6 = (int *)FUN_00c13920();
    uVar5 = (**(code **)(*piVar6 + 0x28))(0);
    iVar7 = FUN_00a7c8a0();
    fStack_368 = *(float *)(iVar7 + 0x40);
    fStack_364 = *(float *)(iVar7 + 0x44);
    fStack_360 = *(float *)(iVar7 + 0x48);
    uStack_35c = *(undefined4 *)(iVar7 + 0x4c);
    FUN_0043fe30(&uStack_348,&fStack_368,auStack_358,0x3f4ccccd,0x43480000);
    uStack_48 = 0xc0400000;
    uStack_44 = 0;
    uStack_40 = 0xbf800000;
    fStack_3c = fStack_34c;
    local_1c0 = CONCAT22(local_1c0._2_2_,0xffff);
    uStack_38 = 0x40400000;
    uStack_34 = 0;
    uStack_30 = 0x3f800000;
    fStack_2c = fStack_34c;
    uStack_1b8 = 0;
    uStack_1b4 = 0x3eb33333;
    uStack_1b0 = 0;
    fStack_1ac = fStack_34c;
    uStack_1c4 = uVar5;
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),&uStack_338);
    *(uint *)(param_1 + 0x1550) = *(uint *)(param_1 + 0x1550) ^ 1;
  }
  return;
}

// 004E6E50  FUN_004e6e50  size=1516  [between]
undefined4 __thiscall FUN_004e6e50(int *param_1,int *param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint unaff_ESI;
  float10 fVar6;
  undefined4 uVar7;
  
  iVar3 = *param_2;
  if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) || ((iVar3 == 0x1b0 || (iVar3 == 0x147)))) {
    return 0;
  }
  iVar5 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  if (((*(byte *)(param_2 + 0x23) & 0x40) != 0) && (iVar3 = FUN_00ac8170(iVar5), iVar3 == 0)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x30c))(param_2[1],0);
  if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x4c0) & 0x10) != 0)) {
    (**(code **)(*param_1 + 0x21c))(iVar5,(char)param_2[4],0x3c23d70a,0);
    iVar3 = *param_2;
    if ((iVar3 == 0x47) || ((iVar3 == 0x48 || (iVar3 == 0x42)))) {
      uVar7 = 0x40000000;
    }
    else {
      uVar7 = 0x41200000;
    }
    (**(code **)(*param_1 + 0x220))(uVar7);
  }
  param_1[0x378] = param_1[0x378] & 0xbfffffff;
  iVar3 = FUN_00a8cab0();
  if (iVar3 == 0x20000) {
    FUN_00a8c9b0(0,5,0,0);
  }
  if ((param_1[0x480] != 0) || (param_1[0x139] != 0)) goto LAB_004e724d;
  if (param_1[0x4d6] != 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    param_1[0xd9] = param_1[0xd9] | 2;
  }
  if ((param_2[0x23] & 0x10000U) != 0) {
    unaff_ESI = 0x40;
  }
  if ((param_2[0x23] & 0x8000U) != 0) {
    unaff_ESI = unaff_ESI & 0xffffffbf | 0x20;
  }
  if (((param_2[0x24] & 0x2000000U) == 0) || (param_1[0x4d6] != 0)) {
    if (((param_2[0x24] & 0x800000U) != 0) && (param_1[0x4d6] == 0)) {
      param_1[0xd9] = param_1[0xd9] | 2;
      param_1[99] = param_1[0x4d7];
      iVar3 = FUN_00a8cab0();
      param_1[0x374] = param_1[0x370];
      uVar7 = 0x30004;
      goto LAB_004e7176;
    }
    if (param_1[0x485] == 0) {
      *(short *)(param_1 + 0x483) = (short)param_1[0x483] + 1;
      if (((((short)param_1[0x483] == (short)param_1[0x4d4]) && (0 < param_1[0x21c])) &&
          (param_1[0x4d6] == 0)) && ((param_1[0x378] & 0x10000000U) == 0)) {
        sVar1 = FUN_00dde2a0(0,1);
        if (sVar1 == 0) {
          param_1[0xd9] = param_1[0xd9] | 2;
          param_1[99] = param_1[0x4d7];
          iVar3 = FUN_00a8cab0();
          param_1[0x373] = iVar3;
          param_1[0x374] = param_1[0x370];
          FUN_00a8caf0(0x20004,0,0,0);
          param_1[0x370] = 0;
          FUN_00a962d0(0,0);
          param_1[0x377] = 0;
          param_1[0x4d3] = 1;
        }
        else {
          FUN_004e0e30();
        }
        *(undefined2 *)(param_1 + 0x483) = 0;
        param_1[0x485] = 1;
        uVar2 = FUN_00dde2a0((short)param_1[0x458],(short)param_1[0x459]);
        *(undefined2 *)(param_1 + 0x4d4) = uVar2;
        return 1;
      }
      iVar3 = FUN_00a8c760(0x10);
      if ((iVar3 == 0) && (param_1[0x4d6] == 0)) {
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = param_1[0x4d7];
        iVar3 = FUN_00a8cab0();
        uVar7 = 0x30000;
        goto LAB_004e716a;
      }
    }
  }
  else {
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x4d7];
    iVar3 = FUN_00a8cab0();
    uVar7 = 0x30003;
LAB_004e716a:
    param_1[0x374] = param_1[0x370];
LAB_004e7176:
    param_1[0x373] = iVar3;
    FUN_00a8caf0(uVar7,0,0,0);
    param_1[0x370] = 0;
    FUN_00a962d0(0,0);
    param_1[0x377] = 0;
  }
  if ((param_2[0x23] & 0x20000U) != 0) {
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x4d7];
    iVar3 = FUN_00a8cab0();
    param_1[0x373] = iVar3;
    param_1[0x374] = param_1[0x370];
    FUN_00a8caf0(0x30001,0,0,0);
    param_1[0x370] = 0;
    FUN_00a962d0(0,0);
    param_1[0x377] = 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x20) != 0) {
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x4d7];
    iVar3 = FUN_00a8cab0();
    param_1[0x373] = iVar3;
    param_1[0x374] = param_1[0x370];
    FUN_00a8caf0(0x30002,0,0,0);
    param_1[0x370] = 0;
    FUN_00a962d0(0,0);
    param_1[0x377] = 0;
  }
LAB_004e724d:
  if (DAT_018b9174 == 0xe33) {
    iVar3 = FUN_00ac8170(iVar5);
    if (iVar3 == 0) {
      return 0;
    }
    param_1[0x21c] = 0;
  }
  if ((param_1[0x21c] < 1) && (param_1[0x139] == 0)) {
    if ((*(byte *)((int)param_2 + 0x92) & 1) != 0) {
      piVar4 = (int *)FUN_00c209f0();
      (**(code **)(*piVar4 + 0x14))(0xe);
    }
    RayCastManager::getWork(param_1 + 0x436);
    RayCastManager::getWork(param_1 + 0x437);
    RayCastManager::getWork(param_1 + 0x438);
    RayCastManager::getWork(param_1 + 0x439);
    RayCastManager::getWork(param_1 + 0x43b);
    RayCastManager::getWork(param_1 + 0x43c);
    RayCastManager::getWork(param_1 + 0x43d);
    RayCastManager::getWork(param_1 + 0x43e);
    RayCastManager::getWork(param_1 + 0x43f);
    if (param_1[0x47d] != 0) {
      RayCastManager::getWork(param_1 + 0x43a);
      RayCastManager::getWork(param_1 + 0x440);
    }
    RayCastManager::getWork(param_1 + 0x441);
    RayCastManager::getWork(param_1 + 0x442);
    if (param_1[0x294] != 0) {
      FUN_004e2700(param_2);
    }
    (**(code **)(*param_1 + 0x198))(iVar5,param_2,unaff_ESI | 1);
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[0x139] = 1;
    param_1[99] = param_1[0x4d7];
    FUN_00a8caf0(0x40000,0,0,0);
    param_1[0x370] = 0;
    FUN_00a962d0(0,0);
    param_1[0x377] = 0;
    return 1;
  }
  (**(code **)(*param_1 + 0x198))(iVar5,param_2,unaff_ESI | 1);
  fVar6 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar6;
  return 1;
}

// 004E7440  Em0120::vf19C  size=179  [class]
void __thiscall Em0120::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 004E7500  Em0120::vf264  size=686  [class]
undefined4 __thiscall Em0120::vf264(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_0040ac60(param_2);
  iVar3 = *(int *)(param_1 + 0x4a0);
  if (iVar3 == 1) {
    FUN_004e57e0();
  }
  else {
    if (iVar3 == 2) {
      FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
      return 1;
    }
    if (iVar3 == 4) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
      *(undefined4 *)(param_1 + 0xdcc) = uVar2;
      FUN_00a8caf0(0x10002,0,0,0);
      *(undefined4 *)(param_1 + 0xdc0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xddc) = 0;
      return 1;
    }
    if ((0.0 < *(float *)(param_1 + 0xbb4)) || (0.0 < *(float *)(param_1 + 0xbc0))) {
      puVar1 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
      *(undefined4 **)(param_1 + 0xd80) = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar4 = &DAT_01880e70;
        for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar1 = puVar1 + 1;
        }
        if (0.0 < *(float *)(param_1 + 0xbb4)) {
          iVar3 = *(int *)(param_1 + 0xd80);
          *(float *)(iVar3 + 0xc) = *(float *)(param_1 + 0xbac) * 0.017453292;
          *(float *)(iVar3 + 0x10) = *(float *)(param_1 + 0xbb0) * 0.017453292;
          *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1 + 0xbb4);
          iVar3 = *(int *)(param_1 + 0xd80);
          *(float *)(iVar3 + 0x30) = *(float *)(param_1 + 0xbac) * 0.017453292;
          *(float *)(iVar3 + 0x34) = *(float *)(param_1 + 0xbb0) * 0.017453292;
          *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(param_1 + 0xbb4);
        }
        if (0.0 < *(float *)(param_1 + 0xbc0)) {
          iVar3 = *(int *)(param_1 + 0xd80);
          *(float *)(iVar3 + 0x18) = *(float *)(param_1 + 3000) * 0.017453292;
          *(float *)(iVar3 + 0x1c) = *(float *)(param_1 + 0xbbc) * 0.017453292;
          *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(param_1 + 0xbc0);
          iVar3 = *(int *)(param_1 + 0xd80);
          *(float *)(iVar3 + 0x3c) = *(float *)(param_1 + 3000) * 0.017453292;
          *(float *)(iVar3 + 0x40) = *(float *)(param_1 + 0xbbc) * 0.017453292;
          *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(param_1 + 0xbc0);
        }
      }
      lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                (*(undefined4 *)(param_1 + 0x4f0),0,*(undefined4 *)(param_1 + 0xd80),4);
      FUN_00a85340(1);
      if ((*(uint *)(param_1 + 0x4a8) & 0x1000) != 0) {
        FUN_00a82dd0(1);
        FUN_00a82e00(1);
        FUN_00a82e30(1);
      }
    }
    if (*(int *)(param_1 + 0xb24) != -1) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdcc) = uVar2;
      *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
      FUN_00a8caf0(0x1000b,0,0,0);
      *(undefined4 *)(param_1 + 0xdc0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xddc) = 0;
      *(undefined4 *)(param_1 + 0x1358) = 1;
      return 1;
    }
  }
  return 1;
}

// 004E77B0  FUN_004e77b0  size=791  [between]
void __fastcall FUN_004e77b0(int param_1)

{
  float fVar1;
  short sVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  undefined4 uStack_35c;
  undefined1 auStack_358 [4];
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  uint uStack_334;
  undefined4 local_32c;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  uint local_294;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined2 uStack_1bc;
  short sStack_1ba;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  
  if ((DAT_01bea060 & 0x40000000) == 0) {
    sVar2 = (ushort)(*(int *)(param_1 + 0x1550) != 0) * 4 + 0xf;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 0x23;
    local_32c = 0x30360;
    local_220 = 0x65;
    puVar4 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar4;
    local_31c = 0x14;
    local_314 = 0x14;
    local_30c = *(undefined4 *)(param_1 + 0x4f0);
    local_294 = local_294 | 0xc0;
    local_320 = 0x141;
    local_318 = 100;
    local_310 = 0x500;
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    piVar6 = (int *)FUN_00c13920();
    local_1c0 = (**(code **)(*piVar6 + 0x28))(0);
    uStack_334 = uStack_334 | 0x24;
    uStack_1b4 = 0;
    uStack_1b0 = 0x3dcccccd;
    uStack_1bc = 0xffff;
    fStack_1ac = 0.0;
    uStack_1a8 = uStack_348;
    sStack_1ba = sVar2;
    iVar7 = FUN_00a12210(sVar2);
    fStack_364 = SQRT(*(float *)(iVar7 + 0x14) * *(float *)(iVar7 + 0x14) +
                      *(float *)(iVar7 + 0x10) * *(float *)(iVar7 + 0x10) +
                      *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18));
    fStack_360 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                      *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                      *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
    fVar3 = SQRT(*(float *)(iVar7 + 0x38) * *(float *)(iVar7 + 0x38) +
                 *(float *)(iVar7 + 0x34) * *(float *)(iVar7 + 0x34) +
                 *(float *)(iVar7 + 0x30) * *(float *)(iVar7 + 0x30));
    fStack_368 = *(float *)(iVar7 + 0x28) / fVar3;
    fVar1 = *(float *)(iVar7 + 0x38);
    fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar7 + 0x18) / fVar3));
    fVar9 = (float10)fpatan((float10)fStack_368,(float10)(fVar1 / fVar3));
    fStack_354 = (float)fVar9;
    fStack_350 = (float)fVar8;
    fVar8 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)fStack_360,
                            (float10)*(float *)(iVar7 + 0x10) / (float10)fStack_364);
    fStack_34c = (float)fVar8;
    uStack_344 = *(undefined4 *)(iVar7 + 0x40);
    uStack_340 = *(undefined4 *)(iVar7 + 0x44);
    uStack_33c = *(undefined4 *)(iVar7 + 0x48);
    uStack_338 = *(undefined4 *)(iVar7 + 0x4c);
    piVar6 = (int *)FUN_00c13920();
    uVar5 = (**(code **)(*piVar6 + 0x28))(0);
    iVar7 = FUN_00a7c8a0();
    fStack_368 = *(float *)(iVar7 + 0x40);
    fStack_364 = *(float *)(iVar7 + 0x44);
    fStack_360 = *(float *)(iVar7 + 0x48);
    uStack_35c = *(undefined4 *)(iVar7 + 0x4c);
    FUN_0043fe30(&uStack_348,&fStack_368,auStack_358,0x3f4ccccd,0x43480000);
    uStack_48 = 0xc0400000;
    uStack_44 = 0;
    uStack_40 = 0xbf800000;
    fStack_3c = fStack_34c;
    local_1c0 = CONCAT22(local_1c0._2_2_,0xffff);
    uStack_38 = 0x40400000;
    uStack_34 = 0;
    uStack_30 = 0x3f800000;
    fStack_2c = fStack_34c;
    uStack_1b8 = 0;
    uStack_1b4 = 0x3eb33333;
    uStack_1b0 = 0;
    fStack_1ac = fStack_34c;
    uStack_1c4 = uVar5;
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),&uStack_338);
    *(uint *)(param_1 + 0x1550) = *(uint *)(param_1 + 0x1550) ^ 1;
  }
  return;
}

// 004E7B90  FUN_004e7b90  size=488  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004e7b90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float *pfStack_368;
  int iStack_364;
  float local_350 [2];
  uint local_348 [2];
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 uStack_328;
  undefined4 uStack_324;
  uint uStack_2ac;
  undefined4 uStack_238;
  undefined4 uStack_1dc;
  undefined2 uStack_1ce;
  float fStack_1b8;
  float fStack_1b4;
  
  if ((DAT_01bea060 & 0x40000000) == 0) {
    iStack_364 = 0x503;
    pfStack_368 = (float *)0x4e7bbb;
    iVar1 = FUN_00a12210();
    local_350[0] = 0.0;
    local_350[1] = 0.1;
    pfStack_368 = local_350;
    local_348[0] = 0xbf19999a;
    local_340 = 0;
    local_33c = 0x3dcccccd;
    local_338 = 0xc2c93333;
    iStack_364 = iVar1 + 0x10;
    D3DXVec3TransformNormal(pfStack_368);
    D3DXVec3TransformNormal(local_350 + 1,local_350 + 1,iVar1 + 0x10);
    local_350[0] = *(float *)(iVar1 + 0x48) + local_350[0];
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_238 = 0x66;
    FUN_0043fe30(&pfStack_368,&stack0xfffffca8,param_1 + 0x90,0x3f4ccccd,0x42a00000);
    uStack_1dc = 0x3f7f7cee;
    fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
    fStack_1b8 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
    fStack_1b4 = (float)fVar3;
    uStack_324 = *(undefined4 *)(param_1 + 0x4f0);
    uStack_2ac = uStack_2ac | 0x100000c0;
    uStack_334 = 5;
    uStack_32c = 0xf;
    uStack_328 = 0;
    uStack_330 = 0x96;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    local_348[0] = local_348[0] | 4;
    uStack_1ce = *(undefined2 *)(iVar1 + 0xa0);
    FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),local_348);
  }
  return;
}

// 004E7D80  FUN_004e7d80  size=488  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004e7d80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float *pfStack_368;
  int iStack_364;
  float local_350 [2];
  uint local_348 [2];
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 uStack_328;
  undefined4 uStack_324;
  uint uStack_2ac;
  undefined4 uStack_238;
  undefined4 uStack_1dc;
  undefined2 uStack_1ce;
  float fStack_1b8;
  float fStack_1b4;
  
  if ((DAT_01bea060 & 0x40000000) == 0) {
    iStack_364 = 0x503;
    pfStack_368 = (float *)0x4e7dab;
    iVar1 = FUN_00a12210();
    local_350[0] = 0.0;
    local_350[1] = 0.1;
    pfStack_368 = local_350;
    local_348[0] = 0xbfcccccd;
    local_340 = 0;
    local_33c = 0x3dcccccd;
    local_338 = 0xc2c93333;
    iStack_364 = iVar1 + 0x10;
    D3DXVec3TransformNormal(pfStack_368);
    D3DXVec3TransformNormal(local_350 + 1,local_350 + 1,iVar1 + 0x10);
    local_350[0] = *(float *)(iVar1 + 0x48) + local_350[0];
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_238 = 0x66;
    FUN_0043fe30(&pfStack_368,&stack0xfffffca8,param_1 + 0x90,0x3f4ccccd,0x42a00000);
    uStack_1dc = 0x3f7f7cee;
    fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
    fStack_1b8 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
    fStack_1b4 = (float)fVar3;
    uStack_324 = *(undefined4 *)(param_1 + 0x4f0);
    uStack_2ac = uStack_2ac | 0x100000c0;
    uStack_334 = 5;
    uStack_32c = 0xf;
    uStack_328 = 0;
    uStack_330 = 0x96;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    local_348[0] = local_348[0] | 4;
    uStack_1ce = *(undefined2 *)(iVar1 + 0xa0);
    FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),local_348);
  }
  return;
}

// 004E7F70  Em0120::vf40  size=3123  [class]
undefined4 __fastcall Em0120::vf40(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  float10 fVar10;
  float10 extraout_ST0;
  int *piVar11;
  int local_1e8;
  float local_1e0 [5];
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined1 local_190 [112];
  undefined1 auStack_120 [284];
  
  iVar3 = BehaviorEmBase::vf40();
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0x4d7] = param_1[99];
  if ((param_1[0x128] == 6) || (param_1[0x128] == 7)) {
    uVar4 = FUN_00588030();
    return uVar4;
  }
  iVar3 = 0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  local_1cc = 0x3f666666;
  local_1c8 = 0x3f99999a;
  local_1c4 = 0x3f8ccccd;
  local_1e0[0] = 0.2;
  local_1e0[1] = 3.0;
  local_1e0[2] = 2.0;
  FUN_00a8e4d0(local_1e0,&local_1cc);
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x38d] = 0;
  param_1[0x380] = 0;
  param_1[0x443] = 0;
  *(undefined2 *)(param_1 + 0x4d8) = 0;
  FUN_00a82790(param_1[0x13c],0x503,0);
  param_1[0x4dc] = param_1[0x4dc] | 0x20;
  FUN_00a82840(0x3fc90fdb,0xbfc90fdb,0x3dcccccd,0x3ae4c388,0x3c8efa35);
  param_1[0x444] = 0;
  param_1[0x445] = 0;
  param_1[0x446] = 0;
  param_1[0x510] = 0;
  param_1[0x44c] = 0;
  param_1[0x450] = 0;
  param_1[0x44d] = 0;
  param_1[0x454] = 0;
  param_1[0x44e] = 0;
  param_1[0x44f] = 0;
  param_1[0x451] = 0;
  param_1[0x452] = 0;
  param_1[0x453] = 0;
  param_1[0x47c] = 0;
  param_1[0x47d] = 0;
  *(undefined2 *)(param_1 + 0x47e) = 0;
  param_1[0x478] = 0;
  param_1[0x479] = 0;
  param_1[0x47a] = 0;
  param_1[0x47b] = 0;
  param_1[0x47f] = 0;
  iVar5 = FUN_00ac8a50();
  param_1[0x484] = 0;
  param_1[0x480] = iVar5;
  param_1[0x486] = 0;
  param_1[0x481] = 0;
  param_1[0x482] = 0;
  *(undefined2 *)(param_1 + 0x483) = 0;
  fVar10 = (float10)FUN_00dde300(0x40000000,0x40400000);
  param_1[0x487] = (int)(float)fVar10;
  FUN_00a82790(param_1[0x13c],0,0);
  param_1[0x488] = param_1[0x488] | 2;
  FUN_00a82840(0x3fb2b8c2,0xbfb2b8c2,0x3f000000,0x3ae4c388,0x3db2b8c2);
  fVar10 = (float10)0;
  param_1[0x4bc] = (int)(float)fVar10;
  param_1[0x4bd] = (int)(float)fVar10;
  param_1[0x4be] = (int)(float)fVar10;
  param_1[0x4bf] = (int)(float)fVar10;
  param_1[0x371] = 1;
  param_1[0x4c0] = 0x40a00000;
  param_1[0x372] = 0;
  param_1[0x4c1] = 0x3fd9999a;
  param_1[0x4c2] = 0x3fc00000;
  param_1[0x4c4] = 0x3fc00000;
  param_1[0x4c5] = 0x3fc00000;
  param_1[0x4c6] = 0x3fc00000;
  param_1[0x4c8] = 0x40e00000;
  param_1[0x4c9] = 0x40000000;
  param_1[0x4ca] = 0x40400000;
  param_1[0x4cc] = (int)(float)fVar10;
  param_1[0x4cd] = (int)(float)fVar10;
  param_1[0x4ce] = (int)(float)fVar10;
  param_1[0x4cf] = (int)(float)fVar10;
  param_1[0x4d1] = (int)(float)fVar10;
  param_1[0x4d0] = 0;
  param_1[0x4d2] = (int)(float)fVar10;
  if (0 < param_1[0x480]) {
    param_1[0x139] = 1;
  }
  param_1[0x37b] = 1;
  param_1[0x4d6] = 0;
  if (((param_1[0x480] == 0) && (param_1[0x128] != 4)) &&
     (iVar5 = FUN_004e1270(), fVar10 = extraout_ST0, iVar5 == 0)) {
    iVar5 = FUN_00c5def0(param_1[0x13c]);
    param_1[0x25c] = iVar5;
    FUN_00405230();
    local_1e0[0] = 0.0;
    local_1e0[1] = 0.0;
    local_1e0[2] = 0.0;
    FUN_00c151f0(1,param_1[0x13c],0,local_1e0,0,0x41000000,0x3f800000,0,0);
    FUN_00c57830(local_190);
    local_1e0[0] = 0.0;
    local_1e0[1] = 0.0;
    local_1e0[2] = 0.0;
    FUN_0041cd70(0,local_1e0);
    param_1[0x1ba] = 0x3fc00000;
    param_1[0x1bb] = 1;
    fVar10 = (float10)0;
    param_1[0x1b9] = -1;
    param_1[0x1b8] = 0;
  }
  param_1[0x20b] = 0;
  if ((param_1[0x480] == 0) && (param_1[0x128] != 3)) {
    local_1e0[0] = (float)fVar10;
    local_1e0[1] = -1.5;
    local_1e0[2] = (float)fVar10;
    iVar5 = FUN_008ec660(param_1,0x40000000,0x3ecccccd,0x41a00000,0x41a00000,0x78,7,local_1e0);
    param_1[0x1d9] = iVar5;
    if (iVar5 == 0) {
      return 0;
    }
    FUN_008e6d00();
  }
  FUN_00a929d0();
  uVar4 = FUN_00ac8660(0,0x1e);
  FUN_00a8edf0(uVar4);
  iVar5 = FUN_00ac8660(0,0x22);
  param_1[0x458] = iVar5;
  iVar5 = FUN_00ac8660(0,0x23);
  param_1[0x459] = iVar5;
  fVar10 = (float10)FUN_00ac85c0(5,0x25);
  param_1[0x45a] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x27);
  param_1[0x45b] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x28);
  param_1[0x45c] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x29);
  param_1[0x45d] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2a);
  param_1[0x45e] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2b);
  param_1[0x45f] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2c);
  param_1[0x460] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2e);
  param_1[0x461] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2f);
  param_1[0x462] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x31);
  param_1[0x463] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x32);
  param_1[0x464] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x33);
  param_1[0x465] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x34);
  param_1[0x466] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x35);
  param_1[0x467] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x36);
  param_1[0x468] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x37);
  param_1[0x469] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x38);
  param_1[0x46a] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x39);
  param_1[0x46b] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3b);
  param_1[0x46c] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3c);
  param_1[0x46d] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3d);
  param_1[0x46e] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3e);
  param_1[0x46f] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3f);
  param_1[0x470] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x40);
  param_1[0x471] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x41);
  param_1[0x472] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x42);
  param_1[0x473] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x43);
  param_1[0x474] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x45);
  param_1[0x475] = (int)(float)fVar10;
  uVar2 = FUN_00dde2a0((short)param_1[0x458],(short)param_1[0x459]);
  *(undefined2 *)(param_1 + 0x4d4) = uVar2;
  uVar4 = FUN_00de3850(0,"_col.hkx",0);
  iVar5 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = RigidBodyCollection::RigidBodyCollection_2();
  }
  param_1[0x1ec] = iVar5;
  if (iVar5 != 0) {
    iVar5 = param_1[0x13c];
    uVar6 = FUN_00de3ee0(uVar4);
    uVar4 = FUN_00de3cf0(uVar4);
    iVar5 = FUN_008f6410(iVar5,uVar4,uVar6);
    if (iVar5 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(7);
      puVar7 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar7);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f18c0(0x100);
    }
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x40);
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar5 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar5 != 0)) {
    Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],2);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
    FUN_00a93730(1);
  }
  iVar5 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar5 == 0) {
    return 0;
  }
  if (param_1[0x480] == 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x3bc);
    (**(code **)(*param_1 + 0x358))(1,param_1 + 0x3bc);
    FUN_00e5e0c0("em0120_se_mov_jet_idle",param_1,0xffffffff,0);
    if (((param_1[0x480] == 0) && (param_1[0x128] != 4)) && (iVar5 = FUN_004e1270(), iVar5 == 0)) {
      piVar11 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar11);
    }
  }
  if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
    param_1[0x378] = param_1[0x378] | 0x80000000;
    local_1e8 = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar5 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar5 + 0x60 + iVar3) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_0163f64c), iVar8 != 0)) {
          puVar9 = (uint *)(iVar5 + 0x38 + iVar3);
          *puVar9 = *puVar9 & 0xfffffffe;
        }
        local_1e8 = local_1e8 + 1;
        iVar3 = iVar3 + 0x70;
      } while (local_1e8 < (short)param_1[0xc9]);
    }
  }
  if ((param_1[0x128] != 1) && (param_1[0x128] != 3)) {
    FUN_004ddea0();
  }
  if ((param_1[0x12a] & 0x200U) != 0) {
    FUN_00e01ca0();
    FUN_00e020f0(param_1[0x13c]);
    FUN_00e01340(0x20120,0x208,auStack_120);
  }
  FUN_004066f0();
  iStack_1c0 = param_1[0x14];
  iStack_1bc = param_1[0x15];
  iStack_1b8 = param_1[0x16];
  iStack_1b4 = param_1[0x17];
  uStack_1a0 = 0x40133333;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_1b0 = 0xc0133333;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  puVar7 = (undefined4 *)FUN_00900480();
  puVar7 = (undefined4 *)*puVar7;
  uVar4 = FUN_009f8b40(0);
  iVar3 = (*(code *)*puVar7)(&iStack_1c0,&uStack_1a0,&uStack_1b0,0x3fc00000,5,uVar4);
  if (iVar3 == 0) {
    FUN_00406760();
    return 0;
  }
  FUN_008f7f00(iVar3,param_1[0x13c]);
  FUN_004066f0();
  uVar1 = *(uint *)(iVar3 + 0xc);
  if (uVar1 == 0) {
    if (DAT_01885d68 != 1) {
      iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_004e899d:
      piVar11 = (int *)(iVar5 + 4);
      *piVar11 = *piVar11 + -1;
      if (((*piVar11 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 1;
    puVar9[2] = puVar9[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_004e899d;
    }
  }
  FUN_004066f0();
  uVar1 = *(uint *)(iVar3 + 0xc);
  if (uVar1 == 0) {
    if (DAT_01885d68 == 1) goto LAB_004e8a36;
    iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 4;
    puVar9[4] = puVar9[4] | 0x400000;
    if (DAT_01885d68 == 1) goto LAB_004e8a36;
    iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar11 = (int *)(iVar5 + 4);
  *piVar11 = *piVar11 + -1;
  if (((*piVar11 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_004e8a36:
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar3);
  FUN_009009c0("WingCheck");
  FUN_00900bd0();
  (**(code **)(*param_1 + 0x318))();
  iVar3 = FUN_00a92f90();
  *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) & 0xfffffffb;
  switch(param_1[0x128]) {
  case 1:
    FUN_004e39c0();
    param_1[0x378] = param_1[0x378] | 0x80000000;
    FUN_00406760();
    return 1;
  case 2:
    if ((*(byte *)(param_1 + 0x12a) & 0x20) == 0) {
      FUN_004e39c0();
    }
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x4d7];
    iVar3 = FUN_00a8cab0();
    param_1[0x374] = param_1[0x370];
    uVar4 = 0x10001;
    break;
  case 3:
    FUN_004e2e90();
    FUN_00406760();
    return 1;
  case 4:
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x4d7];
    iVar3 = FUN_00a8cab0();
    param_1[0x374] = param_1[0x370];
    uVar4 = 0x10002;
    break;
  case 5:
    (**(code **)(*param_1 + 0x34c))();
  default:
    (**(code **)(*param_1 + 0x34c))();
    FUN_00406760();
    return 1;
  }
  param_1[0x373] = iVar3;
  FUN_00a8caf0(uVar4,0,0,0);
  param_1[0x370] = 0;
  FUN_00a962d0(0,0);
  param_1[0x377] = 0;
  FUN_00406760();
  return 1;
}

// 004E8E60  FUN_004e8e60  size=46  [between]
void __fastcall FUN_004e8e60(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0x10000000:
    FUN_004e3bc0();
    return;
  default:
    return;
  case 0x10000002:
    FUN_004e3d80();
    return;
  case 0x1000002c:
    FUN_004e54b0();
    return;
  }
}

// 004E8EE0  FUN_004e8ee0  size=705  [between]
void __fastcall FUN_004e8ee0(int *param_1)

{
  int *piVar1;
  float fVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f000000,0x3c0efa35,0x3db2b8c2,0);
  }
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    FUN_00aa4120(0x88,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] == 0) {
      iVar5 = FUN_004dbb90(0x40400000,0x3cf5c28f);
    }
    else {
      iVar5 = FUN_004db890(*(float *)(param_1[0x2a1] + 0x44) + 3.0,0x3cf5c28f);
    }
    if (iVar5 != 0) {
      param_1[0x248] = 0x42700000;
      uVar4 = FUN_004039a0(5,param_1,0);
      FUN_00a963e0(uVar4);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] <= 0.0) {
      param_1[0x249] = 0;
      sVar3 = FUN_00dde2a0(8,10);
      param_1[0x187] = param_1[0x187] + 1;
      *(short *)(param_1 + 0x4d8) = sVar3 * 3;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] <= 0.0) {
      piVar1 = param_1 + 0x4d8;
      *(short *)piVar1 = (short)*piVar1 + -1;
      if ((short)*piVar1 == 0) {
        sVar3 = FUN_00dde2a0(0,1);
        if (sVar3 != 0) {
          param_1[0x38d] = 0x41f00000;
        }
        FUN_00a8c9b0(0,5,0,0);
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = param_1[0x4d7];
        iVar5 = FUN_00a8cab0();
        param_1[0x373] = iVar5;
        param_1[0x374] = param_1[0x370];
        FUN_00a8caf0(0x10000,0,0,0);
        param_1[0x370] = 0;
        FUN_00a962d0(0,0);
        param_1[0x377] = 0;
        param_1[0x4d3] = 0;
      }
      fVar6 = (float10)FUN_00dde300(0,0x3cf5c28f);
      param_1[0x249] = (int)(float)((fVar6 + (float10)0.05) * (float10)60.0);
      FUN_004e7b90();
      return;
    }
  }
  return;
}

// 004E91C0  FUN_004e91c0  size=336  [between]
void __fastcall FUN_004e91c0(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_24 [4];
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x5b,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ee0(0,0,0x3c);
  if ((iVar3 != 0) && ((int *)param_1[0x2a1] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x2a1] + 0x204))(local_20);
    FUN_00a8e880(auStack_24);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3c8efa35,0);
  }
  iVar3 = FUN_00a95630(0x5b,0x3c);
  if (iVar3 != 0) {
    if (param_1[300] == 0x20120) {
      FUN_004e6b30();
      FUN_004e6b30();
    }
    else {
      FUN_004e77b0();
      FUN_004e77b0();
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 != 0) {
      param_1[0x38d] = 0x41f00000;
    }
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x4d3] = 0;
    (*pcVar1)();
  }
  return;
}

// 004E9310  Em0120::vf32C  size=576  [class]
undefined4 __fastcall Em0120::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auStack_170 [16];
  undefined1 local_160 [348];
  
  if ((param_1[0x128] == 6) || (param_1[0x128] == 7)) {
    uVar9 = FUN_005922a0();
    return uVar9;
  }
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  iVar10 = FUN_00a8c240();
  if (iVar10 == 0) {
    iVar10 = FUN_00a8ef10();
    if (iVar10 == 0) {
      iVar10 = FUN_00a8c760(9);
      if ((iVar10 == 0) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
        if (param_1[0x286] != 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        piVar13 = (int *)param_1[0x19f];
        piVar12 = piVar13 + param_1[0x1a1] * 0x54;
        FUN_00445db0();
        iVar10 = -1;
        bVar8 = false;
        if (piVar13 != piVar12) {
          do {
            if ((*piVar13 != 0x147) && (iVar10 < piVar13[1])) {
              bVar8 = true;
              FUN_00448f50(piVar13);
              iVar10 = piVar13[1];
            }
            piVar13 = piVar13 + 0x54;
          } while (piVar13 != piVar12);
          if (bVar8) {
            iVar10 = FUN_004e1b70(local_160);
            if ((iVar10 == 0) && (param_1[0x139] == 0)) {
              FUN_00a81330();
              pfVar11 = (float *)FUN_00a7c8b0();
              fVar1 = *pfVar11;
              fVar2 = pfVar11[1];
              fVar3 = pfVar11[2];
              fVar4 = pfVar11[3];
              pfVar11 = (float *)(**(code **)(*param_1 + 0x68))();
              fVar5 = pfVar11[1];
              fVar6 = pfVar11[2];
              fVar7 = pfVar11[3];
              param_1[0x4bc] = (int)(fVar1 - *pfVar11);
              param_1[0x4bd] = (int)(fVar2 - fVar5);
              param_1[0x4be] = (int)(fVar3 - fVar6);
              param_1[0x4bf] = (int)(fVar4 - fVar7);
              pfVar11 = (float *)(**(code **)(*param_1 + 0x68))();
              fVar4 = *pfVar11;
              fVar5 = pfVar11[1];
              fVar6 = pfVar11[2];
              pfVar11 = (float *)FUN_00a925a0(auStack_170);
              if (pfVar11[2] * (fVar3 - fVar6) +
                  *pfVar11 * (fVar1 - fVar4) + pfVar11[1] * (fVar2 - fVar5) <= 0.0) {
                param_1[0x37a] = 1;
              }
              else {
                param_1[0x37a] = 0;
              }
              if (param_1[0x128] == 1) {
                uVar9 = FUN_004e5aa0(local_160);
              }
              else {
                uVar9 = FUN_004e6e50(local_160);
              }
              if (param_1[0x286] != 0) {
                LeaveCriticalSection(lpCriticalSection);
              }
              return uVar9;
            }
          }
        }
        if (param_1[0x286] != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
    }
  }
  return 0;
}

// 004EB8A0  FUN_004eb8a0  size=50  [callgraph]
void __fastcall FUN_004eb8a0(int param_1)

{
  float fVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined **ppuStack_110;
  undefined1 *puStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1 + 0x618) < 0x20001) {
    switch(*(int *)(param_1 + 0x618)) {
    case 0x10000:
      goto LAB_004ea4e0;
    default:
      break;
    case 0x1000b:
      FUN_004db4f0();
      return;
    }
  }
  return;
LAB_004ea4e0:
  if ((((*(int *)(param_1 + 0x4a0) != 4) && (*(int *)(param_1 + 0x4a0) != 5)) &&
      (*(float *)(param_1 + 0xa8c) < 16.0)) &&
     ((*(float *)(param_1 + 0xaa0) < 0.6981317 && (sVar2 = FUN_00dde2a0(0,1), sVar2 != 0)))) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar5 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdcc) = uVar5;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    FUN_00a8caf0(0x20006,0,0,0);
    *(undefined4 *)(param_1 + 0xdc0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xddc) = 0;
    return;
  }
  fVar1 = *(float *)(param_1 + 0x11fc) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x11fc) = fVar1;
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    return;
  }
  if ((*(float *)(param_1 + 0xa8c) < 25.0) && (uVar3 = FUN_00dde2a0(0,10), 5 < uVar3)) {
    FUN_004e0e30();
    return;
  }
  if (*(int *)(param_1 + 0x4a0) - 4U < 2) {
    if ((*(int *)(param_1 + 0x134c) == 0) || (0.5235988 <= *(float *)(param_1 + 0xaa0))) {
      if ((0.0 < *(float *)(param_1 + 0xe34)) ||
         ((*(float *)(param_1 + 0x1344) != 0.0 ||
          (*(float *)(param_1 + 0x44) <= *(float *)(param_1 + 0x1348) + 2.5)))) {
LAB_004ea9a9:
        uVar3 = FUN_00dde2a0(0,10);
        if (1 < uVar3) {
LAB_004eaa59:
          if (*(float *)(param_1 + 0xa8c) <= 400.0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x110c) = 2;
          iVar6 = FUN_004dbc10(2,0x40000000);
          if (iVar6 != 0) {
            return;
          }
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
          *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
          uVar5 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xdcc) = uVar5;
          *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
          uVar5 = 0x10004;
          goto LAB_004eb24f;
        }
        uVar4 = FUN_00dde2a0(0,3);
        switch(uVar4) {
        case 0:
          *(undefined4 *)(param_1 + 0x110c) = 2;
          break;
        case 1:
          *(undefined4 *)(param_1 + 0x110c) = 4;
          break;
        case 2:
          *(undefined4 *)(param_1 + 0x110c) = 8;
          break;
        case 3:
          *(undefined4 *)(param_1 + 0x110c) = 0x10;
        }
        iVar6 = FUN_004dbc10(*(undefined4 *)(param_1 + 0x110c),0x40000000);
        if (iVar6 != 0) goto LAB_004eaa59;
LAB_004eaa21:
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
LAB_004eaa27:
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        *(undefined4 *)(param_1 + 0xdcc) = uVar5;
        uVar5 = 0x10004;
        goto LAB_004eb24f;
      }
      puStack_10c = auStack_100;
      iStack_108 = 0;
      uStack_104 = 0x40;
      ppuStack_110 = lib::StaticArray<Entity*,64>::vftable;
      FUN_00c27b40(*(int *)(param_1 + 0xa84) + 0x40,0x41f00000,&ppuStack_110,0x20120);
      puVar8 = puStack_10c;
      if (puStack_10c != puStack_10c + iStack_108 * 4) {
        do {
          FUN_00a7c8a0();
          iVar6 = FUN_00a8cab0();
          if (((iVar6 == 0x20003) || (iVar6 == 0x20000)) && (*(float *)(param_1 + 0xa8c) < 25.0))
          goto LAB_004ea9a9;
          puVar8 = puVar8 + 4;
        } while (puVar8 != puStack_10c + iStack_108 * 4);
      }
      uVar3 = FUN_00dde2a0(0,10);
      if (*(int *)(param_1 + 0x1118) != 0) {
        if ((((1 < uVar3) || (*(float *)(param_1 + 0xa8c) <= 25.0)) ||
            (400.0 <= *(float *)(param_1 + 0xa8c))) ||
           (((0.5235988 <= *(float *)(param_1 + 0xaa0) ||
             (iVar6 = FUN_004e0d10(0x40a00000,1,1), iVar6 != 0)) ||
            (iVar6 = FUN_004dc770(), iVar6 != 0)))) {
          if (((uVar3 < 8) && (*(float *)(param_1 + 0xa8c) < 900.0)) &&
             ((*(float *)(param_1 + 0xaa0) < 0.34906584 && (iVar6 = FUN_004dc7a0(), iVar6 == 0)))) {
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
            uVar5 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xdcc) = uVar5;
            *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
            uVar5 = 0x20000;
            goto LAB_004eb24f;
          }
          if ((((10 < uVar3) ||
               (fVar1 = *(float *)(param_1 + 0xa8c), NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)
               )) || (900.0 <= *(float *)(param_1 + 0xa8c))) ||
             ((0.5235988 <= *(float *)(param_1 + 0xaa0) || (iVar6 = FUN_004dc7a0(), iVar6 != 0))))
          goto LAB_004ea9a9;
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
          *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
          uVar7 = FUN_00a8cab0();
          uVar5 = 0x20005;
          goto LAB_004eb23d;
        }
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
LAB_004ea7c2:
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        *(undefined4 *)(param_1 + 0xdcc) = uVar5;
        uVar5 = 0x20001;
        goto LAB_004eb24f;
      }
      if (((5 < uVar3) || (900.0 <= *(float *)(param_1 + 0xa8c))) ||
         ((0.5235988 <= *(float *)(param_1 + 0xaa0) || (iVar6 = FUN_004dc7a0(), iVar6 != 0)))) {
        if (((10 < uVar3) ||
            (fVar1 = *(float *)(param_1 + 0xa8c), NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)))
           || ((900.0 <= *(float *)(param_1 + 0xa8c) ||
               ((0.5235988 <= *(float *)(param_1 + 0xaa0) || (iVar6 = FUN_004dc7a0(), iVar6 != 0))))
              )) goto LAB_004ea9a9;
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
LAB_004ea975:
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        *(undefined4 *)(param_1 + 0xdcc) = uVar5;
        uVar5 = 0x20005;
        goto LAB_004eb24f;
      }
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    }
    else {
LAB_004ea622:
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    }
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
    uVar5 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
    *(undefined4 *)(param_1 + 0xdcc) = uVar5;
    uVar5 = 0x20000;
  }
  else {
    if (((*(uint *)(param_1 + 0xde0) & 0x80000000) == 0) && (*(int *)(param_1 + 0x134c) != 0)) {
      sVar2 = FUN_00dde2a0(0,1);
      if (sVar2 == 0) {
        if (((*(float *)(param_1 + 0xa8c) < 900.0) && (*(float *)(param_1 + 0xaa0) < 0.34906584)) &&
           (iVar6 = FUN_004dc7a0(), iVar6 == 0)) goto LAB_004ea622;
        goto LAB_004eab9f;
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (((NAN(fVar1) || 25.0 < fVar1 == (fVar1 == 25.0)) || (900.0 <= *(float *)(param_1 + 0xa8c))
          ) || ((0.5235988 <= *(float *)(param_1 + 0xaa0) || (iVar6 = FUN_004dc7a0(), iVar6 != 0))))
      goto LAB_004eab9f;
LAB_004eab41:
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
      uVar7 = FUN_00a8cab0();
      uVar5 = 0x20005;
    }
    else {
LAB_004eab9f:
      if (((*(float *)(param_1 + 0xe34) <= 0.0) && (*(float *)(param_1 + 0x1344) == 0.0)) &&
         (*(float *)(param_1 + 0x1348) + 3.0 < *(float *)(param_1 + 0x44))) {
        puStack_10c = auStack_100;
        iStack_108 = 0;
        uStack_104 = 0x40;
        ppuStack_110 = lib::StaticArray<Entity*,64>::vftable;
        FUN_00c27b40(*(int *)(param_1 + 0xa84) + 0x40,0x41f00000,&ppuStack_110,0x20120);
        puVar8 = puStack_10c;
        if (puStack_10c != puStack_10c + iStack_108 * 4) {
          do {
            FUN_00a7c8a0();
            iVar6 = FUN_00a8cab0();
            if (((iVar6 == 0x20001) || (iVar6 == 0x20005)) && (*(float *)(param_1 + 0xa8c) < 400.0))
            goto LAB_004eb02d;
            puVar8 = puVar8 + 4;
          } while (puVar8 != puStack_10c + iStack_108 * 4);
        }
        uVar3 = FUN_00dde2a0(0,10);
        if (*(int *)(param_1 + 0x1118) == 0) {
          if ((*(uint *)(param_1 + 0xde0) & 0x80000000) == 0) {
            if ((((uVar3 < 5) &&
                 (fVar1 = *(float *)(param_1 + 0xa8c),
                 !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) &&
                (*(float *)(param_1 + 0xa8c) < 900.0)) &&
               ((*(float *)(param_1 + 0xaa0) < 0.5235988 && (iVar6 = FUN_004dc7a0(), iVar6 == 0))))
            goto LAB_004eab41;
            if (((uVar3 < 8) &&
                ((*(float *)(param_1 + 0xa8c) < 900.0 && (*(float *)(param_1 + 0xaa0) < 0.34906584))
                )) && (iVar6 = FUN_004dc7a0(), iVar6 == 0)) goto LAB_004ea622;
          }
          else if ((((uVar3 < 8) &&
                    (fVar1 = *(float *)(param_1 + 0xa8c),
                    !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) &&
                   (*(float *)(param_1 + 0xa8c) < 900.0)) &&
                  ((*(float *)(param_1 + 0xaa0) < 0.5235988 && (iVar6 = FUN_004dc7a0(), iVar6 == 0))
                  )) {
LAB_004eaf97:
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            goto LAB_004ea975;
          }
        }
        else if ((*(uint *)(param_1 + 0xde0) & 0x80000000) == 0) {
          if ((((uVar3 < 2) && (25.0 < *(float *)(param_1 + 0xa8c))) &&
              ((*(float *)(param_1 + 0xa8c) < 400.0 &&
               ((*(float *)(param_1 + 0xaa0) < 0.5235988 &&
                (iVar6 = FUN_004e0d10(0x40a00000,1,1), iVar6 == 0)))))) &&
             (iVar6 = FUN_004dc770(), iVar6 == 0)) goto LAB_004eacff;
          if ((((uVar3 < 4) && (*(float *)(param_1 + 0xa8c) < 900.0)) &&
              (*(float *)(param_1 + 0xaa0) < 0.34906584)) && (iVar6 = FUN_004dc7a0(), iVar6 == 0)) {
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
            uVar5 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
            *(undefined4 *)(param_1 + 0xdcc) = uVar5;
            uVar5 = 0x20000;
            goto LAB_004eb24f;
          }
          if (((uVar3 < 0xb) &&
              (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)))
             && ((*(float *)(param_1 + 0xa8c) < 900.0 &&
                 ((*(float *)(param_1 + 0xaa0) < 0.5235988 && (iVar6 = FUN_004dc7a0(), iVar6 == 0)))
                 ))) goto LAB_004eab41;
          if ((400.0 < *(float *)(param_1 + 0xa8c)) &&
             ((*(float *)(param_1 + 0xaa0) < 0.17453292 && (iVar6 = FUN_004dc7a0(), iVar6 == 0)))) {
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
            uVar5 = FUN_00a8cab0();
            *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
            *(undefined4 *)(param_1 + 0xdcc) = uVar5;
            uVar5 = 0x20005;
            goto LAB_004eb24f;
          }
        }
        else {
          if ((((uVar3 < 5) && (25.0 < *(float *)(param_1 + 0xa8c))) &&
              (*(float *)(param_1 + 0xa8c) < 400.0)) &&
             (((*(float *)(param_1 + 0xaa0) < 0.5235988 &&
               (iVar6 = FUN_004e0d10(0x40a00000,1,1), iVar6 == 0)) &&
              (iVar6 = FUN_004dc770(), iVar6 == 0)))) {
LAB_004eacff:
            *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
            goto LAB_004ea7c2;
          }
          if (((uVar3 < 0xb) &&
              (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)))
             && ((*(float *)(param_1 + 0xa8c) < 900.0 &&
                 ((*(float *)(param_1 + 0xaa0) < 0.5235988 && (iVar6 = FUN_004dc7a0(), iVar6 == 0)))
                 ))) goto LAB_004eaf97;
          if ((400.0 < *(float *)(param_1 + 0xa8c)) &&
             ((*(float *)(param_1 + 0xaa0) < 0.17453292 && (iVar6 = FUN_004dc7a0(), iVar6 == 0))))
          goto LAB_004eab41;
        }
      }
LAB_004eb02d:
      uVar3 = FUN_00dde2a0(0,10);
      if (uVar3 < 2) {
        if (*(int *)(param_1 + 0x1118) == 0) {
          uVar4 = FUN_00dde2a0(0,9);
          switch(uVar4) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
            goto switchD_004eb06e_caseD_0;
          case 5:
          case 6:
          case 7:
            goto switchD_004eb06e_caseD_3;
          case 8:
          case 9:
            goto switchD_004eb06e_caseD_4;
          }
        }
        else if ((*(uint *)(param_1 + 0xde0) & 0x80000000) == 0) {
          uVar4 = FUN_00dde2a0(0,4);
          switch(uVar4) {
          case 0:
            goto switchD_004eb06e_caseD_0;
          case 1:
          case 2:
            goto switchD_004eb06e_caseD_2;
          case 3:
            goto switchD_004eb06e_caseD_3;
          case 4:
            goto switchD_004eb06e_caseD_4;
          }
        }
        else {
          uVar4 = FUN_00dde2a0(0,4);
          switch(uVar4) {
          case 0:
          case 1:
switchD_004eb06e_caseD_0:
            *(undefined4 *)(param_1 + 0x110c) = 2;
            break;
          case 2:
switchD_004eb06e_caseD_2:
            *(undefined4 *)(param_1 + 0x110c) = 4;
            break;
          case 3:
switchD_004eb06e_caseD_3:
            *(undefined4 *)(param_1 + 0x110c) = 8;
            break;
          case 4:
switchD_004eb06e_caseD_4:
            *(undefined4 *)(param_1 + 0x110c) = 0x10;
          }
        }
        iVar6 = FUN_004dbc10(*(undefined4 *)(param_1 + 0x110c),0x40000000);
        if (iVar6 != 0) goto LAB_004eb0f9;
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        goto LAB_004eaa27;
      }
LAB_004eb0f9:
      if (*(float *)(param_1 + 0xa8c) <= 400.0) {
        return;
      }
      if (0.6981317 <= *(float *)(param_1 + 0xaa0)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x110c) = 2;
      iVar6 = FUN_004dbc10(2,0x41a00000);
      if (iVar6 == 0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        *(undefined4 *)(param_1 + 0xdcc) = uVar5;
        uVar5 = 0x20001;
        goto LAB_004eb24f;
      }
      iVar6 = FUN_004dbc10(*(undefined4 *)(param_1 + 0x110c),0x40000000);
      if (iVar6 == 0) goto LAB_004eaa21;
      sVar2 = FUN_00dde2a0(0,1);
      if (sVar2 != 0) {
        *(undefined4 *)(param_1 + 0x110c) = 8;
        iVar6 = FUN_004dbc10(8,0x40000000);
        if (iVar6 != 0) {
          return;
        }
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
        uVar5 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
        *(undefined4 *)(param_1 + 0xdcc) = uVar5;
        uVar5 = 0x10004;
        goto LAB_004eb24f;
      }
      *(undefined4 *)(param_1 + 0x110c) = 0x10;
      iVar6 = FUN_004dbc10(0x10,0x40000000);
      if (iVar6 != 0) {
        return;
      }
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x135c);
      uVar7 = FUN_00a8cab0();
      uVar5 = 0x10004;
    }
LAB_004eb23d:
    *(undefined4 *)(param_1 + 0xdcc) = uVar7;
    *(undefined4 *)(param_1 + 0xdd0) = *(undefined4 *)(param_1 + 0xdc0);
  }
LAB_004eb24f:
  FUN_00a8caf0(uVar5,0,0,0);
  *(undefined4 *)(param_1 + 0xdc0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xddc) = 0;
  return;
}

// 004EB8F0  FUN_004eb8f0  size=449  [callgraph]
void __fastcall FUN_004eb8f0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  float fVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  int in_stack_fffffff8;
  
  iVar8 = param_1[0x186];
  if (iVar8 < 0x20001) {
    if (iVar8 == 0x20000) {
      FUN_004e8ee0();
      return;
    }
    switch(iVar8) {
    case 0x10000:
      iVar8 = param_1[0x187];
      if (param_1[0x128] - 4U < 2) {
        if (iVar8 == 0) {
          puStack_14 = (undefined1 *)0x3f800000;
          piStack_18 = (int *)0x3e4ccccd;
          puStack_1c = (undefined1 *)0x0;
          uStack_20 = 0x88;
          fStack_24 = 7.153273e-39;
          FUN_00aa4120();
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x248] = 0x42f00000;
        }
        else if (iVar8 != 1) goto LAB_004de64c;
        FUN_00ac80a0();
        puStack_14 = (undefined1 *)0x4de4b6;
        FUN_004db970();
        if (param_1[0x2a1] != 0) {
          FUN_00a8e880();
          puStack_14 = (undefined1 *)0x3dcccccd;
          piStack_18 = (int *)&LAB_004de4fd;
          (**(code **)(*param_1 + 0x308))();
        }
        pfVar1 = (float *)(param_1 + 0x478);
        if (SQRT((float)param_1[0x47a] * (float)param_1[0x47a] +
                 *pfVar1 * *pfVar1 + (float)param_1[0x479] * (float)param_1[0x479]) <= 0.001) {
          *pfVar1 = 0.0;
          param_1[0x479] = 0;
          param_1[0x47a] = 0;
          param_1[0x47b] = 0;
          (**(code **)(*param_1 + 0x70))();
        }
        else {
          *pfVar1 = *pfVar1 * 0.5;
          param_1[0x479] = (int)((float)param_1[0x479] * 0.5);
          param_1[0x47a] = (int)((float)param_1[0x47a] * 0.5);
          param_1[0x47b] = (int)((float)param_1[0x47b] * 0.5);
          (**(code **)(*param_1 + 0x70))();
        }
      }
      else {
        if (iVar8 == 0) {
          puStack_14 = (undefined1 *)0x3f800000;
          piStack_18 = (int *)0x3e4ccccd;
          puStack_1c = (undefined1 *)0x0;
          uStack_20 = 0x88;
          fStack_24 = 7.153742e-39;
          FUN_00aa4120();
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x248] = 0x42f00000;
        }
        else if (iVar8 != 1) goto LAB_004de64c;
        FUN_00ac80a0();
        puStack_14 = (undefined1 *)0x4de605;
        FUN_004db970();
        if (param_1[0x2a1] != 0) {
          FUN_00a8e880();
          puStack_14 = (undefined1 *)0x3dcccccd;
          piStack_18 = (int *)&LAB_004de64c;
          (**(code **)(*param_1 + 0x308))();
        }
      }
LAB_004de64c:
      if (0.0 < (float)param_1[0x248]) {
        param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
      }
      return;
    case 0x10001:
      FUN_004e07b0();
      return;
    case 0x10002:
      FUN_004e0b80();
      return;
    case 0x10003:
      goto LAB_004e8bc0;
    case 0x10004:
      FUN_004de670();
      return;
    case 0x10005:
      FUN_004deed0();
      return;
    case 0x10006:
      FUN_004df2b0();
      return;
    case 0x10007:
      FUN_004df6a0();
      return;
    case 0x10008:
      FUN_004dfa80();
      return;
    case 0x10009:
      fStack_60 = (float)param_1[0x10];
      fStack_5c = (float)param_1[0x11];
      fStack_58 = (float)param_1[0x12];
      fStack_54 = (float)param_1[0x13];
      if (param_1[0x187] == 0) {
        if (param_1[0x128] == 4) {
          FUN_00aa4120(0x88,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        }
        param_1[0x47d] = 1;
        if (param_1[0x450] == 0) {
          param_1[0x44c] = (int)(fStack_60 + (float)param_1[0x44c]);
          param_1[0x44d] = (int)(fStack_5c + (float)param_1[0x44d]);
          param_1[0x44e] = (int)((float)param_1[0x44e] + fStack_58);
          param_1[0x44f] = (int)((float)param_1[0x44f] + fStack_54);
        }
        fVar4 = (float)param_1[0x44c] - fStack_60;
        fVar2 = (float)param_1[0x44d] - fStack_5c;
        fVar5 = (float)param_1[0x44e] - fStack_58;
        if (param_1[0x454] == 0) {
          fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2) + 5.0;
        }
        else {
          fVar4 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar4 * fVar4) * 0.5;
        }
        param_1[0x248] = (int)fVar4;
        param_1[0x249] = 0;
        param_1[0x24a] = 0;
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      if (param_1[0x2a1] != 0) {
        FUN_00a8e880(param_1[0x2a1] + 0x40);
        (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
      }
      fVar4 = SQRT(((float)param_1[0x44c] - fStack_60) * ((float)param_1[0x44c] - fStack_60) +
                   ((float)param_1[0x44d] - fStack_5c) * ((float)param_1[0x44d] - fStack_5c) +
                   ((float)param_1[0x44e] - fStack_58) * ((float)param_1[0x44e] - fStack_58));
      if (fVar4 < (float)param_1[0x451] != (fVar4 == (float)param_1[0x451])) {
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      if (param_1[0x454] == 0) {
        if ((float)param_1[0x248] <= 0.0) {
          (**(code **)(*param_1 + 0x34c))();
        }
      }
      else if ((fVar4 < (float)param_1[0x24a] != (fVar4 == (float)param_1[0x24a])) &&
              (0.0 < (float)param_1[0x452])) {
        param_1[0x452] = (int)((float)param_1[0x452] * -1.0);
      }
      fStack_50 = (float)param_1[0x44c] - fStack_60;
      fStack_4c = (float)param_1[0x44d] - fStack_5c;
      fStack_48 = (float)param_1[0x44e] - fStack_58;
      fStack_44 = (float)param_1[0x44f] - fStack_54;
      if (((fStack_50 != 0.0) || (fStack_4c != 0.0)) || (fStack_48 != 0.0)) {
        fVar4 = fStack_48 * fStack_48 + fStack_4c * fStack_4c + fStack_50 * fStack_50;
        if (fVar4 < 0.0 == (fVar4 == 0.0)) {
          FUN_00ddf460(&fStack_50,&fStack_50);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_50 = 0.0;
          fStack_4c = 1.0;
          fStack_48 = 0.0;
        }
      }
      fVar4 = (float)param_1[0x452];
      pfVar1 = (float *)(param_1 + 0x478);
      fVar2 = (float)param_1[0x244];
      *pfVar1 = *pfVar1 + fStack_50 * fVar4 * fVar2;
      param_1[0x479] = (int)(fStack_4c * fVar4 * fVar2 + (float)param_1[0x479]);
      param_1[0x47a] = (int)(fStack_48 * fVar4 * fVar2 + (float)param_1[0x47a]);
      param_1[0x47b] = (int)(fVar2 * fVar4 * fStack_44 + (float)param_1[0x47b]);
      fVar4 = SQRT((float)param_1[0x47a] * (float)param_1[0x47a] +
                   *pfVar1 * *pfVar1 + (float)param_1[0x479] * (float)param_1[0x479]);
      if ((float)param_1[0x453] < fVar4) {
        fStack_70 = *pfVar1;
        fStack_6c = (float)param_1[0x479];
        fStack_68 = (float)param_1[0x47a];
        fStack_64 = (float)param_1[0x47b];
        if (((fStack_70 != 0.0) || (fStack_6c != 0.0)) ||
           (fVar2 = fStack_68, fVar5 = fStack_6c, fVar6 = fStack_70, fStack_68 != 0.0)) {
          fVar2 = fStack_68 * fStack_68 + fStack_6c * fStack_6c + fStack_70 * fStack_70;
          if (fVar2 < 0.0 == (fVar2 == 0.0)) {
            FUN_00ddf460(&fStack_70,&fStack_70);
            fVar2 = fStack_68;
            fVar5 = fStack_6c;
            fVar6 = fStack_70;
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fVar2 = 0.0;
            fVar5 = 1.0;
            fVar6 = 0.0;
          }
        }
        fVar3 = (float)param_1[0x453];
        *pfVar1 = fVar6 * fVar3;
        param_1[0x479] = (int)(fVar5 * fVar3);
        param_1[0x47a] = (int)(fVar2 * fVar3);
        param_1[0x47b] = (int)(fVar3 * fStack_64);
      }
      if ((fVar4 < (float)param_1[0x453]) && (0.0 < (float)param_1[0x452])) {
        param_1[0x24a] = (int)((float)param_1[0x24a] + fVar4);
      }
      if ((float)param_1[0x47c] < 0.0) {
        param_1[0x47c] = 0;
      }
      param_1[0x248] =
           (int)((float)param_1[0x248] -
                SQRT((float)param_1[0x479] * (float)param_1[0x479] + *pfVar1 * *pfVar1 +
                     (float)param_1[0x47a] * (float)param_1[0x47a]));
      fVar4 = (float)param_1[0x249] - (float)param_1[0x244];
      param_1[0x249] = (int)fVar4;
      if (fVar4 < 0.0 != (fVar4 == 0.0)) {
        iVar8 = FUN_009f8b40();
        iVar9 = FUN_009f8b40();
        fStack_70 = *pfVar1;
        fStack_6c = (float)param_1[0x479];
        fStack_68 = (float)param_1[0x47a];
        fStack_64 = (float)param_1[0x47b];
        if (((fStack_70 != 0.0) || (fStack_6c != 0.0)) || (fStack_68 != 0.0)) {
          fVar4 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
          if (fVar4 < 0.0 == (fVar4 == 0.0)) {
            FUN_00ddf460(&fStack_70,&fStack_70);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fStack_70 = 0.0;
            fStack_6c = 1.0;
            fStack_68 = 0.0;
          }
        }
        fStack_40 = fStack_70 * 5.0;
        fStack_3c = fStack_6c * 5.0;
        fStack_38 = fStack_68 * 5.0;
        fStack_34 = fStack_64 * 5.0;
        FUN_0090fa30(param_1 + 0x43a,0,&fStack_60,0x3f800000,&fStack_40,iVar8 << 0x10 | 10,
                     "Slider CharCol Next");
        fStack_30 = fStack_70 * 5.0;
        fStack_2c = fStack_6c * 5.0;
        fStack_28 = fStack_68 * 5.0;
        fStack_24 = fStack_64 * 5.0;
        FUN_0090fa30(param_1 + 0x440,0,&fStack_60,0x3f800000,&fStack_30,iVar9 << 0x10 | 0x1e,
                     "Slider Ground Next");
        param_1[0x249] = 0x41f00000;
      }
      iVar8 = FUN_00907640(param_1 + 0x43a,0,&uStack_20);
      if ((iVar8 == 0) && (iVar8 = FUN_00907640(param_1 + 0x440,0,&uStack_20), iVar8 == 0)) {
        (**(code **)(*param_1 + 0x70))(pfVar1);
        return;
      }
      (**(code **)(*param_1 + 0x34c))();
      return;
    case 0x1000a:
      if (param_1[0x187] == 0) {
        if (param_1[0x128] == 4) {
          puStack_14 = (undefined1 *)0x0;
          piStack_18 = (int *)0x3f800000;
          puStack_1c = (undefined1 *)0x3e4ccccd;
          uStack_20 = 0;
          fStack_24 = 1.90577e-43;
          fStack_28 = 7.165372e-39;
          FUN_00aa4120();
        }
        puStack_14 = (undefined1 *)0x4e0640;
        fVar10 = (float10)FUN_00dde300();
        param_1[0x248] = (int)(float)(fVar10 * (float10)60.0);
        puStack_14 = (undefined1 *)0x4e0668;
        fVar10 = (float10)FUN_00dde300();
        param_1[0x249] = (int)(float)fVar10;
        puStack_14 = (undefined1 *)0x4e068a;
        fVar10 = (float10)FUN_00dde300();
        param_1[0x24a] = (int)(float)fVar10;
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x24b] = 0x3f060a92;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      puStack_14 = (undefined1 *)0x4e06b5;
      FUN_00ac80a0();
      puStack_14 = (undefined1 *)0x4e06d1;
      fVar10 = (float10)FUN_00dde300();
      puStack_14 = (undefined1 *)0x4e06f1;
      fVar11 = (float10)FUN_00dde300();
      fVar12 = (float10)fcos((float10)(float)param_1[0x249]);
      param_1[0x479] = (int)(float)(fVar12 * (float10)0.5 * (float10)(float)fVar10);
      fVar10 = (float10)fcos((float10)(float)param_1[0x24a]);
      param_1[0x478] = (int)(float)(fVar10 * (float10)0.5 * fVar11);
      (**(code **)(*param_1 + 0x70))();
      puStack_14 = (undefined1 *)0x4e0748;
      fVar10 = (float10)FUN_00ddba30();
      param_1[0x249] = (int)(float)fVar10;
      puStack_14 = (undefined1 *)0x4e0770;
      fVar10 = (float10)FUN_00ddba30();
      param_1[0x24a] = (int)(float)fVar10;
      fVar4 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
      if (0.0 < fVar4 - (float)param_1[0x244]) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x004e07a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    case 0x1000b:
      FUN_004db510();
      return;
    default:
      goto switchD_004eb90d_default;
    }
  }
  if (iVar8 < 0x30001) {
    if (iVar8 != 0x30000) {
      switch(iVar8) {
      case 0x20001:
      case 0x20002:
        FUN_004e5eb0();
        return;
      case 0x20003:
        FUN_004e17a0();
        return;
      case 0x20004:
        FUN_004dd580();
        return;
      case 0x20005:
        FUN_004e91c0();
        return;
      case 0x20006:
        FUN_004dd630();
        return;
      default:
        return;
      }
    }
    FUN_004e1c70();
    return;
  }
  if (iVar8 < 0x40001) {
    if (iVar8 == 0x40000) {
      FUN_004e9550();
      return;
    }
    switch(iVar8) {
    case 0x30001:
      FUN_004e1eb0();
      return;
    case 0x30002:
      FUN_004e20d0();
      return;
    case 0x30003:
      goto LAB_004e2240;
    case 0x30004:
      FUN_004e23b0();
      return;
    default:
      goto switchD_004eb90d_default;
    }
  }
  if (iVar8 < 0x10000001) {
    if (iVar8 == 0x10000000) {
      FUN_004e3c30();
      return;
    }
    if (iVar8 < 0x80001) {
      if (iVar8 == 0x80000) {
        FUN_004eb690();
        return;
      }
      if (iVar8 == 0x40001) {
        FUN_004e9950();
        return;
      }
    }
    else {
      switch(iVar8) {
      case 0x80001:
        FUN_004e9f30();
        return;
      case 0x80002:
        FUN_004ea000();
        return;
      case 0x80003:
        FUN_004ea0b0();
        return;
      case 0x80004:
        (**(code **)(*param_1 + 0x220))();
        iVar8 = FUN_00a8cac0();
        if (iVar8 == 0) {
          puStack_14 = (undefined1 *)0x8000000;
          piStack_18 = (int *)0x3f800000;
          puStack_1c = (undefined1 *)0x0;
          uStack_20 = 0;
          fStack_24 = 3.19496e-43;
          fStack_28 = 7.150046e-39;
          FUN_00aa4080();
          if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
            param_1[0xd9] = param_1[0xd9] | 0x400000;
            *(undefined4 *)param_1[0xdc] = 0;
          }
          if (param_1[0xdc] != 0) {
            *(undefined4 *)(param_1[0xdc] + 4) = 0;
            *(undefined4 *)(param_1[0xdc] + 8) = 1;
          }
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (iVar8 != 1) {
          return;
        }
        puStack_14 = (undefined1 *)0x4ddbbd;
        FUN_00ac80a0();
        (**(code **)(*param_1 + 0x220))();
        return;
      case 0x80005:
        FUN_004e2a80();
        return;
      case 0x80006:
        FUN_004ea200();
        return;
      case 0x80007:
        FUN_004ddc00();
        return;
      }
    }
switchD_004eb90d_default:
    return;
  }
  switch(iVar8) {
  case 0x10000001:
    if (param_1[0x187] == 0) {
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x3e2aaaab;
      puStack_1c = (undefined1 *)0x0;
      uStack_20 = 8;
      fStack_24 = 7.185148e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      puStack_14 = (undefined1 *)0x10000002;
      piStack_18 = (int *)&LAB_004e3d7d;
      FUN_004e14d0();
    }
    return;
  case 0x10000002:
    break;
  case 0x10000003:
    if (param_1[0x187] == 0) {
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x3e2aaaab;
      puStack_1c = (undefined1 *)0x0;
      uStack_20 = 10;
      fStack_24 = 7.14367e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
    param_1[0x387] = 0;
                    /* WARNING: Could not recover jumptable at 0x004dc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  default:
    goto switchD_004eb90d_default;
  case 0x10000005:
    if (param_1[0x187] == 0) {
      param_1[0x381] = 0;
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x3e2aaaab;
      puStack_1c = (undefined1 *)0x0;
      uStack_20 = 0xc;
      fStack_24 = 7.186485e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x387] = 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
    fVar4 = (float)param_1[0x2a4];
    if (NAN(fVar4) || 100.0 < fVar4 == (fVar4 == 100.0)) {
      fVar4 = (float)param_1[0x2a4];
      if (NAN(fVar4) || 49.0 < fVar4 == (fVar4 == 49.0)) {
                    /* WARNING: Could not recover jumptable at 0x004e41b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      sVar7 = FUN_00dde2a0();
      if (sVar7 != 0) {
        if (sVar7 == 1) {
          puStack_14 = (undefined1 *)0x1000000c;
          piStack_18 = (int *)0x4e4194;
          FUN_004e14d0();
          return;
        }
        if (sVar7 != 2) {
          return;
        }
        puStack_14 = (undefined1 *)0x1000000d;
        piStack_18 = (int *)&LAB_004e4180;
        FUN_004e14d0();
        return;
      }
    }
    puStack_14 = (undefined1 *)0x1000000a;
    piStack_18 = (int *)0x4e41a8;
    FUN_004e14d0();
    return;
  case 0x10000006:
  case 0x10000007:
  case 0x10000008:
  case 0x10000009:
    switch(param_1[0x187]) {
    case 0:
      iVar8 = param_1[0x186];
      fStack_24 = 2.10195e-44;
      if (iVar8 == 0x10000007) {
        fStack_24 = 2.66247e-44;
      }
      if (iVar8 == 0x10000008) {
        fStack_24 = 3.22299e-44;
      }
      if (iVar8 == 0x10000009) {
        fStack_24 = 3.78351e-44;
      }
      puStack_14 = (undefined1 *)0x8000000;
      piStack_18 = (int *)0x3f800000;
      puStack_1c = (undefined1 *)0x3e2aaaab;
      uStack_20 = 0;
      fStack_28 = 7.186936e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    case 1:
      puStack_14 = (undefined1 *)0x4e425a;
      FUN_00ac80a0();
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 2:
      iVar8 = param_1[0x186];
      fStack_24 = 2.24208e-44;
      if (iVar8 == 0x10000007) {
        fStack_24 = 2.8026e-44;
      }
      if (iVar8 == 0x10000008) {
        fStack_24 = 3.36312e-44;
      }
      if (iVar8 == 0x10000009) {
        fStack_24 = 3.92364e-44;
      }
      puStack_14 = (undefined1 *)0x0;
      piStack_18 = (int *)0x3f800000;
      puStack_1c = (undefined1 *)0x0;
      uStack_20 = 0;
      fStack_28 = 7.187135e-39;
      FUN_00aa4080();
      puStack_14 = (undefined1 *)0x4e42dd;
      sVar7 = FUN_00dde2d0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x387] = 0;
      param_1[0x248] = (int)((float)(int)sVar7 * 20.0);
    case 3:
      puStack_14 = (undefined1 *)0x4e4315;
      FUN_00ac80a0();
      fVar4 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
      if (fVar4 - (float)param_1[0x244] < 0.0) {
        param_1[0x187] = param_1[0x187] + 1;
        iVar8 = FUN_004e1460();
        if (iVar8 != 0) {
          FUN_004e1460();
          FUN_00a8ccb0();
        }
      }
      puStack_14 = (undefined1 *)0x3d4ccccd;
      piStack_18 = (int *)0x4e43bd;
      FUN_00a8de10();
      return;
    case 4:
      iVar8 = param_1[0x186];
      fStack_24 = 2.38221e-44;
      if (iVar8 == 0x10000007) {
        fStack_24 = 2.94273e-44;
      }
      if (iVar8 == 0x10000008) {
        fStack_24 = 3.50325e-44;
      }
      if (iVar8 == 0x10000009) {
        fStack_24 = 4.06377e-44;
      }
      puStack_14 = (undefined1 *)0x8000000;
      piStack_18 = (int *)0x3f800000;
      puStack_1c = (undefined1 *)0x3e2aaaab;
      uStack_20 = 0;
      fStack_28 = 7.187609e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    case 5:
      puStack_14 = (undefined1 *)0x4e443a;
      FUN_00ac80a0();
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004e4455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    return;
  case 0x1000000a:
  case 0x1000000b:
  case 0x1000000c:
  case 0x1000000d:
    switch(param_1[0x187]) {
    case 0:
      iVar8 = param_1[0x186];
      fStack_28 = 4.48416e-44;
      if (iVar8 == 0x1000000b) {
        fStack_28 = 5.04467e-44;
      }
      if (iVar8 == 0x1000000c) {
        fStack_28 = 5.60519e-44;
      }
      if (iVar8 == 0x1000000d) {
        fStack_28 = 6.16571e-44;
      }
      puStack_14 = (undefined1 *)0xbf800000;
      piStack_18 = (int *)0x8000000;
      puStack_1c = (undefined1 *)0x3f800000;
      uStack_20 = 0x3e2aaaab;
      fStack_24 = 0.0;
      fStack_2c = 7.187931e-39;
      FUN_00aa4080();
      puStack_14 = (undefined1 *)0x4e4516;
      fVar10 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))();
      param_1[0x42d] = (int)(float)fVar10;
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x387] = 1;
    case 1:
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x4e453b;
      FUN_00ac80a0();
      puStack_14 = (undefined1 *)0x4e4544;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      break;
    case 2:
      iVar8 = param_1[0x186];
      fStack_28 = 4.62428e-44;
      if (iVar8 == 0x1000000b) {
        fStack_28 = 5.1848e-44;
      }
      if (iVar8 == 0x1000000c) {
        fStack_28 = 5.74532e-44;
      }
      if (iVar8 == 0x1000000d) {
        fStack_28 = 6.30584e-44;
      }
      puStack_14 = (undefined1 *)0xbf800000;
      piStack_18 = (int *)0x0;
      puStack_1c = (undefined1 *)0x3f800000;
      uStack_20 = 0;
      fStack_24 = 0.0;
      fStack_2c = 7.18817e-39;
      FUN_00aa4080();
      puStack_14 = (undefined1 *)0x3;
      piStack_18 = (int *)0x4e45c0;
      sVar7 = FUN_00dde2d0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = (int)((float)(int)sVar7 * 20.0);
    case 3:
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x4e45ee;
      FUN_00ac80a0();
      fVar4 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]);
      if (fVar4 - (float)param_1[0x244] < 0.0) {
        param_1[0x187] = param_1[0x187] + 1;
        puStack_14 = (undefined1 *)0x4e4619;
        iVar8 = FUN_004e1460();
        if (iVar8 != 0) {
          puStack_14 = (undefined1 *)0x4e4626;
          iVar8 = FUN_00a8cac0();
          puStack_14 = (undefined1 *)(iVar8 + 1);
          piStack_18 = (int *)&LAB_004e4630;
          FUN_00a8cb60();
        }
      }
      iVar8 = param_1[0x186];
      puStack_14 = (undefined1 *)param_1[0x25];
      if (iVar8 == 0x1000000b) {
        puStack_14 = (undefined1 *)((float)param_1[0x25] + 3.1415927);
      }
      if (iVar8 == 0x1000000c) {
        puStack_14 = (undefined1 *)((float)param_1[0x25] - 1.5707964);
      }
      if (iVar8 == 0x1000000d) {
        puStack_14 = (undefined1 *)((float)param_1[0x25] + 1.5707964);
      }
      piStack_18 = (int *)param_1[0x42d];
      puStack_1c = (undefined1 *)0x4e469b;
      FUN_00a8de10();
      break;
    case 4:
      iVar8 = param_1[0x186];
      fStack_28 = 4.76441e-44;
      if (iVar8 == 0x1000000b) {
        fStack_28 = 5.32493e-44;
      }
      if (iVar8 == 0x1000000c) {
        fStack_28 = 5.88545e-44;
      }
      if (iVar8 == 0x1000000d) {
        fStack_28 = 6.44597e-44;
      }
      puStack_14 = (undefined1 *)0xbf800000;
      piStack_18 = (int *)0x8000000;
      puStack_1c = (undefined1 *)0x3f800000;
      uStack_20 = 0x3e2aaaab;
      fStack_24 = 0.0;
      fStack_2c = 7.18864e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x387] = 1;
    case 5:
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x4e4720;
      FUN_00ac80a0();
      puStack_14 = (undefined1 *)0x4e4729;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        if (param_1[0x381] == 0) {
          iVar8 = FUN_004e1460();
          if ((iVar8 == 0) || (iVar8 = FUN_004e1460(), *(int *)(iVar8 + 0x814) < 4)) {
            (**(code **)(*param_1 + 0x34c))();
          }
          else {
            puStack_14 = (undefined1 *)0x0;
            piStack_18 = (int *)0x0;
            puStack_1c = (undefined1 *)0x10000002;
            uStack_20 = 0x4e4775;
            FUN_004e14d0();
          }
        }
        else {
          puStack_14 = (undefined1 *)0x0;
          piStack_18 = (int *)0x0;
          puStack_1c = (undefined1 *)0x10000005;
          uStack_20 = 0x4e4748;
          FUN_004e14d0();
        }
      }
    }
    if (param_1[0x2a1] != 0) {
      FUN_00a8e880();
      puStack_14 = (undefined1 *)0x393702d3;
      piStack_18 = (int *)0x3d4ccccd;
      puStack_1c = &LAB_004e47cd;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 0x1000000e:
    if (param_1[0x187] == 0) {
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x3e4ccccd;
      puStack_1c = (undefined1 *)0x0;
      uStack_20 = 0x51;
      fStack_24 = 7.144091e-39;
      FUN_00aa4080();
      puStack_14 = (undefined1 *)0x4dcae2;
      FUN_00a96070();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x387] = 0;
    }
    else if (param_1[0x187] != 1) goto LAB_004dcb1e;
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
LAB_004dcb1e:
    if ((param_1[0x2a1] != 0) && (iVar8 = FUN_00a8c760(), iVar8 != 0)) {
      FUN_00a8e880();
      puStack_14 = (undefined1 *)0x3dcccccd;
      piStack_18 = (int *)&LAB_004dcb77;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 0x1000000f:
    FUN_004dcb90();
    return;
  case 0x10000010:
  case 0x10000011:
    switch(param_1[0x187]) {
    case 0:
      fStack_24 = 8.12753e-44;
      if (param_1[0x186] == 0x10000011) {
        fStack_24 = 8.54792e-44;
      }
      puStack_14 = (undefined1 *)0x8000000;
      piStack_18 = (int *)0x3f800000;
      puStack_1c = (undefined1 *)0x3e2aaaab;
      uStack_20 = 0;
      fStack_28 = 7.144855e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x387] = 0;
    case 1:
      puStack_14 = (undefined1 *)0x4dcd16;
      FUN_00ac80a0();
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 2:
      fStack_24 = 8.12753e-44;
      if (param_1[0x186] == 0x10000011) {
        fStack_24 = 8.68805e-44;
      }
      puStack_14 = (undefined1 *)0x0;
      piStack_18 = (int *)0x3f800000;
      puStack_1c = (undefined1 *)0x0;
      uStack_20 = 0;
      fStack_28 = 7.14503e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    case 3:
      puStack_14 = (undefined1 *)0x4dcd89;
      FUN_00ac80a0();
      if (param_1[0x2a1] != 0) {
        FUN_00a8e880();
      }
      puStack_14 = (undefined1 *)0x393702d3;
      piStack_18 = (int *)0x3dcccccd;
      puStack_1c = (undefined1 *)0x4dcdd0;
      (**(code **)(*param_1 + 0x308))();
      puStack_14 = (undefined1 *)param_1[0x25];
      puStack_1c = (undefined1 *)0x4dcde1;
      iVar8 = FUN_00a8e9b0();
      if (ABS((float)puStack_14 - *(float *)(iVar8 + 4)) < 0.5235988) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 4:
      fStack_24 = 8.26766e-44;
      if (param_1[0x186] == 0x10000011) {
        fStack_24 = 8.82818e-44;
      }
      puStack_14 = (undefined1 *)0x8000000;
      piStack_18 = (int *)0x3f800000;
      puStack_1c = (undefined1 *)0x3e2aaaab;
      uStack_20 = 0;
      fStack_28 = 7.145332e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x387] = 0;
    case 5:
      puStack_14 = (undefined1 *)0x4dce6a;
      FUN_00ac80a0();
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004dce85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    return;
  case 0x10000012:
  case 0x10000013:
    switch(param_1[0x187]) {
    case 0:
      fStack_28 = 9.24857e-44;
      if (param_1[0x186] == 0x10000013) {
        fStack_28 = 9.80909e-44;
      }
      puStack_14 = (undefined1 *)0xbf800000;
      piStack_18 = (int *)0x8000000;
      puStack_1c = (undefined1 *)0x3f800000;
      uStack_20 = 0x3e2aaaab;
      fStack_24 = 0.0;
      fStack_2c = 7.14567e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x387] = 1;
    case 1:
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x4dcf58;
      FUN_00ac80a0();
      puStack_14 = (undefined1 *)0x4dcf61;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 2:
      fStack_28 = 9.3887e-44;
      if (param_1[0x186] == 0x10000013) {
        fStack_28 = 9.94922e-44;
      }
      puStack_14 = (undefined1 *)0xbf800000;
      piStack_18 = (int *)0x0;
      puStack_1c = (undefined1 *)0x3f800000;
      uStack_20 = 0;
      fStack_24 = 0.0;
      fStack_2c = 7.145842e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    case 3:
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x4dcfcc;
      FUN_00ac80a0();
      if (param_1[0x2a1] != 0) {
        puStack_14 = &LAB_004dcfe1;
        FUN_00a8e880();
      }
      puStack_14 = (undefined1 *)0x3db2b8c2;
      piStack_18 = (int *)0x393702d3;
      puStack_1c = (undefined1 *)0x3dcccccd;
      uStack_20 = 0x4dd013;
      (**(code **)(*param_1 + 0x308))();
      puStack_14 = (undefined1 *)param_1[0x25];
      uStack_20 = 0x4dd024;
      iVar8 = FUN_00a8e9b0();
      if (ABS((float)puStack_14 - *(float *)(iVar8 + 4)) < 0.5235988) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 4:
      fStack_28 = 9.52883e-44;
      if (param_1[0x186] == 0x10000013) {
        fStack_28 = 1.00893e-43;
      }
      puStack_14 = (undefined1 *)0xbf800000;
      piStack_18 = (int *)0x8000000;
      puStack_1c = (undefined1 *)0x3f800000;
      uStack_20 = 0x3e2aaaab;
      fStack_24 = 0.0;
      fStack_2c = 7.146144e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x387] = 1;
    case 5:
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x4dd0aa;
      FUN_00ac80a0();
      puStack_14 = (undefined1 *)0x4dd0b3;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004dd0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    return;
  case 0x10000014:
  case 0x10000015:
    if (param_1[0x187] == 0) {
      uStack_20 = 0x54;
      if (param_1[0x186] == 0x10000015) {
        uStack_20 = 0x55;
      }
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x3e2aaaab;
      puStack_1c = (undefined1 *)0x0;
      fStack_24 = 7.146457e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x004dd19b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x10000016:
  case 0x10000017:
  case 0x10000018:
  case 0x10000019:
    FUN_004e4b80();
    return;
  case 0x1000001a:
    FUN_004dd3e0();
    return;
  case 0x1000001b:
  case 0x1000001c:
  case 0x1000001d:
  case 0x1000001e:
    if (param_1[0x187] == 0) {
      uStack_20 = 0x66;
      if (param_1[0x186] == 0x1000001c) {
        uStack_20 = 0x67;
      }
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x3e2aaaab;
      puStack_1c = (undefined1 *)0x0;
      fStack_24 = 7.146726e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x004dd25b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x1000001f:
    if (param_1[0x187] == 0) {
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x3e2aaaab;
      puStack_1c = (undefined1 *)0x0;
      uStack_20 = 0x70;
      fStack_24 = 7.14692e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x004dd2e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x10000020:
    if (param_1[0x187] == 0) {
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x3e2aaaab;
      puStack_1c = (undefined1 *)0x0;
      uStack_20 = 0x71;
      fStack_24 = 7.147122e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x004dd376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x10000021:
    FUN_004e4cc0();
    return;
  case 0x10000024:
    *(undefined2 *)(param_1 + 0x209) = 4;
    param_1[0x20a] = 0x78;
    if (param_1[0x187] == 0) {
      puStack_14 = (undefined1 *)0x3f800000;
      piStack_18 = (int *)0x3e4ccccd;
      puStack_1c = (undefined1 *)0x0;
      uStack_20 = 0x95;
      fStack_24 = 7.191866e-39;
      FUN_00aa4080();
      puStack_14 = (undefined1 *)0x4e500f;
      FUN_00a96070();
      param_1[0x387] = 0;
      FUN_00a81330();
      FUN_00a9e0d0();
      iVar8 = FUN_004e1460();
      if (iVar8 != 0) {
        FUN_004e1460();
        FUN_00b4ae90();
      }
      FUN_004e1300();
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
    param_1[0x128] = 0;
                    /* WARNING: Could not recover jumptable at 0x004e508b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  case 0x10000025:
    iVar8 = param_1[0x187];
    if (iVar8 == 0) {
      iVar8 = FUN_004dd910();
      if (iVar8 != 0) {
        *(undefined2 *)(param_1 + 0x209) = 1;
        param_1[0x20a] = 0x78;
      }
      param_1[0x187] = param_1[0x187] + 1;
    }
    else if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      goto LAB_004e13f5;
    }
    puStack_14 = (undefined1 *)0xbf800000;
    piStack_18 = (int *)0x0;
    puStack_1c = (undefined1 *)0x3f800000;
    uStack_20 = 0x3e4ccccd;
    fStack_24 = 0.0;
    fStack_28 = 1.69557e-43;
    fStack_2c = 7.170284e-39;
    FUN_00aa4080();
    puStack_14 = (undefined1 *)0x0;
    piStack_18 = (int *)0x0;
    puStack_1c = (undefined1 *)0x4e13e3;
    FUN_00a96070();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x387] = 0;
LAB_004e13f5:
    puStack_14 = (undefined1 *)0x3f800000;
    piStack_18 = (int *)0x4e1406;
    FUN_00ac80a0();
    puStack_14 = &stack0xfffffff8;
    piStack_18 = param_1 + 0x10;
    if ((param_1[0x378] & 0x10000000U) == 0) {
      puStack_1c = (undefined1 *)0x4e1427;
      FUN_00ac81f0();
    }
    else {
      puStack_1c = &LAB_004e142e;
      FUN_00ac8270();
    }
    if (in_stack_fffffff8 != 0) {
      return;
    }
    param_1[0x378] = param_1[0x378] & 0xefffffff;
                    /* WARNING: Could not recover jumptable at 0x004e1451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x10000026:
  case 0x10000029:
    FUN_004e47f0();
    return;
  case 0x1000002a:
    FUN_004eb2e0();
    return;
  case 0x1000002b:
    FUN_004e5090();
    return;
  case 0x1000002c:
    FUN_004e54e0();
    return;
  }
  if (param_1[0x187] == 0) {
    puStack_14 = (undefined1 *)0x3f800000;
    piStack_18 = (int *)0x3e2aaaab;
    puStack_1c = (undefined1 *)0x0;
    uStack_20 = 9;
    fStack_24 = 7.185951e-39;
    FUN_00aa4080();
    param_1[0x248] = 0x43340000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x387] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_004e3fc4;
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  FUN_00ac80a0();
LAB_004e3fc4:
  iVar8 = FUN_004e1460();
  if (((iVar8 != 0) && (iVar8 = FUN_004e1460(), *(int *)(iVar8 + 0x814) == 4)) &&
     (param_1[0x2a1] != 0)) {
    FUN_00a8e880();
    puStack_14 = (undefined1 *)0x3d4ccccd;
    piStack_18 = (int *)0x4e4032;
    (**(code **)(*param_1 + 0x308))();
    fVar4 = (float)param_1[0x11] - *(float *)(param_1[0x2a1] + 0x44);
    if ((float)param_1[0x2a4] <= 225.0) {
      if (!NAN(fVar4) && 5.0 < fVar4 != (fVar4 == 5.0)) {
        piStack_18 = (int *)0x4e4069;
        FUN_004dd4c0();
        param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x385] * (float)param_1[0x244]);
        return;
      }
      if (4.0 <= fVar4) {
        if (0.0 < (float)param_1[0x385]) {
          param_1[0x385] = (int)((float)param_1[0x385] - (float)param_1[0x244] * 0.0005);
        }
        return;
      }
      piStack_18 = (int *)0x4e408f;
      FUN_004dd4c0();
      param_1[0x15] = (int)((float)param_1[0x385] * (float)param_1[0x244] + (float)param_1[0x15]);
      return;
    }
  }
  return;
LAB_004e2240:
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_004e22cc;
  }
  if (param_1[0x37a] == 0) {
    fStack_24 = 3.05483e-43;
LAB_004e22bf:
    puStack_14 = (undefined1 *)0x8000000;
    piStack_18 = (int *)0x3f800000;
    puStack_1c = (undefined1 *)0x3e4ccccd;
    uStack_20 = 0;
    fStack_28 = 7.17564e-39;
    FUN_00aa4080();
  }
  else if (param_1[0x37a] == 1) {
    fStack_24 = 3.06884e-43;
    goto LAB_004e22bf;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_004e22cc:
  puStack_14 = (undefined1 *)0x4e22dd;
  FUN_00ac80a0();
  iVar8 = FUN_00a94ce0();
  if (iVar8 != 0) {
    iVar8 = param_1[0x4d7];
    if (param_1[0x4d6] == 0) {
      if ((param_1[0x378] & 0x10000000U) == 0) {
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = iVar8;
        iVar8 = FUN_00a8cab0();
        param_1[0x374] = param_1[0x370];
        piStack_18 = (int *)0x10000;
      }
      else {
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = iVar8;
        iVar8 = FUN_00a8cab0();
        param_1[0x374] = param_1[0x370];
        piStack_18 = (int *)0x30002;
      }
      param_1[0x373] = iVar8;
    }
    else {
      param_1[0xd9] = param_1[0xd9] | 2;
      param_1[99] = iVar8;
      iVar8 = FUN_00a8cab0();
      param_1[0x373] = iVar8;
      param_1[0x374] = param_1[0x370];
      piStack_18 = (int *)0x1000b;
    }
    puStack_14 = (undefined1 *)0x0;
    puStack_1c = (undefined1 *)0x4e2392;
    FUN_00a8caf0();
    param_1[0x370] = 0;
    puStack_14 = (undefined1 *)0x4e23a1;
    FUN_00a962d0();
    param_1[0x377] = 0;
  }
  return;
LAB_004e8bc0:
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_004e8cd2;
  }
  switch(param_1[0x443]) {
  case 2:
    uStack_20 = 0xc9;
    break;
  default:
    goto switchD_004e8bf4_caseD_3;
  case 4:
    uStack_20 = 0xc6;
    break;
  case 8:
    uStack_20 = 199;
    break;
  case 0x10:
    uStack_20 = 200;
  }
  puStack_14 = (undefined1 *)0x3f800000;
  piStack_18 = (int *)0x3e4ccccd;
  puStack_1c = (undefined1 *)0x0;
  fStack_24 = 7.21365e-39;
  FUN_00aa4080();
switchD_004e8bf4_caseD_3:
  if (param_1[0x485] != 0) {
    param_1[0x248] = 0;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_004e8cd2:
  FUN_00ac80a0();
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880();
    puStack_14 = (undefined1 *)0x3f800000;
    piStack_18 = (int *)&LAB_004e8d26;
    (**(code **)(*param_1 + 0x308))();
  }
  puStack_14 = (undefined1 *)0x4e8d4d;
  FUN_004db970();
  iVar8 = FUN_00a94ce0();
  if (iVar8 != 0) {
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[0x485] = 0;
    param_1[99] = param_1[0x4d7];
    iVar8 = FUN_00a8cab0();
    param_1[0x374] = param_1[0x370];
    puStack_14 = (undefined1 *)0x10000;
    param_1[0x373] = iVar8;
    piStack_18 = (int *)0x4e8da2;
    FUN_00a8caf0();
    param_1[0x370] = 0;
    FUN_00a962d0();
    param_1[0x377] = 0;
  }
  if (((param_1[0x128] - 4U < 2) && (param_1[0x485] != 0)) &&
     (fVar4 = (float)param_1[0x248], param_1[0x248] = (int)(fVar4 - (float)param_1[0x244]),
     fVar4 - (float)param_1[0x244] <= 0.0)) {
    fVar10 = (float10)FUN_00dde300();
    param_1[0x248] = (int)(float)((fVar10 + (float10)0.05) * (float10)60.0);
    FUN_004e7b90();
    return;
  }
  return;
}

// 004EBE20  FUN_004ebe20  size=176  [callgraph]
void __fastcall FUN_004ebe20(undefined1 *param_1)

{
  int iVar1;
  undefined1 local_50 [52];
  float local_1c;
  
  if ((*(int *)(param_1 + 0x111c) != 0) && (*(int *)(param_1 + 0x1208) == 0)) {
    iVar1 = FUN_00a8cab0();
    if ((iVar1 == 0x40000) ||
       (((iVar1 = FUN_00a8cab0(), iVar1 == 0x40001 || (iVar1 = FUN_00a8cab0(), iVar1 == 0x30003)) ||
        (iVar1 = FUN_00a8cab0(), iVar1 == 0x30004)))) {
      FID_conflict__memcpy(local_50,param_1 + 0x10,0x40);
      local_1c = local_1c + 1.5;
      param_1 = &stack0xffffffa0;
    }
    Phantom::setTransform(param_1 + 0x10);
    hkpCdPointCollector::hkpCdPointCollector_10();
  }
  return;
}

// 004EBED0  Em0120::vf4C  size=177  [class]
void __fastcall Em0120::vf4C(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_20 [4];
  undefined4 local_1c;
  
  FUN_00a92fb0();
  fVar2 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar2;
  BehaviorEmBase::vf4C();
  if ((*(int *)(param_1 + 0x4a0) != 6) && (*(int *)(param_1 + 0x4a0) != 7)) {
    FUN_004ddf70();
    iVar1 = FUN_00907640(param_1 + 0x10ec,0,local_20);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1348) = local_1c;
    }
    FUN_004dc810();
    iVar1 = FUN_00ac4770();
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x4a0) == 1) {
        FUN_004e8e60();
      }
      else {
        FUN_004eb8a0();
      }
    }
    FUN_004eb8f0();
    FUN_004e10f0();
    FUN_004ebe20();
    return;
  }
  FUN_00596110();
  return;
}

// 00AADBB0  Em0120::Em0120  size=299  [class]
undefined4 * __fastcall Em0120::Em0120(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a7c930();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a603a0();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_009003e0();
  FUN_00a826e0();
  FUN_00a826e0();
  FUN_00a826e0();
  FUN_00a7c930();
  iVar1 = 1;
  do {
    FUN_00904d60();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AADCE0  Em0120::vf04  size=6  [class]
undefined * Em0120::vf04(void)

{
  return &DAT_01b34eb0;
}

// 00AADCF0  Em0120::vf20C  size=7  [class]
float10 Em0120::vf20C(void)

{
  return (float10)3.5;
}

// 00AADD00  Em0120::vf1DC  size=6  [class]
undefined4 Em0120::vf1DC(void)

{
  return 1;
}

// 00AADD10  FUN_00aadd10  size=226  [callgraph]
void FUN_00aadd10(void)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_00905ce0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  cXml::cXml_7();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB73A0  Em0120::vf00  size=30  [class]
undefined4 __thiscall Em0120::vf00(undefined4 param_1,byte param_2)

{
  FUN_00aadd10();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

