// src/managers/contentsmanager/ContentsManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ContentsManagerImplement.h"

// kernel32
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);

namespace ContentsManagerImplement_p1 {

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// lib::Array<content*> header: vftable, element data, element count.
struct ContentArray {
    void *vftable;
    int *data;           // +0x4
    unsigned int count;  // +0x8
};

} // namespace ContentsManagerImplement_p1

// 008DF6D0  ContentsManagerImplement::vf10  size=44  [class]
undefined4 ContentsManagerImplement::nextId()
{
    undefined4 id;

    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    idCounter() = idCounter() + 1;
    id = idCounter();
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
    return id;
}

// 008DF700  ContentsManagerImplement::vf04  size=51  [class]
void ContentsManagerImplement::vf04()
{
    using namespace ContentsManagerImplement_p1;
    int *it;

    it = ((ContentArray *)contents())->data;
    if (it != it + ((ContentArray *)contents())->count) {
        do {
            vcall<void>((int *)*it, 0xc);  // content->vf0C()
            it = it + 1;
        } while (it != (int *)((int)((ContentArray *)contents())->data +
                               ((ContentArray *)contents())->count * 4));
    }
}

// 008DF740  ContentsManagerImplement::vf08  size=64  [class]
void ContentsManagerImplement::addContent(int *content)
{
    using namespace ContentsManagerImplement_p1;
    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    vcall<void>(content, 0x8);             // content->vf08()
    vcall<void>(contents(), 0x8, &content);  // lib::Array::vf08 (append *arg)
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 008DF800  ContentsManagerImplement::vf00  size=30  [class]
undefined4 *ContentsManagerImplement::vf00(byte flags)
{
    dtor_008DF780();  // ContentsManager::ContentsManager (this class's destructor body)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 008DF870  ContentsManagerImplement::vf0C  size=179  [class]
void ContentsManagerImplement::removeContent(int id)
{
    using namespace ContentsManagerImplement_p1;
    ContentArray *array;
    int *end;
    int *content;
    unsigned int count;
    int data;
    int *it;

    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    array = (ContentArray *)contents();
    it = array->data;
    if (it != it + array->count) {
        end = it + array->count;
        do {
            content = (int *)*it;
            if (content[2] == id) {
                vcall<void>(content, 0x10);  // content->vf10()
                array = (ContentArray *)contents();
                count = array->count;
                data = (int)array->data;
                end = (int *)(data + count * 4);
                if (it != end && data != 0 && count != 0 && (unsigned int)(((int)it - data) >> 2) < count) {
                    for (; it != end + -1; it = it + 1) {
                        *it = it[1];
                    }
                    array->count = array->count + -1;
                }
                vcall<void>(content, 0x4, 1);  // content: scalar deleting destructor
                break;
            }
            it = it + 1;
        } while (it != end);
    }
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
}
