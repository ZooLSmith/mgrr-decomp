// lib/havok/Source/Common/Internal/GeometryProcessing/Triangulator/hkgpTriangulator.inl
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010BC7F0..010C4180, 99 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkgpMesh.h"

// 010BC7F0  FUN_010bc7f0  size=952  [__FILE__]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_010bc7f0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined1 local_244 [512];
  int local_44 [4];
  uint local_34;
  int local_30;
  int *local_2c;
  int *local_28;
  uint local_24;
  int *local_20;
  uint local_1c;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = param_3[1];
  local_2c = *(int **)(param_1 + 0x24);
  if (local_2c != (int *)0x0) {
    local_30 = *(int *)(param_1 + 0x28);
    piVar10 = (int *)*param_3;
    do {
      local_8 = *(int *)(piVar10[local_14 + 2] + 0xc);
      iVar8 = *(int *)(piVar10[local_14 + 2] + 8);
      for (iVar8 = (*(int *)(piVar10[(9 >> ((char)local_14 * '\x02' & 0x1fU) & 3U) + 2] + 8) - iVar8
                   ) * (param_5 - local_8) -
                   (*(int *)(piVar10[(9 >> ((char)local_14 * '\x02' & 0x1fU) & 3U) + 2] + 0xc) -
                   local_8) * (param_4 - iVar8); local_c = local_30, iVar8 < 0;
          iVar8 = (*(int *)(piVar10[(9 >> (char)local_14 * '\x02' & 3U) + 2] + 8) - iVar8) *
                  (param_5 - local_8) -
                  (*(int *)(piVar10[(9 >> (char)local_14 * '\x02' & 3U) + 2] + 0xc) - local_8) *
                  (param_4 - iVar8)) {
        puVar1 = (uint *)(piVar10 + local_14 + 5);
        piVar10 = (int *)(*puVar1 & 0xfffffffc);
        local_14 = 9 >> ((byte)*puVar1 & 3) * '\x02' & 3;
        local_8 = *(int *)(piVar10[local_14 + 2] + 0xc);
        iVar8 = *(int *)(piVar10[local_14 + 2] + 8);
      }
      for (; 0 < local_c; local_c = local_c + -1) {
        bVar6 = (char)local_14 * '\x02';
        local_28 = piVar10;
        local_1c = 0x12 >> (bVar6 & 0x1f) & 3;
        local_24 = 9 >> (bVar6 & 0x1f) & 3;
        iVar2 = *(int *)(piVar10[local_24 + 2] + 0xc);
        iVar3 = *(int *)(piVar10[local_24 + 2] + 8);
        local_44[0] = (*(int *)(piVar10[(9 >> (char)local_24 * '\x02' & 3U) + 2] + 8) - iVar3) *
                      (param_5 - iVar2) -
                      (*(int *)(piVar10[(9 >> (char)local_24 * '\x02' & 3U) + 2] + 0xc) - iVar2) *
                      (param_4 - iVar3);
        local_8 = *(int *)(piVar10[local_1c + 2] + 0xc);
        iVar2 = *(int *)(piVar10[local_1c + 2] + 8);
        local_44[1] = (*(int *)(piVar10[(9 >> (char)local_1c * '\x02' & 3U) + 2] + 8) - iVar2) *
                      (param_5 - local_8) -
                      (*(int *)(piVar10[(9 >> (char)local_1c * '\x02' & 3U) + 2] + 0xc) - local_8) *
                      (param_4 - iVar2);
        uVar9 = (uint)(local_44[1] <= local_44[0]);
        local_20 = piVar10;
        local_10 = local_44[uVar9];
        local_34 = (&local_24)[uVar9 * 2];
        if (-1 < local_10) {
          switch((-(local_44[1] != 0) & 0xfcU) + (-(local_44[0] != 0) & 0xfeU) + 6 + (iVar8 == 0) &
                 7) {
          case 0:
            *param_2 = 0;
            param_2[1] = piVar10;
            param_2[2] = local_14;
            return;
          case 1:
            *param_2 = 1;
            param_2[1] = piVar10;
            param_2[2] = local_14;
            return;
          case 2:
            param_2[2] = local_24;
            *param_2 = 1;
            param_2[1] = piVar10;
            return;
          case 3:
            param_2[2] = local_24;
            *param_2 = 2;
            param_2[1] = piVar10;
            return;
          case 4:
            *param_2 = 1;
            param_2[1] = piVar10;
            param_2[2] = local_1c;
            return;
          case 5:
            param_2[1] = piVar10;
            *param_2 = 2;
            param_2[2] = local_14;
            return;
          case 6:
            *param_2 = 2;
            param_2[1] = piVar10;
            param_2[2] = local_1c;
            return;
          }
          if ((_DAT_0209a9b8 & 1) == 0) {
            _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
            DAT_0209a9b0 = 0;
            DAT_0209a9b4 = 0;
          }
          *param_2 = 3;
          goto LAB_010bca6c;
        }
        iVar8 = -local_10;
        piVar10 = (int *)((&local_28)[uVar9 * 2][local_34 + 5] & 0xfffffffc);
        local_14 = (&local_28)[uVar9 * 2][local_34 + 5] & 3;
      }
      piVar4 = (int *)*local_2c;
      local_14 = 0;
      piVar10 = local_2c;
      local_2c = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  hkErrStream::hkErrStream(local_244,0x200);
  FUN_01018d00("Cycle detected during point location");
  iVar8 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0xb8c66b5f,local_244,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/Triangulator/hkgpTriangulator.inl"
                     ,0x34a);
  if (iVar8 != 0) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  hkBaseObject::hkBaseObject_38();
  if ((_DAT_0209a9b8 & 1) == 0) {
    _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
    DAT_0209a9b0 = 0;
    DAT_0209a9b4 = 0;
  }
  *param_2 = 4;
LAB_010bca6c:
  uVar7 = DAT_0209a9b4;
  param_2[1] = DAT_0209a9b0;
  param_2[2] = uVar7;
  return;
}

// 010BCBD0  FUN_010bcbd0  size=112  [between]
void __fastcall FUN_010bcbd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 010BCC50  FUN_010bcc50  size=534  [between]
void FUN_010bcc50(int *param_1,int *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float fVar5;
  uint *puVar6;
  undefined1 auVar7 [16];
  char cVar8;
  byte bVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_18;
  float local_14;
  
  if (param_1[6] != 0) {
    local_18 = param_2[1];
    pfVar10 = (float *)(param_1[6] * 0x30 + *param_1);
    if ((param_3[1] != 0) &&
       (auVar4._4_4_ = -(uint)((float)param_3[5] <= pfVar10[5] && pfVar10[1] <= (float)param_3[9]),
       auVar4._0_4_ = -(uint)((float)param_3[4] <= pfVar10[4] && *pfVar10 <= (float)param_3[8]),
       auVar4._8_4_ = -(uint)((float)param_3[6] <= pfVar10[6] && pfVar10[2] <= (float)param_3[10]),
       auVar4._12_4_ = -(uint)((float)param_3[7] <= pfVar10[7] && pfVar10[3] <= (float)param_3[0xb])
       , uVar13 = movmskps(param_1,auVar4), ((byte)uVar13 & 7) == 7)) {
LAB_010bccc0:
      while (pfVar10[9] != 0.0) {
        local_14 = pfVar10[10];
        iVar12 = *param_1;
        iVar14 = (int)pfVar10[9] * 0x30;
        auVar4 = *(undefined1 (*) [16])(iVar14 + iVar12);
        pfVar2 = (float *)(iVar14 + 0x10 + iVar12);
        pfVar10 = (float *)(iVar14 + iVar12);
        iVar11 = (int)local_14 * 0x30;
        pfVar1 = (float *)(iVar11 + iVar12);
        pfVar3 = (float *)(iVar11 + 0x10 + iVar12);
        iVar14 = param_3[1];
        if ((iVar14 == 0) ||
           (auVar7._4_4_ = -(uint)((float)param_3[5] <= pfVar2[1] &&
                                  auVar4._4_4_ <= (float)param_3[9]),
           auVar7._0_4_ = -(uint)((float)param_3[4] <= *pfVar2 && auVar4._0_4_ <= (float)param_3[8])
           , auVar7._8_4_ = -(uint)((float)param_3[6] <= pfVar2[2] &&
                                   auVar4._8_4_ <= (float)param_3[10]),
           auVar7._12_4_ =
                -(uint)((float)param_3[7] <= pfVar2[3] && auVar4._12_4_ <= (float)param_3[0xb]),
           uVar13 = movmskps(param_1,auVar7), ((byte)uVar13 & 7) != 7)) {
          bVar9 = 0;
        }
        else {
          bVar9 = 1;
        }
        if ((iVar14 == 0) ||
           (auVar15._0_4_ = -(uint)(*pfVar1 <= (float)param_3[8] && (float)param_3[4] <= *pfVar3),
           auVar15._4_4_ = -(uint)(pfVar1[1] <= (float)param_3[9] && (float)param_3[5] <= pfVar3[1])
           , auVar15._8_4_ =
                  -(uint)((float)param_3[6] <= pfVar3[2] && pfVar1[2] <= (float)param_3[10]),
           auVar15._12_4_ =
                -(uint)(pfVar1[3] <= (float)param_3[0xb] && (float)param_3[7] <= pfVar3[3]),
           uVar13 = movmskps(iVar14,auVar15), ((byte)uVar13 & 7) != 7)) {
          cVar8 = '\0';
        }
        else {
          cVar8 = '\x01';
        }
        pfVar1 = (float *)(iVar11 + iVar12);
        switch(-cVar8 & 2U | bVar9) {
        default:
          goto LAB_010bce36;
        case 1:
          pfVar1 = pfVar10;
        case 2:
          pfVar10 = pfVar1;
          break;
        case 3:
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
          }
          iVar12 = param_2[1];
          param_2[1] = iVar12 + 1;
          *(float *)(*param_2 + iVar12 * 4) = local_14;
        }
      }
      if (param_3[1] != 0) {
        fVar5 = pfVar10[10];
        local_50 = *(undefined8 *)(*(int *)((int)fVar5 + 8) + 0x20);
        puVar6 = (uint *)*param_3;
        local_48 = *(undefined8 *)(*(int *)((int)fVar5 + 8) + 0x28);
        local_40 = *(undefined8 *)(*(int *)((int)fVar5 + 0xc) + 0x20);
        local_38 = *(undefined8 *)(*(int *)((int)fVar5 + 0xc) + 0x28);
        local_30 = *(undefined8 *)(*(int *)((int)fVar5 + 0x10) + 0x20);
        local_28 = *(undefined8 *)(*(int *)((int)fVar5 + 0x10) + 0x28);
        iVar12 = FUN_01123230(puVar6 + 4,&local_50);
        *puVar6 = *puVar6 | (uint)(iVar12 != 0);
        if (*puVar6 == 0) {
          param_3[1] = 1;
          goto LAB_010bce36;
        }
      }
      param_3[1] = 0;
LAB_010bce36:
      iVar12 = param_2[1];
      if (local_18 < iVar12) {
        param_2[1] = iVar12 + -1;
        pfVar10 = (float *)(*(int *)(*param_2 + -4 + iVar12 * 4) * 0x30 + *param_1);
        goto LAB_010bccc0;
      }
    }
  }
  return;
}

// 010BCE80  FUN_010bce80  size=104  [between]
undefined4 * __thiscall FUN_010bce80(undefined4 *param_1,byte param_2)

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
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010BCEF0  FUN_010bcef0  size=103  [between]
undefined4 * __thiscall FUN_010bcef0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010BCF60  FUN_010bcf60  size=45  [between]
void __thiscall FUN_010bcf60(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = 0x12 >> ((byte)uVar1 & 3) * '\x02' & 3;
  return;
}

// 010BCF90  FUN_010bcf90  size=45  [between]
void __thiscall FUN_010bcf90(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = 9 >> ((byte)uVar1 & 3) * '\x02' & 3;
  return;
}

// 010BCFC0  FUN_010bcfc0  size=46  [between]
uint * __thiscall FUN_010bcfc0(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + (0x12 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = uVar1 & 3;
  return param_2;
}

// 010BCFF0  FUN_010bcff0  size=46  [between]
uint * __thiscall FUN_010bcff0(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + (9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = uVar1 & 3;
  return param_2;
}

// 010BD020  FUN_010bd020  size=46  [between]
int __fastcall FUN_010bd020(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010BD050  FUN_010bd050  size=93  [between]
int * __fastcall FUN_010bd050(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x600) == 0)) {
    iVar2 = FUN_010ac8e0();
  }
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0x600);
    *(int *)(iVar2 + 0x600) = *piVar1;
    piVar1[8] = iVar2;
    *(int *)(iVar2 + 0x60c) = *(int *)(iVar2 + 0x60c) + 1;
    piVar1[1] = 0;
    *piVar1 = param_1[1];
    if (param_1[1] != 0) {
      *(int **)(param_1[1] + 4) = piVar1;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}

// 010BD0B0  FUN_010bd0b0  size=860  [__FILE__]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_010bd0b0(int param_1,int *param_2,int *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_248 [512];
  int local_48 [4];
  uint local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  uint local_20;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *param_2 = *param_3;
  local_18 = param_3[1];
  param_2[1] = local_18;
  if (*(int *)(*param_2 + 8 + local_18 * 4) == param_4) {
    return param_2;
  }
  iVar8 = *(int *)(param_4 + 0xc);
  local_14 = *(int *)(param_4 + 8);
  local_30 = *(int **)(param_1 + 0x24);
  if (local_30 != (int *)0x0) {
    local_34 = *(int *)(param_1 + 0x28);
    piVar7 = (int *)*param_3;
    do {
      local_8 = *(int *)(piVar7[local_18 + 2] + 0xc);
      iVar9 = *(int *)(piVar7[local_18 + 2] + 8);
      for (iVar9 = (*(int *)(piVar7[(9 >> ((char)local_18 * '\x02' & 0x1fU) & 3U) + 2] + 8) - iVar9)
                   * (iVar8 - local_8) -
                   (*(int *)(piVar7[(9 >> ((char)local_18 * '\x02' & 0x1fU) & 3U) + 2] + 0xc) -
                   local_8) * (local_14 - iVar9); local_c = local_34, iVar9 < 0;
          iVar9 = (*(int *)(piVar7[(9 >> (char)local_18 * '\x02' & 3U) + 2] + 8) - iVar9) *
                  (iVar8 - local_8) -
                  (*(int *)(piVar7[(9 >> (char)local_18 * '\x02' & 3U) + 2] + 0xc) - local_8) *
                  (local_14 - iVar9)) {
        puVar1 = (uint *)(piVar7 + local_18 + 5);
        piVar7 = (int *)(*puVar1 & 0xfffffffc);
        local_18 = 9 >> ((byte)*puVar1 & 3) * '\x02' & 3;
        local_8 = *(int *)(piVar7[local_18 + 2] + 0xc);
        iVar9 = *(int *)(piVar7[local_18 + 2] + 8);
      }
      for (; 0 < local_c; local_c = local_c + -1) {
        bVar6 = (char)local_18 * '\x02';
        local_2c = piVar7;
        local_20 = 0x12 >> (bVar6 & 0x1f) & 3;
        local_28 = 9 >> (bVar6 & 0x1f) & 3;
        local_24 = piVar7;
        iVar2 = *(int *)(piVar7[local_28 + 2] + 0xc);
        iVar3 = *(int *)(piVar7[local_28 + 2] + 8);
        local_48[0] = (*(int *)(piVar7[(9 >> (char)local_28 * '\x02' & 3U) + 2] + 8) - iVar3) *
                      (iVar8 - iVar2) -
                      (*(int *)(piVar7[(9 >> (char)local_28 * '\x02' & 3U) + 2] + 0xc) - iVar2) *
                      (local_14 - iVar3);
        local_8 = *(int *)(piVar7[local_20 + 2] + 0xc);
        iVar2 = *(int *)(piVar7[local_20 + 2] + 8);
        local_48[1] = (*(int *)(piVar7[(9 >> (char)local_20 * '\x02' & 3U) + 2] + 8) - iVar2) *
                      (iVar8 - local_8) -
                      (*(int *)(piVar7[(9 >> (char)local_20 * '\x02' & 3U) + 2] + 0xc) - local_8) *
                      (local_14 - iVar2);
        uVar10 = (uint)(local_48[1] <= local_48[0]);
        local_10 = local_48[uVar10];
        local_38 = (&local_28)[uVar10 * 2];
        if (-1 < local_10) {
          switch((-(local_48[1] != 0) & 0xfcU) + (-(local_48[0] != 0) & 0xfeU) + 6 + (iVar9 == 0) &
                 7) {
          case 0:
          case 1:
          case 5:
            param_2[1] = local_18;
            *param_2 = (int)piVar7;
            return param_2;
          case 2:
          case 3:
            param_2[1] = local_28;
            *param_2 = (int)piVar7;
            return param_2;
          case 4:
          case 6:
            param_2[1] = local_20;
            *param_2 = (int)piVar7;
            return param_2;
          }
          if ((_DAT_0209a9b8 & 1) == 0) {
            _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
            DAT_0209a9b0 = 0;
            DAT_0209a9b4 = 0;
          }
          goto LAB_010bd34b;
        }
        iVar9 = -local_10;
        local_18 = (&local_2c)[uVar10 * 2][local_38 + 5] & 3;
        piVar7 = (int *)((&local_2c)[uVar10 * 2][local_38 + 5] & 0xfffffffc);
      }
      piVar4 = (int *)*local_30;
      local_18 = 0;
      piVar7 = local_30;
      local_30 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  hkErrStream::hkErrStream(local_248,0x200);
  FUN_01018d00("Cycle detected during point location");
  iVar8 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0xb8c66b5f,local_248,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/Triangulator/hkgpTriangulator.inl"
                     ,0x34a);
  if (iVar8 != 0) {
    pcVar5 = (code *)swi(3);
    piVar7 = (int *)(*pcVar5)();
    return piVar7;
  }
  hkBaseObject::hkBaseObject_38();
  if ((_DAT_0209a9b8 & 1) == 0) {
    _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
    DAT_0209a9b0 = 0;
    DAT_0209a9b4 = 0;
  }
LAB_010bd34b:
  iVar8 = DAT_0209a9b0;
  param_2[1] = DAT_0209a9b4;
  *param_2 = iVar8;
  return param_2;
}

// 010BD430  FUN_010bd430  size=79  [between]
void FUN_010bd430(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  piVar2 = *(int **)*in_stack_00000014;
  if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar2,8);
  }
  puVar1 = (undefined4 *)(*piVar2 + piVar2[1] * 8);
  piVar2[1] = piVar2[1] + 1;
  *puVar1 = *(undefined4 *)(*(int *)(in_stack_00000018 + 0x20) + 0x28);
  puVar1[1] = *(undefined4 *)(*(int *)(in_stack_0000001c + 0x20) + 0x28);
  return;
}

// 010BD480  FUN_010bd480  size=150  [between]
void FUN_010bd480(int param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar3 = maxps(*param_2,auVar1);
  auVar3 = minps(param_2[1],auVar3);
  fVar2 = auVar1._0_4_ - auVar3._0_4_;
  fVar4 = auVar1._4_4_ - auVar3._4_4_;
  fVar5 = auVar1._8_4_ - auVar3._8_4_;
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
  auVar3 = maxps(param_2[3],auVar1);
  auVar3 = minps(param_2[4],auVar3);
  fVar2 = auVar1._0_4_ - auVar3._0_4_;
  fVar4 = auVar1._4_4_ - auVar3._4_4_;
  fVar5 = auVar1._8_4_ - auVar3._8_4_;
  fVar2 = fVar4 * fVar4 + fVar2 * fVar2 + fVar5 * fVar5;
  if (((*(float *)(param_1 + 0x20) <= fVar2 && fVar2 != *(float *)(param_1 + 0x20)) - 1U & 2 |
      (fVar6 < *(float *)(param_1 + 0x20) || fVar6 == *(float *)(param_1 + 0x20))) == 3) {
    *(uint *)(param_1 + 0x30) = (uint)(fVar2 < fVar6);
  }
  return;
}

// 010BD5B0  FUN_010bd5b0  size=134  [between]
int * __thiscall FUN_010bd5b0(int *param_1,int *param_2)

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

// 010BD640  FUN_010bd640  size=264  [between]
uint * FUN_010bd640(uint *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_c [8];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar3 = (uint *)FUN_010bd0b0(local_c,param_1,param_3);
  uVar5 = *puVar3;
  *param_1 = uVar5;
  uVar4 = puVar3[1];
  param_1[1] = uVar4;
  if (*(int *)(uVar5 + 8 + (9 >> ((char)uVar4 * '\x02' & 0x1fU) & 3U) * 4) != param_4) {
    iVar1 = *(int *)(uVar5 + 8 + uVar4 * 4);
    iVar2 = *(int *)(iVar1 + 8);
    if ((((iVar2 == 0) || (iVar2 == 0x7fff)) || (iVar1 = *(int *)(iVar1 + 0xc), iVar1 == 0)) ||
       (iVar1 == 0x7fff)) {
      uVar5 = *(uint *)(uVar5 + 0x14 + uVar4 * 4);
      while ((uVar5 & 0xfffffffc) != 0) {
        uVar5 = *(uint *)(*param_1 + 0x14 + uVar4 * 4);
        uVar6 = uVar5 & 0xfffffffc;
        *param_1 = uVar6;
        uVar4 = 9 >> ((byte)uVar5 & 3) * '\x02' & 3;
        param_1[1] = uVar4;
        uVar5 = *(uint *)(uVar6 + 0x14 + uVar4 * 4);
      }
    }
    uVar5 = param_1[1];
    iVar1 = *(int *)(*param_1 + 8 + (9 >> ((char)uVar5 * '\x02' & 0x1fU) & 3U) * 4);
    while (iVar1 != param_4) {
      uVar5 = 0x12 >> ((char)uVar5 * '\x02' & 0x1fU) & 3;
      param_1[1] = uVar5;
      uVar4 = *(uint *)(*param_1 + 0x14 + uVar5 * 4);
      uVar5 = uVar4 & 3;
      *param_1 = uVar4 & 0xfffffffc;
      param_1[1] = uVar5;
      iVar1 = *(int *)(*param_1 + 8 + (9 >> (char)uVar5 * '\x02' & 3U) * 4);
    }
  }
  return param_1;
}

// 010BD750  FUN_010bd750  size=93  [between]
int * __fastcall FUN_010bd750(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x800) == 0)) {
    iVar2 = FUN_010acad0();
  }
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0x800);
    *(int *)(iVar2 + 0x800) = *piVar1;
    piVar1[0xc] = iVar2;
    *(int *)(iVar2 + 0x80c) = *(int *)(iVar2 + 0x80c) + 1;
    piVar1[1] = 0;
    *piVar1 = param_1[1];
    if (param_1[1] != 0) {
      *(int **)(param_1[1] + 4) = piVar1;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}

// 010BD940  FUN_010bd940  size=94  [between]
void FUN_010bd940(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[1] != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    piVar2 = (int *)*param_1;
    if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
    }
    *(undefined4 *)(*piVar2 + piVar2[1] * 4) = *(undefined4 *)(iVar1 + 0x28);
    piVar2[1] = piVar2[1] + 1;
    param_1[1] = 1;
    return;
  }
  param_1[1] = 0;
  return;
}

// 010BD9A0  FUN_010bd9a0  size=125  [between]
int __thiscall FUN_010bd9a0(int *param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  param_1[3] = param_1[3] + 1;
  piVar1 = (int *)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
  if (piVar1[1] == (*(uint *)(*param_1 + 8 + (param_2 % (uint)param_1[1]) * 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x10);
  }
  puVar3 = (undefined4 *)(piVar1[1] * 0x10 + *piVar1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  iVar2 = piVar1[1];
  piVar1[1] = iVar2 + 1;
  puVar4 = (undefined8 *)(iVar2 * 0x10 + *piVar1);
  *puVar4 = *param_3;
  puVar4[1] = param_3[1];
  return *piVar1 + -0x10 + piVar1[1] * 0x10;
}

// 010BDA20  FUN_010bda20  size=100  [between]
undefined4 * __thiscall FUN_010bda20(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010BDA90  FUN_010bda90  size=100  [between]
undefined4 * __thiscall FUN_010bda90(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010BDB20  FUN_010bdb20  size=63  [between]
void __fastcall FUN_010bdb20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010BDB60  FUN_010bdb60  size=53  [between]
int __thiscall FUN_010bdb60(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_010bb250();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return param_1;
}

// 010BDBA0  FUN_010bdba0  size=17  [between]
int * __fastcall FUN_010bdba0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010bc1e0();
  }
  return param_1;
}

// 010BDBC0  FUN_010bdbc0  size=61  [between]
void __fastcall FUN_010bdbc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010BDC00  FUN_010bdc00  size=132  [between]
int * __thiscall FUN_010bdc00(int *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_2 != 0) {
    iVar3 = 0;
    iVar2 = *(int *)(param_2 + 8 + (9 >> ((char)param_3 * '\x02' & 0x1fU) & 3U) * 4);
    pfVar4 = (float *)(iVar2 + 0x20);
    do {
      fVar1 = *(float *)((*(int *)(param_2 + 8 + param_3 * 4) - iVar2) + (int)pfVar4);
      if (fVar1 < *pfVar4) {
        return param_1;
      }
      if (*pfVar4 < fVar1) {
        if ((*(uint *)(param_2 + 0x14 + param_3 * 4) & 0xfffffffc) == 0) {
          return param_1;
        }
        FUN_010bc1e0();
        return param_1;
      }
      iVar3 = iVar3 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar3 < 3);
  }
  return param_1;
}

// 010BDC90  hkBaseObject::hkBaseObject  size=51  [between]
void __fastcall hkBaseObject::hkBaseObject(undefined4 *param_1)

{
  *param_1 = hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>::Edge,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Vertex,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Triangle,hkContainerHeapAllocator>
             ::vftable;
  FUN_010b7a50();
  FUN_010b3280();
  FUN_010b79e0();
  FUN_010b3210();
  *param_1 = vftable;
  return;
}

// 010BDCD0  FUN_010bdcd0  size=38  [between]
void FUN_010bdcd0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010BDD00  hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>::Edge,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Vertex,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Triangle,hkContainerHeapAllocator>::vf0C  size=20  [between]
void hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>::Edge,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Vertex,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Triangle,hkContainerHeapAllocator>
     ::vf0C(void)

{
  FUN_010b79e0();
  FUN_010b7a50();
  return;
}

// 010BDD20  FUN_010bdd20  size=15  [between]
void FUN_010bdd20(void)

{
  FUN_010bc5b0();
  return;
}

// 010BDD30  FUN_010bdd30  size=53  [between]
int __thiscall FUN_010bdd30(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x40);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x40 + *param_1;
}

// 010BDD70  FUN_010bdd70  size=199  [between]
void __thiscall FUN_010bdd70(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= param_3) {
      iVar3 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar3,0xc);
  }
  iVar3 = (param_1[1] - param_3) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*param_1 + param_3 * 0xc + 8 + iVar3 * 0xc);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 8);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_3 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 010BDE40  hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>::Edge,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Vertex,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Triangle,hkContainerHeapAllocator>::vf00  size=93  [between]
undefined4 * __thiscall
hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>::Edge,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Vertex,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Triangle,hkContainerHeapAllocator>
::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  FUN_010b7a50();
  FUN_010b3280();
  FUN_010b79e0();
  FUN_010b3210();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010BDED0  FUN_010bded0  size=104  [between]
void __thiscall FUN_010bded0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  iVar3 = *(int *)(uVar2 + 8 + uVar1 * 4);
  iVar4 = *(int *)(iVar3 + 8);
  iVar5 = *(int *)(uVar2 + 8 + (9 >> ((char)uVar1 * '\x02' & 0x1fU) & 3U) * 4);
  iVar6 = *(int *)(iVar5 + 8);
  if ((iVar6 <= iVar4) &&
     (((iVar6 < iVar4 || (*(int *)(iVar5 + 0xc) < *(int *)(iVar3 + 0xc))) &&
      (uVar7 = *(uint *)(uVar2 + 0x14 + uVar1 * 4), (uVar7 & 0xfffffffc) != 0)))) {
    *param_2 = uVar7 & 0xfffffffc;
    param_2[1] = uVar7 & 3;
    return;
  }
  *param_2 = uVar2;
  param_2[1] = uVar1;
  return;
}

// 010BDF40  FUN_010bdf40  size=979  [__FILE__]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_010bdf40(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  sbyte sVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined1 local_248 [512];
  int local_48 [3];
  int *local_3c;
  int local_34;
  int *local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  uint local_20;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar9 = *(int **)(param_1 + 0x244 + ((param_4 >> 0xb) * 0x10 + (param_3 >> 0xb)) * 4);
  if (piVar9 == (int *)0x0) {
    piVar9 = *(int **)(param_1 + 0x24);
  }
  local_30 = *(int **)(param_1 + 0x24);
  if (local_30 != (int *)0x0) {
    local_34 = *(int *)(param_1 + 0x28);
    do {
      local_18 = 0;
      iVar7 = *(int *)(piVar9[2] + 0xc);
      iVar2 = *(int *)(piVar9[2] + 8);
      local_c = (*(int *)(piVar9[3] + 8) - iVar2) * (param_4 - iVar7) -
                (*(int *)(piVar9[3] + 0xc) - iVar7) * (param_3 - iVar2);
      while (local_10 = local_34, local_c < 0) {
        puVar1 = (uint *)(piVar9 + local_18 + 5);
        piVar9 = (int *)(*puVar1 & 0xfffffffc);
        local_18 = 9 >> ((byte)*puVar1 & 3) * '\x02' & 3;
        iVar7 = *(int *)(piVar9[local_18 + 2] + 0xc);
        local_8 = *(int *)(piVar9[local_18 + 2] + 8);
        local_c = (*(int *)(piVar9[(9 >> (char)local_18 * '\x02' & 3U) + 2] + 8) - local_8) *
                  (param_4 - iVar7) -
                  (*(int *)(piVar9[(9 >> (char)local_18 * '\x02' & 3U) + 2] + 0xc) - iVar7) *
                  (param_3 - local_8);
      }
      for (; 0 < local_10; local_10 = local_10 + -1) {
        sVar5 = (char)local_18 * '\x02';
        local_2c = piVar9;
        local_20 = 0x12 >> sVar5 & 3;
        local_28 = 9 >> sVar5 & 3;
        iVar7 = *(int *)(piVar9[local_28 + 2] + 0xc);
        iVar2 = *(int *)(piVar9[local_28 + 2] + 8);
        local_48[0] = (*(int *)(piVar9[(9 >> (char)local_28 * '\x02' & 3U) + 2] + 8) - iVar2) *
                      (param_4 - iVar7) -
                      (*(int *)(piVar9[(9 >> (char)local_28 * '\x02' & 3U) + 2] + 0xc) - iVar7) *
                      (param_3 - iVar2);
        local_8 = *(int *)(piVar9[local_20 + 2] + 0xc);
        iVar7 = *(int *)(piVar9[local_20 + 2] + 8);
        local_48[1] = (*(int *)(piVar9[(9 >> (char)local_20 * '\x02' & 3U) + 2] + 8) - iVar7) *
                      (param_4 - local_8) -
                      (*(int *)(piVar9[(9 >> (char)local_20 * '\x02' & 3U) + 2] + 0xc) - local_8) *
                      (param_3 - iVar7);
        uVar8 = (uint)(local_48[1] <= local_48[0]);
        local_24 = piVar9;
        local_14 = local_48[uVar8];
        local_3c = (&local_2c)[uVar8 * 2];
        if (-1 < local_14) {
          switch((-(local_48[1] != 0) & 0xfcU) + (-(local_48[0] != 0) & 0xfeU) + 6 + (local_c == 0)
                 & 7) {
          case 0:
            *param_2 = 0;
            param_2[1] = piVar9;
            param_2[2] = local_18;
            return;
          case 1:
            *param_2 = 1;
            param_2[1] = piVar9;
            param_2[2] = local_18;
            return;
          case 2:
            param_2[2] = local_28;
            *param_2 = 1;
            param_2[1] = piVar9;
            return;
          case 3:
            param_2[2] = local_28;
            *param_2 = 2;
            param_2[1] = piVar9;
            return;
          case 4:
            *param_2 = 1;
            param_2[1] = piVar9;
            param_2[2] = local_20;
            return;
          case 5:
            param_2[1] = piVar9;
            *param_2 = 2;
            param_2[2] = local_18;
            return;
          case 6:
            *param_2 = 2;
            param_2[1] = piVar9;
            param_2[2] = local_20;
            return;
          }
          if ((_DAT_0209a9b8 & 1) == 0) {
            _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
            DAT_0209a9b0 = 0;
            DAT_0209a9b4 = 0;
          }
          *param_2 = 3;
          goto LAB_010be1e3;
        }
        piVar9 = (int *)(local_3c[(&local_28)[uVar8 * 2] + 5] & 0xfffffffc);
        local_c = -local_14;
        local_18 = local_3c[(&local_28)[uVar8 * 2] + 5] & 3;
      }
      piVar3 = (int *)*local_30;
      piVar9 = local_30;
      local_30 = piVar3;
    } while (piVar3 != (int *)0x0);
  }
  local_18 = 0;
  hkErrStream::hkErrStream(local_248,0x200);
  FUN_01018d00("Cycle detected during point location");
  iVar7 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0xb8c66b5f,local_248,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/Triangulator/hkgpTriangulator.inl"
                     ,0x34a);
  if (iVar7 != 0) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  hkBaseObject::hkBaseObject_38();
  if ((_DAT_0209a9b8 & 1) == 0) {
    _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
    DAT_0209a9b0 = 0;
    DAT_0209a9b4 = 0;
  }
  *param_2 = 4;
LAB_010be1e3:
  uVar6 = DAT_0209a9b4;
  param_2[1] = DAT_0209a9b0;
  param_2[2] = uVar6;
  return;
}

// 010BE340  FUN_010be340  size=149  [between]
void __thiscall FUN_010be340(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010BE450  FUN_010be450  size=118  [between]
int * __thiscall FUN_010be450(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  if ((int)param_2 < 0x41) {
    param_2 = 0x40;
  }
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 8 + 0x7f & 0xffffff80;
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

// 010BE4D0  FUN_010be4d0  size=145  [between]
void __fastcall FUN_010be4d0(int *param_1)

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
  uVar4 = iVar2 * 8 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010BE570  FUN_010be570  size=56  [between]
void FUN_010be570(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_010bd050();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    *(uint *)(iVar1 + 0x10) = param_3 & 1 | 0xfffffffc;
  }
  return;
}

// 010BE5B0  FUN_010be5b0  size=1524  [between]
void FUN_010be5b0(char param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 float *param_6,float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined4 uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined4 uVar33;
  int iVar34;
  float *pfVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float local_6c;
  float *local_40;
  float local_3c;
  float local_18;
  float local_14;
  
  local_6c = (float)param_3[6];
  local_3c = (float)param_2[6];
  if (local_6c != 0.0 && local_3c != 0.0) {
    iVar4 = param_4[1];
    if (param_6 == (float *)0x0) {
      local_40 = (float *)((int)local_3c * 0x30 + *param_2);
      fVar36 = *local_40;
      fVar37 = local_40[1];
      fVar38 = local_40[2];
      fVar39 = local_40[3];
      fVar44 = local_40[4];
      fVar45 = local_40[5];
      fVar46 = local_40[6];
      fVar47 = local_40[7];
    }
    else {
      local_40 = (float *)param_6[8];
      fVar36 = *param_6;
      fVar37 = param_6[1];
      fVar38 = param_6[2];
      fVar39 = param_6[3];
      fVar44 = param_6[4];
      fVar45 = param_6[5];
      fVar46 = param_6[6];
      fVar47 = param_6[7];
      local_3c = param_6[9];
    }
    if (param_7 == (float *)0x0) {
      pfVar35 = (float *)((int)local_6c * 0x30 + *param_3);
      fVar40 = *pfVar35;
      fVar41 = pfVar35[1];
      fVar42 = pfVar35[2];
      fVar43 = pfVar35[3];
      fVar48 = pfVar35[4];
      fVar49 = pfVar35[5];
      fVar50 = pfVar35[6];
      fVar51 = pfVar35[7];
    }
    else {
      fVar40 = *param_7;
      fVar41 = param_7[1];
      fVar42 = param_7[2];
      fVar43 = param_7[3];
      fVar48 = param_7[4];
      fVar49 = param_7[5];
      fVar50 = param_7[6];
      fVar51 = param_7[7];
      pfVar35 = (float *)param_7[8];
      local_6c = param_7[9];
    }
    local_18 = local_3c;
    local_14 = local_6c;
    if (param_1 != '\0') goto LAB_010be69a;
    auVar8._4_4_ = -(uint)(fVar41 <= fVar45 && fVar37 <= fVar49);
    auVar8._0_4_ = -(uint)(fVar40 <= fVar44 && fVar36 <= fVar48);
    auVar8._8_4_ = -(uint)(fVar42 <= fVar46 && fVar38 <= fVar50);
    auVar8._12_4_ = -(uint)(fVar43 <= fVar47 && fVar39 <= fVar51);
    uVar27 = movmskps(local_6c,auVar8);
    if (((byte)uVar27 & 7) == 7) {
LAB_010be690:
      while (param_1 != '\0') {
LAB_010be69a:
        if (local_40 != pfVar35) break;
        local_18 = local_40[9];
        if (local_18 == 0.0) goto LAB_010beb4f;
        fVar5 = local_40[10];
        iVar28 = *param_2;
        pfVar35 = (float *)(iVar28 + (int)fVar5 * 0x30);
        fVar40 = *pfVar35;
        fVar41 = pfVar35[1];
        fVar42 = pfVar35[2];
        fVar43 = pfVar35[3];
        pfVar35 = (float *)(iVar28 + 0x10 + (int)fVar5 * 0x30);
        fVar48 = *pfVar35;
        fVar49 = pfVar35[1];
        fVar50 = pfVar35[2];
        fVar51 = pfVar35[3];
        iVar34 = (int)local_18 * 0x30;
        pfVar35 = (float *)(iVar34 + iVar28);
        fVar36 = *pfVar35;
        fVar37 = pfVar35[1];
        fVar38 = pfVar35[2];
        fVar39 = pfVar35[3];
        pfVar35 = (float *)(iVar34 + 0x10 + iVar28);
        fVar44 = *pfVar35;
        fVar45 = pfVar35[1];
        fVar46 = pfVar35[2];
        fVar47 = pfVar35[3];
        pfVar35 = (float *)(iVar34 + iVar28);
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
        }
        pfVar1 = (float *)(*param_4 + param_4[1] * 8);
        iVar28 = param_4[1] + 1;
        param_4[1] = iVar28;
        auVar10._4_4_ = -(uint)(fVar37 <= fVar49 && fVar41 <= fVar45);
        auVar10._0_4_ = -(uint)(fVar36 <= fVar48 && fVar40 <= fVar44);
        auVar10._8_4_ = -(uint)(fVar38 <= fVar50 && fVar42 <= fVar46);
        auVar10._12_4_ = -(uint)(fVar39 <= fVar51 && fVar43 <= fVar47);
        uVar27 = movmskps(iVar28,auVar10);
        *pfVar1 = fVar5;
        pfVar1[1] = fVar5;
        fVar40 = fVar36;
        fVar41 = fVar37;
        fVar42 = fVar38;
        fVar43 = fVar39;
        fVar48 = fVar44;
        fVar49 = fVar45;
        fVar50 = fVar46;
        fVar51 = fVar47;
        local_40 = pfVar35;
        local_14 = local_18;
        if (((byte)uVar27 & 7) == 7) {
          if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
          }
          pfVar1 = (float *)(*param_4 + param_4[1] * 8);
          param_4[1] = param_4[1] + 1;
          *pfVar1 = local_18;
          pfVar1[1] = fVar5;
        }
      }
      fVar5 = local_40[9];
      if (fVar5 == 0.0) {
        fVar40 = pfVar35[9];
        if (fVar40 == 0.0) {
          piVar6 = *(int **)*param_5;
          if (piVar6[1] == (piVar6[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar6,8);
          }
          pfVar1 = (float *)(*piVar6 + piVar6[1] * 8);
          piVar6[1] = piVar6[1] + 1;
          *pfVar1 = local_40[10];
          pfVar1[1] = pfVar35[10];
        }
        else {
          iVar28 = *param_3;
          fVar41 = pfVar35[10];
          pfVar35 = (float *)(iVar28 + (int)fVar40 * 0x30);
          pfVar2 = (float *)(iVar28 + 0x10 + (int)fVar40 * 0x30);
          pfVar1 = (float *)(iVar28 + (int)fVar41 * 0x30);
          pfVar3 = (float *)(iVar28 + 0x10 + (int)fVar41 * 0x30);
          auVar15._4_4_ = -(uint)(fVar37 <= pfVar2[1] && pfVar35[1] <= fVar45);
          auVar15._0_4_ = -(uint)(fVar36 <= *pfVar2 && *pfVar35 <= fVar44);
          auVar15._8_4_ = -(uint)(fVar38 <= pfVar2[2] && pfVar35[2] <= fVar46);
          auVar15._12_4_ = -(uint)(fVar39 <= pfVar2[3] && pfVar35[3] <= fVar47);
          uVar30 = movmskps(iVar28,auVar15);
          auVar9._4_4_ = -(uint)(pfVar1[1] <= fVar45 && fVar37 <= pfVar3[1]);
          auVar9._0_4_ = -(uint)(*pfVar1 <= fVar44 && fVar36 <= *pfVar3);
          auVar9._8_4_ = -(uint)(pfVar1[2] <= fVar46 && fVar38 <= pfVar3[2]);
          auVar9._12_4_ = -(uint)(pfVar1[3] <= fVar47 && fVar39 <= pfVar3[3]);
          uVar27 = movmskps(uVar30 & 7,auVar9);
          if (((byte)uVar27 & 7) == 7) {
            if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
            }
            pfVar35 = (float *)(*param_4 + param_4[1] * 8);
            param_4[1] = param_4[1] + 1;
            *pfVar35 = local_18;
            pfVar35[1] = fVar41;
          }
          if ((char)(uVar30 & 7) == '\a') {
            if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
            }
            pfVar35 = (float *)(*param_4 + param_4[1] * 8);
            param_4[1] = param_4[1] + 1;
            *pfVar35 = local_18;
            pfVar35[1] = fVar40;
          }
        }
      }
      else {
        iVar28 = *param_2;
        fVar36 = local_40[10];
        pfVar1 = (float *)(iVar28 + (int)fVar5 * 0x30);
        fVar38 = *pfVar1;
        fVar39 = pfVar1[1];
        fVar44 = pfVar1[2];
        fVar45 = pfVar1[3];
        pfVar1 = (float *)(iVar28 + 0x10 + (int)fVar5 * 0x30);
        fVar46 = *pfVar1;
        fVar47 = pfVar1[1];
        fVar17 = pfVar1[2];
        fVar18 = pfVar1[3];
        pfVar1 = (float *)(iVar28 + (int)fVar36 * 0x30);
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar22 = pfVar1[3];
        pfVar1 = (float *)(iVar28 + 0x10 + (int)fVar36 * 0x30);
        fVar23 = *pfVar1;
        fVar24 = pfVar1[1];
        fVar25 = pfVar1[2];
        fVar26 = pfVar1[3];
        fVar37 = pfVar35[9];
        if (fVar37 == 0.0) {
          auVar12._4_4_ = -(uint)(fVar41 <= fVar47 && fVar39 <= fVar49);
          auVar12._0_4_ = -(uint)(fVar40 <= fVar46 && fVar38 <= fVar48);
          auVar12._8_4_ = -(uint)(fVar42 <= fVar17 && fVar44 <= fVar50);
          auVar12._12_4_ = -(uint)(fVar43 <= fVar18 && fVar45 <= fVar51);
          uVar30 = movmskps(0,auVar12);
          auVar11._4_4_ = -(uint)(fVar41 <= fVar24 && fVar20 <= fVar49);
          auVar11._0_4_ = -(uint)(fVar40 <= fVar23 && fVar19 <= fVar48);
          auVar11._8_4_ = -(uint)(fVar42 <= fVar25 && fVar21 <= fVar50);
          auVar11._12_4_ = -(uint)(fVar43 <= fVar26 && fVar22 <= fVar51);
          uVar27 = movmskps(uVar30 & 7,auVar11);
          if (((byte)uVar27 & 7) == 7) {
            if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
            }
            pfVar35 = (float *)(*param_4 + param_4[1] * 8);
            param_4[1] = param_4[1] + 1;
            *pfVar35 = fVar36;
            pfVar35[1] = local_14;
          }
          if ((char)(uVar30 & 7) == '\a') {
            if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
            }
            pfVar35 = (float *)(*param_4 + param_4[1] * 8);
            param_4[1] = param_4[1] + 1;
            *pfVar35 = fVar5;
            pfVar35[1] = local_14;
          }
        }
        else {
          iVar34 = *param_3;
          fVar40 = pfVar35[10];
          iVar29 = (int)fVar37 * 0x30;
          pfVar2 = (float *)(iVar29 + 0x10 + iVar34);
          pfVar35 = (float *)(iVar29 + iVar34);
          iVar29 = iVar29 + iVar34;
          pfVar1 = (float *)((int)fVar40 * 0x30 + iVar34);
          iVar34 = (int)fVar40 * 0x30 + iVar34;
          auVar16._4_4_ = -(uint)(fVar39 <= pfVar2[1] && pfVar35[1] <= fVar47);
          auVar16._0_4_ = -(uint)(fVar38 <= *pfVar2 && *pfVar35 <= fVar46);
          auVar16._8_4_ = -(uint)(fVar44 <= pfVar2[2] && pfVar35[2] <= fVar17);
          auVar16._12_4_ = -(uint)(fVar45 <= pfVar2[3] && pfVar35[3] <= fVar18);
          uVar31 = movmskps(iVar28,auVar16);
          auVar13._4_4_ = -(uint)(pfVar1[1] <= fVar47 && fVar39 <= *(float *)(iVar34 + 0x14));
          auVar13._0_4_ = -(uint)(*pfVar1 <= fVar46 && fVar38 <= *(float *)(iVar34 + 0x10));
          auVar13._8_4_ = -(uint)(pfVar1[2] <= fVar17 && fVar44 <= *(float *)(iVar34 + 0x18));
          auVar13._12_4_ = -(uint)(pfVar1[3] <= fVar18 && fVar45 <= *(float *)(iVar34 + 0x1c));
          uVar32 = movmskps(uVar31 & 7,auVar13);
          uVar30 = (uint)((char)(uVar32 & 7) == '\a');
          auVar14._4_4_ = -(uint)(fVar20 <= *(float *)(iVar29 + 0x14) && pfVar35[1] <= fVar24);
          auVar14._0_4_ = -(uint)(fVar19 <= *(float *)(iVar29 + 0x10) && *pfVar35 <= fVar23);
          auVar14._8_4_ = -(uint)(fVar21 <= *(float *)(iVar29 + 0x18) && pfVar35[2] <= fVar25);
          auVar14._12_4_ = -(uint)(fVar22 <= *(float *)(iVar29 + 0x1c) && pfVar35[3] <= fVar26);
          uVar33 = movmskps(uVar32 & 7,auVar14);
          auVar7._4_4_ = -(uint)(fVar20 <= *(float *)(iVar34 + 0x14) && pfVar1[1] <= fVar24);
          auVar7._0_4_ = -(uint)(fVar19 <= *(float *)(iVar34 + 0x10) && *pfVar1 <= fVar23);
          auVar7._8_4_ = -(uint)(fVar21 <= *(float *)(iVar34 + 0x18) && pfVar1[2] <= fVar25);
          auVar7._12_4_ = -(uint)(fVar22 <= *(float *)(iVar34 + 0x1c) && pfVar1[3] <= fVar26);
          uVar27 = movmskps(uVar30,auVar7);
          if (((byte)uVar27 & 7) == 7) {
            if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
            }
            pfVar35 = (float *)(*param_4 + param_4[1] * 8);
            param_4[1] = param_4[1] + 1;
            *pfVar35 = fVar36;
            pfVar35[1] = fVar40;
          }
          if (((byte)uVar33 & 7) == 7) {
            if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
            }
            pfVar35 = (float *)(*param_4 + param_4[1] * 8);
            param_4[1] = param_4[1] + 1;
            *pfVar35 = fVar36;
            pfVar35[1] = fVar37;
          }
          if (uVar30 != 0) {
            if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
            }
            pfVar35 = (float *)(*param_4 + param_4[1] * 8);
            param_4[1] = param_4[1] + 1;
            *pfVar35 = fVar5;
            pfVar35[1] = fVar40;
          }
          if ((char)(uVar31 & 7) == '\a') {
            if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_4,8);
            }
            pfVar35 = (float *)(*param_4 + param_4[1] * 8);
            param_4[1] = param_4[1] + 1;
            *pfVar35 = fVar5;
            pfVar35[1] = fVar37;
          }
        }
      }
LAB_010beb4f:
      iVar28 = param_4[1];
      if (iVar4 < iVar28) {
        pfVar35 = (float *)(*param_4 + -8 + iVar28 * 8);
        param_4[1] = iVar28 + -1;
        local_18 = *pfVar35;
        local_14 = pfVar35[1];
        local_40 = (float *)((int)local_18 * 0x30 + *param_2);
        fVar36 = *local_40;
        fVar37 = local_40[1];
        fVar38 = local_40[2];
        fVar39 = local_40[3];
        fVar44 = local_40[4];
        fVar45 = local_40[5];
        fVar46 = local_40[6];
        fVar47 = local_40[7];
        pfVar35 = (float *)((int)local_14 * 0x30 + *param_3);
        fVar40 = *pfVar35;
        fVar41 = pfVar35[1];
        fVar42 = pfVar35[2];
        fVar43 = pfVar35[3];
        fVar48 = pfVar35[4];
        fVar49 = pfVar35[5];
        fVar50 = pfVar35[6];
        fVar51 = pfVar35[7];
        goto LAB_010be690;
      }
    }
  }
  return;
}

// 010BEBB0  FUN_010bebb0  size=488  [between]
void FUN_010bebb0(int *param_1,int *param_2,int *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_18;
  float local_14;
  
  if (param_1[6] != 0) {
    local_18 = param_2[1];
    pauVar4 = (undefined1 (*) [16])(param_1[6] * 0x30 + *param_1);
    auVar1 = *(undefined1 (*) [16])(param_3 + 4);
    auVar12 = maxps(*pauVar4,auVar1);
    auVar12 = minps(pauVar4[1],auVar12);
    fVar8 = auVar1._0_4_ - auVar12._0_4_;
    fVar9 = auVar1._4_4_ - auVar12._4_4_;
    fVar10 = auVar1._8_4_ - auVar12._8_4_;
    fVar8 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
    if (fVar8 < (float)param_3[8] || fVar8 == (float)param_3[8]) {
      do {
        if (*(int *)(pauVar4[2] + 4) == 0) {
          iVar2 = *(int *)(pauVar4[2] + 8);
          puVar3 = (undefined4 *)*param_3;
          fVar7 = (float10)FUN_0108fb90(param_3 + 4,*(int *)(iVar2 + 8) + 0x20,
                                        *(int *)(iVar2 + 0xc) + 0x20,*(int *)(iVar2 + 0x10) + 0x20,
                                        &local_30,&local_40);
          local_14 = (float)fVar7;
          if (local_14 < (float)param_3[8]) {
            param_3[8] = (int)local_14;
            param_3[9] = (int)local_14;
            param_3[10] = (int)local_14;
            param_3[0xb] = (int)local_14;
            *puVar3 = local_30;
            puVar3[1] = uStack_2c;
            puVar3[2] = uStack_28;
            puVar3[3] = uStack_24;
            puVar3[4] = local_40;
            puVar3[5] = uStack_3c;
            puVar3[6] = uStack_38;
            puVar3[7] = uStack_34;
            puVar3[8] = iVar2;
          }
        }
        else {
          iVar2 = *param_1;
          auVar1 = *(undefined1 (*) [16])(param_3 + 4);
          iVar6 = *(int *)(pauVar4[2] + 4) * 0x30;
          auVar12 = maxps(*(undefined1 (*) [16])(iVar6 + iVar2),auVar1);
          auVar12 = minps(*(undefined1 (*) [16])(iVar6 + 0x10 + iVar2),auVar12);
          iVar6 = *(int *)(pauVar4[2] + 8) * 0x30;
          fVar8 = auVar1._0_4_ - auVar12._0_4_;
          fVar9 = auVar1._4_4_ - auVar12._4_4_;
          fVar10 = auVar1._8_4_ - auVar12._8_4_;
          auVar12 = maxps(*(undefined1 (*) [16])(iVar6 + iVar2),auVar1);
          auVar12 = minps(*(undefined1 (*) [16])(iVar6 + 0x10 + iVar2),auVar12);
          fVar11 = auVar1._0_4_ - auVar12._0_4_;
          fVar13 = auVar1._4_4_ - auVar12._4_4_;
          fVar14 = auVar1._8_4_ - auVar12._8_4_;
          fVar9 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
          fVar8 = fVar13 * fVar13 + fVar11 * fVar11 + fVar14 * fVar14;
          uVar5 = ((float)param_3[8] <= fVar8 && fVar8 != (float)param_3[8]) - 1 & 2 |
                  (uint)(fVar9 < (float)param_3[8] || fVar9 == (float)param_3[8]);
          if (uVar5 == 3) {
            param_3[0xc] = (uint)(fVar8 < fVar9);
LAB_010bed06:
                    /* WARNING: Could not recover jumptable at 0x010bed06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(&DAT_010bedf4 + uVar5 * 4))();
            return;
          }
          if (uVar5 < 4) goto LAB_010bed06;
        }
        iVar2 = param_2[1];
        if (iVar2 <= local_18) {
          return;
        }
        param_2[1] = iVar2 + -1;
        pauVar4 = (undefined1 (*) [16])(*(int *)(*param_2 + -4 + iVar2 * 4) * 0x30 + *param_1);
      } while( true );
    }
  }
  return;
}

// 010BEE10  FUN_010bee10  size=96  [between]
void FUN_010bee10(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    puVar2 = (uint *)(param_1 + 8 + param_2 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar2[-2],((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < param_2);
  }
  return;
}

// 010BEE70  FUN_010bee70  size=94  [between]
void FUN_010bee70(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + 8 + param_2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      param_2 = param_2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < param_2);
  }
  return;
}

// 010BEEF0  FUN_010beef0  size=42  [between]
void FUN_010beef0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_010bd750();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x22) = 0;
  }
  return;
}

// 010BF0A0  FUN_010bf0a0  size=90  [between]
void FUN_010bf0a0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_3[1] != 0) {
    iVar1 = *(int *)(param_4 + 0x20);
    piVar2 = (int *)*param_3;
    if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
    }
    *(undefined4 *)(*piVar2 + piVar2[1] * 4) = *(undefined4 *)(iVar1 + 0x28);
    piVar2[1] = piVar2[1] + 1;
    param_3[1] = 1;
    return;
  }
  param_3[1] = 0;
  return;
}

// 010BF150  FUN_010bf150  size=127  [between]
int __thiscall FUN_010bf150(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  uVar2 = *(uint *)(param_2 + 1);
  param_1[3] = param_1[3] + 1;
  piVar1 = (int *)(*param_1 + (uVar2 % (uint)param_1[1]) * 0xc);
  if (piVar1[1] == (*(uint *)(*param_1 + 8 + (uVar2 % (uint)param_1[1]) * 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x10);
  }
  puVar3 = (undefined4 *)(piVar1[1] * 0x10 + *piVar1);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  puVar4 = (undefined8 *)(piVar1[1] * 0x10 + *piVar1);
  piVar1[1] = piVar1[1] + 1;
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  return *piVar1 + -0x10 + piVar1[1] * 0x10;
}

// 010BF1D0  FUN_010bf1d0  size=91  [between]
void FUN_010bf1d0(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + 8 + param_2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 << 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      param_2 = param_2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < param_2);
  }
  return;
}

// 010BF230  FUN_010bf230  size=196  [between]
void __thiscall FUN_010bf230(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= param_3) {
      iVar3 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar3,0xc);
  }
  iVar3 = (param_1[1] - param_3) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*param_1 + param_3 * 0xc + 8 + iVar3 * 0xc);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 << 4);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_3 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 010BF300  FUN_010bf300  size=38  [between]
void FUN_010bf300(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010BF330  FUN_010bf330  size=61  [between]
void __fastcall FUN_010bf330(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010BF370  FUN_010bf370  size=28  [between]
undefined4 __thiscall FUN_010bf370(int param_1,undefined4 param_2)

{
  FUN_010bdc00(*(undefined4 *)(param_1 + 0x1c),0);
  return param_2;
}

// 010BF390  FUN_010bf390  size=48  [between]
int __fastcall FUN_010bf390(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x40);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x40 + *param_1;
}

// 010BF3C0  FUN_010bf3c0  size=36  [between]
void __thiscall FUN_010bf3c0(int *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = (int)(param_1 + 3);
  param_1[2] = -0x7ffffffe;
  param_1[3] = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010BF3F0  FUN_010bf3f0  size=36  [between]
void __thiscall FUN_010bf3f0(int *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = (int)(param_1 + 3);
  param_1[2] = -0x7ffffffe;
  param_1[3] = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010BF420  FUN_010bf420  size=207  [between]
void __thiscall FUN_010bf420(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    iVar2 = param_2;
    if (param_2 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar4 = (param_1[1] - param_2) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 8);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      piVar3 = piVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 010BF4F0  FUN_010bf4f0  size=165  [between]
bool __fastcall FUN_010bf4f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = *(int **)(param_1 + 0x24);
  local_10 = 0;
  local_c = 0;
  local_8 = param_1;
  do {
    if (piVar1 == (int *)0x0) {
      return local_c < local_10;
    }
    if ((*(byte *)((int)piVar1 + 0x22) & 0x20) != 0) {
      iVar4 = 0;
      puVar5 = (uint *)(piVar1 + 5);
      local_18 = piVar1;
      do {
        uVar2 = *puVar5;
        local_14 = iVar4;
        if ((uVar2 & 0xfffffffc) == 0) {
          iVar3 = FUN_010bdd20(&local_18);
          if (iVar3 == 0) {
LAB_010bf55c:
            local_c = local_c + 1;
          }
          else {
            local_10 = local_10 + 1;
          }
        }
        else {
          local_20 = uVar2 & 0xfffffffc;
          local_1c = uVar2 & 3;
          iVar3 = FUN_010bdd20(&local_18);
          if (iVar3 == 0) {
            iVar3 = FUN_010bdd20(&local_20);
            if (iVar3 != 0) goto LAB_010bf55c;
          }
          else {
            local_10 = local_10 + 1;
          }
        }
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar4 < 3);
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

// 010BF9C0  FUN_010bf9c0  size=388  [between]
undefined4 FUN_010bf9c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  uVar6 = param_1[1];
  uVar1 = *param_1;
  uVar2 = *(uint *)(uVar1 + 0x14 + uVar6 * 4);
  if ((uVar2 & 0xfffffffc) == 0) {
    return 1;
  }
  iVar9 = *(int *)(*(int *)(uVar1 + 8 + uVar6 * 4) + 8);
  iVar3 = *(int *)(uVar1 + 8 + (9 >> ((char)uVar6 * '\x02' & 0x1fU) & 3U) * 4);
  iVar7 = *(int *)(iVar3 + 8);
  uVar12 = uVar1;
  if (iVar7 <= iVar9) {
    if (iVar9 <= iVar7) {
      iVar9 = *(int *)(*(int *)(uVar1 + 8 + uVar6 * 4) + 0xc);
      iVar3 = *(int *)(iVar3 + 0xc);
      if ((iVar9 < iVar3) || (iVar9 <= iVar3)) goto LAB_010bfa24;
    }
    uVar6 = uVar2 & 3;
    uVar12 = uVar2 & 0xfffffffc;
  }
LAB_010bfa24:
  if (((uint)*(ushort *)(uVar12 + 0x22) & 1 << ((byte)uVar6 & 0x1f) & 7) == 0) {
    uVar6 = param_1[1];
    uVar2 = *(uint *)(uVar1 + 0x14 + uVar6 * 4);
    iVar9 = *(int *)((uVar2 & 0xfffffffc) + 8 + (0x12 >> ((byte)uVar2 & 3) * '\x02' & 3U) * 4);
    bVar5 = (char)uVar6 * '\x02';
    iVar3 = *(int *)(uVar1 + 8 + (9 >> (bVar5 & 0x1f) & 3U) * 4);
    iVar7 = *(int *)(uVar1 + 8 + uVar6 * 4);
    iVar8 = *(int *)(iVar9 + 8);
    iVar10 = *(int *)(uVar1 + 8 + (0x12 >> (bVar5 & 0x1f) & 3U) * 4);
    iVar9 = *(int *)(iVar9 + 0xc);
    iVar13 = *(int *)(iVar10 + 8) - iVar8;
    iVar11 = *(int *)(iVar7 + 8) - iVar8;
    iVar7 = *(int *)(iVar7 + 0xc) - iVar9;
    iVar10 = *(int *)(iVar10 + 0xc) - iVar9;
    iVar8 = *(int *)(iVar3 + 8) - iVar8;
    iVar9 = *(int *)(iVar3 + 0xc) - iVar9;
    lVar4 = (longlong)(iVar11 * iVar11 + iVar7 * iVar7) *
            (longlong)(iVar10 * iVar8 - iVar13 * iVar9) +
            (longlong)(iVar13 * iVar13 + iVar10 * iVar10) *
            (longlong)(iVar11 * iVar9 - iVar7 * iVar8) +
            (longlong)(iVar13 * iVar7 - iVar10 * iVar11) * (longlong)(iVar8 * iVar8 + iVar9 * iVar9)
    ;
    iVar9 = -((int)((ulonglong)lVar4 >> 0x20) + (uint)((int)lVar4 != 0));
    if ((iVar9 < 1) && (iVar9 < 0)) {
      return 0;
    }
  }
  return 1;
}

// 010BFB50  FUN_010bfb50  size=259  [between]
void FUN_010bfb50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x200) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0x200U))
  {
    local_18[3] = FUN_0100b780(0x200);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0x200U;
  }
  local_18[2] = -0x7fffffc0;
  local_18[0] = local_18[3];
  FUN_010be5b0(param_1,param_2,param_3,local_18,param_4,param_5,param_6);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 8 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],local_18[2] * 8);
  }
  return;
}

// 010BFC60  FUN_010bfc60  size=242  [between]
void FUN_010bfc60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x100) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0x100U))
  {
    local_18[3] = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0x100U;
  }
  local_18[2] = -0x7fffffc0;
  local_18[0] = local_18[3];
  FUN_010bebb0(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],local_18[2] * 4);
  }
  return;
}

// 010BFD60  FUN_010bfd60  size=113  [between]
void __fastcall FUN_010bfd60(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*param_1 + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar2[-2],((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar3);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 010BFDE0  FUN_010bfde0  size=149  [between]
void __thiscall FUN_010bfde0(int *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*param_1 + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar2[-2],((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010BFE80  FUN_010bfe80  size=207  [between]
void __thiscall FUN_010bfe80(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= param_3) {
      iVar4 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar4,0xc);
  }
  iVar4 = (param_1[1] - param_3) + -1;
  if (-1 < iVar4) {
    puVar3 = (uint *)(*param_1 + param_3 * 0xc + 8 + iVar4 * 0xc);
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar3[-2],((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = param_3 - param_1[1];
  puVar2 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 010BFF50  FUN_010bff50  size=112  [between]
void __fastcall FUN_010bff50(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 010BFFD0  FUN_010bffd0  size=149  [between]
void __thiscall FUN_010bffd0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010C0070  FUN_010c0070  size=199  [between]
void __thiscall FUN_010c0070(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= param_3) {
      iVar3 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar3,0xc);
  }
  iVar3 = (param_1[1] - param_3) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*param_1 + param_3 * 0xc + 8 + iVar3 * 0xc);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 8);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_3 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 010C0140  FUN_010c0140  size=242  [between]
void FUN_010c0140(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x100) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0x100U))
  {
    local_18[3] = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0x100U;
  }
  local_18[2] = -0x7fffffc0;
  local_18[0] = local_18[3];
  FUN_010bcc50(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],local_18[2] * 4);
  }
  return;
}

// 010C0240  FUN_010c0240  size=113  [between]
void __thiscall FUN_010c0240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_010bd750();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    *(undefined4 *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0x22) = 0;
    *(int *)(param_1 + 0x244 +
            ((*(int *)(*(int *)(iVar1 + 0xc) + 0xc) + *(int *)(*(int *)(iVar1 + 8) + 0xc) * 2 +
              *(int *)(*(int *)(iVar1 + 0x10) + 0xc) >> 0xd) * 0x10 +
            (*(int *)(*(int *)(iVar1 + 0xc) + 8) + *(int *)(*(int *)(iVar1 + 8) + 8) * 2 +
             *(int *)(*(int *)(iVar1 + 0x10) + 8) >> 0xd)) * 4) = iVar1;
    *(ushort *)(iVar1 + 0x22) = *(ushort *)(iVar1 + 0x22) | 8;
  }
  return;
}

// 010C02C0  hkgpMesh::IConvexOverlap::IConvexShape::IConvexShape  size=758  [between]
void hkgpMesh::IConvexOverlap::IConvexShape::IConvexShape
               (int *param_1,int *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  byte bVar12;
  float *pfVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  float10 fVar17;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined **local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  if (param_1[6] != 0) {
    local_18 = param_2[1];
    pfVar13 = (float *)(param_1[6] * 0x30 + *param_1);
    if ((param_3[1] != 0) &&
       (auVar9._4_4_ = -(uint)((float)param_3[5] <= pfVar13[5] && pfVar13[1] <= (float)param_3[9]),
       auVar9._0_4_ = -(uint)((float)param_3[4] <= pfVar13[4] && *pfVar13 <= (float)param_3[8]),
       auVar9._8_4_ = -(uint)((float)param_3[6] <= pfVar13[6] && pfVar13[2] <= (float)param_3[10]),
       auVar9._12_4_ = -(uint)((float)param_3[7] <= pfVar13[7] && pfVar13[3] <= (float)param_3[0xb])
       , uVar15 = movmskps(param_1,auVar9), ((byte)uVar15 & 7) == 7)) {
LAB_010c0330:
      while (pfVar13[9] != 0.0) {
        local_14 = pfVar13[10];
        iVar5 = *param_1;
        iVar16 = (int)pfVar13[9] * 0x30;
        pfVar1 = (float *)(iVar16 + iVar5);
        pfVar3 = (float *)(iVar16 + 0x10 + iVar5);
        pfVar13 = (float *)(iVar16 + iVar5);
        iVar14 = (int)local_14 * 0x30;
        pfVar2 = (float *)(iVar14 + iVar5);
        pfVar4 = (float *)(iVar14 + 0x10 + iVar5);
        iVar16 = param_3[1];
        if ((iVar16 == 0) ||
           (auVar10._4_4_ =
                 -(uint)((float)param_3[5] <= pfVar3[1] && pfVar1[1] <= (float)param_3[9]),
           auVar10._0_4_ = -(uint)((float)param_3[4] <= *pfVar3 && *pfVar1 <= (float)param_3[8]),
           auVar10._8_4_ =
                -(uint)((float)param_3[6] <= pfVar3[2] && pfVar1[2] <= (float)param_3[10]),
           auVar10._12_4_ =
                -(uint)((float)param_3[7] <= pfVar3[3] && pfVar1[3] <= (float)param_3[0xb]),
           uVar15 = movmskps(param_1,auVar10), ((byte)uVar15 & 7) != 7)) {
          bVar12 = 0;
        }
        else {
          bVar12 = 1;
        }
        if ((iVar16 == 0) ||
           (auVar8._4_4_ = -(uint)(pfVar2[1] <= (float)param_3[9] && (float)param_3[5] <= pfVar4[1])
           , auVar8._0_4_ = -(uint)(*pfVar2 <= (float)param_3[8] && (float)param_3[4] <= *pfVar4),
           auVar8._8_4_ = -(uint)(pfVar2[2] <= (float)param_3[10] && (float)param_3[6] <= pfVar4[2])
           , auVar8._12_4_ =
                  -(uint)(pfVar2[3] <= (float)param_3[0xb] && (float)param_3[7] <= pfVar4[3]),
           uVar15 = movmskps(iVar16,auVar8), ((byte)uVar15 & 7) != 7)) {
          cVar11 = '\0';
        }
        else {
          cVar11 = '\x01';
        }
        pfVar1 = (float *)(iVar14 + iVar5);
        switch(-cVar11 & 2U | bVar12) {
        default:
          goto LAB_010c0586;
        case 1:
          pfVar1 = pfVar13;
        case 2:
          pfVar13 = pfVar1;
          break;
        case 3:
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
          }
          iVar5 = param_2[1];
          param_2[1] = iVar5 + 1;
          *(float *)(*param_2 + iVar5 * 4) = local_14;
        }
      }
      if (param_3[1] == 0) {
LAB_010c057c:
        param_3[1] = 0;
      }
      else {
        pfVar1 = (float *)*param_3;
        fVar6 = pfVar13[10];
        local_50 = *(undefined4 *)((int)fVar6 + 0x20);
        uStack_4c = *(undefined4 *)((int)fVar6 + 0x24);
        uStack_48 = *(undefined4 *)((int)fVar6 + 0x28);
        uStack_44 = *(undefined4 *)((int)fVar6 + 0x2c);
        local_60 = *(uint *)((int)fVar6 + 0x20) ^ 0x80000000;
        uStack_5c = *(uint *)((int)fVar6 + 0x24) ^ 0x80000000;
        uStack_58 = *(uint *)((int)fVar6 + 0x28) ^ 0x80000000;
        uStack_54 = *(uint *)((int)fVar6 + 0x2c) ^ 0x80000000;
        local_40 = -*pfVar1;
        if (local_40 < 1e-06) {
          local_40 = 1e-06;
        }
        fStack_3c = local_40;
        fStack_38 = local_40;
        fStack_34 = local_40;
        (**(code **)(*(int *)pfVar1[2] + 8))(&local_50,&local_30);
        if ((local_40 <=
             *(float *)((int)fVar6 + 0x2c) + *(float *)((int)fVar6 + 0x24) * fStack_2c +
             *(float *)((int)fVar6 + 0x28) * fStack_28 + *(float *)((int)fVar6 + 0x20) * local_30)
           && ((**(code **)(*(int *)pfVar1[2] + 8))(&local_60,&local_30),
              *(float *)((int)fVar6 + 0x2c) + *(float *)((int)fVar6 + 0x24) * fStack_2c +
              *(float *)((int)fVar6 + 0x28) * fStack_28 + *(float *)((int)fVar6 + 0x20) * local_30
              <= 0.0 - local_40)) {
          local_20 = TriangleShape::vftable;
          local_1c = fVar6;
          fVar17 = (float10)(**(code **)(*(int *)pfVar1[1] + 4))
                                      (pfVar1[2],&local_20,*(undefined1 *)((int)pfVar1 + 0x11));
          if (fVar17 <= (float10)*pfVar1) {
            *(undefined1 *)(pfVar1 + 4) = 1;
            piVar7 = (int *)pfVar1[3];
            if (piVar7 == (int *)0x0) {
              local_20 = vftable;
              goto LAB_010c057c;
            }
            if (piVar7[1] == (piVar7[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar7,4);
            }
            *(float *)(*piVar7 + piVar7[1] * 4) = fVar6;
            piVar7[1] = piVar7[1] + 1;
          }
          local_20 = vftable;
        }
        param_3[1] = 1;
      }
LAB_010c0586:
      iVar5 = param_2[1];
      if (local_18 < iVar5) {
        param_2[1] = iVar5 + -1;
        pfVar13 = (float *)(*(int *)(*param_2 + -4 + iVar5 * 4) * 0x30 + *param_1);
        goto LAB_010c0330;
      }
    }
  }
  return;
}

// 010C05D0  FUN_010c05d0  size=487  [between]
void FUN_010c05d0(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  byte bVar13;
  int iVar14;
  undefined4 uVar15;
  float *pfVar16;
  int iVar17;
  
  if (param_1[6] != 0) {
    iVar5 = param_2[1];
    pfVar16 = (float *)(param_1[6] * 0x30 + *param_1);
    if ((param_3[1] != 0) &&
       (auVar10._4_4_ = -(uint)((float)param_3[5] <= pfVar16[5] && pfVar16[1] <= (float)param_3[9]),
       auVar10._0_4_ = -(uint)((float)param_3[4] <= pfVar16[4] && *pfVar16 <= (float)param_3[8]),
       auVar10._8_4_ = -(uint)((float)param_3[6] <= pfVar16[6] && pfVar16[2] <= (float)param_3[10]),
       auVar10._12_4_ =
            -(uint)((float)param_3[7] <= pfVar16[7] && pfVar16[3] <= (float)param_3[0xb]),
       uVar15 = movmskps(param_1,auVar10), ((byte)uVar15 & 7) == 7)) {
LAB_010c0630:
      while (pfVar16[9] != 0.0) {
        iVar6 = *param_1;
        fVar7 = pfVar16[10];
        iVar17 = (int)pfVar16[9] * 0x30;
        pfVar1 = (float *)(iVar17 + iVar6);
        pfVar3 = (float *)(iVar17 + 0x10 + iVar6);
        iVar14 = (int)fVar7 * 0x30;
        pfVar2 = (float *)(iVar14 + iVar6);
        pfVar4 = (float *)(iVar14 + 0x10 + iVar6);
        pfVar16 = (float *)(iVar17 + iVar6);
        if ((param_3[1] == 0) ||
           (auVar11._4_4_ =
                 -(uint)((float)param_3[5] <= pfVar3[1] && pfVar1[1] <= (float)param_3[9]),
           auVar11._0_4_ = -(uint)((float)param_3[4] <= *pfVar3 && *pfVar1 <= (float)param_3[8]),
           auVar11._8_4_ =
                -(uint)((float)param_3[6] <= pfVar3[2] && pfVar1[2] <= (float)param_3[10]),
           auVar11._12_4_ =
                -(uint)((float)param_3[7] <= pfVar3[3] && pfVar1[3] <= (float)param_3[0xb]),
           uVar15 = movmskps(iVar6,auVar11), ((byte)uVar15 & 7) != 7)) {
          bVar13 = 0;
        }
        else {
          bVar13 = 1;
        }
        if ((param_3[1] == 0) ||
           (auVar9._4_4_ = -(uint)((float)param_3[5] <= pfVar4[1] && pfVar2[1] <= (float)param_3[9])
           , auVar9._0_4_ = -(uint)((float)param_3[4] <= *pfVar4 && *pfVar2 <= (float)param_3[8]),
           auVar9._8_4_ = -(uint)((float)param_3[6] <= pfVar4[2] && pfVar2[2] <= (float)param_3[10])
           , auVar9._12_4_ =
                  -(uint)((float)param_3[7] <= pfVar4[3] && pfVar2[3] <= (float)param_3[0xb]),
           uVar15 = movmskps(param_3,auVar9), ((byte)uVar15 & 7) != 7)) {
          cVar12 = '\0';
        }
        else {
          cVar12 = '\x01';
        }
        switch(-cVar12 & 2U | bVar13) {
        default:
          goto LAB_010c078d;
        case 1:
          break;
        case 2:
          pfVar16 = (float *)(iVar14 + iVar6);
          break;
        case 3:
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
          }
          iVar6 = param_2[1];
          param_2[1] = iVar6 + 1;
          *(float *)(*param_2 + iVar6 * 4) = fVar7;
        }
      }
      if (param_3[1] == 0) {
        param_3[1] = 0;
      }
      else {
        piVar8 = (int *)*param_3;
        if (piVar8[1] == (piVar8[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar8,4);
        }
        *(float *)(*piVar8 + piVar8[1] * 4) = pfVar16[10];
        piVar8[1] = piVar8[1] + 1;
        param_3[1] = 1;
      }
LAB_010c078d:
      iVar6 = param_2[1];
      if (iVar5 < iVar6) {
        param_2[1] = iVar6 + -1;
        pfVar16 = (float *)(*(int *)(*param_2 + -4 + iVar6 * 4) * 0x30 + *param_1);
        goto LAB_010c0630;
      }
    }
  }
  return;
}

// 010C07D0  FUN_010c07d0  size=63  [between]
void __fastcall FUN_010c07d0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < *(int *)(param_1 + 0xc)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0xc) * 4);
  }
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 010C0830  FUN_010c0830  size=109  [between]
void __fastcall FUN_010c0830(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 << 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 010C08A0  FUN_010c08a0  size=101  [between]
undefined4 * __thiscall FUN_010c08a0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x14);
  }
  return param_1;
}

// 010C0910  FUN_010c0910  size=100  [between]
void __fastcall FUN_010c0910(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 << 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < iVar2);
  }
  param_1[3] = 0;
  param_1[1] = 0;
  return;
}

// 010C0980  FUN_010c0980  size=197  [between]
void __thiscall FUN_010c0980(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    iVar2 = param_2;
    if (param_2 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar4 = (param_1[1] - param_2) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 << 4);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      piVar3 = piVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 010C0A50  FUN_010c0a50  size=493  [between]
int * FUN_010c0a50(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  LPVOID pvVar6;
  int *piVar7;
  uint *puVar8;
  
  uVar4 = param_2;
  uVar3 = param_1;
  piVar5 = (int *)0x0;
  if ((*(uint *)(param_1 + 0x14 + param_2 * 4) & 0xfffffffc) == 0) {
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    piVar7 = (int *)(**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0xc);
    piVar5 = (int *)0x0;
    if (piVar7 != (int *)0x0) {
      *piVar7 = 0;
      piVar7[1] = 0;
      piVar7[2] = -0x80000000;
      piVar5 = piVar7;
    }
    do {
      if (piVar5[1] == (piVar5[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar5,0x40);
      }
      iVar1 = piVar5[1];
      piVar5[1] = iVar1 + 1;
      puVar8 = (uint *)(iVar1 * 0x40 + *piVar5);
      *puVar8 = param_1;
      puVar8[1] = param_2;
      param_2 = 9 >> ((char)param_2 * '\x02' & 0x1fU) & 3;
      if (*(int *)(param_1 + 8 + param_2 * 4) == *(int *)(uVar3 + 8 + uVar4 * 4)) break;
      uVar2 = *(uint *)(param_1 + 0x14 + param_2 * 4);
      while ((uVar2 & 0xfffffffc) != 0) {
        uVar2 = *(uint *)(param_1 + 0x14 + param_2 * 4);
        param_1 = uVar2 & 0xfffffffc;
        param_2 = 9 >> ((byte)uVar2 & 3) * '\x02' & 3;
        uVar2 = *(uint *)(param_1 + 0x14 + param_2 * 4);
      }
    } while (param_2 + param_1 != uVar4 + uVar3);
    if ((0 < piVar5[1]) &&
       (piVar7 = (int *)*piVar5,
       *(int *)(*piVar7 + 8 + piVar7[1] * 4) !=
       *(int *)(piVar7[piVar5[1] * 0x10 + -0x10] + 8 +
               (9 >> ((char)(piVar7 + piVar5[1] * 0x10 + -0x10)[1] * '\x02' & 0x1fU) & 3U) * 4))) {
      piVar5[1] = 0;
    }
    if (piVar5[1] < 3) {
      if (piVar5[1] != 2) {
LAB_010c0bda:
        piVar5[1] = 0;
        if (-1 < piVar5[2]) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(*piVar5,piVar5[2] << 6);
        }
        *piVar5 = 0;
        piVar5[2] = -0x80000000;
        pvVar6 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 8))(piVar5,0xc);
        return (int *)0x0;
      }
      piVar7 = (int *)*piVar5;
      iVar1 = piVar7[0x10];
      if (iVar1 != 0) {
        if ((*(int *)(*piVar7 + 8 + piVar7[1] * 4) !=
             *(int *)(iVar1 + 8 + (9 >> ((char)piVar7[0x11] * '\x02' & 0x1fU) & 3U) * 4)) ||
           (*(int *)(*piVar7 + 8 + (9 >> ((char)piVar7[1] * '\x02' & 0x1fU) & 3U) * 4) !=
            *(int *)(iVar1 + 8 + piVar7[0x11] * 4))) goto LAB_010c0bda;
      }
    }
  }
  return piVar5;
}

// 010C0C40  hkgpMesh::vf00  size=52  [between]
int __thiscall hkgpMesh::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_69();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010C0C80  FUN_010c0c80  size=305  [between]
undefined4 __fastcall FUN_010c0c80(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = param_1[1];
  uVar1 = *param_1;
  uVar8 = *(uint *)(uVar1 + 0x14 + uVar6 * 4);
  if ((uVar8 & 0xfffffffc) == 0) {
    return 0;
  }
  bVar5 = (char)uVar6 * '\x02';
  iVar2 = *(int *)(*(int *)(uVar1 + 8 + uVar6 * 4) + 8);
  iVar3 = *(int *)(uVar1 + 8 + (9 >> (bVar5 & 0x1f) & 3U) * 4);
  iVar4 = *(int *)(iVar3 + 8);
  uVar7 = uVar1;
  if (iVar4 <= iVar2) {
    if (iVar2 <= iVar4) {
      iVar2 = *(int *)(*(int *)(uVar1 + 8 + uVar6 * 4) + 0xc);
      iVar3 = *(int *)(iVar3 + 0xc);
      if ((iVar2 < iVar3) || (iVar2 <= iVar3)) goto LAB_010c0ce8;
    }
    uVar6 = uVar8 & 3;
    uVar7 = uVar8 & 0xfffffffc;
  }
LAB_010c0ce8:
  if (((uint)*(ushort *)(uVar7 + 0x22) & 1 << ((byte)uVar6 & 0x1f) & 7) == 0) {
    uVar6 = *(uint *)(uVar1 + 0x14 + param_1[1] * 4);
    uVar8 = uVar6 & 3;
    iVar2 = *(int *)(uVar1 + 8 + param_1[1] * 4);
    uVar6 = uVar6 & 0xfffffffc;
    iVar3 = *(int *)(uVar1 + 8 + (0x12 >> (bVar5 & 0x1f) & 3U) * 4);
    iVar4 = *(int *)(uVar6 + 8 + (0x12 >> (char)uVar8 * '\x02' & 3U) * 4);
    if ((0 < (*(int *)(iVar2 + 8) - *(int *)(iVar3 + 8)) *
             (*(int *)(iVar4 + 0xc) - *(int *)(iVar3 + 0xc)) -
             (*(int *)(iVar2 + 0xc) - *(int *)(iVar3 + 0xc)) *
             (*(int *)(iVar4 + 8) - *(int *)(iVar3 + 8))) &&
       (iVar2 = *(int *)(uVar6 + 8 + uVar8 * 4),
       0 < (*(int *)(iVar3 + 0xc) - *(int *)(iVar4 + 0xc)) *
           (*(int *)(iVar2 + 8) - *(int *)(iVar4 + 8)) -
           (*(int *)(iVar3 + 8) - *(int *)(iVar4 + 8)) *
           (*(int *)(iVar2 + 0xc) - *(int *)(iVar4 + 0xc)))) {
      return 1;
    }
  }
  return 0;
}

// 010C0DC0  FUN_010c0dc0  size=745  [between]
void __thiscall FUN_010c0dc0(uint *param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar8 = *param_1;
  uVar6 = 0x12 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3;
  iVar2 = *(int *)(uVar8 + 8 + (9 >> (char)uVar6 * '\x02' & 3U) * 4);
  iVar3 = *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 8);
  iVar4 = *(int *)(iVar2 + 8);
  if ((iVar4 <= iVar3) &&
     (((iVar4 < iVar3 || (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 0xc)))
      && (uVar7 = *(uint *)(uVar8 + 0x14 + uVar6 * 4), (uVar7 & 0xfffffffc) != 0)))) {
    uVar6 = uVar7 & 3;
    uVar8 = uVar7 & 0xfffffffc;
  }
  uVar6 = 1 << (sbyte)uVar6 & (uint)*(ushort *)(uVar8 + 0x22) & 7;
  *(ushort *)(uVar8 + 0x22) = *(ushort *)(uVar8 + 0x22) & (~(ushort)uVar6 | 0xfff8);
  uVar8 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  uVar7 = uVar8 & 0xfffffffc;
  uVar8 = 0x12 >> ((byte)uVar8 & 3) * '\x02' & 3;
  iVar2 = *(int *)(uVar7 + 8 + (9 >> (char)uVar8 * '\x02' & 3U) * 4);
  iVar3 = *(int *)(*(int *)(uVar7 + 8 + uVar8 * 4) + 8);
  iVar4 = *(int *)(iVar2 + 8);
  if (((iVar4 <= iVar3) &&
      ((iVar4 < iVar3 || (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar7 + 8 + uVar8 * 4) + 0xc))))
      ) && (uVar11 = *(uint *)(uVar7 + 0x14 + uVar8 * 4), (uVar11 & 0xfffffffc) != 0)) {
    uVar8 = uVar11 & 3;
    uVar7 = uVar11 & 0xfffffffc;
  }
  uVar9 = 1 << (sbyte)uVar8 & (uint)*(ushort *)(uVar7 + 0x22) & 7;
  *(ushort *)(uVar7 + 0x22) = *(ushort *)(uVar7 + 0x22) & (~(ushort)uVar9 | 0xfff8);
  uVar8 = *param_1;
  uVar7 = *(uint *)(uVar8 + 0x14 + param_1[1] * 4);
  uVar10 = uVar7 & 0xfffffffc;
  uVar7 = uVar7 & 3;
  uVar12 = 0x12 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3;
  uVar13 = 0x12 >> (char)uVar7 * '\x02' & 3;
  *(undefined4 *)(uVar8 + 8 + param_1[1] * 4) = *(undefined4 *)(uVar10 + 8 + uVar13 * 4);
  *(undefined4 *)(uVar10 + 8 + uVar7 * 4) = *(undefined4 *)(uVar8 + 8 + uVar12 * 4);
  uVar11 = *(uint *)(uVar8 + 0x14 + uVar12 * 4);
  uVar14 = uVar11 & 3;
  uVar11 = uVar11 & 0xfffffffc;
  *(uint *)(uVar10 + 0x14 + uVar7 * 4) = uVar14 + uVar11;
  if (uVar11 != 0) {
    *(uint *)(uVar11 + 0x14 + uVar14 * 4) = uVar7 + uVar10;
  }
  uVar7 = *(uint *)(uVar10 + 0x14 + uVar13 * 4);
  uVar11 = uVar7 & 3;
  uVar7 = uVar7 & 0xfffffffc;
  *(uint *)(*param_1 + 0x14 + param_1[1] * 4) = uVar11 + uVar7;
  if (uVar7 != 0) {
    *(uint *)(uVar7 + 0x14 + uVar11 * 4) = param_1[1] + *param_1;
  }
  *(uint *)(uVar8 + 0x14 + uVar12 * 4) = uVar13 + uVar10;
  if (uVar10 != 0) {
    *(uint *)(uVar10 + 0x14 + uVar13 * 4) = uVar12 + uVar8;
  }
  uVar8 = param_1[1];
  uVar7 = *param_1;
  *param_2 = uVar7;
  uVar8 = 0x12 >> ((char)uVar8 * '\x02' & 0x1fU) & 3;
  param_2[1] = uVar8;
  if (uVar6 != 0) {
    uVar8 = *(uint *)(uVar7 + 0x14 + uVar8 * 4);
    uVar6 = uVar8 & 0xfffffffc;
    uVar8 = 9 >> ((byte)uVar8 & 3) * '\x02' & 3;
    iVar2 = *(int *)(uVar6 + 8 + uVar8 * 4);
    iVar3 = *(int *)(uVar6 + 8 + (9 >> (char)uVar8 * '\x02' & 3U) * 4);
    iVar4 = *(int *)(iVar2 + 8);
    iVar5 = *(int *)(iVar3 + 8);
    if (((iVar5 <= iVar4) && ((iVar5 < iVar4 || (*(int *)(iVar3 + 0xc) < *(int *)(iVar2 + 0xc)))))
       && (uVar7 = *(uint *)(uVar6 + 0x14 + uVar8 * 4), (uVar7 & 0xfffffffc) != 0)) {
      uVar8 = uVar7 & 3;
      uVar6 = uVar7 & 0xfffffffc;
    }
    uVar1 = *(ushort *)(uVar6 + 0x22);
    *(ushort *)(uVar6 + 0x22) = ((1 << (sbyte)uVar8 | uVar1) ^ uVar1) & 7 ^ uVar1;
  }
  if (uVar9 != 0) {
    uVar8 = *param_2;
    uVar6 = 9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3;
    iVar2 = *(int *)(uVar8 + 8 + (9 >> (char)uVar6 * '\x02' & 3U) * 4);
    iVar3 = *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 8);
    iVar4 = *(int *)(iVar2 + 8);
    if ((iVar4 <= iVar3) &&
       (((iVar4 < iVar3 || (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 0xc))
         ) && (uVar7 = *(uint *)(uVar8 + 0x14 + uVar6 * 4), (uVar7 & 0xfffffffc) != 0)))) {
      uVar6 = uVar7 & 3;
      uVar8 = uVar7 & 0xfffffffc;
    }
    uVar1 = *(ushort *)(uVar8 + 0x22);
    *(ushort *)(uVar8 + 0x22) = ((1 << (sbyte)uVar6 | uVar1) ^ uVar1) & 7 ^ uVar1;
  }
  return;
}

// 010C10B0  FUN_010c10b0  size=731  [between]
int __fastcall FUN_010c10b0(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 **ppuVar13;
  undefined1 **ppuVar14;
  uint uVar15;
  undefined1 *local_238;
  uint local_234;
  uint local_230;
  undefined1 local_22c [512];
  undefined1 local_2c [8];
  uint *local_24;
  uint local_20;
  int local_1c;
  undefined1 **local_18;
  uint local_14;
  int local_10;
  undefined1 **local_c;
  undefined1 **local_8;
  
  for (puVar2 = *(undefined4 **)(param_1 + 0x24); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    *(ushort *)((int)puVar2 + 0x22) = *(ushort *)((int)puVar2 + 0x22) & 0x1f | 0xffe0;
  }
  local_18 = (undefined1 **)(param_1 + 0x30);
  local_238 = local_22c;
  local_8 = &local_238;
  uVar15 = (uint)(*(ushort *)(*(int *)(param_1 + 0x24) + 0x22) >> 5);
  local_234 = 0;
  local_230 = 0x80000040;
  iVar12 = -1;
  local_14 = uVar15;
  iVar7 = FUN_010bdf40(local_2c,0,0);
  uVar10 = *(int *)(iVar7 + 8) + *(int *)(iVar7 + 4);
  local_20 = uVar10 & 0xfffffffc;
  if (local_234 == (local_230 & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,&local_238,8);
  }
  puVar1 = (uint *)(local_238 + local_234 * 8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = local_20;
    puVar1[1] = uVar10 & 3;
  }
  local_234 = local_234 + 1;
  do {
    ppuVar14 = local_8;
    ppuVar13 = local_18;
    iVar12 = iVar12 + 1;
    local_c = local_8;
    local_8 = local_18;
    local_18 = ppuVar14;
    ppuVar13[1] = (undefined1 *)0x0;
    local_1c = iVar12;
    do {
      puVar9 = ppuVar14[1];
      iVar7 = *(int *)(*ppuVar14 + (int)puVar9 * 8 + -8);
      puVar1 = *(uint **)(*ppuVar14 + (int)puVar9 * 8 + -4);
      ppuVar14[1] = puVar9 + -1;
      local_24 = puVar1;
      if (*(ushort *)(iVar7 + 0x22) >> 5 == uVar15) {
        *(ushort *)(iVar7 + 0x22) = *(ushort *)(iVar7 + 0x22) & 0x1f | (ushort)(iVar12 << 5);
        local_24 = (uint *)(iVar7 + 0x14);
        local_10 = 0;
        do {
          uVar10 = *local_24 & 3;
          uVar15 = *local_24 & 0xfffffffc;
          if ((uVar15 != 0) && (*(ushort *)(uVar15 + 0x22) >> 5 == local_14)) {
            iVar12 = *(int *)(uVar15 + 8 + uVar10 * 4);
            iVar7 = *(int *)(uVar15 + 8 + (9 >> (char)uVar10 * '\x02' & 3U) * 4);
            iVar3 = *(int *)(iVar12 + 8);
            iVar4 = *(int *)(iVar7 + 8);
            uVar8 = uVar15;
            uVar11 = uVar10;
            if ((iVar4 <= iVar3) &&
               (((iVar4 < iVar3 || (*(int *)(iVar7 + 0xc) < *(int *)(iVar12 + 0xc))) &&
                (uVar5 = *(uint *)(uVar15 + 0x14 + uVar10 * 4), (uVar5 & 0xfffffffc) != 0)))) {
              uVar8 = uVar5 & 0xfffffffc;
              uVar11 = uVar5 & 3;
            }
            ppuVar13 = local_8;
            if (((uint)*(ushort *)(uVar8 + 0x22) & 1 << (sbyte)uVar11 & 7) == 0) {
              ppuVar13 = local_c;
            }
            puVar9 = ppuVar13[1] + 1;
            if ((int)((uint)ppuVar13[2] & 0x3fffffff) < (int)puVar9) {
              puVar6 = (undefined1 *)(((uint)ppuVar13[2] & 0x3fffffff) * 2);
              if ((int)puVar9 < (int)puVar6) {
                puVar9 = puVar6;
              }
              iVar12 = FUN_0100a210(&PTR_vftable_018e9b94,ppuVar13,puVar9,8);
              if (iVar12 != 0) {
                local_234 = 0;
                if (-1 < (int)local_230) {
                  (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_238,local_230 * 8);
                }
                return -1;
              }
            }
            if (ppuVar13[1] == (undefined1 *)((uint)ppuVar13[2] & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,ppuVar13,8);
            }
            puVar1 = (uint *)(*ppuVar13 + (int)ppuVar13[1] * 8);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar15;
              puVar1[1] = uVar10;
            }
            ppuVar13[1] = ppuVar13[1] + 1;
            ppuVar14 = local_c;
          }
          local_10 = local_10 + 1;
          local_24 = local_24 + 1;
          iVar12 = local_1c;
          uVar15 = local_14;
        } while (local_10 < 3);
      }
    } while (0 < (int)ppuVar14[1]);
    if ((int)local_8[1] < 1) {
      local_234 = 0;
      if (-1 < (int)local_230) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_238,local_230 * 8);
      }
      return iVar12 + 1;
    }
  } while( true );
}

// 010C1390  FUN_010c1390  size=256  [between]
void FUN_010c1390(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x200) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0x200U))
  {
    local_18[3] = FUN_0100b780(0x200);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0x200U;
  }
  local_18[2] = -0x7fffffc0;
  local_18[0] = local_18[3];
  FUN_010be5b0(0,param_1,param_2,local_18,&param_3,0,0);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 8 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],local_18[2] * 8);
  }
  return;
}

// 010C1490  FUN_010c1490  size=315  [between]
void FUN_010c1490(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int local_24 [4];
  int local_14;
  
  local_60 = *param_3;
  uStack_5c = param_3[1];
  uStack_58 = param_3[2];
  uStack_54 = param_3[3];
  local_70[0] = param_4;
  local_50 = *param_5;
  uStack_4c = param_5[1];
  uStack_48 = param_5[2];
  uStack_44 = param_5[3];
  local_40 = 0;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0x80000000;
  local_14 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_24[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x100) || (*(uint *)((int)pvVar3 + 0x10) < local_24[3] + 0x100U))
  {
    local_24[3] = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_24[3] + 0x100U;
  }
  local_24[2] = -0x7fffffc0;
  local_24[0] = local_24[3];
  FUN_010bebb0(param_2,local_24,local_70);
  iVar2 = local_14;
  iVar1 = local_24[3];
  if (local_24[3] == local_24[0]) {
    local_24[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_24[1] = 0;
  if (-1 < local_24[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24[0],local_24[2] * 4);
  }
  *param_1 = CONCAT44(uStack_4c,local_50);
  param_1[1] = CONCAT44(uStack_44,uStack_48);
  return;
}

// 010C17A0  FUN_010c17a0  size=122  [between]
void __fastcall FUN_010c17a0(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*param_1 + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar2[-2],((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar3);
    param_1[1] = 0;
    param_1[3] = 0;
    return;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  return;
}

// 010C18C0  FUN_010c18c0  size=207  [between]
void __thiscall FUN_010c18c0(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    iVar3 = param_2;
    if (param_2 < iVar5) {
      iVar3 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0xc);
  }
  iVar5 = (param_1[1] - param_2) + -1;
  if (-1 < iVar5) {
    puVar4 = (uint *)(*param_1 + param_2 * 0xc + 8 + iVar5 * 0xc);
    do {
      uVar1 = *puVar4;
      puVar4[-1] = 0;
      if (-1 < (int)uVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar4[-2],((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
      }
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -3;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = param_2 - param_1[1];
  puVar2 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar5) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 010C1990  FUN_010c1990  size=103  [between]
void __fastcall FUN_010c1990(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < iVar2);
  }
  param_1[3] = 0;
  param_1[1] = 0;
  return;
}

// 010C1AA0  FUN_010c1aa0  size=207  [between]
void __thiscall FUN_010c1aa0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    iVar2 = param_2;
    if (param_2 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar4 = (param_1[1] - param_2) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 8);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      piVar3 = piVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 010C1B70  FUN_010c1b70  size=849  [between]
void __thiscall FUN_010c1b70(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  puVar4 = (undefined4 *)(param_1 + 0x244);
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_010b7e90();
  if (param_2 != '\0') {
    iVar2 = *(int *)(param_1 + 0x10);
    piVar3 = (int *)(param_1 + 0x10);
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x600) == 0)) {
      iVar2 = FUN_010ac8e0();
    }
    if (iVar2 == 0) {
      _param_2 = (undefined4 *)0x0;
    }
    else {
      _param_2 = *(undefined4 **)(iVar2 + 0x600);
      *(undefined4 *)(iVar2 + 0x600) = *_param_2;
      _param_2[8] = iVar2;
      *(int *)(iVar2 + 0x60c) = *(int *)(iVar2 + 0x60c) + 1;
      _param_2[1] = 0;
      *_param_2 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 **)(*(int *)(param_1 + 0x14) + 4) = _param_2;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(undefined4 **)(param_1 + 0x14) = _param_2;
      _param_2[2] = 0;
      _param_2[3] = 0;
      _param_2[4] = 0xfffffffc;
    }
    iVar2 = *piVar3;
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x600) == 0)) {
      iVar2 = FUN_010ac8e0();
    }
    if (iVar2 == 0) {
      local_10 = (undefined4 *)0x0;
    }
    else {
      local_10 = *(undefined4 **)(iVar2 + 0x600);
      *(undefined4 *)(iVar2 + 0x600) = *local_10;
      local_10[8] = iVar2;
      *(int *)(iVar2 + 0x60c) = *(int *)(iVar2 + 0x60c) + 1;
      local_10[1] = 0;
      *local_10 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 **)(*(int *)(param_1 + 0x14) + 4) = local_10;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(undefined4 **)(param_1 + 0x14) = local_10;
      local_10[2] = 0;
      local_10[3] = 0x7fff;
      local_10[4] = 0xfffffffc;
    }
    iVar2 = *piVar3;
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x600) == 0)) {
      iVar2 = FUN_010ac8e0();
    }
    if (iVar2 == 0) {
      local_c = (undefined4 *)0x0;
    }
    else {
      local_c = *(undefined4 **)(iVar2 + 0x600);
      *(undefined4 *)(iVar2 + 0x600) = *local_c;
      local_c[8] = iVar2;
      *(int *)(iVar2 + 0x60c) = *(int *)(iVar2 + 0x60c) + 1;
      local_c[1] = 0;
      *local_c = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 **)(*(int *)(param_1 + 0x14) + 4) = local_c;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(undefined4 **)(param_1 + 0x14) = local_c;
      local_c[2] = 0x7fff;
      local_c[3] = 0;
      local_c[4] = 0xfffffffc;
    }
    iVar2 = *piVar3;
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x600) == 0)) {
      iVar2 = FUN_010ac8e0();
    }
    if (iVar2 == 0) {
      local_14 = (undefined4 *)0x0;
    }
    else {
      local_14 = *(undefined4 **)(iVar2 + 0x600);
      *(undefined4 *)(iVar2 + 0x600) = *local_14;
      local_14[8] = iVar2;
      *(int *)(iVar2 + 0x60c) = *(int *)(iVar2 + 0x60c) + 1;
      local_14[1] = 0;
      *local_14 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 **)(*(int *)(param_1 + 0x14) + 4) = local_14;
      }
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(undefined4 **)(param_1 + 0x14) = local_14;
      local_14[2] = 0x7fff;
      local_14[3] = 0x7fff;
      local_14[4] = 0xfffffffc;
    }
    if ((((_param_2 != (undefined4 *)0x0) && (local_10 != (undefined4 *)0x0)) &&
        (local_c != (undefined4 *)0x0)) && (local_14 != (undefined4 *)0x0)) {
      iVar2 = FUN_010bd750();
      if (iVar2 != 0) {
        *(undefined4 **)(iVar2 + 0x10) = local_14;
        *(undefined4 **)(iVar2 + 8) = _param_2;
        *(undefined4 *)(iVar2 + 0x22) = 0;
        *(undefined4 **)(iVar2 + 0xc) = local_c;
        *(int *)(param_1 + 0x244 +
                ((local_c[3] + *(int *)(*(int *)(iVar2 + 8) + 0xc) * 2 + local_14[3] >> 0xd) * 0x10
                + (local_c[2] + *(int *)(*(int *)(iVar2 + 8) + 8) * 2 + local_14[2] >> 0xd)) * 4) =
             iVar2;
        *(ushort *)(iVar2 + 0x22) = *(ushort *)(iVar2 + 0x22) | 8;
      }
      iVar1 = FUN_010bd750();
      if (iVar1 != 0) {
        *(undefined4 **)(iVar1 + 8) = _param_2;
        *(undefined4 **)(iVar1 + 0x10) = local_10;
        *(undefined4 **)(iVar1 + 0xc) = local_14;
        *(undefined4 *)(iVar1 + 0x22) = 0;
        *(int *)(param_1 + 0x244 +
                ((local_14[3] + *(int *)(*(int *)(iVar1 + 8) + 0xc) * 2 + local_10[3] >> 0xd) * 0x10
                + (local_14[2] + *(int *)(*(int *)(iVar1 + 8) + 8) * 2 + local_10[2] >> 0xd)) * 4) =
             iVar1;
        *(ushort *)(iVar1 + 0x22) = *(ushort *)(iVar1 + 0x22) | 8;
      }
      if ((iVar2 != 0) && (iVar1 != 0)) {
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(int *)(iVar2 + 0x1c) = iVar1;
        *(int *)(iVar1 + 0x14) = iVar2 + 2;
        return;
      }
      *(undefined1 *)(param_1 + 0x648) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x648) = 1;
  }
  return;
}

// 010C23B0  FUN_010c23b0  size=242  [between]
void FUN_010c23b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x100) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0x100U))
  {
    local_18[3] = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0x100U;
  }
  local_18[2] = -0x7fffffc0;
  local_18[0] = local_18[3];
  hkgpMesh::IConvexOverlap::IConvexShape::IConvexShape(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],local_18[2] * 4);
  }
  return;
}

// 010C24B0  FUN_010c24b0  size=242  [between]
void FUN_010c24b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_18 [4];
  int local_8;
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0x80000000;
  local_8 = 0x40;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_18[3] = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x100) || (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + 0x100U))
  {
    local_18[3] = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_18[3] + 0x100U;
  }
  local_18[2] = -0x7fffffc0;
  local_18[0] = local_18[3];
  FUN_010c05d0(param_1,local_18,param_2);
  iVar2 = local_8;
  iVar1 = local_18[3];
  if (local_18[3] == local_18[0]) {
    local_18[1] = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  local_18[1] = 0;
  if (-1 < local_18[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],local_18[2] * 4);
  }
  return;
}

// 010C25B0  FUN_010c25b0  size=744  [between]
void FUN_010c25b0(uint *param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar8 = *param_2;
  uVar6 = 0x12 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3;
  iVar2 = *(int *)(uVar8 + 8 + (9 >> (char)uVar6 * '\x02' & 3U) * 4);
  iVar3 = *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 8);
  iVar4 = *(int *)(iVar2 + 8);
  if ((iVar4 <= iVar3) &&
     (((iVar4 < iVar3 || (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 0xc)))
      && (uVar7 = *(uint *)(uVar8 + 0x14 + uVar6 * 4), (uVar7 & 0xfffffffc) != 0)))) {
    uVar6 = uVar7 & 3;
    uVar8 = uVar7 & 0xfffffffc;
  }
  uVar6 = 1 << (sbyte)uVar6 & (uint)*(ushort *)(uVar8 + 0x22) & 7;
  *(ushort *)(uVar8 + 0x22) = *(ushort *)(uVar8 + 0x22) & (~(ushort)uVar6 | 0xfff8);
  uVar8 = *(uint *)(*param_2 + 0x14 + param_2[1] * 4);
  uVar7 = uVar8 & 0xfffffffc;
  uVar8 = 0x12 >> ((byte)uVar8 & 3) * '\x02' & 3;
  iVar2 = *(int *)(uVar7 + 8 + (9 >> (char)uVar8 * '\x02' & 3U) * 4);
  iVar3 = *(int *)(*(int *)(uVar7 + 8 + uVar8 * 4) + 8);
  iVar4 = *(int *)(iVar2 + 8);
  if (((iVar4 <= iVar3) &&
      ((iVar4 < iVar3 || (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar7 + 8 + uVar8 * 4) + 0xc))))
      ) && (uVar9 = *(uint *)(uVar7 + 0x14 + uVar8 * 4), (uVar9 & 0xfffffffc) != 0)) {
    uVar8 = uVar9 & 3;
    uVar7 = uVar9 & 0xfffffffc;
  }
  uVar11 = 1 << (sbyte)uVar8 & (uint)*(ushort *)(uVar7 + 0x22) & 7;
  *(ushort *)(uVar7 + 0x22) = *(ushort *)(uVar7 + 0x22) & (~(ushort)uVar11 | 0xfff8);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar9 = *(uint *)(uVar7 + 0x14 + uVar8 * 4);
  uVar10 = uVar9 & 0xfffffffc;
  uVar9 = uVar9 & 3;
  uVar12 = 0x12 >> ((char)uVar8 * '\x02' & 0x1fU) & 3;
  uVar14 = 0x12 >> (char)uVar9 * '\x02' & 3;
  *(undefined4 *)(uVar7 + 8 + uVar8 * 4) = *(undefined4 *)(uVar10 + 8 + uVar14 * 4);
  *(undefined4 *)(uVar10 + 8 + uVar9 * 4) = *(undefined4 *)(uVar7 + 8 + uVar12 * 4);
  uVar8 = *(uint *)(uVar7 + 0x14 + uVar12 * 4);
  uVar13 = uVar8 & 3;
  uVar8 = uVar8 & 0xfffffffc;
  *(uint *)(uVar10 + 0x14 + uVar9 * 4) = uVar13 + uVar8;
  if (uVar8 != 0) {
    *(uint *)(uVar8 + 0x14 + uVar13 * 4) = uVar9 + uVar10;
  }
  uVar8 = *(uint *)(uVar10 + 0x14 + uVar14 * 4);
  uVar9 = uVar8 & 3;
  uVar8 = uVar8 & 0xfffffffc;
  *(uint *)(*param_2 + 0x14 + param_2[1] * 4) = uVar9 + uVar8;
  if (uVar8 != 0) {
    *(uint *)(uVar8 + 0x14 + uVar9 * 4) = param_2[1] + *param_2;
  }
  *(uint *)(uVar7 + 0x14 + uVar12 * 4) = uVar14 + uVar10;
  if (uVar10 != 0) {
    *(uint *)(uVar10 + 0x14 + uVar14 * 4) = uVar12 + uVar7;
  }
  uVar8 = *param_2;
  uVar7 = param_2[1];
  *param_1 = uVar8;
  uVar7 = 0x12 >> ((char)uVar7 * '\x02' & 0x1fU) & 3;
  param_1[1] = uVar7;
  if (uVar6 != 0) {
    uVar8 = *(uint *)(uVar8 + 0x14 + uVar7 * 4);
    uVar6 = uVar8 & 0xfffffffc;
    uVar8 = 9 >> ((byte)uVar8 & 3) * '\x02' & 3;
    iVar2 = *(int *)(uVar6 + 8 + uVar8 * 4);
    iVar3 = *(int *)(uVar6 + 8 + (9 >> (char)uVar8 * '\x02' & 3U) * 4);
    iVar4 = *(int *)(iVar2 + 8);
    iVar5 = *(int *)(iVar3 + 8);
    if (((iVar5 <= iVar4) && ((iVar5 < iVar4 || (*(int *)(iVar3 + 0xc) < *(int *)(iVar2 + 0xc)))))
       && (uVar7 = *(uint *)(uVar6 + 0x14 + uVar8 * 4), (uVar7 & 0xfffffffc) != 0)) {
      uVar8 = uVar7 & 3;
      uVar6 = uVar7 & 0xfffffffc;
    }
    uVar1 = *(ushort *)(uVar6 + 0x22);
    *(ushort *)(uVar6 + 0x22) = ((1 << (sbyte)uVar8 | uVar1) ^ uVar1) & 7 ^ uVar1;
  }
  if (uVar11 != 0) {
    uVar8 = *param_1;
    uVar6 = 9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3;
    iVar2 = *(int *)(uVar8 + 8 + (9 >> (char)uVar6 * '\x02' & 3U) * 4);
    iVar3 = *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 8);
    iVar4 = *(int *)(iVar2 + 8);
    if ((iVar4 <= iVar3) &&
       (((iVar4 < iVar3 || (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 0xc))
         ) && (uVar7 = *(uint *)(uVar8 + 0x14 + uVar6 * 4), (uVar7 & 0xfffffffc) != 0)))) {
      uVar6 = uVar7 & 3;
      uVar8 = uVar7 & 0xfffffffc;
    }
    uVar1 = *(ushort *)(uVar8 + 0x22);
    *(ushort *)(uVar8 + 0x22) = ((1 << (sbyte)uVar6 | uVar1) ^ uVar1) & 7 ^ uVar1;
  }
  return;
}

// 010C28D0  FUN_010c28d0  size=75  [between]
void __fastcall FUN_010c28d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 1;
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  do {
    puVar2[-7] = 0;
    if (-1 < (int)puVar2[-6]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar2[-8],puVar2[-6] * 4);
    }
    iVar1 = iVar1 + -1;
    puVar2[-8] = 0;
    puVar2[-6] = 0x80000000;
    puVar2 = puVar2 + -6;
  } while (-1 < iVar1);
  return;
}

// 010C2920  FUN_010c2920  size=146  [between]
void __thiscall FUN_010c2920(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 << 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010C29C0  FUN_010c29c0  size=293  [between]
void __thiscall FUN_010c29c0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1[1] + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 << 4);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + -3;
    } while (-1 < iVar4);
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    iVar2 = param_2;
    if (param_2 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar4 = (param_1[1] - param_2) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 << 4);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + -3;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  if (0 < param_2) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*param_1 + 4 + iVar4) = 0;
      iVar4 = iVar4 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010C2AF0  FUN_010c2af0  size=95  [between]
void FUN_010c2af0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = 0;
    if (-1 < (int)param_1[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
    }
    *param_1 = 0;
    param_1[2] = 0x80000000;
    iVar2 = param_1[8];
    piVar1 = (int *)(iVar2 + 0x60c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_010a8730(iVar2);
    }
  }
  return;
}

// 010C2F50  FUN_010c2f50  size=296  [between]
void __thiscall FUN_010c2f50(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = param_1[1] + -1;
  if (-1 < iVar5) {
    puVar4 = (uint *)(*param_1 + 8 + iVar5 * 0xc);
    do {
      uVar1 = *puVar4;
      puVar4[-1] = 0;
      if (-1 < (int)uVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar4[-2],((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
      }
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + -3;
    } while (-1 < iVar5);
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    iVar3 = param_2;
    if (param_2 < iVar5) {
      iVar3 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0xc);
  }
  iVar5 = (param_1[1] - param_2) + -1;
  if (-1 < iVar5) {
    puVar4 = (uint *)(*param_1 + param_2 * 0xc + 8 + iVar5 * 0xc);
    do {
      uVar1 = *puVar4;
      puVar4[-1] = 0;
      if (-1 < (int)uVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (puVar4[-2],((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
      }
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + -3;
    } while (-1 < iVar5);
  }
  iVar5 = param_2 - param_1[1];
  puVar2 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar5) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[1] = param_2;
  if (0 < param_2) {
    iVar5 = 0;
    do {
      *(undefined4 *)(*param_1 + 4 + iVar5) = 0;
      iVar5 = iVar5 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010C3120  FUN_010c3120  size=296  [between]
void __thiscall FUN_010c3120(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1[1] + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 8);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + -3;
    } while (-1 < iVar4);
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    iVar2 = param_2;
    if (param_2 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar4 = (param_1[1] - param_2) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 8);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + -3;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  if (0 < param_2) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*param_1 + 4 + iVar4) = 0;
      iVar4 = iVar4 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010C34B0  FUN_010c34b0  size=744  [between]
void FUN_010c34b0(uint *param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar8 = *param_2;
  uVar6 = 0x12 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3;
  iVar2 = *(int *)(uVar8 + 8 + (9 >> (char)uVar6 * '\x02' & 3U) * 4);
  iVar3 = *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 8);
  iVar4 = *(int *)(iVar2 + 8);
  if ((iVar4 <= iVar3) &&
     (((iVar4 < iVar3 || (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 0xc)))
      && (uVar7 = *(uint *)(uVar8 + 0x14 + uVar6 * 4), (uVar7 & 0xfffffffc) != 0)))) {
    uVar6 = uVar7 & 3;
    uVar8 = uVar7 & 0xfffffffc;
  }
  uVar6 = 1 << (sbyte)uVar6 & (uint)*(ushort *)(uVar8 + 0x22) & 7;
  *(ushort *)(uVar8 + 0x22) = *(ushort *)(uVar8 + 0x22) & (~(ushort)uVar6 | 0xfff8);
  uVar8 = *(uint *)(*param_2 + 0x14 + param_2[1] * 4);
  uVar7 = uVar8 & 0xfffffffc;
  uVar8 = 0x12 >> ((byte)uVar8 & 3) * '\x02' & 3;
  iVar2 = *(int *)(uVar7 + 8 + (9 >> (char)uVar8 * '\x02' & 3U) * 4);
  iVar3 = *(int *)(*(int *)(uVar7 + 8 + uVar8 * 4) + 8);
  iVar4 = *(int *)(iVar2 + 8);
  if (((iVar4 <= iVar3) &&
      ((iVar4 < iVar3 || (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar7 + 8 + uVar8 * 4) + 0xc))))
      ) && (uVar9 = *(uint *)(uVar7 + 0x14 + uVar8 * 4), (uVar9 & 0xfffffffc) != 0)) {
    uVar8 = uVar9 & 3;
    uVar7 = uVar9 & 0xfffffffc;
  }
  uVar11 = 1 << (sbyte)uVar8 & (uint)*(ushort *)(uVar7 + 0x22) & 7;
  *(ushort *)(uVar7 + 0x22) = *(ushort *)(uVar7 + 0x22) & (~(ushort)uVar11 | 0xfff8);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  uVar9 = *(uint *)(uVar7 + 0x14 + uVar8 * 4);
  uVar10 = uVar9 & 0xfffffffc;
  uVar9 = uVar9 & 3;
  uVar12 = 0x12 >> ((char)uVar8 * '\x02' & 0x1fU) & 3;
  uVar14 = 0x12 >> (char)uVar9 * '\x02' & 3;
  *(undefined4 *)(uVar7 + 8 + uVar8 * 4) = *(undefined4 *)(uVar10 + 8 + uVar14 * 4);
  *(undefined4 *)(uVar10 + 8 + uVar9 * 4) = *(undefined4 *)(uVar7 + 8 + uVar12 * 4);
  uVar8 = *(uint *)(uVar7 + 0x14 + uVar12 * 4);
  uVar13 = uVar8 & 3;
  uVar8 = uVar8 & 0xfffffffc;
  *(uint *)(uVar10 + 0x14 + uVar9 * 4) = uVar13 + uVar8;
  if (uVar8 != 0) {
    *(uint *)(uVar8 + 0x14 + uVar13 * 4) = uVar9 + uVar10;
  }
  uVar8 = *(uint *)(uVar10 + 0x14 + uVar14 * 4);
  uVar9 = uVar8 & 3;
  uVar8 = uVar8 & 0xfffffffc;
  *(uint *)(*param_2 + 0x14 + param_2[1] * 4) = uVar9 + uVar8;
  if (uVar8 != 0) {
    *(uint *)(uVar8 + 0x14 + uVar9 * 4) = param_2[1] + *param_2;
  }
  *(uint *)(uVar7 + 0x14 + uVar12 * 4) = uVar14 + uVar10;
  if (uVar10 != 0) {
    *(uint *)(uVar10 + 0x14 + uVar14 * 4) = uVar12 + uVar7;
  }
  uVar8 = *param_2;
  uVar7 = param_2[1];
  *param_1 = uVar8;
  uVar7 = 0x12 >> ((char)uVar7 * '\x02' & 0x1fU) & 3;
  param_1[1] = uVar7;
  if (uVar6 != 0) {
    uVar8 = *(uint *)(uVar8 + 0x14 + uVar7 * 4);
    uVar6 = uVar8 & 0xfffffffc;
    uVar8 = 9 >> ((byte)uVar8 & 3) * '\x02' & 3;
    iVar2 = *(int *)(uVar6 + 8 + uVar8 * 4);
    iVar3 = *(int *)(uVar6 + 8 + (9 >> (char)uVar8 * '\x02' & 3U) * 4);
    iVar4 = *(int *)(iVar2 + 8);
    iVar5 = *(int *)(iVar3 + 8);
    if (((iVar5 <= iVar4) && ((iVar5 < iVar4 || (*(int *)(iVar3 + 0xc) < *(int *)(iVar2 + 0xc)))))
       && (uVar7 = *(uint *)(uVar6 + 0x14 + uVar8 * 4), (uVar7 & 0xfffffffc) != 0)) {
      uVar8 = uVar7 & 3;
      uVar6 = uVar7 & 0xfffffffc;
    }
    uVar1 = *(ushort *)(uVar6 + 0x22);
    *(ushort *)(uVar6 + 0x22) = ((1 << (sbyte)uVar8 | uVar1) ^ uVar1) & 7 ^ uVar1;
  }
  if (uVar11 != 0) {
    uVar8 = *param_1;
    uVar6 = 9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3;
    iVar2 = *(int *)(uVar8 + 8 + (9 >> (char)uVar6 * '\x02' & 3U) * 4);
    iVar3 = *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 8);
    iVar4 = *(int *)(iVar2 + 8);
    if ((iVar4 <= iVar3) &&
       (((iVar4 < iVar3 || (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar8 + 8 + uVar6 * 4) + 0xc))
         ) && (uVar7 = *(uint *)(uVar8 + 0x14 + uVar6 * 4), (uVar7 & 0xfffffffc) != 0)))) {
      uVar6 = uVar7 & 3;
      uVar8 = uVar7 & 0xfffffffc;
    }
    uVar1 = *(ushort *)(uVar8 + 0x22);
    *(ushort *)(uVar8 + 0x22) = ((1 << (sbyte)uVar6 | uVar1) ^ uVar1) & 7 ^ uVar1;
  }
  return;
}

// 010C3830  FUN_010c3830  size=1633  [__FILE__]
void __fastcall FUN_010c3830(int param_1)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  int *piVar16;
  undefined1 local_268 [512];
  undefined4 local_68;
  uint local_60;
  uint local_58;
  uint local_50;
  uint local_44;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_38 = *(int *)(param_1 + 0x28) * 3 + 1;
  piVar16 = (int *)(param_1 + 0x30);
  local_2c = param_1;
  local_14 = piVar16;
  do {
    piVar8 = local_14;
    uVar10 = *(uint *)(*piVar16 + -8 + piVar16[1] * 8);
    local_24 = *(uint *)(*piVar16 + -4 + piVar16[1] * 8);
    piVar16[1] = piVar16[1] + -1;
    local_1c = *(uint *)(uVar10 + 0x14 + local_24 * 4);
    local_28 = uVar10;
    if ((local_1c & 0xfffffffc) != 0) {
      local_c = local_24 * 2;
      local_8 = *(uint *)(uVar10 + 8 + (9 >> ((byte)local_c & 0x1f) & 3U) * 4);
      local_18 = *(int *)(uVar10 + 8 + local_24 * 4);
      uVar12 = local_24;
      uVar9 = uVar10;
      if (*(int *)(local_8 + 8) <= *(int *)(local_18 + 8)) {
        if (*(int *)(local_18 + 8) <= *(int *)(local_8 + 8)) {
          if ((*(int *)(local_18 + 0xc) < *(int *)(local_8 + 0xc)) ||
             (*(int *)(local_18 + 0xc) <= *(int *)(local_8 + 0xc))) goto LAB_010c38c1;
        }
        uVar12 = local_1c & 3;
        uVar9 = local_1c & 0xfffffffc;
      }
LAB_010c38c1:
      local_20 = 1;
      if (((uint)*(ushort *)(uVar9 + 0x22) & 1 << ((byte)uVar12 & 0x1f) & 7) == 0) {
        iVar11 = *(int *)((local_1c & 0xfffffffc) + 8 +
                         (0x12 >> ((byte)local_1c & 3) * '\x02' & 3U) * 4);
        local_10 = 0x12 >> ((byte)local_c & 0x1f) & 3;
        iVar3 = *(int *)(uVar10 + 8 + local_10 * 4);
        local_c = *(int *)(iVar11 + 8);
        iVar11 = *(int *)(iVar11 + 0xc);
        local_30 = *(int *)(iVar3 + 8) - local_c;
        local_3c = *(int *)(local_18 + 8) - local_c;
        local_20 = *(int *)(iVar3 + 0xc) - iVar11;
        local_34 = *(int *)(local_18 + 0xc) - iVar11;
        local_c = *(int *)(local_8 + 8) - local_c;
        iVar11 = *(int *)(local_8 + 0xc) - iVar11;
        lVar6 = (longlong)(int)(local_30 * local_30 + local_20 * local_20) *
                (longlong)(local_3c * iVar11 - local_34 * local_c);
        local_68 = (undefined4)lVar6;
        lVar6 = (longlong)(local_3c * local_3c + local_34 * local_34) *
                (longlong)(int)(local_20 * local_c - local_30 * iVar11) + lVar6 +
                (longlong)(int)(local_30 * local_34 - local_20 * local_3c) *
                (longlong)(local_c * local_c + iVar11 * iVar11);
        iVar11 = -((int)((ulonglong)lVar6 >> 0x20) + (uint)((int)lVar6 != 0));
        piVar16 = piVar8;
        if ((iVar11 < 1) && (iVar11 < 0)) {
          if (*(int *)(local_18 + 8) < *(int *)(local_8 + 8)) {
LAB_010c39e3:
            bVar15 = (byte)local_24;
            uVar12 = uVar10;
          }
          else {
            if (*(int *)(local_18 + 8) <= *(int *)(local_8 + 8)) {
              if ((*(int *)(local_18 + 0xc) < *(int *)(local_8 + 0xc)) ||
                 (*(int *)(local_18 + 0xc) <= *(int *)(local_8 + 0xc))) goto LAB_010c39e3;
            }
            bVar15 = (byte)local_1c & 3;
            uVar12 = local_1c & 0xfffffffc;
          }
          local_8 = 1;
          if (((uint)*(ushort *)(uVar12 + 0x22) & 1 << (bVar15 & 0x1f) & 7) == 0) {
            local_60 = local_1c & 0xfffffffc;
            uVar12 = local_1c & 3;
            iVar11 = *(int *)(uVar10 + 8 + local_10 * 4);
            iVar3 = *(int *)(local_60 + 8 + (0x12 >> (char)uVar12 * '\x02' & 3U) * 4);
            local_8 = *(uint *)(iVar11 + 0xc);
            iVar11 = *(int *)(iVar11 + 8);
            if (0 < (int)((*(int *)(local_18 + 8) - iVar11) * (*(int *)(iVar3 + 0xc) - local_8) -
                         (*(int *)(local_18 + 0xc) - local_8) * (*(int *)(iVar3 + 8) - iVar11))) {
              local_8 = *(uint *)(iVar3 + 0xc);
              local_1c = *(uint *)(iVar3 + 8);
              iVar11 = *(int *)(local_60 + 8 + uVar12 * 4);
              iVar3 = *(int *)(uVar10 + 8 + local_10 * 4);
              if (0 < (int)((*(int *)(iVar3 + 0xc) - local_8) * (*(int *)(iVar11 + 8) - local_1c) -
                           (*(int *)(iVar3 + 8) - local_1c) * (*(int *)(iVar11 + 0xc) - local_8))) {
                cVar7 = (char)local_10;
                iVar11 = *(int *)(uVar10 + 8 + local_10 * 4);
                iVar3 = *(int *)(iVar11 + 8);
                iVar4 = *(int *)(uVar10 + 8 + (9 >> cVar7 * '\x02' & 3U) * 4);
                iVar5 = *(int *)(iVar4 + 8);
                uVar12 = local_10;
                uVar9 = uVar10;
                if ((iVar5 <= iVar3) &&
                   (((iVar5 < iVar3 || (*(int *)(iVar4 + 0xc) < *(int *)(iVar11 + 0xc))) &&
                    (uVar13 = *(uint *)(uVar10 + 0x14 + local_10 * 4), (uVar13 & 0xfffffffc) != 0)))
                   ) {
                  uVar12 = uVar13 & 3;
                  uVar9 = uVar13 & 0xfffffffc;
                }
                local_30 = 1 << (sbyte)uVar12 & (uint)*(ushort *)(uVar9 + 0x22) & 7;
                *(ushort *)(uVar9 + 0x22) = *(ushort *)(uVar9 + 0x22) & (~(ushort)local_30 | 0xfff8)
                ;
                uVar12 = *(uint *)(uVar10 + 0x14 + local_24 * 4);
                uVar9 = uVar12 & 0xfffffffc;
                uVar12 = 0x12 >> ((byte)uVar12 & 3) * '\x02' & 3;
                iVar11 = *(int *)(*(int *)(uVar9 + 8 + uVar12 * 4) + 8);
                iVar3 = *(int *)(uVar9 + 8 + (9 >> (char)uVar12 * '\x02' & 3U) * 4);
                iVar4 = *(int *)(iVar3 + 8);
                if (((iVar4 <= iVar11) &&
                    ((iVar4 < iVar11 ||
                     (*(int *)(iVar3 + 0xc) < *(int *)(*(int *)(uVar9 + 8 + uVar12 * 4) + 0xc)))))
                   && (uVar13 = *(uint *)(uVar9 + 0x14 + uVar12 * 4), (uVar13 & 0xfffffffc) != 0)) {
                  uVar12 = uVar13 & 3;
                  uVar9 = uVar13 & 0xfffffffc;
                }
                local_8 = 1 << (sbyte)uVar12 & (uint)*(ushort *)(uVar9 + 0x22) & 7;
                *(ushort *)(uVar9 + 0x22) = *(ushort *)(uVar9 + 0x22) & (~(ushort)local_8 | 0xfff8);
                uVar12 = *(uint *)(uVar10 + 0x14 + local_24 * 4);
                uVar9 = uVar12 & 3;
                uVar12 = uVar12 & 0xfffffffc;
                uVar13 = 0x12 >> (char)uVar9 * '\x02' & 3;
                *(undefined4 *)(uVar10 + 8 + local_24 * 4) =
                     *(undefined4 *)(uVar12 + 8 + uVar13 * 4);
                *(undefined4 *)(uVar12 + 8 + uVar9 * 4) = *(undefined4 *)(uVar10 + 8 + local_10 * 4)
                ;
                local_50 = *(uint *)(uVar10 + 0x14 + local_10 * 4);
                uVar14 = local_50 & 3;
                local_50 = local_50 & 0xfffffffc;
                *(uint *)(uVar12 + 0x14 + uVar9 * 4) = local_50 + uVar14;
                if (local_50 != 0) {
                  *(uint *)(local_50 + 0x14 + uVar14 * 4) = uVar9 + uVar12;
                }
                local_58 = *(uint *)(uVar12 + 0x14 + uVar13 * 4);
                uVar9 = local_58 & 3;
                local_58 = local_58 & 0xfffffffc;
                *(uint *)(uVar10 + 0x14 + local_24 * 4) = local_58 + uVar9;
                if (local_58 != 0) {
                  *(uint *)(local_58 + 0x14 + uVar9 * 4) = local_24 + uVar10;
                }
                *(uint *)(uVar10 + 0x14 + local_10 * 4) = uVar12 + uVar13;
                if (uVar12 != 0) {
                  *(uint *)(uVar12 + 0x14 + uVar13 * 4) = local_10 + uVar10;
                }
                if (local_30 != 0) {
                  uVar12 = *(uint *)(uVar10 + 0x14 + local_10 * 4);
                  uVar9 = uVar12 & 0xfffffffc;
                  uVar12 = 9 >> ((byte)uVar12 & 3) * '\x02' & 3;
                  iVar11 = *(int *)(uVar9 + 8 + (9 >> (char)uVar12 * '\x02' & 3U) * 4);
                  iVar3 = *(int *)(*(int *)(uVar9 + 8 + uVar12 * 4) + 8);
                  iVar4 = *(int *)(iVar11 + 8);
                  if (((iVar4 <= iVar3) &&
                      ((iVar4 < iVar3 ||
                       (*(int *)(iVar11 + 0xc) < *(int *)(*(int *)(uVar9 + 8 + uVar12 * 4) + 0xc))))
                      ) && (uVar13 = *(uint *)(uVar9 + 0x14 + uVar12 * 4),
                           (uVar13 & 0xfffffffc) != 0)) {
                    uVar12 = uVar13 & 3;
                    uVar9 = uVar13 & 0xfffffffc;
                  }
                  uVar2 = *(ushort *)(uVar9 + 0x22);
                  *(ushort *)(uVar9 + 0x22) = ((1 << (sbyte)uVar12 | uVar2) ^ uVar2) & 7 ^ uVar2;
                }
                if (local_8 != 0) {
                  uVar9 = 9 >> cVar7 * '\x02' & 3;
                  iVar11 = *(int *)(uVar10 + 8 + (9 >> (char)uVar9 * '\x02' & 3U) * 4);
                  iVar3 = *(int *)(uVar10 + 8 + uVar9 * 4);
                  iVar4 = *(int *)(iVar3 + 8);
                  iVar5 = *(int *)(iVar11 + 8);
                  uVar12 = uVar10;
                  if ((iVar5 <= iVar4) &&
                     (((iVar5 < iVar4 || (*(int *)(iVar11 + 0xc) < *(int *)(iVar3 + 0xc))) &&
                      (uVar13 = *(uint *)(uVar10 + 0x14 + uVar9 * 4), (uVar13 & 0xfffffffc) != 0))))
                  {
                    uVar9 = uVar13 & 3;
                    uVar12 = uVar13 & 0xfffffffc;
                  }
                  uVar2 = *(ushort *)(uVar12 + 0x22);
                  *(ushort *)(uVar12 + 0x22) = ((1 << (sbyte)uVar9 | uVar2) ^ uVar2) & 7 ^ uVar2;
                }
                iVar11 = *(int *)(local_2c + 0x34) + 2;
                if ((int)(local_14[2] & 0x3fffffffU) < iVar11) {
                  iVar3 = (local_14[2] & 0x3fffffffU) * 2;
                  if (iVar11 < iVar3) {
                    iVar11 = iVar3;
                  }
                  iVar11 = FUN_0100a210(&PTR_vftable_018e9b94,local_14,iVar11,8);
                  if (iVar11 == 1) {
                    *(undefined1 *)(local_2c + 0x648) = 1;
                    return;
                  }
                }
                uVar12 = (9 >> cVar7 * '\x02' & 3U) + uVar10;
                local_44 = uVar12 & 0xfffffffc;
                if (piVar8[1] == (piVar8[2] & 0x3fffffffU)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,piVar8,8);
                }
                puVar1 = (uint *)(*piVar8 + piVar8[1] * 8);
                if (puVar1 != (uint *)0x0) {
                  *puVar1 = local_44;
                  puVar1[1] = uVar12 & 3;
                }
                piVar8[1] = piVar8[1] + 1;
                uVar10 = *(uint *)(uVar10 + 0x14 + local_10 * 4);
                uVar10 = (0x12 >> ((byte)uVar10 & 3) * '\x02' & 3U) + (uVar10 & 0xfffffffc);
                if (piVar8[1] == (piVar8[2] & 0x3fffffffU)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,piVar8,8);
                }
                puVar1 = (uint *)(*piVar8 + piVar8[1] * 8);
                if (puVar1 != (uint *)0x0) {
                  *puVar1 = uVar10 & 0xfffffffc;
                  puVar1[1] = uVar10 & 3;
                }
                piVar8[1] = piVar8[1] + 1;
              }
            }
          }
        }
      }
    }
    if ((*(int *)(local_2c + 0x34) < 1) || (local_38 = local_38 + -1, local_38 == 0)) {
      if (local_38 == 0) {
        hkErrStream::hkErrStream(local_268,0x200);
        FUN_01018d00("Infinite cycle detected during triangulation");
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (1,0xd26e67e,local_268,
                   "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/Triangulator/hkgpTriangulator.inl"
                   ,0x869);
        hkBaseObject::hkBaseObject_38();
      }
      return;
    }
  } while( true );
}

// 010C3EA0  FUN_010c3ea0  size=340  [between]
void __thiscall FUN_010c3ea0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    iVar5 = *(int *)(*param_2 + 8 + param_2[1] * 4);
    iVar7 = *(int *)(*param_2 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4);
    uVar8 = *(int *)(iVar5 + 0xc) * 0x3442a5 + *(int *)(iVar5 + 8) * 0x21528000 ^
            *(int *)(iVar7 + 0xc) * 0x1958e9 + *(int *)(iVar7 + 8) * -0x538b8000;
    iVar1 = 0;
    piVar2 = (int *)(*piVar2 + (uVar8 % (uint)piVar2[1]) * 0xc);
    iVar4 = piVar2[1];
    if (0 < iVar4) {
      piVar2 = (int *)*piVar2;
      piVar6 = piVar2;
      while ((*piVar6 != iVar5 || (piVar6[1] != iVar7))) {
        iVar1 = iVar1 + 1;
        piVar6 = piVar6 + 4;
        if (iVar4 <= iVar1) {
          return;
        }
      }
      if ((iVar1 != -1) && (piVar2 = piVar2 + iVar1 * 4, piVar2 != (int *)0x0)) {
        FUN_010c2af0(piVar2[3]);
        param_1 = (int *)*param_1;
        uVar8 = uVar8 % (uint)param_1[1];
        param_1[3] = param_1[3] + -1;
        iVar4 = *(int *)(*param_1 + 4 + uVar8 * 0xc);
        piVar2 = (int *)(*param_1 + uVar8 * 0xc);
        iVar1 = 0;
        if (0 < iVar4) {
          piVar6 = (int *)*piVar2;
          while ((*piVar6 != iVar5 || (piVar6[1] != iVar7))) {
            iVar1 = iVar1 + 1;
            piVar6 = piVar6 + 4;
            if (iVar4 <= iVar1) {
              return;
            }
          }
          if (-1 < iVar1) {
            iVar1 = 0;
            if (0 < iVar4) {
              piVar6 = (int *)*piVar2;
              do {
                if ((*piVar6 == iVar5) && (piVar6[1] == iVar7)) goto LAB_010c3fc4;
                iVar1 = iVar1 + 1;
                piVar6 = piVar6 + 4;
              } while (iVar1 < iVar4);
            }
            iVar1 = -1;
LAB_010c3fc4:
            iVar4 = iVar4 + -1;
            piVar2[1] = iVar4;
            if (iVar4 != iVar1) {
              puVar3 = (undefined4 *)(iVar1 * 0x10 + *piVar2);
              iVar5 = (iVar4 * 0x10 + *piVar2) - (int)puVar3;
              iVar7 = 4;
              do {
                *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
                puVar3 = puVar3 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
          }
        }
      }
    }
  }
  return;
}

// 010C4180  FUN_010c4180  size=1411  [__FILE__]
void __fastcall FUN_010c4180(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_260 [512];
  uint local_60;
  undefined4 local_58;
  uint local_50;
  uint local_44;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_30 = *(int *)(param_1 + 0x28) * 3 + 1;
  while( true ) {
    local_1c = *(int **)(param_1 + 0x24);
    local_28 = 0;
    if (local_1c == (int *)0x0) break;
    do {
      local_10 = 0;
      do {
        local_c = local_1c[local_10 + 5];
        if ((local_c & 0xfffffffc) != 0) {
          local_20 = local_10 * 2;
          local_24 = local_1c[local_10 + 2];
          local_8 = local_1c[(9 >> ((byte)local_20 & 0x1f) & 3U) + 2];
          bVar5 = (byte)local_c;
          bVar11 = (byte)local_10;
          piVar8 = local_1c;
          bVar6 = bVar11;
          if (*(int *)(local_8 + 8) <= *(int *)(local_24 + 8)) {
            if (*(int *)(local_24 + 8) <= *(int *)(local_8 + 8)) {
              if ((*(int *)(local_24 + 0xc) < *(int *)(local_8 + 0xc)) ||
                 (*(int *)(local_24 + 0xc) <= *(int *)(local_8 + 0xc))) goto LAB_010c422a;
            }
            piVar8 = (int *)(local_c & 0xfffffffc);
            bVar6 = bVar5 & 3;
          }
LAB_010c422a:
          if (((uint)*(ushort *)((int)piVar8 + 0x22) & 1 << (bVar6 & 0x1f) & 7) == 0) {
            iVar7 = *(int *)((local_c & 0xfffffffc) + 8 + (0x12 >> (bVar5 & 3) * '\x02' & 3U) * 4);
            local_14 = *(int *)(iVar7 + 8);
            local_3c = *(int *)(local_24 + 8) - local_14;
            local_18 = 0x12 >> ((byte)local_20 & 0x1f) & 3;
            iVar7 = *(int *)(iVar7 + 0xc);
            local_34 = *(int *)(local_1c[local_18 + 2] + 8) - local_14;
            local_2c = *(int *)(local_24 + 0xc) - iVar7;
            local_20 = *(int *)(local_1c[local_18 + 2] + 0xc) - iVar7;
            local_14 = *(int *)(local_8 + 8) - local_14;
            iVar7 = *(int *)(local_8 + 0xc) - iVar7;
            lVar4 = (longlong)(int)(local_34 * local_34 + local_20 * local_20) *
                    (longlong)(local_3c * iVar7 - local_2c * local_14);
            local_58 = (undefined4)lVar4;
            lVar4 = (longlong)(local_3c * local_3c + local_2c * local_2c) *
                    (longlong)(int)(local_20 * local_14 - local_34 * iVar7) + lVar4 +
                    (longlong)(int)(local_34 * local_2c - local_20 * local_3c) *
                    (longlong)(local_14 * local_14 + iVar7 * iVar7);
            iVar7 = -((int)((ulonglong)lVar4 >> 0x20) + (uint)((int)lVar4 != 0));
            if ((iVar7 < 1) && (iVar7 < 0)) {
              piVar8 = local_1c;
              if (*(int *)(local_8 + 8) <= *(int *)(local_24 + 8)) {
                if (*(int *)(local_24 + 8) <= *(int *)(local_8 + 8)) {
                  if ((*(int *)(local_24 + 0xc) < *(int *)(local_8 + 0xc)) ||
                     (*(int *)(local_24 + 0xc) <= *(int *)(local_8 + 0xc))) goto LAB_010c4360;
                }
                bVar11 = bVar5 & 3;
                piVar8 = (int *)(local_c & 0xfffffffc);
              }
LAB_010c4360:
              local_8 = 1;
              if (((uint)*(ushort *)((int)piVar8 + 0x22) & 1 << (bVar11 & 0x1f) & 7) == 0) {
                uVar12 = local_c & 3;
                local_50 = local_c & 0xfffffffc;
                iVar7 = *(int *)(local_50 + 8 + (0x12 >> (char)uVar12 * '\x02' & 3U) * 4);
                local_c = *(uint *)(local_1c[local_18 + 2] + 0xc);
                iVar2 = *(int *)(local_1c[local_18 + 2] + 8);
                if (0 < (int)((*(int *)(iVar7 + 0xc) - local_c) * (*(int *)(local_24 + 8) - iVar2) -
                             (*(int *)(iVar7 + 8) - iVar2) * (*(int *)(local_24 + 0xc) - local_c)))
                {
                  local_8 = *(uint *)(iVar7 + 0xc);
                  local_c = *(uint *)(iVar7 + 8);
                  iVar7 = *(int *)(local_50 + 8 + uVar12 * 4);
                  if (0 < (int)((*(int *)(local_1c[local_18 + 2] + 0xc) - local_8) *
                                (*(int *)(iVar7 + 8) - local_c) -
                               (*(int *)(local_1c[local_18 + 2] + 8) - local_c) *
                               (*(int *)(iVar7 + 0xc) - local_8))) {
                    iVar7 = *(int *)(local_1c[local_18 + 2] + 8);
                    iVar2 = *(int *)(local_1c[(9 >> (char)local_18 * '\x02' & 3U) + 2] + 8);
                    uVar12 = local_18;
                    piVar8 = local_1c;
                    if ((iVar2 <= iVar7) &&
                       (((iVar2 < iVar7 ||
                         (*(int *)(local_1c[(9 >> (char)local_18 * '\x02' & 3U) + 2] + 0xc) <
                          *(int *)(local_1c[local_18 + 2] + 0xc))) &&
                        (uVar9 = local_1c[local_18 + 5], (uVar9 & 0xfffffffc) != 0)))) {
                      uVar12 = uVar9 & 3;
                      piVar8 = (int *)(uVar9 & 0xfffffffc);
                    }
                    local_34 = 1 << (sbyte)uVar12 & (uint)*(ushort *)((int)piVar8 + 0x22) & 7;
                    *(ushort *)((int)piVar8 + 0x22) =
                         *(ushort *)((int)piVar8 + 0x22) & (~(ushort)local_34 | 0xfff8);
                    uVar12 = local_1c[local_10 + 5] & 0xfffffffc;
                    uVar9 = 0x12 >> ((byte)local_1c[local_10 + 5] & 3) * '\x02' & 3;
                    iVar7 = *(int *)(*(int *)(uVar12 + 8 + uVar9 * 4) + 8);
                    iVar2 = *(int *)(uVar12 + 8 + (9 >> (char)uVar9 * '\x02' & 3U) * 4);
                    iVar3 = *(int *)(iVar2 + 8);
                    if (((iVar3 <= iVar7) &&
                        ((iVar3 < iVar7 ||
                         (*(int *)(iVar2 + 0xc) < *(int *)(*(int *)(uVar12 + 8 + uVar9 * 4) + 0xc)))
                        )) && (uVar10 = *(uint *)(uVar12 + 0x14 + uVar9 * 4),
                              (uVar10 & 0xfffffffc) != 0)) {
                      uVar9 = uVar10 & 3;
                      uVar12 = uVar10 & 0xfffffffc;
                    }
                    local_8 = 1 << (sbyte)uVar9 & (uint)*(ushort *)(uVar12 + 0x22) & 7;
                    *(ushort *)(uVar12 + 0x22) =
                         *(ushort *)(uVar12 + 0x22) & (~(ushort)local_8 | 0xfff8);
                    uVar12 = local_1c[local_10 + 5] & 3;
                    uVar13 = local_1c[local_10 + 5] & 0xfffffffc;
                    uVar10 = 0x12 >> (char)uVar12 * '\x02' & 3;
                    local_1c[local_10 + 2] = *(int *)(uVar13 + 8 + uVar10 * 4);
                    *(int *)(uVar13 + 8 + uVar12 * 4) = local_1c[local_18 + 2];
                    uVar9 = local_1c[local_18 + 5] & 3;
                    local_60 = local_1c[local_18 + 5] & 0xfffffffc;
                    *(uint *)(uVar13 + 0x14 + uVar12 * 4) = uVar9 + local_60;
                    if (local_60 != 0) {
                      *(uint *)(local_60 + 0x14 + uVar9 * 4) = uVar12 + uVar13;
                    }
                    local_44 = *(uint *)(uVar13 + 0x14 + uVar10 * 4);
                    uVar12 = local_44 & 3;
                    local_44 = local_44 & 0xfffffffc;
                    local_1c[local_10 + 5] = uVar12 + local_44;
                    if (local_44 != 0) {
                      *(int *)(local_44 + 0x14 + uVar12 * 4) = local_10 + (int)local_1c;
                    }
                    local_1c[local_18 + 5] = uVar10 + uVar13;
                    if (uVar13 != 0) {
                      *(uint *)(uVar13 + 0x14 + uVar10 * 4) = local_18 + (int)local_1c;
                    }
                    if (local_34 != 0) {
                      uVar12 = local_1c[local_18 + 5] & 0xfffffffc;
                      uVar9 = 9 >> ((byte)local_1c[local_18 + 5] & 3) * '\x02' & 3;
                      iVar7 = *(int *)(uVar12 + 8 + (9 >> (char)uVar9 * '\x02' & 3U) * 4);
                      iVar2 = *(int *)(*(int *)(uVar12 + 8 + uVar9 * 4) + 8);
                      iVar3 = *(int *)(iVar7 + 8);
                      if (((iVar3 <= iVar2) &&
                          ((iVar3 < iVar2 ||
                           (*(int *)(iVar7 + 0xc) < *(int *)(*(int *)(uVar12 + 8 + uVar9 * 4) + 0xc)
                           )))) && (uVar10 = *(uint *)(uVar12 + 0x14 + uVar9 * 4),
                                   (uVar10 & 0xfffffffc) != 0)) {
                        uVar9 = uVar10 & 3;
                        uVar12 = uVar10 & 0xfffffffc;
                      }
                      uVar1 = *(ushort *)(uVar12 + 0x22);
                      *(ushort *)(uVar12 + 0x22) = ((1 << (sbyte)uVar9 | uVar1) ^ uVar1) & 7 ^ uVar1
                      ;
                    }
                    if (local_8 != 0) {
                      uVar12 = 9 >> (char)local_18 * '\x02' & 3;
                      iVar7 = *(int *)(local_1c[uVar12 + 2] + 8);
                      iVar2 = *(int *)(local_1c[(9 >> (char)uVar12 * '\x02' & 3U) + 2] + 8);
                      piVar8 = local_1c;
                      if ((iVar2 <= iVar7) &&
                         (((iVar2 < iVar7 ||
                           (*(int *)(local_1c[(9 >> (char)uVar12 * '\x02' & 3U) + 2] + 0xc) <
                            *(int *)(local_1c[uVar12 + 2] + 0xc))) &&
                          (uVar9 = local_1c[uVar12 + 5], (uVar9 & 0xfffffffc) != 0)))) {
                        uVar12 = uVar9 & 3;
                        piVar8 = (int *)(uVar9 & 0xfffffffc);
                      }
                      uVar1 = *(ushort *)((int)piVar8 + 0x22);
                      *(ushort *)((int)piVar8 + 0x22) =
                           ((1 << (sbyte)uVar12 | uVar1) ^ uVar1) & 7 ^ uVar1;
                    }
                    local_28 = local_28 + 1;
                  }
                }
              }
            }
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < 3);
      local_1c = (int *)*local_1c;
    } while (local_1c != (int *)0x0);
    local_1c = (int *)0x0;
    if ((local_28 == 0) || (local_30 = local_30 + -1, local_30 == 0)) break;
  }
  if (local_30 == 0) {
    local_38 = param_1;
    hkErrStream::hkErrStream(local_260,0x200);
    FUN_01018d00("Infinite cycle detected during triangulation");
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xd26e67d,local_260,
               "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/Triangulator/hkgpTriangulator.inl"
               ,0x77e);
    hkBaseObject::hkBaseObject_38();
  }
  return;
}

