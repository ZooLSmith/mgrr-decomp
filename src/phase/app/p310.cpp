// src/phase/app/p310.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D48450..00D6CE70, 9 functions

#include "mgrr.h"
#include "P310.h"

// 00D48450  P310::vf20  size=3  [class]
void P310::vf20(void)

{
  return;
}

// 00D48460  P310::vf28  size=3  [class]
void P310::vf28(void)

{
  return;
}

// 00D48470  P310::vf14  size=3  [class]
void P310::vf14(void)

{
  return;
}

// 00D48480  P310::vf1C  size=3  [class]
void P310::vf1C(void)

{
  return;
}

// 00D48490  P310::vf18  size=1  [class]
void P310::vf18(void)

{
  return;
}

// 00D484A0  P310::vf08  size=31  [class]
void __fastcall P310::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  FUN_00dd7240();
  return;
}

// 00D484C0  P310::vf10  size=25  [class]
void P310::vf10(void)

{
  FUN_00c1bdd0();
  FUN_00dd7270();
  return;
}

// 00D52C70  P310::vf0C  size=428  [class]
void __fastcall P310::vf0C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  int local_2c;
  int local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x140) == 0) {
    uVar1 = FUN_00c19c00(1,0,0);
    *(undefined4 *)(param_1 + 0x144) = uVar1;
    iVar2 = FUN_00c19c00(1,0,1);
    *(int *)(param_1 + 0x148) = iVar2;
    if ((*(int *)(param_1 + 0x144) != 0) && (iVar2 != 0)) {
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x140) == 1) {
    piVar6 = (int *)(param_1 + 0x144);
    local_28 = 2;
    do {
      if (*piVar6 != 0) {
        iVar2 = FUN_00a7c7e0();
        if (iVar2 == 0) {
          *piVar6 = 0;
        }
        else {
          if (*(int *)(param_1 + 0x138) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
          }
          puVar3 = (undefined4 *)FUN_00a7c8b0();
          local_20 = *puVar3;
          iVar2 = 11000;
          local_1c = puVar3[1];
          local_2c = 0xc;
          local_18 = puVar3[2];
          local_14 = puVar3[3];
          do {
            piVar4 = (int *)FUN_00a6e640();
            iVar5 = (**(code **)(*piVar4 + 0x2c))(&local_20,iVar2,1);
            if (iVar5 != 0) {
              piVar4 = (int *)FUN_00a6e640();
              iVar5 = (**(code **)(*piVar4 + 0x78))(iVar2,1);
              if (iVar5 != 0) {
                iVar5 = FUN_00a18cf0(*(undefined4 *)(iVar5 + 0x44));
                if (iVar5 != 0) {
                  uVar1 = 1;
                  FUN_00a7c8a0(1);
                  FUN_00a8e740(uVar1);
                  piVar4 = (int *)FUN_00a7c8a0();
                  if (piVar4 != (int *)0x0) {
                    puVar7 = &DAT_01b34c14;
                    (**(code **)(*piVar4 + 4))(&DAT_01b34c14);
                    iVar5 = FUN_00dd6d80(puVar7);
                    if (iVar5 != 0) {
                      FUN_00415850();
                    }
                  }
                }
                FUN_00a6de90();
              }
            }
            iVar2 = iVar2 + 1;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
          if (*(int *)(param_1 + 0x138) != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
          }
        }
      }
      piVar6 = piVar6 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  return;
}

// 00D6CE70  P310::vf00  size=65  [class]
undefined4 * __thiscall P310::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00dd7270();
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

