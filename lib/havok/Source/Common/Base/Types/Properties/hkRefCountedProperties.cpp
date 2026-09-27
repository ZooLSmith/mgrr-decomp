// lib/havok/Source/Common/Base/Types/Properties/hkRefCountedProperties.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01023050..01023050, 1 functions

#include "types.h"

// 01023050  FUN_01023050  size=175  [__FILE__]
void __thiscall FUN_01023050(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_210 [524];
  
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    piVar1 = (int *)(*(int *)(param_1 + 8) + iVar2 * 8);
    if (*(short *)(*(int *)(param_1 + 8) + 4 + iVar2 * 8) == (short)param_2) {
      if (param_3 != 0) {
        FUN_01006000();
      }
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = param_3;
    }
  }
  hkErrStream::hkErrStream(local_210,0x200);
  pcVar3 = " among the existing properties!";
  FUN_01018d00("Failed to locate key ");
  FUN_01018d70(param_2);
  FUN_01018d00(pcVar3);
  (**(code **)(*DAT_01f8fc58 + 0xc))
            (1,0x1d11daed,local_210,
             "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Base\\Types\\Properties\\hkRefCountedProperties.cpp"
             ,0x54);
  hkBaseObject::hkBaseObject_38();
  return;
}

