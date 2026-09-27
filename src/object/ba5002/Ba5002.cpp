// src/object/ba5002/Ba5002.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00408E10..00AB9640, 8 functions

#include "types.h"

// 00408E10  Ba5002::vf40  size=58  [class]
int __fastcall Ba5002::vf40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = MonThrowMoto::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  param_1 = param_1 + 0xb44;
  iVar1 = 5;
  do {
    iVar2 = iVar1;
    *(undefined4 *)(param_1 + -0x14) = 0;
    FUN_00a7c950();
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1 = param_1 + 4;
    iVar1 = iVar2 + -1;
  } while (iVar1 != 0);
  return iVar2;
}

// 00408E50  Ba5002::vf44  size=5  [class]
void __fastcall Ba5002::vf44(int param_1)

{
  int iVar1;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1 + 0x898) != 0) {
    if (*(int *)(param_1 + 0x89c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
      *(undefined4 *)(param_1 + 0x89c) = 0;
    }
    FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
    FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
    FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  FUN_00a934c0();
  FUN_00a933e0();
  FUN_00a93450();
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int **)(param_1 + 0x888) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x888) + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    if (*(undefined4 **)(param_1 + 0x888) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x888))(1);
      *(undefined4 *)(param_1 + 0x888) = 0;
    }
  }
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x884);
  if (iVar1 != 0) {
    cXml::cXml_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x884) = 0;
  }
  if (*(int *)(param_1 + 0x9f4) != 0) {
    FUN_00983fd0(param_1);
  }
  if (*(int *)(param_1 + 0xa54) != 0) {
    if (*(int *)(param_1 + 0xa58) != -1) {
      FUN_00c5ad80(*(int *)(param_1 + 0xa58));
    }
    if (*(int *)(param_1 + 0xa5c) != -1) {
      FUN_00c4d100(*(int *)(param_1 + 0xa5c));
    }
  }
  FUN_009841c0(param_1);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  Behavior::vf44();
  return;
}

// 00408E60  FUN_00408e60  size=90  [between]
int __thiscall FUN_00408e60(int param_1,int param_2)

{
  LONG LVar1;
  undefined4 uVar2;
  int iVar3;
  LONG *lpAddend;
  
  if (param_2 == 0) {
    return -1;
  }
  iVar3 = 0;
  lpAddend = (LONG *)(param_1 + 0xb30);
  do {
    LVar1 = InterlockedIncrement(lpAddend);
    if (LVar1 == 1) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    lpAddend = lpAddend + 1;
  } while (iVar3 < 5);
  return -1;
}

// 00408EC0  FUN_00408ec0  size=23  [between]
void __thiscall FUN_00408ec0(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < 5) {
    *(undefined4 *)(param_1 + 0xb58 + param_2 * 4) = param_3;
  }
  return;
}

// 00408F40  Ba5002::vf4C  size=142  [class]
void __fastcall Ba5002::vf4C(int param_1)

{
  int iVar1;
  LONG LVar2;
  uint uVar3;
  LONG *Destination;
  
  ExcelStage::vf4C();
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0xb6c) = 0;
  Destination = (LONG *)(param_1 + 0xb30);
  do {
    if (*Destination != 0) {
      iVar1 = FUN_00a81330();
      if (((iVar1 == 0) || (iVar1 = FUN_00a7c8a0(), iVar1 == 0)) || (*(int *)(iVar1 + 0x4e4) != 0))
      {
        if (uVar3 < 5) {
          FUN_00a7c950();
          Destination[10] = 0;
          do {
            LVar2 = InterlockedCompareExchange(Destination,0,*Destination);
          } while (LVar2 != *Destination);
        }
      }
      else if (Destination[10] != 0) {
        *(int *)(param_1 + 0xb6c) = *(int *)(param_1 + 0xb6c) + 1;
      }
    }
    uVar3 = uVar3 + 1;
    Destination = Destination + 1;
  } while ((int)uVar3 < 5);
  return;
}

// 00AB0E30  Ba5002::Ba5002  size=48  [class]
undefined4 * __fastcall Ba5002::Ba5002(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  iVar1 = 4;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AB0E70  Ba5002::vf04  size=6  [class]
undefined * Ba5002::vf04(void)

{
  return &DAT_01b34b40;
}

// 00AB9640  Ba5002::vf00  size=43  [class]
undefined4 __thiscall Ba5002::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

