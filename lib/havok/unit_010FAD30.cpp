// lib/havok/unit_010FAD30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010FAD30..010FD0A0, 93 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkChainedClassNameRegistry.h"
#include "hkXmlParser.h"

// 010FAD30  FUN_010fad30  size=9  [run]
void FUN_010fad30(void)

{
  FUN_010fab00();
  return;
}

// 010FAD40  FUN_010fad40  size=307  [run]
undefined4 FUN_010fad40(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  FUN_0100a210(&PTR_vftable_018e9b8c,&local_10,0x80,8);
  iVar2 = FUN_010fad30(param_1,param_2,&local_10);
  if ((iVar2 != 0) || (iVar2 = (**(code **)(*param_3 + 4))(param_1,param_2,&local_10), iVar2 != 0))
  {
    local_c = 0;
    if (-1 < local_8) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 8);
    }
    return 1;
  }
  iVar4 = 0;
  iVar2 = local_10;
  if (0 < local_c) {
    do {
      piVar1 = *(int **)(iVar2 + iVar4 * 8);
      if ((*piVar1 != 0) &&
         (iVar3 = FUN_010fad40(*piVar1,*(undefined4 *)(iVar2 + 4 + iVar4 * 8),param_3),
         iVar2 = local_10, iVar3 == 1)) {
        local_c = 0;
        if (local_8 < 0) {
          return 1;
        }
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 8);
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_c);
  }
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(iVar2,local_8 * 8);
  }
  return 0;
}

// 010FAE80  FUN_010fae80  size=53  [run]
undefined4 __thiscall FUN_010fae80(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 010FAEC0  FUN_010faec0  size=68  [run]
int __thiscall FUN_010faec0(int *param_1,undefined4 param_2,int param_3)

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

// 010FAF10  FUN_010faf10  size=69  [run]
int __thiscall FUN_010faf10(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar3,8);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 8;
}

// 010FAF60  FUN_010faf60  size=42  [run]
void __thiscall FUN_010faf60(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}

// 010FAF90  hkChainedClassNameRegistry::~hkChainedClassNameRegistry  size=37  [run]
void __fastcall hkChainedClassNameRegistry::~hkChainedClassNameRegistry(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[7] != 0) {
    FUN_01005e60();
  }
  FUN_01025870();
  *param_1 = ::hkBaseObject::vftable;
  return;
}

// 010FAFC0  hkChainedClassNameRegistry::vf10  size=55  [run]
int __thiscall hkChainedClassNameRegistry::vf10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01025be0(param_2,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(param_2);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

// 010FB000  hkChainedClassNameRegistry::hkChainedClassNameRegistry  size=75  [run]
undefined4 * __thiscall
hkChainedClassNameRegistry::hkChainedClassNameRegistry(undefined4 *param_1,int param_2)

{
  uint local_8;
  
  local_8 = (uint)param_1 & 0xffffff00;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = hkDynamicClassNameRegistry::vftable;
  param_1[2] = 0;
  FUN_01025830(local_8);
  *param_1 = vftable;
  param_1[7] = param_2;
  if (param_2 != 0) {
    FUN_01006000();
  }
  return param_1;
}

// 010FB050  FUN_010fb050  size=38  [run]
void FUN_010fb050(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010FB080  hkChainedClassNameRegistry::vf00  size=52  [run]
int __thiscall hkChainedClassNameRegistry::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkChainedClassNameRegistry();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010FB0E0  FUN_010fb0e0  size=46  [run]
void FUN_010fb0e0(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)(param_1 + *param_2);
  uVar3 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    uVar3 = uVar3 + 1;
    cVar1 = pcVar2[uVar3];
  }
  do {
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 3) != 0);
  *param_2 = *param_2 + uVar3;
  return;
}

// 010FB110  FUN_010fb110  size=156  [run]
void __thiscall FUN_010fb110(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x24);
  local_8 = 0;
  if (*(int *)(param_1 + 0x28) != iVar2 && -1 < *(int *)(param_1 + 0x28) - iVar2) {
    do {
      iVar3 = FUN_010fb250(iVar2 + param_2,&local_8);
      if (iVar3 == -1) {
        return;
      }
      uVar4 = FUN_010fb0e0(iVar2 + param_2,&local_8);
      if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
      }
      puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
      param_3[1] = param_3[1] + 1;
      *puVar1 = uVar4;
      puVar1[1] = iVar3 + param_2;
    } while (local_8 < *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24));
  }
  return;
}

// 010FB1B0  FUN_010fb1b0  size=156  [run]
void __thiscall FUN_010fb1b0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x28);
  local_8 = 0;
  if (*(int *)(param_1 + 0x2c) != iVar2 && -1 < *(int *)(param_1 + 0x2c) - iVar2) {
    do {
      iVar3 = FUN_010fb250(iVar2 + param_2,&local_8);
      if (iVar3 == -1) {
        return;
      }
      uVar4 = FUN_010fb0e0(iVar2 + param_2,&local_8);
      if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
      }
      puVar1 = (undefined4 *)(*param_3 + param_3[1] * 8);
      param_3[1] = param_3[1] + 1;
      *puVar1 = uVar4;
      puVar1[1] = iVar3 + param_2;
    } while (local_8 < *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28));
  }
  return;
}

// 010FB250  FUN_010fb250  size=21  [run]
undefined4 FUN_010fb250(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  return *(undefined4 *)(iVar1 + param_1);
}

// 010FB270  FUN_010fb270  size=11  [run]
int FUN_010fb270(int param_1,int param_2)

{
  return param_2 - param_1;
}

// 010FB280  FUN_010fb280  size=264  [run]
int FUN_010fb280(char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_30 [5];
  undefined4 local_1c;
  undefined1 local_18 [12];
  char *local_c;
  char *local_8;
  
  cVar1 = *param_2;
  local_8 = param_1;
  do {
    if (cVar1 == '\0') {
      *local_8 = '\0';
      return (int)local_8 - (int)param_1;
    }
    cVar1 = *param_2;
    local_c = param_2 + 1;
    pcVar6 = local_c;
    if (cVar1 == '&') {
      cVar1 = *local_c;
      while (cVar1 != ';') {
        if (cVar1 == '\0') {
          return -1;
        }
        pcVar5 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar5;
      }
      pcVar6 = pcVar6 + 1;
      if (*local_c == '#') {
        pcVar5 = pcVar6 + (-2 - (int)local_c);
        if (9 < (int)pcVar5) {
          return -1;
        }
        FUN_01015cb0(local_18,param_2 + 2,pcVar5);
        pcVar5[(int)local_18] = '\0';
        cVar1 = FUN_01015cf0(local_18,0);
        goto LAB_010fb2f8;
      }
      pcVar5 = "<lt";
      iVar4 = 0;
      local_30[0] = "<lt";
      local_30[1] = ">gt";
      local_30[2] = "&amp";
      local_30[3] = "\"quot";
      local_30[4] = "\'apos";
      local_1c = 0;
      do {
        cVar1 = *pcVar5;
        uVar2 = FUN_01015cd0(pcVar5 + 1);
        iVar3 = FUN_01015bd0(local_c,pcVar5 + 1,uVar2);
        if (iVar3 == 0) {
          *local_8 = cVar1;
          local_8 = local_8 + 1;
          break;
        }
        pcVar5 = local_30[iVar4 + 1];
        iVar4 = iVar4 + 1;
      } while (pcVar5 != (char *)0x0);
      if (local_30[iVar4] == (char *)0x0) {
        return -1;
      }
    }
    else {
LAB_010fb2f8:
      *local_8 = cVar1;
      local_8 = local_8 + 1;
    }
    cVar1 = *pcVar6;
    param_2 = pcVar6;
  } while( true );
}

// 010FB3C0  FUN_010fb3c0  size=133  [run]
int FUN_010fb3c0(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  
  bVar3 = true;
  pcVar5 = param_1;
  if (*param_2 != '\0') {
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\n')) || (cVar1 == '\r')) {
LAB_010fb412:
        if (!bVar3) {
          *pcVar5 = ' ';
          bVar3 = true;
          goto LAB_010fb41b;
        }
      }
      else {
        if (param_3 != (char *)0x0) {
          cVar2 = *param_3;
          pcVar4 = param_3;
          while (cVar2 != '\0') {
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            if (cVar1 == cVar2) goto LAB_010fb412;
            cVar2 = *pcVar4;
          }
        }
        bVar3 = false;
        *pcVar5 = cVar1;
LAB_010fb41b:
        pcVar5 = pcVar5 + 1;
      }
    } while (*param_2 != '\0');
    if ((pcVar5 != param_1) && (bVar3)) {
      pcVar5[-1] = '\0';
      return (int)pcVar5 - (int)param_1;
    }
  }
  *pcVar5 = '\0';
  return (int)pcVar5 - (int)param_1;
}

// 010FB470  FUN_010fb470  size=26  [run]
void FUN_010fb470(void)

{
  char cVar1;
  char *in_EAX;
  
  for (; (((cVar1 = *in_EAX, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) || (cVar1 == '\r')
         ); in_EAX = in_EAX + 1) {
  }
  return;
}

// 010FB490  FUN_010fb490  size=130  [run]
void FUN_010fb490(int param_1,undefined4 param_2,int *param_3)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  char local_8 [4];
  
  builtin_strncpy(local_8,"-->",4);
  iVar2 = 0;
  do {
    iVar1 = 0;
    iVar3 = iVar2;
    if (0 < in_EAX) {
      do {
        if (*(char *)(iVar1 + param_1) == local_8[iVar3]) {
          iVar2 = iVar3 + 1;
          if (local_8[iVar3 + 1] == '\0') break;
        }
        else {
          iVar2 = iVar3;
          if (*(char *)(iVar1 + param_1) != '-') {
            iVar2 = 0;
          }
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar2;
      } while (iVar1 < in_EAX);
    }
    if (iVar1 != in_EAX) {
      (**(code **)(*param_3 + 0x20))();
      (**(code **)(*param_3 + 0x14))(iVar1 + 1);
      return;
    }
    (**(code **)(*param_3 + 0x1c))(param_2);
    in_EAX = (**(code **)(*param_3 + 0x10))(param_1,param_2);
    if (in_EAX == 0) {
      return;
    }
  } while( true );
}

// 010FB520  FUN_010fb520  size=96  [run]
undefined4 __thiscall FUN_010fb520(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_3;
  iVar2 = (**(code **)(*param_1 + 0xc))(&param_3,param_3);
  if (iVar2 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    if (*(int *)(param_3 + 8) == 1) {
      uVar3 = (**(code **)(*param_1 + 0x14))(param_3,param_2,iVar1);
      return uVar3;
    }
    FUN_01006810(param_1 + 5,"Document does not start with an element.");
  }
  return 1;
}

// 010FB580  FUN_010fb580  size=88  [run]
uint __thiscall FUN_010fb580(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + iVar3 * 8) & 0xfffffffe;
      if (uVar1 == 0) {
        iVar2 = -(uint)(param_2 != 0);
LAB_010fb5b3:
        if (iVar2 == 0) {
          return *(uint *)(*(int *)(param_1 + 0x10) + 4 + iVar3 * 8) & 0xfffffffe;
        }
      }
      else if (param_2 != 0) {
        iVar2 = FUN_01015b90(uVar1,param_2);
        goto LAB_010fb5b3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  return param_3;
}

// 010FB5F0  hkXmlParser::vf10  size=57  [run]
void __thiscall hkXmlParser::vf10(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

// 010FB630  FUN_010fb630  size=215  [run]
undefined4 __thiscall FUN_010fb630(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  iVar1 = FUN_010065c0();
  iVar1 = iVar1 + 1;
  if ((int)(local_8 & 0x3fffffff) < iVar1) {
    iVar2 = (local_8 & 0x3fffffff) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_10,iVar2,1);
  }
  local_c = iVar1;
  iVar1 = FUN_010fb3c0(local_10,*(uint *)(param_1 + 0xc) & 0xfffffffe,param_2);
  if (iVar1 != -1) {
    FUN_01006780(local_10);
    local_c = 0;
    if (-1 < (int)local_8) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 & 0x3fffffff);
    }
    return 0;
  }
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 & 0x3fffffff);
  }
  return 1;
}

// 010FB710  FUN_010fb710  size=296  [run]
undefined4 FUN_010fb710(int *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  pcVar2 = (char *)FUN_010fb470();
  cVar1 = *pcVar2;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    FUN_010065a0();
    FUN_010065a0();
    pcVar3 = pcVar2;
    while ((((cVar1 = *pcVar3, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\n')) &&
           ((cVar1 != '\r' && (cVar1 != '='))))) {
      pcVar3 = pcVar3 + 1;
      if (cVar1 == '\0') goto LAB_010fb75d;
    }
    FUN_010067c0(pcVar2,(int)pcVar3 - (int)pcVar2);
    pcVar2 = (char *)FUN_010fb470();
    if ((*pcVar2 != '=') || (pcVar2 = (char *)FUN_010fb470(), *pcVar2 != '\"')) break;
    pcVar3 = pcVar2 + 1;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar3;
    while (cVar1 != '\"') {
      pcVar2 = pcVar2 + 1;
      if (cVar1 == '\0') goto LAB_010fb75d;
      cVar1 = *pcVar2;
    }
    FUN_010067c0(pcVar3,(int)pcVar2 - (int)pcVar3);
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
    }
    if (*param_1 + param_1[1] * 8 != 0) {
      FUN_01006740(local_c);
      FUN_01006740(local_8);
    }
    param_1[1] = param_1[1] + 1;
    FUN_01006770();
    FUN_01006770();
    pcVar2 = (char *)FUN_010fb470();
    cVar1 = *pcVar2;
  }
LAB_010fb75d:
  FUN_01006770();
  FUN_01006770();
  return 1;
}

// 010FB840  hkXmlParser::hkXmlParser  size=45  [run]
undefined4 * __fastcall hkXmlParser::hkXmlParser(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  FUN_010065a0();
  return param_1;
}

// 010FB870  hkBaseObject::hkBaseObject  size=116  [run]
void __fastcall hkBaseObject::hkBaseObject(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = hkXmlParser::vftable;
  if (0 < (int)param_1[3]) {
    do {
      puVar1 = *(undefined4 **)(param_1[2] + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[3]);
  }
  FUN_01006770();
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010FB8F0  FUN_010fb8f0  size=119  [run]
void FUN_010fb8f0(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int in_EAX;
  int iVar1;
  
  do {
    iVar1 = 0;
    if (0 < in_EAX) {
      do {
        if (*(char *)(iVar1 + param_1) == '>') break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < in_EAX);
    }
    if (param_4 != 0) {
      FUN_01027270(&PTR_vftable_018e9b94,*(undefined4 *)(param_4 + 4),param_1,iVar1);
    }
    if (iVar1 != in_EAX) {
      (**(code **)(*param_3 + 0x20))();
      (**(code **)(*param_3 + 0x14))(iVar1 + 1);
      return;
    }
    (**(code **)(*param_3 + 0x1c))(param_2);
    in_EAX = (**(code **)(*param_3 + 0x10))(param_1,param_2);
    if (in_EAX == 0) {
      return;
    }
  } while( true );
}

// 010FB970  FUN_010fb970  size=112  [run]
void FUN_010fb970(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int in_EAX;
  int iVar1;
  
  do {
    iVar1 = 0;
    if (0 < in_EAX) {
      do {
        if (*(char *)(iVar1 + param_1) == '<') break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < in_EAX);
    }
    FUN_01027270(&PTR_vftable_018e9b94,*(undefined4 *)(param_4 + 4),param_1,iVar1);
    if (iVar1 != in_EAX) {
      (**(code **)(*param_3 + 0x20))();
      (**(code **)(*param_3 + 0x14))(iVar1);
      return;
    }
    (**(code **)(*param_3 + 0x1c))(param_2);
    in_EAX = (**(code **)(*param_3 + 0x10))(param_1,param_2);
    if (in_EAX == 0) {
      return;
    }
  } while( true );
}

// 010FB9E0  hkXmlParser::vf14  size=580  [run]
undefined4 __thiscall
hkXmlParser::vf14(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *local_8;
  
  hkIstream::hkIstream(param_4);
  piVar2 = param_3;
  if (*param_3 != 0) {
    FUN_0105d310(*param_3);
    *piVar2 = 0;
  }
  puVar1 = param_2;
  if (param_2 != (undefined4 *)0x0) {
    FUN_01006000();
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  puVar4 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_01006000();
    }
    puVar4[3] = puVar1;
  }
  puVar4[2] = 0;
  iVar5 = *piVar2;
  if (iVar5 == 0) {
    *piVar2 = (int)puVar4;
  }
  else {
    for (iVar7 = *(int *)(iVar5 + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
      iVar5 = iVar7;
    }
    *(undefined4 **)(iVar5 + 4) = puVar4;
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_010060a0();
  }
  local_8 = (undefined4 *)0x0;
  iVar5 = (**(code **)(*param_1 + 0xc))(&local_8,param_4);
  puVar1 = local_8;
  do {
    local_8 = puVar1;
    if (iVar5 != 0) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar6 = *(uint *)((~-(uint)(*(int *)(puVar4[3] + 8) != 1) & puVar4[3]) + 0xc);
        pcVar9 = "Missing closing tag of \'%s\'";
LAB_010fbbba:
        FUN_01006810(param_1 + 5,pcVar9,uVar6 & 0xfffffffe);
      }
LAB_010fbbc2:
      ::hkBaseObject::hkBaseObject_216();
      return 1;
    }
    if (puVar1 == (undefined4 *)0x0) goto LAB_010fbbd8;
    iVar5 = puVar1[2];
    if (iVar5 == 1) {
      FUN_01006000();
      param_2 = puVar1;
      puVar4 = (undefined4 *)FUN_010fca70(puVar4,&param_2);
LAB_010fbb65:
      FUN_010060a0();
      FUN_010060a0();
      local_8 = (undefined4 *)0x0;
    }
    else {
      if (iVar5 == 2) {
        iVar5 = puVar4[3];
        if (*(int *)(iVar5 + 8) == 1) {
          uVar6 = puVar1[3] & 0xfffffffe;
          uVar8 = *(uint *)(iVar5 + 0xc) & 0xfffffffe;
          if (uVar8 == 0) {
            iVar7 = -(uint)(uVar6 != 0);
LAB_010fbb1f:
            if (iVar7 == 0) {
              if (*(int *)(iVar5 + 8) == 1) {
                puVar4 = (undefined4 *)puVar4[2];
                if (local_8 != (undefined4 *)0x0) {
                  (**(code **)*local_8)(1);
                }
                if (puVar4 == (undefined4 *)0x0) {
LAB_010fbbd8:
                  ::hkBaseObject::hkBaseObject_216();
                  return 0;
                }
                goto LAB_010fbb7b;
              }
              goto LAB_010fbc0f;
            }
          }
          else if (uVar6 != 0) {
            iVar7 = FUN_01015b90(uVar8,uVar6);
            goto LAB_010fbb1f;
          }
          FUN_01006810(param_1 + 5,"Expected tag to end \'%s\' but got \'%s\'",
                       *(uint *)(iVar5 + 0xc) & 0xfffffffe,puVar1[3] & 0xfffffffe);
          goto LAB_010fbbc2;
        }
LAB_010fbc0f:
        uVar6 = puVar1[3];
        pcVar9 = "Unexpected end tag \'%s\'";
        goto LAB_010fbbba;
      }
      if (iVar5 == 3) {
        FUN_01006000();
        param_2 = puVar1;
        FUN_010fca70(puVar4,&param_2);
        goto LAB_010fbb65;
      }
    }
LAB_010fbb7b:
    iVar5 = (**(code **)(*param_1 + 0xc))(&local_8,param_4);
    puVar1 = local_8;
  } while( true );
}

// 010FBC30  hkXmlParser::vf0C  size=1555  [run]
undefined4 __thiscall hkXmlParser::vf0C(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  LPVOID pvVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_e4;
  char local_58;
  char local_57 [39];
  int *local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  char *local_10;
  uint local_c;
  uint local_8;
  
  local_20 = param_1;
  hkIstream::hkIstream(param_3);
  if (param_1[3] != 0) {
    *param_2 = *(undefined4 *)(param_1[2] + -4 + param_1[3] * 4);
    param_1[3] = param_1[3] + -1;
    ::hkBaseObject::hkBaseObject_216();
    return 0;
  }
  *param_2 = 0;
  pcVar2 = (char *)FUN_01441ba0((int)&param_3 + 3);
  if (*pcVar2 == '\0') {
    FUN_01006780("End of stream");
    ::hkBaseObject::hkBaseObject_216();
    return 1;
  }
  local_10 = (char *)0x0;
  local_c = 0;
  local_8 = 0x80000000;
  (**(code **)(*local_30 + 0x1c))(0x20);
  iVar3 = (**(code **)(*local_30 + 0x10))(&local_58,0x20);
  while (iVar3 != 0) {
    if (local_58 == '<') {
      if (iVar3 < 2) break;
      if (local_57[0] == '?') {
        FUN_010fb8f0(&local_58,0x20,local_30,0);
      }
      else if ((iVar3 < 4) || (iVar3 = FUN_01015bd0(&DAT_017da33c,local_57,3), iVar3 != 0)) {
        if (local_c == 0) {
          local_1c = 0;
          local_18 = 0;
          local_14 = 0x80000000;
          FUN_010fb8f0(&local_58,0x20,local_30,&local_1c);
          if (local_18 == 0) {
            FUN_01006810(local_20 + 5,"Empty tag");
          }
          else {
            if (local_18 == (local_14 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,1);
            }
            *(undefined1 *)(local_18 + local_1c) = 0;
            local_18 = local_18 + 1;
            iVar3 = FUN_010fb280(local_1c,local_1c);
            if (iVar3 != -1) {
              if (*(char *)(local_1c + 1) != '/') {
                bVar9 = *(char *)(local_1c + -1 + iVar3) == '/';
                param_3 = CONCAT13(bVar9,(undefined3)param_3);
                if (bVar9) {
                  *(undefined1 *)(local_1c + -1 + iVar3) = 0;
                  iVar3 = iVar3 + -1;
                }
                iVar6 = 0;
                if (iVar3 < 1) goto LAB_010fc0dc;
                goto LAB_010fc0d1;
              }
              local_18 = iVar3;
              FUN_01026840(local_1c + 2);
              pvVar4 = TlsGetValue(DAT_01f8fc4c);
              iVar3 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x10);
              *(undefined2 *)(iVar3 + 4) = 0x10;
              uVar5 = EndElement::EndElement(local_e4);
              *param_2 = uVar5;
              FUN_01015a80();
              local_18 = 0;
              if ((local_14 & 0x80000000) == 0) {
                (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 & 0x3fffffff);
              }
              local_1c = 0;
              local_14 = 0x80000000;
              local_c = 0;
              if ((local_8 & 0x80000000) != 0) goto LAB_010fc22a;
              goto LAB_010fc21a;
            }
            FUN_01006810(local_20 + 5,"Bad tag");
          }
          local_18 = 0;
          if ((local_14 & 0x80000000) == 0) {
            local_18 = 0;
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 & 0x3fffffff);
          }
          local_1c = 0;
          local_14 = 0x80000000;
          local_c = 0;
          if ((local_8 & 0x80000000) == 0) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 & 0x3fffffff);
          }
          goto LAB_010fbdfc;
        }
        (**(code **)(*local_30 + 0x20))();
        uVar8 = 0;
        if (0 < (int)local_c) {
          uVar8 = 0;
          do {
            cVar1 = local_10[uVar8];
            if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\n')) && (cVar1 != '\r')) break;
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)local_c);
        }
        if (uVar8 != local_c) {
          if (local_c == (local_8 & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,&local_10,1);
          }
          pcVar2 = local_10;
          local_10[local_c] = '\0';
          local_c = local_c + 1;
          iVar3 = FUN_010fb280(local_10,local_10);
          if ((iVar3 == 1) && (*pcVar2 == '\0')) {
            pvVar4 = TlsGetValue(DAT_01f8fc4c);
            iVar3 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x10);
            *(undefined2 *)(iVar3 + 4) = 0x10;
            uVar5 = Characters::Characters(0);
          }
          else {
            pvVar4 = TlsGetValue(DAT_01f8fc4c);
            iVar6 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x10);
            *(undefined2 *)(iVar6 + 4) = 0x10;
            uVar5 = Characters::Characters(pcVar2,iVar3);
          }
          *param_2 = uVar5;
          local_c = 0;
          if (-1 < (int)local_8) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 & 0x3fffffff);
          }
          local_8 = 0x80000000;
          local_10 = (char *)0x0;
          ::hkBaseObject::hkBaseObject_216();
          return 0;
        }
        local_c = 0;
      }
      else {
        FUN_010fb490(&local_58,0x20,local_30);
      }
    }
    else {
      FUN_010fb970(&local_58,0x20,local_30,&local_10);
    }
    (**(code **)(*local_30 + 0x1c))(0x20);
    iVar3 = (**(code **)(*local_30 + 0x10))(&local_58,0x20);
  }
  FUN_01006810(local_20 + 5,"premature end of stream");
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 & 0x3fffffff);
  }
LAB_010fbdfc:
  local_8 = 0x80000000;
  local_10 = (char *)0x0;
  ::hkBaseObject::hkBaseObject_216();
  return 1;
  while (iVar6 = iVar6 + 1, iVar6 < iVar3) {
LAB_010fc0d1:
    if (*(char *)(local_1c + iVar6) == ' ') break;
  }
LAB_010fc0dc:
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  local_18 = iVar3;
  if (iVar6 != iVar3) {
    FUN_010fb710(&local_2c);
    *(undefined1 *)(local_1c + iVar6) = 0;
    local_18 = iVar6;
  }
  iVar3 = local_1c + 1;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar6 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x1c);
  *(undefined2 *)(iVar6 + 4) = 0x1c;
  uVar5 = StartElement::StartElement(iVar3);
  FUN_010fc2e0(&local_2c);
  if (param_3._3_1_ != '\0') {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar6 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x10);
    *(undefined2 *)(iVar6 + 4) = 0x10;
    uVar7 = EndElement::EndElement(iVar3);
    (**(code **)(*local_20 + 0x10))(uVar7);
  }
  *param_2 = uVar5;
  iVar3 = local_28;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    FUN_01006770();
    FUN_01006770();
  }
  local_28 = 0;
  if ((local_24 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 * 8);
  }
  local_2c = 0;
  local_24 = 0x80000000;
  local_18 = 0;
  if ((local_14 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 & 0x3fffffff);
  }
  local_1c = 0;
  local_14 = 0x80000000;
  local_c = 0;
  if ((local_8 & 0x80000000) == 0) {
LAB_010fc21a:
    local_c = 0;
    local_14 = 0x80000000;
    local_1c = 0;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 & 0x3fffffff);
  }
LAB_010fc22a:
  local_8 = 0x80000000;
  local_10 = (char *)0x0;
  ::hkBaseObject::hkBaseObject_216();
  return 0;
}

// 010FC250  FUN_010fc250  size=20  [run]
undefined4 __fastcall FUN_010fc250(undefined4 param_1)

{
  FUN_010065a0();
  FUN_010065a0();
  return param_1;
}

// 010FC270  FUN_010fc270  size=19  [run]
void FUN_010fc270(void)

{
  FUN_01006770();
  FUN_01006770();
  return;
}

// 010FC2C0  FUN_010fc2c0  size=15  [run]
int __thiscall FUN_010fc2c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010FC2E0  FUN_010fc2e0  size=44  [run]
void __thiscall FUN_010fc2e0(undefined4 *param_1,undefined4 *param_2)

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

// 010FC340  FUN_010fc340  size=15  [run]
int __thiscall FUN_010fc340(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010FC370  FUN_010fc370  size=13  [run]
int FUN_010fc370(int param_1)

{
  return param_1 + 0xc;
}

// 010FC380  FUN_010fc380  size=13  [run]
undefined4 FUN_010fc380(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 010FC390  FUN_010fc390  size=31  [run]
int * __thiscall FUN_010fc390(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 010FC3F0  FUN_010fc3f0  size=34  [run]
void FUN_010fc3f0(int param_1,int param_2,undefined4 *param_3)

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

// 010FC420  FUN_010fc420  size=33  [run]
int * __thiscall FUN_010fc420(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  return param_1;
}

// 010FC460  FUN_010fc460  size=36  [run]
undefined4 __thiscall FUN_010fc460(undefined4 param_1,int param_2)

{
  FUN_01006740(param_2);
  FUN_01006740(param_2 + 4);
  return param_1;
}

// 010FC490  FUN_010fc490  size=28  [run]
void __thiscall FUN_010fc490(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010FC4B0  FUN_010fc4b0  size=11  [run]
int FUN_010fc4b0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010FC4D0  FUN_010fc4d0  size=26  [run]
void __thiscall FUN_010fc4d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010FC4F0  FUN_010fc4f0  size=78  [run]
bool __thiscall FUN_010fc4f0(uint *param_1,int param_2)

{
  int iVar1;
  
  if ((*param_1 & 0xfffffffe) == 0) {
    return param_2 != 0;
  }
  if (param_2 != 0) {
    iVar1 = FUN_01015b90(*param_1 & 0xfffffffe,param_2);
    return iVar1 != 0;
  }
  return true;
}

// 010FC540  hkXmlParser::Node::Node  size=30  [run]
void __thiscall hkXmlParser::Node::Node(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  return;
}

// 010FC5B0  FUN_010fc5b0  size=13  [run]
void __thiscall FUN_010fc5b0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010FC5C0  FUN_010fc5c0  size=57  [run]
void __thiscall FUN_010fc5c0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010FC610  FUN_010fc610  size=31  [run]
void FUN_010fc610(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010FC630  FUN_010fc630  size=44  [run]
undefined4 * __thiscall FUN_010fc630(undefined4 *param_1,int *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 != 0) {
    FUN_01006000();
  }
  param_1[3] = *param_2;
  return param_1;
}

// 010FC660  FUN_010fc660  size=54  [run]
void FUN_010fc660(int param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_01006740(param_3);
        FUN_01006740(param_3 + 4);
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010FC6A0  FUN_010fc6a0  size=61  [run]
void __thiscall FUN_010fc6a0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010FC6E0  FUN_010fc6e0  size=39  [run]
void FUN_010fc6e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 010FC710  FUN_010fc710  size=38  [run]
void FUN_010fc710(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010FC740  FUN_010fc740  size=37  [run]
void FUN_010fc740(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010FC770  FUN_010fc770  size=37  [run]
void FUN_010fc770(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010FC7A0  hkXmlParser::EndElement::EndElement  size=47  [run]
undefined4 * __thiscall hkXmlParser::EndElement::EndElement(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 2;
  *param_1 = vftable;
  FUN_010066e0(param_2);
  return param_1;
}

// 010FC7D0  hkBaseObject::~hkBaseObject  size=19  [run]
void __fastcall hkBaseObject::~hkBaseObject(undefined4 *param_1)

{
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 010FC7F0  FUN_010fc7f0  size=38  [run]
void FUN_010fc7f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010FC820  FUN_010fc820  size=37  [run]
void FUN_010fc820(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010FC850  hkXmlParser::Characters::Characters  size=47  [run]
undefined4 * __thiscall hkXmlParser::Characters::Characters(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 3;
  *param_1 = vftable;
  FUN_010066e0(param_2);
  return param_1;
}

// 010FC880  hkBaseObject::~hkBaseObject  size=19  [run]
void __fastcall hkBaseObject::~hkBaseObject(undefined4 *param_1)

{
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 010FC8A0  FUN_010fc8a0  size=38  [run]
void FUN_010fc8a0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010FC8D0  hkXmlParser::Characters::Characters  size=51  [run]
undefined4 * __thiscall
hkXmlParser::Characters::Characters(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 3;
  *param_1 = vftable;
  FUN_01006710(param_2,param_3);
  return param_1;
}

// 010FC910  hkXmlParser::Node::vf00  size=53  [run]
undefined4 * __thiscall hkXmlParser::Node::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010FC950  hkXmlParser::EndElement::vf00  size=61  [run]
undefined4 * __thiscall hkXmlParser::EndElement::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010FC990  hkXmlParser::Characters::vf00  size=61  [run]
undefined4 * __thiscall hkXmlParser::Characters::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010FC9D0  FUN_010fc9d0  size=58  [run]
void __thiscall FUN_010fc9d0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010FCA10  FUN_010fca10  size=81  [run]
void __thiscall FUN_010fca10(int *param_1,undefined4 param_2,int param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  if (*param_1 + param_1[1] * 8 != 0) {
    FUN_01006740(param_3);
    FUN_01006740(param_3 + 4);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010FCA70  FUN_010fca70  size=161  [run]
void __thiscall FUN_010fca70(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  puVar4 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x10);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    if (*param_3 != 0) {
      FUN_01006000();
    }
    puVar4[3] = *param_3;
    puVar5 = puVar4;
  }
  puVar5[2] = param_2;
  if (param_2 == (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      *param_1 = (int)puVar5;
      return;
    }
    for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      iVar1 = iVar2;
    }
    *(undefined4 **)(iVar1 + 4) = puVar5;
    return;
  }
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_2 = (int)puVar5;
    return;
  }
  for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar1 = iVar2;
  }
  *(undefined4 **)(iVar1 + 4) = puVar5;
  return;
}

// 010FCB20  FUN_010fcb20  size=61  [run]
void __fastcall FUN_010fcb20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010FCB60  FUN_010fcb60  size=63  [run]
int __thiscall FUN_010fcb60(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010FCBA0  FUN_010fcba0  size=29  [run]
void FUN_010fcba0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01027270(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 010FCBC0  FUN_010fcbc0  size=82  [run]
void __thiscall FUN_010fcbc0(int *param_1,int param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  if (*param_1 + param_1[1] * 8 != 0) {
    FUN_01006740(param_2);
    FUN_01006740(param_2 + 4);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010FCC20  FUN_010fcc20  size=61  [run]
void __fastcall FUN_010fcc20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010FCC60  FUN_010fcc60  size=42  [run]
void FUN_010fcc60(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
    FUN_01006770();
  }
  return;
}

// 010FCC90  FUN_010fcc90  size=48  [run]
undefined4 __fastcall FUN_010fcc90(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    uVar2 = FUN_01006770();
  }
  param_1[1] = 0;
  return uVar2;
}

// 010FCCC0  hkXmlParser::vf00  size=52  [run]
int __thiscall hkXmlParser::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010FCD00  FUN_010fcd00  size=100  [run]
void __thiscall FUN_010fcd00(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010FCD70  FUN_010fcd70  size=100  [run]
void __fastcall FUN_010fcd70(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010FCDE0  FUN_010fcde0  size=100  [run]
void __fastcall FUN_010fcde0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010FCE50  hkXmlParser::StartElement::StartElement  size=58  [run]
undefined4 * __thiscall
hkXmlParser::StartElement::StartElement(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 1;
  *param_1 = vftable;
  FUN_010066e0(param_2);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  return param_1;
}

// 010FCE90  FUN_010fce90  size=38  [run]
void FUN_010fce90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010FCEC0  hkBaseObject::hkBaseObject_77  size=110  [run]
void __fastcall hkBaseObject::hkBaseObject_77(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] * 8);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 010FCF30  hkXmlParser::StartElement::vf00  size=52  [run]
int __thiscall hkXmlParser::StartElement::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_77();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010FCF70  FUN_010fcf70  size=14  [run]
void __thiscall FUN_010fcf70(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010FCF80  FUN_010fcf80  size=11  [run]
int FUN_010fcf80(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010FCF90  hkBaseObject::hkBaseObject  size=25  [run]
void __fastcall hkBaseObject::hkBaseObject(undefined4 *param_1)

{
  *param_1 = hkXmlObjectReader::vftable;
  FUN_010060a0();
  *param_1 = vftable;
  return;
}

// 010FCFD0  FUN_010fcfd0  size=15  [run]
int FUN_010fcfd0(void)

{
  int iVar1;
  
  iVar1 = FUN_01016320();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

// 010FCFE0  FUN_010fcfe0  size=128  [run]
void FUN_010fcfe0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *unaff_ESI;
  undefined4 *local_8;
  
  bVar1 = false;
  local_8 = (undefined4 *)0x0;
  iVar3 = 1;
  iVar2 = (**(code **)(*unaff_ESI + 0xc))(&local_8);
  if (iVar2 == 0) {
    while (local_8 != (undefined4 *)0x0) {
      iVar2 = local_8[2];
      if (iVar2 == 1) {
        iVar3 = iVar3 + 1;
      }
      else if (iVar2 == 2) {
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          (**(code **)(*unaff_ESI + 0x10))(local_8);
          return;
        }
      }
      else if ((iVar2 == 3) && (!bVar1)) {
        bVar1 = true;
      }
      (**(code **)*local_8)(1);
      local_8 = (undefined4 *)0x0;
      iVar2 = (**(code **)(*unaff_ESI + 0xc))(&local_8);
      if (iVar2 != 0) {
        return;
      }
    }
  }
  return;
}

// 010FD060  FUN_010fd060  size=56  [run]
void FUN_010fd060(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  do {
    do {
      iVar2 = FUN_0102c4d0();
    } while (iVar2 == 0x20);
  } while (((iVar2 == 9) || (iVar2 == 10)) || (iVar2 == 0xd));
  pcVar3 = (char *)(param_1 + 1);
  cVar1 = *pcVar3;
  while (cVar1 != '\0') {
    FUN_0102c4d0();
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  return;
}

// 010FD0A0  FUN_010fd0a0  size=401  [run]
undefined4 FUN_010fd0a0(int *param_1,byte *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  byte *_Dst;
  int iVar6;
  size_t local_24 [7];
  undefined4 local_8;
  
  local_24[5] = 2;
  local_24[3] = 2;
  iVar6 = 0;
  local_24[4] = 0;
  local_24[6] = 3;
  param_3 = local_24[param_3 % 3 + 4] + (param_3 / 3) * 4;
  local_8._2_1_ = 0;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 1;
  local_8 = 0;
  bVar2 = local_8._2_1_;
  _Dst = param_2;
  while (0 < param_3) {
    iVar4 = (**(code **)(*param_1 + 0x10))((int)&param_2 + 3,1);
    if (iVar4 != 1) {
      return 1;
    }
    if ((&DAT_017da380)[(uint)param_2 >> 0x18 & 0x7f] != -1) {
      param_3 = param_3 + -1;
      *(undefined *)((int)&local_8 + iVar6) = (&DAT_017da380)[(uint)param_2 >> 0x18];
      iVar6 = iVar6 + 1;
      bVar2 = local_8._2_1_;
      if (iVar6 == 4) {
        *_Dst = local_8._1_1_ >> 4 | (char)local_8 * '\x04';
        iVar6 = 0;
        _Dst[1] = local_8._2_1_ >> 2 | local_8._1_1_ << 4;
        _Dst[2] = local_8._2_1_ << 6 | local_8._3_1_;
        _Dst = _Dst + 3;
        local_8 = 0;
        bVar2 = 0;
      }
    }
  }
  pcVar5 = (char *)(**(code **)(*param_1 + 0xc))((int)&param_3 + 3);
  cVar1 = *pcVar5;
  do {
    if (cVar1 == '\0') {
LAB_010fd1e4:
      pbVar3 = param_2;
      if (iVar6 != 0) {
        param_2._3_1_ = SUB41(pbVar3,3);
        param_2._0_3_ =
             CONCAT12(bVar2 << 6 | local_8._3_1_,
                      CONCAT11(bVar2 >> 2 | local_8._1_1_ << 4,
                               local_8._1_1_ >> 4 | (char)local_8 * '\x04'));
        if (0 < (int)local_24[iVar6]) {
          FID_conflict__memcpy(_Dst,&param_2,local_24[iVar6]);
        }
      }
      return 0;
    }
    (**(code **)(*param_1 + 0x1c))(1);
    param_2 = (byte *)((uint)param_2 & 0xffffff);
    (**(code **)(*param_1 + 0x10))((int)&param_2 + 3,1);
    if (param_2._3_1_ != '=') {
      (**(code **)(*param_1 + 0x20))();
      goto LAB_010fd1e4;
    }
    pcVar5 = (char *)(**(code **)(*param_1 + 0xc))((int)&param_3 + 3);
    cVar1 = *pcVar5;
  } while( true );
}

