// src/misc/cCutJobList.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D8CD30..00D8CD30, 1 functions

#include "types.h"

// 00D8CD30  cCutJobList::entryObject  size=103  [class]
undefined4 __thiscall
cCutJobList::entryObject
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5,
          undefined2 param_6)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = (undefined4 *)FUN_00d8b110();
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = param_2;
      puVar1[3] = param_4;
      puVar1[2] = param_3;
      *(undefined2 *)((int)puVar1 + 0x12) = param_6;
      *(undefined2 *)(puVar1 + 4) = param_5;
      FUN_00d8ad30(puVar1);
      return 1;
    }
  }
  FUN_00dd5650(&DAT_016c27e8);
  return 0;
}

