// src/boss/bm6012/Bm6012.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00603F30..00AB9A90, 6 functions

#include "mgrr.h"
#include "Bm6012.h"

// 00603F30  Bm6012::vf44  size=54  [class]
void __fastcall Bm6012::vf44(int param_1)

{
  FUN_00a8c820();
  FUN_00a9d8a0();
  (**(code **)(*(int *)(param_1 + 0xb50) + 8))(0,0,0);
  BehaviorBgBase::vf44();
  return;
}

// 00603F70  Bm6012::vf40  size=174  [class]
undefined4 __fastcall Bm6012::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_120 [284];
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00e03ea0("PC50_START");
  *(undefined4 *)(param_1 + 0xb40) = uVar2;
  uVar2 = FUN_00e03ea0("pc40_LOADING");
  *(undefined4 *)(param_1 + 0xb44) = uVar2;
  iVar1 = DAT_018b9174;
  *(int *)(param_1 + 0xb48) = DAT_018b9174;
  if (iVar1 == 0xc40) {
    FUN_00aa92c0(3);
    *(undefined2 *)(param_1 + 0xb4c) = 0;
    return 1;
  }
  FUN_00e01eb0(param_1 + 0xb50);
  FUN_00e01540(0xc00,0x19,local_120);
  FUN_00aa92c0(2);
  *(undefined2 *)(param_1 + 0xb4c) = 0x101;
  return 1;
}

// 00604020  Bm6012::vf4C  size=243  [class]
void __fastcall Bm6012::vf4C(int param_1)

{
  int iVar1;
  undefined1 local_120 [284];
  
  BehaviorBgBase::vf4C();
  if (*(int *)(param_1 + 0xb48) == 0xc40) {
    if (*(char *)(param_1 + 0xb4d) == '\0') {
      iVar1 = FUN_009366e0(*(undefined4 *)(param_1 + 0xb44));
      if (iVar1 != 0) {
        FUN_00a8ca50(3,0,0);
        FUN_00aa92c0(1);
        *(undefined1 *)(param_1 + 0xb4d) = 1;
      }
    }
    if ((*(char *)(param_1 + 0xb4c) == '\0') && (DAT_018b9174 == 0xc50)) {
      iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0xb40),1);
      if (iVar1 != 0) {
        iVar1 = FUN_00937dc0(*(undefined4 *)(param_1 + 0xb44));
        if (iVar1 != 0) {
          FUN_00e01eb0(param_1 + 0xb50);
          FUN_00e01540(0xc00,0x19,local_120);
          FUN_00a8ca50(1,0,0);
          FUN_00aa92c0(2);
          *(undefined1 *)(param_1 + 0xb4c) = 1;
        }
      }
    }
  }
  return;
}

// 00AB1790  Bm6012::Bm6012  size=29  [class]
undefined4 * __fastcall Bm6012::Bm6012(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00AB17B0  Bm6012::vf04  size=6  [class]
undefined * Bm6012::vf04(void)

{
  return &DAT_01b354ec;
}

// 00AB9A90  Bm6012::vf00  size=54  [class]
undefined4 __thiscall Bm6012::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

