// src/player/pl1500/state/StateMachineFactoryPl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A8C60..008AA330, 2 functions

#include "types.h"

// 008A8C60  StateMachineFactoryPl1500::vf04  size=31  [class]
undefined4 * __thiscall StateMachineFactoryPl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineFactory::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008AA330  StateMachineFactoryPl1500::vf00  size=706  [class]
undefined4 * StateMachineFactoryPl1500::vf00(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(param_1) {
  case 1:
    iVar1 = FUN_00dd3500(0xe0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)DeadStatePl1500::DeadStatePl1500(param_1);
      return puVar2;
    }
    break;
  case 2:
    iVar1 = FUN_00dd3500(0xd0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiButtonCutStatePl1500::ZangekiButtonCutStatePl1500(param_1);
      return puVar2;
    }
    break;
  case 3:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiChanceStatePl1500::vftable;
      return puVar2;
    }
    break;
  case 4:
    iVar1 = FUN_00dd3500(0x220,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiCutStatePl1500::ZangekiCutStatePl1500(param_1);
      return puVar2;
    }
    break;
  case 5:
    iVar1 = FUN_00dd3500(0x100,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiDatsuJumpStatePl1500::ZangekiDatsuJumpStatePl1500(param_1);
      return puVar2;
    }
    break;
  case 6:
    iVar1 = FUN_00dd3500(0x90,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiDatsuShortStatePl1500::ZangekiDatsuShortStatePl1500(param_1);
      return puVar2;
    }
    break;
  case 7:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiForbidStatePl1500::vftable;
      return puVar2;
    }
    break;
  case 8:
    puVar2 = (undefined4 *)FUN_00dd3500(0xa0,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiHoldStatePl1500::vftable;
      return puVar2;
    }
    break;
  case 9:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiIdleStatePl1500::vftable;
      return puVar2;
    }
    break;
  case 10:
    puVar2 = (undefined4 *)FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiInterceptStatePl1500::vftable;
      return puVar2;
    }
    break;
  case 0xb:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiLandingStatePl1500::vftable;
      return puVar2;
    }
    break;
  case 0xc:
    iVar1 = FUN_00dd3500(0x140,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiMoveStatePl1500::ZangekiMoveStatePl1500(param_1);
      return puVar2;
    }
    break;
  case 0xd:
    puVar2 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiNormalStatePl1500::vftable;
      return puVar2;
    }
    break;
  case 0xe:
    iVar1 = FUN_00dd3500(0x230,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiOnPartsStatePl1500::ZangekiOnPartsStatePl1500(param_1);
      return puVar2;
    }
    break;
  case 0xf:
    puVar2 = (undefined4 *)FUN_00dd3500(0xa0,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiReadyStatePl1500::vftable;
      return puVar2;
    }
    break;
  case 0x10:
    iVar1 = FUN_00dd3500(0x84,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiStatePl1500::ZangekiStatePl1500(param_1);
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}

