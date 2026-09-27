// src/enemy/emc120/Emc120.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 007DD9F0..00AB9F20, 125 functions

#include "mgrr.h"
#include "Emc120.h"

// 007DD9F0  Emc120::vf14C  size=5  [class]
undefined4 Emc120::vf14C(void)

{
  return 0;
}

// 007DDA00  Emc120::vf158  size=5  [class]
undefined4 Emc120::vf158(void)

{
  return 0;
}

// 007DDA10  Emc120::vf184  size=6  [class]
undefined4 Emc120::vf184(void)

{
  return 0xffffffff;
}

// 007DDA20  Emc120::vf188  size=43  [class]
void Emc120::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 007DDA50  Emc120::vf44  size=362  [class]
void __fastcall Emc120::vf44(int param_1)

{
  int iVar1;
  
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
  RayCastManager::getWork(param_1 + 0x11a8);
  RayCastManager::getWork(param_1 + 0x11ac);
  RayCastManager::getWork(param_1 + 0x11b0);
  RayCastManager::getWork(param_1 + 0x11b4);
  RayCastManager::getWork(param_1 + 0x11bc);
  RayCastManager::getWork(param_1 + 0x11c0);
  RayCastManager::getWork(param_1 + 0x11c4);
  RayCastManager::getWork(param_1 + 0x11c8);
  RayCastManager::getWork(param_1 + 0x11cc);
  if (*(int *)(param_1 + 0x12c4) != 0) {
    RayCastManager::getWork(param_1 + 0x11b8);
    RayCastManager::getWork(param_1 + 0x11d0);
  }
  RayCastManager::getWork(param_1 + 0x11d4);
  RayCastManager::getWork(param_1 + 0x11d8);
  FUN_00a92a00();
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(param_1);
  FUN_00900ca0();
  BehaviorEmBase::vf44();
  return;
}

// 007DDBC0  Emc120::vf54  size=5  [class]
void __fastcall Emc120::vf54(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  bVar2 = false;
  iVar3 = FUN_00ac8410();
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x25);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (((((float)param_1[0x218] != 0.0 || ((float)param_1[0x219] != 0.0)) ||
         ((float)param_1[0x21a] != 0.0)) && (iVar3 = FUN_00a12210(0xffffffff), iVar3 != 0)))) {
      iVar1 = *param_1;
      fStack_40 = (float)param_1[0x10] +
                  (((float)param_1[0x218] + *(float *)(iVar3 + 0x40)) - (float)param_1[0x10]);
      fStack_3c = ((*(float *)(iVar3 + 0x44) + (float)param_1[0x219]) - (float)param_1[0x11]) +
                  (float)param_1[0x11];
      fStack_38 = ((*(float *)(iVar3 + 0x48) + (float)param_1[0x21a]) - (float)param_1[0x12]) +
                  (float)param_1[0x12];
      fStack_34 = (((float)param_1[0x21b] + *(float *)(iVar3 + 0x4c)) - (float)param_1[0x13]) +
                  (float)param_1[0x13];
      uVar4 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&fStack_40,uVar4);
      bVar2 = true;
    }
    iVar3 = FUN_00a8c760(0x24);
    if (((iVar3 != 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) &&
       ((!bVar2 && ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0))))))
    {
      FUN_00a8ce90(&fStack_40,auStack_20);
      D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar3 + 0x10);
      fStack_40 = *(float *)(iVar3 + 0x40) + fStack_40;
      fStack_3c = *(float *)(iVar3 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar3 + 0x48) + fStack_38;
      fStack_30 = fStack_40 - (float)param_1[0x10];
      fStack_2c = fStack_3c - (float)param_1[0x11];
      fStack_28 = fStack_38 - (float)param_1[0x12];
      fStack_24 = fStack_34 - (float)param_1[0x13];
      FUN_00a12310(&fStack_30);
    }
  }
  Behavior::vf54();
  return;
}

// 007DDC70  FUN_007ddc70  size=20  [between]
void __fastcall FUN_007ddc70(int *param_1)

{
  if (3 < param_1[0x205]) {
                    /* WARNING: Could not recover jumptable at 0x007ddc81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 007DDC90  FUN_007ddc90  size=210  [between]
undefined4 __thiscall FUN_007ddc90(int *param_1,float param_2,float param_3)

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

// 007DDD70  FUN_007ddd70  size=512  [between]
undefined4 __thiscall FUN_007ddd70(int *param_1,float param_2,float param_3,float param_4)

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
  
  switch(param_1[0x504]) {
  case 0:
    param_1[0x505] = 0;
    if (param_2 < (float)param_1[0x11]) {
      param_1[0x504] = 1;
    }
    if ((float)param_1[0x11] < param_2) {
      param_1[0x504] = 3;
    }
    break;
  case 1:
    fVar1 = (float)param_1[0x505];
    param_1[0x505] = (int)(fVar1 - param_4);
    if (fVar1 - param_4 < -param_3) {
      param_1[0x505] = (int)-param_3;
    }
    local_50 = 0;
    local_4c = (float)param_1[0x244] * (float)param_1[0x505];
    local_48 = 0;
    (**(code **)(*param_1 + 0x70))(&local_50);
    if (fStack_58 < param_2) {
      param_1[0x504] = param_1[0x504] + 1;
    }
    else if (fStack_58 - (float)param_1[0x506] < 3.0) {
      param_1[0x504] = param_1[0x504] + 1;
    }
    break;
  case 2:
    fVar1 = (float)param_1[0x505];
    param_1[0x505] = (int)(param_4 + fVar1);
    if (0.0 < param_4 + fVar1) {
      param_1[0x505] = 0;
    }
    local_40 = 0;
    puVar2 = &local_40;
    local_3c = (float)param_1[0x244] * (float)param_1[0x505];
    local_38 = 0;
    goto LAB_007ddf40;
  case 3:
    fVar1 = (float)param_1[0x505];
    param_1[0x505] = (int)(param_4 + fVar1);
    if (param_3 < param_4 + fVar1) {
      param_1[0x505] = (int)param_3;
    }
    local_30 = 0;
    local_2c = (float)param_1[0x244] * (float)param_1[0x505];
    local_28 = 0;
    (**(code **)(*param_1 + 0x70))(&local_30);
    if (param_2 < (float)param_1[0x11]) {
      param_1[0x504] = param_1[0x504] + 1;
    }
    break;
  case 4:
    fVar1 = (float)param_1[0x505];
    param_1[0x505] = (int)(fVar1 - param_4);
    if (fVar1 - param_4 < 0.0) {
      param_1[0x505] = 0;
    }
    local_20 = 0;
    puVar2 = &local_20;
    local_1c = (float)param_1[0x244] * (float)param_1[0x505];
    local_18 = 0;
LAB_007ddf40:
    (**(code **)(*param_1 + 0x70))(puVar2);
  }
  if ((float)param_1[0x505] != 0.0) {
    return 0;
  }
  return 1;
}

// 007DDF90  FUN_007ddf90  size=120  [between]
undefined4 __thiscall FUN_007ddf90(int *param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined1 local_20 [4];
  float local_1c;
  
  iVar1 = FUN_00907640(param_1 + 0x46f,0,local_20);
  if (iVar1 != 0) {
    uVar2 = FUN_007ddc90(local_1c + param_2,param_3);
    return uVar2;
  }
  local_30 = 0;
  local_2c = -((float)param_1[0x244] * param_3);
  local_28 = 0;
  (**(code **)(*param_1 + 0x70))(&local_30);
  return 0;
}

// 007DE010  FUN_007de010  size=1092  [between]
undefined4 __thiscall FUN_007de010(int param_1,byte param_2,float param_3)

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
  if (((param_2 & 1) != 0) && (iVar2 = FUN_00907640(param_1 + 0x11bc,0,&local_50), iVar2 != 0)) {
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
    iVar2 = FUN_00907640(param_1 + 0x11a8,local_54,&local_50);
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
    iVar2 = FUN_00907640(param_1 + 0x11c0,0,&local_50);
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
    iVar2 = FUN_00907640(param_1 + 0x11ac,0,&local_50);
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
    iVar2 = FUN_00907640(param_1 + 0x11c4,0,&local_50);
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
    iVar2 = FUN_00907640(param_1 + 0x11b0,0,&local_50);
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
    iVar2 = FUN_00907640(param_1 + 0x11c8,0,&local_50);
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
    iVar2 = FUN_00907640(param_1 + 0x11b4,0,&local_50);
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
    iVar2 = FUN_00907640(param_1 + 0x11cc,0,&local_50);
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

// 007DE460  FUN_007de460  size=1300  [between]
undefined4 __thiscall FUN_007de460(int param_1,byte param_2,float *param_3)

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
    iVar2 = FUN_00907640(param_1 + 0x11bc,0,&local_30);
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
    iVar2 = FUN_00907640(param_1 + 0x11a8,0,&local_30);
    if (iVar2 != 0) {
      local_38 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                      (local_2c - local_1c) * (local_2c - local_1c) +
                      (local_30 - local_20) * (local_30 - local_20));
    }
    iVar3 = FUN_00907640(param_1 + 0x11c0,0,&local_30);
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
    iVar2 = FUN_00907640(param_1 + 0x11ac,0,&local_30);
    if (iVar2 != 0) {
      local_38 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                      (local_2c - local_1c) * (local_2c - local_1c) +
                      (local_30 - local_20) * (local_30 - local_20));
    }
    iVar3 = FUN_00907640(param_1 + 0x11c4,0,&local_30);
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
    iVar2 = FUN_00907640(param_1 + 0x11b0,0,&local_30);
    if (iVar2 != 0) {
      local_38 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                      (local_2c - local_1c) * (local_2c - local_1c) +
                      (local_30 - local_20) * (local_30 - local_20));
    }
    iVar3 = FUN_00907640(param_1 + 0x11c8,0,&local_30);
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
    iVar2 = FUN_00907640(param_1 + 0x11b4,0,&local_30);
    if (iVar2 != 0) {
      local_38 = SQRT((local_28 - local_18) * (local_28 - local_18) +
                      (local_2c - local_1c) * (local_2c - local_1c) +
                      (local_30 - local_20) * (local_30 - local_20));
    }
    iVar3 = FUN_00907640(param_1 + 0x11cc,0,&local_30);
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

// 007DE980  FUN_007de980  size=159  [between]
void __thiscall FUN_007de980(int *param_1,undefined4 param_2,float param_3,float param_4)

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

// 007DEA20  FUN_007dea20  size=202  [between]
void __thiscall FUN_007dea20(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00a84720();
  switchD_0080dbae::default();
  if (*(float *)(param_1 + 0x1510) < 45.0) {
    *(float *)(param_1 + 0x1510) = *(float *)(param_1 + 0x910) * 5.0 + *(float *)(param_1 + 0x1510);
  }
  if (45.0 < *(float *)(param_1 + 0x1510) != (*(float *)(param_1 + 0x1510) == 45.0)) {
    *(undefined4 *)(param_1 + 0x1510) = 0x42340000;
  }
  iVar1 = FUN_00a82a20();
  fVar2 = (float10)FUN_00ddba30(-*(float *)(param_1 + 0x1510) * 0.017453292 +
                                *(float *)(iVar1 + 0x90));
  iVar1 = FUN_00a82a20();
  *(float *)(iVar1 + 0x90) = (float)fVar2;
  FUN_00a84780(param_2,1,0,0,0,0x3f800000);
  switchD_0080dbae::default();
  return;
}

// 007DEB70  FUN_007deb70  size=36  [between]
void __fastcall FUN_007deb70(int param_1)

{
  undefined1 local_20 [28];
  
  FUN_00907640(param_1 + 0x11d4,0,local_20);
  return;
}

// 007DEBA0  FUN_007deba0  size=36  [between]
void __fastcall FUN_007deba0(int param_1)

{
  undefined1 local_20 [28];
  
  FUN_00907640(param_1 + 0x11d8,0,local_20);
  return;
}

// 007DEBD0  FUN_007debd0  size=55  [between]
void __fastcall FUN_007debd0(int param_1)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined4 local_1c;
  
  iVar1 = FUN_00907640(param_1 + 0x11bc,0,local_20);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1418) = local_1c;
  }
  return;
}

// 007DEC10  FUN_007dec10  size=269  [between]
void __fastcall FUN_007dec10(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if ((0.0 < *(float *)(param_1 + 0x12e8)) || (*(float *)(param_1 + 0x1414) != 0.0)) {
    return;
  }
  if (*(int *)(param_1 + 0xa84) == 0) {
LAB_007dec87:
    fVar2 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x123c),
                                  *(undefined4 *)(param_1 + 0x1240));
    fVar2 = fVar2 + (float10)*(float *)(param_1 + 0x1418);
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44);
    fVar2 = (float10)fVar1;
    if (fVar2 <= (float10)2.0 + (float10)*(float *)(param_1 + 0x44)) {
      if ((float10)*(float *)(param_1 + 0x44) - (float10)4.0 <= fVar2) {
        fVar2 = (float10)FUN_00dde300(*(undefined4 *)(param_1 + 0x123c),
                                      *(undefined4 *)(param_1 + 0x1240));
        fVar2 = fVar2 + (float10)fVar1;
        goto LAB_007decad;
      }
      if (fVar2 < (float10)*(float *)(param_1 + 0x1418) !=
          (fVar2 == (float10)*(float *)(param_1 + 0x1418))) goto LAB_007dec87;
    }
    fVar2 = fVar2 + (float10)*(float *)(param_1 + 0x123c);
  }
LAB_007decad:
  *(float *)(param_1 + 0x12ec) = (float)fVar2;
  fVar2 = (float10)FUN_00dde300(*(float *)(param_1 + 0x1244) * 60.0,
                                *(float *)(param_1 + 0x1248) * 60.0);
  *(float *)(param_1 + 0x12e8) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x1410) = 0;
  return;
}

// 007DED60  FUN_007ded60  size=130  [between]
void __fastcall FUN_007ded60(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(10,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
  param_1[0x3bb] = 0;
                    /* WARNING: Could not recover jumptable at 0x007dede0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 007DEE90  FUN_007dee90  size=233  [between]
void __fastcall FUN_007dee90(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x51,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3bb] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_007def1e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_007def1e:
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
  }
  return;
}

// 007DEF90  FUN_007def90  size=201  [between]
void __fastcall FUN_007def90(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_007defa4_caseD_1;
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
  *(undefined4 *)(param_1 + 0xeec) = 0;
switchD_007defa4_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 007DF090  FUN_007df090  size=506  [between]
void __fastcall FUN_007df090(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    uVar1 = 0x3a;
    if (param_1[0x186] == 0x10000011) {
      uVar1 = 0x3d;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3bb] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    uVar1 = 0x3a;
    if (param_1[0x186] == 0x10000011) {
      uVar1 = 0x3e;
    }
    FUN_00aa4080(uVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
    fVar3 = (float)param_1[0x25];
    iVar2 = FUN_00a8e9b0();
    if (ABS(fVar3 - *(float *)(iVar2 + 4)) < 0.5235988) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    uVar1 = 0x3b;
    if (param_1[0x186] == 0x10000011) {
      uVar1 = 0x3f;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3bb] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007df285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 007DF2D0  FUN_007df2d0  size=508  [between]
void __fastcall FUN_007df2d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  switch(param_1[0x187]) {
  case 0:
    uVar1 = 0x42;
    if (param_1[0x186] == 0x10000013) {
      uVar1 = 0x46;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3bb] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    uVar1 = 0x43;
    if (param_1[0x186] == 0x10000013) {
      uVar1 = 0x47;
    }
    FUN_00aa4080(uVar1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
    fVar3 = (float)param_1[0x25];
    iVar2 = FUN_00a8e9b0();
    if (ABS(fVar3 - *(float *)(iVar2 + 4)) < 0.5235988) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    uVar1 = 0x44;
    if (param_1[0x186] == 0x10000013) {
      uVar1 = 0x48;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3bb] = 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007df4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 007DF510  FUN_007df510  size=141  [between]
void __fastcall FUN_007df510(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x54;
    if (param_1[0x186] == 0x10000015) {
      uVar1 = 0x55;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x007df59b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007DF5D0  FUN_007df5d0  size=141  [between]
void __fastcall FUN_007df5d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x66;
    if (param_1[0x186] == 0x1000001c) {
      uVar1 = 0x67;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x007df65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007DF670  FUN_007df670  size=120  [between]
void __fastcall FUN_007df670(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x70,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x007df6e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007DF700  FUN_007df700  size=120  [between]
void __fastcall FUN_007df700(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x71,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x007df776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007DF7E0  FUN_007df7e0  size=223  [between]
void __fastcall FUN_007df7e0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return;
    }
    goto LAB_007df88e;
  }
  sVar1 = FUN_00dde2a0(0,1);
  (**(code **)(*param_1 + 0x220))(0x41200000);
  if (sVar1 == 0) {
    uVar3 = 99;
LAB_007df880:
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  else if (sVar1 == 1) {
    uVar3 = 100;
    goto LAB_007df880;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_007df88e:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007df8bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007DF8C0  FUN_007df8c0  size=44  [between]
void __fastcall FUN_007df8c0(int param_1)

{
  if (*(float *)(param_1 + 0xee4) <= 0.02) {
    *(float *)(param_1 + 0xee4) = *(float *)(param_1 + 0x910) * 0.0005 + *(float *)(param_1 + 0xee4)
    ;
  }
  return;
}

// 007DF8F0  FUN_007df8f0  size=40  [between]
void __fastcall FUN_007df8f0(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0xee4)) {
    *(float *)(param_1 + 0xee4) = *(float *)(param_1 + 0xee4) - *(float *)(param_1 + 0x910) * 0.0005
    ;
  }
  return;
}

// 007DF980  FUN_007df980  size=135  [between]
void __fastcall FUN_007df980(int *param_1)

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
  param_1[0x4b9] = 0;
                    /* WARNING: Could not recover jumptable at 0x007dfa05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 007DFA30  FUN_007dfa30  size=129  [between]
void __fastcall FUN_007dfa30(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x007dfaaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007DFAC0  Emc120::vf1A4  size=55  [class]
void __thiscall Emc120::vf1A4(int param_1,int *param_2,byte param_3)

{
  if (((param_3 & 4) != 0) && (*param_2 == 0x13d)) {
    *(uint *)(param_1 + 0xeb0) = *(uint *)(param_1 + 0xeb0) | 0x20000000;
  }
  if (((param_3 & 1) != 0) && (*param_2 == 0x13d)) {
    *(uint *)(param_1 + 0xeb0) = *(uint *)(param_1 + 0xeb0) | 0x40000000;
  }
  return;
}

// 007DFB70  FUN_007dfb70  size=149  [between]
void __thiscall
FUN_007dfb70(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
  if ((param_2 & 0xffff0000) != 0x40000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar1;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
  }
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  *(int *)(param_1 + 0xe90) = param_3;
  if (param_3 < 0) {
    FUN_00a962d0(1,0);
    *(undefined4 *)(param_1 + 0xeac) = 0x40;
    return;
  }
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xeac) = 0;
  return;
}

// 007DFD10  FUN_007dfd10  size=67  [between]
undefined4 __fastcall FUN_007dfd10(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0xeb0) & 0x10000000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    return local_8;
  }
  FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  return local_8;
}

// 007DFD60  Emc120::vf208  size=36  [class]
void __thiscall Emc120::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 1.5;
  return;
}

// 007DFD90  Emc120::vf6C  size=5  [class]
void __fastcall Emc120::vf6C(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7ce90();
    return;
  }
  return;
}

// 007DFDA0  Emc120::thunk_vf70  size=5  [class]
void __fastcall Emc120::thunk_vf70(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7cec0();
    return;
  }
  return;
}

// 007DFDD0  FUN_007dfdd0  size=260  [between]
bool FUN_007dfdd0(void)

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
                              if (iVar1 != 0x1000002a) {
                                iVar1 = FUN_00a8cab0();
                                return iVar1 != 0x1000002b;
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
  }
  return false;
}

// 007DFF20  FUN_007dff20  size=193  [between]
void __fastcall FUN_007dff20(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xe4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  (**(code **)(*param_1 + 0x220))(0);
  return;
}

// 007E0010  FUN_007e0010  size=102  [between]
void __fastcall FUN_007e0010(int param_1)

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

// 007E0090  Emc120::thunk_vf1C0  size=5  [class]
void __thiscall Emc120::thunk_vf1C0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  BehaviorEmBase::vf1C0(param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x4b0);
  if (uVar1 < 0x2c011) {
    if (uVar1 == 0x2c010) goto switchD_00a9b148_caseD_2c050;
    if (uVar1 < 0x28141) {
      if (uVar1 != 0x28140) {
        switch(uVar1) {
        case 0x28010:
        case 0x28050:
          break;
        default:
          goto switchD_00a9af52_caseD_28011;
        case 0x28030:
        case 0x28033:
        case 0x28035:
          if (*(int *)(param_1 + 0x4f0) != 0) {
            FUN_00a7c890();
          }
          FUN_00e26e90();
          uVar5 = 0x20030;
          uVar4 = 0x2803f;
          goto LAB_00a9b2ce;
        case 0x28040:
          goto switchD_00a9af52_caseD_28040;
        case 0x28070:
        case 0x28071:
          goto switchD_00a9af52_caseD_28070;
        case 0x28080:
        case 0x28081:
          goto switchD_00a9af52_caseD_28080;
        }
      }
switchD_00a9af52_caseD_28010:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x28012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2814f,0x20010);
    }
    else {
      switch(uVar1) {
      case 0x28142:
      case 0x28144:
      case 0x28160:
        goto switchD_00a9af52_caseD_28010;
      case 0x28150:
      case 0x28152:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        FUN_00e272b0(0x28012,0x20010);
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e27330(0x2815f,0x20010);
        break;
      case 0x28170:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        uVar4 = 0x28012;
        goto LAB_00a9b26a;
      case 0x28220:
        goto switchD_00a9b04c_caseD_28220;
      }
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (0x2c140 < uVar1) {
    switch(uVar1) {
    case 0x2c142:
    case 0x2c144:
    case 0x2c160:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c150:
    case 0x2c152:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x2c012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2c15f,0x20010);
      break;
    case 0x2c170:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar4 = 0x2c012;
LAB_00a9b26a:
      FUN_00e272b0(uVar4,0x20010);
      uVar4 = *(undefined4 *)(param_1 + 0x4b0);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e27330(uVar4,0x20010);
      }
      else {
        FUN_00a7c890();
        FUN_00e27330(uVar4,0x20010);
      }
      break;
    case 0x2c220:
switchD_00a9b04c_caseD_28220:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20220;
      goto LAB_00a9b2ce;
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (uVar1 == 0x2c140) {
switchD_00a9b148_caseD_2c050:
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e26e90();
    FUN_00e272b0(0x2c012,0x20010);
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e27330(0x2c14f,0x20010);
  }
  else {
    switch(uVar1) {
    case 0x2c030:
    case 0x2c033:
    case 0x2c035:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20030;
      uVar4 = 0x2c03f;
      break;
    default:
      goto switchD_00a9af52_caseD_28011;
    case 0x2c040:
switchD_00a9af52_caseD_28040:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      break;
    case 0x2c050:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c071:
switchD_00a9af52_caseD_28070:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      break;
    case 0x2c081:
switchD_00a9af52_caseD_28080:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
    }
LAB_00a9b2ce:
    FUN_00e272b0(uVar4,uVar5);
  }
switchD_00a9af52_caseD_28011:
  if (param_2 != (int *)0x0) {
    puVar6 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar6);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00acdea0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9c3c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c3c);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xdc0) = piVar3[0x370];
      }
    }
  }
  return;
}

// 007E00D0  Emc120::vf150  size=364  [class]
void __thiscall Emc120::vf150(int param_1,int param_2,int param_3)

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
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar1;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    uVar1 = 0x80008;
    goto LAB_007e021a;
  }
  if (param_2 == 0x6a) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar2 = FUN_00a8cab0();
    uVar1 = 0x8000c;
LAB_007e0208:
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
  }
  else {
    if (param_2 != 0x6c) {
      if (param_2 == 0x6d) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
        uVar1 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xe9c) = uVar1;
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        uVar1 = 0x8000b;
        goto LAB_007e021a;
      }
      if (param_2 != 0x6b) {
        return;
      }
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
      uVar2 = FUN_00a8cab0();
      uVar1 = 0x8000d;
      goto LAB_007e0208;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    uVar1 = 0x8000a;
  }
  *(undefined4 *)(param_1 + 0xe9c) = uVar2;
LAB_007e021a:
  FUN_00a8caf0(uVar1,0,0,0);
  *(undefined4 *)(param_1 + 0xe90) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xeac) = 0;
  return;
}

// 007E0240  FUN_007e0240  size=246  [between]
void __fastcall FUN_007e0240(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((param_1[0x12a] & 0x2000U) == 0) {
    puVar3 = &DAT_01be9c78;
    (**(code **)(*param_1 + 4))(&DAT_01be9c78);
    iVar1 = FUN_00dd6d80(puVar3);
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
      uVar2 = FUN_0093c1f0((int)*(char *)((int)param_1 + 0xbab),param_1[0x13c],4,0,&uStack_20,
                           &uStack_30,0x41200000,0x3f000000,0xbf800000);
      FUN_00c52770(uVar2,0x40b00000);
    }
  }
  return;
}

// 007E0340  FUN_007e0340  size=1156  [between]
void __fastcall FUN_007e0340(int param_1)

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
    if (*(float *)(param_1 + 0x11a0) < 30.0) {
      *(float *)(param_1 + 0x11a0) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x11a0);
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
    switch(*(undefined4 *)(param_1 + 0x11a4)) {
    case 0:
      local_a0 = 0.0;
      local_9c = -20.0;
      local_98 = 0.0;
      FUN_0090fa30(param_1 + 0x11bc,0,&local_90,0x3f800000,&local_a0,uVar3,"Slider Ground Down");
      *(int *)(param_1 + 0x11a4) = *(int *)(param_1 + 0x11a4) + 1;
      return;
    case 1:
      local_a0 = 0.0;
      local_9c = 0.0;
      local_98 = 20.0;
      FUN_00ddc1d0(local_60,param_1 + 0x90,5);
      D3DXVec3TransformNormal(&local_a0,&local_a0,local_60);
      FUN_0090f870(param_1 + 0x11a8,0,&local_9c,param_1 + 0x90,param_1 + 0x13f0,&stack0xffffff54,
                   uVar2,"Slider CharCol Front");
      pcVar5 = "Slider Ground Front";
      pfVar4 = &local_9c;
      iVar1 = param_1 + 0x11c0;
      break;
    case 2:
      local_a0 = 0.0;
      local_9c = 0.0;
      local_98 = -20.0;
      FUN_00ddc1d0(local_60,param_1 + 0x90,5);
      D3DXVec3TransformNormal(&local_a0,&local_a0,local_60);
      FUN_0090f870(param_1 + 0x11ac,0,&local_9c,param_1 + 0x90,param_1 + 0x13f0,&stack0xffffff54,
                   uVar2,"Slider CharCol Back");
      pcVar5 = "Slider Ground Back";
      pfVar4 = &local_9c;
      iVar1 = param_1 + 0x11c4;
      break;
    case 3:
      local_a0 = -22.0;
      local_9c = 0.0;
      local_98 = 0.0;
      FUN_00ddc1d0(local_60,param_1 + 0x90,5);
      D3DXVec3TransformNormal(&local_a0,&local_a0,local_60);
      FUN_0090f870(param_1 + 0x11b0,0,&local_8c,param_1 + 0x90,param_1 + 0x13f0,&stack0xffffff54,
                   uVar2,"Slider CharCol Right");
      pcVar5 = "Slider Ground Right";
      pfVar4 = &local_8c;
      iVar1 = param_1 + 0x11c8;
      break;
    case 4:
      local_a0 = 22.0;
      local_9c = 0.0;
      local_98 = 0.0;
      FUN_00ddc1d0(local_60,param_1 + 0x90,5);
      D3DXVec3TransformNormal(&local_a0,&local_a0,local_60);
      FUN_0090f870(param_1 + 0x11b4,0,&local_7c,param_1 + 0x90,param_1 + 0x13f0,&stack0xffffff54,
                   uVar2,"Slider CharCol Left");
      pcVar5 = "Slider Ground Left";
      pfVar4 = &local_7c;
      iVar1 = param_1 + 0x11cc;
      break;
    case 5:
      if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
        pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(local_20);
        fStack_a4 = *pfVar4 - fStack_94;
        local_a0 = pfVar4[1] - local_90;
        local_9c = pfVar4[2] - local_8c;
        local_98 = pfVar4[3] - local_88;
        FUN_0090f870(param_1 + 0x11d4,0,&fStack_94,param_1 + 0x90,param_1 + 0x13d0,&fStack_a4,uVar3,
                     "Slider CharCol ToPl");
        FUN_0090f870(param_1 + 0x11d8,0,&fStack_94,param_1 + 0x90,param_1 + 0x13e0,&fStack_a4,uVar3,
                     "Slider CharCol ToPl");
      }
      *(undefined4 *)(param_1 + 0x11a4) = 0;
      *(undefined4 *)(param_1 + 0x11a0) = 0;
    default:
      return;
    }
    FUN_0090f870(iVar1,0,pfVar4,param_1 + 0x90,param_1 + 0x13f0,&stack0xffffff54,uVar3,pcVar5);
    *(int *)(param_1 + 0x11a4) = *(int *)(param_1 + 0x11a4) + 1;
    return;
  }
  return;
}

// 007E07E0  FUN_007e07e0  size=607  [between]
void __fastcall FUN_007e07e0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (param_1[0x128] - 4U < 2) {
    if (iVar2 == 0) {
      FUN_00aa4120(0x88,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42f00000;
    }
    else if (iVar2 != 1) goto LAB_007e0a1c;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_007ddd70(param_1[0x4bb],param_1[0x493],param_1[0x494]);
    if (param_1[0x2a1] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    pfVar1 = (float *)(param_1 + 0x4ac);
    if (SQRT((float)param_1[0x4ae] * (float)param_1[0x4ae] +
             *pfVar1 * *pfVar1 + (float)param_1[0x4ad] * (float)param_1[0x4ad]) <= 0.001) {
      *pfVar1 = 0.0;
      param_1[0x4ad] = 0;
      param_1[0x4ae] = 0;
      param_1[0x4af] = 0;
      (**(code **)(*param_1 + 0x70))(pfVar1);
    }
    else {
      *pfVar1 = *pfVar1 * 0.5;
      param_1[0x4ad] = (int)((float)param_1[0x4ad] * 0.5);
      param_1[0x4ae] = (int)((float)param_1[0x4ae] * 0.5);
      param_1[0x4af] = (int)((float)param_1[0x4af] * 0.5);
      (**(code **)(*param_1 + 0x70))(pfVar1);
    }
  }
  else {
    if (iVar2 == 0) {
      FUN_00aa4120(0x88,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42f00000;
    }
    else if (iVar2 != 1) goto LAB_007e0a1c;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_007ddd70(param_1[0x4bb],param_1[0x493],param_1[0x494]);
    if (param_1[0x2a1] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
  }
LAB_007e0a1c:
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 007E0A40  FUN_007e0a40  size=1928  [between]
void __fastcall FUN_007e0a40(int *param_1)

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
  
  switch(param_1[0x477]) {
  case 2:
    pfVar2 = (float *)FUN_00a925a0(&local_30);
    goto LAB_007e0b0e;
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
LAB_007e0b0e:
    local_60 = *pfVar2;
    local_5c = pfVar2[1];
    local_58 = pfVar2[2];
    local_54 = pfVar2[3];
  }
  switch(param_1[0x187]) {
  case 0:
    switch(param_1[0x477]) {
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
    switch(param_1[0x477]) {
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
    goto LAB_007e0e6b;
  case 3:
LAB_007e0e6b:
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
    switch(param_1[0x477]) {
    case 2:
      uVar5 = 2;
      break;
    default:
      goto switchD_007e0f0c_caseD_3;
    case 4:
      uVar5 = 4;
      break;
    case 8:
      uVar5 = 8;
      break;
    case 0x10:
      uVar5 = 0x10;
    }
    iVar3 = FUN_007de010(uVar5,0x40000000);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
switchD_007e0f0c_caseD_3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_007e0b47_default;
  case 4:
    switch(param_1[0x477]) {
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
    goto LAB_007e10a0;
  case 5:
LAB_007e10a0:
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
      if (param_1[0x477] == 4) {
        param_1[0x507] = 1;
      }
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_007e0b47_default;
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
    fVar4 = (float10)FUN_00dde300((float)param_1[0x495] * 60.0,(float)param_1[0x496] * 60.0);
    param_1[0x248] = (int)(float)fVar4;
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_007e0b47_default:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  FUN_007ddd70(param_1[0x4bb],param_1[0x493],param_1[0x494]);
  return;
}

// 007E12A0  FUN_007e12a0  size=957  [between]
void __fastcall FUN_007e12a0(int *param_1)

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
      fVar4 = (float10)FUN_00dde300((float)param_1[0x495] * 60.0,(float)param_1[0x496] * 60.0);
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
    iVar3 = FUN_007de010(2,0x40000000);
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
  FUN_007ddd70(param_1[0x4bb],param_1[0x493],param_1[0x494]);
  return;
}

// 007E1680  FUN_007e1680  size=975  [between]
void __fastcall FUN_007e1680(int *param_1)

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
      fVar4 = (float10)FUN_00dde300((float)param_1[0x495] * 60.0,(float)param_1[0x496] * 60.0);
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
    iVar3 = FUN_007de010(2,0x40000000);
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
  FUN_007ddd70(param_1[0x4bb],param_1[0x493],param_1[0x494]);
  return;
}

// 007E1A70  FUN_007e1a70  size=957  [between]
void __fastcall FUN_007e1a70(int *param_1)

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
      fVar4 = (float10)FUN_00dde300((float)param_1[0x495] * 60.0,(float)param_1[0x496] * 60.0);
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
    iVar3 = FUN_007de010(2,0x40000000);
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
  FUN_007ddd70(param_1[0x4bb],param_1[0x493],param_1[0x494]);
  return;
}

// 007E1E60  FUN_007e1e60  size=983  [between]
void __fastcall FUN_007e1e60(int *param_1)

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
      fVar4 = (float10)FUN_00dde300((float)param_1[0x495] * 60.0,(float)param_1[0x496] * 60.0);
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
    iVar3 = FUN_007de010(2,0x40000000);
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
  FUN_007ddd70(param_1[0x4bb],param_1[0x493],param_1[0x494]);
  return;
}

// 007E2250  FUN_007e2250  size=1883  [between]
void __fastcall FUN_007e2250(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
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
  undefined1 auStack_20 [28];
  
  local_60 = (float)param_1[0x10];
  local_5c = (float)param_1[0x11];
  local_58 = (float)param_1[0x12];
  local_54 = (float)param_1[0x13];
  if (param_1[0x187] == 0) {
    if (param_1[0x128] == 4) {
      FUN_00aa4120(0x88,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x4b1] = 1;
    if (param_1[0x484] == 0) {
      param_1[0x480] = (int)(local_60 + (float)param_1[0x480]);
      param_1[0x481] = (int)(local_5c + (float)param_1[0x481]);
      param_1[0x482] = (int)((float)param_1[0x482] + local_58);
      param_1[0x483] = (int)((float)param_1[0x483] + local_54);
    }
    fVar2 = (float)param_1[0x480] - local_60;
    fVar3 = (float)param_1[0x481] - local_5c;
    fVar5 = (float)param_1[0x482] - local_58;
    if (param_1[0x488] == 0) {
      fVar2 = SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar3 * fVar3) + 5.0;
    }
    else {
      fVar2 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) * 0.5;
    }
    param_1[0x248] = (int)fVar2;
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
  fVar2 = SQRT(((float)param_1[0x480] - local_60) * ((float)param_1[0x480] - local_60) +
               ((float)param_1[0x481] - local_5c) * ((float)param_1[0x481] - local_5c) +
               ((float)param_1[0x482] - local_58) * ((float)param_1[0x482] - local_58));
  if (fVar2 < (float)param_1[0x485] != (fVar2 == (float)param_1[0x485])) {
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (param_1[0x488] == 0) {
    if ((float)param_1[0x248] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  else if ((fVar2 < (float)param_1[0x24a] != (fVar2 == (float)param_1[0x24a])) &&
          (0.0 < (float)param_1[0x486])) {
    param_1[0x486] = (int)((float)param_1[0x486] * -1.0);
  }
  fStack_50 = (float)param_1[0x480] - local_60;
  fStack_4c = (float)param_1[0x481] - local_5c;
  fStack_48 = (float)param_1[0x482] - local_58;
  fStack_44 = (float)param_1[0x483] - local_54;
  if (((fStack_50 != 0.0) || (fStack_4c != 0.0)) || (fStack_48 != 0.0)) {
    fVar2 = fStack_48 * fStack_48 + fStack_4c * fStack_4c + fStack_50 * fStack_50;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_50,&fStack_50);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_50 = 0.0;
      fStack_4c = 1.0;
      fStack_48 = 0.0;
    }
  }
  fVar2 = (float)param_1[0x486];
  pfVar1 = (float *)(param_1 + 0x4ac);
  fVar3 = (float)param_1[0x244];
  *pfVar1 = *pfVar1 + fStack_50 * fVar2 * fVar3;
  param_1[0x4ad] = (int)(fStack_4c * fVar2 * fVar3 + (float)param_1[0x4ad]);
  param_1[0x4ae] = (int)(fStack_48 * fVar2 * fVar3 + (float)param_1[0x4ae]);
  param_1[0x4af] = (int)(fVar3 * fVar2 * fStack_44 + (float)param_1[0x4af]);
  fVar2 = SQRT((float)param_1[0x4ae] * (float)param_1[0x4ae] +
               *pfVar1 * *pfVar1 + (float)param_1[0x4ad] * (float)param_1[0x4ad]);
  if ((float)param_1[0x487] < fVar2) {
    fStack_70 = *pfVar1;
    fStack_6c = (float)param_1[0x4ad];
    fStack_68 = (float)param_1[0x4ae];
    fStack_64 = (float)param_1[0x4af];
    if (((fStack_70 != 0.0) || (fStack_6c != 0.0)) ||
       (fVar3 = fStack_68, fVar5 = fStack_6c, fVar6 = fStack_70, fStack_68 != 0.0)) {
      fVar3 = fStack_68 * fStack_68 + fStack_6c * fStack_6c + fStack_70 * fStack_70;
      if (fVar3 < 0.0 == (fVar3 == 0.0)) {
        FUN_00ddf460(&fStack_70,&fStack_70);
        fVar3 = fStack_68;
        fVar5 = fStack_6c;
        fVar6 = fStack_70;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar3 = 0.0;
        fVar5 = 1.0;
        fVar6 = 0.0;
      }
    }
    fVar4 = (float)param_1[0x487];
    *pfVar1 = fVar6 * fVar4;
    param_1[0x4ad] = (int)(fVar5 * fVar4);
    param_1[0x4ae] = (int)(fVar3 * fVar4);
    param_1[0x4af] = (int)(fVar4 * fStack_64);
  }
  if ((fVar2 < (float)param_1[0x487]) && (0.0 < (float)param_1[0x486])) {
    param_1[0x24a] = (int)((float)param_1[0x24a] + fVar2);
  }
  if ((float)param_1[0x4b0] < 0.0) {
    param_1[0x4b0] = 0;
  }
  param_1[0x248] =
       (int)((float)param_1[0x248] -
            SQRT((float)param_1[0x4ad] * (float)param_1[0x4ad] + *pfVar1 * *pfVar1 +
                 (float)param_1[0x4ae] * (float)param_1[0x4ae]));
  fVar2 = (float)param_1[0x249] - (float)param_1[0x244];
  param_1[0x249] = (int)fVar2;
  if (fVar2 < 0.0 != (fVar2 == 0.0)) {
    iVar7 = FUN_009f8b40();
    iVar8 = FUN_009f8b40();
    fStack_70 = *pfVar1;
    fStack_6c = (float)param_1[0x4ad];
    fStack_68 = (float)param_1[0x4ae];
    fStack_64 = (float)param_1[0x4af];
    if (((fStack_70 != 0.0) || (fStack_6c != 0.0)) || (fStack_68 != 0.0)) {
      fVar2 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
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
    FUN_0090fa30(param_1 + 0x46e,0,&local_60,0x3f800000,&fStack_40,iVar7 << 0x10 | 10,
                 "Slider CharCol Next");
    fStack_30 = fStack_70 * 5.0;
    fStack_2c = fStack_6c * 5.0;
    fStack_28 = fStack_68 * 5.0;
    fStack_24 = fStack_64 * 5.0;
    FUN_0090fa30(param_1 + 0x474,0,&local_60,0x3f800000,&fStack_30,iVar8 << 0x10 | 0x1e,
                 "Slider Ground Next");
    param_1[0x249] = 0x41f00000;
  }
  iVar7 = FUN_00907640(param_1 + 0x46e,0,auStack_20);
  if ((iVar7 == 0) && (iVar7 = FUN_00907640(param_1 + 0x474,0,auStack_20), iVar7 == 0)) {
    (**(code **)(*param_1 + 0x70))(pfVar1);
    return;
  }
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007E29B0  FUN_007e29b0  size=474  [between]
void __fastcall FUN_007e29b0(int *param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    if (param_1[0x128] == 4) {
      FUN_00aa4120(0x88,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    fVar2 = (float10)FUN_00dde300(0x3f800000,0x40000000);
    param_1[0x248] = (int)(float)(fVar2 * (float10)60.0);
    fVar2 = (float10)FUN_00dde300(0,0x40490fdb);
    param_1[0x249] = (int)(float)fVar2;
    fVar2 = (float10)FUN_00dde300(0,0x40490fdb);
    param_1[0x24a] = (int)(float)fVar2;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24b] = 0x3f060a92;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = (float10)FUN_00dde300(0x3e4ccccd,0x3f800000);
  fVar3 = (float10)FUN_00dde300(0x3e4ccccd,0x3f800000);
  fVar4 = (float10)fcos((float10)(float)param_1[0x249]);
  param_1[0x4ad] = (int)(float)(fVar4 * (float10)0.5 * (float10)(float)fVar2);
  fVar2 = (float10)fcos((float10)(float)param_1[0x24a]);
  param_1[0x4ac] = (int)(float)(fVar2 * (float10)0.5 * fVar3);
  (**(code **)(*param_1 + 0x70))(param_1 + 0x4ac);
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x244] * (float)param_1[0x24b] +
                                (float)param_1[0x249]);
  param_1[0x249] = (int)(float)fVar2;
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x244] * (float)param_1[0x24b] * 0.5 +
                                (float)param_1[0x24a]);
  param_1[0x24a] = (int)(float)fVar2;
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 < fVar1 - (float)param_1[0x244]) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007e2b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007E2B90  FUN_007e2b90  size=952  [between]
void __fastcall FUN_007e2b90(int *param_1)

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
  
  local_94 = (int *)0x7e2ba3;
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    local_94 = param_1 + 0x10;
    local_9c[1] = 1.1586967e-38;
    FUN_00a8d6c0();
    local_94 = (int *)0x32;
    local_9c[1] = 1.158698e-38;
    FUN_00aa3f60();
    local_94 = (int *)0x0;
    local_9c[1] = 1.1586996e-38;
    FUN_008e6c60();
    local_94 = (int *)0x0;
    local_9c[1] = 1.1587013e-38;
    FUN_008e0ae0();
    local_94 = (int *)0x0;
    local_9c[1] = 1.158703e-38;
    FUN_008e0af0();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    local_94 = &local_7c;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    local_9c[1] = 1.1587075e-38;
    FUN_00a8d790();
    if (param_1[0x202] == 0) {
      local_94 = (int *)0x7e2da5;
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    local_94 = (int *)0x0;
    local_9c[1] = 1.1587103e-38;
    cVar2 = FUN_00c9db20();
    local_94 = (int *)0x0;
    local_9c[1] = 2.0;
    local_9c[0] = 1.1587132e-38;
    iVar4 = FUN_00a97e60();
    if ((iVar4 != 0) && (cVar2 != '\0')) {
      local_94 = (int *)0x3f800000;
      local_9c[1] = -1.0;
      local_9c[0] = 3.85186e-34;
      FUN_00aa4080(0x33,0,0x3e4ccccd,0x3f800000);
      local_94 = (int *)0x3f800000;
      local_9c[1] = 1.0;
      local_9c[0] = 1.1587239e-38;
      FUN_00ac80a0();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    local_94 = (int *)0x3f800000;
    local_9c[1] = 1.0;
    local_9c[0] = 1.1587284e-38;
    FUN_00ac80a0();
    local_60 = local_7c;
    local_94 = &local_60;
    local_5c = local_78;
    local_58 = local_74;
    local_54 = 0x3f800000;
    local_9c[1] = 1.1587343e-38;
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
    local_9c[0] = 1.1587683e-38;
    FUN_00ac80a0();
    local_94 = (int *)0x0;
    local_9c[1] = 1.1587697e-38;
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      local_94 = (int *)0x1;
      local_9c[1] = 1.1587732e-38;
      FUN_008e6c60();
      local_94 = (int *)0x1;
      local_9c[1] = 1.1587749e-38;
      FUN_008e0ae0();
      local_94 = (int *)0x1;
      local_9c[1] = 1.1587766e-38;
      FUN_008e0af0();
      if ((param_1[0x12a] & 0x40U) != 0) {
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = param_1[0x50b];
        local_94 = (int *)0x7e2e1e;
        iVar4 = FUN_00a8cab0();
        local_94 = (int *)0x0;
        local_9c[1] = 0.0;
        param_1[0x3a7] = iVar4;
        local_9c[0] = 0.0;
        param_1[0x3a8] = param_1[0x3a4];
        FUN_00a8caf0(0x80000);
        local_94 = (int *)0x0;
        local_9c[1] = 0.0;
        param_1[0x3a4] = 0;
        local_9c[0] = 1.1587884e-38;
        FUN_00a962d0();
        param_1[0x3ab] = 0;
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
      local_94 = (int *)0x7e2eab;
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
    local_9c[0] = 1.1588112e-38;
    FUN_00ac80a0();
    local_94 = (int *)0x0;
    local_9c[1] = 1.1588126e-38;
    iVar4 = FUN_00a94ce0();
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x34c);
      param_1[0x128] = 0;
      local_94 = (int *)0x7e2f11;
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

// 007E2F70  FUN_007e2f70  size=394  [between]
void __fastcall FUN_007e2f70(int *param_1)

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

// 007E3100  FUN_007e3100  size=1023  [between]
void __fastcall FUN_007e3100(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float fStack_50;
  undefined1 auStack_4c [4];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  float afStack_3c [2];
  float fStack_34;
  undefined1 auStack_30 [12];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (param_1[0x187] == 0) {
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(0x10);
    }
    param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
    param_1[99] = 0x447a0000;
    iVar2 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_01648090,param_1[0x2c9]);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00a5dcc0(iVar2);
    }
    FUN_00a9f4c0("BezierMove",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x86,0x3daaaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x39,0x3daaaaab,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x3a,0x3daaaaab,0x80000);
    param_1[0x249] = 0;
    param_1[0x24d] = param_1[0x25];
    param_1[0x24e] = 0;
    param_1[0x24f] = 0;
    if (((param_1[0x2c0] & 0x100U) != 0) || (param_1[0x50a] != 0)) {
      param_1[0x249] = param_1[0x3b8];
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x50a] = 1;
  iStack_24 = param_1[0x14];
  iStack_20 = param_1[0x15];
  iStack_1c = param_1[0x16];
  iStack_18 = param_1[0x17];
  fVar3 = (float10)FUN_00a581b0(&iStack_48,(float)param_1[0x244] * 0.25,param_1[0x249]);
  param_1[0x249] = (int)(float)fVar3;
  param_1[0x3b8] = (int)(float)fVar3;
  param_1[0x14] = iStack_48;
  param_1[0x15] = iStack_44;
  param_1[0x16] = iStack_40;
  FUN_00a585a0(afStack_3c,0x3e800000,(float)fVar3);
  fVar3 = (float10)fpatan((float10)afStack_3c[0],(float10)fStack_34);
  param_1[0x25] = (int)(float)fVar3;
  FUN_00a581b0(auStack_30,0x40400000,param_1[0x249]);
  thunk_FUN_00dde510(auStack_4c,&fStack_50,auStack_30,&iStack_24);
  fStack_50 = fStack_50 * 1.2732395;
  fVar1 = -0.7;
  if ((-0.7 <= fStack_50) && (fVar1 = fStack_50, 0.7 < fStack_50)) {
    fVar1 = 0.7;
  }
  fVar1 = (fVar1 - (float)param_1[0x24e]) * 0.1 + (float)param_1[0x24e];
  param_1[0x24e] = (int)fVar1;
  if ((float)param_1[0x24f] <= fVar1) {
    if ((float)param_1[0x24f] < fVar1) {
      fVar1 = (float)param_1[0x24f] + 0.005;
      goto LAB_007e33e9;
    }
  }
  else {
    fVar1 = (float)param_1[0x24f] - 0.005;
LAB_007e33e9:
    param_1[0x24f] = (int)fVar1;
  }
  FUN_00a947e0(0,0,param_1[0x24f],0);
  iVar2 = FUN_00a54a60(param_1[0x249]);
  if (iVar2 == 0) {
    return;
  }
  if ((param_1[0x2c0] & 0x500U) != 0) {
    FUN_009fdde0();
    return;
  }
  if ((param_1[0x2c0] & 0x800U) == 0) {
    if (param_1[0x2c2] != -1) {
      param_1[0xd9] = param_1[0xd9] | 2;
      param_1[99] = param_1[0x50b];
      iVar2 = FUN_00a8cab0();
      param_1[0x3a8] = param_1[0x3a4];
      param_1[0x3a7] = iVar2;
      FUN_00a8caf0(0x1000c,0,0,0);
      param_1[0x3a4] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3ab] = 0;
      goto LAB_007e3461;
    }
  }
  else {
    FUN_00a85340(4);
  }
  (**(code **)(*param_1 + 0x34c))();
LAB_007e3461:
  if (param_1[0x1d9] != 0) {
    FUN_008e5c50(7);
  }
  param_1[0xd9] = param_1[0xd9] | 2;
  param_1[0x50a] = 0;
  return;
}

// 007E3500  FUN_007e3500  size=113  [between]
void __fastcall FUN_007e3500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a82e80();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar2;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    FUN_00a8caf0(0x10004,0,0,0);
    *(undefined4 *)(param_1 + 0xe90) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xeac) = 0;
  }
  return;
}

// 007E3580  FUN_007e3580  size=839  [between]
void __fastcall FUN_007e3580(int *param_1)

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
    local_e8 = (undefined4 *)0x7e35ae;
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
    goto LAB_007e361c;
  }
  local_e4 = (int *)0x3f800000;
  local_e8 = (undefined4 *)0xbf800000;
  puStack_ec = (undefined4 *)0x0;
  local_f0 = (int *)0x3f800000;
  local_f4 = (undefined4 *)0x3e4ccccd;
  puStack_f8 = (undefined4 *)0x0;
  puStack_fc = (undefined1 *)0xcd;
  ppuStack_100 = (undefined4 **)0x7e3601;
  FUN_00aa4120();
  local_e4 = (int *)0x1f;
  local_e8 = (undefined4 *)0x7e3610;
  fVar3 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))();
  param_1[0x461] = (int)(float)fVar3;
  param_1[0x187] = param_1[0x187] + 1;
LAB_007e361c:
  local_e4 = &local_bc;
  local_e8 = (undefined4 *)0x7e3628;
  iVar2 = FUN_00a8d790();
  if (iVar2 != 0) {
    if (param_1[0x202] != 0) {
      local_e4 = (int *)0x0;
      local_e8 = (undefined4 *)0x40000000;
      puStack_ec = (undefined4 *)0x7e36aa;
      FUN_00a97e60();
    }
    local_e4 = param_1 + 0x10;
    local_e8 = &local_bc;
    puStack_ec = (undefined4 *)local_54;
    local_f0 = &local_c0;
    local_f4 = (undefined4 *)0x7e36c5;
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
    local_f0 = (int *)0x7e3753;
    thunk_FUN_00ddc1d0();
    puStack_ec = &local_b0;
    local_e8 = local_50;
    local_f0 = (int *)0x7e376b;
    local_e4 = puStack_ec;
    D3DXMatrixMultiply();
    local_f0 = param_1 + 0x2c;
    puStack_f8 = &local_bc;
    puStack_fc = (undefined1 *)0x7e377f;
    local_f4 = puStack_f8;
    D3DXMatrixMultiply();
    puStack_fc = auStack_c8;
    local_e8 = (undefined4 *)0x0;
    local_e4 = (undefined4 *)0x0;
    puVar1 = (undefined4 *)param_1[0x461];
    ppuStack_104 = &local_e8;
    ppuStack_108 = (undefined1 **)0x7e37a5;
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
  param_1[0xd9] = param_1[0xd9] | 2;
  param_1[99] = param_1[0x50b];
  local_e4 = (int *)0x7e3646;
  iVar2 = FUN_00a8cab0();
  local_e4 = (int *)0x0;
  local_e8 = (undefined4 *)0x0;
  puStack_ec = (undefined4 *)0x0;
  local_f0 = (int *)0x10000;
  param_1[0x3a7] = iVar2;
  param_1[0x3a8] = param_1[0x3a4];
  local_f4 = (undefined4 *)0x7e366a;
  FUN_00a8caf0();
  local_e4 = (int *)0x0;
  local_e8 = (undefined4 *)0x0;
  param_1[0x3a4] = 0;
  puStack_ec = (undefined4 *)0x7e367f;
  FUN_00a962d0();
  param_1[0x3ab] = 0;
  return;
}

// 007E38D0  FUN_007e38d0  size=280  [between]
undefined4 __thiscall FUN_007e38d0(int param_1,float param_2,int param_3,int param_4)

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
  if ((param_3 != 0) && (iVar7 = FUN_00907640(param_1 + 0x11a8,0,&local_20), iVar7 != 0)) {
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
  if ((param_4 != 0) && (iVar7 = FUN_00907640(param_1 + 0x11c0,0,&local_20), iVar7 != 0)) {
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

// 007E39F0  FUN_007e39f0  size=698  [between]
void __fastcall FUN_007e39f0(float param_1)

{
  int iVar1;
  undefined4 uVar2;
  float local_4;
  
  local_4 = param_1;
  if ((*(float *)((int)param_1 + 0xa9c) < -0.7853982) ||
     (0.7853982 < *(float *)((int)param_1 + 0xa9c))) {
LAB_007e3b02:
    if ((-2.3561945 < *(float *)((int)param_1 + 0xa9c)) &&
       (*(float *)((int)param_1 + 0xa9c) < -0.7853982)) {
      iVar1 = FUN_007de010(0x16,0);
      if (iVar1 != 0) {
        local_4 = 0.0;
        uVar2 = FUN_007de460(0x16,&local_4);
        *(undefined4 *)((int)param_1 + 0x11dc) = uVar2;
        if ((3.0 < local_4) || (local_4 == 0.0)) goto LAB_007e3a7c;
        goto LAB_007e3b83;
      }
      *(undefined4 *)((int)param_1 + 0x11dc) = 0x10;
LAB_007e3adc:
      *(uint *)((int)param_1 + 0x364) = *(uint *)((int)param_1 + 0x364) | 2;
      *(undefined4 *)((int)param_1 + 0x18c) = *(undefined4 *)((int)param_1 + 0x142c);
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)((int)param_1 + 0xea0) = *(undefined4 *)((int)param_1 + 0xe90);
      goto LAB_007e3aa2;
    }
LAB_007e3b83:
    if ((0.7853982 < *(float *)((int)param_1 + 0xa9c)) &&
       (*(float *)((int)param_1 + 0xa9c) < 2.3561945)) {
      iVar1 = FUN_007de010(0xe,0);
      if (iVar1 == 0) {
        *(undefined4 *)((int)param_1 + 0x11dc) = 8;
        goto LAB_007e3adc;
      }
      local_4 = 0.0;
      uVar2 = FUN_007de460(0xe,&local_4);
      *(undefined4 *)((int)param_1 + 0x11dc) = uVar2;
      if ((3.0 < local_4) || (local_4 == 0.0)) goto LAB_007e3a7c;
    }
    if ((*(float *)((int)param_1 + 0xa9c) < 2.3561945) ||
       (-2.3561945 < *(float *)((int)param_1 + 0xa9c))) {
      return;
    }
    iVar1 = FUN_007de010(0x1c,0);
    if (iVar1 == 0) goto LAB_007e3ad2;
    local_4 = 0.0;
    uVar2 = FUN_007de460(0x1c,&local_4);
    *(undefined4 *)((int)param_1 + 0x11dc) = uVar2;
    if ((local_4 <= 3.0) && (local_4 != 0.0)) {
      return;
    }
  }
  else {
    iVar1 = FUN_007de010(0x1c,0);
    if (iVar1 == 0) {
LAB_007e3ad2:
      *(undefined4 *)((int)param_1 + 0x11dc) = 4;
      goto LAB_007e3adc;
    }
    local_4 = 0.0;
    uVar2 = FUN_007de460(0x1c,&local_4);
    *(undefined4 *)((int)param_1 + 0x11dc) = uVar2;
    if ((local_4 <= 3.0) && (local_4 != 0.0)) goto LAB_007e3b02;
  }
LAB_007e3a7c:
  *(uint *)((int)param_1 + 0x364) = *(uint *)((int)param_1 + 0x364) | 2;
  *(undefined4 *)((int)param_1 + 0x18c) = *(undefined4 *)((int)param_1 + 0x142c);
  uVar2 = FUN_00a8cab0();
  *(undefined4 *)((int)param_1 + 0xea0) = *(undefined4 *)((int)param_1 + 0xe90);
LAB_007e3aa2:
  *(undefined4 *)((int)param_1 + 0xe9c) = uVar2;
  FUN_00a8caf0(0x10003,0,0,0);
  *(undefined4 *)((int)param_1 + 0xe90) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)((int)param_1 + 0xeac) = 0;
  return;
}

// 007E3CB0  FUN_007e3cb0  size=375  [between]
void __fastcall FUN_007e3cb0(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_24 [4];
  undefined1 local_20 [28];
  
  if ((*(int **)(param_1 + 0xa84) != (int *)0x0) && (*(int *)(param_1 + 0x4a0) != 1)) {
    (**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(local_20);
    iVar1 = FUN_00a8cab0();
    if (((iVar1 == 0x20000) && (iVar1 = FUN_00a8cac0(), 1 < iVar1)) ||
       (*(int *)(param_1 + 0x12e4) != 0)) {
      FUN_007dea20(auStack_24);
      return;
    }
    FUN_00a84720();
    if (0.0 < *(float *)(param_1 + 0x1510)) {
      *(float *)(param_1 + 0x1510) =
           *(float *)(param_1 + 0x1510) - *(float *)(param_1 + 0x910) * 5.0;
    }
    if (*(float *)(param_1 + 0x1510) < 0.0) {
      *(undefined4 *)(param_1 + 0x1510) = 0;
    }
    iVar1 = FUN_00a82a20();
    fVar2 = (float10)FUN_00ddba30(-*(float *)(param_1 + 0x1510) * 0.017453292 +
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

// 007E3E30  FUN_007e3e30  size=133  [between]
undefined4 __fastcall FUN_007e3e30(int param_1)

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
LAB_007e3e70:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_007e3e75;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_007e3e70;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_007e3e75:
  if (iVar3 != 0) {
    pcVar4 = "P430_SLIDER_RUN";
    pbVar2 = &DAT_018b917c;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_007e3ea3:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_007e3ea8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_007e3ea3;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_007e3ea8:
    if (iVar3 != 0) {
      return 0;
    }
  }
  return 1;
}

// 007E3EC0  FUN_007e3ec0  size=91  [between]
void FUN_007e3ec0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b357a0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a0);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && (iVar1 = FUN_0070e580(), iVar1 == 0)) {
        FUN_0070e6a0();
      }
    }
  }
  FUN_00a7c950();
  return;
}

// 007E3F20  FUN_007e3f20  size=243  [between]
void __fastcall FUN_007e3f20(int *param_1)

{
  int iVar1;
  int local_8;
  undefined1 local_4 [4];
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    iVar1 = FUN_007dfd10();
    if (iVar1 != 0) {
      *(undefined2 *)(param_1 + 0x209) = 1;
      param_1[0x20a] = 0x78;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    goto LAB_007e3fb5;
  }
  FUN_00aa4080(0x79,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a96070(0,0,1);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x3bb] = 0;
LAB_007e3fb5:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x3ac] & 0x10000000U) == 0) {
    FUN_00ac81f0(param_1 + 0x10,&local_8,local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x10,&local_8,local_4);
  }
  if (local_8 != 0) {
    return;
  }
  param_1[0x3ac] = param_1[0x3ac] & 0xefffffff;
                    /* WARNING: Could not recover jumptable at 0x007e4011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007E4020  FUN_007e4020  size=97  [between]
uint FUN_007e4020(void)

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
      puVar3 = &DAT_01b357a0;
      (**(code **)(*piVar2 + 4))(&DAT_01b357a0);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 007E4090  FUN_007e4090  size=214  [between]
void __thiscall
FUN_007e4090(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
  if ((*(int *)(param_1 + 0x618) == 0x1000002b) && (*(int *)(param_1 + 0x764) != 0)) {
    FUN_008e5c50(7);
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
  if ((param_2 & 0xffff0000) != 0x40000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar1;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
  }
  FUN_00a8caf0(param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 0xe90) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xeac) = 0;
  iVar2 = FUN_007e4020();
  if (iVar2 != 0) {
    FUN_00718220(param_2,param_3,param_4,param_5);
  }
  *(undefined4 *)(param_1 + 0xee4) = 0;
  return;
}

// 007E4170  Emc120::getAttackInfo  size=418  [class]
undefined4 __thiscall Emc120::getAttackInfo(int param_1,ushort *param_2)

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
      break;
    case 5:
      *puVar1 = 0x13e;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      *(undefined2 *)(puVar1 + 0x21) = 0x1550;
      break;
    case 6:
      *puVar1 = 0x13f;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      *(undefined2 *)(puVar1 + 0x21) = 0x1550;
      break;
    case 7:
      *puVar1 = 0x140;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      *(undefined2 *)(puVar1 + 0x21) = 0x1551;
      break;
    case 10:
      *puVar1 = 0x143;
      *(undefined1 *)((int)puVar1 + 0x11) = 10;
    }
    FUN_00aa56a0(puVar1);
    return unaff_EBX;
  }
  FUN_00dd5650(&DAT_016480bc);
  return 0;
}

// 007E4330  FUN_007e4330  size=942  [between]
void __fastcall FUN_007e4330(int *param_1)

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
    param_1[0x479] = 0;
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
    fVar1 = (float)param_1[0x479] + 0.01;
    param_1[0x479] = (int)fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x479] = 0x40000000;
    }
    fVar1 = (float)param_1[0x479];
    fStack_44 = (float)param_1[0x244];
    fStack_50 = local_60 * fVar1 * fStack_44;
    fStack_4c = fVar1 * fStack_5c * fStack_44;
    fStack_48 = fStack_58 * fVar1 * fStack_44;
    fStack_44 = fStack_44 * fStack_54 * fVar1;
    (**(code **)(*param_1 + 0x70))(&fStack_50);
    if ((1.5707964 < (float)param_1[0x2a8]) || ((param_1[0x3ac] & 0x40000000U) != 0)) {
      param_1[0x3ac] = param_1[0x3ac] & 0xbfffffff;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    if ((param_1[0x3ac] & 0x20000000U) != 0) {
      param_1[0x3ac] = param_1[0x3ac] & 0xdfffffff;
      FUN_00a8cb60(6);
      return;
    }
    iVar4 = FUN_007e38d0(0x3f800000,0,1);
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
    fVar1 = (float)param_1[0x479];
    param_1[0x479] = (int)(fVar1 - 0.1);
    if (fVar1 - 0.1 < 0.0) {
      param_1[0x479] = 0;
    }
    fVar1 = (float)param_1[0x479];
    pfVar3 = (float *)FUN_00a925a0(local_20);
    local_34 = (float)param_1[0x244];
    local_40 = *pfVar3 * fVar1 * local_34;
    local_3c = pfVar3[1] * fVar1 * local_34;
    local_38 = pfVar3[2] * fVar1 * local_34;
    local_34 = pfVar3[3] * fVar1 * local_34;
    (**(code **)(*param_1 + 0x70))(&local_40);
    goto LAB_007e4661;
  case 6:
    FUN_00aa4080(0xac,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007e4661:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x3c1] = 0x42700000;
      (*pcVar2)();
      return;
    }
  }
  return;
}

// 007E4700  FUN_007e4700  size=236  [between]
int __thiscall FUN_007e4700(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  if ((((*(uint *)(param_2 + 0x8c) & 0x200) != 0) || ((*(uint *)(param_2 + 0x90) & 0x60000) != 0))
     || ((*(uint *)(param_2 + 0x8c) & 0x400) != 0)) {
    iVar2 = 1;
  }
  iVar1 = FUN_00ac82f0();
  if ((iVar1 != 0) || (iVar2 != 0)) {
    iVar1 = FUN_00ac8350();
    if ((((iVar1 != 0) || (iVar2 != 0)) && (*(int *)(param_2 + 0x94) != 0)) &&
       ((*(int *)(param_2 + 0xec) != 0 || (iVar2 != 0)))) {
      iVar1 = FUN_00ac8cd0(param_2);
      if (iVar1 != 0) {
        uVar3 = 0;
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          FUN_00a81330();
          uVar3 = FUN_00a7c8a0();
        }
        FUN_00a8e5d0(param_1,param_2,0);
        (**(code **)(*param_1 + 0x1ec))();
        (**(code **)(*param_1 + 0x198))(uVar3,param_2,0x100);
        if (iVar2 != 0) {
          FUN_00a9ba90(param_2);
        }
        (**(code **)(*param_1 + 0x344))(8,1,param_1[0x3a5]);
        return iVar2;
      }
    }
  }
  return 0;
}

// 007E47F0  FUN_007e47f0  size=567  [between]
void __fastcall FUN_007e47f0(int param_1)

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
    *(float *)(param_1 + 0x12cc) = (float)(fVar3 * (float10)15.0);
    if (*(int *)(param_1 + 0xeb8) == 0) {
      if (*(int *)(param_1 + 0xebc) == 0) {
        FUN_00aa4080(0xb1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        *(uint *)(param_1 + 0xebc) = (uint)(*(int *)(param_1 + 0xebc) == 0);
      }
      else {
        FUN_00aa4080(0xaf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        *(uint *)(param_1 + 0xebc) = (uint)(*(int *)(param_1 + 0xebc) == 0);
      }
    }
    else if (*(int *)(param_1 + 0xebc) == 0) {
      *(undefined4 *)(param_1 + 0xebc) = 1;
      FUN_00aa4080(0xb2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    else {
      FUN_00aa4080(0xb0,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(uint *)(param_1 + 0xebc) = (uint)(*(int *)(param_1 + 0xebc) == 0);
    }
    if ((*(int *)(param_1 + 0x12d0) == 0) && (iVar1 = *(int *)(param_1 + 0x764), iVar1 != 0)) {
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
  uVar2 = *(undefined4 *)(param_1 + 0x142c);
  if (*(int *)(param_1 + 0x1428) == 0) {
    if ((*(uint *)(param_1 + 0xeb0) & 0x10000000) != 0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = uVar2;
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xe9c) = uVar2;
      *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
      uVar4 = 0x30002;
      goto LAB_007e4a04;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = uVar2;
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    uVar4 = 0x10000;
  }
  else {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = uVar2;
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    uVar4 = 0x1000b;
  }
  *(undefined4 *)(param_1 + 0xe9c) = uVar2;
LAB_007e4a04:
  FUN_00a8caf0(uVar4,0,0,0);
  *(undefined4 *)(param_1 + 0xe90) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xeac) = 0;
  return;
}

// 007E4A30  FUN_007e4a30  size=507  [between]
void __fastcall FUN_007e4a30(int param_1)

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
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1238) * 60.0;
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
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
      if (*(int *)(param_1 + 0x1428) == 0) {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        uVar4 = 0x10000;
      }
      else {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        uVar4 = 0x1000b;
      }
      *(undefined4 *)(param_1 + 0xe9c) = uVar3;
      FUN_00a8caf0(uVar4,0,0,0);
      *(undefined4 *)(param_1 + 0xe90) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xeac) = 0;
      return;
    }
  }
  return;
}

// 007E4C50  FUN_007e4c50  size=360  [between]
void __fastcall FUN_007e4c50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    if ((*(uint *)(param_1 + 0xeb0) & 0x10000000) == 0) {
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
    *(uint *)(param_1 + 0xeb0) = *(uint *)(param_1 + 0xeb0) | 0x10000000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((*(uint *)(param_1 + 0xeb0) & 0x10000000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  }
  if (local_8 == 0) {
    *(uint *)(param_1 + 0xeb0) = *(uint *)(param_1 + 0xeb0) & 0xefffffff;
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    if (*(int *)(param_1 + 0x1428) == 0) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
      uVar2 = 0x10000;
    }
    else {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
      uVar2 = 0x1000b;
    }
    *(undefined4 *)(param_1 + 0xe9c) = uVar1;
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xe90) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xeac) = 0;
  }
  return;
}

// 007E4DC0  FUN_007e4dc0  size=362  [between]
void __fastcall FUN_007e4dc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_007e4e4c;
  }
  if (*(int *)(param_1 + 0xeb8) == 0) {
    uVar2 = 0xda;
LAB_007e4e3f:
    FUN_00aa4080(uVar2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0xeb8) == 1) {
    uVar2 = 0xdb;
    goto LAB_007e4e3f;
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
LAB_007e4e4c:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x142c);
    if (*(int *)(param_1 + 0x1428) == 0) {
      if ((*(uint *)(param_1 + 0xeb0) & 0x10000000) == 0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = uVar2;
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        uVar3 = 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = uVar2;
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        uVar3 = 0x30002;
      }
      *(undefined4 *)(param_1 + 0xe9c) = uVar2;
    }
    else {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = uVar2;
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xe9c) = uVar2;
      *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
      uVar3 = 0x1000b;
    }
    FUN_00a8caf0(uVar3,0,0,0);
    *(undefined4 *)(param_1 + 0xe90) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xeac) = 0;
  }
  return;
}

// 007E4F30  FUN_007e4f30  size=809  [between]
void __fastcall FUN_007e4f30(int *param_1)

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
    goto LAB_007e4fb9;
  case 1:
LAB_007e4fb9:
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
    param_1[0x249] = (int)((float)param_1[0x4a9] * 60.0);
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
      iVar1 = param_1[0x50b];
      if (param_1[0x50a] == 0) {
        if ((param_1[0x3ac] & 0x10000000U) == 0) {
          param_1[0xd9] = param_1[0xd9] | 2;
          param_1[99] = iVar1;
          iVar1 = FUN_00a8cab0();
          param_1[0x3a8] = param_1[0x3a4];
          uVar3 = 0x10000;
        }
        else {
          param_1[0xd9] = param_1[0xd9] | 2;
          param_1[99] = iVar1;
          iVar1 = FUN_00a8cab0();
          param_1[0x3a8] = param_1[0x3a4];
          uVar3 = 0x30002;
        }
        param_1[0x3a7] = iVar1;
      }
      else {
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = iVar1;
        iVar1 = FUN_00a8cab0();
        param_1[0x3a7] = iVar1;
        param_1[0x3a8] = param_1[0x3a4];
        uVar3 = 0x1000b;
      }
      FUN_00a8caf0(uVar3,0,0,0);
      param_1[0x3a4] = 0;
      FUN_00a962d0(0,0);
      param_1[0x3ab] = 0;
      return;
    }
  }
  return;
}

// 007E5280  FUN_007e5280  size=73  [between]
void __thiscall FUN_007e5280(int param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 0x800) == 0) {
    *(undefined4 *)(param_1 + 0xe94) = 0;
  }
  if ((*(uint *)(param_2 + 0x8c) & 0x100000) != 0) {
    *(undefined4 *)(param_1 + 0xe98) = 2;
  }
  if ((*(uint *)(param_2 + 0x90) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xe98) = 4;
  }
  return;
}

// 007E52D0  Emc120::vf34C  size=144  [class]
void __fastcall Emc120::vf34C(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4a0) != 1) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar1;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xe90) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xeac) = 0;
    return;
  }
  if (*(int *)(param_1 + 0xeec) != 0) {
    FUN_007e4090(0x10000002,0,0,0);
    return;
  }
  FUN_007e4090(0x10000000,0,0,0);
  return;
}

// 007E5360  FUN_007e5360  size=206  [between]
void __fastcall FUN_007e5360(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x4a0) != 1) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar3;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xe90) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xeac) = 0;
    return;
  }
  uVar1 = *(uint *)(param_1 + 0xb00);
  if ((uVar1 & 1) != 0) {
LAB_007e53bf:
    FUN_007e4090(0x10000026,0,0,0);
    return;
  }
  if ((uVar1 & 2) == 0) {
    if (((uVar1 & 4) != 0) || ((uVar1 & 0x100) != 0)) goto LAB_007e53bf;
    if ((uVar1 & 8) != 0) {
      iVar2 = *(int *)(param_1 + 0xeec);
      goto joined_r0x007e53b1;
    }
  }
  iVar2 = *(int *)(param_1 + 0xeec);
joined_r0x007e53b1:
  if (iVar2 == 0) {
    FUN_007e4090(0x10000000,0,0,0);
    return;
  }
  FUN_007e4090(0x10000002,0,0,0);
  return;
}

// 007E5430  Emc120::vf360  size=36  [class]
void __fastcall Emc120::vf360(int param_1)

{
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  return;
}

// 007E5460  Emc120::vf268  size=100  [class]
undefined4 __thiscall Emc120::vf268(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (param_1[0x139] != 0) {
    return 0;
  }
  if (*param_4 == 9) {
    FUN_00a85340(4);
    (**(code **)(*param_1 + 0x34c))();
  }
  else {
    if (*param_4 != 10) {
      return 0;
    }
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x10002) {
      FUN_00ac9040();
      param_1[0x187] = param_1[0x187] + 1;
      return 1;
    }
  }
  return 1;
}

// 007E54D0  FUN_007e54d0  size=349  [between]
void __fastcall FUN_007e54d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0x4a0) != 3) && (*(int *)(param_1 + 0x4e4) == 0)) &&
     (*(int *)(param_1 + 0x12d0) == 0)) {
    if (*(int *)(param_1 + 0x4a0) == 1) {
      iVar1 = FUN_007dfd10();
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0xeb0) = *(uint *)(param_1 + 0xeb0) & 0xefffffff;
        return;
      }
      if ((*(uint *)(param_1 + 0xeb0) & 0x10000000) == 0) {
        *(uint *)(param_1 + 0xeb0) = *(uint *)(param_1 + 0xeb0) | 0x10000000;
        iVar1 = FUN_007dfdd0();
        if (iVar1 != 0) {
          FUN_007e4090(0x10000025,0,0,0);
          return;
        }
      }
      else {
        iVar1 = FUN_007dfdd0();
        if (iVar1 != 0) {
          iVar1 = FUN_00a8cab0();
          if (iVar1 != 0x10000025) {
            FUN_007e4090(0x10000025,1,0,0);
            return;
          }
        }
      }
    }
    else if ((*(int *)(param_1 + 0x1428) == 0) && ((*(uint *)(param_1 + 0xeb0) & 0x10000000) == 0))
    {
      iVar1 = FUN_007dfd10();
      if (iVar1 != 0) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 == 0x20000) {
          FUN_00a8c9b0(0,5,0,0);
        }
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xe9c) = uVar2;
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        FUN_00a8caf0(0x30002,0,0,0);
        *(undefined4 *)(param_1 + 0xe90) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0xeac) = 0;
      }
    }
  }
  return;
}

// 007E5630  Emc120::vf370  size=209  [class]
void __fastcall Emc120::vf370(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  if ((param_1[0x139] == 0) && (0 < param_1[0x21c])) {
    if (param_1[0x3a0] == 0) {
      param_1[0x3a0] = 1;
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        *(undefined2 *)(param_1 + 0x209) = 5;
        param_1[0x20a] = 0x78;
        piVar2 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar2 + 0x54))();
        FUN_00e5e080("pl1400_se_btl_rage",param_1 + 0x10,0,0xffffffff,0);
      }
      (**(code **)(*param_1 + 0x358))(700,param_1 + 0x374);
      if ((param_1[0x351] & 0x80000000U) != 0) {
        iVar1 = unaff_ESI + 0x100;
        uVar3 = FUN_00a81330(iVar1);
        FUN_00a88250(uVar3,iVar1);
      }
    }
    param_1[0x3a1] = 0x44610000;
  }
  return;
}

// 007E5710  FUN_007e5710  size=241  [between]
void __fastcall FUN_007e5710(int param_1)

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

// 007E5810  FUN_007e5810  size=333  [between]
void __fastcall FUN_007e5810(int param_1)

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
    *(float *)(param_1 + 0x1600) =
         ((*(float *)(param_1 + 0x15f0) + (float)(fVar6 - (float10)0.15) + *(float *)(iVar5 + 0x40))
         - *(float *)(param_1 + 0x1600)) * 0.1 + *(float *)(param_1 + 0x1600);
    *(float *)(param_1 + 0x1604) =
         ((*(float *)(param_1 + 0x15f4) + (float)(fVar7 * (float10)-1.0) + fVar1) -
         *(float *)(param_1 + 0x1604)) * 0.1 + *(float *)(param_1 + 0x1604);
    *(float *)(param_1 + 0x1608) =
         ((*(float *)(param_1 + 0x15f8) + (float)(fVar8 - (float10)0.15) + fVar2) -
         *(float *)(param_1 + 0x1608)) * 0.1 + *(float *)(param_1 + 0x1608);
    *(float *)(param_1 + 0x160c) =
         ((*(float *)(param_1 + 0x15fc) + uStack_18 + fVar3) - *(float *)(param_1 + 0x160c)) * 0.1 +
         *(float *)(param_1 + 0x160c);
  }
  return;
}

// 007E5960  FUN_007e5960  size=443  [between]
void __fastcall FUN_007e5960(int param_1)

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
    local_40 = *(float *)(param_1 + 0x1600) - local_30;
    local_3c = *(float *)(param_1 + 0x1604) - local_2c;
    local_38 = *(float *)(param_1 + 0x1608) - local_28;
    local_34 = *(float *)(param_1 + 0x160c) - local_24;
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

// 007E5B20  FUN_007e5b20  size=469  [between]
undefined4 __fastcall FUN_007e5b20(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  
  param_1[0xd9] = param_1[0xd9] | 2;
  param_1[99] = param_1[0x50b];
  iVar3 = FUN_00a8cab0();
  param_1[0x3a7] = iVar3;
  param_1[0x3a8] = param_1[0x3a4];
  FUN_00a8caf0(0x80000,0,0,0);
  param_1[0x3a4] = 0;
  FUN_00a962d0(0,0);
  pcVar1 = *(code **)(*param_1 + 0x220);
  param_1[0x3ab] = 0;
  (*pcVar1)(0x41200000);
  if ((short)param_1[0x2ad] != 6) {
    FUN_00a82790(param_1[0x13c],0x503,0xffffffff);
    param_1[0x548] = param_1[0x548] | 2;
    FUN_00a82870(0x3fb2b8c2,0xbfb2b8c2,0x3f000000,0x3ae4c388,0x3e0efa35);
    FUN_00a82840(0x3f860a92,0xbeb2b8c2,0x3f000000,0x3ae4c388,0x3e0efa35);
    sVar2 = FUN_00dde2d0(0,10);
    param_1[0x57c] = (int)((float)(sVar2 + -5) * 0.05);
    sVar2 = FUN_00dde2d0(0,10);
    param_1[0x57d] = (int)((float)(sVar2 + -5) * 0.05);
    sVar2 = FUN_00dde2d0(0,10);
    param_1[0x57e] = (int)((float)(sVar2 + -5) * 0.05);
    piVar4 = (int *)FUN_00c13920();
    (**(code **)(*piVar4 + 0x28))(0);
    iVar3 = FUN_00a7c8a0();
    param_1[0x580] = *(int *)(iVar3 + 0x40);
    param_1[0x581] = *(int *)(iVar3 + 0x44);
    param_1[0x582] = *(int *)(iVar3 + 0x48);
    param_1[0x583] = *(int *)(iVar3 + 0x4c);
  }
  param_1[0x588] = 0;
  return 1;
}

// 007E5D00  Emc120::vf33C  size=1357  [class]
void __thiscall Emc120::vf33C(int param_1,undefined4 *param_2,int param_3)

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
      ((*(uint *)(param_3 + 8) >> 0x15 & 1) != 0)))) goto LAB_007e622b;
  if ((int)uVar6 < 0) {
    if (*(int *)(param_3 + 8) < 0) {
      iVar5 = FUN_0043f860(1);
      if (iVar5 != 0) {
        iVar5 = FUN_0043f860(2);
        if (iVar5 != 0) {
          iVar5 = FUN_0043f830(0xd);
          if (iVar5 != 0) goto LAB_007e623c;
          iVar5 = FUN_0043f830(0xe);
          if (iVar5 != 0) goto LAB_007e623c;
          iVar5 = FUN_0043f830(0xf);
          if (iVar5 != 0) goto LAB_007e623c;
        }
      }
    }
    if (((int)uVar6 < 0) && (*(int *)(param_3 + 8) < 0)) {
      iVar5 = FUN_0043f830(1);
      if (iVar5 != 0) goto LAB_007e620d;
      iVar5 = FUN_0043f830(2);
      if (iVar5 != 0) goto LAB_007e620d;
    }
  }
  iVar5 = FUN_0043f860(1);
  if (iVar5 != 0) {
    iVar5 = FUN_0043f860(2);
    if (iVar5 != 0) {
      iVar5 = FUN_0043f830(0xd);
      if (iVar5 != 0) goto LAB_007e622b;
      iVar5 = FUN_0043f830(0xe);
      if (iVar5 != 0) goto LAB_007e622b;
      iVar5 = FUN_0043f830(0xf);
      if (iVar5 != 0) goto LAB_007e622b;
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
        if (iVar5 != 0) goto LAB_007e623c;
        iVar5 = FUN_0043f860(10);
        if (iVar5 != 0) goto LAB_007e620d;
        *param_2 = 4;
        goto LAB_007e60b2;
      }
    }
  }
  iVar5 = FUN_0043f830(0);
  if (iVar5 == 0) {
    iVar5 = FUN_0043f860(0);
    if (iVar5 == 0) {
LAB_007e60b2:
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x4b4);
      return;
    }
    iVar5 = FUN_0043f860(0);
    if (iVar5 == 0) {
      iVar5 = FUN_0043f830(1);
      if (iVar5 != 0) goto LAB_007e622b;
      goto LAB_007e623c;
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
              if (iVar5 == 0) goto LAB_007e6138;
            }
          }
        }
LAB_007e622b:
        *(undefined4 *)(param_3 + 0x18) = local_8;
        return;
      }
LAB_007e6138:
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
LAB_007e623c:
      *(undefined4 *)(param_3 + 0x18) = local_8;
      return;
    }
  }
LAB_007e620d:
  *(undefined4 *)(param_3 + 0x18) = local_8;
  return;
}

// 007E6250  Emc120::vf1BC  size=620  [class]
void __thiscall Emc120::vf1BC(int *param_1,int *param_2)

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
    puVar11 = &DAT_01b35940;
    (**(code **)(*param_2 + 4))(&DAT_01b35940);
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
        FUN_007dfb70(uVar7,uVar8,uVar6,uVar4,uVar3);
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
    param_1[99] = param_1[0x50b];
    FUN_00a8caf0(0x40001,0,0,0);
    param_1[0x3a4] = 0;
    FUN_00a962d0(0,0);
    param_1[0x3ab] = 0;
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

// 007E64C0  Emc120::vf338  size=74  [class]
void __thiscall Emc120::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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

// 007E6510  Emc120::vf30  size=106  [class]
void __fastcall Emc120::vf30(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x128] == 3) && (param_1[0x4b4] == 0)) {
    (**(code **)(*param_1 + 0x344))(8,1,1);
  }
  iVar1 = FUN_007e4020();
  if (iVar1 != 0) {
    FUN_00718220(0xa0008,0,0,0);
    FUN_007292a0();
    FUN_00a9e0d0(*(undefined4 *)(iVar1 + 0x4f0));
    FUN_00a7c950();
    return;
  }
  return;
}

// 007E6580  Emc120::vf48  size=98  [class]
void __fastcall Emc120::vf48(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = *(float *)(param_1 + 0xf04);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0xf04) = *(float *)(param_1 + 0xf04) - *(float *)(param_1 + 0x910);
  }
  *(float *)(param_1 + 0x12e8) = *(float *)(param_1 + 0x12e8) - *(float *)(param_1 + 0x910);
  EmBaseDLC::vf48();
  if (*(int *)(param_1 + 0x4a0) == 3) {
    FUN_007e5810();
  }
  uVar2 = FUN_00ac48f0(0);
  *(undefined4 *)(param_1 + 0x11e8) = uVar2;
  FUN_007e54d0();
  return;
}

// 007E65F0  Emc120::vf50  size=96  [class]
void __fastcall Emc120::vf50(int param_1)

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
    FUN_007e5960();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f3cb0(param_1);
    }
  }
  return;
}

// 007E6650  FUN_007e6650  size=229  [between]
undefined4 __fastcall FUN_007e6650(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0xef0) = 0x41f00000;
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0xef8) = 0x3ca3d70a;
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xeec) = 0;
  *(undefined4 *)(param_1 + 0xef4) = 0x3d0efa35;
  *(undefined4 *)(param_1 + 0xed4) = 0;
  *(undefined4 *)(param_1 + 0xed8) = 0;
  *(undefined4 *)(param_1 + 0xefc) = 0;
  *(undefined4 *)(param_1 + 0xedc) = 0;
  *(undefined4 *)(param_1 + 0xf00) = 0;
  *(undefined4 *)(param_1 + 0xee0) = 0;
  *(undefined4 *)(param_1 + 0xee4) = 0;
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
      FUN_007e4090(0x1000002c,0,0,0);
      return 1;
    }
    FUN_007e4090(0x10000002,0,0,0);
  }
  return 1;
}

// 007E6740  FUN_007e6740  size=258  [between]
void __fastcall FUN_007e6740(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = FUN_007e4020();
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x814) != 4) {
      *(undefined2 *)(param_1 + 0x209) = 2;
      param_1[0x20a] = 0x78;
    }
    *(undefined4 *)(iVar2 + 0x894) = 0;
    FUN_00718220(0x10000029,0,0,0);
    FUN_00a9e0d0(*(undefined4 *)(iVar2 + 0x4f0));
    FUN_007292a0();
    FUN_007e3ec0();
  }
  pcVar1 = *(code **)(*param_1 + 0x1fc);
  param_1[0x128] = 0;
  iVar2 = (*pcVar1)();
  if ((iVar2 == 0) && (param_1[0x4b4] == 0)) {
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

// 007E6850  FUN_007e6850  size=104  [between]
void __fastcall FUN_007e6850(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007e4020();
  if (iVar1 != 0) {
    iVar1 = FUN_007e4020();
    if (*(int *)(iVar1 + 0x814) == 4) {
      FUN_007e4090(0x10000002,0,0,0);
      return;
    }
  }
  if (*(int *)(param_1 + 0x808) != 0) {
    iVar1 = FUN_007e4020();
    if (iVar1 != 0) {
      iVar1 = FUN_007e4020();
      if (*(int *)(iVar1 + 0x814) < 4) {
        FUN_007e4090(0x1000002c,0,0,0);
      }
    }
  }
  return;
}

// 007E68C0  FUN_007e68c0  size=201  [between]
void __fastcall FUN_007e68c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(5,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3bb] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_007e6925;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007e6925:
  iVar1 = FUN_007e4020();
  if (((iVar1 != 0) && (iVar1 = FUN_007e4020(), *(int *)(iVar1 + 0x814) == 4)) &&
     (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3d4ccccd,0x393702d3,0x3d567750,0);
  }
  return;
}

// 007E6A10  FUN_007e6a10  size=446  [between]
void __fastcall FUN_007e6a10(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_007e4020();
  if ((iVar3 != 0) && (iVar3 = FUN_007e4020(), *(int *)(iVar3 + 0x814) < 4)) {
    FUN_007e4090(0x10000003,0,0,0);
  }
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(float *)(param_1 + 0x920) <= 0.0)) {
    *(undefined4 *)(param_1 + 0xed4) = 1;
    sVar2 = FUN_00dde2a0(0,2);
    if ((sVar2 == 0) &&
       ((iVar3 = FUN_007e4020(), iVar3 != 0 && ((*(uint *)(iVar3 + 0x4a8) & 0x400000) == 0)))) {
      if (*(float *)(param_1 + 0xa90) <= 25.0) {
        FUN_007e4090(0x10000015,0,0,0);
        return;
      }
      FUN_007e4090(0x10000014,0,0,0);
      return;
    }
    fVar1 = *(float *)(param_1 + 0x44) - *(float *)(*(int *)(param_1 + 0xa84) + 0x44);
    if (NAN(fVar1) || 5.0 < fVar1 == (fVar1 == 5.0)) {
      if (4.0 <= fVar1) {
        *(undefined4 *)(param_1 + 0xee4) = 0;
      }
      else {
        FUN_007df8c0();
        *(float *)(param_1 + 0x54) =
             *(float *)(param_1 + 0xee4) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x54);
      }
    }
    else {
      FUN_007df8c0();
      *(float *)(param_1 + 0x54) =
           *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xee4) * *(float *)(param_1 + 0x910);
    }
    if (*(float *)(param_1 + 0xa90) <= 100.0) {
      sVar2 = FUN_00dde2a0(0,1);
      if (sVar2 == 0) {
        iVar3 = FUN_00907640(param_1 + 0x11b0,0,0);
        if (iVar3 == 0) {
          FUN_007e4090(0x1000000c,0,0,0);
          return;
        }
        iVar3 = FUN_00907640(param_1 + 0x11b4,0,0);
        if (iVar3 != 0) {
          FUN_007e4090(0x10000005,0,0,0);
          return;
        }
        FUN_007e4090(0x1000000d,0,0,0);
        return;
      }
      if (sVar2 != 1) {
        return;
      }
    }
    FUN_007e4090(0x10000005,0,0,0);
  }
  return;
}

// 007E7480  FUN_007e7480  size=888  [between]
void __fastcall FUN_007e7480(int param_1)

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
    iVar1 = FUN_007e4020();
    if (iVar1 != 0) {
      FUN_007e4020();
      FUN_007292a0();
    }
    FUN_007e3ec0();
    if (*(int *)(param_1 + 0x4e4) == 0) {
      *(undefined4 *)(param_1 + 0x4a0) = 0;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
      if (*(int *)(param_1 + 0x4e4) == 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        uVar3 = 0x10000;
      }
      else {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
        uVar3 = 0x1000002a;
      }
      *(undefined4 *)(param_1 + 0xe9c) = uVar2;
      FUN_00a8caf0(uVar3,0,0,0);
      *(undefined4 *)(param_1 + 0xe90) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0xeac) = 0;
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
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    if (*(int *)(param_1 + 0x4e4) != 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xe9c) = uVar2;
      *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
      uVar2 = 0x1000002a;
      goto LAB_007e77ce;
    }
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    uVar2 = 0x10000;
    goto LAB_007e77c8;
  default:
    goto switchD_007e74a0_default;
  }
  if (((*(uint *)(param_1 + 0xb00) & 0x100) != 0) &&
     (iVar1 = FUN_00d46690(*(undefined1 *)(param_1 + 0xb24)), iVar1 != 0)) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    fVar4 = (float10)FUN_00a581b0(&local_c,0,*(undefined4 *)(param_1 + 0xee0));
    *(float *)(param_1 + 0xee0) = (float)fVar4;
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
    iVar1 = FUN_007e4020();
    if (iVar1 != 0) {
      FUN_007e4020();
      FUN_007292a0();
    }
    FUN_007e3ec0();
    if (*(int *)(param_1 + 0x4e4) == 0) {
      *(undefined4 *)(param_1 + 0x4a0) = 0;
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
switchD_007e74a0_default:
    return;
  }
  if (*(int *)(param_1 + 0x4e4) == 0) {
    if ((*(uint *)(param_1 + 0xb00) & 0x100) == 0) {
      return;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0xedc) = 1;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar2;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    uVar2 = 0x1000b;
  }
  else {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    uVar2 = 0x1000002a;
LAB_007e77c8:
    *(undefined4 *)(param_1 + 0xe9c) = uVar3;
  }
LAB_007e77ce:
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xe90) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xeac) = 0;
  return;
}

// 007E7810  FUN_007e7810  size=313  [between]
void __fastcall FUN_007e7810(int *param_1)

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
  iVar2 = FUN_007e4020();
  if ((iVar2 != 0) && (iVar2 = FUN_007e4020(), 3 < *(int *)(iVar2 + 0x814))) {
    FUN_007e4090(0x1000000b,0,0,0);
    iVar2 = param_1[0x2a1];
    if (iVar2 == 0) {
      return;
    }
    fVar4 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)param_1[0x10],
                            (float10)*(float *)(iVar2 + 0x48) - (float10)(float)param_1[0x12]);
    param_1[0x25] = (int)(float)fVar4;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007e7947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007E7950  FUN_007e7950  size=710  [between]
void __fastcall FUN_007e7950(int *param_1)

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
    param_1[0x4b5] = 0;
    param_1[0x187] = 3;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 4;
      return;
    }
    iVar3 = FUN_00907640(param_1 + 0x46f,0,param_1 + 0x3b0);
    if (iVar3 != 0) {
      if ((float)param_1[0x3b4] - (float)param_1[0x11] < 0.001 !=
          ((float)param_1[0x3b4] - (float)param_1[0x11] == 0.001)) {
        param_1[0x4b5] = param_1[0x4b5] + 1;
      }
      param_1[0x3b4] = param_1[0x11];
      if (((float)param_1[0x11] <= (float)param_1[0x3b1] + 2.0) &&
         (fVar2 = (float)param_1[0x244] * 0.8 * (float)param_1[0x225], param_1[0x225] = (int)fVar2,
         0.01 <= fVar2)) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      if (((float)param_1[0x11] < (float)param_1[0x3b1] + 0.6 !=
           ((float)param_1[0x11] == (float)param_1[0x3b1] + 0.6)) || (4 < (uint)param_1[0x4b5])) {
        param_1[0x187] = param_1[0x187] + 1;
        iVar3 = FUN_007e4020();
        if (iVar3 != 0) {
          iVar3 = FUN_007e4020();
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
                    /* WARNING: Could not recover jumptable at 0x007e7c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 007E7D20  FUN_007e7d20  size=1047  [between]
void __fastcall FUN_007e7d20(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  float fStack_50;
  undefined1 auStack_4c [4];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  float afStack_3c [2];
  float fStack_34;
  undefined1 auStack_30 [12];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(0x10);
    }
    param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
    param_1[99] = 0x447a0000;
    iVar3 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_01648090,param_1[0x2c9]);
      FUN_007e5360();
    }
    else {
      FUN_00a5dcc0(iVar3);
    }
    FUN_00a9f4c0("BezierMove",0,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x32,0,0x80000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x35,0,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x36,0,0x80000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24d] = param_1[0x25];
    param_1[0x3bb] = 0;
    param_1[0x24e] = 0;
    param_1[0x24f] = 0;
    if ((param_1[0x2c0] & 0x100U) != 0) {
      param_1[0x249] = param_1[0x3b8];
    }
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x33,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (param_1[0x2c2] != -1) {
        FUN_007e4090(0x1000002c,0,0,0);
        return;
      }
      FUN_007e5360();
      return;
    }
  default:
    goto switchD_007e7d52_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iStack_24 = param_1[0x14];
  iStack_20 = param_1[0x15];
  iStack_1c = param_1[0x16];
  iStack_18 = param_1[0x17];
  fVar4 = (float10)FUN_00a581b0(&iStack_48,0x3e800000,param_1[0x249]);
  param_1[0x249] = (int)(float)fVar4;
  param_1[0x3b8] = (int)(float)fVar4;
  param_1[0x14] = iStack_48;
  param_1[0x15] = iStack_44;
  param_1[0x16] = iStack_40;
  FUN_00a585a0(afStack_3c,0x3e800000,(float)fVar4);
  fVar4 = (float10)fpatan((float10)afStack_3c[0],(float10)fStack_34);
  param_1[0x25] = (int)(float)fVar4;
  FUN_00a581b0(auStack_30,0x40400000,param_1[0x249]);
  thunk_FUN_00dde510(auStack_4c,&fStack_50,auStack_30,&iStack_24);
  fStack_50 = fStack_50 * 1.2732395;
  fVar1 = -0.7;
  if ((-0.7 <= fStack_50) && (fVar1 = fStack_50, 0.7 < fStack_50)) {
    fVar1 = 0.7;
  }
  fVar1 = (fVar1 - (float)param_1[0x24e]) * 0.1 + (float)param_1[0x24e];
  param_1[0x24e] = (int)fVar1;
  if ((float)param_1[0x24f] <= fVar1) {
    if ((float)param_1[0x24f] < fVar1) {
      fVar1 = (float)param_1[0x24f] + 0.005;
      goto LAB_007e7fe8;
    }
  }
  else {
    fVar1 = (float)param_1[0x24f] - 0.005;
LAB_007e7fe8:
    param_1[0x24f] = (int)fVar1;
  }
  FUN_00a947e0(0,0,param_1[0x24f],0);
  cVar2 = FUN_00a58a60(param_1[0x249],&DAT_0163f660);
  if (((cVar2 != '\0') && ((param_1[0x12a] & 0x100U) != 0)) && (param_1[0x3b7] == 0)) {
    FUN_007e4090(0x10000026,0,0,0);
  }
  iVar3 = FUN_00a54a60(param_1[0x249]);
  if (iVar3 != 0) {
    if ((param_1[0x12a] & 0x100U) != 0) {
      FUN_009fdde0();
    }
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_007e4020();
    if (iVar3 != 0) {
      iVar3 = FUN_00a8cac0();
      FUN_00a8cb60(iVar3 + 1);
      return;
    }
  }
switchD_007e7d52_default:
  return;
}

// 007E8150  FUN_007e8150  size=48  [between]
void FUN_007e8150(void)

{
  int iVar1;
  
  iVar1 = FUN_007e4020();
  if (iVar1 != 0) {
    iVar1 = FUN_007e4020();
    if (3 < *(int *)(iVar1 + 0x814)) {
      FUN_007e4090(0x1000000a,0,0,0);
    }
  }
  return;
}

// 007E8180  FUN_007e8180  size=758  [between]
void __fastcall FUN_007e8180(int *param_1)

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
    local_e8 = (undefined4 *)0x7e81ae;
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
    goto LAB_007e8219;
  }
  local_e4 = (int *)0x3f800000;
  local_e8 = (undefined4 *)0xbf800000;
  puStack_ec = (undefined4 *)0x0;
  local_f0 = (int *)0x3f800000;
  local_f4 = (undefined4 *)0x3e4ccccd;
  puStack_f8 = (undefined4 *)0x0;
  puStack_fc = (undefined1 *)0x10;
  ppuStack_100 = (undefined4 **)0x7e81fe;
  FUN_00aa4120();
  local_e4 = (int *)0x1f;
  local_e8 = (undefined4 *)0x7e820d;
  fVar3 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))();
  param_1[0x461] = (int)(float)fVar3;
  param_1[0x187] = param_1[0x187] + 1;
LAB_007e8219:
  local_e4 = &local_bc;
  local_e8 = (undefined4 *)0x7e8225;
  puStack_ec = (undefined4 *)FUN_00a8d790();
  if (puStack_ec != (undefined4 *)0x0) {
    if (param_1[0x202] != 0) {
      local_e4 = (int *)0x0;
      local_e8 = (undefined4 *)0x40000000;
      puStack_ec = (undefined4 *)0x7e8259;
      FUN_00a97e60();
    }
    local_e4 = param_1 + 0x10;
    local_e8 = &local_bc;
    puStack_ec = (undefined4 *)local_54;
    local_f0 = &local_c0;
    local_f4 = (undefined4 *)0x7e8274;
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
    local_f0 = (int *)0x7e8302;
    thunk_FUN_00ddc1d0();
    puStack_ec = &local_b0;
    local_e8 = local_50;
    local_f0 = (int *)0x7e831a;
    local_e4 = puStack_ec;
    D3DXMatrixMultiply();
    local_f0 = param_1 + 0x2c;
    puStack_f8 = &local_bc;
    puStack_fc = (undefined1 *)0x7e832e;
    local_f4 = puStack_f8;
    D3DXMatrixMultiply();
    puStack_fc = auStack_c8;
    local_e8 = (undefined4 *)0x0;
    local_e4 = (undefined4 *)0x0;
    puVar1 = (undefined4 *)param_1[0x461];
    ppuStack_104 = &local_e8;
    ppuStack_108 = (undefined1 **)0x7e8354;
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
  local_f4 = (undefined4 *)0x7e8238;
  local_e8 = puStack_ec;
  local_e4 = puStack_ec;
  FUN_007e4090();
  return;
}

// 007E8480  FUN_007e8480  size=700  [between]
void __fastcall FUN_007e8480(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *puVar5;
  
  *(undefined4 *)(param_1 + 0xed8) = 1;
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  iVar2 = FUN_00c19c00(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2),
                       *(undefined4 *)(param_1 + 0xb20));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_0163f668);
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar3;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
  }
  else {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar2,0x700,0xffffffff);
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar5 = &DAT_01b357a0;
      (**(code **)(*piVar4 + 4))(&DAT_01b357a0);
      iVar2 = FUN_00dd6d80(puVar5);
      if (iVar2 != 0) {
        FUN_00729210(*(undefined4 *)(param_1 + 0x4f0));
        uVar3 = FUN_009f8b40();
        FUN_009f8ae0(uVar3);
        FUN_007e5360();
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
            if (bVar1) goto LAB_007e8644;
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
LAB_007e8644:
        if ((*(int *)(param_1 + 0xb24) != -1) && ((*(byte *)(param_1 + 0xb00) & 0x80) == 0)) {
          FUN_007e4090(0x1000002b,0,0,0);
          return;
        }
        if (*(int *)(param_1 + 0xb08) != -1) {
          FUN_007e4090(0x1000002c,0,0,0);
          return;
        }
        FUN_007e4090(0x10000001,0,0,0);
        return;
      }
    }
    FUN_00dd5650(&DAT_0163f668);
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar3;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
  }
  FUN_00a8caf0(0x10000,0,0,0);
  *(undefined4 *)(param_1 + 0xe90) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xeac) = 0;
  return;
}

// 007E8740  FUN_007e8740  size=1061  [between]
undefined4 __thiscall FUN_007e8740(int *param_1,int *param_2)

{
  float fVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint extraout_EDX;
  int iVar6;
  uint unaff_ESI;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar4 = *param_2;
  if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) || ((iVar4 == 0x1b0 || (iVar4 == 0x147)))) {
    return 0;
  }
  iVar6 = 0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar6 = FUN_00a7c8a0();
  }
  if (((*(byte *)(param_2 + 0x23) & 0x40) != 0) && (iVar4 = FUN_00ac8170(iVar6), iVar4 == 0)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x30c))(param_2[1],0);
  if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x4c0) & 0x10) != 0)) {
    bVar3 = (char)param_2[4] * '\x02';
    if (0xd < bVar3) {
      bVar3 = 0xe;
    }
    (**(code **)(*param_1 + 0x21c))(iVar6,bVar3,0x3c23d70a,0);
  }
  uVar5 = param_2[0x23];
  if ((uVar5 & 0x20000) != 0) {
    FUN_007e4090(0x10000024,0,0,0);
    return 1;
  }
  if ((uVar5 & 0x20) != 0) {
    FUN_007e4090(0x10000025,0,0,0);
    return 1;
  }
  if ((uVar5 & 0x10000) != 0) {
    unaff_ESI = 0x40;
  }
  if (*param_2 == 0x18d) {
    uVar10 = 0x1000001a;
  }
  else if ((iVar6 == 0) || (*(int *)(iVar6 + 0x4b0) != 0x20091)) {
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
          if (!bVar2) goto LAB_007e89e1;
          uVar10 = 0x10000017;
        }
        else {
          uVar10 = 0x10000016;
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
          if (!bVar2) goto LAB_007e89e1;
          uVar10 = 0x10000020;
        }
        else {
          uVar10 = 0x1000001f;
        }
      }
    }
    else {
      uVar10 = 0x10000021;
    }
  }
  else {
    uVar10 = 0x1000001a;
  }
  FUN_007e4090(uVar10,0,0,0);
LAB_007e89e1:
  if (param_1[0x21c] < 1) {
    uVar5 = unaff_ESI | 0x81;
    if (param_1[0x294] != 0) {
      FUN_007e5280(param_2);
      uVar5 = extraout_EDX;
    }
    (**(code **)(*param_1 + 0x198))(iVar6,param_2,uVar5);
    param_1[0x139] = 1;
    iVar4 = FUN_007e4020();
    if (iVar4 == 0) {
      param_1[0xd9] = param_1[0xd9] | 2;
      param_1[99] = param_1[0x50b];
      iVar4 = FUN_00a8cab0();
      param_1[0x3a8] = param_1[0x3a4];
    }
    else {
      iVar4 = FUN_007e4020();
      if (iVar4 != 0) {
        uVar11 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar10 = 0x10000029;
        FUN_007e4020(0x10000029,0,0,0);
        FUN_00718220(uVar10,uVar8,uVar9,uVar11);
        iVar4 = FUN_007e4020();
        *(undefined4 *)(iVar4 + 0x890) = 0;
        *(undefined4 *)(iVar4 + 0x894) = 0;
        *(undefined4 *)(iVar4 + 0x898) = 0;
        iVar4 = FUN_007e4020();
        FUN_00a9e0d0(*(undefined4 *)(iVar4 + 0x4f0));
        FUN_007e4020();
        FUN_007292a0();
        iVar4 = FUN_007e4020();
        *(float *)(iVar4 + 0x54) = *(float *)(iVar4 + 0x54) - 1.2;
        FUN_007e3ec0();
      }
      param_1[0xd9] = param_1[0xd9] | 2;
      param_1[99] = param_1[0x50b];
      iVar4 = FUN_00a8cab0();
      param_1[0x3a8] = param_1[0x3a4];
    }
    param_1[0x3a7] = iVar4;
    FUN_00a8caf0(0x1000002a,0,0,0);
    param_1[0x3a4] = 0;
    FUN_00a962d0(0,0);
    param_1[0x3ab] = 0;
    return 1;
  }
  (**(code **)(*param_1 + 0x198))(iVar6,param_2,unaff_ESI | 1);
  fVar7 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar7;
  return 1;
}

// 007E8B70  FUN_007e8b70  size=1564  [between]
void __fastcall FUN_007e8b70(int *param_1)

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
    param_1[0x479] = param_1[0x497];
    param_1[0x248] = (int)((float)param_1[0x49d] * 60.0);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  case 4:
    fVar1 = (float)param_1[0x479] - (float)param_1[0x49a];
    param_1[0x479] = (int)fVar1;
    if (fVar1 < (float)param_1[0x49c]) {
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
    fVar1 = (float)param_1[0x479];
    param_1[0x479] = (int)(fVar1 - (float)param_1[0x49b]);
    if (fVar1 - (float)param_1[0x49b] < 0.0) {
      param_1[0x479] = 0;
    }
    fVar1 = (float)param_1[0x479];
    pfVar3 = (float *)FUN_00a925a0(local_30);
    local_94 = (float)param_1[0x244];
    local_a0 = *pfVar3 * fVar1 * local_94;
    local_9c = pfVar3[1] * fVar1 * local_94;
    local_98 = pfVar3[2] * fVar1 * local_94;
    local_94 = pfVar3[3] * fVar1 * local_94;
    (**(code **)(*param_1 + 0x70))(&local_a0);
    goto LAB_007e910d;
  case 7:
    FUN_00aa4080(0xa2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007e910d:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x3c1] = 0x41f00000;
      (*pcVar2)();
      return;
    }
  default:
    goto switchD_007e8b92_default;
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
  fVar1 = (float)param_1[0x479];
  param_1[0x479] = (int)((float)param_1[0x498] + fVar1);
  if ((float)param_1[0x499] <= (float)param_1[0x498] + fVar1) {
    param_1[0x479] = param_1[0x499];
  }
  fVar1 = (float)param_1[0x479];
  fStack_84 = (float)param_1[0x244];
  local_90 = local_d0 * fVar1 * fStack_84;
  fStack_8c = fVar1 * fStack_cc * fStack_84;
  fStack_88 = fStack_c8 * fVar1 * fStack_84;
  fStack_84 = fStack_84 * fStack_c4 * fVar1;
  (**(code **)(*param_1 + 0x70))(&local_90);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (((float)param_1[0x49e] * 0.017453292 < (float)param_1[0x2a8]) &&
     (fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if ((param_1[0x3ac] & 0x40000000U) != 0) {
    param_1[0x3ac] = param_1[0x3ac] & 0xbfffffff;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if ((param_1[0x3ac] & 0x20000000U) != 0) {
    param_1[0x3ac] = param_1[0x3ac] & 0xdfffffff;
    FUN_00a8cb60(7);
    return;
  }
  iVar4 = FUN_007e38d0(param_1[0x49f],0,1);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_007e8b92_default:
  return;
}

// 007E91B0  FUN_007e91b0  size=1557  [between]
void __fastcall FUN_007e91b0(int *param_1)

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
    param_1[0x479] = param_1[0x4a0];
    param_1[0x248] = 0x42700000;
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  case 4:
    fVar1 = (float)param_1[0x479] - (float)param_1[0x4a3];
    param_1[0x479] = (int)fVar1;
    if (fVar1 < (float)param_1[0x4a5]) {
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
    fVar1 = (float)param_1[0x479];
    param_1[0x479] = (int)(fVar1 - (float)param_1[0x4a4]);
    if (fVar1 - (float)param_1[0x4a4] < 0.0) {
      param_1[0x479] = 0;
    }
    fVar1 = (float)param_1[0x479];
    pfVar3 = (float *)FUN_00a925a0(local_30);
    local_94 = (float)param_1[0x244];
    local_a0 = *pfVar3 * fVar1 * local_94;
    local_9c = pfVar3[1] * fVar1 * local_94;
    local_98 = pfVar3[2] * fVar1 * local_94;
    local_94 = pfVar3[3] * fVar1 * local_94;
    (**(code **)(*param_1 + 0x70))(&local_a0);
    goto LAB_007e9746;
  case 7:
    FUN_00aa4080(0xac,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007e9746:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x3c1] = 0x41f00000;
      (*pcVar2)();
      return;
    }
  default:
    goto switchD_007e91d2_default;
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
  fVar1 = (float)param_1[0x479];
  param_1[0x479] = (int)((float)param_1[0x4a1] + fVar1);
  if ((float)param_1[0x4a2] <= (float)param_1[0x4a1] + fVar1) {
    param_1[0x479] = param_1[0x4a2];
  }
  fVar1 = (float)param_1[0x479];
  fStack_84 = (float)param_1[0x244];
  local_90 = local_d0 * fVar1 * fStack_84;
  fStack_8c = fVar1 * fStack_cc * fStack_84;
  fStack_88 = fStack_c8 * fVar1 * fStack_84;
  fStack_84 = fStack_84 * fStack_c4 * fVar1;
  (**(code **)(*param_1 + 0x70))(&local_90);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (((float)param_1[0x4a7] * 0.017453292 < (float)param_1[0x2a8]) &&
     (fVar1 - (float)param_1[0x244] < 0.0)) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if ((param_1[0x3ac] & 0x40000000U) != 0) {
    param_1[0x3ac] = param_1[0x3ac] & 0xbfffffff;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if ((param_1[0x3ac] & 0x20000000U) != 0) {
    param_1[0x3ac] = param_1[0x3ac] & 0xdfffffff;
    FUN_00a8cb60(7);
    return;
  }
  iVar4 = FUN_007e38d0(param_1[0x4a8],1,1);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_007e91d2_default:
  return;
}

// 007E97F0  FUN_007e97f0  size=791  [between]
void __fastcall FUN_007e97f0(int param_1)

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
    sVar2 = (ushort)(*(int *)(param_1 + 0x1620) != 0) * 4 + 0xf;
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
    *(uint *)(param_1 + 0x1620) = *(uint *)(param_1 + 0x1620) ^ 1;
  }
  return;
}

// 007E9B10  FUN_007e9b10  size=1425  [between]
undefined4 __thiscall FUN_007e9b10(int *param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint unaff_ESI;
  float10 fVar6;
  undefined4 uVar7;
  
  iVar4 = *param_2;
  if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) || ((iVar4 == 0x1b0 || (iVar4 == 0x147)))) {
    return 0;
  }
  iVar5 = 0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  if ((*(byte *)(param_2 + 0x23) & 0x40) != 0) {
    iVar4 = FUN_00ac8170(iVar5);
    if (iVar4 == 0) {
      return 0;
    }
  }
  (**(code **)(*param_1 + 0x30c))(param_2[1],0);
  if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x4c0) & 0x10) != 0)) {
    bVar1 = (char)param_2[4] * '\x02';
    if (0xd < bVar1) {
      bVar1 = 0xe;
    }
    (**(code **)(*param_1 + 0x21c))(iVar5,bVar1,0x3c23d70a,0);
  }
  param_1[0x3ac] = param_1[0x3ac] & 0xbfffffff;
  iVar4 = FUN_00a8cab0();
  if (iVar4 == 0x20000) {
    FUN_00a8c9b0(0,5,0,0);
  }
  if ((param_1[0x4b4] != 0) || (param_1[0x139] != 0)) goto LAB_007e9eec;
  if (param_1[0x50a] != 0) {
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
  if (((param_2[0x24] & 0x2000000U) == 0) || (param_1[0x50a] != 0)) {
    if (((param_2[0x24] & 0x800000U) != 0) && (param_1[0x50a] == 0)) {
      param_1[0xd9] = param_1[0xd9] | 2;
      param_1[99] = param_1[0x50b];
      iVar4 = FUN_00a8cab0();
      param_1[0x3a8] = param_1[0x3a4];
      uVar7 = 0x30004;
      goto LAB_007e9e15;
    }
    if (param_1[0x4b9] == 0) {
      *(short *)(param_1 + 0x4b7) = (short)param_1[0x4b7] + 1;
      if (((((short)param_1[0x4b7] == (short)param_1[0x508]) && (0 < param_1[0x21c])) &&
          (param_1[0x50a] == 0)) && ((param_1[0x3ac] & 0x10000000U) == 0)) {
        sVar2 = FUN_00dde2a0(0,1);
        if (sVar2 == 0) {
          param_1[0xd9] = param_1[0xd9] | 2;
          param_1[99] = param_1[0x50b];
          iVar4 = FUN_00a8cab0();
          param_1[0x3a7] = iVar4;
          param_1[0x3a8] = param_1[0x3a4];
          FUN_00a8caf0(0x20004,0,0,0);
          param_1[0x3a4] = 0;
          FUN_00a962d0(0,0);
          param_1[0x3ab] = 0;
          param_1[0x507] = 1;
        }
        else {
          FUN_007e39f0();
        }
        *(undefined2 *)(param_1 + 0x4b7) = 0;
        param_1[0x4b9] = 1;
        uVar3 = FUN_00dde2a0((short)param_1[0x48c],(short)param_1[0x48d]);
        *(undefined2 *)(param_1 + 0x508) = uVar3;
        return 1;
      }
      iVar4 = FUN_00a8c760(0x10);
      if ((iVar4 == 0) && (param_1[0x50a] == 0)) {
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = param_1[0x50b];
        iVar4 = FUN_00a8cab0();
        uVar7 = 0x30000;
        goto LAB_007e9e09;
      }
    }
  }
  else {
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x50b];
    iVar4 = FUN_00a8cab0();
    uVar7 = 0x30003;
LAB_007e9e09:
    param_1[0x3a8] = param_1[0x3a4];
LAB_007e9e15:
    param_1[0x3a7] = iVar4;
    FUN_00a8caf0(uVar7,0,0,0);
    param_1[0x3a4] = 0;
    FUN_00a962d0(0,0);
    param_1[0x3ab] = 0;
  }
  if ((param_2[0x23] & 0x20000U) != 0) {
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x50b];
    iVar4 = FUN_00a8cab0();
    param_1[0x3a7] = iVar4;
    param_1[0x3a8] = param_1[0x3a4];
    FUN_00a8caf0(0x30001,0,0,0);
    param_1[0x3a4] = 0;
    FUN_00a962d0(0,0);
    param_1[0x3ab] = 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x20) != 0) {
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x50b];
    iVar4 = FUN_00a8cab0();
    param_1[0x3a7] = iVar4;
    param_1[0x3a8] = param_1[0x3a4];
    FUN_00a8caf0(0x30002,0,0,0);
    param_1[0x3a4] = 0;
    FUN_00a962d0(0,0);
    param_1[0x3ab] = 0;
  }
LAB_007e9eec:
  if ((param_1[0x21c] < 1) && (param_1[0x139] == 0)) {
    RayCastManager::getWork(param_1 + 0x46a);
    RayCastManager::getWork(param_1 + 0x46b);
    RayCastManager::getWork(param_1 + 0x46c);
    RayCastManager::getWork(param_1 + 0x46d);
    RayCastManager::getWork(param_1 + 0x46f);
    RayCastManager::getWork(param_1 + 0x470);
    RayCastManager::getWork(param_1 + 0x471);
    RayCastManager::getWork(param_1 + 0x472);
    RayCastManager::getWork(param_1 + 0x473);
    if (param_1[0x4b1] != 0) {
      RayCastManager::getWork(param_1 + 0x46e);
      RayCastManager::getWork(param_1 + 0x474);
    }
    RayCastManager::getWork(param_1 + 0x475);
    RayCastManager::getWork(param_1 + 0x476);
    if (param_1[0x294] != 0) {
      FUN_007e5280(param_2);
    }
    (**(code **)(*param_1 + 0x198))(iVar5,param_2,unaff_ESI | 0x81);
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[0x139] = 1;
    param_1[99] = param_1[0x50b];
    FUN_00a8caf0(0x40000,0,0,0);
    param_1[0x3a4] = 0;
    FUN_00a962d0(0,0);
    param_1[0x3ab] = 0;
    return 1;
  }
  (**(code **)(*param_1 + 0x198))(iVar5,param_2,unaff_ESI | 1);
  fVar6 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar6;
  return 1;
}

// 007EA0B0  Emc120::vf19C  size=179  [class]
void __thiscall Emc120::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 007EA170  Emc120::vf264  size=817  [class]
undefined4 __thiscall Emc120::vf264(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_0040ac60(param_2);
  iVar3 = *(int *)(param_1 + 0x4a0);
  if (iVar3 == 1) {
    FUN_007e8480();
    return 1;
  }
  if (iVar3 == 2) {
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
    return 1;
  }
  if (iVar3 == 4) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar2;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    FUN_00a8caf0(0x10002,0,0,0);
    *(undefined4 *)(param_1 + 0xe90) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xeac) = 0;
    return 1;
  }
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  if ((0.0 < *(float *)(param_1 + 0xbb4)) || (0.0 < *(float *)(param_1 + 0xbc0))) {
    puVar1 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
    *(undefined4 **)(param_1 + 0xd80) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = &DAT_01883308;
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
  else {
    FUN_00a82ac0(*(undefined4 *)(param_1 + 0x4f0),1,1,0xffffffff);
  }
  if (*(int *)(param_1 + 0xb08) != -1) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xe9c) = uVar2;
    *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
    FUN_00a8caf0(0x1000c,0,0,0);
    *(undefined4 *)(param_1 + 0xe90) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0xeac) = 0;
    *(undefined4 *)(param_1 + 0x1428) = 0;
  }
  if (*(int *)(param_1 + 0xb24) == -1) {
    if ((*(uint *)(param_1 + 0xb00) & 0x800) != 0) {
      FUN_00a85340(4);
    }
    return 1;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x142c);
  uVar2 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xea0) = *(undefined4 *)(param_1 + 0xe90);
  *(undefined4 *)(param_1 + 0xe9c) = uVar2;
  FUN_00a8caf0(0x1000b,0,0,0);
  *(undefined4 *)(param_1 + 0xe90) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0xeac) = 0;
  *(undefined4 *)(param_1 + 0x1428) = 1;
  return 1;
}

// 007EA4B0  FUN_007ea4b0  size=791  [between]
void __fastcall FUN_007ea4b0(int param_1)

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
    sVar2 = (ushort)(*(int *)(param_1 + 0x1620) != 0) * 4 + 0xf;
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
    *(uint *)(param_1 + 0x1620) = *(uint *)(param_1 + 0x1620) ^ 1;
  }
  return;
}

// 007EA890  FUN_007ea890  size=488  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007ea890(int param_1)

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
    pfStack_368 = (float *)0x7ea8bb;
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

// 007EAA80  FUN_007eaa80  size=488  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007eaa80(int param_1)

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
    pfStack_368 = (float *)0x7eaaab;
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

// 007EAC70  Emc120::vf40  size=3123  [class]
undefined4 __fastcall Emc120::vf40(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  float10 fVar10;
  float10 extraout_ST0;
  int *piVar11;
  int local_1e4;
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
  
  iVar3 = EmBaseDLC::vf40();
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0x50b] = param_1[99];
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
  param_1[0x3ac] = 0;
  param_1[0x3ad] = 0;
  param_1[0x3c1] = 0;
  param_1[0x3b4] = 0;
  param_1[0x477] = 2;
  *(undefined2 *)(param_1 + 0x50c) = 0;
  FUN_00a82790(param_1[0x13c],0x503,0);
  param_1[0x510] = param_1[0x510] | 0x20;
  FUN_00a82840(0x3fc90fdb,0xbfc90fdb,0x3dcccccd,0x3ae4c388,0x3c8efa35);
  param_1[0x478] = 0;
  param_1[0x479] = 0;
  param_1[0x47a] = 0;
  param_1[0x544] = 0;
  param_1[0x480] = 0;
  param_1[0x484] = 0;
  param_1[0x481] = 0;
  param_1[0x488] = 0;
  param_1[0x482] = 0;
  param_1[0x483] = 0;
  param_1[0x485] = 0;
  param_1[0x486] = 0;
  param_1[0x487] = 0;
  param_1[0x4b0] = 0;
  param_1[0x4b1] = 0;
  *(undefined2 *)(param_1 + 0x4b2) = 0;
  param_1[0x4ac] = 0;
  param_1[0x4ad] = 0;
  param_1[0x4ae] = 0;
  param_1[0x4af] = 0;
  param_1[0x4b3] = 0;
  iVar3 = FUN_00ac8a50();
  param_1[0x4b8] = 0;
  param_1[0x4b4] = iVar3;
  param_1[0x4ba] = 0;
  param_1[0x4b5] = 0;
  param_1[0x4b6] = 0;
  *(undefined2 *)(param_1 + 0x4b7) = 0;
  fVar10 = (float10)FUN_00dde300(0x40000000,0x40400000);
  param_1[0x4bb] = (int)(float)fVar10;
  FUN_00a82790(param_1[0x13c],0,0);
  param_1[0x4bc] = param_1[0x4bc] | 2;
  FUN_00a82840(0x3fb2b8c2,0xbfb2b8c2,0x3f000000,0x3ae4c388,0x3db2b8c2);
  fVar10 = (float10)0;
  param_1[0x4f0] = (int)(float)fVar10;
  param_1[0x4f1] = (int)(float)fVar10;
  param_1[0x4f2] = (int)(float)fVar10;
  param_1[0x4f3] = (int)(float)fVar10;
  param_1[0x3a5] = 1;
  param_1[0x4f4] = 0x40a00000;
  param_1[0x3a6] = 0;
  param_1[0x4f5] = 0x3fd9999a;
  param_1[0x4f6] = 0x3fc00000;
  param_1[0x4f8] = 0x3fc00000;
  param_1[0x4f9] = 0x3fc00000;
  param_1[0x4fa] = 0x3fc00000;
  param_1[0x4fc] = 0x40e00000;
  param_1[0x4fd] = 0x40000000;
  param_1[0x4fe] = 0x40400000;
  param_1[0x500] = (int)(float)fVar10;
  param_1[0x501] = (int)(float)fVar10;
  param_1[0x502] = (int)(float)fVar10;
  param_1[0x503] = (int)(float)fVar10;
  param_1[0x505] = (int)(float)fVar10;
  param_1[0x504] = 0;
  param_1[0x506] = (int)(float)fVar10;
  if (0 < param_1[0x4b4]) {
    param_1[0x139] = 1;
  }
  param_1[0x3af] = 1;
  param_1[0x50a] = 0;
  if (((param_1[0x4b4] == 0) && (param_1[0x128] != 4)) &&
     (iVar3 = FUN_007e3e30(), fVar10 = extraout_ST0, iVar3 == 0)) {
    iVar3 = FUN_00c5def0(param_1[0x13c]);
    param_1[0x25c] = iVar3;
    FUN_00405230();
    local_1e0[0] = 0.0;
    local_1e0[1] = 0.0;
    local_1e0[2] = 0.0;
    FUN_00c151f0(1,param_1[0x13c],0,local_1e0,0,0x41000000,0x3f800000,2,0);
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
  if ((param_1[0x4b4] == 0) && (param_1[0x128] != 3)) {
    local_1e0[0] = (float)fVar10;
    local_1e0[1] = -1.5;
    local_1e0[2] = (float)fVar10;
    iVar3 = FUN_008ec660(param_1,0x40000000,0x3ecccccd,0x41a00000,0x41a00000,0x78,7,local_1e0);
    param_1[0x1d9] = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    FUN_008e6d00();
  }
  iVar3 = param_1[300];
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(iVar3,0x20120);
  FUN_00a929d0();
  uVar4 = FUN_00ac8660(0,0x1e);
  FUN_00a8edf0(uVar4);
  iVar3 = FUN_00ac8660(0,0x22);
  param_1[0x48c] = iVar3;
  iVar3 = FUN_00ac8660(0,0x23);
  param_1[0x48d] = iVar3;
  fVar10 = (float10)FUN_00ac85c0(5,0x25);
  param_1[0x48e] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x27);
  param_1[0x48f] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x28);
  param_1[0x490] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x29);
  param_1[0x491] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2a);
  param_1[0x492] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2b);
  param_1[0x493] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2c);
  param_1[0x494] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2e);
  param_1[0x495] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x2f);
  param_1[0x496] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x31);
  param_1[0x497] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x32);
  param_1[0x498] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x33);
  param_1[0x499] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x34);
  param_1[0x49a] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x35);
  param_1[0x49b] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x36);
  param_1[0x49c] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x37);
  param_1[0x49d] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x38);
  param_1[0x49e] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x39);
  param_1[0x49f] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3b);
  param_1[0x4a0] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3c);
  param_1[0x4a1] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3d);
  param_1[0x4a2] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3e);
  param_1[0x4a3] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x3f);
  param_1[0x4a4] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x40);
  param_1[0x4a5] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x41);
  param_1[0x4a6] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x42);
  param_1[0x4a7] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x43);
  param_1[0x4a8] = (int)(float)fVar10;
  fVar10 = (float10)FUN_00ac85c0(5,0x45);
  param_1[0x4a9] = (int)(float)fVar10;
  uVar2 = FUN_00dde2a0((short)param_1[0x48c],(short)param_1[0x48d]);
  *(undefined2 *)(param_1 + 0x508) = uVar2;
  uVar4 = FUN_00de3850(0,"_col.hkx",0);
  iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = RigidBodyCollection::RigidBodyCollection_2();
  }
  param_1[0x1ec] = iVar3;
  if (iVar3 != 0) {
    iVar3 = param_1[0x13c];
    uVar5 = FUN_00de3ee0(uVar4);
    uVar4 = FUN_00de3cf0(uVar4);
    iVar3 = FUN_008f6410(iVar3,uVar4,uVar5);
    if (iVar3 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(7);
      puVar6 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar6);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f18c0(0x100);
      FUN_008f18c0(0x10000);
    }
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x40);
  iVar3 = 0;
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar7 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar7 != 0)) {
    Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],2);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
    FUN_00a93730(1);
  }
  iVar7 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar7 == 0) {
    return 0;
  }
  if (param_1[0x4b4] == 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x3f0);
    (**(code **)(*param_1 + 0x358))(1,param_1 + 0x3f0);
    FUN_00e5e0c0("em0120_se_mov_jet_idle",param_1,0xffffffff,0);
    if (((param_1[0x4b4] == 0) && (param_1[0x128] != 4)) && (iVar7 = FUN_007e3e30(), iVar7 == 0)) {
      piVar11 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar11);
    }
  }
  if ((*(byte *)(param_1 + 0x12a) & 0x10) != 0) {
    param_1[0x3ac] = param_1[0x3ac] | 0x80000000;
    local_1e4 = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar3) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_0163f64c), iVar8 != 0)) {
          puVar9 = (uint *)(iVar7 + 0x38 + iVar3);
          *puVar9 = *puVar9 & 0xfffffffe;
        }
        local_1e4 = local_1e4 + 1;
        iVar3 = iVar3 + 0x70;
      } while (local_1e4 < (short)param_1[0xc9]);
    }
  }
  if ((param_1[0x128] != 1) && (param_1[0x128] != 3)) {
    FUN_007e0240();
  }
  if ((param_1[0x12a] & 0x200U) != 0) {
    FUN_00e01ca0();
    FUN_00e020f0(param_1[0x13c]);
    FUN_00e01340(0x2c120,0x208,auStack_120);
  }
  FUN_004066f0();
  iStack_1c0 = param_1[0x14];
  iStack_1bc = param_1[0x15];
  iStack_1b8 = param_1[0x16];
  iStack_1b4 = param_1[0x17];
  uStack_1b0 = 0x40133333;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0xc0133333;
  uStack_19c = 0;
  uStack_198 = 0;
  puVar6 = (undefined4 *)FUN_00900480();
  puVar6 = (undefined4 *)*puVar6;
  uVar4 = FUN_009f8b40(0);
  iVar3 = (*(code *)*puVar6)(&iStack_1c0,&uStack_1b0,&uStack_1a0,0x3fc00000,5,uVar4);
  if (iVar3 == 0) {
    FUN_00406760();
    return 0;
  }
  FUN_008f7f00(iVar3,param_1[0x13c]);
  FUN_004066f0();
  iVar7 = _tls_index;
  uVar1 = *(uint *)(iVar3 + 0xc);
  if (uVar1 == 0) {
    if (DAT_01885d68 != 1) {
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_007eb69f:
      piVar11 = (int *)(iVar8 + 4);
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
      iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar7 * 4);
      goto LAB_007eb69f;
    }
  }
  FUN_004066f0();
  uVar1 = *(uint *)(iVar3 + 0xc);
  if (uVar1 == 0) {
    if (DAT_01885d68 == 1) goto LAB_007eb730;
    iVar7 = *(int *)((int)ThreadLocalStoragePointer + iVar7 * 4);
  }
  else {
    puVar9 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar9 = *puVar9 | 4;
    puVar9[4] = puVar9[4] | 0x400000;
    if (DAT_01885d68 == 1) goto LAB_007eb730;
    iVar7 = *(int *)((int)ThreadLocalStoragePointer + iVar7 * 4);
  }
  piVar11 = (int *)(iVar7 + 4);
  *piVar11 = *piVar11 + -1;
  if (((*piVar11 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_007eb730:
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar3);
  FUN_009009c0("WingCheck");
  FUN_00900bd0();
  (**(code **)(*param_1 + 0x318))();
  iVar3 = FUN_00a92f90();
  *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) & 0xfffffffb;
  switch(param_1[0x128]) {
  case 1:
    FUN_007e6650();
    param_1[0x3ac] = param_1[0x3ac] | 0x80000000;
    FUN_00406760();
    return 1;
  case 2:
    if ((*(byte *)(param_1 + 0x12a) & 0x20) == 0) {
      FUN_007e6650();
    }
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x50b];
    iVar3 = FUN_00a8cab0();
    param_1[0x3a8] = param_1[0x3a4];
    uVar4 = 0x10001;
    break;
  case 3:
    FUN_007e5b20();
    FUN_00406760();
    return 1;
  case 4:
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[99] = param_1[0x50b];
    iVar3 = FUN_00a8cab0();
    param_1[0x3a8] = param_1[0x3a4];
    uVar4 = 0x10002;
    break;
  case 5:
    (**(code **)(*param_1 + 0x34c))();
  default:
    (**(code **)(*param_1 + 0x34c))();
    FUN_00406760();
    return 1;
  }
  param_1[0x3a7] = iVar3;
  FUN_00a8caf0(uVar4,0,0,0);
  param_1[0x3a4] = 0;
  FUN_00a962d0(0,0);
  param_1[0x3ab] = 0;
  FUN_00406760();
  return 1;
}

// 007EBBE0  FUN_007ebbe0  size=705  [between]
void __fastcall FUN_007ebbe0(int *param_1)

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
      iVar5 = FUN_007ddf90(0x40400000,0x3cf5c28f);
    }
    else {
      iVar5 = FUN_007ddc90(*(float *)(param_1[0x2a1] + 0x44) + 3.0,0x3cf5c28f);
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
      *(short *)(param_1 + 0x50c) = sVar3 * 3;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] <= 0.0) {
      piVar1 = param_1 + 0x50c;
      *(short *)piVar1 = (short)*piVar1 + -1;
      if ((short)*piVar1 == 0) {
        sVar3 = FUN_00dde2a0(0,1);
        if (sVar3 != 0) {
          param_1[0x3c1] = 0x41f00000;
        }
        FUN_00a8c9b0(0,5,0,0);
        param_1[0xd9] = param_1[0xd9] | 2;
        param_1[99] = param_1[0x50b];
        iVar5 = FUN_00a8cab0();
        param_1[0x3a7] = iVar5;
        param_1[0x3a8] = param_1[0x3a4];
        FUN_00a8caf0(0x10000,0,0,0);
        param_1[0x3a4] = 0;
        FUN_00a962d0(0,0);
        param_1[0x3ab] = 0;
        param_1[0x507] = 0;
      }
      fVar6 = (float10)FUN_00dde300(0,0x3cf5c28f);
      param_1[0x249] = (int)(float)((fVar6 + (float10)0.05) * (float10)60.0);
      FUN_007ea890();
      return;
    }
  }
  return;
}

// 007EBEC0  FUN_007ebec0  size=336  [between]
void __fastcall FUN_007ebec0(int *param_1)

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
    if (param_1[300] == 0x2c120) {
      FUN_007e97f0();
      FUN_007e97f0();
    }
    else {
      FUN_007ea4b0();
      FUN_007ea4b0();
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    sVar2 = FUN_00dde2a0(0,1);
    if (sVar2 != 0) {
      param_1[0x3c1] = 0x41f00000;
    }
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x507] = 0;
    (*pcVar1)();
  }
  return;
}

// 007EC010  Emc120::vf32C  size=600  [class]
undefined4 __fastcall Emc120::vf32C(int *param_1)

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
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int local_198;
  undefined1 auStack_170 [16];
  undefined1 local_160 [348];
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  iVar9 = FUN_00a8c240();
  if (iVar9 == 0) {
    iVar9 = FUN_00a8ef10();
    if (iVar9 == 0) {
      iVar9 = FUN_00a8c760(9);
      if ((iVar9 == 0) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
        if (param_1[0x286] != 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        piVar13 = (int *)param_1[0x19f];
        piVar12 = piVar13 + param_1[0x1a1] * 0x54;
        FUN_00445db0();
        local_198 = -1;
        bVar8 = false;
        if (piVar13 != piVar12) {
          do {
            if (*piVar13 != 0x147) {
              if (*piVar13 == 0x1b0) {
                (**(code **)(*param_1 + 0x370))(piVar13);
              }
              else if (local_198 < piVar13[1]) {
                bVar8 = true;
                FUN_00448f50(piVar13);
                local_198 = piVar13[1];
              }
            }
            piVar13 = piVar13 + 0x54;
          } while (piVar13 != piVar12);
          if (bVar8) {
            iVar9 = FUN_00a8f040(local_160);
            if (iVar9 == 0) {
              iVar9 = FUN_007e4700(local_160);
              if ((iVar9 == 0) && (param_1[0x139] == 0)) {
                FUN_00a81330();
                pfVar10 = (float *)FUN_00a7c8b0();
                fVar1 = *pfVar10;
                fVar2 = pfVar10[1];
                fVar3 = pfVar10[2];
                fVar4 = pfVar10[3];
                pfVar10 = (float *)(**(code **)(*param_1 + 0x68))();
                fVar5 = pfVar10[1];
                fVar6 = pfVar10[2];
                fVar7 = pfVar10[3];
                param_1[0x4f0] = (int)(fVar1 - *pfVar10);
                param_1[0x4f1] = (int)(fVar2 - fVar5);
                param_1[0x4f2] = (int)(fVar3 - fVar6);
                param_1[0x4f3] = (int)(fVar4 - fVar7);
                pfVar10 = (float *)(**(code **)(*param_1 + 0x68))();
                fVar4 = *pfVar10;
                fVar5 = pfVar10[1];
                fVar6 = pfVar10[2];
                pfVar10 = (float *)FUN_00a925a0(auStack_170);
                if (pfVar10[2] * (fVar3 - fVar6) +
                    *pfVar10 * (fVar1 - fVar4) + pfVar10[1] * (fVar2 - fVar5) <= 0.0) {
                  param_1[0x3ae] = 1;
                }
                else {
                  param_1[0x3ae] = 0;
                }
                if (param_1[0x128] == 1) {
                  uVar11 = FUN_007e8740(local_160);
                }
                else {
                  uVar11 = FUN_007e9b10(local_160);
                }
                if (param_1[0x286] != 0) {
                  LeaveCriticalSection(lpCriticalSection);
                }
                return uVar11;
              }
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

// 007EE560  FUN_007ee560  size=449  [callgraph]
void __fastcall FUN_007ee560(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = param_1[0x186];
  if (iVar4 < 0x20001) {
    if (iVar4 == 0x20000) {
      FUN_007ebbe0();
      return;
    }
    switch(iVar4) {
    case 0x10000:
      FUN_007e07e0();
      return;
    case 0x10001:
      FUN_007e2b90();
      return;
    case 0x10002:
      FUN_007e2f70();
      return;
    case 0x10003:
      goto LAB_007eb8c0;
    case 0x10004:
      FUN_007e0a40();
      return;
    case 0x10005:
      FUN_007e12a0();
      return;
    case 0x10006:
      FUN_007e1680();
      return;
    case 0x10007:
      FUN_007e1a70();
      return;
    case 0x10008:
      FUN_007e1e60();
      return;
    case 0x10009:
      FUN_007e2250();
      return;
    case 0x1000a:
      FUN_007e29b0();
      return;
    case 0x1000b:
      FUN_007e3100();
      return;
    default:
      goto switchD_007ee57d_default;
    }
  }
  if (0x30000 < iVar4) {
    if (iVar4 < 0x40001) {
      if (iVar4 != 0x40000) {
        switch(iVar4) {
        case 0x30001:
          FUN_007e4a30();
          return;
        case 0x30002:
          FUN_007e4c50();
          return;
        case 0x30003:
          FUN_007e4dc0();
          return;
        case 0x30004:
          FUN_007e4f30();
          return;
        default:
          return;
        }
      }
      FUN_007ec270();
      return;
    }
    if (iVar4 < 0x10000001) {
      if (iVar4 == 0x10000000) {
        FUN_007e68c0();
        return;
      }
      if (0x80000 < iVar4) {
        switch(iVar4) {
        case 0x80001:
          FUN_007ecc10();
          return;
        case 0x80002:
          FUN_007ecce0();
          return;
        case 0x80003:
          FUN_007ecd90();
          return;
        case 0x80004:
          FUN_007dff20();
          return;
        case 0x80005:
          FUN_007e5710();
          return;
        case 0x80006:
          FUN_007ecee0();
          return;
        case 0x80007:
          FUN_007e0010();
          return;
        default:
          return;
        }
      }
      if (iVar4 == 0x80000) {
        FUN_007ee300();
        return;
      }
      if (iVar4 != 0x40001) {
        return;
      }
      FUN_007ec630();
      return;
    }
    switch(iVar4) {
    case 0x10000001:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(8,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 != 0) {
        FUN_007e4090(0x10000002,0,0,0);
      }
      return;
    case 0x10000002:
      goto LAB_007e6bd0;
    case 0x10000003:
      FUN_007ded60();
      return;
    default:
      goto switchD_007ee57d_default;
    case 0x10000005:
      if (param_1[0x187] == 0) {
        param_1[0x3b5] = 0;
        FUN_00aa4080(0xc,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x3bb] = 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 == 0) {
        return;
      }
      fVar1 = (float)param_1[0x2a4];
      if (NAN(fVar1) || 100.0 < fVar1 == (fVar1 == 100.0)) {
        fVar1 = (float)param_1[0x2a4];
        if (NAN(fVar1) || 49.0 < fVar1 == (fVar1 == 49.0)) {
                    /* WARNING: Could not recover jumptable at 0x007e6e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
        sVar2 = FUN_00dde2a0(0,2);
        if (sVar2 != 0) {
          if (sVar2 == 1) {
            FUN_007e4090(0x1000000c,0,0,0);
            return;
          }
          if (sVar2 != 2) {
            return;
          }
          FUN_007e4090(0x1000000d,0,0,0);
          return;
        }
      }
      FUN_007e4090(0x1000000a,0,0,0);
      return;
    case 0x10000006:
    case 0x10000007:
    case 0x10000008:
    case 0x10000009:
      switch(param_1[0x187]) {
      case 0:
        iVar4 = param_1[0x186];
        uVar3 = 0xf;
        if (iVar4 == 0x10000007) {
          uVar3 = 0x13;
        }
        if (iVar4 == 0x10000008) {
          uVar3 = 0x17;
        }
        if (iVar4 == 0x10000009) {
          uVar3 = 0x1b;
        }
        FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
        iVar4 = param_1[0x186];
        uVar3 = 0x10;
        if (iVar4 == 0x10000007) {
          uVar3 = 0x14;
        }
        if (iVar4 == 0x10000008) {
          uVar3 = 0x18;
        }
        if (iVar4 == 0x10000009) {
          uVar3 = 0x1c;
        }
        FUN_00aa4080(uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
        sVar2 = FUN_00dde2d0(3,6);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x3bb] = 0;
        param_1[0x248] = (int)((float)(int)sVar2 * 20.0);
      case 3:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        fVar1 = (float)param_1[0x248];
        param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x187] = param_1[0x187] + 1;
          iVar4 = FUN_007e4020();
          if (iVar4 != 0) {
            uVar3 = 1;
            FUN_007e4020(1);
            FUN_00a8ccb0(uVar3);
          }
        }
        iVar4 = param_1[0x186];
        fVar1 = (float)param_1[0x25];
        if (iVar4 == 0x10000007) {
          fVar1 = (float)param_1[0x25] + 3.1415927;
        }
        if (iVar4 == 0x10000008) {
          fVar1 = (float)param_1[0x25] - 1.5707964;
        }
        if (iVar4 == 0x10000009) {
          fVar1 = (float)param_1[0x25] + 1.5707964;
        }
        FUN_00a8de10(0x3d4ccccd,fVar1,0);
        return;
      case 4:
        iVar4 = param_1[0x186];
        uVar3 = 0x11;
        if (iVar4 == 0x10000007) {
          uVar3 = 0x15;
        }
        if (iVar4 == 0x10000008) {
          uVar3 = 0x19;
        }
        if (iVar4 == 0x10000009) {
          uVar3 = 0x1d;
        }
        FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      case 5:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar4 = FUN_00a94ce0(0);
        if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007e70e5. Too many branches */
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
        iVar4 = param_1[0x186];
        uVar3 = 0x20;
        if (iVar4 == 0x1000000b) {
          uVar3 = 0x24;
        }
        if (iVar4 == 0x1000000c) {
          uVar3 = 0x28;
        }
        if (iVar4 == 0x1000000d) {
          uVar3 = 0x2c;
        }
        FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        fVar5 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x20);
        param_1[0x461] = (int)(float)fVar5;
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x3bb] = 1;
      case 1:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar4 = FUN_00a94ce0(0);
        if (iVar4 != 0) {
          param_1[0x187] = param_1[0x187] + 1;
        }
        break;
      case 2:
        iVar4 = param_1[0x186];
        uVar3 = 0x21;
        if (iVar4 == 0x1000000b) {
          uVar3 = 0x25;
        }
        if (iVar4 == 0x1000000c) {
          uVar3 = 0x29;
        }
        if (iVar4 == 0x1000000d) {
          uVar3 = 0x2d;
        }
        FUN_00aa4080(uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
        sVar2 = FUN_00dde2d0(3,6);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x248] = (int)((float)(int)sVar2 * 20.0);
      case 3:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        fVar1 = (float)param_1[0x248];
        param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x187] = param_1[0x187] + 1;
          iVar4 = FUN_007e4020();
          if (iVar4 != 0) {
            iVar4 = FUN_00a8cac0();
            FUN_00a8cb60(iVar4 + 1);
          }
        }
        iVar4 = param_1[0x186];
        fVar1 = (float)param_1[0x25];
        if (iVar4 == 0x1000000b) {
          fVar1 = (float)param_1[0x25] + 3.1415927;
        }
        if (iVar4 == 0x1000000c) {
          fVar1 = (float)param_1[0x25] - 1.5707964;
        }
        if (iVar4 == 0x1000000d) {
          fVar1 = (float)param_1[0x25] + 1.5707964;
        }
        FUN_00a8de10(param_1[0x461],fVar1,0);
        break;
      case 4:
        iVar4 = param_1[0x186];
        uVar3 = 0x22;
        if (iVar4 == 0x1000000b) {
          uVar3 = 0x26;
        }
        if (iVar4 == 0x1000000c) {
          uVar3 = 0x2a;
        }
        if (iVar4 == 0x1000000d) {
          uVar3 = 0x2e;
        }
        FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x3bb] = 1;
      case 5:
        FUN_00ac80a0(0x3f800000,0x3f800000);
        iVar4 = FUN_00a94ce0(0);
        if (iVar4 != 0) {
          if (param_1[0x3b5] == 0) {
            iVar4 = FUN_007e4020();
            if ((iVar4 == 0) || (iVar4 = FUN_007e4020(), *(int *)(iVar4 + 0x814) < 4)) {
              (**(code **)(*param_1 + 0x34c))();
            }
            else {
              FUN_007e4090(0x10000002,0,0,0);
            }
          }
          else {
            FUN_007e4090(0x10000005,0,0,0);
          }
        }
      }
      if (param_1[0x2a1] != 0) {
        FUN_00a8e880(param_1[0x2a1] + 0x50);
        (**(code **)(*param_1 + 0x308))(0x3d4ccccd,0x393702d3,0x3d567750,0);
      }
      return;
    case 0x1000000e:
      FUN_007dee90();
      return;
    case 0x1000000f:
      FUN_007def90();
      return;
    case 0x10000010:
    case 0x10000011:
      FUN_007df090();
      return;
    case 0x10000012:
    case 0x10000013:
      FUN_007df2d0();
      return;
    case 0x10000014:
    case 0x10000015:
      FUN_007df510();
      return;
    case 0x10000016:
    case 0x10000017:
    case 0x10000018:
    case 0x10000019:
      FUN_007e7810();
      return;
    case 0x1000001a:
      FUN_007df7e0();
      return;
    case 0x1000001b:
    case 0x1000001c:
    case 0x1000001d:
    case 0x1000001e:
      FUN_007df5d0();
      return;
    case 0x1000001f:
      FUN_007df670();
      return;
    case 0x10000020:
      FUN_007df700();
      return;
    case 0x10000021:
      FUN_007e7950();
      return;
    case 0x10000024:
      *(undefined2 *)(param_1 + 0x209) = 4;
      param_1[0x20a] = 0x78;
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x95,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00a96070(0,0x8000000,1);
        param_1[0x3bb] = 0;
        uVar3 = FUN_00a81330();
        FUN_00a9e0d0(uVar3);
        iVar4 = FUN_007e4020();
        if (iVar4 != 0) {
          FUN_007e4020();
          FUN_007292a0();
        }
        FUN_007e3ec0();
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 == 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x128] = 0;
                    /* WARNING: Could not recover jumptable at 0x007e7d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    case 0x10000025:
      FUN_007e3f20();
      return;
    case 0x10000026:
    case 0x10000029:
      FUN_007e7480();
      return;
    case 0x1000002a:
      FUN_007edf50();
      return;
    case 0x1000002b:
      FUN_007e7d20();
      return;
    case 0x1000002c:
      FUN_007e8180();
      return;
    }
  }
  if (iVar4 == 0x30000) {
    FUN_007e47f0();
    return;
  }
  switch(iVar4) {
  case 0x20001:
  case 0x20002:
    FUN_007e8b70();
    return;
  case 0x20003:
    FUN_007e4330();
    return;
  case 0x20004:
    FUN_007df980();
    return;
  case 0x20005:
    FUN_007ebec0();
    return;
  case 0x20006:
    FUN_007dfa30();
    return;
  }
switchD_007ee57d_default:
  return;
LAB_007e6bd0:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(9,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x43340000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3bb] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_007e6c54;
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007e6c54:
  iVar4 = FUN_007e4020();
  if (((iVar4 != 0) && (iVar4 = FUN_007e4020(), *(int *)(iVar4 + 0x814) == 4)) &&
     (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3d4ccccd,0x393702d3,0x3d567750,0);
    fVar1 = (float)param_1[0x11] - *(float *)(param_1[0x2a1] + 0x44);
    if ((float)param_1[0x2a4] <= 225.0) {
      if (!NAN(fVar1) && 5.0 < fVar1 != (fVar1 == 5.0)) {
        FUN_007df8c0();
        param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x3b9] * (float)param_1[0x244]);
        return;
      }
      if (fVar1 < 4.0) {
        FUN_007df8c0();
        param_1[0x15] = (int)((float)param_1[0x3b9] * (float)param_1[0x244] + (float)param_1[0x15]);
        return;
      }
      FUN_007df8f0();
      return;
    }
  }
  return;
LAB_007eb8c0:
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_007eb9d2;
  }
  switch(param_1[0x477]) {
  case 2:
    uVar3 = 0xc9;
    break;
  default:
    goto switchD_007eb8f4_caseD_3;
  case 4:
    uVar3 = 0xc6;
    break;
  case 8:
    uVar3 = 199;
    break;
  case 0x10:
    uVar3 = 200;
  }
  FUN_00aa4080(uVar3,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
switchD_007eb8f4_caseD_3:
  if (param_1[0x4b9] != 0) {
    param_1[0x248] = 0;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_007eb9d2:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x3ae4c388,0x3db2b8c2,0);
  }
  FUN_007ddd70(param_1[0x4bb],param_1[0x493],param_1[0x494]);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    param_1[0xd9] = param_1[0xd9] | 2;
    param_1[0x4b9] = 0;
    param_1[99] = param_1[0x50b];
    iVar4 = FUN_00a8cab0();
    param_1[0x3a8] = param_1[0x3a4];
    param_1[0x3a7] = iVar4;
    FUN_00a8caf0(0x10000,0,0,0);
    param_1[0x3a4] = 0;
    FUN_00a962d0(0,0);
    param_1[0x3ab] = 0;
  }
  if (((param_1[0x128] - 4U < 2) && (param_1[0x4b9] != 0)) &&
     (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] <= 0.0)) {
    fVar5 = (float10)FUN_00dde300(0,0x3cf5c28f);
    param_1[0x248] = (int)(float)((fVar5 + (float10)0.05) * (float10)60.0);
    FUN_007ea890();
    return;
  }
  return;
}

// 007EEA90  FUN_007eea90  size=176  [callgraph]
void __fastcall FUN_007eea90(undefined1 *param_1)

{
  int iVar1;
  undefined1 local_50 [52];
  float local_1c;
  
  if ((*(int *)(param_1 + 0x11ec) != 0) && (*(int *)(param_1 + 0x12d8) == 0)) {
    iVar1 = FUN_00a8cab0();
    if ((iVar1 == 0x40000) ||
       (((iVar1 = FUN_00a8cab0(), iVar1 == 0x40001 || (iVar1 = FUN_00a8cab0(), iVar1 == 0x30003)) ||
        (iVar1 = FUN_00a8cab0(), iVar1 == 0x30004)))) {
      FID_conflict__memcpy(local_50,param_1 + 0x10,0x40);
      local_1c = local_1c + 1.5;
      param_1 = &stack0xffffffa0;
    }
    Phantom::setTransform(param_1 + 0x10);
    hkpCdPointCollector::hkpCdPointCollector_19();
  }
  return;
}

// 007EEB40  Emc120::vf4C  size=241  [class]
void __fastcall Emc120::vf4C(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_20 [4];
  undefined4 local_1c;
  
  FUN_00a92fb0();
  fVar2 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar2;
  BehaviorEmBase::vf4C();
  FUN_007e0340();
  iVar1 = FUN_00907640(param_1 + 0x11bc,0,local_20);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1418) = local_1c;
  }
  FUN_007dec10();
  iVar1 = FUN_00ac4770();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x618);
    if (*(int *)(param_1 + 0x4a0) == 1) {
      switch(iVar1) {
      case 0x10000000:
        FUN_007e6850();
        break;
      case 0x10000002:
        FUN_007e6a10();
        break;
      case 0x1000002c:
        FUN_007e8150();
      }
    }
    else if (iVar1 < 0x20001) {
      switch(iVar1) {
      case 0x10000:
        lib::StaticArray<Entity*,64>::StaticArray<Entity*,64>_7();
        break;
      case 0x1000b:
        FUN_007ddc70();
      }
    }
  }
  FUN_007ee560();
  FUN_007e3cb0();
  FUN_007eea90();
  return;
}

// 00AB3270  Emc120::vf04  size=6  [class]
undefined * Emc120::vf04(void)

{
  return &DAT_01b35940;
}

// 00AB3280  Emc120::vf20C  size=7  [class]
float10 Emc120::vf20C(void)

{
  return (float10)3.5;
}

// 00AB3290  Emc120::vf1DC  size=6  [class]
undefined4 Emc120::vf1DC(void)

{
  return 1;
}

// 00AB32A0  FUN_00ab32a0  size=209  [callgraph]
void FUN_00ab32a0(void)

{
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
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB9F20  Emc120::vf00  size=30  [class]
undefined4 __thiscall Emc120::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab32a0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

