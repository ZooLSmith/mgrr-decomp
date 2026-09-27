// src/managers/battleregionmanager/BattleRegionManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BattleRegionManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Helpers.  Callees whose functions.h prototype does not match the machine code are called
// through a cast so that the argument list is the binary's.
// ---------------------------------------------------------------------------------------------
namespace BattleRegionManagerImplement_p1 {

typedef BattleRegionManagerImplement::Unit      Unit;
typedef BattleRegionManagerImplement::UnitArray UnitArray;

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __thiscall call of a function with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __cdecl call of a function
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// FUN_004011c0: formats at most 10 characters into `buffer` (_vsnprintf).
inline void formatName(char *buffer, const char *format, int value)
{
    cdeclcall<void>(FUN_004011c0, buffer, format, value);
}

// Region object (FUN_00c14bb0 returns the instance at 0x01BEA104; type unknown).
inline void *regions()
{
    return (void *)FUN_00c14bb0();
}
// regions()->vf44(enable, name): enables / disables a named region.
inline void setRegionEnabled(int enable, char *name)
{
    vcall<void>(regions(), 0x44, enable, name);
}
// regions()->vf50(name): non-zero when the named region is enabled.
inline int isRegionEnabled(char *name)
{
    return vcall<int>(regions(), 0x50, name);
}

// Plays effect `effectId` with the parameters of `esp`: FUN_00e01d00 builds the call parameters
// on the stack, FUN_00dffb30 attaches the controller, FUN_00e01f10(source, effectId, params).
inline void playEffect(int effectId, cEspControler *esp)
{
    __declspec(align(16)) unsigned char effectParam[0x110];
    thiscall<void>(FUN_00e01d00, effectParam, effectId);
    thiscall<void>(FUN_00dffb30, effectParam, esp);
    int room = thiscall<int>(FUN_00a4c980, (void *)0x01BE8F30);  /* ECX: global object 0x01BE8F30 */
    void *manager = (void *)FUN_00a6dd90();
    int source = vcall<int>(manager, 0x9C, room);
    cdeclcall<void>(FUN_00e01f10, source, effectId, effectParam);
}

const float kDisableDelay = 1.2f;  // 0x0163B568

}  // namespace BattleRegionManagerImplement_p1

// 00401100  BattleRegionManagerImplement::vf10  size=1  [class]
void BattleRegionManagerImplement::vf10()
{
}

// 00401470  BattleRegionManagerImplement::vf0C  size=113  [class]
// True when "_BA<n>" or "_ba<n>" is enabled.
bool BattleRegionManagerImplement::vf0C(undefined4 regionNo)
{
    using namespace BattleRegionManagerImplement_p1;
    char name[12];
    formatName(name, "_BA%03d", (int)regionNo);
    if (isRegionEnabled(name) != 0) {
        return true;
    }
    formatName(name, "_ba%03d", (int)regionNo);
    return isRegionEnabled(name) != 0;
}

// 00401980  BattleRegionManagerImplement::vf00  size=268  [class]
// Counts down the regions being disabled; an expired one is disabled and removed from the list.
void BattleRegionManagerImplement::vf00(float elapsed)
{
    using namespace BattleRegionManagerImplement_p1;
    char name[12];
    if (FUN_00c14bb0() != 0) {
        Unit *it = units()->data;
        if (it != it + units()->count) {
            Unit *next;
            do {
                float remaining = it->timer - elapsed;
                it->timer = remaining;
                if (0.0f < remaining) {
                    next = it + 1;
                }
                else {
                    formatName(name, "_BA%03d", it->regionNo);
                    setRegionEnabled(0, name);
                    formatName(name, "_ba%03d", it->regionNo);
                    setRegionEnabled(0, name);
                    UnitArray *list = units();
                    unsigned int count = list->count;
                    Unit *data = list->data;
                    next = data + count;
                    if (it != next && data != 0 && count != 0 && (unsigned int)(it - data) < count) {
                        // erase: shift the following units down by one
                        for (Unit *p = it; p != next - 1; p = p + 1) {
                            p[0].regionNo = p[1].regionNo;
                            p[0].timer = p[1].timer;
                        }
                        list->count = list->count - 1;
                        next = it;
                    }
                }
                it = next;
            } while (next != units()->data + units()->count);
        }
    }
}

// 00401A90  FUN_00401a90  size=179  [callgraph]
// BattleRegionManagerImplement teardown: disables every pending region, then deletes the list.
void __fastcall FUN_00401a90(int self)
{
    using namespace BattleRegionManagerImplement_p1;
    BattleRegionManagerImplement *manager = (BattleRegionManagerImplement *)self;
    char name[12];
    if (FUN_00c14bb0() != 0) {
        Unit *it = manager->units()->data;
        if (it != it + manager->units()->count) {
            do {
                formatName(name, "_BA%03d", it->regionNo);
                setRegionEnabled(0, name);
                formatName(name, "_ba%03d", it->regionNo);
                setRegionEnabled(0, name);
                it = it + 1;
            } while (it != manager->units()->data + manager->units()->count);
        }
    }
    if (manager->units()->data != 0) {
        manager->units()->count = 0;
    }
    if (manager->units() != 0) {
        vcall<void>(manager->units(), 0x0, 1);  // scalar deleting destructor
        manager->units() = 0;
    }
}

// 00401DE0  BattleRegionManagerImplement::vf04  size=195  [class]
// Enables both named regions of `regionNo` and plays its effect (regionNo*5+0x5F).
void BattleRegionManagerImplement::vf04(int regionNo)
{
    using namespace BattleRegionManagerImplement_p1;
    if (vf0C(regionNo) == false) {
        char name[12];
        formatName(name, "_BA%03d", regionNo);
        setRegionEnabled(1, name);
        formatName(name, "_ba%03d", regionNo);
        setRegionEnabled(1, name);
        int effectId = regionNo * 5 + 0x5F;
        playEffect(effectId, espControler());
    }
}

// 00401EB0  BattleRegionManagerImplement::vf08  size=178  [class]
// Stops the "enabled" effect, plays the disabling effect (regionNo*5+0x60) and queues the
// region to be disabled after 1.2 s.
void BattleRegionManagerImplement::vf08(int regionNo)
{
    using namespace BattleRegionManagerImplement_p1;
    if (vf0C(regionNo)) {
        thiscall<void>(FUN_00eaa5b0, espControler(), regionNo * 5 + 0x5F, 0.0f, 0.0f);
        int effectId = regionNo * 5 + 0x60;
        playEffect(effectId, espControler());
        Unit unit;
        unit.timer = kDisableDelay;
        unit.regionNo = regionNo;
        vcall<void>(units(), 0x8, &unit);  // push_back
    }
}

// 004024A0  BattleRegionManagerImplement::~BattleRegionManagerImplement  size=30  [class]
BattleRegionManagerImplement::~BattleRegionManagerImplement()
{
    // vftable = BattleRegionManagerImplement::vftable (0x0163B58C)
    FUN_00401a90((int)this);
    espControler()->~cEspControler();
    // vftable = BattleRegionManager::vftable (0x0163B4E0)
}

// 004024C0  BattleRegionManagerImplement::vf14  size=50  [class]
// Scalar deleting destructor.
undefined4 *BattleRegionManagerImplement::vf14(byte flags)
{
    // vftable = BattleRegionManagerImplement::vftable (0x0163B58C)
    FUN_00401a90((int)this);
    espControler()->~cEspControler();
    // vftable = BattleRegionManager::vftable (0x0163B4E0)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
