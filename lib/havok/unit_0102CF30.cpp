// lib/havok/unit_0102CF30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0102CF30..01035E70, 241 functions

#include "mgrr.h"

// 0102CF30  FUN_0102cf30  size=26  [run]
undefined4 __thiscall FUN_0102cf30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0143e7c0(param_1,param_3);
  return param_2;
}

// 0102CF50  FUN_0102cf50  size=202  [run]
void FUN_0102cf50(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  int iVar7;
  byte bVar8;
  undefined1 local_24 [32];
  
  FUN_0143e7c0(param_1,"accessFlags");
  FUN_0143e7c0(param_2,"bufferUsage");
  puVar2 = (uint *)FUN_0143e8c0(0);
  uVar1 = *puVar2;
  iVar7 = 0;
  do {
    bVar8 = 10;
    if (iVar7 != 3) {
      bVar8 = (char)iVar7 * '\x03';
    }
    uVar3 = uVar1 >> (bVar8 & 0x1f);
    bVar8 = (uVar3 & 1) != 0;
    if ((uVar3 & 2) != 0) {
      bVar8 = bVar8 | 2;
    }
    if ((uVar3 & 3) != 0) {
      bVar8 = bVar8 | 8;
    }
    if ((uVar3 & 4) != 0) {
      bVar8 = bVar8 | 4;
    }
    uVar4 = FUN_0143ea60(local_24);
    FUN_0143e7c0(uVar4,"perComponentFlags");
    pbVar5 = (byte *)FUN_0143e930(iVar7);
    iVar7 = iVar7 + 1;
    *pbVar5 = bVar8;
  } while (iVar7 < 4);
  uVar4 = FUN_0143ea60(local_24);
  FUN_0143e7c0(uVar4,"trianglesRead");
  puVar6 = (undefined1 *)FUN_0143e880(0);
  *puVar6 = 0;
  return;
}

// 0102D020  FUN_0102d020  size=155  [run]
void FUN_0102d020(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  FUN_0143e7c0(param_1,"startVertex");
  piVar3 = (int *)FUN_0143e8b0(uVar7);
  iVar1 = *piVar3;
  uVar7 = 0;
  FUN_0143e7c0(param_1,"endVertex");
  piVar3 = (int *)FUN_0143e8b0(uVar7);
  iVar2 = *piVar3;
  FUN_0143e7c0(param_1,"boneInfluenceStartPerVertex");
  piVar3 = (int *)FUN_0143e9a0(0);
  uVar6 = 0;
  uVar4 = 0;
  if (iVar2 != iVar1) {
    do {
      if (*(short *)(*piVar3 + 2 + uVar4 * 2) == *(short *)(*piVar3 + uVar4 * 2)) {
        uVar6 = 1;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(iVar2 - iVar1));
  }
  uVar7 = 0;
  FUN_0143e7c0(param_2,"partialSkinning");
  puVar5 = (undefined1 *)FUN_0143e880(uVar7);
  *puVar5 = uVar6;
  return;
}

// 0102D0C0  FUN_0102d0c0  size=113  [run]
void FUN_0102d0c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  FUN_0143e7c0(param_1,"vertexInputFromVertexOutput");
  iVar1 = FUN_0143e9a0(0);
  iVar1 = *(int *)(iVar1 + 4);
  piVar2 = (int *)FUN_0143e9a0(0);
  uVar5 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*piVar2 + iVar3 * 4) < 0) {
        uVar5 = 1;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  uVar6 = 0;
  FUN_0143e7c0(param_2,"partialGather");
  puVar4 = (undefined1 *)FUN_0143e880(uVar6);
  *puVar4 = uVar5;
  return;
}

// 0102D140  FUN_0102d140  size=155  [run]
void FUN_0102d140(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  FUN_0143e7c0(param_1,"startVertex");
  piVar3 = (int *)FUN_0143e8b0(uVar7);
  iVar1 = *piVar3;
  uVar7 = 0;
  FUN_0143e7c0(param_1,"endVertex");
  piVar3 = (int *)FUN_0143e8b0(uVar7);
  iVar2 = *piVar3;
  FUN_0143e7c0(param_1,"triangleVertexStartForVertex");
  piVar3 = (int *)FUN_0143e9a0(0);
  uVar6 = 0;
  uVar4 = 0;
  if (iVar2 != iVar1) {
    do {
      if (*(short *)(*piVar3 + 2 + uVar4 * 2) == *(short *)(*piVar3 + uVar4 * 2)) {
        uVar6 = 1;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(iVar2 - iVar1));
  }
  uVar7 = 0;
  FUN_0143e7c0(param_2,"partialDeform");
  puVar5 = (undefined1 *)FUN_0143e880(uVar7);
  *puVar5 = uVar6;
  return;
}

// 0102D1E0  FUN_0102d1e0  size=80  [run]
void FUN_0102d1e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_0143e7c0(param_1,"stickVariables");
  FUN_0143e7c0(param_2,"stickVariables");
  puVar1 = (undefined4 *)FUN_0143e840();
  uVar2 = FUN_0143e840();
  *puVar1 = uVar2;
  puVar1[2] = 0x8000000c;
  puVar1[1] = 0xc;
  return;
}

// 0102D230  FUN_0102d230  size=187  [run]
void FUN_0102d230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int *local_8;
  
  FUN_0143e7c0(param_1,"usedBuffers");
  local_8 = (int *)FUN_0143e9a0(0);
  FUN_0143e7c0(param_2,"usedBuffers");
  piVar1 = (int *)FUN_0143e9a0(0);
  iVar4 = 0;
  if (0 < piVar1[1]) {
    do {
      FUN_0143e9e0();
      uVar2 = FUN_01016300();
      iVar3 = FUN_01009750();
      local_28 = *local_8 + iVar3 * iVar4;
      local_24 = uVar2;
      FUN_0143e9e0();
      uVar2 = FUN_01016300();
      iVar3 = FUN_01009750();
      local_20 = *piVar1 + iVar3 * iVar4;
      local_1c = uVar2;
      FUN_0102cf50(&local_28,&local_20,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar1[1]);
  }
  return;
}

// 0102D2F0  FUN_0102d2f0  size=115  [run]
void FUN_0102d2f0(uint param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_0143e840();
  puVar1[1] = param_1;
  puVar1[2] = param_1 | 0x80000000;
  if (0 < (int)param_1) {
    FUN_0143e9e0();
    iVar2 = FUN_01016520();
    iVar2 = iVar2 * param_1;
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    uVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(iVar2);
    *puVar1 = uVar4;
    (**(code **)(*param_2 + 0x10))(uVar4,iVar2,6);
    FUN_01015ea0(*puVar1,0,iVar2);
  }
  return;
}

// 0102D370  FUN_0102d370  size=107  [run]
void FUN_0102d370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0143e7c0(param_1,"vertices");
  iVar1 = FUN_0143e9a0(0);
  iVar1 = *(int *)(iVar1 + 4);
  FUN_0143e7c0(param_2,"normalIDs");
  FUN_0102d2f0(iVar1,param_3);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_0143e9a0(0);
      *(short *)(*piVar2 + iVar3 * 2) = (short)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

// 0102D3E0  FUN_0102d3e0  size=138  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0102d3e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined **local_8;
  
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  _DAT_02097ca4 = &local_34;
  local_24 = 0x80000000;
  local_c = 0x80000000;
  local_34 = param_1;
  local_30 = param_2;
  local_18 = 0xffffffff;
  local_8 = &PTR_DAT_01b1ab08;
  FUN_0102da30();
  FUN_0102db40();
  uVar1 = FUN_0104ed70("Havok-7.0.0-r1");
  uVar1 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                    (param_1,param_2,&PTR_DAT_01b1ab08,uVar1);
  FUN_0102dce0();
  return uVar1;
}

// 0102D480  FUN_0102d480  size=9  [run]
void FUN_0102d480(void)

{
  FUN_01010160();
  return;
}

// 0102D4C0  FUN_0102d4c0  size=15  [run]
int __thiscall FUN_0102d4c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0102D500  FUN_0102d500  size=52  [run]
undefined4 __thiscall FUN_0102d500(int param_1,undefined4 param_2,int param_3)

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

// 0102D550  FUN_0102d550  size=36  [run]
void FUN_0102d550(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0102D580  FUN_0102d580  size=40  [run]
void FUN_0102d580(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_3 + (int)param_1);
      param_1[1] = *(undefined4 *)(param_3 + 4 + (int)param_1);
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0102D5C0  FUN_0102d5c0  size=28  [run]
void __thiscall FUN_0102d5c0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0102D5E0  FUN_0102d5e0  size=21  [run]
void FUN_0102d5e0(undefined4 param_1)

{
  FUN_01010160(param_1,0);
  return;
}

// 0102D660  FUN_0102d660  size=48  [run]
void __thiscall FUN_0102d660(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 8);
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

// 0102D690  FUN_0102d690  size=63  [run]
void __thiscall FUN_0102d690(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 0102D6D0  FUN_0102d6d0  size=153  [run]
void __thiscall
FUN_0102d6d0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,8);
  }
  FUN_01019bd0(*param_1 + (param_3 + param_6) * 8,*param_1 + (param_4 + param_3) * 8,
               ((iVar1 - param_3) - param_4) * 8);
  puVar3 = (undefined4 *)(*param_1 + param_3 * 8);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(param_5 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(param_5 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

// 0102D770  FUN_0102d770  size=31  [run]
void FUN_0102d770(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 0102D790  FUN_0102d790  size=63  [run]
void __thiscall FUN_0102d790(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0102D7D0  FUN_0102d7d0  size=117  [run]
void __fastcall FUN_0102d7d0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < param_1[3]) {
    do {
      iVar3 = ((undefined4 *)*param_1)[1];
      iVar5 = 0;
      if (0 < iVar3) {
        piVar1 = *(int **)*param_1;
        do {
          if (*piVar1 == *(int *)(param_1[2] + iVar4 * 4)) {
            (**(code **)(*(int *)param_1[1] + 0x18))(*piVar1,0,0);
            piVar1 = (int *)*param_1;
            piVar1[1] = piVar1[1] + -1;
            if (piVar1[1] != iVar5) {
              puVar2 = (undefined4 *)(*piVar1 + iVar5 * 8);
              iVar3 = (*piVar1 + piVar1[1] * 8) - (int)puVar2;
              iVar5 = 2;
              do {
                *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
                puVar2 = puVar2 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            break;
          }
          iVar5 = iVar5 + 1;
          piVar1 = piVar1 + 2;
        } while (iVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[3]);
  }
  return;
}

// 0102D850  FUN_0102d850  size=133  [run]
void __fastcall FUN_0102d850(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < param_1[9]) {
    do {
      iVar1 = FUN_01010160(*(undefined4 *)(param_1[8] + iVar5 * 4),0);
      iVar3 = ((undefined4 *)*param_1)[1];
      iVar6 = 0;
      if (0 < iVar3) {
        piVar4 = *(int **)*param_1;
        do {
          if (*piVar4 == iVar1) {
            (**(code **)(*(int *)param_1[1] + 0x18))(*piVar4,0,0);
            piVar4 = (int *)*param_1;
            piVar4[1] = piVar4[1] + -1;
            if (piVar4[1] != iVar6) {
              puVar2 = (undefined4 *)(*piVar4 + iVar6 * 8);
              iVar3 = (*piVar4 + piVar4[1] * 8) - (int)puVar2;
              iVar1 = 2;
              do {
                *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
                puVar2 = puVar2 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
            break;
          }
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar6 < iVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[9]);
  }
  return;
}

// 0102D900  FUN_0102d900  size=64  [run]
void __thiscall FUN_0102d900(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 0102D940  FUN_0102d940  size=33  [run]
void FUN_0102d940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0102d6d0(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 0102D970  FUN_0102d970  size=63  [run]
void __fastcall FUN_0102d970(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0102D9B0  FUN_0102d9b0  size=63  [run]
void __fastcall FUN_0102d9b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0102D9F0  FUN_0102d9f0  size=61  [run]
void __fastcall FUN_0102d9f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0102DA30  FUN_0102da30  size=264  [run]
void __fastcall FUN_0102da30(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  iVar2 = *(int *)(*param_1 + 4);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar7 = (undefined4 *)(*(int *)*param_1 + iVar2 * 8);
    uVar4 = FUN_010093a0();
    uVar4 = FUN_010093a0(uVar4);
    iVar5 = FUN_01015b90(uVar4);
    if (iVar5 == 0) {
      if (local_c == (local_8 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_10,8);
      }
      puVar1 = (undefined4 *)(local_10 + local_c * 8);
      *puVar1 = *puVar7;
      puVar1[1] = puVar7[1];
      local_c = local_c + 1;
      piVar3 = (int *)*param_1;
      piVar3[1] = piVar3[1] + -1;
      if (piVar3[1] != iVar2) {
        puVar7 = (undefined4 *)(*piVar3 + iVar2 * 8);
        iVar5 = (*piVar3 + piVar3[1] * 8) - (int)puVar7;
        iVar6 = 2;
        do {
          *puVar7 = *(undefined4 *)(iVar5 + (int)puVar7);
          puVar7 = puVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  FUN_0102d6d0(&PTR_vftable_018e9b94,*(undefined4 *)(*param_1 + 4),0,local_10,local_c);
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 8);
  }
  return;
}

// 0102DB40  FUN_0102db40  size=254  [run]
void __fastcall FUN_0102db40(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_14;
  uint local_10;
  uint local_c;
  undefined1 local_5;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  iVar2 = *(int *)(*param_1 + 4);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar7 = (undefined4 *)(*(int *)*param_1 + iVar2 * 8);
    pcVar4 = (char *)FUN_010093e0(&local_5,*(undefined4 *)(*(int *)*param_1 + 4 + iVar2 * 8));
    if (*pcVar4 != '\0') {
      if (local_10 == (local_c & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_14,8);
      }
      puVar1 = (undefined4 *)(local_14 + local_10 * 8);
      *puVar1 = *puVar7;
      puVar1[1] = puVar7[1];
      local_10 = local_10 + 1;
      piVar3 = (int *)*param_1;
      piVar3[1] = piVar3[1] + -1;
      if (piVar3[1] != iVar2) {
        puVar7 = (undefined4 *)(*piVar3 + iVar2 * 8);
        iVar5 = (*piVar3 + piVar3[1] * 8) - (int)puVar7;
        iVar6 = 2;
        do {
          *puVar7 = *(undefined4 *)(iVar5 + (int)puVar7);
          puVar7 = puVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  FUN_0102d6d0(&PTR_vftable_018e9b94,*(undefined4 *)(*param_1 + 4),0,local_14,local_10);
  local_10 = 0;
  if (-1 < (int)local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
  }
  return;
}

// 0102DC50  FUN_0102dc50  size=61  [run]
void __fastcall FUN_0102dc50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0102DC90  FUN_0102dc90  size=69  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0102dc90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  param_1[0xb] = param_4;
  _DAT_02097ca4 = param_1;
  return;
}

// 0102DCE0  FUN_0102dce0  size=151  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0102dce0(int param_1)

{
  FUN_0102d7d0();
  FUN_0102d850();
  _DAT_02097ca4 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (-1 < *(int *)(param_1 + 0x28)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x28) * 4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(uint *)(param_1 + 0x10) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 8),*(uint *)(param_1 + 0x10) * 4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0102DDA0  FUN_0102dda0  size=52  [run]
void FUN_0102dda0(undefined4 param_1,undefined4 param_2)

{
  FUN_010e0a20(param_1,"processContactCallbackDelay",param_2,"contactPointCallbackDelay");
  FUN_010e0a20(param_1,"numUserDatasInContactPointProperties",param_2,
               "numShapeKeysInContactPointProperties");
  return;
}

// 0102DDE0  FUN_0102dde0  size=116  [run]
void FUN_0102dde0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  FUN_0143e7c0(param_1,&DAT_017157d8);
  FUN_0143e7c0(param_2,&DAT_017157d8);
  pcVar2 = (char *)FUN_0143e920(0);
  if (*pcVar2 < '\x03') {
    puVar3 = (undefined1 *)FUN_0143e920(0);
    puVar4 = (undefined1 *)FUN_0143e920(0);
    *puVar4 = *puVar3;
    return;
  }
  pcVar2 = (char *)FUN_0143e920(0);
  cVar1 = *pcVar2;
  pcVar2 = (char *)FUN_0143e920(0);
  *pcVar2 = cVar1 + -1;
  return;
}

// 0102DE60  FUN_0102de60  size=69  [run]
void FUN_0102de60(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_2,"bufferIndex");
  FUN_0143e7c0(param_2,"shadowBufferIndex");
  puVar1 = (undefined4 *)FUN_0143e8c0(0);
  puVar2 = (undefined4 *)FUN_0143e8c0(0);
  *puVar2 = *puVar1;
  return;
}

// 0102DEB0  FUN_0102deb0  size=72  [run]
void FUN_0102deb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_1,"nodeName");
  FUN_0143e7c0(param_2,"nodeName");
  puVar1 = (undefined4 *)FUN_0143e9a0(0);
  puVar2 = (undefined4 *)FUN_0143e860(0);
  *puVar2 = *puVar1;
  return;
}

// 0102DF00  FUN_0102df00  size=89  [run]
void FUN_0102df00(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0143e7c0(param_1,"strings");
  FUN_0143e7c0(param_2,"strings");
  puVar2 = (undefined4 *)FUN_0143e9a0(0);
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  *puVar3 = *puVar2;
  uVar1 = puVar2[1];
  puVar3[1] = uVar1;
  puVar3[2] = uVar1 | 0x80000000;
  return;
}

// 0102DF60  FUN_0102df60  size=38  [run]
void __thiscall FUN_0102df60(int *param_1,int param_2)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    (**(code **)(*param_1 + 0x10))(*unaff_ESI,unaff_ESI[2] * param_2,0x18);
    unaff_ESI[2] = unaff_ESI[2] | 0x80000000;
  }
  return;
}

// 0102DFC0  FUN_0102dfc0  size=22  [run]
void FUN_0102dfc0(void)

{
  FUN_0143e850(0);
  FUN_0143e9d0(0);
  return;
}

// 0102DFE0  FUN_0102dfe0  size=22  [run]
void FUN_0102dfe0(void)

{
  FUN_0143e9a0(0);
  FUN_0143e9a0(0);
  return;
}

// 0102E000  FUN_0102e000  size=70  [run]
void FUN_0102e000(undefined4 param_1,undefined4 param_2)

{
  FUN_0143e7c0(param_2,"attachment");
  FUN_0143e7c0(param_1,"attachment");
  FUN_0143e850(0);
  FUN_0143e9d0(0);
  return;
}

// 0102E050  FUN_0102e050  size=70  [run]
void FUN_0102e050(undefined4 param_1,undefined4 param_2)

{
  FUN_0143e7c0(param_2,"value");
  FUN_0143e7c0(param_1,"value");
  FUN_0143e850(0);
  FUN_0143e9d0(0);
  return;
}

// 0102E0A0  FUN_0102e0a0  size=70  [run]
void FUN_0102e0a0(undefined4 param_1,undefined4 param_2)

{
  FUN_0143e7c0(param_2,"texture");
  FUN_0143e7c0(param_1,"texture");
  FUN_0143e850(0);
  FUN_0143e9d0(0);
  return;
}

// 0102E0F0  FUN_0102e0f0  size=66  [run]
void FUN_0102e0f0(undefined4 param_1,undefined4 param_2)

{
  FUN_0143e7c0(param_2,"userChannels");
  FUN_0143e7c0(param_1,"userChannels");
  FUN_0143e9a0(0);
  FUN_0143e9a0(0);
  return;
}

// 0102E140  FUN_0102e140  size=70  [run]
void FUN_0102e140(undefined4 param_1,undefined4 param_2)

{
  FUN_0143e7c0(param_2,"variant");
  FUN_0143e7c0(param_1,"variant");
  FUN_0143e850(0);
  FUN_0143e9d0(0);
  return;
}

// 0102E190  FUN_0102e190  size=70  [run]
void FUN_0102e190(undefined4 param_1,undefined4 param_2)

{
  FUN_0143e7c0(param_2,"variant");
  FUN_0143e7c0(param_1,"variant");
  FUN_0143e850(0);
  FUN_0143e9d0(0);
  return;
}

// 0102E1E0  FUN_0102e1e0  size=118  [run]
void FUN_0102e1e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_14;
  undefined4 local_10;
  
  FUN_0143e7c0(param_2,"usedBuffers");
  piVar1 = (int *)FUN_0143e9a0(0);
  iVar4 = 0;
  if (0 < piVar1[1]) {
    do {
      FUN_0143e9e0();
      uVar2 = FUN_01016300();
      iVar3 = FUN_01009750();
      local_14 = *piVar1 + iVar3 * iVar4;
      local_10 = uVar2;
      FUN_0102de60(&local_14,&local_14,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar1[1]);
  }
  return;
}

// 0102E260  FUN_0102e260  size=158  [run]
void FUN_0102e260(code *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  undefined4 local_8;
  
  FUN_0143e9e0();
  uVar1 = FUN_01016300();
  FUN_0143e9e0();
  local_8 = FUN_01016300();
  piVar2 = (int *)FUN_0143e9a0(0);
  local_c = (int *)FUN_0143e9a0(0);
  iVar4 = 0;
  if (0 < piVar2[1]) {
    do {
      iVar3 = FUN_01009750();
      local_1c = *piVar2 + iVar3 * iVar4;
      local_18 = uVar1;
      iVar3 = FUN_01009750();
      local_14 = *local_c + iVar3 * iVar4;
      local_10 = local_8;
      (*param_1)(&local_1c,&local_14,param_2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar2[1]);
  }
  return;
}

// 0102E300  FUN_0102e300  size=69  [run]
void FUN_0102e300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = FUN_0102e050;
  FUN_0143e7c0(param_2,"attributes");
  FUN_0143e7c0(param_1,"attributes");
  FUN_0102e260(pcVar1,param_3);
  return;
}

// 0102E350  FUN_0102e350  size=69  [run]
void FUN_0102e350(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = FUN_0102e050;
  FUN_0143e7c0(param_2,"attributes");
  FUN_0143e7c0(param_1,"attributes");
  FUN_0102e260(pcVar1,param_3);
  return;
}

// 0102E3A0  FUN_0102e3a0  size=69  [run]
void FUN_0102e3a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = FUN_0102e050;
  FUN_0143e7c0(param_2,"attributes");
  FUN_0143e7c0(param_1,"attributes");
  FUN_0102e260(pcVar1,param_3);
  return;
}

// 0102E3F0  FUN_0102e3f0  size=69  [run]
void FUN_0102e3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = FUN_0102e300;
  FUN_0143e7c0(param_2,"attributeGroups");
  FUN_0143e7c0(param_1,"attributeGroups");
  FUN_0102e260(pcVar1,param_3);
  return;
}

// 0102E440  FUN_0102e440  size=9  [run]
void FUN_0102e440(void)

{
  FUN_0102e3f0();
  return;
}

// 0102E450  FUN_0102e450  size=84  [run]
void FUN_0102e450(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0102e3f0(param_1,param_2,param_3);
  FUN_0143e7c0(param_2,"object");
  FUN_0143e7c0(param_1,"object");
  FUN_0143e850(0);
  FUN_0143e9d0(0);
  return;
}

// 0102E4B0  FUN_0102e4b0  size=134  [run]
void FUN_0102e4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  FUN_0102e3f0(param_1,param_2,param_3);
  pcVar1 = FUN_0102e0a0;
  FUN_0143e7c0(param_2,"stages");
  FUN_0143e7c0(param_1,"stages");
  FUN_0102e260(pcVar1,param_3);
  FUN_0143e7c0(param_2,"extraData");
  FUN_0143e7c0(param_1,"extraData");
  FUN_0143e850(0);
  FUN_0143e9d0(0);
  return;
}

// 0102E540  FUN_0102e540  size=9  [run]
void FUN_0102e540(void)

{
  FUN_0102e3f0();
  return;
}

// 0102E550  FUN_0102e550  size=69  [run]
void FUN_0102e550(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = FUN_0102e140;
  FUN_0143e7c0(param_2,"namedVariants");
  FUN_0143e7c0(param_1,"namedVariants");
  FUN_0102e260(pcVar1,param_3);
  return;
}

// 0102E5A0  FUN_0102e5a0  size=96  [run]
void FUN_0102e5a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  uint unaff_EDI;
  
  puVar1 = (undefined4 *)FUN_0143e840();
  puVar1[1] = unaff_EDI;
  puVar1[2] = unaff_EDI | 0x80000000;
  if (0 < (int)unaff_EDI) {
    FUN_0143e9e0();
    iVar2 = FUN_01016520();
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    uVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(iVar2 * unaff_EDI);
    *puVar1 = uVar4;
    (**(code **)(*param_1 + 0x10))(uVar4,iVar2 * unaff_EDI,6);
  }
  return;
}

// 0102E600  FUN_0102e600  size=36  [run]
void FUN_0102e600(undefined4 *param_1,undefined4 *param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,*param_1,*param_2);
  return;
}

// 0102E630  FUN_0102e630  size=229  [run]
void FUN_0102e630(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_8;
  
  FUN_0143e7c0(param_1,"bones");
  FUN_0143e7c0(param_2,"bones");
  piVar3 = (int *)FUN_0143e9a0(0);
  FUN_0102e5a0(param_3);
  piVar4 = (int *)FUN_0143e9a0(0);
  FUN_0143e9e0();
  FUN_010162f0();
  iVar5 = FUN_01009750();
  iVar7 = 0;
  if (0 < piVar3[1]) {
    local_8 = 0;
    do {
      iVar2 = DAT_02097ca8;
      uVar1 = *(undefined4 *)(*piVar3 + iVar7 * 4);
      piVar6 = (int *)(DAT_02097ca8 + 8);
      if (*(uint *)(DAT_02097ca8 + 0xc) == (*(uint *)(DAT_02097ca8 + 0x10) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar6,4);
      }
      *(undefined4 *)(*piVar6 + *(int *)(iVar2 + 0xc) * 4) = uVar1;
      piVar6 = (int *)(iVar2 + 0xc);
      *piVar6 = *piVar6 + 1;
      FUN_010199f0(*piVar4 + local_8,uVar1,iVar5);
      local_8 = local_8 + iVar5;
      iVar7 = iVar7 + 1;
    } while (iVar7 < piVar3[1]);
  }
  return;
}

// 0102E720  FUN_0102e720  size=247  [run]
void FUN_0102e720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int local_8;
  
  FUN_0143e7c0(param_1,"annotationTracks");
  FUN_0143e7c0(param_2,"annotationTracks");
  piVar2 = (int *)FUN_0143e9a0(0);
  FUN_0102e5a0(param_3);
  piVar3 = (int *)FUN_0143e9a0(0);
  FUN_0143e9e0();
  FUN_010162f0();
  iVar4 = FUN_01009750();
  iVar7 = 0;
  if (0 < piVar2[1]) {
    local_8 = 0;
    do {
      iVar1 = DAT_02097ca8;
      uVar5 = *(undefined4 *)(*piVar2 + iVar7 * 4);
      piVar6 = (int *)(DAT_02097ca8 + 0x20);
      if (*(uint *)(DAT_02097ca8 + 0x24) == (*(uint *)(DAT_02097ca8 + 0x28) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar6,4);
      }
      *(undefined4 *)(*piVar6 + *(int *)(iVar1 + 0x24) * 4) = uVar5;
      piVar6 = (int *)(iVar1 + 0x24);
      *piVar6 = *piVar6 + 1;
      uVar5 = FUN_01010160(uVar5,0);
      FUN_010199f0(*piVar3 + local_8,uVar5,iVar4);
      iVar7 = iVar7 + 1;
      local_8 = local_8 + iVar4;
    } while (iVar7 < piVar2[1]);
  }
  return;
}

// 0102E820  FUN_0102e820  size=9  [run]
void FUN_0102e820(void)

{
  FUN_0102e720();
  return;
}

// 0102E830  FUN_0102e830  size=9  [run]
void FUN_0102e830(void)

{
  FUN_0102e720();
  return;
}

// 0102E840  FUN_0102e840  size=9  [run]
void FUN_0102e840(void)

{
  FUN_0102e720();
  return;
}

// 0102E850  FUN_0102e850  size=2972  [run]
void FUN_0102e850(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  short *psVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  char *pcVar17;
  undefined4 uVar18;
  undefined1 local_18c [8];
  undefined1 local_184 [8];
  undefined1 local_17c [8];
  undefined1 local_174 [8];
  undefined1 local_16c [224];
  undefined1 local_8c [24];
  int *local_74;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_50;
  undefined1 local_4c [8];
  int *local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  undefined1 local_28 [8];
  int local_20;
  int local_1c;
  undefined2 *local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  FUN_0143e7c0(param_1,"vertexDesc");
  FUN_0143e7c0(param_2,&DAT_0170d850);
  puVar3 = (undefined4 *)FUN_0143e850(0);
  uVar18 = 0;
  pcVar17 = "stride";
  FUN_0143e9e0("stride",0);
  uVar4 = FUN_010162f0();
  FUN_0143e7f0(*puVar3,uVar4,pcVar17);
  piVar5 = (int *)FUN_0143e8b0(uVar18);
  local_14 = *piVar5;
  puVar3 = (undefined4 *)FUN_0143e850(0);
  pcVar17 = "decls";
  FUN_0143e9e0("decls");
  uVar4 = FUN_010162f0();
  FUN_0143e7f0(*puVar3,uVar4,pcVar17);
  pcVar17 = "decls";
  FUN_0143e9e0("decls");
  uVar4 = FUN_010162f0();
  uVar18 = FUN_0143e830(uVar4);
  FUN_0143e7f0(uVar18,uVar4,pcVar17);
  FUN_0143e9e0();
  local_5c = FUN_010162f0();
  FUN_0143e9e0();
  local_60 = FUN_010162f0();
  local_50 = (int *)FUN_0143e9a0(0);
  FUN_0102e5a0(param_3);
  local_74 = (int *)FUN_0143e9a0(0);
  FUN_0143e7c0(param_1,"vertexData");
  FUN_0143e7c0(param_2,&DAT_01705448);
  iVar6 = FUN_0143e9b0(0);
  uVar4 = 0;
  uVar1 = *(uint *)(iVar6 + 8);
  FUN_0143e9f0(local_8c,"numVerts");
  puVar7 = (uint *)FUN_0143e8b0(uVar4);
  *puVar7 = uVar1;
  FUN_0143e9f0(local_174,"vectorData");
  local_38 = (int *)FUN_0143e830();
  FUN_0143e9f0(local_184,"uint8Data");
  local_44 = (int *)FUN_0143e830();
  FUN_0143e9f0(local_16c,"uint16Data");
  local_40 = (int *)FUN_0143e830();
  FUN_0143e9f0(local_17c,"uint32Data");
  local_34 = (int *)FUN_0143e830();
  FUN_0143e9f0(local_18c,"floatData");
  local_2c = (int *)FUN_0143e830();
  local_3c = 0;
  if (0 < local_50[1]) {
    do {
      iVar8 = FUN_01009750();
      FUN_0143ea20(*local_50 + iVar8 * local_3c,local_5c);
      iVar8 = FUN_01009750();
      FUN_0143ea20(*local_74 + iVar8 * local_3c,local_60);
      FUN_0143e7c0(local_4c,&DAT_01662d64);
      FUN_0143e7c0(local_28,&DAT_01662d64);
      puVar9 = (ushort *)FUN_0143e900(0);
      local_8 = (uint)*puVar9;
      puVar10 = (undefined2 *)FUN_0143e900(0);
      *puVar10 = (undefined2)local_8;
      FUN_0143e7c0(local_4c,"usage");
      FUN_0143e7c0(local_28,"usage");
      puVar9 = (ushort *)FUN_0143e900(0);
      local_8 = (uint)*puVar9;
      puVar10 = (undefined2 *)FUN_0143e900(0);
      *puVar10 = (undefined2)local_8;
      FUN_0143e7c0(local_28,"usage");
      psVar11 = (short *)FUN_0143e900(0);
      if (*psVar11 == 0x20) {
        FUN_0143e7c0(local_28,&DAT_01662d64);
        psVar11 = (short *)FUN_0143e900(0);
        if (*psVar11 == 4) {
          FUN_0143e7c0(local_28,&DAT_01662d64);
          puVar10 = (undefined2 *)FUN_0143e900(0);
          *puVar10 = 5;
        }
      }
      FUN_0143e7c0(local_28,&DAT_01662d64);
      puVar10 = (undefined2 *)FUN_0143e900(0);
      switch(*puVar10) {
      case 1:
        local_8 = local_44[1];
        FUN_0143e7c0(local_28,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        *piVar5 = local_8;
        FUN_0143e7c0(local_28,"byteStride");
        puVar3 = (undefined4 *)FUN_0143e8b0(0);
        *puVar3 = 4;
        FUN_0143e7c0(local_4c,"byteOffset");
        puVar3 = (undefined4 *)FUN_0143e8b0(0);
        local_18 = (undefined2 *)*puVar3;
        local_8 = local_44[1];
        local_c = local_8 + uVar1 * 4;
        if ((int)(local_44[2] & 0x3fffffffU) < local_c) {
          iVar8 = (local_44[2] & 0x3fffffffU) * 2;
          if (iVar8 <= local_c) {
            iVar8 = local_c;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_44,iVar8,1);
        }
        local_44[1] = local_44[1] + uVar1 * 4;
        if (0 < (int)uVar1) {
          local_c = 0;
          puVar15 = (undefined1 *)(*local_44 + local_8 + 2);
          local_10 = uVar1;
          do {
            puVar12 = (undefined1 *)(*(int *)(iVar6 + 4) + local_c + (int)local_18);
            puVar15[-2] = *puVar12;
            puVar15[-1] = puVar12[1];
            *puVar15 = puVar12[2];
            local_c = local_c + local_14;
            local_10 = local_10 - 1;
            puVar15[1] = puVar12[3];
            puVar15 = puVar15 + 4;
          } while (local_10 != 0);
          local_10 = 0;
        }
        break;
      case 2:
        local_8 = local_40[1];
        FUN_0143e7c0(local_28,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        *piVar5 = local_8 * 2;
        FUN_0143e7c0(local_28,"byteStride");
        puVar3 = (undefined4 *)FUN_0143e8b0(0);
        *puVar3 = 4;
        FUN_0143e7c0(local_4c,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        local_10 = *piVar5;
        local_8 = local_40[1];
        local_c = local_8 + uVar1 * 2;
        if ((int)(local_40[2] & 0x3fffffffU) < local_c) {
          iVar8 = (local_40[2] & 0x3fffffffU) * 2;
          if (iVar8 <= local_c) {
            iVar8 = local_c;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_40,iVar8,2);
        }
        local_40[1] = local_40[1] + uVar1 * 2;
        local_8 = *local_40 + local_8 * 2;
        iVar8 = 0;
        if (0 < (int)uVar1) {
          local_c = 0;
          do {
            local_18 = (undefined2 *)(*(int *)(iVar6 + 4) + local_c + local_10);
            iVar8 = iVar8 + 1;
            *(undefined2 *)((local_8 - 4) + iVar8 * 4) = *local_18;
            *(undefined2 *)((local_8 - 2) + iVar8 * 4) = local_18[1];
            local_c = local_c + local_14;
          } while (iVar8 < (int)uVar1);
        }
        break;
      case 3:
        local_8 = local_34[1];
        FUN_0143e7c0(local_28,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        *piVar5 = local_8 * 4;
        FUN_0143e7c0(local_28,"byteStride");
        puVar3 = (undefined4 *)FUN_0143e8b0(0);
        *puVar3 = 4;
        FUN_0143e7c0(local_4c,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        local_10 = *piVar5;
        local_8 = local_34[1];
        local_c = local_8 + uVar1;
        if ((int)(local_34[2] & 0x3fffffffU) < local_c) {
          iVar8 = (local_34[2] & 0x3fffffffU) * 2;
          if (iVar8 <= local_c) {
            iVar8 = local_c;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_34,iVar8,4);
        }
        local_34[1] = local_34[1] + uVar1;
        local_8 = *local_34 + local_8 * 4;
        iVar8 = 0;
        if (0 < (int)uVar1) {
          local_c = 0;
          do {
            *(undefined4 *)(local_8 + iVar8 * 4) =
                 *(undefined4 *)(*(int *)(iVar6 + 4) + local_c + local_10);
            local_c = local_c + local_14;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)uVar1);
        }
        break;
      case 4:
        local_8 = local_2c[1];
        FUN_0143e7c0(local_28,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        *piVar5 = local_8 * 4;
        FUN_0143e7c0(local_28,"byteStride");
        puVar3 = (undefined4 *)FUN_0143e8b0(0);
        *puVar3 = 4;
        FUN_0143e7c0(local_4c,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        local_1c = *piVar5;
        local_c = local_2c[1];
        local_10 = local_c + uVar1;
        if ((int)(local_2c[2] & 0x3fffffffU) < (int)local_10) {
          iVar8 = (local_2c[2] & 0x3fffffffU) * 2;
          if (iVar8 <= (int)local_10) {
            iVar8 = local_10;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_2c,iVar8,4);
        }
        local_2c[1] = local_2c[1] + uVar1;
        local_20 = *local_2c + local_c * 4;
        iVar8 = 0;
        if (3 < (int)uVar1) {
          local_18 = (undefined2 *)0x0;
          local_c = local_14 * 3;
          local_10 = local_14 * 2;
          local_8 = (uVar1 - 4 >> 2) + 1;
          iVar8 = local_8 * 4;
          puVar3 = (undefined4 *)(local_20 + 8);
          do {
            puVar3[-2] = *(undefined4 *)((int)local_18 + local_1c + *(int *)(iVar6 + 4));
            puVar3[-1] = *(undefined4 *)((int)local_18 + local_14 + local_1c + *(int *)(iVar6 + 4));
            *puVar3 = *(undefined4 *)(*(int *)(iVar6 + 4) + local_10 + local_1c);
            puVar3[1] = *(undefined4 *)(*(int *)(iVar6 + 4) + local_c + local_1c);
            local_18 = local_18 + local_14 * 2;
            local_10 = local_10 + local_14 * 4;
            local_c = local_c + local_14 * 4;
            local_8 = local_8 + -1;
            puVar3 = puVar3 + 4;
          } while (local_8 != 0);
          local_8 = 0;
          local_30 = iVar8;
        }
        if (iVar8 < (int)uVar1) {
          iVar13 = iVar8 * local_14;
          do {
            iVar8 = iVar8 + 1;
            puVar3 = (undefined4 *)(*(int *)(iVar6 + 4) + local_1c + iVar13);
            iVar13 = iVar13 + local_14;
            *(undefined4 *)(local_20 + -4 + iVar8 * 4) = *puVar3;
          } while (iVar8 < (int)uVar1);
        }
        break;
      case 5:
        local_20 = local_2c[1];
        FUN_0143e7c0(local_28,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        *piVar5 = local_20 * 8;
        FUN_0143e7c0(local_28,"byteStride");
        puVar3 = (undefined4 *)FUN_0143e8b0(0);
        *puVar3 = 8;
        FUN_0143e7c0(local_4c,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        local_1c = *piVar5;
        local_c = local_2c[1];
        local_8 = local_c + uVar1 * 2;
        if ((int)(local_2c[2] & 0x3fffffffU) < (int)local_8) {
          uVar14 = (local_2c[2] & 0x3fffffffU) * 2;
          if ((int)uVar14 <= (int)local_8) {
            uVar14 = local_8;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_2c,uVar14,4);
        }
        local_2c[1] = local_2c[1] + uVar1 * 2;
        local_30 = *local_2c + local_c * 4;
        iVar8 = 0;
        if (3 < (int)uVar1) {
          local_18 = (undefined2 *)0x0;
          local_10 = local_14 * 3;
          local_c = local_14 * 2;
          local_8 = (uVar1 - 4 >> 2) + 1;
          iVar8 = local_8 * 4;
          puVar3 = (undefined4 *)(local_30 + 8);
          do {
            puVar16 = (undefined4 *)(*(int *)(iVar6 + 4) + local_1c + (int)local_18);
            puVar3[-2] = *puVar16;
            puVar3[-1] = puVar16[1];
            puVar16 = (undefined4 *)((int)local_18 + local_14 + *(int *)(iVar6 + 4) + local_1c);
            *puVar3 = *puVar16;
            puVar3[1] = puVar16[1];
            puVar16 = (undefined4 *)(*(int *)(iVar6 + 4) + local_1c + local_c);
            puVar3[2] = *puVar16;
            puVar3[3] = puVar16[1];
            puVar16 = (undefined4 *)(*(int *)(iVar6 + 4) + local_1c + local_10);
            puVar3[4] = *puVar16;
            puVar3[5] = puVar16[1];
            local_18 = local_18 + local_14 * 2;
            local_c = local_c + local_14 * 4;
            local_10 = local_10 + local_14 * 4;
            local_8 = local_8 - 1;
            puVar3 = puVar3 + 8;
          } while (local_8 != 0);
        }
        if (iVar8 < (int)uVar1) {
          local_8 = iVar8 * local_14;
          do {
            puVar3 = (undefined4 *)(local_8 + local_1c + *(int *)(iVar6 + 4));
            iVar8 = iVar8 + 1;
            *(undefined4 *)(local_30 + -8 + iVar8 * 8) = *puVar3;
            local_8 = local_8 + local_14;
            *(undefined4 *)(local_30 + -4 + iVar8 * 8) = puVar3[1];
          } while (iVar8 < (int)uVar1);
        }
        break;
      case 6:
      case 7:
        local_20 = local_38[1];
        FUN_0143e7c0(local_28,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        *piVar5 = local_20 << 4;
        FUN_0143e7c0(local_28,"byteStride");
        puVar3 = (undefined4 *)FUN_0143e8b0(0);
        *puVar3 = 0x10;
        FUN_0143e7c0(local_4c,"byteOffset");
        piVar5 = (int *)FUN_0143e8b0(0);
        local_30 = *piVar5;
        local_20 = local_38[1];
        local_8 = local_20 + uVar1;
        if ((int)(local_38[2] & 0x3fffffffU) < (int)local_8) {
          uVar14 = (local_38[2] & 0x3fffffffU) * 2;
          if ((int)uVar14 <= (int)local_8) {
            uVar14 = local_8;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,local_38,uVar14,0x10);
        }
        local_38[1] = local_38[1] + uVar1;
        puVar3 = (undefined4 *)(local_20 * 0x10 + *local_38);
        if (0 < (int)uVar1) {
          iVar8 = 0;
          local_8 = uVar1;
          do {
            puVar16 = (undefined4 *)(local_30 + iVar8 + *(int *)(iVar6 + 4));
            iVar8 = iVar8 + local_14;
            uVar4 = puVar16[1];
            uVar18 = puVar16[2];
            uVar2 = puVar16[3];
            *puVar3 = *puVar16;
            puVar3[1] = uVar4;
            puVar3[2] = uVar18;
            puVar3[3] = uVar2;
            puVar3 = puVar3 + 4;
            local_8 = local_8 - 1;
          } while (local_8 != 0);
        }
      }
      local_3c = local_3c + 1;
    } while (local_3c < local_50[1]);
  }
  piVar5 = local_38;
  if (*local_38 != 0) {
    (**(code **)(*param_3 + 0x10))(*local_38,local_38[2] << 4,0x18);
    piVar5[2] = piVar5[2] | 0x80000000;
  }
  piVar5 = local_44;
  if (*local_44 != 0) {
    (**(code **)(*param_3 + 0x10))(*local_44,local_44[2],0x18);
    piVar5[2] = piVar5[2] | 0x80000000;
  }
  piVar5 = local_40;
  if (*local_40 != 0) {
    (**(code **)(*param_3 + 0x10))(*local_40,local_40[2] * 2,0x18);
    piVar5[2] = piVar5[2] | 0x80000000;
  }
  piVar5 = local_34;
  if (*local_34 != 0) {
    (**(code **)(*param_3 + 0x10))(*local_34,local_34[2] * 4,0x18);
    piVar5[2] = piVar5[2] | 0x80000000;
  }
  if (*local_2c != 0) {
    (**(code **)(*param_3 + 0x10))(*local_2c,local_2c[2] * 4,0x18);
    local_2c[2] = local_2c[2] | 0x80000000;
  }
  return;
}

// 0102F410  FUN_0102f410  size=625  [run]
void FUN_0102f410(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int *local_10;
  int *local_c;
  int *local_8;
  
  FUN_0143e7c0(param_1,"userChannelInfos");
  FUN_0143e7c0(param_2,"userChannelInfos");
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  piVar4 = (int *)FUN_0143e9a0(0);
  uVar3 = piVar4[1];
  local_10 = piVar4;
  if (0 < (int)uVar3) {
    local_38 = 0;
    local_34 = 0;
    local_30 = -0x80000000;
    FUN_0100a210(&PTR_vftable_018e9b94,&local_38,((int)uVar3 < 0) - 1 & uVar3,8);
    iVar7 = piVar4[1];
    local_34 = uVar3;
    if ((int)(local_24 & 0x3fffffff) < iVar7) {
      iVar8 = (local_24 & 0x3fffffff) * 2;
      if (iVar8 <= iVar7) {
        iVar8 = iVar7;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&local_2c,iVar8,8);
    }
    local_28 = iVar7;
    FUN_0143e9e0();
    uVar5 = FUN_01016300();
    local_c = (int *)FUN_01009750();
    FUN_0143e9e0();
    local_8 = (int *)FUN_01016300();
    iVar7 = 0;
    if (0 < piVar4[1]) {
      iVar8 = 0;
      do {
        *(undefined4 *)(local_38 + 4 + iVar7 * 8) = uVar5;
        iVar6 = *piVar4 + iVar8;
        iVar8 = iVar8 + (int)local_c;
        *(int *)(local_38 + iVar7 * 8) = iVar6;
        *(int **)(local_2c + 4 + iVar7 * 8) = local_8;
        *(undefined4 *)(local_2c + iVar7 * 8) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < piVar4[1]);
    }
    FUN_01051030(&local_38,&local_2c,param_3);
    iVar7 = 0;
    if (0 < piVar4[1]) {
      do {
        puVar1 = (undefined4 *)(local_2c + iVar7 * 8);
        iVar8 = *(int *)DAT_02097ca8[1];
        local_8 = DAT_02097ca8;
        local_c = DAT_02097ca8 + 1;
        uVar5 = FUN_010093a0();
        (**(code **)(iVar8 + 0x1c))(*puVar1,uVar5);
        piVar4 = (int *)*local_8;
        if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar4,8);
        }
        puVar2 = (undefined4 *)(*piVar4 + piVar4[1] * 8);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        piVar4[1] = piVar4[1] + 1;
        FUN_0102e540(local_38 + iVar7 * 8,local_2c + iVar7 * 8,param_3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_10[1]);
    }
    local_34 = 0;
    if (-1 < local_30) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 * 8);
    }
  }
  FUN_0102e5a0(param_3);
  piVar4 = (int *)FUN_0143e9a0(0);
  iVar7 = 0;
  if (0 < local_28) {
    do {
      (**(code **)(*param_3 + 0x14))(*(undefined4 *)(local_2c + iVar7 * 8),*piVar4 + iVar7 * 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_28);
  }
  local_28 = 0;
  if (-1 < (int)local_24) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 * 8);
  }
  return;
}

// 0102F690  FUN_0102f690  size=138  [run]
undefined4 FUN_0102f690(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined **local_8;
  
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  DAT_02097ca8 = &local_34;
  local_24 = 0x80000000;
  local_c = 0x80000000;
  local_34 = param_1;
  local_30 = param_2;
  local_18 = 0xffffffff;
  local_8 = &PTR_PTR_01b1ab28;
  FUN_0102fe50();
  FUN_0102ff60();
  uVar1 = FUN_0104ed70("Havok-7.0.0-b1");
  uVar1 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                    (param_1,param_2,&PTR_PTR_01b1ab28,uVar1);
  FUN_010300c0();
  return uVar1;
}

// 0102F7A0  FUN_0102f7a0  size=21  [run]
void FUN_0102f7a0(undefined4 param_1)

{
  FUN_01010160(param_1,0);
  return;
}

// 0102F7C0  FUN_0102f7c0  size=25  [run]
void FUN_0102f7c0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0102F7E0  FUN_0102f7e0  size=55  [run]
void __thiscall FUN_0102f7e0(int param_1,undefined4 param_2,int param_3)

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

// 0102F820  FUN_0102f820  size=52  [run]
undefined4 __thiscall FUN_0102f820(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,2);
    return uVar3;
  }
  return 0;
}

// 0102F860  FUN_0102f860  size=52  [run]
undefined4 __thiscall FUN_0102f860(int param_1,undefined4 param_2,int param_3)

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

// 0102F8A0  FUN_0102f8a0  size=117  [run]
void __fastcall FUN_0102f8a0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < param_1[3]) {
    do {
      iVar3 = ((undefined4 *)*param_1)[1];
      iVar5 = 0;
      if (0 < iVar3) {
        piVar1 = *(int **)*param_1;
        do {
          if (*piVar1 == *(int *)(param_1[2] + iVar4 * 4)) {
            (**(code **)(*(int *)param_1[1] + 0x18))(*piVar1,0,0);
            piVar1 = (int *)*param_1;
            piVar1[1] = piVar1[1] + -1;
            if (piVar1[1] != iVar5) {
              puVar2 = (undefined4 *)(*piVar1 + iVar5 * 8);
              iVar3 = (*piVar1 + piVar1[1] * 8) - (int)puVar2;
              iVar5 = 2;
              do {
                *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
                puVar2 = puVar2 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            break;
          }
          iVar5 = iVar5 + 1;
          piVar1 = piVar1 + 2;
        } while (iVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[3]);
  }
  return;
}

// 0102F920  FUN_0102f920  size=133  [run]
void __fastcall FUN_0102f920(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  if (0 < param_1[9]) {
    do {
      iVar1 = FUN_01010160(*(undefined4 *)(param_1[8] + iVar5 * 4),0);
      iVar3 = ((undefined4 *)*param_1)[1];
      iVar6 = 0;
      if (0 < iVar3) {
        piVar4 = *(int **)*param_1;
        do {
          if (*piVar4 == iVar1) {
            (**(code **)(*(int *)param_1[1] + 0x18))(*piVar4,0,0);
            piVar4 = (int *)*param_1;
            piVar4[1] = piVar4[1] + -1;
            if (piVar4[1] != iVar6) {
              puVar2 = (undefined4 *)(*piVar4 + iVar6 * 8);
              iVar3 = (*piVar4 + piVar4[1] * 8) - (int)puVar2;
              iVar1 = 2;
              do {
                *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
                puVar2 = puVar2 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
            break;
          }
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar6 < iVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[9]);
  }
  return;
}

// 0102F9B0  FUN_0102f9b0  size=28  [run]
void FUN_0102f9b0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0102F9D0  FUN_0102f9d0  size=58  [run]
void __thiscall FUN_0102f9d0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0102FA10  FUN_0102fa10  size=56  [run]
void __thiscall FUN_0102fa10(int param_1,int param_2)

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

// 0102FA50  FUN_0102fa50  size=67  [run]
int __thiscall FUN_0102fa50(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0100a210(param_2,param_1,iVar3,1);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2;
}

// 0102FAA0  FUN_0102faa0  size=68  [run]
int __thiscall FUN_0102faa0(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0100a210(param_2,param_1,iVar3,2);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2 * 2;
}

// 0102FAF0  FUN_0102faf0  size=68  [run]
int __thiscall FUN_0102faf0(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0100a210(param_2,param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2 * 4;
}

// 0102FB40  FUN_0102fb40  size=68  [run]
int __thiscall FUN_0102fb40(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0100a210(param_2,param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2 * 4;
}

// 0102FB90  FUN_0102fb90  size=70  [run]
int __thiscall FUN_0102fb90(int *param_1,undefined4 param_2,int param_3)

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

// 0102FBE0  FUN_0102fbe0  size=57  [run]
void __thiscall FUN_0102fbe0(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

// 0102FC20  FUN_0102fc20  size=57  [run]
void __thiscall FUN_0102fc20(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 0x24) == (*(uint *)(param_1 + 0x28) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x20),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24) * 4) = param_2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}

// 0102FC60  FUN_0102fc60  size=95  [run]
void __thiscall FUN_0102fc60(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)param_1[1];
  uVar3 = FUN_010093a0();
  (**(code **)(iVar2 + 0x1c))(*param_2,uVar3);
  param_1 = (int *)*param_1;
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 0102FCC0  FUN_0102fcc0  size=68  [run]
int __thiscall FUN_0102fcc0(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,1);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2;
}

// 0102FD10  FUN_0102fd10  size=69  [run]
int __thiscall FUN_0102fd10(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,2);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 2;
}

// 0102FD60  FUN_0102fd60  size=69  [run]
int __thiscall FUN_0102fd60(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 4;
}

// 0102FDB0  FUN_0102fdb0  size=69  [run]
int __thiscall FUN_0102fdb0(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 4;
}

// 0102FE00  FUN_0102fe00  size=71  [run]
int __thiscall FUN_0102fe00(int *param_1,int param_2)

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

// 0102FE50  FUN_0102fe50  size=264  [run]
void __fastcall FUN_0102fe50(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  iVar2 = *(int *)(*param_1 + 4);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar7 = (undefined4 *)(*(int *)*param_1 + iVar2 * 8);
    uVar4 = FUN_010093a0();
    uVar4 = FUN_010093a0(uVar4);
    iVar5 = FUN_01015b90(uVar4);
    if (iVar5 == 0) {
      if (local_c == (local_8 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_10,8);
      }
      puVar1 = (undefined4 *)(local_10 + local_c * 8);
      *puVar1 = *puVar7;
      puVar1[1] = puVar7[1];
      local_c = local_c + 1;
      piVar3 = (int *)*param_1;
      piVar3[1] = piVar3[1] + -1;
      if (piVar3[1] != iVar2) {
        puVar7 = (undefined4 *)(*piVar3 + iVar2 * 8);
        iVar5 = (*piVar3 + piVar3[1] * 8) - (int)puVar7;
        iVar6 = 2;
        do {
          *puVar7 = *(undefined4 *)(iVar5 + (int)puVar7);
          puVar7 = puVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  FUN_0102d6d0(&PTR_vftable_018e9b94,*(undefined4 *)(*param_1 + 4),0,local_10,local_c);
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 8);
  }
  return;
}

// 0102FF60  FUN_0102ff60  size=254  [run]
void __fastcall FUN_0102ff60(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_14;
  uint local_10;
  uint local_c;
  undefined1 local_5;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  iVar2 = *(int *)(*param_1 + 4);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar7 = (undefined4 *)(*(int *)*param_1 + iVar2 * 8);
    pcVar4 = (char *)FUN_010093e0(&local_5,*(undefined4 *)(*(int *)*param_1 + 4 + iVar2 * 8));
    if (*pcVar4 != '\0') {
      if (local_10 == (local_c & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_14,8);
      }
      puVar1 = (undefined4 *)(local_14 + local_10 * 8);
      *puVar1 = *puVar7;
      puVar1[1] = puVar7[1];
      local_10 = local_10 + 1;
      piVar3 = (int *)*param_1;
      piVar3[1] = piVar3[1] + -1;
      if (piVar3[1] != iVar2) {
        puVar7 = (undefined4 *)(*piVar3 + iVar2 * 8);
        iVar5 = (*piVar3 + piVar3[1] * 8) - (int)puVar7;
        iVar6 = 2;
        do {
          *puVar7 = *(undefined4 *)(iVar5 + (int)puVar7);
          puVar7 = puVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  FUN_0102d6d0(&PTR_vftable_018e9b94,*(undefined4 *)(*param_1 + 4),0,local_14,local_10);
  local_10 = 0;
  if (-1 < (int)local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
  }
  return;
}

// 01030070  FUN_01030070  size=69  [run]
void __thiscall
FUN_01030070(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  param_1[0xb] = param_4;
  DAT_02097ca8 = param_1;
  return;
}

// 010300C0  FUN_010300c0  size=151  [run]
void __fastcall FUN_010300c0(int param_1)

{
  FUN_0102f8a0();
  FUN_0102f920();
  DAT_02097ca8 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (-1 < *(int *)(param_1 + 0x28)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x28) * 4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((*(uint *)(param_1 + 0x10) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 8),*(uint *)(param_1 + 0x10) * 4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 01030170  FUN_01030170  size=160  [run]
void FUN_01030170(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,"ragdollLeftFootBoneIndex");
  FUN_0143e7c0(local_14,"ragdollLeftFootBoneIndex");
  puVar1 = (undefined2 *)FUN_0143e8b0(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"ragdollRightFootBoneIndex");
  FUN_0143e7c0(local_14,"ragdollRightFootBoneIndex");
  puVar1 = (undefined2 *)FUN_0143e8b0(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  return;
}

// 01030210  FUN_01030210  size=403  [run]
void FUN_01030210(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [28];
  int local_14;
  int local_c;
  int local_8;
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_30,"ragdollLeftFootBoneIndex");
  FUN_0143e7c0(local_38,"ragdollLeftFootBoneIndex");
  puVar2 = (undefined2 *)FUN_0143e8b0(0);
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = *puVar2;
  FUN_0143e7c0(local_30,"ragdollRightFootBoneIndex");
  FUN_0143e7c0(local_38,"ragdollRightFootBoneIndex");
  puVar2 = (undefined2 *)FUN_0143e8b0(0);
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = *puVar2;
  FUN_0143e7c0(param_1,"stepInfo");
  FUN_0143e7c0(param_2,"stepInfo");
  piVar4 = (int *)FUN_0143e840();
  piVar5 = (int *)FUN_0143e840();
  iVar1 = piVar4[1];
  FUN_0143e9e0();
  FUN_010162f0();
  local_c = FUN_01009750();
  FUN_0143e9e0();
  FUN_010162f0();
  local_14 = FUN_01009750();
  iVar7 = *piVar4;
  iVar8 = *piVar5;
  local_8 = iVar1;
  if (0 < iVar1) {
    do {
      FUN_0143e9e0();
      uVar6 = FUN_010162f0();
      FUN_0143ea20(iVar7,uVar6);
      FUN_0143e9e0();
      uVar6 = FUN_010162f0();
      FUN_0143ea20(iVar8,uVar6);
      FUN_0143e7c0(local_40,"boneIndex");
      FUN_0143e7c0(local_48,"boneIndex");
      puVar2 = (undefined2 *)FUN_0143e8b0(0);
      puVar3 = (undefined2 *)FUN_0143e900(0);
      iVar7 = iVar7 + local_c;
      iVar8 = iVar8 + local_14;
      local_8 = local_8 + -1;
      *puVar3 = *puVar2;
    } while (local_8 != 0);
  }
  return;
}

// 010303C0  FUN_010303c0  size=125  [run]
void FUN_010303c0(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_14,"motion");
  FUN_0143ea60(local_c);
  FUN_0143e7c0(local_c,&DAT_01662d64);
  pbVar1 = (byte *)FUN_0143e930(0);
  bVar3 = *pbVar1;
  if (2 < bVar3) {
    if (4 < bVar3) {
      bVar3 = bVar3 - 1;
    }
    FUN_0143e7c0(local_c,&DAT_01662d64);
    pcVar2 = (char *)FUN_0143e930(0);
    *pcVar2 = bVar3 - 1;
  }
  return;
}

// 01030440  FUN_01030440  size=96  [run]
void FUN_01030440(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 local_c [8];
  
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,&DAT_01662d64);
  pbVar1 = (byte *)FUN_0143e930(0);
  bVar3 = *pbVar1;
  if (2 < bVar3) {
    if (4 < bVar3) {
      bVar3 = bVar3 - 1;
    }
    FUN_0143e7c0(local_c,&DAT_01662d64);
    pcVar2 = (char *)FUN_0143e930(0);
    *pcVar2 = bVar3 - 1;
  }
  return;
}

// 010304A0  FUN_010304a0  size=96  [run]
void FUN_010304a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  uint unaff_EDI;
  
  puVar1 = (undefined4 *)FUN_0143e840();
  puVar1[1] = unaff_EDI;
  puVar1[2] = unaff_EDI | 0x80000000;
  if (0 < (int)unaff_EDI) {
    FUN_0143e9e0();
    iVar2 = FUN_01016520();
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    uVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(iVar2 * unaff_EDI);
    *puVar1 = uVar4;
    (**(code **)(*param_1 + 0x10))(uVar4,iVar2 * unaff_EDI,6);
  }
  return;
}

// 01030500  FUN_01030500  size=116  [run]
void FUN_01030500(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_14 [16];
  
  FUN_0143ea40(param_1);
  FUN_0143e7c0(param_2,"childKeys");
  FUN_0143e7c0(local_14,"origChildTransforms");
  iVar1 = FUN_0143e9a0(0);
  iVar1 = *(int *)(iVar1 + 4);
  FUN_010304a0(param_3);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_0143e9a0(0);
      *(int *)(*piVar2 + iVar3 * 4) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

// 010305B0  FUN_010305b0  size=166  [run]
void FUN_010305b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_0143e7c0(param_1,"factorA");
  FUN_0143e7c0(param_2,"factorA");
  FUN_0143e7c0(param_1,"factorB");
  FUN_0143e7c0(param_2,"factorB");
  puVar3 = (undefined4 *)FUN_0143e890(0);
  uVar1 = *puVar3;
  puVar3 = (undefined4 *)FUN_0143e890(0);
  uVar2 = *puVar3;
  iVar5 = 0;
  do {
    iVar4 = FUN_0143e940(0);
    *(undefined4 *)(iVar4 + iVar5) = uVar1;
    iVar4 = FUN_0143e940(0);
    *(undefined4 *)(iVar4 + iVar5) = uVar2;
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x10);
  return;
}

// 01030660  FUN_01030660  size=229  [run]
void FUN_01030660(undefined4 param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int local_c;
  
  puVar4 = (undefined4 *)FUN_0143e840();
  piVar5 = (int *)FUN_0143e840();
  FUN_0143e9e0();
  iVar6 = FUN_01016520();
  FUN_01015e80(*piVar5,*puVar4,puVar4[1] * iVar6);
  FUN_0143e9e0();
  FUN_01016300();
  iVar7 = FUN_01009660("transition");
  uVar2 = *(ushort *)(iVar7 + 0x12);
  iVar7 = FUN_01009660("condition");
  uVar3 = *(ushort *)(iVar7 + 0x12);
  local_c = 0;
  if (0 < (int)puVar4[1]) {
    local_10 = 0;
    do {
      iVar8 = *piVar5 + local_10;
      iVar7 = *(int *)(iVar8 + (uint)uVar2);
      if (iVar7 != 0) {
        (**(code **)(*param_2 + 0x14))(iVar7,iVar8 + (uint)uVar2);
      }
      piVar1 = (int *)(iVar8 + (uint)uVar3);
      iVar7 = *piVar1;
      if (iVar7 != 0) {
        (**(code **)(*param_2 + 0x14))(iVar7,piVar1);
      }
      local_10 = local_10 + iVar6;
      local_c = local_c + 1;
    } while (local_c < (int)puVar4[1]);
  }
  return;
}

// 01030750  FUN_01030750  size=194  [run]
void FUN_01030750(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  undefined4 local_14;
  int local_8;
  
  FUN_0143e7c0(param_2,"bindings");
  FUN_0143e7c0(param_2,"indexOfBindingToEnable");
  piVar1 = (int *)FUN_0143e840();
  FUN_0143e9e0();
  local_14 = FUN_010162f0();
  local_8 = FUN_01009750();
  iVar4 = 0;
  if (0 < piVar1[1]) {
    iVar5 = 0;
    do {
      local_18 = *piVar1 + iVar5;
      FUN_0143e7c0(&local_18,"memberPath");
      puVar2 = (undefined4 *)FUN_0143e860(0);
      iVar3 = FUN_01015b90(*puVar2,"enable");
      if (iVar3 == 0) {
        piVar1 = (int *)FUN_0143e8b0(0);
        *piVar1 = iVar4;
        return;
      }
      iVar5 = iVar5 + local_8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar1[1]);
  }
  puVar2 = (undefined4 *)FUN_0143e8b0(0);
  *puVar2 = 0xffffffff;
  return;
}

// 01030820  FUN_01030820  size=133  [run]
void FUN_01030820(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_0143e7c0(param_1,"contactShapeKey");
  FUN_0143e7c0(param_2,"contactShapeKey");
  puVar1 = (undefined4 *)FUN_0143e8c0(0);
  puVar2 = (undefined4 *)FUN_0143e8c0(0);
  *puVar2 = *puVar1;
  iVar4 = 1;
  FUN_0143e9e0();
  iVar3 = FUN_01016320();
  if (1 < iVar3) {
    do {
      puVar1 = (undefined4 *)FUN_0143e8c0(iVar4);
      *puVar1 = 0xffffffff;
      iVar4 = iVar4 + 1;
      FUN_0143e9e0();
      iVar3 = FUN_01016320();
    } while (iVar4 < iVar3);
  }
  return;
}

// 010308B0  FUN_010308b0  size=204  [run]
void FUN_010308b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  FUN_0143e7c0(param_1,"wheelsInfo");
  FUN_0143e7c0(param_2,"wheelsInfo");
  piVar1 = (int *)FUN_0143e9a0(0);
  local_c = (int *)FUN_0143e9a0(0);
  local_28 = 0;
  iVar2 = FUN_0143ea60(local_18);
  local_24 = *(undefined4 *)(iVar2 + 4);
  local_20 = 0;
  iVar2 = FUN_0143ea60(local_18);
  local_1c = *(undefined4 *)(iVar2 + 4);
  local_10 = FUN_01009750();
  local_14 = FUN_01009750();
  if (0 < piVar1[1]) {
    local_8 = 0;
    iVar2 = 0;
    iVar3 = 0;
    do {
      local_28 = *piVar1 + iVar2;
      local_20 = *local_c + local_8;
      FUN_01030820(&local_28,&local_20,param_3);
      iVar2 = iVar2 + local_10;
      local_8 = local_8 + local_14;
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar1[1]);
  }
  return;
}

// 01030980  FUN_01030980  size=51  [run]
void FUN_01030980(void)

{
  undefined4 in_EAX;
  char *pcVar1;
  
  FUN_0143e7c0(in_EAX,"stridingType");
  pcVar1 = (char *)FUN_0143e920(0);
  if ('\0' < *pcVar1) {
    pcVar1 = (char *)FUN_0143e920(0);
    *pcVar1 = *pcVar1 + '\x01';
  }
  return;
}

// 010309C0  FUN_010309c0  size=12  [run]
void FUN_010309c0(void)

{
  FUN_01030980();
  return;
}

// 010309D0  FUN_010309d0  size=159  [run]
void FUN_010309d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0143e7c0(param_2,"embeddedTrianglesSubpart");
  FUN_0143e840();
  FUN_0143e9e0();
  FUN_01016300();
  FUN_01030980();
  FUN_0143e7c0(param_2,"trianglesSubparts");
  FUN_0143e9e0();
  FUN_01016300();
  iVar1 = FUN_0143e9a0(0);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 4)) {
    do {
      FUN_01009750();
      FUN_01030980();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 4));
  }
  return;
}

// 01030A70  FUN_01030a70  size=131  [run]
void FUN_01030a70(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_1c [16];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,"startVertex");
  puVar1 = (undefined4 *)FUN_0143e8c0(0);
  *puVar1 = 0;
  FUN_0143e7c0(local_1c,"triangleVertexStartForVertex");
  FUN_0143e7c0(local_c,"endVertex");
  iVar2 = FUN_0143e9a0(0);
  iVar2 = *(int *)(iVar2 + 4);
  piVar3 = (int *)FUN_0143e8c0(0);
  *piVar3 = iVar2 + -2;
  return;
}

// 01030B00  FUN_01030b00  size=96  [run]
void FUN_01030b00(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,&DAT_0170ea30);
  FUN_0143e7c0(local_14,&DAT_0170ea30);
  puVar1 = (undefined4 *)FUN_0143e8f0(0);
  puVar2 = (undefined4 *)FUN_0143e8c0(0);
  *puVar2 = *puVar1;
  return;
}

// 01030B60  FUN_01030b60  size=55  [run]
void FUN_01030b60(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_c [8];
  
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,"numTriangles");
  puVar1 = (undefined4 *)FUN_0143e8c0(0);
  *puVar1 = 0;
  return;
}

// 01030BA0  FUN_01030ba0  size=96  [run]
void FUN_01030ba0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  uint unaff_EDI;
  
  puVar1 = (undefined4 *)FUN_0143e840();
  puVar1[1] = unaff_EDI;
  puVar1[2] = unaff_EDI | 0x80000000;
  if (0 < (int)unaff_EDI) {
    FUN_0143e9e0();
    iVar2 = FUN_01016520();
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    uVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(iVar2 * unaff_EDI);
    *puVar1 = uVar4;
    (**(code **)(*param_1 + 0x10))(uVar4,iVar2 * unaff_EDI,6);
  }
  return;
}

// 01030C00  FUN_01030c00  size=142  [run]
void FUN_01030c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_0143e7c0(param_1,"boneInfluenceStartPerVertex");
  FUN_0143e7c0(param_2,"boneInfluenceStartPerVertex");
  iVar2 = FUN_0143e9a0(0);
  iVar3 = FUN_0143e9a0(0);
  iVar3 = *(int *)(iVar3 + 4);
  *(int *)(iVar2 + 4) = iVar3;
  FUN_01030ba0(param_3);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      piVar4 = (int *)FUN_0143e9a0(0);
      iVar1 = *piVar4;
      piVar4 = (int *)FUN_0143e9a0(0);
      *(undefined2 *)(*piVar4 + iVar2 * 2) = *(undefined2 *)(iVar1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}

// 01030C90  FUN_01030c90  size=136  [run]
void FUN_01030c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_1c [16];
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_1,"transitions");
  iVar1 = FUN_0143e840();
  if (0 < *(int *)(iVar1 + 4)) {
    FUN_0143e7c0(param_2,"transitions");
    FUN_010311c0(local_1c,param_2,"transitions",param_3);
    FUN_0143e7c0(local_1c,"transitions");
    FUN_01030ba0(param_3);
    FUN_01030660(local_c,param_3);
  }
  return;
}

// 01030D20  FUN_01030d20  size=673  [run]
int FUN_01030d20(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 local_38;
  int local_34;
  int local_30;
  int *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  piVar1 = param_1;
  DAT_02097cac = &local_38;
  local_30 = -0x80000000;
  local_10 = 0x80000000;
  local_1c = 0x80000000;
  uVar4 = param_1[1];
  local_38 = 0;
  local_34 = 0;
  local_2c = param_1;
  local_28 = param_2;
  local_18 = 0;
  local_14 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0 < (int)uVar4) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_24,uVar4 & ((int)uVar4 < 0) - 1,8);
  }
  param_1 = (int *)0x0;
  if (0 < piVar1[1]) {
    do {
      iVar10 = (int)param_1 * 8;
      uVar7 = FUN_010093a0("hclBufferDefinition");
      iVar8 = FUN_01015b90(uVar7);
      if (iVar8 == 0) {
        FUN_0143e7c0(*piVar1 + iVar10,&DAT_01662d64);
        piVar9 = (int *)FUN_0143e8c0(0);
        if (2 < *piVar9 - 6U) goto LAB_01030e1b;
        iVar8 = *piVar1;
        if (local_14 == (local_10 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_18,8);
        }
        puVar2 = (undefined4 *)(local_18 + local_14 * 8);
        *puVar2 = *(undefined4 *)(iVar8 + iVar10);
        puVar2[1] = *(undefined4 *)(iVar8 + 4 + iVar10);
        local_14 = local_14 + 1;
      }
      else {
LAB_01030e1b:
        iVar8 = *piVar1;
        puVar2 = (undefined4 *)(local_24 + local_20 * 8);
        *puVar2 = *(undefined4 *)(iVar8 + iVar10);
        puVar2[1] = *(undefined4 *)(iVar8 + 4 + iVar10);
        local_20 = local_20 + 1;
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < piVar1[1]);
  }
  FUN_01030fe0(&local_24);
  uVar7 = FUN_0104ed70("Havok-6.5.0-r1");
  iVar10 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                     (piVar1,param_2,&PTR_DAT_01b1ab98,uVar7);
  if (iVar10 == 0) {
    uVar7 = FUN_0104ed70("Havok-6.5.0-r1");
    iVar10 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                       (&local_18,param_2,&PTR_PTR_01b1ab88,uVar7);
  }
  param_2 = iVar10;
  iVar10 = 0;
  if (0 < (int)local_14) {
    do {
      puVar2 = (undefined4 *)(local_18 + iVar10 * 8);
      puVar3 = (undefined4 *)(*piVar1 + piVar1[1] * 8);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      piVar1[1] = piVar1[1] + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)local_14);
  }
  local_20 = 0;
  if ((local_1c & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c * 8);
  }
  local_24 = 0;
  local_1c = 0x80000000;
  local_14 = 0;
  if ((local_10 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 8);
  }
  piVar9 = local_2c;
  iVar6 = local_34;
  local_10 = 0x80000000;
  local_18 = 0;
  iVar8 = local_2c[1];
  piVar1 = local_2c + 1;
  iVar10 = iVar8 + local_34;
  if ((int)(local_2c[2] & 0x3fffffffU) < iVar10) {
    iVar5 = (local_2c[2] & 0x3fffffffU) * 2;
    if (iVar10 < iVar5) {
      iVar10 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_2c,iVar10,8);
  }
  *piVar1 = *piVar1 + iVar6;
  FUN_01015e80(*piVar9 + iVar8 * 8,local_38,local_34 * 8);
  DAT_02097cac = (undefined4 *)0x0;
  local_34 = 0;
  if (-1 < local_30) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 * 8);
  }
  return param_2;
}

// 01030FE0  FUN_01030fe0  size=44  [run]
void __thiscall FUN_01030fe0(undefined4 *param_1,undefined4 *param_2)

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

// 01031010  FUN_01031010  size=33  [run]
void __thiscall FUN_01031010(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 01031040  FUN_01031040  size=68  [run]
int __thiscall FUN_01031040(int *param_1,undefined4 param_2,int param_3)

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

// 01031090  FUN_01031090  size=53  [run]
undefined4 __thiscall FUN_01031090(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 010310D0  FUN_010310d0  size=69  [run]
int __thiscall FUN_010310d0(int *param_1,int param_2)

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

// 01031120  FUN_01031120  size=150  [run]
undefined4 __thiscall FUN_01031120(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  
  uVar3 = FUN_01009750();
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  uVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(uVar3);
  FUN_01015ea0(uVar5,0,uVar3);
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = uVar5;
  puVar1[1] = param_2;
  param_1[1] = param_1[1] + 1;
  (**(code **)(*(int *)param_1[4] + 0x10))(uVar5,uVar3,6);
  iVar2 = *(int *)param_1[4];
  uVar3 = FUN_010093a0();
  (**(code **)(iVar2 + 0x1c))(uVar5,uVar3);
  return uVar5;
}

// 010311C0  FUN_010311c0  size=111  [run]
undefined4 * FUN_010311c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_01009660(param_3);
  uVar2 = FUN_01016300();
  param_1[1] = uVar2;
  uVar2 = FUN_01031120(uVar2);
  *param_1 = uVar2;
  FUN_0143e7c0(param_2,param_3);
  puVar3 = (undefined4 *)FUN_0143e850(0);
  *puVar3 = *param_1;
  iVar1 = *param_4;
  uVar2 = FUN_0143e840();
  (**(code **)(iVar1 + 0x14))(*param_1,uVar2);
  return param_1;
}

// 01031230  FUN_01031230  size=101  [run]
void __fastcall FUN_01031230(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)param_1[3];
  iVar3 = piVar2[1];
  iVar4 = param_1[1];
  iVar1 = iVar3 + iVar4;
  if ((int)(piVar2[2] & 0x3fffffffU) < iVar1) {
    iVar5 = (piVar2[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar2,iVar5,8);
  }
  piVar2[1] = piVar2[1] + iVar4;
  FUN_01015e80(*piVar2 + iVar3 * 8,*param_1,param_1[1] * 8);
  return;
}

// 010312A0  FUN_010312a0  size=46  [run]
void __thiscall FUN_010312a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  param_1[3] = param_2;
  param_1[4] = param_3;
  DAT_02097cac = param_1;
  return;
}

// 010312D0  FUN_010312d0  size=78  [run]
void __fastcall FUN_010312d0(undefined4 *param_1)

{
  FUN_01031230();
  DAT_02097cac = 0;
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01031370  FUN_01031370  size=62  [run]
int FUN_01031370(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    uVar1 = FUN_010093a0();
    iVar2 = FUN_01015b90(param_2,uVar1);
    if (iVar2 == 0) break;
    param_1 = FUN_010093b0();
  }
  return param_1;
}

// 010313B0  FUN_010313b0  size=53  [run]
undefined4 FUN_010313b0(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  
  while( true ) {
    if (in_EAX == 0) {
      return 0;
    }
    uVar1 = FUN_010093a0();
    iVar2 = FUN_01015b90("hkbBindable",uVar1);
    if (iVar2 == 0) break;
    in_EAX = FUN_010093b0();
  }
  return 1;
}

// 010313F0  FUN_010313f0  size=88  [run]
void FUN_010313f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,"eventIdToSend");
  FUN_0143e7c0(param_2,"alarmEvent");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_1c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  return;
}

// 01031450  FUN_01031450  size=279  [run]
void FUN_01031450(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 local_48 [24];
  undefined1 local_30 [8];
  undefined1 local_28 [24];
  int local_10;
  int local_c;
  int local_8;
  
  FUN_0143e7c0(param_1,&DAT_0171420c);
  FUN_0143e7c0(param_2,&DAT_0171420c);
  piVar2 = (int *)FUN_0143e840();
  piVar3 = (int *)FUN_0143e840();
  iVar1 = piVar2[1];
  FUN_0143e9e0();
  FUN_010162f0();
  local_c = FUN_01009750();
  FUN_0143e9e0();
  FUN_010162f0();
  local_10 = FUN_01009750();
  iVar7 = *piVar2;
  iVar8 = *piVar3;
  local_8 = iVar1;
  if (0 < iVar1) {
    do {
      FUN_0143e9e0();
      uVar4 = FUN_010162f0();
      FUN_0143ea20(iVar7,uVar4);
      FUN_0143e9e0();
      uVar4 = FUN_010162f0();
      FUN_0143ea20(iVar8,uVar4);
      FUN_0143e7c0(local_28,"ungroundedEventId");
      FUN_0143e7c0(local_30,"ungroundedEvent");
      puVar5 = (undefined4 *)FUN_0143e8b0(0);
      uVar4 = 0;
      FUN_0143e9f0(local_48,&DAT_0164a424);
      puVar6 = (undefined4 *)FUN_0143e8b0(uVar4);
      iVar7 = iVar7 + local_c;
      iVar8 = iVar8 + local_10;
      local_8 = local_8 + -1;
      *puVar6 = *puVar5;
    } while (local_8 != 0);
  }
  return;
}

// 01031570  FUN_01031570  size=340  [run]
void FUN_01031570(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_2c [24];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,"sendToAttacherOnAttach");
  FUN_0143e7c0(local_14,"sendToAttacherOnAttach");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_2c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"sendToAttacheeOnAttach");
  FUN_0143e7c0(local_14,"sendToAttacheeOnAttach");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_2c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"sendToAttacherOnDetach");
  FUN_0143e7c0(local_14,"sendToAttacherOnDetach");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_2c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"sendToAttacheeOnDetach");
  FUN_0143e7c0(local_14,"sendToAttacheeOnDetach");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_2c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  return;
}

// 010316D0  FUN_010316d0  size=88  [run]
void FUN_010316d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,"pathEndEventId");
  FUN_0143e7c0(param_2,"pathEndEvent");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_1c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  return;
}

// 01031730  FUN_01031730  size=88  [run]
void FUN_01031730(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,"fixPositionEventId");
  FUN_0143e7c0(param_2,"fixPositionEvent");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_1c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  return;
}

// 01031790  FUN_01031790  size=88  [run]
void FUN_01031790(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,"eventToSend");
  FUN_0143e7c0(param_2,"eventToSend");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_1c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  return;
}

// 010317F0  FUN_010317f0  size=88  [run]
void FUN_010317f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,"eventToSendWhenTargetReached");
  FUN_0143e7c0(param_2,"eventToSendWhenTargetReached");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_1c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  return;
}

// 01031850  FUN_01031850  size=264  [run]
void FUN_01031850(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_2c [24];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,"eventToSend");
  FUN_0143e7c0(local_14,"eventToSend");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_2c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"eventToSendToTarget");
  FUN_0143e7c0(local_14,"eventToSendToTarget");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_2c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"closeToTargetEventId");
  FUN_0143e7c0(local_14,"closeToTargetEvent");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_2c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  return;
}

// 01031960  FUN_01031960  size=88  [run]
void FUN_01031960(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,"closeToGroundEventId");
  FUN_0143e7c0(param_2,"closeToGroundEvent");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_1c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  return;
}

// 010319D0  FUN_010319d0  size=236  [run]
void FUN_010319d0(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = (int *)FUN_0143e840();
  piVar4 = (int *)FUN_0143e840();
  FUN_0143e9e0();
  iVar5 = FUN_01016520();
  FUN_0143e9e0();
  iVar6 = FUN_01016520();
  FUN_0143e9e0();
  FUN_01016300();
  iVar7 = FUN_01009660("transition");
  uVar1 = *(ushort *)(iVar7 + 0x12);
  iVar7 = FUN_01009660("condition");
  uVar2 = *(ushort *)(iVar7 + 0x12);
  local_10 = 0;
  if (0 < piVar3[1]) {
    local_c = 0;
    local_8 = 0;
    do {
      iVar8 = *piVar4 + local_8;
      FUN_01015e80(iVar8,*piVar3 + local_c,iVar6);
      piVar9 = (int *)(iVar8 + (uint)uVar1);
      iVar7 = *piVar9;
      if (iVar7 != 0) {
        (**(code **)(*param_2 + 0x14))(iVar7,piVar9);
      }
      piVar9 = (int *)(iVar8 + (uint)uVar2);
      iVar7 = *piVar9;
      if (iVar7 != 0) {
        (**(code **)(*param_2 + 0x14))(iVar7,piVar9);
      }
      local_8 = local_8 + iVar6;
      local_c = local_c + iVar5;
      local_10 = local_10 + 1;
    } while (local_10 < piVar3[1]);
  }
  return;
}

// 01031AC0  FUN_01031ac0  size=63  [run]
void FUN_01031ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_1,"transitions");
  FUN_0143e7c0(param_2,"transitions");
  FUN_010319d0(local_c,param_3);
  return;
}

// 01031B10  FUN_01031b10  size=86  [run]
void FUN_01031b10(undefined4 param_1)

{
  undefined4 in_EAX;
  ushort *puVar1;
  char *pcVar2;
  
  FUN_0143e7c0(in_EAX,"objectQualityType");
  FUN_0143e7c0(param_1,"objectQualityType");
  puVar1 = (ushort *)FUN_0143e910(0);
  pcVar2 = (char *)FUN_0143e920(0);
  if (*puVar1 < 4) {
    *pcVar2 = (char)*puVar1 + -1;
    return;
  }
  *pcVar2 = (char)*puVar1;
  return;
}

// 01031B70  FUN_01031b70  size=114  [run]
void FUN_01031b70(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(in_EAX,"broadPhaseHandle");
  FUN_0143e7c0(param_1,"broadPhaseHandle");
  uVar1 = FUN_0143e840();
  FUN_0143e9e0(uVar1);
  uVar2 = FUN_01016300();
  local_1c = FUN_0143e840(uVar1,uVar2);
  FUN_0143e9e0();
  local_18 = FUN_01016300();
  FUN_01031b10(&local_1c);
  return;
}

// 01031BF0  FUN_01031bf0  size=117  [run]
void FUN_01031bf0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"collidable");
  FUN_0143e7c0(param_2,"collidable");
  uVar1 = FUN_0143e840();
  FUN_0143e9e0(uVar1);
  uVar2 = FUN_01016300();
  local_1c = FUN_0143e840(uVar1,uVar2);
  FUN_0143e9e0();
  local_18 = FUN_01016300();
  FUN_01031b70(&local_1c);
  return;
}

// 01031C70  FUN_01031c70  size=165  [run]
void FUN_01031c70(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_18,"priority");
  FUN_0143e7c0(local_20,"priority");
  puVar1 = (undefined1 *)FUN_0143e930(0);
  puVar2 = (undefined1 *)FUN_0143e930(0);
  FUN_010094f0("ConstraintPriority");
  local_c = FUN_010094f0("ConstraintPriority");
  FUN_01017740(*puVar1,&local_8);
  FUN_01017780(local_8,local_10);
  *puVar2 = local_10[0];
  return;
}

// 01031D20  FUN_01031d20  size=195  [run]
void FUN_01031d20(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_14,"particleDelay");
  FUN_0143e7c0(local_c,"toAnimDelay");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_14,"particleDelay");
  FUN_0143e7c0(local_c,"toSimDelay");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"toSimMaxDistance");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  *puVar1 = 0x3f800000;
  return;
}

// 01031DF0  FUN_01031df0  size=276  [run]
void FUN_01031df0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,"transitionPeriod");
  FUN_0143e7c0(local_14,"toAnimPeriod");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"transitionPeriod");
  FUN_0143e7c0(local_14,"toSimPeriod");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"transitionPlusDelayPeriod");
  FUN_0143e7c0(local_14,"toAnimPlusDelayPeriod");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(local_c,"transitionPlusDelayPeriod");
  FUN_0143e7c0(local_14,"toSimPlusDelayPeriod");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  return;
}

// 01031F10  FUN_01031f10  size=131  [run]
void FUN_01031f10(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_1c [16];
  undefined1 local_c [8];
  
  FUN_0143ea40(param_1);
  FUN_0143ea40(param_2);
  FUN_0143e7c0(local_c,"startVertex");
  puVar1 = (undefined4 *)FUN_0143e8c0(0);
  *puVar1 = 0;
  FUN_0143e7c0(local_1c,"boneInfluenceStartPerVertex");
  FUN_0143e7c0(local_c,"endVertex");
  iVar2 = FUN_0143e9a0(0);
  iVar2 = *(int *)(iVar2 + 4);
  piVar3 = (int *)FUN_0143e8c0(0);
  *piVar3 = iVar2 + -2;
  return;
}

// 01031FA0  FUN_01031fa0  size=112  [run]
void FUN_01031fa0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  FUN_0143e7c0(param_1,"childFracture");
  FUN_0143e7c0(param_2,"childFracture");
  puVar2 = (undefined4 *)FUN_0143e850(0);
  puVar3 = (undefined4 *)FUN_0143e850(0);
  *puVar3 = *puVar2;
  iVar1 = *param_3;
  puVar2 = (undefined4 *)FUN_0143e850(0);
  uVar4 = FUN_0143e840();
  (**(code **)(iVar1 + 0x14))(*puVar2,uVar4);
  return;
}

// 01032010  FUN_01032010  size=70  [run]
void FUN_01032010(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  FUN_0143e7c0(param_1,"flattenHierarchy");
  FUN_0143e7c0(param_2,"flattenHierarchy");
  puVar2 = (undefined1 *)FUN_0143e880(0);
  uVar1 = *puVar2;
  puVar2 = (undefined1 *)FUN_0143e880(0);
  *puVar2 = uVar1;
  return;
}

// 01032060  FUN_01032060  size=72  [run]
void FUN_01032060(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_1,"breakingPropogationRate");
  FUN_0143e7c0(param_2,"breakingPropagationRate");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  return;
}

// 010320B0  FUN_010320b0  size=399  [run]
void FUN_010320b0(char *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined4 *in_EAX;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  int local_10;
  int *local_c;
  
  *param_2 = 0;
  *param_4 = 0;
  uVar6 = in_EAX[1];
  local_c = (int *)*in_EAX;
  do {
    pcVar1 = param_1;
    if (pcVar1 == (char *)0x0) {
      return;
    }
    cVar2 = FUN_010313b0();
    if (cVar2 != '\0') {
      *param_2 = local_c;
      *param_4 = pcVar1;
      *param_3 = uVar6;
    }
    cVar2 = *pcVar1;
    pcVar8 = (char *)0x0;
    param_1 = pcVar1;
    if (cVar2 == '\0') {
LAB_0103213b:
      local_10 = 0;
      pcVar8 = param_1;
    }
    else {
      do {
        if (cVar2 == '/') break;
        bVar9 = cVar2 == ':';
        cVar2 = param_1[1];
        if (bVar9) {
          pcVar8 = param_1;
        }
        param_1 = param_1 + 1;
      } while (cVar2 != '\0');
      if (pcVar8 == (char *)0x0) goto LAB_0103213b;
      local_10 = FUN_01015cf0(pcVar8 + 1,0);
    }
    if (*param_1 == '\0') {
      param_1 = (char *)0x0;
    }
    else {
      param_1 = param_1 + 1;
    }
    iVar3 = FUN_01009570();
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        piVar4 = (int *)FUN_01009590(iVar7);
        iVar5 = FUN_01015bd0(pcVar1,*piVar4,(int)pcVar8 - (int)pcVar1);
        if ((iVar5 == 0) && (*(char *)(((int)pcVar8 - (int)pcVar1) + *piVar4) == '\0')) {
          local_c = (int *)((uint)*(ushort *)((int)piVar4 + 0x12) + (int)local_c);
          if ((char)piVar4[3] == '\x16') {
            if (*(char *)((int)piVar4 + 0xd) == '\x14') {
              if (param_1 == (char *)0x0) {
                return;
              }
              local_c = *(int **)(*local_c + local_10 * 4);
            }
            else {
              if (*(char *)((int)piVar4 + 0xd) != '\x19') {
                return;
              }
              iVar3 = *local_c;
              iVar7 = FUN_01016520();
              local_c = (int *)(iVar7 * local_10 + iVar3);
            }
          }
          else {
            iVar3 = FUN_01016320();
            if ((iVar3 != 0) && (local_10 != 0)) {
              iVar7 = FUN_01016360();
              local_c = (int *)((int)local_c + (iVar7 / iVar3) * local_10);
            }
            if ((char)piVar4[3] == '\x14') {
              if (param_1 == (char *)0x0) {
                return;
              }
              local_c = (int *)*local_c;
            }
            else if ((char)piVar4[3] != '\x19') {
              return;
            }
          }
          uVar6 = FUN_010162f0();
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
  } while( true );
}

// 01032240  FUN_01032240  size=117  [run]
void FUN_01032240(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int local_c;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_0143e9a0(0);
  iVar5 = 0;
  if (0 < piVar1[1]) {
    do {
      FUN_0143e9e0();
      uVar2 = FUN_01016300();
      iVar3 = FUN_01009750();
      local_c = *piVar1 + iVar3 * iVar5;
      local_8 = uVar2;
      FUN_0143e7c0(&local_c,"materialStriding");
      puVar4 = (undefined2 *)FUN_0143e900(0);
      iVar5 = iVar5 + 1;
      *puVar4 = 0xc;
    } while (iVar5 < piVar1[1]);
  }
  return;
}

// 010322C0  FUN_010322c0  size=67  [run]
void FUN_010322c0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_2,"trianglesSubparts");
  FUN_01032240(local_c);
  FUN_0143e7c0(param_2,"shapesSubparts");
  FUN_01032240(local_14);
  return;
}

// 01032310  FUN_01032310  size=115  [run]
void FUN_01032310(uint param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)FUN_0143e840();
  puVar1[1] = param_1;
  puVar1[2] = param_1 | 0x80000000;
  if (0 < (int)param_1) {
    FUN_0143e9e0();
    iVar2 = FUN_01016520();
    iVar2 = iVar2 * param_1;
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    uVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(iVar2);
    *puVar1 = uVar4;
    (**(code **)(*param_2 + 0x10))(uVar4,iVar2,6);
    FUN_01015ea0(*puVar1,0,iVar2);
  }
  return;
}

// 01032390  FUN_01032390  size=145  [run]
void FUN_01032390(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)FUN_0143e9a0(0);
  piVar2 = (int *)FUN_0143e840();
  FUN_01032310(piVar1[1],param_1);
  if (0 < piVar1[1]) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      puVar3 = (undefined4 *)(*piVar2 + iVar5);
      *puVar3 = *(undefined4 *)(*piVar1 + iVar4 * 4);
      *(undefined2 *)(puVar3 + 1) = 0;
      *(undefined2 *)((int)puVar3 + 6) = 0x3f80;
      iVar4 = iVar4 + 1;
      puVar3[2] = 0;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < piVar1[1]);
  }
  return;
}

// 01032430  FUN_01032430  size=62  [run]
void FUN_01032430(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0143e7c0(param_1,"materials");
  FUN_0143e7c0(param_2,"materials");
  FUN_01032390(param_3);
  return;
}

// 01032470  FUN_01032470  size=62  [run]
void FUN_01032470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0143e7c0(param_1,"materials");
  FUN_0143e7c0(param_2,"materials");
  FUN_01032390(param_3);
  return;
}

// 010324B0  FUN_010324b0  size=140  [run]
void __thiscall FUN_010324b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_EDI;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,in_EAX);
  puVar1 = (undefined4 *)FUN_0143e840();
  if (0 < (int)puVar1[1]) {
    FUN_0143e7c0(param_2,param_3);
    FUN_01033180(local_1c,param_2,param_3,unaff_EDI);
    FUN_0143e7c0(local_1c,"boneWeights");
    FUN_01032310(puVar1[1]);
    puVar2 = (undefined4 *)FUN_0143e840();
    FUN_01015e80(*puVar2,*puVar1,puVar1[1] * 4);
  }
  return;
}

// 01032540  FUN_01032540  size=140  [run]
void __thiscall FUN_01032540(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_EDI;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,in_EAX);
  puVar1 = (undefined4 *)FUN_0143e840();
  if (0 < (int)puVar1[1]) {
    FUN_0143e7c0(param_2,param_3);
    FUN_01033180(local_1c,param_2,param_3,unaff_EDI);
    FUN_0143e7c0(local_1c,"boneIndices");
    FUN_01032310(puVar1[1]);
    puVar2 = (undefined4 *)FUN_0143e840();
    FUN_01015e80(*puVar2,*puVar1,puVar1[1] * 4);
  }
  return;
}

// 010325D0  FUN_010325d0  size=116  [run]
void FUN_010325d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,"catchFallDoneEventId");
  FUN_0143e7c0(param_2,"catchFallDoneEvent");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  uVar3 = 0;
  FUN_0143e9f0(local_1c,&DAT_0164a424);
  puVar2 = (undefined4 *)FUN_0143e8b0(uVar3);
  *puVar2 = *puVar1;
  FUN_01032540(param_2,"spineIndices");
  return;
}

// 01032650  FUN_01032650  size=357  [run]
void FUN_01032650(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0143e7c0(param_2,"variableInitialValues");
  FUN_01009660("variableInitialValues");
  local_8 = FUN_01016300();
  local_c = FUN_010330e0(local_8);
  FUN_0143e7c0(param_2,"variableInitialValues");
  puVar5 = (undefined4 *)FUN_0143e850(0);
  *puVar5 = local_c;
  iVar2 = *param_3;
  uVar6 = FUN_0143e840();
  (**(code **)(iVar2 + 0x14))(local_c,uVar6);
  FUN_0143e7c0(&local_c,"wordVariableValues");
  FUN_0143e7c0(&local_c,"quadVariableValues");
  FUN_0143e7c0(param_1,"quadVariableInitialValues");
  FUN_0143e7c0(param_1,"variableInfos");
  piVar7 = (int *)FUN_0143e840();
  piVar8 = (int *)FUN_0143e840();
  iVar2 = piVar8[1];
  if (0 < iVar2) {
    FUN_01032310(iVar2,param_3);
    iVar11 = *piVar8;
    iVar10 = *piVar7;
    iVar9 = 0;
    if (0 < iVar2) {
      do {
        *(undefined4 *)(iVar10 + iVar9 * 4) = *(undefined4 *)(iVar11 + iVar9 * 8);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar2);
    }
  }
  piVar7 = (int *)FUN_0143e840();
  iVar2 = piVar7[1];
  if (0 < iVar2) {
    FUN_01032310(iVar2,param_3);
    piVar8 = (int *)FUN_0143e840();
    puVar5 = (undefined4 *)*piVar8;
    if (0 < iVar2) {
      iVar10 = *piVar7 - (int)puVar5;
      iVar11 = iVar2;
      do {
        puVar1 = (undefined4 *)(iVar10 + (int)puVar5);
        uVar6 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *puVar5 = *puVar1;
        puVar5[1] = uVar6;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        puVar5 = puVar5 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  FUN_0143e7c0(&local_c,"variantVariableValues");
  FUN_01032310(iVar2,param_3);
  return;
}

// 010327C0  FUN_010327c0  size=90  [run]
void FUN_010327c0(undefined4 *param_1,undefined4 *param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,*param_1,*param_2);
  FUN_010100a0(&PTR_vftable_018e9b94,*param_2,param_2[1]);
  FUN_010324b0(param_2,"boneWeights");
  return;
}

// 01032820  FUN_01032820  size=137  [run]
void FUN_01032820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_1c [16];
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_1,"globalTransitions");
  iVar1 = FUN_0143e840();
  if (0 < *(int *)(iVar1 + 4)) {
    FUN_0143e7c0(param_2,"wildcardTransitions");
    FUN_01033180(local_1c,param_2,"wildcardTransitions",param_3);
    FUN_0143e7c0(local_1c,"transitions");
    FUN_01032310(*(undefined4 *)(iVar1 + 4),param_3);
    FUN_010319d0(local_c,param_3);
  }
  return;
}

// 010328B0  FUN_010328b0  size=154  [run]
void FUN_010328b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_1c [24];
  
  FUN_0143e7c0(param_1,"triggers");
  puVar1 = (undefined4 *)FUN_0143e840();
  if (0 < (int)puVar1[1]) {
    FUN_01033180(local_1c,param_2,"triggers",param_3);
    FUN_0143e7c0(local_1c,"triggers");
    FUN_01032310(puVar1[1],param_3);
    puVar2 = (undefined4 *)FUN_0143e840();
    FUN_0143e9e0();
    iVar3 = FUN_01016520();
    FUN_01015e80(*puVar2,*puVar1,puVar1[1] * iVar3);
  }
  return;
}

// 01032950  FUN_01032950  size=35  [run]
void FUN_01032950(undefined4 param_1,undefined4 param_2)

{
  FUN_010324b0(param_2,"boneWeights");
  return;
}

// 01032980  FUN_01032980  size=35  [run]
void FUN_01032980(undefined4 param_1,undefined4 param_2)

{
  FUN_01032540(param_2,"keyframedBonesList");
  return;
}

// 010329B0  FUN_010329b0  size=35  [run]
void FUN_010329b0(undefined4 param_1,undefined4 param_2)

{
  FUN_01032540(param_2,"keyframedBonesList");
  return;
}

// 010329E0  FUN_010329e0  size=92  [run]
void FUN_010329e0(undefined4 *param_1,undefined4 *param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,*param_1,*param_2);
  FUN_010100a0(&PTR_vftable_018e9b94,*param_2,param_2[1]);
  FUN_01032540(param_2,"boneIndices");
  return;
}

// 01032A40  FUN_01032a40  size=130  [run]
undefined4 FUN_01032a40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
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
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_3c = 0;
  local_38 = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  DAT_02097cb0 = &local_3c;
  local_20 = 0xffffffff;
  local_14 = 0xffffffff;
  local_8 = 0xffffffff;
  local_34 = 0x80000000;
  local_30 = param_1;
  local_2c = param_2;
  FUN_01033340();
  uVar1 = FUN_0104ed70("Havok-6.5.0-b1");
  uVar1 = hkRenamedClassNameRegistry::hkRenamedClassNameRegistry
                    (param_1,param_2,&PTR_PTR_01b1abb8,uVar1);
  FUN_010332b0();
  return uVar1;
}

// 01032AD0  FUN_01032ad0  size=1223  [run]
void FUN_01032ad0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  LPVOID pvVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 local_13c;
  uint local_134;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_88;
  undefined4 local_84;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar7 = *(int **)(DAT_02097cb0 + 0xc);
  FUN_0143e7c0(param_1,"bindings");
  piVar1 = (int *)FUN_0143e840();
  if (0 < piVar1[1]) {
    local_18 = piVar1;
    FUN_0143e7c0(param_2,"bindings");
    piVar2 = (int *)FUN_0143e840();
    local_28 = piVar2;
    iVar3 = FUN_01010160(*param_1,0xffffffff);
    local_3c = (int *)(*piVar7 + iVar3 * 8);
    FUN_0143e9e0();
    local_48 = FUN_01016520();
    FUN_0143e9e0();
    iVar3 = FUN_01016520();
    local_60 = DAT_02097cb0 + 0x20;
    local_2c = DAT_02097cb0 + 0x2c;
    local_20 = 0;
    local_54 = iVar3;
    FUN_0143e9e0();
    local_58 = FUN_01016300();
    local_30 = 0;
    if (0 < piVar1[1]) {
      local_10 = 0;
      local_24 = 0;
      local_1c = 0;
      do {
        local_5c = *piVar1 + local_1c;
        FUN_0143e7c0(&local_5c,"object");
        puVar4 = (undefined4 *)FUN_0143e840();
        iVar5 = FUN_01010160(*puVar4,0);
        if (iVar5 == 0) {
          local_8 = local_3c[1];
          local_c = *local_3c;
        }
        else {
          local_8 = FUN_01010160(iVar5,0);
          local_c = iVar5;
        }
        FUN_0143e7c0(&local_5c,"memberPath");
        puVar4 = (undefined4 *)FUN_0143e840();
        uVar6 = FUN_01015cd0(*puVar4);
        puVar4 = (undefined4 *)FUN_0143e840();
        FUN_01026950(*puVar4,uVar6);
        piVar7 = local_3c;
        uVar6 = FUN_010093a0("hkbBlenderGenerator");
        iVar5 = FUN_01015b90(uVar6);
        if (iVar5 == 0) {
LAB_01032cfe:
          pcVar10 = "boneWeights/boneWeights";
          pcVar9 = "boneWeights";
LAB_01032d0a:
          FUN_01026c40(pcVar9,pcVar10,0);
        }
        else {
          uVar6 = FUN_010093a0("hkbPoweredRagdollControlsModifier");
          iVar5 = FUN_01015b90(uVar6);
          if (iVar5 == 0) goto LAB_01032cfe;
          uVar6 = FUN_010093a0("hkbRigidBodyRagdollModifier");
          iVar5 = FUN_01015b90(uVar6);
          if (iVar5 == 0) {
LAB_01032cf0:
            pcVar10 = "keyframedBonesList/boneIndices";
            pcVar9 = "keyframedBonesList";
            goto LAB_01032d0a;
          }
          uVar6 = FUN_010093a0("hkbKeyframeBonesModifier");
          iVar5 = FUN_01015b90(uVar6);
          if (iVar5 == 0) goto LAB_01032cf0;
          uVar6 = FUN_010093a0("hkbJigglerModifier");
          iVar5 = FUN_01015b90(uVar6);
          if (iVar5 == 0) {
            pcVar10 = "boneIndices/boneIndices";
            pcVar9 = "boneIndices";
            goto LAB_01032d0a;
          }
        }
        local_38 = 0;
        local_14 = 0;
        FUN_010320b0(local_13c,&local_38,&local_14,&local_34);
        iVar5 = local_24;
        if (*piVar7 == local_38) {
          FUN_01015e80(local_24 + *piVar2,local_10 + *piVar2,iVar3);
          local_20 = local_20 + 1;
          local_24 = iVar5 + iVar3;
        }
        else {
          iVar5 = local_38;
          if (local_c != local_38) {
            iVar5 = FUN_01010160(local_38,local_38);
          }
          local_8 = local_14;
          local_c = iVar5;
          FUN_0143e7c0(&local_c,"variableBindingSet");
          piVar7 = (int *)FUN_0143e850(0);
          if (*piVar7 == 0) {
            FUN_01009660("variableBindingSet");
            local_40 = FUN_01016300();
            local_44 = FUN_010330e0(local_40);
            FUN_0143e7c0(&local_c,"variableBindingSet");
            puVar4 = (undefined4 *)FUN_0143e850(0);
            *puVar4 = local_44;
            iVar5 = *param_3;
            uVar6 = FUN_0143e840();
            (**(code **)(iVar5 + 0x14))(local_44,uVar6);
            FUN_0143e7c0(&local_44,"bindings");
            FUN_01032310(local_18[1],param_3);
            iVar5 = FUN_0143e840();
            *(undefined4 *)(iVar5 + 4) = 0;
            piVar2 = local_28;
          }
          FUN_0143e9e0();
          local_9c = FUN_01016300();
          puVar4 = (undefined4 *)FUN_0143e850(0);
          local_a0 = *puVar4;
          FUN_0143e7c0(&local_a0,"bindings");
          piVar7 = (int *)FUN_0143e840();
          FUN_01015e80(piVar7[1] * iVar3 + *piVar7,*piVar2 + local_10,iVar3);
          local_88 = piVar7[1] * iVar3 + *piVar7;
          FUN_0143e9e0();
          local_84 = FUN_01016300();
          FUN_0143e7c0(&local_88,"memberPath");
          iVar3 = FUN_01015cd0(local_34);
          FUN_0143e840();
          local_14 = DAT_02097cb0;
          pvVar8 = TlsGetValue(DAT_01f8fc4c);
          iVar5 = (**(code **)(**(int **)((int)pvVar8 + 0x2c) + 4))(iVar3 + 1);
          (**(code **)(**(int **)(local_14 + 0x10) + 0x10))(iVar5,iVar3 + 1,6);
          FUN_01015e80(iVar5,local_34,iVar3);
          *(undefined1 *)(iVar5 + iVar3) = 0;
          piVar7[1] = piVar7[1] + 1;
          piVar2 = local_28;
          iVar3 = local_54;
        }
        if (-1 < (int)local_134) {
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_13c,local_134 & 0x3fffffff);
        }
        local_1c = local_1c + local_48;
        local_10 = local_10 + iVar3;
        local_30 = local_30 + 1;
        piVar1 = local_18;
      } while (local_30 < local_18[1]);
    }
    piVar2[1] = local_20;
  }
  return;
}

// 01032FA0  FUN_01032fa0  size=9  [run]
void FUN_01032fa0(void)

{
  FUN_01010160();
  return;
}

// 01032FB0  FUN_01032fb0  size=9  [run]
void FUN_01032fb0(void)

{
  FUN_01010160();
  return;
}

// 01032FC0  FUN_01032fc0  size=15  [run]
int __thiscall FUN_01032fc0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01033020  FUN_01033020  size=25  [run]
void FUN_01033020(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01033040  FUN_01033040  size=25  [run]
void FUN_01033040(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01033060  FUN_01033060  size=59  [run]
undefined4 __thiscall FUN_01033060(int param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_2);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(uVar2,param_2,6);
  return uVar2;
}

// 010330E0  FUN_010330e0  size=150  [run]
undefined4 __thiscall FUN_010330e0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  
  uVar3 = FUN_01009750();
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  uVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(uVar3);
  FUN_01015ea0(uVar5,0,uVar3);
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = uVar5;
  puVar1[1] = param_2;
  param_1[1] = param_1[1] + 1;
  (**(code **)(*(int *)param_1[4] + 0x10))(uVar5,uVar3,6);
  iVar2 = *(int *)param_1[4];
  uVar3 = FUN_010093a0();
  (**(code **)(iVar2 + 0x1c))(uVar5,uVar3);
  return uVar5;
}

// 01033180  FUN_01033180  size=111  [run]
undefined4 * FUN_01033180(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_01009660(param_3);
  uVar2 = FUN_01016300();
  param_1[1] = uVar2;
  uVar2 = FUN_010330e0(uVar2);
  *param_1 = uVar2;
  FUN_0143e7c0(param_2,param_3);
  puVar3 = (undefined4 *)FUN_0143e850(0);
  *puVar3 = *param_1;
  iVar1 = *param_4;
  uVar2 = FUN_0143e840();
  (**(code **)(iVar1 + 0x14))(*param_1,uVar2);
  return param_1;
}

// 010331F0  FUN_010331f0  size=101  [run]
void __fastcall FUN_010331f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)param_1[3];
  iVar3 = piVar2[1];
  iVar4 = param_1[1];
  iVar1 = iVar3 + iVar4;
  if ((int)(piVar2[2] & 0x3fffffffU) < iVar1) {
    iVar5 = (piVar2[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar2,iVar5,8);
  }
  piVar2[1] = piVar2[1] + iVar4;
  FUN_01015e80(*piVar2 + iVar3 * 8,*param_1,param_1[1] * 8);
  return;
}

// 01033260  FUN_01033260  size=70  [run]
void __thiscall FUN_01033260(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[3] = param_2;
  param_1[4] = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff;
  DAT_02097cb0 = param_1;
  return;
}

// 010332B0  FUN_010332b0  size=144  [run]
void __fastcall FUN_010332b0(undefined4 *param_1)

{
  FUN_010331f0();
  DAT_02097cb0 = 0;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01033340  FUN_01033340  size=496  [run]
void __fastcall FUN_01033340(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  piVar6 = *(int **)(param_1 + 0xc);
  iVar7 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  local_8 = param_1;
  if (0 < piVar6[1]) {
    do {
      puVar8 = (undefined4 *)(*piVar6 + iVar7 * 8);
      iVar4 = *(int *)(*piVar6 + 4 + iVar7 * 8);
      while (iVar4 != 0) {
        uVar2 = FUN_010093a0();
        iVar3 = FUN_01015b90("hkbVariableBindingSet",uVar2);
        if (iVar3 == 0) {
          if (iVar4 != 0) {
            if (local_20 == (local_1c & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,&local_24,8);
            }
            puVar1 = (undefined4 *)(local_24 + local_20 * 8);
            *puVar1 = *puVar8;
            puVar1[1] = puVar8[1];
            local_20 = local_20 + 1;
            piVar6 = *(int **)(local_8 + 0xc);
            piVar6[1] = piVar6[1] + -1;
            if (piVar6[1] != iVar7) {
              puVar8 = (undefined4 *)(*piVar6 + iVar7 * 8);
              iVar4 = (*piVar6 + piVar6[1] * 8) - (int)puVar8;
              iVar3 = 2;
              do {
                *puVar8 = *(undefined4 *)(iVar4 + (int)puVar8);
                puVar8 = puVar8 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            iVar7 = iVar7 + -1;
          }
          break;
        }
        iVar4 = FUN_010093b0();
      }
      piVar6 = *(int **)(local_8 + 0xc);
      iVar7 = iVar7 + 1;
    } while (iVar7 < piVar6[1]);
  }
  piVar6 = *(int **)(local_8 + 0xc);
  iVar7 = 0;
  if (0 < piVar6[1]) {
    do {
      iVar4 = *piVar6;
      iVar3 = *(int *)(iVar4 + 4 + iVar7 * 8);
      while (iVar3 != 0) {
        uVar2 = FUN_010093a0();
        iVar5 = FUN_01015b90("hkbNode",uVar2);
        if (iVar5 == 0) {
          if (iVar3 != 0) {
            local_10 = *(undefined4 *)(iVar4 + iVar7 * 8);
            local_c = iVar3;
            FUN_0143e7c0(&local_10,"variableBindingSet");
            piVar6 = (int *)FUN_0143e840();
            if (*piVar6 != 0) {
              FUN_010100a0(&PTR_vftable_018e9b94,*piVar6,iVar7);
            }
          }
          break;
        }
        iVar3 = FUN_010093b0();
      }
      piVar6 = *(int **)(local_8 + 0xc);
      iVar7 = iVar7 + 1;
    } while (iVar7 < piVar6[1]);
  }
  iVar7 = 0;
  if (0 < (int)local_20) {
    do {
      piVar6 = *(int **)(local_8 + 0xc);
      puVar8 = (undefined4 *)(local_24 + iVar7 * 8);
      if (piVar6[1] == (piVar6[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar6,8);
      }
      puVar1 = (undefined4 *)(*piVar6 + piVar6[1] * 8);
      *puVar1 = *puVar8;
      puVar1[1] = puVar8[1];
      piVar6[1] = piVar6[1] + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)local_20);
  }
  local_20 = 0;
  if (-1 < (int)local_1c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c * 8);
  }
  return;
}

// 01033540  FUN_01033540  size=63  [run]
undefined4 FUN_01033540(undefined4 param_1)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = in_EAX == 0;
  if (!bVar3) {
    do {
      uVar1 = FUN_010093a0();
      iVar2 = FUN_01015b90(uVar1);
      if (iVar2 == 0) break;
      in_EAX = FUN_010093b0();
    } while (in_EAX != 0);
    bVar3 = in_EAX == 0;
  }
  *(bool *)param_1 = !bVar3;
  return param_1;
}

// 01033580  FUN_01033580  size=105  [run]
void FUN_01033580(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_0143e7c0(param_1,"flags");
  FUN_0143e7c0(param_2,"flags");
  puVar1 = (undefined2 *)FUN_0143e8c0(0);
  puVar2 = (undefined2 *)FUN_0143e910(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_2,"numDisabledChildren");
  puVar1 = (undefined2 *)FUN_0143e910(0);
  *puVar1 = 0;
  return;
}

// 01033610  FUN_01033610  size=23  [run]
void FUN_01033610(undefined4 param_1,uint *param_2,uint *param_3)

{
  *(bool *)param_1 = *param_2 < *param_3;
  return;
}

// 01033630  FUN_01033630  size=173  [run]
void FUN_01033630(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  float local_8;
  
  uVar7 = 0;
  FUN_0143e7c0(param_2,"particleDatas");
  piVar1 = (int *)FUN_0143e9a0(uVar7);
  iVar4 = piVar1[1];
  fVar6 = 0.0;
  iVar5 = 0;
  local_8 = 0.0;
  if (3 < iVar4) {
    iVar3 = (iVar4 - 4U >> 2) + 1;
    pfVar2 = (float *)(*piVar1 + 0x20);
    iVar5 = iVar3 * 4;
    do {
      fVar6 = fVar6 + pfVar2[-8] + pfVar2[-4] + *pfVar2 + pfVar2[4];
      pfVar2 = pfVar2 + 0x10;
      iVar3 = iVar3 + -1;
      local_8 = fVar6;
    } while (iVar3 != 0);
  }
  if (iVar5 < iVar4) {
    pfVar2 = (float *)(iVar5 * 0x10 + *piVar1);
    iVar4 = iVar4 - iVar5;
    do {
      local_8 = local_8 + *pfVar2;
      pfVar2 = pfVar2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar7 = 0;
  FUN_0143e7c0(param_2,"totalMass");
  pfVar2 = (float *)FUN_0143e890(uVar7);
  *pfVar2 = local_8;
  return;
}

// 010336F0  FUN_010336f0  size=373  [run]
void FUN_010336f0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_48 [16];
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  FUN_0143e7c0(param_1,"findInitialContactPoints");
  FUN_0143e7c0(param_2,"flags");
  FUN_0143ea40(param_2);
  piVar3 = &local_8;
  pcVar7 = "FLAG_FIND_INITIAL_CONTACT_POINTS";
  FUN_010094f0("Flags");
  FUN_01017780(pcVar7,piVar3);
  pcVar7 = (char *)FUN_0143e880(0);
  cVar1 = *pcVar7;
  pbVar2 = (byte *)FUN_0143e920(0);
  *pbVar2 = -(cVar1 != '\0') & (byte)local_8;
  FUN_0143e7c0(param_1,"connections");
  FUN_0143e7c0(param_2,"connections");
  iVar6 = 0;
  local_c = (int *)FUN_0143e9a0(0);
  piVar3 = (int *)FUN_0143e9a0(0);
  iVar4 = FUN_0143ea60(local_48);
  local_2c = *(undefined4 *)(iVar4 + 4);
  iVar4 = FUN_0143ea60(local_48);
  local_34 = *(undefined4 *)(iVar4 + 4);
  FUN_0143e9e0();
  FUN_010162f0();
  local_14 = FUN_01009750();
  FUN_0143e9e0();
  FUN_010162f0();
  local_18 = FUN_01009750();
  iVar4 = 0;
  if (0 < piVar3[1]) {
    local_8 = 0;
    do {
      local_30 = *local_c + iVar6;
      local_38 = *piVar3 + local_8;
      FUN_0143e7c0(&local_30,"strength");
      FUN_0143e7c0(&local_38,"contactArea");
      local_10 = (undefined4 *)FUN_0143e890(0);
      puVar5 = (undefined4 *)FUN_0143e890(0);
      iVar6 = iVar6 + local_14;
      *puVar5 = *local_10;
      local_8 = local_8 + local_18;
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar3[1]);
  }
  return;
}

// 01033870  FUN_01033870  size=101  [run]
void FUN_01033870(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0143e7c0(param_1,"vertexParticlePairs");
  FUN_0143e7c0(param_2,"vertexParticlePairs");
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  puVar4 = (undefined4 *)FUN_0143e9a0(0);
  uVar1 = *puVar3;
  *puVar4 = uVar1;
  iVar2 = puVar3[1];
  puVar4[1] = iVar2;
  if (1 < iVar2) {
    FUN_01033c70(uVar1,0,iVar2 + -1,FUN_01033610);
  }
  return;
}

// 010338E0  FUN_010338e0  size=510  [run]
void FUN_010338e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  LPVOID pvVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar14 = 0;
  FUN_0143e7c0(param_1,"bufferIdx_A");
  piVar3 = (int *)FUN_0143e8c0(uVar14);
  iVar11 = *piVar3;
  uVar14 = 0;
  FUN_0143e7c0(param_1,"bufferIdx_B");
  puVar4 = (undefined4 *)FUN_0143e8c0(uVar14);
  uVar14 = *puVar4;
  uVar15 = 0;
  FUN_0143e7c0(param_1,"bufferIdx_C");
  piVar3 = (int *)FUN_0143e8c0(uVar15);
  bVar12 = iVar11 == *piVar3;
  if (bVar12) {
    uVar15 = 0;
    FUN_0143e7c0(param_2,"bufferIdx_A");
    puVar4 = (undefined4 *)FUN_0143e8c0(uVar15);
    uVar15 = 0;
    *puVar4 = uVar14;
    FUN_0143e7c0(param_2,"bufferIdx_B");
    piVar3 = (int *)FUN_0143e8c0(uVar15);
    *piVar3 = iVar11;
  }
  FUN_0143e7c0(param_1,"vertexTriples");
  FUN_0143e7c0(param_2,"blendEntries");
  piVar3 = (int *)FUN_0143e9a0(0);
  piVar5 = (int *)FUN_0143e830();
  iVar1 = piVar3[1];
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(iVar1 * 8);
  iVar2 = *piVar3;
  *piVar5 = iVar7;
  piVar5[1] = iVar1;
  piVar5[2] = iVar1;
  iVar11 = 0;
  if (3 < iVar1) {
    pfVar8 = (float *)(iVar7 + 8);
    pfVar9 = (float *)(iVar2 + 0xc);
    iVar10 = (iVar1 - 4U >> 2) + 1;
    iVar11 = iVar10 * 4;
    do {
      pfVar8[-2] = pfVar9[-3];
      if (bVar12) {
        fVar13 = 1.0 - *pfVar9;
      }
      else {
        fVar13 = *pfVar9;
      }
      pfVar8[-1] = fVar13;
      *pfVar8 = pfVar9[1];
      if (bVar12) {
        fVar13 = 1.0 - pfVar9[4];
      }
      else {
        fVar13 = pfVar9[4];
      }
      pfVar8[1] = fVar13;
      pfVar8[2] = pfVar9[5];
      if (bVar12) {
        fVar13 = 1.0 - pfVar9[8];
      }
      else {
        fVar13 = pfVar9[8];
      }
      pfVar8[3] = fVar13;
      pfVar8[4] = pfVar9[9];
      if (bVar12) {
        fVar13 = 1.0 - pfVar9[0xc];
      }
      else {
        fVar13 = pfVar9[0xc];
      }
      pfVar8[5] = fVar13;
      pfVar9 = pfVar9 + 0x10;
      pfVar8 = pfVar8 + 8;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (iVar11 < iVar1) {
    pfVar8 = (float *)(iVar2 + 0xc + iVar11 * 0x10);
    do {
      *(float *)(iVar7 + iVar11 * 8) = pfVar8[-3];
      if (bVar12) {
        fVar13 = 1.0 - *pfVar8;
      }
      else {
        fVar13 = *pfVar8;
      }
      *(float *)(iVar7 + 4 + iVar11 * 8) = fVar13;
      iVar11 = iVar11 + 1;
      pfVar8 = pfVar8 + 4;
    } while (iVar11 < iVar1);
  }
  return;
}

// 01033AE0  FUN_01033ae0  size=275  [run]
void FUN_01033ae0(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  piVar4 = param_1;
  uVar2 = param_1[1];
  local_18 = 0;
  local_14 = 0;
  local_10 = -0x80000000;
  if (0 < (int)uVar2) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_18,uVar2 & ((int)uVar2 < 0) - 1,8);
  }
  local_8 = 0;
  if (0 < piVar4[1]) {
    do {
      local_c = *(undefined4 *)(*piVar4 + 4 + local_8 * 8);
      iVar7 = 0;
      iVar3 = *param_2;
      while (iVar3 != 0) {
        pcVar5 = (char *)FUN_01033540((int)&param_1 + 3);
        if (*pcVar5 != '\0') {
          (**(code **)(*param_3 + 0x18))(*(undefined4 *)(*piVar4 + local_8 * 8),0,0);
          goto LAB_01033b89;
        }
        iVar7 = iVar7 + 1;
        iVar3 = param_2[iVar7];
      }
      puVar6 = (undefined4 *)(*piVar4 + local_8 * 8);
      puVar1 = (undefined4 *)(local_18 + local_14 * 8);
      *puVar1 = *puVar6;
      puVar1[1] = puVar6[1];
      local_14 = local_14 + 1;
LAB_01033b89:
      local_8 = local_8 + 1;
    } while (local_8 < piVar4[1]);
  }
  FUN_01030fe0(&local_18);
  local_14 = 0;
  if (-1 < local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 8);
  }
  return;
}

// 01033C00  FUN_01033c00  size=101  [run]
void FUN_01033c00(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *local_18;
  char *local_14;
  char *local_10;
  char *local_c;
  undefined4 local_8;
  
  local_18 = "hkAabbUint32";
  local_14 = "hkpCollidableBoundingVolumeData";
  local_10 = "hkpCollidable";
  local_c = "hkdBreakableShapeConnection";
  local_8 = 0;
  FUN_01033ae0(param_1,&local_18,param_2);
  uVar1 = FUN_0104ed70("Havok-6.1.0-r1");
  hkRenamedClassNameRegistry::hkRenamedClassNameRegistry(param_1,param_2,&PTR_DAT_01b1abd8,uVar1);
  return;
}

// 01033C70  FUN_01033c70  size=286  [run]
void FUN_01033c70(int param_1,int param_2,int param_3,code *param_4)

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
      FUN_01033c70(param_1,param_2,iVar3,param_4);
    }
    param_2 = iVar5;
    if (param_3 <= iVar5) {
      return;
    }
  } while( true );
}

// 01033DA0  FUN_01033da0  size=33  [run]
void FUN_01033da0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01033c70(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01033DD0  FUN_01033dd0  size=37  [run]
void FUN_01033dd0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 * 8);
  return;
}

// 01033E20  FUN_01033e20  size=69  [run]
void FUN_01033e20(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(in_EAX,"worldFromModelFeedbackUpDownBias");
  FUN_0143e7c0(param_1,"errorUpDownBias");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  return;
}

// 01033E70  FUN_01033e70  size=117  [run]
void FUN_01033e70(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"gains");
  FUN_0143e7c0(param_2,"gains");
  FUN_0143e9e0();
  uVar1 = FUN_010162f0();
  uVar2 = FUN_0143e840();
  FUN_0143e9e0(uVar2,uVar1);
  local_18 = FUN_010162f0();
  local_1c = FUN_0143e840();
  FUN_01033e20(&local_1c);
  return;
}

// 01033EF0  FUN_01033ef0  size=102  [run]
void FUN_01033ef0(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_0143e7c0(param_1,"keyframedRotation");
  FUN_0143e7c0(param_2,"keyframedRotation");
  puVar3 = (undefined8 *)FUN_0143e940(0);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  puVar3 = (undefined8 *)FUN_0143e940(0);
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  return;
}

// 01033F60  FUN_01033f60  size=102  [run]
void FUN_01033f60(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_0143e7c0(param_1,"targetRotation");
  FUN_0143e7c0(param_2,"targetRotation");
  puVar3 = (undefined8 *)FUN_0143e940(0);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  puVar3 = (undefined8 *)FUN_0143e940(0);
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  return;
}

// 01033FD0  FUN_01033fd0  size=102  [run]
void FUN_01033fd0(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_0143e7c0(param_1,"currentBoneRotationOut");
  FUN_0143e7c0(param_2,"currentBoneRotationOut");
  puVar3 = (undefined8 *)FUN_0143e940(0);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  puVar3 = (undefined8 *)FUN_0143e940(0);
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  return;
}

// 01034040  FUN_01034040  size=90  [run]
void FUN_01034040(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float *pfVar2;
  
  FUN_0143e7c0(param_1,"sliceThickness");
  FUN_0143e7c0(param_2,"numSubparts");
  pfVar2 = (float *)FUN_0143e890(0);
  fVar1 = *pfVar2;
  pfVar2 = (float *)FUN_0143e890(0);
  *pfVar2 = 1.0 / fVar1;
  return;
}

// 010340A0  FUN_010340a0  size=31  [run]
void FUN_010340a0(undefined4 param_1,undefined4 param_2)

{
  FUN_010e0a20(param_1,"deformationRestitution",param_2,"softness");
  return;
}

// 010340C0  FUN_010340c0  size=234  [run]
void FUN_010340c0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_c;
  
  FUN_0143e7c0(param_1,"heights");
  FUN_0143e7c0(param_2,"heights");
  piVar2 = (int *)FUN_0143e9a0(0);
  iVar3 = FUN_0143e9a0(0);
  iVar4 = piVar2[1];
  iVar5 = 0;
  *(int *)(iVar3 + 4) = iVar4;
  iVar3 = *piVar2;
  if (0 < iVar4) {
    do {
      fVar1 = (float)*(int *)(iVar3 + iVar5 * 4);
      if (*(int *)(iVar3 + iVar5 * 4) < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      iVar6 = iVar5 + 1;
      local_c = (undefined1)(int)ROUND(fVar1 * 2.3283064e-10 * 255.0);
      *(undefined1 *)(iVar5 + iVar3) = local_c;
      iVar5 = iVar6;
    } while (iVar6 < iVar4);
  }
  FUN_0143e7c0(param_1,"localToMapScale");
  FUN_0143e7c0(param_2,"localToMapScale");
  iVar4 = FUN_0143e940(0);
  fVar1 = *(float *)(iVar4 + 0xc);
  iVar4 = FUN_0143e940(0);
  *(float *)(iVar4 + 0xc) = fVar1 * 5.9371814e-08;
  return;
}

// 010341B0  FUN_010341b0  size=25  [run]
void FUN_010341b0(undefined4 param_1,int param_2,int param_3)

{
  *(bool *)param_1 = *(uint *)(param_2 + 4) < *(uint *)(param_3 + 4);
  return;
}

// 010341D0  FUN_010341d0  size=101  [run]
void FUN_010341d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0143e7c0(param_1,"localConstraints");
  FUN_0143e7c0(param_2,"localConstraints");
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  puVar4 = (undefined4 *)FUN_0143e9a0(0);
  uVar1 = *puVar3;
  *puVar4 = uVar1;
  iVar2 = puVar3[1];
  puVar4[1] = iVar2;
  if (1 < iVar2) {
    FUN_01034240(uVar1,0,iVar2 + -1,FUN_010341b0);
  }
  return;
}

// 01034240  FUN_01034240  size=345  [run]
void FUN_01034240(int param_1,int param_2,int param_3,code *param_4)

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
      FUN_01034240(param_1,param_2,iVar9,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

// 010343A0  FUN_010343a0  size=33  [run]
void FUN_010343a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01034240(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 010343F0  FUN_010343f0  size=144  [run]
void FUN_010343f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  
  FUN_0143e7c0(param_1,"words");
  FUN_0143e7c0(param_1,"numBitsAndFlags");
  FUN_0143e7c0(param_2,"words");
  FUN_0143e7c0(param_2,"numBits");
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  puVar4 = (undefined4 *)FUN_0143e830();
  uVar1 = puVar3[1];
  puVar4[2] = uVar1;
  puVar4[1] = uVar1;
  uVar1 = *puVar3;
  puVar4[2] = puVar4[2] | 0x80000000;
  *puVar4 = uVar1;
  puVar5 = (uint *)FUN_0143e8b0(0);
  uVar2 = *puVar5;
  puVar5 = (uint *)FUN_0143e8b0(0);
  *puVar5 = uVar2 & 0x7fffffff;
  return;
}

// 01034480  FUN_01034480  size=134  [run]
void FUN_01034480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"keyframedBones");
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_24 = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_20 = *(undefined4 *)(iVar2 + 4);
  FUN_0143e7c0(param_2,"keyframedBones");
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_1c = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_18 = *(undefined4 *)(iVar2 + 4);
  FUN_010343f0(&local_24,&local_1c,param_3);
  return;
}

// 01034510  FUN_01034510  size=134  [run]
void FUN_01034510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"keyframedBones");
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_24 = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_20 = *(undefined4 *)(iVar2 + 4);
  FUN_0143e7c0(param_2,"keyframedBones");
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_1c = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_18 = *(undefined4 *)(iVar2 + 4);
  FUN_010343f0(&local_24,&local_1c,param_3);
  return;
}

// 010345A0  FUN_010345a0  size=134  [run]
void FUN_010345a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"keyframedBones");
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_24 = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_20 = *(undefined4 *)(iVar2 + 4);
  FUN_0143e7c0(param_2,"keyframedBones");
  puVar1 = (undefined4 *)FUN_0143ea60(local_2c);
  local_1c = *puVar1;
  iVar2 = FUN_0143ea60(local_2c);
  local_18 = *(undefined4 *)(iVar2 + 4);
  FUN_010343f0(&local_24,&local_1c,param_3);
  return;
}

// 01034630  FUN_01034630  size=59  [run]
void FUN_01034630(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  FUN_0143e7c0(param_2,"triangleExtrusion");
  puVar1 = (undefined4 *)FUN_0143e940(0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}

// 01034670  FUN_01034670  size=23  [run]
undefined2 FUN_01034670(void)

{
  undefined4 in_EAX;
  undefined2 local_8;
  
  local_8 = CONCAT11((char)in_EAX,(char)((uint)in_EAX >> 8));
  return local_8;
}

// 01034690  FUN_01034690  size=275  [run]
void FUN_01034690(int param_1,char param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint unaff_ESI;
  undefined4 local_c;
  undefined2 local_8;
  
  iVar4 = 0;
  uVar3 = 0;
  local_c = 0;
  if (unaff_ESI != 0) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar3 * 2);
      if (param_2 != '\0') {
        uVar1 = uVar1 >> 8;
      }
      bVar2 = (byte)uVar1;
      if ((bVar2 & 3) == 2) {
        iVar4 = iVar4 + 3;
      }
      if ((bVar2 & 0xc) == 8) {
        iVar4 = iVar4 + 4;
      }
      if ((bVar2 & 0x30) == 0x20) {
        iVar4 = iVar4 + 3;
      }
      uVar3 = uVar3 + 1;
      local_c = iVar4;
    } while (uVar3 < unaff_ESI);
  }
  iVar4 = 0;
  uVar3 = 0;
  if (unaff_ESI != 0) {
    do {
      local_8 = *(ushort *)(param_1 + uVar3 * 2);
      if (param_2 != '\0') {
        local_8 = CONCAT11((char)local_8,(char)(local_8 >> 8));
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + (local_8 >> 6 & 1) +
              (uint)(local_8 >> 0xf) + (local_8 >> 0xe & 1) + (local_8 >> 0xd & 1) +
              (local_8 >> 0xc & 1) + (local_8 >> 0xb & 1) + (local_8 >> 10 & 1) + (local_8 >> 9 & 1)
              + (local_8 >> 8 & 1) + (local_8 >> 7 & 1);
    } while (uVar3 < unaff_ESI);
  }
  *param_4 = iVar4;
  *param_3 = (unaff_ESI * 10 - iVar4) - local_c;
  return;
}

// 010347B0  FUN_010347b0  size=202  [run]
void FUN_010347b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_c;
  int local_8;
  
  FUN_0143e7c0(param_1,"numberOfTransformTracks");
  FUN_0143e8b0(0);
  FUN_0143e7c0(param_1,"staticMaskIdx");
  piVar3 = (int *)FUN_0143e8b0(0);
  iVar1 = *piVar3;
  FUN_0143e7c0(param_1,"dataBuffer");
  puVar4 = (undefined4 *)FUN_0143e850(0);
  pcVar2 = (char *)*puVar4;
  if (iVar1 == 4) {
    local_8 = CONCAT31(local_8._1_3_,*pcVar2 != '\0');
  }
  else {
    local_8 = (uint)local_8._1_3_ << 8;
  }
  FUN_0143e7c0(param_2,"numStaticTransformDOFs");
  FUN_0143e7c0(param_2,"numDynamicTransformDOFs");
  FUN_01034690(pcVar2 + iVar1,local_8,&local_8,&local_c);
  piVar3 = (int *)FUN_0143e8b0(0);
  *piVar3 = local_8;
  puVar4 = (undefined4 *)FUN_0143e8b0(0);
  *puVar4 = local_c;
  return;
}

// 01034990  FUN_01034990  size=33  [run]
undefined4 __thiscall FUN_01034990(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01007e80(param_2,param_3);
  return param_1;
}

// 010349C0  FUN_010349c0  size=30  [run]
void __thiscall
FUN_010349c0(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = param_3;
  *(undefined2 *)((int)param_1 + 6) = param_4;
  return;
}

// 010349F0  FUN_010349f0  size=72  [run]
void FUN_010349f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_1,"eventToSendWhenTargetReached");
  FUN_0143e7c0(param_2,"eventToSendWhenTargetReached");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  puVar2 = (undefined4 *)FUN_0143e8b0(0);
  *puVar2 = *puVar1;
  return;
}

// 01034A40  FUN_01034a40  size=230  [run]
void FUN_01034a40(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_0143e7c0(param_1,"sensorBoneIndex");
  FUN_0143e7c0(param_1,"senseFromRagdollBone");
  FUN_0143e7c0(param_2,"sensorRagdollBoneIndex");
  FUN_0143e7c0(param_2,"sensorAnimationBoneIndex");
  puVar2 = (undefined2 *)FUN_0143e8b0(0);
  uVar1 = *puVar2;
  FUN_0143e880(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = uVar1;
  FUN_0143e7c0(param_1,"eventToSend");
  FUN_0143e7c0(param_2,"eventToSend");
  puVar3 = (undefined4 *)FUN_0143e8b0(0);
  puVar4 = (undefined4 *)FUN_0143e8b0(0);
  *puVar4 = *puVar3;
  FUN_0143e7c0(param_1,"eventToSendToTarget");
  FUN_0143e7c0(param_2,"eventToSendToTarget");
  puVar3 = (undefined4 *)FUN_0143e8b0(0);
  puVar4 = (undefined4 *)FUN_0143e8b0(0);
  *puVar4 = *puVar3;
  return;
}

// 01034B30  FUN_01034b30  size=134  [run]
void FUN_01034b30(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_0143e7c0(param_1,"attacherBoneIndex");
  FUN_0143e7c0(param_2,"attacherBoneIndex");
  puVar1 = (undefined2 *)FUN_0143e8b0(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_1,"attacheeBoneIndex");
  FUN_0143e7c0(param_2,"attacheeBoneIndex");
  puVar1 = (undefined2 *)FUN_0143e8b0(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  return;
}

// 01034BC0  FUN_01034bc0  size=132  [run]
void FUN_01034bc0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  FUN_0143e7c0(param_1,"constraintType");
  FUN_0143e7c0(param_2,"constraintType");
  puVar1 = (undefined1 *)FUN_0143e920(0);
  puVar2 = (undefined1 *)FUN_0143e920(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_1,"ragdollBoneToConstrain");
  FUN_0143e7c0(param_2,"ragdollBoneToConstrain");
  puVar3 = (undefined2 *)FUN_0143e8b0(0);
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = *puVar3;
  return;
}

// 01034C50  FUN_01034c50  size=74  [run]
void FUN_01034c50(undefined4 param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_0143e7c0(param_1,"sensingRagdollBoneIndex");
  FUN_0143e7c0(param_2,"sensingRagdollBoneIndex");
  puVar1 = (undefined2 *)FUN_0143e8b0(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  return;
}

// 01034CA0  FUN_01034ca0  size=72  [run]
void FUN_01034ca0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_1,"eventToSend");
  FUN_0143e7c0(param_2,"eventToSend");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  puVar2 = (undefined4 *)FUN_0143e8b0(0);
  *puVar2 = *puVar1;
  return;
}

// 01034CF0  FUN_01034cf0  size=188  [run]
void FUN_01034cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int *local_c;
  undefined4 local_8;
  
  FUN_0143e7c0(param_1,"attachmentProperties");
  FUN_0143e7c0(param_2,"attachmentProperties");
  piVar1 = (int *)FUN_0143e9a0(0);
  local_c = (int *)FUN_0143e9a0(0);
  FUN_0143e9e0();
  uVar2 = FUN_01016300();
  FUN_0143e9e0();
  local_8 = FUN_01016300();
  iVar4 = 0;
  if (0 < piVar1[1]) {
    do {
      iVar3 = FUN_01009750();
      local_2c = iVar3 * iVar4 + *piVar1;
      local_28 = uVar2;
      iVar3 = FUN_01009750();
      local_24 = iVar3 * iVar4 + *local_c;
      local_20 = local_8;
      FUN_01034c50(&local_2c,&local_24,param_3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar1[1]);
  }
  return;
}

// 01034DB0  FUN_01034db0  size=306  [run]
void FUN_01034db0(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_0143e7c0(param_2,"leftHand");
  FUN_0143e7c0(param_2,"rightHand");
  FUN_0143e7c0(param_1,"handIndex");
  FUN_0143e7c0(param_1,"isHandEnabled");
  FUN_0143e9e0();
  local_8 = FUN_01016300();
  local_c = FUN_0143e840();
  FUN_0143e7c0(&local_c,"handIndex");
  puVar2 = (undefined2 *)FUN_0143e900(0);
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = *puVar2;
  FUN_0143e7c0(&local_c,"isHandEnabled");
  puVar4 = (undefined1 *)FUN_0143e880(0);
  uVar1 = *puVar4;
  puVar4 = (undefined1 *)FUN_0143e880(0);
  *puVar4 = uVar1;
  FUN_0143e9e0();
  local_8 = FUN_01016300();
  local_c = FUN_0143e840();
  FUN_0143e7c0(&local_c,"handIndex");
  puVar2 = (undefined2 *)FUN_0143e900(1);
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = *puVar2;
  FUN_0143e7c0(&local_c,"isHandEnabled");
  puVar4 = (undefined1 *)FUN_0143e880(1);
  uVar1 = *puVar4;
  puVar4 = (undefined1 *)FUN_0143e880(0);
  *puVar4 = uVar1;
  return;
}

// 01034EF0  FUN_01034ef0  size=1045  [run]
void FUN_01034ef0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  int *piVar5;
  LPVOID pvVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int local_14 [3];
  undefined4 local_8;
  
  FUN_0143e7c0(param_1,"stride");
  FUN_0143e7c0(param_2,"stride");
  pbVar3 = (byte *)FUN_0143e930(0);
  bVar1 = *pbVar3;
  puVar4 = (uint *)FUN_0143e8c0(0);
  *puVar4 = (uint)bVar1;
  FUN_0143e7c0(param_1,"positionOffset");
  FUN_0143e7c0(param_1,"normalOffset");
  FUN_0143e7c0(param_1,"tangentOffset");
  FUN_0143e7c0(param_1,"binormalOffset");
  FUN_0143e7c0(param_1,"numBonesPerVertex");
  FUN_0143e7c0(param_1,"boneIndexOffset");
  FUN_0143e7c0(param_1,"boneWeightOffset");
  FUN_0143e7c0(param_1,"numTextureChannels");
  FUN_0143e7c0(param_1,"tFloatCoordOffset");
  FUN_0143e7c0(param_1,"tQuantizedCoordOffset");
  FUN_0143e7c0(param_1,"colorOffset");
  FUN_0143e7c0(param_2,"decls");
  piVar5 = (int *)FUN_0143e830();
  pbVar3 = (byte *)FUN_0143e930(0);
  bVar1 = *pbVar3;
  piVar5[2] = bVar1 + 7;
  piVar5[1] = 0;
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))((bVar1 + 7) * 8);
  *piVar5 = iVar7;
  pcVar8 = (char *)FUN_0143e930(0);
  if (*pcVar8 != -1) {
    pbVar3 = (byte *)FUN_0143e930(0);
    local_14[2] = (int)*pbVar3;
    iVar7 = piVar5[1];
    piVar5[1] = iVar7 + 1;
    local_8 = 0x10007;
    FUN_01015e80(*piVar5 + iVar7 * 8,local_14 + 2,8);
  }
  pcVar8 = (char *)FUN_0143e930(0);
  if (*pcVar8 != -1) {
    pbVar3 = (byte *)FUN_0143e930(0);
    local_14[2] = (int)*pbVar3;
    iVar7 = piVar5[1];
    piVar5[1] = iVar7 + 1;
    local_8 = 0x40007;
    FUN_01015e80(*piVar5 + iVar7 * 8,local_14 + 2,8);
  }
  pcVar8 = (char *)FUN_0143e930(0);
  if (*pcVar8 != -1) {
    pbVar3 = (byte *)FUN_0143e930(0);
    local_14[2] = (int)*pbVar3;
    iVar7 = piVar5[1];
    piVar5[1] = iVar7 + 1;
    local_8 = 0x80007;
    FUN_01015e80(*piVar5 + iVar7 * 8,local_14 + 2,8);
  }
  pcVar8 = (char *)FUN_0143e930(0);
  if (*pcVar8 != -1) {
    pbVar3 = (byte *)FUN_0143e930(0);
    local_14[2] = (int)*pbVar3;
    iVar7 = piVar5[1];
    piVar5[1] = iVar7 + 1;
    local_8 = 0x100007;
    FUN_01015e80(*piVar5 + iVar7 * 8,local_14 + 2,8);
  }
  pcVar8 = (char *)FUN_0143e930(0);
  if (*pcVar8 != '\0') {
    pcVar8 = (char *)FUN_0143e930(0);
    if (*pcVar8 != -1) {
      pbVar3 = (byte *)FUN_0143e930(0);
      local_14[2] = (int)*pbVar3;
      iVar7 = piVar5[1];
      piVar5[1] = iVar7 + 1;
      local_8 = 0x800001;
      FUN_01015e80(*piVar5 + iVar7 * 8,local_14 + 2,8);
    }
    pcVar8 = (char *)FUN_0143e930(0);
    if (*pcVar8 != -1) {
      pbVar3 = (byte *)FUN_0143e930(0);
      local_14[2] = (int)*pbVar3;
      iVar7 = piVar5[1];
      piVar5[1] = iVar7 + 1;
      local_8 = 0x400001;
      FUN_01015e80(*piVar5 + iVar7 * 8,local_14 + 2,8);
    }
  }
  pcVar8 = (char *)FUN_0143e930(0);
  if (*pcVar8 != -1) {
    pbVar3 = (byte *)FUN_0143e930(0);
    local_14[2] = (int)*pbVar3;
    iVar7 = piVar5[1];
    piVar5[1] = iVar7 + 1;
    local_8 = 0x20003;
    FUN_01015e80(*piVar5 + iVar7 * 8,local_14 + 2,8);
  }
  iVar7 = 0;
  pcVar8 = (char *)FUN_0143e930(0);
  if (*pcVar8 != '\0') {
    iVar9 = 0;
    do {
      pcVar8 = (char *)FUN_0143e930(0);
      if (*pcVar8 == -1) {
        pcVar8 = (char *)FUN_0143e930(0);
        if (*pcVar8 != -1) {
          pbVar3 = (byte *)FUN_0143e930(0);
          local_14[0] = (uint)*pbVar3 + iVar7;
          iVar2 = piVar5[1];
          piVar5[1] = iVar2 + 1;
          local_14[1] = 0x200002;
          FUN_01015e80(*piVar5 + iVar2 * 8,local_14,8);
          iVar7 = iVar7 + 4;
        }
      }
      else {
        pbVar3 = (byte *)FUN_0143e930(0);
        local_14[2] = (uint)*pbVar3 + iVar7;
        iVar2 = piVar5[1];
        piVar5[1] = iVar2 + 1;
        local_8 = 0x200004;
        FUN_01015e80(*piVar5 + iVar2 * 8,local_14 + 2,8);
        iVar7 = iVar7 + 8;
      }
      iVar9 = iVar9 + 1;
      pbVar3 = (byte *)FUN_0143e930(0);
    } while (iVar9 < (int)(uint)*pbVar3);
  }
  (**(code **)(*param_3 + 0x10))(*piVar5,piVar5[2] * 8,0x18);
  piVar5[2] = piVar5[2] | 0x80000000;
  return;
}

// 01035310  FUN_01035310  size=37  [run]
void FUN_01035310(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 * 8);
  return;
}

// 01035340  FUN_01035340  size=69  [run]
void FUN_01035340(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(in_EAX,"pelvisFeedbackGain");
  FUN_0143e7c0(param_1,"worldFromModelFeedbackGain");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  return;
}

// 01035390  FUN_01035390  size=114  [run]
void FUN_01035390(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(in_EAX,"gains");
  FUN_0143e7c0(param_1,"gains");
  FUN_0143e9e0();
  uVar1 = FUN_010162f0();
  uVar2 = FUN_0143e840();
  FUN_0143e9e0(uVar2,uVar1);
  local_18 = FUN_010162f0();
  local_1c = FUN_0143e840();
  FUN_01035340(&local_1c);
  return;
}

// 01035410  FUN_01035410  size=117  [run]
void FUN_01035410(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,"controlData");
  FUN_0143e7c0(param_2,"controlData");
  FUN_0143e9e0();
  uVar1 = FUN_010162f0();
  uVar2 = FUN_0143e840();
  FUN_0143e9e0(uVar2,uVar1);
  local_18 = FUN_010162f0();
  local_1c = FUN_0143e840();
  FUN_01035390(&local_1c);
  return;
}

// 01035490  FUN_01035490  size=74  [run]
void FUN_01035490(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  FUN_0143e7c0(param_1,"alignMode");
  FUN_0143e7c0(param_2,"rotateBonesForSkinning");
  pcVar2 = (char *)FUN_0143e920(0);
  cVar1 = *pcVar2;
  uVar3 = FUN_0143e880(0);
  *(bool *)uVar3 = cVar1 != '\0';
  return;
}

// 010354E0  FUN_010354e0  size=205  [run]
void FUN_010354e0(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float *pfVar2;
  
  FUN_010e0a20(param_1,"targetGain",param_2,"newTargetGain");
  FUN_010e0a20(param_1,"lookAtGain",param_2,"onOffGain");
  FUN_0143e7c0(param_1,"lookAtLimit");
  FUN_0143e7c0(param_2,"limitAngleDegrees");
  pfVar2 = (float *)FUN_0143e890(0);
  fVar1 = *pfVar2;
  pfVar2 = (float *)FUN_0143e890(0);
  *pfVar2 = fVar1 * 57.295776;
  FUN_0143e7c0(param_1,"lookUpAngle");
  FUN_0143e7c0(param_2,"lookUpAngleDegrees");
  pfVar2 = (float *)FUN_0143e890(0);
  fVar1 = *pfVar2;
  pfVar2 = (float *)FUN_0143e890(0);
  *pfVar2 = fVar1 * 57.295776;
  return;
}

// 010357A0  FUN_010357a0  size=174  [run]
void FUN_010357a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_0143e7c0(param_1,&DAT_0171420c);
  FUN_0143e7c0(param_2,&DAT_0171420c);
  FUN_01054a00(&local_1c,&local_24,&LAB_01035660,param_3);
  FUN_0143e7c0(param_1,"gains");
  FUN_0143e7c0(param_2,"gains");
  FUN_0143e9e0();
  local_20 = FUN_010162f0();
  local_24 = FUN_0143e840();
  FUN_0143e9e0();
  local_18 = FUN_010162f0();
  local_1c = FUN_0143e840();
  FUN_01035340(&local_1c);
  return;
}

// 01035850  FUN_01035850  size=31  [run]
void FUN_01035850(undefined4 param_1,undefined4 param_2)

{
  FUN_010e0a20(param_1,"child",param_2,"childContainer");
  return;
}

// 01035870  FUN_01035870  size=78  [run]
void FUN_01035870(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_0143e7c0(param_1,"animationTrackToBoneIndices");
  FUN_0143e7c0(param_2,"transformTrackToBoneIndices");
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  puVar3 = (undefined4 *)FUN_0143e9a0(0);
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  return;
}

// 010358C0  FUN_010358c0  size=72  [run]
void FUN_010358c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_1,"numberOfTracks");
  FUN_0143e7c0(param_2,"numberOfTransformTracks");
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  puVar2 = (undefined4 *)FUN_0143e8b0(0);
  *puVar2 = *puVar1;
  return;
}

// 01035920  FUN_01035920  size=648  [run]
void FUN_01035920(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [24];
  undefined1 local_c [8];
  
  FUN_0143e7c0(param_1,"catchFallDoneEvent");
  FUN_0143e7c0(param_2,"catchFallDoneEventId");
  FUN_0143e9f0(local_c,&DAT_0164a424);
  puVar1 = (undefined4 *)FUN_0143e8b0(0);
  puVar2 = (undefined4 *)FUN_0143e8b0(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_1,"catchFallDirectionRagdollBone");
  FUN_0143e7c0(param_2,"catchFallDirectionRagdollBoneIndex");
  puVar3 = (undefined2 *)FUN_0143e900(0);
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = *puVar3;
  FUN_0143e7c0(param_1,"velocityRagdollBoneIndex");
  FUN_0143e7c0(param_2,"velocityRagdollBoneIndex");
  puVar3 = (undefined2 *)FUN_0143e900(0);
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = *puVar3;
  FUN_0143e7c0(param_1,"raycastLayer");
  FUN_0143e7c0(param_2,"raycastLayer");
  puVar3 = (undefined2 *)FUN_0143e900(0);
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = *puVar3;
  FUN_0143e7c0(param_1,"handIndex");
  puVar3 = (undefined2 *)FUN_0143e840();
  FUN_0143e7c0(param_2,"leftHand");
  FUN_0143e9f0(local_2c,"handIndex");
  FUN_0143e9f0(local_24,"handIkTrackIndex");
  FUN_0143e9f0(local_44,"animShoulderIndex");
  FUN_0143e9f0(local_3c,"ragdollShoulderIndex");
  FUN_0143e9f0(local_34,"ragdollAnkleIndex");
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = *puVar3;
  puVar5 = (undefined2 *)FUN_0143e900(0);
  *puVar5 = *puVar4;
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = 0xffff;
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = 0xffff;
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = 0xffff;
  FUN_0143e7c0(param_2,"rightHand");
  FUN_0143e9f0(local_54,"handIndex");
  FUN_0143e9f0(local_4c,"handIkTrackIndex");
  FUN_0143e9f0(local_6c,"animShoulderIndex");
  FUN_0143e9f0(local_64,"ragdollShoulderIndex");
  FUN_0143e9f0(local_5c,"ragdollAnkleIndex");
  puVar4 = (undefined2 *)FUN_0143e900(0);
  *puVar4 = puVar3[1];
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = *puVar4;
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = 0xffff;
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = 0xffff;
  puVar3 = (undefined2 *)FUN_0143e900(0);
  *puVar3 = 0xffff;
  return;
}

// 01035BB0  FUN_01035bb0  size=71  [run]
void FUN_01035bb0(undefined4 param_1)

{
  undefined4 in_EAX;
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_0143e7c0(in_EAX,"handIndex");
  FUN_0143e7c0(param_1,"handIkTrackIndex");
  puVar1 = (undefined2 *)FUN_0143e900(0);
  puVar2 = (undefined2 *)FUN_0143e900(0);
  *puVar2 = *puVar1;
  return;
}

// 01035C00  FUN_01035c00  size=215  [run]
void FUN_01035c00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_28;
  undefined4 local_24;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  FUN_0143e7c0(param_1,"hands");
  FUN_0143e7c0(param_2,"hands");
  iVar1 = FUN_0143e9a0(0);
  iVar1 = *(int *)(iVar1 + 4);
  FUN_0143ea60(local_10);
  iVar2 = FUN_0143ea60(local_10);
  local_24 = *(undefined4 *)(iVar2 + 4);
  FUN_0143e9e0();
  FUN_010162f0();
  local_8 = FUN_01009750();
  FUN_0143e9e0();
  FUN_010162f0();
  local_c = FUN_01009750();
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      FUN_0143e9a0(0);
      piVar3 = (int *)FUN_0143e9a0(0);
      local_28 = *piVar3 + iVar2;
      FUN_01035bb0(&local_28);
      iVar2 = iVar2 + local_c;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 01035CE0  FUN_01035ce0  size=130  [run]
void FUN_01035ce0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0143e7c0(param_1,"maxBoneLengthFraction");
  FUN_0143e7c0(param_2,"maxElongation");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  FUN_0143e7c0(param_1,"minBoneLengthFraction");
  FUN_0143e7c0(param_2,"maxCompression");
  puVar1 = (undefined4 *)FUN_0143e890(0);
  puVar2 = (undefined4 *)FUN_0143e890(0);
  *puVar2 = *puVar1;
  return;
}

// 01035D70  FUN_01035d70  size=252  [run]
void FUN_01035d70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_0143e7c0(param_1,"transform");
  FUN_0143e7c0(param_2,"translation");
  FUN_0143e7c0(param_2,"rotation");
  iVar1 = FUN_0143e970(0);
  local_38 = *(undefined8 *)(iVar1 + 0x30);
  local_30 = *(undefined8 *)(iVar1 + 0x38);
  puVar2 = (undefined8 *)FUN_0143e940(0);
  *puVar2 = local_38;
  puVar2[1] = local_30;
  puVar3 = (undefined4 *)FUN_0143e970(0);
  local_70 = puVar3[1];
  local_60 = puVar3[2];
  uStack_6c = puVar3[5];
  uStack_5c = puVar3[6];
  uStack_78 = puVar3[8];
  uStack_74 = puVar3[9];
  uStack_58 = puVar3[10];
  uStack_64 = puVar3[0xb];
  local_80 = CONCAT44(puVar3[4],*puVar3);
  uStack_68 = uStack_74;
  uStack_54 = uStack_64;
  FUN_010087a0(&local_80);
  puVar2 = (undefined8 *)FUN_0143e940(0);
  *puVar2 = local_50;
  puVar2[1] = local_48;
  return;
}

// 01035E70  FUN_01035e70  size=204  [run]
void FUN_01035e70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  FUN_0143e7c0(param_1,"shapesSubparts");
  FUN_0143e7c0(param_2,"shapesSubparts");
  piVar1 = (int *)FUN_0143e9a0(0);
  local_c = (int *)FUN_0143e9a0(0);
  local_28 = 0;
  iVar2 = FUN_0143ea60(local_18);
  local_24 = *(undefined4 *)(iVar2 + 4);
  local_20 = 0;
  iVar2 = FUN_0143ea60(local_18);
  local_1c = *(undefined4 *)(iVar2 + 4);
  local_10 = FUN_01009750();
  local_14 = FUN_01009750();
  if (0 < piVar1[1]) {
    local_8 = 0;
    iVar2 = 0;
    iVar3 = 0;
    do {
      local_28 = *piVar1 + iVar2;
      local_20 = *local_c + local_8;
      FUN_01035d70(&local_28,&local_20,param_3);
      iVar2 = iVar2 + local_10;
      local_8 = local_8 + local_14;
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar1[1]);
  }
  return;
}

