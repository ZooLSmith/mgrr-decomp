// src/enemy/em0048/Em0048.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F50C0..00AB6590, 6 functions

#include "mgrr.h"
#include "Em0048.h"

// 005F50C0  Em0048::vf4C  size=18  [class]
void __fastcall Em0048::vf4C(int *param_1)

{
  Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x005f50d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 005F50E0  Em0048::vf50  size=16  [class]
void Em0048::vf50(void)

{
  Behavior::vf50();
  FUN_00a93170();
  return;
}

// 005F6910  Em0048::vf40  size=117  [class]
void __fastcall Em0048::vf40(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = Behavior::startup();
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
    iVar2 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) == 0) {
      iVar2 = param_1;
    }
    sVar1 = *(short *)(iVar2 + 0x358);
    uVar4 = 0;
    if ((int)sVar1 != 0) {
      iVar2 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x360);
        if (*(int *)(param_1 + 0x360) == 0) {
          iVar3 = param_1;
        }
        if (((int)uVar4 < 0) || ((int)*(short *)(iVar3 + 0x358) <= (int)uVar4)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x350) + iVar2;
        }
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 1;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0xb0;
      } while (uVar4 < (uint)(int)sVar1);
    }
    return;
  }
  return;
}

// 00AA60A0  Em0048::Em0048  size=18  [class]
undefined4 * __fastcall Em0048::Em0048(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA60C0  Em0048::vf04  size=6  [class]
undefined * Em0048::vf04(void)

{
  return &DAT_01b35428;
}

// 00AB6590  Em0048::vf00  size=105  [class]
undefined4 * __thiscall Em0048::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

