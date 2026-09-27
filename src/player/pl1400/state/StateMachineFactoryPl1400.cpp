// src/player/pl1400/state/StateMachineFactoryPl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008649B0..00868E60, 2 functions

#include "mgrr.h"
#include "StateMachineFactoryPl1400.h"

// 008649B0  StateMachineFactoryPl1400::vf04  size=31  [class]
undefined4 * __thiscall StateMachineFactoryPl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineFactory::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00868E60  StateMachineFactoryPl1400::vf00  size=880  [class]
undefined4 * StateMachineFactoryPl1400::vf00(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(param_1) {
  case 1:
    iVar1 = FUN_00dd3500(0xe0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)DeadStatePl1400::DeadStatePl1400(param_1);
      return puVar2;
    }
    break;
  case 2:
    iVar1 = FUN_00dd3500(0xc0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiButtonCutStatePl1400::ZangekiButtonCutStatePl1400(param_1);
      return puVar2;
    }
    break;
  case 3:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiChanceStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 4:
    iVar1 = FUN_00dd3500(0x220,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiCutStatePl1400::ZangekiCutStatePl1400(param_1);
      return puVar2;
    }
    break;
  case 5:
    iVar1 = FUN_00dd3500(0xf0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiDatsuJumpStatePl1400::ZangekiDatsuJumpStatePl1400(param_1);
      return puVar2;
    }
    break;
  case 6:
    iVar1 = FUN_00dd3500(0x110,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiDatsuShortStatePl1400::ZangekiDatsuShortStatePl1400(param_1);
      return puVar2;
    }
    break;
  case 7:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiForbidStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 8:
    puVar2 = (undefined4 *)FUN_00dd3500(0xa0,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiHoldStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 9:
    iVar1 = FUN_00dd3500(0x90,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiIaiAttackStatePl1400::ZangekiIaiAttackStatePl1400(param_1);
      return puVar2;
    }
    break;
  case 10:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiIaiIdleStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 0xb:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiIaiReadyStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 0xc:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiIaiStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 0xd:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiIdleStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 0xe:
    puVar2 = (undefined4 *)FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiInterceptStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 0xf:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiLandingStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 0x10:
    iVar1 = FUN_00dd3500(0x140,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiMoveStatePl1400::ZangekiMoveStatePl1400(param_1);
      return puVar2;
    }
    break;
  case 0x11:
    puVar2 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiNormalStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 0x12:
    iVar1 = FUN_00dd3500(0x230,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiOnPartsStatePl1400::ZangekiOnPartsStatePl1400(param_1);
      return puVar2;
    }
    break;
  case 0x13:
    puVar2 = (undefined4 *)FUN_00dd3500(0xa0,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiReadyStatePl1400::vftable;
      return puVar2;
    }
    break;
  case 0x14:
    iVar1 = FUN_00dd3500(0x5c,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiStatePl1400::ZangekiStatePl1400(param_1);
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}

