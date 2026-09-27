// src/managers/phasereadmanager/PhaseReadManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "PhaseReadManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned char DAT_01dda840[];  // the file read manager (ECX of FUN_00e9xxxx)
extern unsigned char DAT_01b7bcf0[];  // the default heap (Hw heap object)
extern unsigned char DAT_016bc9b0[];  // "<phase dat exceeds 1.5MB>" (Shift-JIS)
extern unsigned char DAT_016bd384[];  // "PhaseManager::startup <phase data is invalid>" (Shift-JIS)
extern unsigned char DAT_0163cadc[];  // "cFixedVector::create <alloc failed>[%s need:%d Allocatable:%d]"
extern unsigned char DAT_01be91dc[];  // file table (ECX of FUN_00de4500)
extern unsigned char DAT_01be8f30[];  // ECX of FUN_00a50390
extern PhaseReadManagerImplement *DAT_01dc51c0;  // the reader instance

namespace PhaseReadManagerImplement_p1 {

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// raw field access
template <class T> inline T &at(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// debug prints (functions.h declares them without parameters)
inline void DebugPrint(const void *text)  // FUN_009c92f0
{
    ((void (__cdecl *)(const void *))FUN_009c92f0)(text);
}
template <class... A> inline void ErrorPrint(const void *format, A... args)  // FUN_00dd5650
{
    ((void (__cdecl *)(const void *, ...))FUN_00dd5650)(format, args...);
}

// file read manager (DAT_01dda840), all __thiscall
inline void ReleaseRead(int handle)  // FUN_00e9d6a0
{
    ((void (__thiscall *)(void *, int))FUN_00e9d6a0)(DAT_01dda840, handle);
}
inline int StartRead(int mode, const char *path, void *heap, int a4, int a5)  // FUN_00e9e570
{
    return ((int (__thiscall *)(void *, int, const char *, void *, int, int))FUN_00e9e570)(
        DAT_01dda840, mode, path, heap, a4, a5);
}
inline int ReadDone(int handle)  // FUN_00e9cf60
{
    return ((int (__thiscall *)(void *, int))FUN_00e9cf60)(DAT_01dda840, handle);
}
inline void *ReadData(int handle)  // FUN_00e9d0b0
{
    return ((void *(__thiscall *)(void *, int))FUN_00e9d0b0)(DAT_01dda840, handle);
}

// FUN_00dec390: non-zero when the file exists; FUN_00deb980: its size
inline int FileExists(const char *path)
{
    return ((int (__cdecl *)(const char *))FUN_00dec390)(path);
}
inline unsigned int FileSize(const char *path)
{
    return ((unsigned int (__cdecl *)(const char *))FUN_00deb980)(path);
}

// 00DD48F0 Hw::cHeapPhysical::cHeapPhysical (__thiscall)
inline void ConstructPhysicalHeap(void *heap)
{
    ((void (__thiscall *)(void *))0x00DD48F0)(heap);
}

// allocators: FUN_00dd3500 / FUN_00dd3580 (size, heap); FUN_00dd29b0 (__thiscall on the heap)
inline void *MemAlloc(unsigned int size, void *heap)
{
    return ((void *(__cdecl *)(unsigned int, void *))FUN_00dd3500)(size, heap);
}
inline void *MemAllocArray(unsigned int size, void *heap)
{
    return ((void *(__cdecl *)(unsigned int, void *))FUN_00dd3580)(size, heap);
}
inline void *HeapAllocAligned(void *heap, unsigned int size, unsigned int align, int a3, int a4)
{
    return ((void *(__thiscall *)(void *, unsigned int, unsigned int, int, int))FUN_00dd29b0)(
        heap, size, align, a3, a4);
}
inline const char *HeapName(void *heap)  // FUN_00dd2960: [heap + 0x38]
{
    return (const char *)FUN_00dd2960((int)heap);
}

// FUN_00d45130 (ECX = the PhaseManager, unused; ret 8): new[] of `count` 0x10-byte PhaseInfo
inline void *NewPhaseInfoArray(void *self, void *heap, unsigned int count)
{
    return ((void *(__thiscall *)(void *, void *, unsigned int))FUN_00d45130)(self, heap, count);
}

// FUN_00de4500 (__thiscall, ECX = DAT_01be91dc): resolve a file name
inline int ResolveFile(const char *name)
{
    return ((int (__thiscall *)(void *, const char *))FUN_00de4500)(DAT_01be91dc, name);
}
// FUN_00e062b0 (__thiscall, ECX = the bxm document): load
inline void LoadBxm(void *bxm, int file, int a2)
{
    ((void (__thiscall *)(void *, int, int))FUN_00e062b0)(bxm, file, a2);
}
// FUN_00e03ea0: hash of a name
inline int NameHash(const char *name)
{
    return ((int (__cdecl *)(const char *))FUN_00e03ea0)(name);
}

// strlen (inlined in the binary)
inline int StringLength(const char *text)
{
    const char *end = text;
    while (*end++ != 0) {
    }
    return (int)(end - (text + 1));
}

// bxm document virtuals
inline int BxmRoot(void *bxm)                               { return vcall<int>(bxm, 0x4); }
inline int BxmChildCount(void *bxm, int node)               { return vcall<int>(bxm, 0x10, node); }
inline int BxmChildAt(void *bxm, int node, int index)       { return vcall<int>(bxm, 0x14, node, index); }
inline int BxmChild(void *bxm, int node, const char *name)  { return vcall<int>(bxm, 0x18, node, name); }
inline void BxmText(void *bxm, int node, char *buffer, int size) { vcall<void>(bxm, 0x74, node, buffer, size); }
inline int BxmFlag(void *bxm, int node)                     { return vcall<int>(bxm, 0x98, node); }
inline int BxmAttribute(void *bxm, int node, const char *name) { return vcall<int>(bxm, 0x9c, node, name); }
inline void BxmAttributeText(void *bxm, int attribute, char *buffer, int size)
{
    vcall<void>(bxm, 0xa4, attribute, buffer, size);
}

}  // namespace PhaseReadManagerImplement_p1

// 00D445E0  FUN_00d445e0  size=59  [callgraph]
// State 5 (ReleaseStart): with neither a current nor a requested phase go to StayNoData;
// otherwise release the read request and go to ReleaseWait.
void PhaseReadManagerImplement::updateReleaseStart()
{
    using namespace PhaseReadManagerImplement_p1;
    if (currentPhase() == -1 && requestedPhase() == -1) {
        state() = 1;
        return;
    }
    if (readHandle() != 0) {
        ReleaseRead(readHandle());
        readHandle() = 0;
    }
    state() = 6;
}

// 00D44620  FUN_00d44620  size=45  [callgraph]
// State 6 (ReleaseWait): forget the data, call onReleased, then ReadStart when a phase is
// requested, StayNoData otherwise.
void PhaseReadManagerImplement::updateReleaseWait()
{
    currentPhase() = -1;
    readHandle() = 0;
    data() = 0;
    if (onReleased() != 0) {
        onReleased()();
    }
    state() = (requestedPhase() != -1) + 1;
}

// 00D44650  FUN_00d44650  size=30  [callgraph]
// State 7 (ReadCancelStart): release the read request, go to ReadCancelWait.
void PhaseReadManagerImplement::updateReadCancelStart()
{
    using namespace PhaseReadManagerImplement_p1;
    if (readHandle() != 0) {
        ReleaseRead(readHandle());
    }
    state() = 8;
}

// 00D446A0  PhaseReadManagerImplement::vf1C  size=20  [class]
// 1 while reading (ReadStart or ReadWait).
int PhaseReadManagerImplement::vf1C()
{
    if (state() != 2 && state() != 3) {
        return 0;
    }
    return 1;
}

// 00D44780  PhaseReadManagerImplement::vf24  size=157  [class]
void PhaseReadManagerImplement::vf24()
{
    using namespace PhaseReadManagerImplement_p1;
    switch (state()) {
    case 0:
        DebugPrint(" Reader :None\n");
        return;
    case 1:
        DebugPrint(" Reader :StayNoData\n");
        return;
    case 2:
        DebugPrint(" Reader :ReadStart\n");
        return;
    case 3:
        DebugPrint(" Reader :ReadWait\n");
        return;
    case 4:
        DebugPrint(" Reader :StayData\n");
        return;
    case 5:
        DebugPrint(" Reader :ReleaseStart\n");
        return;
    case 6:
        DebugPrint(" Reader :ReleaseWait\n");
        return;
    case 7:
        DebugPrint(" Reader :ReadCancelStart\n");
        return;
    case 8:
        DebugPrint(" Reader :ReadCancelWait\n");
        return;
    default:
        DebugPrint(" Reader :Unknown\n");
        return;
    }
}

// 00D4D4B0  PhaseReadManagerImplement::PhaseReadManagerImplement  size=113  [class]
// Creates the 0x180000-byte physical heap "Phase" from DAT_01b7bcf0; state 1 (StayNoData) on
// success, 0 plus an error message otherwise.
PhaseReadManagerImplement::PhaseReadManagerImplement()
{
    using namespace PhaseReadManagerImplement_p1;
    // vftable = PhaseReadManagerImplement::vftable (0x016BC9EC)
    ConstructPhysicalHeap(heap());
    currentPhase() = -1;
    requestedPhase() = -1;
    readHandle() = 0;
    onRead() = 0;
    flags() = 0;
    data() = 0;
    state() = 0;
    if (vcall<int>(heap(), 0x44, 0x180000, (void *)DAT_01b7bcf0, "Phase") == 0) {  // cHeapPhysical::vf44: create
        state() = 0;
        ErrorPrint(DAT_016bc9b0);
        return;
    }
    state() = 1;
}

// 00D4D530  PhaseReadManagerImplement::vf04  size=4  [class]
int PhaseReadManagerImplement::vf04()
{
    return currentPhase();
}

// 00D4D540  PhaseReadManagerImplement::vf20  size=7  [class]
void *PhaseReadManagerImplement::vf20()
{
    return data();
}

// 00D4D550  PhaseReadManagerImplement::vf18  size=10  [class]
uint PhaseReadManagerImplement::vf18()
{
    return flags() >> 3 & 1;
}

// 00D4D5D0  PhaseReadManagerImplement::vf28  size=30  [class]
// Scalar deleting destructor.
undefined4 *PhaseReadManagerImplement::vf28(byte flags)
{
    implementDestructor();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}

// 00D4D5F0  PhaseReadManagerImplement::vf08  size=159  [class]
// Accepted only in StayNoData / StayData, when "ph%x/p%03x.dat" exists and is smaller than the
// heap's free size (vf18); the request is recorded unless `phase` is already loaded.
int PhaseReadManagerImplement::vf08(int phase, Callback onRead, Callback onRelease, Callback onReleased)
{
    using namespace PhaseReadManagerImplement_p1;
    char path[20];
    if (state() != 1 && state() != 4) {
        return 0;
    }
    _sprintf_s(path, 0x14, (char *)"ph%x/p%03x.dat", phase >> 8 & 0xf, phase);
    if (FileExists(path) != 0) {
        unsigned int size = FileSize(path);
        unsigned int capacity = vcall<unsigned int>(heap(), 0x18);  // cHeapPhysical::vf18
        if (size < capacity) {
            if (currentPhase() != phase) {
                requestedPhase() = phase;
                this->onRead() = onRead;
                this->onRelease() = onRelease;
                this->onReleased() = onReleased;
            }
            return 1;
        }
    }
    return 0;
}

// 00D4D690  PhaseReadManagerImplement::vf10  size=39  [class]
// While reading: cancel (vf0C, a tail jump in the binary); otherwise flag a release request
// when vf14 says a release is pending.
void PhaseReadManagerImplement::vf10()
{
    if (vf1C() != 0) {
        vf0C();
        return;
    }
    if (vf14() != 0) {
        flags() = flags() | 4;
    }
}

// 00D4D6C0  PhaseReadManagerImplement::vf0C  size=5  [class]
void PhaseReadManagerImplement::vf0C()
{
    flags() = flags() | 1;
}

// 00D4D6F0  FUN_00d4d6f0  size=98  [between]
// State 2 (ReadStart): start reading the requested phase file into the heap, go to ReadWait.
void PhaseReadManagerImplement::updateReadStart()
{
    using namespace PhaseReadManagerImplement_p1;
    char path[20];
    state() = 6;
    _sprintf_s(path, 0x14, (char *)"ph%x/p%03x.dat", requestedPhase() >> 8 & 0xf, requestedPhase());
    if (FileExists(path) != 0) {
        readHandle() = StartRead(2, path, heap(), 0, 0);
    }
    state() = 3;
}

// 00D4D760  FUN_00d4d760  size=87  [between]
// State 3 (ReadWait): on a cancel request go to ReadCancelStart; when the read is done take
// its data, call onRead, make the requested phase current and go to StayData.
void PhaseReadManagerImplement::updateReadWait()
{
    using namespace PhaseReadManagerImplement_p1;
    if ((flags() & 1) != 0) {
        state() = 7;
        return;
    }
    if (ReadDone(readHandle()) != 0) {
        data() = ReadData(readHandle());
        if (onRead() != 0) {
            onRead()();
        }
        currentPhase() = requestedPhase();
        requestedPhase() = -1;
        state() = 4;
    }
}

// 00D4D7C0  FUN_00d4d7c0  size=69  [between]
// State 4 (StayData): with no new request and no release request, flag "release pending";
// otherwise clear bits 1-2 and read (no current phase) or release (another phase requested).
void PhaseReadManagerImplement::updateStayData()
{
    if (requestedPhase() == -1 && (flags() & 4) == 0) {
        flags() = flags() | 2;
        return;
    }
    flags() = flags() & 0xfffffff9;
    if (currentPhase() == -1) {
        state() = 2;
    }
    else if (currentPhase() != requestedPhase()) {
        if (onRelease() != 0) {
            onRelease()();
        }
        state() = 5;
        return;
    }
}

// 00D4D830  PhaseReadManagerImplement::vf14  size=9  [class]
uint PhaseReadManagerImplement::vf14()
{
    return flags() >> 1 & 1;
}

// 00D58290  PhaseReadManagerImplement::vf00  size=128  [class]
// Per-frame update: runs the handler of the current state (the binary tail-jumps to them).
void PhaseReadManagerImplement::vf00()
{
    using namespace PhaseReadManagerImplement_p1;
    switch (state()) {
    case 1:
        break;
    case 2:
        updateReadStart();
        return;
    case 3:
        updateReadWait();
        return;
    case 4:
        updateStayData();
        return;
    case 5:
        updateReleaseStart();
        return;
    case 6:
        updateReleaseWait();
        return;
    case 7:  // updateReadCancelStart, inlined
        if (readHandle() != 0) {
            ReleaseRead(readHandle());
        }
        state() = 8;
        return;
    case 8:
        flags() = flags() & 0xfffffffe;
        requestedPhase() = -1;
        readHandle() = 0;
        state() = 1;
    default:
        return;
    }
    // state 1 (StayNoData)
    if (requestedPhase() != -1) {
        flags() = flags() & 0xfffffff7;
        state() = 2;
        return;
    }
    flags() = flags() | 8;
}

// 00D58370  PhaseReadManagerImplement::PhaseReadManagerImplement  size=1603  [class]
// PhaseManager::startup (rewritten from the disassembly; Ghidra lost the stack buffer).
// `this` is the PhaseManager; all its fields are foreign:
//   +0x000, +0x210        cleared
//   +0x008 + i*0x2C       6 records (i = 0..5): +0x0 = -1, +0x4..+0x28 = 0
//   +0x110 / +0x114       PhaseInfo array (0x10 each) / count
//   +0x1B8                the bxm document of PhaseInfo.bxm (embedded, virtual interface)
//   +0x200..+0x20C        cFixedVector of 0x340 bytes (data, 0x10, 0, 1)
//   +0x004, +0x220..+0x260 set only when the reader cannot be allocated
// PhaseInfo: +0x0 phase id (hex of the "name" attribute "pXXXX"), +0x4 sub-phase count,
// +0x8 sub-phase array (0x2C each: +0x00 name[0x20], +0x20 name hash, +0x24 flag), +0xC node.
// Returns 0, or 1 when the reader could not be allocated (as in the binary).
int PhaseReadManagerImplement::phaseManagerStartup()
{
    using namespace PhaseReadManagerImplement_p1;
    void *bxm = (char *)this + 0x1b8;
    char name[12];  // esp+0x20 in the binary

    at<int>(this, 0x210) = 0;
    at<int>(this, 0x0) = 0;
    for (int i = 0; i < 6; i++) {  // the binary stores the same values unrolled
        char *record = (char *)this + 0x8 + i * 0x2c;
        at<int>(record, 0x4) = 0;
        at<int>(record, 0x28) = 0;
        at<int>(record, 0x0) = -1;
        for (int offset = 0x8; offset <= 0x24; offset += 4) {
            at<int>(record, offset) = 0;
        }
    }

    // PhaseInfo.bxm: InfoList
    LoadBxm(bxm, ResolveFile("PhaseInfo.bxm"), 0);
    int root = BxmRoot(bxm);
    int infoList = BxmChild(bxm, root, "InfoList");
    int infoCount = BxmChildCount(bxm, infoList);
    at<int>(this, 0x114) = infoCount;
    at<char *>(this, 0x110) = (char *)NewPhaseInfoArray(this, DAT_01b7bcf0, (unsigned int)infoCount);
    int index = 0;
    if (BxmChildCount(bxm, infoList) > 0) {
        int offset = 0;
        do {
            int node = BxmChildAt(bxm, infoList, index);
            int attribute = BxmAttribute(bxm, node, "name");
            if (attribute != -1) {
                BxmAttributeText(bxm, attribute, name, 10);
            }
            if (name[0] == 'p' && StringLength(name) == 4) {
                char *info = at<char *>(this, 0x110) + offset;
                at<long>(info, 0x0) = _strtol(name + 1, 0, 0x10);
                info = at<char *>(this, 0x110) + offset;
                at<int>(info, 0xc) = node;
                int subPhases = BxmChildCount(bxm, BxmChild(bxm, node, "SubPhase"));
                at<int>(at<char *>(this, 0x110) + offset, 0x4) = subPhases;
                info = at<char *>(this, 0x110) + offset;
                unsigned int subCount = (unsigned int)at<int>(info, 0x4);
                if (subCount == 0) {
                    at<int>(info, 0x8) = 0;
                }
                else {
                    unsigned long long bytes = (unsigned long long)subCount * 0x2c;
                    unsigned int size = (unsigned int)bytes | (0u - (unsigned int)((bytes >> 32) != 0));
                    char *subs = (char *)MemAllocArray(size, DAT_01b7bcf0);
                    if (subs != 0) {
                        char *flag = subs + 0x24;  // clear the flag of every sub-phase
                        for (int k = (int)subCount - 1; k >= 0; k--) {
                            *(int *)flag = 0;
                            flag += 0x2c;
                        }
                    }
                    at<char *>(at<char *>(this, 0x110) + offset, 0x8) = subs;
                    if (at<char *>(at<char *>(this, 0x110) + offset, 0x8) == 0) {
                        ErrorPrint("PhaseManager::startup SUBPHASE heap allocate error");
                        return 0;
                    }
                }
            }
            else {
                ErrorPrint(DAT_016bd384);
            }
            index++;
            offset += 0x10;
        } while (index < BxmChildCount(bxm, infoList));
    }

    // sub-phase names
    for (int i = 0; i < at<int>(this, 0x114); i++) {
        int subPhase = BxmChild(bxm, at<int>(at<char *>(this, 0x110) + i * 0x10, 0xc), "SubPhase");
        int k = 0;
        if (BxmChildCount(bxm, subPhase) > 0) {
            int offset = 0;
            do {
                int node = BxmChildAt(bxm, subPhase, k);
                BxmText(bxm, node, at<char *>(at<char *>(this, 0x110) + i * 0x10, 0x8) + offset, 0x20);
                int hash = NameHash(at<char *>(at<char *>(this, 0x110) + i * 0x10, 0x8) + offset);
                at<int>(at<char *>(at<char *>(this, 0x110) + i * 0x10, 0x8) + offset, 0x20) = hash;
                if (BxmFlag(bxm, node) == 0) {
                    at<int>(at<char *>(at<char *>(this, 0x110) + i * 0x10, 0x8) + offset, 0x24) = 0;
                }
                else {
                    at<int>(at<char *>(at<char *>(this, 0x110) + i * 0x10, 0x8) + offset, 0x24) = 1;
                }
                k++;
                offset += 0x2c;
            } while (k < BxmChildCount(bxm, subPhase));
        }
    }

    // cFixedVector (0x340 bytes, 32-byte aligned)
    if (at<void *>(this, 0x200) == 0) {
        void *vectorData = HeapAllocAligned(DAT_01b7bcf0, 0x340, 0x20, 0, 0);
        at<void *>(this, 0x200) = vectorData;
        if (vectorData == 0) {
            int allocatable = vcall<int>(DAT_01b7bcf0, 0x18);
            ErrorPrint(DAT_0163cadc, HeapName(DAT_01b7bcf0), 0x340, allocatable);
        }
        else {
            at<int>(this, 0x204) = 0x10;
            at<int>(this, 0x208) = 0;
            at<int>(this, 0x20c) = 1;
        }
    }
    FUN_00a50390((int)DAT_01be8f30);

    // the reader (PhaseReadManagerImplement constructor, inlined)
    PhaseReadManagerImplement *reader = (PhaseReadManagerImplement *)MemAlloc(0x4a0, DAT_01b7bcf0);
    if (reader != 0) {
        // vftable = PhaseReadManagerImplement::vftable (0x016BC9EC)
        *(unsigned int *)reader = 0x016BC9EC;
        ConstructPhysicalHeap(reader->heap());
        reader->currentPhase() = -1;
        reader->requestedPhase() = -1;
        reader->readHandle() = 0;
        reader->onRead() = 0;
        reader->flags() = 0;
        reader->data() = 0;
        reader->state() = 0;
        if (vcall<int>(reader->heap(), 0x44, 0x180000, (void *)DAT_01b7bcf0, "Phase") != 0) {
            reader->state() = 1;
            DAT_01dc51c0 = reader;
            return 0;
        }
        reader->state() = 0;
        ErrorPrint(DAT_016bc9b0);
        DAT_01dc51c0 = reader;
        return 0;
    }
    DAT_01dc51c0 = 0;
    at<int>(this, 0x4) = 0;
    at<float>(this, 0x220) = 0.0f;
    at<float>(this, 0x224) = 0.0f;
    at<float>(this, 0x228) = 0.0f;
    at<float>(this, 0x22c) = 1.0f;
    at<int>(this, 0x234) = 0;
    at<int>(this, 0x258) = 0;
    at<int>(this, 0x230) = -1;
    for (int offset = 0x238; offset <= 0x254; offset += 4) {
        at<int>(this, offset) = 0;
    }
    at<int>(this, 0x25c) = 0;
    at<int>(this, 0x260) = 0;
    return 1;
}
