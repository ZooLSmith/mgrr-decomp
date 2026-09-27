// src/managers/cckmsgdatamanager/cCkMsgDataManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCkMsgDataManager.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern int  DAT_01dc2cd8;  // current voice/text language (codec messages)
extern int  DAT_01dc2cdc;  // number of installed DLC packs (weapon message files)
extern int  DAT_01dc3e0c;  // third argument of FUN_00cb18b0 ?
// Shift-JIS debug messages (translated)
extern const char DAT_016b7960[];  // "cCkMsgDataManager::setupReadInfoDLC ETC000 not needed"
extern const char DAT_016b91f0[];  // "not enough file memory"

// ---------------------------------------------------------------------------------------------
// Helpers.  Callees whose functions.h prototype does not match the machine code (hidden ECX,
// missing stack arguments) are called through a cast so the argument list is the binary's.
// cMsgCtrl.h is not owned by this file: its fields are written through raw offsets tagged
// "cMsgCtrl+0x..".
// ---------------------------------------------------------------------------------------------
namespace cCkMsgDataManager_p1 {

typedef cCkMsgDataManager::Entry Entry;

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

// File loader instance (0x01DDA840): FUN_00e9e570 starts a read, FUN_00e9d0b0 returns the data of
// a finished read, FUN_00e9cf60 / FUN_00e9cfe0 / FUN_00e9d060 query a read's state.
inline void *fileLoader() { return (void *)0x01DDA840; }
// Language table object (0x01DC2010) of FUN_00cad030.
inline void *languageTable() { return (void *)0x01DC2010; }

// FUN_00e9e570(5, path, heap, heap2, 0): starts reading `path`; returns the request handle.
inline int startRead(char *path, int heap, int heap2)
{
    return thiscall<int>(FUN_00e9e570, fileLoader(), 5, path, heap, heap2, 0);
}
// FUN_00e9d0b0: data of a finished read.
inline int readData(int handle)
{
    return thiscall<int>(FUN_00e9d0b0, fileLoader(), handle);
}
// FUN_00dec390: non-zero when `path` exists.
inline int fileExists(char *path)
{
    return cdeclcall<int>(FUN_00dec390, path);
}
// FUN_00cad030: language code of a language index.
inline int languageCode(int language)
{
    return thiscall<int>(FUN_00cad030, languageTable(), language);
}
// FUN_00cadb50: codec file number of a phase (ECX = the manager).
inline int codecNumber(cCkMsgDataManager *manager, int phase)
{
    return thiscall<int>(FUN_00cadb50, manager, phase);
}

// Language index -> file language number (the inlined switch of the original).
inline int fileLanguage(int language)
{
    int result;
    switch (language) {
    case 0:
        result = 0;
        break;
    default:
        result = 1;
        break;
    case 2:
        result = 3;
        break;
    case 3:
        result = 4;
        break;
    case 4:
        result = 5;
        break;
    case 5:
        result = 6;
        break;
    case 6:
        result = 7;
        break;
    }
    return result;
}

// Expands `path` (FUN_00df8090), localises it for `language` (FUN_00cad960, ECX = the manager)
// and copies the result to `out` (0x80 bytes).
inline void localizePath(cCkMsgDataManager *manager, char *out, char *path, int language)
{
    char fullPath[0x104];
    char localized[0x40];
    cdeclcall<void>(FUN_00df8090, fullPath, 0x104, path);
    thiscall<void>(FUN_00cad960, manager, localized, 0x40, fullPath, language);
    _strcpy_s(out, 0x80, localized);
}

// Inlined cMsgCtrl destructor.
inline void destroyMsgCtrl(char *ctrl)
{
    // vftable = cMsgCtrl::vftable (0x016B7B1C)
    FUN_00f972f0((int)(ctrl + 0xC));        /* cMsgCtrl+0xC: texture */
    *(int *)(ctrl + 0x4) = 0;               /* cMsgCtrl+0x4 */
    *(int *)(ctrl + 0x8) = 0;               /* cMsgCtrl+0x8 */
    *(int *)(ctrl + 0x28) = 0;              /* cMsgCtrl+0x28 */
    *(unsigned short *)(ctrl + 0x2D) = 0;   /* cMsgCtrl+0x2D */
    thiscall<void>(0x00F972E0u, ctrl + 0xC);  // Hw::cTexture::~cTexture
}

}  // namespace cCkMsgDataManager_p1

// 00CCA390  cCkMsgDataManager::setupReadInfoDLC  size=87  [class]
void cCkMsgDataManager::setupReadInfoDLC(int entryAddr, int reload)
{
    using namespace cCkMsgDataManager_p1;
    Entry *entry = (Entry *)entryAddr;
    int kind = entry->kind;
    if (kind != 1 && kind != 3 && kind != 2) {
        FUN_00f972f0((int)(entry->readInfo + 0xC));          /* cMsgCtrl+0xC: texture */
        *(int *)(entry->readInfo + 0x4) = 0;                  /* cMsgCtrl+0x4 */
        *(int *)(entry->readInfo + 0x8) = 0;                  /* cMsgCtrl+0x8 */
        *(int *)(entry->readInfo + 0x28) = 0;                 /* cMsgCtrl+0x28 */
        *(unsigned short *)(entry->readInfo + 0x2D) = 0;      /* cMsgCtrl+0x2D */
        entry->fieldD0 = 0;
        cdeclcall<void>(FUN_00dd5650, DAT_016b7960);
    }
}

// 00CCA3F0  FUN_00cca3f0  size=422  [callgraph]
// Sets up a slot whose files were read: message data (.mcd / .wtb) from the .dat / .dtt pair,
// the page number list and the codec radio file.  Clears the request.
// __thiscall: ECX (the manager) is only passed through to setupReadInfoDLC.
void FUN_00cca3f0(undefined4 *entryAddr, int reload)
{
    using namespace cCkMsgDataManager_p1;
    Entry *entry = (Entry *)entryAddr;
    char mcdName[0x80];
    char wtbName[0x80];
    char pageNoName[0x80];
    char radName[0x80];
    int kind = entry->kind;
    if (kind != 1 && kind != 3 && kind != 2) {
        int archive[2];  // .dat / .dtt archive reader (FUN_00de3530 / FUN_00de3540 / FUN_00de4550)
        thiscall<void>(FUN_00de3530, archive);
        if (reload == 0) {
            entry->datData = readData(entry->datHandle);
            entry->dttData = readData(entry->dttHandle);
            entry->waveData = readData(entry->waveHandle);
            entry->wave2Data = readData(entry->wave2Handle);
        }
        thiscall<void>(FUN_00de3540, archive, entry->datData, entry->dttData);
        int arg3 = DAT_01dc3e0c;
        _sprintf_s(mcdName, 0x80, (char *)"ckmsg_p%03x.mcd", entry->phase);
        _sprintf_s(wtbName, 0x80, (char *)"ckmsg_p%03x.wtb", entry->phase);
        int mcd = thiscall<int>(FUN_00de4550, archive, mcdName, 0);
        int wtb = thiscall<int>(FUN_00de4550, archive, wtbName, 0);
        entry->wtbData = wtb;
        thiscall<void>(FUN_00cb18b0, entry->msgCtrl, mcd, wtb, arg3, reload);
        _sprintf_s(pageNoName, 0x80, (char *)"pageno_list_p%03x.bxm", entry->phase);
        entry->pageNoList = thiscall<int>(FUN_00de4550, archive, pageNoName, 0);
        cCkMsgDataManager::setupReadInfoDLC((int)entry, reload);  // ECX: the manager
        _sprintf_s(radName, 0x80, (char *)"Codec_p%03x.rad", entry->phase);
        entry->codecRad = thiscall<int>(FUN_00de4550, archive, radName, 0);
    }
    entry->requestPhase = 0xFFF;
    entry->requestLanguage = -1;
    entry->state = -1;
}

// 00CE14C0  cCkMsgDataManager::~cCkMsgDataManager  size=133  [class]
cCkMsgDataManager::~cCkMsgDataManager()
{
    using namespace cCkMsgDataManager_p1;
    // vftable = cCkMsgDataManager::vftable (0x016B8C00)
    thiscall<void>(0x00DD4B00u, heap990());  // Hw::cHeap destructor (FILEMAP: Hw::cHeap::cHeap_4)
    thiscall<void>(0x00DD4B00u, heap520());  // Hw::cHeap destructor (FILEMAP: Hw::cHeap::cHeap_4)
    int index = 5;
    do {
        destroyMsgCtrl(entries()[index].readInfo);
        destroyMsgCtrl(entries()[index].msgCtrl);
        index = index - 1;
    } while (-1 < index);
}

// 00CF7580  cCkMsgDataManager::vf00  size=30  [class]
// Scalar deleting destructor.
undefined4 cCkMsgDataManager::vf00(byte flags)
{
    this->~cCkMsgDataManager();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4)this;
}

// 00CF75A0  FUN_00cf75a0  size=2043  [callgraph]
// Builds the file names of the slot's request (codec, custom, weapon or per-phase messages),
// makes the request current and starts the reads.  1 when the .dat / .dtt exist, else 0.
// __thiscall: `self` (the manager) is ECX.
undefined4 FUN_00cf75a0(int self, undefined4 *entryAddr, int reload)
{
    using namespace cCkMsgDataManager_p1;
    cCkMsgDataManager *manager = (cCkMsgDataManager *)self;
    Entry *entry = (Entry *)entryAddr;
    char path[0x80];
    char datPath[0x80];
    char dttPath[0x80];
    char wavePath[0x40];
    char wave2Path[0x40];

    int slot = entry->heapSlot;
    int datHeap = manager->heapSlots()[slot].datHeap;
    int dttHeap = manager->heapSlots()[slot].dttHeap;
    int heap2 = manager->heapSlots()[slot].heap2;
    int kind = entry->kind;
    if (kind == 3) {
        // codec messages
        int number = codecNumber(manager, entry->requestPhase);
        _sprintf_s(path, 0x80, (char *)"%sckmsg_codec_%dst.%s", "ckmsg\\", number, "dat");
        localizePath(manager, datPath, path, fileLanguage(DAT_01dc2cd8));
        number = codecNumber(manager, entry->requestPhase);
        _sprintf_s(path, 0x80, (char *)"%sckmsg_codec_%dst.%s", "ckmsg\\", number, "dtt");
        localizePath(manager, dttPath, path, fileLanguage(DAT_01dc2cd8));
        number = codecNumber(manager, entry->requestPhase);
        _sprintf_s(wavePath, 0x40, (char *)"%swaveinfo_%dst.bxm", "ckmsg\\", number);
        int wavePhase = entry->requestPhase;
        int waveLanguage = fileLanguage(DAT_01dc2cd8);
        thiscall<void>(0x00CADD10u, manager, wave2Path, 0x40, "ckmsg\\", waveLanguage, wavePhase, 1);  // FUN_00cadd10
    }
    else if (kind == 1) {
        thiscall<void>(FUN_00ce1670, manager, entry->kindParam, datPath, dttPath);
    }
    else if (kind == 2) {
        // weapon messages: newest DLC file that exists, else the base file
        int dlc = DAT_01dc2cdc;
        for (;;) {
            if (dlc < 1) {
                _sprintf_s(path, 0x80, (char *)"ckmsg\\ckmsg_weapon_mess.dat");
                localizePath(manager, datPath, path, fileLanguage(entry->requestLanguage));
                manager->weaponDatDlc() = 0;
                break;
            }
            _sprintf_s(path, 0x80, (char *)"ckmsg\\ckmsg_weapon_dlc%d.dat", dlc - 1);
            localizePath(manager, datPath, path, fileLanguage(entry->requestLanguage));
            if (fileExists(path) != 0) {
                manager->weaponDatDlc() = dlc;
                break;
            }
            dlc = dlc - 1;
        }
        _sprintf_s(manager->weaponDatPath(), 0x80, (char *)"%s", datPath);
        dlc = DAT_01dc2cdc;
        for (;;) {
            if (dlc < 1) {
                _sprintf_s(path, 0x80, (char *)"ckmsg\\ckmsg_weapon_mess.dtt");
                localizePath(manager, dttPath, path, fileLanguage(entry->requestLanguage));
                manager->weaponDttDlc() = 0;
                break;
            }
            _sprintf_s(path, 0x80, (char *)"ckmsg\\ckmsg_weapon_dlc%d.dtt", dlc - 1);
            localizePath(manager, dttPath, path, fileLanguage(entry->requestLanguage));
            if (fileExists(path) != 0) {
                manager->weaponDttDlc() = dlc;
                break;
            }
            dlc = dlc - 1;
        }
        _sprintf_s(manager->weaponDttPath(), 0x80, (char *)"%s", dttPath);
    }
    else {
        // per-phase messages
        _sprintf_s(path, 0x80, (char *)"ckmsg\\ckmsg_p%03x.dat", entry->requestPhase);
        thiscall<void>(FUN_00cca690, manager, datPath, 0x80, path, languageCode(entry->requestLanguage));
        _sprintf_s(path, 0x80, (char *)"ckmsg\\ckmsg_p%03x.dtt", entry->requestPhase);
        thiscall<void>(FUN_00cca690, manager, dttPath, 0x80, path, languageCode(entry->requestLanguage));
        _sprintf_s(wavePath, 0x40, (char *)"%swaveinfo_p%03x.bxm", "ckmsg\\", entry->requestPhase);
        int wavePhase = entry->requestPhase;
        int waveLanguage = languageCode(entry->requestLanguage);
        thiscall<void>(0x00CADD10u, manager, wave2Path, 0x40, "ckmsg\\", waveLanguage, wavePhase, 0);  // FUN_00cadd10
    }

    // make the request current (kinds 1 and 2 leave wavePath / wave2Path unset, as the original)
    entry->datData = 0;
    entry->dttData = 0;
    entry->waveData = 0;
    entry->wave2Data = 0;
    entry->wtbData = 0;
    entry->pageNoList = 0;
    entry->codecRad = 0;
    entry->phase = entry->requestPhase;
    entry->language = entry->requestLanguage;
    entry->requestPhase = 0xFFF;
    entry->requestLanguage = -1;
    entry->fieldD0 = 0;
    if (fileExists(datPath) != 0 && fileExists(dttPath) != 0) {
        if (reload == 0) {
            entry->datHandle = startRead(datPath, datHeap, heap2);
            entry->dttHandle = startRead(dttPath, dttHeap, heap2);
            if (fileExists(wavePath) != 0) {
                entry->waveHandle = startRead(wavePath, datHeap, heap2);
            }
            if (fileExists(wave2Path) != 0) {
                entry->wave2Handle = startRead(wave2Path, datHeap, heap2);
            }
            if (entry->datHandle == 0 || entry->dttHandle == 0) {
                entry->phase = 0xFFF;
                entry->language = -1;
                entry->state = -1;
            }
        }
        return 1;
    }
    entry->state = -1;
    return 0;
}

// 00CF7E60  FUN_00cf7e60  size=381  [callgraph]
// Per-frame load state machine.  Stage 0 walks the slots downwards releasing those whose request
// differs from what is loaded (FUN_00cca2e0); stage 1 walks them upwards starting the reads
// (FUN_00cf75a0) and setting the slots up when the reads are done (FUN_00cca3f0); stage 2 = done.
void __fastcall FUN_00cf7e60(int self)
{
    using namespace cCkMsgDataManager_p1;
    cCkMsgDataManager *manager = (cCkMsgDataManager *)self;
    unsigned int index = 0;
    if (manager->loadStage() == 0) {
        Entry *entry = &manager->entries()[manager->loadIndex()];
        if ((entry->requestPhase != 0xFFF && entry->phase != entry->requestPhase) ||
            (entry->requestLanguage != -1 && entry->language != entry->requestLanguage) ||
            entry->field04 != 0) {
            thiscall<void>(FUN_00cca2e0, manager, entry);  // release the slot
        }
        manager->loadIndex() = manager->loadIndex() - 1;
        if (manager->loadIndex() < 0) {
            manager->loadIndex() = 0;
            manager->loadStage() = 1;
            return;
        }
    }
    else if (manager->loadStage() == 1) {
        Entry *entry = &manager->entries()[manager->loadIndex()];
        if (entry->phase == entry->requestPhase && entry->language == entry->requestLanguage &&
            entry->field04 == 0) {
            entry->state = -1;
        }
        else {
            int state = entry->state;
            if (state != -1) {
                if (state == 0) {
                    if (FUN_00cf75a0(self, (undefined4 *)entry, 0) == 0) {
                        return;
                    }
                    entry->state = entry->state + 1;
                    return;
                }
                if (state != 1) {
                    return;
                }
                int handles[4];
                handles[0] = entry->datHandle;
                handles[1] = entry->dttHandle;
                handles[2] = entry->waveHandle;
                handles[3] = entry->wave2Handle;
                do {
                    int handle = handles[index];
                    if (handle != 0) {
                        if (thiscall<int>(FUN_00e9cf60, fileLoader(), handle) == 0) {
                            if (thiscall<int>(FUN_00e9d060, fileLoader(), handle) == 0) {
                                break;  // still reading
                            }
                            cdeclcall<void>(FUN_00dd5650, DAT_016b91f0);
                        }
                        else if (thiscall<int>(FUN_00e9cfe0, fileLoader(), handle) != 0) {
                            goto next;
                        }
                        thiscall<void>(FUN_00cca2e0, manager, entry);  // release the slot
                        break;
                    }
                next:
                    index = index + 1;
                } while (index < 4);
                if (index < 3) {
                    return;
                }
                FUN_00cca3f0((undefined4 *)entry, 0);  // ECX: the manager
                return;
            }
        }
        manager->loadIndex() = manager->loadIndex() + 1;
        if (4 < manager->loadIndex()) {
            manager->field08() = 0;
            manager->loadStage() = 2;
        }
    }
}
