// src/player/pl0010/state/StateMachineFactoryPl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "StateMachineFactoryPl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned char DAT_01b7bd48[];  // default heap (second argument of FUN_00dd3500)

namespace StateMachineFactoryPl0010_p1 {

// FUN_00dd3500(size, heap): heap allocation (cdecl; the generated prototype returns void).
inline void *allocate(unsigned int size)
{
    return ((void *(__cdecl *)(unsigned int, void *))FUN_00dd3500)(size, DAT_01b7bd48);
}

// A constructor called with ECX = the new object and the state id on the stack (returns ECX).
typedef void *(__thiscall *NodeCtorFn)(void *self, undefined4 stateId);

// StateMachineNode::StateMachineNode (0x00D82530)
inline NodeCtorFn stateMachineNodeCtor() { return (NodeCtorFn)0x00D82530; }

// State whose constructor the compiler inlined: the StateMachineNode constructor followed by the
// store of the derived vftable.  0 when the allocation failed.
inline void *createNode(unsigned int size, undefined4 stateId, unsigned int vftable)
{
    void *node = allocate(size);
    if (node != 0) {
        stateMachineNodeCtor()(node, stateId);
        *(unsigned int *)node = vftable;
        return node;
    }
    return 0;
}

// State with an out-of-line constructor at address `ctor`.  0 when the allocation failed.
inline void *createWithCtor(unsigned int size, undefined4 stateId, unsigned int ctor)
{
    void *memory = allocate(size);
    if (memory != 0) {
        return ((NodeCtorFn)ctor)(memory, stateId);
    }
    return 0;
}

}  // namespace StateMachineFactoryPl0010_p1

// 00B84B50  StateMachineFactoryPl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *StateMachineFactoryPl0010::vf04(byte flags)
{
    // vftable = StateMachineFactory::vftable (0x01648DBC)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00B91CC0  StateMachineFactoryPl0010::vf00  size=3151  [class]
// Creates the state object of `stateId` (ids 1..0x46; any other id gives 0).  `this` is unused.
undefined4 *StateMachineFactoryPl0010::vf00(undefined4 stateId)
{
    using namespace StateMachineFactoryPl0010_p1;

    switch (stateId) {
    case 0x01:  // AnyDiveRollStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1450);  // vftable = AnyDiveRollStatePl0010::vftable
    case 0x02:  // AnyHighOverJumpStatePl0010
        return (undefined4 *)createNode(0x64, stateId, 0x016A147C);  // vftable = AnyHighOverJumpStatePl0010::vftable
    case 0x03:  // AnySlidingStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A14A8);  // vftable = AnySlidingStatePl0010::vftable
    case 0x04:  // AnywayHighJumpStatePl0010
        return (undefined4 *)createNode(0x64, stateId, 0x016A14D4);  // vftable = AnywayHighJumpStatePl0010::vftable
    case 0x05:  // AvoidEnemyStatePl0010
        return (undefined4 *)createNode(0x44, stateId, 0x016A1500);  // vftable = AvoidEnemyStatePl0010::vftable
    case 0x06:  // AvoidMiddleOverJumpStatePl0010
        return (undefined4 *)createNode(0x3C, stateId, 0x016A152C);  // vftable = AvoidMiddleOverJumpStatePl0010::vftable
    case 0x07:  // AvoidSlidingStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1558);  // vftable = AvoidSlidingStatePl0010::vftable
    case 0x08:  // BodyStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1584);  // vftable = BodyStatePl0010::vftable
    case 0x09:  // CatLeapStatePl0010
        return (undefined4 *)createNode(0x50, stateId, 0x016A15B0);  // vftable = CatLeapStatePl0010::vftable
    case 0x0A:  // DashStatePl0010
        return (undefined4 *)createNode(0xC0, stateId, 0x016A15DC);  // vftable = DashStatePl0010::vftable
    case 0x0B:  // DeadStatePl0010
        return (undefined4 *)createWithCtor(0xE0, stateId, 0x00B812F0);  // DeadStatePl0010::DeadStatePl0010
    case 0x0C:  // DiveRollStatePl0010
        return (undefined4 *)createNode(0x34, stateId, 0x016A1634);  // vftable = DiveRollStatePl0010::vftable
    case 0x0D:  // DownwardCliffOverJumpStatePl0010
        return (undefined4 *)createNode(0x58, stateId, 0x016A1660);  // vftable = DownwardCliffOverJumpStatePl0010::vftable
    case 0x0E:  // FreeFallStatePl0010
        return (undefined4 *)createNode(0x60, stateId, 0x016A168C);  // vftable = FreeFallStatePl0010::vftable
    case 0x0F:  // GlobalStatePl0010
        return (undefined4 *)createNode(0x38, stateId, 0x016A16B8);  // vftable = GlobalStatePl0010::vftable
    case 0x10:  // HighOverJumpStatePl0010
        return (undefined4 *)createNode(0x64, stateId, 0x016A16E4);  // vftable = HighOverJumpStatePl0010::vftable
    case 0x11:  // IdleStatePl0010
        return (undefined4 *)createNode(0x50, stateId, 0x016A1710);  // vftable = IdleStatePl0010::vftable
    case 0x12:  // JumpStatePl0010
        return (undefined4 *)createNode(0xA0, stateId, 0x016A173C);  // vftable = JumpStatePl0010::vftable
    case 0x13:  // LandingStatePl0010
        return (undefined4 *)createNode(0x38, stateId, 0x016A1768);  // vftable = LandingStatePl0010::vftable
    case 0x14:  // LongCliffOverJumpStatePl0010
        return (undefined4 *)createNode(0x40, stateId, 0x016A1794);  // vftable = LongCliffOverJumpStatePl0010::vftable
    case 0x15:  // LowOverJumpStatePl0010
        return (undefined4 *)createNode(0x34, stateId, 0x016A17C0);  // vftable = LowOverJumpStatePl0010::vftable
    case 0x16:  // MiddleCatLeapStatePl0010
        return (undefined4 *)createNode(0x74, stateId, 0x016A17EC);  // vftable = MiddleCatLeapStatePl0010::vftable
    case 0x17:  // MiddleOverJumpStatePl0010
        return (undefined4 *)createNode(0x50, stateId, 0x016A1818);  // vftable = MiddleOverJumpStatePl0010::vftable
    case 0x18:  // MiddleWallPopStatePl0010
        return (undefined4 *)createNode(0x34, stateId, 0x016A1844);  // vftable = MiddleWallPopStatePl0010::vftable
    case 0x19:  // MostHighWallPopStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1870);  // vftable = MostHighWallPopStatePl0010::vftable
    case 0x1A:  // NarrowScaffoldIdleStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A189C);  // vftable = NarrowScaffoldIdleStatePl0010::vftable
    case 0x1B:  // NarrowScaffoldRunStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A18C8);  // vftable = NarrowScaffoldRunStatePl0010::vftable
    case 0x1C:  // NarrowScaffoldWalkStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A18F4);  // vftable = NarrowScaffoldWalkStatePl0010::vftable
    case 0x1D:  // OvercomeBridgeStatePl0010
        return (undefined4 *)createWithCtor(0xC0, stateId, 0x00B81FD0);  // OvercomeBridgeStatePl0010::OvercomeBridgeStatePl0010
    case 0x1E:  // OvercomeContainerStatePl0010
        return (undefined4 *)createNode(0x38, stateId, 0x016A194C);  // vftable = OvercomeContainerStatePl0010::vftable
    case 0x1F:  // OvercomeEnemyStatePl0010
        return (undefined4 *)createWithCtor(0x60, stateId, 0x00B82140);  // OvercomeEnemyStatePl0010::OvercomeEnemyStatePl0010
    case 0x20:  // OvercomeMissileStatePl0010
        return (undefined4 *)createWithCtor(0x80, stateId, 0x00B82200);  // OvercomeMissileStatePl0010::OvercomeMissileStatePl0010
    case 0x21:  // OvercomeTrainToTrainStatePl0010
        return (undefined4 *)createNode(0x38, stateId, 0x016A19D0);  // vftable = OvercomeTrainToTrainStatePl0010::vftable
    case 0x22:  // QuickDashStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A19FC);  // vftable = QuickDashStatePl0010::vftable
    case 0x23:  // QuickTurnStatePl0010
        return (undefined4 *)createNode(0x34, stateId, 0x016A1A28);  // vftable = QuickTurnStatePl0010::vftable
    case 0x24:  // RunStatePl0010
        return (undefined4 *)createNode(0x3C, stateId, 0x016A1A54);  // vftable = RunStatePl0010::vftable
    case 0x25:  // ShortCliffOverJumpStatePl0010
        return (undefined4 *)createNode(0x38, stateId, 0x016A1A80);  // vftable = ShortCliffOverJumpStatePl0010::vftable
    case 0x26:  // SlidingStatePl0010
        return (undefined4 *)createNode(0x38, stateId, 0x016A1AAC);  // vftable = SlidingStatePl0010::vftable
    case 0x27:  // SlipFallStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1AD8);  // vftable = SlipFallStatePl0010::vftable
    case 0x28:  // SlipLandingStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1B04);  // vftable = SlipLandingStatePl0010::vftable
    case 0x29:  // TurnStatePl0010
        return (undefined4 *)createNode(0x38, stateId, 0x016A1B30);  // vftable = TurnStatePl0010::vftable
    case 0x2A:  // TwoStageJumpStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1B5C);  // vftable = TwoStageJumpStatePl0010::vftable
    case 0x2B:  // UnevenCliffOverJumpStatePl0010
        return (undefined4 *)createNode(0x54, stateId, 0x016A1B88);  // vftable = UnevenCliffOverJumpStatePl0010::vftable
    case 0x2C:  // WalkStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1BB4);  // vftable = WalkStatePl0010::vftable
    case 0x2D:  // WallEdgeGrabFromBelowStatePl0010
        return (undefined4 *)createNode(0x40, stateId, 0x016A1BE0);  // vftable = WallEdgeGrabFromBelowStatePl0010::vftable
    case 0x2E:  // WallEdgeGrabFromOverStatePl0010
        return (undefined4 *)createNode(0x40, stateId, 0x016A1C0C);  // vftable = WallEdgeGrabFromOverStatePl0010::vftable
    case 0x2F:  // WallPopStatePl0010
        return (undefined4 *)createNode(0x34, stateId, 0x016A1C38);  // vftable = WallPopStatePl0010::vftable
    case 0x30:  // ZangekiChanceStatePl0010
        return (undefined4 *)createNode(0x34, stateId, 0x016A1C64);  // vftable = ZangekiChanceStatePl0010::vftable
    case 0x31:  // ZangekiCutStatePl0010
        return (undefined4 *)createWithCtor(0x220, stateId, 0x00B91560);  // ZangekiCutStatePl0010::ZangekiCutStatePl0010
    case 0x32:  // ZangekiDatsuJumpStatePl0010
        return (undefined4 *)createWithCtor(0xE0, stateId, 0x00B82E30);  // ZangekiDatsuJumpStatePl0010::ZangekiDatsuJumpStatePl0010
    case 0x33:  // ZangekiDatsuShortStatePl0010
        return (undefined4 *)createWithCtor(0x90, stateId, 0x00B82EC0);  // ZangekiDatsuShortStatePl0010::ZangekiDatsuShortStatePl0010
    case 0x34:  // ZangekiEventQteStatePl0010
        return (undefined4 *)createWithCtor(0x210, stateId, 0x00B82F50);  // ZangekiEventQteStatePl0010::ZangekiEventQteStatePl0010
    case 0x35:  // ZangekiForbidStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1D94);  // vftable = ZangekiForbidStatePl0010::vftable
    case 0x36:  // ZangekiHoldStatePl0010
        return (undefined4 *)createNode(0xA0, stateId, 0x016A1DC0);  // vftable = ZangekiHoldStatePl0010::vftable
    case 0x37:  // ZangekiHugeCutDownStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1DEC);  // vftable = ZangekiHugeCutDownStatePl0010::vftable
    case 0x38:  // ZangekiHugeCutLeftKesaStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1E18);  // vftable = ZangekiHugeCutLeftKesaStatePl0010::vftable
    case 0x39:  // ZangekiHugeCutLeftToRightStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1E44);  // vftable = ZangekiHugeCutLeftToRightStatePl0010::vftable
    case 0x3A:  // ZangekiHugeCutRightKesaStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1E70);  // vftable = ZangekiHugeCutRightKesaStatePl0010::vftable
    case 0x3B:  // ZangekiHugeCutRightToLeftStatePl0010
        return (undefined4 *)createNode(0x30, stateId, 0x016A1E9C);  // vftable = ZangekiHugeCutRightToLeftStatePl0010::vftable
    case 0x3C:  // ZangekiHugeHoldStatePl0010
        return (undefined4 *)createNode(0x38, stateId, 0x016A1EC8);  // vftable = ZangekiHugeHoldStatePl0010::vftable
    case 0x3D:  // ZangekiIdleStatePl0010
        return (undefined4 *)createNode(0x38, stateId, 0x016A1EF4);  // vftable = ZangekiIdleStatePl0010::vftable
    case 0x3E:  // ZangekiInterceptStatePl0010
        return (undefined4 *)createNode(0x3C, stateId, 0x016A1F20);  // vftable = ZangekiInterceptStatePl0010::vftable
    case 0x3F:  // ZangekiLandingStatePl0010
        return (undefined4 *)createNode(0x34, stateId, 0x016A1F4C);  // vftable = ZangekiLandingStatePl0010::vftable
    case 0x40:  // ZangekiMoveStatePl0010
        return (undefined4 *)createWithCtor(0x140, stateId, 0x00B83680);  // ZangekiMoveStatePl0010::ZangekiMoveStatePl0010
    case 0x41:  // ZangekiNormalStatePl0010
        return (undefined4 *)createNode(0x40, stateId, 0x016A1FA4);  // vftable = ZangekiNormalStatePl0010::vftable
    case 0x42:  // ZangekiOnPartsStatePl0010
        return (undefined4 *)createWithCtor(0x220, stateId, 0x00B837A0);  // ZangekiOnPartsStatePl0010::ZangekiOnPartsStatePl0010
    case 0x43:  // ZangekiReadyStatePl0010
        return (undefined4 *)createNode(0xA0, stateId, 0x016A1FFC);  // vftable = ZangekiReadyStatePl0010::vftable
    case 0x44:  // ZangekiStatePl0010
        return (undefined4 *)createWithCtor(0x64, stateId, 0x00B838B0);  // ZangekiStatePl0010::ZangekiStatePl0010
    case 0x45:  // ZangekiTateStatePl0010
        return (undefined4 *)createWithCtor(0xC0, stateId, 0x00B83A50);  // ZangekiTateStatePl0010::ZangekiTateStatePl0010
    case 0x46:  // ZangekiYokoStatePl0010
        return (undefined4 *)createWithCtor(0xC0, stateId, 0x00B83C00);  // ZangekiYokoStatePl0010::ZangekiYokoStatePl0010
    }
    return 0;
}
