// src/managers/triggermanager/actions/TrgActPlAnim.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016ac878[];  // debug message: action has no parameter block
extern char DAT_016ac850[];  // debug message: parameter block +0x8 is null
extern char DAT_016ac824[];  // debug message: no animation name
extern char DAT_016ac798[];  // debug message: the animation task could not be registered
extern char DAT_016ac750[];  // debug message: player %s cannot play animation %s
extern char DAT_016ac7e0[];  // debug message: no player (%d)
extern char DAT_01b7bd48[];  // default heap (second argument of FUN_00dd3500)

namespace Trigger { namespace Act {
bool __fastcall PL_ANIM(int *action);
} }

namespace TrgActPlAnim_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
template <class... A> inline void debugPrint(const char *format, A... args)
{
    typedef void (__cdecl *Fn)(const char *, ...);
    ((Fn)FUN_00dd5650)(format, args...);
}

// Callees whose generated prototype does not match the raw call site are invoked through
// call<Sig>(fn)(args...) with exactly the raw arguments. "ECX: ?" marks an unrecovered register.
template <class Sig, class Fn> inline Sig call(Fn *fn) { return (Sig)(void *)fn; }

// __thiscall call of the virtual function at byte offset `slot` of obj's vftable
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// 00AA4940 (no prototype generated): plays an animation by name, -1 on failure.
typedef int (*PlayAnimationFn)(char *name, int param2, float blend, float speed, int param5,
                               float param6, float param7);
inline PlayAnimationFn playAnimation() { return (PlayAnimationFn)0x00AA4940; }

const unsigned int cTriggerTask_PlAnim_vftable = 0x016A891C;  // Trigger::cTriggerTask_PlAnim::vftable

const int ACT_PL_ANIM_SEQ = 0x51;  // compared against params+0x4: play <name>.mot with <name>_0_seq.bxm
const int ACT_PL_ANIM     = 0x4D;  // compared against params+0x4: play animation <name>

// The two words at action/params on the stack are reused as a 5-byte text buffer.
union SavedWords {
    struct {
        int         *action;  // local_2c
        unsigned int params;  // local_28
    } saved;
    char text[8];
};

inline void clearPath(char *path)
{
    for (int i = 0; i < 0x20; i++) {
        path[i] = '\0';
    }
}

}  // namespace TrgActPlAnim_p1

// 00C87830  Trigger::Act::PL_ANIM  size=703  [class]
// Makes the player play the animation named at params+0x18 through a cTriggerTask_PlAnim.
bool __fastcall Trigger::Act::PL_ANIM(int *action)
{
    using namespace TrgActPlAnim_p1;
    char *playerName;  // params+0x8 (raw: uStack_34; machine code passes [esp+0x14] = params+8)
    SavedWords work;
    char path[32];
    unsigned int params = (unsigned int)action[1];  // +0x4 parameter block
    work.saved.action = action;
    work.saved.params = params;
    if (params == 0) {
        debugPrint(DAT_016ac878);
        return false;
    }
    if (params == 0xfffffff8) {  // params + 0x8 == null
        debugPrint(DAT_016ac850);
        return false;
    }
    playerName = (char *)(params + 8);
    char *animName = (char *)(params + 0x18);
    if (animName == 0) {
        debugPrint(DAT_016ac824);
        return false;
    }
    int *entityManager = (int *)FUN_00c13920();  // DAT_01bea100
    int player = vcall<int>(entityManager, 0x28, 0);
    if (player != 0) {
        int behavior = FUN_00a7c8a0(player);  // machine code: ECX = player
        int playerClassId = *(int *)(behavior + 0x4b0);
        int classId = FUN_009fde60(playerName);
        if (playerClassId == classId) {
            // inlined new Trigger::cTriggerTask_PlAnim
            int *newTask = (int *)call<void *(*)(int, char *)>(FUN_00dd3500)(0x10, DAT_01b7bd48);
            int *task = 0;
            if (newTask != 0) {
                newTask[1] = 0;
                newTask[2] = 0;
                newTask[3] = 0;
                newTask[0] = (int)cTriggerTask_PlAnim_vftable;
                task = newTask;
            }
            vcall<void>(task, 4);  // cTriggerTask_PlAnim::vf04 (00C775C0)
            call<void (*)(int)>(FUN_00c83e90)(player); /* ECX: ? */
            // machine code: action->params->+0x4 (raw decompilation mis-tracked the stack here)
            task[1] = *(int *)(params + 4);
            char registered = (char)call<bool (*)(int *)>(FUN_00c84760)(task); /* ECX: ? */
            if (registered == '\0') {
                vcall<void>(task, 0, 1);  // scalar deleting destructor
            }
            bool played;
            if (registered != '\0') {
                // params+0x4 action id (machine code reads [params+4]; raw showed action+4)
                int actionId = *(int *)(params + 4);
                if (actionId == ACT_PL_ANIM_SEQ) {
                    *(int *)work.text = 0;
                    work.saved.params = work.saved.params & 0xffffff00;
                    // skip to the first '_' of the name and take the 4 characters after it
                    char c = *animName;
                    char *p = animName;
                    while (c != '_') {
                        p = p + 1;
                        c = *p;
                    }
                    _strncpy_s(work.text, 5, p + 1, 4);
                    clearPath(path);
                    _sprintf_s(path, 0x20, (char *)"%s.mot", animName);
                    int motion = call<int (*)(char *)>(FUN_00de4500)(path); /* ECX: ? */
                    clearPath(path);
                    _sprintf_s(path, 0x20, (char *)"%s_0_seq.bxm", animName);
                    int sequence = call<int (*)(char *)>(FUN_00de4500)(path); /* ECX: ? */
                    call<void (*)(int, int, int, int, float, int, float, float, char *)>(FUN_00bc2600)(
                        motion, sequence, 0, 0, 1.0f, 0, -1.0f, 1.0f, work.text); /* ECX: ? */
                    call<void (*)(int, int, int)>(FUN_00a96070)(0, 0x8000000, 1); /* ECX: ? */
                    return true;
                }
                if (actionId != ACT_PL_ANIM) {
                    return registered != '\0';
                }
                int animId = playAnimation()(animName, 0, 0.2f, 1.0f, 0, -1.0f, 1.0f); /* ECX: ? */
                played = animId != -1;
            }
            else {
                debugPrint(DAT_016ac798);
                played = false;
            }
            if (played != false) {
                return played;
            }
        }
        debugPrint(DAT_016ac750, playerName, animName);
        return false;
    }
    debugPrint(DAT_016ac7e0, 0);
    return false;
}
