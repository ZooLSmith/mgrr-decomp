// src/player/pl0010/state/StateMachineFactoryPl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B84B50..00B91CC0, 2 functions

#include "mgrr.h"
#include "StateMachineFactoryPl0010.h"

// 00B84B50  StateMachineFactoryPl0010::vf04  size=31  [class]
undefined4 * __thiscall StateMachineFactoryPl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineFactory::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00B91CC0  StateMachineFactoryPl0010::vf00  size=3151  [class]
undefined4 * StateMachineFactoryPl0010::vf00(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(param_1) {
  case 1:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = AnyDiveRollStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 2:
    puVar2 = (undefined4 *)FUN_00dd3500(100,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = AnyHighOverJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 3:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = AnySlidingStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 4:
    puVar2 = (undefined4 *)FUN_00dd3500(100,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = AnywayHighJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 5:
    puVar2 = (undefined4 *)FUN_00dd3500(0x44,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = AvoidEnemyStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 6:
    puVar2 = (undefined4 *)FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = AvoidMiddleOverJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 7:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = AvoidSlidingStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 8:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = BodyStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 9:
    puVar2 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = CatLeapStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 10:
    puVar2 = (undefined4 *)FUN_00dd3500(0xc0,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = DashStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0xb:
    iVar1 = FUN_00dd3500(0xe0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)DeadStatePl0010::DeadStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0xc:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = DiveRollStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0xd:
    puVar2 = (undefined4 *)FUN_00dd3500(0x58,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = DownwardCliffOverJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0xe:
    puVar2 = (undefined4 *)FUN_00dd3500(0x60,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = FreeFallStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0xf:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = GlobalStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x10:
    puVar2 = (undefined4 *)FUN_00dd3500(100,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = HighOverJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x11:
    puVar2 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = IdleStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x12:
    puVar2 = (undefined4 *)FUN_00dd3500(0xa0,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = JumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x13:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = LandingStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x14:
    puVar2 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = LongCliffOverJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x15:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = LowOverJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x16:
    puVar2 = (undefined4 *)FUN_00dd3500(0x74,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = MiddleCatLeapStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x17:
    puVar2 = (undefined4 *)FUN_00dd3500(0x50,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = MiddleOverJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x18:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = MiddleWallPopStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x19:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = MostHighWallPopStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x1a:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = NarrowScaffoldIdleStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x1b:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = NarrowScaffoldRunStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x1c:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = NarrowScaffoldWalkStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x1d:
    iVar1 = FUN_00dd3500(0xc0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)OvercomeBridgeStatePl0010::OvercomeBridgeStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x1e:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = OvercomeContainerStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x1f:
    iVar1 = FUN_00dd3500(0x60,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)OvercomeEnemyStatePl0010::OvercomeEnemyStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x20:
    iVar1 = FUN_00dd3500(0x80,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)OvercomeMissileStatePl0010::OvercomeMissileStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x21:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = OvercomeTrainToTrainStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x22:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = QuickDashStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x23:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = QuickTurnStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x24:
    puVar2 = (undefined4 *)FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = RunStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x25:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ShortCliffOverJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x26:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = SlidingStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x27:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = SlipFallStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x28:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = SlipLandingStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x29:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = TurnStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x2a:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = TwoStageJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x2b:
    puVar2 = (undefined4 *)FUN_00dd3500(0x54,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = UnevenCliffOverJumpStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x2c:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = WalkStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x2d:
    puVar2 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = WallEdgeGrabFromBelowStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x2e:
    puVar2 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = WallEdgeGrabFromOverStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x2f:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = WallPopStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x30:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiChanceStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x31:
    iVar1 = FUN_00dd3500(0x220,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiCutStatePl0010::ZangekiCutStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x32:
    iVar1 = FUN_00dd3500(0xe0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiDatsuJumpStatePl0010::ZangekiDatsuJumpStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x33:
    iVar1 = FUN_00dd3500(0x90,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiDatsuShortStatePl0010::ZangekiDatsuShortStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x34:
    iVar1 = FUN_00dd3500(0x210,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiEventQteStatePl0010::ZangekiEventQteStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x35:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiForbidStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x36:
    puVar2 = (undefined4 *)FUN_00dd3500(0xa0,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiHoldStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x37:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiHugeCutDownStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x38:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiHugeCutLeftKesaStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x39:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiHugeCutLeftToRightStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x3a:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiHugeCutRightKesaStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x3b:
    puVar2 = (undefined4 *)FUN_00dd3500(0x30,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiHugeCutRightToLeftStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x3c:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiHugeHoldStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x3d:
    puVar2 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiIdleStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x3e:
    puVar2 = (undefined4 *)FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiInterceptStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x3f:
    puVar2 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiLandingStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x40:
    iVar1 = FUN_00dd3500(0x140,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiMoveStatePl0010::ZangekiMoveStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x41:
    puVar2 = (undefined4 *)FUN_00dd3500(0x40,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiNormalStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x42:
    iVar1 = FUN_00dd3500(0x220,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiOnPartsStatePl0010::ZangekiOnPartsStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x43:
    puVar2 = (undefined4 *)FUN_00dd3500(0xa0,&DAT_01b7bd48);
    if (puVar2 != (undefined4 *)0x0) {
      StateMachineNode::StateMachineNode_8(param_1);
      *puVar2 = ZangekiReadyStatePl0010::vftable;
      return puVar2;
    }
    break;
  case 0x44:
    iVar1 = FUN_00dd3500(100,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiStatePl0010::ZangekiStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x45:
    iVar1 = FUN_00dd3500(0xc0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiTateStatePl0010::ZangekiTateStatePl0010(param_1);
      return puVar2;
    }
    break;
  case 0x46:
    iVar1 = FUN_00dd3500(0xc0,&DAT_01b7bd48);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)ZangekiYokoStatePl0010::ZangekiYokoStatePl0010(param_1);
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}

