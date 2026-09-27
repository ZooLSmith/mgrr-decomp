// src/unsorted/unit_009068D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009068D0..00906A00, 4 functions

#include "mgrr.h"

// 009068D0  FUN_009068d0  size=59  [run]
void __fastcall FUN_009068d0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  (**(code **)(*param_1 + 0x14))();
  FUN_009060a0(param_1 + 8,param_1 + 0x18);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
  param_1[0x30] = param_1[8];
  param_1[0x31] = param_1[9];
  param_1[0x32] = param_1[10];
  param_1[0x33] = param_1[0xb];
  param_1[0x34] = param_1[0xc];
  param_1[0x35] = param_1[0xd];
  param_1[0x36] = param_1[0xe];
  param_1[0x37] = param_1[0xf];
                    /* WARNING: Could not recover jumptable at 0x00906909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00906910  FUN_00906910  size=83  [run]
void __fastcall FUN_00906910(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x14))();
  FUN_00906150(param_1 + 8,param_1 + 0x18);
  pcVar1 = *(code **)(*param_1 + 0x10);
  param_1[0xe0] = param_1[8];
  param_1[0xe1] = param_1[9];
  param_1[0xe2] = param_1[10];
  param_1[0xe3] = param_1[0xb];
  param_1[0xe4] = param_1[0xc];
  param_1[0xe5] = param_1[0xd];
  param_1[0xe6] = param_1[0xe];
  param_1[0xe7] = param_1[0xf];
  (*pcVar1)();
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 != 0) {
    FUN_0112c170();
    return;
  }
  return;
}

// 00906970  FUN_00906970  size=76  [run]
void __thiscall FUN_00906970(int *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x14))();
  iVar1 = 0;
  if (-param_1[0x11] != -0x10 && -1 < -param_1[0x11] + 0x10) {
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10 - param_1[0x11]);
  }
  param_1[0x11] = 0x10;
  *param_2 = param_1[8] + 0x10;
  param_2[2] = 0x10;
  param_2[1] = param_1[0x10];
  param_2[3] = 0;
  return;
}

// 00906A00  FUN_00906a00  size=334  [run]
void __fastcall FUN_00906a00(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  (**(code **)(*param_1 + 0x14))();
  iVar4 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  puVar3 = *(undefined4 **)(DAT_01885d20 + 0x70);
  uStack_60 = *puVar3;
  uStack_5c = puVar3[1];
  uStack_58 = puVar3[2];
  iStack_54 = puVar3[3];
  uStack_50 = puVar3[4];
  uStack_4c = puVar3[5];
  uStack_48 = puVar3[6];
  uStack_40 = puVar3[8];
  uStack_3c = puVar3[9];
  uStack_38 = puVar3[10];
  uStack_34 = puVar3[0xb];
  uStack_30 = puVar3[0xc];
  uStack_2c = puVar3[0xd];
  uStack_28 = puVar3[0xe];
  uStack_24 = puVar3[0xf];
  uStack_20 = puVar3[0x10];
  uStack_1c = puVar3[0x11];
  uStack_18 = puVar3[0x12];
  uStack_14 = puVar3[0x13];
  if ((float)param_1[0x74] == 0.0) {
    iStack_54 = param_1[0x74];
  }
  LthkpWorld::getClosestPoints(param_1[8] + 0x10,&uStack_60,param_1 + 0xc);
  if ((DAT_01885d68 != 1) &&
     (iVar4 = *(int *)((int)ThreadLocalStoragePointer + iVar4 * 4), *(int *)(iVar4 + 4) == 0)) {
    piVar1 = (int *)(iVar4 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  (**(code **)(*param_1 + 0x10))();
  if (param_1[9] != 0) {
    FUN_010060a0();
  }
  param_1[9] = param_1[8];
  param_1[8] = 0;
  return;
}

