// src/unsorted/unit_00541F30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00541F30..005428F0, 8 functions

#include "mgrr.h"

// 00541F30  FUN_00541f30  size=99  [run]
void __fastcall FUN_00541f30(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xe34) * 0.24561137 * 6.2831855);
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 + (float10)*(float *)(param_1 + 0xeb0)));
  *(float *)(param_1 + 0xeb0) = (float)fVar3;
  uVar2 = 0;
  do {
    iVar1 = FUN_00a12210(*(undefined4 *)((int)&DAT_01641118 + uVar2));
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0xeb0);
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  return;
}

// 00541FA0  FUN_00541fa0  size=314  [run]
void __fastcall FUN_00541fa0(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0xe30) == 0) {
    fVar2 = (float10)*(float *)(param_1 + 0xe28) + (float10)0.017453292;
    *(float *)(param_1 + 0xe28) = (float)fVar2;
    fVar3 = (float10)fsin(fVar2);
    fVar4 = (float10)1.3962634;
    fVar2 = (float10)0;
    if (fVar2 < fVar3) {
      fVar4 = (float10)0.87266463;
    }
    *(float *)(param_1 + 0xe04) = (float)(fVar4 * fVar3);
    if (((((float10)*(float *)(param_1 + 0xe2c) < fVar2) &&
         (fVar3 < (float10)*(float *)(param_1 + 0xe2c))) ||
        ((fVar2 < (float10)*(float *)(param_1 + 0xe2c) &&
         ((float10)*(float *)(param_1 + 0xe2c) < fVar3)))) || (ABS(fVar3) < (float10)0.001)) {
      *(undefined4 *)(param_1 + 0xe30) = 1;
      fVar2 = (float10)FUN_00dde300(0x40000000,0x40900000);
      *(float *)(param_1 + 0xe24) = (float)(fVar2 * (float10)60.0);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  else if ((*(int *)(param_1 + 0xe30) == 1) &&
          (fVar1 = *(float *)(param_1 + 0xe24) - *(float *)(param_1 + 0x910),
          *(float *)(param_1 + 0xe24) = fVar1, fVar1 <= 0.0)) {
    *(undefined4 *)(param_1 + 0xe30) = 0;
    fVar2 = (float10)fsin((float10)*(float *)(param_1 + 0xe28));
    if ((float10)0.01 < ABS(fVar2)) {
      *(float *)(param_1 + 0xe2c) = -*(float *)(param_1 + 0xe2c);
      return;
    }
  }
  return;
}

// 005420E0  FUN_005420e0  size=101  [run]
void __thiscall FUN_005420e0(int param_1,int param_2)

{
  float10 fVar1;
  
  if (0.0 < *(float *)(param_1 + 0xe94)) {
    fVar1 = (float10)FUN_00dde300(0,0x3d0efa35);
    *(float *)(param_2 + 0x14) = (float)fVar1;
    fVar1 = (float10)FUN_00dde300(0xbe0efa35,0x3e0efa35);
    *(float *)(param_2 + 0x10) = (float)fVar1;
    return;
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}

// 00542150  FUN_00542150  size=125  [run]
undefined4 __thiscall FUN_00542150(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  if ((*(int *)(param_1 + 0xe98) < 1) && (*(float *)(param_1 + 0xe94) <= 0.0)) {
    *(undefined4 *)(param_1 + 0xe98) = param_2;
    fVar4 = (float10)FUN_00a8ec30(param_3);
    *(float *)(param_1 + 0xe9c) = (float)fVar4;
    fVar1 = *(float *)(param_1 + 0x40) - *param_3;
    fVar3 = *(float *)(param_1 + 0x44) - param_3[1];
    fVar2 = *(float *)(param_1 + 0x48) - param_3[2];
    *(float *)(param_1 + 0xea0) = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) * 0.2 + 6.0;
    return 1;
  }
  return 0;
}

// 005423C0  FUN_005423c0  size=193  [run]
void __thiscall FUN_005423c0(int param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  int iVar1;
  float local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_30[0] = 1.6;
  param_4 = param_4 + -1;
  local_30[1] = 1.7;
  local_30[2] = -0.6;
  local_20 = 0;
  local_1c = 0x3fc90fdb;
  local_18 = 0;
  *param_2 = local_30[param_4 * 4];
  param_2[1] = local_30[param_4 * 4 + 1];
  param_2[2] = local_30[param_4 * 4 + 2];
  param_2[3] = local_30[param_4 * 4 + 3];
  *param_3 = local_30[param_4 * 4 + 4];
  param_3[1] = local_30[param_4 * 4 + 5];
  param_3[2] = local_30[param_4 * 4 + 6];
  param_3[3] = local_30[param_4 * 4 + 7];
  if (param_5 != 0) {
    iVar1 = FUN_00a12210(0);
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    D3DXVec3TransformNormal(param_2,param_2,iVar1 + 0x10);
    *param_2 = *param_2 + *(float *)(iVar1 + 0x40);
    param_2[1] = *(float *)(iVar1 + 0x44) + param_2[1];
    param_2[2] = *(float *)(iVar1 + 0x48) + param_2[2];
  }
  return;
}

// 005424D0  FUN_005424d0  size=53  [run]
void FUN_005424d0(void)

{
  FUN_00a8c9b0(0,7,0x3f800000,0);
  FUN_00a8c9b0(0,8,0x3f800000,0);
  return;
}

// 005425A0  FUN_005425a0  size=47  [run]
void __fastcall FUN_005425a0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0xe38) - *(float *)(param_1 + 0xe40) * *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0xe38) = fVar1;
  if (fVar1 <= 0.0) {
    *(undefined4 *)(param_1 + 0xe38) = 0;
    return;
  }
  return;
}

// 005428F0  FUN_005428f0  size=1070  [run]
undefined4 __fastcall FUN_005428f0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_b0;
  undefined4 local_ac;
  undefined1 auStack_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [124];
  
  iVar1 = BehaviorEmBase::startup();
  if (iVar1 != 0) {
    local_ac = 0;
    iVar1 = FUN_00a54ae0(&local_ac,param_1 + 0x125,"_col.hkx");
    if (iVar1 != 0) {
      iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = RigidBodyCollision::RigidBodyCollision();
      }
      param_1[0x1ec] = iVar2;
      if (iVar2 != 0) {
        FUN_008f6410(param_1[0x13c],iVar1,local_ac);
        FUN_008f2cd0(1);
        (**(code **)(*(int *)param_1[0x1ec] + 0x108))(7);
        puVar3 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar3);
      }
    }
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(8);
    if (((int *)param_1[0x1ec] != (int *)0x0) &&
       (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
      Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],2);
      param_1[0x388] = 0;
      iVar2 = 0;
      iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
      if (0 < iVar1) {
        do {
          iVar1 = 0;
          (**(code **)(*(int *)param_1[0x1ec] + 300))(auStack_a8,iVar2);
          if (iStack_b0 != 0) {
            local_ac = FUN_009124a0();
            iVar4 = FUN_00fdbbd0(local_ac,"_000_00");
            if (iVar4 != 0) {
              iVar1 = param_1[0x388];
              param_1[iVar1 + 0x387] = iVar2;
              param_1[0x388] = param_1[0x388] + 1;
              iVar1 = iVar1 + 1;
            }
            lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(iVar1,local_ac);
            iVar1 = FUN_00a93610(iVar1);
            if (iVar1 != 0) {
              uVar5 = FUN_00a8d2a0();
              *(uint *)(iVar1 + 900) = *(uint *)(iVar1 + 900) | 2;
              *(undefined4 *)(iVar1 + 0x374) = uVar5;
            }
          }
          iVar2 = iVar2 + 1;
          iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
        } while (iVar2 < iVar1);
      }
    }
    iVar1 = FUN_008ec660(param_1,0x40200000,0x3f800000,0x41a00000,0x41a00000,0x78,7,0);
    param_1[0x1d9] = iVar1;
    puVar3 = (undefined4 *)FUN_009f8b60();
    FUN_008e26e0(*puVar3);
    FUN_008e6d00();
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      *(undefined4 *)param_1[0xdc] = 0;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 1;
      *(undefined4 *)(param_1[0xdc] + 8) = 1;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 0xc) = 2;
    }
    uStack_8c = 0x3f666666;
    uStack_88 = 0x3f99999a;
    uStack_84 = 0x3f8ccccd;
    uStack_a0 = 0x3e4ccccd;
    uStack_9c = 0x40400000;
    uStack_98 = 0x40000000;
    FUN_00a8e4d0(&uStack_a0,&uStack_8c);
    iVar1 = FUN_00c5def0(param_1[0x13c]);
    param_1[0x25c] = iVar1;
    param_1[0x1b1] = 0;
    FUN_00405230();
    uStack_a0 = 0;
    uStack_9c = 0x3fc00000;
    uStack_98 = 0;
    FUN_00c151f0(1,param_1[0x13c],0,&uStack_a0,0,0x41200000,0x3f800000,0,0);
    FUN_00c57830(auStack_80);
    param_1[0x1bb] = 1;
    FUN_00a929d0();
    param_1[0x371] = 0x3f800000;
    param_1[0x370] = 0;
    param_1[0x375] = 0;
    param_1[0x372] = 0;
    param_1[0x378] = 0;
    param_1[0x373] = 0;
    param_1[0x3a6] = 0;
    param_1[0x376] = 0;
    param_1[0x377] = 0x3fc00000;
    param_1[0x379] = 0;
    param_1[0x38d] = 0;
    param_1[0x38e] = 0;
    param_1[0x38f] = 0;
    param_1[0x390] = 0;
    param_1[0x391] = 0;
    param_1[0x3ac] = 0;
    param_1[0x3a5] = 0;
    param_1[0x37a] = 0x3fc00000;
    param_1[0x3a7] = 0;
    param_1[0x3a8] = 0;
    param_1[0x3a9] = 0;
    param_1[0x389] = 0;
    param_1[0x38a] = 0;
    param_1[0x38b] = 0x3f7d70a4;
    param_1[0x38c] = 0;
    iVar1 = FUN_00de4500("Et0050_0000.mot");
    param_1[0x3aa] = iVar1;
    iVar1 = FUN_00de4500("Et0050_0000_0_seq.bxm");
    param_1[0x3ab] = iVar1;
    FUN_00a9efb0(param_1[0x3aa],iVar1,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x34c))();
    return 1;
  }
  return 0;
}

