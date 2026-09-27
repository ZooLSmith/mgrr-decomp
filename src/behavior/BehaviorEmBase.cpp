// src/behavior/BehaviorEmBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043F8F0..00AD3B00, 128 functions

#include "types.h"

// 0043F8F0  BehaviorEmBase::vf338  size=3  [class]
void BehaviorEmBase::vf338(void)

{
  return;
}

// 004ED820  BehaviorEmBase::vf04  size=6  [class]
undefined * BehaviorEmBase::vf04(void)

{
  return &DAT_01be9c78;
}

// 004ED830  BehaviorEmBase::vf244  size=13  [class]
bool BehaviorEmBase::vf244(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0x21);
  return iVar1 == 0;
}

// 004ED840  BehaviorEmBase::vf330  size=6  [class]
undefined4 BehaviorEmBase::vf330(void)

{
  return 1;
}

// 004ED850  BehaviorEmBase::vf274  size=7  [class]
undefined4 __fastcall BehaviorEmBase::vf274(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa48);
}

// 004ED860  BehaviorEmBase::vf108  size=13  [class]
void __fastcall BehaviorEmBase::vf108(int *param_1)

{
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004ED870  BehaviorEmBase::vf350  size=10  [class]
void __fastcall BehaviorEmBase::vf350(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ed878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004ED880  BehaviorEmBase::vf368  size=3  [class]
undefined4 BehaviorEmBase::vf368(void)

{
  return 0;
}

// 004ED890  BehaviorEmBase::vf18C  size=34  [class]
undefined4 __fastcall BehaviorEmBase::vf18C(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x194))();
  if (iVar1 != 0) {
    param_1[0x361] = 1;
    return 1;
  }
  return 0;
}

// 004ED8C0  BehaviorEmBase::vf190  size=7  [class]
undefined4 __fastcall BehaviorEmBase::vf190(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd84);
}

// 004ED8D0  BehaviorEmBase::vf194  size=6  [class]
undefined4 BehaviorEmBase::vf194(void)

{
  return 1;
}

// 004ED8E0  BehaviorEmBase::vf238  size=6  [class]
undefined4 BehaviorEmBase::vf238(void)

{
  return 1;
}

// 004ED8F0  BehaviorEmBase::vf23C  size=6  [class]
undefined4 BehaviorEmBase::vf23C(void)

{
  return 1;
}

// 004ED900  BehaviorEmBase::vf34C  size=26  [class]
void __fastcall BehaviorEmBase::vf34C(int param_1)

{
  FUN_00dd5650(&DAT_0163fdc8,*(uint *)(param_1 + 0x4b0) & 0xffff);
  return;
}

// 004ED920  BehaviorEmBase::vf00  size=30  [class]
undefined4 __thiscall BehaviorEmBase::vf00(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC4140  BehaviorEmBase::vf30  size=32  [class]
void __fastcall BehaviorEmBase::vf30(int param_1)

{
  BehaviorAppBase::vf30();
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xb0) = *(undefined4 *)(param_1 + 0xab8);
  }
  return;
}

// 00AC4160  FUN_00ac4160  size=17  [between]
void FUN_00ac4160(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00c1b9a0();
  (**(code **)(*piVar1 + 0x34))(0);
  return;
}

// 00AC4180  BehaviorEmBase::vf32C  size=3  [class]
undefined4 BehaviorEmBase::vf32C(void)

{
  return 0;
}

// 00AC4190  BehaviorEmBase::vf50  size=21  [class]
void __fastcall BehaviorEmBase::vf50(int *param_1)

{
  BehaviorAppBase::vf50();
                    /* WARNING: Could not recover jumptable at 0x00ac41a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}

// 00AC41B0  BehaviorEmBase::vf31C  size=721  [class]
void __fastcall BehaviorEmBase::vf31C(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0x764);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x104) != 1)) {
    *(undefined4 *)(iVar2 + 0x104) = 1;
    *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
  }
  if (*(int *)(param_1 + 0x884) == 0) {
    if (*(int *)(param_1 + 0x764) != 0) {
      local_24 = *(float *)(param_1 + 0x910);
      local_30 = *(float *)(param_1 + 0x890) * local_24;
      local_2c = *(float *)(param_1 + 0x894) * local_24;
      local_28 = *(float *)(param_1 + 0x898) * local_24;
      local_24 = local_24 * *(float *)(param_1 + 0x89c);
      FUN_008e0c00(&local_30);
    }
    if (*(float *)(param_1 + 0x894) <= 0.0) {
      if (0.0 < *(float *)(param_1 + 0xa28) != (*(float *)(param_1 + 0xa28) == 0.0)) {
        *(float *)(param_1 + 0xa28) = *(float *)(param_1 + 0xa28) - *(float *)(param_1 + 0x910);
      }
      if (0.0 <= *(float *)(param_1 + 0xa28)) {
        fVar3 = (float10)FUN_00fdc1f0();
        fVar4 = (float10)*(float *)(param_1 + 0x8a8) * (float10)*(float *)(param_1 + 0x910) *
                (float10)0.05;
      }
      else {
        fVar3 = (float10)FUN_00fdc1f0();
        fVar4 = (float10)*(float *)(param_1 + 0x8a8) * (float10)*(float *)(param_1 + 0x910) *
                (float10)1.1;
      }
      *(float *)(param_1 + 0x894) = (float)(((float10)*(float *)(param_1 + 0x894) - fVar4) * fVar3);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x894) -
              *(float *)(param_1 + 0x8a8) * *(float *)(param_1 + 0x910) * 0.9;
      *(float *)(param_1 + 0x894) = fVar1;
      *(undefined4 *)(param_1 + 0x974) = 0;
      if ((fVar1 < 0.0) && (*(undefined4 *)(param_1 + 0x894) = 0, *(int *)(param_1 + 0xa20) != 0)) {
        *(undefined4 *)(param_1 + 0xa20) = 0;
        *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(param_1 + 0xa24);
      }
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      if ((*(float *)(*(int *)(*(int *)(param_1 + 0x764) + 0xd0) + 4) < 0.0) &&
         (iVar2 = FUN_008e2740(), iVar2 != 0)) {
        *(undefined4 *)(param_1 + 0x8a0) = 1;
        *(undefined4 *)(param_1 + 0x894) = 0;
      }
      local_30 = *(float *)(param_1 + 0x890);
      local_2c = *(float *)(param_1 + 0x894);
      local_28 = *(float *)(param_1 + 0x898);
      local_24 = *(float *)(param_1 + 0x89c);
      D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 0xb0);
      fStack_20 = *(float *)(param_1 + 0x910);
      local_2c = fStack_20 * *(float *)(param_1 + 0x890);
      local_28 = fStack_20 * *(float *)(param_1 + 0x894);
      local_24 = fStack_20 * *(float *)(param_1 + 0x898);
      fStack_20 = fStack_20 * *(float *)(param_1 + 0x89c);
      FUN_008e0c00(&local_2c);
      iVar2 = FUN_008e2740();
      if (iVar2 != 0) {
        *(float *)(param_1 + 0x890) = *(float *)(param_1 + 0x890) * 0.7;
        *(float *)(param_1 + 0x898) = *(float *)(param_1 + 0x898) * 0.7;
        return;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x890) = 0;
    *(undefined4 *)(param_1 + 0x894) = 0;
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(undefined4 *)(param_1 + 0x89c) = local_14;
    if (*(int *)(param_1 + 0x764) != 0) {
      local_24 = *(float *)(param_1 + 0x910);
      local_30 = *(float *)(param_1 + 0x890) * local_24;
      local_2c = *(float *)(param_1 + 0x894) * local_24;
      local_28 = *(float *)(param_1 + 0x898) * local_24;
      local_24 = local_24 * *(float *)(param_1 + 0x89c);
      FUN_008e0c00(&local_30);
      return;
    }
  }
  return;
}

// 00AC4490  FUN_00ac4490  size=259  [between]
void __fastcall FUN_00ac4490(int param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = *(int *)(param_1 + 0xa84);
  *(undefined4 *)(param_1 + 0xa8c) = 0;
  *(undefined4 *)(param_1 + 0xa90) = 0;
  if (iVar1 != 0) {
    local_20 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x44);
    local_18 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x48);
    local_14 = *(float *)(iVar1 + 0x4c) - *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0xa94) = fVar2;
    *(float *)(param_1 + 0xa98) = ABS(fVar2);
    *(float *)(param_1 + 0xa8c) = fVar2 * fVar2 + local_20 * local_20 + local_18 * local_18;
    local_1c = 0.0;
    *(float *)(param_1 + 0xa90) = local_20 * local_20 + local_18 * local_18;
    fVar3 = (float10)FUN_00a8ec30(iVar1 + 0x50);
    fVar3 = (float10)FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
    *(float *)(param_1 + 0xa9c) = (float)fVar3;
    *(float *)(param_1 + 0xaa0) = (float)ABS(fVar3);
    if (local_18 * local_18 + local_1c * local_1c + local_20 * local_20 <= 0.0) {
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 1.0;
      D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
      return;
    }
  }
  return;
}

// 00AC45B0  FUN_00ac45b0  size=29  [between]
undefined4 FUN_00ac45b0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    uVar3 = (**(code **)(*piVar2 + 0x28))(0);
    return uVar3;
  }
  return 0;
}

// 00AC45D0  FUN_00ac45d0  size=105  [between]
bool __thiscall
FUN_00ac45d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x330))();
  if (iVar1 != 0) {
    iVar1 = FUN_00a9f180(param_2,param_3,param_10,param_4,param_5,param_6,param_7,param_8,param_9);
    return iVar1 != -1;
  }
  return false;
}

// 00AC4640  FUN_00ac4640  size=25  [between]
void __thiscall FUN_00ac4640(int param_1,undefined4 param_2)

{
  FUN_00c19eb0(*(undefined4 *)(param_1 + 0xb9c),param_2);
  return;
}

// 00AC4670  FUN_00ac4670  size=30  [between]
void __thiscall FUN_00ac4670(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00c19f10(*(undefined4 *)(param_1 + 0xb9c),param_3,param_2);
  return;
}

// 00AC4690  FUN_00ac4690  size=27  [between]
undefined4 __fastcall FUN_00ac4690(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x808) != 0) {
    iVar1 = FUN_00a8d820();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00AC46B0  FUN_00ac46b0  size=30  [between]
void __thiscall FUN_00ac46b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00c19f90(param_2,*(undefined4 *)(param_1 + 0xb9c),param_3);
  return;
}

// 00AC46D0  FUN_00ac46d0  size=10  [between]
uint __fastcall FUN_00ac46d0(int param_1)

{
  return *(uint *)(param_1 + 0x4a8) >> 0x1f;
}

// 00AC46E0  FUN_00ac46e0  size=13  [between]
uint __fastcall FUN_00ac46e0(int param_1)

{
  return *(uint *)(param_1 + 0x4a8) >> 0x1e & 1;
}

// 00AC46F0  FUN_00ac46f0  size=13  [between]
uint __fastcall FUN_00ac46f0(int param_1)

{
  return *(uint *)(param_1 + 0x4a8) >> 0x1d & 1;
}

// 00AC4700  FUN_00ac4700  size=7  [between]
undefined4 __fastcall FUN_00ac4700(int param_1)

{
  return *(undefined4 *)(param_1 + 0xba4);
}

// 00AC4710  FUN_00ac4710  size=87  [between]
undefined4 __thiscall FUN_00ac4710(int param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (*(int *)(param_1 + 0x808) != 0)) {
    iVar1 = *(int *)(param_1 + 0xb9c);
    if (*(int *)(param_1 + 0xb9c) < 0) {
      iVar1 = DAT_01d5bad4;
    }
    iVar1 = FUN_00c1a020(iVar1,param_2);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0xb08) = param_2;
      FUN_00c9da40(iVar1);
      return 1;
    }
  }
  return 0;
}

// 00AC4770  FUN_00ac4770  size=12  [between]
uint FUN_00ac4770(void)

{
  return DAT_01bea074 >> 0xf & 1;
}

// 00AC4780  FUN_00ac4780  size=10  [between]
void FUN_00ac4780(void)

{
  FUN_009c4bf0();
  return;
}

// 00AC4790  FUN_00ac4790  size=118  [between]
float10 __fastcall FUN_00ac4790(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  fVar2 = (float10)0;
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = FUN_009c4bf0();
    switch(uVar1) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00ac47c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x5c))();
      return fVar2;
    default:
      fVar2 = (float10)(float)fVar2;
      break;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00ac47ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 100))();
      return fVar2;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x00ac47d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x6c))();
      return fVar2;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x00ac47fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x74))();
      return fVar2;
    }
  }
  return fVar2;
}

// 00AC4820  FUN_00ac4820  size=118  [between]
float10 __fastcall FUN_00ac4820(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  fVar2 = (float10)0;
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = FUN_009c4bf0();
    switch(uVar1) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00ac4858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x60))();
      return fVar2;
    default:
      fVar2 = (float10)(float)fVar2;
      break;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00ac487a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x68))();
      return fVar2;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x00ac4869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x70))();
      return fVar2;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x00ac488b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x78))();
      return fVar2;
    }
  }
  return fVar2;
}

// 00AC48E0  FUN_00ac48e0  size=14  [between]
void FUN_00ac48e0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00c1b9a0();
                    /* WARNING: Could not recover jumptable at 0x00ac48ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x4c))();
  return;
}

// 00AC48F0  FUN_00ac48f0  size=274  [between]
undefined4 __thiscall FUN_00ac48f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_20;
  float local_1c;
  float local_14;
  
  if ((param_2 != -1) && (param_1 = FUN_00a12210(param_2), param_1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00f98a90();
  iVar2 = FUN_00f98aa0();
  iVar3 = FUN_00f98a90();
  iVar4 = FUN_00f98aa0();
  FUN_00d9fa80(&local_20,param_1 + 0x40);
  if ((((1.0 < local_14) && ((float)iVar1 * 0.5 - (float)iVar3 * 0.5 < local_20)) &&
      (local_20 < (float)iVar3 * 0.5 + (float)iVar1 * 0.5)) &&
     (((float)iVar2 * 0.5 - (float)iVar4 * 0.5 < local_1c &&
      (local_1c < (float)iVar4 * 0.5 + (float)iVar2 * 0.5)))) {
    return 1;
  }
  return 0;
}

// 00AC4A90  FUN_00ac4a90  size=60  [between]
void __thiscall FUN_00ac4a90(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0xbd8) = *(int *)(param_1 + 0xbd8) - param_2;
  iVar1 = *(int *)(param_1 + 0xbd8);
  if (iVar1 <= *(int *)(param_1 + 0xbdc)) {
    *(uint *)(param_1 + 0xbd4) = *(uint *)(param_1 + 0xbd4) | 2;
  }
  if (iVar1 <= *(int *)(param_1 + 0xbe0)) {
    *(uint *)(param_1 + 0xbd4) = *(uint *)(param_1 + 0xbd4) | 4;
  }
  if (iVar1 < 1) {
    *(uint *)(param_1 + 0xbd4) = *(uint *)(param_1 + 0xbd4) | 8;
  }
  return;
}

// 00AC4B50  BehaviorEmBase::vf248  size=18  [class]
void __thiscall BehaviorEmBase::vf248(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x360))(param_2);
  return;
}

// 00AC4B90  BehaviorEmBase::vf228  size=13  [class]
bool BehaviorEmBase::vf228(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0x1d);
  return iVar1 == 0;
}

// 00AC4BA0  BehaviorEmBase::vf33C  size=14  [class]
void BehaviorEmBase::vf33C(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x18) = 0x42000;
  return;
}

// 00AC4BB0  BehaviorEmBase::vf340  size=11  [class]
void __fastcall BehaviorEmBase::vf340(int param_1)

{
  *(undefined4 *)(param_1 + 0xa48) = 0;
  return;
}

// 00AC4BD0  FUN_00ac4bd0  size=42  [between]
void FUN_00ac4bd0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
    return;
  }
  return;
}

// 00AC4C20  BehaviorEmBase::vf36C  size=38  [class]
void __thiscall BehaviorEmBase::vf36C(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009f8b40(0);
  uVar1 = (**(code **)(*param_1 + 0x68))(uVar1);
  FUN_009577e0(param_2,uVar1);
  return;
}

// 00AC7C10  BehaviorEmBase::vf40  size=631  [class]
undefined4 __fastcall BehaviorEmBase::vf40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 != 0) {
    param_1[0x28b] = 0;
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
      *(undefined4 *)param_1[0xdc] = 1;
    }
    param_1[0xd9] = param_1[0xd9] | 0x100000;
    FUN_00410540(0x40,&DAT_01b7bd48);
    lib::AllocatedArray<Collision*>::AllocatedArray<Collision*>();
    param_1[400] = 2;
    FUN_00dd7240();
    param_1[0x130] = param_1[0x130] | 0x20;
    FUN_00c5e220(param_1[0x13c]);
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x1000;
    }
    FUN_00a8edf0(100);
    lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
    param_1[0x229] = 0;
    param_1[0x228] = 1;
    param_1[0x224] = 0;
    uVar2 = 2;
    param_1[0x225] = -0x43dc28f6;
    param_1[0x226] = 0;
    param_1[0x227] = local_14;
    param_1[0x22a] = 0x3c23d70a;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar2);
    (**(code **)(*param_1 + 0x314))();
    param_1[0x28a] = -0x40800000;
    param_1[0x22b] = 0;
    param_1[0x22c] = 0;
    param_1[0x1a3] = 0;
    param_1[0x288] = 0;
    param_1[0x260] = 0;
    param_1[0x261] = 0;
    param_1[0x262] = 0;
    uStack_20 = 1;
    uStack_1c = 1;
    uStack_18 = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&uStack_20);
    if (iVar1 != 0) {
      param_1[0x28c] = -1;
      param_1[0x28d] = -1;
      param_1[0x28e] = -1;
      param_1[0x28f] = -1;
      param_1[0x290] = 0;
      *(undefined1 *)(param_1 + 0x291) = 0;
      param_1[0x292] = 0;
      FUN_00a8d280();
      param_1[0x2fc] = 0;
      param_1[0x2f5] = 0;
      param_1[0x2fa] = 0;
      param_1[0x2fb] = 0;
      FUN_00a7c950();
      param_1[0x2fd] = 0;
      param_1[0x2f4] = 0;
      param_1[0x294] = 0;
      param_1[0x295] = 0;
      param_1[0x296] = 0;
      param_1[0x2fe] = 0;
      param_1[0x362] = 0;
      if ((*(byte *)(param_1 + 0x130) & 2) == 0) {
        FUN_009fd240();
        param_1[0x294] = 1;
      }
      param_1[0x363] = 0;
      param_1[0x364] = 0;
      param_1[0x29f] = 0;
      param_1[0x360] = 0;
      param_1[0x210] = 0;
      param_1[0x211] = 0;
      param_1[0x2ff] = 0;
      param_1[0x300] = 0;
      param_1[0x301] = 0;
      param_1[0x36a] = -1;
      param_1[0x36c] = -1;
      *(undefined1 *)(param_1 + 0x36d) = 0;
      *(undefined2 *)(param_1 + 0x36b) = 0;
      FUN_00a92a30(0xffffffff);
      return 1;
    }
  }
  return 0;
}

// 00AC7E90  BehaviorEmBase::vf48  size=364  [class]
void __fastcall BehaviorEmBase::vf48(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined *puVar6;
  
  iVar1 = FUN_00c13920();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
  }
  param_1[0x2a2] = iVar1;
  param_1[0x2a1] = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01be9c24;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c24);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    param_1[0x2a1] = uVar3;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar4 = FUN_00a92fb0();
    FUN_00e08600(uVar4);
  }
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar5;
  param_1[0x361] = 0;
  iVar1 = FUN_00a8c760(0x15);
  if (iVar1 != 0) {
    FUN_00a8d280();
  }
  (**(code **)(*param_1 + 0x32c))();
  if (param_1[0x2fc] != 0) {
    uVar4 = FUN_00a8eea0();
    *(undefined4 *)(param_1[0x2fc] + 0x44) = uVar4;
  }
  iVar1 = FUN_00a8c760(0x18);
  if ((iVar1 == 0) && (param_1[0x21e] != 0)) {
    Behavior::updateGroundSupportForParts
              (param_1 + 0x297,param_1 + 0x16c,param_1 + 0x165,param_1 + 0x17c,param_1[0x21f]);
    Behavior::updateGroundSupportForParts
              (param_1 + 0x298,param_1 + 0x170,param_1 + 0x166,param_1 + 0x17d,param_1[0x220]);
  }
  FUN_00c3dac0(param_1 + 0x10,param_1 + 0x365);
  BehaviorAppBase::vf48();
  return;
}

// 00AC8000  FUN_00ac8000  size=70  [between]
undefined4 __fastcall FUN_00ac8000(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4f0) == 0) {
    return 0;
  }
  uVar1 = FUN_00a92f90();
  *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x918) = uVar1;
  *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(param_1 + 0x5c);
  return 1;
}

// 00AC8050  BehaviorEmBase::vf128  size=69  [class]
void __fastcall BehaviorEmBase::vf128(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4f0) != 0) {
    uVar1 = FUN_00a92f90();
    *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x918) = uVar1;
    *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(param_1 + 0x5c);
    Behavior::setSeqAtk();
    return;
  }
  return;
}

// 00AC80A0  FUN_00ac80a0  size=127  [between]
void __thiscall FUN_00ac80a0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar1 = *(float *)(param_1 + 0x94);
  iVar2 = FUN_00a92f90();
  *(int *)(param_1 + 0x918) = iVar2;
  if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x94) & 1) != 0)) {
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = param_2;
    *(undefined4 *)(iVar2 + 0xe8) = param_2;
    *(undefined4 *)(iVar2 + 0xec) = param_2;
  }
  BehaviorAppBase::thunk_vf64();
  fVar3 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) - fVar1);
  fVar3 = (float10)FUN_00ddba30((float)(fVar3 * (float10)param_3 + (float10)fVar1));
  *(float *)(param_1 + 0x94) = (float)fVar3;
  return;
}

// 00AC8120  FUN_00ac8120  size=77  [between]
uint FUN_00ac8120(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      return -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  return 0;
}

// 00AC8170  FUN_00ac8170  size=27  [between]
byte FUN_00ac8170(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(byte *)(param_1 + 0x4c0) >> 4 & 1;
}

// 00AC8190  FUN_00ac8190  size=95  [between]
undefined4 FUN_00ac8190(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*piVar2 + 0x354))();
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00AC81F0  FUN_00ac81f0  size=116  [between]
void FUN_00ac81f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_retaddr;
  undefined *puVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00bc3c20(unaff_retaddr,param_2,param_3,0);
      }
    }
  }
  return;
}

// 00AC8270  FUN_00ac8270  size=120  [between]
void FUN_00ac8270(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 unaff_retaddr;
  undefined *puVar3;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00bc3c20(unaff_retaddr,param_2,param_3,0x40000000);
      }
    }
  }
  return;
}

// 00AC82F0  FUN_00ac82f0  size=95  [between]
undefined4 FUN_00ac82f0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*piVar2 + 0x32c))();
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00AC8350  FUN_00ac8350  size=90  [between]
undefined4 FUN_00ac8350(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          iVar1 = FUN_00b8c050();
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00AC83B0  FUN_00ac83b0  size=90  [between]
undefined4 FUN_00ac83b0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          iVar1 = FUN_00b8c080();
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00AC8410  FUN_00ac8410  size=90  [between]
undefined4 FUN_00ac8410(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          iVar1 = FUN_00b8bb10();
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00AC8470  FUN_00ac8470  size=95  [between]
undefined4 FUN_00ac8470(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9db8;
        (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
        iVar1 = FUN_00dd6d80(puVar3);
        if (iVar1 != 0) {
          iVar1 = (**(code **)(*piVar2 + 0x330))();
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00AC84D0  FUN_00ac84d0  size=67  [between]
int __thiscall FUN_00ac84d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x754) == 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 4))(param_2);
  FUN_00ac4790(param_2);
  iVar2 = FUN_00fdbc60();
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// 00AC8520  FUN_00ac8520  size=67  [between]
int __thiscall FUN_00ac8520(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x754) == 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 8))(param_2);
  FUN_00ac4820(param_2);
  iVar2 = FUN_00fdbc60();
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// 00AC8570  FUN_00ac8570  size=71  [between]
float10 __thiscall FUN_00ac8570(int param_1,undefined4 param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x754) == 0) {
    return (float10)0;
  }
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(param_2);
  fVar2 = (float10)FUN_00ac4790(param_2);
  if (fVar2 <= (float10)0) {
    fVar2 = (float10)(float)fVar1;
  }
  return fVar2;
}

// 00AC85C0  FUN_00ac85c0  size=133  [between]
float10 __thiscall FUN_00ac85c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  float10 fVar2;
  float local_4;
  
  fVar2 = (float10)0;
  if (*(int *)(param_1 + 0x754) == 0) {
    return fVar2;
  }
  switch(param_2) {
  case 5:
    pcVar1 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    break;
  case 6:
    pcVar1 = *(code **)(**(int **)(param_1 + 0x754) + 0x3c);
    break;
  case 7:
    pcVar1 = *(code **)(**(int **)(param_1 + 0x754) + 0x44);
    break;
  case 8:
    pcVar1 = *(code **)(**(int **)(param_1 + 0x754) + 0x4c);
    break;
  default:
    goto switchD_00ac85e4_default;
  }
  fVar2 = (float10)(*pcVar1)(param_3);
switchD_00ac85e4_default:
  local_4 = (float)fVar2;
  fVar2 = (float10)FUN_00ac4790(param_3);
  if ((float10)0 == fVar2) {
    fVar2 = (float10)local_4;
  }
  return fVar2;
}

// 00AC8660  FUN_00ac8660  size=143  [between]
int __thiscall FUN_00ac8660(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x754) == 0) {
    return 0;
  }
  iVar3 = 0;
  switch(param_2) {
  case 0:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x24);
    break;
  case 1:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x2c);
    break;
  case 2:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x7c);
    break;
  case 3:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x84);
    break;
  case 4:
    pcVar2 = *(code **)(**(int **)(param_1 + 0x754) + 0x8c);
    break;
  default:
    goto switchD_00ac8683_default;
  }
  iVar3 = (*pcVar2)(param_3);
switchD_00ac8683_default:
  FUN_00ac4790(param_3);
  iVar1 = FUN_00fdbc60();
  if (iVar1 != 0) {
    iVar3 = iVar1;
  }
  return iVar3;
}

// 00AC8710  BehaviorEmBase::vf344  size=158  [class]
void __thiscall BehaviorEmBase::vf344(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x4e8) == 0) {
    *(undefined4 *)(param_1 + 0x4e8) = 1;
    iVar1 = FUN_00c1a4b0(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2),
                         (int)*(short *)(param_1 + 0xab4),*(undefined4 *)(param_1 + 0x83c));
    if (iVar1 == 0) {
      uVar3 = 3;
      if (*(int *)(param_1 + 0xd88) == 0) {
        uVar3 = param_3;
      }
      FUN_00c1a530(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2),
                   (int)*(short *)(param_1 + 0xab4),*(undefined4 *)(param_1 + 0x83c));
      if (param_4 != 0) {
        piVar2 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar2 + 0x44))(param_2,uVar3);
      }
    }
  }
  return;
}

// 00AC87B0  BehaviorEmBase::vf348  size=371  [class]
undefined4 __thiscall BehaviorEmBase::vf348(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_20;
  float local_1c;
  float local_14;
  
  if ((((DAT_01bea060 & 0x2000000) != 0) || ((DAT_01bea060 & 0x40000000) != 0)) ||
     ((DAT_01bea060 & 0x8000000) != 0)) {
    return 1;
  }
  iVar1 = FUN_00ac82f0();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_00a12210(0);
  if (iVar1 != 0) {
    iVar2 = FUN_00f98a90();
    iVar3 = FUN_00f98aa0();
    iVar4 = FUN_00f98a90();
    iVar5 = FUN_00f98aa0();
    FUN_00d9fa80(&local_20,iVar1 + 0x40);
    if (((1.0 < local_14) && ((float)iVar2 * 0.5 - (float)iVar4 * 0.5 < local_20)) &&
       ((local_20 < (float)iVar4 * 0.5 + (float)iVar2 * 0.5 &&
        (((float)iVar3 * 0.5 - (float)iVar5 * 0.5 < local_1c &&
         (local_1c < (float)iVar5 * 0.5 + (float)iVar3 * 0.5)))))) {
      *(undefined4 *)(param_1 + 0xbd0) = 0;
      return 0;
    }
  }
  FUN_00a92fb0();
  fVar6 = (float10)FUN_00e049b0();
  fVar6 = fVar6 + (float10)*(float *)(param_1 + 0xbd0);
  *(float *)(param_1 + 0xbd0) = (float)fVar6;
  if (fVar6 < (float10)param_2) {
    return 0;
  }
  return 1;
}

// 00AC8930  BehaviorEmBase::vf360  size=76  [class]
void __fastcall BehaviorEmBase::vf360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00e00900();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a81330();
    FUN_00e020f0(uVar2);
    return;
  }
  FUN_00e020f0(*(undefined4 *)(param_1 + 0x4f0));
  return;
}

// 00AC8980  FUN_00ac8980  size=68  [between]
void __fastcall FUN_00ac8980(int *param_1)

{
  if (*(int *)(param_1[0x2fb] + 0x98) != 0) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  (**(code **)(*param_1 + 0x358))(0x1ff,0);
  param_1[0x2fb] = 0;
  return;
}

// 00AC89D0  FUN_00ac89d0  size=89  [between]
uint FUN_00ac89d0(void)

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
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9ca0;
        (**(code **)(*piVar2 + 4))(&DAT_01be9ca0);
        iVar1 = FUN_00dd6d80(puVar3);
        return -(uint)(iVar1 != 0) & (uint)piVar2;
      }
    }
  }
  return 0;
}

// 00AC8A30  FUN_00ac8a30  size=28  [between]
undefined4 __fastcall FUN_00ac8a30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x330);
  }
  return *(undefined4 *)(param_1 + 0x330);
}

// 00AC8A50  FUN_00ac8a50  size=47  [between]
undefined4 __fastcall FUN_00ac8a50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x330);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x330);
  }
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xcc);
  }
  return 0;
}

// 00AC8A80  FUN_00ac8a80  size=38  [between]
void FUN_00ac8a80(undefined4 param_1)

{
  int iVar1;
  
  FUN_009f8ae0(param_1);
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_009f8ae0(param_1);
  }
  return;
}

// 00AC8AB0  FUN_00ac8ab0  size=28  [between]
void FUN_00ac8ab0(void)

{
  int iVar1;
  
  FUN_009f8b10();
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_009f8b10();
    return;
  }
  return;
}

// 00AC8AD0  FUN_00ac8ad0  size=71  [between]
void FUN_00ac8ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a8c640();
    return;
  }
  FUN_00a8c640(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// 00AC8B20  FUN_00ac8b20  size=36  [between]
void FUN_00ac8b20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a9e060();
    return;
  }
  FUN_00a9e060(param_1);
  return;
}

// 00AC8B50  FUN_00ac8b50  size=36  [between]
void FUN_00ac8b50(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a9e080();
    return;
  }
  FUN_00a9e080(param_1);
  return;
}

// 00AC8B80  FUN_00ac8b80  size=36  [between]
void FUN_00ac8b80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a9e0d0();
    return;
  }
  FUN_00a9e0d0(param_1);
  return;
}

// 00AC8BB0  FUN_00ac8bb0  size=36  [between]
void FUN_00ac8bb0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a94480();
    return;
  }
  FUN_00a94480(param_1);
  return;
}

// 00AC8BE0  FUN_00ac8be0  size=41  [between]
void FUN_00ac8be0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a9e140();
    return;
  }
  FUN_00a9e140(param_1,param_2);
  return;
}

// 00AC8C10  FUN_00ac8c10  size=36  [between]
void FUN_00ac8c10(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a94380();
    return;
  }
  FUN_00a94380(param_1);
  return;
}

// 00AC8C40  FUN_00ac8c40  size=36  [between]
void FUN_00ac8c40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a943e0();
    return;
  }
  FUN_00a943e0(param_1);
  return;
}

// 00AC8C70  FUN_00ac8c70  size=36  [between]
void FUN_00ac8c70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a9e160();
    return;
  }
  FUN_00a9e160(param_1);
  return;
}

// 00AC8CA0  FUN_00ac8ca0  size=36  [between]
void FUN_00ac8ca0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a98220();
    return;
  }
  FUN_00a98220(param_1);
  return;
}

// 00AC8CD0  FUN_00ac8cd0  size=36  [between]
void FUN_00ac8cd0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a9f890();
    return;
  }
  FUN_00a9f890(param_1);
  return;
}

// 00AC8D00  FUN_00ac8d00  size=60  [between]
void __thiscall FUN_00ac8d00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  *(undefined4 *)(param_1 + 0xa48) = 1;
  if (iVar1 != 0) {
    FUN_00a8e5d0();
    return;
  }
  FUN_00a8e5d0(param_2,param_3,param_4);
  return;
}

// 00AC8D40  FUN_00ac8d40  size=52  [between]
undefined4 __fastcall FUN_00ac8d40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x370) != 0) {
      uVar2 = FUN_00a1abe0();
      return uVar2;
    }
  }
  else if (*(int *)(iVar1 + 0x370) != 0) {
    uVar2 = FUN_00a1abe0();
    return uVar2;
  }
  return 0;
}

// 00AC8D80  FUN_00ac8d80  size=71  [between]
undefined4 __thiscall FUN_00ac8d80(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x370);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x370);
  }
  if (((iVar1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(iVar1 + 0x24))) {
    *(undefined4 *)(*(int *)(iVar1 + 0x1c) + param_2 * 0xc) = param_3;
    return 1;
  }
  return 0;
}

// 00AC8DD0  FUN_00ac8dd0  size=52  [between]
undefined4 __fastcall FUN_00ac8dd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x370) != 0) {
      uVar2 = FUN_00a1bd80();
      return uVar2;
    }
  }
  else if (*(int *)(iVar1 + 0x370) != 0) {
    uVar2 = FUN_00a1bd80();
    return uVar2;
  }
  return 0;
}

// 00AC8E10  FUN_00ac8e10  size=112  [between]
void __thiscall FUN_00ac8e10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00ac89d0();
  if (iVar2 == 0) {
    piVar1 = *(int **)(param_1 + 0x370);
    if (piVar1 != (int *)0x0) {
      if (param_2 != 0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
        *piVar1 = param_2;
        return;
      }
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      *piVar1 = 0;
    }
  }
  else {
    piVar1 = *(int **)(iVar2 + 0x370);
    if (piVar1 != (int *)0x0) {
      if (param_2 != 0) {
        *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xffbfffff;
        *piVar1 = param_2;
        return;
      }
      *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) | 0x400000;
      *piVar1 = 0;
      return;
    }
  }
  return;
}

// 00AC8E80  FUN_00ac8e80  size=44  [between]
undefined4 __fastcall FUN_00ac8e80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      return **(undefined4 **)(param_1 + 0x370);
    }
  }
  else if (*(undefined4 **)(iVar1 + 0x370) != (undefined4 *)0x0) {
    return **(undefined4 **)(iVar1 + 0x370);
  }
  return 0;
}

// 00AC8EB0  FUN_00ac8eb0  size=90  [between]
void __thiscall FUN_00ac8eb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = param_2;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = param_3;
    }
  }
  else if (*(int *)(iVar1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x370) + 4) = param_2;
    *(undefined4 *)(*(int *)(iVar1 + 0x370) + 8) = param_3;
    return;
  }
  return;
}

// 00AC8F10  FUN_00ac8f10  size=98  [between]
void __thiscall FUN_00ac8f10(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x370) != 0) {
      *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x370) + 4);
      *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x370) + 8);
    }
  }
  else if (*(int *)(iVar1 + 0x370) != 0) {
    *param_2 = *(undefined4 *)(*(int *)(iVar1 + 0x370) + 4);
    *param_3 = *(undefined4 *)(*(int *)(iVar1 + 0x370) + 8);
    return;
  }
  return;
}

// 00AC8F80  FUN_00ac8f80  size=71  [between]
float10 __fastcall FUN_00ac8f80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      return (float10)*(float *)(*(int *)(param_1 + 800) + 0x1c);
    }
  }
  else if (0 < *(short *)(iVar1 + 0x324)) {
    return (float10)*(float *)(*(int *)(iVar1 + 800) + 0x1c);
  }
  FUN_00dd5650(&DAT_0164524c);
  return (float10)0;
}

// 00AC8FD0  FUN_00ac8fd0  size=108  [between]
void __thiscall FUN_00ac8fd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00ac89d0();
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + 0x1c + *(int *)(param_1 + 800)) = param_2;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x70;
      } while (iVar1 < *(short *)(param_1 + 0x324));
    }
  }
  else {
    iVar3 = 0;
    if (0 < *(short *)(iVar1 + 0x324)) {
      do {
        *(undefined4 *)(*(int *)(iVar1 + 800) + 0x1c + iVar3) = param_2;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar1 + 0x324));
      return;
    }
  }
  return;
}

// 00AC9040  FUN_00ac9040  size=98  [between]
void __fastcall FUN_00ac9040(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00ac89d0();
  iVar4 = 0;
  iVar3 = 0;
  if (iVar2 == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar2);
        *puVar1 = *puVar1 | 1;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x70;
      } while (iVar3 < *(short *)(param_1 + 0x324));
    }
  }
  else if (0 < *(short *)(iVar2 + 0x324)) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)(*(int *)(iVar2 + 800) + 0x38 + iVar3);
      *puVar1 = *puVar1 | 1;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar4 < *(short *)(iVar2 + 0x324));
    return;
  }
  return;
}

// 00AC90B0  FUN_00ac90b0  size=98  [between]
void __fastcall FUN_00ac90b0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00ac89d0();
  iVar4 = 0;
  iVar3 = 0;
  if (iVar2 == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar2);
        *puVar1 = *puVar1 & 0xfffffffe;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x70;
      } while (iVar3 < *(short *)(param_1 + 0x324));
    }
  }
  else if (0 < *(short *)(iVar2 + 0x324)) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)(*(int *)(iVar2 + 800) + 0x38 + iVar3);
      *puVar1 = *puVar1 & 0xfffffffe;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar4 < *(short *)(iVar2 + 0x324));
    return;
  }
  return;
}

// 00AC9120  FUN_00ac9120  size=84  [between]
void __thiscall FUN_00ac9120(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = FUN_00ac89d0();
  if (iVar2 == 0) {
    if ((-1 < param_2) && (param_2 < *(short *)(param_1 + 0x324))) {
      puVar1 = (uint *)(param_2 * 0x70 + *(int *)(param_1 + 800) + 0x38);
      *puVar1 = *puVar1 | 1;
    }
  }
  else if ((-1 < param_2) && (param_2 < *(short *)(iVar2 + 0x324))) {
    puVar1 = (uint *)(param_2 * 0x70 + *(int *)(iVar2 + 800) + 0x38);
    *puVar1 = *puVar1 | 1;
    return;
  }
  return;
}

// 00AC9180  FUN_00ac9180  size=84  [between]
void __thiscall FUN_00ac9180(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = FUN_00ac89d0();
  if (iVar2 == 0) {
    if ((-1 < param_2) && (param_2 < *(short *)(param_1 + 0x324))) {
      puVar1 = (uint *)(param_2 * 0x70 + *(int *)(param_1 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
  }
  else if ((-1 < param_2) && (param_2 < *(short *)(iVar2 + 0x324))) {
    puVar1 = (uint *)(param_2 * 0x70 + *(int *)(iVar2 + 800) + 0x38);
    *puVar1 = *puVar1 & 0xfffffffe;
    return;
  }
  return;
}

// 00AC9210  FUN_00ac9210  size=227  [between]
void __thiscall FUN_00ac9210(int param_1,byte *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar3 = FUN_00ac89d0();
  iVar7 = 0;
  if (iVar3 == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar3 = 0;
      do {
        pbVar4 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar3) + 0x40);
        pbVar6 = param_2;
        if (pbVar4 != (byte *)0x0) {
          do {
            bVar2 = *pbVar4;
            bVar9 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_00ac92d5:
              iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00ac92da;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar9 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_00ac92d5;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar8 = 0;
LAB_00ac92da:
          if (iVar8 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar3);
            *puVar1 = *puVar1 | 1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar7 < *(short *)(param_1 + 0x324));
    }
  }
  else if (0 < *(short *)(iVar3 + 0x324)) {
    iVar8 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(*(int *)(iVar3 + 800) + 0x60 + iVar8) + 0x40);
      pbVar6 = param_2;
      if (pbVar4 != (byte *)0x0) {
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_00ac9267:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00ac926c;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_00ac9267;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_00ac926c:
        if (iVar5 == 0) {
          puVar1 = (uint *)(*(int *)(iVar3 + 800) + 0x38 + iVar8);
          *puVar1 = *puVar1 | 1;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x70;
      if (*(short *)(iVar3 + 0x324) <= iVar7) {
        return;
      }
    } while( true );
  }
  return;
}

// 00AC9300  FUN_00ac9300  size=227  [between]
void __thiscall FUN_00ac9300(int param_1,byte *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar3 = FUN_00ac89d0();
  iVar7 = 0;
  if (iVar3 == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar3 = 0;
      do {
        pbVar4 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar3) + 0x40);
        pbVar6 = param_2;
        if (pbVar4 != (byte *)0x0) {
          do {
            bVar2 = *pbVar4;
            bVar9 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_00ac93c5:
              iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00ac93ca;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar9 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_00ac93c5;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar8 = 0;
LAB_00ac93ca:
          if (iVar8 == 0) {
            puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar3);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar7 < *(short *)(param_1 + 0x324));
    }
  }
  else if (0 < *(short *)(iVar3 + 0x324)) {
    iVar8 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(*(int *)(iVar3 + 800) + 0x60 + iVar8) + 0x40);
      pbVar6 = param_2;
      if (pbVar4 != (byte *)0x0) {
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_00ac9357:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00ac935c;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_00ac9357;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_00ac935c:
        if (iVar5 == 0) {
          puVar1 = (uint *)(*(int *)(iVar3 + 800) + 0x38 + iVar8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x70;
      if (*(short *)(iVar3 + 0x324) <= iVar7) {
        return;
      }
    } while( true );
  }
  return;
}

// 00AC9420  FUN_00ac9420  size=177  [between]
void __thiscall FUN_00ac9420(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_00ac89d0();
  iVar5 = 0;
  if (iVar2 == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar2 = 0;
      do {
        iVar6 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar6 + 0x60 + iVar2) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,param_2);
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar2);
            *puVar1 = *puVar1 | 1;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
  }
  else if (0 < *(short *)(iVar2 + 0x324)) {
    iVar6 = 0;
    do {
      iVar4 = *(int *)(iVar2 + 800);
      iVar3 = *(int *)(*(int *)(iVar4 + 0x60 + iVar6) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,param_2);
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar4 + 0x38 + iVar6);
          *puVar1 = *puVar1 | 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar5 < *(short *)(iVar2 + 0x324));
    return;
  }
  return;
}

// 00AC94E0  FUN_00ac94e0  size=177  [between]
void __thiscall FUN_00ac94e0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_00ac89d0();
  iVar5 = 0;
  if (iVar2 == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar2 = 0;
      do {
        iVar6 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar6 + 0x60 + iVar2) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,param_2);
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar2);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
  }
  else if (0 < *(short *)(iVar2 + 0x324)) {
    iVar6 = 0;
    do {
      iVar4 = *(int *)(iVar2 + 800);
      iVar3 = *(int *)(*(int *)(iVar4 + 0x60 + iVar6) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,param_2);
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar4 + 0x38 + iVar6);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar5 < *(short *)(iVar2 + 0x324));
    return;
  }
  return;
}

// 00AC95A0  FUN_00ac95a0  size=33  [between]
void FUN_00ac95a0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00ac9420(param_1);
    return;
  }
  FUN_00ac94e0(param_1);
  return;
}

// 00AC95D0  FUN_00ac95d0  size=125  [between]
void __fastcall FUN_00ac95d0(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0xbf8) == 0) {
    fVar1 = *(float *)(param_1 + 0xbf4) + 1.0;
    *(float *)(param_1 + 0xbf4) = fVar1;
    if (3.0 < fVar1) {
      *(undefined4 *)(param_1 + 0xbf8) = 1;
      *(undefined4 *)(param_1 + 0xbf4) = 0;
    }
  }
  else {
    FUN_00c45fd0(*(undefined4 *)(param_1 + 0x4f0),*(float *)(param_1 + 0xbf4));
    fVar1 = *(float *)(param_1 + 0xbf4) + 1.0;
    *(float *)(param_1 + 0xbf4) = fVar1;
    if (10000.0 < fVar1) {
      *(undefined4 *)(param_1 + 0xbf4) = 0;
      return;
    }
  }
  return;
}

// 00AC9650  FUN_00ac9650  size=104  [between]
void __fastcall FUN_00ac9650(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x12d];
  if (((((iVar1 != 0x20140) && (iVar1 != 0x20142)) && (iVar1 != 0x20144)) &&
      ((iVar1 != 0x2014a && (iVar1 != 0x20150)))) &&
     ((iVar1 != 0x20152 && ((iVar1 != 0x20160 && (iVar1 != 0x20170)))))) {
    uVar2 = (**(code **)(*param_1 + 0x68))(1);
    FUN_00957930(uVar2);
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x68))(0);
  FUN_00957930(uVar2);
  return;
}

// 00AC96C0  FUN_00ac96c0  size=82  [between]
void __thiscall FUN_00ac96c0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == -1) {
    param_3 = param_1[0x12d];
  }
  if (param_3 == 0x20071) {
    param_3 = 0x20070;
  }
  else if (param_3 == 0x20081) {
    param_3 = 0x20080;
  }
  uVar1 = FUN_009f8b40();
  uVar1 = (**(code **)(*param_1 + 0x68))(uVar1);
  FUN_00957640(param_3,param_2,uVar1);
  return;
}

// 00AC9720  FUN_00ac9720  size=104  [between]
void __thiscall FUN_00ac9720(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0xa64) = *(undefined4 *)(param_1 + 0x494);
  *(undefined4 *)(param_1 + 0xa68) = *(undefined4 *)(param_1 + 0x498);
  cObjReadManager::getDataAtSet(param_1 + 0xa6c,param_2,0);
  *(undefined4 *)(param_1 + 0xa7c) = 1;
  if (param_3 != -1) {
    cObjReadManager::getDataAtSet(param_1 + 0xa74,param_3,0);
  }
  *(undefined4 *)(param_1 + 0xa80) = 1;
  return;
}

// 00AC9790  FUN_00ac9790  size=51  [between]
undefined4 __fastcall FUN_00ac9790(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00c4ec80();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x50) != 0)) {
    iVar1 = *(int *)(param_1 + 0x4f0);
    iVar2 = FUN_00a81330();
    if (iVar2 == iVar1) {
      return 1;
    }
  }
  return 0;
}

// 00AC9900  BehaviorEmBase::vf2F8  size=67  [class]
void __fastcall BehaviorEmBase::vf2F8(int param_1)

{
  undefined1 local_10 [16];
  
  FUN_009f8ea0(local_10,0x10,*(undefined4 *)(param_1 + 0x4b0),0);
  FUN_00dd5650(&DAT_0169fcb8,local_10);
  *(undefined4 *)(param_1 + 0x6bc) = 1;
  FUN_009fdde0();
  return;
}

// 00ACE6C0  BehaviorEmBase::vf20  size=58  [class]
void __fastcall BehaviorEmBase::vf20(int *param_1)

{
  int *piVar1;
  
  Bh0064::vf20();
  (**(code **)(*param_1 + 200))(0);
  (**(code **)(*param_1 + 0xd0))(0);
  piVar1 = (int *)FUN_00ac89d0();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ace6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x20))();
    return;
  }
  return;
}

// 00ACE700  BehaviorEmBase::vf1C  size=58  [class]
void __fastcall BehaviorEmBase::vf1C(int *param_1)

{
  int *piVar1;
  
  Bh0064::vf1C();
  (**(code **)(*param_1 + 200))(1);
  (**(code **)(*param_1 + 0xd0))(1);
  piVar1 = (int *)FUN_00ac89d0();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ace737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x1c))();
    return;
  }
  return;
}

// 00ACE740  BehaviorEmBase::vf1C0  size=902  [class]
void __thiscall BehaviorEmBase::vf1C0(int *param_1,int *param_2,int *param_3)

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

// 00ACEB90  BehaviorEmBase::vf334  size=251  [class]
void __thiscall BehaviorEmBase::vf334(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  uVar1 = FUN_009f8b40();
  FUN_009f8ae0(uVar1);
  *(undefined4 *)(param_2 + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_1 + 0x51c);
  DebrisExplodeManager::addHandle(&stack0x00000000,*(undefined4 *)(param_1 + 0xa50));
  piVar2 = (int *)FUN_00acdea0();
  if (piVar2 != (int *)0x0) {
    puVar4 = &DAT_01be9c78;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xbfc) = piVar2[0x2ff];
      *(int *)(param_1 + 0xc00) = piVar2[0x300];
    }
  }
  piVar2 = (int *)FUN_00acdea0();
  if (piVar2 != (int *)0x0) {
    puVar4 = &DAT_01be9c78;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xc04) = piVar2[0x301];
    }
  }
  if (*(int *)(param_1 + 0xc04) != 0) {
    FUN_0093e3f0(*(undefined4 *)(param_1 + 0x83c));
  }
  return;
}

// 00ACEC90  BehaviorEmBase::vf44  size=237  [class]
void __fastcall BehaviorEmBase::vf44(int param_1)

{
  int iVar1;
  
  FUN_00dd7270();
  FUN_00a92a90(0xffffffff);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a9d8a0();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00a8c820();
  RayCastManager::getWork(param_1 + 0xa5c);
  RayCastManager::getWork(param_1 + 0xa60);
  if (*(int *)(param_1 + 0xd80) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xd80));
    *(undefined4 *)(param_1 + 0xd80) = 0;
  }
  Behavior::vf44();
  return;
}

// 00ACED80  BehaviorEmBase::vf4C  size=261  [class]
void __fastcall BehaviorEmBase::vf4C(int *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  if (param_1[0x296] != 0) {
    iVar1 = FUN_00ac89d0();
    if (iVar1 == 0) {
      FUN_009fdde0();
      return;
    }
  }
  if ((DAT_01bea070 & 0x20000000) == 0) {
    FUN_00a92fb0();
    fVar3 = (float10)FUN_00e049b0();
    param_1[0x244] = (int)(float)fVar3;
    FUN_00ac4490();
    Behavior::vf4C();
    param_1[0x14] = (int)((float)param_1[0x260] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x261]);
    param_1[0x16] = (int)((float)param_1[0x262] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x263] + (float)param_1[0x17]);
    fVar3 = (float10)FUN_00fdc1f0();
    param_1[0x260] = (int)(float)((float10)(float)param_1[0x260] * fVar3);
    param_1[0x261] = (int)(float)((float10)(float)param_1[0x261] * fVar3);
    param_1[0x262] = (int)(float)((float10)(float)param_1[0x262] * fVar3);
    param_1[0x263] = (int)(float)(fVar3 * (float10)(float)param_1[0x263]);
    (**(code **)(*param_1 + 0x31c))();
    iVar1 = FUN_00a8c760(7);
    if (iVar1 != 0) {
      FUN_00a8d280();
    }
    iVar1 = FUN_00a8c760(0x27);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar2 + 0x34))(0);
    }
  }
  return;
}

// 00ACEE90  BehaviorEmBase::vf54  size=542  [class]
void __fastcall BehaviorEmBase::vf54(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
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
      local_40 = (float)param_1[0x10] +
                 (((float)param_1[0x218] + *(float *)(iVar3 + 0x40)) - (float)param_1[0x10]);
      local_3c = ((*(float *)(iVar3 + 0x44) + (float)param_1[0x219]) - (float)param_1[0x11]) +
                 (float)param_1[0x11];
      local_38 = ((*(float *)(iVar3 + 0x48) + (float)param_1[0x21a]) - (float)param_1[0x12]) +
                 (float)param_1[0x12];
      local_34 = (((float)param_1[0x21b] + *(float *)(iVar3 + 0x4c)) - (float)param_1[0x13]) +
                 (float)param_1[0x13];
      uVar4 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&local_40,uVar4);
      bVar2 = true;
    }
    iVar3 = FUN_00a8c760(0x24);
    if (((iVar3 != 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) &&
       ((!bVar2 && ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0))))))
    {
      FUN_00a8ce90(&local_40,auStack_20);
      D3DXVec3TransformNormal(&local_40,&local_40,iVar3 + 0x10);
      local_40 = *(float *)(iVar3 + 0x40) + local_40;
      local_3c = *(float *)(iVar3 + 0x44) + local_3c;
      local_38 = *(float *)(iVar3 + 0x48) + local_38;
      fStack_30 = local_40 - (float)param_1[0x10];
      fStack_2c = local_3c - (float)param_1[0x11];
      fStack_28 = local_38 - (float)param_1[0x12];
      fStack_24 = local_34 - (float)param_1[0x13];
      FUN_00a12310(&fStack_30);
    }
  }
  Behavior::vf54();
  return;
}

// 00ACF0B0  FUN_00acf0b0  size=38  [between]
byte FUN_00acf0b0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      return *(byte *)(iVar1 + 0x4c0) >> 4 & 1;
    }
  }
  return 0;
}

// 00ACF0E0  FUN_00acf0e0  size=41  [between]
uint __fastcall FUN_00acf0e0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    return *(uint *)(iVar1 + 0x674);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x370) != 0) {
    uVar2 = (uint)(*(int *)(*(int *)(param_1 + 0x370) + 0x10) != -1);
  }
  return uVar2;
}

// 00ACF110  FUN_00acf110  size=62  [between]
void FUN_00acf110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    FUN_00a8e680(param_1,param_2,param_3);
    return;
  }
  FUN_00a8e680(param_1,param_2,param_3);
  return;
}

// 00ACF150  BehaviorEmBase::vf1AC  size=59  [class]
void BehaviorEmBase::vf1AC
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    param_5 = FUN_00ac89d0();
  }
  Bh0064::vf1AC(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 00ACF190  BehaviorEmBase::vf1A8  size=49  [class]
void BehaviorEmBase::vf1A8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 != 0) {
    param_3 = FUN_00ac89d0();
  }
  Bh0064::vf1A8(param_1,param_2,param_3);
  return;
}

// 00ACF1D0  BehaviorEmBase::setCutCrerateInfo  size=1051  [class]
void __thiscall
BehaviorEmBase::setCutCrerateInfo(int *param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  uVar2 = FUN_00a1d5c0();
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 0x24 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 0x24),uVar2);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar9 = param_4 - 1;
    if (-1 < iVar9) {
      puVar6 = (undefined4 *)(iVar3 + 0x1c);
      do {
        puVar6[-1] = 0xffffffff;
        *puVar6 = 0xffffffff;
        puVar6[1] = 0xffffffff;
        puVar6[-7] = 0;
        puVar6[-6] = 0;
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6 = puVar6 + 9;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  param_1[0x28b] = iVar3;
  puVar4 = (undefined1 *)FUN_00a95df0(0);
  *(undefined1 *)(param_1 + 0x290) = *puVar4;
  iVar3 = FUN_00a95df0(0);
  *(undefined1 *)((int)param_1 + 0xa41) = *(undefined1 *)(iVar3 + 1);
  iVar3 = FUN_00a95df0(0);
  *(undefined1 *)((int)param_1 + 0xa42) = *(undefined1 *)(iVar3 + 2);
  iVar3 = FUN_00a95df0(0);
  *(undefined1 *)((int)param_1 + 0xa43) = *(undefined1 *)(iVar3 + 3);
  param_1[0x28c] = param_1[0x186];
  *(undefined1 *)(param_1 + 0x291) = 0;
  param_1[0x28d] = param_1[0x187];
  param_1[0x28e] = param_1[0x188];
  param_1[0x28f] = param_1[0x189];
  if (param_1[0x28b] == 0) {
    FUN_00dd5650(&DAT_016a0220);
  }
  else {
    iVar3 = FUN_00ac89d0();
    iVar9 = 0;
    if (iVar3 == 0) {
      if (0 < (int)param_4) {
        local_14 = 0;
        do {
          uVar2 = *(undefined4 *)(param_3 + iVar9 * 4);
          iVar3 = param_1[0x28b] + local_14;
          FUN_00a91d70(param_1,uVar2);
          (**(code **)(*param_1 + 0x33c))(uVar2,iVar3);
          local_14 = local_14 + 0x24;
          *param_2 = *(int *)(iVar3 + 0x18);
          iVar9 = iVar9 + 1;
          param_2 = param_2 + 3;
        } while (iVar9 < (int)param_4);
      }
    }
    else {
      if (0 < (int)param_4) {
        local_14 = 0;
        do {
          iVar3 = param_1[0x28b];
          uVar2 = *(undefined4 *)(param_3 + iVar9 * 4);
          *(int *)(iVar3 + local_14 + 0x1c) = iVar9;
          FUN_00a91d70(param_1,uVar2);
          (**(code **)(*param_1 + 0x33c))(uVar2,iVar3 + local_14);
          local_14 = local_14 + 0x24;
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)param_4);
      }
      (**(code **)(*param_1 + 0x338))(param_3,param_1[0x28b],param_4);
      iStack_10 = -1;
      param_3 = -1;
      iStack_8 = -1;
      if (0 < (int)param_4) {
        iVar3 = param_1[0x28b];
        uStack_4 = param_4;
        do {
          if (*(int *)(iVar3 + 0x18) == param_1[0x12d]) {
            iVar9 = 0;
            uVar8 = 2;
            iStack_c = 0x10;
            do {
              bVar1 = (byte)uVar8;
              uVar10 = 0x80000000 >> (bVar1 - 2 & 0x1f);
              uVar7 = uVar8 - 2 >> 5;
              if (((*(uint *)(iVar3 + 0x10 + uVar7 * 4) & uVar10) != 0) &&
                 ((*(uint *)(iVar3 + 8 + uVar7 * 4) & uVar10) == 0)) {
                iVar9 = iVar9 + 1;
              }
              uVar10 = 0x80000000 >> (bVar1 - 1 & 0x1f);
              uVar7 = uVar8 - 1 >> 5;
              if (((*(uint *)(iVar3 + 0x10 + uVar7 * 4) & uVar10) != 0) &&
                 ((*(uint *)(iVar3 + 8 + uVar7 * 4) & uVar10) == 0)) {
                iVar9 = iVar9 + 1;
              }
              uVar7 = 0x80000000 >> (bVar1 & 0x1f);
              if (((*(uint *)(iVar3 + 0x10 + (uVar8 >> 5) * 4) & uVar7) != 0) &&
                 ((*(uint *)(iVar3 + 8 + (uVar8 >> 5) * 4) & uVar7) == 0)) {
                iVar9 = iVar9 + 1;
              }
              uVar10 = 0x80000000 >> (bVar1 + 1 & 0x1f);
              uVar7 = uVar8 + 1 >> 5;
              if (((*(uint *)(iVar3 + 0x10 + uVar7 * 4) & uVar10) != 0) &&
                 ((*(uint *)(iVar3 + 8 + uVar7 * 4) & uVar10) == 0)) {
                iVar9 = iVar9 + 1;
              }
              uVar8 = uVar8 + 4;
              iStack_c = iStack_c + -1;
            } while (iStack_c != 0);
            if (iStack_8 <= iVar9) {
              param_3 = *(int *)(iVar3 + 0x1c);
              iStack_8 = iVar9;
            }
            if (*(int *)(iVar3 + 0x20) < iStack_10) {
              iStack_10 = *(int *)(iVar3 + 0x1c);
            }
          }
          iVar3 = iVar3 + 0x24;
          uStack_4 = uStack_4 - 1;
        } while (uStack_4 != 0);
        if (iStack_10 != -1) {
          param_3 = iStack_10;
        }
      }
      iVar3 = 0;
      if (0 < (int)param_4) {
        iStack_10 = 0;
        do {
          iVar9 = *(int *)(param_1[0x28b] + 0x18 + iStack_10);
          if (iVar9 == param_1[0x12d]) {
            iVar9 = FUN_00a81330();
            if (iVar9 == 0) {
LAB_00acf558:
              uVar8 = 0;
            }
            else {
              FUN_00a81330();
              iVar9 = FUN_00a7c8a0();
              if (iVar9 == 0) goto LAB_00acf558;
              FUN_00a81330();
              piVar5 = (int *)FUN_00a7c8a0();
              if (piVar5 == (int *)0x0) goto LAB_00acf558;
              puVar11 = &DAT_01be9ca0;
              (**(code **)(*piVar5 + 4))(&DAT_01be9ca0);
              iVar9 = FUN_00dd6d80(puVar11);
              uVar8 = -(uint)(iVar9 != 0) & (uint)piVar5;
            }
            if (param_3 == iVar3) {
              if (uVar8 == 0) {
                param_3 = -1;
LAB_00acf57d:
                *param_2 = 0x42000;
              }
              else {
                *param_2 = *(int *)(uVar8 + 0x4b4);
                param_2[2] = 1;
              }
            }
            else {
              if (uVar8 == 0) goto LAB_00acf57d;
              param_2[1] = param_1[300];
              *param_2 = *(int *)(uVar8 + 0x4b4);
            }
          }
          else {
            *param_2 = iVar9;
          }
          iStack_10 = iStack_10 + 0x24;
          iVar3 = iVar3 + 1;
          param_2 = param_2 + 3;
        } while (iVar3 < (int)param_4);
      }
      if (param_3 == -1) {
        FUN_009fdde0();
      }
    }
  }
  if (param_1[0x28b] != 0) {
    FUN_00dd4940(param_1[0x28b]);
    param_1[0x28b] = 0;
  }
  return;
}

// 00ACF600  FUN_00acf600  size=223  [between]
int __thiscall FUN_00acf600(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_90 [35];
  
  FUN_00a7c950();
  if (((*(byte *)(param_1 + 0x4c0) & 2) != 0) &&
     ((*(int *)(param_1 + 0x330) == 0 || (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 0)))) {
    FUN_0040b190();
    local_90[0] = *(undefined4 *)(param_1 + 0x4a0);
    iVar1 = FUN_00acdc90(*(undefined4 *)(param_1 + 0x4f0),param_2,local_90,param_3);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xa58) = 1;
      FUN_009fd240();
      uVar2 = FUN_009f8b40();
      FUN_009f8ae0(uVar2);
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      *(undefined4 *)(param_1 + 0xa50) = 1;
      *(undefined4 *)(iVar1 + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
      uVar2 = *(undefined4 *)(param_1 + 0x51c);
      *(undefined4 *)(iVar1 + 0x51c) = uVar2;
      *(undefined4 *)(iVar1 + 0x83c) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00ACF6E0  BehaviorEmBase::vf364  size=164  [class]
void __thiscall BehaviorEmBase::vf364(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x294] != 0) {
    iVar1 = FUN_00c2a5b0(param_1 + 0x2ac);
    if (iVar1 != 0) {
      if ((param_1[0x12a] & 0x10000000U) != 0) {
        uVar2 = (**(code **)(*param_1 + 0x68))(param_1[0x2e9],(char)param_1[0x2ea]);
        FUN_00957bd0(uVar2);
        return;
      }
      if (param_1[0x2ff] == 0) {
        if (param_1[0x2e9] != 0) {
          (**(code **)(*param_1 + 0x36c))(param_1[0x2e9]);
          return;
        }
        if (-1 < param_1[0x12a]) {
          uVar2 = (**(code **)(*param_1 + 0x368))();
          FUN_00ac96c0(uVar2,param_2);
        }
      }
    }
  }
  return;
}

// 00AD3A20  BehaviorEmBase::vf358  size=91  [class]
void __thiscall BehaviorEmBase::vf358(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_164 [4];
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  (**(code **)(*param_1 + 0x360))(local_160);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(param_1[300],auStack_164);
  return;
}

// 00AD3A80  BehaviorEmBase::vf354  size=116  [class]
void __thiscall
BehaviorEmBase::vf354(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_004039a0(param_2,param_1,0);
  if (param_4 != 0) {
    FUN_00dffb20(param_4);
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00AD3B00  BehaviorEmBase::vf35C  size=86  [class]
void __thiscall BehaviorEmBase::vf35C(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_164 [4];
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  (**(code **)(*param_1 + 0x360))(local_160);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c930(0,auStack_164);
  return;
}

