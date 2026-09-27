// src/managers/windmanager/WindManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "WindManagerImplement.h"

// Imports
extern "C" __declspec(dllimport) void *__stdcall TlsGetValue(unsigned long tlsIndex);
// TLS slot index of the module (0x01F8EF48); fs:[0x2C] is the thread's TLS array
extern "C" unsigned int _tls_index;
extern "C" unsigned long __readfsdword(unsigned long offset);
#pragma intrinsic(__readfsdword)

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern int           DAT_01885d68;  // cHavok: 1 = world locking disabled
extern int           DAT_01885db8;  // cHavok: non-zero = inside the unlock period
extern int           DAT_01b35fac;  // cHavok: world exists
extern unsigned char DAT_01885d70[];  // cHavok world lock object (ECX of FUN_00dd7320)
extern int           DAT_01885d20;  // hkpWorld *
extern unsigned long DAT_01f8fc4c;  // TLS index of the Havok memory router
extern int           DAT_01b35d94;  // heap of the Wind entries (passed to FUN_00dd3500)

// ---------------------------------------------------------------------------------------------
// Helpers.  Callees whose functions.h prototype does not match the machine code are called
// through a cast so that the argument list is the binary's.
// ---------------------------------------------------------------------------------------------
namespace WindManagerImplement_p1 {

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// Callees known only by address
void *const HKP_WIND_ACTION_CTOR = (void *)0x01268970;  // hkpWindAction::hkpWindAction(body, wind, resistanceFactor, obbFactor)
void *const HKP_WIND_CTOR        = (void *)0x01268DD0;  // FILEMAP: hkpWorldPostSimulationListener::hkpWorldPostSimulationListener_2 (wind from a vector)

// Havok thread heap (hkMemoryRouter::heap(): router+0x2C); slot 0x4 = blockAlloc
inline void *heapAlloc(int size)
{
    void *router = TlsGetValue(DAT_01f8fc4c);
    return vcall<void *>(*(void **)((char *)router + 0x2C), 0x4, size);
}

// cHavok world lock.  FUN_004066f0 is the guard constructor (ECX = the guard object on the stack);
// the guard destructor is inlined, reproduced by havokUnlock().
inline void havokLock(void *guard)
{
    FUN_004066f0((undefined4)guard);
}
inline void havokUnlock()
{
    if (DAT_01885d68 != 1) {
        char **tlsArray = (char **)__readfsdword(0x2C);
        int *lockDepth = (int *)(tlsArray[_tls_index] + 4);
        *lockDepth = *lockDepth - 1;
        if (*lockDepth == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
            FUN_00dd7320((int)DAT_01885d70);
        }
    }
}

}  // namespace WindManagerImplement_p1

// 008DFE40  WindManagerImplement::vf10  size=40  [class]
// Adds a wind action of the wind registered under `id` to `*body` (ret 8: two stack arguments).
void WindManagerImplement::vf10(int id, void **body)
{
    Wind *wind = vf08(id);
    if (wind != 0) {
        vf0C(wind, body);
    }
}

// 008DFE90  WindManagerImplement::vf18  size=3  [class]
void WindManagerImplement::vf18(int unused)
{
}

// 008DFFD0  WindManagerImplement::vf08  size=51  [class]
// Finds the wind registered under `id`.
WindManager::Wind *WindManagerImplement::vf08(int id)
{
    WindArray *array = winds();
    Wind **it = array->data;
    if (it != it + array->count) {
        Wind **end = it + array->count;
        do {
            if ((*it)->id == id) {
                return *it;
            }
            it = it + 1;
        } while (it != end);
    }
    return 0;
}

// 008E0210  WindManagerImplement::vf0C  size=214  [class]
// Rebuilt from the machine code (Ghidra lost `wind` as unaff_retaddr and the scale computation):
// creates an hkpWindAction for `*body` with the wind's resistance factor scaled by the body's
// value at (+0xC)->+0x84, adds it to the world and drops the local reference.  ECX is unused.
void WindManagerImplement::vf0C(Wind *wind, void **body)
{
    using namespace WindManagerImplement_p1;
    char guard;  // (the machine code keeps the guard in the `body` argument slot)
    havokLock(&guard);
    void *rigidBody = *body;
    float scale;
    if (rigidBody == 0) {
        scale = 0.0f;
    }
    else {
        char *owner = *(char **)((char *)rigidBody + 0xc);  /* hkpRigidBody+0xC: ? */
        if (owner == 0) {
            scale = 0.0f;
        }
        else {
            scale = *(float *)(owner + 0x84);  // ?
        }
    }
    void *memory = heapAlloc(0x28);
    *(unsigned short *)((char *)memory + 4) = 0x28;  // hkReferencedObject::m_memSizeAndFlags
    void *action = thiscall<void *>(HKP_WIND_ACTION_CTOR, memory, rigidBody, wind->wind,
                                    wind->resistanceFactor * scale, wind->obbFactor);
    if (action != 0) {
        thiscall<int *>(FUN_01195d90, (void *)DAT_01885d20, action);  // world->addAction(action)
        FUN_010060a0((undefined4 *)action);                           // action->removeReference()
    }
    havokUnlock();
}

// 008E02F0  WindManagerImplement::vf04  size=200  [class]
// Creates a wind from the 4 floats at `vector`, registers it under `id` and adds its listener
// (+0x8) to the world.  Returns the new entry (Ghidra: unaff_ESI).
WindManager::Wind *WindManagerImplement::vf04(int id, float *vector, float resistanceFactor, float obbFactor)
{
    using namespace WindManagerImplement_p1;
    __declspec(align(16)) float direction[4];

    void *memory = heapAlloc(0x40);
    *(unsigned short *)((char *)memory + 4) = 0x40;  // hkReferencedObject::m_memSizeAndFlags
    direction[0] = vector[0];
    direction[1] = vector[1];
    direction[2] = vector[2];
    direction[3] = vector[3];
    char *windObject = thiscall<char *>(HKP_WIND_CTOR, memory, direction);
    Wind *entry = (Wind *)cdeclcall<void *>(FUN_00dd3500, 0x10, DAT_01b35d94);
    if (entry == 0) {
        entry = 0;
    }
    else {
        entry->resistanceFactor = resistanceFactor;
        entry->id = id;
        entry->wind = windObject;
        entry->obbFactor = obbFactor;
    }
    vcall<void>(winds(), 0x8, &entry);  // push_back
    char *listener;
    if (windObject == 0) {
        listener = 0;
    }
    else {
        listener = windObject + 8;
    }
    thiscall<void>(FUN_011946c0, (void *)DAT_01885d20, listener);  // world->addWorldPostSimulationListener
    return entry;
}

// 008E03C0  WindManagerImplement::vf14  size=262  [class]
// Removes the wind registered under `id`: detaches its listener from the world, releases it,
// frees the entry and erases it from the array.
void WindManagerImplement::vf14(int id)
{
    using namespace WindManagerImplement_p1;
    char guard;  // (the machine code keeps the guard in the `id` argument slot)
    havokLock(&guard);
    WindArray *array = winds();
    Wind **it = array->data;
    if (it != it + array->count) {
        Wind **end = it + array->count;
        do {
            Wind *wind = *it;
            if (wind->id == id) {
                char *listener;
                if (wind->wind == 0) {
                    listener = 0;
                }
                else {
                    listener = (char *)wind->wind + 8;
                }
                thiscall<void>(FUN_01192e80, (void *)DAT_01885d20, listener);  // world->removeWorldPostSimulationListener
                FUN_010060a0((undefined4 *)wind->wind);     // wind->removeReference()
                FUN_00dd4920((int)wind);
                array = winds();
                unsigned int count = (unsigned int)array->count;
                Wind **data = array->data;
                end = data + count;
                if (it != end && data != 0 && count != 0 && (unsigned int)(it - data) < count) {
                    for (; it != end + -1; it = it + 1) {
                        *it = it[1];
                    }
                    array->count = array->count + -1;
                }
                havokUnlock();
                return;
            }
            it = it + 1;
        } while (it != end);
    }
    havokUnlock();
}

// 008E07A0  WindManagerImplement::vf00  size=30  [class]
// Scalar deleting destructor.
undefined4 *WindManagerImplement::vf00(byte flags)
{
    implementDestructor();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
