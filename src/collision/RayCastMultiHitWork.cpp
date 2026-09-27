// src/collision/RayCastMultiHitWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009059E0..009104A0, 17 functions

#include "mgrr.h"
#include "RayCastMultiHitWork.h"

// 009059E0  RayCastMultiHitWork::vf14  size=148  [class]
void __fastcall RayCastMultiHitWork::vf14(int *param_1)

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
      iVar1 = *(int *)(param_1[0x1c] + 0x50 + iVar4);
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
      iVar4 = iVar4 + 0x60;
    } while (iVar2 < param_1[0x1d]);
  }
                    /* WARNING: Could not recover jumptable at 0x00905a7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00906910  RayCastMultiHitWork::vf08  size=83  [class]
void __fastcall RayCastMultiHitWork::vf08(int *param_1)

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

// 00907BA0  RayCastMultiHitWork::vf1C  size=14  [class]
void __fastcall RayCastMultiHitWork::vf1C(int param_1)

{
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
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

// 0090A800  RayCastMultiHitWork::vf10  size=159  [class]
void __fastcall RayCastMultiHitWork::vf10(int *param_1)

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

// 0090A8B0  RayCastMultiHitWork::vf18  size=231  [class]
void __fastcall RayCastMultiHitWork::vf18(int *param_1)

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

// 0090A9A0  RayCastMultiHitWork::vf20  size=238  [class]
void __thiscall RayCastMultiHitWork::vf20(int *param_1,undefined4 param_2)

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

// 0090E450  RayCastMultiHitWork::vf00  size=6  [class]
undefined * RayCastMultiHitWork::vf00(void)

{
  return &DAT_01b35de8;
}

// 0090E460  RayCastMultiHitWork::vf0C  size=4  [class]
undefined4 __fastcall RayCastMultiHitWork::vf0C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}

// 0090E470  RayCastMultiHitWork::vf04  size=30  [class]
undefined4 __thiscall RayCastMultiHitWork::vf04(undefined4 param_1,byte param_2)

{
  hkpRayHitCollector::hkpRayHitCollector();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0090EF80  RayCastMultiHitWork::RayCastMultiHitWork_2  size=89  [class]
undefined4 * RayCastMultiHitWork::RayCastMultiHitWork_2(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd29b0(0x3a0,0x10,0,0);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x3a0);
  *(undefined4 *)((int)_Dst + 10) = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  *(undefined1 *)((int)_Dst + 0x1b) = 1;
  *_Dst = vftable;
  *(undefined1 *)(_Dst + 0x10) = 0;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  hkpAllRayHitCollector::hkpAllRayHitCollector();
  return _Dst;
}

// 00910180  FUN_00910180  size=787  [callgraph]
void __thiscall FUN_00910180(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int local_10;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  iVar1 = *(int *)(param_2 + 0x14);
  iVar11 = *(int *)(param_1 + 0x14);
  if (iVar1 <= *(int *)(param_1 + 0x14)) {
    iVar11 = iVar1;
  }
  uVar5 = *(uint *)(param_1 + 0x18) & 0x3fffffff;
  if ((int)uVar5 < iVar1) {
    iVar9 = uVar5 * 2;
    if (iVar9 <= iVar1) {
      iVar9 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),iVar9,0x60);
  }
  iVar9 = *(int *)(param_2 + 0x10);
  iVar8 = *(int *)(param_1 + 0x10);
  if (0 < iVar11) {
    puVar6 = (undefined4 *)(iVar9 + 0x18);
    puVar7 = (undefined4 *)(iVar8 + 0x10);
    iVar13 = iVar11;
    do {
      uVar2 = puVar6[-5];
      uVar3 = puVar6[-4];
      uVar4 = puVar6[-3];
      puVar7[-4] = puVar6[-6];
      puVar7[-3] = uVar2;
      puVar7[-2] = uVar3;
      puVar7[-1] = uVar4;
      *puVar7 = *(undefined4 *)((iVar9 - iVar8) + (int)puVar7);
      puVar7[1] = puVar6[-1];
      puVar7[2] = *puVar6;
      puVar7[3] = puVar6[1];
      puVar7[4] = puVar6[2];
      puVar7[5] = puVar6[3];
      puVar7[6] = puVar6[4];
      puVar7[7] = puVar6[5];
      puVar7[8] = puVar6[6];
      puVar7[9] = puVar6[7];
      puVar7[10] = puVar6[8];
      puVar7[0xb] = puVar6[9];
      puVar7[0xc] = puVar6[10];
      puVar7[0x10] = puVar6[0xe];
      puVar6 = puVar6 + 0x18;
      puVar7 = puVar7 + 0x18;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  iVar8 = *(int *)(param_1 + 0x10) + iVar11 * 0x60;
  iVar13 = *(int *)(param_2 + 0x10) + iVar11 * 0x60;
  iVar11 = iVar1 - iVar11;
  iVar9 = 0;
  if (3 < iVar11) {
    puVar6 = (undefined4 *)(iVar8 + 0x70);
    puVar7 = (undefined4 *)(iVar13 + 0x78);
    local_10 = (iVar11 - 4U >> 2) + 1;
    iVar9 = local_10 * 4;
    do {
      if (puVar6 != (undefined4 *)0x70) {
        uVar2 = puVar7[-0x1d];
        uVar3 = puVar7[-0x1c];
        uVar4 = puVar7[-0x1b];
        puVar6[-0x1c] = puVar7[-0x1e];
        puVar6[-0x1b] = uVar2;
        puVar6[-0x1a] = uVar3;
        puVar6[-0x19] = uVar4;
        puVar6[-0x18] = puVar7[-0x1a];
        puVar6[-0x17] = puVar7[-0x19];
        puVar6[-0x16] = puVar7[-0x18];
        puVar6[-0x15] = puVar7[-0x17];
        puVar12 = puVar7 + -0x16;
        puVar14 = puVar6 + -0x14;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar6[-0xc] = puVar7[-0xe];
        puVar6[-8] = puVar7[-10];
      }
      if (puVar6 != (undefined4 *)0x10) {
        uVar2 = puVar7[-5];
        uVar3 = puVar7[-4];
        uVar4 = puVar7[-3];
        puVar6[-4] = puVar7[-6];
        puVar6[-3] = uVar2;
        puVar6[-2] = uVar3;
        puVar6[-1] = uVar4;
        *puVar6 = *(undefined4 *)((iVar13 - iVar8) + (int)puVar6);
        puVar6[1] = puVar7[-1];
        puVar6[2] = *puVar7;
        puVar6[3] = puVar7[1];
        puVar12 = puVar7 + 2;
        puVar14 = puVar6 + 4;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar6[0xc] = puVar7[10];
        puVar6[0x10] = puVar7[0xe];
      }
      if (puVar6 + 0x14 != (undefined4 *)0x0) {
        uVar2 = puVar7[0x13];
        uVar3 = puVar7[0x14];
        uVar4 = puVar7[0x15];
        puVar6[0x14] = puVar7[0x12];
        puVar6[0x15] = uVar2;
        puVar6[0x16] = uVar3;
        puVar6[0x17] = uVar4;
        puVar6[0x18] = puVar7[0x16];
        puVar6[0x19] = puVar7[0x17];
        puVar6[0x1a] = puVar7[0x18];
        puVar6[0x1b] = puVar7[0x19];
        puVar12 = puVar7 + 0x1a;
        puVar14 = puVar6 + 0x1c;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar6[0x24] = puVar7[0x22];
        puVar6[0x28] = puVar7[0x26];
      }
      if (puVar6 + 0x2c != (undefined4 *)0x0) {
        uVar2 = puVar7[0x2b];
        uVar3 = puVar7[0x2c];
        uVar4 = puVar7[0x2d];
        puVar6[0x2c] = puVar7[0x2a];
        puVar6[0x2d] = uVar2;
        puVar6[0x2e] = uVar3;
        puVar6[0x2f] = uVar4;
        puVar6[0x30] = puVar7[0x2e];
        puVar6[0x31] = puVar7[0x2f];
        puVar6[0x32] = puVar7[0x30];
        puVar6[0x33] = puVar7[0x31];
        puVar12 = puVar7 + 0x32;
        puVar14 = puVar6 + 0x34;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar6[0x3c] = puVar7[0x3a];
        puVar6[0x40] = puVar7[0x3e];
      }
      puVar6 = puVar6 + 0x60;
      puVar7 = puVar7 + 0x60;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (iVar11 <= iVar9) {
    *(int *)(param_1 + 0x14) = iVar1;
    return;
  }
  puVar6 = (undefined4 *)(iVar9 * 0x60 + 0x18 + iVar13);
  puVar7 = (undefined4 *)(iVar9 * 0x60 + 0x10 + iVar8);
  iVar11 = iVar11 - iVar9;
  do {
    if (puVar7 != (undefined4 *)0x10) {
      uVar2 = puVar6[-5];
      uVar3 = puVar6[-4];
      uVar4 = puVar6[-3];
      puVar7[-4] = puVar6[-6];
      puVar7[-3] = uVar2;
      puVar7[-2] = uVar3;
      puVar7[-1] = uVar4;
      *puVar7 = *(undefined4 *)((iVar13 - iVar8) + (int)puVar7);
      puVar7[1] = puVar6[-1];
      puVar7[2] = *puVar6;
      puVar7[3] = puVar6[1];
      puVar12 = puVar6 + 2;
      puVar14 = puVar7 + 4;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar7[0xc] = puVar6[10];
      puVar7[0x10] = puVar6[0xe];
    }
    puVar7 = puVar7 + 0x18;
    puVar6 = puVar6 + 0x18;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}

// 009104A0  RayCastMultiHitWork::RayCastMultiHitWork  size=275  [class]
/* WARNING: Removing unreachable block (ram,0x00910524) */
/* WARNING: Removing unreachable block (ram,0x00910547) */
/* WARNING: Removing unreachable block (ram,0x0091054e) */
/* WARNING: Removing unreachable block (ram,0x00910571) */
/* WARNING: Removing unreachable block (ram,0x00910555) */
/* WARNING: Removing unreachable block (ram,0x00910567) */
/* WARNING: Removing unreachable block (ram,0x00910558) */
/* WARNING: Removing unreachable block (ram,0x0091057e) */
/* WARNING: Removing unreachable block (ram,0x0091058a) */

undefined4
RayCastMultiHitWork::RayCastMultiHitWork
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  hkpAllRayHitCollector::hkpAllRayHitCollector();
  RayCastWork::set(0xffffffff,param_2,param_3,param_4,0,0,0,param_5,2,1,0);
  vf08();
  FUN_009053f0();
  hkpRayHitCollector::hkpRayHitCollector();
  return 0;
}

