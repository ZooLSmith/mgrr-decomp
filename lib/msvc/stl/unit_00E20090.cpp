// lib/msvc/stl/unit_00E20090.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E20090..00E202B0, 2 functions

#include "mgrr.h"

// 00E20090  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf0C  size=536  [run]
void std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf0C
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
               undefined4 param_5,double param_6)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_88 [3];
  undefined1 local_85;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  char local_78;
  undefined1 local_77 [2];
  char local_75 [5];
  char local_70 [108];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_88;
  local_80 = param_1;
  iVar1 = *(int *)(param_4 + 0x1c);
  uVar5 = *(uint *)(param_4 + 0x18);
  if ((iVar1 < 1) && (((iVar1 < 0 || (uVar5 == 0)) && ((*(uint *)(param_4 + 0x14) & 0x2000) == 0))))
  {
    uVar5 = 6;
    iVar1 = 0;
  }
  local_84 = uVar5;
  if ((-1 < iVar1) && ((0 < iVar1 || (0x24 < uVar5)))) {
    local_84 = 0x24;
  }
  uVar6 = uVar5 - local_84;
  iVar1 = (iVar1 - ((int)local_84 >> 0x1f)) - (uint)(uVar5 < local_84);
  uVar5 = *(uint *)(param_4 + 0x14);
  uVar4 = 0;
  uVar7 = 0;
  if (((uVar5 & 0x3000) == 0x2000) && (param_6 != param_6 * 0.5)) {
    local_85 = param_6 < 0.0;
    if ((bool)local_85) {
      param_6 = -param_6;
    }
    if (!NAN(param_6) && 1e+35 < param_6 != (param_6 == 1e+35)) {
      do {
        if (4999 < uVar4) break;
        param_6 = param_6 / 10000000000.0;
        uVar4 = uVar4 + 10;
      } while (1e+35 < param_6 != (param_6 == 1e+35));
    }
    if ((0.0 < param_6) && (-1 < iVar1)) {
      if (0 < iVar1) goto LAB_00e201aa;
      while (9 < uVar6) {
LAB_00e201aa:
        do {
          if ((1e-35 < param_6) || (4999 < uVar7)) goto LAB_00e201d5;
          bVar8 = 9 < uVar6;
          uVar6 = uVar6 - 10;
          iVar1 = iVar1 + -1 + (uint)bVar8;
          param_6 = param_6 * 10000000000.0;
          uVar7 = uVar7 + 10;
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00e201d5:
    if ((bool)local_85) {
      param_6 = -param_6;
    }
  }
  local_78 = '%';
  puVar2 = (undefined2 *)local_77;
  if ((uVar5 & 0x20) != 0) {
    local_77[0] = 0x2b;
    puVar2 = (undefined2 *)(local_77 + 1);
  }
  if ((uVar5 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  uVar5 = uVar5 & 0x3000;
  *puVar2 = 0x2a2e;
  if (uVar5 == 0x2000) {
    cVar3 = 'f';
  }
  else if (uVar5 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = (uVar5 != 0x1000) * '\x02' + 'e';
  }
  *(char *)(puVar2 + 1) = cVar3;
  *(undefined1 *)((int)puVar2 + 3) = 0;
  iVar1 = _sprintf_s(local_70,0x6c,&local_78,local_84,param_6);
  FUN_00e1efc0(local_7c,local_80,param_2,param_3,param_4,param_5,local_70,uVar4,uVar7,uVar6,iVar1);
  __security_check_cookie(local_4 ^ (uint)auStack_88);
  return;
}

// 00E202B0  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf08  size=522  [run]
void std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf08
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
               undefined4 param_5,double param_6)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_88 [3];
  undefined1 local_85;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  char local_78;
  undefined1 local_77 [2];
  char local_75 [5];
  char local_70 [108];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_88;
  local_80 = param_1;
  iVar1 = *(int *)(param_4 + 0x1c);
  uVar5 = *(uint *)(param_4 + 0x18);
  if ((iVar1 < 1) && (((iVar1 < 0 || (uVar5 == 0)) && ((*(uint *)(param_4 + 0x14) & 0x2000) == 0))))
  {
    uVar5 = 6;
    iVar1 = 0;
  }
  local_84 = uVar5;
  if ((-1 < iVar1) && ((0 < iVar1 || (0x24 < uVar5)))) {
    local_84 = 0x24;
  }
  uVar6 = uVar5 - local_84;
  iVar1 = (iVar1 - ((int)local_84 >> 0x1f)) - (uint)(uVar5 < local_84);
  uVar5 = *(uint *)(param_4 + 0x14);
  uVar4 = 0;
  uVar7 = 0;
  if ((uVar5 & 0x3000) == 0x2000) {
    local_85 = param_6 < 0.0;
    if ((bool)local_85) {
      param_6 = -param_6;
    }
    if (!NAN(param_6) && 1e+35 < param_6 != (param_6 == 1e+35)) {
      do {
        if (4999 < uVar4) break;
        param_6 = param_6 / 10000000000.0;
        uVar4 = uVar4 + 10;
      } while (1e+35 < param_6 != (param_6 == 1e+35));
    }
    if ((0.0 < param_6) && (-1 < iVar1)) {
      if (0 < iVar1) goto LAB_00e203af;
      while (9 < uVar6) {
LAB_00e203af:
        do {
          if ((1e-35 < param_6) || (4999 < uVar7)) goto LAB_00e203da;
          bVar8 = 9 < uVar6;
          uVar6 = uVar6 - 10;
          iVar1 = iVar1 + -1 + (uint)bVar8;
          param_6 = param_6 * 10000000000.0;
          uVar7 = uVar7 + 10;
        } while (0 < iVar1);
        if (iVar1 < 0) break;
      }
    }
LAB_00e203da:
    if ((bool)local_85) {
      param_6 = -param_6;
    }
  }
  local_78 = '%';
  puVar2 = (undefined2 *)local_77;
  if ((uVar5 & 0x20) != 0) {
    local_77[0] = 0x2b;
    puVar2 = (undefined2 *)(local_77 + 1);
  }
  if ((uVar5 & 0x10) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  uVar5 = uVar5 & 0x3000;
  *puVar2 = 0x2a2e;
  *(undefined1 *)(puVar2 + 1) = 0x4c;
  if (uVar5 == 0x2000) {
    cVar3 = 'f';
  }
  else if (uVar5 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = (uVar5 != 0x1000) * '\x02' + 'e';
  }
  *(char *)((int)puVar2 + 3) = cVar3;
  *(undefined1 *)(puVar2 + 2) = 0;
  iVar1 = _sprintf_s(local_70,0x6c,&local_78,local_84,param_6);
  FUN_00e1efc0(local_7c,local_80,param_2,param_3,param_4,param_5,local_70,uVar4,uVar7,uVar6,iVar1);
  __security_check_cookie(local_4 ^ (uint)auStack_88);
  return;
}

