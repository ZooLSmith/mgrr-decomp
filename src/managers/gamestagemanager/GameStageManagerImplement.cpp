// src/managers/gamestagemanager/GameStageManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "GameStageManagerImplement.h"

extern undefined4 *DAT_01b35d60;        // current stage object (polymorphic)
extern GameStageManager *DAT_01b35d88;  // the GameStageManager instance

namespace GameStageManagerImplement_p1 {

const unsigned int kVftable     = 0x0164AD84;  // GameStageManagerImplement::vftable
const unsigned int kBaseVftable = 0x0164AD68;  // GameStageManager::vftable

// Virtual function at byte offset `offset` of the vftable of `obj`.
template <class Sig> inline Sig vfunc(void *obj, int offset) { return *(Sig *)(*(char **)obj + offset); }

// FUN_00dd3500(size, heap): heap allocation (the generated prototype returns void).
inline void *allocate(unsigned int size, undefined4 heap)
{
    return ((void *(*)(unsigned int, undefined4))FUN_00dd3500)(size, heap);
}

}  // namespace GameStageManagerImplement_p1

// 008DC7B0  FUN_008dc7b0  size=6  [callgraph]
// The current stage object.
undefined4 FUN_008dc7b0(void)
{
    return (undefined4)DAT_01b35d60;
}

// 008DC7C0  GameStageManagerImplement::vf10  size=29  [class]
// Deletes the current stage object (vf00(1)).
void GameStageManagerImplement::vf10_008DC7C0()
{
    using namespace GameStageManagerImplement_p1;
    if (DAT_01b35d60 != 0) {
        vfunc<void (__thiscall *)(void *, int)>(DAT_01b35d60, 0x0)(DAT_01b35d60, 1);
        DAT_01b35d60 = 0;
    }
}

// 008DFBD0  GameStageManagerImplement::vf08  size=11  [class]
void GameStageManagerImplement::vf08()
{
    FUN_008dfaf0(heap());
}

// 008DFBE0  GameStageManagerImplement::vf0C  size=24  [class]
// Calls vf04 of the current stage object, if any.
void GameStageManagerImplement::vf0C()
{
    using namespace GameStageManagerImplement_p1;
    if (FUN_008dc7b0() != 0) {
        void *stage = (void *)FUN_008dc7b0();
        vfunc<void (__thiscall *)(void *)>(stage, 0x4)(stage);  // tail call
    }
}

// 008DFC00  GameStageManagerImplement::thunk_vf10  size=5  [class]
void GameStageManagerImplement::vf10()
{
    vf10_008DC7C0();  // jmp 008DC7C0
}

// 008DFC10  GameStageManagerImplement::vf00  size=7  [class]
void GameStageManagerImplement::vf00()
{
    vf04();  // virtual call (slot 0x4), tail call
}

// 008DFC40  GameStageManagerImplement::vf04  size=1  [class]
void GameStageManagerImplement::vf04()
{
}

// 008DFC50  FUN_008dfc50  size=30  [between]
// Deletes the GameStageManager instance (vf14(1)).
void FUN_008dfc50(void)
{
    if (DAT_01b35d88 != 0) {
        DAT_01b35d88->vf14(1);
        DAT_01b35d88 = 0;
    }
}

// 008DFC70  FUN_008dfc70  size=6  [between]
// The GameStageManager instance.
undefined4 FUN_008dfc70(void)
{
    return (undefined4)DAT_01b35d88;
}

// 008DFCB0  GameStageManagerImplement::vf14  size=31  [class]
// Scalar deleting destructor (resets to the base vftable).
undefined4 *GameStageManagerImplement::vf14(byte flags)
{
    *(unsigned int *)this = GameStageManagerImplement_p1::kBaseVftable;  // vftable = GameStageManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 008DFD10  GameStageManagerImplement::GameStageManagerImplement  size=63  [class]
// Allocates the instance (DAT_01b35d88); true on success.
bool GameStageManagerImplement::create(undefined4 heap)
{
    using namespace GameStageManagerImplement_p1;

    GameStageManagerImplement *manager = (GameStageManagerImplement *)allocate(8, heap);
    if (manager != 0) {
        manager->heap() = heap;
        *(unsigned int *)manager = kVftable;  // vftable = GameStageManagerImplement::vftable
        DAT_01b35d88 = manager;
        return manager != 0;
    }
    DAT_01b35d88 = 0;
    return false;
}
