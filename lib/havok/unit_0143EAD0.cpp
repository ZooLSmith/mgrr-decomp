// lib/havok/unit_0143EAD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0143EAD0..014600D0, 743 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkDefaultClassNameRegistry.h"
#include "hkIArchive.h"
#include "hkIstream.h"
#include "hkLineNumberStreamReader.h"
#include "hkMemoryStreamReader.h"
#include "hkOffsetOnlyStreamWriter.h"
#include "hkRegisterCheckUtil.h"
#include "hkTraceStream.h"
#include "hkTypeInfoRegistry.h"
#include "hkVtableClassRegistry.h"

// 0143EAD0  hkVtableClassRegistry::vf0C  size=28  [run]
void hkVtableClassRegistry::vf0C(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0143EAF0  FUN_0143eaf0  size=119  [run]
void FUN_0143eaf0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar1) {
    piVar2 = *(int **)(param_1 + 8);
    do {
      if (*piVar2 != -1) break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 <= iVar1);
  }
  if (iVar3 <= iVar1) {
    do {
      FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 8),
                   *(undefined4 *)(*(int *)(param_1 + 8) + 4 + iVar3 * 8));
      iVar1 = *(int *)(param_1 + 0x10);
      iVar3 = iVar3 + 1;
      if (iVar3 <= iVar1) {
        piVar2 = (int *)(*(int *)(param_1 + 8) + iVar3 * 8);
        do {
          if (*piVar2 != -1) break;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 2;
        } while (iVar3 <= iVar1);
      }
    } while (iVar3 <= iVar1);
  }
  return;
}

// 0143EBB0  FUN_0143ebb0  size=15  [run]
undefined4 __thiscall FUN_0143ebb0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8);
}

// 0143EBC0  hkLineNumberStreamReader::vf10  size=65  [run]
int __thiscall hkLineNumberStreamReader::vf10(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2,param_3);
  iVar3 = 0;
  if (0 < iVar2) {
    iVar4 = *(int *)(param_1 + 0xc);
    do {
      pcVar1 = (char *)(iVar3 + param_2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + (uint)(*pcVar1 == '\n');
      *(int *)(param_1 + 0xc) = iVar4;
    } while (iVar3 < iVar2);
  }
  return iVar2;
}

// 0143EC10  hkLineNumberStreamReader::vf0C  size=25  [run]
undefined4 __thiscall hkLineNumberStreamReader::vf0C(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
  return param_2;
}

// 0143EC30  hkLineNumberStreamReader::vf18  size=25  [run]
undefined4 __thiscall hkLineNumberStreamReader::vf18(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2);
  return param_2;
}

// 0143EC50  hkLineNumberStreamReader::vf1C  size=35  [run]
void __thiscall hkLineNumberStreamReader::vf1C(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

// 0143EC80  hkLineNumberStreamReader::vf20  size=25  [run]
void __fastcall hkLineNumberStreamReader::vf20(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}

// 0143ECA0  hkLineNumberStreamReader::hkLineNumberStreamReader  size=47  [run]
undefined4 * __thiscall
hkLineNumberStreamReader::hkLineNumberStreamReader(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_01006000();
  return param_1;
}

// 0143ECD0  hkBaseObject::hkBaseObject  size=25  [run]
void __fastcall hkBaseObject::hkBaseObject(undefined4 *param_1)

{
  *param_1 = hkLineNumberStreamReader::vftable;
  FUN_010060a0();
  *param_1 = vftable;
  return;
}

// 0143ECF0  FUN_0143ecf0  size=38  [run]
void FUN_0143ecf0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0143ED20  hkLineNumberStreamReader::vf00  size=52  [run]
int __thiscall hkLineNumberStreamReader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0143ED70  FUN_0143ed70  size=12  [run]
void __thiscall FUN_0143ed70(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0143ED80  FUN_0143ed80  size=14  [run]
void __thiscall FUN_0143ed80(ushort *param_1,ushort param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}

// 0143ED90  FUN_0143ed90  size=14  [run]
void __thiscall FUN_0143ed90(ushort *param_1,ushort param_2)

{
  *param_1 = *param_1 & param_2;
  return;
}

// 0143EDA0  FUN_0143eda0  size=9  [run]
void FUN_0143eda0(void)

{
  FUN_01010160();
  return;
}

// 0143EDB0  FUN_0143edb0  size=13  [run]
void __thiscall FUN_0143edb0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}

// 0143EDC0  FUN_0143edc0  size=13  [run]
void __thiscall FUN_0143edc0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd) = param_2;
  return;
}

// 0143EDD0  FUN_0143edd0  size=26  [run]
void FUN_0143edd0(int param_1)

{
  if ((*(char *)(param_1 + 0xc) == '\x14') && (*(char *)(param_1 + 0xd) == '\x02')) {
    *(undefined2 *)(param_1 + 0xc) = 0x1d;
  }
  return;
}

// 0143EDF0  FUN_0143edf0  size=103  [run]
void FUN_0143edf0(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x13') {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x400;
  }
  if ((*(char *)(param_1 + 0xc) == '\x18') || (*(char *)(param_1 + 0xc) == '\x1f')) {
    if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfff7;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 6;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xffef;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x20) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 8;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xffdf;
    }
  }
  return;
}

// 0143EE60  FUN_0143ee60  size=172  [run]
void FUN_0143ee60(undefined4 param_1,undefined4 param_2,uint param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_01010160(param_1,0);
  while( true ) {
    if ((param_3 & uVar1) != 0) {
      return;
    }
    FUN_010100a0(&PTR_vftable_018e9b94,param_1,uVar1 | param_3);
    iVar2 = FUN_010095e0();
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        uVar3 = FUN_010095f0(iVar2);
        iVar4 = FUN_01016300();
        if (iVar4 != 0) {
          FUN_0143ee60(iVar4,param_2,param_3,param_4);
        }
        (*param_4)(uVar3);
        iVar2 = iVar2 + 1;
        iVar4 = FUN_010095e0();
      } while (iVar2 < iVar4);
    }
    iVar2 = FUN_010093c0();
    if (iVar2 == 0) break;
    param_1 = FUN_010093c0();
    uVar1 = FUN_01010160(param_1,0);
  }
  return;
}

// 0143EF10  FUN_0143ef10  size=250  [run]
void FUN_0143ef10(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar2 = FUN_01010160(param_1,0);
  while( true ) {
    if ((uVar2 & 1) != 0) {
      return;
    }
    FUN_010100a0(&PTR_vftable_018e9b94,param_1,uVar2 | 1);
    iVar3 = FUN_01009660("hasVtable");
    uVar2 = (uint)*(ushort *)(iVar3 + 0x12);
    iVar3 = FUN_010093c0();
    while (iVar3 != 0) {
      *(undefined4 *)(param_1 + uVar2) = 0;
      param_1 = FUN_010093c0();
      iVar3 = FUN_010093c0();
    }
    if (*(char *)(param_1 + uVar2) != '\0') {
      iVar3 = FUN_01009660("numImplementedInterfaces");
      piVar1 = (int *)((uint)*(ushort *)(iVar3 + 0x12) + param_1);
      *piVar1 = *piVar1 + 1;
    }
    *(undefined4 *)(param_1 + uVar2) = 0;
    iVar5 = 0;
    iVar3 = FUN_010095e0();
    if (0 < iVar3) {
      do {
        iVar3 = FUN_010095f0(iVar5);
        if (*(int *)(iVar3 + 4) != 0) {
          uVar4 = FUN_010162f0(param_2);
          FUN_0143ef10(uVar4);
        }
        iVar5 = iVar5 + 1;
        iVar3 = FUN_010095e0();
      } while (iVar5 < iVar3);
    }
    iVar3 = FUN_010093c0();
    if (iVar3 == 0) break;
    param_1 = FUN_010093c0();
    uVar2 = FUN_01010160(param_1,0);
  }
  return;
}

// 0143F010  FUN_0143f010  size=92  [run]
void FUN_0143f010(void)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_01010160(in_EAX,0);
  if ((uVar1 & 4) == 0) {
    FUN_010100a0(&PTR_vftable_018e9b94,in_EAX,uVar1 | 4);
    uVar2 = FUN_010093a0("hkpConstraintInstance");
    iVar3 = FUN_01015b90(uVar2);
    if (iVar3 == 0) {
      iVar3 = FUN_010095f0(2);
      iVar4 = FUN_01009590(4);
      *(undefined1 *)((uint)*(ushort *)(iVar4 + 0x12) + iVar3) = 0x19;
    }
  }
  return;
}

// 0143F070  FUN_0143f070  size=88  [run]
void FUN_0143f070(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 1) {
    FUN_0143ef10(param_1,param_2);
    FUN_0143f010();
  }
  else if (3 < param_3) goto LAB_0143f0ad;
  FUN_0143ee60(param_1,param_2,2,FUN_0143edd0);
LAB_0143f0ad:
  if (param_3 < 5) {
    FUN_0143ee60(param_1,param_2,8,FUN_0143edf0);
  }
  return;
}

// 0143F0D0  FUN_0143f0d0  size=87  [run]
void FUN_0143f0d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *param_1;
  iVar2 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0xffffffff;
  for (; iVar1 != 0; iVar1 = param_1[iVar1]) {
    FUN_0143f070(iVar1,&local_10,param_2);
    iVar1 = iVar2 + 1;
    iVar2 = iVar2 + 1;
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return;
}

// 0143F170  FUN_0143f170  size=10  [run]
void FUN_0143f170(void)

{
  return;
}

// 0143F180  FUN_0143f180  size=125  [run]
bool __thiscall FUN_0143f180(float *param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  auVar2._4_4_ = -(uint)(ABS(param_1[5] - param_2[5]) < param_3);
  auVar2._0_4_ = -(uint)(ABS(param_1[4] - param_2[4]) < param_3);
  auVar2._8_4_ = -(uint)(ABS(param_1[6] - param_2[6]) < param_3);
  auVar2._12_4_ = -(uint)(ABS(param_1[7] - param_2[7]) < param_3);
  uVar3 = movmskps(in_EAX,auVar2);
  if (((byte)uVar3 & 7) != 7) {
    return false;
  }
  fVar7 = *param_1 * *param_2;
  fVar8 = param_1[1] * param_2[1];
  fVar9 = param_1[2] * param_2[2];
  fVar10 = param_1[3] * param_2[3];
  fVar5 = fVar9 + fVar7;
  fVar6 = fVar10 + fVar8;
  fVar7 = fVar7 + fVar9;
  fVar8 = fVar8 + fVar10;
  auVar1._4_4_ = -(uint)(ABS(param_1[1] -
                             (float)((uint)(fVar5 + fVar6) & 0x80000000 ^ (uint)param_2[1])) <
                        param_3);
  auVar1._0_4_ = -(uint)(ABS(*param_1 - (float)((uint)(fVar6 + fVar5) & 0x80000000 ^ (uint)*param_2)
                            ) < param_3);
  auVar1._8_4_ = -(uint)(ABS(param_1[2] -
                             (float)((uint)(fVar8 + fVar7) & 0x80000000 ^ (uint)param_2[2])) <
                        param_3);
  auVar1._12_4_ =
       -(uint)(ABS(param_1[3] - (float)((uint)(fVar7 + fVar8) & 0x80000000 ^ (uint)param_2[3])) <
              param_3);
  iVar4 = movmskps(param_1,auVar1);
  return iVar4 == 0xf;
}

// 0143F200  FUN_0143f200  size=151  [run]
void __thiscall FUN_0143f200(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = param_2[3];
  fVar4 = -*param_2;
  fVar5 = -param_2[1];
  fVar6 = -param_2[2];
  *param_1 = fVar4;
  param_1[1] = fVar5;
  param_1[2] = fVar6;
  param_1[3] = fVar10;
  fVar9 = param_2[4];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar11 = fVar9 * fVar4;
  fVar12 = fVar1 * fVar5;
  fVar13 = fVar2 * fVar6;
  fVar7 = (fVar12 + fVar11 + fVar13) * fVar4 + (fVar10 * fVar10 + -0.5) * fVar9 +
          (fVar2 * fVar5 - fVar1 * fVar6) * fVar10;
  fVar8 = (fVar12 + fVar11 + fVar13) * fVar5 + (fVar10 * fVar10 + -0.5) * fVar1 +
          (fVar9 * fVar6 - fVar2 * fVar4) * fVar10;
  fVar9 = (fVar12 + fVar11 + fVar13) * fVar6 + (fVar10 * fVar10 + -0.5) * fVar2 +
          (fVar1 * fVar4 - fVar9 * fVar5) * fVar10;
  fVar10 = (fVar12 + fVar11 + fVar13) * fVar10 + (fVar10 * fVar10 + -0.5) * fVar3 +
           (fVar3 * fVar10 - fVar3 * fVar10) * fVar10;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  param_1[4] = fVar7;
  param_1[5] = fVar8;
  param_1[6] = fVar9;
  param_1[7] = fVar10;
  param_1[4] = -fVar7;
  param_1[5] = -fVar8;
  param_1[6] = -fVar9;
  param_1[7] = -fVar10;
  return;
}

// 0143F2A0  FUN_0143f2a0  size=328  [run]
void __thiscall FUN_0143f2a0(float *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar13 = param_2[3];
  fVar12 = *(float *)(param_3 + 2);
  fVar4 = *(float *)((int)param_3 + 0x14);
  fVar5 = *(float *)(param_3 + 3);
  fVar6 = *(float *)((int)param_3 + 0x1c);
  fVar7 = fVar12 * fVar1;
  fVar8 = fVar4 * fVar2;
  fVar9 = fVar5 * fVar3;
  fVar10 = (fVar8 + fVar7 + fVar9) * fVar1 + (fVar13 * fVar13 + -0.5) * fVar12 +
           (fVar5 * fVar2 - fVar4 * fVar3) * fVar13;
  fVar11 = (fVar8 + fVar7 + fVar9) * fVar2 + (fVar13 * fVar13 + -0.5) * fVar4 +
           (fVar12 * fVar3 - fVar5 * fVar1) * fVar13;
  fVar12 = (fVar8 + fVar7 + fVar9) * fVar3 + (fVar13 * fVar13 + -0.5) * fVar5 +
           (fVar4 * fVar1 - fVar12 * fVar2) * fVar13;
  fVar13 = (fVar8 + fVar7 + fVar9) * fVar13 + (fVar13 * fVar13 + -0.5) * fVar6 +
           (fVar6 * fVar13 - fVar6 * fVar13) * fVar13;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = fVar10 + fVar10 + param_2[4];
  param_1[5] = fVar11 + fVar11 + fVar1;
  param_1[6] = fVar12 + fVar12 + fVar2;
  param_1[7] = fVar13 + fVar13 + fVar3;
  fVar1 = *(float *)((int)param_3 + 0xc);
  local_20 = (float)*(undefined8 *)param_2;
  fStack_1c = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  fStack_18 = (float)*(undefined8 *)(param_2 + 2);
  local_30 = (float)*param_3;
  fStack_2c = (float)((ulonglong)*param_3 >> 0x20);
  fStack_28 = (float)param_3[1];
  fVar2 = param_2[3];
  *param_1 = (fStack_1c * fStack_28 - fStack_18 * fStack_2c) + local_30 * fVar2 + local_20 * fVar1;
  param_1[1] = (fStack_18 * local_30 - local_20 * fStack_28) + fStack_2c * fVar2 + fStack_1c * fVar1
  ;
  param_1[2] = (local_20 * fStack_2c - fStack_1c * local_30) + fStack_28 * fVar2 + fStack_18 * fVar1
  ;
  param_1[3] = fVar1 * fVar2 - (fStack_1c * fStack_2c + local_20 * local_30 + fStack_18 * fStack_28)
  ;
  return;
}

// 01440B60  FUN_01440b60  size=26  [run]
void __thiscall FUN_01440b60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[4] = *param_3;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

// 01440B80  FUN_01440b80  size=52  [run]
void __thiscall FUN_01440b80(uint *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_3[2] * param_2[2] + *param_3 * *param_2;
  fVar5 = param_3[3] * param_2[3] + param_3[1] * param_2[1];
  fVar6 = *param_3 * *param_2 + param_3[2] * param_2[2];
  fVar7 = param_3[1] * param_2[1] + param_3[3] * param_2[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = (uint)(fVar5 + fVar4) & 0x80000000 ^ (uint)*param_2;
  param_1[1] = (uint)(fVar4 + fVar5) & 0x80000000 ^ (uint)fVar1;
  param_1[2] = (uint)(fVar7 + fVar6) & 0x80000000 ^ (uint)fVar2;
  param_1[3] = (uint)(fVar6 + fVar7) & 0x80000000 ^ (uint)fVar3;
  return;
}

// 01440BC0  FUN_01440bc0  size=123  [run]
uint __fastcall FUN_01440bc0(float *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  auVar2._4_4_ = -(uint)(ABS(param_1[5] - param_3[5]) < param_4[1]);
  auVar2._0_4_ = -(uint)(ABS(param_1[4] - param_3[4]) < *param_4);
  auVar2._8_4_ = -(uint)(ABS(param_1[6] - param_3[6]) < param_4[2]);
  auVar2._12_4_ = -(uint)(ABS(param_1[7] - param_3[7]) < param_4[3]);
  uVar4 = movmskps(param_2,auVar2);
  if (((byte)uVar4 & 7) != 7) {
    return (uint)param_4 & 0xffffff00;
  }
  fVar7 = *param_1 * *param_3;
  fVar8 = param_1[1] * param_3[1];
  fVar9 = param_1[2] * param_3[2];
  fVar10 = param_1[3] * param_3[3];
  fVar5 = fVar9 + fVar7;
  fVar6 = fVar10 + fVar8;
  fVar7 = fVar7 + fVar9;
  fVar8 = fVar8 + fVar10;
  auVar1._4_4_ = -(uint)(ABS(param_1[1] -
                             (float)((uint)(fVar5 + fVar6) & 0x80000000 ^ (uint)param_3[1])) <
                        param_4[1]);
  auVar1._0_4_ = -(uint)(ABS(*param_1 - (float)((uint)(fVar6 + fVar5) & 0x80000000 ^ (uint)*param_3)
                            ) < *param_4);
  auVar1._8_4_ = -(uint)(ABS(param_1[2] -
                             (float)((uint)(fVar8 + fVar7) & 0x80000000 ^ (uint)param_3[2])) <
                        param_4[2]);
  auVar1._12_4_ =
       -(uint)(ABS(param_1[3] - (float)((uint)(fVar7 + fVar8) & 0x80000000 ^ (uint)param_3[3])) <
              param_4[3]);
  iVar3 = movmskps(param_4,auVar1);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 0xf);
}

// 01441040  FUN_01441040  size=156  [run]
void FUN_01441040(undefined1 (*param_1) [16],int param_2,uint *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar3 [12];
  undefined1 auVar2 [16];
  undefined1 auVar4 [16];
  
  if (param_2 == 0) {
    *param_3 = 0x7f7fffee;
    param_3[1] = 0x7f7fffee;
    param_3[2] = 0x7f7fffee;
    param_3[3] = 0x7f7fffee;
    param_3[4] = *param_3 ^ 0x80000000;
    param_3[5] = param_3[1] ^ 0x80000000;
    param_3[6] = param_3[2] ^ 0x80000000;
    param_3[7] = param_3[3] ^ 0x80000000;
    return;
  }
  auVar2 = *param_1;
  auVar1 = auVar2._0_12_;
  auVar3 = auVar1;
  if (1 < param_2) {
    param_2 = param_2 + -1;
    auVar4 = auVar2;
    do {
      param_1 = param_1 + 1;
      auVar2 = minps(auVar2,*param_1);
      auVar1 = auVar2._0_12_;
      auVar4 = maxps(auVar4,*param_1);
      auVar3 = auVar4._0_12_;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *param_3 = auVar1._0_4_;
  param_3[1] = auVar1._4_4_;
  param_3[2] = auVar1._8_4_;
  param_3[3] = 0;
  param_3[4] = auVar3._0_4_;
  param_3[5] = auVar3._4_4_;
  param_3[6] = auVar3._8_4_;
  param_3[7] = 0;
  return;
}

// 014410F0  FUN_014410f0  size=177  [run]
void FUN_014410f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = (*param_2 + param_2[4]) * 0.5;
  fVar5 = (param_2[1] + param_2[5]) * 0.5;
  fVar6 = (param_2[2] + param_2[6]) * 0.5;
  fVar1 = (param_2[4] - *param_2) * 0.5;
  fVar2 = (param_2[5] - param_2[1]) * 0.5;
  fVar3 = (param_2[6] - param_2[2]) * 0.5;
  fVar7 = ABS(fVar1 * *param_1) + ABS(fVar2 * param_1[4]) + ABS(fVar3 * param_1[8]) + *param_3;
  fVar8 = ABS(fVar1 * param_1[1]) + ABS(fVar2 * param_1[5]) + ABS(fVar3 * param_1[9]) + param_3[1];
  fVar9 = ABS(fVar1 * param_1[2]) + ABS(fVar2 * param_1[6]) + ABS(fVar3 * param_1[10]) + param_3[2];
  fVar10 = ABS(fVar1 * param_1[3]) + ABS(fVar2 * param_1[7]) +
           ABS(fVar3 * param_1[0xb]) + param_3[3];
  fVar1 = fVar4 * *param_1 + fVar5 * param_1[4] + fVar6 * param_1[8] + param_1[0xc];
  fVar2 = fVar4 * param_1[1] + fVar5 * param_1[5] + fVar6 * param_1[9] + param_1[0xd];
  fVar3 = fVar4 * param_1[2] + fVar5 * param_1[6] + fVar6 * param_1[10] + param_1[0xe];
  fVar4 = fVar4 * param_1[3] + fVar5 * param_1[7] + fVar6 * param_1[0xb] + param_1[0xf];
  param_4[4] = fVar1 + fVar7;
  param_4[5] = fVar2 + fVar8;
  param_4[6] = fVar3 + fVar9;
  param_4[7] = fVar4 + fVar10;
  *param_4 = -fVar7 + fVar1;
  param_4[1] = -fVar8 + fVar2;
  param_4[2] = -fVar9 + fVar3;
  param_4[3] = -fVar10 + fVar4;
  return;
}

// 014411B0  FUN_014411b0  size=171  [run]
void FUN_014411b0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar4 = (*param_2 + param_2[4]) * 0.5;
  fVar5 = (param_2[1] + param_2[5]) * 0.5;
  fVar6 = (param_2[2] + param_2[6]) * 0.5;
  fVar1 = (param_2[4] - *param_2) * 0.5;
  fVar2 = (param_2[5] - param_2[1]) * 0.5;
  fVar3 = (param_2[6] - param_2[2]) * 0.5;
  fVar7 = ABS(fVar1 * *param_1) + ABS(fVar2 * param_1[4]) + ABS(fVar3 * param_1[8]);
  fVar8 = ABS(fVar1 * param_1[1]) + ABS(fVar2 * param_1[5]) + ABS(fVar3 * param_1[9]);
  fVar9 = ABS(fVar1 * param_1[2]) + ABS(fVar2 * param_1[6]) + ABS(fVar3 * param_1[10]);
  fVar10 = ABS(fVar1 * param_1[3]) + ABS(fVar2 * param_1[7]) + ABS(fVar3 * param_1[0xb]);
  fVar1 = fVar4 * *param_1 + fVar5 * param_1[4] + fVar6 * param_1[8] + param_1[0xc];
  fVar2 = fVar4 * param_1[1] + fVar5 * param_1[5] + fVar6 * param_1[9] + param_1[0xd];
  fVar3 = fVar4 * param_1[2] + fVar5 * param_1[6] + fVar6 * param_1[10] + param_1[0xe];
  fVar4 = fVar4 * param_1[3] + fVar5 * param_1[7] + fVar6 * param_1[0xb] + param_1[0xf];
  param_3[4] = fVar1 + fVar7;
  param_3[5] = fVar2 + fVar8;
  param_3[6] = fVar3 + fVar9;
  param_3[7] = fVar4 + fVar10;
  *param_3 = -fVar7 + fVar1;
  param_3[1] = -fVar8 + fVar2;
  param_3[2] = -fVar9 + fVar3;
  param_3[3] = -fVar10 + fVar4;
  return;
}

// 01441350  FUN_01441350  size=130  [run]
void FUN_01441350(int *param_1,int param_2,undefined1 (*param_3) [16])

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)*param_1;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    *(undefined4 *)*param_3 = *puVar2;
    *(undefined4 *)(*param_3 + 4) = uVar7;
    *(undefined4 *)(*param_3 + 8) = uVar8;
    *(undefined4 *)(*param_3 + 0xc) = uVar9;
    puVar2 = (undefined4 *)*param_1;
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    iVar6 = 1;
    *(undefined4 *)param_3[1] = uVar7;
    *(undefined4 *)(param_3[1] + 4) = uVar8;
    *(undefined4 *)(param_3[1] + 8) = uVar9;
    *(undefined4 *)(param_3[1] + 0xc) = uVar10;
    if (1 < param_2) {
      do {
        auVar11 = minps(*(undefined1 (*) [16])param_1[iVar6],*param_3);
        *param_3 = auVar11;
        piVar1 = param_1 + iVar6;
        iVar6 = iVar6 + 1;
        auVar11._4_4_ = uVar8;
        auVar11._0_4_ = uVar7;
        auVar11._8_4_ = uVar9;
        auVar11._12_4_ = uVar10;
        auVar11 = maxps(*(undefined1 (*) [16])*piVar1,auVar11);
        uVar7 = auVar11._0_4_;
        uVar8 = auVar11._4_4_;
        uVar9 = auVar11._8_4_;
        uVar10 = auVar11._12_4_;
        param_3[1] = auVar11;
      } while (iVar6 < param_2);
    }
    *(undefined4 *)(*param_3 + 0xc) = 0;
    *(undefined4 *)(param_3[1] + 0xc) = 0;
    return;
  }
  *(undefined4 *)*param_3 = 0x7f7fffee;
  *(undefined4 *)(*param_3 + 4) = 0x7f7fffee;
  *(undefined4 *)(*param_3 + 8) = 0x7f7fffee;
  *(undefined4 *)(*param_3 + 0xc) = 0x7f7fffee;
  uVar3 = *(uint *)(*param_3 + 4);
  uVar4 = *(uint *)(*param_3 + 8);
  uVar5 = *(uint *)(*param_3 + 0xc);
  *(uint *)param_3[1] = *(uint *)*param_3 ^ 0x80000000;
  *(uint *)(param_3[1] + 4) = uVar3 ^ 0x80000000;
  *(uint *)(param_3[1] + 8) = uVar4 ^ 0x80000000;
  *(uint *)(param_3[1] + 0xc) = uVar5 ^ 0x80000000;
  return;
}

// 014413E0  FUN_014413e0  size=90  [run]
void FUN_014413e0(undefined1 (*param_1) [12],int param_2,int param_3,undefined4 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar4 [16];
  undefined1 auVar6 [16];
  undefined1 auVar3 [12];
  undefined1 auVar5 [12];
  
  auVar3 = *param_1;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auVar3;
  auVar6._12_4_ = 0;
  auVar6._0_12_ = auVar3;
  auVar5 = auVar3;
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      param_1 = (undefined1 (*) [12])(*param_1 + param_3);
      param_2 = param_2 + -1;
      auVar1._12_4_ = 0;
      auVar1._0_12_ = *param_1;
      auVar4 = minps(auVar4,auVar1);
      auVar3 = auVar4._0_12_;
      auVar2._12_4_ = 0;
      auVar2._0_12_ = *param_1;
      auVar6 = maxps(auVar6,auVar2);
      auVar5 = auVar6._0_12_;
    } while (param_2 != 0);
  }
  *param_4 = auVar3._0_4_;
  param_4[1] = auVar3._4_4_;
  param_4[2] = auVar3._8_4_;
  param_4[3] = 0;
  param_4[4] = auVar5._0_4_;
  param_4[5] = auVar5._4_4_;
  param_4[6] = auVar5._8_4_;
  param_4[7] = 0;
  return;
}

// 01441440  FUN_01441440  size=1052  [run]
void FUN_01441440(int param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 in_XMM3 [16];
  undefined1 auVar12 [16];
  float fVar15;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *param_2 = param_1;
  FUN_01004c20(param_1);
  local_60 = *(float *)(param_1 + 0x5c) * (float)(undefined *)0x0;
  local_40 = 0.5;
  fStack_3c = 0.5;
  fStack_38 = 0.5;
  fStack_34 = 0.5;
  local_50 = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60)) * local_60 +
             *(float *)(param_1 + 0x60);
  fStack_4c = (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 100)) * local_60 +
              *(float *)(param_1 + 100);
  fStack_48 = (*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68)) * local_60 +
              *(float *)(param_1 + 0x68);
  fStack_44 = (*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x6c)) * local_60 +
              *(float *)(param_1 + 0x6c);
  fVar6 = fStack_48 * fStack_48 + local_50 * local_50;
  fVar8 = fStack_44 * fStack_44 + fStack_4c * fStack_4c;
  fVar9 = local_50 * local_50 + fStack_48 * fStack_48;
  fVar10 = fStack_4c * fStack_4c + fStack_44 * fStack_44;
  fVar11 = fVar8 + fVar6;
  fVar6 = fVar6 + fVar8;
  fVar8 = fVar10 + fVar9;
  fVar9 = fVar9 + fVar10;
  auVar12._4_4_ = fVar6;
  auVar12._0_4_ = fVar11;
  auVar12._8_4_ = fVar8;
  auVar12._12_4_ = fVar9;
  auVar12 = rsqrtps(in_XMM3,auVar12);
  local_30 = 3.0;
  fStack_2c = 3.0;
  fStack_28 = 3.0;
  fStack_24 = 3.0;
  fVar10 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  fVar15 = auVar12._12_4_;
  local_50 = (3.0 - fVar10 * fVar11 * fVar10) * fVar10 * 0.5 * local_50;
  fStack_4c = (3.0 - fVar13 * fVar6 * fVar13) * fVar13 * 0.5 * fStack_4c;
  fStack_48 = (3.0 - fVar14 * fVar8 * fVar14) * fVar14 * 0.5 * fStack_48;
  fStack_44 = (3.0 - fVar15 * fVar9 * fVar15) * fVar15 * 0.5 * fStack_44;
  fStack_5c = local_60;
  fStack_58 = local_60;
  fStack_54 = local_60;
  FUN_0100ac20(&local_50);
  fVar6 = *(float *)(param_1 + 0x54);
  fVar8 = *(float *)(param_1 + 0x58);
  fVar9 = *(float *)(param_1 + 0x5c);
  fVar10 = *(float *)(param_1 + 0x44);
  fVar11 = *(float *)(param_1 + 0x48);
  fVar13 = *(float *)(param_1 + 0x4c);
  fVar14 = *(float *)(param_1 + 0x44);
  fVar15 = *(float *)(param_1 + 0x48);
  fVar5 = *(float *)(param_1 + 0x4c);
  param_2[0x54] =
       (int)((*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x40)) * local_60 +
            *(float *)(param_1 + 0x40));
  param_2[0x55] = (int)((fVar6 - fVar10) * fStack_5c + fVar14);
  param_2[0x56] = (int)((fVar8 - fVar11) * fStack_58 + fVar15);
  param_2[0x57] = (int)((fVar9 - fVar13) * fStack_54 + fVar5);
  fVar6 = *(float *)(param_1 + 0x80);
  fVar8 = *(float *)(param_1 + 0x84);
  fVar9 = *(float *)(param_1 + 0x88);
  param_2[0x54] =
       (int)((float)param_2[0x54] -
            (fVar8 * (float)param_2[0x4c] + fVar6 * (float)param_2[0x48] +
            fVar9 * (float)param_2[0x50]));
  param_2[0x55] =
       (int)((float)param_2[0x55] -
            (fVar8 * (float)param_2[0x4d] + fVar6 * (float)param_2[0x49] +
            fVar9 * (float)param_2[0x51]));
  param_2[0x56] =
       (int)((float)param_2[0x56] -
            (fVar8 * (float)param_2[0x4e] + fVar6 * (float)param_2[0x4a] +
            fVar9 * (float)param_2[0x52]));
  param_2[0x57] =
       (int)((float)param_2[0x57] -
            (fVar8 * (float)param_2[0x4f] + fVar6 * (float)param_2[0x4b] +
            fVar9 * (float)param_2[0x53]));
  if (*(float *)(param_1 + 0x5c) == (float)(undefined *)0x0) {
    param_2[0x44] = 0;
    return;
  }
  local_1c = 1.0 / *(float *)(param_1 + 0x5c);
  local_14 = *(float *)(param_1 + 0x9c);
  if (0.3926991 < local_14) {
    if (0.7853982 < local_14) {
      local_20 = (local_14 + 0.3926991) * 2.546479;
      local_18 = 1.0 / local_20;
      param_2[0x44] = 0;
      local_14 = 1.0;
      if (local_20 <= 1.0) {
        return;
      }
      do {
        iVar2 = param_2[0x44];
        fVar6 = *(float *)(param_1 + 0x4c);
        param_2[0x44] = iVar2 + 1;
        local_50 = ((local_14 * local_18 * local_1c + fVar6) - *(float *)(param_1 + 0x4c)) *
                   *(float *)(param_1 + 0x5c);
        pfVar1 = (float *)(param_2 + iVar2 * 0x10 + 4);
        local_60 = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60)) * local_50 +
                   *(float *)(param_1 + 0x60);
        fStack_5c = (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 100)) * local_50 +
                    *(float *)(param_1 + 100);
        fStack_58 = (*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68)) * local_50 +
                    *(float *)(param_1 + 0x68);
        fStack_54 = (*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x6c)) * local_50 +
                    *(float *)(param_1 + 0x6c);
        fVar6 = fStack_58 * fStack_58 + local_60 * local_60;
        fVar8 = fStack_54 * fStack_54 + fStack_5c * fStack_5c;
        fVar9 = local_60 * local_60 + fStack_58 * fStack_58;
        fVar10 = fStack_5c * fStack_5c + fStack_54 * fStack_54;
        fVar11 = fVar8 + fVar6;
        fVar6 = fVar6 + fVar8;
        fVar8 = fVar10 + fVar9;
        fVar9 = fVar9 + fVar10;
        auVar4._4_4_ = fVar6;
        auVar4._0_4_ = fVar11;
        auVar4._8_4_ = fVar8;
        auVar4._12_4_ = fVar9;
        auVar12 = rsqrtps(ZEXT416((uint)local_18),auVar4);
        fVar10 = auVar12._0_4_;
        fVar13 = auVar12._4_4_;
        fVar14 = auVar12._8_4_;
        fVar15 = auVar12._12_4_;
        local_60 = (local_30 - fVar10 * fVar11 * fVar10) * local_40 * fVar10 * local_60;
        fStack_5c = (fStack_2c - fVar13 * fVar6 * fVar13) * fStack_3c * fVar13 * fStack_5c;
        fStack_58 = (fStack_28 - fVar14 * fVar8 * fVar14) * fStack_38 * fVar14 * fStack_58;
        fStack_54 = (fStack_24 - fVar15 * fVar9 * fVar15) * fStack_34 * fVar15 * fStack_54;
        fStack_4c = local_50;
        fStack_48 = local_50;
        fStack_44 = local_50;
        FUN_0100ac20(&local_60);
        fVar6 = *(float *)(param_1 + 0x54);
        fVar8 = *(float *)(param_1 + 0x58);
        fVar9 = *(float *)(param_1 + 0x5c);
        fVar10 = *(float *)(param_1 + 0x44);
        fVar11 = *(float *)(param_1 + 0x48);
        fVar13 = *(float *)(param_1 + 0x4c);
        fVar14 = *(float *)(param_1 + 0x44);
        fVar15 = *(float *)(param_1 + 0x48);
        fVar5 = *(float *)(param_1 + 0x4c);
        pfVar1[0xc] = (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x40)) * local_50 +
                      *(float *)(param_1 + 0x40);
        pfVar1[0xd] = (fVar6 - fVar10) * fStack_4c + fVar14;
        pfVar1[0xe] = (fVar8 - fVar11) * fStack_48 + fVar15;
        pfVar1[0xf] = (fVar9 - fVar13) * fStack_44 + fVar5;
        fVar6 = *(float *)(param_1 + 0x80);
        fVar8 = *(float *)(param_1 + 0x84);
        fVar9 = *(float *)(param_1 + 0x88);
        pfVar1[0xc] = pfVar1[0xc] - (fVar8 * pfVar1[4] + fVar6 * *pfVar1 + fVar9 * pfVar1[8]);
        pfVar1[0xd] = pfVar1[0xd] - (fVar8 * pfVar1[5] + fVar6 * pfVar1[1] + fVar9 * pfVar1[9]);
        pfVar1[0xe] = pfVar1[0xe] - (fVar8 * pfVar1[6] + fVar6 * pfVar1[2] + fVar9 * pfVar1[10]);
        pfVar1[0xf] = pfVar1[0xf] - (fVar8 * pfVar1[7] + fVar6 * pfVar1[3] + fVar9 * pfVar1[0xb]);
        pfVar1[0xf] = 1.0824;
        local_14 = local_14 + 2.0;
      } while (local_14 < local_20);
      return;
    }
    local_50 = ((local_1c * 0.5 + *(float *)(param_1 + 0x4c)) - *(float *)(param_1 + 0x4c)) *
               *(float *)(param_1 + 0x5c);
    local_60 = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60)) * local_50 +
               *(float *)(param_1 + 0x60);
    fStack_5c = (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 100)) * local_50 +
                *(float *)(param_1 + 100);
    fStack_58 = (*(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68)) * local_50 +
                *(float *)(param_1 + 0x68);
    fStack_54 = (*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x6c)) * local_50 +
                *(float *)(param_1 + 0x6c);
    auVar7._0_4_ = fStack_58 * fStack_58 + local_60 * local_60;
    auVar7._4_4_ = fStack_54 * fStack_54 + fStack_5c * fStack_5c;
    auVar7._8_4_ = local_60 * local_60 + fStack_58 * fStack_58;
    auVar7._12_4_ = fStack_5c * fStack_5c + fStack_54 * fStack_54;
    auVar3._4_4_ = auVar7._0_4_ + auVar7._4_4_;
    auVar3._0_4_ = auVar7._4_4_ + auVar7._0_4_;
    auVar3._8_4_ = auVar7._12_4_ + auVar7._8_4_;
    auVar3._12_4_ = auVar7._8_4_ + auVar7._12_4_;
    auVar12 = rsqrtps(auVar7,auVar3);
    fVar6 = auVar12._0_4_;
    fVar8 = auVar12._4_4_;
    fVar9 = auVar12._8_4_;
    fVar10 = auVar12._12_4_;
    local_60 = fVar6 * local_40 * (local_30 - fVar6 * (auVar7._4_4_ + auVar7._0_4_) * fVar6) *
               local_60;
    fStack_5c = fVar8 * fStack_3c * (fStack_2c - fVar8 * (auVar7._0_4_ + auVar7._4_4_) * fVar8) *
                fStack_5c;
    fStack_58 = fVar9 * fStack_38 * (fStack_28 - fVar9 * (auVar7._12_4_ + auVar7._8_4_) * fVar9) *
                fStack_58;
    fStack_54 = fVar10 * fStack_34 * (fStack_24 - fVar10 * (auVar7._8_4_ + auVar7._12_4_) * fVar10)
                * fStack_54;
    fStack_4c = local_50;
    fStack_48 = local_50;
    fStack_44 = local_50;
    FUN_0100ac20(&local_60);
    fVar6 = *(float *)(param_1 + 0x54);
    fVar8 = *(float *)(param_1 + 0x58);
    fVar9 = *(float *)(param_1 + 0x5c);
    fVar10 = *(float *)(param_1 + 0x44);
    fVar11 = *(float *)(param_1 + 0x48);
    fVar13 = *(float *)(param_1 + 0x4c);
    fVar14 = *(float *)(param_1 + 0x44);
    fVar15 = *(float *)(param_1 + 0x48);
    fVar5 = *(float *)(param_1 + 0x4c);
    param_2[0x10] =
         (int)((*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x40)) * local_50 +
              *(float *)(param_1 + 0x40));
    param_2[0x11] = (int)((fVar6 - fVar10) * fStack_4c + fVar14);
    param_2[0x12] = (int)((fVar8 - fVar11) * fStack_48 + fVar15);
    param_2[0x13] = (int)((fVar9 - fVar13) * fStack_44 + fVar5);
    fVar6 = *(float *)(param_1 + 0x80);
    fVar8 = *(float *)(param_1 + 0x84);
    fVar9 = *(float *)(param_1 + 0x88);
    param_2[0x10] =
         (int)((float)param_2[0x10] -
              (fVar8 * (float)param_2[8] + fVar6 * (float)param_2[4] + fVar9 * (float)param_2[0xc]))
    ;
    param_2[0x11] =
         (int)((float)param_2[0x11] -
              (fVar8 * (float)param_2[9] + fVar6 * (float)param_2[5] + fVar9 * (float)param_2[0xd]))
    ;
    param_2[0x12] =
         (int)((float)param_2[0x12] -
              (fVar8 * (float)param_2[10] + fVar6 * (float)param_2[6] + fVar9 * (float)param_2[0xe])
              );
    param_2[0x13] =
         (int)((float)param_2[0x13] -
              (fVar8 * (float)param_2[0xb] + fVar6 * (float)param_2[7] + fVar9 * (float)param_2[0xf]
              ));
    local_14 = local_14 * local_14 * 0.25;
  }
  else {
    param_2[4] = param_2[0x48];
    param_2[5] = param_2[0x49];
    param_2[6] = param_2[0x4a];
    param_2[7] = param_2[0x4b];
    param_2[8] = param_2[0x4c];
    param_2[9] = param_2[0x4d];
    param_2[10] = param_2[0x4e];
    param_2[0xb] = param_2[0x4f];
    param_2[0xc] = param_2[0x50];
    param_2[0xd] = param_2[0x51];
    param_2[0xe] = param_2[0x52];
    param_2[0xf] = param_2[0x53];
    param_2[0x10] = param_2[0x54];
    param_2[0x11] = param_2[0x55];
    param_2[0x12] = param_2[0x56];
    param_2[0x13] = param_2[0x57];
    local_14 = local_14 * local_14;
  }
  param_2[0x13] = (int)(1.0 / (1.0 - local_14 * 0.5));
  param_2[0x44] = 1;
  return;
}

// 01441870  FUN_01441870  size=150  [run]
void FUN_01441870(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = *param_3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar7 = ABS(fVar3 * *param_1) + ABS(fVar4 * param_1[4]) + ABS(fVar5 * param_1[8]);
  fVar8 = ABS(fVar3 * param_1[1]) + ABS(fVar4 * param_1[5]) + ABS(fVar5 * param_1[9]);
  fVar9 = ABS(fVar3 * param_1[2]) + ABS(fVar4 * param_1[6]) + ABS(fVar5 * param_1[10]);
  fVar10 = ABS(fVar3 * param_1[3]) + ABS(fVar4 * param_1[7]) + ABS(fVar5 * param_1[0xb]);
  fVar3 = fVar6 * *param_1 + fVar1 * param_1[4] + fVar2 * param_1[8] + param_1[0xc];
  fVar4 = fVar6 * param_1[1] + fVar1 * param_1[5] + fVar2 * param_1[9] + param_1[0xd];
  fVar5 = fVar6 * param_1[2] + fVar1 * param_1[6] + fVar2 * param_1[10] + param_1[0xe];
  fVar6 = fVar6 * param_1[3] + fVar1 * param_1[7] + fVar2 * param_1[0xb] + param_1[0xf];
  param_4[4] = fVar3 + fVar7;
  param_4[5] = fVar4 + fVar8;
  param_4[6] = fVar5 + fVar9;
  param_4[7] = fVar6 + fVar10;
  *param_4 = -fVar7 + fVar3;
  param_4[1] = -fVar8 + fVar4;
  param_4[2] = -fVar9 + fVar5;
  param_4[3] = -fVar10 + fVar6;
  return;
}

// 01441A00  FUN_01441a00  size=31  [run]
int * __thiscall FUN_01441a00(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 01441A20  FUN_01441a20  size=33  [run]
int * __thiscall FUN_01441a20(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    FUN_01006000();
  }
  *param_1 = iVar1;
  return param_1;
}

// 01441A50  FUN_01441a50  size=40  [run]
void __thiscall FUN_01441a50(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = param_2;
  return;
}

// 01441A80  FUN_01441a80  size=24  [run]
undefined4 __fastcall FUN_01441a80(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = (**(code **)(*DAT_0225ba90 + 0x14))(*param_1);
    return uVar1;
  }
  return 0;
}

// 01441AA0  hkDefaultClassNameRegistry::hkDefaultClassNameRegistry  size=80  [run]
undefined4 * hkDefaultClassNameRegistry::hkDefaultClassNameRegistry(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
  puVar2[1] = 0x10020;
  *puVar2 = hkDynamicClassNameRegistry::vftable;
  puVar2[2] = "hk_2011.3.0-r1";
  FUN_01025830(0);
  *puVar2 = vftable;
  return puVar2;
}

// 01441AF0  hkTypeInfoRegistry::hkTypeInfoRegistry  size=81  [run]
undefined4 * hkTypeInfoRegistry::hkTypeInfoRegistry(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
  puVar2[1] = 0x10020;
  *puVar2 = vftable;
  FUN_01025830(0);
  puVar2[6] = 1;
  puVar2[7] = 1;
  return puVar2;
}

// 01441B50  hkIstream::hkIstream  size=39  [run]
undefined4 * __thiscall hkIstream::hkIstream(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  FUN_01006000();
  return param_1;
}

// 01441B80  hkBaseObject::hkBaseObject_216  size=29  [run]
void __fastcall hkBaseObject::hkBaseObject_216(undefined4 *param_1)

{
  *param_1 = hkIstream::vftable;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  *param_1 = vftable;
  return;
}

// 01441BA0  FUN_01441ba0  size=41  [run]
undefined1 * __thiscall FUN_01441ba0(int param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}

// 01441BD0  FUN_01441bd0  size=133  [run]
void FUN_01441bd0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  char local_44 [64];
  
  (**(code **)(*unaff_EDI + 0x1c))(0x40);
  iVar2 = (**(code **)(*unaff_EDI + 0x10))(local_44,0x40);
  if (iVar2 == 0) {
    return;
  }
  do {
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        cVar1 = local_44[iVar3];
        if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
          (**(code **)(*unaff_EDI + 0x20))();
          (**(code **)(*unaff_EDI + 0x14))(iVar3);
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    (**(code **)(*unaff_EDI + 0x1c))(0x40);
    iVar2 = (**(code **)(*unaff_EDI + 0x10))(local_44,0x40);
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}

// 01441C60  FUN_01441c60  size=378  [run]
undefined8 FUN_01441c60(int *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char local_110 [256];
  int local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  FUN_01441bd0();
  *param_2 = 0;
  local_c = 0;
  uStack_8 = 0;
  iVar3 = 0;
  (**(code **)(*param_1 + 0x1c))(0xff);
  local_10 = (**(code **)(*param_1 + 0x10))(local_110,0xff);
  if (local_10 == 0) {
    return 0;
  }
  if (local_110[0] != '+') {
    if (local_110[0] != '-') goto LAB_01441ccb;
    *param_2 = 1;
  }
  iVar3 = 1;
LAB_01441ccb:
  if ((((iVar3 + 3 < local_10) && (local_110[iVar3] == '0')) &&
      ((local_110[iVar3 + 1] == 'x' || (local_110[iVar3 + 1] == 'X')))) &&
     ((((cVar1 = local_110[iVar3 + 2], '/' < cVar1 && (cVar1 < ':')) ||
       (('`' < cVar1 && (cVar1 < 'g')))) || (('@' < cVar1 && (cVar1 < 'G')))))) {
    param_2 = (undefined1 *)0x10;
    iVar3 = iVar3 + 2;
  }
  else if ((iVar3 + 2 < local_10) &&
          (((local_110[iVar3] == '0' && ('/' < local_110[iVar3 + 1])) &&
           (local_110[iVar3 + 1] < ':')))) {
    param_2 = (undefined1 *)0x8;
    iVar3 = iVar3 + 1;
  }
  else {
    param_2 = (undefined1 *)0xa;
  }
  uVar2 = uStack_8;
  if (iVar3 < local_10) {
    do {
      cVar1 = local_110[iVar3];
      uVar4 = 0xffffffff;
      if ((cVar1 < '0') || ('9' < cVar1)) {
        if ((cVar1 < 'B') || ('F' < cVar1)) {
          if (('a' < cVar1) && (cVar1 < 'g')) {
            uVar4 = (int)cVar1 - 0x57;
          }
        }
        else {
          uVar4 = (int)cVar1 - 0x37;
        }
      }
      else {
        uVar4 = (int)cVar1 - 0x30;
      }
      if (param_2 <= uVar4) break;
      lVar5 = __allmul(param_2,0,local_c,uVar2);
      uVar2 = (undefined4)(lVar5 + (ulonglong)uVar4 >> 0x20);
      iVar3 = iVar3 + 1;
      local_c = (int)(lVar5 + (ulonglong)uVar4);
    } while (iVar3 < local_10);
  }
  (**(code **)(*param_1 + 0x20))();
  (**(code **)(*param_1 + 0x14))(iVar3);
  return CONCAT44(uVar2,local_c);
}

// 01441DE0  FUN_01441de0  size=240  [run]
float10 FUN_01441de0(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  char local_104 [256];
  
  FUN_01441bd0();
  iVar3 = 0;
  (**(code **)(*in_EAX + 0x1c))(0xff);
  iVar2 = (**(code **)(*in_EAX + 0x10))(local_104,0xff);
  if ((iVar2 != 0) &&
     ((((('/' < local_104[0] && (local_104[0] < ':')) || (local_104[0] == '+')) ||
       (((local_104[0] == '-' || (local_104[0] == '.')) || (local_104[0] == ',')))) &&
      (iVar3 = 1, 1 < iVar2)))) {
    do {
      cVar1 = local_104[iVar3];
      if (((cVar1 < '0') || ('9' < cVar1)) &&
         ((cVar1 != '+' && (((cVar1 != '-' && (cVar1 != 'E')) && (cVar1 != 'e')))))) {
        if (cVar1 != '.') {
          if (cVar1 == ',') goto LAB_01441e7f;
          break;
        }
LAB_01441e89:
        local_104[iVar3] = '.';
      }
      else {
LAB_01441e7f:
        if ((cVar1 == '.') || (cVar1 == ',')) goto LAB_01441e89;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  (**(code **)(*in_EAX + 0x20))();
  (**(code **)(*in_EAX + 0x14))(iVar3);
  local_104[iVar3] = '\0';
  if (iVar3 < 1) {
    return (float10)-1.0;
  }
  fVar4 = (float10)FUN_00fe0840(local_104,0);
  return fVar4;
}

// 01441EE0  FUN_01441ee0  size=248  [run]
int __thiscall FUN_01441ee0(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_c [4];
  char local_8;
  char local_7;
  
  FUN_01441bd0();
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))(6);
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(local_c,6);
  if (3 < iVar1) {
    iVar2 = FUN_01015bd0(local_c,&DAT_016cc2c4,4);
    if ((iVar2 == 0) &&
       ((((iVar1 == 4 || (local_8 == ' ')) || (local_8 == '\t')) ||
        ((local_8 == '\r' || (local_8 == '\n')))))) {
      *param_2 = 1;
      (**(code **)(**(int **)(param_1 + 8) + 0x20))();
      (**(code **)(**(int **)(param_1 + 8) + 0x14))(4);
      return param_1;
    }
  }
  if (4 < iVar1) {
    iVar2 = FUN_01015bd0(local_c,"false",4);
    if ((iVar2 == 0) &&
       (((iVar1 == 5 || (local_7 == ' ')) ||
        ((local_7 == '\t' || ((local_7 == '\r' || (local_7 == '\n')))))))) {
      *param_2 = 0;
      (**(code **)(**(int **)(param_1 + 8) + 0x20))();
      (**(code **)(**(int **)(param_1 + 8) + 0x14))(5);
      return param_1;
    }
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return param_1;
}

// 01441FE0  FUN_01441fe0  size=29  [run]
int __thiscall FUN_01441fe0(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2,1);
  return param_1;
}

// 01442000  FUN_01442000  size=26  [run]
undefined4 __thiscall FUN_01442000(undefined4 param_1,float *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_01441de0();
  *param_2 = (float)fVar1;
  return param_1;
}

// 01442020  FUN_01442020  size=26  [run]
undefined4 __thiscall FUN_01442020(undefined4 param_1,double *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_01441de0();
  *param_2 = (double)fVar1;
  return param_1;
}

// 01442040  FUN_01442040  size=91  [run]
int FUN_01442040(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_01441bd0();
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = FUN_0102c4d0();
      if ((iVar1 == -1) || (iVar1 == param_3)) {
        *(undefined1 *)(iVar2 + param_1) = 0;
        return iVar2;
      }
      *(char *)(iVar2 + param_1) = (char)iVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return -1;
}

// 014420A0  FUN_014420a0  size=14  [run]
void __fastcall FUN_014420a0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x014420ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return;
}

// 014420B0  hkIstream::hkIstream  size=48  [run]
undefined4 * __thiscall hkIstream::hkIstream(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  uVar1 = (**(code **)(*DAT_01f909a4 + 0xc))(param_2);
  param_1[2] = uVar1;
  return param_1;
}

// 014420E0  FUN_014420e0  size=67  [run]
int __thiscall FUN_014420e0(int param_1,short *param_2)

{
  short sVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  sVar1 = FUN_01441c60(*(undefined4 *)(param_1 + 8),(int)&uStack_8 + 3);
  if (uStack_8._3_1_ != '\0') {
    *param_2 = -sVar1;
    return param_1;
  }
  *param_2 = sVar1;
  return param_1;
}

// 01442130  FUN_01442130  size=67  [run]
int __thiscall FUN_01442130(int param_1,short *param_2)

{
  short sVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  sVar1 = FUN_01441c60(*(undefined4 *)(param_1 + 8),(int)&uStack_8 + 3);
  if (uStack_8._3_1_ != '\0') {
    *param_2 = -sVar1;
    return param_1;
  }
  *param_2 = sVar1;
  return param_1;
}

// 01442180  FUN_01442180  size=59  [run]
int __thiscall FUN_01442180(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  iVar1 = FUN_01441c60(*(undefined4 *)(param_1 + 8),(int)&uStack_8 + 3);
  if (uStack_8._3_1_ != '\0') {
    *param_2 = -iVar1;
    return param_1;
  }
  *param_2 = iVar1;
  return param_1;
}

// 014421C0  FUN_014421c0  size=59  [run]
int __thiscall FUN_014421c0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  iVar1 = FUN_01441c60(*(undefined4 *)(param_1 + 8),(int)&uStack_8 + 3);
  if (uStack_8._3_1_ != '\0') {
    *param_2 = -iVar1;
    return param_1;
  }
  *param_2 = iVar1;
  return param_1;
}

// 01442200  FUN_01442200  size=53  [run]
int __thiscall FUN_01442200(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  uVar1 = FUN_01441c60(*(undefined4 *)(param_1 + 8),(int)&uStack_8 + 3);
  if (uStack_8._3_1_ != '\0') {
    uVar1 = CONCAT44(-((int)((ulonglong)uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return param_1;
}

// 01442240  FUN_01442240  size=53  [run]
int __thiscall FUN_01442240(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  uVar1 = FUN_01441c60(*(undefined4 *)(param_1 + 8),(int)&uStack_8 + 3);
  if (uStack_8._3_1_ != '\0') {
    uVar1 = CONCAT44(-((int)((ulonglong)uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return param_1;
}

// 01442280  hkIstream::hkIstream  size=82  [run]
undefined4 * __thiscall
hkIstream::hkIstream(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1c);
  *(undefined2 *)(iVar2 + 4) = 0x1c;
  uVar3 = hkMemoryStreamReader::hkMemoryStreamReader(param_2,param_3,2);
  param_1[2] = uVar3;
  return param_1;
}

// 014422E0  hkIstream::hkIstream  size=80  [run]
undefined4 * __thiscall hkIstream::hkIstream(undefined4 *param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x18);
  *(undefined2 *)(iVar2 + 4) = 0x18;
  uVar3 = hkMemoryTrackStreamReader::hkMemoryTrackStreamReader(param_2,2,0);
  param_1[2] = uVar3;
  return param_1;
}

// 01442330  FUN_01442330  size=221  [run]
int __fastcall FUN_01442330(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_010262a0();
  piVar1 = (int *)FUN_01025c50();
  FUN_01441bd0();
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))(1);
  iVar2 = FUN_0102c4d0();
  while ((((iVar2 != -1 && (iVar2 != 0x20)) && (iVar2 != 9)) && ((iVar2 != 0xd && (iVar2 != 10)))))
  {
    if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b8c,piVar1,1);
    }
    *(char *)(piVar1[1] + *piVar1) = (char)iVar2;
    piVar1[1] = piVar1[1] + 1;
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))(1);
    iVar2 = FUN_0102c4d0();
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,piVar1,1);
  }
  *(undefined1 *)(piVar1[1] + *piVar1) = 0;
  piVar1[1] = piVar1[1] + 1;
  return param_1;
}

// 01442410  FUN_01442410  size=132  [run]
undefined4 __fastcall FUN_01442410(undefined4 param_1)

{
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [128];
  
  local_90 = local_84;
  local_88 = 0x80000080;
  local_8c = 1;
  local_84[0] = 0;
  FUN_01442330(&local_90);
  FUN_01006780(local_90);
  local_8c = 0;
  if (-1 < (int)local_88) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
  }
  return param_1;
}

// 014424A0  FUN_014424a0  size=54  [run]
void FUN_014424a0(undefined4 param_1,short *param_2)

{
  short sVar1;
  char local_5;
  
  sVar1 = FUN_01441c60(param_1,&local_5);
  if (local_5 != '\0') {
    *param_2 = -sVar1;
    return;
  }
  *param_2 = sVar1;
  return;
}

// 014424E0  FUN_014424e0  size=54  [run]
void FUN_014424e0(undefined4 param_1,short *param_2)

{
  short sVar1;
  char local_5;
  
  sVar1 = FUN_01441c60(param_1,&local_5);
  if (local_5 != '\0') {
    *param_2 = -sVar1;
    return;
  }
  *param_2 = sVar1;
  return;
}

// 01442520  FUN_01442520  size=46  [run]
void FUN_01442520(undefined4 param_1,int *param_2)

{
  int iVar1;
  char local_5;
  
  iVar1 = FUN_01441c60(param_1,&local_5);
  if (local_5 != '\0') {
    *param_2 = -iVar1;
    return;
  }
  *param_2 = iVar1;
  return;
}

// 01442550  FUN_01442550  size=46  [run]
void FUN_01442550(undefined4 param_1,int *param_2)

{
  int iVar1;
  char local_5;
  
  iVar1 = FUN_01441c60(param_1,&local_5);
  if (local_5 != '\0') {
    *param_2 = -iVar1;
    return;
  }
  *param_2 = iVar1;
  return;
}

// 01442580  FUN_01442580  size=45  [run]
void FUN_01442580(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char local_5;
  
  uVar1 = FUN_01441c60(param_1,&local_5);
  if (local_5 != '\0') {
    uVar1 = CONCAT44(-((int)((ulonglong)uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return;
}

// 014425B0  FUN_014425b0  size=45  [run]
void FUN_014425b0(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char local_5;
  
  uVar1 = FUN_01441c60(param_1,&local_5);
  if (local_5 != '\0') {
    uVar1 = CONCAT44(-((int)((ulonglong)uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return;
}

// 014425E0  FUN_014425e0  size=38  [run]
void FUN_014425e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01442610  FUN_01442610  size=37  [run]
void FUN_01442610(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01442640  FUN_01442640  size=37  [run]
void FUN_01442640(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01442670  hkIstream::vf00  size=52  [run]
int __thiscall hkIstream::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_216();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 014426B0  FUN_014426b0  size=55  [run]
void __thiscall FUN_014426b0(int *param_1,undefined1 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,1);
  }
  *(undefined1 *)(*param_1 + param_1[1]) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01442710  FUN_01442710  size=29  [run]
void __thiscall FUN_01442710(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 8);
  *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0xc) * *(int *)(param_1 + 4) + *(int *)(param_2 + 8)
  ;
  return;
}

// 01442760  FUN_01442760  size=25  [run]
int FUN_01442760(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

// 01442780  FUN_01442780  size=107  [run]
int __thiscall FUN_01442780(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  while (param_2 != (undefined4 *)0x0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - param_2[3];
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - param_2[3];
    iVar2 = iVar2 + 1;
    puVar1 = (undefined4 *)*param_2;
    if (*(int *)(param_1 + 0x2c) == 0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(param_2,*(undefined4 *)(param_1 + 0x14));
      param_2 = puVar1;
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(param_2[1],*(undefined4 *)(param_1 + 0x14));
      (**(code **)(**(int **)(param_1 + 0x2c) + 8))(param_2,0x10);
      param_2 = puVar1;
    }
  }
  return iVar2;
}

// 014427F0  FUN_014427f0  size=55  [run]
void __fastcall FUN_014427f0(undefined4 *param_1)

{
  FUN_01442780(param_1[3]);
  param_1[3] = 0;
  FUN_01442780(param_1[4]);
  param_1[4] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  return;
}

// 01442830  FUN_01442830  size=39  [run]
void __fastcall FUN_01442830(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_1;
  puVar1 = (uint *)param_1[8];
  puVar2 = puVar3;
  if ((uint *)param_1[8] < param_1[9]) {
    do {
      puVar3 = puVar1;
      *puVar3 = (uint)puVar2;
      puVar1 = (uint *)((int)puVar3 + param_1[1]);
      puVar2 = puVar3;
    } while ((uint *)((int)puVar3 + param_1[1]) < (uint *)param_1[9]);
  }
  *param_1 = (uint)puVar3;
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}

// 01442860  FUN_01442860  size=58  [run]
int __fastcall FUN_01442860(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar2 = iVar2 + 1;
  }
  iVar2 = iVar2 + (uint)(param_1[9] - param_1[8]) / (uint)param_1[1];
  for (puVar1 = (undefined4 *)param_1[4]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + puVar1[3];
  }
  return iVar2;
}

// 014428A0  FUN_014428a0  size=27  [run]
int FUN_014428a0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    iVar1 = iVar1 + param_1[3];
  }
  return iVar1;
}

// 014428C0  FUN_014428c0  size=112  [run]
int __thiscall FUN_014428c0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    for (; param_2 != (int *)0x0; param_2 = (int *)*param_2) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x24))
                        (param_2,*(undefined4 *)(param_1 + 0x14));
      iVar3 = iVar3 + iVar1;
    }
  }
  else if (param_2 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(param_2,0x10);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x24))
                        (param_2[1],*(undefined4 *)(param_1 + 0x14));
      param_2 = (int *)*param_2;
      iVar3 = iVar3 + iVar1 + iVar2;
    } while (param_2 != (int *)0x0);
    return iVar3;
  }
  return iVar3;
}

// 01442930  FUN_01442930  size=30  [run]
int __fastcall FUN_01442930(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_014428a0(*(undefined4 *)(param_1 + 0x10));
  iVar1 = FUN_014428a0(*(undefined4 *)((int)((ulonglong)uVar2 >> 0x20) + 0xc));
  return iVar1 + (int)uVar2;
}

// 01442950  FUN_01442950  size=91  [run]
void __thiscall FUN_01442950(int param_1,int *param_2,code *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 4);
    do {
      uVar2 = param_2[2];
      uVar3 = param_2[3] * iVar1 + uVar2;
      for (; uVar2 < uVar3; uVar2 = uVar2 + iVar1) {
        (*param_3)(uVar2,*(undefined4 *)(param_1 + 4),param_4 & 0xffffff00,param_4,param_5);
        iVar1 = *(int *)(param_1 + 4);
      }
      param_2 = (int *)*param_2;
    } while (param_2 != (int *)0x0);
  }
  return;
}

// 014429B0  FUN_014429b0  size=21  [run]
void __fastcall FUN_014429b0(int param_1)

{
  FUN_01442780(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 014429D0  FUN_014429d0  size=24  [run]
int FUN_014429d0(int param_1,uint param_2)

{
  if (param_2 < 0x11) {
    return param_1 + 0x10;
  }
  return param_2 + param_1;
}

// 01442A30  FUN_01442a30  size=77  [run]
void __thiscall FUN_01442a30(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_014428c0(*(undefined4 *)(param_1 + 0x10));
  iVar2 = FUN_014428c0(*(undefined4 *)(param_1 + 0xc));
  *param_2 = iVar1 + iVar2;
  iVar1 = *(int *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 4) * iVar1;
  param_2[3] = iVar3;
  param_2[1] = (iVar2 - iVar1) * *(int *)(param_1 + 4);
  param_2[5] = *(int *)(param_1 + 4);
  param_2[4] = iVar3;
  return;
}

// 01442A80  FUN_01442a80  size=135  [run]
void __thiscall FUN_01442a80(int *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = FUN_01442860();
  if ((iVar3 != param_1[0xd]) || (iVar3 = FUN_01442930(), iVar3 != param_1[0xc])) {
    *param_2 = 0;
    return;
  }
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    do {
      if (((uint)piVar4 & param_1[6] - 1U) != 0) {
LAB_01442ada:
        *param_2 = 0;
        return;
      }
      puVar1 = (undefined4 *)param_1[3];
      while( true ) {
        if (puVar1 == (undefined4 *)0x0) goto LAB_01442ada;
        piVar2 = (int *)puVar1[2];
        if ((piVar2 <= piVar4) && (piVar4 < (int *)(puVar1[3] * param_1[1] + (int)piVar2))) break;
        puVar1 = (undefined4 *)*puVar1;
      }
      if ((uint)((int)piVar4 - (int)piVar2) % (uint)param_1[1] != 0) goto LAB_01442ada;
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
  }
  *param_2 = 1;
  return;
}

// 01442B10  FUN_01442b10  size=224  [run]
int __fastcall FUN_01442b10(undefined4 *param_1)

{
  undefined4 *******pppppppuVar1;
  undefined4 *******pppppppuVar2;
  undefined4 *******pppppppuVar3;
  undefined4 uVar4;
  undefined4 ******ppppppuVar5;
  undefined4 ******ppppppuVar6;
  undefined4 ******ppppppuVar7;
  undefined4 ******local_24 [4];
  undefined4 *****local_14;
  undefined4 ******local_10;
  int local_c;
  undefined4 *****local_8;
  
  if (param_1[3] == 0) {
    return 0;
  }
  uVar4 = FUN_01443200(param_1[3]);
  param_1[3] = uVar4;
  FUN_01442830();
  ppppppuVar5 = (undefined4 ******)FUN_01443210(*param_1);
  local_24[0] = (undefined4 ******)param_1[3];
  local_8 = &local_14;
  *param_1 = ppppppuVar5;
  local_c = 0;
  pppppppuVar1 = (undefined4 *******)local_24[0];
  pppppppuVar3 = local_24;
  local_14 = ppppppuVar5;
  do {
    pppppppuVar2 = pppppppuVar1;
    if (pppppppuVar2 == (undefined4 *******)0x0) {
      *param_1 = local_14;
      param_1[3] = local_24[0];
      param_1[2] = 0;
      return local_c;
    }
    ppppppuVar7 = pppppppuVar2[2];
    ppppppuVar6 = (undefined4 ******)((int)pppppppuVar2[3] * param_1[1] + (int)ppppppuVar7);
    if (ppppppuVar7 == ppppppuVar5) {
      do {
        if (ppppppuVar6 <= ppppppuVar7) break;
        ppppppuVar5 = (undefined4 ******)*ppppppuVar5;
        ppppppuVar7 = (undefined4 ******)((int)ppppppuVar7 + param_1[1]);
      } while (ppppppuVar7 == ppppppuVar5);
    }
    if (ppppppuVar7 == ppppppuVar6) {
      local_c = local_c + 1;
      local_10 = pppppppuVar3;
      *pppppppuVar3 = *pppppppuVar2;
      *pppppppuVar2 = (undefined4 ******)param_1[4];
      param_1[4] = pppppppuVar2;
      pppppppuVar1 = (undefined4 *******)*pppppppuVar3;
      *local_8 = ppppppuVar5;
      pppppppuVar3 = (undefined4 *******)local_10;
    }
    else {
      for (; (ppppppuVar5 != (undefined4 ******)0x0 && (ppppppuVar5 < ppppppuVar6));
          ppppppuVar5 = (undefined4 ******)*ppppppuVar5) {
      }
      ppppppuVar7 = (undefined4 ******)*local_8;
      while (ppppppuVar7 != ppppppuVar5) {
        local_8 = (undefined4 *****)*local_8;
        ppppppuVar7 = (undefined4 ******)*local_8;
      }
      pppppppuVar1 = (undefined4 *******)*pppppppuVar2;
      pppppppuVar3 = pppppppuVar2;
    }
  } while( true );
}

// 01442BF0  FUN_01442bf0  size=190  [run]
void __thiscall FUN_01442bf0(int *param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint3 uVar7;
  
  FUN_01442950(param_1[4],param_2,param_3,param_4);
  if ((param_1[3] != 0) || (*param_1 != 0)) {
    iVar2 = FUN_01443200(param_1[3]);
    param_1[3] = iVar2;
    FUN_01442830();
    puVar3 = (undefined4 *)FUN_01443210(*param_1);
    puVar1 = (undefined4 *)param_1[3];
    *param_1 = (int)puVar3;
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      puVar6 = (undefined4 *)puVar1[2];
      puVar4 = (undefined4 *)(puVar1[3] * param_1[1] + (int)puVar6);
      puVar5 = puVar1;
      for (; puVar6 < puVar4; puVar6 = (undefined4 *)((int)puVar6 + param_1[1])) {
        uVar7 = (uint3)((uint)puVar5 >> 8);
        if (puVar6 == puVar3) {
          (*param_2)(puVar6,param_1[1],(uint)uVar7 << 8);
          puVar3 = (undefined4 *)*puVar3;
          puVar5 = extraout_ECX;
        }
        else {
          (*param_2)(puVar6,param_1[1],CONCAT31(uVar7,1),param_3,param_4);
          puVar5 = extraout_ECX_00;
        }
      }
    }
  }
  return;
}

// 01442CB0  FUN_01442cb0  size=368  [run]
int __fastcall FUN_01442cb0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int local_c;
  int local_8;
  
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = *puVar4;
    *(undefined4 *)(param_1 + 0x20) = puVar4[2];
    *(int *)(param_1 + 0x24) = puVar4[3] * *(int *)(param_1 + 4) + puVar4[2];
    *puVar4 = *(undefined4 *)(param_1 + 0xc);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    *(undefined4 **)(param_1 + 0xc) = puVar4;
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 4) + iVar2;
    return iVar2;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = (int)(0x100 / (ulonglong)*(uint *)(param_1 + 4));
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    uVar3 = FUN_014429d0(*(uint *)(param_1 + 4) * iVar2,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    local_c = *(int *)(param_1 + 0x14);
    puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x28) + 0xc))(&local_c);
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    uVar5 = *(int *)(param_1 + 0x18) + 0xf + (int)puVar4 & ~(*(int *)(param_1 + 0x18) - 1U);
    puVar4[1] = 0;
    puVar6 = puVar4 + 3;
    *puVar6 = ((int)puVar4 + (local_c - uVar5)) / *(uint *)(param_1 + 4);
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x2c) + 4))(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    local_8 = *(int *)(param_1 + 0x14);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(&local_8);
    if (uVar5 == 0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 8))(puVar4,0x10);
      return 0;
    }
    puVar4[1] = uVar5;
    uVar8 = *(int *)(param_1 + 0x18) + -1 + uVar5 & ~(*(int *)(param_1 + 0x18) - 1U);
    if ((uVar8 != uVar5) || (local_8 != *(int *)(param_1 + 0x14))) {
      uVar1 = *(uint *)(param_1 + 4);
      puVar6 = puVar4 + 3;
      puVar7 = puVar4 + 2;
      *puVar7 = uVar8;
      *puVar6 = ((uVar5 - uVar8) + local_8) / uVar1;
      goto LAB_01442deb;
    }
    puVar6 = puVar4 + 3;
    *puVar6 = *(uint *)(param_1 + 0x1c);
  }
  puVar7 = puVar4 + 2;
  *puVar7 = uVar5;
LAB_01442deb:
  *(uint *)(param_1 + 0x20) = *puVar7;
  *(uint *)(param_1 + 0x24) = *puVar6 * *(int *)(param_1 + 4) + *puVar7;
  *puVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = puVar4;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *puVar6;
  iVar2 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + (*puVar6 - 1);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 4) + iVar2;
  return iVar2;
}

// 01442E20  FUN_01442e20  size=68  [run]
uint __thiscall FUN_01442e20(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = FUN_01443200(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_01443200(*(undefined4 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar1 != 0) {
    *param_2 = iVar1;
  }
  uVar3 = (uint)(iVar1 != 0);
  if (*(int *)(param_1 + 0x10) != 0) {
    param_2[uVar3] = *(int *)(param_1 + 0x10);
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}

// 01442E70  FUN_01442e70  size=125  [run]
void __thiscall
FUN_01442e70(undefined4 *param_1,uint param_2,uint param_3,uint param_4,int param_5,
            undefined4 param_6)

{
  LPVOID pvVar1;
  uint uVar2;
  
  if (param_5 == 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    param_5 = *(int *)((int)pvVar1 + 0x2c);
  }
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_4;
  param_1[6] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  if (param_2 < param_3) {
    param_1[1] = param_3;
    param_1[7] = param_4 / param_3;
    return;
  }
  uVar2 = (param_2 - 1) + param_3 & ~(param_3 - 1);
  param_1[1] = uVar2;
  param_1[7] = param_4 / uVar2;
  return;
}

// 01442EF0  FUN_01442ef0  size=43  [run]
void FUN_01442ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_014427f0();
  FUN_01442e70(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 01442F20  FUN_01442f20  size=40  [run]
undefined4 __thiscall
FUN_01442f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FUN_01442e70(param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

// 01442F50  FUN_01442f50  size=494  [run]
undefined4 __thiscall FUN_01442f50(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_c;
  
  iVar9 = *(int *)(param_2 + 0xc);
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  puVar4 = *(undefined4 **)((int)pvVar3 + 0xc);
  uVar6 = iVar9 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar6) ||
     (*(uint *)((int)pvVar3 + 0x10) < (int)puVar4 + uVar6)) {
    puVar4 = (undefined4 *)FUN_0100b780(uVar6);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (int)puVar4 + uVar6;
  }
  puVar8 = *(undefined4 **)(param_2 + 8);
  iVar9 = 0;
  puVar7 = (undefined4 *)(param_1[1] * *(int *)(param_2 + 0xc) + (int)puVar8);
  puVar2 = param_1;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    local_c = puVar1;
    if ((puVar8 <= puVar1) && (puVar1 < puVar7)) {
      puVar4[iVar9] = puVar1;
      *puVar2 = *puVar1;
      iVar9 = iVar9 + 1;
      local_c = puVar2;
    }
    puVar2 = local_c;
  }
  puVar1 = (undefined4 *)param_1[8];
  if ((puVar1 < puVar8) || (puVar7 <= puVar1)) {
    if (iVar9 == *(int *)(param_2 + 0xc)) {
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      if ((((int)uVar6 <= *(int *)((int)pvVar3 + 8)) &&
          (uVar6 + (int)puVar4 == *(int *)((int)pvVar3 + 0xc))) &&
         (*(undefined4 **)((int)pvVar3 + 0x14) != puVar4)) {
        *(undefined4 **)((int)pvVar3 + 0xc) = puVar4;
        return 1;
      }
      FUN_0100b9b0(puVar4,uVar6);
      return 1;
    }
  }
  else if ((uint)(param_1[9] - (int)puVar1) / (uint)param_1[1] + iVar9 == *(int *)(param_2 + 0xc)) {
    param_1[8] = 0;
    param_1[9] = 0;
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    if ((((int)uVar6 <= *(int *)((int)pvVar3 + 8)) &&
        (uVar6 + (int)puVar4 == *(int *)((int)pvVar3 + 0xc))) &&
       (*(undefined4 **)((int)pvVar3 + 0x14) != puVar4)) {
      *(undefined4 **)((int)pvVar3 + 0xc) = puVar4;
      return 1;
    }
    FUN_0100b9b0(puVar4,uVar6);
    return 1;
  }
  if (0 < iVar9) {
    if (1 < iVar9) {
      FUN_01443260(puVar4,0,iVar9 + -1,FUN_01443350);
    }
    iVar5 = 1;
    puVar8 = (undefined4 *)*puVar4;
    if (1 < iVar9) {
      do {
        puVar1 = (undefined4 *)puVar4[iVar5];
        iVar5 = iVar5 + 1;
        *puVar8 = puVar1;
        puVar8 = puVar1;
      } while (iVar5 < iVar9);
    }
    *(undefined4 *)puVar4[iVar9 + -1] = *param_1;
    *param_1 = *puVar4;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  if ((((int)uVar6 <= *(int *)((int)pvVar3 + 8)) &&
      (uVar6 + (int)puVar4 == *(int *)((int)pvVar3 + 0xc))) &&
     (*(undefined4 **)((int)pvVar3 + 0x14) != puVar4)) {
    *(undefined4 **)((int)pvVar3 + 0xc) = puVar4;
    return 0;
  }
  FUN_0100b9b0(puVar4,uVar6);
  return 0;
}

// 01443150  FUN_01443150  size=175  [run]
void __thiscall FUN_01443150(int param_1,undefined1 *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      if (*(int **)(param_1 + 8) == (int *)0x0) {
        puVar3 = *(undefined4 **)(param_1 + 0xc);
        if (puVar3 == (undefined4 *)0x0) {
          *param_4 = iVar2;
          *(undefined4 *)(param_1 + 8) = 0;
          *param_2 = 1;
          return;
        }
        iVar1 = FUN_01442f50(puVar3);
        if (iVar1 == 0) goto LAB_014431ac;
        *(undefined4 *)(param_1 + 0xc) = *puVar3;
        *puVar3 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 **)(param_1 + 0x10) = puVar3;
      }
      else {
        puVar3 = (undefined4 *)**(int **)(param_1 + 8);
        if (puVar3 == (undefined4 *)0x0) {
          *param_4 = iVar2;
          *(undefined4 *)(param_1 + 8) = 0;
          *param_2 = 1;
          return;
        }
        iVar1 = FUN_01442f50(puVar3);
        if (iVar1 == 0) {
LAB_014431ac:
          *(undefined4 **)(param_1 + 8) = puVar3;
        }
        else {
          **(undefined4 **)(param_1 + 8) = *puVar3;
          *puVar3 = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 **)(param_1 + 0x10) = puVar3;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  *param_4 = iVar2;
  *param_2 = *(int *)(param_1 + 8) == 0;
  return;
}

// 01443200  FUN_01443200  size=9  [run]
void FUN_01443200(void)

{
  FUN_0144bcf0();
  return;
}

// 01443210  FUN_01443210  size=9  [run]
void FUN_01443210(void)

{
  FUN_0144bcf0();
  return;
}

// 01443220  FUN_01443220  size=12  [run]
void __thiscall FUN_01443220(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01443260  FUN_01443260  size=239  [run]
void FUN_01443260(int param_1,int param_2,int param_3,code *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  
  do {
    local_18 = param_2;
    uVar3 = *(undefined4 *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar6 = param_3;
    do {
      pcVar5 = (char *)(*param_4)(&local_11,*(undefined4 *)(param_1 + local_18 * 4),uVar3);
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        local_18 = local_18 + 1;
        pcVar5 = (char *)(*param_4)(&local_11,*(undefined4 *)(param_1 + local_18 * 4),uVar3);
        cVar2 = *pcVar5;
      }
      pcVar5 = (char *)(*param_4)(&local_12,uVar3,*(undefined4 *)(param_1 + iVar6 * 4));
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + -1;
        pcVar5 = (char *)(*param_4)(&local_12,uVar3,*(undefined4 *)(param_1 + -4 + iVar1));
        cVar2 = *pcVar5;
      }
      if (iVar6 < local_18) break;
      if (iVar6 != local_18) {
        uVar4 = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = *(undefined4 *)(param_1 + local_18 * 4);
        *(undefined4 *)(param_1 + local_18 * 4) = uVar4;
      }
      local_18 = local_18 + 1;
      iVar6 = iVar6 + -1;
    } while (local_18 <= iVar6);
    if (param_2 < iVar6) {
      FUN_01443260(param_1,param_2,iVar6,param_4);
    }
    param_2 = local_18;
    if (param_3 <= local_18) {
      return;
    }
  } while( true );
}

// 01443350  FUN_01443350  size=19  [run]
void FUN_01443350(undefined4 param_1,uint param_2,uint param_3)

{
  *(bool *)param_1 = param_2 < param_3;
  return;
}

// 01443370  FUN_01443370  size=15  [run]
int __thiscall FUN_01443370(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01443390  FUN_01443390  size=33  [run]
void FUN_01443390(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01443260(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 014433D0  FUN_014433d0  size=62  [run]
void FUN_014433d0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 01443410  FUN_01443410  size=73  [run]
void FUN_01443410(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 01443460  FUN_01443460  size=90  [run]
int * __thiscall FUN_01443460(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 * 4 + 0x7fU & 0xffffff80;
  uVar1 = iVar3 + uVar4;
  if (((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    *param_1 = iVar3;
    param_1[1] = param_2;
    return param_1;
  }
  iVar3 = FUN_0100b780(uVar4);
  *param_1 = iVar3;
  param_1[1] = param_2;
  return param_1;
}

// 01443510  FUN_01443510  size=17  [run]
uint FUN_01443510(int param_1,uint param_2)

{
  return param_1 * -0x61c8864f & param_2;
}

// 01443530  FUN_01443530  size=14  [run]
void FUN_01443530(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}

// 01443540  FUN_01443540  size=14  [run]
bool FUN_01443540(int param_1)

{
  return param_1 != -1;
}

// 01443550  FUN_01443550  size=16  [run]
bool FUN_01443550(int param_1,int param_2)

{
  return param_1 == param_2;
}

// 01443560  FUN_01443560  size=8  [run]
undefined4 FUN_01443560(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01443570  FUN_01443570  size=8  [run]
undefined4 FUN_01443570(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 014435D0  FUN_014435d0  size=18  [run]
bool FUN_014435d0(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 014435F0  FUN_014435f0  size=8  [run]
undefined4 FUN_014435f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01443600  FUN_01443600  size=8  [run]
undefined4 FUN_01443600(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01443660  FUN_01443660  size=18  [run]
bool FUN_01443660(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 01443680  FUN_01443680  size=8  [run]
undefined4 FUN_01443680(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01443690  FUN_01443690  size=8  [run]
undefined4 FUN_01443690(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 014436F0  FUN_014436f0  size=18  [run]
bool FUN_014436f0(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 01443710  FUN_01443710  size=15  [run]
undefined4 __thiscall FUN_01443710(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8);
}

// 01443720  FUN_01443720  size=19  [run]
void __thiscall FUN_01443720(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 4 + param_2 * 8) = param_3;
  return;
}

// 01443750  FUN_01443750  size=48  [run]
void __thiscall FUN_01443750(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// 01443780  FUN_01443780  size=27  [run]
int FUN_01443780(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return iVar1 << 4;
}

// 014437A0  FUN_014437a0  size=55  [run]
void __thiscall FUN_014437a0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 >> 3;
  param_1[2] = param_3 - 1;
  iVar1 = 0;
  *param_1 = param_2;
  param_1[1] = -0x80000000;
  if (param_3 != 0) {
    do {
      *(undefined4 *)(*param_1 + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_3);
  }
  return;
}

// 014437E0  FUN_014437e0  size=65  [run]
int __thiscall FUN_014437e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  uVar4 = param_2 * -0x61c8864f & param_1[2];
  iVar3 = 0;
  iVar2 = *(int *)(iVar1 + uVar4 * 8);
  while (iVar2 != -1) {
    if ((iVar2 == param_2) && (*(int *)(iVar1 + 4 + uVar4 * 8) == param_3)) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1 & param_1[2];
    iVar2 = *(int *)(iVar1 + uVar4 * 8);
  }
  return iVar3;
}

// 01443830  FUN_01443830  size=57  [run]
int __thiscall FUN_01443830(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 * -0x61c8864f & param_1[2];
  iVar2 = 0;
  iVar1 = *(int *)(*param_1 + uVar3 * 8);
  while (iVar1 != -1) {
    if (iVar1 == param_2) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1 & param_1[2];
    iVar1 = *(int *)(*param_1 + uVar3 * 8);
  }
  return iVar2;
}

// 01443890  FUN_01443890  size=15  [run]
undefined4 __thiscall FUN_01443890(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8);
}

// 014438A0  FUN_014438a0  size=16  [run]
undefined4 __thiscall FUN_014438a0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 014438B0  FUN_014438b0  size=19  [run]
void __thiscall FUN_014438b0(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 4 + param_2 * 8) = param_3;
  return;
}

// 014438D0  FUN_014438d0  size=65  [run]
int __thiscall FUN_014438d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[2];
  param_2 = param_2 + 1;
  do {
    if (param_2 <= iVar1) {
      piVar2 = (int *)(*param_1 + param_2 * 8);
      do {
        if (*piVar2 == -1) {
          return iVar1 + 1;
        }
        if (*piVar2 == param_3) {
          return param_2;
        }
        param_2 = param_2 + 1;
        piVar2 = piVar2 + 2;
      } while (param_2 <= iVar1);
    }
    param_2 = 0;
  } while( true );
}

// 01443920  FUN_01443920  size=36  [run]
void __thiscall FUN_01443920(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 01443950  FUN_01443950  size=21  [run]
void __thiscall FUN_01443950(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 01443970  FUN_01443970  size=95  [run]
void __thiscall FUN_01443970(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01443c40(param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar3 = param_2 * -0x61c8864f & param_1[2];
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & param_1[2];
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar1 + uVar3 * 8) = param_2;
  *(undefined4 *)(*param_1 + 4 + uVar3 * 8) = param_3;
  return;
}

// 014439D0  FUN_014439d0  size=56  [run]
uint __thiscall FUN_014439d0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  uVar3 = param_2 * -0x61c8864f & uVar1;
  iVar2 = *(int *)(*param_1 + uVar3 * 8);
  while( true ) {
    if (iVar2 == -1) {
      return uVar1 + 1;
    }
    if (iVar2 == param_2) break;
    uVar3 = uVar3 + 1 & uVar1;
    iVar2 = *(int *)(*param_1 + uVar3 * 8);
  }
  return uVar3;
}

// 01443A10  FUN_01443a10  size=61  [run]
uint __thiscall FUN_01443a10(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = param_1[2];
  iVar2 = *param_1;
  uVar4 = param_2 * -0x61c8864f & uVar1;
  iVar3 = *(int *)(iVar2 + uVar4 * 8);
  while( true ) {
    if (iVar3 == -1) {
      return uVar1 + 1;
    }
    if ((*(int *)(iVar2 + uVar4 * 8) == param_2) && (*(int *)(iVar2 + 4 + uVar4 * 8) == param_3))
    break;
    uVar4 = uVar4 + 1 & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 8);
  }
  return uVar4;
}

// 01443A50  FUN_01443a50  size=66  [run]
undefined4 __thiscall FUN_01443a50(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  uVar3 = param_2 * -0x61c8864f & param_1[2];
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while( true ) {
    if (iVar2 == -1) {
      return param_3;
    }
    if (iVar2 == param_2) break;
    uVar3 = uVar3 + 1 & param_1[2];
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  return *(undefined4 *)(iVar1 + 4 + uVar3 * 8);
}

// 01443AA0  FUN_01443aa0  size=48  [run]
undefined4 __thiscall FUN_01443aa0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_014439d0(param_2);
  if (iVar1 <= param_1[2]) {
    *param_3 = *(undefined4 *)(*param_1 + 4 + iVar1 * 8);
    return 0;
  }
  return 1;
}

// 01443AD0  FUN_01443ad0  size=158  [run]
void __thiscall FUN_01443ad0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 8) = 0xffffffff;
  uVar5 = param_1[2];
  iVar1 = *param_1;
  uVar3 = uVar5 + param_2 & uVar5;
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_2 + 1 & uVar5;
  iVar1 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar1 != -1) {
    iVar1 = *param_1;
    uVar5 = *(int *)(iVar1 + uVar3 * 8) * -0x61c8864f & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar3 || ((uVar5 <= param_2 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar4 <= uVar5)))) {
      *(undefined4 *)(iVar1 + param_2 * 8) = *(undefined4 *)(iVar1 + uVar3 * 8);
      *(undefined4 *)(*param_1 + 4 + param_2 * 8) = *(undefined4 *)(*param_1 + 4 + uVar3 * 8);
      *(undefined4 *)(*param_1 + uVar3 * 8) = 0xffffffff;
      param_2 = uVar3;
    }
    uVar5 = param_1[2];
    uVar3 = uVar3 + 1 & uVar5;
    iVar1 = *(int *)(*param_1 + uVar3 * 8);
  }
  return;
}

// 01443B80  FUN_01443b80  size=64  [run]
void __thiscall FUN_01443b80(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_1[2];
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *param_1;
    do {
      iVar3 = *(int *)(iVar2 + iVar6 * 8);
      if (iVar3 != -1) {
        uVar5 = iVar3 * -0x61c8864f & uVar1;
        iVar4 = *(int *)(iVar2 + uVar5 * 8);
        while (iVar4 != iVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          iVar4 = *(int *)(iVar2 + uVar5 * 8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_2 = 1;
  return;
}

// 01443BC0  FUN_01443bc0  size=36  [run]
void __fastcall FUN_01443bc0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  iVar2 = 0;
  if (0 < iVar1 + 1) {
    do {
      *(undefined4 *)(*param_1 + iVar2 * 8) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1 + 1);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 01443BF0  FUN_01443bf0  size=48  [run]
void __thiscall FUN_01443bf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// 01443C20  FUN_01443c20  size=27  [run]
int FUN_01443c20(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return iVar1 << 4;
}

// 01443C40  FUN_01443c40  size=189  [run]
undefined4 __thiscall FUN_01443c40(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[1];
  iVar2 = *param_1;
  iVar5 = param_1[2] + 1;
  iVar4 = (**(code **)(PTR_vftable_018e9b94 + 4))(param_2 * 8);
  if (iVar4 == 0) {
    return 1;
  }
  *param_1 = iVar4;
  iVar4 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(*param_1 + iVar4 * 8) = 0xffffffff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  param_1[2] = param_2 + -1;
  iVar4 = 0;
  param_1[1] = 0;
  if (0 < iVar5) {
    do {
      iVar3 = *(int *)(iVar2 + iVar4 * 8);
      if (iVar3 != -1) {
        FUN_01443970(iVar3,*(undefined4 *)(iVar2 + 4 + iVar4 * 8));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  if ((uVar1 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar2,iVar5 * 8);
  }
  return 0;
}

// 01443D30  FUN_01443d30  size=21  [run]
undefined8 __thiscall FUN_01443d30(int *param_1,int param_2)

{
  return CONCAT44(*(undefined4 *)(*param_1 + 4 + param_2 * 0x10),
                  *(undefined4 *)(*param_1 + param_2 * 0x10));
}

// 01443D50  FUN_01443d50  size=22  [run]
undefined8 __thiscall FUN_01443d50(int *param_1,int param_2)

{
  return CONCAT44(*(undefined4 *)(*param_1 + 0xc + param_2 * 0x10),
                  *(undefined4 *)(*param_1 + 8 + param_2 * 0x10));
}

// 01443D70  FUN_01443d70  size=28  [run]
void __thiscall FUN_01443d70(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 8 + param_2 * 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0xc + param_2 * 0x10) = param_4;
  return;
}

// 01443D90  FUN_01443d90  size=21  [run]
void __thiscall FUN_01443d90(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 01443DC0  FUN_01443dc0  size=48  [run]
void __thiscall FUN_01443dc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// 01443DF0  FUN_01443df0  size=27  [run]
int FUN_01443df0(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return iVar1 << 5;
}

// 01443E10  FUN_01443e10  size=20  [run]
uint FUN_01443e10(uint param_1,uint param_2)

{
  return (param_1 >> 4) * -0x61c8864f & param_2;
}

// 01443E30  FUN_01443e30  size=14  [run]
void FUN_01443e30(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}

// 01443E40  FUN_01443e40  size=20  [run]
uint FUN_01443e40(uint param_1,undefined4 param_2,uint param_3)

{
  return (param_1 >> 4) * -0x61c8864f & param_3;
}

// 01443E60  FUN_01443e60  size=21  [run]
void FUN_01443e60(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}

// 01443E80  FUN_01443e80  size=25  [run]
undefined4 FUN_01443e80(uint param_1,uint param_2)

{
  if ((param_1 & param_2) != 0xffffffff) {
    return 1;
  }
  return 0;
}

// 01443EA0  FUN_01443ea0  size=30  [run]
undefined4 FUN_01443ea0(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 1;
  }
  return 0;
}

// 01443EC0  FUN_01443ec0  size=22  [run]
void __thiscall FUN_01443ec0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 01443EE0  FUN_01443ee0  size=31  [run]
void __thiscall FUN_01443ee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_014439d0(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01443F00  FUN_01443f00  size=22  [run]
void __thiscall FUN_01443f00(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 01443F20  FUN_01443f20  size=22  [run]
void __thiscall FUN_01443f20(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 01443F40  FUN_01443f40  size=55  [run]
void __thiscall FUN_01443f40(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 >> 3;
  param_1[2] = param_3 - 1;
  iVar1 = 0;
  *param_1 = param_2;
  param_1[1] = -0x80000000;
  if (param_3 != 0) {
    do {
      *(undefined4 *)(*param_1 + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_3);
  }
  return;
}

// 01443F80  FUN_01443f80  size=40  [run]
void __fastcall FUN_01443f80(undefined4 *param_1)

{
  if ((param_1[1] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 8))(*param_1,param_1[2] * 8 + 8);
  }
  return;
}

// 01443FB0  FUN_01443fb0  size=68  [run]
int __thiscall FUN_01443fb0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  uVar4 = (param_2 >> 4) * -0x61c8864f & param_1[2];
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + uVar4 * 8);
  while (uVar2 != 0xffffffff) {
    if ((uVar2 == param_2) && (*(int *)(iVar1 + 4 + uVar4 * 8) == param_3)) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1 & param_1[2];
    uVar2 = *(uint *)(iVar1 + uVar4 * 8);
  }
  return iVar3;
}

// 01444000  FUN_01444000  size=60  [run]
int __thiscall FUN_01444000(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (param_2 >> 4) * -0x61c8864f & param_1[2];
  iVar2 = 0;
  uVar1 = *(uint *)(*param_1 + uVar3 * 8);
  while (uVar1 != 0xffffffff) {
    if (uVar1 == param_2) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1 & param_1[2];
    uVar1 = *(uint *)(*param_1 + uVar3 * 8);
  }
  return iVar2;
}

// 01444040  FUN_01444040  size=98  [run]
void __thiscall FUN_01444040(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_014442e0(param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar3 = (param_2 >> 4) * -0x61c8864f & param_1[2];
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & param_1[2];
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  param_1[1] = param_1[1] + 1;
  *(uint *)(iVar1 + uVar3 * 8) = param_2;
  *(undefined4 *)(*param_1 + 4 + uVar3 * 8) = param_3;
  return;
}

// 014440B0  FUN_014440b0  size=58  [run]
uint __thiscall FUN_014440b0(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  uVar3 = (param_2 >> 4) * -0x61c8864f & uVar1;
  uVar2 = *(uint *)(*param_1 + uVar3 * 8);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return uVar1 + 1;
    }
    if (uVar2 == param_2) break;
    uVar3 = uVar3 + 1 & uVar1;
    uVar2 = *(uint *)(*param_1 + uVar3 * 8);
  }
  return uVar3;
}

// 014440F0  FUN_014440f0  size=64  [run]
uint __thiscall FUN_014440f0(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = param_1[2];
  iVar2 = *param_1;
  uVar4 = (param_2 >> 4) * -0x61c8864f & uVar1;
  iVar3 = *(int *)(iVar2 + uVar4 * 8);
  while( true ) {
    if (iVar3 == -1) {
      return uVar1 + 1;
    }
    if ((*(uint *)(iVar2 + uVar4 * 8) == param_2) && (*(int *)(iVar2 + 4 + uVar4 * 8) == param_3))
    break;
    uVar4 = uVar4 + 1 & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 8);
  }
  return uVar4;
}

// 01444130  FUN_01444130  size=68  [run]
undefined4 __thiscall FUN_01444130(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  uVar3 = (param_2 >> 4) * -0x61c8864f & param_1[2];
  uVar2 = *(uint *)(iVar1 + uVar3 * 8);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return param_3;
    }
    if (uVar2 == param_2) break;
    uVar3 = uVar3 + 1 & param_1[2];
    uVar2 = *(uint *)(iVar1 + uVar3 * 8);
  }
  return *(undefined4 *)(iVar1 + 4 + uVar3 * 8);
}

// 01444180  FUN_01444180  size=48  [run]
undefined4 __thiscall FUN_01444180(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_014440b0(param_2);
  if (iVar1 <= param_1[2]) {
    *param_3 = *(undefined4 *)(*param_1 + 4 + iVar1 * 8);
    return 0;
  }
  return 1;
}

// 014441B0  FUN_014441b0  size=161  [run]
void __thiscall FUN_014441b0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 8) = 0xffffffff;
  iVar1 = *param_1;
  uVar5 = param_1[2];
  uVar3 = uVar5 + param_2 & uVar5;
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_2 + 1 & uVar5;
  iVar1 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar1 != -1) {
    iVar1 = *param_1;
    uVar5 = (*(uint *)(iVar1 + uVar3 * 8) >> 4) * -0x61c8864f & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar3 || ((uVar5 <= param_2 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar4 <= uVar5)))) {
      *(undefined4 *)(iVar1 + param_2 * 8) = *(undefined4 *)(iVar1 + uVar3 * 8);
      *(undefined4 *)(*param_1 + 4 + param_2 * 8) = *(undefined4 *)(*param_1 + 4 + uVar3 * 8);
      *(undefined4 *)(*param_1 + uVar3 * 8) = 0xffffffff;
      param_2 = uVar3;
    }
    uVar5 = param_1[2];
    uVar3 = uVar3 + 1 & uVar5;
    iVar1 = *(int *)(*param_1 + uVar3 * 8);
  }
  return;
}

// 01444260  FUN_01444260  size=73  [run]
void __thiscall FUN_01444260(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_1[2];
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *param_1;
    do {
      uVar3 = *(uint *)(iVar2 + iVar6 * 8);
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_2 = 1;
  return;
}

// 014442B0  FUN_014442b0  size=36  [run]
void __fastcall FUN_014442b0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  iVar2 = 0;
  if (0 < iVar1 + 1) {
    do {
      *(undefined4 *)(*param_1 + iVar2 * 8) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1 + 1);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 014442E0  FUN_014442e0  size=189  [run]
undefined4 __thiscall FUN_014442e0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[1];
  iVar2 = *param_1;
  iVar5 = param_1[2] + 1;
  iVar4 = (**(code **)(PTR_vftable_018e9b94 + 4))(param_2 * 8);
  if (iVar4 == 0) {
    return 1;
  }
  *param_1 = iVar4;
  iVar4 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(*param_1 + iVar4 * 8) = 0xffffffff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  param_1[2] = param_2 + -1;
  iVar4 = 0;
  param_1[1] = 0;
  if (0 < iVar5) {
    do {
      iVar3 = *(int *)(iVar2 + iVar4 * 8);
      if (iVar3 != -1) {
        FUN_01444040(iVar3,*(undefined4 *)(iVar2 + 4 + iVar4 * 8));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  if ((uVar1 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar2,iVar5 * 8);
  }
  return 0;
}

// 014443A0  FUN_014443a0  size=83  [run]
undefined4 * __thiscall FUN_014443a0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 4;
  param_1[1] = 0;
  if (4 < param_2 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_2 * 3);
  }
  uVar1 = (**(code **)(PTR_vftable_018e9b94 + 4))(iVar2 * 8);
  *param_1 = uVar1;
  param_1[2] = iVar2 + -1;
  FUN_01443bc0();
  return param_1;
}

// 01444470  FUN_01444470  size=110  [run]
int __thiscall FUN_01444470(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  uVar4 = param_2 * -0x61c8864f & param_1[2];
  iVar3 = *param_1;
  iVar2 = uVar4 * 8;
  local_8 = 0;
  uVar1 = uVar4;
  if (*(int *)(iVar2 + iVar3) == -1) {
    return 0;
  }
  do {
    if (*(int *)(iVar3 + iVar2) == param_2) {
      FUN_01443ad0(uVar1);
      local_8 = local_8 + 1;
      uVar1 = uVar4;
    }
    else {
      uVar1 = uVar1 + 1 & param_1[2];
    }
    iVar3 = *param_1;
    iVar2 = uVar1 * 8;
  } while (*(int *)(iVar3 + uVar1 * 8) != -1);
  return local_8;
}

// 014444F0  FUN_014444f0  size=113  [run]
undefined4 __thiscall FUN_014444f0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1[2] < param_1[1] * 2) && (iVar2 = FUN_01443c40(param_1[2] * 2 + 2), iVar2 != 0)) {
    return 1;
  }
  iVar2 = *param_1;
  uVar3 = param_2 * -0x61c8864f & param_1[2];
  iVar1 = *(int *)(iVar2 + uVar3 * 8);
  while (iVar1 != -1) {
    uVar3 = uVar3 + 1 & param_1[2];
    iVar1 = *(int *)(iVar2 + uVar3 * 8);
  }
  param_1[1] = param_1[1] + 1;
  *(int *)(iVar2 + uVar3 * 8) = param_2;
  *(undefined4 *)(*param_1 + 4 + uVar3 * 8) = param_3;
  return 0;
}

// 01444570  FUN_01444570  size=107  [run]
void __thiscall FUN_01444570(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] < param_1[1] * 2 + 2) {
    FUN_01443c40(param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar2 = param_2 * -0x61c8864f & param_1[2];
  if (*(int *)(iVar1 + uVar2 * 8) != param_2) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & param_1[2];
      if (*(int *)(iVar1 + uVar2 * 8) == param_2) {
        return;
      }
    }
    *(int *)(iVar1 + uVar2 * 8) = param_2;
    *(undefined4 *)(*param_1 + 4 + uVar2 * 8) = param_3;
    param_1[1] = param_1[1] + 1;
  }
  return;
}

// 014445E0  FUN_014445e0  size=51  [run]
undefined4 __thiscall FUN_014445e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01443a10(param_2,param_3);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_01443ad0(iVar1);
    return 0;
  }
  return 1;
}

// 01444620  FUN_01444620  size=45  [run]
undefined4 __thiscall FUN_01444620(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_014439d0(param_2);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_01443ad0(iVar1);
    return 0;
  }
  return 1;
}

// 01444650  FUN_01444650  size=34  [run]
void FUN_01444650(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  FUN_01443c40(iVar1);
  return;
}

// 01444680  FUN_01444680  size=64  [run]
void __thiscall FUN_01444680(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  param_3 = param_3 >> 4;
  *param_1 = param_2;
  param_1[1] = -0x80000000;
  param_1[2] = param_3 - 1;
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *param_1;
      *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// 014446C0  FUN_014446c0  size=108  [run]
int __thiscall FUN_014446c0(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  iVar1 = *param_1;
  local_8 = 0;
  while( true ) {
    iVar3 = (uVar4 & param_1[2]) * 0x10;
    uVar2 = *(uint *)(iVar3 + 4 + iVar1);
    if ((*(uint *)(iVar3 + iVar1) & uVar2) == 0xffffffff) break;
    if ((((*(uint *)(iVar3 + iVar1) == param_2) && (uVar2 == param_3)) &&
        (*(int *)(iVar3 + iVar1 + 8) == param_4)) && (*(int *)(iVar3 + iVar1 + 0xc) == param_5)) {
      local_8 = local_8 + 1;
    }
    uVar4 = (uVar4 & param_1[2]) + 1;
  }
  return local_8;
}

// 01444730  FUN_01444730  size=81  [run]
int __thiscall FUN_01444730(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_8;
  
  uVar3 = (param_2 >> 4) * -0x61c8864f;
  local_8 = 0;
  while( true ) {
    uVar3 = uVar3 & param_1[2];
    uVar1 = *(uint *)(*param_1 + uVar3 * 0x10);
    uVar2 = *(uint *)(*param_1 + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) break;
    if ((uVar1 == param_2) && (uVar2 == param_3)) {
      local_8 = local_8 + 1;
    }
    uVar3 = uVar3 + 1;
  }
  return local_8;
}

// 014447C0  FUN_014447c0  size=83  [run]
int __thiscall FUN_014447c0(int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = param_1[2];
  param_2 = param_2 + 1;
  do {
    if (param_2 <= iVar1) {
      puVar2 = (uint *)(param_2 * 0x10 + *param_1);
      do {
        if ((*puVar2 & puVar2[1]) == 0xffffffff) {
          return iVar1 + 1;
        }
        if ((*puVar2 == param_3) && (puVar2[1] == param_4)) {
          return param_2;
        }
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 4;
      } while (param_2 <= iVar1);
    }
    param_2 = 0;
  } while( true );
}

// 01444820  FUN_01444820  size=45  [run]
void __thiscall FUN_01444820(int *param_1,int param_2)

{
  uint *puVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    puVar1 = (uint *)(param_2 * 0x10 + *param_1);
    do {
      if ((*puVar1 & puVar1[1]) != 0xffffffff) {
        return;
      }
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 4;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 01444850  FUN_01444850  size=117  [run]
void __thiscall
FUN_01444850(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01444bb0(param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar2 = (param_2 >> 4) * -0x61c8864f;
  while (uVar2 = uVar2 & param_1[2],
        (*(uint *)(iVar1 + uVar2 * 0x10) & *(uint *)(iVar1 + 4 + uVar2 * 0x10)) != 0xffffffff) {
    uVar2 = uVar2 + 1;
  }
  param_1[1] = param_1[1] + 1;
  *(uint *)(iVar1 + uVar2 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 4 + uVar2 * 0x10) = param_3;
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_5;
  return;
}

// 014448D0  FUN_014448d0  size=68  [run]
uint __thiscall FUN_014448d0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar3 = uVar3 & param_1[2];
    uVar1 = *(uint *)(*param_1 + uVar3 * 0x10);
    uVar2 = *(uint *)(*param_1 + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) {
      return param_1[2] + 1;
    }
    if ((uVar1 == param_2) && (uVar2 == param_3)) break;
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}

// 01444920  FUN_01444920  size=86  [run]
uint __thiscall FUN_01444920(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  iVar1 = *param_1;
  uVar2 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar2 = uVar2 & param_1[2];
    iVar3 = uVar2 * 0x10;
    puVar4 = (uint *)(iVar3 + iVar1);
    if ((*(uint *)(iVar3 + iVar1) & *(uint *)(iVar3 + 4 + iVar1)) == 0xffffffff) {
      return param_1[2] + 1;
    }
    if ((((*puVar4 == param_2) && (puVar4[1] == param_3)) && (puVar4[2] == param_4)) &&
       (puVar4[3] == param_5)) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

// 01444980  FUN_01444980  size=88  [run]
undefined8 __thiscall FUN_01444980(int *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 & uVar3) == 0xffffffff) {
      return param_4;
    }
    if ((uVar2 == param_2) && (uVar3 == param_3)) break;
    uVar4 = uVar4 + 1;
  }
  return CONCAT44(*(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10),
                  *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10));
}

// 014449E0  FUN_014449e0  size=63  [run]
undefined4 __thiscall
FUN_014449e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_014448d0(param_2,param_3);
  if (iVar2 <= param_1[2]) {
    iVar1 = *param_1;
    *param_4 = *(undefined4 *)(iVar1 + 8 + iVar2 * 0x10);
    param_4[1] = *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x10);
    return 0;
  }
  return 1;
}

// 01444A20  FUN_01444a20  size=222  [run]
void __thiscall FUN_01444a20(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *param_1;
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(iVar1 + param_2 * 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4 + param_2 * 0x10) = 0xffffffff;
  uVar4 = param_1[2];
  uVar3 = param_2;
  do {
    uVar3 = uVar4 + uVar3 & uVar4;
  } while ((*(uint *)(*param_1 + uVar3 * 0x10) & *(uint *)(*param_1 + 4 + uVar3 * 0x10)) !=
           0xffffffff);
  uVar3 = uVar3 + 1 & uVar4;
  uVar4 = param_2 + 1 & uVar4;
  while( true ) {
    iVar1 = *param_1;
    uVar2 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((*(uint *)(iVar1 + uVar4 * 0x10) & uVar2) == 0xffffffff) break;
    uVar5 = (*(uint *)(iVar1 + uVar4 * 0x10) >> 4) * -0x61c8864f & param_1[2];
    if ((((uVar4 < uVar3) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar4 || ((uVar5 <= param_2 && (uVar4 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar3 <= uVar5)))) {
      *(undefined4 *)(iVar1 + param_2 * 0x10) = *(undefined4 *)(iVar1 + uVar4 * 0x10);
      *(uint *)(iVar1 + 4 + param_2 * 0x10) = uVar2;
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 8 + param_2 * 0x10) = *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10);
      *(undefined4 *)(iVar1 + 0xc + param_2 * 0x10) = *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10);
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + uVar4 * 0x10) = 0xffffffff;
      *(undefined4 *)(iVar1 + 4 + uVar4 * 0x10) = 0xffffffff;
      param_2 = uVar4;
    }
    uVar4 = uVar4 + 1 & param_1[2];
  }
  return;
}

// 01444B00  FUN_01444b00  size=114  [run]
void __thiscall FUN_01444b00(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int local_c;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    puVar2 = (uint *)*param_1;
    local_c = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if ((uVar3 & puVar5[1]) != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *param_2 = 1;
  return;
}

// 01444B80  FUN_01444b80  size=48  [run]
void __fastcall FUN_01444b80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[2] + 1;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar1 = *param_1;
      *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 01444BB0  FUN_01444bb0  size=212  [run]
undefined4 __thiscall FUN_01444bb0(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  puVar1 = (uint *)*param_1;
  uVar2 = param_1[1];
  iVar6 = param_1[2] + 1;
  iVar4 = (**(code **)(PTR_vftable_018e9b94 + 4))(param_2 << 4);
  if (iVar4 != 0) {
    *param_1 = iVar4;
    if (0 < param_2) {
      iVar5 = 0;
      iVar4 = param_2;
      do {
        iVar3 = *param_1;
        *(undefined4 *)(iVar5 + iVar3) = 0xffffffff;
        *(undefined4 *)(iVar5 + 4 + iVar3) = 0xffffffff;
        iVar5 = iVar5 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1[1] = 0;
    param_1[2] = param_2 + -1;
    puVar7 = puVar1;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if ((*puVar7 & puVar7[1]) != 0xffffffff) {
          FUN_01444850(*puVar7,puVar7[1],puVar7[2],puVar7[3]);
        }
        param_2 = param_2 + -1;
        puVar7 = puVar7 + 4;
      } while (param_2 != 0);
    }
    if ((uVar2 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 8))(puVar1,iVar6 * 0x10);
    }
    return 0;
  }
  return 1;
}

// 01444C90  FUN_01444c90  size=31  [run]
void FUN_01444c90(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01444CB0  FUN_01444cb0  size=39  [run]
void FUN_01444cb0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01444CE0  FUN_01444ce0  size=31  [run]
void __thiscall FUN_01444ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_014440b0(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01444D00  FUN_01444d00  size=31  [run]
void FUN_01444d00(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01444D20  FUN_01444d20  size=39  [run]
void FUN_01444d20(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01444D50  FUN_01444d50  size=31  [run]
void FUN_01444d50(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01444D70  FUN_01444d70  size=39  [run]
void FUN_01444d70(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01444DA0  FUN_01444da0  size=37  [run]
void __thiscall FUN_01444da0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_014448d0(param_3,param_4);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01444DD0  FUN_01444dd0  size=83  [run]
undefined4 * __thiscall FUN_01444dd0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 4;
  param_1[1] = 0;
  if (4 < param_2 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_2 * 3);
  }
  uVar1 = (**(code **)(PTR_vftable_018e9b94 + 4))(iVar2 * 8);
  *param_1 = uVar1;
  param_1[2] = iVar2 + -1;
  FUN_014442b0();
  return param_1;
}

// 01444E30  FUN_01444e30  size=54  [run]
int * __fastcall FUN_01444e30(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(PTR_vftable_018e9b94 + 4))(0x80);
  *param_1 = iVar1;
  param_1[1] = 0;
  param_1[2] = 0xf;
  if (iVar1 != 0) {
    FUN_014442b0();
  }
  return param_1;
}

// 01444E70  FUN_01444e70  size=113  [run]
int __thiscall FUN_01444e70(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  uVar4 = (param_2 >> 4) * -0x61c8864f & param_1[2];
  iVar3 = *param_1;
  iVar2 = uVar4 * 8;
  local_8 = 0;
  uVar1 = uVar4;
  if (*(int *)(iVar2 + iVar3) == -1) {
    return 0;
  }
  do {
    if (*(uint *)(iVar3 + iVar2) == param_2) {
      FUN_014441b0(uVar1);
      local_8 = local_8 + 1;
      uVar1 = uVar4;
    }
    else {
      uVar1 = uVar1 + 1 & param_1[2];
    }
    iVar3 = *param_1;
    iVar2 = uVar1 * 8;
  } while (*(int *)(iVar3 + uVar1 * 8) != -1);
  return local_8;
}

// 01444EF0  FUN_01444ef0  size=114  [run]
undefined4 __thiscall FUN_01444ef0(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1[2] < param_1[1] * 2) && (iVar2 = FUN_014442e0(param_1[2] * 2 + 2), iVar2 != 0)) {
    return 1;
  }
  iVar2 = *param_1;
  uVar3 = (param_2 >> 4) * -0x61c8864f & param_1[2];
  iVar1 = *(int *)(iVar2 + uVar3 * 8);
  while (iVar1 != -1) {
    uVar3 = uVar3 + 1 & param_1[2];
    iVar1 = *(int *)(iVar2 + uVar3 * 8);
  }
  param_1[1] = param_1[1] + 1;
  *(uint *)(iVar2 + uVar3 * 8) = param_2;
  *(undefined4 *)(*param_1 + 4 + uVar3 * 8) = param_3;
  return 0;
}

// 01444F70  FUN_01444f70  size=107  [run]
void __thiscall FUN_01444f70(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] < param_1[1] * 2 + 2) {
    FUN_014442e0(param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar2 = (param_2 >> 4) * -0x61c8864f & param_1[2];
  if (*(uint *)(iVar1 + uVar2 * 8) != param_2) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & param_1[2];
      if (*(uint *)(iVar1 + uVar2 * 8) == param_2) {
        return;
      }
    }
    *(uint *)(iVar1 + uVar2 * 8) = param_2;
    *(undefined4 *)(*param_1 + 4 + uVar2 * 8) = param_3;
    param_1[1] = param_1[1] + 1;
  }
  return;
}

// 01444FE0  FUN_01444fe0  size=51  [run]
undefined4 __thiscall FUN_01444fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_014440f0(param_2,param_3);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_014441b0(iVar1);
    return 0;
  }
  return 1;
}

// 01445020  FUN_01445020  size=45  [run]
undefined4 __thiscall FUN_01445020(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_014440b0(param_2);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_014441b0(iVar1);
    return 0;
  }
  return 1;
}

// 01445050  FUN_01445050  size=34  [run]
void FUN_01445050(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  FUN_014442e0(iVar1);
  return;
}

// 01445080  FUN_01445080  size=81  [run]
undefined4 * __thiscall FUN_01445080(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 4;
  param_1[1] = 0;
  if (4 < param_2 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_2 * 3);
  }
  uVar1 = (**(code **)(PTR_vftable_018e9b94 + 4))(iVar2 << 4);
  *param_1 = uVar1;
  param_1[2] = iVar2 + -1;
  FUN_01444b80();
  return param_1;
}

// 01445120  FUN_01445120  size=96  [run]
int __thiscall FUN_01445120(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_8;
  
  uVar4 = (param_2 >> 4) * -0x61c8864f & param_1[2];
  local_8 = 0;
  uVar3 = uVar4;
  while( true ) {
    uVar1 = *(uint *)(*param_1 + uVar3 * 0x10);
    uVar2 = *(uint *)(*param_1 + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) break;
    if ((uVar1 == param_2) && (uVar2 == param_3)) {
      FUN_01444a20(uVar3);
      local_8 = local_8 + 1;
      uVar3 = uVar4;
    }
    else {
      uVar3 = uVar3 + 1 & param_1[2];
    }
  }
  return local_8;
}

// 01445180  FUN_01445180  size=133  [run]
undefined4 __thiscall
FUN_01445180(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] < param_1[1] * 2) {
    iVar1 = FUN_01444bb0(param_1[2] * 2 + 2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  iVar1 = *param_1;
  uVar2 = (param_2 >> 4) * -0x61c8864f;
  while (uVar2 = uVar2 & param_1[2],
        (*(uint *)(iVar1 + uVar2 * 0x10) & *(uint *)(iVar1 + 4 + uVar2 * 0x10)) != 0xffffffff) {
    uVar2 = uVar2 + 1;
  }
  param_1[1] = param_1[1] + 1;
  *(uint *)(iVar1 + uVar2 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 4 + uVar2 * 0x10) = param_3;
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_5;
  return 0;
}

// 01445210  FUN_01445210  size=127  [run]
void __thiscall
FUN_01445210(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1[2] < param_1[1] * 2 + 2) {
    FUN_01444bb0(param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 == param_2) && (uVar3 == param_3)) break;
    if ((uVar2 & uVar3) == 0xffffffff) {
      *(uint *)(iVar1 + uVar4 * 0x10) = param_2;
      *(uint *)(iVar1 + 4 + uVar4 * 0x10) = param_3;
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10) = param_4;
      *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10) = param_5;
      param_1[1] = param_1[1] + 1;
      return;
    }
    uVar4 = uVar4 + 1;
  }
  return;
}

// 01445290  FUN_01445290  size=59  [run]
undefined4 __thiscall
FUN_01445290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = FUN_01444920(param_2,param_3,param_4,param_5);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_01444a20(iVar1);
    return 0;
  }
  return 1;
}

// 014452D0  FUN_014452d0  size=51  [run]
undefined4 __thiscall FUN_014452d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_014448d0(param_2,param_3);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_01444a20(iVar1);
    return 0;
  }
  return 1;
}

// 01445310  FUN_01445310  size=34  [run]
void FUN_01445310(int param_1)

{
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  FUN_01444bb0(iVar1);
  return;
}

// 01445340  hkOffsetOnlyStreamWriter::vf10  size=36  [run]
void __thiscall hkOffsetOnlyStreamWriter::vf10(int param_1,undefined4 param_2,int param_3)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3;
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc);
  return;
}

// 01445370  hkOffsetOnlyStreamWriter::vf1C  size=67  [run]
undefined4 __thiscall hkOffsetOnlyStreamWriter::vf1C(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
      goto LAB_01445397;
    }
    if (param_3 != 2) goto LAB_01445397;
    param_2 = *(int *)(param_1 + 0xc) - param_2;
  }
  *(int *)(param_1 + 8) = param_2;
LAB_01445397:
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc);
    return 0;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8);
  return 0;
}

// 014453C0  hkOffsetOnlyStreamWriter::vf20  size=4  [run]
undefined4 __fastcall hkOffsetOnlyStreamWriter::vf20(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 014453D0  hkOffsetOnlyStreamWriter::hkOffsetOnlyStreamWriter  size=26  [run]
void __fastcall hkOffsetOnlyStreamWriter::hkOffsetOnlyStreamWriter(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 014453F0  hkOffsetOnlyStreamWriter::vf0C  size=13  [run]
void hkOffsetOnlyStreamWriter::vf0C(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01445400  hkOffsetOnlyStreamWriter::vf18  size=13  [run]
void hkOffsetOnlyStreamWriter::vf18(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01445410  FUN_01445410  size=38  [run]
void FUN_01445410(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01445440  hkOffsetOnlyStreamWriter::vf00  size=53  [run]
undefined4 * __thiscall hkOffsetOnlyStreamWriter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01445480  FUN_01445480  size=68  [run]
undefined4 __fastcall FUN_01445480(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_1c [24];
  
  iVar1 = param_1[1] - *param_1;
  if (0x14 < iVar1) {
    return 0;
  }
  FUN_01015cb0(local_1c,*param_1,iVar1);
  local_1c[param_1[1] - *param_1] = 0;
  uVar2 = FUN_01015cf0(local_1c,10);
  return uVar2;
}

// 014454D0  FUN_014454d0  size=31  [run]
undefined4 FUN_014454d0(undefined4 param_1,int *param_2)

{
  FUN_01018fc0(*param_2,param_2[1] - *param_2);
  return param_1;
}

// 01445520  FUN_01445520  size=30  [run]
void __thiscall FUN_01445520(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = FUN_01015cd0(param_2);
  param_1[1] = iVar1 + *param_1;
  return;
}

// 01445550  FUN_01445550  size=106  [run]
void __thiscall FUN_01445550(undefined4 *param_1,undefined1 *param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = (char *)*param_3;
  pcVar3 = (char *)*param_1;
  if (pcVar3 == pcVar1) {
    *param_2 = param_1[1] == param_3[1];
    return;
  }
  iVar2 = param_1[1] - (int)pcVar3;
  if (iVar2 != param_3[1] - (int)pcVar1) {
    *param_2 = 0;
    return;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar5 = (int)pcVar1 - (int)pcVar3;
    do {
      if (*pcVar3 != pcVar3[iVar5]) {
        *param_2 = 0;
        return;
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (iVar4 < iVar2);
  }
  *param_2 = 1;
  return;
}

// 014455C0  FUN_014455c0  size=76  [run]
void __thiscall FUN_014455c0(undefined4 *param_1,undefined1 *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  for (; (pcVar1 < (char *)param_1[1] && (*param_3 != '\0')); param_3 = param_3 + 1) {
    if (*pcVar1 != *param_3) {
      *param_2 = 0;
      return;
    }
    pcVar1 = pcVar1 + 1;
  }
  if ((pcVar1 == (char *)param_1[1]) && (*param_3 == '\0')) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 01445610  FUN_01445610  size=95  [run]
int __thiscall FUN_01445610(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar3;
  
  pcVar1 = (char *)*param_1;
  pcVar5 = (char *)*param_2;
  iVar6 = param_1[1] - (int)pcVar1;
  iVar4 = param_2[1] - (int)pcVar5;
  iVar3 = iVar6;
  if (iVar4 <= iVar6) {
    iVar3 = iVar4;
  }
  pcVar2 = pcVar1 + iVar3;
  do {
    if (pcVar2 <= pcVar1) {
LAB_01445647:
      if (iVar6 == iVar4) {
        return 0;
      }
      return (uint)(iVar4 <= iVar6) * 2 + -1;
    }
    if (*pcVar1 != *pcVar5) {
      if (pcVar1 < pcVar2) {
        return (uint)(*pcVar5 <= *pcVar1) * 2 + -1;
      }
      goto LAB_01445647;
    }
    pcVar1 = pcVar1 + 1;
    pcVar5 = pcVar5 + 1;
  } while( true );
}

// 01445680  FUN_01445680  size=224  [run]
void __thiscall FUN_01445680(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2,param_3 * param_4);
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (param_3 == 2) {
      if (0 < param_4) {
        do {
          uVar1 = *param_2;
          *param_2 = param_2[1];
          param_2[1] = uVar1;
          param_2 = param_2 + 2;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else if (param_3 == 4) {
      if (0 < param_4) {
        param_2 = param_2 + 2;
        do {
          uVar1 = param_2[-2];
          param_2[-2] = param_2[1];
          param_2[1] = uVar1;
          uVar1 = param_2[-1];
          param_2[-1] = *param_2;
          *param_2 = uVar1;
          param_2 = param_2 + 4;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
    }
    else if ((param_3 == 8) && (0 < param_4)) {
      param_2 = param_2 + 6;
      do {
        uVar1 = param_2[-6];
        param_2[-6] = param_2[1];
        param_2[1] = uVar1;
        uVar1 = param_2[-5];
        param_2[-5] = *param_2;
        *param_2 = uVar1;
        uVar1 = param_2[-4];
        param_2[-4] = param_2[-1];
        param_2[-1] = uVar1;
        uVar1 = param_2[-3];
        param_2[-3] = param_2[-2];
        param_2[-2] = uVar1;
        param_2 = param_2 + 8;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  return;
}

// 01445770  FUN_01445770  size=14  [run]
void __fastcall FUN_01445770(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0144577c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return;
}

// 01445780  FUN_01445780  size=25  [run]
undefined4 __thiscall FUN_01445780(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
  return param_2;
}

// 014457B0  FUN_014457b0  size=34  [run]
void __thiscall FUN_014457b0(int param_1,undefined4 param_2)

{
  FUN_01006000();
  FUN_010060a0();
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 014457E0  hkIArchive::hkIArchive  size=45  [run]
undefined4 * __thiscall
hkIArchive::hkIArchive(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  FUN_01006000();
  return param_1;
}

// 01445810  hkIArchive::hkIArchive  size=54  [run]
undefined4 * __thiscall
hkIArchive::hkIArchive(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 3) = param_3;
  uVar1 = (**(code **)(*DAT_01f909a4 + 0xc))(param_2);
  param_1[2] = uVar1;
  return param_1;
}

// 01445850  hkBaseObject::hkBaseObject_238  size=29  [run]
void __fastcall hkBaseObject::hkBaseObject_238(undefined4 *param_1)

{
  *param_1 = hkIArchive::vftable;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  *param_1 = vftable;
  return;
}

// 01445870  FUN_01445870  size=60  [run]
void FUN_01445870(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = param_2;
  iVar2 = 0;
  if (0 < (int)param_2) {
    do {
      FUN_01445680(&param_2,4,1);
      *(double *)(param_1 + iVar2 * 8) = (double)param_2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)fVar1);
  }
  return;
}

// 014458B0  hkIArchive::hkIArchive  size=88  [run]
undefined4 * __thiscall
hkIArchive::hkIArchive(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 3) = param_4;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1c);
  *(undefined2 *)(iVar2 + 4) = 0x1c;
  uVar3 = hkMemoryStreamReader::hkMemoryStreamReader(param_2,param_3,2);
  param_1[2] = uVar3;
  return param_1;
}

// 01445910  FUN_01445910  size=38  [run]
void FUN_01445910(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01445940  hkIArchive::vf00  size=52  [run]
int __thiscall hkIArchive::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_238();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01445980  FUN_01445980  size=61  [run]
float10 __thiscall FUN_01445980(int param_1,float param_2,float param_3)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(int *)(param_1 + 4) = iVar1;
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return fVar2 * (float10)2.3283064e-10 * ((float10)param_3 - (float10)param_2) + (float10)param_2;
}

// 014459C0  FUN_014459c0  size=36  [run]
undefined4 FUN_014459c0(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  return CONCAT31(CONCAT21(CONCAT11(param_4,param_1),param_2),param_3);
}

// 014459F0  FUN_014459f0  size=31  [run]
uint FUN_014459f0(uint param_1,int param_2)

{
  return *(uint *)(&DAT_01b34330 + (param_1 & 0x1f) * 4) & 0xffffff | param_2 << 0x18;
}

// 01445A10  FUN_01445a10  size=14  [run]
int FUN_01445a10(float param_1)

{
  return (int)param_1;
}

// 01445A20  FUN_01445a20  size=14  [run]
int FUN_01445a20(float param_1)

{
  return (int)param_1;
}

// 01445AA0  FUN_01445aa0  size=105  [run]
void FUN_01445aa0(float param_1,float param_2,float param_3,float param_4)

{
  FUN_014459c0((int)(param_1 * 255.0),(int)(param_2 * 255.0),(int)(param_3 * 255.0),
               (int)(param_4 * 255.0));
  return;
}

// 01445B10  FUN_01445b10  size=376  [run]
void __fastcall FUN_01445b10(float *param_1,float *param_2,float param_3)

{
  int iVar1;
  float *unaff_ESI;
  float fVar2;
  float fVar3;
  float in_XMM3_Da;
  float fVar4;
  float fVar5;
  float in_XMM5_Da;
  
  if (in_XMM5_Da != (float)(undefined *)0x0) {
    if (in_XMM3_Da == 1.0) {
      fVar4 = 6.0;
      iVar1 = 5;
    }
    else {
      fVar4 = in_XMM3_Da * 6.0;
      fVar2 = ((fVar4 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
      iVar1 = (int)(float)(~-(uint)(8388608.0 < ABS(fVar4)) &
                           (uint)((float)(int)-(uint)(fVar4 < fVar2) + fVar2) |
                          -(uint)(8388608.0 < ABS(fVar4)) & (uint)fVar4);
    }
    fVar3 = (1.0 - in_XMM5_Da) * param_3;
    fVar5 = (1.0 - (fVar4 - (float)iVar1) * in_XMM5_Da) * param_3;
    fVar2 = (1.0 - (1.0 - (fVar4 - (float)iVar1)) * in_XMM5_Da) * param_3;
    switch(iVar1) {
    case 0:
      *unaff_ESI = param_3;
      *param_2 = fVar2;
      *param_1 = fVar3;
      return;
    case 1:
      *unaff_ESI = fVar5;
      *param_2 = param_3;
      *param_1 = fVar3;
      return;
    case 2:
      *unaff_ESI = fVar3;
      *param_2 = param_3;
      *param_1 = fVar2;
      return;
    case 3:
      *unaff_ESI = fVar3;
      *param_2 = fVar5;
      *param_1 = param_3;
      return;
    case 4:
      *unaff_ESI = fVar2;
      *param_2 = fVar3;
      *param_1 = param_3;
      return;
    default:
      *unaff_ESI = param_3;
      *param_2 = fVar3;
      *param_1 = fVar5;
      return;
    }
  }
  *param_1 = param_3;
  *param_2 = param_3;
  *unaff_ESI = param_3;
  return;
}

// 01445CA0  FUN_01445ca0  size=100  [run]
void FUN_01445ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_01445b10(param_3);
  FUN_01445aa0(local_10,local_c,local_8,param_4);
  return;
}

// 01445D10  FUN_01445d10  size=153  [run]
void FUN_01445d10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  iVar5 = iVar4 * 0x19660d + 0x3c6ef35f;
  iVar6 = iVar5 * 0x19660d + 0x3c6ef35f;
  *(int *)(param_1 + 4) = iVar6;
  fVar1 = (float)iVar6;
  if (iVar6 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar3 = (float)iVar5;
  if (iVar5 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar2 = (float)iVar4;
  if (iVar4 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  FUN_01445aa0(fVar2 * 2.3283064e-10,fVar3 * 2.3283064e-10,fVar1 * 2.3283064e-10,0x3f800000);
  return;
}

// 01445F10  FUN_01445f10  size=544  [run]
uint FUN_01445f10(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = *param_4;
  fVar4 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = *param_2;
  fVar3 = param_2[1];
  fVar5 = param_2[2];
  fVar9 = fVar4 * fVar3 + fVar2 * fVar8 + fVar7 * fVar5;
  fVar11 = fVar8 * (*param_3 - *param_1) + fVar3 * (param_3[1] - param_1[1]) +
           fVar5 * (param_3[2] - param_1[2]);
  fVar10 = fVar2 * (*param_3 - *param_1) + fVar4 * (param_3[1] - param_1[1]) +
           fVar7 * (param_3[2] - param_1[2]);
  fVar8 = fVar8 * fVar8 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar4 = fVar4 * fVar4 + fVar2 * fVar2 + fVar7 * fVar7;
  fVar7 = ABS(fVar4 * fVar8 - fVar9 * fVar9);
  fVar2 = fVar11 * fVar4 - fVar10 * fVar9;
  if (fVar7 * fVar7 <= fVar7 * fVar2) {
LAB_01446065:
    fVar2 = 1.0;
    uVar1 = 1;
  }
  else if (0.0 < fVar2) {
    if (fVar7 <= (fVar8 * fVar4 + fVar9 * fVar9) * 9.536743e-07) goto LAB_01446065;
    fVar2 = fVar2 / fVar7;
    uVar1 = 0;
  }
  else {
    fVar2 = 0.0;
    uVar1 = 2;
  }
  fVar10 = fVar9 * fVar2 - fVar10;
  if (fVar10 < fVar4) {
    if (0.0 < fVar10) {
      fVar10 = fVar10 / fVar4;
      goto LAB_014460d2;
    }
    fVar10 = 0.0;
    uVar1 = 8;
  }
  else {
    fVar10 = 1.0;
    uVar1 = 4;
  }
  fVar11 = fVar9 * fVar10 + fVar11;
  if (0.0 < fVar11) {
    if (fVar11 < fVar8) {
      fVar2 = fVar11 / fVar8;
    }
    else {
      fVar2 = 1.0;
      uVar1 = uVar1 | 1;
    }
  }
  else {
    fVar2 = 0.0;
    uVar1 = uVar1 | 2;
  }
LAB_014460d2:
  param_5[0xc] = fVar2;
  param_5[0xd] = fVar2;
  param_5[0xe] = fVar2;
  param_5[0xf] = fVar2;
  param_5[0x10] = fVar10;
  param_5[0x11] = fVar10;
  param_5[0x12] = fVar10;
  param_5[0x13] = fVar10;
  fVar5 = *param_2 * fVar2 + *param_1;
  fVar9 = param_2[1] * fVar2 + param_1[1];
  fVar11 = param_2[2] * fVar2 + param_1[2];
  fVar6 = param_2[3] * fVar2 + param_1[3];
  fVar2 = param_4[3];
  fVar4 = param_3[3];
  fVar7 = fVar5 - (*param_4 * fVar10 + *param_3);
  fVar8 = fVar9 - (param_4[1] * fVar10 + param_3[1]);
  fVar3 = fVar11 - (param_4[2] * fVar10 + param_3[2]);
  *param_5 = fVar5;
  param_5[1] = fVar9;
  param_5[2] = fVar11;
  param_5[3] = fVar6;
  param_5[4] = fVar7;
  param_5[5] = fVar8;
  param_5[6] = fVar3;
  param_5[7] = fVar6 - (fVar2 * fVar10 + fVar4);
  param_5[8] = fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3;
  return uVar1;
}

// 01446130  FUN_01446130  size=154  [run]
undefined4 FUN_01446130(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar9 = *param_3 - fVar1;
  fVar10 = fVar5 - fVar2;
  fVar11 = fVar6 - fVar3;
  fVar12 = (param_1[1] - fVar2) * fVar10 + (*param_1 - fVar1) * fVar9 +
           (param_1[2] - fVar3) * fVar11;
  fVar8 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
  if (fVar12 <= 0.0) {
    *param_4 = fVar1;
    param_4[1] = fVar2;
    param_4[2] = fVar3;
    param_4[3] = fVar4;
    return 8;
  }
  if (fVar8 <= fVar12) {
    *param_4 = *param_3;
    param_4[1] = fVar5;
    param_4[2] = fVar6;
    param_4[3] = fVar7;
    return 4;
  }
  fVar12 = fVar12 / fVar8;
  *param_4 = fVar12 * fVar9 + fVar1;
  param_4[1] = fVar12 * fVar10 + fVar2;
  param_4[2] = fVar12 * fVar11 + fVar3;
  param_4[3] = fVar12 * (fVar7 - fVar4) + fVar4;
  return 0;
}

// 014461D0  FUN_014461d0  size=460  [run]
bool FUN_014461d0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar2 = param_1[3];
  fVar3 = param_3[3];
  fVar6 = *param_4;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar4 = param_4[3];
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar5 = param_2[3];
  fVar13 = *param_3 - *param_1;
  fVar17 = param_3[1] - param_1[1];
  fVar18 = param_3[2] - param_1[2];
  fVar9 = fVar7 * fVar11 + fVar6 * fVar10 + fVar8 * fVar12;
  fVar14 = fVar7 * fVar17 + fVar6 * fVar13 + fVar8 * fVar18;
  fVar19 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
  fVar15 = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
  fVar16 = fVar15 * fVar19 - fVar9 * fVar9;
  bVar1 = ABS(fVar16) <= (fVar9 * fVar9 + ABS(fVar15 * fVar19)) * 9.536743e-07;
  if (bVar1) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = (fVar15 * (fVar11 * fVar17 + fVar10 * fVar13 + fVar12 * fVar18) - fVar14 * fVar9) /
             fVar16;
  }
  fVar15 = (fVar9 * fVar16 - fVar14) / fVar15;
  fVar10 = fVar10 * fVar16 + *param_1;
  fVar11 = fVar11 * fVar16 + param_1[1];
  fVar12 = fVar12 * fVar16 + param_1[2];
  fVar9 = fVar6 * fVar15 + *param_3;
  fVar13 = fVar7 * fVar15 + param_3[1];
  fVar14 = fVar8 * fVar15 + param_3[2];
  fVar6 = fVar10 - fVar9;
  fVar7 = fVar11 - fVar13;
  fVar8 = fVar12 - fVar14;
  *param_5 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
  param_5[4] = fVar10;
  param_5[5] = fVar11;
  param_5[6] = fVar12;
  param_5[7] = fVar5 * fVar16 + fVar2;
  param_5[8] = fVar9;
  param_5[9] = fVar13;
  param_5[10] = fVar14;
  param_5[0xb] = fVar4 * fVar15 + fVar3;
  param_5[1] = fVar16;
  param_5[2] = fVar15;
  return bVar1;
}

// 014463A0  FUN_014463a0  size=16  [run]
undefined * FUN_014463a0(int param_1)

{
  return &DAT_0182bba0 + param_1 * 0x10;
}

// 01446740  FUN_01446740  size=201  [run]
void FUN_01446740(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar11 = 0x3f000000;
  iVar12 = 0x3f000001;
  iVar13 = 0x3f000002;
  iVar14 = 0x3f000003;
  uVar9 = param_2 + 3U >> 2;
  if (uVar9 != 0) {
    puVar7 = (undefined4 *)(param_3 + 0x20);
    puVar8 = (undefined4 *)(param_1 + 0x20);
    uVar10 = uVar9;
    do {
      uVar1 = puVar8[-7];
      uVar2 = puVar8[-6];
      uVar3 = puVar8[-5];
      puVar7[-8] = puVar8[-8];
      puVar7[-7] = uVar1;
      puVar7[-6] = uVar2;
      puVar7[-5] = uVar3;
      uVar1 = puVar8[-3];
      uVar2 = puVar8[-2];
      uVar3 = puVar8[-1];
      puVar7[-4] = puVar8[-4];
      puVar7[-3] = uVar1;
      puVar7[-2] = uVar2;
      puVar7[-1] = uVar3;
      uVar1 = puVar8[1];
      uVar2 = puVar8[2];
      uVar3 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      puVar7[4] = iVar11;
      puVar7[5] = iVar12;
      puVar7[6] = iVar13;
      puVar7[7] = iVar14;
      uVar1 = puVar7[-7];
      uVar2 = puVar7[-6];
      uVar3 = puVar7[-5];
      uVar4 = puVar7[-2];
      uVar5 = puVar7[-1];
      uVar6 = puVar7[3];
      puVar7[-8] = puVar7[-8];
      puVar7[-7] = puVar7[-4];
      puVar7[-6] = *puVar7;
      puVar7[-5] = iVar11;
      puVar7[-4] = uVar1;
      puVar7[-3] = puVar7[-3];
      puVar7[-2] = puVar7[1];
      puVar7[-1] = iVar12;
      *puVar7 = uVar2;
      puVar7[1] = uVar4;
      puVar7[2] = puVar7[2];
      puVar7[3] = iVar13;
      puVar7[4] = uVar3;
      puVar7[5] = uVar5;
      puVar7[6] = uVar6;
      puVar7[7] = iVar14;
      puVar7 = puVar7 + 0x10;
      puVar8 = puVar8 + 0xc;
      uVar10 = uVar10 - 1;
      iVar11 = iVar11 + 4;
      iVar12 = iVar12 + 4;
      iVar13 = iVar13 + 4;
      iVar14 = iVar14 + 4;
    } while (uVar10 != 0);
  }
  if (param_2 < (int)(uVar9 * 4)) {
    puVar8 = (undefined4 *)(param_3 + param_2 * 0x10);
    param_2 = uVar9 * 4 - param_2;
    puVar7 = puVar8;
    do {
      uVar1 = puVar8[-3];
      uVar2 = puVar8[-2];
      uVar3 = puVar8[-1];
      *puVar7 = puVar8[-4];
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      puVar7 = puVar7 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01446A70  FUN_01446a70  size=14  [run]
int FUN_01446a70(int param_1)

{
  return param_1 + 0x1f >> 5;
}

// 01446A80  FUN_01446a80  size=373  [run]
int FUN_01446a80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_c;
  
  iVar1 = param_2 + 0x1f >> 5;
  iVar5 = 0;
  iVar2 = (param_2 - 1U & 0x1f) + 1;
  uVar3 = 0xffffffff;
  local_c = 0;
  if (iVar2 != 0x20) {
    uVar3 = ~(-1 << ((byte)iVar2 & 0x1f));
  }
  iVar2 = 0;
  uVar3 = *(uint *)(param_1 + -4 + iVar1 * 4) & uVar3;
  param_2 = 0;
  if (1 < iVar1) {
    do {
      uVar3 = (uVar3 >> 1 & 0x55555555) + (uVar3 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = (uVar3 >> 4 & 0xf0f0f0f) + (uVar3 & 0xf0f0f0f);
      uVar3 = (uVar3 >> 8 & 0xf000f) + (uVar3 & 0xf000f);
      iVar2 = iVar2 + (uVar3 & 0xff) + (uVar3 >> 0x10);
      uVar3 = *(uint *)(param_1 + iVar5 * 4);
      uVar3 = (uVar3 >> 1 & 0x55555555) + (uVar3 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar4 = (uVar3 >> 4 & 0xf0f0f0f) + (uVar3 & 0xf0f0f0f);
      uVar3 = *(uint *)(param_1 + 4 + iVar5 * 4);
      uVar4 = (uVar4 >> 8 & 0xf000f) + (uVar4 & 0xf000f);
      param_2 = (uVar4 & 0xff) + param_2 + (uVar4 >> 0x10);
      iVar5 = iVar5 + 2;
    } while (iVar5 < iVar1 + -1);
  }
  if (iVar5 < iVar1) {
    uVar3 = (uVar3 >> 1 & 0x55555555) + (uVar3 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = (uVar3 >> 4 & 0xf0f0f0f) + (uVar3 & 0xf0f0f0f);
    uVar3 = (uVar3 >> 8 & 0xf000f) + (uVar3 & 0xf000f);
    local_c = (uVar3 >> 0x10) + (uVar3 & 0xff);
  }
  return param_2 + iVar2 + local_c;
}

// 01446C00  FUN_01446c00  size=57  [run]
void __thiscall FUN_01446c00(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[3] + -1 >> 5;
  puVar1 = (uint *)(*param_1 + iVar2 * 4);
  iVar2 = param_1[3] + iVar2 * -0x20;
  if (iVar2 < 0x20) {
    uVar3 = -1 << ((byte)iVar2 & 0x1f);
    if (param_2 == 0) {
      *puVar1 = *puVar1 & ~uVar3;
      return;
    }
    *puVar1 = *puVar1 | uVar3;
  }
  return;
}

// 01446C40  FUN_01446c40  size=135  [run]
void __thiscall FUN_01446c40(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((0 < param_1[3]) && (param_1[3] < param_2)) {
    FUN_01446c00(param_3);
  }
  iVar2 = param_2 + 0x1f >> 5;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar1,4);
  }
  iVar1 = iVar2 - param_1[1];
  piVar3 = (int *)(*param_1 + param_1[1] * 4);
  if (iVar1 < 1) {
    param_1[1] = iVar2;
    param_1[3] = param_2;
    return;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = -(uint)(param_3 != 0);
    piVar3 = piVar3 + 1;
  }
  param_1[1] = iVar2;
  param_1[3] = param_2;
  return;
}

// 01446CD0  FUN_01446cd0  size=68  [run]
void __fastcall FUN_01446cd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  param_1[3] = 0;
  return;
}

// 01446D30  FUN_01446d30  size=54  [run]
void __thiscall FUN_01446d30(int param_1,int param_2)

{
  if (*(char *)(param_2 + 9) == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 01446D70  FUN_01446d70  size=54  [run]
void __fastcall FUN_01446d70(int param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar2 = *(int *)(param_1 + 0x20);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    *(undefined2 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}

// 01446DB0  FUN_01446db0  size=13  [run]
void __fastcall FUN_01446db0(undefined4 param_1)

{
  FUN_01446d30(param_1);
  return;
}

// 01446DC0  hkRegisterCheckUtil::hkRegisterCheckUtil  size=39  [run]
undefined4 * __fastcall hkRegisterCheckUtil::hkRegisterCheckUtil(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_01015ac0(0);
  param_1[8] = 0;
  return param_1;
}

// 01446E20  FUN_01446e20  size=104  [run]
void __thiscall FUN_01446e20(int param_1,int *param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  param_2[1] = 0;
  for (iVar1 = *(int *)(param_1 + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(char *)(iVar1 + 8) == '\0') {
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
      }
      *(int *)(*param_2 + param_2[1] * 4) = iVar1;
      param_2[1] = param_2[1] + 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}

// 01446E90  FUN_01446e90  size=175  [run]
void FUN_01446e90(undefined4 param_1)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  FUN_01446e20(&local_10);
  if (0 < local_c) {
    FUN_01018f60(param_1,"The following systems have been registered but not used:\n");
    iVar1 = 0;
    if (0 < local_c) {
      do {
        FUN_01018f60(param_1,&DAT_017062b4,**(undefined4 **)(local_10 + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_c);
    }
    FUN_01018f60(param_1,&DAT_016cc51c);
  }
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
  }
  return;
}

// 01446F90  FUN_01446f90  size=15  [run]
int __thiscall FUN_01446f90(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01446FD0  FUN_01446fd0  size=34  [run]
void FUN_01446fd0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01447000  FUN_01447000  size=26  [run]
void __thiscall FUN_01447000(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01447020  FUN_01447020  size=37  [run]
void FUN_01447020(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01447050  hkBaseObject::~hkBaseObject  size=21  [run]
void __fastcall hkBaseObject::~hkBaseObject(undefined4 *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  *param_1 = vftable;
  return;
}

// 01447070  FUN_01447070  size=38  [run]
void FUN_01447070(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 014470A0  hkRegisterCheckUtil::vf00  size=64  [run]
undefined4 * __thiscall hkRegisterCheckUtil::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01447110  FUN_01447110  size=57  [run]
void __thiscall FUN_01447110(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01447150  FUN_01447150  size=61  [run]
void __thiscall FUN_01447150(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01447190  FUN_01447190  size=58  [run]
void __thiscall FUN_01447190(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 014471D0  FUN_014471d0  size=61  [run]
void __fastcall FUN_014471d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01447210  FUN_01447210  size=61  [run]
void __fastcall FUN_01447210(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01447260  FUN_01447260  size=86  [run]
void FUN_01447260(float *param_1,float *param_2,float *param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  fVar1 = (*param_1 + *param_2) * *param_3;
  fVar2 = (param_1[1] + param_2[1]) * param_3[1];
  fVar3 = (param_1[2] + param_2[2]) * param_3[2];
  fVar4 = (param_1[3] + param_2[3]) * param_3[3];
  auVar5._0_4_ = fVar1 - (float)(-(uint)(2.1474836e+09 <= fVar1) & 0x4f000000);
  auVar5._4_4_ = fVar2 - (float)(-(uint)(2.1474836e+09 <= fVar2) & 0x4f000000);
  auVar5._8_4_ = fVar3 - (float)(-(uint)(2.1474836e+09 <= fVar3) & 0x4f000000);
  auVar5._12_4_ = fVar4 - (float)(-(uint)(2.1474836e+09 <= fVar4) & 0x4f000000);
  auVar5 = maxps(auVar5,ZEXT816(0));
  *param_4 = (int)auVar5._0_4_ + (uint)(2.1474836e+09 <= fVar1) * -0x80000000 |
             -(uint)(4.2949673e+09 <= fVar1);
  param_4[1] = (int)auVar5._4_4_ + (uint)(2.1474836e+09 <= fVar2) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar2);
  param_4[2] = (int)auVar5._8_4_ + (uint)(2.1474836e+09 <= fVar3) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar3);
  param_4[3] = (int)auVar5._12_4_ + (uint)(2.1474836e+09 <= fVar4) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar4);
  return;
}

// 01447300  FUN_01447300  size=82  [run]
undefined4 FUN_01447300(float *param_1,undefined4 *param_2,char param_3)

{
  FUN_010262e0(param_2,"%f%c%f%c%f",(double)*param_1,(int)param_3,(double)param_1[1],(int)param_3,
               (double)param_1[2]);
  return *param_2;
}

// 01447360  FUN_01447360  size=99  [run]
undefined4 FUN_01447360(float *param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3;
  FUN_010262e0(param_2,"%f%c%f%c%f%c%f",(double)*param_1,iVar1,(double)param_1[1],iVar1,
               (double)param_1[2],iVar1,(double)param_1[3]);
  return *param_2;
}

// 014474B0  FUN_014474b0  size=119  [run]
uint FUN_014474b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1 * 116.36363 + 0.5;
  fVar2 = param_1[1] * 116.36363 + 0.5;
  fVar3 = param_1[2] * 116.36363 + 0.5;
  fVar4 = param_1[3] * 116.36363 + 0.5;
  return ((((int)fVar3 ^ -(uint)(2.1474836e+09 <= fVar3)) - 0x80 & 0xff |
          (((int)fVar4 ^ -(uint)(2.1474836e+09 <= fVar4)) - 0x80) * 0x100) << 8 |
         ((int)fVar2 ^ -(uint)(2.1474836e+09 <= fVar2)) - 0x80 & 0xff) << 8 |
         ((int)fVar1 ^ -(uint)(2.1474836e+09 <= fVar1)) - 0x80 & 0xff;
}

// 01447A90  FUN_01447a90  size=152  [run]
float10 FUN_01447a90(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 10.0;
  iVar1 = 0x17;
  fVar4 = 11.0;
  do {
    fVar3 = (fVar4 + fVar6) * 0.5;
    fVar2 = (fVar3 + 0.0) * 1.0;
    fVar5 = fVar3;
    if ((ushort)((ushort)(int)fVar2 ^ -(ushort)(2.1474836e+09 <= fVar2)) < 0xb) {
      fVar5 = fVar4;
      fVar6 = fVar3;
    }
    iVar1 = iVar1 + -1;
    fVar4 = fVar5;
  } while (iVar1 != 0);
  return ((float10)fVar5 + (float10)fVar6) * (float10)0.5 - (float10)11.0;
}

// 01447B60  FUN_01447b60  size=91  [run]
void FUN_01447b60(float *param_1,float *param_2,float *param_3,ushort *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (*param_1 + *param_2) * *param_3;
  fVar2 = (param_1[1] + param_2[1]) * param_3[1];
  fVar3 = (param_1[2] + param_2[2]) * param_3[2];
  fVar4 = (param_1[3] + param_2[3]) * param_3[3];
  *param_4 = (ushort)(int)fVar1 ^ -(ushort)(2.1474836e+09 <= fVar1);
  param_4[1] = (ushort)(int)fVar2 ^ -(ushort)(2.1474836e+09 <= fVar2);
  param_4[2] = (ushort)(int)fVar3 ^ -(ushort)(2.1474836e+09 <= fVar3);
  param_4[3] = (ushort)(int)fVar4 ^ -(ushort)(2.1474836e+09 <= fVar4);
  return;
}

// 01447BC0  FUN_01447bc0  size=11  [run]
int FUN_01447bc0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01447BD0  FUN_01447bd0  size=11  [run]
int FUN_01447bd0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01447BF0  FUN_01447bf0  size=811  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_01447bf0(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int local_1010 [256];
  int local_c10 [256];
  int local_810 [256];
  int local_410 [255];
  undefined4 uStack_14;
  
  uStack_14 = 0x1447c10;
  iVar7 = 0x3f;
  piVar5 = local_c10;
  do {
    iVar7 = iVar7 + -1;
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5 = piVar5 + 4;
  } while (-1 < iVar7);
  iVar7 = 0x3f;
  piVar5 = local_1010;
  do {
    iVar7 = iVar7 + -1;
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[3] = 0;
    piVar5 = piVar5 + 4;
  } while (-1 < iVar7);
  if (0 < param_2) {
    iVar7 = param_1 + 0x400;
    iVar8 = (param_2 - 1U >> 2) + 1;
    do {
      local_c10[*(byte *)(iVar7 + -0x400)] = local_c10[*(byte *)(iVar7 + -0x400)] + 1;
      local_1010[*(byte *)(iVar7 + -0x3ff)] = local_1010[*(byte *)(iVar7 + -0x3ff)] + 1;
      local_c10[*(byte *)(iVar7 + -0x3fc)] = local_c10[*(byte *)(iVar7 + -0x3fc)] + 1;
      local_1010[*(byte *)(iVar7 + -0x3fb)] = local_1010[*(byte *)(iVar7 + -0x3fb)] + 1;
      bVar2 = *(byte *)(iVar7 + -0x3f7);
      local_c10[*(byte *)(iVar7 + -0x3f8)] = local_c10[*(byte *)(iVar7 + -0x3f8)] + 1;
      local_1010[bVar2] = local_1010[bVar2] + 1;
      bVar2 = *(byte *)(iVar7 + -0x3f3);
      local_c10[*(byte *)(iVar7 + -0x3f4)] = local_c10[*(byte *)(iVar7 + -0x3f4)] + 1;
      local_1010[bVar2] = local_1010[bVar2] + 1;
      iVar7 = iVar7 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_810[0] = param_3;
  local_410[0] = param_1;
  iVar7 = 0;
  do {
    iVar8 = *(int *)((int)local_810 + iVar7) + *(int *)((int)local_c10 + iVar7) * 4;
    iVar1 = *(int *)((int)local_410 + iVar7) + *(int *)((int)local_1010 + iVar7) * 4;
    *(int *)((int)local_810 + iVar7 + 4) = iVar8;
    iVar8 = iVar8 + *(int *)((int)local_c10 + iVar7 + 4) * 4;
    *(int *)((int)local_410 + iVar7 + 4) = iVar1;
    iVar1 = iVar1 + *(int *)((int)local_1010 + iVar7 + 4) * 4;
    *(int *)((int)local_810 + iVar7 + 8) = iVar8;
    iVar8 = iVar8 + *(int *)((int)local_c10 + iVar7 + 8) * 4;
    *(int *)((int)local_410 + iVar7 + 8) = iVar1;
    iVar1 = iVar1 + *(int *)((int)local_1010 + iVar7 + 8) * 4;
    *(int *)((int)local_810 + iVar7 + 0xc) = iVar8;
    iVar8 = iVar8 + *(int *)((int)local_c10 + iVar7 + 0xc) * 4;
    *(int *)((int)local_410 + iVar7 + 0xc) = iVar1;
    iVar1 = iVar1 + *(int *)((int)local_1010 + iVar7 + 0xc) * 4;
    *(int *)((int)local_810 + iVar7 + 0x10) = iVar8;
    *(int *)((int)local_810 + iVar7 + 0x14) = iVar8 + *(int *)((int)local_c10 + iVar7 + 0x10) * 4;
    *(int *)((int)local_410 + iVar7 + 0x10) = iVar1;
    *(int *)((int)local_410 + iVar7 + 0x14) = iVar1 + *(int *)((int)local_1010 + iVar7 + 0x10) * 4;
    iVar7 = iVar7 + 0x14;
  } while (iVar7 < 0x3fc);
  if (0 < param_2) {
    pbVar6 = (byte *)(param_1 + 8);
    iVar7 = (param_2 - 1U >> 2) + 1;
    do {
      bVar2 = pbVar6[-8];
      puVar3 = (undefined4 *)local_810[bVar2];
      *puVar3 = *(undefined4 *)(pbVar6 + -8);
      uVar4 = *(undefined4 *)(pbVar6 + -4);
      local_810[bVar2] = (int)(puVar3 + 1);
      bVar2 = pbVar6[-4];
      puVar3 = (undefined4 *)local_810[bVar2];
      *puVar3 = uVar4;
      uVar4 = *(undefined4 *)pbVar6;
      local_810[bVar2] = (int)(puVar3 + 1);
      bVar2 = *pbVar6;
      puVar3 = (undefined4 *)local_810[bVar2];
      *puVar3 = uVar4;
      uVar4 = *(undefined4 *)(pbVar6 + 4);
      local_810[bVar2] = (int)(puVar3 + 1);
      bVar2 = pbVar6[4];
      puVar3 = (undefined4 *)local_810[bVar2];
      *puVar3 = uVar4;
      pbVar6 = pbVar6 + 0x10;
      iVar7 = iVar7 + -1;
      local_810[bVar2] = (int)(puVar3 + 1);
    } while (iVar7 != 0);
    if (0 < param_2) {
      pbVar6 = (byte *)(param_3 + 5);
      iVar7 = (param_2 - 1U >> 2) + 1;
      do {
        bVar2 = pbVar6[-4];
        puVar3 = (undefined4 *)local_410[bVar2];
        *puVar3 = *(undefined4 *)(pbVar6 + -5);
        uVar4 = *(undefined4 *)(pbVar6 + -1);
        local_410[bVar2] = (int)(puVar3 + 1);
        bVar2 = *pbVar6;
        puVar3 = (undefined4 *)local_410[bVar2];
        *puVar3 = uVar4;
        uVar4 = *(undefined4 *)(pbVar6 + 3);
        local_410[bVar2] = (int)(puVar3 + 1);
        bVar2 = pbVar6[4];
        puVar3 = (undefined4 *)local_410[bVar2];
        *puVar3 = uVar4;
        uVar4 = *(undefined4 *)(pbVar6 + 7);
        local_410[bVar2] = (int)(puVar3 + 1);
        bVar2 = pbVar6[8];
        puVar3 = (undefined4 *)local_410[bVar2];
        *puVar3 = uVar4;
        pbVar6 = pbVar6 + 0x10;
        iVar7 = iVar7 + -1;
        local_410[bVar2] = (int)(puVar3 + 1);
      } while (iVar7 != 0);
    }
  }
  return;
}

// 01447F20  FUN_01447f20  size=1524  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_01447f20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  int local_2020 [256];
  int local_1c20 [256];
  int local_1820 [256];
  int local_1420 [258];
  int local_1018 [256];
  int local_c18 [256];
  int local_818 [256];
  int local_418 [256];
  int local_18;
  int local_14;
  
  local_14 = 0x1447f40;
  iVar10 = 0x3f;
  piVar8 = local_1420;
  do {
    iVar10 = iVar10 + -1;
    *piVar8 = 0;
    piVar8[1] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8 = piVar8 + 4;
  } while (-1 < iVar10);
  iVar10 = 0x3f;
  piVar8 = local_1c20;
  do {
    iVar10 = iVar10 + -1;
    *piVar8 = 0;
    piVar8[1] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8 = piVar8 + 4;
  } while (-1 < iVar10);
  iVar10 = 0x3f;
  piVar8 = local_1820;
  do {
    iVar10 = iVar10 + -1;
    *piVar8 = 0;
    piVar8[1] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8 = piVar8 + 4;
  } while (-1 < iVar10);
  iVar10 = 0x3f;
  piVar8 = local_2020;
  do {
    iVar10 = iVar10 + -1;
    *piVar8 = 0;
    piVar8[1] = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8 = piVar8 + 4;
  } while (-1 < iVar10);
  if (0 < param_2) {
    pbVar9 = (byte *)(param_1 + 2);
    local_14 = param_3 - param_1;
    local_18 = (param_2 - 1U >> 2) + 1;
    do {
      local_1420[pbVar9[-2]] = local_1420[pbVar9[-2]] + 1;
      local_1c20[pbVar9[-1]] = local_1c20[pbVar9[-1]] + 1;
      local_1820[*pbVar9] = local_1820[*pbVar9] + 1;
      local_2020[pbVar9[1]] = local_2020[pbVar9[1]] + 1;
      local_1c20[pbVar9[7]] = local_1c20[pbVar9[7]] + 1;
      local_1820[pbVar9[8]] = local_1820[pbVar9[8]] + 1;
      local_1420[pbVar9[6]] = local_1420[pbVar9[6]] + 1;
      local_2020[pbVar9[9]] = local_2020[pbVar9[9]] + 1;
      local_1c20[pbVar9[0xf]] = local_1c20[pbVar9[0xf]] + 1;
      local_1820[pbVar9[0x10]] = local_1820[pbVar9[0x10]] + 1;
      local_2020[pbVar9[0x11]] = local_2020[pbVar9[0x11]] + 1;
      local_1420[pbVar9[0xe]] = local_1420[pbVar9[0xe]] + 1;
      local_1c20[pbVar9[0x17]] = local_1c20[pbVar9[0x17]] + 1;
      local_1820[pbVar9[0x18]] = local_1820[pbVar9[0x18]] + 1;
      local_1420[pbVar9[0x16]] = local_1420[pbVar9[0x16]] + 1;
      local_2020[pbVar9[0x19]] = local_2020[pbVar9[0x19]] + 1;
      pbVar9 = pbVar9 + 0x20;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_818[0] = param_3;
  local_c18[0] = param_1;
  local_418[0] = param_3;
  local_1018[0] = param_1;
  iVar10 = 0;
  do {
    iVar1 = *(int *)((int)local_818 + iVar10) + *(int *)((int)local_1420 + iVar10) * 8;
    iVar2 = *(int *)((int)local_c18 + iVar10) + *(int *)((int)local_1c20 + iVar10) * 8;
    local_14 = *(int *)((int)local_418 + iVar10) + *(int *)((int)local_1820 + iVar10) * 8;
    iVar5 = *(int *)((int)local_1018 + iVar10);
    *(int *)((int)local_418 + iVar10 + 4) = local_14;
    iVar5 = iVar5 + *(int *)((int)local_2020 + iVar10) * 8;
    *(int *)((int)local_818 + iVar10 + 4) = iVar1;
    iVar1 = iVar1 + *(int *)((int)local_1420 + iVar10 + 4) * 8;
    *(int *)((int)local_c18 + iVar10 + 4) = iVar2;
    local_18 = iVar2 + *(int *)((int)local_1c20 + iVar10 + 4) * 8;
    *(int *)((int)local_c18 + iVar10 + 8) = local_18;
    iVar2 = local_14 + *(int *)((int)local_1820 + iVar10 + 4) * 8;
    *(int *)((int)local_1018 + iVar10 + 4) = iVar5;
    iVar5 = iVar5 + *(int *)((int)local_2020 + iVar10 + 4) * 8;
    *(int *)((int)local_818 + iVar10 + 8) = iVar1;
    local_14 = iVar1 + *(int *)((int)local_1420 + iVar10 + 8) * 8;
    *(int *)((int)local_818 + iVar10 + 0xc) = local_14;
    iVar3 = local_18 + *(int *)((int)local_1c20 + iVar10 + 8) * 8;
    *(int *)((int)local_418 + iVar10 + 8) = iVar2;
    iVar2 = iVar2 + *(int *)((int)local_1820 + iVar10 + 8) * 8;
    *(int *)((int)local_1018 + iVar10 + 8) = iVar5;
    local_18 = iVar5 + *(int *)((int)local_2020 + iVar10 + 8) * 8;
    *(int *)((int)local_1018 + iVar10 + 0xc) = local_18;
    iVar1 = local_14 + *(int *)((int)local_1420 + iVar10 + 0xc) * 8;
    *(int *)((int)local_c18 + iVar10 + 0xc) = iVar3;
    iVar3 = iVar3 + *(int *)((int)local_1c20 + iVar10 + 0xc) * 8;
    *(int *)((int)local_418 + iVar10 + 0xc) = iVar2;
    local_14 = iVar2 + *(int *)((int)local_1820 + iVar10 + 0xc) * 8;
    *(int *)((int)local_418 + iVar10 + 0x10) = local_14;
    iVar2 = local_18 + *(int *)((int)local_2020 + iVar10 + 0xc) * 8;
    *(int *)((int)local_818 + iVar10 + 0x10) = iVar1;
    *(int *)((int)local_c18 + iVar10 + 0x10) = iVar3;
    *(int *)((int)local_818 + iVar10 + 0x14) = iVar1 + *(int *)((int)local_1420 + iVar10 + 0x10) * 8
    ;
    *(int *)((int)local_c18 + iVar10 + 0x14) = iVar3 + *(int *)((int)local_1c20 + iVar10 + 0x10) * 8
    ;
    *(int *)((int)local_418 + iVar10 + 0x14) =
         local_14 + *(int *)((int)local_1820 + iVar10 + 0x10) * 8;
    *(int *)((int)local_1018 + iVar10 + 0x10) = iVar2;
    *(int *)((int)local_1018 + iVar10 + 0x14) =
         iVar2 + *(int *)((int)local_2020 + iVar10 + 0x10) * 8;
    iVar10 = iVar10 + 0x14;
  } while (iVar10 < 0x3fc);
  if (0 < param_2) {
    pbVar9 = (byte *)(param_1 + 0x10);
    iVar10 = (param_2 - 1U >> 2) + 1;
    do {
      bVar4 = pbVar9[-0x10];
      puVar6 = (undefined4 *)local_818[bVar4];
      *puVar6 = *(undefined4 *)(pbVar9 + -0x10);
      puVar6[1] = *(undefined4 *)(pbVar9 + -0xc);
      uVar7 = *(undefined4 *)(pbVar9 + -8);
      local_818[bVar4] = (int)(puVar6 + 2);
      bVar4 = pbVar9[-8];
      puVar6 = (undefined4 *)local_818[bVar4];
      *puVar6 = uVar7;
      puVar6[1] = *(undefined4 *)(pbVar9 + -4);
      uVar7 = *(undefined4 *)pbVar9;
      local_818[bVar4] = (int)(puVar6 + 2);
      bVar4 = *pbVar9;
      puVar6 = (undefined4 *)local_818[bVar4];
      *puVar6 = uVar7;
      puVar6[1] = *(undefined4 *)(pbVar9 + 4);
      uVar7 = *(undefined4 *)(pbVar9 + 8);
      local_818[bVar4] = (int)(puVar6 + 2);
      bVar4 = pbVar9[8];
      puVar6 = (undefined4 *)local_818[bVar4];
      *puVar6 = uVar7;
      puVar6[1] = *(undefined4 *)(pbVar9 + 0xc);
      pbVar9 = pbVar9 + 0x20;
      iVar10 = iVar10 + -1;
      local_818[bVar4] = (int)(puVar6 + 2);
    } while (iVar10 != 0);
    if (0 < param_2) {
      pbVar9 = (byte *)(param_3 + 9);
      iVar10 = (param_2 - 1U >> 2) + 1;
      do {
        bVar4 = pbVar9[-8];
        puVar6 = (undefined4 *)local_c18[bVar4];
        *puVar6 = *(undefined4 *)(pbVar9 + -9);
        puVar6[1] = *(undefined4 *)(pbVar9 + -5);
        uVar7 = *(undefined4 *)(pbVar9 + -1);
        local_c18[bVar4] = (int)(puVar6 + 2);
        bVar4 = *pbVar9;
        puVar6 = (undefined4 *)local_c18[bVar4];
        *puVar6 = uVar7;
        puVar6[1] = *(undefined4 *)(pbVar9 + 3);
        uVar7 = *(undefined4 *)(pbVar9 + 7);
        local_c18[bVar4] = (int)(puVar6 + 2);
        bVar4 = pbVar9[8];
        puVar6 = (undefined4 *)local_c18[bVar4];
        *puVar6 = uVar7;
        puVar6[1] = *(undefined4 *)(pbVar9 + 0xb);
        uVar7 = *(undefined4 *)(pbVar9 + 0xf);
        local_c18[bVar4] = (int)(puVar6 + 2);
        bVar4 = pbVar9[0x10];
        puVar6 = (undefined4 *)local_c18[bVar4];
        *puVar6 = uVar7;
        puVar6[1] = *(undefined4 *)(pbVar9 + 0x13);
        pbVar9 = pbVar9 + 0x20;
        iVar10 = iVar10 + -1;
        local_c18[bVar4] = (int)(puVar6 + 2);
      } while (iVar10 != 0);
      if (0 < param_2) {
        pbVar9 = (byte *)(param_1 + 10);
        iVar10 = (param_2 - 1U >> 2) + 1;
        do {
          bVar4 = pbVar9[-8];
          puVar6 = (undefined4 *)local_418[bVar4];
          *puVar6 = *(undefined4 *)(pbVar9 + -10);
          puVar6[1] = *(undefined4 *)(pbVar9 + -6);
          uVar7 = *(undefined4 *)(pbVar9 + -2);
          local_418[bVar4] = (int)(puVar6 + 2);
          bVar4 = *pbVar9;
          puVar6 = (undefined4 *)local_418[bVar4];
          *puVar6 = uVar7;
          puVar6[1] = *(undefined4 *)(pbVar9 + 2);
          uVar7 = *(undefined4 *)(pbVar9 + 6);
          local_418[bVar4] = (int)(puVar6 + 2);
          bVar4 = pbVar9[8];
          puVar6 = (undefined4 *)local_418[bVar4];
          *puVar6 = uVar7;
          puVar6[1] = *(undefined4 *)(pbVar9 + 10);
          uVar7 = *(undefined4 *)(pbVar9 + 0xe);
          local_418[bVar4] = (int)(puVar6 + 2);
          bVar4 = pbVar9[0x10];
          puVar6 = (undefined4 *)local_418[bVar4];
          *puVar6 = uVar7;
          puVar6[1] = *(undefined4 *)(pbVar9 + 0x12);
          pbVar9 = pbVar9 + 0x20;
          iVar10 = iVar10 + -1;
          local_418[bVar4] = (int)(puVar6 + 2);
        } while (iVar10 != 0);
        if (0 < param_2) {
          pbVar9 = (byte *)(param_3 + 0xb);
          iVar10 = (param_2 - 1U >> 2) + 1;
          do {
            bVar4 = pbVar9[-8];
            puVar6 = (undefined4 *)local_1018[bVar4];
            *puVar6 = *(undefined4 *)(pbVar9 + -0xb);
            puVar6[1] = *(undefined4 *)(pbVar9 + -7);
            uVar7 = *(undefined4 *)(pbVar9 + -3);
            local_1018[bVar4] = (int)(puVar6 + 2);
            bVar4 = *pbVar9;
            puVar6 = (undefined4 *)local_1018[bVar4];
            *puVar6 = uVar7;
            puVar6[1] = *(undefined4 *)(pbVar9 + 1);
            uVar7 = *(undefined4 *)(pbVar9 + 5);
            local_1018[bVar4] = (int)(puVar6 + 2);
            bVar4 = pbVar9[8];
            puVar6 = (undefined4 *)local_1018[bVar4];
            *puVar6 = uVar7;
            puVar6[1] = *(undefined4 *)(pbVar9 + 9);
            uVar7 = *(undefined4 *)(pbVar9 + 0xd);
            local_1018[bVar4] = (int)(puVar6 + 2);
            bVar4 = pbVar9[0x10];
            puVar6 = (undefined4 *)local_1018[bVar4];
            *puVar6 = uVar7;
            puVar6[1] = *(undefined4 *)(pbVar9 + 0x11);
            pbVar9 = pbVar9 + 0x20;
            iVar10 = iVar10 + -1;
            local_1018[bVar4] = (int)(puVar6 + 2);
          } while (iVar10 != 0);
        }
      }
    }
  }
  return;
}

// 01448540  FUN_01448540  size=13  [run]
void FUN_01448540(undefined4 param_1)

{
  DAT_0225bcf4 = param_1;
  return;
}

// 014485C0  FUN_014485c0  size=13  [run]
void __thiscall FUN_014485c0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}

// 014485D0  FUN_014485d0  size=70  [run]
undefined4 __thiscall FUN_014485d0(char *param_1,int param_2)

{
  if ((*param_1 != '\0') && (param_1[8] != '\0')) {
    return 0;
  }
  if ((((0x32 < *(int *)(param_1 + 4)) && (*(int *)(param_1 + 4) % 3 == 0)) && (param_1[8] != '\0'))
     && (param_1[param_2 + 9] == '\0')) {
    param_1[param_2 + 9] = '\x01';
    *param_1 = '\x01';
    return 0;
  }
  return 1;
}

// 014486B0  FUN_014486b0  size=31  [run]
void FUN_014486b0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 014486D0  FUN_014486d0  size=39  [run]
void FUN_014486d0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x3c);
  }
  return;
}

// 01448700  FUN_01448700  size=48  [run]
int __thiscall FUN_01448700(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x3c);
  }
  return param_1;
}

// 01448740  FUN_01448740  size=48  [run]
uint FUN_01448740(int param_1,int param_2)

{
  return (*(int *)(param_2 + 0x18) - *(int *)(param_1 + 8) |
          *(int *)(param_2 + 0x14) - *(int *)(param_1 + 4) |
          *(int *)(param_1 + 0x18) - *(int *)(param_2 + 8) |
         *(int *)(param_1 + 0x14) - *(int *)(param_2 + 4)) & 0x80000000;
}

// 01448770  FUN_01448770  size=104  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01448770(undefined8 *param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  auVar5._0_8_ = CONCAT44((((int)param_2[1] >> 0x1f | uRam01b34434) ^ param_2[1]) >> 1,
                          (((int)*param_2 >> 0x1f | _DAT_01b34430) ^ *param_2) >> 1);
  auVar5._8_4_ = (((int)param_2[2] >> 0x1f | uRam01b34438) ^ param_2[2]) >> 1;
  auVar5._12_4_ = (((int)param_2[3] >> 0x1f | uRam01b3443c) ^ param_2[3]) >> 1;
  iVar1 = ((((int)param_2[4] >> 0x1f | _DAT_01b34430) ^ param_2[4]) >> 1) + _DAT_01b34440;
  iVar2 = ((((int)param_2[5] >> 0x1f | uRam01b34434) ^ param_2[5]) >> 1) + iRam01b34444;
  iVar3 = ((((int)param_2[6] >> 0x1f | uRam01b34438) ^ param_2[6]) >> 1) + iRam01b34448;
  iVar4 = ((((int)param_2[7] >> 0x1f | uRam01b3443c) ^ param_2[7]) >> 1) + iRam01b3444c;
  *param_1 = auVar5._0_8_;
  param_1[1] = auVar5._8_8_ & 0xffffffff | (ulonglong)(ushort)param_3 << 0x20 |
               (ulonglong)(ushort)((uint)param_3 >> 0x10) << 0x30;
  *(int *)(param_1 + 2) = iVar1;
  *(int *)((int)param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 3) = iVar3;
  *(int *)((int)param_1 + 0x1c) = iVar4;
  return;
}

// 014487E0  FUN_014487e0  size=236  [run]
void FUN_014487e0(undefined4 *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_c;
  int local_8;
  
  uVar6 = param_2 + 3 & 0xfffffffc;
  iVar4 = 0;
  puVar5 = param_1;
  if (0 < (int)uVar6) {
    do {
      uVar1 = *puVar5;
      puVar7 = (undefined4 *)(*param_3 + iVar4 * 8);
      puVar7[1] = iVar4;
      iVar4 = iVar4 + 1;
      *puVar7 = uVar1;
      puVar5 = puVar5 + 8;
    } while (iVar4 < (int)uVar6);
  }
  FUN_01447f20(*param_3,uVar6,*param_4);
  local_c = 0;
  if (0 < (int)param_2) {
    local_8 = 0;
    do {
      puVar5 = param_1 + *(int *)(*param_3 + 4 + local_c * 8) * 8;
      puVar7 = (undefined4 *)(*param_4 + local_8);
      iVar4 = 2;
      do {
        uVar1 = puVar5[3];
        uVar2 = puVar5[2];
        uVar3 = *puVar5;
        puVar7[1] = puVar5[1];
        *puVar7 = uVar3;
        puVar7[2] = uVar2;
        puVar7[3] = uVar1;
        iVar4 = iVar4 + -1;
        puVar7 = puVar7 + 4;
        puVar5 = puVar5 + 4;
      } while (0 < iVar4);
      local_8 = local_8 + 0x20;
      local_c = local_c + 1;
    } while (local_c < (int)param_2);
  }
  puVar5 = (undefined4 *)*param_4;
  uVar6 = param_2 & 0x7ffffff;
  param_2 = uVar6 << 1;
  if (uVar6 != 0) {
    param_1 = param_1 + 2;
    do {
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      param_1[-2] = *puVar5;
      param_1[-1] = uVar1;
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1 = param_1 + 4;
      puVar5 = puVar5 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 014488D0  FUN_014488d0  size=955  [run]
int FUN_014488d0(int *param_1,int param_2,int *param_3,int param_4,int *param_5,int *param_6,
                int *param_7)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  *param_7 = 0;
  piVar10 = (int *)((int)param_1 + 0x18);
  piVar2 = param_5 + (int)param_6 * 2;
  piVar7 = (int *)((int)param_3 + 0x18);
  param_3 = param_5;
  param_1 = piVar10;
  param_6 = piVar7;
  do {
    if ((uint)piVar7[-6] < (uint)piVar10[-6]) {
      uVar3 = piVar7[-2];
      if ((uint)piVar10[-6] < uVar3) {
        piVar6 = piVar10 + 3;
        do {
          iVar5 = *piVar7;
          iVar4 = piVar7[-1];
          uVar8 = (iVar4 - piVar6[-8] | iVar5 - piVar6[-7] | piVar6[-4] - piVar7[-5] |
                  piVar6[-3] - piVar7[-4]) & 0x80000000;
          uVar11 = (iVar4 - piVar6[8] | iVar5 - piVar6[9] | piVar6[0xc] - param_6[-5] |
                   piVar6[0xd] - param_6[-4]) & 0x80000000;
          uVar9 = (iVar5 - piVar6[1] | piVar6[4] - piVar7[-5] | piVar6[5] - param_6[-4] |
                  iVar4 - *piVar6) & 0x80000000;
          uVar12 = (piVar6[0x15] - param_6[-4] |
                   iVar4 - piVar6[0x10] | iVar5 - piVar6[0x11] | piVar6[0x14] - param_6[-5]) &
                   0x80000000;
          if ((uVar8 & uVar12 & uVar11 & uVar9) == 0) {
            if (uVar8 == 0) {
              if (param_3 < piVar2) {
                *param_3 = piVar6[-6];
                param_3[1] = param_6[-3];
                param_3 = param_3 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar9 == 0) && ((uint)piVar6[-1] <= uVar3)) {
              if (param_3 < piVar2) {
                *param_3 = piVar6[2];
                param_3[1] = param_6[-3];
                param_3 = param_3 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar11 == 0) && ((uint)piVar6[7] <= uVar3)) {
              if (param_3 < piVar2) {
                *param_3 = piVar6[10];
                param_3[1] = param_6[-3];
                param_3 = param_3 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar12 == 0) && ((uint)piVar6[0xf] <= uVar3)) {
              if (param_3 < piVar2) {
                *param_3 = piVar6[0x12];
                param_3[1] = param_6[-3];
                param_3 = param_3 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
          }
          puVar1 = (uint *)(piVar6 + 0x17);
          piVar6 = piVar6 + 0x20;
          piVar7 = param_6;
          piVar10 = param_1;
        } while (*puVar1 < uVar3);
      }
      piVar7 = piVar7 + 8;
      iVar5 = param_4 + -1;
      param_4 = iVar5;
      param_6 = piVar7;
    }
    else {
      uVar3 = piVar10[-2];
      if ((uint)piVar7[-6] < uVar3) {
        piVar6 = piVar7 + 3;
        do {
          iVar5 = *piVar10;
          iVar4 = piVar10[-1];
          uVar9 = (iVar4 - piVar6[-8] | iVar5 - piVar6[-7] | piVar6[-4] - piVar10[-5] |
                  piVar6[-3] - piVar10[-4]) & 0x80000000;
          uVar12 = (iVar4 - piVar6[8] | iVar5 - piVar6[9] | piVar6[0xc] - param_1[-5] |
                   piVar6[0xd] - param_1[-4]) & 0x80000000;
          uVar11 = (iVar5 - piVar6[1] | piVar6[4] - piVar10[-5] | piVar6[5] - param_1[-4] |
                   iVar4 - *piVar6) & 0x80000000;
          uVar8 = (iVar4 - piVar6[0x10] | iVar5 - piVar6[0x11] | piVar6[0x14] - param_1[-5] |
                  piVar6[0x15] - param_1[-4]) & 0x80000000;
          if ((uVar11 & uVar8 & uVar12 & uVar9) == 0) {
            if (uVar9 == 0) {
              if (param_3 < piVar2) {
                *param_3 = param_1[-3];
                param_3[1] = piVar6[-6];
                param_3 = param_3 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar11 == 0) && ((uint)piVar6[-1] <= uVar3)) {
              if (param_3 < piVar2) {
                *param_3 = param_1[-3];
                param_3[1] = piVar6[2];
                param_3 = param_3 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar12 == 0) && ((uint)piVar6[7] <= uVar3)) {
              if (param_3 < piVar2) {
                *param_3 = param_1[-3];
                param_3[1] = piVar6[10];
                param_3 = param_3 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
            if ((uVar8 == 0) && ((uint)piVar6[0xf] <= uVar3)) {
              if (param_3 < piVar2) {
                iVar5 = piVar6[0x12];
                *param_3 = param_1[-3];
                param_3[1] = iVar5;
                param_3 = param_3 + 2;
              }
              else {
                *param_7 = *param_7 + 1;
              }
            }
          }
          puVar1 = (uint *)(piVar6 + 0x17);
          piVar6 = piVar6 + 0x20;
          piVar7 = param_6;
          piVar10 = param_1;
        } while (*puVar1 < uVar3);
      }
      piVar10 = piVar10 + 8;
      iVar5 = param_2 + -1;
      param_1 = piVar10;
      param_2 = iVar5;
    }
  } while (0 < iVar5);
  return (int)param_3 - (int)param_5 >> 3;
}

// 01448C90  FUN_01448c90  size=528  [run]
int FUN_01448c90(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *local_1c;
  int *local_8;
  
  piVar1 = param_3 + param_4 * 2;
  *param_5 = 0;
  param_2 = param_2 + -1;
  local_8 = param_3;
  if (0 < param_2) {
    piVar7 = (int *)(param_1 + 0x18);
    do {
      uVar2 = piVar7[-2];
      local_1c = (uint *)(piVar7 + 2);
      if (*local_1c < uVar2) {
        piVar5 = piVar7 + 0xb;
        do {
          iVar3 = *piVar7;
          iVar4 = piVar7[-1];
          uVar8 = (iVar4 - piVar5[-8] | iVar3 - piVar5[-7] | piVar5[-4] - piVar7[-5] |
                  piVar5[-3] - piVar7[-4]) & 0x80000000;
          uVar10 = (iVar4 - piVar5[8] | iVar3 - piVar5[9] | piVar5[0xc] - piVar7[-5] |
                   piVar5[0xd] - piVar7[-4]) & 0x80000000;
          uVar9 = (iVar3 - piVar5[1] | piVar5[4] - piVar7[-5] | piVar5[5] - piVar7[-4] |
                  iVar4 - *piVar5) & 0x80000000;
          uVar6 = (iVar4 - piVar5[0x10] | iVar3 - piVar5[0x11] | piVar5[0x14] - piVar7[-5] |
                  piVar5[0x15] - piVar7[-4]) & 0x80000000;
          if ((uVar8 & uVar6 & uVar10 & uVar9) == 0) {
            if (uVar8 == 0) {
              if (local_8 < piVar1) {
                *local_8 = piVar7[-3];
                local_8[1] = piVar5[-6];
                local_8 = local_8 + 2;
              }
              else {
                *param_5 = *param_5 + 1;
              }
            }
            if ((uVar9 == 0) && ((uint)piVar5[-1] <= uVar2)) {
              if (local_8 < piVar1) {
                *local_8 = piVar7[-3];
                local_8[1] = piVar5[2];
                local_8 = local_8 + 2;
              }
              else {
                *param_5 = *param_5 + 1;
              }
            }
            if ((uVar10 == 0) && ((uint)piVar5[7] <= uVar2)) {
              if (local_8 < piVar1) {
                *local_8 = piVar7[-3];
                local_8[1] = piVar5[10];
                local_8 = local_8 + 2;
              }
              else {
                *param_5 = *param_5 + 1;
              }
            }
            if ((uVar6 == 0) && ((uint)piVar5[0xf] <= uVar2)) {
              if (local_8 < piVar1) {
                *local_8 = piVar7[-3];
                local_8[1] = piVar5[0x12];
                local_8 = local_8 + 2;
              }
              else {
                *param_5 = *param_5 + 1;
              }
            }
          }
          local_1c = local_1c + 0x20;
          piVar5 = piVar5 + 0x20;
        } while (*local_1c < uVar2);
      }
      param_2 = param_2 + -1;
      piVar7 = piVar7 + 8;
    } while (0 < param_2);
  }
  return (int)local_8 - (int)param_3 >> 3;
}

// 01448EA0  FUN_01448ea0  size=574  [run]
void FUN_01448ea0(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int local_28;
  uint local_24;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  uVar8 = param_2 + 3 & 0xfffffffc;
  if (uVar8 == 0) {
    local_8 = 0;
LAB_01448eee:
    local_28 = -0x80000000;
  }
  else {
    local_18 = uVar8 * 8;
    local_8 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_18);
    local_28 = (int)(local_18 + (local_18 >> 0x1f & 7U)) >> 3;
    if (local_28 == 0) goto LAB_01448eee;
  }
  iVar3 = 0;
  puVar7 = param_1;
  if (0 < (int)uVar8) {
    do {
      *(undefined4 *)(local_8 + iVar3 * 8) = *puVar7;
      *(int *)(local_8 + 4 + iVar3 * 8) = iVar3;
      iVar3 = iVar3 + 1;
      puVar7 = puVar7 + 8;
    } while (iVar3 < (int)uVar8);
  }
  if (uVar8 == 0) {
    uVar4 = 0;
LAB_01448f4a:
    iVar3 = -0x80000000;
  }
  else {
    local_14 = (undefined4 *)(uVar8 * 8);
    uVar4 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_14);
    iVar3 = (int)((int)local_14 + ((int)local_14 >> 0x1f & 7U)) >> 3;
    if (iVar3 == 0) goto LAB_01448f4a;
  }
  FUN_01447f20(local_8,uVar8,uVar4);
  if (-1 < iVar3) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(uVar4,iVar3 * 8);
  }
  if (param_2 == 0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_1c = param_2 << 5;
    local_14 = (undefined4 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_1c);
    local_10 = (int)(local_1c + (local_1c >> 0x1f & 0x1fU)) >> 5;
    if (local_10 != 0) goto LAB_01448fbf;
  }
  local_10 = -0x80000000;
LAB_01448fbf:
  if (0 < (int)param_2) {
    local_c = (int *)(local_8 + 4);
    local_24 = param_2;
    puVar7 = local_14;
    do {
      puVar5 = param_1 + *local_c * 8;
      iVar3 = 2;
      puVar6 = puVar7;
      do {
        uVar4 = puVar5[3];
        uVar1 = puVar5[2];
        uVar2 = *puVar5;
        puVar6[1] = puVar5[1];
        *puVar6 = uVar2;
        puVar6[2] = uVar1;
        puVar6[3] = uVar4;
        iVar3 = iVar3 + -1;
        puVar6 = puVar6 + 4;
        puVar5 = puVar5 + 4;
      } while (0 < iVar3);
      local_c = local_c + 2;
      puVar7 = puVar7 + 8;
      local_24 = local_24 - 1;
    } while (local_24 != 0);
  }
  uVar8 = param_2 & 0x7ffffff;
  param_2 = uVar8 << 1;
  if (uVar8 != 0) {
    puVar7 = local_14 + 3;
    puVar6 = param_1 + 2;
    do {
      uVar4 = puVar7[-2];
      uVar1 = *(undefined4 *)(((int)local_14 - (int)param_1) + (int)puVar6);
      uVar2 = *puVar7;
      puVar6[-2] = puVar7[-3];
      puVar6[-1] = uVar4;
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar7 = puVar7 + 4;
      puVar6 = puVar6 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (-1 < local_10) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_14,local_10 << 5);
  }
  if (-1 < local_28) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_8,local_28 * 8);
  }
  return;
}

// 014490F0  FUN_014490f0  size=15  [run]
int __thiscall FUN_014490f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01449110  FUN_01449110  size=15  [run]
int __thiscall FUN_01449110(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01449160  FUN_01449160  size=24  [run]
void __thiscall
FUN_01449160(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01449180  FUN_01449180  size=52  [run]
undefined4 __thiscall FUN_01449180(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 8);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  return uVar2;
}

// 01449200  FUN_01449200  size=24  [run]
void __thiscall
FUN_01449200(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01449220  FUN_01449220  size=49  [run]
undefined4 __thiscall FUN_01449220(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 << 5);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5;
  return uVar2;
}

// 01449280  FUN_01449280  size=28  [run]
void __thiscall FUN_01449280(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 014492B0  FUN_014492b0  size=25  [run]
void __thiscall FUN_014492b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 014492F0  FUN_014492f0  size=108  [run]
undefined4 * __thiscall FUN_014492f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 * 8;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
    if (iVar3 != 0) goto LAB_01449348;
  }
  iVar3 = -0x80000000;
LAB_01449348:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 01449360  FUN_01449360  size=105  [run]
undefined4 * __thiscall FUN_01449360(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 << 5;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
    if (iVar3 != 0) goto LAB_014493b5;
  }
  iVar3 = -0x80000000;
LAB_014493b5:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 014493D0  FUN_014493d0  size=40  [run]
undefined4 *
FUN_014493d0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  if (param_3 < param_4) {
    *param_3 = *(undefined4 *)(param_2 + 0xc);
    param_3[1] = *(undefined4 *)(param_1 + 0xc);
    return param_3 + 2;
  }
  *param_5 = *param_5 + 1;
  return param_3;
}

// 01449400  FUN_01449400  size=40  [run]
undefined4 *
FUN_01449400(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  if (param_3 < param_4) {
    *param_3 = *(undefined4 *)(param_1 + 0xc);
    param_3[1] = *(undefined4 *)(param_2 + 0xc);
    return param_3 + 2;
  }
  *param_5 = *param_5 + 1;
  return param_3;
}

// 01449450  FUN_01449450  size=438  [run]
uint * FUN_01449450(int param_1,uint *param_2,uint *param_3,uint *param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 <= *param_2) {
    return param_3;
  }
  puVar6 = param_2 + 9;
  do {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x18);
    uVar8 = (iVar3 - puVar6[-8] | iVar4 - puVar6[-7] | puVar6[-4] - *(int *)(param_1 + 4) |
            puVar6[-3] - *(int *)(param_1 + 8)) & 0x80000000;
    uVar5 = (iVar3 - puVar6[8] | iVar4 - puVar6[9] | puVar6[0xc] - *(int *)(param_1 + 4) |
            puVar6[0xd] - *(int *)(param_1 + 8)) & 0x80000000;
    uVar9 = (iVar4 - puVar6[1] | puVar6[4] - *(int *)(param_1 + 4) |
             puVar6[5] - *(int *)(param_1 + 8) | iVar3 - *puVar6) & 0x80000000;
    uVar7 = (iVar3 - puVar6[0x10] | iVar4 - puVar6[0x11] | puVar6[0x14] - *(int *)(param_1 + 4) |
            puVar6[0x15] - *(int *)(param_1 + 8)) & 0x80000000;
    if ((uVar8 & uVar7 & uVar5 & uVar9) == 0) {
      if (uVar8 == 0) {
        if (param_3 < param_4) {
          *param_3 = puVar6[-6];
          param_3[1] = *(uint *)(param_1 + 0xc);
          param_3 = param_3 + 2;
        }
        else {
          *param_5 = *param_5 + 1;
        }
      }
      if ((uVar9 == 0) && (puVar6[-1] <= uVar2)) {
        if (param_3 < param_4) {
          *param_3 = puVar6[2];
          param_3[1] = *(uint *)(param_1 + 0xc);
          param_3 = param_3 + 2;
        }
        else {
          *param_5 = *param_5 + 1;
        }
      }
      if ((uVar5 == 0) && (puVar6[7] <= uVar2)) {
        if (param_3 < param_4) {
          *param_3 = puVar6[10];
          param_3[1] = *(uint *)(param_1 + 0xc);
          param_3 = param_3 + 2;
        }
        else {
          *param_5 = *param_5 + 1;
        }
      }
      if ((uVar7 == 0) && (puVar6[0xf] <= uVar2)) {
        if (param_3 < param_4) {
          *param_3 = puVar6[0x12];
          param_3[1] = *(uint *)(param_1 + 0xc);
          param_3 = param_3 + 2;
        }
        else {
          *param_5 = *param_5 + 1;
        }
      }
    }
    puVar1 = puVar6 + 0x17;
    puVar6 = puVar6 + 0x20;
  } while (*puVar1 < uVar2);
  return param_3;
}

// 01449610  FUN_01449610  size=438  [run]
undefined4 *
FUN_01449610(int param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 <= *param_2) {
    return param_3;
  }
  puVar6 = param_2 + 9;
  do {
    iVar3 = *(int *)(param_1 + 0x14);
    iVar4 = *(int *)(param_1 + 0x18);
    uVar8 = (iVar3 - puVar6[-8] | iVar4 - puVar6[-7] | puVar6[-4] - *(int *)(param_1 + 4) |
            puVar6[-3] - *(int *)(param_1 + 8)) & 0x80000000;
    uVar5 = (iVar3 - puVar6[8] | iVar4 - puVar6[9] | puVar6[0xc] - *(int *)(param_1 + 4) |
            puVar6[0xd] - *(int *)(param_1 + 8)) & 0x80000000;
    uVar9 = (iVar4 - puVar6[1] | puVar6[4] - *(int *)(param_1 + 4) |
             puVar6[5] - *(int *)(param_1 + 8) | iVar3 - *puVar6) & 0x80000000;
    uVar7 = (iVar3 - puVar6[0x10] | iVar4 - puVar6[0x11] | puVar6[0x14] - *(int *)(param_1 + 4) |
            puVar6[0x15] - *(int *)(param_1 + 8)) & 0x80000000;
    if ((uVar8 & uVar7 & uVar5 & uVar9) == 0) {
      if (uVar8 == 0) {
        if (param_3 < param_4) {
          *param_3 = *(undefined4 *)(param_1 + 0xc);
          param_3[1] = puVar6[-6];
          param_3 = param_3 + 2;
        }
        else {
          *param_5 = *param_5 + 1;
        }
      }
      if ((uVar9 == 0) && (puVar6[-1] <= uVar2)) {
        if (param_3 < param_4) {
          *param_3 = *(undefined4 *)(param_1 + 0xc);
          param_3[1] = puVar6[2];
          param_3 = param_3 + 2;
        }
        else {
          *param_5 = *param_5 + 1;
        }
      }
      if ((uVar5 == 0) && (puVar6[7] <= uVar2)) {
        if (param_3 < param_4) {
          *param_3 = *(undefined4 *)(param_1 + 0xc);
          param_3[1] = puVar6[10];
          param_3 = param_3 + 2;
        }
        else {
          *param_5 = *param_5 + 1;
        }
      }
      if ((uVar7 == 0) && (puVar6[0xf] <= uVar2)) {
        if (param_3 < param_4) {
          *param_3 = *(undefined4 *)(param_1 + 0xc);
          param_3[1] = puVar6[0x12];
          param_3 = param_3 + 2;
        }
        else {
          *param_5 = *param_5 + 1;
        }
      }
    }
    puVar1 = puVar6 + 0x17;
    puVar6 = puVar6 + 0x20;
  } while (*puVar1 < uVar2);
  return param_3;
}

// 014497D0  FUN_014497d0  size=63  [run]
void __thiscall FUN_014497d0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01449810  FUN_01449810  size=60  [run]
void __thiscall FUN_01449810(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01449850  FUN_01449850  size=63  [run]
void __fastcall FUN_01449850(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01449890  FUN_01449890  size=60  [run]
void __fastcall FUN_01449890(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 014498D0  FUN_014498d0  size=63  [run]
void __fastcall FUN_014498d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01449910  FUN_01449910  size=60  [run]
void __fastcall FUN_01449910(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01449970  FUN_01449970  size=228  [run]
void FUN_01449970(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_404 [1024];
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar1 = FUN_01015b90(*(int *)(param_1 + 0x10) + iVar4,param_2);
      if (iVar1 == 0) {
        return;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0x803) {
    *(undefined4 *)(param_1 + 0xc) = 0x803;
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*param_3 == '#') {
      FUN_01015b70(local_404,"%4i\t\t",iVar3);
      uVar2 = FUN_01015cd0(local_404);
      FUN_01018fc0(local_404,uVar2);
      param_3 = param_3 + 1;
    }
    FUN_01015b40(local_404,0x400,param_3,&stack0x00000010);
    uVar2 = FUN_01015cd0(local_404);
    FUN_01018fc0(local_404,uVar2);
  }
  return;
}

// 01449AE0  FUN_01449ae0  size=15  [run]
int __thiscall FUN_01449ae0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01449B10  FUN_01449b10  size=25  [run]
void __thiscall FUN_01449b10(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 01449B70  FUN_01449b70  size=37  [run]
void FUN_01449b70(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01449BA0  FUN_01449ba0  size=60  [run]
void __thiscall FUN_01449ba0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01449BE0  FUN_01449be0  size=60  [run]
void __fastcall FUN_01449be0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01449C20  FUN_01449c20  size=60  [run]
void __fastcall FUN_01449c20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01449C90  FUN_01449c90  size=38  [run]
void FUN_01449c90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01449CC0  hkBaseObject::hkBaseObject_164  size=68  [run]
void __fastcall hkBaseObject::hkBaseObject_164(undefined4 *param_1)

{
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] << 5);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01449D10  hkTraceStream::vf00  size=111  [run]
undefined4 * __thiscall hkTraceStream::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] << 5);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01449E80  FUN_01449e80  size=28  [run]
void FUN_01449e80(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0x4c) = param_1;
  *(undefined4 *)(param_3 + 0x5c) = param_2;
  return;
}

// 01449EA0  FUN_01449ea0  size=152  [run]
void FUN_01449ea0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  local_20 = *param_1 - *(float *)(param_2 + 0x80);
  fStack_1c = fVar1 - *(float *)(param_2 + 0x84);
  fStack_18 = fVar2 - *(float *)(param_2 + 0x88);
  fStack_14 = fVar3 - *(float *)(param_2 + 0x8c);
  *(float *)(param_2 + 0x80) = *param_1;
  *(float *)(param_2 + 0x84) = fVar1;
  *(float *)(param_2 + 0x88) = fVar2;
  *(float *)(param_2 + 0x8c) = fVar3;
  FUN_01006f50(param_2,&local_20);
  fVar1 = *(float *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  *(float *)(param_2 + 0x40) = *(float *)(param_2 + 0x40) + local_30;
  *(float *)(param_2 + 0x44) = *(float *)(param_2 + 0x44) + fStack_2c;
  *(float *)(param_2 + 0x48) = *(float *)(param_2 + 0x48) + fStack_28;
  *(float *)(param_2 + 0x4c) = fVar1 + fStack_24;
  *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + local_30;
  *(float *)(param_2 + 0x54) = *(float *)(param_2 + 0x54) + fStack_2c;
  *(float *)(param_2 + 0x58) = *(float *)(param_2 + 0x58) + fStack_28;
  *(float *)(param_2 + 0x5c) = *(float *)(param_2 + 0x5c) + fStack_24;
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(float *)(param_2 + 0x4c) = fVar1;
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x5c) = uVar4;
  return;
}

// 01449F40  FUN_01449f40  size=152  [run]
void FUN_01449f40(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_3[0x24] = 0.0;
  param_3[0x25] = 0.0;
  param_3[0x26] = 0.0;
  param_3[0x27] = 0.0;
  fVar7 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  param_3[0x18] = *param_2;
  param_3[0x19] = fVar7;
  param_3[0x1a] = fVar1;
  param_3[0x1b] = fVar2;
  fVar7 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  param_3[0x1c] = *param_2;
  param_3[0x1d] = fVar7;
  param_3[0x1e] = fVar1;
  param_3[0x1f] = fVar2;
  FUN_0100ac20(param_2);
  fVar7 = param_1[1];
  fVar1 = param_1[2];
  fVar2 = param_1[3];
  param_3[0xc] = *param_1;
  param_3[0xd] = fVar7;
  param_3[0xe] = fVar1;
  param_3[0xf] = fVar2;
  fVar7 = param_3[0x20];
  fVar1 = param_3[0x21];
  fVar2 = param_3[0x22];
  fVar3 = param_3[0x13];
  fVar4 = fVar1 * param_3[4] + fVar7 * *param_3 + fVar2 * param_3[8] + *param_1;
  fVar5 = fVar1 * param_3[5] + fVar7 * param_3[1] + fVar2 * param_3[9] + param_1[1];
  fVar6 = fVar1 * param_3[6] + fVar7 * param_3[2] + fVar2 * param_3[10] + param_1[2];
  fVar7 = fVar1 * param_3[7] + fVar7 * param_3[3] + fVar2 * param_3[0xb] + param_1[3];
  param_3[0x10] = fVar4;
  param_3[0x11] = fVar5;
  param_3[0x12] = fVar6;
  param_3[0x13] = fVar7;
  param_3[0x14] = fVar4;
  param_3[0x15] = fVar5;
  param_3[0x16] = fVar6;
  param_3[0x17] = fVar7;
  param_3[0x10] = param_3[0x10];
  param_3[0x11] = param_3[0x11];
  param_3[0x12] = param_3[0x12];
  param_3[0x13] = fVar3;
  param_3[0x14] = param_3[0x14];
  param_3[0x15] = param_3[0x15];
  param_3[0x16] = param_3[0x16];
  param_3[0x17] = 0.0;
  return;
}

// 01449FE0  FUN_01449fe0  size=133  [run]
void FUN_01449fe0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_2[0x24] = 0.0;
  param_2[0x25] = 0.0;
  param_2[0x26] = 0.0;
  param_2[0x27] = 0.0;
  fVar7 = param_1[1];
  fVar1 = param_1[2];
  fVar2 = param_1[3];
  param_2[0xc] = *param_1;
  param_2[0xd] = fVar7;
  param_2[0xe] = fVar1;
  param_2[0xf] = fVar2;
  fVar7 = param_2[0x20];
  fVar1 = param_2[0x21];
  fVar2 = param_2[0x22];
  fVar3 = param_2[0x13];
  fVar4 = fVar1 * param_2[4] + fVar7 * *param_2 + fVar2 * param_2[8] + *param_1;
  fVar5 = fVar1 * param_2[5] + fVar7 * param_2[1] + fVar2 * param_2[9] + param_1[1];
  fVar6 = fVar1 * param_2[6] + fVar7 * param_2[2] + fVar2 * param_2[10] + param_1[2];
  fVar7 = fVar1 * param_2[7] + fVar7 * param_2[3] + fVar2 * param_2[0xb] + param_1[3];
  param_2[0x10] = fVar4;
  param_2[0x11] = fVar5;
  param_2[0x12] = fVar6;
  param_2[0x13] = fVar7;
  param_2[0x14] = fVar4;
  param_2[0x15] = fVar5;
  param_2[0x16] = fVar6;
  param_2[0x17] = fVar7;
  param_2[0x18] = param_2[0x1c];
  param_2[0x19] = param_2[0x1d];
  param_2[0x1a] = param_2[0x1e];
  param_2[0x1b] = param_2[0x1f];
  param_2[0x10] = param_2[0x10];
  param_2[0x11] = param_2[0x11];
  param_2[0x12] = param_2[0x12];
  param_2[0x13] = fVar3;
  param_2[0x14] = param_2[0x14];
  param_2[0x15] = param_2[0x15];
  param_2[0x16] = param_2[0x16];
  param_2[0x17] = 0.0;
  return;
}

// 0144A070  FUN_0144a070  size=25  [run]
void FUN_0144a070(undefined4 param_1,int param_2)

{
  FUN_01449f40(param_2 + 0x30,param_1,param_2);
  return;
}

// 0144A090  FUN_0144a090  size=201  [run]
void FUN_0144a090(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  param_2[0x24] = 0.0;
  param_2[0x25] = 0.0;
  param_2[0x26] = 0.0;
  param_2[0x27] = 0.0;
  FUN_010087a0(param_1);
  fVar7 = param_1[1];
  fVar1 = param_1[2];
  fVar2 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = fVar7;
  param_2[2] = fVar1;
  param_2[3] = fVar2;
  fVar7 = param_1[5];
  fVar1 = param_1[6];
  fVar2 = param_1[7];
  param_2[4] = param_1[4];
  param_2[5] = fVar7;
  param_2[6] = fVar1;
  param_2[7] = fVar2;
  fVar7 = param_1[9];
  fVar1 = param_1[10];
  fVar2 = param_1[0xb];
  param_2[8] = param_1[8];
  param_2[9] = fVar7;
  param_2[10] = fVar1;
  param_2[0xb] = fVar2;
  fVar7 = param_1[0xd];
  fVar1 = param_1[0xe];
  fVar2 = param_1[0xf];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = fVar7;
  param_2[0xe] = fVar1;
  param_2[0xf] = fVar2;
  param_2[0x18] = local_20;
  param_2[0x19] = fStack_1c;
  param_2[0x1a] = fStack_18;
  param_2[0x1b] = fStack_14;
  param_2[0x1c] = local_20;
  param_2[0x1d] = fStack_1c;
  param_2[0x1e] = fStack_18;
  param_2[0x1f] = fStack_14;
  fVar7 = param_2[0x20];
  fVar1 = param_2[0x21];
  fVar2 = param_2[0x22];
  fVar3 = param_2[0x13];
  fVar4 = fVar1 * param_1[4] + fVar7 * *param_1 + fVar2 * param_1[8] + param_1[0xc];
  fVar5 = fVar1 * param_1[5] + fVar7 * param_1[1] + fVar2 * param_1[9] + param_1[0xd];
  fVar6 = fVar1 * param_1[6] + fVar7 * param_1[2] + fVar2 * param_1[10] + param_1[0xe];
  fVar7 = fVar1 * param_1[7] + fVar7 * param_1[3] + fVar2 * param_1[0xb] + param_1[0xf];
  param_2[0x10] = fVar4;
  param_2[0x11] = fVar5;
  param_2[0x12] = fVar6;
  param_2[0x13] = fVar7;
  param_2[0x14] = fVar4;
  param_2[0x15] = fVar5;
  param_2[0x16] = fVar6;
  param_2[0x17] = fVar7;
  param_2[0x10] = param_2[0x10];
  param_2[0x11] = param_2[0x11];
  param_2[0x12] = param_2[0x12];
  param_2[0x13] = fVar3;
  param_2[0x14] = param_2[0x14];
  param_2[0x15] = param_2[0x15];
  param_2[0x16] = param_2[0x16];
  param_2[0x17] = 0.0;
  return;
}

// 0144A160  FUN_0144a160  size=401  [run]
void FUN_0144a160(float *param_1,float param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  fVar3 = (param_2 - param_1[3]) * param_1[7];
  uVar2 = *(undefined8 *)(param_1 + 10);
  local_20._0_4_ = (float)uVar1;
  local_20._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uStack_18._0_4_ = (float)uVar2;
  uStack_18._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_30 = (float)*(undefined8 *)(param_1 + 0xc);
  fStack_2c = (float)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  fStack_28 = (float)*(undefined8 *)(param_1 + 0xe);
  fStack_24 = (float)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  fVar10 = (float)local_20 + local_30;
  fVar11 = local_20._4_4_ + fStack_2c;
  fVar12 = (float)uStack_18 + fStack_28;
  fVar13 = uStack_18._4_4_ + fStack_24;
  fVar5 = fVar12 * fVar12 + fVar10 * fVar10;
  fVar7 = fVar13 * fVar13 + fVar11 * fVar11;
  fVar8 = fVar10 * fVar10 + fVar12 * fVar12;
  fVar9 = fVar11 * fVar11 + fVar13 * fVar13;
  fVar4 = fVar7 + fVar5;
  fVar5 = fVar5 + fVar7;
  fVar7 = fVar9 + fVar8;
  fVar8 = fVar8 + fVar9;
  auVar14._0_4_ = 0.75 - fVar4 * 0.125;
  auVar14._4_4_ = 0.75 - fVar5 * 0.125;
  auVar14._8_4_ = 0.75 - fVar7 * 0.125;
  auVar14._12_4_ = 0.75 - fVar8 * 0.125;
  fVar10 = (1.5 - fVar4 * 0.5 * auVar14._0_4_ * auVar14._0_4_) * auVar14._0_4_ * fVar10;
  fVar11 = (1.5 - fVar5 * 0.5 * auVar14._4_4_ * auVar14._4_4_) * auVar14._4_4_ * fVar11;
  fVar12 = (1.5 - fVar7 * 0.5 * auVar14._8_4_ * auVar14._8_4_) * auVar14._8_4_ * fVar12;
  fVar13 = (1.5 - fVar8 * 0.5 * auVar14._12_4_ * auVar14._12_4_) * auVar14._12_4_ * fVar13;
  if (0.5 <= fVar3) {
    local_20._0_4_ = (fVar3 * 2.0 - 1.0) * (local_30 - fVar10) + fVar10;
    local_20._4_4_ = (fVar3 * 2.0 - 1.0) * (fStack_2c - fVar11) + fVar11;
    uStack_18._0_4_ = (fVar3 * 2.0 - 1.0) * (fStack_28 - fVar12) + fVar12;
    uStack_18._4_4_ = (fVar3 * 2.0 - 1.0) * (fStack_24 - fVar13) + fVar13;
  }
  else {
    local_20._0_4_ = fVar3 * 2.0 * (fVar10 - (float)local_20) + (float)local_20;
    local_20._4_4_ = fVar3 * 2.0 * (fVar11 - local_20._4_4_) + local_20._4_4_;
    uStack_18._0_4_ = fVar3 * 2.0 * (fVar12 - (float)uStack_18) + (float)uStack_18;
    uStack_18._4_4_ = fVar3 * 2.0 * (fVar13 - uStack_18._4_4_) + uStack_18._4_4_;
  }
  fVar4 = (float)uStack_18 * (float)uStack_18 + (float)local_20 * (float)local_20;
  fVar5 = uStack_18._4_4_ * uStack_18._4_4_ + local_20._4_4_ * local_20._4_4_;
  fVar7 = (float)local_20 * (float)local_20 + (float)uStack_18 * (float)uStack_18;
  fVar8 = local_20._4_4_ * local_20._4_4_ + uStack_18._4_4_ * uStack_18._4_4_;
  auVar6._0_4_ = fVar5 + fVar4;
  auVar6._4_4_ = fVar4 + fVar5;
  auVar6._8_4_ = fVar8 + fVar7;
  auVar6._12_4_ = fVar7 + fVar8;
  auVar14 = rsqrtps(auVar14,auVar6);
  fVar4 = auVar14._0_4_;
  fVar5 = auVar14._4_4_;
  fVar7 = auVar14._8_4_;
  fVar8 = auVar14._12_4_;
  _local_30 = CONCAT44((3.0 - fVar5 * auVar6._4_4_ * fVar5) * fVar5 * 0.5 * local_20._4_4_,
                       (3.0 - fVar4 * auVar6._0_4_ * fVar4) * fVar4 * 0.5 * (float)local_20);
  _fStack_28 = CONCAT44((3.0 - fVar8 * auVar6._12_4_ * fVar8) * fVar8 * 0.5 * uStack_18._4_4_,
                        (3.0 - fVar7 * auVar6._8_4_ * fVar7) * fVar7 * 0.5 * (float)uStack_18);
  local_20 = uVar1;
  uStack_18 = uVar2;
  FUN_0100ac20(&local_30);
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar7 = param_1[7];
  fVar8 = param_1[1];
  fVar10 = param_1[2];
  fVar11 = param_1[3];
  fVar12 = param_1[1];
  fVar9 = param_1[2];
  fVar13 = param_1[3];
  param_3[0xc] = (param_1[4] - *param_1) * fVar3 + *param_1;
  param_3[0xd] = (fVar4 - fVar8) * fVar3 + fVar12;
  param_3[0xe] = (fVar5 - fVar10) * fVar3 + fVar9;
  param_3[0xf] = (fVar7 - fVar11) * fVar3 + fVar13;
  fVar3 = param_1[0x10];
  fVar4 = param_1[0x11];
  fVar5 = param_1[0x12];
  param_3[0xc] = param_3[0xc] - (fVar4 * param_3[4] + fVar3 * *param_3 + fVar5 * param_3[8]);
  param_3[0xd] = param_3[0xd] - (fVar4 * param_3[5] + fVar3 * param_3[1] + fVar5 * param_3[9]);
  param_3[0xe] = param_3[0xe] - (fVar4 * param_3[6] + fVar3 * param_3[2] + fVar5 * param_3[10]);
  param_3[0xf] = param_3[0xf] - (fVar4 * param_3[7] + fVar3 * param_3[3] + fVar5 * param_3[0xb]);
  return;
}

// 0144A300  FUN_0144a300  size=406  [run]
void FUN_0144a300(float *param_1,float param_2,float param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  fVar3 = ((param_2 - param_1[3]) + param_3) * param_1[7];
  uVar2 = *(undefined8 *)(param_1 + 10);
  local_20._0_4_ = (float)uVar1;
  local_20._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uStack_18._0_4_ = (float)uVar2;
  uStack_18._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_30 = (float)*(undefined8 *)(param_1 + 0xc);
  fStack_2c = (float)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  fStack_28 = (float)*(undefined8 *)(param_1 + 0xe);
  fStack_24 = (float)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  fVar10 = (float)local_20 + local_30;
  fVar11 = local_20._4_4_ + fStack_2c;
  fVar12 = (float)uStack_18 + fStack_28;
  fVar13 = uStack_18._4_4_ + fStack_24;
  fVar5 = fVar12 * fVar12 + fVar10 * fVar10;
  fVar7 = fVar13 * fVar13 + fVar11 * fVar11;
  fVar8 = fVar10 * fVar10 + fVar12 * fVar12;
  fVar9 = fVar11 * fVar11 + fVar13 * fVar13;
  fVar4 = fVar7 + fVar5;
  fVar5 = fVar5 + fVar7;
  fVar7 = fVar9 + fVar8;
  fVar8 = fVar8 + fVar9;
  auVar14._0_4_ = 0.75 - fVar4 * 0.125;
  auVar14._4_4_ = 0.75 - fVar5 * 0.125;
  auVar14._8_4_ = 0.75 - fVar7 * 0.125;
  auVar14._12_4_ = 0.75 - fVar8 * 0.125;
  fVar10 = (1.5 - fVar4 * 0.5 * auVar14._0_4_ * auVar14._0_4_) * auVar14._0_4_ * fVar10;
  fVar11 = (1.5 - fVar5 * 0.5 * auVar14._4_4_ * auVar14._4_4_) * auVar14._4_4_ * fVar11;
  fVar12 = (1.5 - fVar7 * 0.5 * auVar14._8_4_ * auVar14._8_4_) * auVar14._8_4_ * fVar12;
  fVar13 = (1.5 - fVar8 * 0.5 * auVar14._12_4_ * auVar14._12_4_) * auVar14._12_4_ * fVar13;
  if (0.5 <= fVar3) {
    local_20._0_4_ = (fVar3 * 2.0 - 1.0) * (local_30 - fVar10) + fVar10;
    local_20._4_4_ = (fVar3 * 2.0 - 1.0) * (fStack_2c - fVar11) + fVar11;
    uStack_18._0_4_ = (fVar3 * 2.0 - 1.0) * (fStack_28 - fVar12) + fVar12;
    uStack_18._4_4_ = (fVar3 * 2.0 - 1.0) * (fStack_24 - fVar13) + fVar13;
  }
  else {
    local_20._0_4_ = fVar3 * 2.0 * (fVar10 - (float)local_20) + (float)local_20;
    local_20._4_4_ = fVar3 * 2.0 * (fVar11 - local_20._4_4_) + local_20._4_4_;
    uStack_18._0_4_ = fVar3 * 2.0 * (fVar12 - (float)uStack_18) + (float)uStack_18;
    uStack_18._4_4_ = fVar3 * 2.0 * (fVar13 - uStack_18._4_4_) + uStack_18._4_4_;
  }
  fVar4 = (float)uStack_18 * (float)uStack_18 + (float)local_20 * (float)local_20;
  fVar5 = uStack_18._4_4_ * uStack_18._4_4_ + local_20._4_4_ * local_20._4_4_;
  fVar7 = (float)local_20 * (float)local_20 + (float)uStack_18 * (float)uStack_18;
  fVar8 = local_20._4_4_ * local_20._4_4_ + uStack_18._4_4_ * uStack_18._4_4_;
  auVar6._0_4_ = fVar5 + fVar4;
  auVar6._4_4_ = fVar4 + fVar5;
  auVar6._8_4_ = fVar8 + fVar7;
  auVar6._12_4_ = fVar7 + fVar8;
  auVar14 = rsqrtps(auVar14,auVar6);
  fVar4 = auVar14._0_4_;
  fVar5 = auVar14._4_4_;
  fVar7 = auVar14._8_4_;
  fVar8 = auVar14._12_4_;
  _local_30 = CONCAT44((3.0 - fVar5 * auVar6._4_4_ * fVar5) * fVar5 * 0.5 * local_20._4_4_,
                       (3.0 - fVar4 * auVar6._0_4_ * fVar4) * fVar4 * 0.5 * (float)local_20);
  _fStack_28 = CONCAT44((3.0 - fVar8 * auVar6._12_4_ * fVar8) * fVar8 * 0.5 * uStack_18._4_4_,
                        (3.0 - fVar7 * auVar6._8_4_ * fVar7) * fVar7 * 0.5 * (float)uStack_18);
  local_20 = uVar1;
  uStack_18 = uVar2;
  FUN_0100ac20(&local_30);
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar7 = param_1[7];
  fVar8 = param_1[1];
  fVar10 = param_1[2];
  fVar11 = param_1[3];
  fVar12 = param_1[1];
  fVar9 = param_1[2];
  fVar13 = param_1[3];
  param_4[0xc] = (param_1[4] - *param_1) * fVar3 + *param_1;
  param_4[0xd] = (fVar4 - fVar8) * fVar3 + fVar12;
  param_4[0xe] = (fVar5 - fVar10) * fVar3 + fVar9;
  param_4[0xf] = (fVar7 - fVar11) * fVar3 + fVar13;
  fVar3 = param_1[0x10];
  fVar4 = param_1[0x11];
  fVar5 = param_1[0x12];
  param_4[0xc] = param_4[0xc] - (fVar4 * param_4[4] + fVar3 * *param_4 + fVar5 * param_4[8]);
  param_4[0xd] = param_4[0xd] - (fVar4 * param_4[5] + fVar3 * param_4[1] + fVar5 * param_4[9]);
  param_4[0xe] = param_4[0xe] - (fVar4 * param_4[6] + fVar3 * param_4[2] + fVar5 * param_4[10]);
  param_4[0xf] = param_4[0xf] - (fVar4 * param_4[7] + fVar3 * param_4[3] + fVar5 * param_4[0xb]);
  return;
}

// 0144A630  FUN_0144a630  size=444  [run]
void FUN_0144a630(float param_1,float *param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar3 = (param_1 - param_2[0x13]) * param_2[0x17];
  fVar16 = 1.1920929e-07;
  if (1.1920929e-07 < fVar3) {
    fVar16 = fVar3;
  }
  local_20 = (float)*(undefined8 *)(param_2 + 0x18);
  fStack_1c = (float)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  fStack_18 = (float)*(undefined8 *)(param_2 + 0x1a);
  fStack_14 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20);
  local_30 = (float)*(undefined8 *)(param_2 + 0x1c);
  fStack_2c = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  fStack_28 = (float)*(undefined8 *)(param_2 + 0x1e);
  fStack_24 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
  pfVar1 = param_2 + 0x1c;
  fVar8 = local_20 + local_30;
  fVar9 = fStack_1c + fStack_2c;
  fVar10 = fStack_18 + fStack_28;
  fVar11 = fStack_14 + fStack_24;
  fVar4 = fVar10 * fVar10 + fVar8 * fVar8;
  fVar5 = fVar11 * fVar11 + fVar9 * fVar9;
  fVar6 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar7 = fVar9 * fVar9 + fVar11 * fVar11;
  fVar3 = fVar5 + fVar4;
  fVar4 = fVar4 + fVar5;
  fVar5 = fVar7 + fVar6;
  fVar6 = fVar6 + fVar7;
  auVar12._0_4_ = 0.75 - fVar3 * 0.125;
  auVar12._4_4_ = 0.75 - fVar4 * 0.125;
  auVar12._8_4_ = 0.75 - fVar5 * 0.125;
  auVar12._12_4_ = 0.75 - fVar6 * 0.125;
  *pfVar1 = fVar8;
  param_2[0x1d] = fVar9;
  param_2[0x1e] = fVar10;
  param_2[0x1f] = fVar11;
  fVar8 = (1.5 - fVar3 * 0.5 * auVar12._0_4_ * auVar12._0_4_) * auVar12._0_4_ * fVar8;
  fVar9 = (1.5 - fVar4 * 0.5 * auVar12._4_4_ * auVar12._4_4_) * auVar12._4_4_ * fVar9;
  fVar10 = (1.5 - fVar5 * 0.5 * auVar12._8_4_ * auVar12._8_4_) * auVar12._8_4_ * fVar10;
  fVar11 = (1.5 - fVar6 * 0.5 * auVar12._12_4_ * auVar12._12_4_) * auVar12._12_4_ * fVar11;
  *pfVar1 = fVar8;
  param_2[0x1d] = fVar9;
  param_2[0x1e] = fVar10;
  param_2[0x1f] = fVar11;
  if (0.5 <= fVar16) {
    *pfVar1 = (fVar16 * 2.0 - 1.0) * (local_30 - fVar8) + fVar8;
    param_2[0x1d] = (fVar16 * 2.0 - 1.0) * (fStack_2c - fVar9) + fVar9;
    param_2[0x1e] = (fVar16 * 2.0 - 1.0) * (fStack_28 - fVar10) + fVar10;
    param_2[0x1f] = (fVar16 * 2.0 - 1.0) * (fStack_24 - fVar11) + fVar11;
  }
  else {
    *pfVar1 = (fVar8 - local_20) * fVar16 * 2.0 + local_20;
    param_2[0x1d] = (fVar9 - fStack_1c) * fVar16 * 2.0 + fStack_1c;
    param_2[0x1e] = (fVar10 - fStack_18) * fVar16 * 2.0 + fStack_18;
    param_2[0x1f] = (fVar11 - fStack_14) * fVar16 * 2.0 + fStack_14;
  }
  fVar3 = *pfVar1;
  fVar4 = param_2[0x1d];
  fVar5 = param_2[0x1e];
  fVar6 = param_2[0x1f];
  fVar8 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar9 = fVar6 * fVar6 + fVar4 * fVar4;
  fVar10 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar7 = fVar4 * fVar4 + fVar6 * fVar6;
  fVar11 = fVar9 + fVar8;
  fVar8 = fVar8 + fVar9;
  fVar9 = fVar7 + fVar10;
  fVar10 = fVar10 + fVar7;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar11;
  auVar2._8_4_ = fVar9;
  auVar2._12_4_ = fVar10;
  auVar12 = rsqrtps(auVar12,auVar2);
  fVar7 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  fVar15 = auVar12._12_4_;
  *pfVar1 = fVar3 * (3.0 - fVar7 * fVar11 * fVar7) * fVar7 * 0.5;
  param_2[0x1d] = fVar4 * (3.0 - fVar13 * fVar8 * fVar13) * fVar13 * 0.5;
  param_2[0x1e] = fVar5 * (3.0 - fVar14 * fVar9 * fVar14) * fVar14 * 0.5;
  param_2[0x1f] = fVar6 * (3.0 - fVar15 * fVar10 * fVar15) * fVar15 * 0.5;
  fVar3 = param_2[0x17];
  param_2[0x14] = (param_2[0x14] - param_2[0x10]) * fVar16 + param_2[0x10];
  param_2[0x15] = (param_2[0x15] - param_2[0x11]) * fVar16 + param_2[0x11];
  param_2[0x16] = (param_2[0x16] - param_2[0x12]) * fVar16 + param_2[0x12];
  param_2[0x17] = (param_2[0x17] - param_2[0x13]) * fVar16 + param_2[0x13];
  param_2[0x17] = fVar3 / fVar16;
  param_2[0x24] = fVar16 * param_2[0x24];
  param_2[0x25] = fVar16 * param_2[0x25];
  param_2[0x26] = fVar16 * param_2[0x26];
  param_2[0x27] = fVar16 * param_2[0x27];
  FUN_0100ac20(pfVar1);
  fVar16 = param_2[0x20];
  fVar3 = param_2[0x21];
  fVar4 = param_2[0x22];
  param_2[0xc] = param_2[0x14] - (fVar3 * param_2[4] + fVar16 * *param_2 + fVar4 * param_2[8]);
  param_2[0xd] = param_2[0x15] - (fVar3 * param_2[5] + fVar16 * param_2[1] + fVar4 * param_2[9]);
  param_2[0xe] = param_2[0x16] - (fVar3 * param_2[6] + fVar16 * param_2[2] + fVar4 * param_2[10]);
  param_2[0xf] = param_2[0x17] - (fVar3 * param_2[7] + fVar16 * param_2[3] + fVar4 * param_2[0xb]);
  return;
}

// 0144A7F0  FUN_0144a7f0  size=442  [run]
void FUN_0144a7f0(float param_1,float *param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar3 = param_2[0x13];
  if (param_1 <= fVar3) {
    param_1 = fVar3;
  }
  fVar16 = (param_1 - fVar3) * param_2[0x17];
  local_20 = (float)*(undefined8 *)(param_2 + 0x18);
  fStack_1c = (float)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  fStack_18 = (float)*(undefined8 *)(param_2 + 0x1a);
  fStack_14 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1a) >> 0x20);
  local_30 = (float)*(undefined8 *)(param_2 + 0x1c);
  fStack_2c = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  fStack_28 = (float)*(undefined8 *)(param_2 + 0x1e);
  fStack_24 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x1e) >> 0x20);
  pfVar1 = param_2 + 0x1c;
  fVar8 = local_20 + local_30;
  fVar9 = fStack_1c + fStack_2c;
  fVar10 = fStack_18 + fStack_28;
  fVar11 = fStack_14 + fStack_24;
  fVar4 = fVar10 * fVar10 + fVar8 * fVar8;
  fVar5 = fVar11 * fVar11 + fVar9 * fVar9;
  fVar6 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar7 = fVar9 * fVar9 + fVar11 * fVar11;
  fVar3 = fVar5 + fVar4;
  fVar4 = fVar4 + fVar5;
  fVar5 = fVar7 + fVar6;
  fVar6 = fVar6 + fVar7;
  auVar12._0_4_ = 0.75 - fVar3 * 0.125;
  auVar12._4_4_ = 0.75 - fVar4 * 0.125;
  auVar12._8_4_ = 0.75 - fVar5 * 0.125;
  auVar12._12_4_ = 0.75 - fVar6 * 0.125;
  *pfVar1 = fVar8;
  param_2[0x1d] = fVar9;
  param_2[0x1e] = fVar10;
  param_2[0x1f] = fVar11;
  fVar8 = (1.5 - fVar3 * 0.5 * auVar12._0_4_ * auVar12._0_4_) * auVar12._0_4_ * fVar8;
  fVar9 = (1.5 - fVar4 * 0.5 * auVar12._4_4_ * auVar12._4_4_) * auVar12._4_4_ * fVar9;
  fVar10 = (1.5 - fVar5 * 0.5 * auVar12._8_4_ * auVar12._8_4_) * auVar12._8_4_ * fVar10;
  fVar11 = (1.5 - fVar6 * 0.5 * auVar12._12_4_ * auVar12._12_4_) * auVar12._12_4_ * fVar11;
  *pfVar1 = fVar8;
  param_2[0x1d] = fVar9;
  param_2[0x1e] = fVar10;
  param_2[0x1f] = fVar11;
  if (0.5 <= fVar16) {
    *pfVar1 = (fVar16 * 2.0 - 1.0) * (local_30 - fVar8) + fVar8;
    param_2[0x1d] = (fVar16 * 2.0 - 1.0) * (fStack_2c - fVar9) + fVar9;
    param_2[0x1e] = (fVar16 * 2.0 - 1.0) * (fStack_28 - fVar10) + fVar10;
    param_2[0x1f] = (fVar16 * 2.0 - 1.0) * (fStack_24 - fVar11) + fVar11;
  }
  else {
    *pfVar1 = (fVar8 - local_20) * fVar16 * 2.0 + local_20;
    param_2[0x1d] = (fVar9 - fStack_1c) * fVar16 * 2.0 + fStack_1c;
    param_2[0x1e] = (fVar10 - fStack_18) * fVar16 * 2.0 + fStack_18;
    param_2[0x1f] = (fVar11 - fStack_14) * fVar16 * 2.0 + fStack_14;
  }
  fVar3 = *pfVar1;
  fVar4 = param_2[0x1d];
  fVar5 = param_2[0x1e];
  fVar6 = param_2[0x1f];
  fVar8 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar9 = fVar6 * fVar6 + fVar4 * fVar4;
  fVar10 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar7 = fVar4 * fVar4 + fVar6 * fVar6;
  fVar11 = fVar9 + fVar8;
  fVar8 = fVar8 + fVar9;
  fVar9 = fVar7 + fVar10;
  fVar10 = fVar10 + fVar7;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar11;
  auVar2._8_4_ = fVar9;
  auVar2._12_4_ = fVar10;
  auVar12 = rsqrtps(auVar12,auVar2);
  fVar7 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  fVar15 = auVar12._12_4_;
  *pfVar1 = fVar3 * (3.0 - fVar7 * fVar11 * fVar7) * fVar7 * 0.5;
  param_2[0x1d] = fVar4 * (3.0 - fVar13 * fVar8 * fVar13) * fVar13 * 0.5;
  param_2[0x1e] = fVar5 * (3.0 - fVar14 * fVar9 * fVar14) * fVar14 * 0.5;
  param_2[0x1f] = fVar6 * (3.0 - fVar15 * fVar10 * fVar15) * fVar15 * 0.5;
  param_2[0x18] = *pfVar1;
  param_2[0x19] = param_2[0x1d];
  param_2[0x1a] = param_2[0x1e];
  param_2[0x1b] = param_2[0x1f];
  fVar3 = (param_2[0x14] - param_2[0x10]) * fVar16 + param_2[0x10];
  fVar4 = (param_2[0x15] - param_2[0x11]) * fVar16 + param_2[0x11];
  fVar5 = (param_2[0x16] - param_2[0x12]) * fVar16 + param_2[0x12];
  fVar6 = (param_2[0x17] - param_2[0x13]) * fVar16 + param_2[0x13];
  param_2[0x10] = fVar3;
  param_2[0x11] = fVar4;
  param_2[0x12] = fVar5;
  param_2[0x13] = fVar6;
  param_2[0x14] = fVar3;
  param_2[0x15] = fVar4;
  param_2[0x16] = fVar5;
  param_2[0x17] = fVar6;
  param_2[0x13] = param_1;
  param_2[0x14] = param_2[0x14];
  param_2[0x15] = param_2[0x15];
  param_2[0x16] = param_2[0x16];
  param_2[0x17] = 0.0;
  FUN_0100ac20(pfVar1);
  fVar3 = param_2[0x20];
  fVar4 = param_2[0x21];
  fVar5 = param_2[0x22];
  param_2[0xc] = param_2[0x14] - (fVar4 * param_2[4] + fVar3 * *param_2 + fVar5 * param_2[8]);
  param_2[0xd] = param_2[0x15] - (fVar4 * param_2[5] + fVar3 * param_2[1] + fVar5 * param_2[9]);
  param_2[0xe] = param_2[0x16] - (fVar4 * param_2[6] + fVar3 * param_2[2] + fVar5 * param_2[10]);
  param_2[0xf] = param_2[0x17] - (fVar4 * param_2[7] + fVar3 * param_2[3] + fVar5 * param_2[0xb]);
  return;
}

// 0144AC00  FUN_0144ac00  size=19  [run]
float10 __thiscall FUN_0144ac00(int param_1,float param_2,float param_3)

{
  return (((float10)param_2 - (float10)*(float *)(param_1 + 0xc)) + (float10)param_3) *
         (float10)*(float *)(param_1 + 0x1c);
}

// 0144AEF0  FUN_0144aef0  size=142  [run]
void FUN_0144aef0(undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  void *_Dst;
  
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  _Dst = (void *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(param_2 * param_3);
  FID_conflict__memcpy(_Dst,(void *)*param_1,(uint)*(ushort *)(param_1 + 1) * param_3);
  uVar1 = *(ushort *)((int)param_1 + 6);
  if ((uVar1 & 0x8000) == 0) {
    uVar2 = *param_1;
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(uVar2,param_3 * (uVar1 & 0x3fff));
  }
  *param_1 = _Dst;
  *(ushort *)((int)param_1 + 6) = *(ushort *)((int)param_1 + 6) & 0x4000 | (ushort)param_2;
  return;
}

// 0144AF80  FUN_0144af80  size=169  [run]
void FUN_0144af80(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LPVOID pvVar4;
  void *_Dst;
  
  puVar3 = param_1;
  if (*(ushort *)(param_1 + 1) == 0) {
    param_1 = (undefined4 *)0x1;
  }
  else {
    param_1 = (undefined4 *)((uint)*(ushort *)(param_1 + 1) * 2);
  }
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  _Dst = (void *)(**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))((int)param_1 * param_2);
  FID_conflict__memcpy(_Dst,(void *)*puVar3,(uint)*(ushort *)(puVar3 + 1) * param_2);
  uVar1 = *(ushort *)((int)puVar3 + 6);
  if ((uVar1 & 0x8000) == 0) {
    uVar2 = *puVar3;
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 8))(uVar2,param_2 * (uVar1 & 0x3fff));
  }
  *puVar3 = _Dst;
  *(ushort *)((int)puVar3 + 6) = *(ushort *)((int)puVar3 + 6) & 0x4000 | (ushort)param_1;
  return;
}

// 0144B030  FUN_0144b030  size=73  [run]
void __thiscall FUN_0144b030(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0144b0b0(param_2,param_3);
  FUN_0100ac20(param_3);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  return;
}

// 0144B0B0  FUN_0144b0b0  size=61  [run]
void __thiscall FUN_0144b0b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[4] = *param_2;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[8] = *param_3;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}

// 0144B0F0  FUN_0144b0f0  size=228  [run]
void __thiscall FUN_0144b0f0(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  float fVar11;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar2 = (param_2 - param_1[3]) * param_1[7];
  local_20 = (param_1[0xc] - param_1[8]) * fVar2 + param_1[8];
  fStack_1c = (param_1[0xd] - param_1[9]) * fVar2 + param_1[9];
  fStack_18 = (param_1[0xe] - param_1[10]) * fVar2 + param_1[10];
  fStack_14 = (param_1[0xf] - param_1[0xb]) * fVar2 + param_1[0xb];
  fVar3 = fStack_18 * fStack_18 + local_20 * local_20;
  fVar4 = fStack_14 * fStack_14 + fStack_1c * fStack_1c;
  fVar5 = local_20 * local_20 + fStack_18 * fStack_18;
  fVar6 = fStack_1c * fStack_1c + fStack_14 * fStack_14;
  fVar7 = fVar4 + fVar3;
  fVar3 = fVar3 + fVar4;
  fVar4 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  auVar8._4_4_ = fVar3;
  auVar8._0_4_ = fVar7;
  auVar8._8_4_ = fVar4;
  auVar8._12_4_ = fVar5;
  auVar8 = rsqrtps(in_XMM3,auVar8);
  fVar6 = auVar8._0_4_;
  fVar9 = auVar8._4_4_;
  fVar10 = auVar8._8_4_;
  fVar11 = auVar8._12_4_;
  local_20 = (3.0 - fVar6 * fVar7 * fVar6) * fVar6 * 0.5 * local_20;
  fStack_1c = (3.0 - fVar9 * fVar3 * fVar9) * fVar9 * 0.5 * fStack_1c;
  fStack_18 = (3.0 - fVar10 * fVar4 * fVar10) * fVar10 * 0.5 * fStack_18;
  fStack_14 = (3.0 - fVar11 * fVar5 * fVar11) * fVar11 * 0.5 * fStack_14;
  FUN_0100ac20(&local_20);
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar9 = param_1[3];
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar1 = param_1[3];
  param_3[0xc] = (param_1[4] - *param_1) * fVar2 + *param_1;
  param_3[0xd] = (fVar3 - fVar6) * fVar2 + fVar10;
  param_3[0xe] = (fVar4 - fVar7) * fVar2 + fVar11;
  param_3[0xf] = (fVar5 - fVar9) * fVar2 + fVar1;
  fVar3 = param_1[0x10];
  fVar4 = param_1[0x11];
  fVar5 = param_1[0x12];
  param_3[0xc] = param_3[0xc] - (fVar4 * param_3[4] + fVar3 * *param_3 + fVar5 * param_3[8]);
  param_3[0xd] = param_3[0xd] - (fVar4 * param_3[5] + fVar3 * param_3[1] + fVar5 * param_3[9]);
  param_3[0xe] = param_3[0xe] - (fVar4 * param_3[6] + fVar3 * param_3[2] + fVar5 * param_3[10]);
  param_3[0xf] = param_3[0xf] - (fVar4 * param_3[7] + fVar3 * param_3[3] + fVar5 * param_3[0xb]);
  return;
}

// 0144B1E0  FUN_0144b1e0  size=15  [run]
int __thiscall FUN_0144b1e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0144B1F0  FUN_0144b1f0  size=70  [run]
int __thiscall FUN_0144b1f0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    iVar2 = FUN_0100a210(param_2,param_1,iVar2,4);
    if (iVar2 == 0) {
      *(int *)(param_1 + 4) = param_3;
    }
    return iVar2;
  }
  *(int *)(param_1 + 4) = param_3;
  return 0;
}

// 0144B240  FUN_0144b240  size=46  [run]
void __thiscall FUN_0144b240(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = 0;
  param_1[1] = param_3;
  if (0 < param_3) {
    do {
      *(undefined4 *)(*(int *)*param_1 + iVar1 * 4) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

// 0144B280  FUN_0144b280  size=62  [run]
void __thiscall FUN_0144b280(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)*param_1;
  iVar2 = *(int *)(iVar1 + param_2 * 4);
  iVar3 = iVar2;
  if (-1 < iVar2) {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar1 + iVar4 * 4);
    } while (-1 < iVar3);
    while (-1 < iVar2) {
      iVar3 = *(int *)(iVar1 + param_2 * 4);
      *(int *)(iVar1 + param_2 * 4) = iVar4;
      iVar1 = *(int *)*param_1;
      param_2 = iVar3;
      iVar2 = *(int *)(iVar1 + iVar3 * 4);
    }
  }
  return;
}

// 0144B2C0  FUN_0144b2c0  size=57  [run]
void __thiscall FUN_0144b2c0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  if (param_2 < param_3) {
    piVar1 = (int *)(iVar2 + param_2 * 4);
    *piVar1 = *piVar1 + *(int *)(iVar2 + param_3 * 4);
    *(int *)(*(int *)*param_1 + param_3 * 4) = param_2;
    return;
  }
  piVar1 = (int *)(iVar2 + param_3 * 4);
  *piVar1 = *piVar1 + *(int *)(iVar2 + param_2 * 4);
  *(int *)(*(int *)*param_1 + param_2 * 4) = param_3;
  return;
}

// 0144B300  FUN_0144b300  size=155  [run]
void __thiscall FUN_0144b300(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)*param_1;
  iVar2 = *(int *)(iVar5 + param_2 * 4);
  iVar3 = iVar2;
  if (-1 < iVar2) {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar5 + iVar4 * 4);
    } while (-1 < iVar3);
    while (-1 < iVar2) {
      iVar3 = *(int *)(iVar5 + param_2 * 4);
      *(int *)(iVar5 + param_2 * 4) = iVar4;
      iVar5 = *(int *)*param_1;
      param_2 = iVar3;
      iVar2 = *(int *)(iVar5 + iVar3 * 4);
    }
  }
  iVar3 = *(int *)*param_1;
  iVar2 = *(int *)(iVar3 + param_3 * 4);
  if (-1 < iVar2) {
    do {
      iVar5 = iVar2;
      iVar2 = *(int *)(iVar3 + iVar5 * 4);
    } while (-1 < iVar2);
    iVar2 = *(int *)(iVar3 + param_3 * 4);
    while (-1 < iVar2) {
      iVar4 = *(int *)(iVar3 + param_3 * 4);
      *(int *)(iVar3 + param_3 * 4) = iVar5;
      iVar3 = *(int *)*param_1;
      param_3 = iVar4;
      iVar2 = *(int *)(iVar3 + iVar4 * 4);
    }
  }
  if (param_2 != param_3) {
    iVar3 = *(int *)*param_1;
    if (param_2 < param_3) {
      piVar1 = (int *)(iVar3 + param_2 * 4);
      *piVar1 = *piVar1 + *(int *)(iVar3 + param_3 * 4);
      *(int *)(*(int *)*param_1 + param_3 * 4) = param_2;
      return;
    }
    piVar1 = (int *)(iVar3 + param_3 * 4);
    *piVar1 = *piVar1 + *(int *)(iVar3 + param_2 * 4);
    *(int *)(*(int *)*param_1 + param_2 * 4) = param_3;
  }
  return;
}

// 0144B3A0  FUN_0144b3a0  size=61  [run]
void __fastcall FUN_0144b3a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = *(int **)*param_1;
  piVar1 = piVar3 + param_1[1];
  piVar4 = piVar3;
  for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (-1 < *piVar3) {
      iVar2 = piVar4[*piVar3];
      while (-1 < iVar2) {
        *piVar3 = piVar4[*piVar3];
        piVar4 = *(int **)*param_1;
        iVar2 = piVar4[*piVar3];
      }
    }
  }
  return;
}

// 0144B3E0  FUN_0144b3e0  size=51  [run]
void __thiscall FUN_0144b3e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar1 = *(int *)(*(int *)*param_2 + iVar2 * 4);
      if (-1 < iVar1) {
        FUN_0144b300(iVar2,iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}

// 0144B420  FUN_0144b420  size=165  [run]
undefined4 __thiscall FUN_0144b420(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  undefined4 *puVar4;
  int iVar5;
  int local_c;
  
  FUN_0144b3a0();
  iVar5 = 0;
  local_c = 0;
  puVar4 = extraout_ECX;
  if (0 < (int)extraout_ECX[1]) {
    do {
      iVar3 = *(int *)*puVar4;
      iVar1 = *(int *)(iVar3 + iVar5 * 4);
      if (iVar1 < 0) {
        iVar3 = param_2[1] + 1;
        if ((int)(param_2[2] & 0x3fffffffU) < iVar3) {
          iVar2 = (param_2[2] & 0x3fffffffU) * 2;
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          iVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar3,4);
          if (iVar3 != 0) {
            return 1;
          }
        }
        *(int *)(*param_2 + param_2[1] * 4) = -iVar1;
        param_2[1] = param_2[1] + 1;
        *(int *)(*(int *)*param_1 + iVar5 * 4) = local_c;
        local_c = local_c + 1;
      }
      else {
        *(undefined4 *)(iVar3 + iVar5 * 4) = *(undefined4 *)(iVar3 + iVar1 * 4);
      }
      iVar5 = iVar5 + 1;
      puVar4 = param_1;
    } while (iVar5 < (int)param_1[1]);
  }
  return 0;
}

// 0144B4D0  FUN_0144b4d0  size=261  [run]
int __thiscall FUN_0144b4d0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  iVar1 = param_2[1];
  iVar7 = 0;
  piVar5 = (int *)*param_2;
  iVar6 = *piVar5;
  iVar4 = 1;
  if (iVar1 < 2) {
    return 0;
  }
  do {
    piVar5 = piVar5 + 1;
    if (iVar6 < *piVar5) {
      iVar6 = *piVar5;
      iVar7 = iVar4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar1);
  if (iVar7 == 0) {
    return 0;
  }
  if (iVar1 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    local_c = iVar1 * 4;
    piVar5 = (int *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_c);
    local_8 = (int)(local_c + (local_c >> 0x1f & 3U)) >> 2;
    if (local_8 != 0) goto LAB_0144b555;
  }
  local_8 = -0x80000000;
LAB_0144b555:
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      piVar5[iVar4] = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  *piVar5 = iVar7;
  piVar5[iVar7] = 0;
  puVar2 = (undefined4 *)*param_2;
  uVar3 = puVar2[iVar7];
  puVar2[iVar7] = *puVar2;
  *(undefined4 *)*param_2 = uVar3;
  iVar4 = 0;
  if (0 < (int)param_1[1]) {
    do {
      iVar1 = iVar4 * 4;
      iVar6 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(int *)(*(int *)*param_1 + iVar6) = piVar5[*(int *)(*(int *)*param_1 + iVar1)];
    } while (iVar4 < (int)param_1[1]);
  }
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(piVar5,local_8 * 4);
  }
  return iVar7;
}

// 0144B5E0  FUN_0144b5e0  size=295  [run]
void __thiscall FUN_0144b5e0(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_c;
  int local_8;
  
  iVar3 = (int)param_3;
  iVar4 = 0;
  if (0 < (int)param_1[1]) {
    do {
      iVar1 = iVar4 * 4;
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)*param_1 + iVar2) =
           *(undefined4 *)(*param_2 + *(int *)(*(int *)*param_1 + iVar1) * 4);
    } while (iVar4 < (int)param_1[1]);
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    local_8 = (int)param_3 * 4;
    param_3 = (undefined4 *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_8);
    local_c = (int)(local_8 + (local_8 >> 0x1f & 3U)) >> 2;
    if (local_c != 0) goto LAB_0144b654;
  }
  local_c = -0x80000000;
LAB_0144b654:
  iVar4 = iVar3;
  puVar5 = param_3;
  if (0 < iVar3) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  iVar4 = 0;
  if (0 < param_4[1]) {
    do {
      param_3[*(int *)(*param_2 + iVar4 * 4)] =
           param_3[*(int *)(*param_2 + iVar4 * 4)] + *(int *)(*param_4 + iVar4 * 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_4[1]);
  }
  if ((int)(param_4[2] & 0x3fffffffU) < iVar3) {
    iVar4 = (param_4[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar4,4);
  }
  iVar4 = 0;
  param_4[1] = iVar3;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(*param_4 + iVar4 * 4) = param_3[iVar4];
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(param_3,local_c * 4);
  }
  return;
}

// 0144B710  FUN_0144b710  size=345  [run]
undefined4 __thiscall FUN_0144b710(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14 [3];
  undefined4 *local_8;
  
  iVar1 = param_1[1];
  local_8 = param_1;
  if ((int)(param_3[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    iVar4 = FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar4,4);
    if (iVar4 != 0) {
      return 1;
    }
  }
  param_3[1] = iVar1;
  iVar1 = param_2[1];
  if (0 < iVar1) {
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = -0x80000000;
    if ((0 < iVar1) && (iVar4 = FUN_0100a210(&PTR_vftable_018e9b8c,local_14,iVar1,4), iVar4 != 0)) {
      local_14[1] = 0;
      if (-1 < local_14[2]) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_14[0],local_14[2] * 4);
      }
      return 1;
    }
    iVar5 = 0;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        *(int *)(local_14[0] + iVar4 * 4) = iVar5;
        iVar5 = iVar5 + *(int *)(*param_2 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    iVar1 = *param_3;
    iVar4 = *(int *)*local_8;
    iVar5 = 0;
    if (0 < (int)local_8[1]) {
      do {
        iVar2 = *(int *)(iVar4 + iVar5 * 4);
        iVar3 = *(int *)(local_14[0] + iVar2 * 4);
        *(int *)(local_14[0] + iVar2 * 4) = iVar3 + 1;
        *(int *)(iVar1 + iVar3 * 4) = iVar5;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_8[1]);
    }
    local_14[1] = 0;
    if (-1 < local_14[2]) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_14[0],local_14[2] * 4);
    }
  }
  return 0;
}

// 0144B870  FUN_0144b870  size=62  [run]
void __thiscall FUN_0144b870(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)*param_1;
  iVar2 = *(int *)(iVar1 + param_2 * 4);
  iVar3 = iVar2;
  if (-1 < iVar2) {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar1 + iVar4 * 4);
    } while (-1 < iVar3);
    while (-1 < iVar2) {
      iVar3 = *(int *)(iVar1 + param_2 * 4);
      *(int *)(iVar1 + param_2 * 4) = iVar4;
      iVar1 = *(int *)*param_1;
      param_2 = iVar3;
      iVar2 = *(int *)(iVar1 + iVar3 * 4);
    }
  }
  return;
}

// 0144B8B0  FUN_0144b8b0  size=57  [run]
void __thiscall FUN_0144b8b0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  if (param_2 < param_3) {
    piVar1 = (int *)(iVar2 + param_2 * 4);
    *piVar1 = *piVar1 + *(int *)(iVar2 + param_3 * 4);
    *(int *)(*(int *)*param_1 + param_3 * 4) = param_2;
    return;
  }
  piVar1 = (int *)(iVar2 + param_3 * 4);
  *piVar1 = *piVar1 + *(int *)(iVar2 + param_2 * 4);
  *(int *)(*(int *)*param_1 + param_2 * 4) = param_3;
  return;
}

// 0144B8F0  FUN_0144b8f0  size=71  [run]
int __thiscall FUN_0144b8f0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    iVar2 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
    if (iVar2 == 0) {
      *(int *)(param_1 + 4) = param_2;
    }
    return iVar2;
  }
  *(int *)(param_1 + 4) = param_2;
  return 0;
}

// 0144B940  FUN_0144b940  size=71  [run]
int __thiscall FUN_0144b940(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    iVar2 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,4);
    if (iVar2 == 0) {
      *(int *)(param_1 + 4) = param_2;
    }
    return iVar2;
  }
  *(int *)(param_1 + 4) = param_2;
  return 0;
}

// 0144B990  FUN_0144b990  size=31  [run]
undefined4 FUN_0144b990(void)

{
  uint in_XMM0_Da;
  
  return CONCAT31((int3)((in_XMM0_Da & 0x7f800000) >> 8),(in_XMM0_Da & 0x7f800000) != 0x7f800000);
}

// 0144B9B0  FUN_0144b9b0  size=88  [run]
uint __fastcall FUN_0144b9b0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    fVar1 = *(float *)(param_1 + uVar3 * 4);
    if (((uint)fVar1 & 0x7f800000) == 0x7f800000) break;
    fVar2 = *(float *)(param_1 + 0x10 + uVar3 * 4);
    if ((((uint)fVar2 & 0x7f800000) == 0x7f800000) || (fVar2 < fVar1)) break;
    uVar3 = uVar3 + 1;
    if (2 < (int)uVar3) {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

// 0144BA10  hkMemoryStreamReader::vf1C  size=11  [run]
undefined4 __fastcall hkMemoryStreamReader::vf1C(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  return 0;
}

// 0144BA20  hkMemoryStreamReader::vf20  size=19  [run]
undefined4 __fastcall hkMemoryStreamReader::vf20(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x14);
    return 0;
  }
  return 1;
}

// 0144BA40  hkMemoryStreamReader::vf28  size=86  [run]
undefined4 __thiscall hkMemoryStreamReader::vf28(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = *(int *)(param_1 + 0xc) + param_2;
    }
    else {
      iVar1 = -1;
      if (param_3 == 2) {
        iVar1 = *(int *)(param_1 + 0x10) - param_2;
      }
    }
  }
  if (-1 < iVar1) {
    if (iVar1 <= *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0xc) = iVar1;
      return 0;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x10);
    return 1;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}

// 0144BAA0  hkMemoryStreamReader::vf2C  size=4  [run]
undefined4 __fastcall hkMemoryStreamReader::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 0144BAB0  hkMemoryStreamReader::vf10  size=103  [run]
int __thiscall hkMemoryStreamReader::vf10(int *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  pcVar1 = (char *)(**(code **)(*param_1 + 0xc))((int)&uStack_8 + 3);
  if (*pcVar1 != '\0') {
    iVar2 = param_1[4] - param_1[3];
    iVar3 = param_3;
    if (iVar2 <= param_3) {
      iVar3 = iVar2;
    }
    FUN_01015e80(param_2,param_1[2] + param_1[3],iVar3);
    param_1[3] = param_1[3] + iVar3;
    if ((iVar3 == 0) && (param_3 != 0)) {
      param_1[3] = param_1[4] + 1;
    }
    return iVar3;
  }
  return 0;
}

// 0144BB20  hkMemoryStreamReader::vf14  size=79  [run]
int __thiscall hkMemoryStreamReader::vf14(int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  pcVar1 = (char *)(**(code **)(*param_1 + 0xc))((int)&uStack_8 + 3);
  if (*pcVar1 != '\0') {
    iVar2 = param_1[4] - param_1[3];
    if (param_2 < iVar2) {
      iVar2 = param_2;
    }
    param_1[3] = param_1[3] + iVar2;
    if ((iVar2 == 0) && (param_2 != 0)) {
      param_1[3] = param_1[4] + 1;
    }
    return iVar2;
  }
  return 0;
}

// 0144BB70  hkMemoryStreamReader::vf0C  size=22  [run]
void __thiscall hkMemoryStreamReader::vf0C(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 0xc) != *(int *)(param_1 + 0x10) + 1;
  return;
}

// 0144BB90  hkMemoryStreamReader::vf18  size=19  [run]
void __thiscall hkMemoryStreamReader::vf18(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 0x10) != 0;
  return;
}

// 0144BBB0  hkMemoryStreamReader::vf24  size=13  [run]
void hkMemoryStreamReader::vf24(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0144BBC0  hkMemoryStreamReader::hkMemoryStreamReader  size=114  [run]
undefined4 * __thiscall
hkMemoryStreamReader::hkMemoryStreamReader
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[3] = 0;
  param_1[4] = param_3;
  param_1[5] = 0xffffffff;
  param_1[6] = param_4;
  if (param_4 == 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    uVar2 = FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_3);
    param_1[2] = uVar2;
    FUN_01015e80(uVar2,param_2,param_3);
    return param_1;
  }
  param_1[2] = param_2;
  return param_1;
}

// 0144BC40  hkBaseObject::hkBaseObject_154  size=59  [run]
void __fastcall hkBaseObject::hkBaseObject_154(undefined4 *param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  *param_1 = hkMemoryStreamReader::vftable;
  if ((param_1[6] == 0) || (param_1[6] == 1)) {
    uVar1 = param_1[2];
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  }
  *param_1 = vftable;
  return;
}

// 0144BC80  FUN_0144bc80  size=38  [run]
void FUN_0144bc80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0144BCB0  hkMemoryStreamReader::vf00  size=52  [run]
int __thiscall hkMemoryStreamReader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_154();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0144BCF0  FUN_0144bcf0  size=198  [run]
undefined4 ******* FUN_0144bcf0(undefined4 *******param_1)

{
  undefined4 *******pppppppuVar1;
  undefined4 *******pppppppuVar2;
  undefined4 *******pppppppuVar3;
  undefined4 *******pppppppuVar4;
  int iVar5;
  int iVar6;
  undefined4 *******pppppppuVar7;
  undefined4 ******local_c;
  int local_8;
  
  pppppppuVar3 = param_1;
  if (param_1 == (undefined4 *******)0x0) {
    return (undefined4 *******)0x0;
  }
  param_1 = (undefined4 *******)0x1;
  do {
    local_8 = 0;
    local_c = (undefined4 *******)0x0;
    pppppppuVar1 = &local_c;
    iVar5 = local_8;
joined_r0x0144bd1b:
    if (pppppppuVar3 != (undefined4 *******)0x0) {
      local_8 = iVar5 + 1;
      iVar5 = 0;
      pppppppuVar2 = pppppppuVar3;
      iVar6 = (int)param_1;
      if (0 < (int)param_1) {
        do {
          if (pppppppuVar2 == (undefined4 *******)0x0) break;
          pppppppuVar2 = (undefined4 *******)*pppppppuVar2;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_1);
      }
      do {
        pppppppuVar7 = pppppppuVar2;
        if (iVar5 < 1) goto joined_r0x0144bd7d;
        if ((iVar6 < 1) || (pppppppuVar7 == (undefined4 *******)0x0)) goto joined_r0x0144bd68;
        if (pppppppuVar7 < pppppppuVar3) {
          pppppppuVar2 = (undefined4 *******)*pppppppuVar7;
          iVar6 = iVar6 + -1;
          pppppppuVar4 = pppppppuVar3;
        }
        else {
          iVar5 = iVar5 + -1;
          pppppppuVar2 = pppppppuVar7;
          pppppppuVar4 = (undefined4 *******)*pppppppuVar3;
          pppppppuVar7 = pppppppuVar3;
        }
        *pppppppuVar1 = pppppppuVar7;
        pppppppuVar3 = pppppppuVar4;
        pppppppuVar1 = pppppppuVar7;
      } while( true );
    }
    *pppppppuVar1 = (undefined4 ******)0x0;
    if (iVar5 < 2) {
      return (undefined4 *******)local_c;
    }
    param_1 = (undefined4 *******)((int)param_1 * 2);
    pppppppuVar3 = (undefined4 *******)local_c;
  } while( true );
joined_r0x0144bd68:
  for (; pppppppuVar2 = pppppppuVar3, 0 < iVar5; iVar5 = iVar5 + -1) {
    *pppppppuVar1 = pppppppuVar2;
    pppppppuVar3 = (undefined4 *******)*pppppppuVar2;
    pppppppuVar1 = pppppppuVar2;
  }
joined_r0x0144bd7d:
  while ((pppppppuVar3 = pppppppuVar7, iVar5 = local_8, 0 < iVar6 &&
         (pppppppuVar3 != (undefined4 *******)0x0))) {
    *pppppppuVar1 = pppppppuVar3;
    iVar6 = iVar6 + -1;
    pppppppuVar1 = pppppppuVar3;
    pppppppuVar7 = (undefined4 *******)*pppppppuVar3;
  }
  goto joined_r0x0144bd1b;
}

// 0144BDD0  FUN_0144bdd0  size=30  [run]
undefined4 __thiscall FUN_0144bdd0(float *param_1,float *param_2)

{
  if (*param_1 <= *param_2 && *param_2 != *param_1) {
    return 1;
  }
  return 0;
}

// 0144BE00  FUN_0144be00  size=44  [run]
void FUN_0144be00(undefined1 *param_1,int *param_2)

{
  if (((*param_2 != param_2[1]) && (*param_2 != param_2[2])) && (param_2[1] != param_2[2])) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}

// 0144BE80  FUN_0144be80  size=64  [run]
undefined8 FUN_0144be80(uint *param_1)

{
  return CONCAT44(((*param_1 & 0x1fffff) >> 0xb) << 0x15 |
                  (*param_1 << 0x15 | param_1[1] & 0x1fffff) >> 0xb,
                  param_1[2] & 0x1fffff | param_1[1] << 0x15);
}

// 0144BF50  FUN_0144bf50  size=10  [run]
void FUN_0144bf50(void)

{
  return;
}

// 0144BFD0  FUN_0144bfd0  size=23  [run]
void FUN_0144bfd0(void)

{
  return;
}

// 0144BFF0  FUN_0144bff0  size=91  [run]
undefined4 __thiscall FUN_0144bff0(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  
  *param_3 = 0xffffffff;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = *(int **)(param_1 + 4);
    do {
      if (((*param_2 == *piVar1) && (param_2[1] == piVar1[1])) && (param_2[2] == piVar1[2])) {
        *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2 * 4);
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 6;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}

// 0144C050  FUN_0144c050  size=93  [run]
undefined4 __thiscall FUN_0144c050(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  
  *param_3 = 0xffffffff;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x10);
    do {
      if (((*(int *)(param_2 + 0xc) == piVar1[-1]) && (*(int *)(param_2 + 0x10) == *piVar1)) &&
         (*(int *)(param_2 + 0x14) == piVar1[1])) {
        *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2 * 4);
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 6;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}

// 0144C0B0  FUN_0144c0b0  size=54  [run]
int * __thiscall FUN_0144c0b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar2 = *(int **)(param_1 + 4);
    do {
      if (*piVar2 == param_2) {
        return *(int **)(param_1 + 4) + iVar1 * 10;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 10;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return (int *)0x0;
}

// 0144C120  FUN_0144c120  size=224  [run]
void __thiscall FUN_0144c120(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined1 local_210 [524];
  
  puVar1 = (undefined4 *)(param_1[1] + param_2 * 0x28);
  if ((*(char *)(param_1[1] + 0x25 + param_2 * 0x28) != '\0') && (1 < (int)puVar1[2])) {
    hkErrStream::hkErrStream(local_210,0x200);
    uVar8 = ((undefined4 *)puVar1[4])[1];
    uVar6 = *(undefined4 *)puVar1[4];
    uVar4 = *param_1;
    puVar9 = &DAT_01656d18;
    uVar2 = *puVar1;
    puVar7 = &DAT_0182c00c;
    pcVar5 = ") has inconsistent winding in triangles ";
    puVar3 = &DAT_01701288;
    FUN_01018d00("Edge (");
    FUN_01018e10(uVar2);
    FUN_01018d00(puVar3);
    FUN_01018e10(uVar4);
    FUN_01018d00(pcVar5);
    FUN_01018e10(uVar6);
    FUN_01018d00(puVar7);
    FUN_01018e10(uVar8);
    FUN_01018d00(puVar9);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabba1daf,local_210,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\GeometryUtilities\\Misc\\hkGeometryUtils.cpp"
               ,0xa7);
    hkBaseObject::hkBaseObject_38();
  }
  return;
}

// 0144C200  FUN_0144c200  size=83  [run]
void __thiscall
FUN_0144c200(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  *param_1 = param_2;
  param_1[3] = param_2;
  param_1[1] = param_3;
  param_1[4] = param_3;
  param_1[2] = param_4;
  param_1[5] = param_4;
  uVar1 = param_1[4];
  if (uVar1 < (uint)param_1[3]) {
    param_1[4] = param_1[3];
    param_1[3] = uVar1;
  }
  uVar1 = param_1[5];
  if (uVar1 < (uint)param_1[4]) {
    param_1[5] = param_1[4];
    param_1[4] = uVar1;
  }
  uVar1 = param_1[4];
  if (uVar1 < (uint)param_1[3]) {
    param_1[4] = param_1[3];
    param_1[3] = uVar1;
  }
  return;
}

// 0144C260  FUN_0144c260  size=72  [run]
void FUN_0144c260(void)

{
  return;
}

// 0144C2B0  FUN_0144c2b0  size=143  [run]
float10 FUN_0144c2b0(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float local_8;
  
  fVar7 = 0.0;
  iVar6 = param_1[4];
  local_8 = 0.0;
  if (0 < iVar6) {
    piVar5 = (int *)param_1[3];
    iVar4 = *param_1;
    do {
      pfVar1 = (float *)(iVar4 + piVar5[2] * 0x10);
      pfVar2 = (float *)(iVar4 + piVar5[1] * 0x10);
      pfVar3 = (float *)(iVar4 + *piVar5 * 0x10);
      piVar5 = piVar5 + 4;
      iVar6 = iVar6 + -1;
      fVar7 = fVar7 + (*pfVar2 * pfVar1[1] - pfVar2[1] * *pfVar1) * pfVar3[2] +
                      (pfVar2[2] * *pfVar1 - *pfVar2 * pfVar1[2]) * pfVar3[1] +
                      (pfVar2[1] * pfVar1[2] - pfVar2[2] * pfVar1[1]) * *pfVar3;
      local_8 = fVar7;
    } while (iVar6 != 0);
  }
  return (float10)local_8 * (float10)0.16666667;
}

// 0144C340  FUN_0144c340  size=82  [run]
void FUN_0144c340(float *param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  
  iVar18 = 0;
  if (0 < param_2[1]) {
    iVar17 = 0;
    do {
      pfVar1 = (float *)(*param_2 + iVar17);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = param_1[1];
      fVar6 = param_1[2];
      fVar7 = param_1[3];
      fVar8 = param_1[0xd];
      fVar9 = param_1[0xe];
      fVar10 = param_1[0xf];
      fVar11 = param_1[5];
      fVar12 = param_1[6];
      fVar13 = param_1[7];
      fVar14 = param_1[9];
      fVar15 = param_1[10];
      fVar16 = param_1[0xb];
      pfVar1 = (float *)(*param_2 + iVar17);
      *pfVar1 = fVar2 * *param_1 + param_1[0xc] + fVar3 * param_1[4] + fVar4 * param_1[8];
      pfVar1[1] = fVar2 * fVar5 + fVar8 + fVar3 * fVar11 + fVar4 * fVar14;
      pfVar1[2] = fVar2 * fVar6 + fVar9 + fVar3 * fVar12 + fVar4 * fVar15;
      pfVar1[3] = fVar2 * fVar7 + fVar10 + fVar3 * fVar13 + fVar4 * fVar16;
      iVar18 = iVar18 + 1;
      iVar17 = iVar17 + 0x10;
    } while (iVar18 < param_2[1]);
  }
  return;
}

// 0144C4F0  FUN_0144c4f0  size=372  [run]
undefined4 * __thiscall FUN_0144c4f0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  
  *param_1 = *param_2;
  iVar6 = param_2[2];
  iVar9 = param_1[2];
  if (iVar6 <= (int)param_1[2]) {
    iVar9 = iVar6;
  }
  if ((int)(param_1[3] & 0x3fffffff) < iVar6) {
    iVar8 = (param_1[3] & 0x3fffffff) * 2;
    iVar5 = iVar6;
    if (iVar6 < iVar8) {
      iVar5 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 1,iVar5,0x18);
  }
  puVar2 = param_2;
  puVar7 = (undefined8 *)param_1[1];
  if (0 < iVar9) {
    iVar5 = param_2[1] - (int)puVar7;
    iVar8 = iVar9;
    do {
      *puVar7 = *(undefined8 *)(iVar5 + (int)puVar7);
      puVar7[1] = *(undefined8 *)(iVar5 + 8 + (int)puVar7);
      puVar7[2] = *(undefined8 *)(iVar5 + 0x10 + (int)puVar7);
      puVar7 = puVar7 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = iVar6 - iVar9;
  puVar7 = (undefined8 *)(param_1[1] + iVar9 * 0x18);
  if (0 < iVar8) {
    iVar9 = (param_2[1] + iVar9 * 0x18) - (int)puVar7;
    do {
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = *(undefined8 *)(iVar9 + (int)puVar7);
        puVar7[1] = *(undefined8 *)(iVar9 + 8 + (int)puVar7);
        puVar7[2] = *(undefined8 *)(iVar9 + 0x10 + (int)puVar7);
      }
      puVar7 = puVar7 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  param_1[2] = iVar6;
  uVar1 = param_1[6];
  if ((int)(uVar1 & 0x3fffffff) < (int)param_2[5]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],uVar1 * 4);
    }
    param_2 = (undefined4 *)(puVar2[5] * 4);
    uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    param_1[4] = uVar3;
    param_1[6] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar6 = puVar2[5];
  puVar4 = (undefined4 *)param_1[4];
  param_1[5] = iVar6;
  if (0 < iVar6) {
    iVar9 = puVar2[4] - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar9 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_1[7] = puVar2[7];
  param_1[8] = puVar2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar2 + 9);
  *(undefined1 *)((int)param_1 + 0x25) = *(undefined1 *)((int)puVar2 + 0x25);
  *(undefined1 *)((int)param_1 + 0x26) = *(undefined1 *)((int)puVar2 + 0x26);
  return param_1;
}

// 0144C670  FUN_0144c670  size=801  [run]
void FUN_0144c670(int *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,float param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_70;
  float afStack_6c [6];
  float fStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = param_1[1];
  if ((int)(param_3[2] & 0x3fffffffU) < local_14) {
    iVar6 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar6 <= local_14) {
      iVar6 = local_14;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar6,4);
  }
  fVar9 = param_7 * 0.5;
  param_3[1] = local_14;
  iVar8 = 0;
  iVar6 = 0;
  local_50 = CONCAT44(fVar9,fVar9);
  uStack_48 = CONCAT44(fVar9,fVar9);
  param_4[1] = local_14 + 4;
  if (0 < local_14) {
    local_18 = 0;
    afStack_6c[4] = fVar9;
    afStack_6c[5] = fVar9;
    fStack_54 = fVar9;
    while( true ) {
      pfVar4 = (float *)(*param_1 + iVar8);
      local_70 = *pfVar4 - fVar9;
      afStack_6c[0] = pfVar4[1] - afStack_6c[4];
      afStack_6c[1] = pfVar4[2] - afStack_6c[5];
      afStack_6c[2] = pfVar4[3] - fStack_54;
      pfVar4 = (float *)(*param_1 + iVar8);
      afStack_6c[3] = *pfVar4 + fVar9;
      afStack_6c[4] = pfVar4[1] + afStack_6c[4];
      afStack_6c[5] = pfVar4[2] + afStack_6c[5];
      fStack_54 = pfVar4[3] + fStack_54;
      FUN_01448770(&local_70,iVar6);
      local_18 = local_18 + 0x20;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
      if (local_14 <= iVar6) break;
      fVar9 = (float)local_50;
      afStack_6c[4] = local_50._4_4_;
      afStack_6c[5] = (float)uStack_48;
      fStack_54 = uStack_48._4_4_;
    }
  }
  iVar6 = local_14;
  iVar8 = local_14 * 0x20 + *param_4;
  pfVar4 = &local_70;
  local_24 = (int)pfVar4 - iVar8;
  local_70 = -NAN;
  iVar7 = 2;
  puVar2 = (undefined4 *)(iVar8 + 8);
  local_20 = (int)afStack_6c - iVar8;
  do {
    puVar2[-2] = *pfVar4;
    puVar2[-1] = pfVar4[1];
    *puVar2 = *(undefined4 *)(local_24 + (int)puVar2);
    puVar2[1] = *(undefined4 *)(((int)afStack_6c - iVar8) + (int)puVar2);
    iVar7 = iVar7 + -1;
    pfVar4 = pfVar4 + 4;
    puVar2 = puVar2 + 4;
  } while (0 < iVar7);
  iVar7 = 2;
  pfVar4 = afStack_6c + 1;
  pfVar5 = (float *)(iVar8 + 0x28);
  do {
    pfVar5[-2] = pfVar4[-2];
    pfVar5[-1] = pfVar4[-1];
    *pfVar5 = *pfVar4;
    pfVar5[1] = pfVar4[1];
    iVar7 = iVar7 + -1;
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + 4;
  } while (0 < iVar7);
  iVar7 = 2;
  pfVar4 = afStack_6c + 1;
  pfVar5 = (float *)(iVar8 + 0x48);
  do {
    pfVar5[-2] = pfVar4[-2];
    pfVar5[-1] = pfVar4[-1];
    *pfVar5 = *pfVar4;
    pfVar5[1] = pfVar4[1];
    iVar7 = iVar7 + -1;
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + 4;
  } while (0 < iVar7);
  iVar7 = 2;
  pfVar4 = afStack_6c + 1;
  pfVar5 = (float *)(iVar8 + 0x68);
  do {
    pfVar5[-2] = pfVar4[-2];
    pfVar5[-1] = pfVar4[-1];
    *pfVar5 = *pfVar4;
    pfVar5[1] = pfVar4[1];
    iVar7 = iVar7 + -1;
    pfVar4 = pfVar4 + 4;
    pfVar5 = pfVar5 + 4;
  } while (0 < iVar7);
  FUN_014487e0(*param_4,local_14,param_5,param_6);
  param_7 = param_7 * param_7;
  if (0 < iVar6) {
    local_18 = 0;
    local_1c = 1;
    local_24 = iVar6;
    afStack_6c[3] = param_7;
    afStack_6c[4] = param_7;
    afStack_6c[5] = param_7;
    fStack_54 = param_7;
    do {
      local_28 = *(int *)(local_18 + 0xc + *param_4);
      if (local_28 != -1) {
        puVar3 = (undefined8 *)(local_28 * 0x10 + *param_1);
        local_40 = *puVar3;
        uStack_38 = puVar3[1];
        *(int *)(*param_3 + local_28 * 4) = param_2[1];
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_2,0x10);
          param_7 = afStack_6c[3];
        }
        pfVar4 = (float *)(param_2[1] * 0x10 + *param_2);
        *pfVar4 = (float)local_40;
        pfVar4[1] = local_40._4_4_;
        pfVar4[2] = (float)uStack_38;
        pfVar4[3] = uStack_38._4_4_;
        param_2[1] = param_2[1] + 1;
        local_20 = local_1c;
        iVar8 = local_18;
        if (local_1c < iVar6) {
          do {
            iVar7 = *param_4;
            iVar6 = local_14;
            if (*(uint *)(local_18 + 0x10 + iVar7) < *(uint *)(iVar8 + 0x20 + iVar7)) break;
            iVar7 = *(int *)(iVar8 + 0x2c + iVar7);
            if (iVar7 != -1) {
              puVar3 = (undefined8 *)(iVar7 * 0x10 + *param_1);
              uVar1 = *puVar3;
              uStack_48 = puVar3[1];
              local_50._0_4_ = (float)uVar1;
              local_50._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              fVar9 = (float)local_40 - (float)local_50;
              fVar10 = local_40._4_4_ - local_50._4_4_;
              local_50 = uVar1;
              if (((float)uStack_38 - (float)uStack_48) * ((float)uStack_38 - (float)uStack_48) +
                  fVar10 * fVar10 + fVar9 * fVar9 <= param_7) {
                *(undefined4 *)(*param_3 + iVar7 * 4) = *(undefined4 *)(*param_3 + local_28 * 4);
                *(undefined4 *)(iVar8 + 0x2c + *param_4) = 0xffffffff;
              }
            }
            local_20 = local_20 + 1;
            iVar8 = iVar8 + 0x20;
          } while (local_20 < local_14);
        }
      }
      local_18 = local_18 + 0x20;
      local_1c = local_1c + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}

// 0144C9A0  FUN_0144c9a0  size=893  [run]
undefined4 FUN_0144c9a0(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint local_44;
  undefined8 local_3c;
  undefined8 local_34;
  uint local_2c;
  uint local_24;
  int local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar8 = param_1;
  local_44 = *(uint *)(param_1 + 0x10);
  iVar11 = 0;
  local_10 = local_44;
  if (local_44 == 0) {
    local_8 = 0;
  }
  else {
    local_20 = local_44 << 4;
    local_8 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_20);
    local_1c = (int)(local_20 + (local_20 >> 0x1f & 0xfU)) >> 4;
    if (local_1c != 0) goto LAB_0144c9f9;
  }
  local_1c = -0x80000000;
LAB_0144c9f9:
  if (local_8 == 0) {
    if (-1 < local_1c) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(0,local_1c << 4);
    }
    return 1;
  }
  local_14 = local_44;
  if (0 < *(int *)(iVar8 + 0x10)) {
    iVar10 = 0;
    do {
      uVar13 = *(undefined8 *)(*(int *)(iVar8 + 0xc) + iVar10);
      local_34 = *(undefined8 *)(*(int *)(iVar8 + 0xc) + 8 + iVar10);
      local_3c._0_4_ = (int)uVar13;
      iVar9 = (int)local_3c;
      local_3c._4_4_ = (int)((ulonglong)uVar13 >> 0x20);
      iVar6 = local_3c._4_4_;
      iVar2 = (int)local_3c;
      if (local_3c._4_4_ < (int)local_3c) {
        local_3c = CONCAT44((int)local_3c,local_3c._4_4_);
        iVar2 = iVar6;
        iVar6 = iVar9;
        uVar13 = local_3c;
      }
      local_3c = uVar13;
      iVar9 = (int)local_34;
      if ((int)local_34 < iVar2) {
        local_3c = CONCAT44(local_3c._4_4_,(int)local_34);
        local_34._4_4_ = (undefined4)((ulonglong)local_34 >> 0x20);
        local_34 = CONCAT44(local_34._4_4_,iVar2);
        iVar9 = iVar2;
      }
      if (iVar9 < iVar6) {
        local_3c = CONCAT44(iVar9,(int)local_3c);
        local_34 = CONCAT44(local_34._4_4_,iVar6);
      }
      uVar13 = FUN_0144be80(&local_3c);
      *(int *)(iVar10 + 8 + local_8) = iVar11;
      *(int *)(iVar10 + local_8) = (int)uVar13;
      *(int *)(iVar10 + 4 + local_8) = (int)((ulonglong)uVar13 >> 0x20);
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x10;
      local_14 = local_10;
    } while (iVar11 < *(int *)(iVar8 + 0x10));
  }
  local_24 = local_24 & 0xffffff00;
  if (1 < (int)local_14) {
    FUN_014503e0(local_8,0,local_14 - 1,local_24);
  }
  local_14 = local_14 - 1;
  if (0 < (int)local_14) {
    local_18 = (int *)(local_14 * 0x10 + local_8);
    local_10 = local_10 * 0x10 + local_8;
    do {
      local_34 = *(undefined8 *)local_18;
      local_2c = local_14 - 1;
      local_24 = 0xffffffff;
      piVar3 = local_18;
      local_c = local_2c;
      if (0 < (int)local_14) {
        do {
          if ((*local_18 != piVar3[-4]) || (local_18[1] != piVar3[-3])) break;
          iVar8 = *(int *)(param_1 + 0xc);
          iVar11 = *(int *)(piVar3[-2] * 0x10 + iVar8);
          iVar10 = piVar3[-2] * 0x10 + iVar8;
          piVar7 = (int *)(local_18[2] * 0x10 + iVar8);
          iVar8 = *piVar7;
          if ((iVar8 == iVar11) &&
             ((piVar7[1] == *(int *)(iVar10 + 4) && (piVar7[2] == *(int *)(iVar10 + 8))))) {
LAB_0144cb74:
            local_24 = local_c;
          }
          else {
            iVar9 = *(int *)(iVar10 + 4);
            if (iVar8 == iVar9) {
              if ((piVar7[1] == *(int *)(iVar10 + 8)) && (piVar7[2] == iVar11)) goto LAB_0144cb74;
              iVar9 = *(int *)(iVar10 + 4);
            }
            if (((iVar8 == *(int *)(iVar10 + 8)) && (piVar7[1] == iVar11)) && (piVar7[2] == iVar9))
            goto LAB_0144cb74;
          }
          local_c = local_c - 1;
          piVar3 = piVar3 + -4;
        } while (-1 < (int)local_c);
        iVar8 = param_1;
        if (local_24 != 0xffffffff) {
          local_10 = local_10 - 0x10;
          local_44 = local_44 - 1;
          if (local_44 != local_14) {
            iVar11 = 2;
            piVar3 = local_18;
            do {
              *piVar3 = *(int *)((local_10 - (int)local_18) + (int)piVar3);
              piVar3[1] = *(int *)((local_10 - (int)local_18) + 4 + (int)piVar3);
              piVar3 = piVar3 + 2;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
      }
      local_18 = local_18 + -4;
      local_14 = local_2c;
    } while (0 < (int)local_2c);
  }
  local_2c = local_2c & 0xffffff00;
  if (1 < (int)local_44) {
    FUN_01450510(local_8,0,local_44 - 1,local_2c);
  }
  piVar3 = param_2;
  param_2[1] = 0;
  if (0 < (int)local_44) {
    piVar7 = (int *)(local_8 + 8);
    local_24 = local_44;
    do {
      puVar12 = (undefined8 *)(*piVar7 * 0x10 + *(int *)(param_1 + 0xc));
      if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar3,0x10);
      }
      puVar4 = (undefined8 *)(piVar3[1] * 0x10 + *piVar3);
      piVar7 = piVar7 + 4;
      *puVar4 = *puVar12;
      puVar4[1] = puVar12[1];
      piVar3[1] = piVar3[1] + 1;
      local_24 = local_24 - 1;
    } while (local_24 != 0);
    local_24 = 0;
    iVar8 = param_1;
  }
  uVar1 = *(uint *)(iVar8 + 0x14);
  if ((int)(uVar1 & 0x3fffffff) < piVar3[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*(undefined4 *)(iVar8 + 0xc),uVar1 << 4);
    }
    param_1 = piVar3[1] << 4;
    uVar5 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_1);
    *(undefined4 *)(iVar8 + 0xc) = uVar5;
    *(int *)(iVar8 + 0x14) = (int)(param_1 + (param_1 >> 0x1f & 0xfU)) >> 4;
  }
  iVar11 = piVar3[1];
  puVar12 = *(undefined8 **)(iVar8 + 0xc);
  *(int *)(iVar8 + 0x10) = iVar11;
  if (0 < iVar11) {
    iVar8 = *piVar3 - (int)puVar12;
    do {
      *puVar12 = *(undefined8 *)(iVar8 + (int)puVar12);
      puVar12[1] = *(undefined8 *)(iVar8 + 8 + (int)puVar12);
      puVar12 = puVar12 + 2;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (-1 < local_1c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_8,local_1c << 4);
  }
  return 0;
}

// 0144CD30  FUN_0144cd30  size=164  [run]
void FUN_0144cd30(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_2 + 4);
  FUN_01023d50(&PTR_vftable_018e9b94,*param_1,param_1[1]);
  iVar7 = param_1[4];
  iVar2 = *(int *)(param_2 + 0x10);
  iVar8 = iVar2 + iVar7;
  uVar4 = *(uint *)(param_2 + 0x14) & 0x3fffffff;
  if ((int)uVar4 < iVar8) {
    iVar3 = uVar4 * 2;
    if (iVar8 < iVar3) {
      iVar8 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_2 + 0xc),iVar8,0x10);
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + iVar7;
  iVar7 = iVar2 * 0x10 + *(int *)(param_2 + 0xc);
  iVar8 = param_1[4];
  if (0 < iVar8) {
    piVar5 = (int *)(iVar7 + 8);
    do {
      puVar6 = (undefined8 *)((int)piVar5 + param_1[3] + (-8 - iVar7));
      *(undefined8 *)(piVar5 + -2) = *puVar6;
      *(undefined8 *)piVar5 = puVar6[1];
      piVar5[-2] = piVar5[-2] + iVar1;
      piVar5[-1] = piVar5[-1] + iVar1;
      *piVar5 = *piVar5 + iVar1;
      iVar8 = iVar8 + -1;
      piVar5 = piVar5 + 4;
    } while (iVar8 != 0);
  }
  return;
}

// 0144D060  FUN_0144d060  size=192  [run]
undefined4 * __thiscall
FUN_0144d060(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  if (param_1[2] == (param_1[3] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 1,0x18);
  }
  puVar1 = (undefined8 *)(param_1[1] + param_1[2] * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
  }
  param_1[2] = param_1[2] + 1;
  if (param_1[5] == (param_1[6] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 4,4);
  }
  *(undefined4 *)(param_1[4] + param_1[5] * 4) = param_4;
  param_1[5] = param_1[5] + 1;
  return param_1;
}

// 0144D120  FUN_0144d120  size=419  [run]
undefined4 * __thiscall FUN_0144d120(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  int local_8;
  
  puVar9 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  piVar1 = param_1 + 1;
  param_1[3] = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  *param_1 = *param_2;
  iVar6 = param_2[2];
  local_8 = param_1[2];
  if (iVar6 <= (int)param_1[2]) {
    local_8 = iVar6;
  }
  if ((int)(param_1[3] & 0x3fffffff) < iVar6) {
    iVar7 = (param_1[3] & 0x3fffffff) * 2;
    iVar5 = iVar6;
    if (iVar6 < iVar7) {
      iVar5 = iVar7;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar5,0x18);
  }
  puVar8 = (undefined8 *)*piVar1;
  if (0 < local_8) {
    iVar5 = puVar9[1] - (int)puVar8;
    iVar7 = local_8;
    do {
      *puVar8 = *(undefined8 *)(iVar5 + (int)puVar8);
      puVar8[1] = *(undefined8 *)(iVar5 + 8 + (int)puVar8);
      puVar8[2] = *(undefined8 *)(iVar5 + 0x10 + (int)puVar8);
      puVar8 = puVar8 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = iVar6 - local_8;
  puVar8 = (undefined8 *)(*piVar1 + local_8 * 0x18);
  if (0 < iVar7) {
    iVar5 = (puVar9[1] + local_8 * 0x18) - (int)puVar8;
    do {
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = *(undefined8 *)(iVar5 + (int)puVar8);
        puVar8[1] = *(undefined8 *)(iVar5 + 8 + (int)puVar8);
        puVar8[2] = *(undefined8 *)(iVar5 + 0x10 + (int)puVar8);
      }
      puVar8 = puVar8 + 3;
      iVar7 = iVar7 + -1;
      puVar9 = param_2;
    } while (iVar7 != 0);
  }
  param_1[2] = iVar6;
  uVar2 = param_1[6];
  if ((int)(uVar2 & 0x3fffffff) < (int)puVar9[5]) {
    if (-1 < (int)uVar2) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],uVar2 * 4);
    }
    param_2 = (undefined4 *)(puVar9[5] * 4);
    uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    param_1[4] = uVar3;
    param_1[6] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar6 = puVar9[5];
  puVar4 = (undefined4 *)param_1[4];
  param_1[5] = iVar6;
  if (0 < iVar6) {
    iVar7 = puVar9[4] - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar7 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_1[7] = puVar9[7];
  param_1[8] = puVar9[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar9 + 9);
  *(undefined1 *)((int)param_1 + 0x25) = *(undefined1 *)((int)puVar9 + 0x25);
  *(undefined1 *)((int)param_1 + 0x26) = *(undefined1 *)((int)puVar9 + 0x26);
  return param_1;
}

// 0144D2D0  FUN_0144d2d0  size=528  [run]
int FUN_0144d2d0(int *param_1,int *param_2,float param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  uVar2 = (**(code **)(*param_1 + 4))();
  local_1c = uVar2;
  if (uVar2 == 0) {
    local_14 = 0;
  }
  else {
    local_20 = uVar2 * 8;
    local_14 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_20);
    local_30 = (int)(local_20 + (local_20 >> 0x1f & 7U)) >> 3;
    if (local_30 != 0) goto LAB_0144d34e;
  }
  local_30 = -0x80000000;
LAB_0144d34e:
  local_18 = 0;
  if ((int)(param_2[2] & 0x3fffffffU) < (int)uVar2) {
    uVar3 = (param_2[2] & 0x3fffffffU) * 2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar3 = uVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,uVar3,4);
  }
  param_2[1] = uVar2;
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      (**(code **)(*param_1 + 8))(iVar4,&local_40);
      *(int *)(local_14 + 4 + iVar4 * 8) = iVar4;
      *(float *)(local_14 + iVar4 * 8) = local_40;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  local_2c = local_2c & 0xffffff00;
  if (1 < (int)uVar2) {
    FUN_01450ea0(local_14,0,uVar2 - 1,local_2c);
  }
  if (0 < (int)uVar2) {
    local_28 = 1;
    piVar7 = (int *)(local_14 + 4);
    local_2c = local_1c;
    do {
      iVar6 = local_28;
      iVar4 = *piVar7;
      if (-1 < iVar4) {
        *(int *)(*param_2 + iVar4 * 4) = iVar4;
        (**(code **)(*param_1 + 8))(*piVar7,&local_40);
        piVar1 = piVar7;
        local_24 = iVar6;
        if (iVar6 < (int)local_1c) {
          do {
            piVar5 = piVar1 + 2;
            if (-1 < *piVar5) {
              iVar6 = local_28;
              if (param_3 < (float)piVar1[1] - (float)piVar7[-1]) break;
              (**(code **)(*param_1 + 8))(*piVar5,&local_50);
              if ((fStack_3c - fStack_4c) * (fStack_3c - fStack_4c) +
                  (local_40 - local_50) * (local_40 - local_50) +
                  (fStack_38 - fStack_48) * (fStack_38 - fStack_48) <= param_3 * param_3) {
                *(int *)(*param_2 + *piVar5 * 4) = *piVar7;
                *piVar5 = -1;
              }
            }
            local_24 = local_24 + 1;
            iVar6 = local_28;
            piVar1 = piVar5;
          } while (local_24 < (int)local_1c);
        }
        local_18 = local_18 + 1;
        *piVar7 = -1;
      }
      local_28 = iVar6 + 1;
      piVar7 = piVar7 + 2;
      local_2c = local_2c - 1;
    } while (local_2c != 0);
  }
  if (-1 < local_30) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_30 * 8);
  }
  return local_18;
}

// 0144D4E0  FUN_0144d4e0  size=978  [run]
void FUN_0144d4e0(int *param_1,undefined4 param_2,char param_3,int *param_4,int *param_5,
                 int *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  int *piVar13;
  int local_2c;
  uint local_28;
  int local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined8 *local_10;
  int *local_c;
  int local_8;
  
  piVar13 = param_1;
  local_8 = param_1[4];
  iVar9 = param_1[1];
  if ((int)(param_4[2] & 0x3fffffffU) < iVar9) {
    iVar11 = (param_4[2] & 0x3fffffffU) * 2;
    if (iVar11 <= iVar9) {
      iVar11 = iVar9;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar11,4);
  }
  piVar4 = param_6;
  param_4[1] = iVar9;
  FUN_0144c670(piVar13,param_6,param_4,param_7,param_8,param_9,param_2);
  if (param_3 == '\0') {
    uVar10 = piVar13[2];
    if ((int)(uVar10 & 0x3fffffff) < piVar4[1]) {
      if (-1 < (int)uVar10) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*piVar13,uVar10 << 4);
      }
      param_1 = (int *)(piVar4[1] << 4);
      iVar9 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_1);
      *piVar13 = iVar9;
      piVar13[2] = (int)((int)param_1 + ((int)param_1 >> 0x1f & 0xfU)) >> 4;
    }
    iVar9 = piVar4[1];
    puVar6 = (undefined4 *)*piVar13;
    piVar13[1] = iVar9;
    if (0 < iVar9) {
      iVar11 = *piVar4 - (int)puVar6;
      do {
        puVar7 = (undefined4 *)(iVar11 + (int)puVar6);
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        puVar6 = puVar6 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    uVar10 = piVar4[1];
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
    local_18 = 0x80000000;
    local_2c = 0;
    local_28 = 0;
    local_24 = -0x80000000;
    uVar5 = 0;
    if (0 < (int)uVar10) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_2c,((int)uVar10 < 0) - 1 & uVar10,4);
      uVar5 = local_28;
    }
    iVar9 = uVar10 - uVar5;
    puVar6 = (undefined4 *)(local_2c + uVar5 * 4);
    if (0 < iVar9) {
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
    }
    local_c = (int *)0x0;
    piVar13 = param_4;
    local_28 = uVar10;
    if (0 < param_4[1]) {
      do {
        uVar5 = local_1c;
        iVar9 = *(int *)(*piVar13 + (int)local_c * 4);
        uVar10 = *(uint *)(local_2c + iVar9 * 4);
        if (uVar10 == 0xffffffff) {
          *(uint *)(local_2c + iVar9 * 4) = local_1c;
          puVar6 = (undefined4 *)(iVar9 * 0x10 + *param_6);
          if (local_1c == (local_18 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_20,0x10);
          }
          uVar1 = puVar6[1];
          uVar2 = puVar6[2];
          uVar3 = puVar6[3];
          puVar7 = local_20 + local_1c * 4;
          *puVar7 = *puVar6;
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          local_1c = local_1c + 1;
          uVar10 = uVar5;
          piVar13 = param_4;
        }
        *(uint *)(*piVar13 + (int)local_c * 4) = uVar10;
        local_c = (int *)((int)local_c + 1);
      } while ((int)local_c < piVar13[1]);
    }
    piVar13 = param_1;
    uVar10 = param_1[2];
    if ((int)(uVar10 & 0x3fffffff) < (int)local_1c) {
      if (-1 < (int)uVar10) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar10 << 4);
      }
      local_10 = (undefined8 *)(local_1c << 4);
      iVar9 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_10);
      *piVar13 = iVar9;
      piVar13[2] = (int)((int)local_10 + ((int)local_10 >> 0x1f & 0xfU)) >> 4;
    }
    piVar13[1] = local_1c;
    puVar6 = (undefined4 *)*piVar13;
    puVar7 = local_20;
    uVar10 = local_1c;
    if (0 < (int)local_1c) {
      do {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        puVar6 = puVar6 + 4;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 4;
      } while (uVar10 != 0);
    }
    local_28 = 0;
    if (-1 < local_24) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 * 4);
    }
    local_2c = 0;
    local_24 = 0x80000000;
    local_1c = 0;
    piVar13 = param_1;
    if (-1 < (int)local_18) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
      piVar13 = param_1;
    }
  }
  piVar4 = param_5;
  if (0 < local_8) {
    iVar9 = 0;
    param_1 = (int *)local_8;
    do {
      puVar6 = (undefined4 *)(piVar13[3] + iVar9);
      *puVar6 = *(undefined4 *)(*param_4 + *(int *)(piVar13[3] + iVar9) * 4);
      puVar6[1] = *(undefined4 *)(*param_4 + puVar6[1] * 4);
      iVar9 = iVar9 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      puVar6[2] = *(undefined4 *)(*param_4 + puVar6[2] * 4);
    } while (param_1 != (int *)0x0);
    param_1 = (int *)0x0;
  }
  if ((int)(param_5[2] & 0x3fffffffU) < local_8) {
    iVar9 = (param_5[2] & 0x3fffffffU) * 2;
    iVar11 = local_8;
    if (local_8 < iVar9) {
      iVar11 = iVar9;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_5,iVar11,4);
  }
  piVar4[1] = local_8;
  local_10 = (undefined8 *)piVar13[3];
  local_c = piVar13 + 3;
  local_14 = 0;
  if (0 < local_8) {
    param_1 = (int *)0x0;
    do {
      puVar12 = (undefined8 *)(*local_c + (int)param_1);
      iVar9 = -1;
      pcVar8 = (char *)FUN_0144be00((int)&param_4 + 3,puVar12);
      if (*pcVar8 == '\0') {
        iVar9 = *local_c;
        *local_10 = *puVar12;
        iVar9 = (int)local_10 - iVar9 >> 4;
        local_10[1] = puVar12[1];
        local_10 = local_10 + 2;
      }
      param_1 = param_1 + 4;
      *(int *)(*param_5 + local_14 * 4) = iVar9;
      local_14 = local_14 + 1;
    } while (local_14 < local_8);
  }
  piVar13 = local_c;
  iVar9 = (int)local_10 - *local_c >> 4;
  if ((int)(local_c[2] & 0x3fffffffU) < iVar9) {
    iVar11 = (local_c[2] & 0x3fffffffU) * 2;
    if (iVar11 <= iVar9) {
      iVar11 = iVar9;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_c,iVar11,0x10);
  }
  piVar13[1] = iVar9;
  return;
}

// 0144F170  FUN_0144f170  size=637  [run]
void FUN_0144f170(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStackY_100 [132];
  undefined4 local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  iVar1 = param_1;
  iVar2 = *(int *)(param_1 + 4) + 4;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x80000000;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x80000000;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x80000000;
  if (iVar2 == 0) {
    local_4c = 0;
LAB_0144f1df:
    local_44 = 0x80000000;
  }
  else {
    param_1 = iVar2 * 0x20;
    local_4c = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_1);
    local_44 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
    if (local_44 == 0) goto LAB_0144f1df;
  }
  iVar3 = *(int *)(iVar1 + 4) + 4;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  local_48 = iVar2;
  if (iVar3 == 0) {
    local_1c = 0;
LAB_0144f232:
    local_14 = 0x80000000;
  }
  else {
    param_1 = iVar3 * 8;
    local_1c = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_1);
    local_14 = (int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3;
    if (local_14 == 0) goto LAB_0144f232;
  }
  iVar2 = *(int *)(iVar1 + 4) + 4;
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  local_18 = iVar3;
  if (iVar2 == 0) {
    local_10 = 0;
  }
  else {
    param_1 = iVar2 * 0x20;
    local_10 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_1);
    local_8 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
    if (local_8 != 0) goto LAB_0144f28e;
  }
  local_8 = 0x80000000;
LAB_0144f28e:
  local_c = iVar2;
  FUN_0144d4e0(iVar1,param_2,auStackY_100,&local_40,&local_34,&local_28,&local_4c,&local_1c,
               &local_10);
  local_c = 0;
  if ((local_8 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 << 5);
  }
  local_10 = 0;
  local_8 = 0x80000000;
  local_18 = 0;
  if ((local_14 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 8);
  }
  local_1c = 0;
  local_14 = 0x80000000;
  if ((local_44 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_4c,local_44 << 5);
  }
  local_24 = 0;
  if ((local_20 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 << 4);
  }
  local_28 = 0;
  local_20 = 0x80000000;
  local_30 = 0;
  if ((local_2c & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c * 4);
  }
  local_34 = 0;
  local_2c = 0x80000000;
  local_3c = 0;
  if ((local_38 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_40,local_38 * 4);
  }
  return;
}

// 0144F3F0  FUN_0144f3f0  size=520  [run]
void FUN_0144f3f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  iVar1 = param_1;
  iVar2 = *(int *)(param_1 + 4) + 4;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x80000000;
  if (iVar2 == 0) {
    local_34 = 0;
LAB_0144f445:
    local_2c = 0x80000000;
  }
  else {
    param_1 = iVar2 * 0x20;
    local_34 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_1);
    local_2c = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
    if (local_2c == 0) goto LAB_0144f445;
  }
  iVar3 = *(int *)(iVar1 + 4) + 4;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  local_30 = iVar2;
  if (iVar3 == 0) {
    local_1c = 0;
LAB_0144f49d:
    local_14 = 0x80000000;
  }
  else {
    param_1 = iVar3 * 8;
    local_1c = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_1);
    local_14 = (int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3;
    if (local_14 == 0) goto LAB_0144f49d;
  }
  iVar2 = *(int *)(iVar1 + 4) + 4;
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  local_18 = iVar3;
  if (iVar2 == 0) {
    local_10 = 0;
  }
  else {
    param_1 = iVar2 * 0x20;
    local_10 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_1);
    local_8 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
    if (local_8 != 0) goto LAB_0144f4f7;
  }
  local_8 = 0x80000000;
LAB_0144f4f7:
  local_c = iVar2;
  FUN_0144d4e0(iVar1,param_2,param_3,param_4,param_5,&local_28,&local_34,&local_1c,&local_10);
  local_c = 0;
  if ((local_8 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 << 5);
  }
  local_10 = 0;
  local_8 = 0x80000000;
  local_18 = 0;
  if ((local_14 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 8);
  }
  local_1c = 0;
  local_14 = 0x80000000;
  if ((local_2c & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c << 5);
  }
  local_24 = 0;
  if ((local_20 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 << 4);
  }
  return;
}

// 0144F600  FUN_0144f600  size=323  [run]
void __thiscall
FUN_0144f600(int param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,char param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 local_2c [28];
  int local_10;
  int local_c;
  
  iVar2 = FUN_0144c0b0(param_2);
  if (iVar2 == 0) {
    FUN_0144d060(param_2,param_3,param_4);
    if (param_5 == '\0') {
      local_c = local_c + 1;
    }
    else {
      local_10 = local_10 + 1;
    }
    if (*(uint *)(param_1 + 8) == (*(uint *)(param_1 + 0xc) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 4),0x28);
    }
    if (*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x28 != 0) {
      FUN_0144d120(local_2c);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    FUN_01451580();
  }
  else {
    if (param_5 == '\0') {
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
    }
    else {
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
    }
    if ((1 < *(int *)(iVar2 + 0x1c)) || (1 < *(int *)(iVar2 + 0x20))) {
      *(undefined1 *)(iVar2 + 0x25) = 1;
    }
    if (*(uint *)(iVar2 + 0x14) == (*(uint *)(iVar2 + 0x18) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar2 + 0x10),4);
    }
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 0x14) * 4) = param_4;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
    if (*(uint *)(iVar2 + 8) == (*(uint *)(iVar2 + 0xc) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar2 + 4),0x18);
    }
    puVar1 = (undefined8 *)(*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    if (2 < *(int *)(iVar2 + 0x14)) {
      *(undefined1 *)(iVar2 + 0x24) = 1;
      return;
    }
  }
  return;
}

// 0144F750  FUN_0144f750  size=361  [run]
undefined4 * __thiscall FUN_0144f750(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  
  *param_1 = *param_2;
  iVar3 = param_1[2];
  iVar1 = param_2[2];
  local_8 = iVar3;
  if (iVar1 <= iVar3) {
    local_8 = iVar1;
  }
  if ((int)(param_1[3] & 0x3fffffff) < iVar1) {
    iVar2 = (param_1[3] & 0x3fffffff) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 1,iVar2,0x28);
  }
  iVar3 = (iVar3 - iVar1) + -1;
  if (-1 < iVar3) {
    piVar4 = (int *)(param_1[1] + iVar1 * 0x28 + 0x18 + iVar3 * 0x28);
    do {
      piVar4[-1] = 0;
      if (-1 < *piVar4) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar4[-2],*piVar4 * 4);
      }
      piVar4[-2] = 0;
      *piVar4 = -0x80000000;
      piVar4[-4] = 0;
      if (-1 < piVar4[-3]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar4[-5],(piVar4[-3] & 0x3fffffffU) * 0x18);
      }
      piVar4[-5] = 0;
      piVar4[-3] = -0x80000000;
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + -10;
    } while (-1 < iVar3);
  }
  iVar3 = param_1[1];
  if (0 < local_8) {
    iVar5 = param_2[1] - iVar3;
    iVar2 = local_8;
    do {
      FUN_0144c4f0(iVar5 + iVar3);
      iVar3 = iVar3 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[1] + local_8 * 0x28;
  iVar3 = iVar1 - local_8;
  if (iVar3 < 1) {
    param_1[2] = iVar1;
    return param_1;
  }
  iVar5 = (param_2[1] + local_8 * 0x28) - iVar2;
  do {
    if (iVar2 != 0) {
      FUN_0144d120(iVar5 + iVar2);
    }
    iVar2 = iVar2 + 0x28;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[2] = iVar1;
  return param_1;
}

// 0144F8C0  FUN_0144f8c0  size=29  [run]
void __thiscall FUN_0144f8c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x80000000;
  return;
}

// 0144F8E0  FUN_0144f8e0  size=376  [run]
undefined4 * __thiscall FUN_0144f8e0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_10;
  int local_8;
  
  piVar1 = param_1 + 1;
  *piVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0x80000000;
  *param_1 = *param_2;
  iVar5 = param_1[2];
  iVar2 = param_2[2];
  local_8 = iVar5;
  if (iVar2 <= iVar5) {
    local_8 = iVar2;
  }
  if ((int)(param_1[3] & 0x3fffffff) < iVar2) {
    iVar4 = (param_1[3] & 0x3fffffff) * 2;
    iVar3 = iVar2;
    if (iVar2 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar3,0x28);
  }
  iVar5 = (iVar5 - iVar2) + -1;
  if (-1 < iVar5) {
    piVar6 = (int *)(*piVar1 + iVar2 * 0x28 + 0x18 + iVar5 * 0x28);
    do {
      piVar6[-1] = 0;
      if (-1 < *piVar6) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar6[-2],*piVar6 * 4);
      }
      piVar6[-2] = 0;
      *piVar6 = -0x80000000;
      piVar6[-4] = 0;
      if (-1 < piVar6[-3]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar6[-5],(piVar6[-3] & 0x3fffffffU) * 0x18);
      }
      piVar6[-5] = 0;
      piVar6[-3] = -0x80000000;
      iVar5 = iVar5 + -1;
      piVar6 = piVar6 + -10;
    } while (-1 < iVar5);
  }
  iVar5 = *piVar1;
  if (0 < local_8) {
    iVar4 = param_2[1] - iVar5;
    local_10 = local_8;
    do {
      FUN_0144c4f0(iVar4 + iVar5);
      iVar5 = iVar5 + 0x28;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  iVar4 = *piVar1 + local_8 * 0x28;
  iVar5 = iVar2 - local_8;
  if (iVar5 < 1) {
    param_1[2] = iVar2;
    return param_1;
  }
  iVar3 = (param_2[1] + local_8 * 0x28) - iVar4;
  do {
    if (iVar4 != 0) {
      FUN_0144d120(iVar3 + iVar4);
    }
    iVar4 = iVar4 + 0x28;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[2] = iVar2;
  return param_1;
}

// 0144FA60  FUN_0144fa60  size=1525  [run]
void FUN_0144fa60(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_260 [512];
  undefined1 local_60 [24];
  int local_48;
  int local_44;
  undefined1 local_40 [4];
  uint local_3c [4];
  int local_2c;
  uint local_28;
  uint local_24;
  undefined8 *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar7 = 0;
  local_20 = (undefined8 *)0x0;
  local_1c = 0;
  local_18 = 0x80000000;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      FUN_0144f8c0(uVar7);
      if (local_10 == (local_c & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b8c,&local_14,0x10);
      }
      if (local_10 * 0x10 + local_14 != 0) {
        FUN_0144f8e0(local_40);
      }
      local_10 = local_10 + 1;
      FUN_01451e10();
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 4));
  }
  local_2c = 0;
  local_28 = 0;
  if ((char)param_3 == '\0') {
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_0144ff53;
    param_3 = 0;
    do {
      puVar8 = (uint *)(*(int *)(param_1 + 0xc) + param_3);
      FUN_0144c200(*puVar8,puVar8[1],puVar8[2]);
      uVar7 = *puVar8;
      uVar6 = puVar8[1];
      local_48 = FUN_0144c0b0(uVar6);
      uVar1 = puVar8[2];
      local_3c[3] = FUN_0144c0b0(uVar1);
      local_44 = FUN_0144c0b0(uVar7);
      if ((((local_48 == 0) || (cVar2 = FUN_0144bff0(local_60,&local_8), cVar2 == '\0')) &&
          ((local_3c[3] == 0 || (cVar2 = FUN_0144bff0(local_60,&local_8), cVar2 == '\0')))) &&
         ((local_44 == 0 || (cVar2 = FUN_0144bff0(local_60,&local_8), cVar2 == '\0')))) {
        local_24 = local_1c;
        local_3c[0] = uVar7;
        local_3c[1] = uVar6;
        local_3c[2] = uVar1;
        FUN_0144c200(uVar7,uVar6,uVar1);
        iVar3 = 0;
        do {
          uVar7 = local_3c[iVar3];
          iVar3 = iVar3 + 1;
          FUN_0144f600(local_3c[iVar3 % 3],local_60,local_24,0);
          FUN_0144f600(uVar7,local_60,local_24,1);
        } while (iVar3 < 3);
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
        }
        *(uint *)(*param_2 + param_2[1] * 4) = local_24;
        param_2[1] = param_2[1] + 1;
        puVar9 = (undefined8 *)(*(int *)(param_1 + 0xc) + param_3);
        if (local_1c == (local_18 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_20,0x10);
        }
        local_20[local_1c * 2] = *puVar9;
        (local_20 + local_1c * 2)[1] = puVar9[1];
        local_1c = local_1c + 1;
      }
      else {
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
        }
        *(uint *)(*param_2 + param_2[1] * 4) = local_8;
        param_2[1] = param_2[1] + 1;
        local_2c = local_2c + 1;
      }
      param_3 = param_3 + 0x10;
      local_28 = local_28 + 1;
    } while (local_28 < *(uint *)(param_1 + 0x10));
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_0144ff53;
    param_3 = 0;
    do {
      puVar8 = (uint *)(*(int *)(param_1 + 0xc) + param_3);
      FUN_0144c200(*puVar8,puVar8[1],puVar8[2]);
      local_8 = *puVar8;
      uVar7 = puVar8[1];
      local_44 = FUN_0144c0b0(uVar7);
      uVar6 = puVar8[2];
      local_3c[3] = FUN_0144c0b0(uVar6);
      local_48 = FUN_0144c0b0(local_8);
      if ((((local_44 == 0) || (cVar2 = FUN_0144c050(local_60,&local_24), cVar2 == '\0')) &&
          ((local_3c[3] == 0 || (cVar2 = FUN_0144c050(local_60,&local_24), cVar2 == '\0')))) &&
         ((local_48 == 0 || (cVar2 = FUN_0144c050(local_60,&local_24), cVar2 == '\0')))) {
        uVar1 = local_8;
        local_3c[0] = local_8;
        local_8 = local_1c;
        local_3c[1] = uVar7;
        local_3c[2] = uVar6;
        FUN_0144c200(uVar1,uVar7,uVar6);
        iVar3 = 0;
        do {
          uVar7 = local_3c[iVar3];
          iVar3 = iVar3 + 1;
          FUN_0144f600(local_3c[iVar3 % 3],local_60,local_8,0);
          FUN_0144f600(uVar7,local_60,local_8,1);
        } while (iVar3 < 3);
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
        }
        *(uint *)(*param_2 + param_2[1] * 4) = local_8;
        param_2[1] = param_2[1] + 1;
        puVar9 = (undefined8 *)(*(int *)(param_1 + 0xc) + param_3);
        if (local_1c == (local_18 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_20,0x10);
        }
        local_20[local_1c * 2] = *puVar9;
        (local_20 + local_1c * 2)[1] = puVar9[1];
        local_1c = local_1c + 1;
      }
      else {
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
        }
        *(uint *)(*param_2 + param_2[1] * 4) = local_24;
        param_2[1] = param_2[1] + 1;
        local_2c = local_2c + 1;
      }
      param_3 = param_3 + 0x10;
      local_28 = local_28 + 1;
    } while (local_28 < *(uint *)(param_1 + 0x10));
  }
  iVar3 = local_2c;
  if (0 < local_2c) {
    hkErrStream::hkErrStream(local_260,0x200);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    pcVar11 = " triangles.";
    pcVar10 = " duplicate triangles out of a total of ";
    FUN_01018d00("Removed ");
    FUN_01018dc0(iVar3);
    FUN_01018d00(pcVar10);
    FUN_01018dc0(uVar4);
    FUN_01018d00(pcVar11);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (0,0xffffffff,local_260,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\GeometryUtilities\\Misc\\hkGeometryUtils.cpp"
               ,0x2a0);
    hkBaseObject::hkBaseObject_38();
  }
LAB_0144ff53:
  uVar7 = *(uint *)(param_1 + 0x14);
  if ((int)(uVar7 & 0x3fffffff) < (int)local_1c) {
    if (-1 < (int)uVar7) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*(undefined4 *)(param_1 + 0xc),uVar7 << 4);
    }
    param_3 = local_1c << 4;
    uVar4 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_3);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    *(int *)(param_1 + 0x14) = (int)(param_3 + (param_3 >> 0x1f & 0xfU)) >> 4;
  }
  *(uint *)(param_1 + 0x10) = local_1c;
  puVar9 = *(undefined8 **)(param_1 + 0xc);
  puVar5 = local_20;
  uVar6 = local_1c;
  uVar7 = local_10;
  if (0 < (int)local_1c) {
    do {
      *puVar9 = *puVar5;
      puVar9[1] = puVar5[1];
      puVar9 = puVar9 + 2;
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 2;
    } while (uVar6 != 0);
  }
  while (-1 < (int)(uVar7 - 1)) {
    FUN_01451e10();
    uVar7 = uVar7 - 1;
  }
  local_10 = 0;
  if (-1 < (int)local_c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_14,local_c << 4);
  }
  local_14 = 0;
  local_1c = 0;
  local_c = 0x80000000;
  if (-1 < (int)local_18) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
  }
  return;
}

// 01450060  FUN_01450060  size=69  [run]
undefined4 FUN_01450060(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  if (((uVar2 <= uVar1) && ((uVar1 != uVar2 || (*param_2 <= *param_1)))) &&
     ((*param_1 != *param_2 || ((uVar1 != uVar2 || ((int)param_2[2] <= (int)param_1[2])))))) {
    return 0;
  }
  return 1;
}

// 014500B0  FUN_014500b0  size=24  [run]
bool FUN_014500b0(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) < *(int *)(param_2 + 8);
}

// 014500D0  FUN_014500d0  size=44  [run]
void __thiscall FUN_014500d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 01450130  FUN_01450130  size=18  [run]
int __thiscall FUN_01450130(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x18;
}

// 01450190  FUN_01450190  size=18  [run]
int __thiscall FUN_01450190(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x28;
}

// 014501B0  FUN_014501b0  size=18  [run]
int __thiscall FUN_014501b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x28;
}

// 014501E0  FUN_014501e0  size=15  [run]
int __thiscall FUN_014501e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01450200  FUN_01450200  size=15  [run]
int __thiscall FUN_01450200(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01450260  FUN_01450260  size=15  [run]
int __thiscall FUN_01450260(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 014502C0  FUN_014502c0  size=24  [run]
void __thiscall
FUN_014502c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 014502E0  FUN_014502e0  size=52  [run]
undefined4 __thiscall FUN_014502e0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 8);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  return uVar2;
}

// 01450360  FUN_01450360  size=24  [run]
void __thiscall
FUN_01450360(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01450390  FUN_01450390  size=49  [run]
undefined4 __thiscall FUN_01450390(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 << 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

// 014503E0  FUN_014503e0  size=300  [run]
void FUN_014503e0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint local_30;
  uint uStack_2c;
  int local_28;
  int local_14;
  
  do {
    puVar6 = (undefined8 *)((param_2 + param_3 >> 1) * 0x10 + param_1);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    iVar9 = param_3;
    local_14 = param_2;
    do {
      puVar7 = (uint *)(param_1 + local_14 * 0x10);
      while( true ) {
        uVar5 = puVar7[1];
        uStack_2c = (uint)((ulonglong)uVar1 >> 0x20);
        if (((uStack_2c <= uVar5) &&
            ((local_30 = (uint)uVar1, uVar5 != uStack_2c || (local_30 <= *puVar7)))) &&
           ((local_28 = (int)uVar2, *puVar7 != local_30 ||
            ((uVar5 != uStack_2c || (local_28 <= (int)puVar7[2])))))) break;
        local_14 = local_14 + 1;
        puVar7 = puVar7 + 4;
      }
      puVar7 = (uint *)(param_1 + iVar9 * 0x10);
      while( true ) {
        uVar5 = puVar7[1];
        if (((uVar5 <= uStack_2c) && ((uStack_2c != uVar5 || (*puVar7 <= local_30)))) &&
           ((local_30 != *puVar7 || ((uStack_2c != uVar5 || ((int)puVar7[2] <= local_28)))))) break;
        iVar9 = iVar9 + -1;
        puVar7 = puVar7 + -4;
      }
      if (iVar9 < local_14) break;
      if (iVar9 != local_14) {
        iVar8 = iVar9 * 0x10;
        uVar3 = *(undefined8 *)(iVar8 + param_1);
        uVar4 = *(undefined8 *)(iVar8 + 8 + param_1);
        puVar6 = (undefined8 *)(param_1 + local_14 * 0x10);
        *(undefined8 *)(iVar8 + param_1) = *(undefined8 *)(param_1 + local_14 * 0x10);
        ((undefined8 *)(iVar8 + param_1))[1] = puVar6[1];
        *puVar6 = uVar3;
        puVar6[1] = uVar4;
      }
      local_14 = local_14 + 1;
      iVar9 = iVar9 + -1;
    } while (local_14 <= iVar9);
    if (param_2 < iVar9) {
      FUN_014503e0(param_1,param_2,iVar9,param_4);
    }
    param_2 = local_14;
    if (param_3 <= local_14) {
      return;
    }
  } while( true );
}

// 01450510  FUN_01450510  size=235  [run]
void FUN_01450510(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int local_18;
  
  do {
    local_18 = (int)*(undefined8 *)(param_1 + 8 + (param_2 + param_3 >> 1) * 0x10);
    iVar6 = param_3;
    iVar7 = param_2;
    do {
      piVar3 = (int *)(param_1 + 8 + iVar7 * 0x10);
      iVar4 = *(int *)(param_1 + 8 + iVar7 * 0x10);
      while (iVar4 < local_18) {
        piVar3 = piVar3 + 4;
        iVar7 = iVar7 + 1;
        iVar4 = *piVar3;
      }
      piVar3 = (int *)(param_1 + 8 + iVar6 * 0x10);
      iVar4 = *(int *)(param_1 + 8 + iVar6 * 0x10);
      while (local_18 < iVar4) {
        piVar3 = piVar3 + -4;
        iVar6 = iVar6 + -1;
        iVar4 = *piVar3;
      }
      if (iVar6 < iVar7) break;
      if (iVar6 != iVar7) {
        iVar4 = iVar6 * 0x10;
        uVar1 = *(undefined8 *)(iVar4 + param_1);
        uVar2 = *(undefined8 *)(iVar4 + 8 + param_1);
        puVar5 = (undefined8 *)(iVar7 * 0x10 + param_1);
        *(undefined8 *)(iVar4 + param_1) = *puVar5;
        ((undefined8 *)(iVar4 + param_1))[1] = puVar5[1];
        *puVar5 = uVar1;
        puVar5[1] = uVar2;
      }
      iVar6 = iVar6 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar6);
    if (param_2 < iVar6) {
      FUN_01450510(param_1,param_2,iVar6,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

// 01450610  FUN_01450610  size=52  [run]
undefined4 __thiscall FUN_01450610(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x18);
    return uVar3;
  }
  return 0;
}

// 01450650  FUN_01450650  size=59  [run]
void FUN_01450650(undefined8 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined8 *)(param_2 + (int)param_1);
      param_1[1] = *(undefined8 *)(param_2 + 8 + (int)param_1);
      param_1[2] = *(undefined8 *)(param_2 + 0x10 + (int)param_1);
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 014506A0  FUN_014506a0  size=31  [run]
void __thiscall FUN_014506a0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x18);
  return;
}

// 014506D0  FUN_014506d0  size=61  [run]
void FUN_014506d0(undefined8 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *(undefined8 *)(param_3 + (int)param_1);
        param_1[1] = *(undefined8 *)(param_3 + 8 + (int)param_1);
        param_1[2] = *(undefined8 *)(param_3 + 0x10 + (int)param_1);
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01450710  FUN_01450710  size=11  [run]
int FUN_01450710(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01450720  FUN_01450720  size=33  [run]
void FUN_01450720(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01450750  FUN_01450750  size=52  [run]
undefined4 __thiscall FUN_01450750(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x28);
    return uVar3;
  }
  return 0;
}

// 01450790  FUN_01450790  size=31  [run]
void __thiscall FUN_01450790(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x28);
  return;
}

// 014507B0  FUN_014507b0  size=11  [run]
int FUN_014507b0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 014507D0  FUN_014507d0  size=28  [run]
void __thiscall FUN_014507d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01450810  FUN_01450810  size=25  [run]
void __thiscall FUN_01450810(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01450830  FUN_01450830  size=25  [run]
void __thiscall FUN_01450830(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01450850  FUN_01450850  size=11  [run]
int FUN_01450850(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01450860  FUN_01450860  size=39  [run]
undefined4 FUN_01450860(float *param_1,float *param_2)

{
  if (*param_1 <= *param_2 && *param_2 != *param_1) {
    return 1;
  }
  return 0;
}

// 014508A0  FUN_014508a0  size=52  [run]
void __thiscall FUN_014508a0(uint *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = (float)(*param_1 >> 0x10) * 65536.0 + (float)(*param_1 & 0xffff);
  param_2[1] = (float)(uVar1 >> 0x10) * 65536.0 + (float)(uVar1 & 0xffff);
  param_2[2] = (float)(uVar2 >> 0x10) * 65536.0 + (float)(uVar2 & 0xffff);
  param_2[3] = (float)(uVar3 >> 0x10) * 65536.0 + (float)(uVar3 & 0xffff);
  return;
}

// 014508E0  FUN_014508e0  size=39  [run]
void FUN_014508e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01450910  FUN_01450910  size=39  [run]
void FUN_01450910(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x28);
  }
  return;
}

// 014509A0  FUN_014509a0  size=55  [run]
void __thiscall FUN_014509a0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 014509E0  FUN_014509e0  size=56  [run]
void FUN_014509e0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = *param_3;
  if (uVar1 < *param_2) {
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}

// 01450A20  FUN_01450a20  size=108  [run]
undefined4 * __thiscall FUN_01450a20(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 * 8;
    uVar2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
    if (iVar3 != 0) goto LAB_01450a78;
  }
  iVar3 = -0x80000000;
LAB_01450a78:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 01450A90  FUN_01450a90  size=13  [run]
void __thiscall FUN_01450a90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 01450AA0  FUN_01450aa0  size=105  [run]
undefined4 * __thiscall FUN_01450aa0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 << 5;
    uVar2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
    if (iVar3 != 0) goto LAB_01450af5;
  }
  iVar3 = -0x80000000;
LAB_01450af5:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 01450B10  FUN_01450b10  size=108  [run]
undefined4 * __thiscall FUN_01450b10(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 * 8;
    uVar2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
    if (iVar3 != 0) goto LAB_01450b68;
  }
  iVar3 = -0x80000000;
LAB_01450b68:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 01450B80  FUN_01450b80  size=59  [run]
void __thiscall FUN_01450b80(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(param_2 * 0x10 + *param_1);
    iVar2 = (*param_1 + param_1[1] * 0x10) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 01450BC0  FUN_01450bc0  size=105  [run]
undefined4 * __thiscall FUN_01450bc0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 << 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
    if (iVar3 != 0) goto LAB_01450c15;
  }
  iVar3 = -0x80000000;
LAB_01450c15:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 01450C30  FUN_01450c30  size=33  [run]
void FUN_01450c30(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_014503e0(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01450C60  FUN_01450c60  size=33  [run]
void FUN_01450c60(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01450510(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01450C90  FUN_01450c90  size=217  [run]
int * __thiscall FUN_01450c90(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar1 = param_3[1];
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,0x18);
  }
  puVar4 = (undefined8 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *param_3 - (int)puVar4;
    iVar3 = iVar5;
    do {
      *puVar4 = *(undefined8 *)(iVar2 + (int)puVar4);
      puVar4[1] = *(undefined8 *)(iVar2 + 8 + (int)puVar4);
      puVar4[2] = *(undefined8 *)(iVar2 + 0x10 + (int)puVar4);
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar4 = (undefined8 *)(*param_1 + iVar5 * 0x18);
  iVar3 = iVar1 - iVar5;
  if (0 < iVar3) {
    iVar5 = (*param_3 + iVar5 * 0x18) - (int)puVar4;
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *(undefined8 *)(iVar5 + (int)puVar4);
        puVar4[1] = *(undefined8 *)(iVar5 + 8 + (int)puVar4);
        puVar4[2] = *(undefined8 *)(iVar5 + 0x10 + (int)puVar4);
      }
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_1[1] = iVar1;
    return param_1;
  }
  param_1[1] = iVar1;
  return param_1;
}

// 01450D70  FUN_01450d70  size=56  [run]
void FUN_01450d70(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01450DB0  FUN_01450db0  size=128  [run]
int * __thiscall FUN_01450db0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_3;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_3[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar1 * 4);
    }
    param_3 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 01450E40  FUN_01450e40  size=60  [run]
void __thiscall FUN_01450e40(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01450EA0  FUN_01450ea0  size=173  [run]
void FUN_01450ea0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  do {
    fVar2 = *(float *)(param_1 + (param_2 + param_3 >> 1) * 8);
    iVar5 = param_3;
    iVar6 = param_2;
    do {
      while (pfVar1 = (float *)(param_1 + iVar6 * 8), *pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        iVar6 = iVar6 + 1;
      }
      for (; fVar2 < *(float *)(param_1 + iVar5 * 8); iVar5 = iVar5 + -1) {
      }
      if (iVar5 < iVar6) break;
      if (iVar5 != iVar6) {
        uVar3 = *(undefined4 *)(param_1 + 4 + iVar5 * 8);
        uVar4 = *(undefined4 *)(param_1 + iVar5 * 8);
        *(undefined4 *)(param_1 + iVar5 * 8) = *(undefined4 *)(param_1 + iVar6 * 8);
        *(undefined4 *)(param_1 + 4 + iVar5 * 8) = *(undefined4 *)(param_1 + 4 + iVar6 * 8);
        *(undefined4 *)(param_1 + iVar6 * 8) = uVar4;
        *(undefined4 *)(param_1 + 4 + iVar6 * 8) = uVar3;
      }
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= iVar5);
    if (param_2 < iVar5) {
      FUN_01450ea0(param_1,param_2,iVar5,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}

// 01450F60  FUN_01450f60  size=56  [run]
void __thiscall FUN_01450f60(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01450FA0  FUN_01450fa0  size=88  [run]
void __thiscall FUN_01450fa0(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x18);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01451000  FUN_01451000  size=202  [run]
int * __thiscall FUN_01451000(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar1 = param_2[1];
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0x18);
  }
  puVar4 = (undefined8 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *param_2 - (int)puVar4;
    iVar3 = iVar5;
    do {
      *puVar4 = *(undefined8 *)(iVar2 + (int)puVar4);
      puVar4[1] = *(undefined8 *)(iVar2 + 8 + (int)puVar4);
      puVar4[2] = *(undefined8 *)(iVar2 + 0x10 + (int)puVar4);
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar4 = (undefined8 *)(*param_1 + iVar5 * 0x18);
  iVar3 = iVar1 - iVar5;
  if (0 < iVar3) {
    iVar5 = (*param_2 + iVar5 * 0x18) - (int)puVar4;
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *(undefined8 *)(iVar5 + (int)puVar4);
        puVar4[1] = *(undefined8 *)(iVar5 + 8 + (int)puVar4);
        puVar4[2] = *(undefined8 *)(iVar5 + 0x10 + (int)puVar4);
      }
      puVar4 = puVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 014510D0  FUN_014510d0  size=134  [run]
int * __thiscall FUN_014510d0(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_2;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar1 * 4);
    }
    param_2 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 01451160  FUN_01451160  size=60  [run]
void __fastcall FUN_01451160(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 014511A0  FUN_014511a0  size=60  [run]
void __fastcall FUN_014511a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 014511E0  FUN_014511e0  size=66  [run]
void __thiscall FUN_014511e0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x18);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01451230  FUN_01451230  size=63  [run]
void __thiscall FUN_01451230(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01451270  FUN_01451270  size=33  [run]
void FUN_01451270(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01450ea0(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 014512A0  FUN_014512a0  size=89  [run]
void __thiscall FUN_014512a0(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x18);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01451300  FUN_01451300  size=40  [run]
void FUN_01451300(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_01450ea0(param_1,0,param_2 + -1,0);
  }
  return;
}

// 01451330  FUN_01451330  size=60  [run]
void __fastcall FUN_01451330(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01451370  FUN_01451370  size=60  [run]
void __fastcall FUN_01451370(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 014513B0  FUN_014513b0  size=66  [run]
void __fastcall FUN_014513b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x18);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01451400  FUN_01451400  size=63  [run]
void __fastcall FUN_01451400(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01451440  FUN_01451440  size=63  [run]
void __fastcall FUN_01451440(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01451480  FUN_01451480  size=43  [run]
void FUN_01451480(int param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    do {
      FUN_0144c4f0(param_2 + param_1);
      param_1 = param_1 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 014514B0  FUN_014514b0  size=66  [run]
void __fastcall FUN_014514b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x18);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01451500  FUN_01451500  size=63  [run]
void __fastcall FUN_01451500(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01451540  FUN_01451540  size=63  [run]
void __fastcall FUN_01451540(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01451580  FUN_01451580  size=113  [run]
void __fastcall FUN_01451580(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < *(int *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) * 4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xc)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 4),(*(uint *)(param_1 + 0xc) & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  return;
}

// 01451600  FUN_01451600  size=41  [run]
void FUN_01451600(int param_1,int param_2,undefined4 param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_0144d120(param_3);
      }
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01451630  FUN_01451630  size=47  [run]
void FUN_01451630(int param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - param_1;
    do {
      if (param_1 != 0) {
        FUN_0144d120(param_3 + param_1);
      }
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01451660  FUN_01451660  size=53  [run]
int __thiscall FUN_01451660(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01451580();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x28);
  }
  return param_1;
}

// 014516A0  FUN_014516a0  size=66  [run]
void __thiscall FUN_014516a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x28);
  }
  if (*param_1 + param_1[1] * 0x28 != 0) {
    FUN_0144d120(param_3);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 014516F0  FUN_014516f0  size=147  [run]
void FUN_014516f0(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + 0x18 + param_2 * 0x28);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1[-4] = 0;
      if (-1 < piVar1[-3]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-5],(piVar1[-3] & 0x3fffffffU) * 0x18);
      }
      piVar1[-5] = 0;
      piVar1[-3] = -0x80000000;
      param_2 = param_2 + -1;
      piVar1 = piVar1 + -10;
    } while (-1 < param_2);
  }
  return;
}

// 01451790  FUN_01451790  size=67  [run]
void __thiscall FUN_01451790(int *param_1,undefined4 param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x28);
  }
  if (*param_1 + param_1[1] * 0x28 != 0) {
    FUN_0144d120(param_2);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 014517E0  FUN_014517e0  size=358  [run]
void __thiscall FUN_014517e0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_c;
  
  iVar1 = param_3[1];
  iVar3 = param_1[1];
  local_c = iVar3;
  if (iVar1 <= iVar3) {
    local_c = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x28);
  }
  iVar3 = (iVar3 - iVar1) + -1;
  if (-1 < iVar3) {
    piVar4 = (int *)(*param_1 + iVar1 * 0x28 + 0x18 + iVar3 * 0x28);
    do {
      piVar4[-1] = 0;
      if (-1 < *piVar4) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar4[-2],*piVar4 * 4);
      }
      piVar4[-2] = 0;
      *piVar4 = -0x80000000;
      piVar4[-4] = 0;
      if (-1 < piVar4[-3]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar4[-5],(piVar4[-3] & 0x3fffffffU) * 0x18);
      }
      piVar4[-5] = 0;
      piVar4[-3] = -0x80000000;
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + -10;
    } while (-1 < iVar3);
  }
  iVar3 = *param_1;
  if (0 < local_c) {
    iVar5 = *param_3 - iVar3;
    iVar2 = local_c;
    do {
      FUN_0144c4f0(iVar5 + iVar3);
      iVar3 = iVar3 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *param_1 + local_c * 0x28;
  iVar3 = iVar1 - local_c;
  if (iVar3 < 1) {
    param_1[1] = iVar1;
    return;
  }
  iVar5 = (*param_3 + local_c * 0x28) - iVar2;
  do {
    if (iVar2 != 0) {
      FUN_0144d120(iVar5 + iVar2);
    }
    iVar2 = iVar2 + 0x28;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[1] = iVar1;
  return;
}

// 01451950  FUN_01451950  size=168  [run]
void __fastcall FUN_01451950(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 0x18 + iVar2 * 0x28);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1[-4] = 0;
      if (-1 < piVar1[-3]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-5],(piVar1[-3] & 0x3fffffffU) * 0x18);
      }
      piVar1[-5] = 0;
      piVar1[-3] = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -10;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01451A00  FUN_01451a00  size=358  [run]
void __thiscall FUN_01451a00(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_c;
  
  iVar1 = param_2[1];
  iVar3 = param_1[1];
  local_c = iVar3;
  if (iVar1 <= iVar3) {
    local_c = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x28);
  }
  iVar3 = (iVar3 - iVar1) + -1;
  if (-1 < iVar3) {
    piVar4 = (int *)(*param_1 + iVar1 * 0x28 + 0x18 + iVar3 * 0x28);
    do {
      piVar4[-1] = 0;
      if (-1 < *piVar4) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar4[-2],*piVar4 * 4);
      }
      piVar4[-2] = 0;
      *piVar4 = -0x80000000;
      piVar4[-4] = 0;
      if (-1 < piVar4[-3]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar4[-5],(piVar4[-3] & 0x3fffffffU) * 0x18);
      }
      piVar4[-5] = 0;
      piVar4[-3] = -0x80000000;
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + -10;
    } while (-1 < iVar3);
  }
  iVar3 = *param_1;
  if (0 < local_c) {
    iVar5 = *param_2 - iVar3;
    iVar2 = local_c;
    do {
      FUN_0144c4f0(iVar5 + iVar3);
      iVar3 = iVar3 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *param_1 + local_c * 0x28;
  iVar3 = iVar1 - local_c;
  if (iVar3 < 1) {
    param_1[1] = iVar1;
    return;
  }
  iVar5 = (*param_2 + local_c * 0x28) - iVar2;
  do {
    if (iVar2 != 0) {
      FUN_0144d120(iVar5 + iVar2);
    }
    iVar2 = iVar2 + 0x28;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[1] = iVar1;
  return;
}

// 01451B70  FUN_01451b70  size=217  [run]
void __thiscall FUN_01451b70(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*param_1 + 0x18 + iVar3 * 0x28);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2[-4] = 0;
      if (-1 < piVar2[-3]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-5],(piVar2[-3] & 0x3fffffffU) * 0x18);
      }
      piVar2[-5] = 0;
      piVar2[-3] = -0x80000000;
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -10;
    } while (-1 < iVar3);
  }
  uVar1 = param_1[2];
  param_1[1] = 0;
  if ((int)uVar1 < 0) {
    *param_1 = 0;
    param_1[2] = -0x80000000;
    return;
  }
  (**(code **)(*param_2 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 8);
  *param_1 = 0;
  param_1[2] = -0x80000000;
  return;
}

// 01451E10  FUN_01451e10  size=218  [run]
void __fastcall FUN_01451e10(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*(int *)(param_1 + 4) + 0x18 + iVar3 * 0x28);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2[-4] = 0;
      if (-1 < piVar2[-3]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-5],(piVar2[-3] & 0x3fffffffU) * 0x18);
      }
      piVar2[-5] = 0;
      piVar2[-3] = -0x80000000;
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -10;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((int)uVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x80000000;
    return;
  }
  (**(code **)(PTR_vftable_018e9b94 + 0x10))
            (*(undefined4 *)(param_1 + 4),((uVar1 & 0x3fffffff) + uVar1 * 4) * 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  return;
}

// 01451EF0  FUN_01451ef0  size=42  [run]
void FUN_01451ef0(int param_1,int param_2,undefined4 param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_0144f8e0(param_3);
      }
      param_1 = param_1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01451F20  FUN_01451f20  size=53  [run]
int __thiscall FUN_01451f20(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01451e10();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01451F60  FUN_01451f60  size=61  [run]
void __thiscall FUN_01451f60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  if (param_1[1] * 0x10 + *param_1 != 0) {
    FUN_0144f8e0(param_3);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01451FA0  FUN_01451fa0  size=36  [run]
void FUN_01451fa0(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01451e10();
  }
  return;
}

// 01451FD0  FUN_01451fd0  size=62  [run]
void __thiscall FUN_01451fd0(int *param_1,undefined4 param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,0x10);
  }
  if (param_1[1] * 0x10 + *param_1 != 0) {
    FUN_0144f8e0(param_2);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01452010  FUN_01452010  size=44  [run]
undefined4 __fastcall FUN_01452010(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_01451e10();
  }
  param_1[1] = 0;
  return uVar2;
}

// 01452040  FUN_01452040  size=93  [run]
void __thiscall FUN_01452040(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01451e10();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 014520A0  FUN_014520a0  size=93  [run]
void __fastcall FUN_014520a0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01451e10();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01452100  FUN_01452100  size=93  [run]
void __fastcall FUN_01452100(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01451e10();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01452170  FUN_01452170  size=16  [run]
int __thiscall FUN_01452170(ushort *param_1,int param_2)

{
  return (uint)*param_1 * 0x10 + param_2;
}

// 01452180  FUN_01452180  size=17  [run]
int __thiscall FUN_01452180(int param_1,int param_2)

{
  return param_2 + (uint)*(ushort *)(param_1 + 2) * 8;
}

// 014521A0  FUN_014521a0  size=17  [run]
int __thiscall FUN_014521a0(int param_1,int param_2)

{
  return param_2 + (uint)*(ushort *)(param_1 + 4) * 8;
}

// 014521C0  FUN_014521c0  size=50  [run]
void __thiscall FUN_014521c0(int *param_1,undefined1 *param_2,int *param_3)

{
  if (((*param_1 == *param_3) && (param_1[1] == param_3[1])) && (param_1[3] == param_3[3])) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 01452200  FUN_01452200  size=65  [run]
void __thiscall FUN_01452200(undefined4 *param_1,undefined1 *param_2,undefined4 *param_3)

{
  if (((*(short *)*param_1 == *(short *)*param_3) && (*(short *)param_1[1] == *(short *)param_3[1]))
     && (param_1[3] == param_3[3])) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 01452250  FUN_01452250  size=67  [run]
float10 FUN_01452250(float param_1,float param_2)

{
  if (0.0 <= param_1) {
    if (param_2 <= 0.0) {
      return (float10)(4.0 - param_2);
    }
  }
  else {
    param_2 = 2.0 - param_2;
  }
  return (float10)param_2;
}

// 01452320  FUN_01452320  size=531  [run]
char * FUN_01452320(char *param_1,int param_2,short *param_3,short *param_4,short *param_5,
                   short *param_6)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  
  if (((param_3 == param_4) || (*param_3 != *param_4)) ||
     (bVar4 = true,
     *(short *)(param_2 + (uint)(ushort)param_3[1] * 8) ==
     *(short *)(param_2 + (uint)(ushort)param_4[1] * 8))) {
    bVar4 = false;
  }
  if (((param_5 == param_6) || (*param_5 != *param_6)) ||
     (bVar5 = true,
     *(short *)(param_2 + (uint)(ushort)param_5[1] * 8) ==
     *(short *)(param_2 + (uint)(ushort)param_6[1] * 8))) {
    bVar5 = false;
  }
  if ((bVar4) && (bVar5)) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  if (cVar2 == '\0') {
    return param_1;
  }
  if ((((param_3 == param_6) || (*param_3 != *param_6)) ||
      (*(short *)(param_2 + (uint)(ushort)param_3[1] * 8) !=
       *(short *)(param_2 + (uint)(ushort)param_6[1] * 8))) &&
     ((param_5 != param_6 && (sVar3 = *param_6, *param_5 == sVar3)))) {
    if (*(short *)(param_2 + (uint)(ushort)param_5[1] * 8) !=
        *(short *)(param_2 + (uint)(ushort)param_6[1] * 8)) goto LAB_014523f4;
LAB_01452427:
    psVar1 = (short *)(param_2 + (uint)(ushort)param_5[1] * 8);
    if ((*psVar1 != sVar3) || (*(short *)(param_2 + (uint)(ushort)param_6[1] * 8) != *param_5))
    goto LAB_01452450;
    bVar4 = psVar1 == param_6;
  }
  else {
LAB_014523f4:
    sVar3 = *param_6;
    psVar1 = (short *)(param_2 + (uint)(ushort)param_3[1] * 8);
    if (((*psVar1 != sVar3) || (*(short *)(param_2 + (uint)(ushort)param_6[1] * 8) != *param_3)) ||
       (psVar1 == param_6)) goto LAB_01452427;
LAB_01452450:
    bVar4 = true;
  }
  if ((((param_3 == param_4) || (*param_3 != *param_4)) ||
      (*(short *)(param_2 + (uint)(ushort)param_3[1] * 8) !=
       *(short *)(param_2 + (uint)(ushort)param_4[1] * 8))) &&
     ((param_5 != param_4 && (sVar3 = *param_4, *param_5 == sVar3)))) {
    if (*(short *)(param_2 + (uint)(ushort)param_5[1] * 8) !=
        *(short *)(param_2 + (uint)(ushort)param_4[1] * 8)) goto LAB_014524ad;
LAB_014524d8:
    if ((*(short *)(param_2 + (uint)(ushort)param_5[1] * 8) == sVar3) &&
       (*(short *)(param_2 + (uint)(ushort)param_4[1] * 8) == *param_5)) {
      bVar5 = (short *)(param_2 + (uint)(ushort)param_5[1] * 8) == param_4;
      goto LAB_01452500;
    }
  }
  else {
LAB_014524ad:
    sVar3 = *param_4;
    psVar1 = (short *)(param_2 + (uint)(ushort)param_3[1] * 8);
    if (((*psVar1 != sVar3) || (*(short *)(param_2 + (uint)(ushort)param_4[1] * 8) != *param_3)) ||
       (psVar1 == param_4)) goto LAB_014524d8;
  }
  bVar5 = true;
LAB_01452500:
  if ((bVar4) && (bVar5)) {
    *param_1 = '\x01';
    return param_1;
  }
  *param_1 = '\0';
  return param_1;
}

// 01452540  FUN_01452540  size=93  [run]
void FUN_01452540(undefined1 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  if (((fVar2 <= fVar1) &&
      ((fVar1 != fVar2 || (param_3[1] < param_2[1] || param_3[1] == param_2[1])))) &&
     ((fVar1 != fVar2 ||
      ((param_2[1] != param_3[1] || (param_3[2] < param_2[2] || param_3[2] == param_2[2])))))) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}

// 014525A0  FUN_014525a0  size=35  [run]
void FUN_014525a0(undefined1 *param_1,int param_2,int param_3)

{
  if (*(float *)(param_2 + 4) <= *(float *)(param_3 + 4) &&
      *(float *)(param_3 + 4) != *(float *)(param_2 + 4)) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}

// 014525D0  FUN_014525d0  size=35  [run]
void FUN_014525d0(undefined1 *param_1,int param_2,int param_3)

{
  if (*(float *)(param_2 + 0x10) <= *(float *)(param_3 + 0x10) &&
      *(float *)(param_3 + 0x10) != *(float *)(param_2 + 0x10)) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}

// 01452620  FUN_01452620  size=239  [run]
void FUN_01452620(int *param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (0 < param_1[1]) {
    pfVar1 = (float *)*param_1;
    fVar9 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar6 = pfVar1[3];
    *param_2 = *pfVar1;
    param_2[1] = fVar9;
    param_2[2] = fVar7;
    param_2[3] = fVar6;
    pfVar1 = (float *)*param_1;
    fVar9 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar6 = pfVar1[3];
    iVar3 = 0;
    param_2[4] = *pfVar1;
    param_2[5] = fVar9;
    param_2[6] = fVar7;
    param_2[7] = fVar6;
    if (0 < param_1[1]) {
      iVar2 = 0;
      fVar9 = param_2[2];
      fVar7 = param_2[5];
      fVar6 = param_2[1];
      fVar5 = param_2[4];
      fVar10 = param_2[6];
      do {
        fVar4 = *param_2;
        if (*(float *)(iVar2 + *param_1) <= *param_2) {
          fVar4 = *(float *)(iVar2 + *param_1);
        }
        *param_2 = fVar4;
        fVar4 = *(float *)(iVar2 + *param_1);
        if (*(float *)(iVar2 + *param_1) < fVar5) {
          fVar4 = fVar5;
        }
        param_2[4] = fVar4;
        fVar5 = *(float *)(iVar2 + 4 + *param_1);
        if (fVar6 < fVar5) {
          fVar5 = fVar6;
        }
        param_2[1] = fVar5;
        fVar6 = *(float *)(iVar2 + 4 + *param_1);
        if (fVar6 < fVar7) {
          fVar6 = fVar7;
        }
        param_2[5] = fVar6;
        fVar7 = *(float *)(iVar2 + 8 + *param_1);
        if (fVar9 < fVar7) {
          fVar7 = fVar9;
        }
        param_2[2] = fVar7;
        fVar8 = *(float *)(iVar2 + 8 + *param_1);
        if (fVar8 < fVar10) {
          fVar8 = fVar10;
        }
        iVar3 = iVar3 + 1;
        param_2[6] = fVar8;
        iVar2 = iVar2 + 0x10;
        fVar9 = fVar7;
        fVar7 = fVar6;
        fVar6 = fVar5;
        fVar5 = fVar4;
        fVar10 = fVar8;
      } while (iVar3 < param_1[1]);
    }
  }
  return;
}

// 01452720  FUN_01452720  size=73  [run]
void __fastcall FUN_01452720(int param_1)

{
  undefined4 uVar1;
  
  if (**(ushort **)(param_1 + 0x14) < **(ushort **)(param_1 + 0x10)) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(ushort **)(param_1 + 0x10) = *(ushort **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  if (**(ushort **)(param_1 + 0x18) < **(ushort **)(param_1 + 0x14)) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  if (**(ushort **)(param_1 + 0x14) < **(ushort **)(param_1 + 0x10)) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    *(ushort **)(param_1 + 0x10) = *(ushort **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  return;
}

// 01452770  FUN_01452770  size=326  [run]
void FUN_01452770(int *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80 [6];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_14;
  
  FUN_01452620(param_1,&local_a0);
  *param_3 = local_90 + local_a0;
  param_3[1] = fStack_8c + fStack_9c;
  param_3[2] = fStack_88 + fStack_98;
  param_3[3] = fStack_84 + fStack_94;
  *param_3 = (local_90 + local_a0) * 0.5;
  param_3[1] = (fStack_8c + fStack_9c) * 0.5;
  param_3[2] = (fStack_88 + fStack_98) * 0.5;
  param_3[3] = (fStack_84 + fStack_94) * 0.5;
  local_80[0] = 1.0;
  *param_2 = local_90 - local_a0;
  param_2[1] = fStack_8c - fStack_9c;
  param_2[2] = fStack_88 - fStack_98;
  param_2[3] = fStack_84 - fStack_94;
  fStack_58 = 1.0;
  if (1.1920929e-07 < param_2[2]) {
    fStack_58 = 1.0 / param_2[2];
  }
  local_80[5] = 1.0;
  if (1.1920929e-07 < param_2[1]) {
    local_80[5] = 1.0 / param_2[1];
  }
  if (1.1920929e-07 < *param_2) {
    local_80[0] = 1.0 / *param_2;
  }
  iVar2 = 0;
  local_80[1] = 0.0;
  local_80[2] = 0.0;
  local_80[3] = 0.0;
  local_80[4] = 0.0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  local_14 = 0;
  if (0 < param_1[1]) {
    do {
      pfVar1 = (float *)(*param_1 + iVar2);
      local_50 = *pfVar1 - *param_3;
      local_40 = pfVar1[1] - param_3[1];
      local_30 = pfVar1[2] - param_3[2];
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      FUN_01014170(local_80);
      iVar2 = iVar2 + 0x10;
      pfVar1 = (float *)(*param_1 + -0x10 + iVar2);
      *pfVar1 = local_50;
      pfVar1[1] = local_40;
      pfVar1[2] = local_30;
      pfVar1[3] = 0.0;
      local_14 = local_14 + 1;
    } while (local_14 < param_1[1]);
  }
  return;
}

// 014528C0  FUN_014528c0  size=239  [run]
void FUN_014528c0(int *param_1,undefined4 *param_2,float *param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_14;
  
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  local_50 = *param_2;
  uStack_3c = param_2[1];
  iVar13 = 0;
  uStack_28 = param_2[2];
  local_14 = 0;
  if (0 < param_1[1]) {
    do {
      puVar1 = (undefined4 *)(*param_1 + iVar13);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      FUN_01014170(&local_50);
      iVar13 = iVar13 + 0x10;
      puVar1 = (undefined4 *)(*param_1 + -0x10 + iVar13);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = 0;
      pfVar2 = (float *)(*param_1 + -0x10 + iVar13);
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      fVar10 = param_3[1];
      fVar11 = param_3[2];
      fVar12 = param_3[3];
      pfVar3 = (float *)(*param_1 + -0x10 + iVar13);
      *pfVar3 = *pfVar2 + *param_3;
      pfVar3[1] = fVar7 + fVar10;
      pfVar3[2] = fVar8 + fVar11;
      pfVar3[3] = fVar9 + fVar12;
      local_14 = local_14 + 1;
    } while (local_14 < param_1[1]);
  }
  return;
}

// 014529C0  FUN_014529c0  size=116  [run]
void FUN_014529c0(int param_1)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  int iVar3;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),0x80);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      FUN_01015b70(uVar2,"%d(%d)",iVar3,*(undefined2 *)(*(int *)(param_1 + 4) + 4 + iVar3 * 8));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),uVar2);
  return;
}

// 01452A40  FUN_01452a40  size=255  [run]
void FUN_01452a40(float param_1,float *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint *puVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float *local_8;
  
  puVar4 = (uint *)param_2;
  pfVar6 = (float *)*param_2;
  iVar9 = (int)param_2[1] - 1;
  local_8 = pfVar6;
  if (iVar9 < 0) {
LAB_01452ad0:
    uVar10 = (int)((int)local_8 - *puVar4) >> 4;
    *param_3 = uVar10;
    if ((int)(puVar4[2] & 0x3fffffff) < (int)uVar10) {
      uVar5 = (puVar4[2] & 0x3fffffff) * 2;
      if ((int)uVar5 <= (int)uVar10) {
        uVar5 = uVar10;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,puVar4,uVar5,0x10);
    }
    puVar4[1] = uVar10;
    return;
  }
  param_2 = pfVar6 + -4;
LAB_01452a73:
  if ((float *)*puVar4 <= param_2) {
    pfVar7 = param_2;
    do {
      if (*pfVar7 <= *pfVar6 - 0.01 && *pfVar6 - 0.01 != *pfVar7) break;
      if ((pfVar7[2] - pfVar6[2]) * (pfVar7[2] - pfVar6[2]) +
          (pfVar7[1] - pfVar6[1]) * (pfVar7[1] - pfVar6[1]) +
          (*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) < param_1) {
        iVar8 = iVar9 + -1;
        if (iVar8 < 0) goto LAB_01452ac7;
        goto LAB_01452b14;
      }
      pfVar7 = pfVar7 + -4;
    } while ((float *)*puVar4 <= pfVar7);
  }
  fVar1 = pfVar6[1];
  fVar2 = pfVar6[2];
  fVar3 = pfVar6[3];
  param_2 = param_2 + 4;
  *local_8 = *pfVar6;
  local_8[1] = fVar1;
  local_8[2] = fVar2;
  local_8[3] = fVar3;
  local_8 = local_8 + 4;
  goto LAB_01452ac7;
  while( true ) {
    pfVar6 = pfVar6 + 4;
    iVar9 = iVar9 + -1;
    iVar8 = iVar8 + -1;
    if (iVar8 < 0) break;
LAB_01452b14:
    if (param_1 <=
        (pfVar7[2] - pfVar6[6]) * (pfVar7[2] - pfVar6[6]) +
        (pfVar7[1] - pfVar6[5]) * (pfVar7[1] - pfVar6[5]) +
        (*pfVar7 - pfVar6[4]) * (*pfVar7 - pfVar6[4])) break;
  }
LAB_01452ac7:
  pfVar6 = pfVar6 + 4;
  iVar9 = iVar9 + -1;
  if (iVar9 < 0) goto LAB_01452ad0;
  goto LAB_01452a73;
}

// 01452B50  FUN_01452b50  size=243  [run]
void FUN_01452b50(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  uVar4 = param_1[1];
  iVar9 = uVar4 - 1;
  puVar6 = (undefined4 *)*param_1;
  if (-1 < iVar9) {
    puVar7 = puVar6;
    puVar8 = puVar6;
    if (3 < (int)uVar4) {
      uVar4 = uVar4 >> 2;
      iVar9 = iVar9 + uVar4 * -4;
      do {
        puVar7 = puVar8;
        if ((float)puVar6[3] == 0.0) {
          uVar1 = puVar6[1];
          uVar2 = puVar6[2];
          uVar3 = puVar6[3];
          puVar7 = puVar8 + 4;
          *puVar8 = *puVar6;
          puVar8[1] = uVar1;
          puVar8[2] = uVar2;
          puVar8[3] = uVar3;
        }
        puVar8 = puVar7;
        if ((float)puVar6[7] == 0.0) {
          uVar1 = puVar6[5];
          uVar2 = puVar6[6];
          uVar3 = puVar6[7];
          puVar8 = puVar7 + 4;
          *puVar7 = puVar6[4];
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
        }
        puVar7 = puVar8;
        if ((float)puVar6[0xb] == 0.0) {
          uVar1 = puVar6[9];
          uVar2 = puVar6[10];
          uVar3 = puVar6[0xb];
          puVar7 = puVar8 + 4;
          *puVar8 = puVar6[8];
          puVar8[1] = uVar1;
          puVar8[2] = uVar2;
          puVar8[3] = uVar3;
        }
        puVar8 = puVar7;
        if ((float)puVar6[0xf] == 0.0) {
          uVar1 = puVar6[0xd];
          uVar2 = puVar6[0xe];
          uVar3 = puVar6[0xf];
          puVar8 = puVar7 + 4;
          *puVar7 = puVar6[0xc];
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
        }
        puVar6 = puVar6 + 0x10;
        uVar4 = uVar4 - 1;
        puVar7 = puVar6;
      } while (uVar4 != 0);
    }
    for (; puVar6 = puVar8, -1 < iVar9; iVar9 = iVar9 + -1) {
      puVar8 = puVar6;
      if ((float)puVar7[3] == 0.0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        puVar8 = puVar6 + 4;
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
      }
      puVar7 = puVar7 + 4;
    }
  }
  iVar9 = (int)puVar6 - *param_1 >> 4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar9) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar9) {
      iVar5 = iVar9;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar5,0x10);
  }
  param_1[1] = iVar9;
  return;
}

// 01452C50  FUN_01452c50  size=190  [run]
void FUN_01452c50(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 4);
  local_8 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      uVar4 = *(uint *)(*(int *)(param_1 + 4) + local_8 * 8);
      uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 4) + 4 + local_8 * 8);
      if ((local_8 < (int)uVar7) && (local_8 < (int)(uint)*(ushort *)(iVar3 + 4 + uVar7 * 8))) {
        uVar1 = *(ushort *)(iVar3 + uVar7 * 8);
        iVar5 = *(int *)(param_2 + 0x10);
        uVar2 = *(ushort *)(iVar3 + (uint)*(ushort *)(iVar3 + 4 + uVar7 * 8) * 8);
        iVar8 = iVar5 + 1;
        uVar7 = *(uint *)(param_2 + 0x14) & 0x3fffffff;
        if ((int)uVar7 < iVar8) {
          iVar6 = uVar7 * 2;
          if (iVar8 < iVar6) {
            iVar8 = iVar6;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_2 + 0xc),iVar8,0x10);
        }
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        puVar9 = (uint *)(iVar5 * 0x10 + *(int *)(param_2 + 0xc));
        *puVar9 = uVar4 & 0xffff;
        puVar9[1] = (uint)uVar2;
        puVar9[2] = (uint)uVar1;
        puVar9[3] = 0xffffffff;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 8));
  }
  return;
}

// 01452D10  FUN_01452d10  size=370  [run]
void FUN_01452d10(float *param_1,float *param_2,float *param_3,float *param_4,int *param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar3 = param_5[1];
  iVar5 = iVar3 + 1;
  if ((int)(param_5[2] & 0x3fffffffU) < iVar5) {
    iVar2 = (param_5[2] & 0x3fffffffU) * 2;
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_5,iVar5,0x10);
  }
  param_5[1] = param_5[1] + 1;
  pfVar4 = (float *)(iVar3 * 0x10 + *param_5);
  fVar7 = param_1[1] * (param_2[2] - param_3[2]) - param_1[2] * (param_2[1] - param_3[1]);
  fVar9 = param_1[2] * (*param_2 - *param_3) - *param_1 * (param_2[2] - param_3[2]);
  fVar11 = *param_1 * (param_2[1] - param_3[1]) - param_1[1] * (*param_2 - *param_3);
  fVar13 = param_1[3] * (param_2[3] - param_3[3]) - param_1[3] * (param_2[3] - param_3[3]);
  *pfVar4 = fVar7;
  pfVar4[1] = fVar9;
  pfVar4[2] = fVar11;
  pfVar4[3] = fVar13;
  if (1e-06 < (param_4[2] - param_3[2]) * fVar11 +
              (param_4[1] - param_3[1]) * fVar9 + (*param_4 - *param_3) * fVar7) {
    *pfVar4 = -fVar7;
    pfVar4[1] = -fVar9;
    pfVar4[2] = -fVar11;
    pfVar4[3] = -fVar13;
  }
  fVar7 = *pfVar4 * *pfVar4;
  fVar9 = pfVar4[1] * pfVar4[1];
  auVar6._8_4_ = pfVar4[2] * pfVar4[2];
  if (0.0001 < fVar9 + fVar7 + auVar6._8_4_) {
    auVar6._4_4_ = auVar6._8_4_;
    auVar6._0_4_ = auVar6._8_4_;
    auVar6._12_4_ = auVar6._8_4_;
    fVar8 = fVar9 + fVar7 + auVar6._8_4_;
    fVar10 = fVar9 + fVar7 + auVar6._8_4_;
    fVar12 = fVar9 + fVar7 + auVar6._8_4_;
    fVar14 = fVar9 + fVar7 + auVar6._8_4_;
    auVar1._4_4_ = fVar10;
    auVar1._0_4_ = fVar8;
    auVar1._8_4_ = fVar12;
    auVar1._12_4_ = fVar14;
    auVar6 = rsqrtps(auVar6,auVar1);
    fVar7 = auVar6._0_4_;
    fVar9 = auVar6._4_4_;
    fVar11 = auVar6._8_4_;
    fVar13 = auVar6._12_4_;
    fVar7 = *pfVar4 * (3.0 - fVar7 * fVar8 * fVar7) * fVar7 * 0.5;
    fVar9 = pfVar4[1] * (3.0 - fVar9 * fVar10 * fVar9) * fVar9 * 0.5;
    fVar11 = pfVar4[2] * (3.0 - fVar11 * fVar12 * fVar11) * fVar11 * 0.5;
    *pfVar4 = fVar7;
    pfVar4[1] = fVar9;
    pfVar4[2] = fVar11;
    pfVar4[3] = pfVar4[3] * (3.0 - fVar13 * fVar14 * fVar13) * fVar13 * 0.5;
    pfVar4[3] = -(fVar11 * param_2[2] + fVar9 * param_2[1] + fVar7 * *param_2);
    return;
  }
  iVar5 = param_5[1] + -1;
  if ((int)(param_5[2] & 0x3fffffffU) < iVar5) {
    iVar3 = (param_5[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_5,iVar3,0x10);
  }
  param_5[1] = iVar5;
  return;
}

// 01452E90  FUN_01452e90  size=254  [run]
void FUN_01452e90(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if ((int)(param_4[2] & 0x3fffffffU) < iVar3) {
    iVar4 = (param_4[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar4,2);
  }
  param_4[1] = iVar3;
  iVar3 = *(int *)(param_3 + 8);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 8);
      if ((*(short *)((int)puVar1 + 6) == 1) || (*(short *)((int)puVar1 + 6) == 2)) {
        *(undefined2 *)(*param_4 + iVar4 * 2) = *(undefined2 *)(param_3 + 8);
        if (*(uint *)(param_3 + 8) == (*(uint *)(param_3 + 0xc) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_3 + 4),8);
        }
        puVar2 = (undefined4 *)(*(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 8);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      }
      else {
        *(undefined2 *)(*param_4 + iVar4 * 2) = 0xffff;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  if (iVar3 < *(int *)(param_3 + 8)) {
    do {
      iVar4 = *(int *)(param_3 + 4) + iVar3 * 8;
      *(undefined2 *)(iVar4 + 2) =
           *(undefined2 *)(*param_4 + (uint)*(ushort *)(*(int *)(param_3 + 4) + 2 + iVar3 * 8) * 2);
      iVar3 = iVar3 + 1;
      *(undefined2 *)(iVar4 + 4) = *(undefined2 *)(*param_4 + (uint)*(ushort *)(iVar4 + 4) * 2);
    } while (iVar3 < *(int *)(param_3 + 8));
  }
  return;
}

// 01452FA0  FUN_01452fa0  size=653  [run]
void FUN_01452fa0(float *param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  ushort uVar3;
  short *psVar4;
  short *psVar5;
  undefined4 *puVar6;
  int iVar7;
  float fVar8;
  int local_c;
  float local_8;
  
  if (param_3[1] == 0) {
    local_8 = *(float *)(*param_4 + 4);
  }
  else {
    fVar8 = *(float *)(*param_3 + 4);
    local_8 = fVar8;
    if ((param_4[1] != 0) && (local_8 = *(float *)(*param_4 + 4), fVar8 < *(float *)(*param_4 + 4)))
    {
      local_8 = fVar8;
    }
  }
  psVar4 = (short *)param_2[1];
  local_c = 0;
  if (0 < param_3[1]) {
    do {
      fVar8 = *(float *)(*param_3 + 4 + local_c * 8) - local_8;
      if (*param_1 <= fVar8 && fVar8 != *param_1) break;
      psVar5 = *(short **)(*param_3 + local_c * 8);
      uVar3 = *(ushort *)*param_2;
      iVar7 = 0;
      fVar8 = (float)param_2[4] + fVar8;
      if (0 < param_5[1]) {
        puVar6 = (undefined4 *)*param_5;
        do {
          if (((*(short *)*puVar6 == *psVar5) && (*(short *)puVar6[1] == *psVar4)) &&
             (puVar6[3] == (uint)uVar3)) {
            pfVar2 = (float *)(*param_5 + 0x10 + iVar7 * 0x14);
            puVar1 = (undefined8 *)(*param_5 + iVar7 * 0x14);
            if (*pfVar2 <= fVar8 && fVar8 != *pfVar2) {
              *puVar1 = CONCAT44(psVar4,psVar5);
              puVar1[1] = (ulonglong)CONCAT24(uVar3,param_2);
              *(float *)(puVar1 + 2) = fVar8;
            }
            goto LAB_014530d2;
          }
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 5;
        } while (iVar7 < param_5[1]);
      }
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_5,0x14);
      }
      puVar1 = (undefined8 *)(*param_5 + param_5[1] * 0x14);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = CONCAT44(psVar4,psVar5);
        puVar1[1] = (ulonglong)CONCAT24(uVar3,param_2);
        *(float *)(puVar1 + 2) = fVar8;
      }
      param_5[1] = param_5[1] + 1;
LAB_014530d2:
      local_c = local_c + 1;
    } while (local_c < param_3[1]);
  }
  psVar4 = (short *)*param_2;
  param_3 = (int *)0x0;
  if (0 < param_4[1]) {
    do {
      fVar8 = *(float *)(*param_4 + 4 + (int)param_3 * 8) - local_8;
      if (*param_1 <= fVar8 && fVar8 != *param_1) {
        return;
      }
      psVar5 = *(short **)(*param_4 + (int)param_3 * 8);
      uVar3 = *(ushort *)param_2[1];
      iVar7 = 0;
      fVar8 = (float)param_2[4] + fVar8;
      if (0 < param_5[1]) {
        puVar6 = (undefined4 *)*param_5;
        do {
          if (((*(short *)*puVar6 == *psVar4) && (*(short *)puVar6[1] == *psVar5)) &&
             (puVar6[3] == (uint)uVar3)) {
            pfVar2 = (float *)(*param_5 + 0x10 + iVar7 * 0x14);
            puVar1 = (undefined8 *)(*param_5 + iVar7 * 0x14);
            if (*pfVar2 <= fVar8 && fVar8 != *pfVar2) {
              *puVar1 = CONCAT44(psVar5,psVar4);
              puVar1[1] = (ulonglong)CONCAT24(uVar3,param_2);
              *(float *)(puVar1 + 2) = fVar8;
            }
            goto LAB_014531f2;
          }
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 5;
        } while (iVar7 < param_5[1]);
      }
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_5,0x14);
      }
      puVar1 = (undefined8 *)(*param_5 + param_5[1] * 0x14);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = CONCAT44(psVar5,psVar4);
        puVar1[1] = (ulonglong)CONCAT24(uVar3,param_2);
        *(float *)(puVar1 + 2) = fVar8;
      }
      param_5[1] = param_5[1] + 1;
LAB_014531f2:
      param_3 = (int *)((int)param_3 + 1);
    } while ((int)param_3 < param_4[1]);
  }
  return;
}

// 01453240  FUN_01453240  size=2119  [run]
void FUN_01453240(float *param_1,float *param_2,size_t param_3,int *param_4,int *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *extraout_ECX;
  int extraout_EDX;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  size_t local_40;
  float local_3c;
  size_t local_38;
  float *local_34;
  int local_30;
  int local_2c;
  int local_28;
  float *local_24;
  void *local_20;
  float *local_1c;
  int local_18;
  int local_14;
  
  param_5[1] = 0;
  fVar25 = *param_1;
  fVar11 = param_1[1];
  fVar21 = param_1[2];
  fVar36 = param_1[3];
  if ((param_5[2] & 0x3fffffffU) == 0) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_5,0x10);
  }
  fVar37 = param_1[1];
  fVar23 = param_1[2];
  fVar16 = param_1[3];
  pfVar6 = (float *)(param_5[1] * 0x10 + *param_5);
  *pfVar6 = *param_1;
  pfVar6[1] = fVar37;
  pfVar6[2] = fVar23;
  pfVar6[3] = fVar16;
  param_5[1] = param_5[1] + 1;
  if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_5,0x10);
  }
  pfVar6 = (float *)(param_5[1] * 0x10 + *param_5);
  *pfVar6 = -fVar25;
  pfVar6[1] = -fVar11;
  pfVar6[2] = -fVar21;
  pfVar6[3] = -fVar36;
  param_5[1] = param_5[1] + 1;
  if (param_3 == 0) {
    local_20 = (void *)0x0;
  }
  else {
    local_40 = param_3;
    local_20 = (void *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_40);
    local_38 = local_40;
    if (local_40 != 0) goto LAB_0145330c;
  }
  local_38 = 0x80000000;
LAB_0145330c:
  if (0 < (int)param_3) {
    _memset(local_20,0,param_3);
  }
  fVar25 = *param_1;
  fVar11 = param_1[1];
  fVar21 = param_1[2];
  local_28 = -1;
  if (1e-06 <= ABS(1.0 - ABS(param_1[2]))) {
    fVar16 = fVar11 * 1.0;
    fVar23 = fVar25 * 0.0;
    fVar36 = fVar21;
    fVar37 = fVar21;
    fVar21 = fVar25;
  }
  else {
    fVar16 = fVar21 * 0.0;
    fVar23 = fVar11 * 1.0;
    fVar36 = fVar25;
    fVar37 = fVar11;
    fVar11 = fVar25;
  }
  fVar16 = fVar16 - fVar37 * 0.0;
  fVar21 = fVar36 * 0.0 - fVar21 * 1.0;
  fVar23 = fVar23 - fVar11 * 0.0;
  fVar25 = -3.40282e+38;
  iVar7 = 0;
  pfVar6 = param_2;
  if (0 < (int)param_3) {
    do {
      fVar11 = fVar23 * pfVar6[2] + fVar21 * pfVar6[1] + fVar16 * *pfVar6;
      if (fVar25 < fVar11) {
        fVar25 = fVar11;
        local_28 = iVar7;
      }
      iVar7 = iVar7 + 1;
      pfVar6 = pfVar6 + 4;
    } while (iVar7 < (int)param_3);
  }
  *(undefined1 *)((int)local_20 + local_28) = 1;
  if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_4,0x10);
  }
  fVar25 = 3.0;
  fVar11 = 3.0;
  fVar36 = 3.0;
  fVar37 = 3.0;
  pfVar8 = (float *)(param_4[1] * 0x10 + *param_4);
  pfVar6 = param_2 + local_28 * 4;
  fVar26 = pfVar6[1];
  fVar28 = pfVar6[2];
  fVar13 = pfVar6[3];
  *pfVar8 = *pfVar6;
  pfVar8[1] = fVar26;
  pfVar8[2] = fVar28;
  pfVar8[3] = fVar13;
  param_4[1] = param_4[1] + 1;
  fVar26 = (fVar21 * param_1[2] - fVar23 * param_1[1]) + fVar16;
  fVar28 = (fVar23 * *param_1 - fVar16 * param_1[2]) + fVar21;
  fVar23 = (fVar16 * param_1[1] - fVar21 * *param_1) + fVar23;
  local_2c = local_28;
  local_30 = -1;
  local_18 = -1;
  local_50 = 3.0;
  fStack_4c = 3.0;
  fStack_48 = 3.0;
  fStack_44 = 3.0;
  local_14 = local_28;
  pfVar6 = param_2;
  while( true ) {
    local_3c = -2.0;
    fVar21 = fVar26 * fVar26;
    fVar16 = fVar28 * fVar28;
    fVar13 = fVar23 * fVar23;
    auVar31._4_4_ = fVar21;
    auVar31._0_4_ = fVar21;
    auVar31._8_4_ = fVar21;
    auVar31._12_4_ = fVar21;
    fVar17 = fVar16 + fVar21 + fVar13;
    fVar22 = fVar16 + fVar21 + fVar13;
    fVar24 = fVar16 + fVar21 + fVar13;
    auVar32._4_4_ = fVar22;
    auVar32._0_4_ = fVar17;
    auVar32._8_4_ = fVar24;
    auVar32._12_4_ = fVar16 + fVar21 + fVar13;
    auVar32 = rsqrtps(auVar31,auVar32);
    fVar21 = auVar32._0_4_;
    fVar16 = auVar32._4_4_;
    fVar13 = auVar32._8_4_;
    iVar7 = 0;
    fVar26 = (float)(~-(uint)(fVar17 <= 0.0) &
                    (uint)((fVar25 - fVar21 * fVar17 * fVar21) * fVar21 * 0.5)) * fVar26;
    fVar28 = (float)(~-(uint)(fVar22 <= 0.0) &
                    (uint)((fVar11 - fVar16 * fVar22 * fVar16) * fVar16 * 0.5)) * fVar28;
    fVar23 = (float)(~-(uint)(fVar24 <= 0.0) &
                    (uint)((fVar36 - fVar13 * fVar24 * fVar13) * fVar13 * 0.5)) * fVar23;
    local_34 = (float *)0x7f7fffee;
    fVar21 = fVar26;
    fVar16 = fVar28;
    fVar13 = fVar23;
    pfVar8 = pfVar6;
    if (0 < (int)param_3) {
      do {
        local_1c = pfVar8;
        if (iVar7 != local_14) {
          pfVar6 = pfVar6 + local_14 * 4;
          fVar17 = *local_1c - *pfVar6;
          fVar24 = local_1c[1] - pfVar6[1];
          fVar14 = local_1c[2] - pfVar6[2];
          fVar27 = fVar16 * fVar14 - fVar13 * fVar24;
          fVar29 = fVar13 * fVar17 - fVar21 * fVar14;
          fVar30 = fVar21 * fVar24 - fVar16 * fVar17;
          fVar22 = fVar17 * fVar17;
          fVar12 = fVar24 * fVar24;
          fVar15 = fVar14 * fVar14;
          fVar18 = fVar12 + fVar22 + fVar15;
          auVar1._4_4_ = fVar12 + fVar22 + fVar15;
          auVar1._0_4_ = fVar18;
          auVar1._8_4_ = fVar12 + fVar22 + fVar15;
          auVar1._12_4_ = fVar12 + fVar22 + fVar15;
          auVar32 = rsqrtps(ZEXT816(0),auVar1);
          fVar20 = auVar32._0_4_;
          fVar22 = fVar27 * fVar27;
          fVar12 = fVar29 * fVar29;
          fVar15 = fVar30 * fVar30;
          fVar19 = fVar12 + fVar22 + fVar15;
          auVar2._4_4_ = fVar12 + fVar22 + fVar15;
          auVar2._0_4_ = fVar19;
          auVar2._8_4_ = fVar12 + fVar22 + fVar15;
          auVar2._12_4_ = fVar12 + fVar22 + fVar15;
          auVar32 = rsqrtps(auVar32,auVar2);
          fVar12 = auVar32._0_4_;
          fVar22 = 1.0 / (float)(~-(uint)(fVar18 <= 0.0) &
                                (uint)((fVar25 - fVar20 * fVar18 * fVar20) * fVar20 * 0.5 * fVar18))
          ;
          fVar12 = fVar22 * (float)(~-(uint)(fVar19 <= 0.0) &
                                   (uint)((fVar25 - fVar12 * fVar19 * fVar12) * fVar12 * 0.5 *
                                         fVar19));
          if (0.0 < param_1[2] * fVar30 + param_1[1] * fVar29 + *param_1 * fVar27) {
            fVar12 = fVar12 * -1.0;
          }
          auVar32 = ZEXT416((uint)fVar12);
          fVar10 = (float10)FUN_01452250(fVar22 * (fVar24 * fVar16 + fVar17 * fVar21 +
                                                  fVar14 * fVar13),fVar12);
          local_24 = (float *)(float)fVar10;
          pfVar6 = extraout_ECX;
          iVar7 = extraout_EDX;
          if (fVar10 < (float10)(float)local_34) {
            local_3c = auVar32._0_4_;
            local_34 = local_24;
            local_18 = extraout_EDX;
          }
        }
        local_1c = local_1c + 4;
        iVar7 = iVar7 + 1;
        pfVar8 = local_1c;
      } while (iVar7 < (int)param_3);
    }
    if (local_14 == local_28) {
      local_30 = local_18;
    }
    else {
      pfVar8 = pfVar6 + local_14 * 4;
      local_24 = pfVar6 + local_14 * 4;
      pfVar9 = pfVar6 + local_2c * 4;
      fVar14 = *pfVar8 - *pfVar9;
      fVar15 = pfVar8[1] - pfVar9[1];
      fVar18 = pfVar8[2] - pfVar9[2];
      fVar19 = pfVar8[3] - pfVar9[3];
      pfVar9 = pfVar6 + local_18 * 4;
      fVar17 = *pfVar8 - *pfVar9;
      fVar22 = pfVar8[1] - pfVar9[1];
      fVar24 = pfVar8[2] - pfVar9[2];
      fVar12 = pfVar8[3] - pfVar9[3];
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_5,0x10);
        pfVar6 = param_2;
        fVar21 = fVar26;
        fVar16 = fVar28;
        fVar13 = fVar23;
        fVar25 = local_50;
        fVar11 = fStack_4c;
        fVar36 = fStack_48;
        fVar37 = fStack_44;
      }
      local_1c = (float *)(param_5[1] * 0x10 + *param_5);
      param_5[1] = param_5[1] + 1;
      if (local_2c == local_18) {
        fVar27 = *param_1;
        fVar29 = param_1[1];
        fVar30 = param_1[2];
        fVar12 = param_1[3];
      }
      else {
        fVar27 = fVar24 * fVar15 - fVar22 * fVar18;
        fVar29 = fVar17 * fVar18 - fVar24 * fVar14;
        fVar30 = fVar22 * fVar14 - fVar17 * fVar15;
        fVar12 = fVar12 * fVar19 - fVar12 * fVar19;
      }
      fVar20 = fVar30 * fVar15 - fVar29 * fVar18;
      fVar18 = fVar27 * fVar18 - fVar30 * fVar14;
      fVar14 = fVar29 * fVar14 - fVar27 * fVar15;
      fVar12 = fVar12 * fVar19 - fVar12 * fVar19;
      *local_1c = fVar20;
      local_1c[1] = fVar18;
      local_1c[2] = fVar14;
      local_1c[3] = fVar12;
      if (1e-06 <= fVar24 * fVar14 + fVar22 * fVar18 + fVar17 * fVar20) {
        fVar17 = 1.0;
      }
      else {
        fVar17 = -1.0;
      }
      fVar20 = fVar17 * fVar20;
      fVar18 = fVar17 * fVar18;
      fVar14 = fVar17 * fVar14;
      fVar17 = fVar17 * fVar12;
      fVar22 = fVar20 * fVar20;
      fVar24 = fVar18 * fVar18;
      fVar12 = fVar14 * fVar14;
      auVar33._4_4_ = fVar22;
      auVar33._0_4_ = fVar22;
      auVar33._8_4_ = fVar22;
      auVar33._12_4_ = fVar22;
      fVar15 = fVar24 + fVar22 + fVar12;
      fVar19 = fVar24 + fVar22 + fVar12;
      fVar27 = fVar24 + fVar22 + fVar12;
      fVar12 = fVar24 + fVar22 + fVar12;
      auVar3._4_4_ = fVar19;
      auVar3._0_4_ = fVar15;
      auVar3._8_4_ = fVar27;
      auVar3._12_4_ = fVar12;
      auVar32 = rsqrtps(auVar33,auVar3);
      fVar22 = auVar32._0_4_;
      fVar24 = auVar32._4_4_;
      fVar29 = auVar32._8_4_;
      fVar30 = auVar32._12_4_;
      *local_1c = fVar20;
      local_1c[1] = fVar18;
      local_1c[2] = fVar14;
      local_1c[3] = fVar17;
      fVar20 = (float)(~-(uint)(fVar15 <= 0.0) &
                      (uint)((fVar25 - fVar22 * fVar15 * fVar22) * fVar22 * 0.5)) * fVar20;
      fVar18 = (float)(~-(uint)(fVar19 <= 0.0) &
                      (uint)((fVar11 - fVar24 * fVar19 * fVar24) * fVar24 * 0.5)) * fVar18;
      fVar14 = (float)(~-(uint)(fVar27 <= 0.0) &
                      (uint)((fVar36 - fVar29 * fVar27 * fVar29) * fVar29 * 0.5)) * fVar14;
      *local_1c = fVar20;
      local_1c[1] = fVar18;
      local_1c[2] = fVar14;
      local_1c[3] = (float)(~-(uint)(fVar12 <= 0.0) &
                           (uint)((fVar37 - fVar30 * fVar12 * fVar30) * fVar30 * 0.5)) * fVar17;
      local_1c[3] = -(local_24[2] * fVar14 + local_24[1] * fVar18 + *local_24 * fVar20);
    }
    if (*(char *)((int)local_20 + local_18) != '\0') break;
    *(undefined1 *)((int)local_20 + local_18) = 1;
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_4,0x10);
      pfVar6 = param_2;
      fVar21 = fVar26;
      fVar16 = fVar28;
      fVar13 = fVar23;
      fVar25 = local_50;
      fVar11 = fStack_4c;
      fVar36 = fStack_48;
      fVar37 = fStack_44;
    }
    pfVar9 = (float *)(param_4[1] * 0x10 + *param_4);
    pfVar8 = pfVar6 + local_18 * 4;
    fVar23 = pfVar8[1];
    fVar26 = pfVar8[2];
    fVar28 = pfVar8[3];
    *pfVar9 = *pfVar8;
    pfVar9[1] = fVar23;
    pfVar9[2] = fVar26;
    pfVar9[3] = fVar28;
    param_4[1] = param_4[1] + 1;
    pfVar8 = pfVar6 + local_18 * 4;
    pfVar9 = pfVar6 + local_14 * 4;
    fVar26 = *pfVar8 - *pfVar9;
    fVar28 = pfVar8[1] - pfVar9[1];
    fVar23 = pfVar8[2] - pfVar9[2];
    fVar17 = fVar26 * fVar26;
    fVar22 = fVar28 * fVar28;
    fVar24 = fVar23 * fVar23;
    auVar34._4_4_ = fVar17;
    auVar34._0_4_ = fVar17;
    auVar34._8_4_ = fVar17;
    auVar34._12_4_ = fVar17;
    fVar12 = fVar22 + fVar17 + fVar24;
    fVar14 = fVar22 + fVar17 + fVar24;
    fVar15 = fVar22 + fVar17 + fVar24;
    auVar4._4_4_ = fVar14;
    auVar4._0_4_ = fVar12;
    auVar4._8_4_ = fVar15;
    auVar4._12_4_ = fVar22 + fVar17 + fVar24;
    auVar32 = rsqrtps(auVar34,auVar4);
    fVar17 = auVar32._0_4_;
    fVar22 = auVar32._4_4_;
    fVar24 = auVar32._8_4_;
    fVar26 = (float)(~-(uint)(fVar12 <= 0.0) &
                    (uint)((fVar25 - fVar17 * fVar12 * fVar17) * fVar17 * 0.5)) * fVar26;
    fVar28 = (float)(~-(uint)(fVar14 <= 0.0) &
                    (uint)((fVar11 - fVar22 * fVar14 * fVar22) * fVar22 * 0.5)) * fVar28;
    fVar23 = (float)(~-(uint)(fVar15 <= 0.0) &
                    (uint)((fVar36 - fVar24 * fVar15 * fVar24) * fVar24 * 0.5)) * fVar23;
    if (0.0001 <= local_3c) {
      fVar26 = fVar26 + fVar21;
      fVar28 = fVar28 + fVar16;
      fVar23 = fVar23 + fVar13;
    }
    local_2c = local_14;
    local_14 = local_18;
  }
  pfVar8 = pfVar6 + local_18 * 4;
  fVar21 = *pfVar8;
  fVar23 = pfVar8[1];
  fVar16 = pfVar8[2];
  fVar26 = pfVar8[3];
  pfVar8 = pfVar6 + local_18 * 4;
  pfVar9 = pfVar6 + local_14 * 4;
  fVar28 = pfVar9[3];
  fVar24 = fVar21 - *pfVar9;
  fVar12 = fVar23 - pfVar9[1];
  fVar14 = fVar16 - pfVar9[2];
  pfVar6 = pfVar6 + local_30 * 4;
  fVar13 = *pfVar6;
  fVar17 = pfVar6[1];
  fVar22 = pfVar6[2];
  if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_5,0x10);
    fVar25 = local_50;
    fVar11 = fStack_4c;
    fVar36 = fStack_48;
    fVar37 = fStack_44;
  }
  iVar7 = param_5[1];
  param_5[1] = param_5[1] + 1;
  pfVar6 = (float *)*param_5;
  fVar15 = pfVar6[2] * fVar12 - pfVar6[1] * fVar14;
  fVar14 = *pfVar6 * fVar14 - pfVar6[2] * fVar24;
  fVar24 = pfVar6[1] * fVar24 - *pfVar6 * fVar12;
  fVar26 = pfVar6[3] * (fVar26 - fVar28) - pfVar6[3] * (fVar26 - fVar28);
  pfVar6 = (float *)(iVar7 * 0x10 + *param_5);
  *pfVar6 = fVar15;
  pfVar6[1] = fVar14;
  pfVar6[2] = fVar24;
  pfVar6[3] = fVar26;
  if (1e-06 <= (fVar16 - fVar22) * fVar24 + (fVar23 - fVar17) * fVar14 + (fVar21 - fVar13) * fVar15)
  {
    fVar21 = 1.0;
  }
  else {
    fVar21 = -1.0;
  }
  fVar15 = fVar21 * fVar15;
  fVar14 = fVar21 * fVar14;
  fVar24 = fVar21 * fVar24;
  fVar21 = fVar21 * fVar26;
  fVar23 = fVar15 * fVar15;
  fVar16 = fVar14 * fVar14;
  fVar26 = fVar24 * fVar24;
  auVar35._4_4_ = fVar23;
  auVar35._0_4_ = fVar23;
  auVar35._8_4_ = fVar23;
  auVar35._12_4_ = fVar23;
  fVar28 = fVar16 + fVar23 + fVar26;
  fVar13 = fVar16 + fVar23 + fVar26;
  fVar17 = fVar16 + fVar23 + fVar26;
  fVar26 = fVar16 + fVar23 + fVar26;
  auVar5._4_4_ = fVar13;
  auVar5._0_4_ = fVar28;
  auVar5._8_4_ = fVar17;
  auVar5._12_4_ = fVar26;
  auVar32 = rsqrtps(auVar35,auVar5);
  *pfVar6 = fVar15;
  pfVar6[1] = fVar14;
  pfVar6[2] = fVar24;
  pfVar6[3] = fVar21;
  fVar23 = auVar32._0_4_;
  fVar16 = auVar32._4_4_;
  fVar22 = auVar32._8_4_;
  fVar12 = auVar32._12_4_;
  fVar15 = (float)(~-(uint)(fVar28 <= 0.0) &
                  (uint)((fVar25 - fVar23 * fVar28 * fVar23) * fVar23 * 0.5)) * fVar15;
  fVar14 = (float)(~-(uint)(fVar13 <= 0.0) &
                  (uint)((fVar11 - fVar16 * fVar13 * fVar16) * fVar16 * 0.5)) * fVar14;
  fVar24 = (float)(~-(uint)(fVar17 <= 0.0) &
                  (uint)((fVar36 - fVar22 * fVar17 * fVar22) * fVar22 * 0.5)) * fVar24;
  *pfVar6 = fVar15;
  pfVar6[1] = fVar14;
  pfVar6[2] = fVar24;
  pfVar6[3] = (float)(~-(uint)(fVar26 <= 0.0) &
                     (uint)((fVar37 - fVar12 * fVar26 * fVar12) * fVar12 * 0.5)) * fVar21;
  pfVar6[3] = -(fVar24 * pfVar8[2] + fVar14 * pfVar8[1] + fVar15 * *pfVar8);
  if (-1 < (int)local_38) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_38 & 0x3fffffff);
  }
  return;
}

// 01453AA0  FUN_01453aa0  size=1017  [run]
void FUN_01453aa0(int *param_1,float param_2)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar29 [16];
  float fVar31;
  undefined1 auVar30 [16];
  float local_60;
  float fStack_5c;
  float fStack_58;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar8 = 0;
  if (0 < param_1[1]) {
    iVar9 = 0;
    do {
      *(undefined4 *)(*param_1 + 0xc + iVar9) = 0;
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar8 < param_1[1]);
  }
  iVar8 = param_1[1];
  if (0 < iVar8) {
    local_18 = 0;
    local_28 = 1;
    do {
      local_20 = local_28;
      iVar9 = local_28;
      local_14 = local_18;
      if (local_28 < iVar8) {
        do {
          local_14 = local_14 + 0x10;
          iVar9 = iVar9 + 1;
          iVar10 = local_14;
          local_1c = iVar9;
          if (iVar9 < iVar8) {
            do {
              iVar10 = iVar10 + 0x10;
              iVar8 = *param_1;
              if (((*(float *)(iVar8 + 0xc + local_18) != 1.0) &&
                  (*(float *)(iVar8 + 0xc + local_14) != 1.0)) &&
                 (*(float *)(iVar8 + 0xc + iVar10) != 1.0)) {
                pauVar1 = (undefined1 (*) [12])(iVar8 + local_14);
                auVar7 = *pauVar1;
                pfVar2 = (float *)(iVar8 + local_18);
                fVar25 = *pfVar2 - *(float *)*pauVar1;
                fVar27 = pfVar2[1] - *(float *)(*pauVar1 + 4);
                fVar28 = pfVar2[2] - *(float *)(*pauVar1 + 8);
                fVar11 = fVar25 * fVar25;
                fVar12 = fVar27 * fVar27;
                fVar13 = fVar28 * fVar28;
                fVar16 = fVar12 + fVar11 + fVar13;
                fVar19 = fVar12 + fVar11 + fVar13;
                fVar22 = fVar12 + fVar11 + fVar13;
                auVar29._4_4_ = fVar19;
                auVar29._0_4_ = fVar16;
                auVar29._8_4_ = fVar22;
                auVar29._12_4_ = fVar12 + fVar11 + fVar13;
                auVar29 = rsqrtps(in_XMM4,auVar29);
                fVar11 = auVar29._0_4_;
                fVar12 = auVar29._4_4_;
                fVar13 = auVar29._8_4_;
                pfVar3 = (float *)(iVar8 + iVar10);
                fVar25 = (float)(~-(uint)(fVar16 <= 0.0) &
                                (uint)((3.0 - fVar11 * fVar16 * fVar11) * fVar11 * 0.5)) * fVar25;
                fVar27 = (float)(~-(uint)(fVar19 <= 0.0) &
                                (uint)((3.0 - fVar12 * fVar19 * fVar12) * fVar12 * 0.5)) * fVar27;
                fVar28 = (float)(~-(uint)(fVar22 <= 0.0) &
                                (uint)((3.0 - fVar13 * fVar22 * fVar13) * fVar13 * 0.5)) * fVar28;
                fVar11 = -fVar25;
                fVar19 = -fVar27;
                fVar14 = -fVar28;
                fVar13 = *pfVar2 - *pfVar3;
                fVar22 = pfVar2[1] - pfVar3[1];
                fVar31 = pfVar2[2] - pfVar3[2];
                local_60 = auVar7._0_4_;
                fStack_5c = auVar7._4_4_;
                fStack_58 = auVar7._8_4_;
                local_60 = *pfVar3 - local_60;
                fStack_5c = pfVar3[1] - fStack_5c;
                fStack_58 = pfVar3[2] - fStack_58;
                fVar12 = fVar13 * fVar13;
                fVar16 = fVar22 * fVar22;
                fVar15 = fVar31 * fVar31;
                auVar26._4_4_ = fVar12;
                auVar26._0_4_ = fVar12;
                auVar26._8_4_ = fVar12;
                auVar26._12_4_ = fVar12;
                fVar17 = fVar16 + fVar12 + fVar15;
                fVar20 = fVar16 + fVar12 + fVar15;
                fVar23 = fVar16 + fVar12 + fVar15;
                auVar5._4_4_ = fVar20;
                auVar5._0_4_ = fVar17;
                auVar5._8_4_ = fVar23;
                auVar5._12_4_ = fVar16 + fVar12 + fVar15;
                auVar29 = rsqrtps(auVar26,auVar5);
                fVar12 = auVar29._0_4_;
                fVar16 = auVar29._4_4_;
                fVar15 = auVar29._8_4_;
                fVar13 = (float)(~-(uint)(fVar17 <= 0.0) &
                                (uint)((3.0 - fVar12 * fVar17 * fVar12) * fVar12 * 0.5)) * fVar13;
                fVar22 = (float)(~-(uint)(fVar20 <= 0.0) &
                                (uint)((3.0 - fVar16 * fVar20 * fVar16) * fVar16 * 0.5)) * fVar22;
                fVar31 = (float)(~-(uint)(fVar23 <= 0.0) &
                                (uint)((3.0 - fVar15 * fVar23 * fVar15) * fVar15 * 0.5)) * fVar31;
                fVar12 = -fVar13;
                fVar15 = -fVar22;
                fVar20 = -fVar31;
                fVar16 = local_60 * local_60;
                fVar17 = fStack_5c * fStack_5c;
                fVar23 = fStack_58 * fStack_58;
                auVar30._4_4_ = fVar16;
                auVar30._0_4_ = fVar16;
                auVar30._8_4_ = fVar16;
                auVar30._12_4_ = fVar16;
                fVar18 = fVar17 + fVar16 + fVar23;
                fVar21 = fVar17 + fVar16 + fVar23;
                fVar24 = fVar17 + fVar16 + fVar23;
                auVar6._4_4_ = fVar21;
                auVar6._0_4_ = fVar18;
                auVar6._8_4_ = fVar24;
                auVar6._12_4_ = fVar17 + fVar16 + fVar23;
                auVar29 = rsqrtps(auVar30,auVar6);
                fVar16 = auVar29._0_4_;
                fVar17 = auVar29._4_4_;
                fVar23 = auVar29._8_4_;
                local_60 = (float)(~-(uint)(fVar18 <= 0.0) &
                                  (uint)((3.0 - fVar16 * fVar18 * fVar16) * fVar16 * 0.5)) *
                           local_60;
                fStack_5c = (float)(~-(uint)(fVar21 <= 0.0) &
                                   (uint)((3.0 - fVar17 * fVar21 * fVar17) * fVar17 * 0.5)) *
                            fStack_5c;
                fStack_58 = (float)(~-(uint)(fVar24 <= 0.0) &
                                   (uint)((3.0 - fVar23 * fVar24 * fVar23) * fVar23 * 0.5)) *
                            fStack_58;
                fVar16 = fVar31 * fVar27 - fVar22 * fVar28;
                fVar17 = fVar13 * fVar28 - fVar31 * fVar25;
                fVar23 = fVar22 * fVar25 - fVar13 * fVar27;
                fVar18 = -local_60;
                fVar21 = -fStack_5c;
                fVar24 = -fStack_58;
                if ((param_2 <= fVar17 * fVar17 + fVar16 * fVar16 + fVar23 * fVar23) ||
                   (in_XMM4 = ZEXT816(0), 0.0 <= fVar22 * fVar27 + fVar13 * fVar25 + fVar31 * fVar28
                   )) {
                  in_XMM4 = ZEXT816(0);
                  fVar25 = fStack_5c * fVar20 - fStack_58 * fVar15;
                  fVar13 = fStack_58 * fVar12 - local_60 * fVar20;
                  fVar16 = local_60 * fVar15 - fStack_5c * fVar12;
                  if ((param_2 <= fVar16 * fVar16 + fVar13 * fVar13 + fVar25 * fVar25) ||
                     (0.0 <= fStack_5c * fVar15 + local_60 * fVar12 + fStack_58 * fVar20)) {
                    fVar25 = fVar24 * fVar19 - fVar21 * fVar14;
                    fVar12 = fVar18 * fVar14 - fVar24 * fVar11;
                    fVar13 = fVar21 * fVar11 - fVar18 * fVar19;
                    if ((fVar13 * fVar13 + fVar12 * fVar12 + fVar25 * fVar25 < param_2) &&
                       (fVar21 * fVar19 + fVar18 * fVar11 + fVar24 * fVar14 < 0.0)) {
                      *(undefined4 *)(iVar8 + 0xc + local_14) = 0x3f800000;
                    }
                  }
                  else {
                    *(undefined4 *)(iVar8 + 0xc + iVar10) = 0x3f800000;
                  }
                }
                else {
                  *(undefined4 *)(iVar8 + 0xc + local_18) = 0x3f800000;
                }
              }
              local_1c = local_1c + 1;
            } while (local_1c < param_1[1]);
          }
          iVar8 = param_1[1];
          local_20 = local_20 + 1;
        } while (local_20 < iVar8);
      }
      iVar8 = param_1[1];
      local_18 = local_18 + 0x10;
      bVar4 = local_28 < iVar8;
      local_28 = local_28 + 1;
    } while (bVar4);
  }
  FUN_01452b50(param_1);
  return;
}

// 01453EA0  FUN_01453ea0  size=1690  [run]
void FUN_01453ea0(int *param_1,float param_2,int param_3,char *param_4,undefined1 *param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int iVar7;
  float fVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  ushort *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float local_44;
  float local_3c;
  int local_34;
  float local_28;
  float local_24;
  float *local_20;
  float *local_1c;
  uint local_18;
  uint local_14;
  
  *param_5 = 0;
  if (*param_4 != '\0') {
    iVar4 = param_1[1];
    iVar5 = *param_1;
    iVar7 = 0;
    if (0 < param_1[2]) {
      do {
        *(undefined2 *)(param_1[1] + 6 + iVar7 * 8) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1[2]);
    }
    local_34 = 0;
    if (0 < param_1[2]) {
      do {
        puVar1 = (ushort *)(param_1[1] + local_34 * 8);
        if (*(short *)(param_1[1] + 6 + local_34 * 8) != 1) {
          puVar14 = (ushort *)(iVar4 + (uint)puVar1[1] * 8);
          puVar1[3] = 1;
          puVar14[3] = 1;
          fVar15 = (float)(uint)*puVar1;
          fVar8 = (float)(uint)*puVar14;
          pfVar9 = (float *)((int)fVar15 * 0x10 + iVar5);
          pfVar12 = (float *)((int)fVar8 * 0x10 + iVar5);
          local_3c = 1e-06;
          fVar21 = *pfVar12 - *pfVar9;
          fVar24 = pfVar12[1] - pfVar9[1];
          fVar25 = pfVar12[2] - pfVar9[2];
          uVar10 = 0;
          uVar13 = 0x80000000;
          local_44 = fVar25 * fVar25 + fVar24 * fVar24 + fVar21 * fVar21;
          local_1c = (float *)0x0;
          local_14 = 0x80000000;
          local_18 = 0;
          local_28 = fVar15;
          local_24 = fVar8;
          if ((((fVar8 != fVar15) && (pfVar9[3] == 0.0)) && (pfVar12[3] == 0.0)) &&
             ((int)param_2 < param_3 + 1)) {
            pfVar12 = (float *)((int)param_2 * 0x10 + iVar5);
            fVar16 = param_2;
            do {
              if (((fVar15 != fVar16) && (fVar8 != fVar16)) &&
                 (pfVar12[3] == (float)(undefined *)0x0)) {
                fVar18 = *pfVar12 - *pfVar9;
                fVar19 = pfVar12[1] - pfVar9[1];
                fVar20 = pfVar12[2] - pfVar9[2];
                fVar26 = fVar19 * fVar24 + fVar18 * fVar21 + fVar20 * fVar25;
                fVar17 = fVar20 * fVar24 - fVar19 * fVar25;
                fVar20 = fVar18 * fVar25 - fVar20 * fVar21;
                fVar18 = fVar19 * fVar21 - fVar18 * fVar24;
                if (fVar18 * fVar18 + fVar20 * fVar20 + fVar17 * fVar17 < *(float *)(param_4 + 8)) {
                  uVar13 = uVar13 & 0x3fffffff;
                  if (local_3c <= fVar26) {
                    if (fVar26 <= local_44) {
                      if (uVar10 == uVar13) {
                        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,4);
                        uVar10 = local_18;
                      }
                      local_1c[uVar10] = fVar16;
                    }
                    else {
                      if (uVar10 == uVar13) {
                        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,4);
                        uVar10 = local_18;
                      }
                      local_1c[uVar10] = local_24;
                      local_44 = fVar26;
                      local_24 = fVar16;
                    }
                  }
                  else {
                    if (uVar10 == uVar13) {
                      FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,4);
                      uVar10 = local_18;
                    }
                    local_1c[uVar10] = local_28;
                    local_3c = fVar26;
                    local_28 = fVar16;
                  }
                  uVar10 = local_18 + 1;
                  uVar13 = local_14;
                  local_18 = uVar10;
                }
              }
              fVar16 = (float)((int)fVar16 + 1);
              pfVar12 = pfVar12 + 4;
            } while ((int)fVar16 < param_3 + 1);
          }
          iVar7 = 0;
          if (0 < (int)uVar10) {
            do {
              fVar8 = local_1c[iVar7];
              if ((fVar8 != local_28) && (fVar8 != local_24)) {
                *(undefined4 *)(iVar5 + 0xc + (int)fVar8 * 0x10) = 0x3f800000;
                *param_5 = 1;
                uVar10 = local_18;
              }
              iVar7 = iVar7 + 1;
              uVar13 = local_14;
            } while (iVar7 < (int)uVar10);
          }
          local_18 = 0;
          if (-1 < (int)uVar13) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,uVar13 * 4);
          }
        }
        local_34 = local_34 + 1;
      } while (local_34 < param_1[2]);
    }
    iVar7 = 0;
    if (0 < param_1[2]) {
      do {
        *(undefined2 *)(param_1[1] + 6 + iVar7 * 8) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1[2]);
    }
    if ((2 < param_3 - (int)param_2) && (2 < param_1[2])) {
      local_24 = param_2;
      if ((int)param_2 < param_3 + 1) {
        local_20 = (float *)(iVar5 + 0xc + (int)param_2 * 0x10);
        do {
          if (*local_20 == (float)(undefined *)0x0) {
            iVar7 = 0;
            local_1c = (float *)0x0;
            local_18 = 0;
            local_14 = 0x80000000;
            local_28 = 0.0;
            if (0 < param_1[2]) {
              do {
                if ((*(short *)(param_1[1] + 6 + (int)local_28 * 8) != 1) &&
                   ((float)(uint)*(ushort *)(param_1[1] + (int)local_28 * 8) == local_24)) {
                  *(undefined2 *)(param_1[1] + 6 + (int)local_28 * 8) = 1;
                  puVar1 = (ushort *)
                           (iVar4 + (uint)*(ushort *)(param_1[1] + 2 + (int)local_28 * 8) * 8);
                  puVar14 = puVar1;
                  do {
                    uVar10 = local_18;
                    *(undefined2 *)(iVar4 + 6 + (uint)puVar14[2] * 8) = 1;
                    puVar2 = (ushort *)(iVar4 + (uint)puVar14[2] * 8);
                    pfVar9 = (float *)(iVar5 + (uint)*puVar2 * 0x10);
                    pfVar12 = (float *)(iVar5 + (uint)*puVar14 * 0x10);
                    pfVar3 = (float *)(iVar5 + (uint)*(ushort *)(iVar4 + (uint)puVar2[2] * 8) * 0x10
                                      );
                    iVar7 = local_18 + 1;
                    fVar8 = *pfVar12 - *pfVar9;
                    fVar15 = pfVar12[1] - pfVar9[1];
                    fVar21 = pfVar12[2] - pfVar9[2];
                    fVar24 = pfVar12[3] - pfVar9[3];
                    fVar25 = *pfVar3 - *pfVar9;
                    fVar16 = pfVar3[1] - pfVar9[1];
                    fVar17 = pfVar3[2] - pfVar9[2];
                    fVar20 = pfVar3[3] - pfVar9[3];
                    if ((int)(local_14 & 0x3fffffff) < iVar7) {
                      iVar11 = (local_14 & 0x3fffffff) * 2;
                      if (iVar7 < iVar11) {
                        iVar7 = iVar11;
                      }
                      FUN_0100a210(&PTR_vftable_018e9b94,&local_1c,iVar7,0x10);
                    }
                    iVar7 = local_18 + 1;
                    fVar18 = fVar17 * fVar15 - fVar16 * fVar21;
                    fVar17 = fVar25 * fVar21 - fVar17 * fVar8;
                    fVar25 = fVar16 * fVar8 - fVar25 * fVar15;
                    fVar8 = fVar18 * fVar18;
                    fVar15 = fVar17 * fVar17;
                    fVar21 = fVar25 * fVar25;
                    auVar27._4_4_ = fVar8;
                    auVar27._0_4_ = fVar8;
                    auVar27._8_4_ = fVar8;
                    auVar27._12_4_ = fVar8;
                    auVar23._0_4_ = fVar15 + fVar8 + fVar21;
                    auVar23._4_4_ = fVar15 + fVar8 + fVar21;
                    auVar23._8_4_ = fVar15 + fVar8 + fVar21;
                    auVar23._12_4_ = fVar15 + fVar8 + fVar21;
                    auVar27 = rsqrtps(auVar27,auVar23);
                    fVar8 = auVar27._0_4_;
                    fVar15 = auVar27._4_4_;
                    fVar21 = auVar27._8_4_;
                    fVar16 = auVar27._12_4_;
                    pfVar9 = local_1c + uVar10 * 4;
                    *pfVar9 = (float)(~-(uint)(auVar23._0_4_ <= 0.0) &
                                     (uint)((3.0 - fVar8 * auVar23._0_4_ * fVar8) * fVar8 * 0.5)) *
                              fVar18;
                    pfVar9[1] = (float)(~-(uint)(auVar23._4_4_ <= 0.0) &
                                       (uint)((3.0 - fVar15 * auVar23._4_4_ * fVar15) * fVar15 * 0.5
                                             )) * fVar17;
                    pfVar9[2] = (float)(~-(uint)(auVar23._8_4_ <= 0.0) &
                                       (uint)((3.0 - fVar21 * auVar23._8_4_ * fVar21) * fVar21 * 0.5
                                             )) * fVar25;
                    pfVar9[3] = (float)(~-(uint)(auVar23._12_4_ <= 0.0) &
                                       (uint)((3.0 - fVar16 * auVar23._12_4_ * fVar16) *
                                             fVar16 * 0.5)) * (fVar20 * fVar24 - fVar20 * fVar24);
                    puVar14 = (ushort *)
                              (iVar4 + (uint)*(ushort *)(iVar4 + 2 + (uint)puVar14[2] * 8) * 8);
                    local_18 = iVar7;
                  } while (puVar14 != puVar1);
                }
                local_28 = (float)((int)local_28 + 1);
              } while ((int)local_28 < param_1[2]);
              if (0 < iVar7) {
                auVar22._0_12_ = ZEXT812(0);
                auVar22._12_4_ = 0;
                pfVar9 = local_1c;
                iVar11 = iVar7;
                auVar23 = ZEXT816(0);
                do {
                  auVar28._0_4_ = auVar23._0_4_ + *pfVar9;
                  auVar28._4_4_ = auVar23._4_4_ + pfVar9[1];
                  auVar28._8_4_ = auVar23._8_4_ + pfVar9[2];
                  auVar28._12_4_ = auVar23._12_4_ + pfVar9[3];
                  pfVar9 = pfVar9 + 4;
                  iVar11 = iVar11 + -1;
                  auVar23 = auVar28;
                } while (iVar11 != 0);
                fVar8 = auVar28._0_4_ * auVar28._0_4_;
                fVar15 = auVar28._4_4_ * auVar28._4_4_;
                fVar21 = auVar28._8_4_ * auVar28._8_4_;
                if (*(float *)(param_4 + 0xc) < fVar15 + fVar8 + fVar21) {
                  fVar24 = fVar15 + fVar8 + fVar21;
                  fVar25 = fVar15 + fVar8 + fVar21;
                  fVar16 = fVar15 + fVar8 + fVar21;
                  auVar6._4_4_ = fVar25;
                  auVar6._0_4_ = fVar24;
                  auVar6._8_4_ = fVar16;
                  auVar6._12_4_ = fVar15 + fVar8 + fVar21;
                  auVar23 = rsqrtps(auVar22,auVar6);
                  fVar8 = auVar23._0_4_;
                  fVar15 = auVar23._4_4_;
                  fVar21 = auVar23._8_4_;
                  iVar11 = 0;
                  if (0 < iVar7) {
                    pfVar9 = local_1c;
                    do {
                      if (pfVar9[2] *
                          (float)(~-(uint)(fVar16 <= 0.0) &
                                 (uint)((3.0 - fVar21 * fVar16 * fVar21) * fVar21 * 0.5)) *
                          auVar28._8_4_ +
                          pfVar9[1] *
                          (float)(~-(uint)(fVar25 <= 0.0) &
                                 (uint)((3.0 - fVar15 * fVar25 * fVar15) * fVar15 * 0.5)) *
                          auVar28._4_4_ +
                          *pfVar9 * (float)(~-(uint)(fVar24 <= 0.0) &
                                           (uint)((3.0 - fVar8 * fVar24 * fVar8) * fVar8 * 0.5)) *
                                    auVar28._0_4_ < 1.0 - *(float *)(param_4 + 0xc))
                      goto LAB_014544e5;
                      iVar11 = iVar11 + 1;
                      pfVar9 = pfVar9 + 4;
                    } while (iVar11 < (int)local_18);
                  }
                  *local_20 = 1.0;
                  *param_5 = 1;
                }
              }
            }
LAB_014544e5:
            local_18 = 0;
            if (-1 < (int)local_14) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
            }
          }
          local_20 = local_20 + 4;
          local_24 = (float)((int)local_24 + 1);
        } while ((int)local_24 < param_3 + 1);
      }
    }
  }
  return;
}

// 01454540  FUN_01454540  size=3364  [run]
void FUN_01454540(undefined1 *param_1,int param_2,int *param_3,int *param_4,float *param_5,
                 char *param_6,int *param_7,int *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ushort *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char *pcVar19;
  ushort *puVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  uint uVar24;
  float *pfVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar56;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0 [4];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [8];
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  int local_5c;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  ushort *local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ushort *local_24;
  uint local_20;
  ushort *local_1c;
  int local_18;
  int local_14;
  
  local_5c = *param_3;
  local_14 = param_3[1];
  local_18 = 0;
  if (0 < param_3[2]) {
    do {
      fStack_88 = *(float *)(param_3[1] + local_18 * 8);
      local_1c = (ushort *)(uint)*(ushort *)(param_3[1] + 4 + local_18 * 8);
      local_24 = (ushort *)(uint)*(ushort *)(local_14 + 4 + (int)local_1c * 8);
      if ((local_18 < (int)local_1c) && (local_18 < (int)local_24)) {
        iVar21 = param_7[1];
        iVar26 = iVar21 + 1;
        if ((int)(param_7[2] & 0x3fffffffU) < iVar26) {
          iVar23 = (param_7[2] & 0x3fffffffU) * 2;
          if (iVar26 < iVar23) {
            iVar26 = iVar23;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,param_7,iVar26,0x10);
        }
        param_7[1] = param_7[1] + 1;
        iVar26 = *param_3;
        uVar1 = *(undefined8 *)(iVar26 + ((uint)fStack_88 & 0xffff) * 0x10);
        uVar2 = *(undefined8 *)(iVar26 + 8 + ((uint)fStack_88 & 0xffff) * 0x10);
        local_b0._0_4_ = (float)uVar1;
        local_b0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        uStack_a8._0_4_ = (float)uVar2;
        uStack_a8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_54 = (ushort *)(local_14 + (int)local_1c * 8);
        uVar3 = *(undefined8 *)(iVar26 + (uint)*local_54 * 0x10);
        uVar4 = *(undefined8 *)(iVar26 + 8 + (uint)*local_54 * 0x10);
        local_d0 = (float)uVar3;
        fStack_cc = (float)((ulonglong)uVar3 >> 0x20);
        fStack_c8 = (float)uVar4;
        fStack_c4 = (float)((ulonglong)uVar4 >> 0x20);
        local_1c = (ushort *)(local_14 + (int)local_24 * 8);
        pfVar25 = (float *)(iVar21 * 0x10 + *param_7);
        local_a0 = *(undefined1 (*) [8])(iVar26 + (uint)*local_1c * 0x10);
        uStack_98 = *(undefined8 *)(iVar26 + 8 + (uint)*local_1c * 0x10);
        auVar14 = _local_a0;
        fVar37 = (float)local_b0 - local_d0;
        fVar38 = local_b0._4_4_ - fStack_cc;
        fVar39 = (float)uStack_a8 - fStack_c8;
        local_c0[0] = 0.5;
        local_c0[1] = 0.5;
        local_c0[2] = 0.5;
        local_c0[3] = 0.5;
        fVar27 = fVar37 * fVar37;
        fVar28 = fVar38 * fVar38;
        fVar29 = fVar39 * fVar39;
        fVar30 = fVar28 + fVar27 + fVar29;
        fVar31 = fVar28 + fVar27 + fVar29;
        fVar33 = fVar28 + fVar27 + fVar29;
        fVar29 = fVar28 + fVar27 + fVar29;
        auVar49._4_4_ = fVar31;
        auVar49._0_4_ = fVar30;
        auVar49._8_4_ = fVar33;
        auVar49._12_4_ = fVar29;
        auVar49 = rsqrtps(in_XMM6,auVar49);
        fVar27 = auVar49._0_4_;
        fVar28 = auVar49._4_4_;
        fVar34 = auVar49._8_4_;
        fVar32 = auVar49._12_4_;
        local_a0._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
        uStack_98._4_4_ = (float)((ulonglong)uStack_98 >> 0x20);
        fVar37 = fVar37 * (float)(~-(uint)(fVar30 <= 0.0) &
                                 (uint)((3.0 - fVar27 * fVar30 * fVar27) * fVar27 * 0.5));
        fVar38 = fVar38 * (float)(~-(uint)(fVar31 <= 0.0) &
                                 (uint)((3.0 - fVar28 * fVar31 * fVar28) * fVar28 * 0.5));
        fVar39 = fVar39 * (float)(~-(uint)(fVar33 <= 0.0) &
                                 (uint)((3.0 - fVar34 * fVar33 * fVar34) * fVar34 * 0.5));
        fVar40 = (uStack_a8._4_4_ - fStack_c4) *
                 (float)(~-(uint)(fVar29 <= 0.0) &
                        (uint)((3.0 - fVar32 * fVar29 * fVar32) * fVar32 * 0.5));
        local_d0 = local_d0 - (float)local_a0._0_4_;
        fStack_cc = fStack_cc - (float)local_a0._4_4_;
        fStack_c8 = fStack_c8 - (float)uStack_98;
        fVar27 = local_d0 * local_d0;
        fVar28 = fStack_cc * fStack_cc;
        fVar29 = fStack_c8 * fStack_c8;
        auVar41._4_4_ = fVar27;
        auVar41._0_4_ = fVar27;
        auVar41._8_4_ = fVar27;
        auVar41._12_4_ = fVar27;
        fVar31 = fVar28 + fVar27 + fVar29;
        fVar33 = fVar28 + fVar27 + fVar29;
        fVar34 = fVar28 + fVar27 + fVar29;
        fVar29 = fVar28 + fVar27 + fVar29;
        auVar9._4_4_ = fVar33;
        auVar9._0_4_ = fVar31;
        auVar9._8_4_ = fVar34;
        auVar9._12_4_ = fVar29;
        auVar49 = rsqrtps(auVar41,auVar9);
        fVar27 = auVar49._0_4_;
        fVar32 = auVar49._4_4_;
        fVar35 = auVar49._8_4_;
        fVar36 = auVar49._12_4_;
        fVar28 = (float)local_a0._0_4_ - (float)local_b0;
        fVar30 = (float)local_a0._4_4_ - local_b0._4_4_;
        uStack_98._0_4_ = (float)uStack_98 - (float)uStack_a8;
        local_d0 = (float)(~-(uint)(fVar31 <= 0.0) &
                          (uint)((3.0 - fVar27 * fVar31 * fVar27) * fVar27 * 0.5)) * local_d0;
        fStack_cc = (float)(~-(uint)(fVar33 <= 0.0) &
                           (uint)((3.0 - fVar32 * fVar33 * fVar32) * fVar32 * 0.5)) * fStack_cc;
        fStack_c8 = (float)(~-(uint)(fVar34 <= 0.0) &
                           (uint)((3.0 - fVar35 * fVar34 * fVar35) * fVar35 * 0.5)) * fStack_c8;
        fVar34 = (float)(~-(uint)(fVar29 <= 0.0) &
                        (uint)((3.0 - fVar36 * fVar29 * fVar36) * fVar36 * 0.5)) *
                 (fStack_c4 - uStack_98._4_4_);
        fVar27 = fVar28 * fVar28;
        fVar29 = fVar30 * fVar30;
        fVar31 = (float)uStack_98 * (float)uStack_98;
        auVar50._4_4_ = fVar27;
        auVar50._0_4_ = fVar27;
        auVar50._8_4_ = fVar27;
        auVar50._12_4_ = fVar27;
        fVar33 = fVar29 + fVar27 + fVar31;
        fVar32 = fVar29 + fVar27 + fVar31;
        fVar35 = fVar29 + fVar27 + fVar31;
        fVar31 = fVar29 + fVar27 + fVar31;
        auVar10._4_4_ = fVar32;
        auVar10._0_4_ = fVar33;
        auVar10._8_4_ = fVar35;
        auVar10._12_4_ = fVar31;
        auVar49 = rsqrtps(auVar50,auVar10);
        fVar27 = auVar49._0_4_;
        fVar29 = auVar49._4_4_;
        fVar36 = auVar49._8_4_;
        fVar48 = auVar49._12_4_;
        fVar28 = (float)(~-(uint)(fVar33 <= 0.0) &
                        (uint)((3.0 - fVar27 * fVar33 * fVar27) * fVar27 * 0.5)) * fVar28;
        fVar30 = (float)(~-(uint)(fVar32 <= 0.0) &
                        (uint)((3.0 - fVar29 * fVar32 * fVar29) * fVar29 * 0.5)) * fVar30;
        uStack_98._0_4_ =
             (float)(~-(uint)(fVar35 <= 0.0) &
                    (uint)((3.0 - fVar36 * fVar35 * fVar36) * fVar36 * 0.5)) * (float)uStack_98;
        fVar27 = (float)(~-(uint)(fVar31 <= 0.0) &
                        (uint)((3.0 - fVar48 * fVar31 * fVar48) * fVar48 * 0.5)) *
                 (uStack_98._4_4_ - uStack_a8._4_4_);
        in_XMM6._4_4_ = fStack_c8;
        in_XMM6._0_4_ = fStack_cc;
        in_XMM6._8_4_ = local_d0;
        in_XMM6._12_4_ = fVar34;
        local_40 = CONCAT44((float)uStack_98,fVar30);
        uStack_38 = CONCAT44(fVar27,fVar28);
        local_70 = CONCAT44(fVar28 * fStack_c8,(float)uStack_98 * fStack_cc);
        uStack_68 = CONCAT44(fVar27 * fVar34,fVar30 * local_d0);
        fVar29 = (fVar39 * fStack_cc - fVar38 * fStack_c8) + 0.0 +
                 (fVar30 * fStack_c8 - (float)uStack_98 * fStack_cc) +
                 (fVar38 * (float)uStack_98 - fVar39 * fVar30);
        fVar31 = (fVar37 * fStack_c8 - fVar39 * local_d0) + 0.0 +
                 ((float)uStack_98 * local_d0 - fVar28 * fStack_c8) +
                 (fVar39 * fVar28 - fVar37 * (float)uStack_98);
        fVar33 = (fVar38 * local_d0 - fVar37 * fStack_cc) + 0.0 +
                 (fVar28 * fStack_cc - fVar30 * local_d0) + (fVar37 * fVar30 - fVar38 * fVar28);
        fVar34 = (fVar40 * fVar34 - fVar40 * fVar34) + 0.0 + (fVar27 * fVar34 - fVar27 * fVar34) +
                 (fVar40 * fVar27 - fVar40 * fVar27);
        fVar27 = fVar29 * fVar29;
        fVar28 = fVar31 * fVar31;
        fVar30 = fVar33 * fVar33;
        *pfVar25 = fVar29;
        pfVar25[1] = fVar31;
        pfVar25[2] = fVar33;
        pfVar25[3] = fVar34;
        local_b0 = uVar1;
        uStack_a8 = uVar2;
        _local_a0 = auVar14;
        if (*(float *)(param_2 + 8) <= fVar28 + fVar27 + fVar30) {
          auVar42._4_4_ = fVar27;
          auVar42._0_4_ = fVar27;
          auVar42._8_4_ = fVar27;
          auVar42._12_4_ = fVar27;
          fVar32 = fVar28 + fVar27 + fVar30;
          fVar35 = fVar28 + fVar27 + fVar30;
          fVar37 = fVar28 + fVar27 + fVar30;
          fVar30 = fVar28 + fVar27 + fVar30;
          auVar14._4_4_ = fVar35;
          auVar14._0_4_ = fVar32;
          auVar14._8_4_ = fVar37;
          auVar14._12_4_ = fVar30;
          auVar49 = rsqrtps(auVar42,auVar14);
          fVar27 = auVar49._0_4_;
          fVar28 = auVar49._4_4_;
          fVar38 = auVar49._8_4_;
          fVar39 = auVar49._12_4_;
          fVar29 = (float)(~-(uint)(fVar32 <= 0.0) &
                          (uint)((3.0 - fVar27 * fVar32 * fVar27) * fVar27 * 0.5)) * fVar29;
          fVar31 = (float)(~-(uint)(fVar35 <= 0.0) &
                          (uint)((3.0 - fVar28 * fVar35 * fVar28) * fVar28 * 0.5)) * fVar31;
          fVar33 = (float)(~-(uint)(fVar37 <= 0.0) &
                          (uint)((3.0 - fVar38 * fVar37 * fVar38) * fVar38 * 0.5)) * fVar33;
          *pfVar25 = fVar29;
          pfVar25[1] = fVar31;
          pfVar25[2] = fVar33;
          pfVar25[3] = (float)(~-(uint)(fVar30 <= 0.0) &
                              (uint)((3.0 - fVar39 * fVar30 * fVar39) * fVar39 * 0.5)) * fVar34;
          pfVar25[3] = -(fVar33 * (float)uStack_a8 +
                        fVar31 * local_b0._4_4_ + fVar29 * (float)local_b0);
          iVar21 = param_8[1];
          local_20 = param_8[2] & 0x3fffffff;
          iVar26 = iVar21 + 1;
          if ((int)local_20 < iVar26) {
            if (iVar26 < (int)(local_20 * 2)) {
              iVar26 = local_20 * 2;
            }
            FUN_0100a210(&PTR_vftable_018e9b94,param_8,iVar26,0x20);
          }
          param_8[1] = param_8[1] + 1;
          fVar27 = pfVar25[1];
          fVar28 = pfVar25[2];
          fVar29 = pfVar25[3];
          pfVar22 = (float *)(iVar21 * 0x20 + *param_8);
          *pfVar22 = *pfVar25;
          pfVar22[1] = fVar27;
          pfVar22[2] = fVar28;
          pfVar22[3] = fVar29;
          pfVar22[4] = (float)(param_3[1] + local_18 * 8);
          pfVar22[5] = (float)local_54;
          pfVar22[6] = (float)local_1c;
          FUN_01452720();
        }
        else {
          iVar26 = param_7[1] + -1;
          if ((int)(param_7[2] & 0x3fffffffU) < iVar26) {
            iVar21 = (param_7[2] & 0x3fffffffU) * 2;
            if (iVar21 <= iVar26) {
              iVar21 = iVar26;
            }
            FUN_0100a210(&PTR_vftable_018e9b94,param_7,iVar21,0x10);
          }
          param_7[1] = iVar26;
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_3[2]);
  }
  *param_6 = '\0';
  if (0 < param_8[1]) {
    local_20 = 0;
    local_1c = (ushort *)0x1;
    do {
      uVar24 = local_20;
      local_24 = local_1c;
      if ((int)local_1c < param_8[1]) {
        local_18 = local_20 + 0x20;
        do {
          iVar26 = *param_8;
          uVar5 = *(ulonglong *)(iVar26 + uVar24);
          uVar6 = *(ulonglong *)(iVar26 + 8 + uVar24);
          uVar1 = *(undefined8 *)(iVar26 + 0x10 + uVar24);
          uStack_68 = *(undefined8 *)(iVar26 + 0x18 + uVar24);
          uVar7 = *(ulonglong *)(iVar26 + local_18);
          uVar2 = *(undefined8 *)(iVar26 + 8 + local_18);
          local_40 = *(undefined8 *)(iVar26 + 0x10 + local_18);
          uStack_38 = *(undefined8 *)(iVar26 + 0x18 + local_18);
          local_80._0_4_ = (float)uVar5;
          local_80._4_4_ = (float)(uVar5 >> 0x20);
          uStack_78._0_4_ = (float)uVar6;
          uStack_78._4_4_ = (float)(uVar6 >> 0x20);
          local_50._0_4_ = (float)uVar7;
          local_50._4_4_ = (float)(uVar7 >> 0x20);
          uStack_48._0_4_ = (float)uVar2;
          uStack_48._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          fVar27 = (float)local_80 + (float)local_50;
          fVar28 = local_80._4_4_ + local_50._4_4_;
          local_80 = uVar5;
          local_70 = uVar1;
          local_50 = uVar7;
          if ((uStack_78._4_4_ + uStack_48._4_4_) * (uStack_78._4_4_ + uStack_48._4_4_) +
              fVar28 * fVar28 +
              ((float)uStack_78 + (float)uStack_48) * ((float)uStack_78 + (float)uStack_48) +
              fVar27 * fVar27 < *(float *)(param_2 + 0x18)) {
            local_70._4_4_ = (ushort *)((ulonglong)uVar1 >> 0x20);
            puVar20 = local_70._4_4_;
            *param_6 = '\x01';
            local_40._4_4_ = (float)((ulonglong)local_40 >> 0x20);
            uVar16 = local_40._4_4_;
            local_70._0_4_ = (ushort *)uVar1;
            local_80 = uVar7 ^ 0x8000000080000000;
            uStack_78 = CONCAT44(uStack_78._4_4_,(float)uStack_48) ^ 0x80000000;
            uVar17 = (ushort *)local_70;
            uStack_48 = uVar2;
            uVar18 = (float)local_40;
            pcVar19 = (char *)FUN_01452320(&local_55,local_14,uVar17,uVar18,puVar20,uVar16,&local_80
                                           ,&local_50);
            puVar15 = (ushort *)uStack_68;
            if (*pcVar19 == '\0') {
              pcVar19 = (char *)FUN_01452320(&local_5f,local_14,(ushort *)local_70,(float)local_40,
                                             puVar20,(float)uStack_38,&local_80,&local_50);
              if (*pcVar19 != '\0') goto LAB_01454aa2;
            }
            else {
LAB_01454aa2:
              *param_6 = '\x01';
              FUN_01452d10(&local_80,(uint)*(ushort *)local_70 * 0x10 + local_5c,
                           (uint)*puVar20 * 0x10 + local_5c,(uint)*puVar15 * 0x10 + local_5c,param_7
                          );
            }
            pcVar19 = (char *)FUN_01452320(&local_5e,local_14,(ushort *)local_70,(float)local_40,
                                           puVar15,local_40._4_4_,&local_80,&local_50);
            if (*pcVar19 == '\0') {
              pcVar19 = (char *)FUN_01452320(&local_60,local_14,(ushort *)local_70,(float)local_40,
                                             puVar15,(float)uStack_38,&local_80,&local_50);
              if (*pcVar19 != '\0') goto LAB_01454b2d;
            }
            else {
LAB_01454b2d:
              *param_6 = '\x01';
              FUN_01452d10(&local_80,(uint)*(ushort *)local_70 * 0x10 + local_5c,
                           (uint)*puVar15 * 0x10 + local_5c,(uint)*puVar20 * 0x10 + local_5c,param_7
                          );
            }
            pcVar19 = (char *)FUN_01452320(&local_57,local_14,puVar20,(float)local_40,puVar15,
                                           local_40._4_4_,&local_80,&local_50);
            if (*pcVar19 == '\0') {
              pcVar19 = (char *)FUN_01452320(&local_5d,local_14,puVar20,(float)local_40,puVar15,
                                             (float)uStack_38,&local_80,&local_50);
              if (*pcVar19 == '\0') {
                pcVar19 = (char *)FUN_01452320(&local_56,local_14,puVar20,local_40._4_4_,puVar15,
                                               (float)uStack_38,&local_80,&local_50);
                uVar24 = local_20;
                uVar6 = uStack_78;
                uVar2 = uStack_48;
                if (*pcVar19 == '\0') goto LAB_01454c19;
              }
            }
            *param_6 = '\x01';
            FUN_01452d10(&local_80,(uint)*puVar20 * 0x10 + local_5c,(uint)*puVar15 * 0x10 + local_5c
                         ,(uint)*(ushort *)local_70 * 0x10 + local_5c,param_7);
            uVar24 = local_20;
            uVar6 = uStack_78;
            uVar2 = uStack_48;
          }
LAB_01454c19:
          uStack_48 = uVar2;
          uStack_78 = uVar6;
          local_24 = (ushort *)((int)local_24 + 1);
          local_18 = local_18 + 0x20;
        } while ((int)local_24 < param_8[1]);
      }
      puVar20 = (ushort *)((int)local_1c + 1);
      local_20 = uVar24 + 0x20;
      bVar8 = (int)local_1c < param_8[1];
      local_1c = puVar20;
    } while (bVar8);
    if (*param_6 != '\0') {
      pfVar25 = (float *)*param_4;
      fVar27 = *pfVar25 - pfVar25[4];
      fVar28 = pfVar25[1] - pfVar25[5];
      fVar29 = pfVar25[2] - pfVar25[6];
      fVar30 = pfVar25[3] - pfVar25[7];
      fVar31 = *pfVar25 - pfVar25[8];
      fVar34 = pfVar25[1] - pfVar25[9];
      fVar32 = pfVar25[2] - pfVar25[10];
      fVar35 = pfVar25[3] - pfVar25[0xb];
      fVar33 = fVar32 * fVar28 - fVar34 * fVar29;
      fVar32 = fVar31 * fVar29 - fVar32 * fVar27;
      fVar31 = fVar34 * fVar27 - fVar31 * fVar28;
      fVar30 = fVar35 * fVar30 - fVar35 * fVar30;
      fVar27 = fVar33 * fVar33;
      fVar28 = fVar32 * fVar32;
      fVar29 = fVar31 * fVar31;
      fVar34 = fVar28 + fVar27 + fVar29;
      fVar35 = fVar28 + fVar27 + fVar29;
      fVar37 = fVar28 + fVar27 + fVar29;
      fVar29 = fVar28 + fVar27 + fVar29;
      auVar43._0_12_ = ZEXT812(0);
      auVar43._12_4_ = 0;
      auVar13._4_4_ = fVar35;
      auVar13._0_4_ = fVar34;
      auVar13._8_4_ = fVar37;
      auVar13._12_4_ = fVar29;
      auVar49 = rsqrtps(auVar43,auVar13);
      *param_5 = fVar33;
      param_5[1] = fVar32;
      param_5[2] = fVar31;
      param_5[3] = fVar30;
      fVar27 = auVar49._0_4_;
      fVar28 = auVar49._4_4_;
      fVar38 = auVar49._8_4_;
      fVar39 = auVar49._12_4_;
      fVar33 = fVar33 * (float)(~-(uint)(fVar34 <= 0.0) &
                               (uint)((3.0 - fVar27 * fVar34 * fVar27) * fVar27 * 0.5));
      fVar32 = fVar32 * (float)(~-(uint)(fVar35 <= 0.0) &
                               (uint)((3.0 - fVar28 * fVar35 * fVar28) * fVar28 * 0.5));
      fVar31 = fVar31 * (float)(~-(uint)(fVar37 <= 0.0) &
                               (uint)((3.0 - fVar38 * fVar37 * fVar38) * fVar38 * 0.5));
      *param_5 = fVar33;
      param_5[1] = fVar32;
      param_5[2] = fVar31;
      param_5[3] = fVar30 * (float)(~-(uint)(fVar29 <= 0.0) &
                                   (uint)((3.0 - fVar39 * fVar29 * fVar39) * fVar39 * 0.5));
      pfVar25 = (float *)*param_4;
      param_5[3] = -(pfVar25[2] * fVar31 + pfVar25[1] * fVar32 + *pfVar25 * fVar33);
    }
  }
  if (1 < param_7[1]) {
    FUN_014588a0(*param_7,0,param_7[1] + -1,FUN_01452540);
  }
  FUN_01452a40(*(undefined4 *)(param_2 + 0x10),param_7,&local_54);
  iVar26 = param_7[1];
  if (iVar26 < 2) {
    if (param_3[2] == 1) {
      pfVar25 = (float *)((uint)*(ushort *)param_3[1] * 0x10 + *param_3);
      local_90 = *pfVar25;
      fStack_8c = pfVar25[1];
      fStack_88 = pfVar25[2];
      fStack_84 = pfVar25[3];
      fVar27 = local_90 + 1.0;
      fVar28 = fStack_8c + 0.0;
      fVar29 = fStack_88 + 0.0;
      uStack_38._4_4_ = fStack_84 + 0.0;
    }
    else {
      puVar20 = (ushort *)param_3[1];
      pfVar25 = (float *)(*param_3 + (uint)*puVar20 * 0x10);
      local_90 = *pfVar25;
      fStack_8c = pfVar25[1];
      fStack_88 = pfVar25[2];
      fStack_84 = pfVar25[3];
      pfVar25 = (float *)(*param_3 + (uint)puVar20[(uint)puVar20[1] * 4] * 0x10);
      fVar27 = *pfVar25;
      fVar28 = pfVar25[1];
      fVar29 = pfVar25[2];
      uStack_38._4_4_ = pfVar25[3];
    }
    fVar34 = 3.40282e+38;
    local_b0._0_4_ = 0.0;
    local_b0._4_4_ = 0.0;
    uStack_a8._0_4_ = 0.0;
    uStack_a8._4_4_ = 0.0;
    local_40._0_4_ = local_90 - fVar27;
    local_40._4_4_ = fStack_8c - fVar28;
    uStack_38._0_4_ = fStack_88 - fVar29;
    uStack_38._4_4_ = fStack_84 - uStack_38._4_4_;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar33 = 0.0;
    local_b0 = 0;
    uStack_a8 = 0;
    iVar21 = 0;
    do {
      local_c0[0] = 0.0;
      local_c0[1] = 0.0;
      local_c0[2] = 0.0;
      local_c0[3] = 0.0;
      local_c0[iVar21] = 1.0;
      fVar32 = local_c0[0] * (float)local_40;
      auVar52._4_4_ = fVar32;
      auVar52._0_4_ = fVar32;
      auVar52._8_4_ = fVar32;
      auVar52._12_4_ = fVar32;
      fVar32 = ABS(local_c0[2] * (float)uStack_38 + local_c0[1] * local_40._4_4_ + fVar32);
      _local_a0 = ZEXT416((uint)fVar32);
      if (fVar32 < fVar34) {
        fVar30 = local_c0[0];
        fVar31 = local_c0[1];
        fVar33 = local_c0[2];
        fVar34 = fVar32;
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < 3);
    iVar21 = iVar26 + 6;
    fVar34 = (float)local_40;
    fVar32 = local_40._4_4_;
    fVar35 = (float)uStack_38;
    fVar37 = uStack_38._4_4_;
    if ((int)(param_7[2] & 0x3fffffffU) < iVar21) {
      iVar23 = (param_7[2] & 0x3fffffffU) * 2;
      if (iVar21 < iVar23) {
        iVar21 = iVar23;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_7,iVar21,0x10);
      fVar34 = (float)local_40;
      fVar32 = local_40._4_4_;
      fVar35 = (float)uStack_38;
      fVar37 = uStack_38._4_4_;
    }
    fVar38 = fVar33 * fVar32 - fVar31 * fVar35;
    fVar39 = fVar30 * fVar35 - fVar33 * fVar34;
    fVar40 = fVar31 * fVar34 - fVar30 * fVar32;
    fVar36 = fVar37 * 0.0 - fVar37 * 0.0;
    local_70 = CONCAT44(fVar34,fVar35);
    uStack_68 = CONCAT44(fVar37,fVar32);
    fVar30 = fVar38 * fVar38;
    fVar31 = fVar39 * fVar39;
    fVar33 = fVar40 * fVar40;
    auVar44._0_4_ = fVar31 + fVar30 + fVar33;
    auVar44._4_4_ = fVar31 + fVar30 + fVar33;
    auVar44._8_4_ = fVar31 + fVar30 + fVar33;
    auVar44._12_4_ = fVar31 + fVar30 + fVar33;
    auVar49 = rsqrtps(auVar52,auVar44);
    fVar30 = auVar49._0_4_;
    fVar31 = auVar49._4_4_;
    fVar33 = auVar49._8_4_;
    fVar48 = auVar49._12_4_;
    param_7[1] = iVar26 + 6;
    iVar21 = *param_7;
    iVar23 = iVar26 * 0x10;
    pfVar25 = (float *)(iVar21 + iVar23);
    *pfVar25 = fVar38;
    pfVar25[1] = fVar39;
    pfVar25[2] = fVar40;
    pfVar25[3] = fVar36;
    pfVar22 = (float *)(iVar21 + iVar23);
    fVar38 = fVar38 * (float)(~-(uint)(auVar44._0_4_ <= (float)local_b0) &
                             (uint)((3.0 - fVar30 * auVar44._0_4_ * fVar30) * fVar30 * 0.5));
    fVar39 = fVar39 * (float)(~-(uint)(auVar44._4_4_ <= local_b0._4_4_) &
                             (uint)((3.0 - fVar31 * auVar44._4_4_ * fVar31) * fVar31 * 0.5));
    fVar40 = fVar40 * (float)(~-(uint)(auVar44._8_4_ <= (float)uStack_a8) &
                             (uint)((3.0 - fVar33 * auVar44._8_4_ * fVar33) * fVar33 * 0.5));
    *pfVar22 = fVar38;
    pfVar22[1] = fVar39;
    pfVar22[2] = fVar40;
    pfVar22[3] = fVar36 * (float)(~-(uint)(auVar44._12_4_ <= uStack_a8._4_4_) &
                                 (uint)((3.0 - fVar48 * auVar44._12_4_ * fVar48) * fVar48 * 0.5));
    pfVar22[3] = -(fStack_88 * fVar40 + fStack_8c * fVar39 + local_90 * fVar38);
    fVar38 = pfVar22[2] * fVar32 - pfVar22[1] * fVar35;
    fVar39 = *pfVar22 * fVar35 - pfVar22[2] * fVar34;
    fVar40 = pfVar22[1] * fVar34 - *pfVar22 * fVar32;
    fVar36 = pfVar22[3] * fVar37 - pfVar22[3] * fVar37;
    fVar30 = fVar38 * fVar38;
    fVar31 = fVar39 * fVar39;
    fVar33 = fVar40 * fVar40;
    auVar53._4_4_ = fVar30;
    auVar53._0_4_ = fVar30;
    auVar53._8_4_ = fVar30;
    auVar53._12_4_ = fVar30;
    auVar45._0_4_ = fVar31 + fVar30 + fVar33;
    auVar45._4_4_ = fVar31 + fVar30 + fVar33;
    auVar45._8_4_ = fVar31 + fVar30 + fVar33;
    auVar45._12_4_ = fVar31 + fVar30 + fVar33;
    _local_a0 = rsqrtps(auVar53,auVar45);
    pfVar25 = (float *)(*param_7 + 0x10 + iVar23);
    *pfVar25 = fVar38;
    pfVar25[1] = fVar39;
    pfVar25[2] = fVar40;
    pfVar25[3] = fVar36;
    fVar51 = local_a0._0_4_;
    fVar54 = local_a0._4_4_;
    fVar55 = local_a0._8_4_;
    fVar56 = local_a0._12_4_;
    fVar30 = 3.0 - fVar51 * auVar45._0_4_ * fVar51;
    fVar31 = 3.0 - fVar54 * auVar45._4_4_ * fVar54;
    fVar33 = 3.0 - fVar55 * auVar45._8_4_ * fVar55;
    fVar48 = 3.0 - fVar56 * auVar45._12_4_ * fVar56;
    local_40 = CONCAT44(fVar31,fVar30);
    uStack_38 = CONCAT44(fVar48,fVar33);
    fVar38 = fVar38 * (float)(~-(uint)(auVar45._0_4_ <= (float)local_b0) &
                             (uint)(fVar30 * fVar51 * 0.5));
    fVar39 = fVar39 * (float)(~-(uint)(auVar45._4_4_ <= local_b0._4_4_) &
                             (uint)(fVar31 * fVar54 * 0.5));
    fVar40 = fVar40 * (float)(~-(uint)(auVar45._8_4_ <= (float)uStack_a8) &
                             (uint)(fVar33 * fVar55 * 0.5));
    *pfVar25 = fVar38;
    pfVar25[1] = fVar39;
    pfVar25[2] = fVar40;
    pfVar25[3] = fVar36 * (float)(~-(uint)(auVar45._12_4_ <= uStack_a8._4_4_) &
                                 (uint)(fVar48 * fVar56 * 0.5));
    pfVar25[3] = -(fStack_88 * fVar40 + fStack_8c * fVar39 + local_90 * fVar38);
    fVar30 = *pfVar22;
    fVar31 = pfVar22[1];
    fVar33 = pfVar22[2];
    fVar38 = pfVar22[3];
    pfVar22 = (float *)((iVar26 + 2) * 0x10 + *param_7);
    *pfVar22 = -fVar30;
    pfVar22[1] = -fVar31;
    pfVar22[2] = -fVar33;
    pfVar22[3] = -fVar38;
    pfVar22[3] = -(fStack_88 * -fVar33 + fStack_8c * -fVar31 + local_90 * -fVar30);
    fVar30 = *pfVar25;
    fVar31 = pfVar25[1];
    fVar33 = pfVar25[2];
    fVar38 = pfVar25[3];
    pfVar25 = (float *)((iVar26 + 3) * 0x10 + *param_7);
    *pfVar25 = -fVar30;
    pfVar25[1] = -fVar31;
    pfVar25[2] = -fVar33;
    pfVar25[3] = -fVar38;
    pfVar25[3] = -(fStack_88 * -fVar33 + fStack_8c * -fVar31 + local_90 * -fVar30);
    fVar30 = fVar34 * fVar34;
    fVar31 = fVar32 * fVar32;
    fVar33 = fVar35 * fVar35;
    auVar46._4_4_ = fVar30;
    auVar46._0_4_ = fVar30;
    auVar46._8_4_ = fVar30;
    auVar46._12_4_ = fVar30;
    fVar38 = fVar31 + fVar30 + fVar33;
    fVar39 = fVar31 + fVar30 + fVar33;
    fVar40 = fVar31 + fVar30 + fVar33;
    fVar33 = fVar31 + fVar30 + fVar33;
    auVar11._4_4_ = fVar39;
    auVar11._0_4_ = fVar38;
    auVar11._8_4_ = fVar40;
    auVar11._12_4_ = fVar33;
    auVar49 = rsqrtps(auVar46,auVar11);
    fVar30 = auVar49._0_4_;
    fVar31 = auVar49._4_4_;
    fVar36 = auVar49._8_4_;
    fVar48 = auVar49._12_4_;
    pfVar25 = (float *)((iVar26 + 4) * 0x10 + *param_7);
    *pfVar25 = fVar34;
    pfVar25[1] = fVar32;
    pfVar25[2] = fVar35;
    pfVar25[3] = fVar37;
    fVar34 = (float)(~-(uint)(fVar38 <= (float)local_b0) &
                    (uint)((3.0 - fVar30 * fVar38 * fVar30) * fVar30 * 0.5)) * fVar34;
    fVar32 = (float)(~-(uint)(fVar39 <= local_b0._4_4_) &
                    (uint)((3.0 - fVar31 * fVar39 * fVar31) * fVar31 * 0.5)) * fVar32;
    fVar35 = (float)(~-(uint)(fVar40 <= (float)uStack_a8) &
                    (uint)((3.0 - fVar36 * fVar40 * fVar36) * fVar36 * 0.5)) * fVar35;
    *pfVar25 = fVar34;
    pfVar25[1] = fVar32;
    pfVar25[2] = fVar35;
    pfVar25[3] = (float)(~-(uint)(fVar33 <= uStack_a8._4_4_) &
                        (uint)((3.0 - fVar48 * fVar33 * fVar48) * fVar48 * 0.5)) * fVar37;
    pfVar25[3] = -(fStack_88 * fVar35 + fStack_8c * fVar32 + local_90 * fVar34);
    fVar30 = pfVar25[3];
    fVar33 = -*pfVar25;
    fVar32 = -pfVar25[1];
    fVar37 = -pfVar25[2];
    fVar31 = fVar33 * fVar33;
    fVar34 = fVar32 * fVar32;
    fVar35 = fVar37 * fVar37;
    auVar47._4_4_ = fVar31;
    auVar47._0_4_ = fVar31;
    auVar47._8_4_ = fVar31;
    auVar47._12_4_ = fVar31;
    fVar38 = fVar34 + fVar31 + fVar35;
    fVar39 = fVar34 + fVar31 + fVar35;
    fVar40 = fVar34 + fVar31 + fVar35;
    fVar35 = fVar34 + fVar31 + fVar35;
    auVar12._4_4_ = fVar39;
    auVar12._0_4_ = fVar38;
    auVar12._8_4_ = fVar40;
    auVar12._12_4_ = fVar35;
    auVar49 = rsqrtps(auVar47,auVar12);
    pfVar25 = (float *)((iVar26 + 5) * 0x10 + *param_7);
    fVar31 = auVar49._0_4_;
    fVar34 = auVar49._4_4_;
    fVar36 = auVar49._8_4_;
    fVar48 = auVar49._12_4_;
    *pfVar25 = fVar33;
    pfVar25[1] = fVar32;
    pfVar25[2] = fVar37;
    pfVar25[3] = -fVar30;
    fVar33 = (float)(~-(uint)(fVar38 <= (float)local_b0) &
                    (uint)((3.0 - fVar31 * fVar38 * fVar31) * fVar31 * 0.5)) * fVar33;
    fVar32 = (float)(~-(uint)(fVar39 <= local_b0._4_4_) &
                    (uint)((3.0 - fVar34 * fVar39 * fVar34) * fVar34 * 0.5)) * fVar32;
    fVar37 = (float)(~-(uint)(fVar40 <= (float)uStack_a8) &
                    (uint)((3.0 - fVar36 * fVar40 * fVar36) * fVar36 * 0.5)) * fVar37;
    *pfVar25 = fVar33;
    pfVar25[1] = fVar32;
    pfVar25[2] = fVar37;
    pfVar25[3] = (float)(~-(uint)(fVar35 <= uStack_a8._4_4_) &
                        (uint)((3.0 - fVar48 * fVar35 * fVar48) * fVar48 * 0.5)) * -fVar30;
    if (param_3[2] == 1) {
      fVar27 = fStack_8c * fVar32 + local_90 * fVar33 + fStack_88 * fVar37;
    }
    else {
      fVar27 = fVar37 * fVar29 + fVar32 * fVar28 + fVar33 * fVar27;
    }
    pfVar25[3] = -fVar27;
  }
  if ((*param_6 != '\0') && (*(char *)(param_2 + 2) != '\0')) {
    param_7[1] = 0;
    fStack_8c = 0.0;
    fStack_88 = 0.0;
    fStack_84 = -0.0;
    FUN_01453240(param_5,*param_4,param_4[1],&fStack_8c,param_7);
    fStack_88 = 0.0;
    if (-1 < (int)fStack_84) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(fStack_8c,(int)fStack_84 << 4);
    }
  }
  if (1 < param_7[1]) {
    FUN_014588a0(*param_7,0,param_7[1] + -1,FUN_01452540);
  }
  FUN_01452a40(*(undefined4 *)(param_2 + 0x10),param_7,&local_54);
  *param_1 = 1;
  return;
}

// 01455270  FUN_01455270  size=958  [run]
void FUN_01455270(undefined1 *param_1,float param_2,int *param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar37;
  int local_18;
  uint local_14;
  
  iVar2 = *param_3;
  if ((param_3[2] < 3) && (*(int *)(param_4 + 8) < 3)) {
    local_14 = 0;
    local_18 = 3;
    if (param_3[2] == 2) {
      puVar3 = (ushort *)param_3[1];
      uVar6 = (uint)*puVar3;
      uVar4 = (uint)puVar3[(uint)puVar3[1] * 4];
      uVar5 = uVar4;
      if (uVar4 < uVar6) {
        uVar5 = uVar6;
        uVar6 = uVar4;
      }
      puVar3 = *(ushort **)(param_4 + 4);
      uVar7 = (uint)*puVar3;
      uVar4 = uVar7;
      if (*(int *)(param_4 + 8) == 2) {
        local_14 = (uint)puVar3[(uint)puVar3[1] * 4];
        if (local_14 < uVar7) {
          uVar4 = local_14;
          local_14 = uVar7;
        }
        local_18 = 4;
      }
    }
    else {
      if (*(int *)(param_4 + 8) != 2) {
        FUN_0145a8f0(*(undefined2 *)param_3[1],**(undefined2 **)(param_4 + 4));
        goto LAB_01455610;
      }
      puVar3 = *(ushort **)(param_4 + 4);
      uVar6 = (uint)*(ushort *)param_3[1];
      uVar7 = (uint)puVar3[(uint)puVar3[1] * 4];
      uVar4 = (uint)*puVar3;
      uVar5 = uVar7;
      if (uVar7 < uVar6) {
        uVar5 = uVar6;
        uVar6 = uVar7;
      }
    }
    pfVar1 = (float *)(iVar2 + uVar5 * 0x10);
    fVar24 = *pfVar1;
    fVar26 = pfVar1[1];
    fVar28 = pfVar1[2];
    pfVar1 = (float *)(iVar2 + uVar6 * 0x10);
    fVar9 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar23 = fVar24 - fVar9;
    fVar25 = fVar26 - fVar11;
    fVar27 = fVar28 - fVar13;
    fVar8 = fVar23 * fVar23;
    fVar10 = fVar25 * fVar25;
    fVar12 = fVar27 * fVar27;
    fVar29 = fVar10 + fVar8 + fVar12;
    pfVar1 = (float *)(iVar2 + uVar4 * 0x10);
    fVar17 = fVar9 - *pfVar1;
    fVar21 = fVar11 - pfVar1[1];
    fVar22 = fVar13 - pfVar1[2];
    fVar30 = *pfVar1 - fVar24;
    fVar32 = pfVar1[1] - fVar26;
    fVar33 = pfVar1[2] - fVar28;
    fVar14 = fVar30 * fVar30;
    fVar15 = fVar32 * fVar32;
    fVar16 = fVar33 * fVar33;
    fVar37 = fVar15 + fVar14 + fVar16;
    fVar17 = fVar22 * fVar22 + fVar21 * fVar21 + fVar17 * fVar17;
    auVar18._0_4_ = fVar10 + fVar8 + fVar12;
    auVar18._4_4_ = fVar10 + fVar8 + fVar12;
    auVar18._8_4_ = fVar10 + fVar8 + fVar12;
    auVar18._12_4_ = fVar10 + fVar8 + fVar12;
    auVar34._0_12_ = ZEXT812(0);
    auVar34._12_4_ = 0;
    auVar35 = rsqrtps(auVar34,auVar18);
    fVar21 = auVar35._0_4_;
    fVar22 = auVar35._4_4_;
    fVar36 = auVar35._8_4_;
    auVar19._4_4_ = fVar14;
    auVar19._0_4_ = fVar14;
    auVar19._8_4_ = fVar14;
    auVar19._12_4_ = fVar14;
    fVar8 = fVar15 + fVar14 + fVar16;
    fVar10 = fVar15 + fVar14 + fVar16;
    fVar12 = fVar15 + fVar14 + fVar16;
    auVar35._4_4_ = fVar10;
    auVar35._0_4_ = fVar8;
    auVar35._8_4_ = fVar12;
    auVar35._12_4_ = fVar15 + fVar14 + fVar16;
    auVar35 = rsqrtps(auVar19,auVar35);
    fVar14 = auVar35._0_4_;
    fVar15 = auVar35._4_4_;
    fVar16 = auVar35._8_4_;
    fVar30 = (float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar14 * fVar8 * fVar14) * fVar14 * 0.5)
                    ) * fVar30;
    fVar32 = (float)(~-(uint)(fVar10 <= 0.0) &
                    (uint)((3.0 - fVar15 * fVar10 * fVar15) * fVar15 * 0.5)) * fVar32;
    fVar33 = (float)(~-(uint)(fVar12 <= 0.0) &
                    (uint)((3.0 - fVar16 * fVar12 * fVar16) * fVar16 * 0.5)) * fVar33;
    fVar8 = fVar30 - fVar23 * (float)(~-(uint)(auVar18._0_4_ <= 0.0) &
                                     (uint)((3.0 - fVar21 * auVar18._0_4_ * fVar21) * fVar21 * 0.5))
    ;
    fVar10 = fVar32 - fVar25 * (float)(~-(uint)(auVar18._4_4_ <= 0.0) &
                                      (uint)((3.0 - fVar22 * auVar18._4_4_ * fVar22) * fVar22 * 0.5)
                                      );
    fVar12 = fVar33 - fVar27 * (float)(~-(uint)(auVar18._8_4_ <= 0.0) &
                                      (uint)((3.0 - fVar36 * auVar18._8_4_ * fVar36) * fVar36 * 0.5)
                                      );
    if (fVar10 * fVar10 + fVar8 * fVar8 + fVar12 * fVar12 < param_2) {
      if (local_18 == 4) {
        pfVar1 = (float *)(iVar2 + local_14 * 0x10);
        fVar24 = *pfVar1 - fVar24;
        fVar26 = pfVar1[1] - fVar26;
        fVar28 = pfVar1[2] - fVar28;
        fVar8 = fVar24 * fVar24;
        fVar10 = fVar26 * fVar26;
        fVar12 = fVar28 * fVar28;
        auVar31._4_4_ = fVar8;
        auVar31._0_4_ = fVar8;
        auVar31._8_4_ = fVar8;
        auVar31._12_4_ = fVar8;
        auVar20._0_4_ = fVar10 + fVar8 + fVar12;
        auVar20._4_4_ = fVar10 + fVar8 + fVar12;
        auVar20._8_4_ = fVar10 + fVar8 + fVar12;
        auVar20._12_4_ = fVar10 + fVar8 + fVar12;
        auVar35 = rsqrtps(auVar31,auVar20);
        fVar14 = auVar35._0_4_;
        fVar15 = auVar35._4_4_;
        fVar16 = auVar35._8_4_;
        fVar30 = fVar30 - (float)(~-(uint)(auVar20._0_4_ <= 0.0) &
                                 (uint)((3.0 - fVar14 * auVar20._0_4_ * fVar14) * fVar14 * 0.5)) *
                          fVar24;
        fVar32 = fVar32 - (float)(~-(uint)(auVar20._4_4_ <= 0.0) &
                                 (uint)((3.0 - fVar15 * auVar20._4_4_ * fVar15) * fVar15 * 0.5)) *
                          fVar26;
        fVar33 = fVar33 - (float)(~-(uint)(auVar20._8_4_ <= 0.0) &
                                 (uint)((3.0 - fVar16 * auVar20._8_4_ * fVar16) * fVar16 * 0.5)) *
                          fVar28;
        if (param_2 <= fVar32 * fVar32 + fVar30 * fVar30 + fVar33 * fVar33) goto LAB_0145561f;
        if (fVar37 < fVar10 + fVar8 + fVar12) {
          fVar9 = fVar9 - *pfVar1;
          fVar11 = fVar11 - pfVar1[1];
          fVar13 = fVar13 - pfVar1[2];
          fVar17 = fVar11 * fVar11 + fVar9 * fVar9 + fVar13 * fVar13;
          uVar4 = local_14;
        }
      }
      fVar24 = fVar17;
      if (fVar17 < fVar37) {
        fVar24 = fVar37;
      }
      if (fVar24 < fVar29) {
        fVar24 = fVar29;
      }
      if (fVar29 == fVar24) {
        FUN_0145a8f0(uVar6,uVar5);
        *param_1 = 1;
        return;
      }
      if (fVar37 == fVar24) {
        FUN_0145a8f0(uVar5,uVar4);
        *param_1 = 1;
        return;
      }
      if (fVar17 == fVar24) {
        FUN_0145a8f0(uVar4,uVar6);
        *param_1 = 1;
        return;
      }
LAB_01455610:
      *param_1 = 1;
      return;
    }
  }
LAB_0145561f:
  *param_1 = 0;
  return;
}

// 01455630  FUN_01455630  size=480  [run]
void FUN_01455630(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  LPVOID pvVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int local_20;
  int local_8;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar12 = iVar9 * 8;
      iVar9 = iVar9 + 1;
      *(undefined4 *)(*param_2 + 0xc + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar12) * 0x10) =
           0x40000000;
    } while (iVar9 < *(int *)(param_1 + 8));
  }
  uVar4 = param_2[1];
  if (uVar4 == 0) {
    local_20 = 0;
  }
  else {
    pvVar10 = TlsGetValue(DAT_01f8fc4c);
    local_20 = *(int *)((int)pvVar10 + 0xc);
    uVar11 = uVar4 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar10 + 8) < (int)uVar11) ||
       (*(uint *)((int)pvVar10 + 0x10) < local_20 + uVar11)) {
      local_20 = FUN_0100b780(uVar11);
    }
    else {
      *(uint *)((int)pvVar10 + 0xc) = local_20 + uVar11;
    }
  }
  iVar9 = 0;
  iVar12 = 0;
  if (0 < param_2[1]) {
    local_8 = 0;
    iVar13 = 0;
    do {
      iVar5 = *param_2;
      if (*(float *)(iVar13 + 0xc + iVar5) == 2.0) {
        puVar1 = (undefined4 *)(iVar13 + iVar5);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (undefined4 *)(local_8 + iVar5);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        *(int *)(local_20 + iVar9 * 4) = iVar12;
        iVar12 = iVar12 + 1;
        local_8 = local_8 + 0x10;
      }
      else {
        *(undefined4 *)(local_20 + iVar9 * 4) = 0xffffffff;
      }
      iVar9 = iVar9 + 1;
      iVar13 = iVar13 + 0x10;
    } while (iVar9 < param_2[1]);
  }
  if ((int)(param_2[2] & 0x3fffffffU) < iVar12) {
    iVar9 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar9 <= iVar12) {
      iVar9 = iVar12;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar9,0x10);
  }
  iVar9 = 0;
  param_2[1] = iVar12;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      puVar3 = (ushort *)(*(int *)(param_1 + 4) + iVar9 * 8);
      iVar9 = iVar9 + 1;
      *puVar3 = *(ushort *)(local_20 + (uint)*puVar3 * 4);
    } while (iVar9 < *(int *)(param_1 + 8));
  }
  pvVar10 = TlsGetValue(DAT_01f8fc4c);
  uVar11 = uVar4 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar10 + 8) < (int)uVar11) ||
      (uVar11 + local_20 != *(int *)((int)pvVar10 + 0xc))) ||
     (*(int *)((int)pvVar10 + 0x14) == local_20)) {
    FUN_0100b9b0(local_20,uVar11);
  }
  else {
    *(int *)((int)pvVar10 + 0xc) = local_20;
  }
  if (-1 < (int)(uVar4 | 0x80000000)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,uVar4 * 4);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar12 = iVar9 * 8;
      iVar9 = iVar9 + 1;
      *(undefined4 *)(*param_2 + 0xc + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar12) * 0x10) = 0
      ;
    } while (iVar9 < *(int *)(param_1 + 8));
  }
  return;
}

// 01455810  FUN_01455810  size=1342  [run]
void FUN_01455810(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  ushort uVar2;
  undefined2 uVar3;
  LPVOID pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined1 auStackY_100 [148];
  int local_50 [4];
  uint local_40;
  int local_3c [4];
  uint local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined2 *local_14;
  undefined4 local_10;
  undefined2 *local_c;
  undefined4 local_8;
  
  local_50[3] = 0;
  piVar1 = (int *)(param_4 + 4);
  *(undefined4 *)(param_4 + 8) = 0;
  uVar13 = *(uint *)(param_1 + 8);
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0x80000000;
  local_40 = uVar13;
  if (uVar13 != 0) {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    local_50[3] = *(int *)((int)pvVar4 + 0xc);
    uVar10 = uVar13 * 2 + 0x7f & 0xffffff80;
    local_24 = (int *)local_50[3];
    if ((*(int *)((int)pvVar4 + 8) < (int)uVar10) ||
       (*(uint *)((int)pvVar4 + 0x10) < local_50[3] + uVar10)) {
      local_50[3] = FUN_0100b780(uVar10);
    }
    else {
      *(uint *)((int)pvVar4 + 0xc) = local_50[3] + uVar10;
    }
  }
  local_50[2] = uVar13 | 0x80000000;
  local_50[0] = local_50[3];
  FUN_01452e90(param_1,1,param_4,local_50);
  uVar13 = *(uint *)(param_2 + 8);
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0x80000000;
  local_2c = uVar13;
  if (uVar13 == 0) {
    local_3c[3] = 0;
  }
  else {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    local_3c[3] = *(int *)((int)pvVar4 + 0xc);
    uVar10 = uVar13 * 2 + 0x7f & 0xffffff80;
    local_24 = (int *)local_3c[3];
    if ((*(int *)((int)pvVar4 + 8) < (int)uVar10) ||
       (*(uint *)((int)pvVar4 + 0x10) < local_3c[3] + uVar10)) {
      local_3c[3] = FUN_0100b780(uVar10);
    }
    else {
      *(uint *)((int)pvVar4 + 0xc) = local_3c[3] + uVar10;
    }
  }
  local_3c[2] = uVar13 | 0x80000000;
  local_3c[0] = local_3c[3];
  FUN_01452e90(param_2,auStackY_100,param_4,local_3c);
  iVar5 = param_3[1] * 3 + *(int *)(param_4 + 8);
  if ((int)(*(uint *)(param_4 + 0xc) & 0x3fffffff) < iVar5) {
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar5,8);
  }
  uVar13 = local_2c;
  iVar5 = local_3c[3];
  local_20 = 0;
  if (0 < param_3[1]) {
    param_2 = 0;
    do {
      piVar6 = (int *)(*param_3 + param_2);
      puVar14 = (undefined2 *)*piVar6;
      *(undefined2 *)(piVar6 + 2) = *puVar14;
      *(undefined2 *)(piVar6 + 3) =
           *(undefined2 *)(*(int *)(param_1 + 4) + (uint)(ushort)puVar14[2] * 8);
      *(undefined2 *)((int)piVar6 + 0xe) = *(undefined2 *)piVar6[1];
      uVar2 = ((undefined2 *)piVar6[1])[1];
      uVar10 = (uint)*(ushort *)(local_50[0] + ((int)puVar14 - *(int *)(param_1 + 4) >> 3) * 2);
      if (uVar10 == 0xffff) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar1 + uVar10 * 8;
      }
      *piVar6 = iVar9;
      uVar10 = (uint)*(ushort *)(local_3c[0] + ((int)((uint)uVar2 * 8) >> 3) * 2);
      if (uVar10 == 0xffff) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar1 + uVar10 * 8;
      }
      param_2 = param_2 + 0x10;
      piVar6[1] = iVar9;
      local_20 = local_20 + 1;
    } while (local_20 < param_3[1]);
  }
  iVar9 = *piVar1;
  local_28 = *(int *)(param_4 + 8);
  local_1c = param_3[1] + -1;
  local_c = (undefined2 *)0x0;
  local_10 = 0xffff;
  local_24 = (int *)*param_3;
  if (-1 < local_1c) {
    local_20 = local_1c * 0x10;
    do {
      local_8 = *(undefined4 *)(param_4 + 8);
      iVar12 = *(int *)(param_4 + 8);
      piVar6 = (int *)(*param_3 + local_20);
      *(int *)(param_4 + 8) = iVar12 + 1;
      iVar7 = (iVar12 + 1) - iVar12;
      iVar11 = *piVar1 + iVar12 * 8;
      if (0 < iVar7) {
        do {
          if (iVar11 != 0) {
            *(undefined2 *)(iVar11 + 6) = 0;
          }
          iVar11 = iVar11 + 8;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_18 = *(undefined4 *)(param_4 + 8);
      iVar7 = *(int *)(param_4 + 8);
      puVar14 = (undefined2 *)(*piVar1 + iVar12 * 8);
      *(int *)(param_4 + 8) = iVar7 + 1;
      param_1 = (iVar7 + 1) - iVar7;
      iVar12 = *piVar1 + iVar7 * 8;
      if (0 < param_1) {
        do {
          if (iVar12 != 0) {
            *(undefined2 *)(iVar12 + 6) = 0;
          }
          iVar12 = iVar12 + 8;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      iVar12 = *piVar6;
      local_14 = (undefined2 *)(*piVar1 + iVar7 * 8);
      if (iVar12 == *local_24) {
        iVar12 = piVar6[1];
        if (*(short *)(iVar12 + 6) == 2) {
          uVar3 = *(undefined2 *)(iVar12 + 2);
          puVar8 = (undefined2 *)(iVar9 + (uint)*(ushort *)(iVar12 + 2) * 8);
        }
        else {
          uVar3 = (undefined2)*(undefined4 *)(param_4 + 8);
          iVar12 = *(int *)(param_4 + 8);
          *(int *)(param_4 + 8) = iVar12 + 1;
          iVar7 = (iVar12 + 1) - iVar12;
          iVar11 = *piVar1 + iVar12 * 8;
          if (0 < iVar7) {
            do {
              if (iVar11 != 0) {
                *(undefined2 *)(iVar11 + 6) = 0;
              }
              iVar11 = iVar11 + 8;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          puVar8 = (undefined2 *)(*piVar1 + iVar12 * 8);
        }
        *puVar14 = *(undefined2 *)piVar6[1];
        puVar14[2] = (undefined2)local_18;
        puVar14[1] = (undefined2)local_10;
        if (local_c != (undefined2 *)0x0) {
          local_c[1] = (undefined2)local_8;
        }
        *puVar8 = *(undefined2 *)((int)piVar6 + 0xe);
        puVar8[2] = (undefined2)local_8;
        puVar8[1] = (short)(piVar6[1] - iVar9 >> 3);
        *(undefined2 *)(piVar6[1] + 2) = uVar3;
        *local_14 = (short)piVar6[2];
        local_14[2] = uVar3;
      }
      else {
        if (*(short *)(iVar12 + 6) == 2) {
          uVar3 = *(undefined2 *)(iVar12 + 2);
          puVar8 = (undefined2 *)(iVar9 + (uint)*(ushort *)(iVar12 + 2) * 8);
        }
        else {
          uVar3 = (undefined2)*(undefined4 *)(param_4 + 8);
          iVar12 = *(int *)(param_4 + 8);
          *(int *)(param_4 + 8) = iVar12 + 1;
          iVar7 = (iVar12 + 1) - iVar12;
          iVar11 = *piVar1 + iVar12 * 8;
          if (0 < iVar7) {
            do {
              if (iVar11 != 0) {
                *(undefined2 *)(iVar11 + 6) = 0;
              }
              iVar11 = iVar11 + 8;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          puVar8 = (undefined2 *)(*piVar1 + iVar12 * 8);
        }
        *puVar14 = *(undefined2 *)((int)piVar6 + 0xe);
        puVar14[1] = (undefined2)local_10;
        puVar14[2] = uVar3;
        if (local_c != (undefined2 *)0x0) {
          local_c[1] = (undefined2)local_8;
        }
        *puVar8 = (short)piVar6[3];
        puVar8[2] = (undefined2)local_18;
        puVar8[1] = (short)(*piVar6 - iVar9 >> 3);
        *(undefined2 *)(*piVar6 + 2) = uVar3;
        *local_14 = *(undefined2 *)*piVar6;
        local_14[2] = (undefined2)local_8;
      }
      local_20 = local_20 + -0x10;
      local_1c = local_1c + -1;
      local_24 = piVar6;
      local_10 = local_18;
      local_c = local_14;
    } while (-1 < local_1c);
  }
  local_c[1] = (short)local_28;
  *(undefined2 *)(iVar9 + 2 + local_28 * 8) = (undefined2)local_10;
  if (local_3c[3] == local_3c[0]) {
    local_3c[1] = 0;
  }
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  uVar13 = uVar13 * 2 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar13) || (uVar13 + iVar5 != *(int *)((int)pvVar4 + 0xc)))
     || (*(int *)((int)pvVar4 + 0x14) == iVar5)) {
    FUN_0100b9b0(iVar5,uVar13);
  }
  else {
    *(int *)((int)pvVar4 + 0xc) = iVar5;
  }
  local_3c[1] = 0;
  if (-1 < local_3c[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_3c[0],(local_3c[2] & 0x3fffffffU) * 2);
  }
  uVar13 = local_40;
  iVar5 = local_50[3];
  local_3c[0] = 0;
  local_3c[2] = 0x80000000;
  if (local_50[3] == local_50[0]) {
    local_50[1] = 0;
  }
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  uVar13 = uVar13 * 2 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar13) || (uVar13 + iVar5 != *(int *)((int)pvVar4 + 0xc)))
     || (*(int *)((int)pvVar4 + 0x14) == iVar5)) {
    FUN_0100b9b0(iVar5,uVar13);
  }
  else {
    *(int *)((int)pvVar4 + 0xc) = iVar5;
  }
  local_50[1] = 0;
  if (-1 < local_50[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_50[0],(local_50[2] & 0x3fffffffU) * 2);
  }
  return;
}

// 01455D60  FUN_01455d60  size=541  [run]
void FUN_01455d60(float *param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  
  fVar6 = *param_1 - *param_2;
  fVar8 = param_1[1] - param_2[1];
  fVar10 = param_1[2] - param_2[2];
  fVar12 = param_1[3] - param_2[3];
  if (ABS(*param_1 - *param_2) < 1e-06) {
    if (ABS(param_1[1] - param_2[1]) < 1e-06) {
      fVar3 = fVar8 * 0.0 - fVar10 * 0.0;
      fVar4 = fVar10 * 1.0 - fVar6 * 0.0;
      fVar5 = fVar6 * 0.0 - fVar8 * 1.0;
      fVar6 = fVar3 * fVar3;
      fVar8 = fVar4 * fVar4;
      fVar10 = fVar5 * fVar5;
      fVar7 = fVar8 + fVar6 + fVar10;
      fVar9 = fVar8 + fVar6 + fVar10;
      fVar11 = fVar8 + fVar6 + fVar10;
      fVar10 = fVar8 + fVar6 + fVar10;
      auVar13._0_12_ = ZEXT812(0);
      auVar13._12_4_ = 0;
      auVar2._4_4_ = fVar9;
      auVar2._0_4_ = fVar7;
      auVar2._8_4_ = fVar11;
      auVar2._12_4_ = fVar10;
      auVar14 = rsqrtps(auVar13,auVar2);
      fVar6 = auVar14._0_4_;
      fVar8 = auVar14._4_4_;
      fVar15 = auVar14._8_4_;
      fVar16 = auVar14._12_4_;
      *param_3 = (float)(~-(uint)(fVar7 <= 0.0) &
                        (uint)((3.0 - fVar6 * fVar7 * fVar6) * fVar6 * 0.5)) * fVar3;
      param_3[1] = (float)(~-(uint)(fVar9 <= 0.0) &
                          (uint)((3.0 - fVar8 * fVar9 * fVar8) * fVar8 * 0.5)) * fVar4;
      param_3[2] = (float)(~-(uint)(fVar11 <= 0.0) &
                          (uint)((3.0 - fVar15 * fVar11 * fVar15) * fVar15 * 0.5)) * fVar5;
      param_3[3] = (float)(~-(uint)(fVar10 <= 0.0) &
                          (uint)((3.0 - fVar16 * fVar10 * fVar16) * fVar16 * 0.5)) *
                   (fVar12 * 0.0 - fVar12 * 0.0);
      return;
    }
  }
  fVar3 = fVar6 * fVar6;
  fVar4 = fVar8 * fVar8;
  fVar5 = fVar10 * fVar10;
  fVar7 = fVar4 + fVar3 + fVar5;
  fVar9 = fVar4 + fVar3 + fVar5;
  fVar11 = fVar4 + fVar3 + fVar5;
  fVar5 = fVar4 + fVar3 + fVar5;
  auVar14._4_4_ = fVar9;
  auVar14._0_4_ = fVar7;
  auVar14._8_4_ = fVar11;
  auVar14._12_4_ = fVar5;
  auVar14 = rsqrtps(in_XMM4,auVar14);
  fVar3 = auVar14._0_4_;
  fVar4 = auVar14._4_4_;
  fVar15 = auVar14._8_4_;
  fVar16 = auVar14._12_4_;
  fVar6 = (float)(~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar3 * fVar7 * fVar3) * fVar3 * 0.5)) *
          fVar6;
  fVar8 = (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar4 * fVar9 * fVar4) * fVar4 * 0.5)) *
          fVar8;
  fVar10 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar15 * fVar11 * fVar15) * fVar15 * 0.5)
                  ) * fVar10;
  fVar12 = (float)(~-(uint)(fVar5 <= 0.0) & (uint)((3.0 - fVar16 * fVar5 * fVar16) * fVar16 * 0.5))
           * fVar12;
  fVar3 = fVar8 * 0.0 - fVar10 * 1.0;
  fVar4 = fVar10 * 0.0 - fVar6 * 0.0;
  fVar5 = fVar6 * 1.0 - fVar8 * 0.0;
  *param_3 = fVar3;
  param_3[1] = fVar4;
  param_3[2] = fVar5;
  param_3[3] = fVar12 * 0.0 - fVar12 * 0.0;
  if (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 < 1.1920929e-07) {
    *param_3 = fVar8 * 1.0 - fVar10 * 0.0;
    param_3[1] = fVar10 * 0.0 - fVar6 * 1.0;
    param_3[2] = fVar6 * 0.0 - fVar8 * 0.0;
    param_3[3] = fVar12 * 0.0 - fVar12 * 0.0;
  }
  fVar6 = *param_3;
  fVar8 = param_3[1];
  fVar10 = param_3[2];
  fVar12 = fVar6 * fVar6;
  fVar3 = fVar8 * fVar8;
  fVar4 = fVar10 * fVar10;
  auVar17._4_4_ = fVar12;
  auVar17._0_4_ = fVar12;
  auVar17._8_4_ = fVar12;
  auVar17._12_4_ = fVar12;
  fVar5 = fVar3 + fVar12 + fVar4;
  fVar7 = fVar3 + fVar12 + fVar4;
  fVar9 = fVar3 + fVar12 + fVar4;
  fVar4 = fVar3 + fVar12 + fVar4;
  auVar1._4_4_ = fVar7;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar9;
  auVar1._12_4_ = fVar4;
  auVar14 = rsqrtps(auVar17,auVar1);
  fVar12 = auVar14._0_4_;
  fVar3 = auVar14._4_4_;
  fVar11 = auVar14._8_4_;
  fVar15 = auVar14._12_4_;
  *param_3 = (float)(~-(uint)(fVar5 <= 0.0) & (uint)((3.0 - fVar12 * fVar5 * fVar12) * fVar12 * 0.5)
                    ) * fVar6;
  param_3[1] = (float)(~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar3 * fVar7 * fVar3) * fVar3 * 0.5))
               * fVar8;
  param_3[2] = (float)(~-(uint)(fVar9 <= 0.0) &
                      (uint)((3.0 - fVar11 * fVar9 * fVar11) * fVar11 * 0.5)) * fVar10;
  param_3[3] = (float)(~-(uint)(fVar4 <= 0.0) &
                      (uint)((3.0 - fVar15 * fVar4 * fVar15) * fVar15 * 0.5)) * param_3[3];
  return;
}

// 01455F80  FUN_01455f80  size=390  [run]
void FUN_01455f80(int *param_1,int param_2,int *param_3,undefined4 param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  float *extraout_EDX;
  float *pfVar7;
  float *extraout_EDX_00;
  float *extraout_EDX_01;
  float *extraout_EDX_02;
  float *pfVar8;
  float *pfVar9;
  int local_10;
  
  iVar2 = *param_1;
  *param_3 = param_1[1];
  param_3[1] = *(int *)(param_2 + 4);
  param_3[2] = 0;
  param_3[4] = 0;
  param_3[3] = -1;
  pfVar8 = (float *)((uint)*(ushort *)param_3[1] * 0x10 + iVar2);
  pfVar9 = (float *)((uint)*(ushort *)*param_3 * 0x10 + iVar2);
  FUN_01455d60(pfVar9,pfVar8,param_4);
  iVar4 = (param_1[2] + *(int *)(param_2 + 8)) * 2;
  local_10 = 0;
  pfVar7 = extraout_EDX;
  if (0 < iVar4) {
    do {
      iVar3 = param_1[2];
      bVar5 = false;
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        puVar1 = (ushort *)(param_1[1] + iVar3 * 8);
        pfVar6 = (float *)((uint)*puVar1 * 0x10 + iVar2);
        if (1e-07 < (pfVar6[2] - pfVar9[2]) * pfVar7[2] +
                    (pfVar6[1] - pfVar9[1]) * pfVar7[1] + (*pfVar6 - *pfVar9) * *pfVar7) {
          *param_3 = (int)puVar1;
          FUN_01455d60(pfVar6,pfVar8,pfVar7);
          bVar5 = true;
          pfVar7 = extraout_EDX_00;
          pfVar9 = pfVar6;
        }
      }
      iVar3 = *(int *)(param_2 + 8);
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        puVar1 = (ushort *)(*(int *)(param_2 + 4) + iVar3 * 8);
        pfVar6 = (float *)((uint)*puVar1 * 0x10 + iVar2);
        if (1e-07 < (pfVar6[2] - pfVar8[2]) * pfVar7[2] +
                    (pfVar6[1] - pfVar8[1]) * pfVar7[1] + (*pfVar6 - *pfVar8) * *pfVar7) {
          param_3[1] = (int)puVar1;
          FUN_01455d60(pfVar9,pfVar6,pfVar7);
          bVar5 = true;
          pfVar8 = pfVar6;
          pfVar7 = extraout_EDX_01;
        }
      }
      if (!bVar5) {
        return;
      }
      FUN_01455d60(pfVar9,pfVar8,pfVar7);
      local_10 = local_10 + 1;
      pfVar7 = extraout_EDX_02;
    } while (local_10 < iVar4);
  }
  return;
}

// 01456110  FUN_01456110  size=391  [run]
undefined1 * FUN_01456110(undefined1 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *local_210;
  uint local_20c;
  uint local_208;
  undefined4 local_204 [128];
  
  iVar1 = *(int *)(param_2 + 4);
  local_210 = local_204;
  uVar3 = 1;
  local_208 = 0x80000080;
  local_204[0] = param_3;
  do {
    iVar2 = local_210[uVar3 - 1];
    uVar3 = uVar3 - 1;
    iVar4 = iVar2;
    do {
      iVar4 = iVar1 + (uint)*(ushort *)(iVar4 + 4) * 8;
      uVar5 = (uint)*(ushort *)(iVar4 + 6);
      if (uVar5 == 1) {
LAB_0145618a:
        if (uVar5 != param_4) {
          *param_1 = 0;
          local_20c = 0;
          if ((int)local_208 < 0) {
            return param_1;
          }
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_210,local_208 * 4);
          return param_1;
        }
LAB_01456193:
        *(undefined2 *)(iVar4 + 6) = (undefined2)param_4;
      }
      else {
        if (uVar5 != 2) {
          if (uVar5 == 3) goto LAB_0145618a;
          goto LAB_01456193;
        }
        if (param_4 != 3) goto LAB_01456193;
      }
      iVar6 = iVar2;
      local_20c = uVar3;
    } while (iVar4 != iVar2);
    do {
      uVar5 = (uint)*(ushort *)(iVar1 + 2 + (uint)*(ushort *)(iVar6 + 4) * 8);
      iVar6 = iVar1 + (uint)*(ushort *)(iVar6 + 4) * 8;
      if (*(short *)(iVar1 + 6 + uVar5 * 8) == 0) {
        if (uVar3 == (local_208 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_210,4);
          uVar3 = local_20c;
        }
        local_210[uVar3] = iVar1 + uVar5 * 8;
        uVar3 = local_20c + 1;
        local_20c = uVar3;
      }
    } while (iVar6 != iVar2);
    if (uVar3 == 0) {
      *param_1 = 1;
      if (-1 < (int)local_208) {
        local_20c = uVar3;
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_210,local_208 * 4);
      }
      return param_1;
    }
  } while( true );
}

// 014562B0  FUN_014562b0  size=835  [run]
void FUN_014562b0(char *param_1,int param_2,undefined4 param_3,char param_4,int *param_5)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_7;
  char local_6;
  char local_5;
  
  iVar7 = *(int *)(param_2 + 4);
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      *(undefined2 *)(*(int *)(param_2 + 4) + 6 + iVar3 * 8) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 8));
  }
  iVar3 = 0;
  if (param_4 == '\0') {
    iVar12 = *(int *)(*param_5 + 4);
  }
  else {
    iVar12 = *(int *)*param_5;
  }
  iVar13 = param_5[1] + -1;
  if (-1 < iVar13) {
    iVar10 = iVar13 * 0x10;
    do {
      if (param_4 == '\0') {
        iVar5 = *(int *)(*param_5 + 4 + iVar10);
      }
      else {
        iVar5 = *(int *)(iVar10 + *param_5);
      }
      if (iVar5 != iVar12) {
        iVar3 = iVar3 + 1;
        iVar12 = iVar5;
        if (param_4 != '\0') {
          iVar12 = iVar7 + (uint)*(ushort *)(iVar5 + 2) * 8;
        }
        if (*(short *)(iVar12 + 6) == 3) goto LAB_01456352;
        *(undefined2 *)(iVar12 + 6) = 3;
        iVar12 = iVar5;
      }
      iVar10 = iVar10 + -0x10;
      iVar13 = iVar13 + -1;
    } while (-1 < iVar13);
    if (iVar3 != 0) {
      if (param_4 == '\0') {
        iVar3 = *(int *)(*param_5 + 4);
      }
      else {
        iVar3 = *(int *)*param_5;
      }
      iVar12 = param_5[1] + -1;
      if (-1 < iVar12) {
        iVar13 = iVar12 * 0x10;
        do {
          if (param_4 == '\0') {
            iVar10 = *(int *)(*param_5 + 4 + iVar13);
          }
          else {
            iVar10 = *(int *)(iVar13 + *param_5);
          }
          if (iVar10 != iVar3) {
            iVar5 = iVar10;
            if (param_4 == '\0') {
              iVar5 = iVar7 + (uint)*(ushort *)(iVar10 + 2) * 8;
            }
            sVar1 = *(short *)(iVar5 + 6);
            iVar3 = iVar10;
            if (sVar1 == 0) {
              uVar9 = 1;
            }
            else {
              if (sVar1 == 1) {
LAB_01456352:
                *param_1 = '\0';
                return;
              }
              if (sVar1 != 3) goto LAB_014563ca;
              uVar9 = 2;
            }
            *(undefined2 *)(iVar5 + 6) = uVar9;
          }
LAB_014563ca:
          iVar13 = iVar13 + -0x10;
          iVar12 = iVar12 + -1;
        } while (-1 < iVar12);
      }
      cVar8 = '\x01';
      local_5 = '\x01';
      if (param_4 == '\0') {
        local_10 = ((int *)*param_5)[1];
      }
      else {
        local_10 = *(int *)*param_5;
      }
      local_14 = param_5[1] + -1;
      if (-1 < local_14) {
        iVar3 = local_14 * 0x10;
        do {
          if (param_4 == '\0') {
            iVar12 = *(int *)(*param_5 + 4 + iVar3);
          }
          else {
            iVar12 = *(int *)(iVar3 + *param_5);
          }
          if (iVar12 != local_10) {
            iVar13 = iVar12;
            if (param_4 == '\0') {
              iVar13 = iVar7 + (uint)*(ushort *)(iVar12 + 2) * 8;
            }
            if (*(short *)(iVar13 + 6) == 1) {
              if ((cVar8 == '\0') ||
                 (pcVar4 = (char *)FUN_01456110(&local_6,param_2,iVar13,1), *pcVar4 == '\0')) {
                local_5 = '\0';
                cVar8 = local_5;
              }
              else {
                local_5 = '\x01';
                cVar8 = local_5;
              }
            }
            local_10 = iVar12;
            if (*(short *)(iVar7 + 6 + (uint)*(ushort *)(iVar13 + 2) * 8) == 3) {
              if ((cVar8 == '\0') ||
                 (pcVar4 = (char *)FUN_01456110(&local_7,param_2,
                                                iVar7 + (uint)*(ushort *)(iVar13 + 2) * 8,3),
                 *pcVar4 == '\0')) {
                local_5 = '\0';
                cVar8 = local_5;
              }
              else {
                local_5 = '\x01';
                cVar8 = local_5;
              }
            }
          }
          local_14 = local_14 + -1;
          iVar3 = iVar3 + -0x10;
        } while (-1 < local_14);
      }
      if (param_4 == '\0') {
        local_10 = ((int *)*param_5)[1];
      }
      else {
        local_10 = *(int *)*param_5;
      }
      local_18 = param_5[1] + -1;
      if (-1 < local_18) {
        iVar3 = local_18 * 0x10;
        do {
          piVar11 = (int *)*param_5;
          if (param_4 == '\0') {
            iVar12 = *(int *)((int)piVar11 + iVar3 + 4);
          }
          else {
            iVar12 = *(int *)((int)piVar11 + iVar3);
          }
          if (iVar12 != local_10) {
            iVar13 = iVar12;
            if (param_4 == '\0') {
              iVar13 = iVar7 + (uint)*(ushort *)(iVar12 + 2) * 8;
            }
            local_10 = iVar12;
            if (*(short *)(iVar13 + 6) == 2) {
              local_6 = '\x01';
              if (param_4 == '\0') {
                iVar12 = piVar11[1];
              }
              else {
                iVar12 = *piVar11;
              }
              iVar10 = param_5[1] + -1;
              if (-1 < iVar10) {
                piVar11 = piVar11 + iVar10 * 4;
                do {
                  if (param_4 == '\0') {
                    iVar5 = piVar11[1];
                  }
                  else {
                    iVar5 = *piVar11;
                  }
                  if ((iVar5 != iVar12) && (iVar12 = iVar5, *(short *)(iVar5 + 6) != 2)) {
                    local_6 = '\0';
                    break;
                  }
                  piVar11 = piVar11 + -4;
                  iVar10 = iVar10 + -1;
                } while (-1 < iVar10);
              }
              bVar2 = false;
              if (0 < *(int *)(param_2 + 8)) {
                psVar6 = (short *)(*(int *)(param_2 + 4) + 6);
                iVar12 = 0;
                do {
                  if (*psVar6 == 0) {
                    bVar2 = true;
                    break;
                  }
                  iVar12 = iVar12 + 1;
                  psVar6 = psVar6 + 4;
                } while (iVar12 < *(int *)(param_2 + 8));
              }
              if ((local_6 != '\0') && (bVar2)) {
                if ((local_5 == '\0') ||
                   (pcVar4 = (char *)FUN_01456110(&local_7,param_2,iVar13,3), *pcVar4 == '\0')) {
                  local_5 = '\0';
                }
                else {
                  local_5 = '\x01';
                }
              }
            }
          }
          local_18 = local_18 + -1;
          iVar3 = iVar3 + -0x10;
          cVar8 = local_5;
        } while (-1 < local_18);
      }
      iVar7 = 0;
      if (0 < *(int *)(param_2 + 8)) {
        do {
          if ((cVar8 == '\0') || (*(short *)(*(int *)(param_2 + 4) + 6 + iVar7 * 8) == 0)) {
            cVar8 = '\0';
          }
          else {
            cVar8 = '\x01';
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_2 + 8));
      }
      *param_1 = cVar8;
      return;
    }
  }
  *param_1 = '\x01';
  return;
}

// 01456600  FUN_01456600  size=791  [run]
float10 FUN_01456600(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float local_14;
  
  fVar2 = *param_2 - *param_4;
  fVar4 = param_2[1] - param_4[1];
  fVar6 = param_2[2] - param_4[2];
  fVar3 = fVar2 * fVar2;
  fVar5 = fVar4 * fVar4;
  fVar7 = fVar6 * fVar6;
  if (fVar5 + fVar3 + fVar7 < *(float *)(param_1 + 8)) {
    return (float10)0;
  }
  auVar12._4_4_ = fVar3;
  auVar12._0_4_ = fVar3;
  auVar12._8_4_ = fVar3;
  auVar12._12_4_ = fVar3;
  fVar8 = fVar5 + fVar3 + fVar7;
  fVar9 = fVar5 + fVar3 + fVar7;
  fVar10 = fVar5 + fVar3 + fVar7;
  auVar13._4_4_ = fVar9;
  auVar13._0_4_ = fVar8;
  auVar13._8_4_ = fVar10;
  auVar13._12_4_ = fVar5 + fVar3 + fVar7;
  auVar13 = rsqrtps(auVar12,auVar13);
  fVar14 = *param_4 - *param_5;
  fVar16 = param_4[1] - param_5[1];
  fVar17 = param_4[2] - param_5[2];
  fVar3 = auVar13._0_4_;
  fVar5 = auVar13._4_4_;
  fVar7 = auVar13._8_4_;
  fVar2 = (float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar3 * fVar8 * fVar3) * fVar3 * 0.5)) *
          fVar2;
  fVar4 = (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar5 * fVar9 * fVar5) * fVar5 * 0.5)) *
          fVar4;
  fVar6 = (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar7 * fVar10 * fVar7) * fVar7 * 0.5)) *
          fVar6;
  fVar3 = *param_3;
  fVar5 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = -(fVar7 * fVar6 + fVar5 * fVar4 + fVar3 * fVar2);
  fVar11 = fVar16 * fVar7 - fVar17 * fVar5;
  fVar17 = fVar17 * fVar3 - fVar14 * fVar7;
  fVar16 = fVar14 * fVar5 - fVar16 * fVar3;
  fVar3 = fVar11 * fVar11;
  fVar5 = fVar17 * fVar17;
  fVar7 = fVar16 * fVar16;
  auVar15._4_4_ = fVar3;
  auVar15._0_4_ = fVar3;
  auVar15._8_4_ = fVar3;
  auVar15._12_4_ = fVar3;
  fVar9 = fVar5 + fVar3 + fVar7;
  fVar10 = fVar5 + fVar3 + fVar7;
  fVar14 = fVar5 + fVar3 + fVar7;
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar14;
  auVar1._12_4_ = fVar5 + fVar3 + fVar7;
  auVar13 = rsqrtps(auVar15,auVar1);
  fVar3 = auVar13._0_4_;
  fVar5 = auVar13._4_4_;
  fVar7 = auVar13._8_4_;
  fVar3 = (float)(~-(uint)(fVar14 <= 0.0) & (uint)((3.0 - fVar7 * fVar14 * fVar7) * fVar7 * 0.5)) *
          fVar16 * fVar6 +
          (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar5 * fVar10 * fVar5) * fVar5 * 0.5)) *
          fVar17 * fVar4 +
          (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar3 * fVar9 * fVar3) * fVar3 * 0.5)) *
          fVar11 * fVar2;
  if (fVar3 * fVar3 + fVar8 * fVar8 < *(float *)(param_1 + 8)) {
    return (float10)1.70141e+38;
  }
  fVar2 = ABS(fVar8);
  if (fVar2 < 1e-06) {
    if (1e-07 <= ABS(fVar3)) goto LAB_014567fd;
    if (fVar3 < 0.0) {
      local_14 = 4.0;
      goto LAB_014568e1;
    }
LAB_014568bc:
    local_14 = 0.0;
    goto LAB_014568e1;
  }
LAB_014567fd:
  if (ABS(fVar3) < fVar2) {
    local_14 = 2.0 - fVar3 / fVar8;
    if (-1e-06 <= fVar8) {
      local_14 = local_14 + 0.0;
    }
    else {
      local_14 = local_14 + 4.0;
    }
    goto LAB_014568e1;
  }
  if (-0.999999 <= fVar3) {
LAB_01456883:
    if (-1e-06 <= fVar3) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = 4.0;
    }
    fVar5 = fVar5 + fVar8 / fVar3;
  }
  else {
    if (1e-06 <= fVar2) goto LAB_01456883;
    fVar5 = 4.0;
  }
  if (ABS(fVar5) < *(float *)(param_1 + 0x30)) goto LAB_014568bc;
  if (fVar3 <= 1e-06) {
LAB_014568da:
    local_14 = 0.0;
  }
  else {
    if (1e-07 <= fVar2) goto LAB_014568da;
    local_14 = 8.0;
  }
  local_14 = local_14 + fVar5;
LAB_014568e1:
  if (local_14 < -*(float *)(param_1 + 0x30)) {
    local_14 = local_14 + 8.0;
  }
  if (8.0 < local_14) {
    local_14 = 0.0;
  }
  return (float10)local_14;
}

// 01456B30  FUN_01456b30  size=492  [run]
void FUN_01456b30(int param_1,int param_2,float param_3,undefined8 *param_4,ushort *param_5,
                 float *param_6,float *param_7,int *param_8)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  fVar11 = *(float *)(param_2 + 0xc);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  pfVar4 = (float *)((uint)*param_5 * 0x10 + param_1);
  fVar7 = *param_6 - *param_7;
  fVar8 = param_6[1] - param_7[1];
  fVar9 = param_6[2] - param_7[2];
  fVar10 = param_6[3] - param_7[3];
  local_20._0_4_ = (float)uVar2;
  local_20._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  uStack_18._0_4_ = (float)uVar3;
  uStack_18._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  if ((param_3 < fVar11) || (8.0 - fVar11 < param_3)) {
    fVar14 = local_20._4_4_ * fVar9;
    fVar15 = (float)uStack_18 * fVar7;
    fVar16 = (float)local_20 * fVar8;
    fVar11 = (float)uStack_18 * fVar8;
    fVar12 = (float)local_20 * fVar9;
    fVar13 = local_20._4_4_ * fVar7;
  }
  else {
    fVar14 = (float)local_20;
    fVar15 = local_20._4_4_;
    fVar16 = (float)uStack_18;
    fVar12 = uStack_18._4_4_;
    if (fVar11 <= ABS(param_3 - 4.0)) goto LAB_01456c74;
    fVar11 = local_20._4_4_ * fVar9;
    fVar12 = (float)uStack_18 * fVar7;
    fVar13 = (float)local_20 * fVar8;
    fVar14 = (float)uStack_18 * fVar8;
    fVar15 = (float)local_20 * fVar9;
    fVar16 = local_20._4_4_ * fVar7;
  }
  fVar14 = fVar14 - fVar11;
  fVar15 = fVar15 - fVar12;
  fVar16 = fVar16 - fVar13;
  fVar11 = fVar14 * fVar14;
  fVar12 = fVar15 * fVar15;
  fVar13 = fVar16 * fVar16;
  fVar17 = fVar12 + fVar11 + fVar13;
  fVar18 = fVar12 + fVar11 + fVar13;
  fVar19 = fVar12 + fVar11 + fVar13;
  fVar13 = fVar12 + fVar11 + fVar13;
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  auVar21._4_4_ = fVar18;
  auVar21._0_4_ = fVar17;
  auVar21._8_4_ = fVar19;
  auVar21._12_4_ = fVar13;
  auVar21 = rsqrtps(auVar20,auVar21);
  fVar11 = auVar21._0_4_;
  fVar12 = auVar21._4_4_;
  fVar22 = auVar21._8_4_;
  fVar23 = auVar21._12_4_;
  fVar14 = (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar11 * fVar17 * fVar11) * fVar11 * 0.5)
                  ) * fVar14;
  fVar15 = (float)(~-(uint)(fVar18 <= 0.0) & (uint)((3.0 - fVar12 * fVar18 * fVar12) * fVar12 * 0.5)
                  ) * fVar15;
  fVar16 = (float)(~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar22 * fVar19 * fVar22) * fVar22 * 0.5)
                  ) * fVar16;
  fVar12 = (float)(~-(uint)(fVar13 <= 0.0) & (uint)((3.0 - fVar23 * fVar13 * fVar23) * fVar23 * 0.5)
                  ) * (uStack_18._4_4_ * fVar10 - uStack_18._4_4_ * fVar10);
  local_20 = CONCAT44(fVar15,fVar14);
  uStack_18 = CONCAT44(fVar12,fVar16);
  uVar2 = local_20;
  uVar3 = uStack_18;
LAB_01456c74:
  uStack_18 = uVar3;
  local_20 = uVar2;
  fVar11 = *pfVar4;
  fVar13 = pfVar4[1];
  fVar17 = pfVar4[2];
  fVar18 = pfVar4[3];
  local_30 = (fVar15 * fVar9 - fVar16 * fVar8) + fVar11;
  fStack_2c = (fVar16 * fVar7 - fVar14 * fVar9) + fVar13;
  fStack_28 = (fVar14 * fVar8 - fVar15 * fVar7) + fVar17;
  fStack_24 = (fVar12 * fVar10 - fVar12 * fVar10) + fVar18;
  local_40 = fVar11;
  fStack_3c = fVar13;
  fStack_38 = fVar17;
  fStack_34 = fVar18;
  if (pfVar4 == param_6) {
    local_40 = local_30;
    fStack_3c = fStack_2c;
    fStack_38 = fStack_28;
    fStack_34 = fStack_24;
    local_30 = fVar11;
    fStack_2c = fVar13;
    fStack_28 = fVar17;
    fStack_24 = fVar18;
  }
  iVar5 = 0;
  if (0 < param_8[1]) {
    do {
      puVar1 = (undefined4 *)(*param_8 + iVar5 * 8);
      fVar6 = (float10)FUN_01456600(param_2,(uint)*(ushort *)*puVar1 * 0x10 + param_1,&local_20,
                                    &local_40,&local_30);
      iVar5 = iVar5 + 1;
      puVar1[1] = (float)fVar6;
    } while (iVar5 < param_8[1]);
  }
  if (1 < param_8[1]) {
    FUN_01458d60(*param_8,0,param_8[1] + -1,FUN_014525a0);
  }
  return;
}

// 01456D20  FUN_01456d20  size=339  [run]
void FUN_01456d20(int param_1,undefined4 param_2,undefined4 param_3,short param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7,int *param_8,int *param_9
                 )

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *local_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((param_8[1] == 1) && (param_9[1] == 1)) {
    uVar3 = *param_5;
    if ((param_5[2] != 0) && ((param_4 != -1 && (**(short **)(param_5[2] + 4) == param_4)))) {
      uVar3 = param_5[1];
    }
    piVar1 = (int *)*param_8;
    puVar2 = (undefined4 *)*param_9;
    if (ABS((float)piVar1[1] - (float)puVar2[1]) < *(float *)(param_1 + 0xc)) {
      iStack_28 = -0x7ffffffe;
      local_30 = &iStack_24;
      iStack_24 = *piVar1;
      local_20 = piVar1[1];
      local_1c = *puVar2;
      local_18 = puVar2[1];
      uStack_2c = 2;
      FUN_01456b30(param_2,param_1,puVar2[1],param_3,uVar3,param_6,param_7,&local_30);
      param_8 = (int *)*param_8;
      if (*local_30 != *param_8) {
        param_8 = (int *)*param_9;
      }
      param_8[1] = (int)((float)param_8[1] * 0.5);
      uStack_2c = 0;
      if (-1 < iStack_28) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,iStack_28 * 8);
      }
    }
  }
  return;
}

// 01456E80  FUN_01456e80  size=324  [run]
void FUN_01456e80(int param_1,int param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint extraout_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_10;
  int local_c;
  char local_6;
  char local_5;
  
  local_10 = 0;
  if (0 < param_3[1]) {
    local_c = 0;
    do {
      param_4[1] = 0;
      piVar5 = (int *)(*param_3 + local_c);
      if ((param_4[2] & 0x3fffffffU) == 0) {
        FUN_0100a210(&PTR_vftable_018e9b94,param_4,1,0x10);
      }
      param_4[1] = param_4[1] + 1;
      piVar1 = (int *)*param_4;
      *piVar1 = *piVar5;
      piVar1[1] = piVar5[1];
      for (piVar1 = (int *)piVar5[2]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        if (((*piVar1 == *piVar5) && (piVar1[1] == piVar5[1])) && (piVar1[3] == piVar5[3])) {
          FUN_014562b0(&local_5,param_1,*(undefined4 *)(param_2 + 4),
                       CONCAT31((int3)((uint)piVar1[1] >> 8),1),param_4);
          FUN_014562b0(&local_6,param_2,*(undefined4 *)(param_1 + 4),extraout_ECX & 0xffffff00,
                       param_4);
          if ((local_5 != '\0') && (local_6 != '\0')) {
            return;
          }
        }
        iVar2 = param_4[1];
        iVar4 = iVar2 + 1;
        if ((int)(param_4[2] & 0x3fffffffU) < iVar4) {
          iVar3 = (param_4[2] & 0x3fffffffU) * 2;
          if (iVar4 < iVar3) {
            iVar4 = iVar3;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar4,0x10);
        }
        param_4[1] = param_4[1] + 1;
        piVar6 = (int *)(iVar2 * 0x10 + *param_4);
        *piVar6 = *piVar1;
        piVar6[1] = piVar1[1];
      }
      local_c = local_c + 0x14;
      local_10 = local_10 + 1;
    } while (local_10 < param_3[1]);
  }
  param_4[1] = 0;
  return;
}

// 01456FD0  FUN_01456fd0  size=411  [run]
void FUN_01456fd0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int *param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 *local_218;
  uint local_214;
  uint local_210;
  undefined4 local_20c [128];
  float local_c;
  undefined4 local_8;
  
  local_8 = *param_2;
  fVar6 = *(float *)(param_1 + 0xc);
  if ((1 < param_7[1]) &&
     (iVar4 = *param_7, *(float *)(iVar4 + 0xc) - *(float *)(iVar4 + 4) < fVar6)) {
    iVar5 = 0;
    local_218 = local_20c;
    local_214 = 0;
    local_210 = 0x80000040;
    fVar3 = *(float *)(iVar4 + 4);
    local_c = fVar6;
    if (0 < param_7[1]) {
      do {
        puVar1 = (undefined4 *)(*param_7 + iVar5 * 8);
        if (fVar6 < *(float *)(*param_7 + 4 + iVar5 * 8) - fVar3) break;
        if (local_214 == (local_210 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_218,8);
          fVar6 = local_c;
        }
        puVar2 = local_218 + local_214 * 2;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        }
        local_214 = local_214 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_7[1]);
    }
    FUN_01456b30(local_8,param_1,fVar3,param_3,param_4,param_5,param_6,&local_218);
    puVar1 = (undefined4 *)*param_7;
    *puVar1 = *local_218;
    puVar1[1] = local_218[1];
    *(float *)(*param_7 + 4) = fVar3;
    if ((param_7[2] & 0x3fffffffU) == 0) {
      FUN_0100a210(&PTR_vftable_018e9b94,param_7,1,8);
    }
    param_7[1] = 1;
    local_214 = 0;
    if (-1 < (int)local_210) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_218,local_210 * 8);
    }
  }
  return;
}

// 01457170  FUN_01457170  size=266  [run]
void FUN_01457170(undefined4 param_1,int *param_2,undefined4 param_3,ushort param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int *param_8)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  float10 fVar9;
  float local_8;
  
  if (param_2[2] != 1) {
    iVar3 = param_2[1];
    iVar4 = *param_2;
    puVar1 = (ushort *)(iVar3 + (uint)*(ushort *)(param_5 + 2) * 8);
    puVar8 = puVar1;
    do {
      if (*puVar8 == param_4) {
        local_8 = 4.0;
      }
      else {
        fVar9 = (float10)FUN_01456600(param_1,(uint)*puVar8 * 0x10 + iVar4,param_3,param_6,param_7);
        local_8 = (float)fVar9;
      }
      iVar5 = param_8[1];
      iVar7 = iVar5 + 1;
      if ((int)(param_8[2] & 0x3fffffffU) < iVar7) {
        iVar6 = (param_8[2] & 0x3fffffffU) * 2;
        if (iVar7 < iVar6) {
          iVar7 = iVar6;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,param_8,iVar7,8);
      }
      param_8[1] = param_8[1] + 1;
      puVar2 = (undefined4 *)(*param_8 + iVar5 * 8);
      *puVar2 = puVar8;
      puVar2[1] = local_8;
      puVar8 = (ushort *)(iVar3 + (uint)*(ushort *)(iVar3 + 2 + (uint)puVar8[2] * 8) * 8);
    } while (puVar8 != puVar1);
    if (1 < param_8[1]) {
      FUN_01458d60(*param_8,0,param_8[1] + -1,FUN_014525a0);
    }
    FUN_01456fd0(param_1,param_2,param_3,param_5,param_6,param_7,param_8);
  }
  return;
}

// 01457280  FUN_01457280  size=2364  [run]
undefined4 FUN_01457280(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  char *pcVar10;
  LPVOID pvVar11;
  undefined1 **ppuVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 in_XMM4 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  undefined1 *local_e30;
  int local_e2c;
  uint local_e28;
  undefined1 local_e24 [2052];
  undefined1 *local_620;
  undefined4 local_61c;
  int local_618;
  undefined1 local_614 [516];
  undefined1 *local_410;
  undefined4 local_40c;
  int local_408;
  undefined1 local_404 [516];
  undefined1 *local_200;
  uint local_1fc;
  uint local_1f8;
  undefined1 local_1f4 [260];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 *local_64;
  undefined4 local_60;
  uint local_5c;
  undefined1 local_58 [20];
  float local_44 [2];
  int local_3c;
  int local_38;
  int local_34;
  float *local_30;
  float *local_2c;
  int local_28;
  undefined1 local_21;
  int local_20;
  int local_1c;
  undefined1 **local_18;
  undefined1 **local_14;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_4 = *param_2;
  pcVar10 = (char *)FUN_01455270(&local_21,uVar1,param_2,param_3,param_4);
  if (*pcVar10 == '\0') {
    local_38 = *param_2;
    local_64 = local_58;
    local_5c = 0x80000001;
    local_60 = 1;
    FUN_01455f80(param_2,param_3,local_64,&local_90);
    local_28 = param_2[2] + 2 + param_3[2];
    local_a0 = local_90;
    fStack_9c = fStack_8c;
    fStack_98 = fStack_88;
    fStack_94 = fStack_84;
    local_44[0] = *(float *)(param_1 + 0x20);
    local_200 = local_1f4;
    local_e30 = local_e24;
    local_3c = local_28 * 3;
    local_1fc = 0;
    local_e2c = 0;
    local_14 = &local_64;
    local_1f8 = 0x80000040;
    local_e28 = 0x80000080;
    local_1c = 0;
    uVar9 = local_1fc;
    if (0 < local_3c) {
      while( true ) {
        if ((local_28 < local_1c) && (local_44[0] = local_44[0] * 1.1, 1.0 < local_44[0])) {
          local_28 = local_28 + 1;
        }
        pvVar11 = TlsGetValue(DAT_01f8fc4c);
        ppuVar12 = *(undefined1 ***)((int)pvVar11 + 0xc);
        if ((*(int *)((int)pvVar11 + 8) < 0x180) ||
           (*(undefined1 ***)((int)pvVar11 + 0x10) < ppuVar12 + 0x60)) {
          ppuVar12 = (undefined1 **)FUN_0100b780(0x180);
        }
        else {
          *(undefined1 ***)((int)pvVar11 + 0xc) = ppuVar12 + 0x60;
        }
        if (ppuVar12 != (undefined1 **)0x0) {
          *ppuVar12 = (undefined1 *)(ppuVar12 + 3);
          ppuVar12[1] = (undefined1 *)0x0;
          ppuVar12[2] = &DAT_80000010;
        }
        local_18 = ppuVar12;
        if (local_1fc == (local_1f8 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_200,4);
        }
        *(undefined1 ***)(local_200 + local_1fc * 4) = ppuVar12;
        local_1fc = local_1fc + 1;
        local_34 = 0;
        if (0 < (int)local_14[1]) {
          local_20 = 0;
          do {
            puVar15 = (undefined4 *)(*local_14 + local_20);
            local_618 = -0x7fffffc0;
            local_408 = -0x7fffffc0;
            local_61c = 0;
            local_40c = 0;
            local_620 = local_614;
            local_410 = local_404;
            local_2c = (float *)((uint)*(ushort *)puVar15[1] * 0x10 + local_38);
            pfVar16 = (float *)((uint)*(ushort *)*puVar15 * 0x10 + local_38);
            local_80 = local_90;
            fStack_7c = fStack_8c;
            fStack_78 = fStack_88;
            fStack_74 = fStack_84;
            if (puVar15[2] != 0) {
              local_30 = (float *)((uint)**(ushort **)puVar15[2] * 0x10 + local_38);
              pfVar13 = (float *)((uint)**(ushort **)(puVar15[2] + 4) * 0x10 + local_38);
              pfVar14 = local_2c;
              if (local_30 != pfVar16) {
                pfVar14 = pfVar16;
              }
              local_c0 = *pfVar13;
              fStack_bc = pfVar13[1];
              fStack_b8 = pfVar13[2];
              fStack_b4 = pfVar13[3];
              fStack_d8 = local_c0 - *local_30;
              local_e0 = fStack_bc - local_30[1];
              fStack_dc = fStack_b8 - local_30[2];
              fVar17 = fStack_d8 * fStack_d8;
              fVar18 = local_e0 * local_e0;
              fVar19 = fStack_dc * fStack_dc;
              fVar20 = fVar18 + fVar17 + fVar19;
              fVar23 = fVar18 + fVar17 + fVar19;
              fVar26 = fVar18 + fVar17 + fVar19;
              fVar19 = fVar18 + fVar17 + fVar19;
              auVar29._4_4_ = fVar23;
              auVar29._0_4_ = fVar20;
              auVar29._8_4_ = fVar26;
              auVar29._12_4_ = fVar19;
              auVar29 = rsqrtps(in_XMM4,auVar29);
              fVar17 = auVar29._0_4_;
              fVar18 = auVar29._4_4_;
              fVar21 = auVar29._8_4_;
              fVar24 = auVar29._12_4_;
              fStack_d8 = (float)(~-(uint)(fVar20 <= 0.0) &
                                 (uint)((3.0 - fVar17 * fVar20 * fVar17) * fVar17 * 0.5)) *
                          fStack_d8;
              local_e0 = (float)(~-(uint)(fVar23 <= 0.0) &
                                (uint)((3.0 - fVar18 * fVar23 * fVar18) * fVar18 * 0.5)) * local_e0;
              fStack_dc = (float)(~-(uint)(fVar26 <= 0.0) &
                                 (uint)((3.0 - fVar21 * fVar26 * fVar21) * fVar21 * 0.5)) *
                          fStack_dc;
              fStack_d4 = (float)(~-(uint)(fVar19 <= 0.0) &
                                 (uint)((3.0 - fVar24 * fVar19 * fVar24) * fVar24 * 0.5)) *
                          (fStack_b4 - local_30[3]);
              local_d0 = *pfVar14;
              fStack_cc = pfVar14[1];
              fStack_c8 = pfVar14[2];
              fStack_c4 = pfVar14[3];
              fVar19 = local_d0 - *local_30;
              fVar20 = fStack_cc - local_30[1];
              fVar26 = fStack_c8 - local_30[2];
              fVar17 = fVar19 * fVar19;
              fVar18 = fVar20 * fVar20;
              fVar23 = fVar26 * fVar26;
              auVar30._4_4_ = fVar17;
              auVar30._0_4_ = fVar17;
              auVar30._8_4_ = fVar17;
              auVar30._12_4_ = fVar17;
              fVar21 = fVar18 + fVar17 + fVar23;
              fVar24 = fVar18 + fVar17 + fVar23;
              fVar27 = fVar18 + fVar17 + fVar23;
              fVar23 = fVar18 + fVar17 + fVar23;
              auVar4._4_4_ = fVar24;
              auVar4._0_4_ = fVar21;
              auVar4._8_4_ = fVar27;
              auVar4._12_4_ = fVar23;
              auVar29 = rsqrtps(auVar30,auVar4);
              fVar17 = auVar29._0_4_;
              fVar18 = auVar29._4_4_;
              fVar36 = auVar29._8_4_;
              fVar37 = auVar29._12_4_;
              fVar19 = (float)(~-(uint)(fVar21 <= 0.0) &
                              (uint)((3.0 - fVar17 * fVar21 * fVar17) * fVar17 * 0.5)) * fVar19;
              fVar20 = (float)(~-(uint)(fVar24 <= 0.0) &
                              (uint)((3.0 - fVar18 * fVar24 * fVar18) * fVar18 * 0.5)) * fVar20;
              fVar26 = (float)(~-(uint)(fVar27 <= 0.0) &
                              (uint)((3.0 - fVar36 * fVar27 * fVar36) * fVar36 * 0.5)) * fVar26;
              fVar23 = (float)(~-(uint)(fVar23 <= 0.0) &
                              (uint)((3.0 - fVar37 * fVar23 * fVar37) * fVar37 * 0.5)) *
                       (fStack_c4 - local_30[3]);
              fVar17 = fVar26 * local_e0 - fVar20 * fStack_dc;
              fVar18 = fVar19 * fStack_dc - fVar26 * fStack_d8;
              fVar19 = fVar20 * fStack_d8 - fVar19 * local_e0;
              fVar20 = fVar23 * fStack_d4 - fVar23 * fStack_d4;
              if (fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17 < 1e-06) {
                local_f0 = local_d0 - local_c0;
                fStack_ec = fStack_cc - fStack_bc;
                fStack_e8 = fStack_c8 - fStack_b8;
                fStack_e4 = fStack_c4 - fStack_b4;
                fVar17 = local_f0 * local_f0;
                fVar18 = fStack_ec * fStack_ec;
                fVar19 = fStack_e8 * fStack_e8;
                auVar31._4_4_ = fVar17;
                auVar31._0_4_ = fVar17;
                auVar31._8_4_ = fVar17;
                auVar31._12_4_ = fVar17;
                fVar20 = fVar18 + fVar17 + fVar19;
                fVar26 = fVar18 + fVar17 + fVar19;
                fVar21 = fVar18 + fVar17 + fVar19;
                fVar19 = fVar18 + fVar17 + fVar19;
                auVar5._4_4_ = fVar26;
                auVar5._0_4_ = fVar20;
                auVar5._8_4_ = fVar21;
                auVar5._12_4_ = fVar19;
                auVar29 = rsqrtps(auVar31,auVar5);
                fVar17 = auVar29._0_4_;
                fVar18 = auVar29._4_4_;
                fVar24 = auVar29._8_4_;
                fVar27 = auVar29._12_4_;
                fVar23 = (float)(~-(uint)(fVar20 <= 0.0) &
                                (uint)((3.0 - fVar17 * fVar20 * fVar17) * fVar17 * 0.5)) * local_f0;
                fVar26 = (float)(~-(uint)(fVar26 <= 0.0) &
                                (uint)((3.0 - fVar18 * fVar26 * fVar18) * fVar18 * 0.5)) * fStack_ec
                ;
                fVar21 = (float)(~-(uint)(fVar21 <= 0.0) &
                                (uint)((3.0 - fVar24 * fVar21 * fVar24) * fVar24 * 0.5)) * fStack_e8
                ;
                fVar24 = (float)(~-(uint)(fVar19 <= 0.0) &
                                (uint)((3.0 - fVar27 * fVar19 * fVar27) * fVar27 * 0.5)) * fStack_e4
                ;
                fVar17 = fVar21 * local_e0 - fVar26 * fStack_dc;
                fVar18 = fVar23 * fStack_dc - fVar21 * fStack_d8;
                fVar19 = fVar26 * fStack_d8 - fVar23 * local_e0;
                fVar20 = fVar24 * fStack_d4 - fVar24 * fStack_d4;
                if (fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19 < 1e-06) {
                  fVar27 = fVar23 + fStack_d8;
                  fVar36 = fVar26 + local_e0;
                  fVar37 = fVar21 + fStack_dc;
                  local_b0 = fStack_d8 - fVar23;
                  fStack_ac = local_e0 - fVar26;
                  fStack_a8 = fStack_dc - fVar21;
                  fStack_a4 = fStack_d4 - fVar24;
                  fVar23 = local_b0 * local_b0;
                  fVar26 = fStack_ac * fStack_ac;
                  fVar21 = fStack_a8 * fStack_a8;
                  fVar17 = local_a0;
                  fVar18 = fStack_9c;
                  fVar19 = fStack_98;
                  fVar20 = fStack_94;
                  if (1e-06 <= fVar26 + fVar23 + fVar21) {
                    fVar22 = fVar27 * fVar27;
                    fVar25 = fVar36 * fVar36;
                    fVar28 = fVar37 * fVar37;
                    if (1e-06 <= fVar25 + fVar22 + fVar28) {
                      auVar32._4_4_ = fVar22;
                      auVar32._0_4_ = fVar22;
                      auVar32._8_4_ = fVar22;
                      auVar32._12_4_ = fVar22;
                      fVar17 = fVar25 + fVar22 + fVar28;
                      fVar18 = fVar25 + fVar22 + fVar28;
                      fVar19 = fVar25 + fVar22 + fVar28;
                      fVar28 = fVar25 + fVar22 + fVar28;
                      auVar7._4_4_ = fVar18;
                      auVar7._0_4_ = fVar17;
                      auVar7._8_4_ = fVar19;
                      auVar7._12_4_ = fVar28;
                      auVar29 = rsqrtps(auVar32,auVar7);
                      fVar20 = auVar29._0_4_;
                      fVar22 = auVar29._4_4_;
                      fVar25 = auVar29._8_4_;
                      fVar35 = auVar29._12_4_;
                      fVar27 = (float)(~-(uint)(fVar17 <= 0.0) &
                                      (uint)((3.0 - fVar20 * fVar17 * fVar20) * fVar20 * 0.5)) *
                               fVar27;
                      fVar36 = (float)(~-(uint)(fVar18 <= 0.0) &
                                      (uint)((3.0 - fVar22 * fVar18 * fVar22) * fVar22 * 0.5)) *
                               fVar36;
                      fVar37 = (float)(~-(uint)(fVar19 <= 0.0) &
                                      (uint)((3.0 - fVar25 * fVar19 * fVar25) * fVar25 * 0.5)) *
                               fVar37;
                      fVar22 = (float)(~-(uint)(fVar28 <= 0.0) &
                                      (uint)((3.0 - fVar35 * fVar28 * fVar35) * fVar35 * 0.5)) *
                               (fVar24 + fStack_d4);
                      auVar33._4_4_ = fVar23;
                      auVar33._0_4_ = fVar23;
                      auVar33._8_4_ = fVar23;
                      auVar33._12_4_ = fVar23;
                      fVar17 = fVar26 + fVar23 + fVar21;
                      fVar18 = fVar26 + fVar23 + fVar21;
                      fVar24 = fVar26 + fVar23 + fVar21;
                      fVar21 = fVar26 + fVar23 + fVar21;
                      auVar6._4_4_ = fVar18;
                      auVar6._0_4_ = fVar17;
                      auVar6._8_4_ = fVar24;
                      auVar6._12_4_ = fVar21;
                      auVar29 = rsqrtps(auVar33,auVar6);
                      fVar19 = auVar29._0_4_;
                      fVar20 = auVar29._4_4_;
                      fVar23 = auVar29._8_4_;
                      fVar26 = auVar29._12_4_;
                      fVar19 = (float)(~-(uint)(fVar17 <= 0.0) &
                                      (uint)((3.0 - fVar19 * fVar17 * fVar19) * fVar19 * 0.5)) *
                               local_b0;
                      fVar20 = (float)(~-(uint)(fVar18 <= 0.0) &
                                      (uint)((3.0 - fVar20 * fVar18 * fVar20) * fVar20 * 0.5)) *
                               fStack_ac;
                      fVar18 = (float)(~-(uint)(fVar24 <= 0.0) &
                                      (uint)((3.0 - fVar23 * fVar24 * fVar23) * fVar23 * 0.5)) *
                               fStack_a8;
                      fVar23 = (float)(~-(uint)(fVar21 <= 0.0) &
                                      (uint)((3.0 - fVar26 * fVar21 * fVar26) * fVar26 * 0.5)) *
                               fStack_a4;
                      fVar17 = fVar20 * fVar37 - fVar18 * fVar36;
                      fVar18 = fVar18 * fVar27 - fVar19 * fVar37;
                      fVar19 = fVar19 * fVar36 - fVar20 * fVar27;
                      fVar20 = fVar23 * fVar22 - fVar23 * fVar22;
                    }
                  }
                }
              }
              fVar23 = fVar17 * fVar17;
              fVar26 = fVar18 * fVar18;
              fVar21 = fVar19 * fVar19;
              auVar34._4_4_ = fVar23;
              auVar34._0_4_ = fVar23;
              auVar34._8_4_ = fVar23;
              auVar34._12_4_ = fVar23;
              fVar24 = fVar26 + fVar23 + fVar21;
              fVar27 = fVar26 + fVar23 + fVar21;
              fVar36 = fVar26 + fVar23 + fVar21;
              fVar21 = fVar26 + fVar23 + fVar21;
              auVar8._4_4_ = fVar27;
              auVar8._0_4_ = fVar24;
              auVar8._8_4_ = fVar36;
              auVar8._12_4_ = fVar21;
              auVar29 = rsqrtps(auVar34,auVar8);
              fVar23 = auVar29._0_4_;
              fVar26 = auVar29._4_4_;
              fVar37 = auVar29._8_4_;
              fVar22 = auVar29._12_4_;
              in_XMM4._0_4_ = fVar23 * 0.5;
              in_XMM4._4_4_ = fVar26 * 0.5;
              in_XMM4._8_4_ = fVar37 * 0.5;
              in_XMM4._12_4_ = fVar22 * 0.5;
              local_80 = (float)(~-(uint)(fVar24 <= 0.0) &
                                (uint)((3.0 - fVar23 * fVar24 * fVar23) * in_XMM4._0_4_)) * fVar17;
              fStack_7c = (float)(~-(uint)(fVar27 <= 0.0) &
                                 (uint)((3.0 - fVar26 * fVar27 * fVar26) * in_XMM4._4_4_)) * fVar18;
              fStack_78 = (float)(~-(uint)(fVar36 <= 0.0) &
                                 (uint)((3.0 - fVar37 * fVar36 * fVar37) * in_XMM4._8_4_)) * fVar19;
              fStack_74 = (float)(~-(uint)(fVar21 <= 0.0) &
                                 (uint)((3.0 - fVar22 * fVar21 * fVar22) * in_XMM4._12_4_)) * fVar20
              ;
            }
            local_a0 = local_80;
            fStack_9c = fStack_7c;
            fStack_98 = fStack_78;
            fStack_94 = fStack_74;
            FUN_01457170(param_1,param_2,&local_80,*(undefined2 *)(puVar15 + 3),*puVar15,pfVar16,
                         local_2c,&local_620);
            FUN_01457170(param_1,param_3,&local_80,*(undefined2 *)(puVar15 + 3),puVar15[1],pfVar16,
                         local_2c,&local_410);
            FUN_01456d20(param_1,*param_3,&local_80,*(undefined2 *)(puVar15 + 3),puVar15,pfVar16,
                         local_2c,&local_620,&local_410);
            FUN_01452fa0(local_44,puVar15,&local_620,&local_410,local_18);
            local_40c = 0;
            if (-1 < local_408) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_410,local_408 * 8);
            }
            local_410 = (undefined1 *)0x0;
            local_408 = 0x80000000;
            local_61c = 0;
            if (-1 < local_618) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_620,local_618 * 8);
            }
            local_20 = local_20 + 0x14;
            local_34 = local_34 + 1;
            ppuVar12 = local_18;
          } while (local_34 < (int)local_14[1]);
        }
        local_14 = ppuVar12;
        if (1 < (int)ppuVar12[1]) {
          FUN_01458c00(*ppuVar12,0,ppuVar12[1] + -1,FUN_014525d0);
        }
        FUN_01456e80(param_2,param_3,ppuVar12,&local_e30);
        uVar9 = local_1fc;
        if (local_e2c != 0) break;
        local_1c = local_1c + 1;
      }
    }
    while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
      puVar15 = *(undefined4 **)(local_200 + uVar9 * 4);
      uVar2 = puVar15[2];
      puVar15[1] = 0;
      if (-1 < (int)uVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar15,((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
      }
      *puVar15 = 0;
      puVar15[2] = 0x80000000;
      iVar3 = *(int *)(local_200 + uVar9 * 4);
      pvVar11 = TlsGetValue(DAT_01f8fc4c);
      if (((*(int *)((int)pvVar11 + 8) < 0x180) || (iVar3 + 0x180 != *(int *)((int)pvVar11 + 0xc)))
         || (*(int *)((int)pvVar11 + 0x14) == iVar3)) {
        FUN_0100b9b0(iVar3,0x180);
      }
      else {
        *(int *)((int)pvVar11 + 0xc) = iVar3;
      }
    }
    local_1fc = 0;
    if (local_e2c == 0) {
      local_e2c = 0;
      if ((local_e28 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_e30,local_e28 << 4);
      }
      local_e30 = (undefined1 *)0x0;
      local_e28 = 0x80000000;
      local_1fc = 0;
      if ((local_1f8 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_200,local_1f8 * 4);
      }
      local_200 = (undefined1 *)0x0;
      local_1f8 = 0x80000000;
      local_60 = 0;
      if ((local_5c & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (local_64,((local_5c & 0x3fffffff) + local_5c * 4) * 4);
      }
      return 1;
    }
    FUN_01455810(param_2,param_3,&local_e30,param_4);
    local_e2c = 0;
    if ((local_e28 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_e30,local_e28 << 4);
    }
    local_e30 = (undefined1 *)0x0;
    local_e28 = 0x80000000;
    local_1fc = 0;
    if ((local_1f8 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_200,local_1f8 * 4);
    }
    local_200 = (undefined1 *)0x0;
    local_1f8 = 0x80000000;
    local_60 = 0;
    if ((local_5c & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))
                (local_64,((local_5c & 0x3fffffff) + local_5c * 4) * 4);
    }
  }
  return 0;
}

// 01457BD0  FUN_01457bd0  size=1265  [run]
void FUN_01457bd0(undefined4 param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_84c;
  int local_848;
  int local_844;
  int local_840;
  int local_43c;
  undefined4 *local_438;
  int local_434;
  int local_430;
  undefined4 *local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20 [3];
  int local_14;
  uint local_10;
  int local_c;
  char local_5;
  
  iVar3 = param_3;
  iVar9 = param_4 + 1;
  local_14 = 0;
  local_c = 0;
  local_10 = 0;
  if (param_3 < iVar9) {
    iVar8 = param_3;
    if (1 < iVar9 - param_3) {
      pfVar7 = (float *)(*param_2 + 0x1c + param_3 * 0x10);
      iVar9 = ((iVar9 - param_3) - 2U >> 1) + 1;
      iVar8 = param_3 + iVar9 * 2;
      do {
        local_14 = local_14 + (uint)(pfVar7[-4] == 0.0);
        local_c = local_c + (uint)(*pfVar7 == 0.0);
        pfVar7 = pfVar7 + 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (iVar8 < param_4 + 1) {
      local_10 = (uint)(*(float *)(*param_2 + 0xc + iVar8 * 0x10) == 0.0);
    }
    local_10 = local_10 + local_14 + local_c;
    if (3 < (int)local_10) {
      local_c = (param_4 + param_3) / 2;
      FUN_0145a9a0();
      local_43c = *param_2;
      FUN_0145a9a0();
      local_84c = *param_2;
      param_3._3_1_ = '\x01';
      iVar9 = local_c;
      do {
        do {
          local_434 = 0;
          FUN_01457bd0(param_1,param_2,iVar3,iVar9,&local_43c);
          FUN_01453ea0(&local_43c,iVar3,iVar9,param_1,(int)&param_3 + 3);
        } while (param_3._3_1_ != '\0');
        param_3._3_1_ = '\x01';
        do {
          iVar9 = local_c + 1;
          local_844 = 0;
          FUN_01457bd0(param_1,param_2,iVar9,param_4,&local_84c);
          FUN_01453ea0(&local_84c,iVar9,param_4,param_1,(int)&param_3 + 3);
          iVar9 = param_4;
        } while (param_3._3_1_ != '\0');
        param_3._3_1_ = '\x01';
        FUN_01453ea0(&local_43c,iVar3,param_4,param_1,(int)&param_3 + 3);
        local_5 = '\x01';
        FUN_01453ea0(&local_84c,iVar3,iVar9,param_1,&local_5);
        piVar1 = param_5;
        if ((param_3._3_1_ == '\0') && (local_5 == '\0')) {
          param_3._3_1_ = '\0';
        }
        else {
          param_3._3_1_ = '\x01';
        }
        iVar9 = local_c;
      } while (param_3._3_1_ != '\0');
      iVar3 = local_434;
      if (local_434 == 0) {
        iVar9 = 0;
        if (0 < local_844) {
          piVar10 = param_5 + 1;
          do {
            puVar5 = (undefined4 *)(local_848 + iVar9 * 8);
            if (piVar1[2] == (piVar1[3] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar10,8);
            }
            puVar2 = (undefined4 *)(*piVar10 + piVar1[2] * 8);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar5;
              puVar2[1] = puVar5[1];
            }
            piVar1[2] = piVar1[2] + 1;
            iVar9 = iVar9 + 1;
            iVar3 = local_434;
          } while (iVar9 < local_844);
        }
      }
      else if (local_844 == 0) {
        iVar9 = 0;
        if (0 < local_434) {
          piVar10 = param_5 + 1;
          do {
            puVar5 = local_438 + iVar9 * 2;
            if (piVar1[2] == (piVar1[3] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar10,8);
              iVar3 = local_434;
            }
            puVar2 = (undefined4 *)(*piVar10 + piVar1[2] * 8);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar5;
              puVar2[1] = puVar5[1];
              iVar3 = local_434;
            }
            piVar1[2] = piVar1[2] + 1;
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar3);
        }
      }
      else {
        FUN_01457280(param_1,&local_43c,&local_84c,param_5);
        iVar3 = local_434;
      }
      piVar1 = param_5;
      if (param_5[2] == 0) {
        piVar10 = param_5 + 1;
        iVar9 = param_5[2];
        if (iVar3 <= param_5[2]) {
          iVar9 = iVar3;
        }
        param_4 = iVar3;
        if ((int)(param_5[3] & 0x3fffffffU) < iVar3) {
          iVar8 = (param_5[3] & 0x3fffffffU) * 2;
          iVar4 = iVar3;
          if (iVar3 < iVar8) {
            iVar4 = iVar8;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,piVar10,iVar4,8);
        }
        puVar5 = (undefined4 *)*piVar10;
        puVar2 = local_438;
        iVar8 = iVar9;
        if (0 < iVar9) {
          do {
            *puVar5 = *puVar2;
            puVar5[1] = puVar2[1];
            puVar5 = puVar5 + 2;
            iVar8 = iVar8 + -1;
            puVar2 = puVar2 + 2;
            iVar3 = param_4;
          } while (iVar8 != 0);
        }
        puVar5 = (undefined4 *)(*piVar10 + iVar9 * 8);
        iVar8 = iVar3 - iVar9;
        if (0 < iVar8) {
          iVar9 = (int)local_438 + (iVar9 * 8 - (int)puVar5);
          do {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *(undefined4 *)(iVar9 + (int)puVar5);
              puVar5[1] = *(undefined4 *)(iVar9 + 4 + (int)puVar5);
            }
            puVar5 = puVar5 + 2;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        piVar1[2] = iVar3;
      }
      local_844 = 0;
      if (-1 < local_840) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_848,local_840 * 8);
      }
      local_848 = 0;
      local_434 = 0;
      local_840 = 0x80000000;
      if (local_430 < 0) {
        return;
      }
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_438,local_430 * 8);
      return;
    }
  }
  iVar3 = param_4 + 1;
  *param_5 = *param_2;
  puVar5 = local_20;
  uVar6 = 0x80000003;
  local_28 = 0;
  local_24 = 0x80000003;
  local_2c = puVar5;
  if (param_3 < iVar3) {
    iVar8 = param_3 << 4;
    iVar9 = param_3;
    do {
      if (*(float *)(iVar8 + 0xc + *param_2) == 0.0) {
        if (local_28 == (uVar6 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_2c,4);
          puVar5 = local_2c;
        }
        puVar5[local_28] = iVar9;
        local_28 = local_28 + 1;
        uVar6 = local_24;
        puVar5 = local_2c;
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar9 < iVar3);
  }
  if (local_10 != 0) {
    if (local_10 == 1) {
      FUN_0145a880(*puVar5);
      uVar6 = local_24;
      puVar5 = local_2c;
    }
    else if (local_10 == 2) {
      FUN_0145a8f0(*puVar5,puVar5[1]);
      uVar6 = local_24;
      puVar5 = local_2c;
    }
    else {
      FUN_0145aa30(*puVar5,puVar5[1],puVar5[2]);
      uVar6 = local_24;
      puVar5 = local_2c;
    }
  }
  local_28 = 0;
  if (-1 < (int)uVar6) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar5,uVar6 * 4);
  }
  return;
}

// 014580D0  FUN_014580d0  size=400  [run]
void FUN_014580d0(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_18;
  char local_12;
  char local_11;
  
  param_5[1] = 0;
  if (0 < param_3) {
    local_18 = param_3;
    do {
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_5,0x10);
      }
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      puVar5 = (undefined4 *)(param_5[1] * 0x10 + *param_5);
      param_2 = param_2 + 4;
      *puVar5 = uVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      param_5[1] = param_5[1] + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_01452770(param_5,local_40,&local_30);
  }
  if (1 < param_5[1]) {
    FUN_014588a0(*param_5,0,param_5[1] + -1,FUN_01452540);
  }
  FUN_01452a40(*(undefined4 *)(param_1 + 4),param_5,&local_18);
  if ((*(char *)(param_1 + 2) != '\0') && (local_18 < 300)) {
    FUN_01453aa0(param_5,0x3a83126f);
  }
  local_11 = '\x01';
  cVar7 = '\0';
  while ((cVar7 == '\0' || (local_11 != '\0'))) {
    local_12 = local_11 == '\0';
    iVar6 = 0;
    if (0 < param_5[1]) {
      iVar8 = 0;
      do {
        *(undefined4 *)(iVar8 + 0xc + *param_5) = 0;
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x10;
      } while (iVar6 < param_5[1]);
    }
    *(undefined4 *)(param_4 + 8) = 0;
    FUN_01457bd0(param_1,param_5,0,param_5[1] + -1,param_4);
    FUN_01455630(param_4,param_5);
    FUN_01452b50(param_5);
    FUN_01453ea0(param_4,0,param_5[1] + -1,param_1,&local_11);
    FUN_01452b50(param_5);
    cVar7 = local_12;
  }
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_014528c0(param_5,local_40,&local_30);
  }
  return;
}

// 01458260  FUN_01458260  size=1108  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_01458260(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 *local_14a0;
  undefined4 local_149c;
  int local_1498;
  undefined1 local_1490 [2048];
  undefined1 *local_c90;
  undefined4 local_c8c;
  int local_c88;
  undefined1 local_c80 [1024];
  undefined1 *local_880;
  undefined4 local_87c;
  int local_878;
  undefined1 local_870 [1024];
  undefined1 *local_470;
  uint local_46c;
  uint local_468;
  undefined1 local_460 [1024];
  undefined1 local_60 [20];
  undefined1 local_4c [4];
  undefined2 local_48;
  char local_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = 0x1458280;
  local_46 = param_5 == 2;
  local_470 = local_460;
  local_3c = 0x358637bd;
  local_30 = 0x358637bd;
  local_2c = 0x358637bd;
  local_24 = 0x358637bd;
  local_34 = 0x3d4ccccd;
  local_20 = 0x38d1b717;
  local_44 = 0x37a7c5ac;
  local_38 = 0x3727c5ac;
  local_28 = 0x322bcc77;
  local_1c = 0x3727c5ac;
  local_18 = 0x37a7c5ac;
  local_40 = 0x368637bd;
  local_48 = 0;
  local_46c = 0;
  local_468 = 0x80000040;
  puVar10 = param_1;
  iVar11 = param_2;
  if (0 < param_2) {
    do {
      if (local_46c == (local_468 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_470,0x10);
      }
      uVar5 = local_46c;
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      puVar6 = (undefined4 *)(local_470 + local_46c * 0x10);
      puVar10 = puVar10 + 4;
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      local_46c = local_46c + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if (1 < (int)local_46c) {
      FUN_014588a0(local_470,0,uVar5,FUN_01452540);
    }
  }
  FUN_01452a40(local_44,&local_470,local_4c);
  local_880 = local_870;
  local_87c = 0;
  *(undefined4 *)(param_4 + 4) = 0;
  local_878 = -0x7fffffc0;
  FUN_014580d0(&local_48,local_470,local_46c,param_3,param_4);
  pcVar7 = (char *)FUN_0145b880((int)&uStack_14 + 2,&local_48,local_470,local_46c,param_3,param_4);
  uStack_14._0_3_ = CONCAT12(*pcVar7,(undefined2)uStack_14);
  if (*pcVar7 == '\0') {
    cVar9 = '\0';
    if (local_46 != '\0') {
      local_87c = 0;
      uStack_14 = CONCAT22(uStack_14._2_2_,(undefined2)uStack_14) & 0xffff00ff;
      local_149c = 0;
      local_14a0 = local_1490;
      local_1498 = -0x7fffffc0;
      FUN_01454540((int)&uStack_14 + 3,&local_48,param_3,param_4,local_60,(int)&uStack_14 + 1,
                   &local_880,&local_14a0);
      if (uStack_14._1_1_ != '\0') {
        *(undefined4 *)(param_4 + 4) = 0;
        FUN_01453aa0(&local_470,0x3a83126f);
        local_c90 = local_c80;
        local_c8c = 0;
        local_c88 = -0x7fffffc0;
        FUN_01453240(local_60,local_470,local_46c,param_4,&local_c90);
        puVar8 = (undefined1 *)
                 FUN_0145b880((int)&uStack_14 + 3,&local_48,param_1,param_2,param_3,param_4);
        uStack_14._0_3_ = CONCAT12(*puVar8,(undefined2)uStack_14);
        local_c8c = 0;
        if (-1 < local_c88) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_c90,local_c88 << 4);
        }
      }
      local_149c = 0;
      if (-1 < local_1498) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14a0,local_1498 << 5);
      }
      goto LAB_0145857c;
    }
  }
  else {
LAB_0145857c:
    if (local_46 != '\0') goto LAB_01458645;
    cVar9 = uStack_14._2_1_;
  }
  local_48 = CONCAT11(1,(undefined1)local_48);
  if (cVar9 == '\0') {
    local_48 = 0x101;
    FUN_014580d0(&local_48,param_1,param_2,param_3,param_4);
    pcVar7 = (char *)FUN_0145b880((int)&uStack_14 + 3,&local_48,param_1,param_2,param_3,param_4);
    if (*pcVar7 == '\0') {
      local_40 = 0x3456bf95;
      FUN_014580d0(&local_48,param_1,param_2,param_3,param_4);
      pcVar7 = (char *)FUN_0145b880((int)&uStack_14 + 3,&local_48,param_1,param_2,param_3,param_4);
      if (*pcVar7 == '\0') {
        local_18 = 0x358637bd;
        FUN_014580d0(&local_48,param_1,param_2,param_3,param_4);
        FUN_0145b880((int)&uStack_14 + 3,&local_48,param_1,param_2,param_3,param_4);
      }
    }
  }
LAB_01458645:
  local_87c = 0;
  if (-1 < local_878) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_880,local_878 << 4);
  }
  local_880 = (undefined1 *)0x0;
  local_46c = 0;
  local_878 = 0x80000000;
  if (-1 < (int)local_468) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_470,local_468 << 4);
  }
  return;
}

// 014586D0  FUN_014586d0  size=8  [run]
undefined4 FUN_014586d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 014586E0  FUN_014586e0  size=20  [run]
void __thiscall FUN_014586e0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 01458740  FUN_01458740  size=15  [run]
int __thiscall FUN_01458740(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01458760  FUN_01458760  size=18  [run]
int __thiscall FUN_01458760(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x14;
}

// 01458780  FUN_01458780  size=18  [run]
int __thiscall FUN_01458780(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x14;
}

// 014587C0  FUN_014587c0  size=15  [run]
int __thiscall FUN_014587c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 014587E0  FUN_014587e0  size=15  [run]
int __thiscall FUN_014587e0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01458800  FUN_01458800  size=15  [run]
int __thiscall FUN_01458800(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01458850  FUN_01458850  size=21  [run]
void FUN_01458850(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 01458870  FUN_01458870  size=34  [run]
void FUN_01458870(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        *(undefined2 *)(param_1 + 6) = 0;
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 014588A0  FUN_014588a0  size=288  [run]
void FUN_014588a0(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  
  do {
    local_18 = param_2;
    puVar1 = (undefined4 *)(param_1 + (param_2 + param_3 >> 1) * 0x10);
    local_30 = *puVar1;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
    uStack_24 = puVar1[3];
    iVar13 = param_3;
    do {
      local_20 = param_1 + local_18 * 0x10;
      local_1c = iVar13;
      pcVar11 = (char *)(*param_4)(&local_11,local_20,&local_30);
      cVar3 = *pcVar11;
      iVar12 = local_20;
      while (cVar3 != '\0') {
        local_18 = local_18 + 1;
        iVar12 = iVar12 + 0x10;
        pcVar11 = (char *)(*param_4)(&local_11,iVar12,&local_30);
        iVar13 = local_1c;
        cVar3 = *pcVar11;
      }
      local_20 = param_1 + iVar13 * 0x10;
      pcVar11 = (char *)(*param_4)(&local_12,&local_30,local_20);
      cVar3 = *pcVar11;
      iVar12 = local_20;
      while (cVar3 != '\0') {
        local_1c = local_1c + -1;
        iVar12 = iVar12 + -0x10;
        pcVar11 = (char *)(*param_4)(&local_12,&local_30,iVar12);
        iVar13 = local_1c;
        cVar3 = *pcVar11;
      }
      if (iVar13 < local_18) break;
      if (iVar13 != local_18) {
        puVar1 = (undefined4 *)(param_1 + iVar13 * 0x10);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar1 = (undefined4 *)(param_1 + local_18 * 0x10);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (undefined4 *)(param_1 + iVar13 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        puVar1 = (undefined4 *)(param_1 + local_18 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
      }
      iVar13 = iVar13 + -1;
      local_18 = local_18 + 1;
      local_1c = iVar13;
    } while (local_18 <= iVar13);
    if (param_2 < iVar13) {
      FUN_014588a0(param_1,param_2,iVar13,param_4);
    }
    param_2 = local_18;
    if (param_3 <= local_18) {
      return;
    }
  } while( true );
}

// 014589C0  FUN_014589c0  size=32  [run]
void __thiscall FUN_014589c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 014589F0  FUN_014589f0  size=24  [run]
void __thiscall
FUN_014589f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01458A10  FUN_01458a10  size=34  [run]
void FUN_01458a10(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined1 *)(iVar1 + param_1) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01458A40  FUN_01458a40  size=32  [run]
void __thiscall FUN_01458a40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01458A90  FUN_01458a90  size=32  [run]
void __thiscall FUN_01458a90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01458AE0  FUN_01458ae0  size=34  [run]
void FUN_01458ae0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01458B10  FUN_01458b10  size=32  [run]
void __thiscall FUN_01458b10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01458B60  FUN_01458b60  size=32  [run]
void __thiscall FUN_01458b60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01458BA0  FUN_01458ba0  size=52  [run]
undefined4 __thiscall FUN_01458ba0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 01458C00  FUN_01458c00  size=345  [run]
void FUN_01458c00(int param_1,int param_2,int param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  
  do {
    iVar7 = param_2 + param_3 >> 1;
    local_40 = *(undefined8 *)(param_1 + iVar7 * 0x14);
    local_30 = *(undefined4 *)(param_1 + 0x10 + iVar7 * 0x14);
    local_38 = *(undefined8 *)(param_1 + iVar7 * 0x14 + 8);
    iVar9 = param_3;
    iVar7 = param_2;
    do {
      local_18 = param_1 + iVar7 * 0x14;
      pcVar8 = (char *)(*param_4)(&local_11,local_18,&local_40);
      cVar5 = *pcVar8;
      while (cVar5 != '\0') {
        local_18 = local_18 + 0x14;
        iVar7 = iVar7 + 1;
        pcVar8 = (char *)(*param_4)(&local_11,local_18,&local_40);
        cVar5 = *pcVar8;
      }
      local_18 = param_1 + iVar9 * 0x14;
      pcVar8 = (char *)(*param_4)(&local_12,&local_40,local_18);
      cVar5 = *pcVar8;
      while (cVar5 != '\0') {
        local_18 = local_18 + -0x14;
        iVar9 = iVar9 + -1;
        pcVar8 = (char *)(*param_4)(&local_12,&local_40,local_18);
        cVar5 = *pcVar8;
      }
      if (iVar9 < iVar7) break;
      if (iVar9 != iVar7) {
        uVar3 = *(undefined8 *)(param_1 + iVar9 * 0x14);
        uVar4 = *(undefined8 *)(param_1 + 8 + iVar9 * 0x14);
        puVar1 = (undefined8 *)(param_1 + iVar9 * 0x14);
        puVar2 = (undefined8 *)(param_1 + iVar7 * 0x14);
        uVar6 = *(undefined4 *)(puVar1 + 2);
        *puVar1 = *(undefined8 *)(param_1 + iVar7 * 0x14);
        puVar1[1] = puVar2[1];
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        *(undefined4 *)(puVar2 + 2) = uVar6;
      }
      iVar9 = iVar9 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar9);
    if (param_2 < iVar9) {
      FUN_01458c00(param_1,param_2,iVar9,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

// 01458D60  FUN_01458d60  size=286  [run]
void FUN_01458d60(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  
  do {
    iVar3 = param_2 + param_3 >> 1;
    local_30 = *(undefined4 *)(param_1 + iVar3 * 8);
    local_2c = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar3 = param_3;
    iVar5 = param_2;
    do {
      pcVar4 = (char *)(*param_4)(&local_11,param_1 + iVar5 * 8,&local_30);
      if (*pcVar4 != '\0') {
        local_18 = param_1 + iVar5 * 8;
        do {
          local_18 = local_18 + 8;
          iVar5 = iVar5 + 1;
          pcVar4 = (char *)(*param_4)(&local_11,local_18,&local_30);
        } while (*pcVar4 != '\0');
      }
      pcVar4 = (char *)(*param_4)(&local_12,&local_30,param_1 + iVar3 * 8);
      if (*pcVar4 != '\0') {
        local_18 = param_1 + iVar3 * 8;
        do {
          local_18 = local_18 + -8;
          iVar3 = iVar3 + -1;
          pcVar4 = (char *)(*param_4)(&local_12,&local_30,local_18);
        } while (*pcVar4 != '\0');
      }
      if (iVar3 < iVar5) break;
      if (iVar3 != iVar5) {
        uVar1 = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
        uVar2 = *(undefined4 *)(param_1 + iVar3 * 8);
        *(undefined4 *)(param_1 + iVar3 * 8) = *(undefined4 *)(param_1 + iVar5 * 8);
        *(undefined4 *)(param_1 + 4 + iVar3 * 8) = *(undefined4 *)(param_1 + 4 + iVar5 * 8);
        *(undefined4 *)(param_1 + iVar5 * 8) = uVar2;
        *(undefined4 *)(param_1 + 4 + iVar5 * 8) = uVar1;
      }
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar3);
    if (param_2 < iVar3) {
      FUN_01458d60(param_1,param_2,iVar3,param_4);
    }
    param_2 = iVar5;
    if (param_3 <= iVar5) {
      return;
    }
  } while( true );
}

// 01458E90  FUN_01458e90  size=32  [run]
void __thiscall FUN_01458e90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01458EE0  FUN_01458ee0  size=34  [run]
void FUN_01458ee0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01458F10  FUN_01458f10  size=11  [run]
int FUN_01458f10(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01458F30  FUN_01458f30  size=25  [run]
void __thiscall FUN_01458f30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 01458F50  FUN_01458f50  size=29  [run]
void __thiscall FUN_01458f50(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x14);
  return;
}

// 01458F70  FUN_01458f70  size=11  [run]
int FUN_01458f70(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01458F80  FUN_01458f80  size=26  [run]
void __thiscall FUN_01458f80(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01458FB0  FUN_01458fb0  size=25  [run]
void __thiscall FUN_01458fb0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01458FE0  FUN_01458fe0  size=28  [run]
void __thiscall FUN_01458fe0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01459000  FUN_01459000  size=11  [run]
int FUN_01459000(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01459020  FUN_01459020  size=26  [run]
void __thiscall FUN_01459020(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01459040  FUN_01459040  size=52  [run]
undefined4 __thiscall FUN_01459040(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 01459080  FUN_01459080  size=40  [run]
void FUN_01459080(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
      param_1 = param_1 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 014590B0  FUN_014590b0  size=44  [run]
void FUN_014590b0(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *(undefined4 *)(param_3 + (int)param_1);
        param_1[1] = *(undefined4 *)(param_3 + 4 + (int)param_1);
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 014591A0  FUN_014591a0  size=42  [run]
void FUN_014591a0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x14c);
  }
  return;
}

// 014591D0  FUN_014591d0  size=45  [run]
undefined4 __thiscall FUN_014591d0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,8);
    return uVar1;
  }
  return 0;
}

// 01459200  FUN_01459200  size=59  [run]
int __thiscall FUN_01459200(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  param_1[1] = param_2 + iVar1;
  iVar2 = (param_2 + iVar1) - iVar1;
  iVar3 = *param_1 + iVar1 * 8;
  if (0 < iVar2) {
    do {
      if (iVar3 != 0) {
        *(undefined2 *)(iVar3 + 6) = 0;
      }
      iVar3 = iVar3 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return *param_1 + iVar1 * 8;
}

// 01459240  FUN_01459240  size=33  [run]
void FUN_01459240(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_014588a0(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01459270  FUN_01459270  size=110  [run]
int * __thiscall FUN_01459270(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    if (param_2 != 0) goto LAB_014592b5;
  }
  param_2 = -0x80000000;
LAB_014592b5:
  param_1[2] = param_2;
  iVar3 = 0;
  *param_1 = iVar2;
  param_1[1] = iVar1;
  if (0 < iVar1) {
    do {
      *(undefined1 *)(iVar3 + iVar2) = *param_3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return param_1;
}

// 014592E0  FUN_014592e0  size=13  [run]
void __thiscall FUN_014592e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 014592F0  FUN_014592f0  size=26  [run]
int __thiscall FUN_014592f0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = param_2 + iVar1;
  return *param_1 + iVar1 * 0x14;
}

// 01459320  FUN_01459320  size=57  [run]
void __thiscall FUN_01459320(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459370  FUN_01459370  size=64  [run]
void FUN_01459370(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x14c + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 014593B0  FUN_014593b0  size=55  [run]
void __thiscall FUN_014593b0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,8);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 014593F0  FUN_014593f0  size=68  [run]
int __thiscall FUN_014593f0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,8);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2 * 8;
}

// 01459440  FUN_01459440  size=33  [run]
void FUN_01459440(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01458c00(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01459470  FUN_01459470  size=75  [run]
void FUN_01459470(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x14c + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 014594C0  FUN_014594c0  size=33  [run]
void FUN_014594c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01458d60(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 014594F0  FUN_014594f0  size=13  [run]
void __thiscall FUN_014594f0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 01459500  FUN_01459500  size=57  [run]
void __thiscall FUN_01459500(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459540  FUN_01459540  size=25  [run]
void __thiscall FUN_01459540(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459560  FUN_01459560  size=32  [run]
void __thiscall FUN_01459560(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01459580  FUN_01459580  size=32  [run]
void __thiscall FUN_01459580(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 014595A0  FUN_014595a0  size=32  [run]
void __thiscall FUN_014595a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 014595C0  FUN_014595c0  size=32  [run]
void __thiscall FUN_014595c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 014595E0  FUN_014595e0  size=32  [run]
void __thiscall FUN_014595e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01459600  FUN_01459600  size=32  [run]
void __thiscall FUN_01459600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01459620  FUN_01459620  size=40  [run]
void FUN_01459620(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01459650  FUN_01459650  size=52  [run]
undefined4 __thiscall FUN_01459650(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x20);
    return uVar3;
  }
  return 0;
}

// 01459690  FUN_01459690  size=54  [run]
void FUN_01459690(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
      }
      param_1 = (undefined8 *)((int)param_1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 014596D0  FUN_014596d0  size=61  [run]
void __thiscall FUN_014596d0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01459710  FUN_01459710  size=60  [run]
void __thiscall FUN_01459710(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01459750  FUN_01459750  size=52  [run]
undefined4 __thiscall FUN_01459750(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 01459790  FUN_01459790  size=63  [run]
void __thiscall FUN_01459790(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 014597D0  FUN_014597d0  size=40  [run]
void FUN_014597d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01459800  FUN_01459800  size=61  [run]
void __thiscall FUN_01459800(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01459840  FUN_01459840  size=165  [run]
int * __thiscall FUN_01459840(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_3[1];
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *param_3 - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_1 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*param_3 + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 01459910  FUN_01459910  size=46  [run]
undefined4 __thiscall FUN_01459910(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,8);
    return uVar1;
  }
  return 0;
}

// 01459940  FUN_01459940  size=58  [run]
void __thiscall FUN_01459940(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459980  FUN_01459980  size=56  [run]
void __thiscall FUN_01459980(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 014599C0  FUN_014599c0  size=69  [run]
int __thiscall FUN_014599c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,8);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 8;
}

// 01459A10  FUN_01459a10  size=58  [run]
void __thiscall FUN_01459a10(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459A50  FUN_01459a50  size=67  [run]
void __thiscall FUN_01459a50(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459AA0  FUN_01459aa0  size=70  [run]
int __thiscall FUN_01459aa0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,0x20);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar2 * 0x20 + *param_1;
}

// 01459AF0  FUN_01459af0  size=84  [run]
void __thiscall FUN_01459af0(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x14);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x14);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 2);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459B50  FUN_01459b50  size=70  [run]
int __thiscall FUN_01459b50(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,0x10);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar2 * 0x10 + *param_1;
}

// 01459BA0  FUN_01459ba0  size=67  [run]
void __thiscall FUN_01459ba0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459BF0  FUN_01459bf0  size=61  [run]
void __fastcall FUN_01459bf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01459C30  FUN_01459c30  size=60  [run]
void __fastcall FUN_01459c30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01459C70  FUN_01459c70  size=63  [run]
void __fastcall FUN_01459c70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01459CB0  FUN_01459cb0  size=61  [run]
void __fastcall FUN_01459cb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01459CF0  FUN_01459cf0  size=165  [run]
int * __thiscall FUN_01459cf0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2[1];
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *param_2 - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_1 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*param_2 + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 01459DA0  FUN_01459da0  size=60  [run]
void __thiscall FUN_01459da0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01459DE0  FUN_01459de0  size=78  [run]
void __thiscall FUN_01459de0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_1 * *param_1;
  fVar4 = param_1[1] * param_1[1];
  auVar2._8_4_ = param_1[2] * param_1[2];
  auVar2._4_4_ = auVar2._8_4_;
  auVar2._0_4_ = auVar2._8_4_;
  auVar2._12_4_ = auVar2._8_4_;
  fVar7 = fVar4 + fVar1 + auVar2._8_4_;
  fVar8 = fVar4 + fVar1 + auVar2._8_4_;
  fVar9 = fVar4 + fVar1 + auVar2._8_4_;
  fVar10 = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._4_4_ = fVar8;
  auVar3._0_4_ = fVar7;
  auVar3._8_4_ = fVar9;
  auVar3._12_4_ = fVar10;
  auVar3 = rsqrtps(auVar2,auVar3);
  fVar1 = auVar3._0_4_;
  fVar4 = auVar3._4_4_;
  fVar5 = auVar3._8_4_;
  fVar6 = auVar3._12_4_;
  *param_2 = (3.0 - fVar1 * fVar7 * fVar1) * fVar1 * 0.5;
  param_2[1] = (3.0 - fVar4 * fVar8 * fVar4) * fVar4 * 0.5;
  param_2[2] = (3.0 - fVar5 * fVar9 * fVar5) * fVar5 * 0.5;
  param_2[3] = (3.0 - fVar6 * fVar10 * fVar6) * fVar6 * 0.5;
  return;
}

// 01459E30  FUN_01459e30  size=64  [run]
void __thiscall FUN_01459e30(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01459E70  FUN_01459e70  size=68  [run]
void __thiscall FUN_01459e70(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459EC0  FUN_01459ec0  size=71  [run]
int __thiscall FUN_01459ec0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0x20);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar2 * 0x20 + *param_1;
}

// 01459F10  FUN_01459f10  size=85  [run]
void __thiscall FUN_01459f10(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x14);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x14);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01459F70  FUN_01459f70  size=71  [run]
int __thiscall FUN_01459f70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0x10);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar2 * 0x10 + *param_1;
}

// 01459FC0  FUN_01459fc0  size=68  [run]
void __thiscall FUN_01459fc0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0145A010  FUN_0145a010  size=165  [run]
int * __thiscall FUN_0145a010(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2[1];
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *param_2 - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_1 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*param_2 + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 0145A0C0  FUN_0145a0c0  size=27  [run]
void __thiscall FUN_0145a0c0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 4);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffc0;
  return;
}

// 0145A130  FUN_0145a130  size=27  [run]
void __thiscall FUN_0145a130(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7ffffffd;
  return;
}

// 0145A150  FUN_0145a150  size=61  [run]
void __fastcall FUN_0145a150(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A190  FUN_0145a190  size=27  [run]
void __thiscall FUN_0145a190(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffc0;
  return;
}

// 0145A1B0  FUN_0145a1b0  size=60  [run]
void __fastcall FUN_0145a1b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A1F0  FUN_0145a1f0  size=27  [run]
void __thiscall FUN_0145a1f0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffff80;
  return;
}

// 0145A210  FUN_0145a210  size=63  [run]
void __fastcall FUN_0145a210(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A250  FUN_0145a250  size=27  [run]
void __thiscall FUN_0145a250(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffc0;
  return;
}

// 0145A270  FUN_0145a270  size=27  [run]
void __thiscall FUN_0145a270(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7ffffffe;
  return;
}

// 0145A290  FUN_0145a290  size=61  [run]
void __fastcall FUN_0145a290(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A2D0  FUN_0145a2d0  size=27  [run]
void __thiscall FUN_0145a2d0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffff80;
  return;
}

// 0145A2F0  FUN_0145a2f0  size=60  [run]
void __fastcall FUN_0145a2f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A330  FUN_0145a330  size=64  [run]
void __fastcall FUN_0145a330(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A370  FUN_0145a370  size=60  [run]
void __fastcall FUN_0145a370(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A3B0  FUN_0145a3b0  size=61  [run]
void __fastcall FUN_0145a3b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A3F0  FUN_0145a3f0  size=61  [run]
void __fastcall FUN_0145a3f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A430  FUN_0145a430  size=60  [run]
void __fastcall FUN_0145a430(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A470  FUN_0145a470  size=63  [run]
void __fastcall FUN_0145a470(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A4B0  FUN_0145a4b0  size=108  [run]
int * __thiscall FUN_0145a4b0(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 0145A520  FUN_0145a520  size=143  [run]
void __fastcall FUN_0145a520(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0145A5B0  FUN_0145a5b0  size=63  [run]
void __fastcall FUN_0145a5b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A5F0  FUN_0145a5f0  size=61  [run]
void __fastcall FUN_0145a5f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A630  FUN_0145a630  size=60  [run]
void __fastcall FUN_0145a630(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A670  FUN_0145a670  size=27  [run]
void __thiscall FUN_0145a670(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 4);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffc0;
  return;
}

// 0145A690  FUN_0145a690  size=64  [run]
void __fastcall FUN_0145a690(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A6D0  FUN_0145a6d0  size=27  [run]
void __thiscall FUN_0145a6d0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffff;
  return;
}

// 0145A6F0  FUN_0145a6f0  size=27  [run]
void __thiscall FUN_0145a6f0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_80000010;
  return;
}

// 0145A710  FUN_0145a710  size=60  [run]
void __fastcall FUN_0145a710(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A750  FUN_0145a750  size=64  [run]
void __fastcall FUN_0145a750(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A790  FUN_0145a790  size=64  [run]
void __fastcall FUN_0145a790(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145A7D0  FUN_0145a7d0  size=107  [run]
undefined4 * __thiscall FUN_0145a7d0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(param_1,0x14c);
  }
  return param_1;
}

// 0145A880  FUN_0145a880  size=99  [run]
void __thiscall FUN_0145a880(int param_1,ushort param_2)

{
  uint *puVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(uint *)(param_1 + 8) == (*(uint *)(param_1 + 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 4),8);
  }
  puVar1 = (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = (uint)param_2;
    puVar1[1] = 0;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

// 0145A8F0  FUN_0145a8f0  size=174  [run]
void __thiscall FUN_0145a8f0(int param_1,undefined2 param_2,ushort param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  piVar1 = (int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(uint *)(param_1 + 8) == (*(uint *)(param_1 + 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
  }
  puVar2 = (undefined4 *)(*piVar1 + *(int *)(param_1 + 8) * 8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = CONCAT22(1,param_2);
    puVar2[1] = 1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*(uint *)(param_1 + 8) == (*(uint *)(param_1 + 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
  }
  puVar3 = (uint *)(*piVar1 + *(int *)(param_1 + 8) * 8);
  if (puVar3 != (uint *)0x0) {
    *puVar3 = (uint)param_3;
    puVar3[1] = 0;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

// 0145A9A0  FUN_0145a9a0  size=140  [run]
/* WARNING: Removing unreachable block (ram,0x0145a9dd) */

undefined4 * __fastcall FUN_0145a9a0(undefined4 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 0x80000080;
  iVar3 = 0x7f;
  puVar1 = (undefined2 *)((int)param_1 + 0x16);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar2 = -param_1[2];
  iVar3 = param_1[1] + param_1[2] * 8;
  if (0 < iVar2) {
    do {
      if (iVar3 != 0) {
        *(undefined2 *)(iVar3 + 6) = 0;
      }
      iVar3 = iVar3 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[2] = 0;
  return param_1;
}

// 0145AA30  FUN_0145aa30  size=1061  [run]
void __thiscall FUN_0145aa30(int *param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 local_50 [8];
  undefined1 auStack_48 [4];
  float fStack_44;
  undefined4 local_30;
  uint local_28;
  undefined4 local_18;
  
  param_1[2] = 0;
  iVar7 = *param_1;
  piVar1 = param_1 + 1;
  uVar5 = *(undefined8 *)(iVar7 + param_3 * 0x10);
  uVar6 = *(undefined8 *)(iVar7 + 8 + param_3 * 0x10);
  local_50._0_4_ = (undefined4)uVar5;
  local_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  auStack_48 = SUB84(uVar6,0);
  fStack_44 = (float)((ulonglong)uVar6 >> 0x20);
  pfVar2 = (float *)(iVar7 + param_2 * 0x10);
  fVar24 = (float)local_50._0_4_ - *pfVar2;
  fVar25 = (float)local_50._4_4_ - pfVar2[1];
  fVar26 = (float)auStack_48 - pfVar2[2];
  fVar8 = fVar24 * fVar24;
  fVar9 = fVar25 * fVar25;
  fVar10 = fVar26 * fVar26;
  fVar14 = (fStack_44 - pfVar2[3]) * (fStack_44 - pfVar2[3]) + fVar9 + fVar10 + fVar8;
  uVar5 = *(undefined8 *)(iVar7 + param_4 * 0x10);
  uVar6 = *(undefined8 *)(iVar7 + 8 + param_4 * 0x10);
  local_50._0_4_ = (undefined4)uVar5;
  local_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  auStack_48 = SUB84(uVar6,0);
  fStack_44 = (float)((ulonglong)uVar6 >> 0x20);
  pfVar2 = (float *)(iVar7 + param_3 * 0x10);
  fVar27 = (float)local_50._0_4_ - *pfVar2;
  fVar28 = (float)local_50._4_4_ - pfVar2[1];
  fVar29 = (float)auStack_48 - pfVar2[2];
  fVar11 = fVar27 * fVar27;
  fVar12 = fVar28 * fVar28;
  fVar13 = fVar29 * fVar29;
  fVar18 = (fStack_44 - pfVar2[3]) * (fStack_44 - pfVar2[3]) + fVar12 + fVar13 + fVar11;
  uVar5 = *(undefined8 *)(iVar7 + param_2 * 0x10);
  uVar6 = *(undefined8 *)(iVar7 + 8 + param_2 * 0x10);
  local_50._0_4_ = (undefined4)uVar5;
  local_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  auStack_48 = SUB84(uVar6,0);
  fStack_44 = (float)((ulonglong)uVar6 >> 0x20);
  pfVar2 = (float *)(iVar7 + param_4 * 0x10);
  fVar15 = (fStack_44 - pfVar2[3]) * (fStack_44 - pfVar2[3]) +
           ((float)local_50._4_4_ - pfVar2[1]) * ((float)local_50._4_4_ - pfVar2[1]) +
           ((float)auStack_48 - pfVar2[2]) * ((float)auStack_48 - pfVar2[2]) +
           ((float)local_50._0_4_ - *pfVar2) * ((float)local_50._0_4_ - *pfVar2);
  auVar16._0_4_ = fVar9 + fVar8 + fVar10;
  auVar16._4_4_ = fVar9 + fVar8 + fVar10;
  auVar16._8_4_ = fVar9 + fVar8 + fVar10;
  auVar16._12_4_ = fVar9 + fVar8 + fVar10;
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  auVar21 = rsqrtps(auVar20,auVar16);
  fVar19 = auVar21._0_4_;
  fVar22 = auVar21._4_4_;
  fVar23 = auVar21._8_4_;
  auVar17._4_4_ = fVar11;
  auVar17._0_4_ = fVar11;
  auVar17._8_4_ = fVar11;
  auVar17._12_4_ = fVar11;
  auVar21._0_4_ = fVar12 + fVar11 + fVar13;
  auVar21._4_4_ = fVar12 + fVar11 + fVar13;
  auVar21._8_4_ = fVar12 + fVar11 + fVar13;
  auVar21._12_4_ = fVar12 + fVar11 + fVar13;
  auVar17 = rsqrtps(auVar17,auVar21);
  fVar8 = auVar17._0_4_;
  fVar9 = auVar17._4_4_;
  fVar10 = auVar17._8_4_;
  fVar8 = (float)(~-(uint)(auVar21._0_4_ <= 0.0) &
                 (uint)((3.0 - fVar8 * auVar21._0_4_ * fVar8) * fVar8 * 0.5)) * fVar27 -
          (float)(~-(uint)(auVar16._0_4_ <= 0.0) &
                 (uint)((3.0 - fVar19 * auVar16._0_4_ * fVar19) * fVar19 * 0.5)) * fVar24;
  fVar9 = (float)(~-(uint)(auVar21._4_4_ <= 0.0) &
                 (uint)((3.0 - fVar9 * auVar21._4_4_ * fVar9) * fVar9 * 0.5)) * fVar28 -
          (float)(~-(uint)(auVar16._4_4_ <= 0.0) &
                 (uint)((3.0 - fVar22 * auVar16._4_4_ * fVar22) * fVar22 * 0.5)) * fVar25;
  fVar10 = (float)(~-(uint)(auVar21._8_4_ <= 0.0) &
                  (uint)((3.0 - fVar10 * auVar21._8_4_ * fVar10) * fVar10 * 0.5)) * fVar29 -
           (float)(~-(uint)(auVar16._8_4_ <= 0.0) &
                  (uint)((3.0 - fVar23 * auVar16._8_4_ * fVar23) * fVar23 * 0.5)) * fVar26;
  if (1e-06 <= fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10) {
    local_28 = param_3 & 0xffff;
    local_30 = CONCAT22(1,(ushort)param_2);
    local_18 = CONCAT22(2,(short)param_4);
    _local_50 = (unkuint10)(ushort)param_2 << 0x40;
    stack0xffffffba = 0x30004;
    if (param_1[2] == (param_1[3] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
    }
    puVar3 = (undefined4 *)(*piVar1 + param_1[2] * 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = local_30;
      puVar3[1] = 2;
    }
    param_1[2] = param_1[2] + 1;
    if (param_1[2] == (param_1[3] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
    }
    puVar4 = (uint *)(*piVar1 + param_1[2] * 8);
    if (puVar4 != (uint *)0x0) {
      *puVar4 = local_28;
      puVar4[1] = 5;
    }
    param_1[2] = param_1[2] + 1;
    if (param_1[2] == (param_1[3] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
    }
    puVar3 = (undefined4 *)(*piVar1 + param_1[2] * 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = CONCAT22(3,(short)param_3);
      puVar3[1] = 4;
    }
    param_1[2] = param_1[2] + 1;
    if (param_1[2] == (param_1[3] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
    }
    puVar3 = (undefined4 *)(*piVar1 + param_1[2] * 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = local_18;
      puVar3[1] = 1;
    }
    param_1[2] = param_1[2] + 1;
    if (param_1[2] == (param_1[3] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
    }
    puVar3 = (undefined4 *)(*piVar1 + param_1[2] * 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = CONCAT22(5,(short)param_4);
      puVar3[1] = 0;
    }
    param_1[2] = param_1[2] + 1;
    if (param_1[2] == (param_1[3] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
    }
    puVar3 = (undefined4 *)(*piVar1 + param_1[2] * 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = auStack_48;
      puVar3[1] = 3;
    }
    param_1[2] = param_1[2] + 1;
  }
  else {
    fVar8 = fVar15;
    if (fVar15 < fVar18) {
      fVar8 = fVar18;
    }
    if (fVar8 < fVar14) {
      fVar8 = fVar14;
    }
    if (fVar14 == fVar8) {
      FUN_0145a8f0(param_2,param_3);
      return;
    }
    if (fVar18 == fVar8) {
      FUN_0145a8f0(param_3,param_4);
      return;
    }
    if (fVar15 == fVar8) {
      FUN_0145a8f0(param_4,param_2);
      return;
    }
  }
  return;
}

// 0145AE60  FUN_0145ae60  size=273  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_0145ae60(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *local_1014;
  uint local_1010;
  uint local_100c;
  undefined4 local_1008 [1024];
  int local_8;
  
  iVar4 = *(int *)(param_1 + 4);
  local_1014 = local_1008;
  uVar2 = 1;
  local_100c = 0x80000400;
  local_1008[0] = param_2;
  local_8 = iVar4;
  do {
    iVar1 = local_1014[uVar2 - 1];
    uVar2 = uVar2 - 1;
    iVar3 = iVar1;
    do {
      iVar3 = iVar4 + (uint)*(ushort *)(iVar3 + 4) * 8;
      *(undefined2 *)(iVar3 + 6) = 1;
      iVar5 = iVar1;
      local_1010 = uVar2;
    } while (iVar3 != iVar1);
    do {
      iVar5 = iVar4 + (uint)*(ushort *)(iVar5 + 4) * 8;
      iVar3 = iVar4 + (uint)*(ushort *)(iVar5 + 2) * 8;
      if (*(short *)(iVar4 + 6 + (uint)*(ushort *)(iVar5 + 2) * 8) == 0) {
        if (uVar2 == (local_100c & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_1014,4);
          uVar2 = local_1010;
          iVar4 = local_8;
        }
        local_1014[uVar2] = iVar3;
        uVar2 = local_1010 + 1;
        local_1010 = uVar2;
      }
    } while (iVar5 != iVar1);
  } while (uVar2 != 0);
  if (-1 < (int)local_100c) {
    local_1010 = uVar2;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1014,local_100c * 4);
  }
  return;
}

// 0145AF80  FUN_0145af80  size=312  [run]
char * __thiscall FUN_0145af80(int param_1,char *param_2)

{
  ushort uVar1;
  short *psVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  ushort *puVar8;
  
  psVar2 = *(short **)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  uVar5 = 0;
  *param_2 = '\x01';
  if (0 < iVar3) {
    puVar8 = (ushort *)(psVar2 + 1);
    do {
      uVar1 = *puVar8;
      if ((*param_2 == '\0') || (iVar3 <= (int)(uint)uVar1)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      *param_2 = cVar4;
      if ((cVar4 == '\0') || ((ushort)psVar2[(uint)uVar1 * 4 + 1] != uVar5)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 4;
      *param_2 = cVar4;
    } while ((int)uVar5 < iVar3);
    psVar6 = psVar2;
    iVar7 = iVar3;
    if (0 < iVar3) {
      do {
        if ((*param_2 == '\0') ||
           (psVar2[(uint)(ushort)psVar2[(uint)(ushort)psVar6[1] * 4 + 2] * 4] != *psVar6)) {
          cVar4 = '\0';
        }
        else {
          cVar4 = '\x01';
        }
        psVar6 = psVar6 + 4;
        iVar7 = iVar7 + -1;
        *param_2 = cVar4;
      } while (iVar7 != 0);
    }
  }
  if ((2 < iVar3) && (uVar5 = 0, 0 < iVar3)) {
    puVar8 = (ushort *)(psVar2 + 2);
    do {
      if ((*param_2 == '\0') ||
         (uVar5 != (ushort)psVar2[(uint)(ushort)psVar2[(uint)*puVar8 * 4 + 2] * 4 + 2])) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 4;
      *param_2 = cVar4;
    } while ((int)uVar5 < iVar3);
  }
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      *(undefined2 *)(*(int *)(param_1 + 4) + 6 + iVar7 * 8) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 8));
  }
  FUN_0145ae60(*(undefined4 *)(param_1 + 4));
  iVar3 = *(int *)(param_1 + 8);
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      if ((*param_2 == '\0') || (*(short *)(*(int *)(param_1 + 4) + 6 + iVar7 * 8) != 1)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      iVar7 = iVar7 + 1;
      *param_2 = cVar4;
    } while (iVar7 < iVar3);
  }
  return param_2;
}

// 0145B0D0  FUN_0145b0d0  size=32  [run]
void __thiscall FUN_0145b0d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0145B0F0  FUN_0145b0f0  size=22  [run]
bool FUN_0145b0f0(int *param_1,int *param_2)

{
  return *param_1 < *param_2;
}

// 0145B110  FUN_0145b110  size=89  [run]
void __thiscall FUN_0145b110(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,8);
  }
  iVar1 = param_3 - param_1[1];
  iVar2 = *param_1 + param_1[1] * 8;
  if (0 < iVar1) {
    do {
      if (iVar2 != 0) {
        *(undefined2 *)(iVar2 + 6) = 0;
      }
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 0145B170  FUN_0145b170  size=32  [run]
void __thiscall FUN_0145b170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0145B190  FUN_0145b190  size=143  [run]
void FUN_0145b190(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  do {
    iVar1 = *(int *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar4 = param_3;
    iVar5 = param_2;
    do {
      iVar2 = *(int *)(param_1 + iVar5 * 4);
      while (iVar2 < iVar1) {
        iVar5 = iVar5 + 1;
        iVar2 = *(int *)(param_1 + iVar5 * 4);
      }
      iVar2 = *(int *)(param_1 + iVar4 * 4);
      while (iVar1 < iVar2) {
        iVar4 = iVar4 + -1;
        iVar2 = *(int *)(param_1 + iVar4 * 4);
      }
      if (iVar4 < iVar5) break;
      if (iVar4 != iVar5) {
        uVar3 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar4);
    if (param_2 < iVar4) {
      FUN_0145b190(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar5;
    if (param_3 <= iVar5) {
      return;
    }
  } while( true );
}

// 0145B220  FUN_0145b220  size=89  [run]
void __thiscall FUN_0145b220(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
  }
  iVar1 = param_2 - param_1[1];
  iVar2 = *param_1 + param_1[1] * 8;
  if (0 < iVar1) {
    do {
      if (iVar2 != 0) {
        *(undefined2 *)(iVar2 + 6) = 0;
      }
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 0145B280  FUN_0145b280  size=33  [run]
void FUN_0145b280(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0145b190(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 0145B2B0  FUN_0145b2b0  size=48  [run]
void __thiscall FUN_0145b2b0(int *param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  
  param_1[1] = param_2;
  *param_1 = (int)(param_1 + 3);
  param_1[2] = -0x7fffff80;
  iVar2 = 0x7f;
  puVar1 = (undefined2 *)((int)param_1 + 0x12);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}

// 0145B2E0  FUN_0145b2e0  size=27  [run]
void __thiscall FUN_0145b2e0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7ffffc00;
  return;
}

// 0145B300  FUN_0145b300  size=27  [run]
void __thiscall FUN_0145b300(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffc0;
  return;
}

// 0145B320  FUN_0145b320  size=40  [run]
void FUN_0145b320(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_0145b190(param_1,0,param_2 + -1,0);
  }
  return;
}

// 0145B350  FUN_0145b350  size=61  [run]
void __fastcall FUN_0145b350(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145B390  FUN_0145b390  size=61  [run]
void __fastcall FUN_0145b390(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145B3D0  FUN_0145b3d0  size=199  [run]
void FUN_0145b3d0(undefined1 *param_1,int param_2,int param_3,char *param_4,char *param_5,
                 char *param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  
  sVar1 = **(short **)(param_2 + 0x14);
  sVar2 = **(short **)(param_2 + 0x10);
  sVar3 = **(short **)(param_2 + 0x18);
  sVar4 = **(short **)(param_3 + 0x10);
  sVar5 = **(short **)(param_3 + 0x14);
  sVar6 = **(short **)(param_3 + 0x18);
  *param_1 = 1;
  if (sVar2 == sVar4) {
    if ((sVar1 == sVar5) || (sVar1 == sVar6)) {
      if (*param_4 != '\0') {
        *param_1 = 0;
      }
      *param_4 = '\x01';
    }
    if ((sVar3 == sVar5) || (sVar3 == sVar6)) {
      if (*param_5 != '\0') {
        *param_1 = 0;
      }
      *param_5 = '\x01';
    }
  }
  if (sVar2 == sVar5) {
    if (sVar1 == sVar6) {
      if (*param_4 != '\0') {
        *param_1 = 0;
      }
      *param_4 = '\x01';
    }
    if (sVar3 == sVar6) {
      if (*param_5 != '\0') {
        *param_1 = 0;
      }
      *param_5 = '\x01';
    }
  }
  if (((sVar1 == sVar4) && ((sVar3 == sVar5 || (sVar3 == sVar6)))) ||
     ((sVar1 == sVar5 && (sVar3 == sVar6)))) {
    if (*param_6 != '\0') {
      *param_1 = 0;
    }
    *param_6 = '\x01';
  }
  return;
}

// 0145B4B0  FUN_0145b4b0  size=267  [run]
void FUN_0145b4b0(char *param_1,int *param_2,int *param_3,int *param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar5 = param_1;
  iVar3 = param_4[1];
  iVar9 = 0;
  *param_1 = '\x01';
  param_1 = (char *)0x0;
  do {
    if (iVar3 <= (int)param_1) {
      return;
    }
    iVar7 = 0;
    if (*pcVar5 != '\0') {
      iVar4 = param_2[1];
      iVar8 = 0;
      do {
        if (iVar4 <= iVar7) break;
        pfVar1 = (float *)(*param_4 + iVar9);
        pfVar2 = (float *)(*param_2 + iVar8);
        if ((*pcVar5 == '\0') ||
           (param_5 <= pfVar2[2] * pfVar1[2] + *pfVar2 * *pfVar1 + pfVar1[3] + pfVar2[1] * pfVar1[1]
           )) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x10;
        *pcVar5 = cVar6;
      } while (cVar6 != '\0');
    }
    iVar7 = 0;
    if (*pcVar5 != '\0') {
      iVar4 = param_3[1];
      iVar8 = 0;
      do {
        if (iVar4 <= iVar7) break;
        if (*pcVar5 == '\0') {
LAB_0145b59a:
          cVar6 = '\0';
        }
        else {
          pfVar1 = (float *)(*param_4 + iVar9);
          pfVar2 = (float *)(*param_3 + iVar8);
          if (param_5 <=
              pfVar2[2] * pfVar1[2] + *pfVar2 * *pfVar1 + pfVar1[3] + pfVar2[1] * pfVar1[1])
          goto LAB_0145b59a;
          cVar6 = '\x01';
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x10;
        *pcVar5 = cVar6;
      } while (cVar6 != '\0');
    }
    param_1 = (char *)((int)param_1 + 1);
    iVar9 = iVar9 + 0x10;
    if (*pcVar5 == '\0') {
      return;
    }
  } while( true );
}

// 0145B5C0  FUN_0145b5c0  size=209  [run]
char * FUN_0145b5c0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,int *param_6,undefined4 param_7)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  undefined1 local_8;
  char local_7;
  char local_6;
  char local_5;
  
  *param_1 = '\x01';
  pcVar3 = (char *)FUN_0145b4b0(&local_7,param_2,param_4,param_5,param_7);
  iVar1 = param_6[1];
  *param_1 = *pcVar3 != '\0';
  local_10 = 0;
  if (0 < iVar1) {
    local_c = 0;
    do {
      iVar4 = 0;
      local_5 = '\0';
      local_6 = '\0';
      local_7 = '\0';
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          if (iVar4 != local_10) {
            FUN_0145b3d0(&local_8,local_c + *param_6,iVar5 + *param_6,&local_5,&local_6,&local_7);
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x20;
        } while (iVar4 < iVar1);
      }
      if ((((*param_1 == '\0') || (local_5 == '\0')) || (local_6 == '\0')) || (local_7 == '\0')) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      local_c = local_c + 0x20;
      local_10 = local_10 + 1;
      *param_1 = cVar2;
    } while (local_10 < iVar1);
  }
  return param_1;
}

// 0145B6A0  FUN_0145b6a0  size=473  [run]
char * FUN_0145b6a0(char *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                   int *param_6,undefined4 param_7)

{
  float *pfVar1;
  float *pfVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  undefined1 auVar6 [16];
  char cVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_14;
  int local_c;
  undefined1 local_8;
  char local_7;
  char local_6;
  char local_5;
  
  *param_1 = '\x01';
  pcVar8 = (char *)FUN_0145b4b0(&local_7,param_2,param_4,param_5,param_7);
  *param_1 = *pcVar8 != '\0';
  iVar4 = param_6[1];
  iVar11 = 0;
  local_c = 0;
  if (0 < iVar4) {
    do {
      if (*param_1 == '\0') {
LAB_0145b718:
        cVar7 = '\0';
      }
      else {
        iVar10 = *param_6;
        sVar3 = **(short **)(iVar10 + 0x14 + iVar11);
        if ((**(short **)(iVar10 + 0x10 + iVar11) == sVar3) ||
           (sVar3 == **(short **)(iVar10 + iVar11 + 0x18))) goto LAB_0145b718;
        cVar7 = '\x01';
      }
      *param_1 = cVar7;
      local_5 = '\0';
      local_6 = '\0';
      local_7 = '\0';
      local_14 = 0;
      if (0 < iVar4) {
        iVar10 = 0;
        do {
          if (local_14 != local_c) {
            if (*param_1 == '\0') {
LAB_0145b7af:
              cVar7 = '\0';
            }
            else {
              iVar9 = *param_6;
              if (((**(short **)(iVar11 + 0x10 + iVar9) == **(short **)(iVar10 + 0x10 + iVar9)) &&
                  (**(short **)(iVar11 + 0x14 + iVar9) == **(short **)(iVar10 + 0x14 + iVar9))) &&
                 (psVar5 = *(short **)(iVar10 + 0x18 + iVar9),
                 **(short **)(iVar11 + 0x18 + iVar9) == *psVar5)) {
                pfVar1 = (float *)(iVar11 + iVar9);
                pfVar2 = (float *)(iVar10 + iVar9);
                auVar6._4_4_ = -(uint)(ABS(pfVar1[1] - pfVar2[1]) < 0.001);
                auVar6._0_4_ = -(uint)(ABS(*pfVar1 - *pfVar2) < 0.001);
                auVar6._8_4_ = -(uint)(ABS(pfVar1[2] - pfVar2[2]) < 0.001);
                auVar6._12_4_ = -(uint)(ABS(pfVar1[3] - pfVar2[3]) < 0.001);
                iVar9 = movmskps(psVar5,auVar6);
                if (iVar9 == 0xf) goto LAB_0145b7af;
              }
              cVar7 = '\x01';
            }
            *param_1 = cVar7;
            if ((cVar7 == '\0') ||
               (pcVar8 = (char *)FUN_0145b3d0(&local_8,*param_6 + iVar11,iVar10 + *param_6,&local_5,
                                              &local_6,&local_7), *pcVar8 == '\0')) {
              cVar7 = '\0';
            }
            else {
              cVar7 = '\x01';
            }
            *param_1 = cVar7;
          }
          local_14 = local_14 + 1;
          iVar10 = iVar10 + 0x20;
        } while (local_14 < iVar4);
      }
      if (((*param_1 == '\0') || (local_5 == '\0')) || ((local_6 == '\0' || (local_7 == '\0')))) {
        cVar7 = '\0';
      }
      else {
        cVar7 = '\x01';
      }
      *param_1 = cVar7;
      local_c = local_c + 1;
      iVar11 = iVar11 + 0x20;
    } while (local_c < iVar4);
  }
  if (2 < *(int *)(param_4 + 4)) {
    if ((*param_1 != '\0') &&
       ((iVar4 - *(int *)(param_3 + 8) / 2) + -2 + *(int *)(param_4 + 4) == 0)) {
      *param_1 = '\x01';
      return param_1;
    }
    *param_1 = '\0';
  }
  return param_1;
}

// 0145B880  FUN_0145b880  size=519  [run]
undefined1 *
FUN_0145b880(undefined1 *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [20];
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined1 local_12;
  char local_11;
  
  local_18 = *(undefined4 *)(param_2 + 0x14);
  local_11 = '\0';
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x80000000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x80000000;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  if (0 < param_4) {
    do {
      if (local_20 == (local_1c & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_24,0x10);
      }
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      puVar5 = (undefined4 *)(local_20 * 0x10 + local_24);
      param_3 = param_3 + 4;
      *puVar5 = uVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      local_20 = local_20 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if (*(char *)(param_2 + 1) != '\0') {
    FUN_01452770(param_6,local_60,local_50);
    FUN_01452770(&local_24,local_80,local_70);
  }
  *param_1 = 1;
  FUN_01454540(&local_12,param_2,param_5,param_6,local_90,&local_11,&local_30,&local_3c);
  if (local_11 == '\0') {
    puVar6 = (undefined1 *)
             FUN_0145b6a0(&local_12,&local_24,param_5,param_6,&local_30,&local_3c,local_18);
    *param_1 = *puVar6;
  }
  else {
    puVar6 = (undefined1 *)FUN_0145b5c0(&local_12,&local_24,param_5,param_6,&local_30,&local_3c);
    *param_1 = *puVar6;
  }
  if (*(char *)(param_2 + 1) != '\0') {
    FUN_014528c0(param_6,local_60,local_50);
    FUN_014528c0(&local_24,local_80,local_70);
  }
  local_20 = 0;
  if ((local_1c & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c << 4);
  }
  local_24 = 0;
  local_1c = 0x80000000;
  local_2c = 0;
  if ((local_28 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,local_28 << 4);
  }
  local_30 = 0;
  local_28 = 0x80000000;
  local_38 = 0;
  if ((local_34 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_3c,local_34 << 5);
  }
  return param_1;
}

// 0145BA90  FUN_0145ba90  size=16  [run]
void __thiscall FUN_0145ba90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 0145BBD0  FUN_0145bbd0  size=56  [run]
void FUN_0145bbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  iVar1 = hkcdGskBase::RayCastShapeInterface<_anon_DF4321B0::Vector4Shape>::
          RayCastShapeInterface<_anon_DF4321B0::Vector4Shape>
                    (&local_c,param_4,param_5 + 0x10,param_5);
  *(bool *)param_1 = iVar1 != 0;
  return;
}

// 0145BC10  FUN_0145bc10  size=262  [run]
undefined4
FUN_0145bc10(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  DWORD dwTlsIndex;
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_20;
  int local_c;
  int local_8;
  
  uVar4 = param_3 + 3U & 0xfffffffc;
  if (uVar4 == 0) {
    local_20 = 0;
  }
  else {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    local_20 = *(int *)((int)pvVar1 + 0xc);
    uVar3 = uVar4 * 0x10 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar1 + 8) < (int)uVar3) ||
       (*(uint *)((int)pvVar1 + 0x10) < local_20 + uVar3)) {
      local_20 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar1 + 0xc) = local_20 + uVar3;
    }
  }
  FUN_01446740(param_2,param_3,local_20);
  local_c = local_20;
  local_8 = param_3;
  iVar2 = hkcdGskBase::RayCastShapeInterface<_anon_DF4321B0::Vector4Shape>::
          RayCastShapeInterface<_anon_DF4321B0::Vector4Shape>
                    (&local_c,param_4,param_5 + 0x10,param_5);
  dwTlsIndex = DAT_01f8fc4c;
  *(bool *)param_1 = iVar2 != 0;
  pvVar1 = TlsGetValue(dwTlsIndex);
  uVar3 = uVar4 * 0x10 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar1 + 8) < (int)uVar3) || (uVar3 + local_20 != *(int *)((int)pvVar1 + 0xc))
      ) || (*(int *)((int)pvVar1 + 0x14) == local_20)) {
    FUN_0100b9b0(local_20,uVar3);
  }
  else {
    *(int *)((int)pvVar1 + 0xc) = local_20;
  }
  if (-1 < (int)(uVar4 | 0x80000000)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,(param_3 + 3U & 0x3ffffffc) << 4);
  }
  return param_1;
}

// 0145EED0  FUN_0145eed0  size=20  [run]
void __thiscall FUN_0145eed0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0145EEF0  FUN_0145eef0  size=19  [run]
void __thiscall FUN_0145eef0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - fVar1;
  param_1[2] = param_1[2] - fVar2;
  param_1[3] = param_1[3] - fVar3;
  return;
}

// 0145EF10  FUN_0145ef10  size=29  [run]
void __thiscall FUN_0145ef10(int param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 0x18);
  return;
}

// 0145EF30  FUN_0145ef30  size=28  [run]
void __thiscall FUN_0145ef30(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return;
}

// 0145EF50  FUN_0145ef50  size=29  [run]
void __thiscall FUN_0145ef50(int param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  param_2[1] = *(undefined8 *)(param_1 + 0x38);
  return;
}

// 0145EF70  FUN_0145ef70  size=29  [run]
void __thiscall FUN_0145ef70(int param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  param_2[1] = *(undefined8 *)(param_1 + 0x28);
  return;
}

// 0145F050  FUN_0145f050  size=25  [run]
void __thiscall FUN_0145f050(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 0145F070  FUN_0145f070  size=21  [run]
void __thiscall FUN_0145f070(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 0145F090  FUN_0145f090  size=21  [run]
void __thiscall FUN_0145f090(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 100);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 0145F0B0  FUN_0145f0b0  size=38  [run]
void FUN_0145f0b0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  return;
}

// 0145F0E0  FUN_0145f0e0  size=17  [run]
void FUN_0145f0e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 0145F100  FUN_0145f100  size=17  [run]
void FUN_0145f100(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 0145F120  FUN_0145f120  size=38  [run]
void FUN_0145f120(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  return;
}

// 0145F150  FUN_0145f150  size=44  [run]
void __thiscall FUN_0145f150(int *param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  do {
    puVar4 = (undefined4 *)((uint)*param_2 * 0x10 + *param_1);
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    *param_4 = *puVar4;
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    param_4 = param_4 + 4;
  } while (param_3 != 0);
  return;
}

// 0145F180  FUN_0145f180  size=129  [run]
void FUN_0145f180(byte *param_1,int *param_2,int *param_3,uint *param_4,undefined4 *param_5,
                 uint *param_6,undefined4 *param_7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  
  bVar1 = param_1[4];
  uVar7 = (uint)(bVar1 >> 6);
  *param_4 = uVar7;
  *param_6 = bVar1 & 3;
  param_4 = (uint *)*param_4;
  pbVar6 = param_1;
  do {
    puVar5 = (undefined4 *)((uint)*pbVar6 * 0x10 + *param_2);
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    pbVar6 = pbVar6 + 1;
    param_4 = (uint *)((int)param_4 - 1);
    *param_5 = *puVar5;
    param_5[1] = uVar2;
    param_5[2] = uVar3;
    param_5[3] = uVar4;
    param_5 = param_5 + 4;
  } while (param_4 != (uint *)0x0);
  param_6 = (uint *)*param_6;
  param_1 = param_1 + uVar7;
  do {
    puVar5 = (undefined4 *)((uint)*param_1 * 0x10 + *param_3);
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    param_1 = param_1 + 1;
    param_6 = (uint *)((int)param_6 - 1);
    *param_7 = *puVar5;
    param_7[1] = uVar2;
    param_7[2] = uVar3;
    param_7[3] = uVar4;
    param_7 = param_7 + 4;
  } while (param_6 != (uint *)0x0);
  return;
}

// 0145F220  _anon_DF4321B0::Vector4ShapeInterface::vf00  size=50  [run]
undefined4 * __thiscall
_anon_DF4321B0::Vector4ShapeInterface::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkcdGskBase::ShapeInterface::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 0145F280  FUN_0145f280  size=16  [run]
void __thiscall FUN_0145f280(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 0145F2A0  FUN_0145f2a0  size=61  [run]
void FUN_0145f2a0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x10 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0145F2E0  FUN_0145f2e0  size=72  [run]
void FUN_0145f2e0(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x10 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0145F340  FUN_0145f340  size=39  [run]
void FUN_0145f340(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 0145F370  FUN_0145f370  size=47  [run]
void FUN_0145f370(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 * *param_3;
  fVar2 = param_2[1] * param_3[1];
  fVar3 = param_2[2] * param_3[2];
  *param_1 = fVar2 + fVar1 + fVar3;
  param_1[1] = fVar2 + fVar1 + fVar3;
  param_1[2] = fVar2 + fVar1 + fVar3;
  param_1[3] = fVar2 + fVar1 + fVar3;
  return;
}

// 0145F3A0  FUN_0145f3a0  size=60  [run]
void __thiscall FUN_0145f3a0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145F3E0  FUN_0145f3e0  size=21  [run]
void FUN_0145f3e0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)*param_2;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_5 = *puVar1;
  param_5[1] = uVar2;
  param_5[2] = uVar3;
  param_5[3] = uVar4;
  return;
}

// 0145F400  FUN_0145f400  size=68  [run]
void FUN_0145f400(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  uVar6 = param_4[7];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  param_1[4] = ~param_2[4] & param_4[4] | param_3[4] & param_2[4];
  param_1[5] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[6] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[7] = ~uVar3 & uVar6 | uVar9 & uVar3;
  return;
}

// 0145F450  FUN_0145f450  size=25  [run]
void FUN_0145f450(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

// 0145F470  FUN_0145f470  size=25  [run]
void FUN_0145f470(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

// 0145F490  FUN_0145f490  size=68  [run]
void FUN_0145f490(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  uVar6 = param_4[7];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  param_1[4] = ~param_2[4] & param_4[4] | param_3[4] & param_2[4];
  param_1[5] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[6] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[7] = ~uVar3 & uVar6 | uVar9 & uVar3;
  return;
}

// 0145F4E0  FUN_0145f4e0  size=27  [run]
void FUN_0145f4e0(float *param_1,float *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_3 = -(uint)(*param_1 < *param_2);
  param_3[1] = -(uint)(fVar1 < fVar4);
  param_3[2] = -(uint)(fVar2 < fVar5);
  param_3[3] = -(uint)(fVar3 < fVar6);
  return;
}

// 0145F500  FUN_0145f500  size=27  [run]
void FUN_0145f500(float *param_1,float *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_3 = -(uint)(*param_2 < *param_1);
  param_3[1] = -(uint)(fVar4 < fVar1);
  param_3[2] = -(uint)(fVar5 < fVar2);
  param_3[3] = -(uint)(fVar6 < fVar3);
  return;
}

// 0145F530  hkcdGskBase::RayCastShapeInterface<_anon_DF4321B0::Vector4Shape>::vf00  size=50  [run]
undefined4 * __thiscall
hkcdGskBase::RayCastShapeInterface<_anon_DF4321B0::Vector4Shape>::vf00
          (undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ShapeInterface::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 0145F570  FUN_0145f570  size=60  [run]
void __fastcall FUN_0145f570(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145F5B0  FUN_0145f5b0  size=82  [run]
void FUN_0145f5b0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 * *param_3;
  fVar2 = param_2[1] * param_3[1];
  fVar3 = param_2[2] * param_3[2];
  *param_1 = fVar2 + fVar1 + fVar3;
  param_1[1] = fVar2 + fVar1 + fVar3;
  param_1[2] = fVar2 + fVar1 + fVar3;
  param_1[3] = fVar2 + fVar1 + fVar3;
  fVar1 = param_3[4] * *param_2;
  fVar2 = param_3[5] * param_2[1];
  fVar3 = param_3[6] * param_2[2];
  param_1[4] = fVar2 + fVar1 + fVar3;
  param_1[5] = fVar2 + fVar1 + fVar3;
  param_1[6] = fVar2 + fVar1 + fVar3;
  param_1[7] = fVar2 + fVar1 + fVar3;
  return;
}

// 0145F610  FUN_0145f610  size=96  [run]
void FUN_0145f610(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  uVar6 = param_4[7];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  param_1[4] = ~param_2[4] & param_4[4] | param_3[4] & param_2[4];
  param_1[5] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[6] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[7] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_4[9];
  uVar5 = param_4[10];
  uVar6 = param_4[0xb];
  uVar7 = param_3[9];
  uVar8 = param_3[10];
  uVar9 = param_3[0xb];
  param_1[8] = ~param_2[8] & param_4[8] | param_3[8] & param_2[8];
  param_1[9] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[10] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xb] = ~uVar3 & uVar6 | uVar9 & uVar3;
  return;
}

// 0145F670  FUN_0145f670  size=33  [run]
void FUN_0145f670(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}

// 0145F6A0  FUN_0145f6a0  size=33  [run]
void FUN_0145f6a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}

// 0145F6D0  FUN_0145f6d0  size=96  [run]
void FUN_0145f6d0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  uVar6 = param_4[7];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  param_1[4] = ~param_2[4] & param_4[4] | param_3[4] & param_2[4];
  param_1[5] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[6] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[7] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_4[9];
  uVar5 = param_4[10];
  uVar6 = param_4[0xb];
  uVar7 = param_3[9];
  uVar8 = param_3[10];
  uVar9 = param_3[0xb];
  param_1[8] = ~param_2[8] & param_4[8] | param_3[8] & param_2[8];
  param_1[9] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[10] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xb] = ~uVar3 & uVar6 | uVar9 & uVar3;
  return;
}

// 0145F7F0  FUN_0145f7f0  size=60  [run]
void __fastcall FUN_0145f7f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0145F830  FUN_0145f830  size=117  [run]
void FUN_0145f830(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 * *param_3;
  fVar2 = param_2[1] * param_3[1];
  fVar3 = param_2[2] * param_3[2];
  *param_1 = fVar2 + fVar1 + fVar3;
  param_1[1] = fVar2 + fVar1 + fVar3;
  param_1[2] = fVar2 + fVar1 + fVar3;
  param_1[3] = fVar2 + fVar1 + fVar3;
  fVar1 = param_3[4] * *param_2;
  fVar2 = param_3[5] * param_2[1];
  fVar3 = param_3[6] * param_2[2];
  param_1[4] = fVar2 + fVar1 + fVar3;
  param_1[5] = fVar2 + fVar1 + fVar3;
  param_1[6] = fVar2 + fVar1 + fVar3;
  param_1[7] = fVar2 + fVar1 + fVar3;
  fVar1 = param_3[8] * *param_2;
  fVar2 = param_3[9] * param_2[1];
  fVar3 = param_3[10] * param_2[2];
  param_1[8] = fVar2 + fVar1 + fVar3;
  param_1[9] = fVar2 + fVar1 + fVar3;
  param_1[10] = fVar2 + fVar1 + fVar3;
  param_1[0xb] = fVar2 + fVar1 + fVar3;
  return;
}

// 0145F8B0  FUN_0145f8b0  size=124  [run]
void FUN_0145f8b0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  uVar6 = param_4[7];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  param_1[4] = ~param_2[4] & param_4[4] | param_3[4] & param_2[4];
  param_1[5] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[6] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[7] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_4[9];
  uVar5 = param_4[10];
  uVar6 = param_4[0xb];
  uVar7 = param_3[9];
  uVar8 = param_3[10];
  uVar9 = param_3[0xb];
  param_1[8] = ~param_2[8] & param_4[8] | param_3[8] & param_2[8];
  param_1[9] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[10] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xb] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  uVar4 = param_4[0xd];
  uVar5 = param_4[0xe];
  uVar6 = param_4[0xf];
  uVar7 = param_3[0xd];
  uVar8 = param_3[0xe];
  uVar9 = param_3[0xf];
  param_1[0xc] = ~param_2[0xc] & param_4[0xc] | param_3[0xc] & param_2[0xc];
  param_1[0xd] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[0xe] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xf] = ~uVar3 & uVar6 | uVar9 & uVar3;
  return;
}

// 0145F930  FUN_0145f930  size=41  [run]
void FUN_0145f930(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 0145F960  FUN_0145f960  size=41  [run]
void FUN_0145f960(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 0145F990  FUN_0145f990  size=124  [run]
void FUN_0145f990(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  uVar6 = param_4[7];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  param_1[4] = ~param_2[4] & param_4[4] | param_3[4] & param_2[4];
  param_1[5] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[6] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[7] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_4[9];
  uVar5 = param_4[10];
  uVar6 = param_4[0xb];
  uVar7 = param_3[9];
  uVar8 = param_3[10];
  uVar9 = param_3[0xb];
  param_1[8] = ~param_2[8] & param_4[8] | param_3[8] & param_2[8];
  param_1[9] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[10] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xb] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  uVar4 = param_4[0xd];
  uVar5 = param_4[0xe];
  uVar6 = param_4[0xf];
  uVar7 = param_3[0xd];
  uVar8 = param_3[0xe];
  uVar9 = param_3[0xf];
  param_1[0xc] = ~param_2[0xc] & param_4[0xc] | param_3[0xc] & param_2[0xc];
  param_1[0xd] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[0xe] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xf] = ~uVar3 & uVar6 | uVar9 & uVar3;
  return;
}

// 0145FB10  FUN_0145fb10  size=109  [run]
int * __thiscall FUN_0145fb10(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 0x10 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 0145FB80  FUN_0145fb80  size=141  [run]
void __fastcall FUN_0145fb80(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0145FC10  FUN_0145fc10  size=123  [run]
void __thiscall FUN_0145fc10(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  uVar6 = param_4[7];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  param_1[4] = ~param_2[4] & param_4[4] | param_3[4] & param_2[4];
  param_1[5] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[6] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[7] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_4[9];
  uVar5 = param_4[10];
  uVar6 = param_4[0xb];
  uVar7 = param_3[9];
  uVar8 = param_3[10];
  uVar9 = param_3[0xb];
  param_1[8] = ~param_2[8] & param_4[8] | param_3[8] & param_2[8];
  param_1[9] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[10] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xb] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  uVar4 = param_4[0xd];
  uVar5 = param_4[0xe];
  uVar6 = param_4[0xf];
  uVar7 = param_3[0xd];
  uVar8 = param_3[0xe];
  uVar9 = param_3[0xf];
  param_1[0xc] = ~param_2[0xc] & param_4[0xc] | param_3[0xc] & param_2[0xc];
  param_1[0xd] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[0xe] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xf] = ~uVar3 & uVar6 | uVar9 & uVar3;
  return;
}

// 0145FC90  FUN_0145fc90  size=40  [run]
void __thiscall FUN_0145fc90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 0145FCC0  FUN_0145fcc0  size=40  [run]
void __thiscall FUN_0145fcc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 0145FCF0  FUN_0145fcf0  size=123  [run]
void __thiscall FUN_0145fcf0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  uVar6 = param_4[7];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  param_1[4] = ~param_2[4] & param_4[4] | param_3[4] & param_2[4];
  param_1[5] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[6] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[7] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  uVar4 = param_4[9];
  uVar5 = param_4[10];
  uVar6 = param_4[0xb];
  uVar7 = param_3[9];
  uVar8 = param_3[10];
  uVar9 = param_3[0xb];
  param_1[8] = ~param_2[8] & param_4[8] | param_3[8] & param_2[8];
  param_1[9] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[10] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xb] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  uVar4 = param_4[0xd];
  uVar5 = param_4[0xe];
  uVar6 = param_4[0xf];
  uVar7 = param_3[0xd];
  uVar8 = param_3[0xe];
  uVar9 = param_3[0xf];
  param_1[0xc] = ~param_2[0xc] & param_4[0xc] | param_3[0xc] & param_2[0xc];
  param_1[0xd] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[0xe] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xf] = ~uVar3 & uVar6 | uVar9 & uVar3;
  return;
}

// 0145FD70  FUN_0145fd70  size=152  [run]
void FUN_0145fd70(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 * *param_3;
  fVar2 = param_2[1] * param_3[1];
  fVar3 = param_2[2] * param_3[2];
  *param_1 = fVar2 + fVar1 + fVar3;
  param_1[1] = fVar2 + fVar1 + fVar3;
  param_1[2] = fVar2 + fVar1 + fVar3;
  param_1[3] = fVar2 + fVar1 + fVar3;
  fVar1 = param_3[4] * *param_2;
  fVar2 = param_3[5] * param_2[1];
  fVar3 = param_3[6] * param_2[2];
  param_1[4] = fVar2 + fVar1 + fVar3;
  param_1[5] = fVar2 + fVar1 + fVar3;
  param_1[6] = fVar2 + fVar1 + fVar3;
  param_1[7] = fVar2 + fVar1 + fVar3;
  fVar1 = param_3[8] * *param_2;
  fVar2 = param_3[9] * param_2[1];
  fVar3 = param_3[10] * param_2[2];
  param_1[8] = fVar2 + fVar1 + fVar3;
  param_1[9] = fVar2 + fVar1 + fVar3;
  param_1[10] = fVar2 + fVar1 + fVar3;
  param_1[0xb] = fVar2 + fVar1 + fVar3;
  fVar1 = param_3[0xc] * *param_2;
  fVar2 = param_3[0xd] * param_2[1];
  fVar3 = param_3[0xe] * param_2[2];
  param_1[0xc] = fVar2 + fVar1 + fVar3;
  param_1[0xd] = fVar2 + fVar1 + fVar3;
  param_1[0xe] = fVar2 + fVar1 + fVar3;
  param_1[0xf] = fVar2 + fVar1 + fVar3;
  return;
}

// 014600D0  FUN_014600d0  size=151  [run]
void __thiscall FUN_014600d0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 * *param_3;
  fVar2 = param_2[1] * param_3[1];
  fVar3 = param_2[2] * param_3[2];
  *param_1 = fVar2 + fVar1 + fVar3;
  param_1[1] = fVar2 + fVar1 + fVar3;
  param_1[2] = fVar2 + fVar1 + fVar3;
  param_1[3] = fVar2 + fVar1 + fVar3;
  fVar1 = param_3[4] * *param_2;
  fVar2 = param_3[5] * param_2[1];
  fVar3 = param_3[6] * param_2[2];
  param_1[4] = fVar2 + fVar1 + fVar3;
  param_1[5] = fVar2 + fVar1 + fVar3;
  param_1[6] = fVar2 + fVar1 + fVar3;
  param_1[7] = fVar2 + fVar1 + fVar3;
  fVar1 = param_3[8] * *param_2;
  fVar2 = param_3[9] * param_2[1];
  fVar3 = param_3[10] * param_2[2];
  param_1[8] = fVar2 + fVar1 + fVar3;
  param_1[9] = fVar2 + fVar1 + fVar3;
  param_1[10] = fVar2 + fVar1 + fVar3;
  param_1[0xb] = fVar2 + fVar1 + fVar3;
  fVar1 = param_3[0xc] * *param_2;
  fVar2 = param_3[0xd] * param_2[1];
  fVar3 = param_3[0xe] * param_2[2];
  param_1[0xc] = fVar2 + fVar1 + fVar3;
  param_1[0xd] = fVar2 + fVar1 + fVar3;
  param_1[0xe] = fVar2 + fVar1 + fVar3;
  param_1[0xf] = fVar2 + fVar1 + fVar3;
  return;
}

