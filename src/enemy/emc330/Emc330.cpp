// src/enemy/emc330/Emc330.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0083F6B0..00AB9970, 11 functions

#include "types.h"

// 0083F6B0  Emc330::vf40  size=262  [class]
undefined4 __fastcall Emc330::vf40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = EmBaseDLC::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x460 + iVar2) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x560;
    } while (iVar1 < *(short *)(param_1 + 0x32c));
  }
  iVar1 = FUN_0094b730();
  *(int *)(param_1 + 0x1020) = iVar1;
  if (iVar1 != 0) {
    FUN_00d9f450();
    *(undefined4 *)(param_1 + 0xfc4) = 0x40000000;
    *(undefined4 *)(param_1 + 0xfc0) = 0x3fc00000;
    *(undefined4 *)(param_1 + 0xf04) = 0xbf800000;
    FUN_00d9c9a0(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xebc) = 0;
    *(float *)(param_1 + 0xec0) = *(float *)(*(int *)(param_1 + 0x1020) + 4) * 0.017453292;
    *(undefined4 *)(param_1 + 0xe90) = 0;
    *(undefined4 *)(param_1 + 0xe94) = 0;
    *(undefined4 *)(param_1 + 0xe98) = 0;
    *(undefined4 *)(param_1 + 0xea0) = 0;
    *(undefined4 *)(param_1 + 0xea4) = 0;
    *(undefined4 *)(param_1 + 0xea8) = 0;
    *(undefined4 *)(param_1 + 0xeac) = 0x3f800000;
    FUN_00a8edf0(1);
    FUN_00aa92c0(0);
    *(undefined4 *)(param_1 + 0xec4) = 0;
    *(undefined4 *)(param_1 + 0xec8) = 0;
    return 1;
  }
  return 0;
}

// 0083F7C0  Emc330::vf44  size=30  [class]
void Emc330::vf44(void)

{
  FUN_00a944d0();
  FUN_00a9d8a0();
  FUN_00a8c820();
  BehaviorEmBase::vf44();
  return;
}

// 0083F7E0  Emc330::vf48  size=275  [class]
void __fastcall Emc330::vf48(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  if (param_1[0x3b2] == 0) {
    if (param_1[0x3b1] == 0) {
      piVar2 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
      if (iVar3 != 0) {
        FUN_00d9c9a0(param_1 + 4);
        uVar4 = FUN_00a7c8b0();
        iVar3 = FUN_00d9c6c0(uVar4);
        if (iVar3 != 0) {
          FUN_00e5e050("emc330_se_bp_get",0);
          FUN_00aa92c0(1);
          param_1[0x248] = 0;
          (**(code **)(*param_1 + 0x20))();
          piVar2 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar2 + 0x3c))(100);
          param_1[0x3b1] = 1;
        }
      }
      fVar5 = (float10)FUN_00a92ff0();
      fVar5 = fVar5 * (float10)(float)param_1[0x3b0] + (float10)(float)param_1[0x3af];
      param_1[0x3af] = (int)(float)fVar5;
      if ((float10)3.1415927 < fVar5) {
        param_1[0x3af] = -0x3fb6f025;
      }
      param_1[0x25] = param_1[0x3af];
    }
    else {
      fVar5 = (float10)FUN_00a92ff0();
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(float)(fVar5 + (float10)fVar1);
      if ((float10)30.0 <= fVar5 + (float10)fVar1) {
        FUN_009fdde0();
        EmBaseDLC::vf48();
        return;
      }
    }
  }
  EmBaseDLC::vf48();
  return;
}

// 0083F900  Emc330::vf54  size=5  [class]
void __fastcall Emc330::vf54(int *param_1)

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

// 0083F910  Emc330::vf50  size=16  [class]
void Emc330::vf50(void)

{
  FUN_00a93170();
  BehaviorEmBase::vf50();
  return;
}

// 0083F920  Emc330::vf264  size=52  [class]
undefined4 __thiscall Emc330::vf264(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xab0);
  for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  return 1;
}

// 0083F960  Emc330::vf32C  size=3  [class]
undefined4 Emc330::vf32C(void)

{
  return 0;
}

// 0083F970  Emc330::vf4C  size=657  [class]
void __fastcall Emc330::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00ac80a0(0x3f800000,0x3f800000);
  BehaviorEmBase::vf4C();
  if (((param_1[0x3b2] == 0) && ((*(byte *)(param_1 + 0x2c0) & 1) != 0)) && (param_1[0x2c2] != -1))
  {
    iVar2 = param_1[0x188];
    if (iVar2 == 0) {
      FUN_00a8d6c0(param_1 + 0x10);
      param_1[0x188] = param_1[0x188] + 1;
      return;
    }
    if (iVar2 == 1) {
      param_1[0x3ac] = 0x3dcccccd;
      param_1[0x3ad] = 0x3f800000;
      FUN_00a8d790(param_1 + 0x3a4);
      local_20 = (float)param_1[0x3a4] - (float)param_1[0x14];
      local_1c = (float)param_1[0x3a5] - (float)param_1[0x15];
      local_18 = (float)param_1[0x3a6] - (float)param_1[0x16];
      local_14 = 1.0;
      fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_18 = 0.0;
        local_1c = 1.0;
        local_20 = 0.0;
      }
      param_1[0x3a8] = 0;
      param_1[0x3a9] = 0;
      param_1[0x3aa] = 0;
      param_1[0x3ab] = 0x3f800000;
      fVar1 = (float)param_1[0x3ac];
      param_1[0x3a8] = (int)(fVar1 * local_20);
      param_1[0x3a9] = (int)(local_1c * fVar1);
      param_1[0x3aa] = (int)(local_18 * fVar1);
      param_1[0x3ab] = (int)(fVar1 * local_14);
      param_1[0x188] = param_1[0x188] + 1;
      return;
    }
    if (iVar2 == 2) {
      iVar2 = FUN_00a97e60(param_1[0x3ac],0);
      if (iVar2 != 1) {
        pfVar3 = (float *)(**(code **)(*param_1 + 0x68))();
        local_20 = *pfVar3;
        local_1c = pfVar3[1];
        local_18 = pfVar3[2];
        local_14 = pfVar3[3];
        fVar4 = (float10)FUN_00a92ff0();
        local_20 = (float)((float10)(float)param_1[0x3a8] * fVar4 + (float10)local_20);
        local_1c = (float)((float10)(float)param_1[0x3a9] * fVar4 + (float10)local_1c);
        local_18 = (float)((float10)(float)param_1[0x3aa] * fVar4 + (float10)local_18);
        local_14 = (float)((float10)(float)param_1[0x3ab] * fVar4 + (float10)local_14);
        (**(code **)(*param_1 + 0x6c))(&local_20);
        return;
      }
      param_1[0x188] = param_1[0x188] + 1;
      param_1[0x3ae] = 0;
      return;
    }
    if (iVar2 == 3) {
      fVar4 = (float10)FUN_00a92ff0();
      fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[0x3ae];
      param_1[0x3ae] = (int)(float)fVar4;
      if ((float10)(float)param_1[0x3ad] < fVar4) {
        param_1[0x188] = 1;
      }
    }
  }
  return;
}

// 00AB15D0  Emc330::vf04  size=6  [class]
undefined * Emc330::vf04(void)

{
  return &DAT_01b35a70;
}

// 00AB15E0  Emc330::vf34C  size=1  [class]
void Emc330::vf34C(void)

{
  return;
}

// 00AB9970  Emc330::vf00  size=43  [class]
undefined4 __thiscall Emc330::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

