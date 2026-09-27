// lib/msvc/stl/unit_00E18FA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E18FA0..00E19460, 6 functions

#include "mgrr.h"

// 00E18FA0  std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>_2  size=22  [run]
void __fastcall
std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::
basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>_2(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00e16db0();
  basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>();
  return;
}

// 00E19000  std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf0C  size=461  [run]
int __thiscall
std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf0C(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  void *_Src;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *_Dst;
  
  if ((*(byte *)(param_1 + 0x40) & 8) != 0) {
    uVar7 = **(uint **)(param_1 + 0x24);
    if ((uVar7 != 0) && (uVar4 = *(uint *)(param_1 + 0x3c), uVar7 < uVar4)) {
      iVar5 = **(int **)(param_1 + 0x34);
      **(uint **)(param_1 + 0x24) = uVar4;
      **(int **)(param_1 + 0x34) = (iVar5 + uVar7) - uVar4;
    }
  }
  if (param_2 == -1) {
    return 0;
  }
  uVar7 = **(uint **)(param_1 + 0x24);
  if ((uVar7 != 0) && (piVar2 = *(int **)(param_1 + 0x34), uVar7 < *piVar2 + uVar7)) {
    *piVar2 = *piVar2 + -1;
    puVar3 = (undefined1 *)**(int **)(param_1 + 0x24);
    **(int **)(param_1 + 0x24) = (int)(puVar3 + 1);
    *puVar3 = (char)param_2;
    return param_2;
  }
  if ((*(byte *)(param_1 + 0x40) & 2) != 0) {
    return -1;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(int **)(param_1 + 0x34) - **(int **)(param_1 + 0x10)) + uVar7;
  }
  uVar4 = uVar7 >> 1;
  if (uVar4 < 0x20) {
    uVar4 = 0x20;
  }
  else if (uVar4 == 0) {
    return -1;
  }
  do {
    if (uVar7 <= 0x7fffffff - uVar4) break;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  if (uVar4 != 0) {
    iVar5 = uVar4 + uVar7;
    if (DAT_01b7b794 == (code *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)(*DAT_01b7b794)(iVar5);
    }
    _Src = (void *)**(undefined4 **)(param_1 + 0x10);
    if ((uVar7 == 0) || (FID_conflict__memcpy(_Dst,_Src,uVar7), uVar7 == 0)) {
      *(void **)(param_1 + 0x3c) = _Dst;
      **(undefined4 **)(param_1 + 0x14) = _Dst;
      **(undefined4 **)(param_1 + 0x24) = _Dst;
      **(int **)(param_1 + 0x34) = iVar5;
      bVar1 = *(byte *)(param_1 + 0x40);
      **(undefined4 **)(param_1 + 0x10) = _Dst;
      if ((bVar1 & 4) == 0) {
        **(undefined4 **)(param_1 + 0x20) = _Dst;
        **(undefined4 **)(param_1 + 0x30) = 1;
      }
      else {
        **(undefined4 **)(param_1 + 0x20) = 0;
        **(undefined4 **)(param_1 + 0x30) = _Dst;
      }
    }
    else {
      *(int *)(param_1 + 0x3c) = (int)_Dst + (*(int *)(param_1 + 0x3c) - (int)_Src);
      iVar6 = **(int **)(param_1 + 0x24);
      **(int **)(param_1 + 0x14) = (int)_Dst + (**(int **)(param_1 + 0x14) - (int)_Src);
      iVar6 = (iVar6 - (int)_Src) + (int)_Dst;
      **(int **)(param_1 + 0x24) = iVar6;
      **(int **)(param_1 + 0x34) = (int)_Dst + (iVar5 - iVar6);
      if ((*(byte *)(param_1 + 0x40) & 4) == 0) {
        iVar5 = **(int **)(param_1 + 0x24);
        iVar6 = (**(int **)(param_1 + 0x20) - (int)_Src) + (int)_Dst;
        **(undefined4 **)(param_1 + 0x10) = _Dst;
        **(int **)(param_1 + 0x20) = iVar6;
        **(int **)(param_1 + 0x30) = (iVar5 - iVar6) + 1;
      }
      else {
        **(undefined4 **)(param_1 + 0x10) = _Dst;
        **(undefined4 **)(param_1 + 0x20) = 0;
        **(undefined4 **)(param_1 + 0x30) = _Dst;
      }
    }
    if (((*(byte *)(param_1 + 0x40) & 1) != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(_Src);
    }
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 1;
    **(int **)(param_1 + 0x34) = **(int **)(param_1 + 0x34) + -1;
    puVar3 = (undefined1 *)**(int **)(param_1 + 0x24);
    **(int **)(param_1 + 0x24) = (int)(puVar3 + 1);
    *puVar3 = (char)param_2;
    return param_2;
  }
  return -1;
}

// 00E191D0  std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf10  size=74  [run]
int __thiscall
std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf10(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = **(uint **)(param_1 + 0x20);
  if ((uVar1 != 0) && (**(uint **)(param_1 + 0x10) < uVar1)) {
    if ((param_2 == -1) ||
       (((char)param_2 == *(char *)(uVar1 - 1) || ((*(byte *)(param_1 + 0x40) & 2) == 0)))) {
      **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) + 1;
      **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + -1;
      if (param_2 != -1) {
        *(char *)**(undefined4 **)(param_1 + 0x20) = (char)param_2;
        return param_2;
      }
      return 0;
    }
  }
  return -1;
}

// 00E19220  std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf18  size=97  [run]
uint __fastcall
std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf18(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)**(int **)(param_1 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (pbVar1 < pbVar1 + **(int **)(param_1 + 0x30)) {
    return (uint)*pbVar1;
  }
  if ((((*(byte *)(param_1 + 0x40) & 4) == 0) &&
      (pbVar2 = (byte *)**(undefined4 **)(param_1 + 0x24), pbVar2 != (byte *)0x0)) &&
     ((pbVar1 < pbVar2 || (pbVar1 < *(byte **)(param_1 + 0x3c))))) {
    if (*(byte **)(param_1 + 0x3c) < pbVar2) {
      *(byte **)(param_1 + 0x3c) = pbVar2;
    }
    **(int **)(param_1 + 0x30) = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x20);
    return (uint)*(byte *)**(undefined4 **)(param_1 + 0x20);
  }
  return 0xffffffff;
}

// 00E19290  std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf28  size=452  [run]
void __thiscall
std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf28
          (int param_1,uint *param_2,uint param_3,uint param_4,int param_5,byte param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = **(uint **)(param_1 + 0x24);
  if ((uVar2 != 0) && (*(uint *)(param_1 + 0x3c) < uVar2)) {
    *(uint *)(param_1 + 0x3c) = uVar2;
  }
  if (((param_6 & 1) == 0) || (iVar5 = **(int **)(param_1 + 0x20), iVar5 == 0)) {
    if (((param_6 & 2) == 0) || (uVar2 = **(uint **)(param_1 + 0x24), uVar2 == 0)) {
      if (param_3 == 0 && param_4 == 0) goto LAB_00e19439;
    }
    else {
      if (param_5 == 2) {
        uVar3 = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x10);
        bVar6 = CARRY4(param_3,uVar3);
        param_3 = param_3 + uVar3;
        param_4 = param_4 + ((int)uVar3 >> 0x1f) + (uint)bVar6;
      }
      else if (param_5 == 1) {
        uVar3 = uVar2 - **(int **)(param_1 + 0x10);
        bVar6 = CARRY4(param_3,uVar3);
        param_3 = param_3 + uVar3;
        param_4 = param_4 + ((int)uVar3 >> 0x1f) + (uint)bVar6;
      }
      else if (param_5 != 0) {
        param_3 = 0xffffffff;
        param_4 = 0xffffffff;
      }
      if (-1 < (int)param_4) {
        uVar3 = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x10);
        iVar5 = (int)uVar3 >> 0x1f;
        if (((int)param_4 <= iVar5) && (((int)param_4 < iVar5 || (param_3 <= uVar3)))) {
          iVar5 = (**(int **)(param_1 + 0x10) - uVar2) + param_3;
          **(int **)(param_1 + 0x34) = **(int **)(param_1 + 0x34) - iVar5;
          **(int **)(param_1 + 0x24) = **(int **)(param_1 + 0x24) + iVar5;
          goto LAB_00e19439;
        }
      }
    }
  }
  else {
    if (param_5 == 2) {
      uVar2 = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x10);
      bVar6 = CARRY4(param_3,uVar2);
      param_3 = param_3 + uVar2;
      param_4 = param_4 + ((int)uVar2 >> 0x1f) + (uint)bVar6;
    }
    else if (param_5 == 1) {
      if ((param_6 & 2) == 0) {
        uVar2 = iVar5 - **(int **)(param_1 + 0x10);
        bVar6 = CARRY4(param_3,uVar2);
        param_3 = param_3 + uVar2;
        param_4 = param_4 + ((int)uVar2 >> 0x1f) + (uint)bVar6;
      }
      else {
LAB_00e19304:
        param_3 = 0xffffffff;
        param_4 = 0xffffffff;
      }
    }
    else if (param_5 != 0) goto LAB_00e19304;
    if (-1 < (int)param_4) {
      uVar2 = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x10);
      iVar4 = (int)uVar2 >> 0x1f;
      if (((int)param_4 <= iVar4) && (((int)param_4 < iVar4 || (param_3 <= uVar2)))) {
        iVar5 = (**(int **)(param_1 + 0x10) - iVar5) + param_3;
        **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) - iVar5;
        **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + iVar5;
        if ((param_6 & 2) != 0) {
          iVar5 = **(int **)(param_1 + 0x24);
          if (iVar5 != 0) {
            iVar4 = **(int **)(param_1 + 0x34);
            iVar1 = **(int **)(param_1 + 0x20);
            **(int **)(param_1 + 0x24) = iVar1;
            **(int **)(param_1 + 0x34) = (iVar4 + iVar5) - iVar1;
          }
        }
        goto LAB_00e19439;
      }
    }
  }
  param_3 = 0xffffffff;
  param_4 = 0xffffffff;
LAB_00e19439:
  *param_2 = param_3;
  param_2[1] = param_4;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}

// 00E19460  std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf2C  size=267  [run]
void __thiscall
std::basic_stringbuf<char,std::char_traits<char>,StlUtilAlloc<char>_>::vf2C
          (int param_1,uint *param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte in_stack_00000020;
  
  uVar7 = param_5 + param_3;
  uVar3 = **(uint **)(param_1 + 0x24);
  uVar6 = ((int)param_5 >> 0x1f) + param_4 + (uint)CARRY4(param_5,param_3);
  if ((uVar3 != 0) && (*(uint *)(param_1 + 0x3c) < uVar3)) {
    *(uint *)(param_1 + 0x3c) = uVar3;
  }
  if ((uVar7 != 0xffffffff) || (uVar6 != 0xffffffff)) {
    if (((in_stack_00000020 & 1) == 0) || (**(int **)(param_1 + 0x20) == 0)) {
      if ((((in_stack_00000020 & 2) != 0) && (uVar3 = **(uint **)(param_1 + 0x24), uVar3 != 0)) &&
         (-1 < (int)uVar6)) {
        uVar4 = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x10);
        iVar5 = (int)uVar4 >> 0x1f;
        if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar7 <= uVar4)))) {
          iVar5 = (**(int **)(param_1 + 0x10) - uVar3) + uVar7;
          **(int **)(param_1 + 0x34) = **(int **)(param_1 + 0x34) - iVar5;
          **(int **)(param_1 + 0x24) = **(int **)(param_1 + 0x24) + iVar5;
          goto LAB_00e19551;
        }
      }
    }
    else if (-1 < (int)uVar6) {
      uVar3 = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x10);
      iVar5 = (int)uVar3 >> 0x1f;
      if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar7 <= uVar3)))) {
        iVar5 = (**(int **)(param_1 + 0x10) - **(int **)(param_1 + 0x20)) + uVar7;
        **(int **)(param_1 + 0x30) = **(int **)(param_1 + 0x30) - iVar5;
        **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + iVar5;
        if ((in_stack_00000020 & 2) != 0) {
          iVar5 = **(int **)(param_1 + 0x24);
          if (iVar5 != 0) {
            iVar1 = **(int **)(param_1 + 0x34);
            iVar2 = **(int **)(param_1 + 0x20);
            **(int **)(param_1 + 0x24) = iVar2;
            **(int **)(param_1 + 0x34) = (iVar1 + iVar5) - iVar2;
          }
        }
        goto LAB_00e19551;
      }
    }
    uVar6 = 0xffffffff;
    uVar7 = 0xffffffff;
  }
LAB_00e19551:
  *param_2 = uVar7;
  param_2[1] = uVar6;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}

