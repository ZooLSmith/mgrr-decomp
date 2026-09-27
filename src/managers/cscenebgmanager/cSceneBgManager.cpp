// src/managers/cscenebgmanager/cSceneBgManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cSceneBgManager.h"

// Data referenced by this part
extern unsigned char DAT_0164ed5c[];  // debug message: too many layouts
extern unsigned char DAT_0164ede8[];  // debug message: layout object not found (name, scene)
extern unsigned char DAT_0164edb8[];  // debug message: FUN_009fe920 failed (name, scene)
extern unsigned char DAT_0164ed84[];  // debug message: read request failed (name, scene)
extern unsigned char DAT_0164ed08[];  // debug message: object released (name)

namespace cSceneBgManager_p1 {

// __cdecl call of a function (symbol or address) with the argument list seen at the call site.
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

const unsigned int kFixedListInsert = 0x00935110;  // cFixedList::insert_2 (no header)
const int kReadSlots = 0x10;
const int kNoObject = 0xd0404;                     // FUN_009fde60 result: nothing to load

} // namespace cSceneBgManager_p1

// 009351C0  cSceneBgManager::moveReadLayoutRequest  size=606  [class]
void cSceneBgManager::moveReadLayoutRequest()
{
    using namespace cSceneBgManager_p1;
    char *entry;
    bool allDone;
    bool load;
    int id;
    int ok;
    int copied;
    int *slot;
    int layouts;
    int remaining;
    unsigned int slotIndex;
    undefined1 insertResult[4];  // local_34
    char prefix[16];             // local_30
    char objName[32];            // local_20

    layouts = layoutList();
    slotIndex = 0;
    slot = readingIds();
    do {
        if (*(int *)(layoutList() + 8) <= nextLayout()) break;
        if (*slot == -1) {
            load = true;
        }
        else if (FUN_00a00ca0(*slot, 0) != 0) {
            cdeclcall<void>(kFixedListInsert, insertResult, loadedList(), slot);
            *slot = -1;
            load = true;
        }
        else {
            load = (*slot == -1);
        }
        if (load) {
            if (0x100 < nextLayout()) {
                cdeclcall<void>(FUN_00dd5650, DAT_0164ed5c);
                break;
            }
            entry = (char *)(layouts + 0x14 + nextLayout() * 0x14);
            prefix[0] = '\0';
            prefix[1] = '\0';
            prefix[2] = '\0';
            prefix[3] = '\0';
            prefix[4] = '\0';
            prefix[5] = '\0';
            prefix[6] = '\0';
            prefix[7] = '\0';
            prefix[8] = 0;
            copied = 0;
            do {
                prefix[copied] = entry[copied];
                if (entry[copied] == '\0') break;
                copied = copied + 1;
            } while (copied < 8);
            if (prefix[0] == '\0') {
                _sprintf_s(objName, 0x20, "%c%c%04x", (int)entry[8], (int)entry[9],
                           (unsigned int)*(unsigned short *)(entry + 10));
            }
            else {
                // ? only the prefix argument was recovered; the format also expects the
                //   characters at entry+8/+9 and the word at entry+10
                _sprintf_s(objName, 0x20, "%s_%c%c%04x", prefix);
            }
            id = FUN_009fde60(objName);
            if (id != kNoObject) {
                if (id == -1) {
                    cdeclcall<void>(FUN_00dd5650, DAT_0164ede8, objName, name());
                }
                else {
                    ok = cdeclcall<int>(FUN_009fe920, id);
                    if (ok == 0) {
                        cdeclcall<void>(FUN_00dd5650, DAT_0164edb8, objName, name());
                    }
                    else {
                        ok = FUN_00a00a60(id, 0);
                        if (ok == 0) {
                            cdeclcall<void>(FUN_00dd5650, DAT_0164ed84, objName, name());
                        }
                        else {
                            *slot = id;
                        }
                    }
                }
            }
            nextLayout() = nextLayout() + 1;
        }
        slotIndex = slotIndex + 1;
        slot = slot + 1;
    } while (slotIndex < kReadSlots);
    if (*(int *)(layoutList() + 8) <= nextLayout()) {
        allDone = true;
        slot = readingIds();
        remaining = kReadSlots;
        do {
            if (*slot != -1) {
                ok = FUN_00a00ca0(*slot, 0);
                if (ok == 0) {
                    ok = FUN_00a01080(*slot, 0);
                    if (ok == 0) {
                        allDone = false;
                    }
                    else {
                        FUN_00a00bd0(*slot, 0);
                        FUN_009f8ea0(prefix, 0x10, *slot, 0);
                        cdeclcall<void>(FUN_00dd5650, DAT_0164ed08, prefix);
                        *slot = -1;
                    }
                }
                else {
                    cdeclcall<void>(kFixedListInsert, insertResult, loadedList(), slot);
                    *slot = -1;
                }
            }
            slot = slot + 1;
            remaining = remaining + -1;
        } while (remaining != 0);
        if (allDone) {
            state() = 4;
        }
    }
}

// 00935420  FUN_00935420  size=225  [callgraph]
// Steps the background read state machine of the cSceneBgManager in ECX.
void __fastcall FUN_00935420(int self)
{
    using namespace cSceneBgManager_p1;
    cSceneBgManager *manager = (cSceneBgManager *)self;
    int *slot;
    int remaining;

    switch (manager->state()) {
    default:
        return;
    case 2:
        break;
    case 3:
        manager->moveReadLayoutRequest(); /* ECX: ? (presumably self) */
        return;
    case 5:
        slot = manager->readingIds();
        remaining = kReadSlots;
        do {
            if (*slot != -1) {
                FUN_00a00bd0(*slot, 0);
            }
            slot = slot + 1;
            remaining = remaining + -1;
        } while (remaining != 0);
        manager->state() = 6;
        return;
    case 6:
        cdeclcall<void>(FUN_00933840); /* ECX: ? */
        return;
    }
    if (manager->layoutList() != 0) {
        manager->nextLayout() = 0;
        manager->field14() = 0;
        if (*(int *)(manager->layoutList() + 8) != 0) {
            slot = manager->readingIds();
            slot[0] = -1;
            slot[1] = -1;
            slot[2] = -1;
            slot[3] = -1;
            slot[4] = -1;
            slot[5] = -1;
            slot[6] = -1;
            slot[7] = -1;
            slot[8] = -1;
            slot[9] = -1;
            slot[10] = -1;
            slot[11] = -1;
            slot[12] = -1;
            slot[13] = -1;
            slot[14] = -1;
            slot[15] = -1;
            manager->state() = 3;
            return;
        }
    }
    manager->state() = 4;
}
