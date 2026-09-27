// src/managers/triggermanager/actions/TrgActTask.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"

extern char DAT_016aa99c[];  // debug message: action has no record
extern char DAT_016aa970[];  // debug message: no task name
extern char DAT_016aa938[];  // debug message: no task manager
extern char DAT_016aa904[];  // debug message format: task %s failed

// Trigger::Act::TASK is the vf18 ("execute") body of the matching Trigger::cAct* action:
// ECX = the action object; action[1] = its record (record[1] = action type, parameters from +0x08).
namespace Trigger { namespace Act {
int __fastcall TASK(int *action);
} }

namespace TrgActTask_p1 {

typedef void (*DebugPrintFn)(const void *format, ...);
const DebugPrintFn debugPrint = (DebugPrintFn)FUN_00dd5650;  // debug printf (empty in release)

} // namespace TrgActTask_p1

// 00C7EF00  Trigger::Act::TASK  size=154  [class]
int __fastcall Trigger::Act::TASK(int *action)
{
    using namespace TrgActTask_p1;
    if (action[1] == 0) {
        debugPrint(DAT_016aa99c);
        return 0;
    }
    char *taskName = (char *)action[1] + 8;
    if (taskName == 0) {
        debugPrint(DAT_016aa970);
        return 0;
    }
    int *manager = (int *)FUN_00a6dd90();
    int *taskManager = (*(int *(__thiscall **)(int *))((char *)manager[0] + 0x30))(manager);
    if (taskManager == 0) {
        debugPrint(DAT_016aa938);
        return 0;
    }
    int (__thiscall *taskFunction)(int *, char *);
    if (((int *)action[1])[1] == 0x52) {  // action type 0x52
        taskFunction = *(int (__thiscall **)(int *, char *))((char *)taskManager[0] + 0x38);
    }
    else {
        taskFunction = *(int (__thiscall **)(int *, char *))((char *)taskManager[0] + 0x34);
    }
    int result = taskFunction(taskManager, taskName);
    if (result == 0) {
        debugPrint(DAT_016aa904, taskName);
        return 0;
    }
    return 1;
}
