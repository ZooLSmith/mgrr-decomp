// src/misc/NinjaRunEventPhantomListener.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00957D20..00957DC0, 3 functions

#include "types.h"

// 00957D20  NinjaRunEventPhantomListener::vf04  size=3  [class]
void NinjaRunEventPhantomListener::vf04(void)

{
  return;
}

// 00957D30  NinjaRunEventPhantomListener::vf00  size=63  [class]
void NinjaRunEventPhantomListener::vf00(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(char *)(iVar1 + 0x18) == '\x02') {
    FUN_008f7780(*(char *)(iVar1 + 0x10) + iVar1);
    piVar2 = (int *)FUN_00c13920();
    (**(code **)(*piVar2 + 0x28))(0);
    FUN_00a7c8a0();
  }
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

// 00957DC0  NinjaRunEventPhantomListener::vf08  size=47  [class]
undefined4 * __thiscall NinjaRunEventPhantomListener::vf08(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpPhantomOverlapListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

