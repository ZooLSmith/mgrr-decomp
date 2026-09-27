// src/managers/triggermanager/cActAnimation.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActAnimation.h"

extern undefined DAT_01dbe09c;  // cActAnimation static descriptor returned by vf00
extern char DAT_01b7bd48[];  // default heap (second argument of FUN_00dd3500)
extern char DAT_016b0f9c[];  // debug message: unknown animation action type
extern char DAT_016b1124[];  // debug message: %s has no record
extern char DAT_016b10fc[];  // debug message: %s has no target
extern char DAT_016b108c[];  // debug message: %s: no object named %s
extern char DAT_016b10c4[];  // debug message: %s: no object with number %d
extern char DAT_016b102c[];  // debug message: %s: null handle (by name)
extern char DAT_016b105c[];  // debug message: %s: null handle (by number)
extern char DAT_016b0fc4[];  // debug message: %s: animation failed (by name)
extern char DAT_016b0ff8[];  // debug message: %s: animation failed (by number)

namespace cActAnimation_p1 {

// object-handle list filled by the lookup functions (inline storage for 16 handles)
struct HandleList {
    unsigned int unknown00;
    int *data;          // points at the inline storage unless grown
    int capacity;
    int count;
    int heapAllocated;  // nonzero: data must be freed with FUN_00dd48d0
};

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

// FUN_00c77fc0: collect the objects whose name matches.
inline int findObjectsByName(char *name, HandleList *list)
{
    return ((int (*)(char *, HandleList *))FUN_00c77fc0)(name, list);
}
// FUN_00a814d0: collect the objects with the given number (?).
inline void findObjectsByNumber(HandleList *list, int number)
{
    ((void (*)(HandleList *, int))FUN_00a814d0)(list, number);
}
// FUN_00c959c0: collect the objects matching name and number.
inline void findObjectsByNameAndNumber(char *name, int number, HandleList *list)
{
    ((void (*)(char *, int, HandleList *))FUN_00c959c0)(name, number, list);
}
// FUN_00a7c8a0: handle -> object (ECX argument not recovered by the decompiler).
inline int handleToObject()
{
    return ((int (*)())FUN_00a7c8a0)();
}
inline int isPlayerCharacter(int characterId)  // FUN_009f9350 ?
{
    return ((int (*)(int))FUN_009f9350)(characterId);
}
inline int *allocTask(unsigned int size)  // FUN_00dd3500: heap allocation
{
    return ((int *(*)(unsigned int, char *))FUN_00dd3500)(size, DAT_01b7bd48);
}
inline void taskSetTarget(int handle)  // FUN_00c83e90 (cTriggerTask_PlAnim; ECX not recovered)
{
    ((void (*)(int))FUN_00c83e90)(handle);
}
inline char registerTask(int *task)  // FUN_00c84760
{
    return ((char (*)(int *))FUN_00c84760)(task);
}
inline void prepareMotion()  // FUN_00a92f90 (ECX not recovered)
{
    ((void (*)())FUN_00a92f90)();
}
inline int findMotion(char *motionName)  // FUN_00e33270
{
    return ((int (*)(char *))FUN_00e33270)(motionName);
}
inline int currentMotionFrame(char *motionName)  // FUN_00a957d0 ? (int result converted to float below)
{
    return ((int (*)(char *))FUN_00a957d0)(motionName);
}
inline int motionFrameCount(int motionIndex)  // FUN_00a957b0 ? (int result converted to float below)
{
    return ((int (*)(int))FUN_00a957b0)(motionIndex);
}
// 00AA4940: start a motion; returns the motion index or -1.
// Word arguments are the raw bit patterns (0x3e4ccccd = 0.2f, 0x3f800000 = 1.0f).
inline int playMotion(char *motionName, int motionIndex, unsigned int blend, unsigned int speed,
                      int unknown, float frame, unsigned int rate)
{
    return ((int (*)(char *, int, unsigned int, unsigned int, int, float, unsigned int))0x00AA4940)(
        motionName, motionIndex, blend, speed, unknown, frame, rate);
}
// FUN_00a9f2b0 (Behavior.cpp), called with the 7 arguments the decompiler shows.
inline int playMotionAt(char *motionName, int motionIndex, int unknown2, unsigned int speed,
                        int unknown4, float frame, int unknown6)
{
    return ((int (*)(char *, int, int, unsigned int, int, float, int))FUN_00a9f2b0)(
        motionName, motionIndex, unknown2, speed, unknown4, frame, unknown6);
}
inline void reportFailure()  // FUN_00948120 (ECX not recovered)
{
    ((void (*)())FUN_00948120)();
}

} // namespace cActAnimation_p1

// 00C89DD0  Trigger::cActAnimation::vf08  size=1  [class]
void Trigger::cActAnimation::vf08()
{
}

// 00C89DE0  Trigger::cActAnimation::vf0C  size=1  [class]
void Trigger::cActAnimation::vf0C()
{
}

// 00C89DF0  Trigger::cActAnimation::vf10  size=1  [class]
void Trigger::cActAnimation::vf10()
{
}

// 00C89E00  Trigger::cActAnimation::vf14  size=1  [class]
void Trigger::cActAnimation::vf14()
{
}

// 00C91E30  Trigger::cActAnimation::vf00  size=6  [class]
void *Trigger::cActAnimation::vf00()
{
    return &DAT_01dbe09c;
}

// 00C91E40  Trigger::cActAnimation::vf04  size=31  [class]
Trigger::cActAnimation *Trigger::cActAnimation::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C968D0  Trigger::cActAnimation::vf18  size=990  [class]
int Trigger::cActAnimation::vf18()
{
    using namespace cActAnimation_p1;
    int *rec = record();
    int actionType = rec[1];
    const char *commandName;
    HandleList list;
    int storage[16];

    if (actionType == 0) {
        commandName = "ANIM";
    }
    else if (actionType == 7) {
        commandName = "ANIM_LAST";
    }
    else {
        if (actionType != 0x4d) {
            debugPrint(DAT_016b0f9c);
            return false;
        }
        commandName = "PL_ANIM";
    }
    if (rec == 0) {
        debugPrint(DAT_016b1124, commandName);
        return false;
    }
    char *targetName = (char *)rec + 0xc;
    if (rec[2] == -1 && targetName[0] == '\0') {  // inlined strlen == 0
        debugPrint(DAT_016b10fc, commandName);
        return false;
    }
    list.data = storage;
    list.unknown00 = 0;
    list.capacity = 0x10;
    list.count = 0;
    list.heapAllocated = 0;
    int targetNumber = rec[2];
    if (targetNumber == -1) {
        findObjectsByName(targetName, &list);
    }
    else if (targetName[0] == '\0') {  // inlined strlen == 0
        findObjectsByNumber(&list, targetNumber);
    }
    else {
        findObjectsByNameAndNumber(targetName, targetNumber, &list);
    }
    if (list.count == 0) {
        if (targetNumber == -1) {
            debugPrint(DAT_016b108c, commandName, targetName);
        }
        else {
            debugPrint(DAT_016b10c4, commandName, rec[2]);
        }
        reportFailure();
        return false;
    }

    char *motionName = (char *)rec + 0x1c;
    bool ok = true;
    for (int i = 0; i < list.count; i++) {
        int handle = list.data[i];
        int messageArg = (int)targetName;
        const char *message;
        int object;
        int motionIndex;

        if (handle == 0) {
            if (rec[2] == -1) {
                message = DAT_016b102c;
            }
            else {
                message = DAT_016b105c;
                messageArg = rec[2];
            }
            goto report;
        }
        object = handleToObject();  // ? ECX = handle
        if (object == 0) {
            goto failed;
        }
        if (record()[1] == 0x4d) {  // PL_ANIM: hand the animation to a cTriggerTask_PlAnim
            ok = false;
            if (isPlayerCharacter(*(int *)(object + 0x4b0) /* object+0x4B0: ? */) == 1) {
                int *memory = allocTask(0x10);
                int *task = 0;
                if (memory != 0) {
                    memory[1] = 0;
                    memory[2] = 0;
                    memory[3] = 0;
                    memory[0] = 0x016A891C;  // Trigger::cTriggerTask_PlAnim::vftable
                    task = memory;
                }
                (*(void (__thiscall **)(int *))((char *)task[0] + 4))(task);
                taskSetTarget(handle);
                task[1] = record()[1];
                char registered = registerTask(task);
                if (registered == '\0') {
                    (*(void (__thiscall **)(int *, int))task[0])(task, 1);  // scalar deleting destructor
                }
                ok = registered != '\0';
            }
        }
        if (blendFromCurrent() != 0) {
            prepareMotion();  // ? ECX = object
            int currentIndex = findMotion(motionName);
            if (currentIndex != -1) {
                int frame = currentMotionFrame(motionName);
                if ((float)frame != 0.0) {
                    playMotion(motionName, currentIndex, 0x3e4ccccd, 0x3f800000, 0, (float)frame, 0x3f800000);
                }
            }
        }
        if (record()[1] == 7) {  // ANIM_LAST: jump to the last frame
            motionIndex = playMotion(motionName, 0, 0x3e4ccccd, 0x3f800000, 0, -1.0f /* 0xbf800000 */, 0x3f800000);
            if (motionIndex == -1) {
                goto failed;
            }
            int frameCount = motionFrameCount(motionIndex);
            motionIndex = playMotionAt(motionName, motionIndex, 0, 0x3f800000, 0, (float)frameCount, 0);
        }
        else {
            motionIndex = playMotion(motionName, 0, 0x3e4ccccd, 0x3f800000, 0, -1.0f /* 0xbf800000 */, 0x3f800000);
        }
        if (motionIndex != -1) {
            continue;
        }
failed:
        if (rec[2] == -1) {
            message = DAT_016b0fc4;
        }
        else {
            message = DAT_016b0ff8;
            messageArg = rec[2];
        }
report:
        debugPrint(message, commandName, messageArg);
        ok = false;
    }
    if (list.data != 0) {
        list.count = 0;
        if (list.heapAllocated != 0) {
            FUN_00dd48d0((int)list.data, 0);
        }
    }
    return ok;
}
