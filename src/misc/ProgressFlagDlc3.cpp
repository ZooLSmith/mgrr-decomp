// src/misc/ProgressFlagDlc3.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C82A40..00C88F10, 3 functions

#include "mgrr.h"
#include "ProgressFlagDlc3.h"

// 00C82A40  ProgressFlagDlc3::SAVE  size=141  [class]
undefined1 __fastcall ProgressFlagDlc3::SAVE(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_10 [4];
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 < 4) {
    uVar2 = 0;
    local_10[0] = 0;
    local_10[1] = 0;
    local_10[2] = 0;
    local_10[3] = 0;
    if (uVar1 != 0) {
      do {
        bVar3 = uVar2 < uVar1;
        if (!bVar3) break;
        local_10[uVar2] = *(undefined4 *)(*(int *)(param_1 + 8) + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
      if (bVar3) {
        DAT_01b77df4 = local_10[0];
        DAT_01b77df8 = local_10[1];
        DAT_01b77dfc = local_10[2];
        DAT_01b77e00 = local_10[3];
        return 1;
      }
    }
  }
  else {
    FUN_00dd5650(&DAT_016ac3c8);
  }
  return 0;
}

// 00C82AD0  ProgressFlagDlc3::LOAD  size=124  [class]
/* decompilation failed: 
Low-level Error: Conditional execution: Illegal op in iblock */

// 00C88F10  ProgressFlagDlc3::vf00  size=39  [class]
undefined4 * __thiscall ProgressFlagDlc3::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = ProgressFlagBase_Dlc::vftable;
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

