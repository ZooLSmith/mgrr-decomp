// src/misc/GroupFilterImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008FD540..008FE210, 24 functions

#include "types.h"

// 008FD540  GroupFilterImplement::GroupFilterImplement_2  size=46  [class]
undefined4 * __fastcall GroupFilterImplement::GroupFilterImplement_2(undefined4 *param_1)

{
  hkpGroupFilter::hkpGroupFilter();
  *param_1 = vftable;
  param_1[2] = vftable;
  param_1[3] = vftable;
  param_1[4] = vftable;
  param_1[5] = vftable;
  return param_1;
}

// 008FD580  FUN_008fd580  size=57  [between]
void __fastcall FUN_008fd580(int *param_1)

{
  FUN_00dd7270();
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
    param_1[1] = 0;
  }
  return;
}

// 008FD5E0  FUN_008fd5e0  size=59  [between]
void __fastcall FUN_008fd5e0(int param_1)

{
  FUN_00dd7270();
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 008FD620  FUN_008fd620  size=6  [between]
undefined4 FUN_008fd620(void)

{
  return DAT_01b35db8;
}

// 008FD630  GroupFilterImplement::vf00  size=8  [class]
void GroupFilterImplement::vf00(void)

{
  vf00();
  return;
}

// 008FD640  GroupFilterImplement::vf00  size=8  [class]
void GroupFilterImplement::vf00(void)

{
  vf00();
  return;
}

// 008FD650  GroupFilterImplement::vf0C  size=8  [class]
void GroupFilterImplement::vf0C(void)

{
  vf00();
  return;
}

// 008FD660  GroupFilterImplement::vf04  size=8  [class]
void GroupFilterImplement::vf04(void)

{
  vf00();
  return;
}

// 008FD690  HkSystemGroupManager::vf00  size=31  [between]
undefined4 * __thiscall HkSystemGroupManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FD6B0  hkpCollisionFilter::vf0C  size=3  [between]
void hkpCollisionFilter::vf0C(void)

{
  return;
}

// 008FD6C0  GroupFilterImplement::vf10  size=3  [class]
undefined4 GroupFilterImplement::vf10(void)

{
  return 0;
}

// 008FD730  FUN_008fd730  size=59  [between]
undefined4 __fastcall FUN_008fd730(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4);
  *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar1;
}

// 008FD780  FUN_008fd780  size=95  [between]
void FUN_008fd780(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_01b35db8;
  if (DAT_01b35db8 != (undefined4 *)0x0) {
    piVar1 = DAT_01b35db8 + 2;
    FUN_00dd7270();
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      FUN_00dd4940(iVar2);
      *piVar1 = 0;
    }
    iVar2 = puVar3[3];
    if (iVar2 != 0) {
      FUN_00dd4940(iVar2);
      puVar3[3] = 0;
    }
    if (DAT_01b35db8 != (undefined4 *)0x0) {
      (**(code **)*DAT_01b35db8)(1);
      DAT_01b35db8 = (undefined4 *)0x0;
    }
  }
  return;
}

// 008FD7E0  HkSystemGroupManagerImplement::vf04  size=84  [between]
int __thiscall HkSystemGroupManagerImplement::vf04(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0xf0000) != 0x90000) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    return iVar1;
  }
  return param_1 + 4;
}

// 008FD840  HkSystemGroupManagerImplement::vf08  size=67  [between]
void __thiscall HkSystemGroupManagerImplement::vf08(int param_1,int param_2)

{
  if ((param_2 != param_1 + 4) && (param_2 != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    *(int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4) = param_2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if (*(int *)(param_1 + 0x30) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
  }
  return;
}

// 008FD890  thunk_FUN_008fd780  size=5  [between]
void thunk_FUN_008fd780(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_01b35db8;
  if (DAT_01b35db8 != (undefined4 *)0x0) {
    piVar1 = DAT_01b35db8 + 2;
    FUN_00dd7270();
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      FUN_00dd4940(iVar2);
      *piVar1 = 0;
    }
    iVar2 = puVar3[3];
    if (iVar2 != 0) {
      FUN_00dd4940(iVar2);
      puVar3[3] = 0;
    }
    if (DAT_01b35db8 != (undefined4 *)0x0) {
      (**(code **)*DAT_01b35db8)(1);
      DAT_01b35db8 = (undefined4 *)0x0;
    }
  }
  return;
}

// 008FD8F0  GroupFilterImplement::GroupFilterImplement  size=1001  [class]
undefined4 GroupFilterImplement::GroupFilterImplement(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x100);
  if (puVar2 != (undefined4 *)0x0) {
    hkpGroupFilter::hkpGroupFilter();
    *puVar2 = vftable;
    puVar2[2] = vftable;
    puVar2[3] = vftable;
    puVar2[4] = vftable;
    puVar2[5] = vftable;
    FUN_01132380(0xfffffffe,0xfffffffe);
    FUN_01132310(4,4);
    FUN_01132310(4,0xb);
    FUN_01132310(4,1);
    FUN_01132310(2,1);
    FUN_01132310(2,0xb);
    FUN_01132310(3,3);
    FUN_01132310(3,6);
    FUN_01132310(3,7);
    FUN_01132310(3,0xd);
    FUN_01132310(3,0xb);
    FUN_01132310(3,1);
    FUN_01132310(3,0x14);
    FUN_01132310(6,7);
    FUN_01132310(6,0xb);
    FUN_01132310(6,1);
    FUN_01132310(6,0x14);
    FUN_01132310(7,7);
    FUN_01132310(7,0xb);
    FUN_01132310(7,0x14);
    FUN_01132310(7,1);
    FUN_01132310(0xd,0xd);
    FUN_01132310(0xd,0xb);
    FUN_01132310(0xd,0x14);
    FUN_01132310(0xd,1);
    FUN_01132310(5,0xb);
    FUN_01132310(5,1);
    FUN_01132310(0xc,0xb);
    FUN_01132310(0xc,1);
    FUN_01132310(0xc,0x14);
    FUN_01132310(0x19,0x19);
    FUN_01132310(0x19,0xb);
    FUN_01132310(0x19,1);
    FUN_01132310(0x19,0x14);
    FUN_01132310(0x19,8);
    FUN_01132310(0xb,0xb);
    FUN_01132310(0xb,1);
    FUN_01132310(8,8);
    FUN_01132310(8,3);
    FUN_01132310(8,6);
    FUN_01132310(8,7);
    FUN_01132310(8,0xb);
    FUN_01132310(8,1);
    FUN_01132310(8,0x14);
    FUN_01132310(10,10);
    FUN_01132310(10,8);
    FUN_01132310(10,3);
    FUN_01132310(10,6);
    FUN_01132310(10,7);
    FUN_01132310(10,0xb);
    FUN_01132310(10,1);
    FUN_01132310(10,0x14);
    FUN_01132310(0x10,6);
    FUN_01132310(0x1d,1);
    FUN_01132310(0x1d,0xb);
    FUN_01132310(0x1b,0x1b);
    FUN_01132310(0x1c,0x1c);
    FUN_01132310(0x1c,2);
    FUN_01132310(0x11,3);
    FUN_01132310(0x11,6);
    FUN_01132310(0x11,7);
    FUN_01132310(0x11,0xb);
    FUN_01132310(0x17,6);
    FUN_01132310(0x17,7);
    FUN_01132310(0x17,0xd);
    FUN_01132310(0x15,1);
    FUN_01132310(0x1e,1);
    FUN_01132310(0x1e,0xb);
    FUN_01132310(0x13,1);
    FUN_01132310(0x13,0xb);
    FUN_01132310(0x12,1);
    FUN_01132310(0xe,1);
    FUN_01132310(0xe,0xb);
    FUN_01132310(0xe,0xe);
    FUN_01132310(0xf,0xf);
    FUN_01132310(9,0x14);
    FUN_01132310(9,1);
    FUN_01132310(9,0xb);
    FUN_01132310(0x14,0x14);
    hkpNullCollisionFilter::hkpNullCollisionFilter(puVar2,1,0,1);
    FUN_010060a0();
    return 1;
  }
  FUN_00dd5650("groupFilter alloc error!!");
  return 0;
}

// 008FDCE0  GroupFilterImplement::vf00  size=53  [class]
int __thiscall GroupFilterImplement::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_98();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x100);
  }
  return param_1;
}

// 008FDE10  HkSystemGroupManagerImplement::vf0C  size=9  [between]
int __fastcall HkSystemGroupManagerImplement::vf0C(int param_1)

{
  return 0xffd - *(int *)(param_1 + 0x10);
}

// 008FDE20  HkSystemGroupManagerImplement::vf10  size=37  [between]
float10 __fastcall HkSystemGroupManagerImplement::vf10(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = 0xffd - *(int *)(param_1 + 0x10);
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return fVar2 * (float10)0.00024431958 * (float10)100.0;
}

// 008FDE50  HkSystemGroupManager::HkSystemGroupManager  size=19  [between]
void __fastcall HkSystemGroupManager::HkSystemGroupManager(undefined4 *param_1)

{
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}

// 008FDE70  HkSystemGroupManagerImplement::vf00  size=39  [between]
undefined4 * __thiscall HkSystemGroupManagerImplement::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00dd7270();
  *param_1 = HkSystemGroupManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008FDED0  GroupFilterImplement::vf04  size=819  [class]
void GroupFilterImplement::vf04(char *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  iVar2 = param_3;
  iVar1 = param_2;
  hkpGroupFilter::vf04(&param_2,param_2,param_3);
  uVar3 = *(uint *)(iVar1 + 0x24) & 0x1f;
  uVar6 = *(uint *)(iVar2 + 0x1c) & 0x1f;
  iVar4 = *(char *)(iVar2 + 0x10) + iVar2;
  if (iVar4 == 0) {
    local_10 = 0;
    local_18 = 0;
    local_14 = 0;
    iVar7 = iVar2;
  }
  else {
    uVar5 = *(uint *)(iVar4 + 0xc);
    iVar7 = param_3;
    if (uVar5 == 0) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
    }
    else {
      local_10 = *(uint *)((-(uint)(uVar5 != 0) & uVar5) + 8);
      local_18 = *(uint *)((-(uint)(uVar5 != 0) & uVar5) + 0x30);
      local_14 = *(int *)((-(uint)(uVar5 != 0) & uVar5) + 0x2c);
    }
  }
  local_c = 0;
  param_3 = 0;
  if ((*(uint *)(iVar1 + 0x24) & 0x8000) != 0) {
    local_c = *(uint *)(iVar1 + 0x30);
    param_3 = *(uint *)(iVar1 + 0x38);
    uVar5 = *(uint *)(iVar1 + 0x34);
    if ((((((((uVar5 & 2) != 0) && (uVar6 == 0x14)) ||
           (((uVar5 & 4) != 0 && (*(char *)(iVar7 + 0x18) == '\x02')))) ||
          ((((uVar5 & 8) != 0 && ((local_18 & 0x100) != 0)) ||
           (((uVar5 & 0x10) != 0 && ((char)local_18 < '\0')))))) ||
         (((uVar5 & 0x20) != 0 && (((uVar6 == 7 || (uVar6 == 8)) || (uVar6 == 0xf)))))) ||
        (((uVar5 & 0x40) != 0 && ((uVar6 == 6 || (uVar6 == 0x10)))))) ||
       (((char)uVar5 < '\0' && ((local_18 & 1) != 0)))) goto LAB_008fe04b;
  }
  uVar5 = *(uint *)(iVar2 + 0x1c) >> 0x10;
  if ((((*(ushort *)(iVar1 + 0x26) == 0) || (uVar5 == 0)) || (*(ushort *)(iVar1 + 0x26) != uVar5))
     && ((uVar3 != 0x1f && (uVar6 != 0x1f)))) {
    if (uVar3 == 0x14) {
      if ((local_14 == 0x1a) || (local_14 == 0x1b)) goto LAB_008fe19c;
      bVar8 = local_14 == 0x1c;
    }
    else {
      if (uVar3 == 0x1d) {
        if ((local_18 & 8) == 0) {
          if ((local_10 & 0x200000) != 0) {
LAB_008fe072:
            *param_1 = '\x01';
            return;
          }
          goto LAB_008fe19c;
        }
        goto LAB_008fe04b;
      }
      if (uVar3 != 0x13) {
        if (uVar3 == 10) {
          if (local_14 == 8) goto LAB_008fe072;
          if ((local_10 & 0x80000000) != 0) {
            *param_1 = '\x01';
            return;
          }
        }
        else {
          if (uVar3 == 0x1a) {
            if ((((*(char *)(iVar7 + 0x18) == '\x01') &&
                 (((local_18 & 0x20) == 0 || ((local_18 & 0x40000000) != 0)))) &&
                ((local_18 & 0x4000) == 0)) && ((local_18 & 0x8000) == 0)) {
              *param_1 = '\x01';
              return;
            }
            goto LAB_008fe04b;
          }
          if (uVar3 == 0x1b) {
            if ((local_18 & 0x40000000) != 0) {
              *param_1 = '\x01';
              return;
            }
          }
          else {
            if (uVar3 == 0x17) {
              if (((uVar6 != 0x14) && ((local_18 & 4) == 0)) && ((int)local_18 < 0)) {
                *param_1 = '\x01';
                return;
              }
              goto LAB_008fe04b;
            }
            if (uVar3 == 0x15) {
              if (((local_18 & 0x8000000) != 0) || ((local_18 & 0x4000) != 0)) goto LAB_008fe072;
              if ((param_3 != 0) && ((param_3 & 1 << (sbyte)uVar6) != 0)) {
                *param_1 = '\x01';
                return;
              }
            }
          }
        }
        goto LAB_008fe19c;
      }
      bVar8 = (local_18 & 1) == 0;
    }
    if (bVar8) {
LAB_008fe19c:
      if ((((((char)param_2 != '\0') && (local_c != 0)) && (iVar4 != 0)) &&
          ((uVar3 = *(uint *)(iVar4 + 0xc), uVar3 != 0 &&
           ((*(uint *)((-(uint)(uVar3 != 0) & uVar3) + 8) & 0x40) != 0)))) &&
         ((uVar3 != 0 && (uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0x10), uVar3 != 0)))) {
        *param_1 = (local_c & uVar3) != 0;
        return;
      }
      *param_1 = (char)param_2;
      return;
    }
  }
LAB_008fe04b:
  *param_1 = '\0';
  return;
}

// 008FE210  GroupFilterImplement::vf04  size=1505  [class]
void GroupFilterImplement::vf04(char *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char local_25 [5];
  uint local_20;
  uint local_1c;
  uint local_14;
  uint local_10;
  byte local_c;
  int local_8;
  int local_4;
  
  hkpGroupFilter::vf04(local_25,param_2,param_3);
  iVar2 = *(char *)(param_3 + 0x10) + param_3;
  uVar5 = *(uint *)(param_3 + 0x1c) & 0x1f;
  iVar6 = *(char *)(param_2 + 0x10) + param_2;
  uVar4 = *(uint *)(param_2 + 0x1c) & 0x1f;
  if (iVar6 == 0) {
    local_1c = 0;
  }
  else {
    uVar3 = *(uint *)(iVar6 + 0xc);
    if (uVar3 == 0) {
      local_1c = 0;
    }
    else {
      local_1c = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0x30);
    }
  }
  if (iVar2 == 0) {
    local_20 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 0xc);
    if (uVar3 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0x30);
    }
  }
  if (iVar6 == 0) {
    local_10 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar6 + 0xc);
    if (uVar3 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 8);
    }
  }
  if (iVar2 == 0) {
    local_14 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 0xc);
    if (uVar3 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 8);
    }
  }
  if (iVar6 == 0) {
    local_4 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar6 + 0xc);
    if (uVar3 == 0) {
      local_4 = 0;
    }
    else {
      local_4 = *(int *)((-(uint)(uVar3 != 0) & uVar3) + 0x2c);
    }
  }
  if (iVar2 == 0) {
    local_8 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar2 + 0xc);
    if (uVar3 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(int *)((-(uint)(uVar3 != 0) & uVar3) + 0x2c);
    }
  }
  if (iVar6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar6 + 0xc);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0xc);
    }
  }
  if (iVar2 == 0) {
    local_c = 0;
  }
  else {
    uVar1 = *(uint *)(iVar2 + 0xc);
    if (uVar1 == 0) {
      local_c = 0;
    }
    else {
      local_c = (byte)*(undefined4 *)((-(uint)(uVar1 != 0) & uVar1) + 0xc);
    }
  }
  if (((((((local_10 & 0x100) != 0) &&
         ((*(char *)(param_3 + 0x18) == '\x01' ||
          ((((local_10 & 0x4000) != 0 && (uVar5 != 0x1c)) && (uVar5 != 2)))))) ||
        (((local_14 & 0x100) != 0 &&
         ((*(char *)(param_2 + 0x18) == '\x01' ||
          ((((local_14 & 0x4000) != 0 && (uVar4 != 0x1c)) && (uVar4 != 2)))))))) ||
       ((((local_1c & 1) != 0 && ((uVar5 == 6 || (uVar5 == 0x10)))) ||
        (((local_20 & 1) != 0 && ((uVar4 == 6 || (uVar4 == 0x10)))))))) ||
      ((((local_1c & 2) != 0 &&
        ((((uVar5 == 7 || (uVar5 == 8)) || (uVar5 == 0xf)) ||
         (((uVar5 == 10 && (iVar6 != 0)) &&
          ((uVar1 = *(uint *)(iVar6 + 0xc), uVar1 != 0 &&
           (*(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x20) != 0)))))))) ||
       (((local_20 & 2) != 0 &&
        (((uVar4 == 7 || (uVar4 == 8)) ||
         ((uVar4 == 0xf ||
          ((((uVar4 == 10 && (iVar2 != 0)) && (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 != 0)) &&
           (*(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x20) != 0)))))))))))) ||
     ((((uVar3 & 2) != 0 && (uVar5 == 0x14)) &&
      ((uVar4 == 3 || (((uVar4 == 6 || (uVar4 == 7)) || ((uVar4 == 8 || (uVar4 == 5))))))))))
  goto LAB_008fe4d4;
  if (((local_c & 2) == 0) || (uVar4 != 0x14)) {
    if ((uVar4 == 0x1c) && ((uVar5 == 0xb && ((local_20 & 0x800000) != 0)))) goto LAB_008fe54b;
  }
  else if (((uVar5 == 3) || (((uVar5 == 6 || (uVar5 == 7)) || (uVar5 == 8)))) || (uVar5 == 5))
  goto LAB_008fe4d4;
  if ((((uVar3 & 8) == 0) || ((local_14 & 0x40000) == 0)) &&
     (((local_c & 8) == 0 || ((local_10 & 0x40000) == 0)))) {
    if ((((uVar4 != 0x1d) && (uVar4 != 0x13)) || ((local_20 & 8) == 0)) &&
       (((uVar5 != 0x1d && (uVar5 != 0x13)) || ((local_1c & 8) == 0)))) {
      if (uVar4 == 0x1d) {
        if ((local_14 & 0x200000) != 0) goto LAB_008fe54b;
      }
      else if ((uVar4 == 0x13) && ((local_20 & 1) != 0)) goto LAB_008fe4d4;
      if ((uVar5 != 0x13) || ((local_1c & 1) == 0)) {
        if ((local_1c & 0x100) != 0) {
          uVar3 = 0;
          if (iVar2 != 0) {
            uVar3 = *(uint *)(iVar2 + 0xc);
            if (uVar3 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0xa8);
            }
          }
          if ((uVar3 & 8) != 0) goto LAB_008fe4d4;
        }
        if ((local_20 & 0x100) != 0) {
          if (iVar6 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)(iVar6 + 0xc);
            if (uVar3 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0xa8);
            }
          }
          if ((uVar3 & 8) != 0) goto LAB_008fe4d4;
        }
        if ((local_1c & 0x80) != 0) {
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)(iVar2 + 0xc);
            if (uVar3 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0xa8);
            }
          }
          if ((uVar3 & 0x10) != 0) goto LAB_008fe4d4;
        }
        if ((char)local_20 < '\0') {
          if (iVar6 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)(iVar6 + 0xc);
            if (uVar3 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0xa8);
            }
          }
          if ((uVar3 & 0x10) != 0) goto LAB_008fe4d4;
        }
        if ((*(char *)(param_2 + 0x18) == '\x02') && (*(char *)(param_3 + 0x18) == '\x02')) {
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)(iVar2 + 0xc);
            if (uVar3 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0xa8);
            }
          }
          if ((uVar3 & 4) != 0) goto LAB_008fe4d4;
          if (iVar6 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)(iVar6 + 0xc);
            if (uVar3 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0xa8);
            }
          }
          if ((uVar3 & 4) != 0) goto LAB_008fe4d4;
        }
        if (uVar4 == 0x11) {
          if ((local_20 & 0x10000) == 0) {
            *param_1 = '\0';
            return;
          }
        }
        else if ((uVar4 == 10) && ((local_8 == 8 || ((local_14 & 0x80000000) != 0))))
        goto LAB_008fe54b;
        if (((uVar5 == 10) && ((local_4 == 8 || ((local_10 & 0x80000000) != 0)))) ||
           ((uVar4 == 6 && ((uVar5 == 0x1c && ((local_20 & 0x4000000) != 0)))))) goto LAB_008fe54b;
        if ((((local_20 & 0x8000) == 0) ||
            (((iVar6 == 0 || (uVar4 = *(uint *)(iVar6 + 0xc), uVar4 == 0)) ||
             ((*(uint *)((-(uint)(uVar4 != 0) & uVar4) + 8) & 4) == 0)))) &&
           (((((local_20 & 0x80000) == 0 || (iVar6 == 0)) ||
             (uVar4 = *(uint *)(iVar6 + 0xc), uVar4 == 0)) ||
            ((*(uint *)((-(uint)(uVar4 != 0) & uVar4) + 8) & 8) == 0)))) {
          if (((local_25[0] != '\0') && (iVar6 != 0)) &&
             ((uVar4 = *(uint *)(iVar6 + 0xc), uVar4 != 0 &&
              (((((*(uint *)((-(uint)(uVar4 != 0) & uVar4) + 8) & 0x40) != 0 && (iVar2 != 0)) &&
                (uVar5 = *(uint *)(iVar2 + 0xc), uVar5 != 0)) &&
               ((*(uint *)((-(uint)(uVar5 != 0) & uVar5) + 8) & 0x40) != 0)))))) {
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = *(uint *)((-(uint)(uVar4 != 0) & uVar4) + 0x10);
            }
            if (uVar5 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(uint *)((-(uint)(uVar5 != 0) & uVar5) + 0x10);
            }
            if ((uVar3 != 0) && (uVar4 != 0)) {
              *param_1 = (uVar3 & uVar4) != 0;
              return;
            }
          }
          *param_1 = local_25[0];
          return;
        }
      }
    }
LAB_008fe4d4:
    *param_1 = '\0';
    return;
  }
LAB_008fe54b:
  *param_1 = '\x01';
  return;
}

