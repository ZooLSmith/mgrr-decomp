// src/unsorted/unit_00C56DA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C56DA0..00C594F0, 28 functions

#include "types.h"

// 00C56DA0  FUN_00c56da0  size=61  [run]
bool FUN_00c56da0(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x100,&DAT_01b7bcf0);
  if (iVar1 != 0) {
    DAT_01bea100 = lib::StaticArray<EntityHandle,2>::StaticArray<EntityHandle,2>();
    return DAT_01bea100 != 0;
  }
  DAT_01bea100 = 0;
  return false;
}

// 00C56E20  FUN_00c56e20  size=162  [run]
void __fastcall FUN_00c56e20(undefined4 *param_1)

{
  if (param_1[0x14] != 0) {
    if (param_1[0x14] != 0) {
      FUN_00dd48d0(param_1[0x14],0);
      param_1[0x14] = 0;
    }
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = param_1[0x13];
    param_1[0x18] = param_1[0x13];
    param_1[0x19] = param_1[0x13];
  }
  if (param_1[0xd] != 0) {
    if (param_1[0xd] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0xd] = 0;
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = param_1[0xc];
    param_1[0x11] = param_1[0xc];
    param_1[0x12] = param_1[0xc];
  }
  FUN_00dd7270();
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return;
}

// 00C56ED0  FUN_00c56ed0  size=277  [run]
void __fastcall FUN_00c56ed0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  FUN_00dd7240();
  if (param_1[0xd] == 0) {
    iVar1 = FUN_00dd29b0(0x180c,0x20,0,0);
    param_1[0xd] = iVar1;
    if (iVar1 != 0) {
      param_1[0xe] = 0x200;
      param_1[0xf] = 0;
      param_1[0x12] = iVar1 + 0x1800;
      FUN_008781b0();
    }
  }
  if (param_1[0x14] == 0) {
    iVar1 = FUN_00dd29b0(0x180c,0x20,0,0);
    param_1[0x14] = iVar1;
    if (iVar1 != 0) {
      param_1[0x15] = 0x200;
      param_1[0x16] = 0;
      param_1[0x19] = iVar1 + 0x1800;
      FUN_008781b0();
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if ((param_1[2] & 0x3fffffffU) < 0x40) {
    uVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (uVar2 < 0x41) {
      uVar2 = 0x40;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,uVar2,0x10);
  }
  if ((param_1[2] & 0x3fffffffU) < 0x40) {
    uVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (uVar2 < 0x41) {
      uVar2 = 0x40;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,uVar2,0x10);
  }
  iVar1 = 0x40 - param_1[1];
  if (0 < iVar1) {
    puVar3 = (undefined4 *)(param_1[1] * 0x10 + *param_1 + 8);
    do {
      if (puVar3 != (undefined4 *)&DAT_00000008) {
        *puVar3 = 0;
        puVar3[-2] = 0;
        puVar3[1] = 0;
        puVar3[-1] = 0;
      }
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = 0x40;
  param_1[0x1b] = 0;
  return;
}

// 00C56FF0  FUN_00c56ff0  size=107  [run]
void __fastcall FUN_00c56ff0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x44);
  if (piVar2 != *(int **)(param_1 + 0x48)) {
    do {
      if ((*(byte *)(*piVar2 + 0x28) & 2) == 0) {
        piVar3 = (int *)piVar2[2];
      }
      else {
        iVar1 = piVar2[1];
        piVar3 = (int *)piVar2[2];
        if (iVar1 != 0) {
          *(int **)(iVar1 + 8) = piVar3;
        }
        if (piVar3 != (int *)0x0) {
          piVar3[1] = iVar1;
        }
        if (*(int **)(param_1 + 0x44) == piVar2) {
          *(int **)(param_1 + 0x44) = piVar3;
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar1 + 4);
        }
        piVar2[1] = iVar4;
        piVar2[2] = iVar1;
        if (iVar4 != 0) {
          *(int **)(iVar4 + 8) = piVar2;
        }
        if (iVar1 != 0) {
          *(int **)(iVar1 + 4) = piVar2;
        }
        *(int **)(param_1 + 0x40) = piVar2;
      }
      piVar2 = piVar3;
    } while (piVar3 != *(int **)(param_1 + 0x48));
  }
  return;
}

// 00C57060  FUN_00c57060  size=180  [run]
void __fastcall FUN_00c57060(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x44);
  while (iVar4 != iVar1) {
    iVar2 = *(int *)(iVar4 + 4);
    iVar3 = *(int *)(iVar4 + 8);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    if (*(int *)(param_1 + 0x44) == iVar4) {
      *(int *)(param_1 + 0x44) = iVar3;
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 4);
    }
    *(int *)(iVar4 + 4) = iVar5;
    *(int *)(iVar4 + 8) = iVar2;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 8) = iVar4;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar4;
    }
    *(int *)(param_1 + 0x40) = iVar4;
    iVar4 = iVar3;
  }
  iVar1 = *(int *)(param_1 + 100);
  iVar4 = *(int *)(param_1 + 0x60);
  while (iVar4 != iVar1) {
    iVar2 = *(int *)(iVar4 + 4);
    iVar3 = *(int *)(iVar4 + 8);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    if (*(int *)(param_1 + 0x60) == iVar4) {
      *(int *)(param_1 + 0x60) = iVar3;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    iVar2 = *(int *)(param_1 + 0x5c);
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 4);
    }
    *(int *)(iVar4 + 4) = iVar5;
    *(int *)(iVar4 + 8) = iVar2;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 8) = iVar4;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = iVar4;
    }
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar4 = iVar3;
  }
  return;
}

// 00C57120  FUN_00c57120  size=176  [run]
void __thiscall FUN_00c57120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  for (piVar3 = *(int **)(param_1 + 0x44); piVar3 != *(int **)(param_1 + 0x48);
      piVar3 = (int *)piVar3[2]) {
    if (*piVar3 == param_2) {
      iVar1 = piVar3[1];
      iVar2 = piVar3[2];
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = iVar1;
      }
      if (*(int **)(param_1 + 0x44) == piVar3) {
        *(int *)(param_1 + 0x44) = iVar2;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 4);
      }
      piVar3[1] = iVar2;
      piVar3[2] = iVar1;
      if (iVar2 != 0) {
        *(int **)(iVar2 + 8) = piVar3;
      }
      if (iVar1 != 0) {
        *(int **)(iVar1 + 4) = piVar3;
      }
      *(int **)(param_1 + 0x40) = piVar3;
      iVar1 = 0;
      piVar3 = (int *)(param_1 + 0x74);
      goto LAB_00c571a6;
    }
  }
  goto LAB_00c571be;
  while( true ) {
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    if (2 < iVar1) break;
LAB_00c571a6:
    if (*piVar3 == param_2) {
      *(undefined4 *)(param_1 + 0x74 + iVar1 * 4) = 0;
      break;
    }
  }
LAB_00c571be:
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}

// 00C571D0  FUN_00c571d0  size=176  [run]
void __thiscall FUN_00c571d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  for (piVar3 = *(int **)(param_1 + 0x60); piVar3 != *(int **)(param_1 + 100);
      piVar3 = (int *)piVar3[2]) {
    if (*piVar3 == param_2) {
      iVar1 = piVar3[1];
      iVar2 = piVar3[2];
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = iVar1;
      }
      if (*(int **)(param_1 + 0x60) == piVar3) {
        *(int *)(param_1 + 0x60) = iVar2;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar1 + 4);
      }
      piVar3[1] = iVar2;
      piVar3[2] = iVar1;
      if (iVar2 != 0) {
        *(int **)(iVar2 + 8) = piVar3;
      }
      if (iVar1 != 0) {
        *(int **)(iVar1 + 4) = piVar3;
      }
      *(int **)(param_1 + 0x5c) = piVar3;
      iVar1 = 0;
      piVar3 = (int *)(param_1 + 0x74);
      goto LAB_00c57256;
    }
  }
  goto LAB_00c5726e;
  while( true ) {
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    if (2 < iVar1) break;
LAB_00c57256:
    if (*piVar3 == param_2) {
      *(undefined4 *)(param_1 + 0x74 + iVar1 * 4) = 0;
      break;
    }
  }
LAB_00c5726e:
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}

// 00C57280  FUN_00c57280  size=339  [run]
undefined4 __thiscall FUN_00c57280(int *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  
  if (param_1[10] != 0) {
    if (param_1[10] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    }
    piVar1 = (int *)param_1[0x12];
    piVar2 = (int *)param_1[0x11];
    param_1[1] = 0;
    for (; piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
      iVar3 = *piVar2;
      if ((((iVar3 != 0) && ((*(byte *)(iVar3 + 0x28) & 2) == 0)) && (iVar3 != param_4)) &&
         (((piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0 &&
           (iVar5 = (**(code **)(*piVar4 + 0x200))(), iVar5 != 0)) && (piVar4[0x1bb] != 0)))) {
        fVar6 = (float10)FUN_00dc0f70(piVar4,0x41000000);
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
        }
        piVar4 = (int *)(param_1[1] * 0x10 + *param_1);
        if (piVar4 != (int *)0x0) {
          *piVar4 = iVar3;
          piVar4[1] = 0;
          piVar4[2] = (int)(float)fVar6;
          piVar4[3] = 0;
        }
        param_1[1] = param_1[1] + 1;
      }
    }
    FUN_00c3fa00(*param_1,0,0x3f,&LAB_00c14f70);
    if (0 < param_1[1]) {
      *param_2 = *(undefined4 *)*param_1;
    }
    if (1 < param_1[1]) {
      *param_3 = *(undefined4 *)(*param_1 + 0x10);
    }
    if (param_1[10] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    }
  }
  return 0;
}

// 00C573E0  FUN_00c573e0  size=608  [run]
int __thiscall FUN_00c573e0(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar7;
  int local_64;
  float local_60;
  int local_5c;
  LPCRITICAL_SECTION local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_24;
  undefined1 local_20 [28];
  
  local_58 = (LPCRITICAL_SECTION)FUN_00f98a90();
  local_54 = (float)(int)local_58 * 0.5;
  local_58 = (LPCRITICAL_SECTION)FUN_00f98aa0();
  local_4c = (float)(int)local_58 * 0.5;
  local_58 = (LPCRITICAL_SECTION)FUN_00f98a90();
  local_50 = (float)(int)local_58 * 0.5;
  iVar2 = FUN_00f98aa0();
  local_48 = (float)iVar2 * 0.5;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
    local_58 = lpCriticalSection;
    if (*(int *)(param_1 + 0x28) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    local_5c = 0;
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      local_44 = *(int **)(param_1 + 0x48);
      piVar7 = *(int **)(param_1 + 0x44);
      local_60 = 1e+06;
      local_64 = 0;
      if (piVar7 != local_44) {
        do {
          iVar2 = *piVar7;
          if ((((iVar2 != param_2) && (iVar2 != 0)) && ((*(byte *)(iVar2 + 0x28) & 2) == 0)) &&
             ((iVar3 = FUN_00c4cf20(iVar2,param_3), iVar3 == 0 &&
              (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)))) {
            puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x204))(local_20);
            uStack_40 = *puVar5;
            uStack_3c = puVar5[1];
            uStack_38 = puVar5[2];
            uStack_34 = puVar5[3];
            FUN_00d9fa80(&fStack_30,&uStack_40);
            if ((((1.0 < fStack_24) &&
                 ((local_54 - local_50 < fStack_30 && (fStack_30 < local_50 + local_54)))) &&
                (local_4c - local_48 < fStack_2c)) &&
               ((fStack_2c < local_48 + local_4c &&
                (fVar1 = (fStack_2c - local_4c) * (fStack_2c - local_4c) +
                         (fStack_30 - local_54) * (fStack_30 - local_54), fVar1 < local_60)))) {
              local_64 = 1;
              local_60 = fVar1;
              local_5c = iVar2;
            }
          }
          piVar7 = (int *)piVar7[2];
        } while (piVar7 != local_44);
        lpCriticalSection = local_58;
        if ((local_64 != 0) && (local_5c != 0)) {
          FUN_00a7c930();
          uVar6 = FUN_00a7c7f0();
          FUN_00a7c960(uVar6);
          FUN_00878130(&local_44,&local_5c);
          lpCriticalSection = local_58;
        }
      }
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return local_64;
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 00C57640  FUN_00c57640  size=87  [run]
undefined4 * __fastcall FUN_00c57640(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  FUN_00a7c930();
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar1 = 0xff;
  do {
    FUN_00904d60();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00C576A0  FUN_00c576a0  size=162  [run]
void __fastcall FUN_00c576a0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0xff;
  do {
    FUN_00905ce0();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  if (param_1[0x14] != 0) {
    param_1[0x16] = 0;
    if (param_1[0x17] != 0) {
      FUN_00dd48d0(param_1[0x14],0);
      param_1[0x17] = 0;
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  if (param_1[0xf] != 0) {
    param_1[0x11] = 0;
    if (param_1[0x12] != 0) {
      FUN_00dd48d0(param_1[0xf],0);
      param_1[0x12] = 0;
    }
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  FUN_00dd7270();
  uVar1 = param_1[2];
  param_1[1] = 0;
  if ((uVar1 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return;
}

// 00C57750  FUN_00c57750  size=150  [run]
void __fastcall FUN_00c57750(undefined4 *param_1)

{
  uint uVar1;
  
  FUN_00c4cf70();
  if (param_1[0xf] != 0) {
    param_1[0x11] = 0;
    if (param_1[0x12] != 0) {
      FUN_00dd48d0(param_1[0xf],0);
      param_1[0x12] = 0;
    }
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  if (param_1[0x14] != 0) {
    param_1[0x16] = 0;
    if (param_1[0x17] != 0) {
      FUN_00dd48d0(param_1[0x14],0);
      param_1[0x17] = 0;
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  FUN_00dd7270();
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0x80000000;
  FUN_00a7c950();
  return;
}

// 00C577F0  FUN_00c577f0  size=60  [run]
void __fastcall FUN_00c577f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00c4d4e0();
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(param_1 + 0x3c);
  for (iVar3 = *(int *)(param_1 + 0x3c); iVar3 != iVar1 * 0x70 + iVar2; iVar3 = iVar3 + 0x70) {
    if ((((*(byte *)(iVar3 + 8) & 1) != 0) && (*(int *)(iVar3 + 0x34) != 0)) &&
       (*(int *)(iVar3 + 0x60) != -1)) {
      *(undefined4 *)(iVar3 + 100) = 1;
    }
  }
  return;
}

// 00C57830  FUN_00c57830  size=250  [run]
int __thiscall FUN_00c57830(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = param_2;
  iVar1 = FUN_00a81330();
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x30) == 0)) {
    return -1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  iVar5 = 0;
  for (iVar1 = *(int *)(param_1 + 0x3c);
      iVar1 != *(int *)(param_1 + 0x44) * 0x70 + *(int *)(param_1 + 0x3c); iVar1 = iVar1 + 0x70) {
    if ((*(byte *)(iVar1 + 8) & 1) == 0) {
      FUN_008a4f80(uVar4);
      *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 1;
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x460);
      *(int *)(iVar1 + 0x60) = iVar5;
      iVar2 = FUN_00a81330();
      iVar5 = *(int *)(param_1 + 0x50);
      iVar1 = iVar5 + *(int *)(param_1 + 0x58) * 4;
      if (iVar5 == iVar1) goto LAB_00c578d6;
      goto LAB_00c578c0;
    }
    iVar5 = iVar5 + 1;
  }
  goto LAB_00c57906;
  while (iVar5 = iVar5 + 4, iVar5 != iVar1) {
LAB_00c578c0:
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 == iVar2)) goto LAB_00c57906;
  }
LAB_00c578d6:
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c940(uVar4);
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x54)) {
    if (*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58) * 4 != 0) {
      FUN_00a7c940(&param_2);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  }
LAB_00c57906:
  *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return *(int *)(param_1 + 0x460) + -1;
}

// 00C57930  FUN_00c57930  size=742  [run]
void __thiscall FUN_00c57930(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float local_c8;
  LPCRITICAL_SECTION local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a0;
  float local_9c;
  int local_98;
  undefined1 local_90 [112];
  int local_20;
  
  if (((param_1[0xc] != 0) && (param_2 != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    local_c0 = *(float *)(iVar4 + 0x40);
    local_bc = *(float *)(iVar4 + 0x44);
    local_b8 = *(float *)(iVar4 + 0x48);
    local_c4 = (LPCRITICAL_SECTION)(param_1 + 6);
    if (param_1[0xc] != 0) {
      EnterCriticalSection(local_c4);
    }
    param_1[1] = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    iVar4 = param_1[0x11];
    iVar1 = param_1[0xf];
    for (iVar8 = param_1[0xf]; iVar8 != iVar4 * 0x70 + iVar1; iVar8 = iVar8 + 0x70) {
      if ((((((*(byte *)(iVar8 + 8) & 1) != 0) && (iVar5 = FUN_00c15010(&local_b0), iVar5 != 0)) &&
           ((*(int *)(iVar8 + 100) != 0 &&
            ((iVar5 = FUN_00c26190(), iVar5 != 0 && ((*(byte *)(iVar8 + 8) & 4) == 0)))))) &&
          (iVar5 = FUN_00a81330(), iVar5 != param_2)) &&
         (local_c8 = (local_a8 - local_b8) * (local_a8 - local_b8) +
                     (local_ac - local_bc) * (local_ac - local_bc) +
                     (local_b0 - local_c0) * (local_b0 - local_c0),
         local_c8 <= *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18))) {
        FUN_00c40800();
        local_a0 = FUN_00a81330();
        local_9c = local_c8;
        if (param_1[1] == 0) {
          if ((param_1[2] & 0x3fffffffU) == 0) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
          }
          piVar9 = (int *)(param_1[1] * 0x90 + *param_1);
          if (piVar9 != (int *)0x0) {
            *piVar9 = local_a0;
            piVar9[1] = (int)local_9c;
            piVar9[2] = local_98;
            FUN_008a50c0(local_90);
            piVar9[0x20] = local_20;
          }
          param_1[1] = param_1[1] + 1;
        }
        else {
          bVar3 = false;
          iVar5 = 0;
          if (0 < param_1[1]) {
            iVar7 = 0;
            do {
              iVar2 = *param_1;
              if ((*(int *)(iVar2 + iVar7) == local_a0) &&
                 (local_c8 < *(float *)(iVar2 + 4 + iVar7))) {
                *(float *)(iVar2 + 4 + iVar7) = local_c8;
                bVar3 = true;
              }
              iVar5 = iVar5 + 1;
              iVar7 = iVar7 + 0x90;
            } while (iVar5 < param_1[1]);
            if (bVar3) goto LAB_00c57ab2;
          }
          if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
          }
          piVar9 = (int *)(param_1[1] * 0x90 + *param_1);
          if (piVar9 != (int *)0x0) {
            *piVar9 = local_a0;
            piVar9[1] = (int)local_9c;
            piVar9[2] = local_98;
            FUN_008a50c0(local_90);
            piVar9[0x20] = local_20;
          }
          param_1[1] = param_1[1] + 1;
        }
      }
LAB_00c57ab2:
    }
    if (1 < param_1[1]) {
      FUN_00c4c4e0(*param_1,0,param_1[1] + -1,&LAB_00c152e0);
    }
    if ((param_1[1] != 0) && (iVar4 = 0, 0 < param_1[1])) {
      do {
        uVar6 = FUN_00a7c7f0();
        FUN_00a7c940(uVar6);
        if (*(int *)(param_3 + 0xc) < *(int *)(param_3 + 8)) {
          if (*(int *)(param_3 + 4) + *(int *)(param_3 + 0xc) * 4 != 0) {
            FUN_00a7c940(&local_c8);
          }
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1[1]);
    }
    if (local_c4[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(local_c4);
    }
  }
  return;
}

// 00C57C20  FUN_00c57c20  size=721  [run]
void __thiscall FUN_00c57c20(int *param_1,int param_2,int *param_3,float param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float local_c8;
  LPCRITICAL_SECTION local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a0;
  float local_9c;
  int local_98;
  undefined1 local_90 [112];
  int local_20;
  
  if (((param_1[0xc] != 0) && (param_2 != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    local_c0 = *(float *)(iVar4 + 0x40);
    local_bc = *(float *)(iVar4 + 0x44);
    local_b8 = *(float *)(iVar4 + 0x48);
    local_c4 = (LPCRITICAL_SECTION)(param_1 + 6);
    if (param_1[0xc] != 0) {
      EnterCriticalSection(local_c4);
    }
    param_1[1] = 0;
    if (param_3[1] != 0) {
      param_3[2] = 0;
    }
    iVar4 = param_1[0x11];
    iVar1 = param_1[0xf];
    for (iVar8 = param_1[0xf]; iVar8 != iVar4 * 0x70 + iVar1; iVar8 = iVar8 + 0x70) {
      if ((((((*(byte *)(iVar8 + 8) & 1) != 0) && (iVar5 = FUN_00c15010(&local_b0), iVar5 != 0)) &&
           ((*(int *)(iVar8 + 100) != 0 &&
            ((iVar5 = FUN_00c26190(), iVar5 != 0 && ((*(byte *)(iVar8 + 8) & 4) == 0)))))) &&
          (iVar5 = FUN_00a81330(), iVar5 != param_2)) &&
         (local_c8 = (local_a8 - local_b8) * (local_a8 - local_b8) +
                     (local_ac - local_bc) * (local_ac - local_bc) +
                     (local_b0 - local_c0) * (local_b0 - local_c0), local_c8 <= param_4 * param_4))
      {
        FUN_00c40800();
        local_a0 = FUN_00a81330();
        local_9c = local_c8;
        if (param_1[1] == 0) {
          if ((param_1[2] & 0x3fffffffU) == 0) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
          }
          piVar9 = (int *)(param_1[1] * 0x90 + *param_1);
          if (piVar9 != (int *)0x0) {
            *piVar9 = local_a0;
            piVar9[1] = (int)local_9c;
            piVar9[2] = local_98;
            FUN_008a50c0(local_90);
            piVar9[0x20] = local_20;
          }
          param_1[1] = param_1[1] + 1;
        }
        else {
          bVar3 = false;
          iVar5 = 0;
          if (0 < param_1[1]) {
            iVar7 = 0;
            do {
              iVar2 = *param_1;
              if ((*(int *)(iVar2 + iVar7) == local_a0) &&
                 (local_c8 < *(float *)(iVar2 + 4 + iVar7))) {
                *(float *)(iVar2 + 4 + iVar7) = local_c8;
                bVar3 = true;
              }
              iVar5 = iVar5 + 1;
              iVar7 = iVar7 + 0x90;
            } while (iVar5 < param_1[1]);
            if (bVar3) goto LAB_00c57da7;
          }
          if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
          }
          piVar9 = (int *)(param_1[1] * 0x90 + *param_1);
          if (piVar9 != (int *)0x0) {
            *piVar9 = local_a0;
            piVar9[1] = (int)local_9c;
            piVar9[2] = local_98;
            FUN_008a50c0(local_90);
            piVar9[0x20] = local_20;
          }
          param_1[1] = param_1[1] + 1;
        }
      }
LAB_00c57da7:
    }
    if (1 < param_1[1]) {
      FUN_00c4c4e0(*param_1,0,param_1[1] + -1,&LAB_00c152e0);
    }
    if ((param_1[1] != 0) && (iVar4 = 0, 0 < param_1[1])) {
      do {
        uVar6 = FUN_00a7c7f0();
        FUN_00a7c940(uVar6);
        (**(code **)(*param_3 + 8))(&local_c8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1[1]);
    }
    if (local_c4[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(local_c4);
    }
  }
  return;
}

// 00C57F00  FUN_00c57f00  size=627  [run]
undefined4 __thiscall FUN_00c57f00(int *param_1,int param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 local_e0;
  int local_dc;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b0 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90 [112];
  int local_20;
  
  if (((param_1[0xc] != 0) && (param_2 != 0)) && (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) {
    fVar1 = *(float *)(iVar10 + 0x40);
    fVar2 = *(float *)(iVar10 + 0x44);
    fVar3 = *(float *)(iVar10 + 0x48);
    if (param_1[0xc] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    }
    iVar10 = param_1[0xf];
    param_1[1] = 0;
    iVar4 = param_1[0x11];
    iVar12 = param_1[0xf];
    for (; iVar10 != iVar4 * 0x70 + iVar12; iVar10 = iVar10 + 0x70) {
      if (((((*(byte *)(iVar10 + 8) & 1) != 0) && (iVar11 = FUN_00c15090(), iVar11 != 0)) &&
          ((iVar11 = FUN_00c15010(&local_c0), iVar11 != 0 &&
           ((iVar11 = FUN_00c414c0(), iVar11 != 0 && (iVar11 = FUN_00a81330(), iVar11 != param_2))))
          )) && (fVar6 = local_c0 - fVar1, fVar9 = local_bc - fVar2, fVar8 = local_b8 - fVar3,
                fVar7 = *(float *)(iVar10 + 0x18) + param_3,
                fVar8 * fVar8 + fVar9 * fVar9 + fVar6 * fVar6 <= fVar7 * fVar7)) {
        FUN_00d9fa80(local_b0,&local_c0);
        FUN_00c40800();
        local_9c = local_b0[0];
        local_20 = iVar10;
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
        }
        puVar13 = (undefined4 *)(param_1[1] * 0x90 + *param_1);
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = local_a0;
          puVar13[1] = local_9c;
          puVar13[2] = local_98;
          FUN_008a50c0(local_90);
          puVar13[0x20] = local_20;
        }
        param_1[1] = param_1[1] + 1;
      }
    }
    if (1 < param_1[1]) {
      FUN_00c4c4e0(*param_1,0,param_1[1] + -1,&LAB_00c152e0);
    }
    iVar10 = 0;
    local_e0 = 0;
    if (0 < param_1[1]) {
      local_dc = 1;
      do {
        iVar4 = *(int *)(iVar10 + 0x80 + *param_1);
        if ((*(int *)(iVar4 + 0x34) != 0) && (*(int *)(param_4 + 0x34) != 0)) {
          iVar12 = FUN_00a81330();
          iVar11 = FUN_00a81330();
          if ((iVar12 == iVar11) && (*(short *)(iVar4 + 4) == *(short *)(param_4 + 4))) {
            if (param_5 == 0) {
              if (-1 < local_dc + -2) {
                local_e0 = *(undefined4 *)(iVar10 + -0x10 + *param_1);
              }
            }
            else if (local_dc < param_1[1]) {
              local_e0 = *(undefined4 *)(iVar10 + 0x110 + *param_1);
            }
          }
        }
        iVar10 = iVar10 + 0x90;
        bVar5 = local_dc < param_1[1];
        local_dc = local_dc + 1;
      } while (bVar5);
    }
    if (param_1[0xc] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    }
    return local_e0;
  }
  return 0;
}

// 00C58180  FUN_00c58180  size=774  [run]
void __thiscall FUN_00c58180(int *param_1,int param_2,int param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  float local_dc;
  float local_d8;
  float local_c0;
  float local_bc;
  float local_b4;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined1 local_90 [112];
  undefined4 local_20;
  
  if (((param_1[0xc] != 0) && (param_2 != 0)) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
    if (param_1[0xc] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    }
    param_1[1] = 0;
    *(undefined4 *)(param_3 + 0xc) = 0;
    iVar5 = FUN_00f98a90();
    fVar2 = (float)iVar5 * 0.5;
    iVar5 = FUN_00f98aa0();
    fVar3 = (float)iVar5 * 0.5;
    iVar5 = FUN_00f98a90();
    local_d8 = (float)iVar5 * 0.5;
    iVar5 = FUN_00f98aa0();
    local_dc = (float)iVar5 * 0.5;
    if (param_4 < local_d8 != (param_4 == local_d8)) {
      local_d8 = param_4;
    }
    if (param_5 < local_dc != (param_5 == local_dc)) {
      local_dc = param_5;
    }
    iVar5 = param_1[0x11];
    iVar1 = param_1[0xf];
    for (iVar8 = param_1[0xf]; iVar8 != iVar5 * 0x70 + iVar1; iVar8 = iVar8 + 0x70) {
      if (((((*(byte *)(iVar8 + 8) & 1) != 0) && (iVar6 = FUN_00c15010(local_b0), iVar6 != 0)) &&
          ((*(int *)(iVar8 + 100) != 0 &&
           ((iVar6 = FUN_00c26190(), iVar6 != 0 && ((*(byte *)(iVar8 + 8) & 4) == 0)))))) &&
         ((iVar6 = FUN_00a81330(), iVar6 != param_2 &&
          (((((FUN_00d9fa80(&local_c0,local_b0), 1.0 < local_b4 && (fVar2 - local_d8 < local_c0)) &&
             (local_c0 < local_d8 + fVar2)) &&
            ((fVar3 - local_dc < local_bc && (local_bc < local_dc + fVar3)))) &&
           (fVar4 = (local_bc - fVar3) * (local_bc - fVar3) +
                    (local_c0 - fVar2) * (local_c0 - fVar2), fVar4 < 4e+06 != (fVar4 == 4e+06)))))))
      {
        FUN_00c40800();
        local_a0 = FUN_00a81330();
        local_9c = fVar4;
        FUN_008a4f80(iVar8);
        if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
        }
        puVar7 = (undefined4 *)(param_1[1] * 0x90 + *param_1);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = local_a0;
          puVar7[1] = local_9c;
          puVar7[2] = local_98;
          FUN_008a50c0(local_90);
          puVar7[0x20] = local_20;
        }
        param_1[1] = param_1[1] + 1;
      }
    }
    if (1 < param_1[1]) {
      FUN_00c4c4e0(*param_1,0,param_1[1] + -1,&LAB_00c152e0);
    }
    iVar5 = 0;
    if (0 < param_1[1]) {
      local_d8 = 0.0;
      do {
        if (*(int *)(param_3 + 0xc) < *(int *)(param_3 + 8)) {
          if (*(int *)(param_3 + 0xc) * 0x70 + *(int *)(param_3 + 4) != 0) {
            FUN_008a50c0((int)local_d8 + 0x10 + *param_1);
          }
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
        }
        local_d8 = (float)((int)local_d8 + 0x90);
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1[1]);
    }
    if (param_1[0xc] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    }
  }
  return;
}

// 00C58490  FUN_00c58490  size=934  [run]
HANDLE __thiscall
FUN_00c58490(LPCRITICAL_SECTION param_1,int param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  HANDLE pvVar4;
  int iVar5;
  undefined4 uVar6;
  LPCRITICAL_SECTION p_Var7;
  HANDLE pvVar8;
  float10 fVar9;
  int iStack_64;
  HANDLE pvStack_60;
  float fStack_5c;
  LPCRITICAL_SECTION p_Stack_4c;
  LPCRITICAL_SECTION local_44;
  float local_40;
  float local_3c;
  int local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_24 [32];
  
  if (param_1[2].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    return (HANDLE)0x0;
  }
  p_Var7 = param_1 + 1;
  local_44 = p_Var7;
  if (param_1[2].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(p_Var7);
  }
  if ((param_2 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0)) {
    if (param_1[2].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      return (HANDLE)0x0;
    }
    LeaveCriticalSection(p_Var7);
    return (HANDLE)0x0;
  }
  local_40 = (float)piVar3[0x10];
  local_3c = (float)piVar3[0x11];
  local_38 = piVar3[0x12];
  local_34 = (float)piVar3[0x13];
  (**(code **)(*piVar3 + 0x27c))(&local_40);
  pvVar8 = param_1[2].OwningThread;
  pvVar4 = (HANDLE)(param_1[2].SpinCount * 0x70 + (int)param_1[2].OwningThread);
  iStack_64 = -1;
  pvStack_60 = (HANDLE)0x0;
  p_Var7 = param_1;
  if (pvVar8 == pvVar4) {
LAB_00c58692:
    pvVar8 = p_Var7[2].OwningThread;
    if (pvVar8 == pvVar4) goto LAB_00c58818;
    do {
      iVar1 = *(int *)((int)pvVar8 + 0x30);
      if (((((*(byte *)((int)pvVar8 + 8) & 1) != 0) && (iVar5 = FUN_00c15010(&local_34), iVar5 != 0)
           ) && (*(int *)((int)pvVar8 + 100) != 0)) &&
         (((iVar5 = FUN_00c26190(), iVar5 != 0 && ((*(byte *)((int)pvVar8 + 8) & 4) == 0)) &&
          ((iVar5 = FUN_00a81330(), iVar5 != param_2 &&
           ((iStack_64 <= iVar1 &&
            (fVar2 = *(float *)((int)pvVar8 + 0x18) + param_5,
            (fStack_2c - local_3c) * (fStack_2c - local_3c) +
            (fStack_30 - local_40) * (fStack_30 - local_40) +
            (local_34 - (float)local_44) * (local_34 - (float)local_44) < fVar2 * fVar2)))))))) {
        fVar9 = (float10)FUN_009f8c60(&local_34);
        fVar9 = (float10)FUN_00ddba30((float)(fVar9 - (float10)param_3));
        fVar9 = ABS(fVar9);
        if (iStack_64 < iVar1) {
          if (fVar9 < (float10)param_4 != (fVar9 == (float10)param_4)) {
            iVar5 = *piVar3;
            uVar6 = FUN_0085bf90();
            iVar5 = (**(code **)(iVar5 + 0x280))(auStack_24,&local_44,&local_34,uVar6);
joined_r0x00c587d1:
            if (iVar5 == 0) {
              iStack_64 = iVar1;
              pvStack_60 = pvVar8;
              fStack_5c = (float)fVar9;
            }
          }
        }
        else if (fVar9 < (float10)fStack_5c != (fVar9 == (float10)fStack_5c)) {
          iVar5 = *piVar3;
          uVar6 = FUN_0085bf90();
          iVar5 = (**(code **)(iVar5 + 0x280))(auStack_24,&local_44,&local_34,uVar6);
          goto joined_r0x00c587d1;
        }
      }
      pvVar8 = (HANDLE)((int)pvVar8 + 0x70);
    } while (pvVar8 != pvVar4);
    if (pvStack_60 == (HANDLE)0x0) goto LAB_00c58818;
  }
  else {
    do {
      iVar1 = *(int *)((int)pvVar8 + 0x30);
      if ((((((*(byte *)((int)pvVar8 + 8) & 1) != 0) &&
            (iVar5 = FUN_00c15010(&local_34), iVar5 != 0)) && (*(int *)((int)pvVar8 + 100) != 0)) &&
          ((iVar5 = FUN_00c26190(), iVar5 != 0 && ((*(byte *)((int)pvVar8 + 8) & 4) == 0)))) &&
         ((iVar5 = FUN_00a81330(), iVar5 != param_2 &&
          ((iStack_64 <= iVar1 &&
           (fVar2 = *(float *)((int)pvVar8 + 0x10) + param_5,
           (fStack_2c - local_3c) * (fStack_2c - local_3c) +
           (fStack_30 - local_40) * (fStack_30 - local_40) +
           (local_34 - (float)local_44) * (local_34 - (float)local_44) < fVar2 * fVar2)))))) {
        fVar9 = (float10)FUN_009f8c60(&local_34);
        fVar9 = (float10)FUN_00ddba30((float)(fVar9 - (float10)param_3));
        fVar9 = ABS(fVar9);
        if (iStack_64 < iVar1) {
          if (fVar9 < (float10)param_4 != (fVar9 == (float10)param_4)) {
            iVar5 = *piVar3;
            uVar6 = FUN_0085bf90();
LAB_00c58651:
            iVar5 = (**(code **)(iVar5 + 0x280))(auStack_24,&local_44,&local_34,uVar6);
            if (iVar5 == 0) {
              iStack_64 = iVar1;
              pvStack_60 = pvVar8;
              fStack_5c = (float)fVar9;
            }
          }
        }
        else if (fVar9 < (float10)fStack_5c != (fVar9 == (float10)fStack_5c)) {
          iVar5 = *piVar3;
          uVar6 = FUN_0085bf90();
          goto LAB_00c58651;
        }
      }
      pvVar8 = (HANDLE)((int)pvVar8 + 0x70);
    } while (pvVar8 != pvVar4);
    p_Var7 = p_Stack_4c;
    if (pvStack_60 == (HANDLE)0x0) goto LAB_00c58692;
  }
  uVar6 = FUN_00a81330();
  pvVar8 = (HANDLE)FUN_00c4e8f0(&local_44,uVar6);
  if (pvVar8 != (HANDLE)0x0) {
    pvStack_60 = pvVar8;
  }
LAB_00c58818:
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return pvStack_60;
}

// 00C58840  FUN_00c58840  size=800  [run]
undefined4 __thiscall
FUN_00c58840(int *param_1,int param_2,int param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  float10 fVar15;
  undefined4 local_d4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a0;
  float local_9c;
  int local_98;
  undefined1 local_90 [112];
  int local_20;
  
  local_d4 = 0;
  if (((param_3 == 0) || (param_1[0xc] == 0)) || (iVar10 = FUN_00a7c8a0(), iVar10 == 0)) {
    return 0;
  }
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  fVar1 = *(float *)(iVar10 + 0x40);
  fVar2 = *(float *)(iVar10 + 0x44);
  fVar3 = *(float *)(iVar10 + 0x48);
  param_1[1] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  iVar10 = param_1[0x11];
  iVar13 = param_1[0xf];
  iVar4 = param_1[0xf];
  do {
    if (iVar13 == iVar10 * 0x70 + iVar4) {
      if (1 < param_1[1]) {
        FUN_00c4c4e0(*param_1,0,param_1[1] + -1,&LAB_00c152e0);
      }
      if ((param_1[1] != 0) && (iVar10 = 0, 0 < param_1[1])) {
        iVar13 = 0;
        do {
          if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8)) {
            if (*(int *)(param_2 + 0xc) * 0x70 + *(int *)(param_2 + 4) != 0) {
              FUN_008a50c0(iVar13 + 0x10 + *param_1);
            }
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
          }
          iVar10 = iVar10 + 1;
          iVar13 = iVar13 + 0x90;
        } while (iVar10 < param_1[1]);
      }
      if (param_1[0xc] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
      }
      return local_d4;
    }
    if ((((((*(byte *)(iVar13 + 8) & 1) != 0) && (iVar11 = FUN_00c15010(&local_b0), iVar11 != 0)) &&
         ((*(int *)(iVar13 + 100) != 0 &&
          ((iVar11 = FUN_00c26190(), iVar11 != 0 && ((*(byte *)(iVar13 + 8) & 4) != 0)))))) &&
        (iVar11 = FUN_00a81330(), iVar11 != param_3)) &&
       (fVar6 = local_b0 - fVar1, fVar8 = local_ac - fVar2, fVar7 = local_a8 - fVar3,
       fVar6 = fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6,
       fVar7 = *(float *)(iVar13 + 0x10) + param_6, fVar6 < fVar7 * fVar7)) {
      fVar15 = (float10)FUN_009f8c60(&local_b0);
      fVar15 = (float10)FUN_00ddba30((float)(fVar15 - (float10)param_4));
      if (ABS(fVar15) < (float10)param_5 != (ABS(fVar15) == (float10)param_5)) {
        FUN_00c40800();
        local_a0 = FUN_00a81330();
        local_9c = fVar6;
        FUN_008a4f80(iVar13);
        if (param_1[1] == 0) {
          if ((param_1[2] & 0x3fffffffU) == 0) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
          }
          piVar14 = (int *)(param_1[1] * 0x90 + *param_1);
          if (piVar14 != (int *)0x0) {
            *piVar14 = local_a0;
            piVar14[1] = (int)local_9c;
            piVar14[2] = local_98;
            FUN_008a50c0(local_90);
            piVar14[0x20] = local_20;
          }
          param_1[1] = param_1[1] + 1;
        }
        else {
          bVar9 = false;
          iVar11 = 0;
          if (0 < param_1[1]) {
            iVar12 = 0;
            do {
              iVar5 = *param_1;
              if ((*(int *)(iVar5 + iVar12) == local_a0) &&
                 (local_9c < *(float *)(iVar5 + 4 + iVar12))) {
                *(float *)(iVar5 + 4 + iVar12) = local_9c;
                bVar9 = true;
              }
              iVar11 = iVar11 + 1;
              iVar12 = iVar12 + 0x90;
            } while (iVar11 < param_1[1]);
            if (bVar9) goto LAB_00c58a66;
          }
          if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
          }
          piVar14 = (int *)(param_1[1] * 0x90 + *param_1);
          if (piVar14 != (int *)0x0) {
            *piVar14 = local_a0;
            piVar14[1] = (int)local_9c;
            piVar14[2] = local_98;
            FUN_008a50c0(local_90);
            piVar14[0x20] = local_20;
          }
          param_1[1] = param_1[1] + 1;
        }
LAB_00c58a66:
        local_d4 = 1;
      }
    }
    iVar13 = iVar13 + 0x70;
  } while( true );
}

// 00C58B60  FUN_00c58b60  size=810  [run]
undefined4 __thiscall
FUN_00c58b60(int *param_1,int param_2,int param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  float10 fVar15;
  undefined4 local_d4;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a0;
  float local_9c;
  int local_98;
  undefined1 local_90 [112];
  int local_20;
  
  local_d4 = 0;
  if (((param_3 == 0) || (param_1[0xc] == 0)) || (iVar10 = FUN_00a7c8a0(), iVar10 == 0)) {
    return 0;
  }
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  fVar1 = *(float *)(iVar10 + 0x40);
  fVar2 = *(float *)(iVar10 + 0x44);
  fVar3 = *(float *)(iVar10 + 0x48);
  param_1[1] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  iVar10 = param_1[0x11];
  iVar13 = param_1[0xf];
  iVar4 = param_1[0xf];
  do {
    if (iVar13 == iVar10 * 0x70 + iVar4) {
      if (1 < param_1[1]) {
        FUN_00c4c4e0(*param_1,0,param_1[1] + -1,&LAB_00c152e0);
      }
      if ((param_1[1] != 0) && (iVar10 = 0, 0 < param_1[1])) {
        iVar13 = 0;
        do {
          if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8)) {
            if (*(int *)(param_2 + 0xc) * 0x70 + *(int *)(param_2 + 4) != 0) {
              FUN_008a50c0(iVar13 + 0x10 + *param_1);
            }
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
          }
          iVar10 = iVar10 + 1;
          iVar13 = iVar13 + 0x90;
        } while (iVar10 < param_1[1]);
      }
      if (param_1[0xc] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
      }
      return local_d4;
    }
    if ((((*(byte *)(iVar13 + 8) & 1) != 0) && (iVar11 = FUN_00c15010(&local_b0), iVar11 != 0)) &&
       ((*(int *)(iVar13 + 100) != 0 &&
        (((*(byte *)(iVar13 + 8) & 8) != 0 && (iVar11 = FUN_00a81330(), iVar11 != param_3)))))) {
      FUN_00a81330();
      iVar11 = FUN_00a7c8a0();
      if ((*(int *)(iVar11 + 0x4e4) == 0) &&
         (fVar6 = local_b0 - fVar1, fVar8 = local_ac - fVar2, fVar7 = local_a8 - fVar3,
         fVar6 = fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6,
         fVar7 = *(float *)(iVar13 + 0x10) + param_6, fVar6 < fVar7 * fVar7)) {
        fVar15 = (float10)FUN_009f8c60(&local_b0);
        fVar15 = (float10)FUN_00ddba30((float)(fVar15 - (float10)param_4));
        if (ABS(fVar15) < (float10)param_5 != (ABS(fVar15) == (float10)param_5)) {
          FUN_00c40800();
          local_a0 = FUN_00a81330();
          local_9c = fVar6;
          FUN_008a4f80(iVar13);
          if (param_1[1] == 0) {
            if ((param_1[2] & 0x3fffffffU) == 0) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
            }
            piVar14 = (int *)(param_1[1] * 0x90 + *param_1);
            if (piVar14 != (int *)0x0) {
              *piVar14 = local_a0;
              piVar14[1] = (int)local_9c;
              piVar14[2] = local_98;
              FUN_008a50c0(local_90);
              piVar14[0x20] = local_20;
            }
            param_1[1] = param_1[1] + 1;
          }
          else {
            bVar9 = false;
            iVar11 = 0;
            if (0 < param_1[1]) {
              iVar12 = 0;
              do {
                iVar5 = *param_1;
                if ((*(int *)(iVar5 + iVar12) == local_a0) &&
                   (local_9c < *(float *)(iVar5 + 4 + iVar12))) {
                  *(float *)(iVar5 + 4 + iVar12) = local_9c;
                  bVar9 = true;
                }
                iVar11 = iVar11 + 1;
                iVar12 = iVar12 + 0x90;
              } while (iVar11 < param_1[1]);
              if (bVar9) goto LAB_00c58d92;
            }
            if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
            }
            piVar14 = (int *)(param_1[1] * 0x90 + *param_1);
            if (piVar14 != (int *)0x0) {
              *piVar14 = local_a0;
              piVar14[1] = (int)local_9c;
              piVar14[2] = local_98;
              FUN_008a50c0(local_90);
              piVar14[0x20] = local_20;
            }
            param_1[1] = param_1[1] + 1;
          }
LAB_00c58d92:
          local_d4 = 1;
        }
      }
    }
    iVar13 = iVar13 + 0x70;
  } while( true );
}

// 00C58E90  FUN_00c58e90  size=1075  [run]
undefined4 __thiscall
FUN_00c58e90(int *param_1,int param_2,int param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  float10 fVar16;
  undefined4 local_fc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b4;
  undefined1 local_b0 [16];
  int local_a0;
  float local_9c;
  int local_98;
  undefined1 local_90 [112];
  int local_20;
  
  local_fc = 0;
  if (((param_3 == 0) || (param_1[0xc] == 0)) || (iVar9 = FUN_00a7c8a0(), iVar9 == 0)) {
    return 0;
  }
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  fVar1 = *(float *)(iVar9 + 0x40);
  fVar2 = *(float *)(iVar9 + 0x44);
  fVar3 = *(float *)(iVar9 + 0x48);
  param_1[1] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  iVar9 = param_1[0x11];
  iVar14 = param_1[0xf];
  iVar4 = param_1[0xf];
  do {
    if (iVar14 == iVar9 * 0x70 + iVar4) {
      if (1 < param_1[1]) {
        FUN_00c4c4e0(*param_1,0,param_1[1] + -1,&LAB_00c152e0);
      }
      if ((param_1[1] != 0) && (iVar9 = 0, 0 < param_1[1])) {
        iVar14 = 0;
        do {
          if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8)) {
            if (*(int *)(param_2 + 0xc) * 0x70 + *(int *)(param_2 + 4) != 0) {
              FUN_008a50c0(iVar14 + 0x10 + *param_1);
            }
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
          }
          iVar9 = iVar9 + 1;
          iVar14 = iVar14 + 0x90;
        } while (iVar9 < param_1[1]);
      }
      if (param_1[0xc] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
      }
      return local_fc;
    }
    if ((((*(byte *)(iVar14 + 8) & 1) != 0) && (iVar10 = FUN_00c15010(&local_d0), iVar10 != 0)) &&
       (((*(byte *)(iVar14 + 8) & 0x10) != 0 && (iVar10 = FUN_00a81330(), iVar10 != param_3)))) {
      FUN_00a81330();
      iVar10 = FUN_00a7c8a0();
      if ((*(int *)(iVar10 + 0x4e4) == 0) &&
         (fVar5 = local_d0 - fVar1, fVar7 = local_cc - fVar2, fVar6 = local_c8 - fVar3,
         fVar5 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5,
         fVar6 = *(float *)(iVar14 + 0x10) + param_6, fVar5 < fVar6 * fVar6)) {
        bVar8 = false;
        iVar10 = FUN_00f98a90();
        iVar11 = FUN_00f98a90();
        iVar12 = FUN_00f98a90();
        iVar13 = FUN_00f98aa0();
        FUN_00c15010(local_b0);
        FUN_00d9fa80(&local_c0,local_b0);
        if ((1.0 < local_b4) &&
           (((((float)iVar12 * 0.5 - (float)iVar10 * 0.5 < local_c0 &&
              (local_c0 < (float)iVar10 * 0.5 + (float)iVar12 * 0.5)) &&
             ((float)iVar13 * 0.5 - (float)iVar11 * 0.5 < local_bc)) &&
            (local_bc < (float)iVar11 * 0.5 + (float)iVar13 * 0.5)))) {
          bVar8 = true;
        }
        fVar16 = (float10)FUN_009f8c60(&local_d0);
        fVar16 = (float10)FUN_00ddba30((float)(fVar16 - (float10)param_4));
        if ((ABS(fVar16) < (float10)param_5 != (ABS(fVar16) == (float10)param_5)) || (bVar8)) {
          FUN_00c40800();
          local_a0 = FUN_00a81330();
          local_9c = fVar5;
          FUN_008a4f80(iVar14);
          if (param_1[1] == 0) {
            if ((param_1[2] & 0x3fffffffU) == 0) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
            }
            piVar15 = (int *)(param_1[1] * 0x90 + *param_1);
            if (piVar15 != (int *)0x0) {
              *piVar15 = local_a0;
              piVar15[1] = (int)local_9c;
              piVar15[2] = local_98;
              FUN_008a50c0(local_90);
              piVar15[0x20] = local_20;
            }
            param_1[1] = param_1[1] + 1;
          }
          else {
            bVar8 = false;
            iVar10 = 0;
            if (0 < param_1[1]) {
              iVar11 = 0;
              do {
                piVar15 = (int *)(iVar11 + *param_1);
                if ((*piVar15 == local_a0) && (local_9c < (float)piVar15[1])) {
                  piVar15[1] = (int)local_9c;
                  bVar8 = true;
                }
                iVar10 = iVar10 + 1;
                iVar11 = iVar11 + 0x90;
              } while (iVar10 < param_1[1]);
              if (bVar8) goto LAB_00c591c1;
            }
            if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
            }
            piVar15 = (int *)(param_1[1] * 0x90 + *param_1);
            if (piVar15 != (int *)0x0) {
              *piVar15 = local_a0;
              piVar15[1] = (int)local_9c;
              piVar15[2] = local_98;
              FUN_008a50c0(local_90);
              piVar15[0x20] = local_20;
            }
            param_1[1] = param_1[1] + 1;
          }
LAB_00c591c1:
          local_fc = 1;
        }
      }
    }
    iVar14 = iVar14 + 0x70;
  } while( true );
}

// 00C592D0  FUN_00c592d0  size=167  [run]
void __fastcall FUN_00c592d0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_00dd7240();
  FUN_00c21650(0x20,&DAT_01b7bd48);
  uVar1 = param_1[2] & 0x3fffffff;
  if (uVar1 < 0x20) {
    uVar2 = uVar1 * 2;
    if (uVar1 == 0x10 || uVar2 < 0x20) {
      uVar2 = 0x20;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,uVar2,0xc);
  }
  uVar1 = param_1[2] & 0x3fffffff;
  if (uVar1 < 0x20) {
    uVar2 = uVar1 * 2;
    if (uVar1 == 0x10 || uVar2 < 0x20) {
      uVar2 = 0x20;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,uVar2,0xc);
  }
  iVar3 = 0x20 - param_1[1];
  puVar4 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar3) {
    do {
      if (puVar4 != (undefined4 *)0x0) {
        puVar4[1] = 0;
        *puVar4 = 0;
        puVar4[2] = 0;
      }
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = 0x20;
  return;
}

// 00C59380  FUN_00c59380  size=17  [run]
void __fastcall FUN_00c59380(int param_1)

{
  FUN_00c4f070();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

// 00C593A0  FUN_00c593a0  size=101  [run]
void FUN_00c593a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 local_70 [108];
  
  FUN_00a8b210();
  FUN_00c15420(param_1,param_2,param_3,param_4,param_5,0,0x40490fdb,param_6,param_7);
  FUN_00c4edd0(local_70);
  return;
}

// 00C59410  FUN_00c59410  size=99  [run]
void FUN_00c59410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined1 local_70 [108];
  
  FUN_00a8b210();
  FUN_00c15420(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  FUN_00c4edd0(local_70);
  return;
}

// 00C59480  FUN_00c59480  size=106  [run]
void FUN_00c59480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined1 local_70 [108];
  
  FUN_00a8b210();
  FUN_00c154a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  FUN_00c4edd0(local_70);
  return;
}

// 00C594F0  FUN_00c594f0  size=230  [run]
void __thiscall FUN_00c594f0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_80;
  undefined1 local_70 [108];
  
  iVar3 = param_2[1];
  if (iVar3 != param_2[2] * 0x60 + iVar3) {
    do {
      iVar2 = *(int *)(iVar3 + 0x5c);
      if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
      }
      piVar1 = (int *)(*param_1 + param_1[1] * 0xc);
      if (piVar1 != (int *)0x0) {
        *piVar1 = iVar3;
        piVar1[1] = (int)(float)iVar2;
        piVar1[2] = 0;
      }
      param_1[1] = param_1[1] + 1;
      iVar3 = iVar3 + 0x60;
    } while (iVar3 != param_2[2] * 0x60 + param_2[1]);
  }
  if (1 < param_1[1]) {
    FUN_00c3fb50(*param_1,0,param_1[1] + -1,&LAB_00c15710);
  }
  iVar3 = 0;
  if (0 < param_1[1]) {
    local_80 = 0;
    do {
      FUN_005f5800(*(undefined4 *)(local_80 + *param_1));
      (**(code **)(*param_2 + 8))(local_70);
      local_80 = local_80 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return;
}

