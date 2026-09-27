// lib/havok/unit_010FF000.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010FF000..01100F70, 49 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkObjectReader.h"
#include "hkXmlObjectReader.h"

// 010FF000  hkXmlObjectReader::vf0C  size=212  [run]
int hkXmlObjectReader::vf0C
              (undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  if (0 < (int)param_3) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_10,((int)param_3 < 0) - 1 & param_3,1);
  }
  iVar1 = FUN_010fee70(param_1,&local_10,param_4,param_5);
  if ((iVar1 == 0) && (local_c <= (int)param_3)) {
    FUN_01015e80(param_2,local_10,local_c);
    iVar1 = local_c;
    local_c = 0;
    if (-1 < (int)local_8) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 & 0x3fffffff);
    }
    return iVar1;
  }
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 & 0x3fffffff);
  }
  return -1;
}

// 010FF110  FUN_010ff110  size=9  [run]
void FUN_010ff110(void)

{
  FUN_01025be0();
  return;
}

// 010FF120  FUN_010ff120  size=15  [run]
int __thiscall FUN_010ff120(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010FF130  FUN_010ff130  size=15  [run]
int __thiscall FUN_010ff130(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010FF140  FUN_010ff140  size=8  [run]
undefined4 FUN_010ff140(undefined4 param_1)

{
  return param_1;
}

// 010FF150  FUN_010ff150  size=8  [run]
undefined4 FUN_010ff150(undefined4 param_1)

{
  return param_1;
}

// 010FF160  FUN_010ff160  size=14  [run]
int __thiscall FUN_010ff160(undefined4 *param_1,int param_2)

{
  return *(int *)*param_1 + param_2;
}

// 010FF170  FUN_010ff170  size=38  [run]
void FUN_010ff170(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010FF1A0  FUN_010ff1a0  size=38  [run]
void FUN_010ff1a0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010FF1D0  FUN_010ff1d0  size=37  [run]
void FUN_010ff1d0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010FF200  FUN_010ff200  size=30  [run]
void __thiscall FUN_010ff200(int *param_1,int param_2,int param_3)

{
  *(uint *)(*param_1 + 4) = *(int *)(*param_1 + 4) + param_2 + -1 + param_3 & ~(param_3 - 1U);
  return;
}

// 010FF220  hkXmlObjectReader::vf00  size=52  [run]
int __thiscall hkXmlObjectReader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_76();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010FF260  hkObjectReader::vf00  size=53  [run]
undefined4 * __thiscall hkObjectReader::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010FF2A0  FUN_010ff2a0  size=56  [run]
void __thiscall FUN_010ff2a0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,1);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 010FF2E0  FUN_010ff2e0  size=119  [run]
int __thiscall FUN_010ff2e0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  uint uVar4;
  
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[1];
  uVar4 = iVar2 + param_2 + -1 + param_3 & ~(param_3 - 1U);
  if ((int)(piVar1[2] & 0x3fffffffU) < (int)uVar4) {
    uVar3 = (piVar1[2] & 0x3fffffffU) * 2;
    if ((int)uVar3 <= (int)uVar4) {
      uVar3 = uVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,uVar3,1);
  }
  _Size = uVar4 - piVar1[1];
  if (0 < (int)_Size) {
    _memset((void *)(*piVar1 + piVar1[1]),0,_Size);
  }
  piVar1[1] = uVar4;
  *(int *)(*param_1 + 4) = iVar2;
  return iVar2;
}

// 010FF360  FUN_010ff360  size=31  [run]
void FUN_010ff360(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_014455c0((int)&param_2 + 3,param_2);
  *(bool *)param_1 = *pcVar1 == '\0';
  return;
}

// 010FF390  FUN_010ff390  size=34  [run]
int * __thiscall FUN_010ff390(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = FUN_01015cd0(param_2);
  param_1[1] = iVar1 + param_2;
  return param_1;
}

// 010FF3C0  FUN_010ff3c0  size=20  [run]
void __thiscall FUN_010ff3c0(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2 + param_3;
  return;
}

// 010FF3F0  FUN_010ff3f0  size=13  [run]
void __fastcall FUN_010ff3f0(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010ff3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x28))();
  return;
}

// 010FF410  FUN_010ff410  size=83  [run]
void __thiscall FUN_010ff410(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 != (undefined4 *)0x0) {
    *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
      *param_1 = *param_2;
      return;
    }
    *param_1 = *param_2;
    return;
  }
  *param_1 = *param_2;
  return;
}

// 010FF470  FUN_010ff470  size=28  [run]
void __thiscall FUN_010ff470(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x5c))(param_1[1],param_2);
  return;
}

// 010FF4B0  FUN_010ff4b0  size=32  [run]
void __thiscall FUN_010ff4b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)*param_1 + 0x40))(param_1[1],param_2,param_3);
  return;
}

// 010FF4D0  FUN_010ff4d0  size=28  [run]
void __thiscall FUN_010ff4d0(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 0x54))(param_1[1],param_2);
  return;
}

// 010FF520  FUN_010ff520  size=32  [run]
void __thiscall FUN_010ff520(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)*param_1 + 0x58))(param_1[1],param_2,param_3);
  return;
}

// 010FF560  hkBaseObject::hkBaseObject_52  size=19  [run]
void __fastcall hkBaseObject::hkBaseObject_52(undefined4 *param_1)

{
  hkBaseObject_21();
  *param_1 = vftable;
  return;
}

// 010FF580  FUN_010ff580  size=370  [run]
undefined4 __thiscall FUN_010ff580(int param_1,undefined1 *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  iVar3 = (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))();
  switch(*param_2) {
  case 0x62:
    iVar4 = FUN_01015b90(param_2,&DAT_017d841c);
    if (iVar4 == 0) {
      return *(undefined4 *)(iVar3 + 0x14);
    }
    break;
  case 0x69:
    iVar4 = FUN_01015b90(param_2,&DAT_0170185c);
    if (iVar4 == 0) {
      return *(undefined4 *)(iVar3 + 0x1c);
    }
    break;
  case 0x72:
    iVar4 = FUN_01015b90(param_2,&DAT_01711bec);
    if (iVar4 == 0) {
      return *(undefined4 *)(iVar3 + 0x18);
    }
    iVar3 = FUN_01015b90(param_2,&DAT_016a3db4);
    if (iVar3 == 0) {
      uVar5 = FUN_010e1290(param_3);
      uVar5 = FUN_010e1690(uVar5);
      return uVar5;
    }
    break;
  case 0x73:
    iVar4 = FUN_01015b90(param_2,"string");
    if (iVar4 == 0) {
      return *(undefined4 *)(iVar3 + 0x20);
    }
    iVar3 = FUN_01015b90(param_2,"struct");
    if (iVar3 == 0) {
      uVar5 = FUN_010e1290(param_3);
      return uVar5;
    }
    break;
  case 0x76:
    iVar4 = FUN_01015b90(param_2,&DAT_01701590);
    if (iVar4 == 0) {
      return *(undefined4 *)(iVar3 + 0x10);
    }
    iVar4 = FUN_01015bd0(param_2,&DAT_017450e8,3);
    if (iVar4 == 0) {
      cVar2 = param_2[3];
      pcVar1 = param_2 + 3;
      pcVar6 = pcVar1;
      if (cVar2 == '\0') {
LAB_010ff602:
        if (*pcVar6 != '\0') {
          return 0;
        }
      }
      else {
        do {
          if ((cVar2 < '0') || ('9' < cVar2)) goto LAB_010ff602;
          cVar2 = pcVar6[1];
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
      }
      uVar5 = FUN_01015cf0(pcVar1,0);
      uVar5 = FUN_010e16f0(*(undefined4 *)(iVar3 + 0x18),uVar5);
      return uVar5;
    }
  }
  return 0;
}

// 010FF730  FUN_010ff730  size=119  [run]
void FUN_010ff730(undefined1 *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = FUN_0111a190(param_2,&local_c);
  if (iVar1 == 0) {
    pcVar2 = (char *)FUN_014455c0((int)&param_2 + 3,"\"true\"");
    if (*pcVar2 != '\0') {
      *param_1 = 1;
      return;
    }
    pcVar2 = (char *)FUN_014455c0((int)&param_2 + 3,"\"false\"");
    if (*pcVar2 != '\0') {
      *param_1 = 0;
      return;
    }
  }
  *param_1 = param_3;
  return;
}

// 010FF7B0  FUN_010ff7b0  size=27  [run]
void __fastcall FUN_010ff7b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74);
  while (iVar1 == 5) {
    iVar1 = FUN_0111a740();
  }
  return;
}

// 010FF7D0  FUN_010ff7d0  size=24  [run]
void FUN_010ff7d0(undefined4 param_1)

{
  FUN_01025be0(param_1,0);
  return;
}

// 010FF7F0  FUN_010ff7f0  size=258  [run]
undefined4 FUN_010ff7f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_c;
  char local_5;
  
  local_c = FUN_010253c0();
  FUN_01025890(&local_5,local_c);
  if (local_5 == '\0') {
    return 0;
  }
  do {
    piVar4 = (int *)FUN_01025400(local_c);
    if (*piVar4 == 0) {
      return 1;
    }
    iVar5 = 0;
    if (0 < piVar4[2]) {
      do {
        puVar3 = (undefined4 *)*piVar4;
        if (puVar3 != (undefined4 *)0x0) {
          *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + 1;
          puVar3[2] = puVar3[2] + 1;
        }
        puVar2 = (undefined4 *)(piVar4[1] + iVar5 * 8);
        (**(code **)(*(int *)*puVar2 + 0x60))(puVar2[1],puVar3);
        if (puVar3 != (undefined4 *)0x0) {
          *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
          piVar1 = puVar3 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(1);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar4[2]);
    }
    iVar5 = 0;
    if (0 < piVar4[5]) {
      do {
        (**(code **)(**(int **)(piVar4[4] + iVar5 * 8) + 0x5c))
                  (*(undefined4 *)(piVar4[4] + iVar5 * 8 + 4),*piVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar4[5]);
    }
    local_c = FUN_01025440(local_c);
    FUN_01025890(&local_5,local_c);
  } while (local_5 != '\0');
  return 0;
}

// 010FF900  FUN_010ff900  size=292  [run]
undefined4 FUN_010ff900(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *local_94;
  int local_90;
  uint local_8c;
  undefined1 local_88 [132];
  
  piVar2 = param_1;
  iVar7 = param_1[1] - *param_1;
  iVar1 = iVar7 + 1;
  local_94 = local_88;
  local_90 = 0;
  local_8c = 0x80000080;
  if (0x80 < iVar1) {
    iVar4 = 0x100;
    if (0xff < iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_94,iVar4,1);
  }
  local_90 = iVar1;
  FUN_01015cb0(local_94,*piVar2,iVar7);
  puVar3 = local_94;
  local_94[iVar7] = 0;
  uVar5 = FUN_01025530(local_94);
  FUN_01025890((int)&param_1 + 3,uVar5);
  if (param_1._3_1_ == '\0') {
    uVar6 = FUN_01015d80(puVar3,&PTR_vftable_018e9b94);
    FUN_01025470(uVar6,1);
  }
  else {
    uVar6 = FUN_010253e0(uVar5);
    FUN_01025420(uVar5,1);
  }
  local_90 = 0;
  if (-1 < (int)local_8c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_94,local_8c & 0x3fffffff);
  }
  return uVar6;
}

// 010FFA30  FUN_010ffa30  size=87  [run]
void __fastcall FUN_010ffa30(int param_1)

{
  undefined4 uVar1;
  undefined1 local_c [8];
  
  uVar1 = FUN_0111a1e0(local_c);
  uVar1 = FUN_010ff900(uVar1);
  if (*(uint *)(param_1 + 0xac) == (*(uint *)(param_1 + 0xb0) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0xa8),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xac) * 4) = uVar1;
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  return;
}

// 010FFA90  FUN_010ffa90  size=90  [run]
undefined4 __fastcall FUN_010ffa90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_c [8];
  
  FUN_010ff7b0();
  uVar1 = FUN_0111a1e0(local_c);
  iVar2 = FUN_010ff900(uVar1);
  if ((0 < *(int *)(param_1 + 0xac)) &&
     (iVar2 == *(int *)(*(int *)(param_1 + 0xa8) + -4 + *(int *)(param_1 + 0xac) * 4))) {
    FUN_0111a740();
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
    return 0;
  }
  return 1;
}

// 010FFAF0  FUN_010ffaf0  size=133  [run]
int __thiscall FUN_010ffaf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_c [8];
  
  if (*(int *)(param_1 + 0x74) == 1) {
    iVar2 = (int)&param_2 + 3;
    uVar4 = param_2;
    FUN_0111a1e0(local_c);
    pcVar1 = (char *)FUN_014455c0(iVar2,uVar4);
    if (*pcVar1 != '\0') {
      FUN_010ffa30();
      FUN_0111a740();
      iVar2 = FUN_010ff7b0();
      if (iVar2 == 4) {
        uVar4 = param_3;
        uVar3 = FUN_0111a220(local_c);
        iVar2 = FUN_01119e50(uVar3,uVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
        FUN_0111a740();
        iVar2 = FUN_010ffa90();
        return iVar2;
      }
    }
  }
  return 1;
}

// 010FFB80  FUN_010ffb80  size=133  [run]
int __thiscall FUN_010ffb80(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_c [8];
  
  if (*(int *)(param_1 + 0x74) == 1) {
    iVar2 = (int)&param_2 + 3;
    uVar4 = param_2;
    FUN_0111a1e0(local_c);
    pcVar1 = (char *)FUN_014455c0(iVar2,uVar4);
    if (*pcVar1 != '\0') {
      FUN_010ffa30();
      FUN_0111a740();
      iVar2 = FUN_010ff7b0();
      if (iVar2 == 4) {
        uVar4 = param_3;
        uVar3 = FUN_0111a220(local_c);
        iVar2 = FUN_01119ed0(uVar3,uVar4);
        if (iVar2 != 0) {
          return iVar2;
        }
        FUN_0111a740();
        iVar2 = FUN_010ffa90();
        return iVar2;
      }
    }
  }
  return 1;
}

// 010FFC10  FUN_010ffc10  size=119  [run]
int FUN_010ffc10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_c [8];
  
  FUN_010ffa30();
  FUN_0111a740();
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = FUN_010ff7b0();
      if (iVar1 != 4) {
        return 1;
      }
      FUN_0111a220(local_c);
      iVar1 = FUN_01119ed0(local_c,param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      FUN_0111a740();
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 4;
    } while (iVar2 < param_2);
  }
  iVar2 = FUN_010ffa90();
  return iVar2;
}

// 010FFC90  FUN_010ffc90  size=178  [run]
int __thiscall FUN_010ffc90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = (**(code **)(*(int *)*param_3 + 0x14))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      FUN_010ff7b0();
      if (*(int *)(param_1 + 0x74) == 1) {
        iVar2 = FUN_010ffaf0(param_2,&local_c);
        if (iVar2 != 0) {
          return iVar2;
        }
        (**(code **)(*(int *)*param_3 + 0x58))(iVar3,local_c,local_8);
      }
      else {
        if (*(int *)(param_1 + 0x74) != 4) {
          return 1;
        }
        FUN_0111a220(local_1c);
        iVar2 = FUN_01119e50(local_1c,&local_14);
        if (iVar2 != 0) {
          return iVar2;
        }
        (**(code **)(*(int *)*param_3 + 0x58))(iVar3,local_14,local_10);
        FUN_0111a740();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 010FFD50  FUN_010ffd50  size=181  [run]
int __thiscall FUN_010ffd50(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_14 [8];
  int local_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  local_c = (**(code **)(*(int *)*param_3 + 0x14))();
  iVar4 = 0;
  if (0 < local_c) {
    do {
      FUN_010ff7b0();
      if (*(int *)(param_1 + 0x74) == 1) {
        iVar2 = FUN_010ffb80(param_2,&param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        (**(code **)(*(int *)*puVar1 + 0x40))(iVar4,param_3);
      }
      else {
        if (*(int *)(param_1 + 0x74) != 4) {
          return 1;
        }
        puVar5 = &local_8;
        uVar3 = FUN_0111a220(local_14);
        iVar2 = FUN_01119ed0(uVar3,puVar5);
        if (iVar2 != 0) {
          return iVar2;
        }
        (**(code **)(*(int *)*puVar1 + 0x40))(iVar4,local_8);
        FUN_0111a740();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_c);
  }
  return 0;
}

// 010FFE10  FUN_010ffe10  size=96  [run]
undefined4 FUN_010ffe10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *local_c;
  char *local_8;
  
  local_c = (char *)0x0;
  local_8 = (char *)0x0;
  iVar1 = FUN_0111a190(param_1,&local_c);
  if (iVar1 == 0) {
    if (((1 < (int)local_8 - (int)local_c) && (*local_c == '\"')) &&
       (local_8 = (char *)((int)local_8 + -1), *local_8 == '\"')) {
      local_c = local_c + 1;
      uVar2 = FUN_010ff900(&local_c);
      return uVar2;
    }
  }
  return 0;
}

// 010FFE70  FUN_010ffe70  size=103  [run]
undefined4 * FUN_010ffe70(undefined4 param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_01025be0(param_1,0);
  if (puVar1 == (undefined4 *)0x0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x1c);
    puVar1 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0x80000000;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0x80000000;
      puVar1 = puVar3;
    }
    FUN_01025470(param_1,puVar1);
  }
  return puVar1;
}

// 010FFEE0  FUN_010ffee0  size=39  [run]
undefined4 FUN_010ffee0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_010ffe70(param_1);
  if (*piVar1 != 0) {
    return 1;
  }
  *piVar1 = *param_2;
  return 0;
}

// 010FFF10  FUN_010fff10  size=504  [run]
undefined4 __fastcall FUN_010fff10(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint extraout_ECX;
  uint uVar5;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_20 [8];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  FUN_010ffa30();
  local_38 = FUN_010ffe10(&DAT_0164d4cc);
  if (local_38 != 0) {
    local_c = 0;
    FUN_0111a2c0("version",&local_c);
    local_30 = FUN_010ffe10("parent");
    local_34 = local_c;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0x80000000;
    local_14 = (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))();
    FUN_0111a740();
    iVar2 = FUN_010ff7b0();
    if (iVar2 == 2) {
      while( true ) {
        FUN_0111a1e0(local_20);
        pcVar3 = (char *)FUN_014455c0(&local_5,"member");
        if (*pcVar3 == '\0') break;
        local_18 = FUN_010ffe10(&DAT_0164d4cc);
        iVar2 = FUN_010ffe10(&DAT_01662d64);
        iVar4 = FUN_010ffe10("class");
        if ((local_18 == 0) || (iVar2 == 0)) goto LAB_011000f4;
        iVar2 = FUN_010ff580(iVar2,iVar4);
        if (iVar2 == 0) goto LAB_011000f4;
        pcVar3 = (char *)FUN_010ff730(&local_6,"array",extraout_ECX & 0xffffff00);
        if (*pcVar3 != '\0') {
          iVar2 = FUN_010e16c0(iVar2);
        }
        local_10 = 0;
        FUN_0111a2c0("count",&local_10);
        if (0 < local_10) {
          iVar2 = FUN_010e16f0(iVar2,local_10);
        }
        if (local_28 == (local_24 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_2c,0xc);
        }
        uVar5 = local_28 + 1;
        piVar1 = (int *)(local_2c + local_28 * 0xc);
        *piVar1 = local_18;
        piVar1[1] = iVar2;
        piVar1[2] = 0;
        local_28 = uVar5;
        if (iVar4 != 0) {
          (**(code **)(**(int **)(param_1 + 0x78) + 0x24))(iVar4);
        }
        FUN_0111a740();
        iVar2 = FUN_010ff7b0();
        if (iVar2 != 2) break;
      }
    }
    iVar2 = FUN_010ffa90();
    if (iVar2 != 1) {
      FUN_0111a740();
      (**(code **)(**(int **)(param_1 + 0x78) + 0xc))(&local_38);
      FUN_0104ddf0();
      return 0;
    }
LAB_011000f4:
    FUN_0104ddf0();
  }
  return 1;
}

// 01100110  FUN_01100110  size=583  [run]
undefined4 __thiscall FUN_01100110(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124 [128];
  undefined1 *local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98 [128];
  undefined1 local_18 [8];
  undefined1 *local_10;
  undefined1 *local_c;
  char local_5;
  
  *param_2 = 0;
  FUN_0111a1e0(local_18);
  pcVar1 = (char *)FUN_014455c0(&local_5,&DAT_0164cd24);
  if (*pcVar1 != '\0') {
    FUN_0111a740();
    return 0;
  }
  pcVar1 = (char *)FUN_014455c0(&local_5,"string");
  if (*pcVar1 == '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0x74) == 2) {
    FUN_0111a740();
    *param_2 = &DAT_016416fa;
    return 0;
  }
  if (*(int *)(param_1 + 0x74) != 1) {
    return 1;
  }
  FUN_010ffa30();
  iVar2 = FUN_0111a740();
  if (iVar2 == 3) {
    *param_2 = &DAT_016416fa;
    uVar3 = FUN_010ffa90();
    return uVar3;
  }
  local_a4 = local_98;
  local_9c = 0x80000080;
  local_a0 = 1;
  local_98[0] = 0;
  while ((iVar2 == 4 || (iVar2 == 5))) {
    FUN_0111a220(&local_10);
    FUN_01026640(local_10,(int)local_c - (int)local_10);
    iVar2 = FUN_0111a740();
  }
  local_10 = local_a4;
  local_c = local_a4 + local_a0 + -1;
  pcVar1 = (char *)FUN_01119f70(&local_5,&local_10);
  if (*pcVar1 != '\0') {
    local_130 = local_124;
    local_c = local_a4 + local_a0 + -1;
    local_10 = local_a4;
    local_128 = 0x80000080;
    local_12c = 1;
    local_124[0] = 0;
    FUN_01119fa0(&local_10,&local_130);
    FUN_01026740(&local_130);
    FUN_01015a80();
  }
  local_c = local_a4;
  uVar3 = FUN_01025530(local_a4);
  FUN_01025890(&local_5,uVar3);
  if (local_5 == '\0') {
    puVar4 = (undefined1 *)FUN_01015d80(local_c,&PTR_vftable_018e9b94);
    FUN_01025470(puVar4,1);
  }
  else {
    local_c = (undefined1 *)FUN_010253e0(uVar3);
    FUN_01025420(uVar3,1);
    puVar4 = local_c;
  }
  *param_2 = puVar4;
  uVar3 = FUN_010ffa90();
  FUN_01015a80();
  return uVar3;
}

// 01100360  FUN_01100360  size=782  [run]
int __thiscall FUN_01100360(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *local_5c;
  int local_58;
  undefined1 *local_54;
  undefined1 local_50 [64];
  undefined4 local_10;
  int local_c;
  undefined4 *local_8;
  
  puVar7 = param_3;
  local_8 = param_1;
  piVar1 = (int *)(**(code **)(*(int *)*param_3 + 4))();
  iVar4 = param_2;
  iVar3 = *piVar1;
  switch(iVar3) {
  case 2:
  case 4:
    puVar2 = &DAT_017d841c;
    if (iVar3 != 2) {
      puVar2 = &DAT_0170185c;
    }
    iVar3 = FUN_010ffc90(puVar2,puVar7);
    return iVar3;
  case 3:
    iVar3 = FUN_010ffd50(&DAT_01711bec,puVar7);
    return iVar3;
  case 5:
    iVar3 = 0;
    if (0 < param_2) {
      do {
        FUN_010ff7b0();
        iVar6 = FUN_01100110(&param_2);
        if (iVar6 != 0) {
          return 1;
        }
        (**(code **)(*(int *)*param_3 + 0x38))(iVar3,param_2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      FUN_010ff7b0();
      return 0;
    }
    break;
  case 6:
    local_c = 0;
    if (0 < param_2) {
      do {
        FUN_010ff7b0();
        local_8 = (undefined4 *)(**(code **)(*(int *)*puVar7 + 0x5c))(local_c);
        if (local_8 != (undefined4 *)0x0) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + 1;
          local_8[2] = local_8[2] + 1;
        }
        if (param_1[0x32] == (param_1[0x33] & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 0x31,4);
        }
        puVar7 = (undefined4 *)(param_1[0x31] + param_1[0x32] * 4);
        if ((puVar7 != (undefined4 *)0x0) && (*puVar7 = local_8, local_8 != (undefined4 *)0x0)) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + 1;
          local_8[2] = local_8[2] + 1;
        }
        param_1[0x32] = param_1[0x32] + 1;
        iVar3 = FUN_01100b50(&local_8);
        if (iVar3 != 0) {
          if (local_8 != (undefined4 *)0x0) {
            *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
            piVar1 = local_8 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*local_8)(1);
            }
          }
          return iVar3;
        }
        if (local_8 != (undefined4 *)0x0) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
          piVar1 = local_8 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_8)(1);
          }
        }
        local_c = local_c + 1;
        puVar7 = param_3;
      } while (local_c < param_2);
      FUN_010ff7b0();
      return 0;
    }
    break;
  case 7:
    iVar3 = 0;
    if (0 < param_2) {
      do {
        local_10 = *param_3;
        local_c = iVar3;
        FUN_01102260(&local_10);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
      FUN_010ff7b0();
      return 0;
    }
    break;
  default:
    return 1;
  case 9:
    if (((iVar3 == 9) && (*(int *)piVar1[1] == 3)) &&
       ((iVar3 = piVar1[2], iVar3 == 4 || (((iVar3 == 8 || (iVar3 == 0xc)) || (iVar3 == 0x10)))))) {
      iVar3 = FUN_010e0cc0();
      local_5c = local_50;
      local_58 = 0;
      local_54 = &DAT_80000010;
      if (0x10 < iVar3) {
        iVar4 = 0x20;
        if (0x1f < iVar3) {
          iVar4 = iVar3;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,&local_5c,iVar4,4);
      }
      iVar4 = param_2;
      iVar6 = 0;
      local_58 = iVar3;
      if (0 < param_2) {
        do {
          FUN_010ff7b0();
          iVar5 = FUN_010ffc10(local_5c,iVar3);
          if (iVar5 != 0) {
            local_58 = 0;
            if ((int)local_54 < 0) {
              return 1;
            }
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_5c,(int)local_54 * 4);
            return 1;
          }
          (**(code **)(*(int *)*param_3 + 0x30))(iVar6,local_5c);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
      local_58 = 0;
      if (-1 < (int)local_54) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_5c,(int)local_54 * 4);
      }
    }
  }
  FUN_010ff7b0();
  return 0;
}

// 011006A0  FUN_011006a0  size=1161  [run]
int __thiscall FUN_011006a0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 local_54 [64];
  int *local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  puVar4 = param_2;
  piVar6 = (int *)param_2[2];
  iVar2 = *piVar6;
  local_c = piVar6;
  if (iVar2 == 9) {
    local_8 = FUN_010e0cc0();
    if (((*piVar6 == 9) && (*(int *)piVar6[1] == 3)) &&
       ((iVar2 = piVar6[2], iVar2 == 4 || (((iVar2 == 8 || (iVar2 == 0xc)) || (iVar2 == 0x10)))))) {
      iVar2 = FUN_010ffc10(local_54,local_8);
      if (iVar2 == 0) {
        (**(code **)(*(int *)*param_3 + 0x48))(param_3[1],local_54,local_8);
        return 0;
      }
    }
    else {
      pcVar3 = (char *)FUN_0111a330((int)&param_2 + 3,&DAT_016a7b8c);
      if (*pcVar3 != '\0') {
        iVar2 = FUN_0111a2c0(&DAT_016a7b8c,&local_8);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_010e0cc0();
        if (local_8 != iVar2) {
          return 1;
        }
      }
      piVar6 = (int *)*param_3;
      if (piVar6 != (int *)0x0) {
        *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
        piVar6[2] = piVar6[2] + 1;
      }
      (**(code **)(*piVar6 + 0xc))(&local_14,*puVar4);
      puVar4 = (undefined4 *)(**(code **)(*local_14 + 0x28))(local_10);
      if (puVar4 != (undefined4 *)0x0) {
        *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + 1;
        puVar4[2] = puVar4[2] + 1;
      }
      param_2 = puVar4;
      if (*(int *)(param_1 + 0x74) == 1) {
        FUN_0111a1e0(&local_14);
        pcVar3 = (char *)FUN_014455c0((int)&param_3 + 3,"tuple");
        if (*pcVar3 != '\0') {
          FUN_010ffa30();
          FUN_0111a740();
          puVar7 = &param_2;
          uVar5 = FUN_010e0cc0(puVar7);
          param_3 = (int *)FUN_01100360(uVar5,puVar7);
          if (param_3 == (int *)0x0) {
            param_3 = (int *)FUN_010ffa90();
          }
          if (puVar4 != (undefined4 *)0x0) {
            *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
            piVar1 = puVar4 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar4)(1);
            }
          }
          *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
          piVar1 = piVar6 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*piVar6)(1);
          }
          return (int)param_3;
        }
      }
      if (puVar4 != (undefined4 *)0x0) {
        *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
        piVar1 = puVar4 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
      *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
      piVar1 = piVar6 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*piVar6)(1);
      }
    }
  }
  else {
    if (iVar2 == 8) {
      iVar2 = FUN_0111a2c0(&DAT_016a7b8c,&local_8);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_2 = (int *)*param_3;
      if (param_2 != (int *)0x0) {
        *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + 1;
        param_2[2] = param_2[2] + 1;
      }
      (**(code **)(*param_2 + 0xc))(&local_14,*puVar4);
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x78) + 0x14))(&param_2,local_10,puVar4);
      if (piVar6 != (int *)0x0) {
        *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
        piVar6[2] = piVar6[2] + 1;
      }
      param_3 = piVar6;
      (**(code **)(*piVar6 + 0x10))(local_8);
      FUN_010ffa30();
      FUN_0111a740();
      iVar2 = FUN_01100360(local_8,&param_3);
      if (iVar2 == 0) {
        iVar2 = FUN_010ffa90();
        *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
        piVar1 = piVar6 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*piVar6)(1);
        }
        if (param_2 != (int *)0x0) {
          *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + -1;
          piVar6 = param_2 + 2;
          *piVar6 = *piVar6 + -1;
          if (*piVar6 == 0) {
            (**(code **)*param_2)(1);
          }
        }
        return iVar2;
      }
      *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
      piVar1 = piVar6 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*piVar6)(1);
      }
      if (param_2 != (int *)0x0) {
        *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + -1;
        piVar6 = param_2 + 2;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          (**(code **)*param_2)(1);
        }
      }
      return 1;
    }
    switch(iVar2) {
    case 2:
      iVar2 = FUN_010ffaf0(&DAT_017d841c,&local_14);
      if (iVar2 == 0) {
        (**(code **)(*(int *)*param_3 + 0x40))(param_3[1],local_14,local_10);
        return 0;
      }
      return iVar2;
    case 3:
      iVar2 = FUN_010ffb80(&DAT_01711bec,&param_2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)*param_3 + 0x50))(param_3[1],param_2);
        return 0;
      }
      return iVar2;
    case 4:
      iVar2 = FUN_010ffaf0(&DAT_0170185c,&local_14);
      if (iVar2 == 0) {
        (**(code **)(*(int *)*param_3 + 0x40))(param_3[1],local_14,local_10);
        return 0;
      }
      return iVar2;
    case 5:
      iVar2 = FUN_01100110(&param_2);
      if (iVar2 == 0) {
        (**(code **)(*(int *)*param_3 + 0x54))(param_3[1],param_2);
        return 0;
      }
      break;
    case 6:
      iVar2 = **(int **)(param_1 + 0x78);
      uVar5 = FUN_010e0cd0();
      iVar2 = (**(code **)(iVar2 + 0x24))(uVar5);
      if (iVar2 != 0) {
        param_2 = (undefined4 *)0x0;
        iVar2 = FUN_01100f70(iVar2,&param_2);
        if (iVar2 != 0) {
          if (param_2 != (undefined4 *)0x0) {
            *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + -1;
            piVar6 = param_2 + 2;
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              (**(code **)*param_2)(1);
            }
          }
          return iVar2;
        }
        (**(code **)(*(int *)*param_3 + 0x5c))(param_3[1],param_2);
        if (param_2 != (undefined4 *)0x0) {
          *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + -1;
          piVar6 = param_2 + 2;
          *piVar6 = *piVar6 + -1;
          if (*piVar6 == 0) {
            (**(code **)*param_2)(1);
            return 0;
          }
          return 0;
        }
        return 0;
      }
      break;
    case 7:
      iVar2 = FUN_01102370(param_3);
      return iVar2;
    }
  }
  return 1;
}

// 01100B50  FUN_01100b50  size=194  [run]
uint FUN_01100b50(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [8];
  
  FUN_010ffa30();
  piVar1 = (int *)(**(code **)(*(int *)*param_1 + 8))();
  FUN_0111a740();
  iVar2 = FUN_010ff7b0();
  while( true ) {
    if (iVar2 != 1) {
      iVar2 = FUN_010ffa90();
      return (uint)(iVar2 != 0);
    }
    iVar2 = FUN_010ffe10(&DAT_0164d4cc);
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*piVar1 + 0x2c))(iVar2), iVar2 < 0)) break;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    (**(code **)(*piVar1 + 0x28))(iVar2,&local_1c);
    (**(code **)(*(int *)*param_1 + 0xc))(local_c,local_1c);
    uVar3 = FUN_011006a0(&local_1c,local_c);
    if (uVar3 != 0) {
      return uVar3;
    }
    iVar2 = FUN_010ff7b0();
  }
  return 1;
}

// 01100C20  FUN_01100c20  size=355  [run]
int __thiscall FUN_01100c20(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_c;
  char *local_8;
  
  hkXmlStreamParser::hkXmlStreamParser(param_2);
  *(undefined4 *)(param_1 + 0x78) = param_3;
  piVar1 = (int *)(param_1 + 0x7c);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  piVar2 = (int *)(param_1 + 0x88);
  uVar3 = param_2 >> 8;
  param_2 = uVar3 << 8;
  *(undefined4 *)(param_1 + 0x90) = 0x80000000;
  *piVar2 = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  FUN_01025830(param_2);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_2 = uVar3 << 8;
  *(undefined4 *)(param_1 + 0xb0) = 0x80000000;
  FUN_01025830(param_2);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x80000000;
  if (*(uint *)(param_1 + 0x80) == (*(uint *)(param_1 + 0x84) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
  }
  *(undefined4 *)(*piVar1 + *(int *)(param_1 + 0x80) * 4) = 0;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  if (*(uint *)(param_1 + 0x8c) == (*(uint *)(param_1 + 0x90) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
  }
  *(undefined1 **)(*piVar2 + *(int *)(param_1 + 0x8c) * 4) = &DAT_016416fa;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  if (*(uint *)(param_1 + 0x8c) == (*(uint *)(param_1 + 0x90) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
  }
  *(undefined4 *)(*piVar2 + *(int *)(param_1 + 0x8c) * 4) = 0;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  *(undefined4 *)(param_1 + 0x94) = 2;
  local_c = "#0000";
  iVar4 = FUN_01015cd0("#0000");
  local_8 = "#0000" + iVar4;
  uVar5 = FUN_010ff900(&local_c);
  *(undefined4 *)(param_1 + 0xd0) = uVar5;
  return param_1;
}

// 01100D90  FUN_01100d90  size=480  [run]
void __fastcall FUN_01100d90(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  LPVOID pvVar6;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  uVar4 = FUN_010253c0();
  FUN_01025890((int)&uStack_8 + 3,uVar4);
  while (uStack_8._3_1_ != '\0') {
    iVar5 = FUN_01025400(uVar4);
    if (iVar5 != 0) {
      FUN_011021e0();
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 8))(iVar5,0x1c);
    }
    uVar4 = FUN_01025440(uVar4);
    FUN_01025890((int)&uStack_8 + 3,uVar4);
  }
  iVar5 = *(int *)(param_1 + 200);
  iVar2 = *(int *)(param_1 + 0xc4);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    puVar3 = *(undefined4 **)(iVar2 + iVar5 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
      piVar1 = puVar3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if ((*(uint *)(param_1 + 0xcc) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0xc4),*(uint *)(param_1 + 0xcc) * 4);
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x80000000;
  FUN_01025870();
  *(undefined4 *)(param_1 + 0xac) = 0;
  if ((*(uint *)(param_1 + 0xb0) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0xa8),*(uint *)(param_1 + 0xb0) * 4);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0x80000000;
  FUN_0105d070();
  FUN_01025870();
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if ((*(uint *)(param_1 + 0x90) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x88),*(uint *)(param_1 + 0x90) * 4);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x80000000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((*(uint *)(param_1 + 0x84) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x7c),*(uint *)(param_1 + 0x84) * 4);
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  hkBaseObject::hkBaseObject_211();
  return;
}

// 01100F70  FUN_01100f70  size=320  [run]
int __thiscall FUN_01100f70(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_8;
  
  local_8 = (int)param_2;
  if (param_2 == (undefined4 *)0x0) {
    iVar4 = FUN_010ffe10(&DAT_01662d64);
    if (iVar4 != 0) {
      local_8 = (**(code **)(**(int **)(param_1 + 0x78) + 0x24))(iVar4);
      if (local_8 != 0) goto LAB_01100fad;
    }
    return 1;
  }
LAB_01100fad:
  iVar4 = FUN_010ffe10(&DAT_0164a424);
  puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x78) + 0x10))(&local_8,0);
  if (puVar5 != (undefined4 *)0x0) {
    *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
    puVar5[2] = puVar5[2] + 1;
  }
  param_2 = puVar5;
  iVar6 = FUN_01100b50(&param_2);
  if (iVar6 == 0) {
    if (iVar4 != 0) {
      iVar4 = FUN_010ffee0(iVar4,&param_2);
      if (iVar4 != 0) {
        if (puVar5 != (undefined4 *)0x0) {
          *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
          piVar1 = puVar5 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(1);
          }
        }
        return iVar4;
      }
    }
    piVar1 = param_3;
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
      puVar5[2] = puVar5[2] + 1;
    }
    puVar3 = (undefined4 *)*param_3;
    if (puVar3 != (undefined4 *)0x0) {
      *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
      piVar2 = puVar3 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *piVar1 = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(1);
      }
    }
    iVar6 = 0;
  }
  else if (puVar5 != (undefined4 *)0x0) {
    *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
    piVar1 = puVar5 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(1);
      return iVar6;
    }
  }
  return iVar6;
}

