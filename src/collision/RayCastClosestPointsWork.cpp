// src/collision/RayCastClosestPointsWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00905A80..0090E6A0, 10 functions

#include "mgrr.h"
#include "RayCastClosestPointsWork.h"
#include "hkpCdPointCollector.h"

// 00905A80  RayCastClosestPointsWork::vf1C  size=15  [class]
void __fastcall RayCastClosestPointsWork::vf1C(int param_1)

{
  *(undefined1 *)(param_1 + 0x16) = 0;
                    /* WARNING: Could not recover jumptable at 0x00905a8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x30) + 8))();
  return;
}

// 00905A90  RayCastClosestPointsWork::vf14  size=148  [class]
void __fastcall RayCastClosestPointsWork::vf14(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((char)param_1[5] != '\0') {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if ((iVar2 != 0) && (iVar2 = 0, 0 < param_1[0x11])) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1[0x10] + 0x28 + iVar4);
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
    } while (iVar2 < param_1[0x11]);
  }
                    /* WARNING: Could not recover jumptable at 0x00905b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00906A00  RayCastClosestPointsWork::vf08  size=334  [class]
void __fastcall RayCastClosestPointsWork::vf08(int *param_1)

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

// 0090AA90  RayCastClosestPointsWork::vf10  size=159  [class]
void __fastcall RayCastClosestPointsWork::vf10(int *param_1)

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

// 0090AB40  RayCastClosestPointsWork::vf18  size=231  [class]
void __fastcall RayCastClosestPointsWork::vf18(int *param_1)

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

// 0090AC30  RayCastClosestPointsWork::vf20  size=238  [class]
void __thiscall RayCastClosestPointsWork::vf20(int *param_1,undefined4 param_2)

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

// 0090E600  RayCastClosestPointsWork::vf00  size=6  [class]
undefined * RayCastClosestPointsWork::vf00(void)

{
  return &DAT_01b35dec;
}

// 0090E610  RayCastClosestPointsWork::vf0C  size=4  [class]
undefined4 __fastcall RayCastClosestPointsWork::vf0C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}

// 0090E620  hkpCdPointCollector::hkpCdPointCollector_21  size=122  [between]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_21(undefined4 *param_1)

{
  *param_1 = RayCastClosestPointsWork::vftable;
  if (param_1[9] != 0) {
    FUN_010060a0();
  }
  if (param_1[8] != 0) {
    FUN_010060a0();
  }
  RayCastClosestPointsWork::vf14();
  param_1[0xc] = hkpAllCdPointCollector::vftable;
  param_1[0x11] = 0;
  if (-1 < (int)param_1[0x12]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x10],(param_1[0x12] & 0x3fffffff) * 0x30);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  param_1[0xc] = vftable;
  *param_1 = RayCastWork::vftable;
  return;
}

// 0090E6A0  RayCastClosestPointsWork::vf04  size=30  [class]
undefined4 __thiscall RayCastClosestPointsWork::vf04(undefined4 param_1,byte param_2)

{
  hkpCdPointCollector::hkpCdPointCollector_21();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

