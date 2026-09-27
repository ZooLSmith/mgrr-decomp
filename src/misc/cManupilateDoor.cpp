// src/misc/cManupilateDoor.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E30F0..00ABAA40, 10 functions

#include "mgrr.h"
#include "cManupilateDoor.h"

// 005E30F0  cManupilateDoor::vf44  size=30  [class]
void cManupilateDoor::vf44(void)

{
  FUN_00a8c820();
  FUN_00a8c820();
  FUN_00a944d0();
  BehaviorBgBase::vf44();
  return;
}

// 005E3110  cManupilateDoor::thunk_vf50  size=5  [class]
void __fastcall cManupilateDoor::thunk_vf50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xb24) != 0) && (*(int *)(param_1 + 0xb08) == 0)) {
    *(undefined4 *)(param_1 + 0xb24) = 0;
    if (*(int *)(param_1 + 0xb20) != 0) {
      piVar1 = (int *)FUN_00d773c0();
      (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(param_1 + 0xb20));
    }
    *(undefined4 *)(param_1 + 0xb20) = 0;
    if (*(int *)(param_1 + 0xb08) == 0) {
      iVar2 = FUN_009fd880();
      if ((iVar2 == 0) && (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
      }
    }
  }
  FUN_00a93170();
  BehaviorBgBase::vf50();
  return;
}

// 005E3120  cManupilateDoor::vf328  size=72  [class]
void __fastcall cManupilateDoor::vf328(int *param_1)

{
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = param_1[0x2d4];
  local_18 = 0;
  local_14 = 0;
  (**(code **)(*param_1 + 0x7c))(param_1 + 0x2d8,&local_20);
  param_1[0x2cc] = 1;
  return;
}

// 005E3180  cManupilateDoor::vf31C  size=72  [class]
void __fastcall cManupilateDoor::vf31C(int *param_1)

{
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = param_1[0x2d4];
  local_18 = 0;
  local_14 = 0;
  (**(code **)(*param_1 + 0x7c))(param_1 + 0x2d0,&local_20);
  param_1[0x2cc] = 0;
  return;
}

// 005E3460  cManupilateDoor::startup  size=212  [class]
undefined4 __fastcall cManupilateDoor::startup(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GimmickBehaviorBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x2d0] = param_1[0x14];
  param_1[0x2d1] = param_1[0x15];
  param_1[0x2d2] = param_1[0x16];
  param_1[0x2d3] = param_1[0x17];
  param_1[0x2d8] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2da] = 0;
  param_1[0x2db] = 0x3f800000;
  iVar1 = (**(code **)(*param_1 + 0x84))();
  param_1[0x2d4] = *(int *)(iVar1 + 4);
  if ((param_1[300] != 0xf0c00) && (param_1[300] != 0xf0c04)) {
    iVar1 = FUN_00de4550("Ba0c00_0000.mot",0);
    uVar2 = FUN_00de4550("Ba0c00_0000_0_seq.bxm",0);
    if (iVar1 == 0) {
      FUN_00a9efb0(0,uVar2,0,0,0x3f800000,0,0,0x3f800000);
    }
  }
  return 1;
}

// 00AB6300  cManupilateDoor::cManupilateDoor  size=18  [class]
undefined4 * __fastcall cManupilateDoor::cManupilateDoor(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB6320  cManupilateDoor::vf04  size=6  [class]
undefined * cManupilateDoor::vf04(void)

{
  return &DAT_01b35340;
}

// 00AB6330  cManupilateDoor::vf320  size=1  [class]
void cManupilateDoor::vf320(void)

{
  return;
}

// 00AB6340  cManupilateDoor::vf324  size=1  [class]
void cManupilateDoor::vf324(void)

{
  return;
}

// 00ABAA40  cManupilateDoor::destruct  size=43  [class]
undefined4 __thiscall cManupilateDoor::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

