// src/collision/RayCastLinearWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00905BF0..0090E590, 30 functions

#include "types.h"

// 00905BF0  RayCastLinearWork::vf1C  size=15  [class]
void __fastcall RayCastLinearWork::vf1C(int param_1)

{
  *(undefined1 *)(param_1 + 0x16) = 0;
                    /* WARNING: Could not recover jumptable at 0x00905bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x60) + 8))();
  return;
}

// 00905C00  RayCastLinearWork::vf14  size=148  [class]
void __fastcall RayCastLinearWork::vf14(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((char)param_1[5] != '\0') {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if ((iVar2 != 0) && (iVar2 = 0, 0 < param_1[0x1d])) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1[0x1c] + 0x28 + iVar4);
      if (DAT_01b35f90 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
      }
      if ((((*(char *)(iVar1 + 0x18) == '\x01') &&
           (iVar3 = *(char *)(iVar1 + 0x10) + iVar1, iVar3 != 0)) ||
          ((*(char *)(iVar1 + 0x18) == '\x02' &&
           (iVar3 = *(char *)(iVar1 + 0x10) + iVar1, iVar3 != 0)))) && (*(short *)(iVar3 + 6) != 0))
      {
        FUN_010060a0();
      }
      if (DAT_01b35f90 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < param_1[0x1d]);
  }
                    /* WARNING: Could not recover jumptable at 0x00905c9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00906B50  RayCastLinearWork::vf24  size=151  [class]
void __thiscall RayCastLinearWork::vf24(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x200) = param_2;
    FUN_004066f0();
    if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar3 = *puVar3 | 0x400;
      puVar3[0xc] = puVar3[0xc] | param_2;
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar4 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00906BF0  RayCastLinearWork::vf28  size=153  [class]
void __thiscall RayCastLinearWork::vf28(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x200) = param_2;
    FUN_004066f0();
    if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar3 = *puVar3 | 0x400;
      puVar3[0xc] = puVar3[0xc] & ~param_2;
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar4 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00906C90  RayCastLinearWork::vf2C  size=148  [class]
void __thiscall RayCastLinearWork::vf2C(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x204) = param_2;
    FUN_004066f0();
    if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar3 = *puVar3 | 4;
      puVar3[4] = puVar3[4] | param_2;
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar4 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00906D30  RayCastLinearWork::vf30  size=150  [class]
void __thiscall RayCastLinearWork::vf30(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x204) = param_2;
    FUN_004066f0();
    if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar3 = *puVar3 | 4;
      puVar3[4] = puVar3[4] & ~param_2;
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar4 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00906DD0  RayCastLinearWork::vf34  size=148  [class]
void __thiscall RayCastLinearWork::vf34(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x208) = param_2;
    FUN_004066f0();
    if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar3 = *puVar3 | 1;
      puVar3[2] = puVar3[2] | param_2;
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar4 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00906E70  RayCastLinearWork::vf38  size=150  [class]
void __thiscall RayCastLinearWork::vf38(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x208) = param_2;
    FUN_004066f0();
    if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar3 = *puVar3 | 1;
      puVar3[2] = puVar3[2] & ~param_2;
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar4 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00906F10  RayCastLinearWork::vf08  size=352  [class]
void __fastcall RayCastLinearWork::vf08(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = param_1[8];
  uStack_24 = *(undefined4 *)(iVar3 + 0xdc);
  local_30 = (float)param_1[0xc] + *(float *)(iVar3 + 0xd0);
  fStack_2c = (float)param_1[0xd] + *(float *)(iVar3 + 0xd4);
  fStack_28 = (float)param_1[0xe] + *(float *)(iVar3 + 0xd8);
  local_20 = 0x3c23d70a;
  local_1c = 0x3c23d70a;
  (**(code **)(*param_1 + 0x14))();
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector_3
            (param_1[8] + 0x10,&local_30,param_1 + 0x18,0);
  if ((DAT_01885d68 != 1) &&
     (iVar3 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4), *(int *)(iVar3 + 4) == 0)) {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  (**(code **)(*param_1 + 0x10))();
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (iVar3 != 0) {
    FUN_0112bcf0();
  }
  if (param_1[0x10] != 0) {
    FUN_010060a0();
  }
  param_1[0x10] = param_1[8];
  param_1[0x14] = param_1[0xc];
  param_1[0x15] = param_1[0xd];
  param_1[0x16] = param_1[0xe];
  param_1[0x17] = param_1[0xf];
  param_1[8] = 0;
  return;
}

// 0090A5D0  FUN_0090a5d0  size=178  [callgraph]
undefined4 FUN_0090a5d0(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  param_1 = *(char *)(param_1 + 0x10) + param_1;
  iVar3 = FUN_008f7780(param_1);
  if (iVar3 == 0) {
    if (param_1 != 0) {
      FUN_00860de0();
      if ((*(uint **)(param_1 + 0xc) == (uint *)0x0) || ((**(uint **)(param_1 + 0xc) & 0x8000) == 0)
         ) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((DAT_01885d68 != 1) &&
         (iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4),
         *(int *)(iVar3 + 4) == 0)) {
        piVar1 = (int *)(iVar3 + 8);
        *piVar1 = *piVar1 + -1;
        if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
          FUN_00dd7300();
        }
      }
      if ((bVar2) && (iVar3 = FUN_00a4c810(0xfffffffe), iVar3 == 0)) {
        return 0;
      }
    }
  }
  else if ((*(byte *)(iVar3 + 0x4c8) & 3) != 0) {
    return 0;
  }
  return 1;
}

// 0090A690  FUN_0090a690  size=164  [callgraph]
undefined4 FUN_0090a690(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  param_1 = *(char *)(param_1 + 0x10) + param_1;
  if (param_1 != 0) {
    FUN_00860de0();
    if ((*(uint **)(param_1 + 0xc) == (uint *)0x0) || ((**(uint **)(param_1 + 0xc) & 0x8000) == 0))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((DAT_01885d68 != 1) &&
       (iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar4 + 4) == 0)
       ) {
      piVar1 = (int *)(iVar4 + 8);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
        FUN_00dd7300();
      }
    }
    if (bVar3) {
      uVar2 = *(uint *)(param_1 + 0xc);
      if (uVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x44);
      }
      if (iVar4 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}

// 0090A740  FUN_0090a740  size=63  [callgraph]
void __fastcall FUN_0090a740(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[5] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 != 0) {
      iVar1 = param_1[0x2c];
      iVar2 = FUN_0090a5d0(iVar1);
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0090a77d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c))();
        return;
      }
      FUN_00905500(iVar1);
    }
  }
  return;
}

// 0090A780  FUN_0090a780  size=57  [callgraph]
void __fastcall FUN_0090a780(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    iVar1 = param_1[0x2c];
    iVar2 = FUN_0090a5d0(iVar1);
    if (iVar2 == 0) {
      FUN_00905560(iVar1);
                    /* WARNING: Could not recover jumptable at 0x0090a7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
  }
  return;
}

// 0090A7C0  FUN_0090a7c0  size=62  [callgraph]
void __thiscall FUN_0090a7c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    iVar1 = param_1[0x2c];
    iVar2 = FUN_0090a690(iVar1,param_2);
    if (iVar2 != 0) {
      FUN_00905560(iVar1);
      (**(code **)(*param_1 + 0x1c))();
    }
  }
  return;
}

// 0090A800  FUN_0090a800  size=159  [callgraph]
void __fastcall FUN_0090a800(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[5] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if ((iVar2 != 0) && (iVar2 = 0, 0 < param_1[0x1d])) {
      iVar6 = 0;
      do {
        uVar1 = *(undefined4 *)(param_1[0x1c] + 0x50 + iVar6);
        iVar3 = FUN_0090a5d0(uVar1);
        if ((iVar3 == 0) || (7 < iVar2)) {
          iVar3 = param_1[0x1d] + -1;
          param_1[0x1d] = iVar3;
          if (iVar3 != iVar2) {
            puVar4 = (undefined4 *)(iVar6 + param_1[0x1c]);
            iVar3 = (iVar3 * 0x60 + param_1[0x1c]) - (int)puVar4;
            iVar5 = 0xc;
            do {
              *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
              puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
              puVar4 = puVar4 + 2;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          FUN_00905500(uVar1);
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 0x60;
        }
      } while (iVar2 < param_1[0x1d]);
    }
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0090a89f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
  }
  return;
}

// 0090A8B0  FUN_0090a8b0  size=231  [callgraph]
void __fastcall FUN_0090a8b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if ((iVar1 != 0) && (iVar1 = 0, 0 < param_1[0x1d])) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_1[0x1c] + 0x50 + iVar5);
      iVar2 = FUN_0090a5d0(iVar3);
      if (iVar2 == 0) {
        if (DAT_01b35f90 != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        if ((((*(char *)(iVar3 + 0x18) == '\x01') &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)) ||
            ((*(char *)(iVar3 + 0x18) == '\x02' &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)))) &&
           (*(short *)(iVar2 + 6) != 0)) {
          FUN_010060a0();
        }
        if (DAT_01b35f90 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        iVar3 = param_1[0x1d] + -1;
        param_1[0x1d] = iVar3;
        if (iVar3 != iVar1) {
          puVar4 = (undefined4 *)(iVar5 + param_1[0x1c]);
          iVar3 = (iVar3 * 0x60 + param_1[0x1c]) - (int)puVar4;
          iVar2 = 0xc;
          do {
            *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
            puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
            puVar4 = puVar4 + 2;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 0x60;
      }
    } while (iVar1 < param_1[0x1d]);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0090a999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 0090A9A0  FUN_0090a9a0  size=238  [callgraph]
void __thiscall FUN_0090a9a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if ((iVar1 != 0) && (iVar1 = 0, 0 < param_1[0x1d])) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_1[0x1c] + 0x50 + iVar5);
      iVar2 = FUN_0090a690(iVar3,param_2);
      if (iVar2 == 0) {
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 0x60;
      }
      else {
        if (DAT_01b35f90 != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        if ((((*(char *)(iVar3 + 0x18) == '\x01') &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)) ||
            ((*(char *)(iVar3 + 0x18) == '\x02' &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)))) &&
           (*(short *)(iVar2 + 6) != 0)) {
          FUN_010060a0();
        }
        if (DAT_01b35f90 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        iVar3 = param_1[0x1d] + -1;
        param_1[0x1d] = iVar3;
        if (iVar3 != iVar1) {
          puVar4 = (undefined4 *)(iVar5 + param_1[0x1c]);
          iVar3 = (iVar3 * 0x60 + param_1[0x1c]) - (int)puVar4;
          iVar2 = 0xc;
          do {
            *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
            puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
            puVar4 = puVar4 + 2;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    } while (iVar1 < param_1[0x1d]);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x1c))();
  }
  return;
}

// 0090AA90  FUN_0090aa90  size=159  [callgraph]
void __fastcall FUN_0090aa90(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[5] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if ((iVar2 != 0) && (iVar2 = 0, 0 < param_1[0x11])) {
      iVar6 = 0;
      do {
        uVar1 = *(undefined4 *)(param_1[0x10] + 0x28 + iVar6);
        iVar3 = FUN_0090a5d0(uVar1);
        if ((iVar3 == 0) || (0xf < iVar2)) {
          iVar3 = param_1[0x11] + -1;
          param_1[0x11] = iVar3;
          if (iVar3 != iVar2) {
            puVar4 = (undefined4 *)(iVar6 + param_1[0x10]);
            iVar3 = (iVar3 * 0x30 + param_1[0x10]) - (int)puVar4;
            iVar5 = 6;
            do {
              *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
              puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
              puVar4 = puVar4 + 2;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          FUN_00905500(uVar1);
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 0x30;
        }
      } while (iVar2 < param_1[0x11]);
    }
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0090ab2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
  }
  return;
}

// 0090AB40  FUN_0090ab40  size=231  [callgraph]
void __fastcall FUN_0090ab40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if ((iVar1 != 0) && (iVar1 = 0, 0 < param_1[0x11])) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_1[0x10] + 0x28 + iVar5);
      iVar2 = FUN_0090a5d0(iVar3);
      if (iVar2 == 0) {
        if (DAT_01b35f90 != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        if ((((*(char *)(iVar3 + 0x18) == '\x01') &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)) ||
            ((*(char *)(iVar3 + 0x18) == '\x02' &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)))) &&
           (*(short *)(iVar2 + 6) != 0)) {
          FUN_010060a0();
        }
        if (DAT_01b35f90 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        iVar3 = param_1[0x11] + -1;
        param_1[0x11] = iVar3;
        if (iVar3 != iVar1) {
          puVar4 = (undefined4 *)(iVar5 + param_1[0x10]);
          iVar3 = (iVar3 * 0x30 + param_1[0x10]) - (int)puVar4;
          iVar2 = 6;
          do {
            *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
            puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
            puVar4 = puVar4 + 2;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 0x30;
      }
    } while (iVar1 < param_1[0x11]);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0090ac29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 0090AC30  FUN_0090ac30  size=238  [callgraph]
void __thiscall FUN_0090ac30(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if ((iVar1 != 0) && (iVar1 = 0, 0 < param_1[0x11])) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_1[0x10] + 0x28 + iVar5);
      iVar2 = FUN_0090a690(iVar3,param_2);
      if (iVar2 == 0) {
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 0x30;
      }
      else {
        if (DAT_01b35f90 != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        if ((((*(char *)(iVar3 + 0x18) == '\x01') &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)) ||
            ((*(char *)(iVar3 + 0x18) == '\x02' &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)))) &&
           (*(short *)(iVar2 + 6) != 0)) {
          FUN_010060a0();
        }
        if (DAT_01b35f90 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        iVar3 = param_1[0x11] + -1;
        param_1[0x11] = iVar3;
        if (iVar3 != iVar1) {
          puVar4 = (undefined4 *)(iVar5 + param_1[0x10]);
          iVar3 = (iVar3 * 0x30 + param_1[0x10]) - (int)puVar4;
          iVar2 = 6;
          do {
            *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
            puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
            puVar4 = puVar4 + 2;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    } while (iVar1 < param_1[0x11]);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x1c))();
  }
  return;
}

// 0090AD20  RayCastLinearWork::vf10  size=159  [class]
void __fastcall RayCastLinearWork::vf10(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[5] == '\0') {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if ((iVar2 != 0) && (iVar2 = 0, 0 < param_1[0x1d])) {
      iVar6 = 0;
      do {
        uVar1 = *(undefined4 *)(param_1[0x1c] + 0x28 + iVar6);
        iVar3 = FUN_0090a5d0(uVar1);
        if ((iVar3 == 0) || (7 < iVar2)) {
          iVar3 = param_1[0x1d] + -1;
          param_1[0x1d] = iVar3;
          if (iVar3 != iVar2) {
            puVar4 = (undefined4 *)(iVar6 + param_1[0x1c]);
            iVar3 = (iVar3 * 0x30 + param_1[0x1c]) - (int)puVar4;
            iVar5 = 6;
            do {
              *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
              puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
              puVar4 = puVar4 + 2;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          FUN_00905500(uVar1);
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 0x30;
        }
      } while (iVar2 < param_1[0x1d]);
    }
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0090adbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
  }
  return;
}

// 0090ADD0  RayCastLinearWork::vf18  size=231  [class]
void __fastcall RayCastLinearWork::vf18(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if ((iVar1 != 0) && (iVar1 = 0, 0 < param_1[0x1d])) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_1[0x1c] + 0x28 + iVar5);
      iVar2 = FUN_0090a5d0(iVar3);
      if (iVar2 == 0) {
        if (DAT_01b35f90 != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        if ((((*(char *)(iVar3 + 0x18) == '\x01') &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)) ||
            ((*(char *)(iVar3 + 0x18) == '\x02' &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)))) &&
           (*(short *)(iVar2 + 6) != 0)) {
          FUN_010060a0();
        }
        if (DAT_01b35f90 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        iVar3 = param_1[0x1d] + -1;
        param_1[0x1d] = iVar3;
        if (iVar3 != iVar1) {
          puVar4 = (undefined4 *)(iVar5 + param_1[0x1c]);
          iVar3 = (iVar3 * 0x30 + param_1[0x1c]) - (int)puVar4;
          iVar2 = 6;
          do {
            *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
            puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
            puVar4 = puVar4 + 2;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 0x30;
      }
    } while (iVar1 < param_1[0x1d]);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0090aeb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 0090AEC0  RayCastLinearWork::vf20  size=238  [class]
void __thiscall RayCastLinearWork::vf20(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if ((iVar1 != 0) && (iVar1 = 0, 0 < param_1[0x1d])) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_1[0x1c] + 0x28 + iVar5);
      iVar2 = FUN_0090a690(iVar3,param_2);
      if (iVar2 == 0) {
        iVar1 = iVar1 + 1;
        iVar5 = iVar5 + 0x30;
      }
      else {
        if (DAT_01b35f90 != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        if ((((*(char *)(iVar3 + 0x18) == '\x01') &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)) ||
            ((*(char *)(iVar3 + 0x18) == '\x02' &&
             (iVar2 = *(char *)(iVar3 + 0x10) + iVar3, iVar2 != 0)))) &&
           (*(short *)(iVar2 + 6) != 0)) {
          FUN_010060a0();
        }
        if (DAT_01b35f90 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
        }
        iVar3 = param_1[0x1d] + -1;
        param_1[0x1d] = iVar3;
        if (iVar3 != iVar1) {
          puVar4 = (undefined4 *)(iVar5 + param_1[0x1c]);
          iVar3 = (iVar3 * 0x30 + param_1[0x1c]) - (int)puVar4;
          iVar2 = 6;
          do {
            *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
            puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
            puVar4 = puVar4 + 2;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    } while (iVar1 < param_1[0x1d]);
  }
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x1c))();
  }
  return;
}

// 0090AFB0  FUN_0090afb0  size=60  [callgraph]
void __fastcall FUN_0090afb0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[5] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 != 0) {
      iVar1 = param_1[0xe];
      iVar2 = FUN_0090a5d0(iVar1);
      if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0090afea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1c))();
        return;
      }
      FUN_00905500(iVar1);
    }
  }
  return;
}

// 0090AFF0  FUN_0090aff0  size=54  [callgraph]
void __fastcall FUN_0090aff0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    iVar1 = param_1[0xe];
    iVar2 = FUN_0090a5d0(iVar1);
    if (iVar2 == 0) {
      FUN_00905560(iVar1);
                    /* WARNING: Could not recover jumptable at 0x0090b021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c))();
      return;
    }
  }
  return;
}

// 0090B030  FUN_0090b030  size=59  [callgraph]
void __thiscall FUN_0090b030(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (iVar1 != 0) {
    iVar1 = param_1[0xe];
    iVar2 = FUN_0090a690(iVar1,param_2);
    if (iVar2 != 0) {
      FUN_00905560(iVar1);
      (**(code **)(*param_1 + 0x1c))();
    }
  }
  return;
}

// 0090E4F0  RayCastLinearWork::vf00  size=6  [class]
undefined * RayCastLinearWork::vf00(void)

{
  return &DAT_01b35df0;
}

// 0090E500  RayCastLinearWork::vf0C  size=4  [class]
undefined4 __fastcall RayCastLinearWork::vf0C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}

// 0090E510  hkpCdPointCollector::hkpCdPointCollector_20  size=122  [between]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_20(undefined4 *param_1)

{
  *param_1 = RayCastLinearWork::vftable;
  if (param_1[0x10] != 0) {
    FUN_010060a0();
  }
  if (param_1[8] != 0) {
    FUN_010060a0();
  }
  RayCastLinearWork::vf14();
  param_1[0x18] = hkpAllCdPointCollector::vftable;
  param_1[0x1d] = 0;
  if (-1 < (int)param_1[0x1e]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x1c],(param_1[0x1e] & 0x3fffffff) * 0x30);
  }
  param_1[0x1c] = 0;
  param_1[0x1e] = 0x80000000;
  param_1[0x18] = vftable;
  *param_1 = RayCastWork::vftable;
  return;
}

// 0090E590  RayCastLinearWork::vf04  size=30  [class]
undefined4 __thiscall RayCastLinearWork::vf04(undefined4 param_1,byte param_2)

{
  hkpCdPointCollector::hkpCdPointCollector_20();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

