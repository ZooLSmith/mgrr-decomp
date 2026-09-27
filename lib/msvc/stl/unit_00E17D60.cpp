// lib/msvc/stl/unit_00E17D60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E17D60..00E180D0, 9 functions

#include "mgrr.h"

// 00E17D60  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>  size=110  [run]
void __fastcall
std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
          (undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *local_4;
  
  puVar1 = (uint *)param_1[0xe];
  *param_1 = vftable;
  local_4 = param_1;
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      _Lockit::_Lockit((_Lockit *)&local_4,0);
      iVar3 = *(int *)(uVar2 + 4);
      if ((iVar3 != 0) && (iVar3 != -1)) {
        *(int *)(uVar2 + 4) = iVar3 + -1;
      }
      iVar3 = *(int *)(uVar2 + 4);
      FUN_00fda874();
      puVar4 = (undefined4 *)(~-(uint)(iVar3 != 0) & uVar2);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
    FUN_00dd4920(puVar1);
  }
  FUN_00fdb1ab();
  return;
}

// 00E17DD0  std::basic_streambuf<char,std::char_traits<char>_>::vf1C  size=39  [run]
uint __fastcall std::basic_streambuf<char,std::char_traits<char>_>::vf1C(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x18))();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  *(int *)param_1[0xc] = *(int *)param_1[0xc] + -1;
  pbVar1 = *(byte **)param_1[8];
  *(byte **)param_1[8] = pbVar1 + 1;
  return (uint)*pbVar1;
}

// 00E17E00  std::basic_streambuf<char,std::char_traits<char>_>::vf20  size=217  [run]
/* WARNING: Removing unreachable block (ram,0x00e17e41) */
/* WARNING: Removing unreachable block (ram,0x00e17e4f) */

longlong __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::vf20
          (int *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint _Size;
  bool bVar4;
  longlong lVar5;
  
  if ((-1 < param_4) && ((lVar1 = 0, 0 < param_4 || (lVar1 = 0, param_3 != 0)))) {
    while( true ) {
      do {
        lVar5 = FUN_00e17170();
        if (lVar5 < 1) {
          iVar2 = (**(code **)(*param_1 + 0x1c))();
          if (iVar2 == -1) {
            return lVar1;
          }
          puVar3 = param_2 + 1;
          *param_2 = (char)iVar2;
          lVar1 = lVar1 + 1;
          bVar4 = param_3 != 0;
          param_3 = param_3 - 1;
          param_4 = param_4 + -1 + (uint)bVar4;
        }
        else {
          if (CONCAT44(param_4,param_3) < lVar5) {
            lVar5 = CONCAT44(param_4,param_3);
          }
          _Size = (uint)lVar5;
          FID_conflict__memcpy(param_2,*(void **)param_1[8],_Size);
          puVar3 = param_2 + _Size;
          lVar1 = lVar5 + lVar1;
          bVar4 = param_3 < _Size;
          param_3 = param_3 - _Size;
          param_4 = (param_4 - (int)((ulonglong)lVar5 >> 0x20)) - (uint)bVar4;
          *(int *)param_1[0xc] = *(int *)param_1[0xc] - _Size;
          *(int *)param_1[8] = *(int *)param_1[8] + _Size;
        }
        param_2 = puVar3;
      } while (0 < param_4);
      if (param_4 < 0) break;
      if (param_3 == 0) {
        return lVar1;
      }
    }
    return lVar1;
  }
  return 0;
}

// 00E17EE0  std::basic_streambuf<char,std::char_traits<char>_>::vf24  size=219  [run]
/* WARNING: Removing unreachable block (ram,0x00e17f21) */
/* WARNING: Removing unreachable block (ram,0x00e17f2f) */

longlong __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::vf24
          (int *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint _Size;
  bool bVar3;
  longlong lVar4;
  
  if ((-1 < param_4) && ((lVar1 = 0, 0 < param_4 || (lVar1 = 0, param_3 != 0)))) {
    while( true ) {
      do {
        lVar4 = FUN_00e154e0();
        if (lVar4 < 1) {
          iVar2 = (**(code **)(*param_1 + 0xc))(*param_2);
          if (iVar2 == -1) {
            return lVar1;
          }
          param_2 = param_2 + 1;
          lVar1 = lVar1 + 1;
          bVar3 = param_3 != 0;
          param_3 = param_3 - 1;
          param_4 = param_4 + -1 + (uint)bVar3;
        }
        else {
          if (CONCAT44(param_4,param_3) < lVar4) {
            lVar4 = CONCAT44(param_4,param_3);
          }
          _Size = (uint)lVar4;
          FID_conflict__memcpy(*(void **)param_1[9],param_2,_Size);
          param_2 = param_2 + _Size;
          lVar1 = lVar4 + lVar1;
          bVar3 = param_3 < _Size;
          param_3 = param_3 - _Size;
          param_4 = (param_4 - (int)((ulonglong)lVar4 >> 0x20)) - (uint)bVar3;
          *(int *)param_1[0xd] = *(int *)param_1[0xd] - _Size;
          *(int *)param_1[9] = *(int *)param_1[9] + _Size;
        }
      } while (0 < param_4);
      if (param_4 < 0) break;
      if (param_3 == 0) {
        return lVar1;
      }
    }
    return lVar1;
  }
  return 0;
}

// 00E17FC0  std::basic_streambuf<char,std::char_traits<char>_>::vf28  size=35  [run]
void std::basic_streambuf<char,std::char_traits<char>_>::vf28(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00E17FF0  std::basic_streambuf<char,std::char_traits<char>_>::vf2C  size=35  [run]
void std::basic_streambuf<char,std::char_traits<char>_>::vf2C(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00E18050  std::basic_ostream<char,std::char_traits<char>_>::vf00  size=57  [run]
ios_base * __thiscall
std::basic_ostream<char,std::char_traits<char>_>::vf00(ios_base *param_1,byte param_2)

{
  ios_base *piVar1;
  
  piVar1 = param_1 + -8;
  *(undefined ***)(param_1 + *(int *)(*(int *)piVar1 + 4) + -8) = vftable;
  *(undefined ***)param_1 = ios_base::vftable;
  ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(piVar1);
  }
  return piVar1;
}

// 00E18090  std::basic_istream<char,std::char_traits<char>_>::vf00  size=57  [run]
ios_base * __thiscall
std::basic_istream<char,std::char_traits<char>_>::vf00(ios_base *param_1,byte param_2)

{
  ios_base *piVar1;
  
  piVar1 = param_1 + -0x10;
  *(undefined ***)(param_1 + *(int *)(*(int *)piVar1 + 4) + -0x10) = vftable;
  *(undefined ***)param_1 = ios_base::vftable;
  ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(piVar1);
  }
  return piVar1;
}

// 00E180D0  std::basic_streambuf<char,std::char_traits<char>_>::vf00  size=30  [run]
undefined4 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::vf00(undefined4 param_1,byte param_2)

{
  ~basic_streambuf<char,std::char_traits<char>_>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

