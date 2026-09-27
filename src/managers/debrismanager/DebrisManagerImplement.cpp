// src/managers/debrismanager/DebrisManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1C600..00C64880, 13 functions

#include "types.h"

// 00C1C600  DebrisManagerImplement::vf04  size=18  [class]
void __fastcall DebrisManagerImplement::vf04(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 8))(&stack0x00000004);
  return;
}

// 00C2DC20  DebrisManagerImplement::vf14  size=57  [class]
void __fastcall DebrisManagerImplement::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) && (**(int **)(iVar1 + 4) != 0)) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      FUN_00a805f0();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00c2dc4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x80))();
    return;
  }
  return;
}

// 00C2DC60  DebrisManagerImplement::vf20  size=4  [class]
undefined4 __fastcall DebrisManagerImplement::vf20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// 00C448C0  DebrisManagerImplement::vf18  size=43  [class]
void __fastcall DebrisManagerImplement::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) && (piVar2 = *(int **)(iVar1 + 4), *piVar2 != 0))
  {
    FUN_00a805f0();
    FUN_0040c150(piVar2);
  }
  return;
}

// 00C448F0  DebrisManagerImplement::vf1C  size=69  [class]
void __fastcall DebrisManagerImplement::vf1C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 != iVar2 + *(int *)(iVar1 + 8) * 4) {
      do {
        FUN_00a805f0();
        iVar2 = iVar2 + 4;
      } while (iVar2 != *(int *)(*(int *)(param_1 + 8) + 4) +
                        *(int *)(*(int *)(param_1 + 8) + 8) * 4);
    }
    if (*(int *)(*(int *)(param_1 + 8) + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
    }
  }
  return;
}

// 00C50F40  DebrisManagerImplement::vf08  size=104  [class]
void __thiscall DebrisManagerImplement::vf08(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar5 = *(int **)(iVar2 + 4);
  piVar1 = piVar5 + *(int *)(iVar2 + 8);
  for (; (piVar5 != piVar1 && (*piVar5 != param_2)); piVar5 = piVar5 + 1) {
  }
  iVar3 = *(int *)(iVar2 + 4);
  if (piVar5 != (int *)(iVar3 + *(int *)(iVar2 + 8) * 4)) {
    uVar4 = *(uint *)(iVar2 + 8);
    piVar1 = (int *)(iVar3 + uVar4 * 4);
    if ((((piVar5 != piVar1) && (iVar3 != 0)) && (uVar4 != 0)) &&
       ((uint)((int)piVar5 - iVar3 >> 2) < uVar4)) {
      for (; piVar5 != piVar1 + -1; piVar5 = piVar5 + 1) {
        *piVar5 = piVar5[1];
      }
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    }
  }
  return;
}

// 00C50FB0  DebrisManagerImplement::vf24  size=241  [class]
void __fastcall DebrisManagerImplement::vf24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_10 [4];
  float local_c;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00c3f310();
    piVar3 = *(int **)(*(int *)(param_1 + 8) + 4);
    if (piVar3 != piVar3 + *(int *)(*(int *)(param_1 + 8) + 8)) {
      do {
        FUN_00a7c930();
        FUN_00a7c950();
        local_c = 0.0;
        if (*piVar3 == 0) {
LAB_00c51023:
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c960(uVar2);
          if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) {
            iVar1 = *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18) * 8;
            if (iVar1 != 0) {
              FUN_00a7c940(local_10);
              *(float *)(iVar1 + 4) = local_c;
            }
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          }
        }
        else {
          iVar1 = FUN_00a7c800();
          if (iVar1 != 0) {
            local_c = *(float *)(iVar1 + 0x524);
          }
          if (0.0 <= local_c) goto LAB_00c51023;
        }
        FUN_00a7c950();
        local_c = 0.0;
        piVar3 = piVar3 + 1;
      } while (piVar3 != (int *)(*(int *)(*(int *)(param_1 + 8) + 4) +
                                *(int *)(*(int *)(param_1 + 8) + 8) * 4));
    }
    _qsort(*(void **)(param_1 + 0x10),*(size_t *)(param_1 + 0x18),8,(_PtFuncCompare *)&LAB_00c1c630)
    ;
  }
  return;
}

// 00C510B0  DebrisManagerImplement::vf28  size=119  [class]
void __fastcall DebrisManagerImplement::vf28(int param_1)

{
  int iVar1;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      local_8 = *(undefined4 *)(param_1 + 0x10);
      iVar1 = FUN_00a81330();
      if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
         (iVar1 = FUN_00606e40(iVar1), iVar1 != 0)) {
        FUN_005d9560();
      }
      FUN_00c4ba60(local_4,&local_8);
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    }
  }
  return;
}

// 00C62AD0  DebrisManagerImplement::vf0C  size=20  [class]
int __fastcall DebrisManagerImplement::vf0C(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1[2] + 0xc);
  iVar2 = (**(code **)(*param_1 + 0x10))();
  return iVar1 - iVar2;
}

// 00C62AF0  DebrisManagerImplement::vf10  size=7  [class]
undefined4 __fastcall DebrisManagerImplement::vf10(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 8);
}

// 00C62B90  DebrisManagerImplement::vf00  size=30  [class]
undefined4 __thiscall DebrisManagerImplement::vf00(undefined4 param_1,byte param_2)

{
  DebrisManager::DebrisManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C64820  DebrisManagerImplement::DebrisManagerImplement  size=96  [class]
bool DebrisManagerImplement::DebrisManagerImplement(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x40,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[0xe] = 0;
    lib::AllocatedArray<Entity*>::AllocatedArray<Entity*>();
    DAT_01bea18c = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  DAT_01bea18c = (undefined4 *)0x0;
  return false;
}

// 00C64880  DebrisManagerImplement::DebrisManagerImplement  size=5  [class]
bool DebrisManagerImplement::DebrisManagerImplement(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x40,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[0xe] = 0;
    lib::AllocatedArray<Entity*>::AllocatedArray<Entity*>();
    DAT_01bea18c = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  DAT_01bea18c = (undefined4 *)0x0;
  return false;
}

