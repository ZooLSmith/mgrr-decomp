// src/unsorted/unit_00D6CAF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D6CAF0..00D6CAF0, 1 functions

#include "mgrr.h"

// 00D6CAF0  FUN_00d6caf0  size=403  [run]
void __fastcall FUN_00d6caf0(int param_1)

{
  int iVar1;
  
LAB_00d6cb00:
  do {
    switch(*(undefined4 *)(param_1 + 4)) {
    default:
      goto switchD_00d6cb0c_caseD_0;
    case 1:
      iVar1 = FUN_00d4dab0();
      break;
    case 2:
      iVar1 = FUN_00d4db10();
      break;
    case 3:
      iVar1 = FUN_00d666e0();
      break;
    case 4:
      iVar1 = FUN_00d58b40();
      break;
    case 5:
      iVar1 = FUN_00d4db70();
      break;
    case 6:
      iVar1 = FUN_00d4dbf0();
      break;
    case 7:
      iVar1 = FUN_00d4dc40();
      break;
    case 8:
      iVar1 = FUN_00d5e1a0();
      break;
    case 9:
      iVar1 = FUN_00d58c80();
      break;
    case 10:
      iVar1 = FUN_00d4dc90();
      break;
    case 0xb:
      iVar1 = FUN_00d4dd10();
      break;
    case 0xc:
      FUN_00a50650();
      *(undefined4 *)(param_1 + 4) = 0xd;
      goto switchD_00d6cb0c_caseD_0;
    case 0xd:
      goto switchD_00d6cb0c_caseD_d;
    case 0xe:
      FUN_00a496c0();
      *(undefined4 *)(param_1 + 4) = 0xf;
      goto switchD_00d6cb0c_caseD_0;
    case 0xf:
      iVar1 = FUN_00a496d0();
      if (iVar1 != 0) {
switchD_00d6cb0c_caseD_d:
        if (*(int *)(param_1 + 0x34) != -1) {
          (**(code **)(*DAT_01dc51c0 + 0x10))();
        }
        *(undefined4 *)(param_1 + 4) = 0x10;
      }
      goto switchD_00d6cb0c_caseD_0;
    case 0x10:
      if ((*(int *)(param_1 + 0x34) != -1) &&
         (iVar1 = (**(code **)(*DAT_01dc51c0 + 0x18))(), iVar1 == 0)) goto switchD_00d6cb0c_caseD_0;
      *(undefined4 *)(param_1 + 4) = 0x11;
      goto LAB_00d6cb00;
    case 0x11:
      iVar1 = FUN_00d4de50();
      break;
    case 0x12:
      iVar1 = FUN_00d5e590();
      break;
    case 0x13:
      iVar1 = FUN_00d58ce0();
      break;
    case 0x14:
      iVar1 = FUN_00a4c770(0xfffffffe);
      if (iVar1 == 0) goto switchD_00d6cb0c_caseD_0;
      FUN_00a50280();
      *(undefined4 *)(param_1 + 4) = 0x15;
      goto LAB_00d6cb00;
    case 0x15:
      iVar1 = FUN_00a4c810(0xfffffffe);
      if (iVar1 == 0) goto switchD_00d6cb0c_caseD_0;
      *(undefined4 *)(param_1 + 4) = 0x16;
      goto LAB_00d6cb00;
    case 0x16:
      iVar1 = FUN_00d5e5e0();
    }
    if (iVar1 == 0) {
switchD_00d6cb0c_caseD_0:
                    /* WARNING: Could not recover jumptable at 0x00d6cc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*DAT_01dc51c0)();
      return;
    }
  } while( true );
}

