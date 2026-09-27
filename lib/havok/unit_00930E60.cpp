// lib/havok/unit_00930E60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00930E60..00930E60, 1 functions

#include "mgrr.h"
#include "hkpWorldCinfo.h"

// 00930E60  hkpWorldCinfo::hkpWorldCinfo_2  size=332  [run]
undefined4 __fastcall hkpWorldCinfo::hkpWorldCinfo_2(int *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uStack_108;
  undefined **appuStack_104 [5];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_d8;
  undefined1 local_d7;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a4;
  int iStack_9c;
  undefined1 local_27;
  
  hkpWorldCinfo();
  FUN_011c00b0(1);
  local_f0 = 0;
  uStack_ec = 0xc11ccccd;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_d7 = 1;
  FUN_011c0430(0x457a0000);
  local_b0 = 0x3c23d70a;
  local_d8 = 2;
  if (DAT_01b35fa8 != 0) {
    local_27 = 3;
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x380);
  *(undefined2 *)(iVar2 + 4) = 0x380;
  iVar2 = hkpDefaultConvexListFilter::hkpDefaultConvexListFilter(appuStack_104,&LAB_0132dbdc);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_0164e9ac);
    appuStack_104[0] = vftable;
    if (iStack_9c != 0) {
      FUN_010060a0();
    }
    iStack_9c = 0;
    if (iStack_ac != 0) {
      FUN_010060a0();
    }
    iStack_ac = 0;
    if (local_b0 != 0) {
      FUN_010060a0();
    }
    return 0;
  }
  FUN_01192390();
  uStack_108 = 0;
  FUN_01192540(&uStack_108,0);
  if (iStack_a4 != 0) {
    FUN_010060a0();
  }
  iStack_a4 = 0;
  if (iStack_b4 != 0) {
    FUN_010060a0();
  }
  iStack_b4 = 0;
  if (iStack_b8 != 0) {
    FUN_010060a0();
  }
  return 1;
}

