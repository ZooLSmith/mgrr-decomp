// lib/havok/unit_010F9450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010F9450..010FAA90, 72 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkBinaryPackfileReader.h"
#include "hkObjectWriter.h"
#include "hkPackfileData.h"
#include "hkResource.h"
#include "hkXmlObjectWriter.h"

// 010F9450  hkXmlObjectWriter::vf14  size=404  [run]
bool __thiscall
hkXmlObjectWriter::vf14
          (int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,int *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
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
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  if (param_6 != (int *)0x0) {
    iVar3 = *param_6;
    while (iVar3 != 0) {
      iVar6 = iVar6 + 1;
      iVar3 = param_6[iVar6];
    }
  }
  uVar1 = iVar6 + 5;
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  if (0 < (int)uVar1) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_10,uVar1 & ((int)uVar1 < 0) - 1,4);
  }
  if (param_5 != 0) {
    *(undefined **)(local_10 + local_c * 4) = &DAT_0164d4cc;
    *(int *)(local_10 + (local_c + 1) * 4) = param_5;
    local_c = local_c + 2;
  }
  *(char **)(local_10 + local_c * 4) = "class";
  local_c = local_c + 1;
  uVar4 = FUN_010093a0();
  *(undefined4 *)(local_10 + local_c * 4) = uVar4;
  iVar3 = local_c + 1;
  local_c = iVar3;
  if (param_6 != (int *)0x0) {
    local_c = iVar3 + iVar6;
    FUN_01015e80(local_10 + iVar3 * 4,param_6,iVar6 * 4);
  }
  *(undefined4 *)(local_10 + local_c * 4) = 0;
  local_c = local_c + 1;
  FUN_010f89e0(param_2,"hkobject",local_10,1);
  local_3c = 0x80000000;
  local_30 = 0x80000000;
  local_24 = 0x80000000;
  local_18 = 0x80000000;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4,&local_44);
  FUN_010f8aa0(param_2,"hkobject",1);
  pcVar5 = (char *)(**(code **)(*param_2 + 0xc))((int)&param_6 + 3);
  cVar2 = *pcVar5;
  FUN_010f79a0();
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
  }
  return cVar2 == '\0';
}

// 010F95F0  hkXmlObjectWriter::vf0C  size=121  [run]
bool __thiscall hkXmlObjectWriter::vf0C(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 local_10 [12];
  
  hkOstream::hkOstream(param_2);
  iVar5 = 0;
  iVar2 = FUN_01009570();
  if (0 < iVar2) {
    do {
      puVar7 = local_10;
      uVar6 = param_3;
      iVar2 = param_1;
      uVar3 = FUN_01009590(iVar5);
      FUN_010f8dd0(param_1 + 8,uVar3,uVar6,puVar7,iVar2);
      iVar5 = iVar5 + 1;
      iVar2 = FUN_01009570();
    } while (iVar5 < iVar2);
  }
  pcVar4 = (char *)FUN_01018c40((int)&param_2 + 3);
  cVar1 = *pcVar4;
  ::hkBaseObject::hkBaseObject_38();
  return cVar1 == '\0';
}

// 010F9670  FUN_010f9670  size=8  [run]
undefined4 FUN_010f9670(undefined4 param_1)

{
  return param_1;
}

// 010F9680  FUN_010f9680  size=8  [run]
undefined4 FUN_010f9680(undefined4 param_1)

{
  return param_1;
}

// 010F9690  FUN_010f9690  size=8  [run]
undefined4 FUN_010f9690(undefined4 param_1)

{
  return param_1;
}

// 010F96A0  FUN_010f96a0  size=8  [run]
undefined4 FUN_010f96a0(undefined4 param_1)

{
  return param_1;
}

// 010F96B0  FUN_010f96b0  size=8  [run]
undefined4 FUN_010f96b0(undefined4 param_1)

{
  return param_1;
}

// 010F96C0  FUN_010f96c0  size=8  [run]
undefined4 FUN_010f96c0(undefined4 param_1)

{
  return param_1;
}

// 010F96D0  FUN_010f96d0  size=8  [run]
undefined4 FUN_010f96d0(undefined4 param_1)

{
  return param_1;
}

// 010F96E0  FUN_010f96e0  size=8  [run]
undefined4 FUN_010f96e0(undefined4 param_1)

{
  return param_1;
}

// 010F96F0  FUN_010f96f0  size=8  [run]
undefined4 FUN_010f96f0(undefined4 param_1)

{
  return param_1;
}

// 010F9700  FUN_010f9700  size=8  [run]
undefined4 FUN_010f9700(undefined4 param_1)

{
  return param_1;
}

// 010F9710  FUN_010f9710  size=8  [run]
undefined4 FUN_010f9710(undefined4 param_1)

{
  return param_1;
}

// 010F9720  FUN_010f9720  size=8  [run]
undefined4 FUN_010f9720(undefined4 param_1)

{
  return param_1;
}

// 010F9730  FUN_010f9730  size=8  [run]
undefined4 FUN_010f9730(undefined4 param_1)

{
  return param_1;
}

// 010F9740  FUN_010f9740  size=8  [run]
undefined4 FUN_010f9740(undefined4 param_1)

{
  return param_1;
}

// 010F9750  FUN_010f9750  size=8  [run]
undefined4 FUN_010f9750(undefined4 param_1)

{
  return param_1;
}

// 010F97A0  FUN_010f97a0  size=25  [run]
void __thiscall FUN_010f97a0(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F97C0  FUN_010f97c0  size=52  [run]
undefined4 __thiscall FUN_010f97c0(int param_1,undefined4 param_2,int param_3)

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

// 010F9800  FUN_010f9800  size=23  [run]
int __thiscall FUN_010f9800(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = param_2 + iVar1;
  return *param_1 + iVar1 * 4;
}

// 010F9820  FUN_010f9820  size=38  [run]
void FUN_010f9820(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010F9850  hkObjectWriter::vf00  size=53  [run]
undefined4 * __thiscall hkObjectWriter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010F9890  FUN_010f9890  size=53  [run]
undefined4 __thiscall FUN_010f9890(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 010F98D0  FUN_010f98d0  size=27  [run]
void __thiscall FUN_010f98d0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_80000010;
  return;
}

// 010F98F0  FUN_010f98f0  size=38  [run]
void FUN_010f98f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010F9920  hkXmlObjectWriter::vf00  size=108  [run]
undefined4 * __thiscall hkXmlObjectWriter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] & 0x3fffffff);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010F99B0  hkResource::vf10  size=1  [run]
void hkResource::vf10(void)

{
  return;
}

// 010F99C0  FUN_010f99c0  size=54  [run]
bool __thiscall FUN_010f99c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int *unaff_ESI;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  uVar1 = (**(code **)(*unaff_ESI + 0x10))(param_1);
  (**(code **)(*unaff_ESI + 0x10))(param_2);
  pcVar2 = (char *)FUN_010093e0((int)&uStack_8 + 3,uVar1);
  return *pcVar2 != '\0';
}

// 010F9A00  FUN_010f9a00  size=13  [run]
void __thiscall FUN_010f9a00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 010F9A10  hkBinaryPackfileReader::BinaryPackfileData::vf1C  size=22  [run]
undefined4 __fastcall hkBinaryPackfileReader::BinaryPackfileData::vf1C(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_01010160(*(int *)(param_1 + 8),0);
    return uVar1;
  }
  return 0;
}

// 010F9A30  FUN_010f9a30  size=42  [run]
void __thiscall FUN_010f9a30(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}

// 010F9A60  FUN_010f9a60  size=53  [run]
void __thiscall FUN_010f9a60(int param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),uVar2);
  uVar2 = FUN_01016080(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

// 010F9AA0  FUN_010f9aa0  size=76  [run]
void __thiscall FUN_010f9aa0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x50);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if (*(int *)(*(int *)(param_1 + 0x4c) + 4 + iVar1 * 8) == param_2) {
      iVar3 = *(int *)(param_1 + 0x50) + -1;
      *(int *)(param_1 + 0x50) = iVar3;
      if (iVar3 != iVar1) {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x4c) + iVar1 * 8);
        iVar3 = (*(int *)(param_1 + 0x4c) + iVar3 * 8) - (int)puVar2;
        iVar4 = 2;
        do {
          *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
          puVar2 = puVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}

// 010F9AF0  FUN_010f9af0  size=80  [run]
void __thiscall FUN_010f9af0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x5c) + -1;
  if (-1 < iVar1) {
    piVar3 = (int *)(*(int *)(param_1 + 0x58) + 4 + iVar1 * 8);
    while (*piVar3 != param_2) {
      piVar3 = piVar3 + -2;
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return;
      }
    }
    iVar4 = *(int *)(param_1 + 0x5c) + -1;
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 != iVar1) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x58) + iVar1 * 8);
      iVar1 = (*(int *)(param_1 + 0x58) + iVar4 * 8) - (int)puVar2;
      iVar4 = 2;
      do {
        *puVar2 = *(undefined4 *)(iVar1 + (int)puVar2);
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

// 010F9B40  FUN_010f9b40  size=9  [run]
bool __fastcall FUN_010f9b40(int param_1)

{
  return *(int *)(param_1 + 0x20) != 0;
}

// 010F9B50  hkBinaryPackfileReader::BinaryPackfileData::vf10  size=147  [run]
void __fastcall hkBinaryPackfileReader::BinaryPackfileData::vf10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (0 < *(int *)(param_1 + 0x20))) {
    iVar1 = *(int *)(param_1 + 0x18);
    iVar3 = 0;
    if (-1 < iVar1) {
      piVar2 = *(int **)(param_1 + 0x10);
      do {
        if (*piVar2 != -1) break;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 2;
      } while (iVar3 <= iVar1);
    }
    if (iVar3 <= iVar1) {
      do {
        iVar1 = FUN_01025be0(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4 + iVar3 * 8),0);
        if (iVar1 != 0) {
          FUN_0102cc00(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 8));
        }
        iVar1 = *(int *)(param_1 + 0x18);
        iVar3 = iVar3 + 1;
        if (iVar3 <= iVar1) {
          piVar2 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 8);
          do {
            if (*piVar2 != -1) break;
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 2;
          } while (iVar3 <= iVar1);
        }
      } while (iVar3 <= iVar1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_010102e0();
  FUN_01025720();
  return;
}

// 010F9BF0  hkBinaryPackfileReader::BinaryPackfileData::vf14  size=313  [run]
void __thiscall
hkBinaryPackfileReader::BinaryPackfileData::vf14(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  iVar5 = param_2[1];
  if (iVar1 <= param_2[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_2;
  if (0 < iVar5) {
    iVar2 = *(int *)(param_1 + 0x58) - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_2 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*(int *)(param_1 + 0x58) + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_2[1] = iVar1;
  iVar1 = *(int *)(param_1 + 0x50);
  iVar5 = param_3[1];
  if (iVar1 <= param_3[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_3[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_3;
  if (0 < iVar5) {
    iVar2 = *(int *)(param_1 + 0x4c) - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_3 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*(int *)(param_1 + 0x4c) + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_3[1] = iVar1;
  return;
}

// 010F9D30  FUN_010f9d30  size=64  [run]
void __thiscall FUN_010f9d30(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x4c),8);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50) * 8);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}

// 010F9D70  FUN_010f9d70  size=64  [run]
void __thiscall FUN_010f9d70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x5c) == (*(uint *)(param_1 + 0x60) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x58),8);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c) * 8);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}

// 010F9DB0  hkBinaryPackfileReader::BinaryPackfileData::vf18  size=290  [run]
undefined4 __thiscall
hkBinaryPackfileReader::BinaryPackfileData::vf18(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar1 = FUN_01010160(*(int *)(param_1 + 8),0);
  if (param_2 != 0) {
    piVar6 = *(int **)(param_1 + 0x2c);
    uVar1 = (**(code **)(*piVar6 + 0x10))(uVar1);
    (**(code **)(*piVar6 + 0x10))(param_2);
    pcVar2 = (char *)FUN_010093e0((int)&param_2 + 3,uVar1);
    if (*pcVar2 == '\0') {
      return 0;
    }
  }
  iVar3 = FUN_010f9b40();
  if ((iVar3 == 0) && (param_3 != (int *)0x0)) {
    param_2._3_1_ = '\0';
    iVar3 = FUN_010598c0();
    if (iVar3 <= *(int *)(param_1 + 0x18)) {
      do {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 4 + iVar3 * 8);
        iVar4 = (**(code **)(*param_3 + 0x10))
                          (*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 8),uVar1);
        if (iVar4 == 0) {
          param_2._3_1_ = '\x01';
        }
        else {
          FUN_01025470(uVar1,iVar4);
        }
        iVar4 = *(int *)(param_1 + 0x18);
        iVar3 = iVar3 + 1;
        if (iVar3 <= iVar4) {
          piVar6 = (int *)(*(int *)(param_1 + 0x10) + iVar3 * 8);
          do {
            if (*piVar6 != -1) break;
            iVar3 = iVar3 + 1;
            piVar6 = piVar6 + 2;
          } while (iVar3 <= iVar4);
        }
      } while (iVar3 <= iVar4);
      if (param_2._3_1_ != '\0') {
        return 0;
      }
    }
    puVar7 = *(undefined4 **)(param_1 + 100);
    if (puVar7 < puVar7 + *(int *)(param_1 + 0x68) * 2) {
      do {
        uVar1 = *puVar7;
        puVar5 = (undefined4 *)FUN_01009990("hk.PostFinish");
        (**(code **)*puVar5)(uVar1);
        puVar7 = puVar7 + 2;
      } while (puVar7 < (undefined4 *)(*(int *)(param_1 + 100) + *(int *)(param_1 + 0x68) * 8));
    }
  }
  return *(undefined4 *)(param_1 + 8);
}

// 010F9EE0  hkPackfileData::hkPackfileData  size=179  [run]
undefined4 * __thiscall hkPackfileData::hkPackfileData(undefined4 *param_1,int param_2)

{
  uint local_8;
  
  local_8 = (uint)param_1 & 0xffffff00;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  FUN_01025830(local_8);
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x80000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x80000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x80000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x80000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x80000000;
  if (param_2 == 0) {
    param_2 = (**(code **)(*DAT_0209b610 + 0x10))();
    if (param_2 == 0) goto LAB_010f9f79;
  }
  FUN_01006000();
LAB_010f9f79:
  if (param_1[0xb] != 0) {
    FUN_010060a0();
  }
  param_1[0xb] = param_2;
  return param_1;
}

// 010F9FA0  hkBaseObject::hkBaseObject_24  size=464  [run]
void __fastcall hkBaseObject::hkBaseObject_24(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = hkPackfileData::vftable;
  hkBinaryPackfileReader::BinaryPackfileData::vf10();
  iVar5 = 0;
  if (0 < (int)param_1[0xe]) {
    do {
      uVar1 = *(undefined4 *)(param_1[0xd] + iVar5 * 4);
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[0xe]);
  }
  iVar5 = 0;
  if (0 < (int)param_1[0x11]) {
    iVar4 = 0;
    do {
      uVar1 = *(undefined4 *)(param_1[0x10] + 4 + iVar4);
      uVar2 = *(undefined4 *)(param_1[0x10] + iVar4);
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(uVar2,uVar1);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < (int)param_1[0x11]);
  }
  uVar1 = param_1[3];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
  param_1[0x1a] = 0;
  if ((param_1[0x1b] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x19],param_1[0x1b] * 8);
  }
  param_1[0x19] = 0;
  param_1[0x1b] = 0x80000000;
  param_1[0x17] = 0;
  if ((param_1[0x18] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x16],param_1[0x18] * 8);
  }
  param_1[0x16] = 0;
  param_1[0x18] = 0x80000000;
  param_1[0x14] = 0;
  if ((param_1[0x15] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x13],param_1[0x15] * 8);
  }
  param_1[0x13] = 0;
  param_1[0x15] = 0x80000000;
  param_1[0x11] = 0;
  if ((param_1[0x12] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x10],(param_1[0x12] & 0x3fffffff) * 0xc);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  param_1[0xe] = 0;
  if ((param_1[0xf] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xd],param_1[0xf] * 4);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  if (param_1[0xb] != 0) {
    FUN_010060a0();
  }
  param_1[0xb] = 0;
  FUN_01025870();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 010FA1C0  FUN_010fa1c0  size=18  [run]
int __thiscall FUN_010fa1c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010FA220  FUN_010fa220  size=29  [run]
void __thiscall FUN_010fa220(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010FA240  FUN_010fa240  size=52  [run]
undefined4 __thiscall FUN_010fa240(int param_1,undefined4 param_2,int param_3)

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

// 010FA280  FUN_010fa280  size=40  [run]
void FUN_010fa280(undefined4 *param_1,int param_2,int param_3)

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

// 010FA2B0  FUN_010fa2b0  size=44  [run]
void FUN_010fa2b0(undefined4 *param_1,int param_2,int param_3)

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

// 010FA2E0  FUN_010fa2e0  size=52  [run]
undefined4 __thiscall FUN_010fa2e0(int param_1,undefined4 param_2,int param_3)

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

// 010FA320  FUN_010fa320  size=40  [run]
void FUN_010fa320(undefined4 *param_1,int param_2,int param_3)

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

// 010FA350  FUN_010fa350  size=44  [run]
void FUN_010fa350(undefined4 *param_1,int param_2,int param_3)

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

// 010FA3C0  FUN_010fa3c0  size=48  [run]
void __thiscall FUN_010fa3c0(int *param_1,int param_2)

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

// 010FA3F0  FUN_010fa3f0  size=51  [run]
int __thiscall FUN_010fa3f0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010FA430  FUN_010fa430  size=48  [run]
void __thiscall FUN_010fa430(int *param_1,int param_2)

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

// 010FA460  FUN_010fa460  size=51  [run]
int __thiscall FUN_010fa460(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010FA4A0  FUN_010fa4a0  size=33  [run]
void FUN_010fa4a0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 010FA4D0  FUN_010fa4d0  size=35  [run]
void FUN_010fa4d0(undefined4 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,param_2);
  return;
}

// 010FA500  FUN_010fa500  size=165  [run]
int * __thiscall FUN_010fa500(int *param_1,undefined4 param_2,int *param_3)

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

// 010FA5B0  FUN_010fa5b0  size=165  [run]
int * __thiscall FUN_010fa5b0(int *param_1,undefined4 param_2,int *param_3)

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

// 010FA660  FUN_010fa660  size=38  [run]
void FUN_010fa660(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010FA690  hkResource::vf00  size=53  [run]
undefined4 * __thiscall hkResource::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010FA6D0  FUN_010fa6d0  size=46  [run]
int __fastcall FUN_010fa6d0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010FA700  FUN_010fa700  size=46  [run]
int __fastcall FUN_010fa700(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010FA730  FUN_010fa730  size=165  [run]
int * __thiscall FUN_010fa730(int *param_1,int *param_2)

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

// 010FA7E0  FUN_010fa7e0  size=165  [run]
int * __thiscall FUN_010fa7e0(int *param_1,int *param_2)

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

// 010FA890  FUN_010fa890  size=64  [run]
void __thiscall FUN_010fa890(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010FA8D0  FUN_010fa8d0  size=64  [run]
void __fastcall FUN_010fa8d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010FA910  FUN_010fa910  size=64  [run]
void __fastcall FUN_010fa910(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010FA950  FUN_010fa950  size=38  [run]
void FUN_010fa950(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010FA980  hkPackfileData::vf00  size=52  [run]
int __thiscall hkPackfileData::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_24();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010FA9E0  FUN_010fa9e0  size=79  [run]
undefined4 FUN_010fa9e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_01009750();
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar2 = FUN_010fad30(param_1,param_3,param_4);
      if (iVar2 == 1) {
        return 1;
      }
      param_1 = param_1 + iVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return 0;
}

// 010FAA30  FUN_010faa30  size=89  [run]
void FUN_010faa30(int param_1,undefined4 param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = in_EAX[1];
  if ((int)(in_EAX[2] & 0x3fffffffU) < iVar1 + unaff_EDI) {
    FUN_0100a210(&PTR_vftable_018e9b8c);
  }
  in_EAX[1] = in_EAX[1] + unaff_EDI;
  iVar1 = *in_EAX + iVar1 * 8;
  iVar2 = 0;
  if (0 < unaff_EDI) {
    do {
      *(int *)(iVar1 + iVar2 * 8) = param_1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = param_2;
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 4;
    } while (iVar2 < unaff_EDI);
  }
  return;
}

// 010FAA90  FUN_010faa90  size=102  [run]
void __thiscall FUN_010faa90(int param_1,int param_2)

{
  int *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = in_EAX[1];
  if ((int)(in_EAX[2] & 0x3fffffffU) < iVar2 + param_1) {
    FUN_0100a210(&PTR_vftable_018e9b8c);
  }
  in_EAX[1] = in_EAX[1] + param_1;
  iVar2 = *in_EAX + iVar2 * 8;
  if (0 < param_1) {
    puVar1 = (undefined4 *)(iVar2 + 4);
    iVar2 = param_2 - iVar2;
    do {
      puVar1[-1] = param_2;
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      param_2 = param_2 + 8;
      puVar1 = puVar1 + 2;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

