// src/boss/bm0423/Bm0423.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00413B50..00AB9270, 6 functions

#include "types.h"

// 00413B50  Bm0423::vf40  size=29  [class]
undefined4 __fastcall Bm0423::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb58) = 0;
  return 1;
}

// 00413B70  Bm0423::vf2F4  size=13  [class]
void __fastcall Bm0423::vf2F4(int param_1)

{
  *(undefined4 *)(param_1 + 0xb50) = 1;
  return;
}

// 00413B80  Bm0423::vf48  size=489  [class]
void __fastcall Bm0423::vf48(int *param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  Bm0201::thunk_vf48();
  if (param_1[0x2d4] != 0) {
    if (param_1[0x2d5] == 0) {
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
      uStack_20 = *puVar3;
      uStack_18 = puVar3[2];
      uStack_14 = puVar3[3];
      fStack_1c = (float)puVar3[1] - 50.0;
      iVar4 = FUN_009f8b40();
      uVar5 = (**(code **)(*param_1 + 0x68))();
      iVar4 = FUN_0090dc50(param_1 + 0x2d0,0,0,uVar5,&uStack_20,iVar4 << 0x10 | 0x1e,
                           "Bm0423_GroundCheck");
      if (iVar4 == 0) {
        param_1[0x2d4] = 0;
      }
      param_1[0x2d5] = 1;
    }
    fVar8 = (float10)FUN_00a92ff0();
    fVar1 = (float)param_1[0x2d6];
    param_1[0x2d6] = (int)(float)(fVar8 + (float10)fVar1);
    if ((float10)60.0 <= fVar8 + (float10)fVar1) {
      param_1[0x2d4] = 0;
      iVar4 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
      if (iVar4 != 0) {
        iVar4 = CollisionAttackData::CollisionAttackData_3();
        if (iVar4 != 0) {
          puVar3 = *(undefined4 **)(iVar4 + 8);
          *(undefined4 *)(iVar4 + 4) = 1;
          puVar3[1] = 100;
          puVar3[3] = 0;
          *(undefined1 *)(puVar3 + 4) = 1;
          puVar3[2] = 9999;
          *puVar3 = 0xe3;
          puVar3[0x23] = puVar3[0x23] | 0x400000;
          *(undefined1 *)((int)puVar3 + 0x11) = 10;
          puVar3 = (undefined4 *)FUN_009f8b60();
          piVar6 = (int *)FUN_00602cb0(5,*puVar3,iVar4);
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x6c))(param_1 + 0x2d0);
            piVar2 = (int *)piVar6[0x21c];
            piVar6[0x21d] = 0x3f800000;
            puVar3 = (undefined4 *)FUN_009f8b60();
            (**(code **)(*piVar2 + 0x20))(0xb,*puVar3,0);
            piVar7 = (int *)FUN_00d773c0();
            (**(code **)(*piVar7 + 8))(piVar2);
            FUN_00d7b0f0();
            FUN_00d77c50(piVar6[0x13c],0xffffffff);
            piVar2[0x144] = 0x41200000;
            FUN_00d77580(0x40a00000,0x41200000,0x3f266666);
            piVar2[0xe0] = 0xe3;
            FUN_00d7b890();
          }
        }
      }
    }
  }
  return;
}

// 00AB0820  Bm0423::Bm0423  size=18  [class]
undefined4 * __fastcall Bm0423::Bm0423(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  return param_1;
}

// 00AB0840  Bm0423::vf04  size=6  [class]
undefined * Bm0423::vf04(void)

{
  return &DAT_01b34bdc;
}

// 00AB9270  Bm0423::vf00  size=43  [class]
undefined4 __thiscall Bm0423::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

