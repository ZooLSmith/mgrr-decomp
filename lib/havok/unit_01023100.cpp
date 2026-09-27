// lib/havok/unit_01023100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01023100..01028180, 228 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkRefCountedProperties.h"
#include "hkSimpleMemorySystem.h"
#include "hkStackTracer.h"

// 01023100  FUN_01023100  size=47  [run]
undefined4 __thiscall FUN_01023100(int param_1,short param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  if (-1 < iVar1) {
    psVar2 = (short *)(*(int *)(param_1 + 8) + 4 + iVar1 * 8);
    do {
      if (*psVar2 == param_2) {
        return *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 8);
      }
      psVar2 = psVar2 + -4;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

// 01023130  FUN_01023130  size=177  [run]
void __thiscall FUN_01023130(int param_1,short param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xc) + -1;
  if (-1 < iVar5) {
    iVar3 = *(int *)(param_1 + 8);
    psVar4 = (short *)(iVar3 + 4 + iVar5 * 8);
    do {
      if (*psVar4 == param_2) {
        if (param_3 != 0) {
          FUN_01006000();
        }
        if (*(int *)(iVar3 + iVar5 * 8) != 0) {
          FUN_010060a0();
        }
        *(int *)(iVar3 + iVar5 * 8) = param_3;
        return;
      }
      psVar4 = psVar4 + -4;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  piVar1 = (int *)(param_1 + 8);
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
  }
  puVar2 = (undefined4 *)(*piVar1 + *(int *)(param_1 + 0xc) * 8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0xffff;
  }
  piVar1 = (int *)(*piVar1 + *(int *)(param_1 + 0xc) * 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(short *)(piVar1 + 1) = param_2;
  if (param_3 != 0) {
    FUN_01006000();
  }
  if (*piVar1 != 0) {
    FUN_010060a0();
  }
  *piVar1 = param_3;
  return;
}

// 010231F0  FUN_010231f0  size=129  [run]
void __thiscall FUN_010231f0(int param_1,short param_2)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xc) + -1;
  if (-1 < iVar5) {
    psVar1 = (short *)(*(int *)(param_1 + 8) + 4 + iVar5 * 8);
    while (*psVar1 != param_2) {
      psVar1 = psVar1 + -4;
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return;
      }
    }
    iVar2 = *(int *)(param_1 + 8);
    iVar4 = iVar5 * 8;
    if (*(int *)(iVar2 + iVar4) != 0) {
      FUN_010060a0();
    }
    *(undefined4 *)(iVar2 + iVar4) = 0;
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 != iVar5) {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + iVar4);
      iVar5 = (*(int *)(param_1 + 8) + iVar2 * 8) - (int)puVar3;
      iVar4 = 2;
      do {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

// 010232B0  hkRefCountedProperties::hkRefCountedProperties  size=11  [run]
void __fastcall hkRefCountedProperties::hkRefCountedProperties(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 010232C0  hkBaseObject::hkBaseObject_208  size=113  [run]
void __fastcall hkBaseObject::hkBaseObject_208(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = hkRefCountedProperties::vftable;
  iVar2 = param_1[3] + -1;
  iVar1 = param_1[2];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 8) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar2 * 8) = 0;
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 8);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01023370  FUN_01023370  size=49  [run]
void FUN_01023370(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *(undefined2 *)(param_1 + 1) = 0xffff;
        *param_1 = 0;
        *(undefined2 *)((int)param_1 + 6) = 0;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010233B0  FUN_010233b0  size=76  [run]
int __thiscall FUN_010233b0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0xffff;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 8;
}

// 01023400  FUN_01023400  size=71  [run]
int __fastcall FUN_01023400(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0xffff;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 8;
}

// 01023450  FUN_01023450  size=43  [run]
void FUN_01023450(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 8) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 8 + param_2 * 8) = 0;
  }
  return;
}

// 010234C0  FUN_010234c0  size=82  [run]
void __thiscall FUN_010234c0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = param_2 * 8;
  if (*(int *)(iVar2 + iVar3) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(iVar2 + iVar3) = 0;
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(*param_1 + iVar3);
    iVar2 = (*param_1 + param_1[1] * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 01023520  FUN_01023520  size=99  [run]
void __thiscall FUN_01023520(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 8) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar2 * 8) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01023590  FUN_01023590  size=102  [run]
void __fastcall FUN_01023590(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 8) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar2 * 8) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01023600  FUN_01023600  size=102  [run]
void __fastcall FUN_01023600(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 8) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar2 * 8) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01023670  FUN_01023670  size=38  [run]
void FUN_01023670(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010236A0  hkRefCountedProperties::vf00  size=52  [run]
int __thiscall hkRefCountedProperties::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_208();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01023710  FUN_01023710  size=49  [run]
undefined4 __thiscall FUN_01023710(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 << 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

// 01023750  FUN_01023750  size=52  [run]
undefined4 __thiscall FUN_01023750(int param_1,undefined4 param_2,int param_3)

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

// 01023790  FUN_01023790  size=48  [run]
void FUN_01023790(undefined8 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined8 *)(param_2 + (int)param_1);
      param_1[1] = *(undefined8 *)(param_2 + 8 + (int)param_1);
      param_1 = param_1 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 010237D0  FUN_010237d0  size=48  [run]
void FUN_010237d0(undefined8 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined8 *)(param_3 + (int)param_1);
      param_1[1] = *(undefined8 *)(param_3 + 8 + (int)param_1);
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01023810  FUN_01023810  size=49  [run]
undefined4 __thiscall FUN_01023810(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 << 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

// 01023850  FUN_01023850  size=100  [run]
void __fastcall FUN_01023850(undefined4 *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint *puVar4;
  int iVar5;
  float *pfVar6;
  
  uVar1 = param_1[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    pfVar6 = (float *)*param_1;
    do {
      auVar2._4_4_ = -(uint)NAN(pfVar6[1]);
      auVar2._0_4_ = -(uint)NAN(*pfVar6);
      auVar2._8_4_ = -(uint)NAN(pfVar6[2]);
      auVar2._12_4_ = -(uint)NAN(pfVar6[3]);
      param_2 = movmskps(param_2,auVar2);
      if ((param_2 & 7) != 0) goto LAB_010238a8;
      uVar3 = uVar3 + 1;
      pfVar6 = pfVar6 + 4;
    } while (uVar3 < uVar1);
  }
  iVar5 = 0;
  if (0 < (int)param_1[4]) {
    puVar4 = (uint *)param_1[3];
    do {
      if (((uVar1 <= *puVar4) || (uVar1 <= puVar4[1])) || (uVar1 <= puVar4[2])) {
LAB_010238a8:
        *param_3 = 0;
        return;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar5 < (int)param_1[4]);
  }
  *param_3 = 1;
  return;
}

// 010238C0  FUN_010238c0  size=9  [run]
void __fastcall FUN_010238c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 010238D0  FUN_010238d0  size=306  [run]
int * __thiscall FUN_010238d0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  
  piVar6 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = -0x80000000;
  uVar2 = param_1[2];
  if ((int)(uVar2 & 0x3fffffff) < param_2[1]) {
    if ((uVar2 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar2 << 4);
    }
    param_2 = (int *)(piVar6[1] << 4);
    iVar7 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = iVar7;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  }
  iVar7 = piVar6[1];
  puVar8 = (undefined4 *)*param_1;
  param_1[1] = iVar7;
  if (0 < iVar7) {
    iVar10 = *piVar6 - (int)puVar8;
    do {
      puVar1 = (undefined4 *)(iVar10 + (int)puVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar2 = param_1[5];
  if ((int)(uVar2 & 0x3fffffff) < piVar6[4]) {
    if (-1 < (int)uVar2) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],uVar2 << 4);
    }
    param_2 = (int *)(piVar6[4] << 4);
    iVar7 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    param_1[3] = iVar7;
    param_1[5] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  }
  iVar7 = piVar6[4];
  puVar9 = (undefined8 *)param_1[3];
  param_1[4] = iVar7;
  if (0 < iVar7) {
    iVar10 = piVar6[3] - (int)puVar9;
    do {
      *puVar9 = *(undefined8 *)(iVar10 + (int)puVar9);
      puVar9[1] = *(undefined8 *)(iVar10 + 8 + (int)puVar9);
      puVar9 = puVar9 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return param_1;
}

// 01023A10  FUN_01023a10  size=5  [run]
undefined4 __fastcall FUN_01023a10(undefined4 param_1)

{
  return param_1;
}

// 01023A20  FUN_01023a20  size=205  [run]
void __thiscall FUN_01023a20(int *param_1,undefined4 *param_2,float *param_3)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
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
  int iVar19;
  int iVar20;
  
  iVar3 = param_1[1];
  FUN_01023d50(&PTR_vftable_018e9b94,*param_2,param_2[1]);
  iVar20 = param_1[4];
  FUN_01023b10(&PTR_vftable_018e9b94,param_2[3],param_2[4]);
  if (iVar3 < param_1[1]) {
    iVar19 = iVar3 << 4;
    param_2 = (undefined4 *)iVar3;
    do {
      pfVar1 = (float *)(*param_1 + iVar19);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = param_3[1];
      fVar8 = param_3[2];
      fVar9 = param_3[3];
      fVar10 = param_3[5];
      fVar11 = param_3[6];
      fVar12 = param_3[7];
      fVar13 = param_3[9];
      fVar14 = param_3[10];
      fVar15 = param_3[0xb];
      fVar16 = param_3[0xd];
      fVar17 = param_3[0xe];
      fVar18 = param_3[0xf];
      pfVar1 = (float *)(*param_1 + iVar19);
      *pfVar1 = fVar4 * *param_3 + fVar5 * param_3[4] + fVar6 * param_3[8] + param_3[0xc];
      pfVar1[1] = fVar4 * fVar7 + fVar5 * fVar10 + fVar6 * fVar13 + fVar16;
      pfVar1[2] = fVar4 * fVar8 + fVar5 * fVar11 + fVar6 * fVar14 + fVar17;
      pfVar1[3] = fVar4 * fVar9 + fVar5 * fVar12 + fVar6 * fVar15 + fVar18;
      param_2 = (undefined4 *)((int)param_2 + 1);
      iVar19 = iVar19 + 0x10;
    } while ((int)param_2 < param_1[1]);
  }
  if (iVar20 < param_1[4]) {
    iVar19 = iVar20 << 4;
    do {
      *(int *)(param_1[3] + iVar19) = *(int *)(param_1[3] + iVar19) + iVar3;
      piVar2 = (int *)(iVar19 + 4 + param_1[3]);
      *piVar2 = *piVar2 + iVar3;
      piVar2 = (int *)(iVar19 + 8 + param_1[3]);
      *piVar2 = *piVar2 + iVar3;
      iVar20 = iVar20 + 1;
      iVar19 = iVar19 + 0x10;
    } while (iVar20 < param_1[4]);
  }
  return;
}

// 01023B10  FUN_01023b10  size=109  [run]
void __thiscall FUN_01023b10(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = param_1[1] + param_4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    FUN_0100a210(param_2,param_1,iVar1,0x10);
  }
  puVar2 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  if (0 < param_4) {
    param_3 = param_3 - (int)puVar2;
    do {
      *puVar2 = *(undefined8 *)(param_3 + (int)puVar2);
      puVar2[1] = *(undefined8 *)(param_3 + 8 + (int)puVar2);
      puVar2 = puVar2 + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1[1] = iVar3;
  return;
}

// 01023B90  FUN_01023b90  size=146  [run]
undefined4 * __thiscall FUN_01023b90(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = param_3;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_3[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar1 << 4);
    }
    param_3 = (int *)(piVar2[1] << 4);
    uVar3 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = uVar3;
    param_1[2] = (int)((int)param_3 + ((int)param_3 >> 0x1f & 0xfU)) >> 4;
  }
  iVar6 = piVar2[1];
  puVar4 = (undefined8 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined8 *)(iVar5 + (int)puVar4);
      puVar4[1] = *(undefined8 *)(iVar5 + 8 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 01023C30  FUN_01023c30  size=33  [run]
void FUN_01023c30(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      puVar1 = (undefined4 *)(param_2 + (int)param_1);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *param_1 = *puVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      param_1 = param_1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01023C60  FUN_01023c60  size=33  [run]
void FUN_01023c60(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      puVar1 = (undefined4 *)(param_3 + (int)param_1);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *param_1 = *puVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01023C90  FUN_01023c90  size=147  [run]
undefined4 * __thiscall FUN_01023c90(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = param_2;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar1 << 4);
    }
    param_2 = (int *)(piVar2[1] << 4);
    uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = uVar3;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  }
  iVar6 = piVar2[1];
  puVar4 = (undefined8 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined8 *)(iVar5 + (int)puVar4);
      puVar4[1] = *(undefined8 *)(iVar5 + 8 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 01023D30  FUN_01023d30  size=25  [run]
void FUN_01023d30(undefined4 param_1,undefined4 param_2)

{
  FUN_01023b10(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01023D50  FUN_01023d50  size=95  [run]
void __thiscall FUN_01023d50(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = param_1[1] + param_4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar7) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar7) {
      iVar5 = iVar7;
    }
    FUN_0100a210(param_2,param_1,iVar5,0x10);
  }
  puVar6 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  if (0 < param_4) {
    param_3 = param_3 - (int)puVar6;
    do {
      puVar1 = (undefined4 *)(param_3 + (int)puVar6);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar6 = puVar6 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1[1] = iVar7;
  return;
}

// 01023DC0  FUN_01023dc0  size=123  [run]
int * __thiscall FUN_01023dc0(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  piVar6 = param_3;
  uVar2 = param_1[2];
  if ((int)(uVar2 & 0x3fffffff) < param_3[1]) {
    if (-1 < (int)uVar2) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar2 << 4);
    }
    param_3 = (int *)(piVar6[1] << 4);
    iVar7 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = iVar7;
    param_1[2] = (int)((int)param_3 + ((int)param_3 >> 0x1f & 0xfU)) >> 4;
  }
  iVar7 = piVar6[1];
  puVar8 = (undefined4 *)*param_1;
  param_1[1] = iVar7;
  if (0 < iVar7) {
    iVar9 = *piVar6 - (int)puVar8;
    do {
      puVar1 = (undefined4 *)(iVar9 + (int)puVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return param_1;
}

// 01023E40  FUN_01023e40  size=134  [run]
int * __thiscall FUN_01023e40(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  piVar6 = param_2;
  uVar2 = param_1[2];
  if ((int)(uVar2 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar2) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar2 << 4);
    }
    param_2 = (int *)(piVar6[1] << 4);
    iVar7 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = iVar7;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  }
  iVar7 = piVar6[1];
  puVar8 = (undefined4 *)*param_1;
  param_1[1] = iVar7;
  if (0 < iVar7) {
    iVar9 = *piVar6 - (int)puVar8;
    do {
      puVar1 = (undefined4 *)(iVar9 + (int)puVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return param_1;
}

// 01023ED0  FUN_01023ed0  size=27  [run]
void FUN_01023ed0(undefined4 *param_1)

{
  FUN_01023b10(&PTR_vftable_018e9b94,*param_1,param_1[1]);
  return;
}

// 01023EF0  FUN_01023ef0  size=25  [run]
void FUN_01023ef0(undefined4 param_1,undefined4 param_2)

{
  FUN_01023d50(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01023F10  FUN_01023f10  size=27  [run]
void FUN_01023f10(undefined4 *param_1)

{
  FUN_01023d50(&PTR_vftable_018e9b94,*param_1,param_1[1]);
  return;
}

// 01023F50  FUN_01023f50  size=13  [run]
void __thiscall FUN_01023f50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}

// 01023F60  FUN_01023f60  size=13  [run]
void __thiscall FUN_01023f60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}

// 01023F70  FUN_01023f70  size=13  [run]
void __thiscall FUN_01023f70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}

// 01023F80  FUN_01023f80  size=13  [run]
void __thiscall FUN_01023f80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}

// 01023FB0  FUN_01023fb0  size=32  [run]
void __thiscall
FUN_01023fb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

// 01023FD0  FUN_01023fd0  size=38  [run]
void __thiscall FUN_01023fd0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x284) = param_2;
  *(undefined4 *)(param_1 + 0x288) = param_2;
  *(undefined4 *)(param_1 + 0x28c) = param_2;
  *(undefined4 *)(param_1 + 0x290) = 0;
  return;
}

// 01024000  FUN_01024000  size=35  [run]
void __thiscall FUN_01024000(int param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x284) = *param_2;
  *(undefined8 *)(param_1 + 0x28c) = param_2[1];
  return;
}

// 01024040  hkSimpleMemorySystem::vf24  size=214  [run]
void __thiscall hkSimpleMemorySystem::vf24(int param_1,undefined4 param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_1c = 0xffffffff;
  local_18 = 0xffffffff;
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x284) + 0x20))(&local_1c);
  FUN_01018f60(param_2,"TEMP: %i in use, %i available, %i peak",local_18,local_10,local_14);
  (**(code **)(**(int **)(param_1 + 0x288) + 0x20))(&local_1c);
  FUN_01018f60(param_2,"HEAP: %i in use, %i available, %i peak",local_18,local_10,local_14);
  (**(code **)(**(int **)(param_1 + 0x28c) + 0x20))(&local_1c);
  FUN_01018f60(param_2,"DEBUG: %i in use, %i available, %i peak",local_18,local_10,local_14);
  (**(code **)(**(int **)(param_1 + 0x290) + 0x20))(&local_1c);
  FUN_01018f60(param_2,"SOLVER: %i in use, %i available, %i peak",local_18,local_10,local_14);
  return;
}

// 01024120  hkSimpleMemorySystem::vf28  size=7  [run]
undefined4 __fastcall hkSimpleMemorySystem::vf28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x288);
}

// 01024130  hkSimpleMemorySystem::vf2C  size=17  [run]
void __fastcall hkSimpleMemorySystem::vf2C(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0102413f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x288) + 0x20))();
  return;
}

// 01024150  hkSimpleMemorySystem::vf04  size=88  [run]
int * __thiscall hkSimpleMemorySystem::vf04(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  param_1[1] = iVar1;
  if ((((param_3 & 2) != 0) && (iVar1 != 0)) && (param_1[0xa4] == 0)) {
    uVar2 = (**(code **)(*(int *)param_1[0xa2] + 4))(iVar1);
    FUN_0102c990(uVar2,iVar1);
  }
  (**(code **)(*param_1 + 0xc))(param_1 + 2,&DAT_0170657c,param_3);
  return param_1 + 2;
}

// 010241B0  hkSimpleMemorySystem::vf08  size=98  [run]
undefined4 __thiscall hkSimpleMemorySystem::vf08(int *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x10))(param_1 + 2,param_2);
  if (((param_2 & 2) != 0) && (param_1[0xa4] == 0)) {
    (**(code **)(*(int *)param_1[0xa2] + 8))(param_1[0x13],param_1[0x14] - param_1[0x13]);
    FUN_0102c990(0,0);
  }
  if ((param_2 & 1) != 0) {
    FUN_01023fd0(0);
  }
  return 0;
}

// 01024220  hkSimpleMemorySystem::vf0C  size=109  [run]
void __thiscall hkSimpleMemorySystem::vf0C(int param_1,int param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  if ((param_4 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x288);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x28c);
    *(undefined4 *)(param_2 + 0x34) = 0;
  }
  if ((param_4 & 2) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x288);
    FUN_0100b4e0(uVar1,uVar1,uVar1);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x284);
    if (*(int *)(param_1 + 0x290) != 0) {
      *(int *)(param_2 + 0x34) = *(int *)(param_1 + 0x290);
      return;
    }
    *(int *)(param_2 + 0x34) = param_1 + 0x48;
  }
  return;
}

// 01024290  hkSimpleMemorySystem::vf10  size=58  [run]
void hkSimpleMemorySystem::vf10(int param_1,byte param_2)

{
  if ((param_2 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_0100b6c0();
  }
  if ((param_2 & 1) != 0) {
    FUN_01019a00(param_1,0,0x40);
  }
  return;
}

// 010242D0  hkSimpleMemorySystem::hkSimpleMemorySystem  size=58  [run]
undefined4 * __fastcall hkSimpleMemorySystem::hkSimpleMemorySystem(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_01010f40(0);
  FUN_01005d80();
  hkSolverAllocator::hkSolverAllocator();
  FUN_01023fb0(0,0,0,0);
  return param_1;
}

// 01024310  FUN_01024310  size=12  [run]
uint __thiscall FUN_01024310(uint *param_1,uint param_2)

{
  return *param_1 & param_2;
}

// 01024320  hkSimpleMemorySystem::vf30  size=8  [run]
undefined4 hkSimpleMemorySystem::vf30(void)

{
  return 1;
}

// 01024330  FUN_01024330  size=27  [run]
void FUN_01024330(void)

{
  hkSolverAllocator::~hkSolverAllocator();
  hkMemoryAllocator::~hkMemoryAllocator();
  hkMemorySystem::~hkMemorySystem();
  return;
}

// 01024350  hkSimpleMemorySystem::vf00  size=32  [run]
undefined4 __fastcall hkSimpleMemorySystem::vf00(undefined4 param_1)

{
  hkSolverAllocator::~hkSolverAllocator();
  hkMemoryAllocator::~hkMemoryAllocator();
  hkMemorySystem::~hkMemorySystem();
  return param_1;
}

// 01024370  FUN_01024370  size=8  [run]
undefined4 FUN_01024370(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01024380  FUN_01024380  size=10  [run]
void FUN_01024380(void)

{
  return;
}

// 01024390  FUN_01024390  size=17  [run]
void FUN_01024390(undefined4 param_1)

{
  FUN_01018d00(param_1);
  return;
}

// 010243B0  FUN_010243b0  size=19  [run]
void __thiscall FUN_010243b0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 0x10) == -1;
  return;
}

// 010243D0  hkBaseObject::hkBaseObject_247  size=96  [run]
void __fastcall hkBaseObject::hkBaseObject_247(undefined4 *param_1)

{
  int *piVar1;
  HANDLE pvVar2;
  
  piVar1 = (int *)param_1[2];
  *param_1 = hkStackTracer::vftable;
  if (*piVar1 != 0) {
    pvVar2 = GetCurrentProcess();
    (*(code *)piVar1[0xc])(pvVar2);
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    FreeLibrary((HMODULE)piVar1[1]);
    FreeLibrary((HMODULE)*piVar1);
    *piVar1 = 0;
  }
  *param_1 = vftable;
  return;
}

// 01024430  FUN_01024430  size=338  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_01024430(int param_1,int param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char local_1060 [2048];
  undefined4 local_860;
  undefined1 auStack_85c [12];
  undefined1 local_850 [16];
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_4c [12];
  undefined8 local_40;
  undefined8 local_28;
  int local_20;
  int local_1c;
  int local_18;
  HANDLE local_14;
  
  local_14 = (HANDLE)0x1024450;
  local_14 = GetCurrentProcess();
  local_18 = 0;
  if (0 < param_2) {
    do {
      iVar2 = local_18;
      iVar3 = *(int *)(param_1 + local_18 * 4) + -4;
      local_54 = 0;
      auStack_85c = SUB1612((undefined1  [16])0x0,4);
      local_860 = 0x20;
      local_850._0_12_ = ZEXT412(0x7e0) << 0x40;
      local_850._12_4_ = 0;
      local_28 = 0;
      local_20 = iVar3;
      iVar1 = (**(code **)(*(int *)(local_1c + 8) + 0x1c))(local_14,iVar3,0,&local_28,&local_860);
      if (iVar1 == 0) {
        if (DAT_01f909b0 == '\0') {
          OutputDebugStringA(
                            "**************************************************************\n* Cannot find symbol for an address\n* Either debug information was not found or your version of\n* dbghelp.dll may be too old to understand the debug format.\n* For more information, see comments in hkStackTracerWin32.cxx\n* D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common/Base/System/StackTracer/Impl/hkStackTracerWin32.cxx\n**************************************************************"
                            );
          DAT_01f909b0 = '\x01';
        }
        pcVar4 = "(unknown - see comments in hkStackTracerWin32.cxx)";
        puVar5 = (undefined4 *)(local_850 + 0xc);
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          puVar5 = puVar5 + 1;
        }
        *(undefined2 *)puVar5 = *(undefined2 *)pcVar4;
        *(char *)((int)puVar5 + 2) = pcVar4[2];
        iVar3 = local_20;
        iVar2 = local_18;
      }
      local_40 = 0;
      auStack_4c = SUB1612((undefined1  [16])0x0,4);
      local_50 = 0x18;
      (**(code **)(*(int *)(local_1c + 8) + 0x2c))(local_14,iVar3,local_54,&local_28,&local_50);
      __snprintf(local_1060,0x800,"%s(%i):\'%s\'\n",auStack_4c._8_4_,auStack_4c._4_4_,
                 local_850 + 0xc);
      (*param_3)(local_1060,param_4);
      local_18 = iVar2 + 1;
    } while (local_18 < param_2);
  }
  return;
}

// 01024590  FUN_01024590  size=40  [run]
undefined2 __thiscall FUN_01024590(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 8) + 0x38);
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(0,param_3,param_2,0);
    return uVar2;
  }
  return 0;
}

// 010245E0  FUN_010245e0  size=85  [run]
void FUN_010245e0(code *param_1,undefined4 param_2)

{
  DWORD DVar1;
  undefined1 local_804 [1024];
  CHAR local_404 [1024];
  
  DVar1 = GetModuleFileNameA((HMODULE)0x0,local_404,0x400);
  if (DVar1 != 0) {
    FUN_01015b50(local_804,0x400,"Win32 \"%s\"",local_404);
    (*param_1)(local_804,param_2);
  }
  return;
}

// 01024640  FUN_01024640  size=122  [run]
void __thiscall FUN_01024640(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int extraout_ECX_00;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = param_1[1];
  uVar3 = *param_1;
  uVar6 = FUN_01024380();
  puVar4 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
  *extraout_ECX = *puVar4;
  extraout_ECX[1] = uVar1;
  extraout_ECX[2] = (int)uVar6;
  *puVar4 = uVar3;
  puVar4[1] = uVar2;
  uVar6 = FUN_01024380();
  iVar5 = (int)((ulonglong)uVar6 >> 0x20);
  *(int *)(iVar5 + 8) = (int)uVar6;
  uVar1 = *(undefined4 *)(extraout_ECX_00 + 0x10);
  *(undefined4 *)(extraout_ECX_00 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
  *(undefined4 *)(iVar5 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(extraout_ECX_00 + 0x14);
  *(undefined4 *)(extraout_ECX_00 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
  *(undefined4 *)(iVar5 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(extraout_ECX_00 + 0xc);
  *(undefined4 *)(extraout_ECX_00 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  return;
}

// 010246C0  FUN_010246c0  size=58  [run]
void __thiscall FUN_010246c0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_4) {
    do {
      if (param_2 < 1) {
        return;
      }
      *(undefined4 *)(param_3 + iVar1 * 4) = *(undefined4 *)(param_2 * 0x14 + *param_1);
      param_2 = *(int *)(param_2 * 0x14 + 4 + *param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_4);
  }
  return;
}

// 01024700  FUN_01024700  size=32  [run]
int __thiscall FUN_01024700(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      param_2 = *(int *)(*param_1 + 4 + param_2 * 0x14);
      iVar1 = iVar1 + 1;
    } while (0 < param_2);
  }
  return iVar1;
}

// 01024720  FUN_01024720  size=120  [run]
void __thiscall FUN_01024720(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar1 = iVar3 + param_2 * 0x14;
  if ((*(int *)(iVar3 + 0x10 + param_2 * 0x14) == 0) && (*(int *)(iVar1 + 8) == -1)) {
    iVar4 = *(int *)(iVar1 + 4);
    if (iVar4 != -1) {
      piVar2 = (int *)(iVar3 + 8 + iVar4 * 0x14);
      for (iVar4 = *(int *)(iVar3 + 8 + iVar4 * 0x14); iVar4 != param_2;
          iVar4 = *(int *)(iVar3 + 0xc + iVar4 * 0x14)) {
        iVar4 = *piVar2;
        piVar2 = (int *)(iVar3 + 0xc + iVar4 * 0x14);
      }
      *piVar2 = *(int *)(iVar1 + 0xc);
      FUN_01024720(*(undefined4 *)(iVar1 + 4));
      *(int *)(iVar1 + 0xc) = param_1[5];
      param_1[5] = param_2;
      return;
    }
    param_1[4] = -1;
    *(int *)(iVar1 + 0xc) = param_1[5];
    param_1[5] = param_2;
  }
  return;
}

// 010247A0  hkStackTracer::hkStackTracer  size=35  [run]
undefined4 * __fastcall hkStackTracer::hkStackTracer(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = &DAT_01f909cc;
  FUN_01024c00();
  return param_1;
}

// 010247D0  FUN_010247d0  size=10  [run]
void FUN_010247d0(void)

{
  hkStackTracer::hkStackTracer();
  return;
}

// 010247E0  FUN_010247e0  size=119  [run]
void FUN_010247e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_44 [64];
  
  if (-1 < param_1) {
    iVar1 = FUN_010247d0();
    if (iVar1 != 0) {
      FUN_01006000();
    }
    FUN_010060a0();
    uVar2 = FUN_010246c0(param_1,local_44,0x10);
    FUN_01024430(local_44,uVar2,FUN_01024390,param_2);
    if (iVar1 != 0) {
      FUN_010060a0();
    }
    return;
  }
  FUN_01018d00("No stack trace\n");
  return;
}

// 01024860  FUN_01024860  size=31  [run]
void __thiscall FUN_01024860(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*param_1 + 0x10 + param_2 * 0x14);
  *piVar1 = *piVar1 + -1;
  FUN_01024720(param_2);
  return;
}

// 01024880  FUN_01024880  size=153  [run]
uint __fastcall FUN_01024880(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[5];
  if (uVar1 != 0xffffffff) {
    iVar2 = uVar1 * 0x14;
    param_1[5] = *(int *)(*param_1 + 0xc + iVar2);
    *(undefined4 *)(*param_1 + iVar2) = 0;
    *(undefined4 *)(iVar2 + 4 + *param_1) = 0xffffffff;
    *(undefined4 *)(iVar2 + 8 + *param_1) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xc + *param_1) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x10 + *param_1) = 0;
    return uVar1;
  }
  uVar1 = param_1[1];
  if (uVar1 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_1[3],param_1,0x14);
  }
  param_1[1] = param_1[1] + 1;
  iVar2 = uVar1 * 0x14;
  *(undefined4 *)(iVar2 + *param_1) = 0;
  *(undefined4 *)(iVar2 + 4 + *param_1) = 0xffffffff;
  *(undefined4 *)(iVar2 + 8 + *param_1) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xc + *param_1) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10 + *param_1) = 0;
  return uVar1;
}

// 01024920  FUN_01024920  size=78  [run]
void __fastcall FUN_01024920(undefined4 *param_1)

{
  uint uVar1;
  
  if ((int *)param_1[3] != (int *)0x0) {
    uVar1 = param_1[2];
    param_1[1] = 0;
    if (-1 < (int)uVar1) {
      (**(code **)(*(int *)param_1[3] + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
    }
    *param_1 = 0;
    param_1[2] = 0x80000000;
    param_1[3] = 0;
    param_1[4] = 0xffffffff;
    param_1[5] = 0xffffffff;
  }
  return;
}

// 01024970  FUN_01024970  size=171  [run]
int __thiscall FUN_01024970(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[4] == -1) {
    iVar5 = FUN_01024880();
    param_1[4] = iVar5;
  }
  iVar5 = param_1[4];
joined_r0x01024990:
  do {
    iVar4 = iVar5;
    param_3 = param_3 + -1;
    if (param_3 < 0) {
      piVar1 = (int *)(*param_1 + 0x10 + iVar4 * 0x14);
      *piVar1 = *piVar1 + 1;
      return iVar4;
    }
    iVar2 = *(int *)(param_2 + param_3 * 4);
    iVar3 = iVar4 * 0x14;
    iVar5 = *(int *)(*param_1 + 8 + iVar3);
    while (0 < iVar5) {
      piVar1 = (int *)(*param_1 + iVar5 * 0x14);
      if (*piVar1 == iVar2) {
        if (iVar5 != -1) goto joined_r0x01024990;
        break;
      }
      iVar5 = piVar1[3];
    }
    iVar5 = FUN_01024880();
    piVar1 = (int *)(*param_1 + iVar5 * 0x14);
    *piVar1 = iVar2;
    piVar1[1] = iVar4;
    piVar1[2] = -1;
    piVar1[3] = *(int *)(iVar3 + 8 + *param_1);
    *(int *)(iVar3 + 8 + *param_1) = iVar5;
  } while( true );
}

// 01024A20  FUN_01024a20  size=73  [run]
undefined4 * __thiscall FUN_01024a20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  FUN_01025210(uVar1,0,*param_2,param_2[1]);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}

// 01024A70  FUN_01024a70  size=104  [run]
void __thiscall FUN_01024a70(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*(int *)param_1[3] + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  FUN_01025210(uVar2,0,*param_2,param_2[1]);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return;
}

// 01024AE0  FUN_01024ae0  size=68  [run]
undefined4 FUN_01024ae0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_204 [4];
  undefined1 local_200 [508];
  
  iVar1 = FUN_01024590(local_204,0x80);
  if (0 < iVar1) {
    uVar2 = FUN_01024970(local_200,iVar1 + -1);
    return uVar2;
  }
  return 0;
}

// 01024B30  thunk_FUN_01024920  size=5  [run]
void __fastcall thunk_FUN_01024920(undefined4 *param_1)

{
  uint uVar1;
  
  if ((int *)param_1[3] != (int *)0x0) {
    uVar1 = param_1[2];
    param_1[1] = 0;
    if (-1 < (int)uVar1) {
      (**(code **)(*(int *)param_1[3] + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
    }
    *param_1 = 0;
    param_1[2] = 0x80000000;
    param_1[3] = 0;
    param_1[4] = 0xffffffff;
    param_1[5] = 0xffffffff;
  }
  return;
}

// 01024B40  FUN_01024b40  size=178  [run]
void __thiscall FUN_01024b40(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar3,4);
  }
  param_2[1] = iVar1;
  if ((int)(param_3[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar3,4);
  }
  param_3[1] = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)*param_2 = 0;
    *(undefined4 *)*param_3 = 0xffffffff;
    iVar3 = 1;
    if (1 < iVar1) {
      iVar4 = 0x14;
      do {
        iVar2 = *param_1;
        *(undefined4 *)(*param_2 + iVar3 * 4) = *(undefined4 *)(iVar2 + iVar4);
        *(undefined4 *)(*param_3 + iVar3 * 4) = *(undefined4 *)(iVar2 + 4 + iVar4);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar3 < iVar1);
    }
  }
  return;
}

// 01024C00  FUN_01024c00  size=285  [run]
void __fastcall FUN_01024c00(undefined4 *param_1)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  uint uVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pHVar1 = LoadLibraryA(PTR_s_dbghelp_dll_018ead0c);
  *param_1 = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    OutputDebugStringA("Havok StackTracer: hkStackTracer: Unable to load dbghelp.dll\r\n");
  }
  pHVar1 = LoadLibraryA("kernel32.dll");
  param_1[1] = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    OutputDebugStringA("Havok StackTracer: hkStackTracer: Unable to load kernel32.dll\r\n");
  }
  if ((HMODULE)*param_1 != (HMODULE)0x0) {
    param_1[2] = 1;
    pFVar2 = GetProcAddress((HMODULE)*param_1,"SymInitialize");
    param_1[3] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)*param_1,"SymRefreshModuleList");
    param_1[4] = pFVar2;
    if (pFVar2 == (FARPROC)0x0) {
      OutputDebugStringA(
                        "Havok StackTracer: Could not load symbol SymRefreshModuleList from dbghelp.dll, version too old, but will continue without it.\r\n"
                        );
    }
    pFVar2 = GetProcAddress((HMODULE)*param_1,"SymGetOptions");
    param_1[5] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)*param_1,"SymSetOptions");
    param_1[6] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)*param_1,"SymGetSymFromAddr64");
    param_1[7] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)*param_1,"StackWalk64");
    param_1[8] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)*param_1,"SymFunctionTableAccess64");
    param_1[9] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)*param_1,"SymGetModuleBase64");
    param_1[10] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)*param_1,"SymGetLineFromAddr64");
    param_1[0xb] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)*param_1,"SymCleanup");
    param_1[0xc] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],"RtlCaptureContext");
    param_1[0xd] = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],"RtlCaptureStackBackTrace");
    param_1[0xe] = pFVar2;
    uVar3 = (*(code *)param_1[5])();
    (*(code *)param_1[6])(uVar3 | 0x80000014);
    uVar6 = 1;
    uVar5 = 0;
    pvVar4 = GetCurrentProcess();
    (*(code *)param_1[3])(pvVar4,uVar5,uVar6);
  }
  return;
}

// 01024D20  FUN_01024d20  size=79  [run]
void __fastcall FUN_01024d20(int *param_1)

{
  HANDLE pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = GetCurrentProcess();
    (*(code *)param_1[0xc])(pvVar1);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    FreeLibrary((HMODULE)param_1[1]);
    FreeLibrary((HMODULE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 01024D80  FUN_01024d80  size=18  [run]
int __thiscall FUN_01024d80(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x14;
}

// 01024DA0  FUN_01024da0  size=18  [run]
int __thiscall FUN_01024da0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x14;
}

// 01024E00  FUN_01024e00  size=24  [run]
void __thiscall
FUN_01024e00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01024E20  FUN_01024e20  size=15  [run]
int __thiscall FUN_01024e20(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01024E30  FUN_01024e30  size=21  [run]
void FUN_01024e30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 01024E50  FUN_01024e50  size=21  [run]
void FUN_01024e50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 01024E70  FUN_01024e70  size=31  [run]
int * __thiscall FUN_01024e70(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 01024E90  FUN_01024e90  size=22  [run]
void __fastcall FUN_01024e90(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01024EC0  FUN_01024ec0  size=29  [run]
void __thiscall FUN_01024ec0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x14);
  return;
}

// 01024F20  FUN_01024f20  size=52  [run]
undefined4 __thiscall FUN_01024f20(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x14);
    return uVar3;
  }
  return 0;
}

// 01024F70  FUN_01024f70  size=57  [run]
void FUN_01024f70(undefined8 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined8 *)(param_3 + (int)param_1);
      param_1[1] = *(undefined8 *)(param_3 + 8 + (int)param_1);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10 + (int)param_1);
      param_1 = (undefined8 *)((int)param_1 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01024FD0  FUN_01024fd0  size=54  [run]
int __thiscall FUN_01024fd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x14);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x14;
}

// 01025020  FUN_01025020  size=181  [run]
void __thiscall
FUN_01025020(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x14);
  }
  FUN_01019bd0(*param_1 + (param_3 + param_6) * 0x14,*param_1 + (param_3 + param_4) * 0x14,
               ((iVar1 - param_3) - param_4) * 0x14);
  puVar3 = (undefined8 *)(*param_1 + param_3 * 0x14);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      *puVar3 = *(undefined8 *)(param_5 + (int)puVar3);
      puVar3[1] = *(undefined8 *)(param_5 + 8 + (int)puVar3);
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_5 + 0x10 + (int)puVar3);
      puVar3 = (undefined8 *)((int)puVar3 + 0x14);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

// 010250E0  FUN_010250e0  size=52  [run]
undefined4 __thiscall FUN_010250e0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 01025120  FUN_01025120  size=52  [run]
undefined4 __thiscall FUN_01025120(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 01025160  FUN_01025160  size=38  [run]
void FUN_01025160(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01025190  hkStackTracer::vf00  size=52  [run]
int __thiscall hkStackTracer::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_247();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010251D0  FUN_010251d0  size=64  [run]
void __thiscall FUN_010251d0(undefined4 *param_1,int *param_2)

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

// 01025210  FUN_01025210  size=30  [run]
void FUN_01025210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01025020(param_1,param_2,0,param_3,param_4);
  return;
}

// 01025230  FUN_01025230  size=55  [run]
void __thiscall FUN_01025230(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01025270  FUN_01025270  size=55  [run]
void __thiscall FUN_01025270(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 010252B0  FUN_010252b0  size=56  [run]
void __thiscall FUN_010252b0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 010252F0  FUN_010252f0  size=56  [run]
void __thiscall FUN_010252f0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01025330  FUN_01025330  size=28  [run]
bool FUN_01025330(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01015b90(param_1,param_2);
  return iVar1 == 0;
}

// 01025350  FUN_01025350  size=46  [run]
uint FUN_01025350(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    uVar3 = (int)cVar2 + uVar3 * 0x1f;
    cVar2 = *pcVar1;
  }
  return uVar3 & 0x7fffffff;
}

// 01025380  FUN_01025380  size=8  [run]
undefined4 FUN_01025380(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01025390  FUN_01025390  size=8  [run]
undefined4 FUN_01025390(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010253C0  FUN_010253c0  size=27  [run]
void __fastcall FUN_010253c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (-1 < (int)param_1[2]) {
    piVar2 = (int *)*param_1;
    do {
      if (*piVar2 != -1) {
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 <= (int)param_1[2]);
  }
  return;
}

// 010253E0  FUN_010253e0  size=19  [run]
undefined4 __thiscall FUN_010253e0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 0xc);
}

// 01025400  FUN_01025400  size=19  [run]
undefined4 __thiscall FUN_01025400(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 8 + param_2 * 0xc);
}

// 01025420  FUN_01025420  size=22  [run]
void __thiscall FUN_01025420(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 8 + param_2 * 0xc) = param_3;
  return;
}

// 01025440  FUN_01025440  size=41  [run]
void __thiscall FUN_01025440(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 0xc);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 3;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 01025470  FUN_01025470  size=183  [run]
void __thiscall FUN_01025470(int *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  uVar4 = 0;
  cVar2 = *param_2;
  pcVar6 = param_2;
  while (cVar2 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar2 + uVar4 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  if (param_1[2] < param_1[1] * 2) {
    FUN_01025a10(param_1[2] * 2 + 2);
  }
  uVar7 = param_1[2] & uVar4;
  iVar3 = uVar7 * 0xc;
  iVar5 = *(int *)(iVar3 + *param_1);
  while (iVar5 != -1) {
    if ((*(uint *)(iVar3 + *param_1) == uVar4) &&
       (iVar5 = FUN_01015b90(param_2,*(undefined4 *)(iVar3 + 4 + *param_1)), iVar5 == 0))
    goto LAB_01025502;
    uVar7 = uVar7 + 1 & param_1[2];
    iVar3 = uVar7 * 0xc;
    iVar5 = *(int *)(iVar3 + *param_1);
  }
  param_1[1] = param_1[1] + 1;
LAB_01025502:
  iVar5 = uVar7 * 0xc;
  *(uint *)(iVar5 + *param_1) = uVar4;
  *(char **)(iVar5 + 4 + *param_1) = param_2;
  *(undefined4 *)(iVar5 + 8 + *param_1) = param_3;
  return;
}

// 01025530  FUN_01025530  size=129  [run]
uint __thiscall FUN_01025530(int *param_1,char *param_2)

{
  char *pcVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  
  uVar5 = 0;
  cVar3 = *param_2;
  pcVar7 = param_2;
  while (cVar3 != '\0') {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    uVar5 = (int)cVar3 + uVar5 * 0x1f;
    cVar3 = *pcVar1;
  }
  uVar8 = param_1[2] & uVar5 & 0x7fffffff;
  puVar2 = (uint *)(*param_1 + uVar8 * 0xc);
  uVar4 = *puVar2;
  while( true ) {
    if (uVar4 == 0xffffffff) {
      return param_1[2] + 1;
    }
    if ((uVar4 == (uVar5 & 0x7fffffff)) && (iVar6 = FUN_01015b90(param_2,puVar2[1]), iVar6 == 0))
    break;
    uVar8 = uVar8 + 1 & param_1[2];
    puVar2 = (uint *)(*param_1 + uVar8 * 0xc);
    uVar4 = *puVar2;
  }
  return uVar8;
}

// 010255C0  FUN_010255c0  size=204  [run]
void __thiscall FUN_010255c0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 0xc) = 0xffffffff;
  uVar5 = param_1[2];
  uVar3 = uVar5 + param_2 & uVar5;
  iVar1 = *(int *)(*param_1 + uVar3 * 0xc);
  while (iVar1 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar1 = *(int *)(*param_1 + uVar3 * 0xc);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_2 + 1 & uVar5;
  iVar2 = uVar3 * 0xc;
  iVar1 = *(int *)(*param_1 + iVar2);
  while (iVar1 != -1) {
    uVar5 = *(uint *)(*param_1 + iVar2) & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar3 || ((uVar5 <= param_2 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar4 <= uVar5)))) {
      iVar1 = param_2 * 0xc;
      *(uint *)(iVar1 + *param_1) = *(uint *)(*param_1 + iVar2);
      *(undefined4 *)(iVar1 + 4 + *param_1) = *(undefined4 *)(*param_1 + 4 + iVar2);
      *(undefined4 *)(iVar1 + 8 + *param_1) = *(undefined4 *)(*param_1 + 8 + iVar2);
      *(undefined4 *)(iVar2 + *param_1) = 0xffffffff;
      param_2 = uVar3;
    }
    uVar5 = param_1[2];
    uVar3 = uVar3 + 1 & uVar5;
    iVar2 = uVar3 * 0xc;
    iVar1 = *(int *)(iVar2 + *param_1);
  }
  return;
}

// 01025690  FUN_01025690  size=136  [run]
void __thiscall FUN_01025690(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  uVar3 = param_1[2];
  local_c = 0;
  if (-1 < (int)uVar3) {
    local_8 = 0;
    do {
      iVar4 = *param_1;
      if (*(int *)(iVar4 + local_8) != -1) {
        uVar1 = *(uint *)(iVar4 + local_8);
        uVar2 = *(undefined4 *)(iVar4 + 4 + local_8);
        uVar3 = uVar3 & uVar1;
        while ((*(uint *)(*param_1 + uVar3 * 0xc) != uVar1 ||
               (iVar4 = FUN_01015b90(uVar2,*(undefined4 *)(*param_1 + uVar3 * 0xc + 4)), iVar4 != 0)
               )) {
          uVar3 = uVar3 + 1 & param_1[2];
        }
      }
      uVar3 = param_1[2];
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
    } while (local_c <= (int)uVar3);
  }
  *param_2 = 1;
  return;
}

// 01025720  FUN_01025720  size=50  [run]
void __fastcall FUN_01025720(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1[2] != -1 && -1 < param_1[2] + 1) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + *param_1) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < param_1[2] + 1);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01025760  FUN_01025760  size=48  [run]
void __thiscall FUN_01025760(undefined4 *param_1,undefined4 *param_2)

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

// 01025790  FUN_01025790  size=73  [run]
void FUN_01025790(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < param_1[2]) {
    iVar2 = 0;
    iVar3 = param_1[2] + 1;
    do {
      iVar1 = *param_1;
      if (*(int *)(iVar1 + iVar2) != -1) {
        FUN_01025470(*(undefined4 *)(iVar1 + 4 + iVar2),*(undefined4 *)(iVar1 + 8 + iVar2));
      }
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 010257F0  FUN_010257f0  size=25  [run]
void __thiscall FUN_010257f0(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 4))(param_2 * 0xc);
  return;
}

// 01025810  FUN_01025810  size=29  [run]
void __thiscall FUN_01025810(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 8))(param_2,param_3 * 0xc);
  return;
}

// 01025830  FUN_01025830  size=64  [run]
undefined4 * __fastcall FUN_01025830(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xc0);
  *param_1 = uVar1;
  FUN_01015ea0(uVar1,0xff,0xc0);
  param_1[1] = 0;
  param_1[2] = 0xf;
  return param_1;
}

// 01025870  FUN_01025870  size=32  [run]
void __fastcall FUN_01025870(undefined4 *param_1)

{
  (**(code **)(PTR_vftable_018e9b94 + 8))(*param_1,(param_1[2] * 3 + 3) * 4);
  return;
}

// 01025890  FUN_01025890  size=21  [run]
void __thiscall FUN_01025890(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 010258B0  FUN_010258b0  size=70  [run]
undefined4 FUN_010258b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = param_1;
  uVar2 = FUN_01025530(param_1);
  pcVar3 = (char *)FUN_01025890((int)&param_1 + 3,uVar2);
  uVar1 = param_2;
  if (*pcVar3 != '\0') {
    uVar4 = FUN_01025400(uVar2);
    return uVar4;
  }
  FUN_01025470(uVar4,param_2);
  return uVar1;
}

// 01025900  FUN_01025900  size=67  [run]
undefined4 FUN_01025900(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_01025530(param_1);
  pcVar2 = (char *)FUN_01025890((int)&param_1 + 3,uVar1);
  if (*pcVar2 != '\0') {
    uVar1 = FUN_01025400(uVar1);
    *param_2 = uVar1;
    return 0;
  }
  return 1;
}

// 01025950  FUN_01025950  size=62  [run]
undefined4 FUN_01025950(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_01025530(param_1);
  pcVar2 = (char *)FUN_01025890((int)&param_1 + 3,uVar1);
  if (*pcVar2 != '\0') {
    FUN_010255c0(uVar1);
    return 0;
  }
  return 1;
}

// 01025990  FUN_01025990  size=114  [run]
undefined4 * __thiscall FUN_01025990(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(PTR_vftable_018e9b94 + 8))(*param_1,(param_1[2] * 3 + 3) * 4);
  iVar1 = param_2[2];
  param_1[2] = iVar1;
  param_1[1] = param_2[1];
  uVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))((iVar1 * 3 + 3) * 4);
  *param_1 = uVar2;
  FUN_01015e80(uVar2,*param_2,(param_1[2] * 3 + 3) * 4);
  return param_1;
}

// 01025A10  FUN_01025a10  size=160  [run]
void __thiscall FUN_01025a10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  iVar3 = param_1[2] + 1;
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(param_2 * 0xc);
  *param_1 = iVar2;
  FUN_01015ea0(iVar2,0xff,param_2 * 0xc);
  param_1[1] = 0;
  param_1[2] = param_2 + -1;
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(iVar1 + 4);
    param_2 = iVar3;
    do {
      if (puVar4[-1] != -1) {
        FUN_01025470(*puVar4,puVar4[1]);
      }
      puVar4 = puVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  (**(code **)(PTR_vftable_018e9b94 + 8))(iVar1,iVar3 * 0xc);
  return;
}

// 01025AB0  FUN_01025ab0  size=31  [run]
void FUN_01025ab0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01025AD0  FUN_01025ad0  size=39  [run]
void FUN_01025ad0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01025B00  FUN_01025b00  size=36  [run]
undefined4 FUN_01025b00(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01025530(param_2);
  FUN_01025890(param_1,uVar1);
  return param_1;
}

// 01025B30  FUN_01025b30  size=171  [run]
uint __thiscall FUN_01025b30(int *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01025a10(param_1[2] * 2 + 2);
  }
  uVar4 = 0;
  cVar2 = *param_2;
  pcVar6 = param_2;
  while (cVar2 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar2 + uVar4 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  uVar7 = uVar4;
  while( true ) {
    uVar7 = uVar7 & param_1[2];
    iVar3 = uVar7 * 0xc;
    if ((*(uint *)(*param_1 + iVar3) == uVar4) &&
       (iVar5 = FUN_01015b90(param_2,*(undefined4 *)(*param_1 + 4 + iVar3)), iVar5 == 0)) break;
    if (*(int *)(iVar3 + *param_1) == -1) {
      iVar3 = uVar7 * 0xc;
      *(uint *)(iVar3 + *param_1) = uVar4;
      *(char **)(iVar3 + 4 + *param_1) = param_2;
      *(undefined4 *)(iVar3 + 8 + *param_1) = param_3;
      param_1[1] = param_1[1] + 1;
      return uVar7;
    }
    uVar7 = uVar7 + 1;
  }
  return uVar7;
}

// 01025BE0  FUN_01025be0  size=29  [run]
undefined4 FUN_01025be0(undefined4 param_1,undefined4 param_2)

{
  FUN_01025900(param_1,&param_2);
  return param_2;
}

// 01025C00  FUN_01025c00  size=41  [run]
void __thiscall FUN_01025c00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  if (*(int *)(param_1 + 8) + 1 < iVar1) {
    FUN_01025a10(iVar1);
  }
  return;
}

// 01025C50  FUN_01025c50  size=3  [run]
undefined4 __fastcall FUN_01025c50(undefined4 param_1)

{
  return param_1;
}

// 01025C80  FUN_01025c80  size=50  [run]
int __thiscall FUN_01025c80(int *param_1,char param_2,int param_3,int param_4)

{
  if (param_1[1] + -1 <= param_4) {
    param_4 = param_1[1] + -1;
  }
  if (param_3 < param_4) {
    do {
      if (*(char *)(*param_1 + param_3) == param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 01025CC0  FUN_01025cc0  size=43  [run]
int __thiscall FUN_01025cc0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_01015d50(*param_1 + param_3,param_2);
  if (iVar1 != 0) {
    return iVar1 - *param_1;
  }
  return -1;
}

// 01025CF0  FUN_01025cf0  size=123  [run]
int __thiscall FUN_01025cf0(undefined4 *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int local_8;
  
  pcVar5 = (char *)*param_1;
  cVar3 = *pcVar5;
  local_8 = 0;
  do {
    if (cVar3 == '\0') {
      return -1;
    }
    iVar4 = 0;
    cVar3 = *param_2;
    while (cVar3 != '\0') {
      cVar2 = pcVar5[iVar4];
      if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        cVar2 = cVar2 + ' ';
      }
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if (cVar2 != cVar3) break;
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar3 = param_2[iVar1];
    }
    if (param_2[iVar4] == '\0') {
      return local_8;
    }
    local_8 = local_8 + 1;
    pcVar5 = pcVar5 + 1;
    cVar3 = *pcVar5;
  } while( true );
}

// 01025D80  FUN_01025d80  size=50  [run]
int __thiscall FUN_01025d80(int *param_1,char param_2,int param_3,int param_4)

{
  if (param_1[1] + -1 < param_4) {
    param_4 = param_1[1] + -1;
  }
  param_4 = param_4 + -1;
  if (param_3 <= param_4) {
    do {
      if (*(char *)(*param_1 + param_4) == param_2) {
        return param_4;
      }
      param_4 = param_4 + -1;
    } while (param_3 <= param_4);
  }
  return -1;
}

// 01025DC0  FUN_01025dc0  size=60  [run]
int __thiscall FUN_01025dc0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  for (iVar1 = FUN_01015d50(*param_1,param_2); iVar1 != 0; iVar1 = FUN_01015d50(iVar1 + 1,param_2))
  {
    iVar2 = iVar1 - *param_1;
  }
  return iVar2;
}

// 01025E00  FUN_01025e00  size=22  [run]
void __thiscall FUN_01025e00(undefined4 *param_1,undefined4 param_2)

{
  FUN_01015b90(*param_1,param_2);
  return;
}

// 01025E20  FUN_01025e20  size=22  [run]
void __thiscall FUN_01025e20(undefined4 *param_1,undefined4 param_2)

{
  FUN_01015be0(*param_1,param_2);
  return;
}

// 01025E40  FUN_01025e40  size=32  [run]
void __thiscall FUN_01025e40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01015b90(*param_1,param_3);
  *(bool *)param_2 = iVar1 < 0;
  return;
}

// 01025E60  FUN_01025e60  size=21  [run]
bool FUN_01025e60(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01025e00(param_1);
  return iVar1 == 0;
}

// 01025E80  FUN_01025e80  size=57  [run]
bool __thiscall FUN_01025e80(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)*param_1;
  iVar3 = 0;
  cVar1 = *pcVar2;
  while ((cVar1 != '\0' && (*(char *)(iVar3 + param_2) != '\0'))) {
    if (pcVar2[iVar3] != *(char *)(iVar3 + param_2)) {
      return false;
    }
    iVar3 = iVar3 + 1;
    cVar1 = pcVar2[iVar3];
  }
  return *(char *)(iVar3 + param_2) == '\0';
}

// 01025EC0  FUN_01025ec0  size=83  [run]
undefined4 __thiscall FUN_01025ec0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  cVar2 = *pcVar3;
  while( true ) {
    if ((cVar2 == '\0') || (cVar2 = *param_2, cVar2 == '\0')) {
      return 1;
    }
    cVar1 = *pcVar3;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      cVar1 = cVar1 + ' ';
    }
    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar1 != cVar2) break;
    pcVar3 = pcVar3 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar3;
  }
  return 0;
}

// 01025F20  FUN_01025f20  size=74  [run]
undefined4 __thiscall FUN_01025f20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01015cd0(param_2);
  if (param_1[1] + -1 < iVar1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(char *)(*param_1 + (param_1[1] - iVar1) + -1 + iVar2) != *(char *)(iVar2 + param_2)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}

// 01025F70  FUN_01025f70  size=119  [run]
undefined4 __thiscall FUN_01025f70(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  iVar2 = FUN_01015cd0(param_2);
  if (param_1[1] + -1 < iVar2) {
    return 0;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      cVar1 = *(char *)(*param_1 + (param_1[1] - iVar2) + -1 + iVar4);
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      cVar3 = *(char *)(iVar4 + param_2);
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if (cVar1 != cVar3) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

// 01025FF0  FUN_01025ff0  size=72  [run]
undefined4 __thiscall FUN_01025ff0(int *param_1,char param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (param_1[1] == 1 || param_1[1] + -1 < 0) {
    return 0;
  }
  do {
    if (*(char *)(*param_1 + iVar1) == param_2) {
      *(undefined1 *)(*param_1 + iVar1) = param_3;
      uVar2 = 1;
      if (param_4 == 0) {
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_1[1] + -1);
  return uVar2;
}

// 01026040  FUN_01026040  size=50  [run]
void __fastcall FUN_01026040(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1[1] != 1 && -1 < param_1[1] + -1) {
    do {
      cVar1 = *(char *)(*param_1 + iVar2);
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      *(char *)(*param_1 + iVar2) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1] + -1);
  }
  return;
}

// 01026080  FUN_01026080  size=50  [run]
void __fastcall FUN_01026080(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1[1] != 1 && -1 < param_1[1] + -1) {
    do {
      cVar1 = *(char *)(*param_1 + iVar2);
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      *(char *)(*param_1 + iVar2) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1] + -1);
  }
  return;
}

// 010260C0  FUN_010260c0  size=51  [run]
void __thiscall FUN_010260c0(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_1[1] + -1 <= param_2) {
    param_2 = param_1[1] + -1;
  }
  if (0 < param_2) {
    param_1[1] = param_1[1] - param_2;
    puVar1 = (undefined1 *)*param_1;
    iVar2 = param_1[1];
    if (0 < iVar2) {
      do {
        *puVar1 = puVar1[param_2];
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

// 01026140  FUN_01026140  size=161  [run]
int * __thiscall FUN_01026140(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if ((param_1[2] & 0x3fffffffU) == 0) {
      FUN_0100a210(&PTR_vftable_018e9b8c,param_1,1,1);
    }
    param_1[1] = 1;
    *(undefined1 *)*param_1 = 0;
    return param_1;
  }
  iVar2 = FUN_01015cd0(param_2);
  iVar1 = iVar2 + 1;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar3,1);
  }
  param_1[1] = iVar1;
  *(undefined1 *)(iVar2 + *param_1) = 0;
  FUN_01015e80(*param_1,param_2,iVar2);
  return param_1;
}

// 010261F0  FUN_010261f0  size=173  [run]
int __thiscall FUN_010261f0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_3,4);
  }
  *(int *)(*param_3 + param_3[1] * 4) = iVar1;
  param_3[1] = param_3[1] + 1;
  iVar1 = param_3[1];
  for (iVar2 = FUN_01025c80(param_2,0,0x7fffffff); -1 < iVar2;
      iVar2 = FUN_01025c80(param_2,iVar2 + 1,0x7fffffff)) {
    *(undefined1 *)(iVar2 + *param_1) = 0;
    iVar1 = *param_1;
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b8c,param_3,4);
    }
    *(int *)(*param_3 + param_3[1] * 4) = iVar1 + iVar2 + 1;
    param_3[1] = param_3[1] + 1;
    iVar1 = param_3[1];
  }
  return iVar1;
}

// 010262A0  FUN_010262a0  size=59  [run]
void __fastcall FUN_010262a0(undefined4 *param_1)

{
  if ((param_1[2] & 0x3fffffff) == 0) {
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,1,1);
  }
  param_1[1] = 1;
  *(undefined1 *)*param_1 = 0;
  return;
}

// 010262E0  FUN_010262e0  size=231  [run]
void FUN_010262e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  while( true ) {
    while( true ) {
      uVar4 = param_1[2] & 0x3fffffff;
      iVar1 = FUN_01015b40(*param_1,uVar4,param_2,&stack0x0000000c);
      if (-1 < iVar1) break;
      uVar4 = uVar4 * 2;
      if (uVar4 < 0x100) {
        uVar4 = 0xff;
      }
      iVar1 = uVar4 + 1;
      if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
        iVar2 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar2 <= iVar1) {
          iVar2 = iVar1;
        }
        FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
      }
      param_1[1] = iVar1;
      *(undefined1 *)(uVar4 + *param_1) = 0;
    }
    if (iVar1 < (int)uVar4) break;
    iVar2 = iVar1 + 1;
    if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
      iVar3 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar3,1);
    }
    param_1[1] = iVar2;
    *(undefined1 *)(iVar1 + *param_1) = 0;
  }
  iVar2 = iVar1 + 1;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar3,1);
  }
  param_1[1] = iVar2;
  *(undefined1 *)(iVar1 + *param_1) = 0;
  return;
}

// 010263D0  FUN_010263d0  size=254  [run]
void __thiscall
FUN_010263d0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 local_14;
  undefined8 local_c;
  
  iVar3 = param_2;
  local_38[2] = param_4;
  local_38[1] = param_3;
  local_38[4] = param_6;
  iVar6 = 0;
  iVar4 = param_1[1] + -1;
  local_38[3] = param_5;
  iVar5 = 0;
  local_1c = 0;
  local_14 = 0;
  local_c = 0;
  local_38[0] = param_2;
  local_24 = param_7;
  local_20 = 0;
  iVar1 = iVar4;
  while (param_2 != 0) {
    iVar2 = FUN_01015cd0(param_2);
    iVar1 = iVar1 + iVar2;
    iVar5 = iVar5 + 1;
    *(int *)((int)&local_1c + iVar6) = iVar2;
    iVar6 = iVar5 * 4;
    param_2 = local_38[iVar5];
  }
  iVar6 = iVar1 + 1;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar6) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar5,1);
  }
  param_1[1] = iVar6;
  *(undefined1 *)(iVar1 + *param_1) = 0;
  param_2 = 0;
  if (iVar3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)((int)&local_1c + iVar6);
      FUN_01015e80(*param_1 + iVar4,iVar3,iVar1);
      param_2 = param_2 + 1;
      iVar6 = param_2 * 4;
      iVar3 = local_38[param_2];
      iVar4 = iVar4 + iVar1;
    } while (iVar3 != 0);
  }
  return;
}

// 010264E0  FUN_010264e0  size=47  [run]
void FUN_010264e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_010262a0();
  FUN_010263d0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// 01026510  FUN_01026510  size=88  [run]
void __thiscall FUN_01026510(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (0 < param_2) {
    uVar2 = (param_1[1] - param_2) - 1;
    uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
    iVar1 = uVar2 + 1;
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar3 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar3,1);
    }
    param_1[1] = iVar1;
    *(undefined1 *)(uVar2 + *param_1) = 0;
  }
  return;
}

// 01026570  FUN_01026570  size=89  [run]
void __thiscall FUN_01026570(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    FUN_01019bd0(*param_1,param_2 + *param_1,param_3);
  }
  iVar1 = param_3 + 1;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
  }
  param_1[1] = iVar1;
  *(undefined1 *)(param_3 + *param_1) = 0;
  return;
}

// 010265D0  FUN_010265d0  size=101  [run]
void __thiscall FUN_010265d0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 0) {
    param_3 = FUN_01015cd0(param_2);
  }
  iVar1 = param_3 + 1;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
  }
  param_1[1] = iVar1;
  *(undefined1 *)(param_3 + *param_1) = 0;
  FUN_010199f0(*param_1,param_2,param_3);
  return;
}

// 01026640  FUN_01026640  size=121  [run]
void __thiscall FUN_01026640(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (param_3 < 0) {
      param_3 = FUN_01015cd0(param_2);
    }
    iVar3 = param_1[1] + -1;
    iVar1 = param_1[1] + param_3;
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar2 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar2 <= iVar1) {
        iVar2 = iVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
    }
    param_1[1] = iVar1;
    *(undefined1 *)(iVar3 + param_3 + *param_1) = 0;
    FUN_010199f0(*param_1 + iVar3,param_2,param_3);
  }
  return;
}

// 01026740  FUN_01026740  size=117  [run]
undefined4 * __thiscall FUN_01026740(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = param_2;
  uVar2 = param_1[2] & 0x3fffffff;
  if ((int)uVar2 < param_2[1]) {
    if (-1 < (int)param_1[2]) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,uVar2);
    }
    param_2 = (int *)piVar1[1];
    uVar3 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    *param_1 = uVar3;
    param_1[2] = param_2;
  }
  iVar6 = piVar1[1];
  puVar4 = (undefined1 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 010267C0  FUN_010267c0  size=50  [run]
int __thiscall FUN_010267c0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_01015cd0(param_2);
    FUN_01027270(&PTR_vftable_018e9b8c,*(int *)(param_1 + 4) + -1,param_2,uVar1);
  }
  return param_1;
}

// 01026800  FUN_01026800  size=54  [run]
void FUN_01026800(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    if (param_3 < 0) {
      param_3 = FUN_01015cd0(param_2);
    }
    FUN_01027270(&PTR_vftable_018e9b8c,param_1,param_2,param_3);
  }
  return;
}

// 01026840  FUN_01026840  size=136  [run]
int * __thiscall FUN_01026840(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = (int)(param_1 + 3);
  param_1[1] = 0;
  param_1[2] = -0x7fffff80;
  if (param_2 != 0) {
    iVar2 = FUN_01015cd0(param_2);
    iVar1 = iVar2 + 1;
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar3 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar3,1);
    }
    param_1[1] = iVar1;
    *(undefined1 *)(iVar2 + *param_1) = 0;
    FUN_01015e80(*param_1,param_2,iVar2);
    return param_1;
  }
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}

// 010268D0  FUN_010268d0  size=48  [run]
int * __thiscall FUN_010268d0(int *param_1,uint *param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = 0;
  param_1[2] = -0x7fffff80;
  FUN_01026140(*param_2 & 0xfffffffe);
  return param_1;
}

// 01026900  FUN_01026900  size=69  [run]
undefined4 * __thiscall
FUN_01026900(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *param_1 = param_1 + 3;
  param_1[1] = 0;
  param_1[2] = 0x80000080;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = param_1[1] + 1;
  FUN_010263d0(param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

// 01026950  FUN_01026950  size=107  [run]
int * __thiscall FUN_01026950(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 + 1;
  *param_1 = (int)(param_1 + 3);
  param_1[1] = 0;
  param_1[2] = -0x7fffff80;
  if (0x80 < iVar1) {
    iVar2 = 0x100;
    if (0xff < iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
  }
  param_1[1] = iVar1;
  *(undefined1 *)(param_3 + *param_1) = 0;
  FUN_01015e80(*param_1,param_2,param_3);
  return param_1;
}

// 010269C0  FUN_010269c0  size=105  [run]
int * __thiscall FUN_010269c0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  piVar1 = param_2;
  *param_1 = (int)(param_1 + 3);
  param_1[1] = 0;
  param_1[2] = -0x7fffff80;
  param_2 = (int *)param_2[1];
  if (0x80 < (int)param_2) {
    iVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    *param_1 = iVar2;
    param_1[2] = (int)param_2;
  }
  iVar2 = piVar1[1];
  puVar3 = (undefined1 *)*param_1;
  param_1[1] = iVar2;
  if (0 < iVar2) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = puVar3[iVar4];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}

// 01026A30  FUN_01026a30  size=22  [run]
void FUN_01026a30(undefined4 param_1,undefined4 param_2)

{
  FUN_01026800(0,param_1,param_2);
  return;
}

// 01026A50  FUN_01026a50  size=492  [run]
void __fastcall FUN_01026a50(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_b0;
  uint local_a8;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  FUN_010269c0(param_1);
  FUN_01025ff0(0x5c,0x2f,1);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x80000000;
  FUN_010261f0(0x2f,&local_20);
  iVar5 = 0;
  local_24 = 0;
  iVar3 = local_24;
  if (0 < local_1c) {
    do {
      iVar4 = FUN_01015b90(&DAT_016c50b4,*(undefined4 *)(local_20 + iVar5 * 4));
      iVar3 = iVar5;
      if (iVar4 != 0) break;
      iVar5 = iVar5 + 1;
      iVar3 = local_24;
    } while (iVar5 < local_1c);
  }
  local_24 = iVar3;
  local_10 = (undefined4 *)0x0;
  local_c = 0;
  local_14 = 0;
  local_8 = 0x80000000;
  iVar3 = local_1c;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    iVar5 = FUN_01015b90(&DAT_016c50b4,*(undefined4 *)(local_20 + iVar3 * 4));
    if (iVar5 == 0) {
      local_14 = local_14 + 1;
    }
    else if (local_14 < 1) {
      puVar1 = (undefined4 *)(local_20 + iVar3 * 4);
      if (local_c == (local_8 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b8c,&local_10,4);
      }
      local_10[local_c] = *puVar1;
      local_c = local_c + 1;
    }
    else {
      local_14 = local_14 + -1;
    }
  }
  FUN_010262a0();
  uVar2 = local_c;
  if (0 < (int)local_c) {
    while (uVar2 = uVar2 - 1, 0 < (int)uVar2) {
      FUN_010263d0(local_10[uVar2],&DAT_01701298,0,0,0,0);
    }
    FUN_01026640(*local_10,0xffffffff);
    if (0 < local_24) {
      do {
        FUN_01026a30(&DAT_01706a40,0xffffffff);
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  local_c = 0;
  if ((local_8 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
  }
  local_10 = (undefined4 *)0x0;
  local_8 = 0x80000000;
  local_1c = 0;
  if ((local_18 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,local_18 * 4);
  }
  local_20 = 0;
  local_18 = 0x80000000;
  if ((local_a8 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_b0,local_a8 & 0x3fffffff);
  }
  return;
}

// 01026C40  FUN_01026c40  size=497  [run]
undefined4 __thiscall FUN_01026c40(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_a4;
  int local_a0;
  uint local_9c;
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_01015cd0(param_2);
  iVar2 = FUN_01015cd0(param_3);
  local_8 = 0;
  if (iVar1 < iVar2) {
    FUN_010269c0(param_1);
    FUN_010262a0();
    iVar6 = 0;
    iVar3 = FUN_01025cc0(param_2,0,0x7fffffff);
    if (-1 < iVar3) {
      local_8 = 1;
      do {
        FUN_01026640(local_a4 + iVar6,iVar3 - iVar6);
        FUN_01026640(param_3,iVar2);
        iVar6 = iVar3 + iVar1;
        if (param_4 == 0) break;
        iVar3 = FUN_01025cc0(param_2,iVar6,0x7fffffff);
      } while (-1 < iVar3);
    }
    FUN_01026640(local_a4 + iVar6,(local_a0 - iVar6) + -1);
    if (-1 < (int)local_9c) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_a4,local_9c & 0x3fffffff);
      return local_8;
    }
  }
  else {
    iVar6 = *param_1;
    local_c = 0;
    iVar3 = 0;
    for (iVar4 = FUN_01025cc0(param_2,0,0x7fffffff); iVar4 != -1;
        iVar4 = FUN_01025cc0(param_2,iVar4 + iVar1,0x7fffffff)) {
      for (; local_c < iVar4; local_c = local_c + 1) {
        *(undefined1 *)(iVar3 + iVar6) = *(undefined1 *)(local_c + iVar6);
        iVar3 = iVar3 + 1;
      }
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          *(undefined1 *)(iVar3 + iVar6) = *(undefined1 *)(iVar5 + param_3);
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar5 < iVar2);
      }
      local_c = local_c + iVar1;
      if (param_4 == 0) break;
    }
    if (local_c < param_1[1] + -1) {
      do {
        *(undefined1 *)(iVar3 + iVar6) = *(undefined1 *)(local_c + iVar6);
        local_c = local_c + 1;
        iVar3 = iVar3 + 1;
      } while (local_c < param_1[1] + -1);
    }
    *(undefined1 *)(iVar3 + iVar6) = 0;
    iVar1 = iVar3 + 1;
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar2 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar2 <= iVar1) {
        iVar2 = iVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
    }
    param_1[1] = iVar1;
    *(undefined1 *)(iVar3 + *param_1) = 0;
  }
  return local_8;
}

// 01026E40  FUN_01026e40  size=393  [run]
void FUN_01026e40(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *local_90;
  int local_8c;
  uint local_88;
  undefined1 local_84 [128];
  
  local_90 = local_84;
  local_88 = 0x80000080;
  local_8c = 1;
  local_84[0] = 0;
  while( true ) {
    while( true ) {
      uVar1 = local_88 & 0x3fffffff;
      iVar2 = FUN_01015b40(local_90,uVar1,param_2,&stack0x0000000c);
      if (-1 < iVar2) break;
      uVar1 = uVar1 * 2;
      if (uVar1 < 0x100) {
        uVar1 = 0xff;
      }
      iVar2 = uVar1 + 1;
      if ((int)(local_88 & 0x3fffffff) < iVar2) {
        iVar3 = (local_88 & 0x3fffffff) * 2;
        if (iVar3 <= iVar2) {
          iVar3 = iVar2;
        }
        FUN_0100a210(&PTR_vftable_018e9b8c,&local_90,iVar3,1);
      }
      local_90[uVar1] = 0;
      local_8c = iVar2;
    }
    if (iVar2 < (int)uVar1) break;
    iVar3 = iVar2 + 1;
    if ((int)(local_88 & 0x3fffffff) < iVar3) {
      iVar4 = (local_88 & 0x3fffffff) * 2;
      if (iVar4 <= iVar3) {
        iVar4 = iVar3;
      }
      FUN_0100a210(&PTR_vftable_018e9b8c,&local_90,iVar4,1);
    }
    local_90[iVar2] = 0;
    local_8c = iVar3;
  }
  iVar3 = iVar2 + 1;
  if ((int)(local_88 & 0x3fffffff) < iVar3) {
    iVar4 = (local_88 & 0x3fffffff) * 2;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_90,iVar4,1);
  }
  local_90[iVar2] = 0;
  local_8c = iVar3;
  FUN_01026640(local_90,0xffffffff);
  local_8c = 0;
  if (-1 < (int)local_88) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
  }
  return;
}

// 01027000  FUN_01027000  size=15  [run]
int __thiscall FUN_01027000(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01027020  FUN_01027020  size=31  [run]
void FUN_01027020(undefined1 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = param_1[param_2];
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01027040  FUN_01027040  size=26  [run]
void __thiscall FUN_01027040(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01027060  FUN_01027060  size=31  [run]
void FUN_01027060(undefined1 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = param_1[param_3];
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01027080  FUN_01027080  size=31  [run]
void FUN_01027080(undefined1 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = param_1[param_2];
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 010270C0  FUN_010270c0  size=49  [run]
void __thiscall FUN_010270c0(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  param_1[1] = param_1[1] - param_3;
  iVar2 = param_1[1] - param_2;
  puVar1 = (undefined1 *)(*param_1 + param_2);
  if (0 < iVar2) {
    do {
      *puVar1 = puVar1[param_3];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 01027100  FUN_01027100  size=22  [run]
void __thiscall FUN_01027100(int *param_1,undefined1 *param_2)

{
  *(undefined1 *)(*param_1 + param_1[1]) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01027120  FUN_01027120  size=128  [run]
void __thiscall
FUN_01027120(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,1);
  }
  FUN_01019bd0(param_3 + *param_1 + param_6,param_4 + param_3 + *param_1,(iVar1 - param_3) - param_4
              );
  puVar3 = (undefined1 *)(*param_1 + param_3);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      *puVar3 = puVar3[param_5];
      puVar3 = puVar3 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

// 010271B0  FUN_010271b0  size=113  [run]
undefined4 * __thiscall FUN_010271b0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = param_3;
  uVar2 = param_1[2] & 0x3fffffff;
  if ((int)uVar2 < param_3[1]) {
    if (-1 < (int)param_1[2]) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar2);
    }
    param_3 = (int *)piVar1[1];
    uVar3 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = uVar3;
    param_1[2] = param_3;
  }
  iVar6 = piVar1[1];
  puVar4 = (undefined1 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 01027230  FUN_01027230  size=58  [run]
void __thiscall FUN_01027230(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01027270  FUN_01027270  size=30  [run]
void FUN_01027270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01027120(param_1,param_2,0,param_3,param_4);
  return;
}

// 01027290  FUN_01027290  size=61  [run]
void __thiscall FUN_01027290(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010272D0  FUN_010272d0  size=117  [run]
undefined4 * __thiscall FUN_010272d0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = param_2;
  uVar2 = param_1[2] & 0x3fffffff;
  if ((int)uVar2 < param_2[1]) {
    if (-1 < (int)param_1[2]) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,uVar2);
    }
    param_2 = (int *)piVar1[1];
    uVar3 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    *param_1 = uVar3;
    param_1[2] = param_2;
  }
  iVar6 = piVar1[1];
  puVar4 = (undefined1 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 01027350  FUN_01027350  size=29  [run]
void FUN_01027350(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01027270(&PTR_vftable_018e9b8c,param_1,param_2,param_3);
  return;
}

// 01027370  FUN_01027370  size=117  [run]
undefined4 * __thiscall FUN_01027370(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = param_2;
  uVar2 = param_1[2] & 0x3fffffff;
  if ((int)uVar2 < param_2[1]) {
    if (-1 < (int)param_1[2]) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,uVar2);
    }
    param_2 = (int *)piVar1[1];
    uVar3 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    *param_1 = uVar3;
    param_1[2] = param_2;
  }
  iVar6 = piVar1[1];
  puVar4 = (undefined1 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 010273F0  FUN_010273f0  size=61  [run]
void __fastcall FUN_010273f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01027430  FUN_01027430  size=61  [run]
void __fastcall FUN_01027430(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01027470  FUN_01027470  size=18  [run]
void __thiscall FUN_01027470(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 01027490  FUN_01027490  size=19  [run]
void __thiscall FUN_01027490(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 8) != 0;
  return;
}

// 010274B0  FUN_010274b0  size=19  [run]
void __thiscall FUN_010274b0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 0xc) != 0;
  return;
}

// 010274D0  FUN_010274d0  size=35  [run]
int FUN_010274d0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x19) {
    iVar1 = FUN_01009750();
    return iVar1;
  }
  iVar1 = FUN_01016260(param_1);
  return (int)*(short *)(iVar1 + 8);
}

// 01027500  FUN_01027500  size=44  [run]
float10 FUN_01027500(int param_1,float *param_2)

{
  if (param_1 == 0xb) {
    return (float10)*param_2;
  }
  if (param_1 != 0x20) {
    return (float10)0;
  }
  return (float10)(float)((int)*(short *)param_2 << 0x10);
}

// 01027530  FUN_01027530  size=44  [run]
void FUN_01027530(int param_1,undefined4 *param_2,undefined4 param_3)

{
  if (param_1 == 0xb) {
    *param_2 = param_3;
  }
  else if (param_1 == 0x20) {
    *(short *)param_2 = (short)((uint)param_3 >> 0x10);
    return;
  }
  return;
}

// 01027560  FUN_01027560  size=42  [run]
void FUN_01027560(int param_1,int *param_2,short param_3)

{
  if (param_1 == 0xb) {
    *param_2 = (int)param_3 << 0x10;
  }
  else if (param_1 == 0x20) {
    *(short *)param_2 = param_3;
    return;
  }
  return;
}

// 01027590  FUN_01027590  size=104  [run]
ulonglong FUN_01027590(undefined4 param_1,ulonglong *param_2)

{
  switch(param_1) {
  case 1:
  case 2:
  case 3:
    return (longlong)(int)(char)(byte)*param_2;
  case 4:
    return (longlong)(int)(uint)(byte)*param_2;
  case 5:
    return (longlong)(int)(short)(ushort)*param_2;
  case 6:
    return (longlong)(int)(uint)(ushort)*param_2;
  case 7:
    return (longlong)(int)(uint)*param_2;
  case 8:
    return (ulonglong)(uint)*param_2;
  case 9:
  case 10:
    return *param_2;
  default:
    return 0;
  case 0x1e:
    return (ulonglong)(uint)*param_2;
  }
}

// 01027640  FUN_01027640  size=49  [run]
void FUN_01027640(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((param_1 != 0x18) && (param_1 != 0x1f)) {
    FUN_01027590(param_1,param_3);
    return;
  }
  FUN_01027590(param_2,param_3);
  return;
}

// 01027680  FUN_01027680  size=146  [run]
void FUN_01027680(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)param_3;
  switch(param_1) {
  case 1:
    break;
  case 2:
  case 3:
    *(undefined1 *)param_2 = uVar1;
    return;
  case 4:
    *(undefined1 *)param_2 = uVar1;
    return;
  case 5:
    *(undefined2 *)param_2 = (undefined2)param_3;
    return;
  case 6:
    *(undefined2 *)param_2 = (undefined2)param_3;
    return;
  case 7:
    *param_2 = param_3;
    return;
  case 8:
    *param_2 = param_3;
    return;
  case 9:
  case 10:
    *param_2 = param_3;
    param_2[1] = param_4;
    return;
  default:
    return;
  case 0x1e:
    *param_2 = param_3;
    return;
  }
  if (param_3 == 0 && param_4 == 0) {
    *(undefined1 *)param_2 = 0;
    return;
  }
  *(undefined1 *)param_2 = 1;
  return;
}

// 01027760  FUN_01027760  size=65  [run]
void FUN_01027760(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if ((param_1 != 0x18) && (param_1 != 0x1f)) {
    FUN_01027680(param_1,param_3,param_4,param_5);
    return;
  }
  FUN_01027680(param_2,param_3,param_4,param_5);
  return;
}

// 010277B0  FUN_010277b0  size=40  [run]
void FUN_010277b0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  if (param_1 == 0x1d) {
    *param_2 = param_3;
  }
  else if (param_1 == 0x21) {
    FUN_01006780(param_3);
    return;
  }
  return;
}

// 010277E0  FUN_010277e0  size=73  [run]
void FUN_010277e0(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 local_5;
  
  uVar2 = FUN_01009750();
  FUN_01015ea0(param_2,0,uVar2);
  pcVar3 = (char *)FUN_01009770(&local_5);
  if (*pcVar3 != '\0') {
    uVar1 = FUN_01009750();
    *(undefined2 *)(param_2 + 4) = uVar1;
    *(undefined2 *)(param_2 + 6) = 1;
  }
  return;
}

// 01027830  FUN_01027830  size=53  [run]
void FUN_01027830(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = FUN_010093a0();
  iVar2 = (**(code **)(iVar2 + 0x1c))(uVar1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    FUN_0102cbc0(param_3,1);
  }
  return;
}

// 01027870  FUN_01027870  size=53  [run]
void FUN_01027870(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = FUN_010093a0();
  iVar2 = (**(code **)(iVar2 + 0x1c))(uVar1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    FUN_0102cbe0(param_3,1);
  }
  return;
}

// 010278B0  FUN_010278b0  size=51  [run]
void FUN_010278b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = FUN_010093a0();
  iVar2 = (**(code **)(iVar2 + 0x1c))(uVar1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    FUN_0102cc00(param_3);
  }
  return;
}

// 010278F0  FUN_010278f0  size=96  [run]
void FUN_010278f0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = FUN_010093a0();
  iVar2 = (**(code **)(iVar2 + 0x1c))(uVar1);
  if (iVar2 != 0) {
    if (0 < param_4) {
      param_1 = (int *)param_4;
      do {
        uVar1 = FUN_01009750();
        FUN_01015ea0(param_3,0,uVar1);
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_0102cbe0(param_3,1);
        }
        param_3 = param_3 + param_5;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
  }
  return;
}

// 01027950  FUN_01027950  size=70  [run]
void FUN_01027950(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = FUN_010093a0();
  iVar2 = (**(code **)(iVar2 + 0x1c))(uVar1);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) && (0 < param_4)) {
    do {
      FUN_0102cbe0(param_3,1);
      param_3 = param_3 + param_5;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// 010279A0  FUN_010279a0  size=68  [run]
void FUN_010279a0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = FUN_010093a0();
  iVar2 = (**(code **)(iVar2 + 0x1c))(uVar1);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) && (0 < param_4)) {
    do {
      FUN_0102cc00(param_3);
      param_3 = param_3 + param_5;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// 010279F0  FUN_010279f0  size=64  [run]
int FUN_010279f0(undefined4 param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 1;
  }
  switch(param_1) {
  case 0xb:
  case 0x20:
    break;
  case 0xc:
  case 0xd:
    return param_2 * 4;
  case 0xe:
  case 0xf:
  case 0x10:
    return param_2 * 0xc;
  case 0x11:
  case 0x12:
    return param_2 << 4;
  default:
    param_2 = 0;
  }
  return param_2;
}

// 01027A60  FUN_01027a60  size=190  [run]
void FUN_01027a60(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_010279f0(param_1,param_2);
  iVar6 = (int)uVar7;
  if ((param_5 < 0) || (bVar1 = param_5 <= iVar6, iVar6 = param_5, bVar1)) {
    if ((int)((ulonglong)uVar7 >> 0x20) == 0x20) {
      iVar2 = 0;
      if (0 < iVar6) {
        do {
          *(undefined2 *)(param_4 + iVar2 * 2) = *(undefined2 *)(param_3 + 2 + iVar2 * 4);
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar6);
        return;
      }
    }
    else {
      iVar2 = 0;
      if (3 < iVar6) {
        iVar5 = (iVar6 - 4U >> 2) + 1;
        iVar2 = iVar5 * 4;
        puVar3 = (undefined4 *)(param_4 + 4);
        puVar4 = (undefined4 *)(param_3 + 0xc);
        do {
          puVar3[-1] = puVar4[-3];
          iVar5 = iVar5 + -1;
          *puVar3 = *(undefined4 *)((param_3 - param_4) + -0x10 + (int)(puVar3 + 4));
          puVar3[1] = puVar4[-1];
          puVar3[2] = *puVar4;
          puVar3 = puVar3 + 4;
          puVar4 = puVar4 + 4;
        } while (iVar5 != 0);
      }
      if (iVar2 < iVar6) {
        iVar6 = iVar6 - iVar2;
        puVar3 = (undefined4 *)(param_4 + iVar2 * 4);
        do {
          iVar6 = iVar6 + -1;
          *puVar3 = *(undefined4 *)((int)puVar3 + (param_3 - param_4));
          puVar3 = puVar3 + 1;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}

// 01027B30  FUN_01027b30  size=46  [run]
void FUN_01027b30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (param_2 == 0x14) {
    *param_3 = *param_1;
  }
  else if (param_2 == 0x1c) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    return;
  }
  return;
}

// 01027B60  FUN_01027b60  size=47  [run]
void FUN_01027b60(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x14))(param_1);
  if (iVar1 != 0) {
    iVar1 = *param_3;
    uVar2 = FUN_010093a0();
    (**(code **)(iVar1 + 0x10))(uVar2);
  }
  return;
}

// 01027B90  FUN_01027b90  size=89  [run]
void FUN_01027b90(undefined4 param_1,int param_2,int *param_3,char param_4)

{
  char *pcVar1;
  undefined1 local_5;
  
  pcVar1 = (char *)FUN_01009770(&local_5);
  if (*pcVar1 == '\0') {
    *param_3 = param_2;
    return;
  }
  if (param_4 != '\0') {
    if (param_2 != 0) {
      FUN_01006000();
    }
    if (*param_3 != 0) {
      FUN_010060a0();
    }
    *param_3 = param_2;
    return;
  }
  *param_3 = param_2;
  return;
}

// 01027BF0  FUN_01027bf0  size=35  [run]
int FUN_01027bf0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0x19) {
    iVar1 = FUN_01016260(param_1);
    return (int)*(short *)(iVar1 + 8);
  }
  iVar1 = FUN_01009750();
  return iVar1;
}

// 01027C20  FUN_01027c20  size=65  [run]
int FUN_01027c20(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == 0x16) {
    iVar1 = 0xc;
  }
  else {
    if ((param_1 != 0x18) && (param_1 != 0x1f)) {
      param_2 = param_1;
    }
    iVar1 = FUN_01027bf0(param_2,param_3);
    if (0 < param_4) {
      return iVar1 * param_4;
    }
  }
  return iVar1;
}

// 01027C70  FUN_01027c70  size=214  [run]
void FUN_01027c70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == 1) {
    FUN_01015e80(param_3,param_2,param_4);
    return;
  }
  iVar1 = FUN_01016260(param_1);
  switch(*(undefined2 *)(iVar1 + 8)) {
  case 1:
    if (0 < param_4) {
      param_2 = param_2 - param_3;
      do {
        *(bool *)param_3 = *(char *)(param_2 + param_3) != '\0';
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(bool *)(iVar1 + param_3) = *(short *)(param_2 + iVar1 * 2) != 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 4:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(bool *)(iVar1 + param_3) = *(int *)(param_2 + iVar1 * 4) != 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 8:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(bool *)(iVar1 + param_3) =
             *(int *)(param_2 + iVar1 * 8) != 0 || *(int *)(param_2 + 4 + iVar1 * 8) != 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
    }
    break;
  default:
    goto switchD_01027caa_default;
  }
switchD_01027caa_default:
  return;
}

// 01027D70  FUN_01027d70  size=224  [run]
void FUN_01027d70(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  
  if (param_2 == 1) {
    FUN_01015e80(param_3,param_1,param_4);
    return;
  }
  iVar2 = FUN_01016260(param_2);
  switch(*(undefined2 *)(iVar2 + 8)) {
  case 1:
    if (0 < param_4) {
      param_1 = param_1 - param_3;
      do {
        *(bool *)param_3 = *(char *)(param_1 + param_3) != '\0';
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        pcVar1 = (char *)(iVar2 + param_1);
        iVar2 = iVar2 + 1;
        *(ushort *)(param_3 + -2 + iVar2 * 2) = (ushort)(*pcVar1 != '\0');
      } while (iVar2 < param_4);
      return;
    }
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 4:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        pcVar1 = (char *)(iVar2 + param_1);
        iVar2 = iVar2 + 1;
        *(uint *)(param_3 + -4 + iVar2 * 4) = (uint)(*pcVar1 != '\0');
      } while (iVar2 < param_4);
      return;
    }
    break;
  case 8:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        pcVar1 = (char *)(iVar2 + param_1);
        iVar2 = iVar2 + 1;
        *(uint *)(param_3 + -8 + iVar2 * 8) = (uint)(*pcVar1 != '\0');
        *(undefined4 *)(param_3 + -4 + iVar2 * 8) = 0;
      } while (iVar2 < param_4);
    }
    break;
  default:
    goto switchD_01027daa_default;
  }
switchD_01027daa_default:
  return;
}

// 01027E70  FUN_01027e70  size=319  [run]
void FUN_01027e70(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  switch(param_2) {
  case 1:
    FUN_01027c70(9,param_1,param_3,param_4);
    return;
  case 2:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(iVar1 + param_3) = *(undefined1 *)(param_1 + iVar1 * 8);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 3:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(iVar1 + param_3) = *(undefined1 *)(param_1 + iVar1 * 8);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 4:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(iVar1 + param_3) = *(undefined1 *)(param_1 + iVar1 * 8);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 5:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + iVar1 * 2) = *(undefined2 *)(param_1 + iVar1 * 8);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 6:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + iVar1 * 2) = *(undefined2 *)(param_1 + iVar1 * 8);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 7:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_3 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar1 * 8);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 8:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_3 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar1 * 8);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
    }
    break;
  case 9:
  case 10:
    FUN_01015e80(param_3,param_1,param_4 * 8);
    return;
  }
  return;
}

// 01027FE0  FUN_01027fe0  size=37  [run]
uint FUN_01027fe0(int param_1,uint *param_2)

{
  if (param_1 == 0x1d) {
    return *param_2;
  }
  if (param_1 != 0x21) {
    return 0;
  }
  return *param_2 & 0xfffffffe;
}

// 01028010  FUN_01028010  size=111  [run]
void FUN_01028010(undefined1 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(*(undefined1 *)(param_3 + 0xc)) {
  case 0x14:
  case 0x16:
  case 0x1c:
  case 0x21:
    *param_1 = 1;
    return;
  default:
    *param_1 = 0;
    return;
  case 0x19:
    break;
  }
  iVar2 = *param_2;
  FUN_01016300();
  uVar1 = FUN_010093a0();
  iVar2 = (**(code **)(iVar2 + 0x1c))(uVar1);
  if ((iVar2 != 0) && ((*(int *)(iVar2 + 0xc) != 0 || (*(int *)(iVar2 + 8) != 0)))) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}

// 010280A0  FUN_010280a0  size=165  [run]
void FUN_010280a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5,int param_6)

{
  switch(param_2) {
  case 0x14:
    if (0 < param_5) {
      do {
        *param_4 = 0;
        param_4 = (undefined4 *)((int)param_4 + param_6);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return;
    }
    break;
  case 0x19:
    FUN_010278f0(param_1,param_3,param_4,param_5,param_6);
    return;
  case 0x1c:
    if (0 < param_5) {
      do {
        param_4[1] = 0;
        *param_4 = 0;
        param_4 = (undefined4 *)((int)param_4 + param_6);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return;
    }
    break;
  case 0x21:
    if (0 < param_5) {
      do {
        if (param_4 != (undefined4 *)0x0) {
          FUN_010065a0();
        }
        param_4 = (undefined4 *)((int)param_4 + param_6);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  return;
}

// 01028170  FUN_01028170  size=11  [run]
undefined4 FUN_01028170(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 01028180  FUN_01028180  size=44  [run]
undefined4
FUN_01028180(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_010274d0(param_2,param_3);
  FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_4,uVar1);
  return *param_1;
}

