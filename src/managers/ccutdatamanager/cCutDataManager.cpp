// src/managers/ccutdatamanager/cCutDataManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
// The raw file includes no class header (none was generated for cCutDataManager); the refined
// header written for this file declares the class.
#include "cCutDataManager.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// "cCutDataManager::entryData(): could not allocate a data area after cutting." (Shift-JIS, translated)
extern const char DAT_016c2858[];

namespace cCutDataManager_p1 {

typedef cCutDataManager::CutDataWork CutDataWork;

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

}  // namespace cCutDataManager_p1

// 00D8D310  cCutDataManager::entryData  size=167  [class]
uint cCutDataManager::entryData()
{
    using namespace cCutDataManager_p1;
    if (works() != 0) {
        CutDataWork *work = thiscall<CutDataWork *>(FUN_00d8b200, freeList());  // pop
        if (work != 0) {
            work->field000 = 0;
            FUN_00a15130((int)work->sub010);
            FUN_00a16570((int)work->sub110);
            CutDataWork *pool = works();
            uint index;
            if (work < pool || pool + workCount() <= work) {
                index = 0xFFFFFFFF;
            }
            else {
                index = (uint)((char *)work - (char *)pool) / 0x210;
            }
            work->field1F8 = 0;
            work->field1FC = 0;
            work->field1F0 = 0;
            work->field1F4 = 1;
            thiscall<void>(FUN_00d8ae30, activeList(), work);  // push
            return index;
        }
    }
    cdeclcall<void>(FUN_00dd5650, DAT_016c2858);
    return 0xFFFFFFFF;
}
