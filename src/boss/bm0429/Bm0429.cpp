// src/boss/bm0429/Bm0429.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00413D70..00AB92A0, 8 functions

#include "types.h"

// 00413D70  Bm0429::thunk_vf48  size=5  [class]
void __fastcall Bm0429::thunk_vf48(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  BehaviorDebrisActor::vf48();
  if ((((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x884) != 0)) &&
     ((*(char *)(param_1 + 0x470) == '\0' ||
      (((*(byte *)(param_1 + 0x472) & 0x80) == 0 || (*(char *)(param_1 + 0x471) == '\0')))))) {
    FUN_0092bcd0();
    if (*(char *)(*(int *)(param_1 + 0x884) + 0x20) != '\0') {
      iVar1 = FUN_0092b680();
      if (iVar1 != 0) {
        fVar2 = (float10)FUN_00928de0();
        if ((fVar2 < (float10)(float)(undefined *)0x0 != (fVar2 == (float10)(float)(undefined *)0x0)
            ) && (*(int *)(param_1 + 0x898) != 0)) {
          if (*(int *)(param_1 + 0x89c) != 0) {
            FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
            *(undefined4 *)(param_1 + 0x89c) = 0;
          }
          FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
          FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
          FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
          *(undefined4 *)(param_1 + 0x898) = 0;
        }
      }
    }
  }
  return;
}

// 00413D80  Bm0429::vf44  size=43  [class]
void __fastcall Bm0429::vf44(int param_1)

{
  if (*(int *)(param_1 + 0xbf4) == 0) {
    FUN_00eaa6e0(0,0);
  }
  BehaviorBgBase::vf44();
  return;
}

// 00413DB0  Bm0429::vf40  size=91  [class]
undefined4 __fastcall Bm0429::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xbf0) = 1;
  *(undefined4 *)(param_1 + 0xbf4) = 0;
  uVar2 = FUN_00e01eb0(param_1 + 0xb40);
  FUN_00e01540(0x400,5,uVar2);
  return 1;
}

// 00413E10  Bm0429::vf30  size=79  [class]
void __fastcall Bm0429::vf30(int param_1)

{
  undefined4 uVar1;
  
  Bh0056::vf30();
  if (*(int *)(param_1 + 0xbf4) == 0) {
    uVar1 = FUN_00e01ca0();
    FUN_00e01540(0x400,6,uVar1);
    FUN_00eaa6e0(0,0);
  }
  return;
}

// 00413E60  Bm0429::vf2F4  size=89  [class]
void __fastcall Bm0429::vf2F4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xbf0) != 0) {
    FUN_00eaa6e0(0,0);
    uVar1 = FUN_00e01ca0();
    FUN_00e01540(0x400,6,uVar1);
    *(undefined4 *)(param_1 + 0xbf4) = 1;
  }
  return;
}

// 00AB0870  Bm0429::Bm0429  size=29  [class]
undefined4 * __fastcall Bm0429::Bm0429(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00AB0890  Bm0429::vf04  size=6  [class]
undefined * Bm0429::vf04(void)

{
  return &DAT_01b34be0;
}

// 00AB92A0  Bm0429::vf00  size=54  [class]
undefined4 __thiscall Bm0429::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

