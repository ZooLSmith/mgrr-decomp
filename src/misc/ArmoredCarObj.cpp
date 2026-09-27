// src/misc/ArmoredCarObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00414B30..00AB94A0, 21 functions

#include "types.h"

// 00414B30  ArmoredCarObj::vf30  size=45  [class]
void __fastcall ArmoredCarObj::vf30(int param_1)

{
  undefined4 *puVar1;
  
  Bh0056::vf30();
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x34) = 1;
    puVar1 = (undefined4 *)FUN_009f8b60();
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x38) = *puVar1;
  }
  return;
}

// 00414B60  ArmoredCarObj::vf4C  size=5  [class]
void __fastcall ArmoredCarObj::vf4C(int *param_1)

{
  float fVar1;
  
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  if (param_1[0x22c] != 0) {
    fVar1 = (float)param_1[0x22d] - 1.0;
    param_1[0x22d] = (int)fVar1;
    if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
      FUN_009fdde0();
    }
  }
  if (((*(byte *)(param_1 + 0x130) & 1) != 0) && (param_1[0x27d] != 0)) {
    param_1[0x206] = 1;
  }
  return;
}

// 00414BA0  FUN_00414ba0  size=148  [between]
void __fastcall FUN_00414ba0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    **(undefined4 **)(param_1 + 0x370) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
  }
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"_EFD01"), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00414C40  FUN_00414c40  size=153  [between]
void __fastcall FUN_00414c40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
  }
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"_EFD01"), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
        *puVar1 = *puVar1 | 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00414CE0  FUN_00414ce0  size=53  [between]
void FUN_00414ce0(void)

{
  FUN_00a8c9b0(0,7,0x3f800000,0);
  FUN_00a8c9b0(0,8,0x3f800000,0);
  return;
}

// 00414DD0  ArmoredCarObj::vf40  size=358  [class]
undefined4 __fastcall ArmoredCarObj::vf40(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EDI;
  int iVar4;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1f0))(0);
    param_1[0x2d2] = 0;
    param_1[400] = 5;
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(8);
      FUN_008f1760(0x800000);
      puVar2 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar2);
      FUN_008f16a0("_floor",0x20);
    }
    if (param_1[0x1ec] != 0) {
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(8);
      Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],0);
      iVar4 = 0;
      iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
      if (0 < iVar1) {
        do {
          (**(code **)(*(int *)param_1[0x1ec] + 300))(&stack0xfffffff8,iVar4);
          if (unaff_EDI != 0) {
            uVar3 = FUN_009124a0();
            lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(iVar4,uVar3);
          }
          iVar4 = iVar4 + 1;
          iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
        } while (iVar4 < iVar1);
      }
    }
    FUN_00410540(4,&DAT_01b7bd48);
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      *(undefined4 *)param_1[0xdc] = 0;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 0;
      *(undefined4 *)(param_1[0xdc] + 8) = 1;
    }
    param_1[0x2d0] = 100;
    param_1[0x2d1] = 100;
    FUN_00414ba0();
    return 1;
  }
  return 0;
}

// 00414F40  ArmoredCarObj::vf50  size=27  [class]
void __fastcall ArmoredCarObj::vf50(int param_1)

{
  Bm0201::vf50();
  if ((*(byte *)(param_1 + 0x4c0) & 1) == 0) {
    FUN_00a93170();
    return;
  }
  return;
}

// 00414F60  FUN_00414f60  size=88  [between]
undefined4 FUN_00414f60(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = FUN_00b8c050();
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 00414FC0  ArmoredCarObj::vf54  size=35  [class]
void __fastcall ArmoredCarObj::vf54(int param_1)

{
  Bm018f::thunk_vf54();
  if (((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f7700(param_1);
  }
  return;
}

// 00414FF0  FUN_00414ff0  size=86  [between]
undefined4 FUN_00414ff0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x32c))();
        if (iVar2 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00415050  FUN_00415050  size=311  [between]
void __fastcall FUN_00415050(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar3 = *(undefined4 **)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 4) = 1;
      *(undefined1 *)(puVar3 + 4) = 1;
      puVar3[1] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0x32;
      *puVar3 = 0xe1;
      puVar3[0x23] = puVar3[0x23] | 0x400000;
      *(undefined1 *)((int)puVar3 + 0x11) = 10;
      puVar3 = (undefined4 *)FUN_009f8b60();
      piVar4 = (int *)FUN_00602cb0(5,*puVar3,iVar2);
      if (piVar4 != (int *)0x0) {
        iVar2 = *piVar4;
        uVar5 = (**(code **)(*param_1 + 0x68))();
        (**(code **)(iVar2 + 0x6c))(uVar5);
        piVar1 = (int *)piVar4[0x21c];
        piVar4[0x21d] = 0x3f800000;
        puVar3 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*piVar1 + 0x20))(0xb,*puVar3,0);
        piVar6 = (int *)FUN_00d773c0();
        (**(code **)(*piVar6 + 8))(piVar1);
        FUN_00d7b0f0();
        FUN_00d77c50(piVar4[0x13c],0xffffffff);
        piVar1[0x144] = 0x3dcccccd;
        FUN_00d77580(0x3f000000,0x40a80000,0x3f266666);
        piVar1[0xe0] = 0xe1;
        FUN_00d7b890();
        return;
      }
      return;
    }
  }
  FUN_00dd5650(&DAT_0163cec4);
  return;
}

// 004151B0  ArmoredCarObj::vf44  size=167  [class]
void __fastcall ArmoredCarObj::vf44(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
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
  FUN_00a92a00();
  FUN_00a944d0();
  BehaviorBgBase::vf44();
  return;
}

// 00415260  ArmoredCarObj::vf19C  size=179  [class]
void __thiscall ArmoredCarObj::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 00415320  FUN_00415320  size=50  [between]
void __thiscall FUN_00415320(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 00415360  FUN_00415360  size=46  [between]
void __fastcall FUN_00415360(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(9,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 00415390  FUN_00415390  size=733  [between]
undefined4 __fastcall FUN_00415390(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_8;
  undefined4 uStack_4;
  
  iVar4 = 0;
  param_1[0x1a1] = 0;
  if ((param_1[0x139] != 0) || ((*(byte *)(param_1 + 0x130) & 1) == 0)) {
    return 0;
  }
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    iVar5 = 0;
    iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
    if (0 < iVar2) {
      do {
        (**(code **)(*(int *)param_1[0x1ec] + 300))(&uStack_4,iVar5);
        if (unaff_EBP != 0) {
          FUN_00ac2080(iVar5);
        }
        iVar5 = iVar5 + 1;
        iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
      } while (iVar5 < iVar2);
    }
  }
  if (param_1[0x139] != 0) {
    return 0;
  }
  piVar6 = (int *)param_1[0x19f];
  piVar3 = piVar6 + param_1[0x1a1] * 0x54;
  uStack_4 = 0;
  iStack_8 = 0;
  if (piVar6 == piVar3) {
    return 0;
  }
  do {
    iVar2 = *piVar6;
    if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 0x1b0)) &&
       ((iVar2 != 2 && (iVar2 = FUN_00a81330(), iVar2 != param_1[0x13c])))) {
      if (iVar2 != 0) {
        iVar4 = FUN_00a7c8a0();
        iStack_8 = iVar4;
      }
      if (((0 < param_1[0x2d0]) && (iVar4 != 0)) &&
         (iVar2 = FUN_009f9350(*(undefined4 *)(iVar4 + 0x4b0)), iVar2 != 0)) {
        (**(code **)(*param_1 + 0x21c))(iVar4,(char)piVar6[4],0x3c23d70a,0);
      }
      uStack_4 = 1;
      if (*piVar6 != 0x146) {
        iVar4 = param_1[0x2d0];
        param_1[0x2d0] = iVar4 - piVar6[1];
        if (((piVar6[0x23] & 0x200U) == 0) && ((piVar6[0x24] & 0x40000U) == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (piVar6[0x25] == 0) {
LAB_0041556b:
          if (0 < param_1[0x2d0]) {
            (**(code **)(*param_1 + 0x198))(iStack_8,piVar6,1);
            if ((param_1[0x2d0] < 0x22) && (0x20 < iVar4)) {
              FUN_00414c40();
            }
            iVar2 = (int)(param_1[0x2d1] + (param_1[0x2d1] >> 0x1f & 3U)) >> 2;
            if ((param_1[0x2d0] <= iVar2) && (iVar2 <= iVar4)) {
              FUN_00415320(8);
            }
            if ((param_1[0x2d0] <= param_1[0x2d1] / 2) && (param_1[0x2d1] / 2 <= iVar4)) {
              FUN_00415320(7);
            }
            if (0 < param_1[0x2d0]) {
              return uStack_4;
            }
          }
          if (iVar4 < 1) {
            return uStack_4;
          }
          param_1[0x2d0] = 0;
          FUN_00415360();
          FUN_00e5e0c0("bm0301_se_dmg_spark",param_1,0xffffffff,0);
          return uStack_4;
        }
        if (((uint)piVar6[0x23] >> 10 & 1) == 0) {
          iVar2 = FUN_00a98220(piVar6);
          if ((((iVar2 == 0) || (iVar2 = FUN_00414ff0(), iVar2 == 0)) ||
              (iVar2 = FUN_00414f60(), iVar2 == 0)) &&
             ((iVar2 = FUN_00a98220(piVar6), iVar2 == 0 || (!bVar1)))) goto LAB_0041556b;
        }
        else {
          FUN_00414c40();
          FUN_00a8e680(piVar6,0,0x3e4ccccd);
        }
        FUN_00a8e5d0(param_1,piVar6,0);
        (**(code **)(*param_1 + 0x198))(iStack_8,piVar6,0x100);
        return 1;
      }
    }
    piVar6 = piVar6 + 0x54;
    if (piVar6 == piVar3) {
      return uStack_4;
    }
  } while( true );
}

// 00415670  FUN_00415670  size=365  [between]
void __fastcall FUN_00415670(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00414ce0();
    FUN_004039a0(9,param_1,0);
    FUN_00a963e0(local_160);
    FUN_00e5e0c0("bm0301_se_dmg_spark",param_1,0xffffffff,0);
    param_1[0x2d2] = 0x42f00000;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 1:
    fVar1 = (float)param_1[0x2d2];
    fVar3 = (float10)FUN_00a92ff0();
    param_1[0x2d2] = (int)(float)((float10)fVar1 - fVar3);
    if ((float10)fVar1 - fVar3 <= (float10)0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00a8c9b0(0,9,0x3f800000,0);
    FUN_00e5e0c0("bm0301_se_dmg_explosion",param_1,0xffffffff,0);
    FUN_00415050();
    FUN_004039a0(10,param_1,0);
    FUN_00a963e0(local_160);
    (**(code **)(*param_1 + 0x20))();
    (**(code **)(*param_1 + 200))(0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 3:
    iVar2 = FUN_00a8c890(0);
    if (*(int *)(iVar2 + 0x98) == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00a805f0();
  }
  return;
}

// 00415800  ArmoredCarObj::vf48  size=34  [class]
void __fastcall ArmoredCarObj::vf48(int param_1)

{
  Bm0201::thunk_vf48();
  FUN_00415390();
  if (*(int *)(param_1 + 0xb40) < 1) {
    FUN_00415670();
    return;
  }
  return;
}

// 00AB0BB0  ArmoredCarObj::ArmoredCarObj  size=18  [class]
undefined4 * __fastcall ArmoredCarObj::ArmoredCarObj(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0BD0  ArmoredCarObj::vf04  size=6  [class]
undefined * ArmoredCarObj::vf04(void)

{
  return &DAT_01b34c10;
}

// 00AB94A0  ArmoredCarObj::vf00  size=43  [class]
undefined4 __thiscall ArmoredCarObj::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

