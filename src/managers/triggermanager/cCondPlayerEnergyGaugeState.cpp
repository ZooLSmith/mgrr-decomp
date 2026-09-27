// src/managers/triggermanager/cCondPlayerEnergyGaugeState.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondPlayerEnergyGaugeState.h"

extern unsigned char DAT_01be9db8[];  // Pl0000
extern char DAT_016ac580[];  // "b"
extern char DAT_016ac57c[];  // "B"
extern char DAT_01662d38[];  // "y"
extern char DAT_016ac578[];  // "Y"
extern char DAT_0165933c[];  // "r"
extern char DAT_016ac574[];  // "R"

namespace cCondPlayerEnergyGaugeState_p1 {

// address stored in the vftable slot at byte offset `offset` of `object`
inline void *vslot(const void *object, int offset)
{
    return *(void **)(*(char **)object + offset);
}

// FUN_00c13920 returns the entity manager; its vftable slot 0x28 returns an entity (0 = none).
inline int *entityFromManager(int which)
{
    int *manager = (int *)FUN_00c13920();
    return ((int *(__thiscall *)(int *, int))vslot(manager, 0x28))(manager, which);
}

// obj->vf04() returns the object's type record; FUN_00dd6d80(record, type) walks its parent chain.
// (The raw decompilation shows the pushed type as an argument of the virtual call.)
inline undefined4 isKindOf(int *object, unsigned char *type)
{
    undefined4 *record = ((undefined4 *(__thiscall *)(int *))vslot(object, 0x4))(object);
    return FUN_00dd6d80(record, (undefined4 *)type);
}
// FUN_00e03ea0: hash of a name string (functions.h declares it void; the hash is in EAX)
inline int hashName(const char *name)
{
    return ((int (*)(const char *))FUN_00e03ea0)(name);
}

// FUN_00bda170 / FUN_00bda140 take the player in ECX (functions.h declares them without it)
inline int callOnPlayer(void *function, int *player)
{
    return ((int (__thiscall *)(int *))function)(player);
}

}  // namespace cCondPlayerEnergyGaugeState_p1

// 00C7B050  Trigger::cCondPlayerEnergyGaugeState::vf10  size=1  [class]
void Trigger::cCondPlayerEnergyGaugeState::vf10()
{
}

// 00C7B060  Trigger::cCondPlayerEnergyGaugeState::vf1C  size=16  [class]
void Trigger::cCondPlayerEnergyGaugeState::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    colorHash() = record[2];                  // record+0x08
}

// 00C85B50  Trigger::cCondPlayerEnergyGaugeState::vf00  size=31  [class]
Trigger::cCondPlayerEnergyGaugeState *Trigger::cCondPlayerEnergyGaugeState::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C85B70  Trigger::cCondPlayerEnergyGaugeState::vf14  size=221  [class]
// Tail-calls the player's gauge-state query for the colour named by the record:
// "b"/"B" -> FUN_00bda170, "y"/"Y" -> FUN_00bc32b0, "r"/"R" -> FUN_00bda140 (ECX = player).
int Trigger::cCondPlayerEnergyGaugeState::vf14()
{
    using namespace cCondPlayerEnergyGaugeState_p1;
    int *entity = entityFromManager(-1);
    if (entity != 0) {
        int *player = (int *)FUN_00a7c8a0((int)entity);  // entity -> behavior
        if (player != 0) {
            if (isKindOf(player, DAT_01be9db8) != 0) {
                if (colorHash() == (unsigned int)hashName(DAT_016ac580) ||
                    colorHash() == (unsigned int)hashName(DAT_016ac57c)) {
                    return callOnPlayer((void *)FUN_00bda170, player);
                }
                if (colorHash() == (unsigned int)hashName(DAT_01662d38) ||
                    colorHash() == (unsigned int)hashName(DAT_016ac578)) {
                    return FUN_00bc32b0((int)player);
                }
                if (colorHash() == (unsigned int)hashName(DAT_0165933c) ||
                    colorHash() == (unsigned int)hashName(DAT_016ac574)) {
                    return callOnPlayer((void *)FUN_00bda140, player);
                }
            }
        }
    }
    return 0;
}
