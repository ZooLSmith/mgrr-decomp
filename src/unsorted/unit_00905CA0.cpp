// src/unsorted/unit_00905CA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00905CA0..00905D10, 5 functions

#include "mgrr.h"

// 00905CA0  FUN_00905ca0  size=15  [run]
void __fastcall FUN_00905ca0(int param_1)

{
  *(undefined1 *)(param_1 + 0x16) = 0;
                    /* WARNING: Could not recover jumptable at 0x00905cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x28) + 8))();
  return;
}

// 00905CB0  FUN_00905cb0  size=44  [run]
void __fastcall FUN_00905cb0(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[5] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 != 0) {
      FUN_00905560(param_1[0xe]);
    }
                    /* WARNING: Could not recover jumptable at 0x00905cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
  return;
}

// 00905CE0  FUN_00905ce0  size=13  [run]
void __fastcall FUN_00905ce0(int *param_1)

{
  if (*param_1 != 0) {
    *(undefined2 *)(*param_1 + 0x1a) = 1;
  }
  return;
}

// 00905CF0  FUN_00905cf0  size=26  [run]
void __thiscall FUN_00905cf0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 0x10) = param_1;
  }
  *param_2 = 0;
  return;
}

// 00905D10  FUN_00905d10  size=257  [run]
int __fastcall FUN_00905d10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  FUN_00dd7290(0);
  FUN_00dd7240();
  FUN_00dd7240();
  (**(code **)(*(int *)(param_1 + 0x10) + 0x40))(0x36b00,&DAT_01b7c218,"RayCastFactory");
  FUN_009050e0(1000,&DAT_01b7c218);
  puVar4 = (undefined4 *)(param_1 + 0x138);
  iVar3 = 5;
  do {
    iVar2 = iVar3;
    uVar1 = FUN_00dd3580(4000,&DAT_01b7c218);
    puVar4[5] = uVar1;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
    iVar3 = iVar2 + -1;
  } while (iVar3 != 0);
  piVar5 = (int *)(param_1 + 0x80);
  iVar3 = iVar2 + 4;
  do {
    iVar2 = iVar3;
    if (*piVar5 == 0) {
      iVar3 = FUN_00dd29b0(4000,0x20,0,0);
      *piVar5 = iVar3;
      if (iVar3 == 0) {
        uVar1 = (**(code **)(DAT_01b7c218 + 0x18))();
        uVar1 = FUN_00dd2960(4000,uVar1);
        FUN_00dd5650(&DAT_0163cadc,uVar1);
      }
      else {
        piVar5[1] = 1000;
        piVar5[2] = 0;
        piVar5[3] = 1;
      }
    }
    piVar5 = piVar5 + 5;
    iVar3 = iVar2 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

