// src/misc/EmBodyDLC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A9BAC0..00AB9D10, 3 functions

#include "mgrr.h"
#include "EmBodyDLC.h"

// 00A9BAC0  EmBodyDLC::vf40  size=182  [class]
undefined4 __fastcall EmBodyDLC::vf40(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = BehaviorEmBody::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x4b0);
  if (0x2c011 < uVar1) {
    switch(uVar1) {
    case 0x2c141:
    case 0x2c143:
    case 0x2c145:
    case 0x2c161:
      goto switchD_00a9bb59_caseD_2c141;
    default:
      return 1;
    case 0x2c151:
    case 0x2c153:
      goto switchD_00a9bb59_caseD_2c151;
    case 0x2c171:
switchD_00a9bb59_caseD_2c171:
      *(undefined4 *)(param_1 + 0x78) = 0x3fa66666;
      *(undefined4 *)(param_1 + 0x74) = 0x3fa66666;
      *(undefined4 *)(param_1 + 0x70) = 0x3fa66666;
      return 1;
    }
  }
  if (uVar1 != 0x2c011) {
    if (uVar1 < 0x28152) {
      if (uVar1 == 0x28151) {
switchD_00a9bb59_caseD_2c151:
        *(undefined4 *)(param_1 + 0x78) = 0x3f99999a;
        *(undefined4 *)(param_1 + 0x74) = 0x3f99999a;
        *(undefined4 *)(param_1 + 0x70) = 0x3f99999a;
        return 1;
      }
      if (uVar1 < 0x28144) {
        if (((uVar1 != 0x28143) && (uVar1 != 0x28011)) && (uVar1 != 0x28141)) {
          return 1;
        }
      }
      else if (uVar1 != 0x28145) {
        return 1;
      }
    }
    else {
      if (uVar1 == 0x28153) goto switchD_00a9bb59_caseD_2c151;
      if (uVar1 != 0x28161) {
        if (uVar1 != 0x28171) {
          return 1;
        }
        goto switchD_00a9bb59_caseD_2c171;
      }
    }
  }
switchD_00a9bb59_caseD_2c141:
  *(undefined4 *)(param_1 + 0x78) = 0x3f8ccccd;
  *(undefined4 *)(param_1 + 0x74) = 0x3f8ccccd;
  *(undefined4 *)(param_1 + 0x70) = 0x3f8ccccd;
  return 1;
}

// 00AB2110  EmBodyDLC::vf04  size=6  [class]
undefined * EmBodyDLC::vf04(void)

{
  return &DAT_01be9c40;
}

// 00AB9D10  EmBodyDLC::vf00  size=105  [class]
undefined4 * __thiscall EmBodyDLC::vf00(undefined4 *param_1,byte param_2)

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

