// src/managers/phasemanager/PhaseManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "PhaseManager.h"

// Data referenced by this part.
extern unsigned char DAT_016bcb68[];  // "PhaseManager::setDefaultData: this phase has no sub-phase data"
extern unsigned char DAT_016bcb20[];  // "PhaseManager: phase data and sub-phase data differ:p%03x"
extern unsigned char DAT_016bd408[];  // "PhaseManager::setSubPhaseData: sub-phase not in the table:%s"
extern unsigned char DAT_016bd87c[];  // "requestPhaseChange: switching to the same phase"
extern unsigned char DAT_016bd850[];  // "PhaseManager: PhaseChange queue is full"
extern unsigned char DAT_016bd9a4[];  // "requestSubPhaseChange: already requested %s"
extern unsigned char DAT_016bd960[];  // "requestSubPhaseChange: switching to the same sub-phase"
extern unsigned char DAT_016bd92c[];  // "requestSubPhaseChange: the sub-phase goes back"
extern unsigned char DAT_016bd8fc[];  // "%s: switching to a sub-phase that does not exist"
extern unsigned char DAT_016bd8b8[];  // "tried to queue an invalid sub-phase, rejected! %s"
extern unsigned char DAT_016bd9d8[];  // "PhaseManager::setPhaseData: phase not in the table:p%03x"
extern int          *DAT_01dc51c0;    // object released (vf28(1)) by FUN_00d589d0
extern unsigned int  DAT_01be921c;    // room id used when no phase is requested
extern unsigned int  DAT_01bea060;    // global flags; 0x20000000 blocks phase change requests
extern unsigned int  DAT_01bea090;    // global flags
extern unsigned int  DAT_018b56fc;

namespace PhaseManager_p1 {

// Callees whose generated prototype does not match the argument list recovered at the call site
// are invoked through call<Signature>(fn)(args...). ECX of a thiscall callee whose prototype does
// not list `this` is given as a comment ("ECX: ..."), taken from the disassembly.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }
// Virtual function at byte offset `offset` of the vftable of `obj`.
template <class Sig> inline Sig vfunc(void *obj, int offset) { return *(Sig *)(*(char **)obj + offset); }

// Global objects passed in ECX (names unknown).
const int kObj_01B5D1E0 = 0x01B5D1E0;
const int kObj_01BE8F30 = 0x01BE8F30;  // receives the read-room list (FUN_00a4e900)
const int kObj_01BE8E40 = 0x01BE8E40;
const int kObj_01DC1510 = 0x01DC1510;
const int kObj_01DC2D90 = 0x01DC2D90;
const int kObj_01BE9980 = 0x01BE9980;
const int kObj_01DBD220 = 0x01DBD220;
const int kObj_01C78CB0 = 0x01C78CB0;
const int kObj_01886930 = 0x01886930;
const int kObj_01BEA1D0 = 0x01BEA1D0;
const int kObj_01B54290 = 0x01B54290;
const int kObj_018ABF90 = 0x018ABF90;
const int kFade         = 0x01EDC6C0;  // cFade instance

// cFade::set (0x00EC1AB0) (no class header exists for cFade).
typedef void (__thiscall *FadeSetFn)(int fade, int a, unsigned int color, int b, int frames, int c, int d, int e);
inline FadeSetFn fadeSet() { return (FadeSetFn)0x00EC1AB0; }

// FUN_00e03ea0: hash of a name (the generated prototype returns void).
inline unsigned int nameHash(const void *name) { return call<unsigned int (*)(const void *)>(FUN_00e03ea0)(name); }
// FUN_00dd5650: debug printf.
typedef void (*DebugPrintFn)(const void *format, ...);
inline DebugPrintFn debugPrint() { return call<DebugPrintFn>(FUN_00dd5650); }

// The inlined strcmp of the original: -1 / 0 / 1.
inline int compareStrings(const unsigned char *a, const unsigned char *b)
{
    for (;;) {
        unsigned char c = *a;
        if (c != *b) return c < *b ? -1 : 1;
        if (c == 0) return 0;
        c = a[1];
        if (c != b[1]) return c < b[1] ? -1 : 1;
        a += 2;
        b += 2;
        if (c == 0) return 0;
    }
}
inline int compareStrings(const char *a, const char *b)
{
    return compareStrings((const unsigned char *)a, (const unsigned char *)b);
}

// Manager objects returned by FUN_00c13920 / FUN_00c18350 / FUN_00a6dd90 (types unknown).
inline void *managerC13920() { return (void *)FUN_00c13920(); }
inline void *managerC18350() { return (void *)FUN_00c18350(); }
inline void *managerA6DD90() { return (void *)FUN_00a6dd90(); }

// Zeroes the eight dwords of PhaseSlot::name.
inline void clearName(char *name)
{
    for (int i = 0; i < 8; i++) ((unsigned int *)name)[i] = 0;
}

}  // namespace PhaseManager_p1

// 00D44F60  FUN_00d44f60  size=67  [callgraph]
// PhaseSlot setter: id, name (and its hash), flag. `slot` is ECX.
void FUN_00d44f60(undefined4 *slot, undefined4 id, char *name, undefined4 flag)
{
    using namespace PhaseManager_p1;
    PhaseManager::PhaseSlot *s = (PhaseManager::PhaseSlot *)slot;
    s->id = id;
    s->flag = flag;
    if (name != 0) {
        s->hash = nameHash(name);
        _strcpy_s(s->name, 0x20, name);
        return;
    }
    s->hash = 0;
    s->name[0] = '\0';
    return;
}

// 00D44FB0  FUN_00d44fb0  size=54  [callgraph]
// PhaseSlot name setter (keeps id and flag). `slot` is ECX.
void FUN_00d44fb0(int slot, char *name)
{
    using namespace PhaseManager_p1;
    PhaseManager::PhaseSlot *s = (PhaseManager::PhaseSlot *)slot;
    if (name != 0) {
        s->hash = nameHash(name);
        _strcpy_s(s->name, 0x20, name);
        return;
    }
    s->hash = 0;
    s->name[0] = '\0';
    return;
}

// 00D45010  FUN_00d45010  size=44  [callgraph]
// PhaseSlot equality: same id and same name hash. `slot` is ECX.
bool FUN_00d45010(int *slot, int id, undefined4 name)
{
    using namespace PhaseManager_p1;
    if (slot[0] != id) {
        return false;
    }
    int hash = (int)nameHash((const void *)name);
    return slot[1] == hash;
}

// 00D450C0  FUN_00d450c0  size=108  [callgraph]
// In phase 0x118, unless FUN_009c4bf0 reports 2/3/4, plays "R00h1000_121010" for the player.
void __fastcall FUN_00d450c0(int self)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    void *mgr = managerC13920();
    int entity = vfunc<int (__thiscall *)(void *, int)>(mgr, 0x28)(mgr, 0);
    if (entity != 0) {
        int mode = call<int (*)()>(FUN_009c4bf0)();  /* ECX: 0x01B5D1E0 */
        if (mode != 2) {
            mode = call<int (*)()>(FUN_009c4bf0)();  /* ECX: 0x01B5D1E0 */
            if (mode != 3) {
                mode = call<int (*)()>(FUN_009c4bf0)();  /* ECX: 0x01B5D1E0 */
                if (mode != 4 && pm->phase().id == 0x118) {
                    // The raw decompilation attached (0xffffffff, 0) to FUN_00a7c8a0; the disassembly
                    // shows FUN_00a7c8a0 takes only ECX and both values are the trailing arguments
                    // of FUN_00e5e0c0 (caller cleans 0x10 bytes).
                    undefined4 owner = FUN_00a7c8a0(entity);
                    FUN_00e5e0c0((undefined4)"R00h1000_121010", owner, 0xFFFFFFFF, 0);
                }
            }
        }
    }
    return;
}

// 00D45130  FUN_00d45130  size=96  [callgraph]
// Allocates `count` phase-table entries (16 bytes each) behind a count header; zeroes id,
// subPhaseCount and subPhases of each. Returns the first entry, or 0.
uint *FUN_00d45130(undefined4 heap, uint count)
{
    using namespace PhaseManager_p1;
    unsigned long long product = (unsigned long long)count * 0x10;
    unsigned int bytes = -(unsigned int)((int)(product >> 0x20) != 0) | (unsigned int)product;
    unsigned int *entries = call<unsigned int *(*)(unsigned int, undefined4)>(FUN_00dd3580)(
        -(unsigned int)(0xfffffffb < bytes) | (bytes + 4), heap);
    if (entries == 0) {
        entries = 0;
    }
    else {
        *entries = count;
        entries = entries + 1;
        int i = count - 1;
        unsigned int *entry = entries;
        if (-1 < i) {
            do {
                entry[0] = 0;
                entry[1] = 0;
                entry[2] = 0;
                entry = entry + 4;
                i = i + -1;
            } while (-1 < i);
            return entries;
        }
    }
    return entries;
}

// 00D45210  FUN_00d45210  size=83  [callgraph]
// Frees a phase table allocated by FUN_00d45130: every entry's subPhases (last to first), then
// the block; clears *tablePtr.
void FUN_00d45210(int *tablePtr)
{
    int table = *tablePtr;
    if (table != 0) {
        int i = *(int *)(table + -4) + -1;
        if (-1 < i) {
            int *subPhases = (int *)(table + 8 + *(int *)(table + -4) * 0x10);
            do {
                subPhases = subPhases + -4;
                if (*subPhases != 0) {
                    FUN_00dd4940(*subPhases);
                    *subPhases = 0;
                }
                i = i + -1;
            } while (-1 < i);
        }
        FUN_00dd4940(table + -4);
        *tablePtr = 0;
    }
    return;
}

// 00D45270  FUN_00d45270  size=485  [callgraph]
// The raw decompilation shows `this` only and reads its key through unaff_retaddr; the disassembly
// shows one stack argument (ret 4): the 3-dword event key compared below.
void FUN_00d45270(int self, int *eventKey)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    int event[3];  // FUN_00e678d0 fills and returns this buffer

    void *mgr = managerC13920();
    vfunc<void (__thiscall *)(void *, int)>(mgr, 0x30)(mgr, 1);
    int *key = FUN_00e678d0(event, 2, 0x40, -1);
    if (key[0] == eventKey[0] && key[1] == eventKey[1] && key[2] == eventKey[2] &&
        pm->phase().id == 0x430) {
        mgr = managerC13920();
        int entity = vfunc<int (__thiscall *)(void *, int)>(mgr, 0x28)(mgr, 0);
        if (entity != 0) {
            char *owner = (char *)FUN_00a7c8a0(entity);
            *(float *)(owner + 0xe8) = 0.0f;
            *(float *)(owner + 0xe4) = 0.0f;
            *(float *)(owner + 0xe0) = 0.0f;
            *(float *)(owner + 0xdc) = 0.0f;
            *(float *)(owner + 0xd4) = 0.0f;
            *(float *)(owner + 0xd0) = 0.0f;
            *(float *)(owner + 0xcc) = 0.0f;
            *(float *)(owner + 0xc8) = 0.0f;
            *(float *)(owner + 0xc0) = 0.0f;
            *(float *)(owner + 0xbc) = 0.0f;
            *(float *)(owner + 0xb8) = 0.0f;
            *(float *)(owner + 0xb4) = 0.0f;
            *(float *)(owner + 0xec) = 1.0f;
            *(float *)(owner + 0xd8) = 1.0f;
            *(float *)(owner + 0xc4) = 1.0f;
            *(float *)(owner + 0xb0) = 1.0f;
            owner = (char *)FUN_00a7c8a0(entity);
            *(float *)(owner + 0x128) = 0.0f;
            *(float *)(owner + 0x124) = 0.0f;
            *(float *)(owner + 0x120) = 0.0f;
            *(float *)(owner + 0x11c) = 0.0f;
            *(float *)(owner + 0x114) = 0.0f;
            *(float *)(owner + 0x110) = 0.0f;
            *(float *)(owner + 0x10c) = 0.0f;
            *(float *)(owner + 0x108) = 0.0f;
            *(float *)(owner + 0x100) = 0.0f;
            *(float *)(owner + 0xfc) = 0.0f;
            *(float *)(owner + 0xf8) = 0.0f;
            *(float *)(owner + 0xf4) = 0.0f;
            *(float *)(owner + 0x12c) = 1.0f;
            *(float *)(owner + 0x118) = 1.0f;
            *(float *)(owner + 0x104) = 1.0f;
            *(float *)(owner + 0xf0) = 1.0f;
        }
    }
    key = FUN_00e678d0(event, 2, 0x40, -1);
    if (((key[0] == eventKey[0] && key[1] == eventKey[1] && key[2] == eventKey[2]) ||
         ((key = FUN_00e678d0(event, 2, 0x41, -1), key[0] == eventKey[0]) &&
          key[1] == eventKey[1] && key[2] == eventKey[2])) &&
        pm->phase().id == 0x430) {
        mgr = managerC13920();
        int entity = vfunc<int (__thiscall *)(void *, int)>(mgr, 0x28)(mgr, 0);
        if (entity != 0) {
            int owner = FUN_00a7c8a0(entity);
            int obj = *(int *)(owner + 0x764);
            if (*(int *)(obj + 0x104) != 1) {
                *(int *)(obj + 0x104) = 1;
                *(float *)(*(int *)(obj + 0xd0) + 4) = 0.0f;
            }
        }
    }
    return;
}

// 00D45460  FUN_00d45460  size=3  [callgraph]
void FUN_00d45460(void)
{
    return;
}

// 00D45470  FUN_00d45470  size=3  [callgraph]
void FUN_00d45470(void)
{
    return;
}

// 00D45480  FUN_00d45480  size=3  [callgraph]
void FUN_00d45480(void)
{
    return;
}

// 00D45490  FUN_00d45490  size=10  [callgraph]
bool __fastcall FUN_00d45490(int self)
{
    return ((PhaseManager *)self)->state() < 6;
}

// 00D454A0  FUN_00d454a0  size=24  [callgraph]
// True in state 0 or 8 (a change can be applied immediately).
bool __fastcall FUN_00d454a0(int self)
{
    PhaseManager *pm = (PhaseManager *)self;
    if (pm->state() == 0) {
        return true;
    }
    return pm->state() == 8;
}

// 00D454C0  FUN_00d454c0  size=9  [callgraph]
bool __fastcall FUN_00d454c0(int self)
{
    return ((PhaseManager *)self)->state() != 0;
}

// 00D454D0  FUN_00d454d0  size=11  [callgraph]
void __fastcall FUN_00d454d0(int self)
{
    ((PhaseManager *)self)->flag1F8() = 1;
    return;
}

// 00D454E0  FUN_00d454e0  size=36  [callgraph]
bool __fastcall FUN_00d454e0(int self)
{
    int state = ((PhaseManager *)self)->state();
    if (state != 0 && state != 6 && state != 7 && state != 8) {
        return state != 9;
    }
    return false;
}

// 00D45560  PhaseManager::createReadRoomList  size=367  [class]
void PhaseManager::createReadRoomList(unsigned int *list, int maxCount, int *count)
{
    using namespace PhaseManager_p1;
    unsigned int i = 0;
    if (list == 0) {
        *count = 0;
        return;
    }
    bool hasBaseRoom = false;
    unsigned int baseRoom = 0;
    *count = 0;
    unsigned int *room = (unsigned int *)readRoomList();
    do {
        if ((int)*room < 0) break;
        list[i] = *room;
        *count = *count + 1;
        unsigned int value = *room;
        unsigned int low = value & 0xff;
        if (low != 0 && low != 0x20 && low != 0x40 && low != 0x60 && low != 0x80 && low != 0xa0 &&
            low != 0xc0) {
            if (low < 0x20) {
                baseRoom = value & 0xf00;
            }
            else if (low < 0x40) {
                baseRoom = value & 0xf00 | 0x20;
            }
            else if (low < 0x60) {
                baseRoom = value & 0xf00 | 0x40;
            }
            else if (low < 0x80) {
                baseRoom = value & 0xf00 | 0x60;
            }
            else if (low < 0xa0) {
                baseRoom = value & 0xf00 | 0x80;
            }
            else if (low < 0xc0) {
                baseRoom = value & 0xf00 | 0xa0;
            }
            else if (low < 0xe0) {
                baseRoom = value & 0xf00 | 0xc0;
            }
        }
        if (low == 0 || (value & 0xf00) == 0) {
            hasBaseRoom = true;
        }
        if (maxCount <= *count) {
            debugPrint()("PhaseManager::createReadRoomList listSize over.");
            return;
        }
        i = i + 1;
        room = room + 1;
    } while (i < 10);
    if (!hasBaseRoom && *count != 0) {
        list[*count] = baseRoom;
        *count = *count + 1;
    }
    return;
}

// 00D4E890  PhaseManager::setDefaultData  size=1784  [class]
// The raw decompilation lost most call arguments of this function (stack pushes shown as stores
// to unrelated stack slots); the arguments below are taken from the disassembly. The calls, their
// order and all stores to the object are those of the raw output.
void PhaseManager::setDefaultData()
{
    using namespace PhaseManager_p1;
    char roomNo[100];
    char value[100];
    char subPhaseName[32];
    char fileName[256];

    _memset(fileName, 0, 0x100);
    unsigned int id = requestPhase().id;
    _sprintf_s(fileName, 0x100, (char *)"p%x%02x_sub.bxm", (id >> 8) & 0xffff, id & 0xff);
    int data = FUN_00de4550((int *)fileLoader(), fileName, 0);
    if (data == 0) {
        debugPrint()(DAT_016bcb68);
        return;
    }
    FUN_00e062b0((int)subPhaseXml(), data, 0);
    cXmlBinary *xml = subPhaseXml();
    int root = xml->vf04();
    int infoList = xml->vf18(root, (byte *)"InfoList");
    int subPhaseCount = xml->vf10(infoList);
    if (currentPhaseEntry()->subPhaseCount != subPhaseCount) {
        debugPrint()(DAT_016bcb20, phase().id);
    }
    int i = 0;
    int node;
    if (0 < xml->vf10(infoList)) {
        do {
            // cXml slot 0x14 is called with (parent, index); the generated prototype has one argument.
            node = vfunc<int (__thiscall *)(void *, int, int)>(xml, 0x14)(xml, infoList, i);
            int attr = xml->vf9C(node, (char *)"name");
            if (attr != -1) {
                xml->vfA4(attr, subPhaseName, 0x20);
            }
            if (subPhase().hash == nameHash(subPhaseName)) goto found;
            i = i + 1;
        } while (i < xml->vf10(infoList));
    }
    debugPrint()(DAT_016bcb20, phase().id);
    return;

found:
    currentSubPhaseEntry()->xmlNode = node;
    int info = currentSubPhaseEntry()->xmlNode;
    int item = xml->vf18(info, (byte *)"RoomNo");
    if (item != -1) {
        xml->vf74(item, roomNo, 100);
    }
    item = xml->vf18(info, (byte *)"PlayerPos");
    if (item != -1) {
        xml->vf44(item, (undefined4)playerPos());
        float w = playerPos()[3];
        playerRot()[0] = 0.0f;
        playerRot()[2] = 0.0f;
        playerRot()[1] = w;
        playerPos()[3] = 0.0f;
    }
    item = xml->vf18(info, (byte *)"PlayerRot");
    if (item != -1) {
        xml->vf44(item, (undefined4)playerRot());
    }
    item = xml->vf18(info, (byte *)"GraPos");
    if (item != -1) {
        xml->vf44(item, (undefined4)graPos());
    }
    value[0] = '\0';
    _memset(value + 1, 0, 99);
    item = xml->vf18(info, (byte *)"isRestartPoint");
    if (item != -1) {
        xml->vf74(item, value, 100);
    }
    isRestartPoint() = (compareStrings(value, "YES") == 0);
    _strcpy_s(value, 100, (char *)"");
    item = xml->vf18(info, (byte *)"SaveRestartPos");
    if (item != -1) {
        xml->vf74(item, value, 100);
    }
    saveRestartPos() = (compareStrings(value, "YES") == 0);
    item = xml->vf18(info, (byte *)"CameraYaw");
    if (item == -1) {
        cameraYaw()[0] = 0.0f;
        cameraYaw()[1] = 0.0f;
        cameraYaw()[2] = 0.0f;
        cameraYaw()[3] = 0.0f;
    }
    else {
        xml->vf44(item, (undefined4)cameraYaw());
    }
    _strcpy_s(value, 100, (char *)"");
    item = xml->vf18(info, (byte *)"CameraEnable");
    if (item != -1) {
        xml->vf74(item, value, 100);
    }
    cameraEnable() = 0;
    if (compareStrings(value, "ON") == 0) {
        cameraEnable() = 1;
    }
    _strcpy_s(value, 100, (char *)"");
    item = xml->vf18(info, (byte *)"CameraXEnable");
    if (item != -1) {
        xml->vf74(item, value, 100);
    }
    cameraXEnable() = 0;
    if (compareStrings(value, "ON") == 0) {
        cameraXEnable() = 1;
    }
    _strcpy_s(value, 100, (char *)"");
    item = xml->vf18(info, (byte *)"CameraYEnable");
    if (item != -1) {
        xml->vf74(item, value, 100);
    }
    cameraYEnable() = 0;
    if (compareStrings(value, "ON") == 0) {
        cameraYEnable() = 1;
    }

    // "RoomNo" is a list like "r100 r10a ...": each 'r' is followed by a hexadecimal room number.
    char *cursor = roomNo;
    int *rooms = readRoomList();
    rooms[0] = -1;
    rooms[1] = -1;
    rooms[2] = -1;
    rooms[3] = -1;
    rooms[4] = -1;
    rooms[5] = -1;
    rooms[6] = -1;
    rooms[7] = -1;
    rooms[8] = -1;
    rooms[9] = -1;
    unsigned int n = 0;
    do {
        char *r = (char *)FUN_00fdc7b0((uint *)cursor, 'r');
        if (r == 0) break;
        cursor = r + 1;
        long room = _strtol(cursor, &cursor, 0x10);
        *rooms = (int)(short)room;
        n = n + 1;
        rooms = rooms + 1;
    } while (n < 10);
    _strcpy_s(value, 100, (char *)"");
    item = xml->vf18(info, (byte *)"isPlWaitPayment");
    if (item == -1) {
        isPlWaitPayment() = 1;
        return;
    }
    xml->vf74(item, value, 100);
    isPlWaitPayment() = (compareStrings(value, "YES") != 0);
    return;
}

// 00D4EF90  FUN_00d4ef90  size=73  [callgraph]
// Index of the sub-phase `name` in the current phase-table entry, or -1.
int FUN_00d4ef90(int self, int name)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    if (name != 0) {
        unsigned int hash = nameHash((const void *)name);
        PhaseManager::PhaseEntry *entry = pm->currentPhaseEntry();
        if (entry != 0 && 0 < entry->subPhaseCount) {
            int index = 0;
            do {
                if (entry->subPhases[index].hash == hash) {
                    return index;
                }
                index = index + 1;
            } while (index < entry->subPhaseCount);
        }
    }
    return -1;
}

// 00D4EFE0  FUN_00d4efe0  size=81  [callgraph]
// When phase data is set, hands the read-room list to 0x01BE8F30 and returns its first room.
undefined4 __fastcall FUN_00d4efe0(byte *self)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    int count;
    unsigned int list[8];

    if ((*self & 1) != 0) {
        count = 0;
        pm->createReadRoomList(list, 8, &count);
        if (count != 0) {
            FUN_00a4e900(kObj_01BE8F30, (int)list, count);
            return pm->readRoomList()[0];
        }
    }
    return 0xffffffff;
}

// 00D589D0  FUN_00d589d0  size=362  [callgraph]
// Resets the manager: change queue, phase table, bxm, all phase slots.
void __fastcall FUN_00d589d0(int self)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    if (pm->queueEntries() != 0) {
        pm->queueCount() = 0;
        if (pm->queueOwnsEntries() != 0) {
            FUN_00dd48d0((int)pm->queueEntries(), 0);
            pm->queueOwnsEntries() = 0;
        }
        pm->queueEntries() = 0;
        pm->queueCapacity() = 0;
    }
    pm->phaseCount() = 0;
    FUN_00d45210((int *)&pm->phaseTable());  /* ECX: self */
    FUN_00e04180((int)pm->unk1B8());
    pm->prevPhase().hash = 0;
    pm->prevPhase().flag = 0;
    pm->prevPhase().id = 0xffffffff;
    clearName(pm->prevPhase().name);
    pm->phase().id = 0xffffffff;
    pm->phase().hash = 0;
    pm->phase().flag = 0;
    clearName(pm->phase().name);
    pm->subPhase().id = 0xffffffff;
    pm->subPhase().hash = 0;
    pm->subPhase().flag = 0;
    clearName(pm->subPhase().name);
    pm->slot8C().id = 0xffffffff;
    pm->slot8C().hash = 0;
    pm->slot8C().flag = 0;
    clearName(pm->slot8C().name);
    pm->requestPhase().id = 0xffffffff;
    pm->requestPhase().hash = 0;
    pm->requestPhase().flag = 0;
    clearName(pm->requestPhase().name);
    if (DAT_01dc51c0 != 0) {
        vfunc<void (__thiscall *)(void *, int)>(DAT_01dc51c0, 0x28)(DAT_01dc51c0, 1);
        DAT_01dc51c0 = 0;
    }
    return;
}

// 00D58B40  FUN_00d58b40  size=318  [callgraph]
// Starts loading the requested phase (or the default room when none is requested); state 5.
undefined4 __fastcall FUN_00d58b40(uint *self)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    int rooms[2];
    unsigned int list[8];

    if (pm->requestPhase().id == 0xffffffff) {
        FUN_00ce1270(kObj_01DC1510, 0);
        FUN_00cc9890(kObj_01DC2D90, 0, 0);
        FUN_00a66470(kObj_01BE9980, -1, 0);
        rooms[0] = DAT_01be921c;
        rooms[1] = 0;
        rooms[1] = FUN_00a497e0(DAT_01be921c);  /* ECX: 0x01BE8F30 */
        int roomCount;
        if (rooms[1] == -1) {
            if (rooms[0] == -1) goto done;
            roomCount = 1;
        }
        else {
            roomCount = 2;
        }
        FUN_00a4e900(kObj_01BE8F30, (int)rooms, roomCount);
    }
    else {
        if ((*self & 1) != 0) {
            rooms[0] = 0;
            pm->createReadRoomList(list, 8, &rooms[0]);
            if (rooms[0] != 0) {
                FUN_00a4e900(kObj_01BE8F30, (int)list, rooms[0]);
                unsigned int room = pm->readRoomList()[0];
                if (room != 0xffffffff) {
                    FUN_00a4aa80((undefined4 *)kObj_01BE8E40, room);
                    void *mgr = managerC13920();
                    vfunc<void (__thiscall *)(void *, unsigned int)>(mgr, 0x14)(mgr, room);
                }
            }
        }
        FUN_00ce1270(kObj_01DC1510, pm->requestPhase().id);
        FUN_00cc9890(kObj_01DC2D90, pm->requestPhase().id, 0);
        FUN_00a66470(kObj_01BE9980, pm->requestPhase().id, *self >> 1 & 1);
    }
done:
    FUN_00a00a60(0x40001, 0);  /* ECX: 0x01B7B364 (cObjReadManager) */
    pm->state() = 5;
    return 0;
}

// 00D58C80  FUN_00d58c80  size=91  [callgraph]
// Applies the first queued change request and pops it.
undefined4 __fastcall FUN_00d58c80(int self)
{
    PhaseManager *pm = (PhaseManager *)self;
    if (pm->queueCount() != 0) {
        PhaseManager::PhaseChangeRequest *request = pm->queueEntries();
        if (request->isSubPhase != 0) {
            FUN_00d4e1f0((uint *)self, request->slot.name, request->param);
            FUN_00d572e0((int)pm->changeQueue(), 0);
            return 0;
        }
        FUN_00d4e140((uint *)self, request->slot.id, request->slot.name, request->param);
        FUN_00d572e0((int)pm->changeQueue(), 0);
    }
    return 0;
}

// 00D58CE0  FUN_00d58ce0  size=129  [callgraph]
// When phase data is set and it names a room: hands the read-room list over, state 0x14,
// returns 0. Otherwise state 0x16, returns 1.
undefined4 __fastcall FUN_00d58ce0(byte *self)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    int count;
    unsigned int list[8];

    if ((*self & 1) != 0) {
        count = 0;
        pm->createReadRoomList(list, 8, &count);
        if (count != 0) {
            FUN_00a4e900(kObj_01BE8F30, (int)list, count);
            if (pm->readRoomList()[0] != -1) {
                FUN_00a4aa80((undefined4 *)kObj_01BE8E40, pm->readRoomList()[0]);
                call<void (*)(int, int)>(FUN_00a50260)(-2, 1);  /* ECX: 0x01BE8F30 */
                pm->state() = 0x14;
                return 0;
            }
        }
    }
    pm->state() = 0x16;
    return 1;
}

// 00D58D70  PhaseManager::setSubPhaseData  size=484  [class]
undefined4 PhaseManager::setSubPhaseData(char *subPhaseName)
{
    using namespace PhaseManager_p1;
    char *name = subPhase().name;
    int index;
    SubPhaseEntry *selected;

    currentSubPhaseEntry() = 0;
    currentSubPhaseIndex() = -1;
    subPhase().hash = 0;
    *name = '\0';
    if (subPhaseName == 0) {
        if (currentPhaseEntry()->subPhaseCount < 1) goto fail;
        char *first = currentPhaseEntry()->subPhases[0].name;
        if (first == 0) {
            subPhase().hash = 0;
            *name = '\0';
        }
        else {
            subPhase().hash = nameHash(first);
            _strcpy_s(name, 0x20, first);
        }
        selected = currentPhaseEntry()->subPhases;
        index = 0;
    }
    else {
        index = FUN_00d4ef90((int)this, (int)subPhaseName);
        if (index < 0) {
            debugPrint()("PhaseManager::setSubPhaseData SUB PHASE is Nothing:%s", subPhaseName);
            PhaseEntry *entry = currentPhaseEntry();
            if (entry->subPhaseCount < 1) goto fail;
            if ((entry->id & 0xf00) == 0xc00) {
                FUN_00d44f60((undefined4 *)&subPhase(), entry->id, entry->subPhases[0].name, 1);
                FUN_00d44f60((undefined4 *)&requestPhase(), currentPhaseEntry()->id,
                             currentPhaseEntry()->subPhases[0].name, 1);
                selected = currentPhaseEntry()->subPhases;
            }
            else if ((entry->id & 0xf00) == 0xd00) {
                FUN_00d44f60((undefined4 *)&subPhase(), entry->id, entry->subPhases[0].name, 1);
                FUN_00d44f60((undefined4 *)&requestPhase(), currentPhaseEntry()->id,
                             currentPhaseEntry()->subPhases[0].name, 1);
                selected = currentPhaseEntry()->subPhases;
            }
            else {
                FUN_00d44fb0((int)&subPhase(), entry->subPhases[0].name);
                selected = currentPhaseEntry()->subPhases;
            }
            index = 0;
        }
        else {
            int offset = index * 0x2c;
            char *found = (char *)currentPhaseEntry()->subPhases + offset;
            if (found == 0) {
                subPhase().hash = 0;
                *name = '\0';
                selected = (SubPhaseEntry *)((char *)currentPhaseEntry()->subPhases + offset);
            }
            else {
                subPhase().hash = nameHash(found);
                _strcpy_s(name, 0x20, found);
                selected = (SubPhaseEntry *)((char *)currentPhaseEntry()->subPhases + offset);
            }
        }
    }
    if (selected != 0) {
        currentSubPhaseIndex() = index;
        currentSubPhaseEntry() = selected;
        setDefaultData();
        return 1;
    }
fail:
    debugPrint()(DAT_016bd408, subPhaseName);
    return 0;
}

// 00D5E590  FUN_00d5e590  size=79  [callgraph]
// Notifies two managers of the current phase, then selects the requested sub-phase:
// state 0x13 on success, 0x16 on failure.
undefined4 __fastcall FUN_00d5e590(int self)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    unsigned int id = pm->phase().id;
    void *mgr = managerC18350();
    vfunc<void (__thiscall *)(void *, unsigned int, char *)>(mgr, 0x30)(mgr, id, pm->phase().name);
    mgr = managerA6DD90();
    vfunc<void (__thiscall *)(void *, unsigned int, char *)>(mgr, 0x20)(mgr, id, pm->phase().name);
    int ok = pm->setSubPhaseData(pm->requestPhase().name);
    pm->state() = (-(unsigned int)(ok != 0) & 0xfffffffd) + 0x16;  // ok ? 0x13 : 0x16
    return 1;
}

// 00D5E5E0  FUN_00d5e5e0  size=623  [callgraph]
// Commits the requested phase: phase -> prevPhase, requestPhase -> phase (restartPhase too at a
// restart point), notifies the managers, starts the sub-phase BGM; state 9. Entering phase 0xD30
// in sub-phase PD30_MISSION1/2/3 starts a fade once.
undefined4 __fastcall FUN_00d5e5e0(uint *self)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    char bgmName[0x400];

    pm->prevPhase().id = pm->phase().id;
    char *name = pm->phase().name;
    pm->prevPhase().hash = pm->phase().hash;
    pm->prevPhase().flag = pm->phase().flag;
    FID_conflict__memcpy(pm->prevPhase().name, name, 0x20);
    pm->phase().id = pm->requestPhase().id;
    pm->phase().hash = pm->requestPhase().hash;
    pm->phase().flag = pm->requestPhase().flag;
    FID_conflict__memcpy(name, pm->requestPhase().name, 0x20);
    pm->requestPhase().id = 0xffffffff;
    pm->requestPhase().hash = 0;
    pm->requestPhase().flag = 0;
    clearName(pm->requestPhase().name);
    *self = *self & 0xfffffefb;
    if (pm->isRestartPoint() != 0) {
        pm->restartPhase().id = pm->phase().id;
        pm->restartPhase().hash = pm->phase().hash;
        pm->restartPhase().flag = pm->phase().flag;
        FID_conflict__memcpy(pm->restartPhase().name, name, 0x20);
    }
    unsigned int id = pm->phase().id;
    name = pm->phase().name;
    void *mgr = managerA6DD90();
    // The raw decompilation shows only `id`; the disassembly pushes (id, name, 0).
    vfunc<void (__thiscall *)(void *, unsigned int, char *, int)>(mgr, 0x1c)(mgr, id, name, 0);
    mgr = managerC18350();
    vfunc<void (__thiscall *)(void *, unsigned int, char *)>(mgr, 0x2c)(mgr, id, name);
    FUN_00c95d40(id, (int)name);  /* ECX: 0x01DBD220 */
    FUN_00c184a0(kObj_01C78CB0, id, (undefined4)name);
    FUN_009470a0(kObj_01886930, (undefined4)name);
    FUN_00db8410(kObj_01BEA1D0);
    if (pm->phase().flag != 0) {
        FUN_00d4f4f0((int)self);
    }
    char *bgm = call<char *(*)(char *, const char *, ...)>(FUN_00959930)(
        bgmName, "%sp%03x_%s", "bgm_psub_", pm->phase().id, name);
    FUN_00e5e1b0((undefined4)bgm);
    pm->state() = 9;
    if (pm->isRestartPoint() != 0 || FUN_009c57d0(kObj_01B54290) != 0) {
        FUN_00d4f310((int)self);
    }
    if (pm->phase().id == 0xd30) {
        if (compareStrings(name, "PD30_MISSION1") != 0 &&
            compareStrings(name, "PD30_MISSION2") != 0 &&  // string at 0x01649998
            compareStrings(name, "PD30_MISSION3") != 0) {
            return 0;
        }
        if (FUN_00c82370(kObj_018ABF90, 1) == 0) {
            FUN_00c82240(kObj_018ABF90, 1);
            DAT_01bea090 = DAT_01bea090 | 4;
            DAT_018b56fc = 1;
            FUN_00ebddd0(kFade);
            fadeSet()(kFade, 0, 0xff000000, 0, 0x78, 0, 0, 0x68);  // cFade::set
        }
    }
    return 0;
}

// 00D5E850  FUN_00d5e850  size=381  [callgraph]
// requestPhaseChange (debug strings): applies the change at once in state 0/8, otherwise queues
// it unless an identical phase request is already queued. `name` null = default sub-phase.
undefined4 FUN_00d5e850(int self, int phaseId, char *name)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    PhaseManager::PhaseChangeRequest request;

    if ((DAT_01bea060 & 0x20000000) != 0) {
        return 0;
    }
    int i = 0;
    if (name == 0) {
        name = (char *)FUN_00d45a20(self, phaseId);
        pm->flag1F8() = 1;
    }
    if ((int)pm->phase().id == phaseId && pm->phase().hash == nameHash(name)) {
        debugPrint()(DAT_016bd87c);
        return 0;
    }
    if (pm->state() == 0 || pm->state() == 8) {
        FUN_00d4e140((uint *)self, phaseId, name, 1);
        return 1;
    }
    if (pm->queueCapacity() <= pm->queueCount()) {
        debugPrint()(DAT_016bd850);
        return 0;
    }
    if (0 < pm->queueCount()) {
        int offset = 0;
        do {
            PhaseManager::PhaseChangeRequest *queued =
                (PhaseManager::PhaseChangeRequest *)((char *)pm->queueEntries() + offset);
            if (queued->isSubPhase == 0 && FUN_00d45010((int *)queued, phaseId, (undefined4)name) != 0) {
                return 1;
            }
            i = i + 1;
            offset = offset + 0x34;
        } while (i < pm->queueCount());
    }
    request.isSubPhase = 0;
    request.param = (pm->state() != 9);
    request.slot.id = phaseId;
    request.slot.flag = request.param;
    if (name == 0) {
        request.slot.hash = 0;
        request.slot.name[0] = '\0';
    }
    else {
        request.slot.hash = nameHash(name);
        _strcpy_s(request.slot.name, 0x20, name);
    }
    request.isSubPhase = 0;
    if (pm->queueCount() < pm->queueCapacity()) {
        int *dst = (int *)((char *)pm->queueEntries() + pm->queueCount() * 0x34);
        if (dst != 0) {
            int *src = (int *)&request;
            for (int n = 0xd; n != 0; n = n + -1) {
                *dst = *src;
                src = src + 1;
                dst = dst + 1;
            }
        }
        pm->queueCount() = pm->queueCount() + 1;
    }
    return 1;
}

// 00D5EA40  FUN_00d5ea40  size=684  [callgraph]
// requestSubPhaseChange (debug strings): validates the sub-phase `name`, applies it at once in
// state 0/8, otherwise queues it (FUN_00d5dc10) unless already queued.
undefined4 FUN_00d5ea40(int self, byte *name, int checkBack, undefined4 param)
{
    using namespace PhaseManager_p1;
    PhaseManager *pm = (PhaseManager *)self;
    PhaseManager::PhaseChangeRequest request;

    if (pm->phase().id == 0xd30 && name != 0) {
        if (compareStrings(name, (const unsigned char *)"PD30_MISSION3") == 0) {
            void *mgr = managerC13920();
            int entity = vfunc<int (__thiscall *)(void *, int)>(mgr, 0x28)(mgr, -1);
            if (entity != 0) {
                undefined4 owner = FUN_00a7c8a0(entity);
                int obj = (int)FUN_00606cc0((int *)owner);
                if (obj != 0 && *(int *)(obj + 0x4e4) != 0) {
                    FUN_00ebddd0(kFade);
                    return 0;
                }
            }
        }
    }
    if ((DAT_01bea060 & 0x20000000) != 0) {
        return 0;
    }
    if (pm->requestPhase().id == pm->phase().id && pm->requestPhase().hash == nameHash(name)) {
        debugPrint()(DAT_016bd9a4, name);
        return 0;
    }
    if (checkBack != 0) {
        if (pm->phase().hash == nameHash(name)) {
            debugPrint()(DAT_016bd960);
            return 0;
        }
        if (FUN_00d4f0b0(self, (int)nameHash(name), 0, (undefined4)name) != 0) {
            debugPrint()(DAT_016bd92c);
            return 0;
        }
    }
    int index = FUN_00d4ef90(self, (int)name);
    if (index < 0) {
        debugPrint()(DAT_016bd8fc, name);
        return 0;
    }
    unsigned int phaseId = pm->phase().id;
    if (FUN_00d454a0(self) == 0) {
        if (pm->queueCapacity() <= pm->queueCount()) {
            debugPrint()(DAT_016bd850);
            return 0;
        }
        int i = 0;
        if (0 < pm->queueCount()) {
            int offset = 0;
            do {
                PhaseManager::PhaseChangeRequest *queued =
                    (PhaseManager::PhaseChangeRequest *)((char *)pm->queueEntries() + offset);
                if (queued->isSubPhase != 0 &&
                    FUN_00d45010((int *)queued, phaseId, (undefined4)name) != 0) {
                    return 1;
                }
                i = i + 1;
                offset = offset + 0x34;
            } while (i < pm->queueCount());
        }
        unsigned int group = pm->subPhase().id & 0xf00;
        if ((group == 0xc00 || group == 0xd00) && pm->currentPhaseEntry() != 0 &&
            pm->currentPhaseEntry()->id != pm->subPhase().id) {
            unsigned int hash = nameHash(name);
            int count = pm->currentPhaseEntry()->subPhaseCount;
            int k = 0;
            if (0 < count) {
                PhaseManager::SubPhaseEntry *sub = pm->currentPhaseEntry()->subPhases;
                do {
                    if (sub->hash == hash) {
                        debugPrint()(DAT_016bd8b8, name);
                        return 0;
                    }
                    k = k + 1;
                    sub = sub + 1;
                } while (k < count);
            }
        }
        request.isSubPhase = 0;
        request.param = 1;
        FUN_00d44f60((undefined4 *)&request.slot, phaseId, (char *)name, param);
        request.isSubPhase = 1;
        request.param = param;
        FUN_00d5dc10((int *)pm->changeQueue(), (int *)&param, (undefined4 *)&request);
        return 1;
    }
    FUN_00d4e1f0((uint *)self, (char *)name, param);
    return 1;
}

// 00D5ECF0  FUN_00d5ecf0  size=106  [callgraph]
// Requests sub-phase number `index` of the current phase (FUN_00d5ea40).
undefined4 FUN_00d5ecf0(int self, int index, undefined4 checkBack, undefined4 param)
{
    PhaseManager *pm = (PhaseManager *)self;
    int i = 0;
    if (index < 0) {
        return 0;
    }
    if (0 < pm->phaseCount()) {
        PhaseManager::PhaseEntry *entry = pm->phaseTable();
        while (entry->id != pm->phase().id) {
            i = i + 1;
            entry = entry + 1;
            if (pm->phaseCount() <= i) {
                return 0;
            }
        }
        entry = pm->phaseTable() + i;
        if (entry != 0 && index <= entry->subPhaseCount) {
            return FUN_00d5ea40(self, (byte *)((char *)entry->subPhases + index * 0x2c), checkBack, param);
        }
    }
    return 0;
}

// 00D5ED60  PhaseManager::setPhaseData  size=140  [class]
undefined4 PhaseManager::setPhaseData(undefined4 param)
{
    using namespace PhaseManager_p1;
    FUN_00de3540((undefined4 *)fileLoader(), param, 0);
    int i = 0;
    currentPhaseEntry() = 0;
    if (0 < phaseCount()) {
        PhaseEntry *entry = phaseTable();
        do {
            if (entry->id == requestPhase().id) {
                currentPhaseEntry() = entry;
            }
            i = i + 1;
            entry = entry + 1;
        } while (i < phaseCount());
    }
    if (currentPhaseEntry() == 0) {
        debugPrint()(DAT_016bd9d8, requestPhase().id);
    }
    else {
        int ok = setSubPhaseData(requestPhase().name);
        if (ok != 0) {
            flags() = flags() | 1;
            return 1;
        }
    }
    return 0;
}
