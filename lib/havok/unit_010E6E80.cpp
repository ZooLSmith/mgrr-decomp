// lib/havok/unit_010E6E80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010E6E80..010EC010, 243 functions

#include "types.h"

// 010E6E80  FUN_010e6e80  size=190  [run]
int FUN_010e6e80(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -1;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x18:
  case 0x1f:
  case 0x20:
  case 0x22:
    iVar1 = FUN_01016470();
    break;
  case 0x13:
    iVar1 = FUN_010e6e80(param_1,*(undefined1 *)(param_1 + 0xd),param_3);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x21:
    iVar1 = param_3;
    break;
  case 0x19:
    iVar1 = 1;
    FUN_010162f0();
    iVar3 = 0;
    iVar2 = FUN_01009570();
    if (0 < iVar2) {
      do {
        iVar2 = FUN_01009590(iVar3);
        iVar2 = FUN_010e6e80(iVar2,*(undefined1 *)(iVar2 + 0xc),param_3);
        if (iVar1 < iVar2) {
          iVar1 = iVar2;
        }
        iVar3 = iVar3 + 1;
        iVar2 = FUN_01009570();
      } while (iVar3 < iVar2);
    }
  }
  if (((*(ushort *)(param_1 + 0x10) & 0x180) != 0) &&
     (iVar2 = (uint)((*(ushort *)(param_1 + 0x10) & 0x180) == 0x100) * 8 + 8, iVar1 < iVar2)) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// 010E6F80  FUN_010e6f80  size=596  [run]
void FUN_010e6f80(int param_1,byte *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_1;
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,0);
  if (param_4 != 0) {
    local_c = FUN_01009570();
    param_1 = 0;
    if (0 < local_c) {
      do {
        iVar1 = FUN_010095d0(param_1);
        if (*(int *)(iVar1 + 4) != 0) {
          uVar2 = FUN_010162f0();
          iVar1 = FUN_01010120(uVar2);
          if (*(int *)(param_3 + 8) < iVar1) {
            uVar2 = FUN_010162f0(param_2,param_3,param_4);
            FUN_010e6f80(uVar2);
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < local_c);
    }
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = -0x80000000;
  FUN_0100a210(&PTR_vftable_018e9b8c,&local_1c,0x10,4);
  param_4 = iVar3;
  while (param_4 != 0) {
    FUN_010e74f0(&PTR_vftable_018e9b8c,0,&param_4);
    param_4 = FUN_010093b0();
  }
  local_10 = (uint)*param_2;
  uVar7 = 0;
  param_4 = 1;
  local_8 = 0;
  if (0 < local_18) {
    do {
      uVar4 = local_10;
      local_c = 0;
      iVar3 = FUN_01009480();
      if (0 < iVar3) {
        do {
          if ((int)uVar7 % (int)uVar4 != 0) {
            uVar7 = uVar7 + (uVar4 - (int)uVar7 % (int)uVar4);
          }
          uVar7 = uVar7 + uVar4;
          if ((int)param_4 < (int)uVar4) {
            param_4 = uVar4;
          }
          local_c = local_c + 1;
          iVar3 = FUN_01009480();
        } while (local_c < iVar3);
      }
      iVar1 = 0;
      iVar3 = FUN_010095e0();
      if (0 < iVar3) {
        do {
          iVar3 = FUN_010095f0(iVar1);
          if (((uVar7 == 0) && (local_8 != 0)) && (param_2[3] == 0)) {
            uVar7 = 1;
          }
          uVar4 = FUN_010e6e80(iVar3,*(undefined1 *)(iVar3 + 0xc),*param_2);
          if ((int)param_4 < (int)uVar4) {
            param_4 = uVar4;
          }
          if ((int)uVar7 % (int)uVar4 != 0) {
            uVar7 = uVar7 + (uVar4 - (int)uVar7 % (int)uVar4);
          }
          if (*(ushort *)(iVar3 + 0x12) != uVar7) {
            FUN_010e6ce0(uVar7);
          }
          iVar3 = FUN_010e6cf0(iVar3,param_2,*(undefined1 *)(iVar3 + 0xc));
          uVar7 = uVar7 + iVar3;
          iVar1 = iVar1 + 1;
          iVar3 = FUN_010095e0();
        } while (iVar1 < iVar3);
      }
      uVar4 = uVar7;
      if ((int)uVar7 % (int)param_4 != 0) {
        uVar4 = (param_4 - (int)uVar7 % (int)param_4) + uVar7;
      }
      uVar6 = uVar4;
      if (uVar4 == 0) {
        uVar6 = 1;
      }
      uVar5 = FUN_01009750();
      if (uVar5 != uVar6) {
        FUN_01009760(uVar6);
      }
      if (param_2[2] == 0) {
        uVar7 = uVar4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_18);
  }
  local_18 = 0;
  if (-1 < local_14) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_1c,local_14 * 4);
  }
  return;
}

// 010E71E0  FUN_010e71e0  size=49  [run]
void __thiscall FUN_010e71e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_2);
  if (*(int *)(param_3 + 8) < iVar1) {
    FUN_010e6f80(param_2,param_1,param_3,param_4);
  }
  return;
}

// 010E7220  FUN_010e7220  size=13  [run]
ushort __thiscall FUN_010e7220(ushort *param_1,ushort param_2)

{
  return *param_1 & param_2;
}

// 010E7260  FUN_010e7260  size=15  [run]
int __thiscall FUN_010e7260(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010E7290  FUN_010e7290  size=26  [run]
void __thiscall FUN_010e7290(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010E72C0  FUN_010e72c0  size=33  [run]
void FUN_010e72c0(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_3 + (int)param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010E72F0  FUN_010e72f0  size=15  [run]
void __thiscall FUN_010e72f0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x12) = param_2;
  return;
}

// 010E7320  FUN_010e7320  size=52  [run]
undefined4 __thiscall FUN_010e7320(int param_1,undefined4 param_2,int param_3)

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

// 010E7370  FUN_010e7370  size=149  [run]
void __thiscall
FUN_010e7370(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

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
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  FUN_01019bd0(*param_1 + (param_3 + param_6) * 4,*param_1 + (param_4 + param_3) * 4,
               ((iVar1 - param_3) - param_4) * 4);
  puVar3 = (undefined4 *)(*param_1 + param_3 * 4);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(param_5 + (int)puVar3);
      puVar3 = puVar3 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

// 010E7410  FUN_010e7410  size=25  [run]
void FUN_010e7410(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010E7430  FUN_010e7430  size=31  [run]
void __thiscall FUN_010e7430(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010E7450  FUN_010e7450  size=53  [run]
undefined4 __thiscall FUN_010e7450(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 010E7490  FUN_010e7490  size=61  [run]
void __thiscall FUN_010e7490(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E74D0  FUN_010e74d0  size=30  [run]
void FUN_010e74d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_010e7370(param_1,param_2,0,param_3,param_4);
  return;
}

// 010E74F0  FUN_010e74f0  size=26  [run]
void FUN_010e74f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010e74d0(param_1,param_2,param_3,1);
  return;
}

// 010E7510  FUN_010e7510  size=61  [run]
void __fastcall FUN_010e7510(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E7550  FUN_010e7550  size=25  [run]
void FUN_010e7550(undefined4 param_1,undefined4 param_2)

{
  FUN_010e74f0(&PTR_vftable_018e9b8c,param_1,param_2);
  return;
}

// 010E7570  FUN_010e7570  size=61  [run]
void __fastcall FUN_010e7570(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E75C0  hkClassPointerVtable::VtableRegistry::vf0C  size=3  [run]
void hkClassPointerVtable::VtableRegistry::vf0C(void)

{
  return;
}

// 010E75D0  hkClassPointerVtable::VtableRegistry::vf14  size=12  [run]
undefined4 hkClassPointerVtable::VtableRegistry::vf14(undefined4 *param_1)

{
  return *param_1;
}

// 010E75E0  hkTypeInfoRegistry::hkTypeInfoRegistry_4  size=115  [run]
undefined4 * __thiscall hkTypeInfoRegistry::hkTypeInfoRegistry_4(undefined4 *param_1,int param_2)

{
  int local_8;
  
  local_8 = ((uint)param_1 >> 8) << 8;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_01025830(local_8);
  local_8 = ((uint)param_1 >> 8) << 8;
  param_1[6] = 1;
  param_1[7] = 1;
  *param_1 = hkClassPointerVtable::TypeInfoRegistry::vftable;
  param_1[8] = 0;
  FUN_01025830(local_8);
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (param_1[8] != 0) {
    FUN_010060a0();
  }
  param_1[8] = param_2;
  return param_1;
}

// 010E7660  hkDynamicClassNameRegistry::hkDynamicClassNameRegistry_6  size=173  [run]
undefined4 * __thiscall
hkDynamicClassNameRegistry::hkDynamicClassNameRegistry_6(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int *piVar3;
  int local_8;
  
  uVar1 = (uint)param_1 >> 8;
  local_8 = uVar1 << 8;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = hkTypeInfoRegistry::vftable;
  FUN_01025830(local_8);
  local_8 = uVar1 << 8;
  param_1[6] = 1;
  param_1[7] = 1;
  *param_1 = hkClassPointerVtable::TypeInfoRegistry::vftable;
  param_1[8] = 0;
  FUN_01025830(local_8);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar3 = (int *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x1c);
  local_8 = uVar1 << 8;
  piVar3[1] = 0x1001c;
  *piVar3 = (int)vftable;
  piVar3[2] = 0;
  FUN_01025830(local_8);
  (**(code **)(*piVar3 + 0x28))(param_2);
  if (((int *)param_1[8] != (int *)0x0) && ((int *)param_1[8] != piVar3)) {
    FUN_010060a0();
  }
  param_1[8] = piVar3;
  return param_1;
}

// 010E7710  hkBaseObject::hkBaseObject_233  size=168  [run]
void __fastcall hkBaseObject::hkBaseObject_233(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  char local_5;
  
  *param_1 = hkClassPointerVtable::TypeInfoRegistry::vftable;
  uVar1 = FUN_010253c0();
  FUN_01025890(&local_5,uVar1);
  while (local_5 != '\0') {
    iVar2 = FUN_01025400(uVar1);
    if (iVar2 != 0) {
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(iVar2,0x18);
    }
    uVar1 = FUN_01025440(uVar1);
    FUN_01025890(&local_5,uVar1);
  }
  FUN_01025870();
  if (param_1[8] != 0) {
    FUN_010060a0();
  }
  param_1[8] = 0;
  FUN_01025870();
  *param_1 = vftable;
  return;
}

// 010E77C0  hkClassPointerVtable::TypeInfoRegistry::vf10  size=299  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
hkClassPointerVtable::TypeInfoRegistry::vf10(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  LPVOID pvVar6;
  undefined4 *puVar7;
  
  uVar1 = param_3;
  iVar2 = FUN_01015b90(param_3,"hkClass");
  if ((((iVar2 == 0) || (iVar2 = FUN_01015b90(uVar1,"hkClassMember"), iVar2 == 0)) ||
      (iVar2 = FUN_01015b90(uVar1,"hkClassEnum"), iVar2 == 0)) ||
     (iVar2 = FUN_01015b90(uVar1,"hkClassEnumItem"), iVar2 == 0)) {
    if ((_DAT_0209b868 & 1) == 0) {
      _DAT_0209b868 = _DAT_0209b868 | 1;
      _DAT_0209b850 = "dummyTypeInfo";
      _DAT_0209b854 = 0;
      _DAT_0209b858 = 0;
      _DAT_0209b85c = 0;
      _DAT_0209b860 = 0;
      _DAT_0209b864 = 0;
    }
    return (undefined4 *)&DAT_0209b850;
  }
  uVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(uVar1);
  pcVar4 = (char *)FUN_01009770((int)&param_3 + 3);
  if (*pcVar4 != '\0') {
    *param_2 = uVar3;
  }
  puVar5 = (undefined4 *)FUN_01025be0(uVar1,0);
  if (puVar5 != (undefined4 *)0x0) {
    return puVar5;
  }
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  puVar7 = (undefined4 *)(**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x18);
  puVar5 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *puVar7 = uVar1;
    puVar5 = puVar7;
  }
  FUN_01025470(uVar1,puVar5);
  return puVar5;
}

// 010E78F0  FUN_010e78f0  size=27  [run]
uint __fastcall FUN_010e78f0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010E7910  FUN_010e7910  size=9  [run]
void FUN_010e7910(void)

{
  FUN_01025470();
  return;
}

// 010E7920  FUN_010e7920  size=9  [run]
void FUN_010e7920(void)

{
  FUN_01025be0();
  return;
}

// 010E7940  FUN_010e7940  size=9  [run]
void FUN_010e7940(void)

{
  FUN_01025400();
  return;
}

// 010E7950  FUN_010e7950  size=9  [run]
void FUN_010e7950(void)

{
  FUN_01025440();
  return;
}

// 010E7960  FUN_010e7960  size=24  [run]
undefined4 FUN_010e7960(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 010E7980  FUN_010e7980  size=43  [run]
void __thiscall FUN_010e7980(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    if (*param_1 != param_2) {
      FUN_010060a0();
    }
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}

// 010E79B0  FUN_010e79b0  size=31  [run]
void FUN_010e79b0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010E79D0  FUN_010e79d0  size=39  [run]
void FUN_010e79d0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return;
}

// 010E7A00  FUN_010e7a00  size=38  [run]
void FUN_010e7a00(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010E7A30  FUN_010e7a30  size=37  [run]
void FUN_010e7a30(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010E7A60  hkClassPointerVtable::TypeInfoRegistry::vf00  size=52  [run]
int __thiscall hkClassPointerVtable::TypeInfoRegistry::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_233();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010E7AA0  FUN_010e7aa0  size=35  [run]
undefined4 __thiscall FUN_010e7aa0(int *param_1,int *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// 010E7AD0  FUN_010e7ad0  size=22  [run]
uint FUN_010e7ad0(uint *param_1,uint param_2)

{
  return (*param_1 >> 4) * -0x61c8864f & param_2;
}

// 010E7AF0  FUN_010e7af0  size=14  [run]
void FUN_010e7af0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}

// 010E7B00  FUN_010e7b00  size=16  [run]
bool FUN_010e7b00(int *param_1)

{
  return *param_1 != -1;
}

// 010E7B10  FUN_010e7b10  size=34  [run]
undefined4 FUN_010e7b10(int *param_1,int *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// 010E7B40  FUN_010e7b40  size=28  [run]
undefined4 __thiscall FUN_010e7b40(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)*param_1 + 0xc))(param_2,param_3);
  return param_2;
}

// 010E7B70  FUN_010e7b70  size=20  [run]
void __thiscall FUN_010e7b70(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010E7BB0  FUN_010e7bb0  size=65  [run]
undefined4 FUN_010e7bb0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 local_5;
  
  uVar1 = param_1;
  pcVar2 = (char *)FUN_01009770((int)&param_1 + 3);
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)FUN_010093e0(&local_5,uVar1);
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

// 010E7C00  FUN_010e7c00  size=138  [run]
undefined4 FUN_010e7c00(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  switch((&DAT_017d8f18)[param_2 * 4]) {
  case 1:
    return *(undefined4 *)(param_1 + 0xc + (uint)(byte)(&DAT_017d8f19)[param_2 * 4] * 4);
  default:
    return 0;
  case 4:
    uVar1 = FUN_010e16f0(*(undefined4 *)
                          (param_1 + 0xc + (uint)(byte)(&DAT_017d8f19)[param_2 * 4] * 4),
                         (&DAT_017d8f1a)[param_2 * 4]);
    return uVar1;
  case 5:
    if (param_3 != 0) {
      uVar1 = FUN_010e1290(param_3);
      uVar1 = FUN_010e1690(uVar1);
      return uVar1;
    }
switchD_010e7c14_caseD_7:
    uVar1 = FUN_010e1690(*(undefined4 *)(param_1 + 8));
    return uVar1;
  case 6:
    uVar1 = FUN_010e1290(param_3);
    return uVar1;
  case 7:
    goto switchD_010e7c14_caseD_7;
  }
}

// 010E7CB0  FUN_010e7cb0  size=215  [run]
void FUN_010e7cb0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch((&DAT_017d8f18)[param_2 * 4]) {
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0xc + (uint)(byte)(&DAT_017d8f19)[param_2 * 4] * 4);
    break;
  case 2:
    if (param_3 == 0x19) {
      uVar1 = FUN_010e1290(param_4);
    }
    else {
      uVar1 = FUN_010e7c00(param_1,param_3,param_4);
    }
    if (param_5 != 0) {
      uVar1 = FUN_010e16f0(uVar1,param_5);
    }
    FUN_010e16c0(uVar1);
    return;
  case 3:
    param_4 = 0;
    param_2 = param_3;
    goto LAB_010e7d6b;
  case 4:
    uVar1 = FUN_010e16f0(*(undefined4 *)
                          (param_1 + 0xc + (uint)(byte)(&DAT_017d8f19)[param_2 * 4] * 4),
                         (&DAT_017d8f1a)[param_2 * 4]);
    break;
  case 5:
    uVar1 = FUN_010e7c00(param_1,param_3,param_4);
    uVar1 = FUN_010e1690(uVar1);
    break;
  case 6:
  case 7:
LAB_010e7d6b:
    uVar1 = FUN_010e7c00(param_1,param_2,param_4);
  }
  if (param_5 != 0) {
    FUN_010e16f0(uVar1,param_5);
  }
  return;
}

// 010E7DB0  FUN_010e7db0  size=70  [run]
void FUN_010e7db0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    uVar1 = FUN_010093a0(param_5);
    FUN_010e7cb0(param_1,param_2,param_3,uVar1);
    return;
  }
  FUN_010e7cb0(param_1,param_2,param_3,0,param_5);
  return;
}

// 010E7E10  FUN_010e7e10  size=200  [run]
int FUN_010e7e10(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar5 = 0;
  local_8 = 0;
  local_c = 0;
  iVar2 = FUN_01009570();
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)FUN_01009590(iVar5);
      if (*(char *)(puVar3 + 3) == '\"') {
        (**(code **)(*(int *)*param_2 + 0xc))(&local_14,*puVar3);
        piVar4 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
        if (piVar4 != (int *)0x0) {
          *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
          piVar4[2] = piVar4[2] + 1;
        }
        iVar2 = (**(code **)(*piVar4 + 0x14))();
        iVar5 = FUN_01016520();
        local_8 = local_8 + (iVar5 * iVar2 + 0xfU & 0xfffffff0);
        *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
        piVar1 = piVar4 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*piVar4)(1);
        }
      }
      iVar5 = local_c + 1;
      local_c = iVar5;
      iVar2 = FUN_01009570();
    } while (iVar5 < iVar2);
    return local_8;
  }
  return 0;
}

// 010E7EE0  FUN_010e7ee0  size=52  [run]
undefined4 FUN_010e7ee0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_011147a0(param_1,param_2);
  uVar1 = FUN_01114e70();
  FUN_010e8700(&PTR_vftable_018e9b94);
  return uVar1;
}

// 010E7F20  FUN_010e7f20  size=57  [run]
undefined4 FUN_010e7f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_010ea480(param_2,1,param_4);
  uVar1 = FUN_010eab70(param_1,param_3);
  FUN_010ea500();
  return uVar1;
}

// 010E7F60  FUN_010e7f60  size=257  [run]
undefined4 FUN_010e7f60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 uVar4;
  int local_c;
  int local_8;
  
  iVar1 = FUN_010ea480(param_2,0,param_3);
  if (*param_1 == 0) {
    FUN_010ea500();
    return 0;
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x70);
  *(undefined2 *)(iVar3 + 4) = 0x70;
  iVar3 = hkPackfileData::hkPackfileData(*(undefined4 *)(iVar1 + 0x4c));
  if ((*(int *)(iVar1 + 0x50) != 0) && (*(int *)(iVar1 + 0x50) != iVar3)) {
    FUN_010060a0();
  }
  *(int *)(iVar1 + 0x50) = iVar3;
  FUN_010ea930(&local_c,param_1);
  if ((local_c != 0) && (local_8 != 0)) {
    FUN_010ea200(*(undefined4 *)(iVar1 + 0x50));
    uVar4 = FUN_010093a0();
    FUN_010f9a00(local_c,uVar4);
    uVar4 = *(undefined4 *)(iVar1 + 0x50);
    FUN_01006000();
    if (*(int *)(iVar1 + 0x50) != 0) {
      FUN_010060a0();
    }
    *(undefined4 *)(iVar1 + 0x50) = 0;
    FUN_010ea500();
    return uVar4;
  }
  if (*(int *)(iVar1 + 0x50) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(iVar1 + 0x50) = 0;
  FUN_010ea500();
  return 0;
}

// 010E8070  FUN_010e8070  size=49  [run]
void FUN_010e8070(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = DAT_0209b610;
  uVar2 = (**(code **)(*DAT_0209b610 + 0xc))();
  uVar2 = (**(code **)(*piVar1 + 0x10))(uVar2,param_2);
  FUN_010e7f20(param_1,uVar2);
  return;
}

// 010E80B0  FUN_010e80b0  size=35  [run]
void FUN_010e80b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*DAT_0209b610 + 0x10))(param_2);
  FUN_010e7f60(param_1,uVar1);
  return;
}

// 010E80E0  FUN_010e80e0  size=8  [run]
undefined4 FUN_010e80e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010E80F0  FUN_010e80f0  size=8  [run]
undefined4 FUN_010e80f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010E8120  FUN_010e8120  size=8  [run]
undefined4 FUN_010e8120(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010E8130  FUN_010e8130  size=8  [run]
undefined4 FUN_010e8130(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010E81C0  FUN_010e81c0  size=22  [run]
void __thiscall FUN_010e81c0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 010E81E0  FUN_010e81e0  size=18  [run]
bool FUN_010e81e0(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 010E8270  FUN_010e8270  size=15  [run]
int __thiscall FUN_010e8270(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010E82C0  FUN_010e82c0  size=15  [run]
int __thiscall FUN_010e82c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010E82D0  FUN_010e82d0  size=15  [run]
int __thiscall FUN_010e82d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010E8320  FUN_010e8320  size=31  [run]
void __thiscall FUN_010e8320(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + 4 + param_3 * 0x10);
  *param_2 = *(undefined4 *)(*param_1 + param_3 * 0x10);
  param_2[1] = uVar1;
  return;
}

// 010E8340  FUN_010e8340  size=32  [run]
void __thiscall FUN_010e8340(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + 0xc + param_3 * 0x10);
  *param_2 = *(undefined4 *)(*param_1 + 8 + param_3 * 0x10);
  param_2[1] = uVar1;
  return;
}

// 010E8360  FUN_010e8360  size=28  [run]
void __thiscall FUN_010e8360(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 8 + param_2 * 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0xc + param_2 * 0x10) = param_4;
  return;
}

// 010E8380  FUN_010e8380  size=40  [run]
void __thiscall FUN_010e8380(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(param_2 * 0x10 + *param_1);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 4;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 010E83B0  FUN_010e83b0  size=21  [run]
void __thiscall FUN_010e83b0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 010E83D0  FUN_010e83d0  size=159  [run]
void __thiscall
FUN_010e83d0(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_010e9560(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar3 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  iVar4 = uVar3 * 0x10;
  iVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_3) && (*(int *)(iVar1 + 4 + iVar4) == param_4)) {
        iVar2 = 0;
        goto LAB_010e8442;
      }
      uVar3 = uVar3 + 1 & param_1[2];
      iVar4 = uVar3 * 0x10;
    } while (*(int *)(iVar4 + iVar1) != -1);
    iVar2 = 1;
  }
LAB_010e8442:
  param_1[1] = param_1[1] + iVar2;
  *(uint *)(iVar1 + uVar3 * 0x10) = param_3;
  *(int *)(iVar1 + 4 + uVar3 * 0x10) = param_4;
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 8 + uVar3 * 0x10) = param_5;
  *(undefined4 *)(iVar1 + 0xc + uVar3 * 0x10) = param_6;
  return;
}

// 010E8470  FUN_010e8470  size=82  [run]
uint __thiscall FUN_010e8470(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    uVar3 = (param_2 >> 4) * -0x61c8864f & uVar1;
    puVar4 = (uint *)(uVar3 * 0x10 + *param_1);
    uVar2 = *puVar4;
    while (uVar2 != 0xffffffff) {
      if ((*puVar4 == param_2) && (puVar4[1] == param_3)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      puVar4 = (uint *)(uVar3 * 0x10 + *param_1);
      uVar2 = *puVar4;
    }
  }
  return uVar1 + 1;
}

// 010E84D0  FUN_010e84d0  size=120  [run]
undefined4 * __thiscall
FUN_010e84d0(int *param_1,undefined4 *param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar5 = (param_3 >> 4) * -0x61c8864f & uVar1;
    puVar6 = (uint *)(uVar5 * 0x10 + iVar2);
    uVar3 = *puVar6;
    while (uVar3 != 0xffffffff) {
      if ((*puVar6 == param_3) && (puVar6[1] == param_4)) {
        uVar4 = *(undefined4 *)(iVar2 + 0xc + uVar5 * 0x10);
        *param_2 = *(undefined4 *)(iVar2 + 8 + uVar5 * 0x10);
        param_2[1] = uVar4;
        return param_2;
      }
      uVar5 = uVar5 + 1 & uVar1;
      puVar6 = (uint *)(uVar5 * 0x10 + iVar2);
      uVar3 = *puVar6;
    }
  }
  *param_2 = param_5;
  param_2[1] = param_6;
  return param_2;
}

// 010E8550  FUN_010e8550  size=63  [run]
undefined4 __thiscall
FUN_010e8550(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_010e8470(param_2,param_3);
  if (iVar2 <= param_1[2]) {
    iVar1 = *param_1;
    *param_4 = *(undefined4 *)(iVar1 + 8 + iVar2 * 0x10);
    param_4[1] = *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x10);
    return 0;
  }
  return 1;
}

// 010E8590  FUN_010e8590  size=208  [run]
void __thiscall FUN_010e8590(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 0x10) = 0xffffffff;
  uVar5 = param_1[2];
  uVar2 = uVar5 + param_2 & uVar5;
  iVar1 = *(int *)(*param_1 + uVar2 * 0x10);
  while (iVar1 != -1) {
    uVar2 = uVar2 + uVar5 & uVar5;
    iVar1 = *(int *)(*param_1 + uVar2 * 0x10);
  }
  uVar3 = uVar2 + 1 & uVar5;
  uVar2 = param_2 + 1 & uVar5;
  iVar4 = uVar2 * 0x10;
  iVar1 = *(int *)(*param_1 + iVar4);
  while (iVar1 != -1) {
    uVar5 = (*(uint *)(*param_1 + iVar4) >> 4) * -0x61c8864f & uVar5;
    if ((((uVar2 < uVar3) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar2 || ((uVar5 <= param_2 && (uVar2 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar3 <= uVar5)))) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + param_2 * 0x10) = *(undefined4 *)(iVar1 + iVar4);
      *(undefined4 *)(iVar1 + 4 + param_2 * 0x10) = *(undefined4 *)(iVar1 + 4 + iVar4);
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 8 + param_2 * 0x10) = *(undefined4 *)(iVar1 + 8 + iVar4);
      *(undefined4 *)(iVar1 + 0xc + param_2 * 0x10) = *(undefined4 *)(iVar1 + 0xc + iVar4);
      *(undefined4 *)(iVar4 + *param_1) = 0xffffffff;
      param_2 = uVar2;
    }
    uVar5 = param_1[2];
    uVar2 = uVar2 + 1 & uVar5;
    iVar4 = uVar2 * 0x10;
    iVar1 = *(int *)(iVar4 + *param_1);
  }
  return;
}

// 010E8670  FUN_010e8670  size=88  [run]
void __thiscall FUN_010e8670(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int local_8;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    puVar2 = (uint *)*param_1;
    local_8 = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if (uVar3 != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *param_2 = 1;
  return;
}

// 010E86D0  FUN_010e86d0  size=37  [run]
void __fastcall FUN_010e86d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2] + 1;
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *param_1) = 0xffffffff;
      iVar1 = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 010E8700  FUN_010e8700  size=66  [run]
void __thiscall FUN_010e8700(undefined4 *param_1,int *param_2)

{
  FUN_010e86d0();
  if ((param_1[1] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(*param_1,(param_1[2] + 1) * 0x10);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 010E8750  FUN_010e8750  size=31  [run]
void __thiscall FUN_010e8750(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3 | 0x80000000;
  param_1[2] = param_4 + -1;
  return;
}

// 010E8770  FUN_010e8770  size=28  [run]
int FUN_010e8770(int param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 4;
}

// 010E8790  FUN_010e8790  size=54  [run]
void __thiscall FUN_010e8790(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 >> 4;
  *param_1 = param_2;
  param_1[1] = -0x80000000;
  param_1[2] = param_3 - 1;
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *param_1) = 0xffffffff;
      iVar1 = iVar1 + 0x10;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// 010E87D0  FUN_010e87d0  size=48  [run]
void __thiscall FUN_010e87d0(undefined4 *param_1,undefined4 *param_2)

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

// 010E8860  FUN_010e8860  size=63  [run]
int __thiscall FUN_010e8860(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 8);
    do {
      if ((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 2;
    } while (param_3 < param_4);
  }
  return -1;
}

// 010E88D0  FUN_010e88d0  size=18  [run]
int __thiscall FUN_010e88d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010E8930  FUN_010e8930  size=42  [run]
void __thiscall FUN_010e8930(int *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = *(undefined8 *)(iVar1 + 8 + param_3 * 0x18);
  param_2[1] = *(undefined8 *)(iVar1 + param_3 * 0x18 + 0x10);
  return;
}

// 010E8960  FUN_010e8960  size=38  [run]
void __thiscall FUN_010e8960(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*param_1 + 8 + param_2 * 0x18);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}

// 010E8990  FUN_010e8990  size=41  [run]
void __thiscall FUN_010e8990(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 0x18);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 6;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 010E89C0  FUN_010e89c0  size=21  [run]
void __thiscall FUN_010e89c0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 010E89E0  FUN_010e89e0  size=183  [run]
void __thiscall
FUN_010e89e0(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_010e9040(param_2,param_1[2] * 2 + 2);
  }
  iVar2 = *param_1;
  uVar4 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  iVar5 = uVar4 * 0x18;
  iVar3 = 1;
  if (*(int *)(iVar2 + iVar5) != -1) {
    do {
      if ((*(uint *)(iVar2 + iVar5) == param_3) && (*(int *)(iVar2 + 4 + iVar5) == param_4)) {
        iVar3 = 0;
        goto LAB_010e8a5a;
      }
      uVar4 = uVar4 + 1 & param_1[2];
      iVar5 = uVar4 * 0x18;
    } while (*(int *)(iVar5 + iVar2) != -1);
    iVar3 = 1;
  }
LAB_010e8a5a:
  param_1[1] = param_1[1] + iVar3;
  iVar3 = uVar4 * 0x18;
  *(uint *)(iVar2 + iVar3) = param_3;
  *(int *)(iVar2 + 4 + iVar3) = param_4;
  puVar1 = (undefined8 *)(iVar3 + 8 + *param_1);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  return;
}

// 010E8AA0  FUN_010e8aa0  size=82  [run]
uint __thiscall FUN_010e8aa0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar4 = (param_2 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0x18);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0x18);
      if ((*puVar5 == param_2) && (puVar5[1] == param_3)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0x18);
    }
  }
  return uVar1 + 1;
}

// 010E8B00  FUN_010e8b00  size=37  [run]
void __fastcall FUN_010e8b00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2] + 1;
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *param_1) = 0xffffffff;
      iVar1 = iVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 010E8B30  FUN_010e8b30  size=72  [run]
void __thiscall FUN_010e8b30(undefined4 *param_1,int *param_2)

{
  FUN_010e8b00();
  if ((param_1[1] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(*param_1,(param_1[2] * 3 + 3) * 8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 010E8B90  FUN_010e8b90  size=22  [run]
void __fastcall FUN_010e8b90(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010E8BB0  FUN_010e8bb0  size=40  [run]
void __thiscall FUN_010e8bb0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = param_2;
  return;
}

// 010E8C00  FUN_010e8c00  size=43  [run]
void __thiscall FUN_010e8c00(int *param_1,int param_2)

{
  if (*param_1 != 0) {
    if (*param_1 != param_2) {
      FUN_010060a0();
    }
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}

// 010E8CB0  FUN_010e8cb0  size=18  [run]
int __thiscall FUN_010e8cb0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010E8CD0  FUN_010e8cd0  size=19  [run]
undefined4 __thiscall FUN_010e8cd0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 8 + param_2 * 0xc);
}

// 010E8CF0  FUN_010e8cf0  size=161  [run]
void __thiscall
FUN_010e8cf0(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_010e8f70(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar3 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  iVar4 = uVar3 * 0xc;
  iVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_3) && (*(int *)(iVar1 + 4 + iVar4) == param_4)) {
        iVar2 = 0;
        goto LAB_010e8d66;
      }
      uVar3 = uVar3 + 1 & param_1[2];
      iVar4 = uVar3 * 0xc;
    } while (*(int *)(iVar4 + iVar1) != -1);
    iVar2 = 1;
  }
LAB_010e8d66:
  param_1[1] = param_1[1] + iVar2;
  iVar2 = uVar3 * 0xc;
  *(uint *)(iVar1 + iVar2) = param_3;
  *(int *)(iVar1 + 4 + iVar2) = param_4;
  *(undefined4 *)(iVar2 + 8 + *param_1) = param_5;
  return;
}

// 010E8DA0  FUN_010e8da0  size=82  [run]
uint __thiscall FUN_010e8da0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar4 = (param_2 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_2) && (puVar5[1] == param_3)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return uVar1 + 1;
}

// 010E8E00  FUN_010e8e00  size=96  [run]
undefined4 __thiscall FUN_010e8e00(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar4 = (param_2 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_2) && (puVar5[1] == param_3)) {
        return *(undefined4 *)(iVar2 + 8 + uVar4 * 0xc);
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return param_4;
}

// 010E8E60  FUN_010e8e60  size=213  [run]
void __thiscall FUN_010e8e60(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 0xc) = 0xffffffff;
  uVar6 = param_1[2];
  uVar4 = uVar6 + param_2 & uVar6;
  iVar1 = *(int *)(*param_1 + uVar4 * 0xc);
  while (iVar1 != -1) {
    uVar4 = uVar4 + uVar6 & uVar6;
    iVar1 = *(int *)(*param_1 + uVar4 * 0xc);
  }
  uVar5 = uVar4 + 1 & uVar6;
  uVar4 = param_2 + 1 & uVar6;
  iVar2 = uVar4 * 0xc;
  iVar1 = *(int *)(*param_1 + iVar2);
  while (iVar1 != -1) {
    iVar1 = *param_1;
    uVar6 = (*(uint *)(iVar1 + iVar2) >> 4) * -0x61c8864f & uVar6;
    if ((((uVar4 < uVar5) || (uVar6 <= param_2)) &&
        ((param_2 <= uVar4 || ((uVar6 <= param_2 && (uVar4 < uVar6)))))) &&
       ((uVar6 <= param_2 || (uVar5 <= uVar6)))) {
      iVar3 = param_2 * 0xc;
      *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar1 + iVar2);
      *(undefined4 *)(iVar3 + 4 + iVar1) = *(undefined4 *)(iVar1 + 4 + iVar2);
      *(undefined4 *)(iVar3 + 8 + *param_1) = *(undefined4 *)(*param_1 + 8 + iVar2);
      *(undefined4 *)(iVar2 + *param_1) = 0xffffffff;
      param_2 = uVar4;
    }
    uVar6 = param_1[2];
    uVar4 = uVar4 + 1 & uVar6;
    iVar2 = uVar4 * 0xc;
    iVar1 = *(int *)(iVar2 + *param_1);
  }
  return;
}

// 010E8F40  FUN_010e8f40  size=37  [run]
void __fastcall FUN_010e8f40(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2] + 1;
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *param_1) = 0xffffffff;
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 010E8F70  FUN_010e8f70  size=206  [run]
undefined4 __thiscall FUN_010e8f70(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  iVar5 = param_1[2] + 1;
  iVar3 = (**(code **)(*param_2 + 4))(param_3 * 0xc);
  if (iVar3 != 0) {
    *param_1 = iVar3;
    if (0 < param_3) {
      iVar4 = 0;
      iVar3 = param_3;
      do {
        *(undefined4 *)(iVar4 + *param_1) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1[1] = 0;
    param_1[2] = param_3 + -1;
    piVar6 = piVar2;
    param_3 = iVar5;
    if (0 < iVar5) {
      do {
        if (*piVar6 != -1) {
          FUN_010e8cf0(param_2,*piVar6,piVar6[1],piVar6[2]);
        }
        param_3 = param_3 + -1;
        piVar6 = piVar6 + 3;
      } while (param_3 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      (**(code **)(*param_2 + 8))(piVar2,iVar5 * 0xc);
    }
    return 0;
  }
  return 1;
}

// 010E9040  FUN_010e9040  size=228  [run]
undefined4 __thiscall FUN_010e9040(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  iVar5 = param_1[2] + 1;
  iVar3 = (**(code **)(*param_2 + 4))(param_3 * 0x18);
  if (iVar3 != 0) {
    *param_1 = iVar3;
    if (0 < param_3) {
      iVar4 = 0;
      iVar3 = param_3;
      do {
        *(undefined4 *)(iVar4 + *param_1) = 0xffffffff;
        iVar4 = iVar4 + 0x18;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1[1] = 0;
    param_1[2] = param_3 + -1;
    piVar6 = piVar2;
    param_3 = iVar5;
    if (0 < iVar5) {
      do {
        if (*piVar6 != -1) {
          FUN_010e89e0(param_2,*piVar6,piVar6[1],*(undefined8 *)(piVar6 + 2),
                       *(undefined8 *)(piVar6 + 4));
        }
        param_3 = param_3 + -1;
        piVar6 = piVar6 + 6;
      } while (param_3 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      (**(code **)(*param_2 + 8))(piVar2,iVar5 * 0x18);
    }
    return 0;
  }
  return 1;
}

// 010E9130  FUN_010e9130  size=25  [run]
void __thiscall FUN_010e9130(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 010E9150  FUN_010e9150  size=28  [run]
void __thiscall FUN_010e9150(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010E9170  FUN_010e9170  size=28  [run]
void __thiscall FUN_010e9170(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010E9190  FUN_010e9190  size=11  [run]
int FUN_010e9190(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010E91D0  FUN_010e91d0  size=29  [run]
void __thiscall FUN_010e91d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010E9200  FUN_010e9200  size=37  [run]
void FUN_010e9200(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010E9230  FUN_010e9230  size=63  [run]
void __fastcall FUN_010e9230(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x40);
  if (puVar3 < puVar3 + *(int *)(param_1 + 0x44) * 2) {
    do {
      uVar1 = *puVar3;
      puVar2 = (undefined4 *)FUN_01009990("hk.PostFinish");
      (**(code **)*puVar2)(uVar1);
      puVar3 = puVar3 + 2;
    } while (puVar3 < (undefined4 *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44) * 8));
  }
  return;
}

// 010E92B0  FUN_010e92b0  size=31  [run]
void FUN_010e92b0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010E92D0  FUN_010e92d0  size=39  [run]
void FUN_010e92d0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010E9320  FUN_010e9320  size=33  [run]
void FUN_010e9320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_010e83d0(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 010E9350  FUN_010e9350  size=31  [run]
void FUN_010e9350(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010E9370  FUN_010e9370  size=39  [run]
void FUN_010e9370(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010E93A0  FUN_010e93a0  size=37  [run]
void __thiscall FUN_010e93a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_010e8470(param_3,param_4);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010E93F0  FUN_010e93f0  size=18  [run]
int __thiscall FUN_010e93f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010E9410  FUN_010e9410  size=19  [run]
undefined4 __thiscall FUN_010e9410(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 8 + param_2 * 0xc);
}

// 010E9440  FUN_010e9440  size=49  [run]
void FUN_010e9440(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_010e89e0(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 010E94B0  FUN_010e94b0  size=52  [run]
undefined4 __thiscall FUN_010e94b0(int param_1,undefined4 param_2,int param_3)

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

// 010E9500  FUN_010e9500  size=28  [run]
undefined4 __thiscall FUN_010e9500(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010e8790(param_2,param_3);
  return param_1;
}

// 010E9520  FUN_010e9520  size=51  [run]
undefined4 __thiscall FUN_010e9520(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_010e8470(param_2,param_3);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_010e8590(iVar1);
    return 0;
  }
  return 1;
}

// 010E9560  FUN_010e9560  size=200  [run]
undefined4 __thiscall FUN_010e9560(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  iVar5 = param_1[2] + 1;
  iVar3 = (**(code **)(*param_2 + 4))(param_3 << 4);
  if (iVar3 != 0) {
    *param_1 = iVar3;
    if (0 < param_3) {
      iVar4 = 0;
      iVar3 = param_3;
      do {
        *(undefined4 *)(iVar4 + *param_1) = 0xffffffff;
        iVar4 = iVar4 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1[1] = 0;
    param_1[2] = param_3 + -1;
    piVar6 = piVar2;
    param_3 = iVar5;
    if (0 < iVar5) {
      do {
        if (*piVar6 != -1) {
          FUN_010e83d0(param_2,*piVar6,piVar6[1],piVar6[2],piVar6[3]);
        }
        param_3 = param_3 + -1;
        piVar6 = piVar6 + 4;
      } while (param_3 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      (**(code **)(*param_2 + 8))(piVar2,iVar5 * 0x10);
    }
    return 0;
  }
  return 1;
}

// 010E9650  FUN_010e9650  size=13  [run]
void __thiscall FUN_010e9650(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010E9660  FUN_010e9660  size=70  [run]
void __thiscall FUN_010e9660(undefined4 *param_1,int *param_2)

{
  FUN_010e8f40();
  if ((param_1[1] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(*param_1,(param_1[2] * 3 + 3) * 4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 010E96B0  FUN_010e96b0  size=37  [run]
void FUN_010e96b0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  FUN_010e8f70(param_1,iVar1);
  return;
}

// 010E96E0  FUN_010e96e0  size=25  [run]
void FUN_010e96e0(undefined4 param_1,undefined4 param_2)

{
  FUN_010e8e00(param_1,param_2,0xffffffff);
  return;
}

// 010E9700  FUN_010e9700  size=106  [run]
void __thiscall FUN_010e9700(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = FUN_010e8da0(param_2,param_3);
  iVar1 = *(int *)(param_1[3] + 8 + iVar5 * 0xc);
  FUN_010e8e60(iVar5);
  if (iVar1 != -1) {
    iVar5 = *param_1;
    iVar4 = iVar1 * 0xc;
    iVar2 = *(int *)(iVar4 + 8 + iVar5);
    iVar3 = iVar1;
    while (iVar2 != -1) {
      iVar3 = *(int *)(iVar5 + 8 + iVar4);
      iVar4 = iVar3 * 0xc;
      iVar2 = *(int *)(iVar5 + 8 + iVar4);
    }
    *(int *)(iVar5 + 8 + iVar3 * 0xc) = param_1[6];
    param_1[6] = iVar1;
  }
  return;
}

// 010E9770  FUN_010e9770  size=37  [run]
void FUN_010e9770(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  FUN_010e9040(param_1,iVar1);
  return;
}

// 010E97A0  FUN_010e97a0  size=29  [run]
void FUN_010e97a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010e8cf0(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 010E97C0  FUN_010e97c0  size=60  [run]
void __thiscall FUN_010e97c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E9800  FUN_010e9800  size=63  [run]
void __thiscall FUN_010e9800(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E9840  FUN_010e9840  size=63  [run]
void __thiscall FUN_010e9840(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E9880  FUN_010e9880  size=40  [run]
void FUN_010e9880(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010E98C0  FUN_010e98c0  size=64  [run]
void __thiscall FUN_010e98c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E9920  FUN_010e9920  size=252  [run]
void __thiscall FUN_010e9920(int param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  char *pcVar9;
  uint local_8;
  
  puVar6 = param_2;
  local_8 = 0;
  iVar8 = FUN_010e96e0(*param_2,param_2[1]);
  puVar7 = param_3;
  for (; iVar8 != -1; iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 8 + iVar8)) {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar8 = iVar8 * 0xc;
    puVar2 = *(undefined4 **)(iVar1 + iVar8);
    uVar3 = *(undefined4 *)(iVar1 + 4 + iVar8);
    *puVar2 = *(undefined4 *)param_3;
    if ((char)uVar3 != '\0') {
      puVar2[1] = *(undefined4 *)((int)param_3 + 4);
    }
    local_8 = local_8 + ((char)((uint)uVar3 >> 8) != '\0');
  }
  FUN_010e9700(*puVar6,puVar6[1]);
  uVar3 = *(undefined4 *)((int)puVar7 + 4);
  uVar5 = *puVar7;
  pcVar9 = (char *)FUN_01009770();
  if ((*pcVar9 == '\0') || (pcVar9 = (char *)FUN_010093e0((int)&param_2 + 3,uVar3), *pcVar9 == '\0')
     ) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  FUN_010e89e0(&PTR_vftable_018e9b94,*puVar6,puVar6[1],uVar5,
               CONCAT44(param_4,-(uint)bVar4 & local_8));
  return;
}

// 010E9A30  FUN_010e9a30  size=53  [run]
undefined4 __thiscall FUN_010e9a30(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 010E9A70  FUN_010e9a70  size=28  [run]
undefined4 __thiscall FUN_010e9a70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010e9500(param_2,param_3);
  return param_1;
}

// 010E9AA0  FUN_010e9aa0  size=21  [run]
void FUN_010e9aa0(undefined4 param_1)

{
  FUN_010e9770(&PTR_vftable_018e9b94,param_1);
  return;
}

// 010E9AC0  FUN_010e9ac0  size=21  [run]
void FUN_010e9ac0(undefined4 param_1)

{
  FUN_010e96b0(&PTR_vftable_018e9b94,param_1);
  return;
}

// 010E9AE0  FUN_010e9ae0  size=97  [run]
undefined4 __thiscall
FUN_010e9ae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4) * 2) {
    iVar1 = FUN_010e9560(param_2,*(int *)(param_1 + 8) * 2 + 2);
    *param_7 = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_7 = 0;
  }
  uVar2 = FUN_010e83d0(param_2,param_3,param_4,param_5,param_6);
  return uVar2;
}

// 010E9B50  FUN_010e9b50  size=128  [run]
void __thiscall
FUN_010e9b50(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_010e9560(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar2 = (param_3 >> 4) * -0x61c8864f;
  while ((uVar2 = uVar2 & param_1[2], *(uint *)(iVar1 + uVar2 * 0x10) != param_3 ||
         (*(int *)(iVar1 + 4 + uVar2 * 0x10) != param_4))) {
    if (*(int *)(iVar1 + uVar2 * 0x10) == -1) {
      *(uint *)(iVar1 + uVar2 * 0x10) = param_3;
      *(int *)(iVar1 + 4 + uVar2 * 0x10) = param_4;
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_5;
      *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_6;
      param_1[1] = param_1[1] + 1;
      return;
    }
    uVar2 = uVar2 + 1;
  }
  return;
}

// 010E9BD0  FUN_010e9bd0  size=37  [run]
void FUN_010e9bd0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  FUN_010e9560(param_1,iVar1);
  return;
}

// 010E9C00  FUN_010e9c00  size=67  [run]
void __thiscall FUN_010e9c00(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E9C50  FUN_010e9c50  size=27  [run]
void __fastcall FUN_010e9c50(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_010e8f40();
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}

// 010E9C70  FUN_010e9c70  size=60  [run]
void __fastcall FUN_010e9c70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E9CB0  FUN_010e9cb0  size=63  [run]
void __fastcall FUN_010e9cb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E9CF0  FUN_010e9cf0  size=63  [run]
void __fastcall FUN_010e9cf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E9D30  FUN_010e9d30  size=64  [run]
void __fastcall FUN_010e9d30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E9D70  FUN_010e9d70  size=31  [run]
void FUN_010e9d70(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
      }
      param_1 = param_1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010E9D90  FUN_010e9d90  size=299  [run]
void __thiscall FUN_010e9d90(int param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_1c;
  int iStack_18;
  short local_14;
  undefined2 uStack_10;
  undefined1 local_5;
  
  iVar5 = *(int *)(param_1 + 0x30);
  iVar4 = 0;
  if (-1 < iVar5) {
    piVar7 = *(int **)(param_1 + 0x28);
    do {
      if (*piVar7 != -1) break;
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 6;
    } while (iVar4 <= iVar5);
  }
  if (iVar4 <= iVar5) {
    do {
      uVar1 = *(undefined8 *)(*(int *)(param_1 + 0x28) + 8 + iVar4 * 0x18);
      iStack_18 = (int)((ulonglong)uVar1 >> 0x20);
      lVar2 = *(longlong *)(*(int *)(param_1 + 0x28) + iVar4 * 0x18 + 0x10);
      iVar5 = FUN_01009990("hk.PostFinish");
      local_1c = (int)uVar1;
      if (iVar5 != 0) {
        if (*(uint *)(param_1 + 0x44) == (*(uint *)(param_1 + 0x48) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x40),8);
        }
        piVar7 = (int *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44) * 8);
        *piVar7 = local_1c;
        piVar7[1] = iStack_18;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      }
      local_14 = (short)lVar2;
      if (0 < local_14) {
        if (lVar2 < 0) {
          uVar3 = FUN_01009750();
          *(undefined2 *)(local_1c + 4) = uVar3;
        }
        else {
          uStack_10 = (undefined2)((ulonglong)lVar2 >> 0x20);
          *(undefined2 *)(local_1c + 4) = uStack_10;
        }
        *(short *)(local_1c + 6) = local_14;
      }
      iVar5 = *param_2;
      uVar6 = FUN_010093a0();
      (**(code **)(iVar5 + 0x10))(local_1c,uVar6);
      FUN_01009770(&local_5);
      iVar5 = *(int *)(param_1 + 0x30);
      iVar4 = iVar4 + 1;
      if (iVar4 <= iVar5) {
        piVar7 = (int *)(*(int *)(param_1 + 0x28) + iVar4 * 0x18);
        do {
          if (*piVar7 != -1) break;
          iVar4 = iVar4 + 1;
          piVar7 = piVar7 + 6;
        } while (iVar4 <= iVar5);
      }
    } while (iVar4 <= iVar5);
  }
  return;
}

// 010E9ED0  FUN_010e9ed0  size=50  [run]
void __thiscall FUN_010e9ed0(int param_1,undefined4 *param_2)

{
  FUN_010e9c50();
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_010e8b00();
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

// 010E9F10  FUN_010e9f10  size=37  [run]
void FUN_010e9f10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_010e9ae0(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4,param_5);
  return;
}

// 010E9F40  FUN_010e9f40  size=33  [run]
void FUN_010e9f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_010e9b50(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 010E9F70  FUN_010e9f70  size=21  [run]
void FUN_010e9f70(undefined4 param_1)

{
  FUN_010e9bd0(&PTR_vftable_018e9b94,param_1);
  return;
}

// 010E9F90  FUN_010e9f90  size=68  [run]
void __thiscall FUN_010e9f90(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E9FE0  FUN_010e9fe0  size=51  [run]
undefined4 * __thiscall FUN_010e9fe0(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  if (param_2 != 0) {
    FUN_010e9770(&PTR_vftable_018e9b94,param_2);
  }
  return param_1;
}

// 010EA020  FUN_010ea020  size=51  [run]
undefined4 * __thiscall FUN_010ea020(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  if (param_2 != 0) {
    FUN_010e96b0(&PTR_vftable_018e9b94,param_2);
  }
  return param_1;
}

// 010EA060  FUN_010ea060  size=60  [run]
void __fastcall FUN_010ea060(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010EA0A0  FUN_010ea0a0  size=63  [run]
void __fastcall FUN_010ea0a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010EA0E0  FUN_010ea0e0  size=63  [run]
void __fastcall FUN_010ea0e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010EA120  FUN_010ea120  size=64  [run]
void __fastcall FUN_010ea120(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010EA160  FUN_010ea160  size=76  [run]
int __thiscall FUN_010ea160(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = *param_1 + param_1[1] * 0xc;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 010EA200  FUN_010ea200  size=248  [run]
void __thiscall FUN_010ea200(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar4 = *(int *)(param_1 + 0x30);
  iVar6 = 0;
  if (-1 < iVar4) {
    piVar5 = *(int **)(param_1 + 0x28);
    do {
      if (*piVar5 != -1) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar6 <= iVar4);
  }
  if (iVar6 <= iVar4) {
    do {
      uVar2 = *(undefined8 *)(*(int *)(param_1 + 0x28) + 8 + iVar6 * 0x18);
      uStack_14 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uVar3 = FUN_010093a0();
      local_18 = (undefined4)uVar2;
      FUN_010100a0(&PTR_vftable_018e9b94,local_18,uVar3);
      iVar4 = FUN_01009990("hk.PostFinish");
      if (iVar4 != 0) {
        if (*(uint *)(param_2 + 0x68) == (*(uint *)(param_2 + 0x6c) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_2 + 100),8);
        }
        puVar1 = (undefined4 *)(*(int *)(param_2 + 100) + *(int *)(param_2 + 0x68) * 8);
        *puVar1 = local_18;
        puVar1[1] = uStack_14;
        *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + 1;
      }
      iVar4 = *(int *)(param_1 + 0x30);
      iVar6 = iVar6 + 1;
      if (iVar6 <= iVar4) {
        piVar5 = (int *)(*(int *)(param_1 + 0x28) + iVar6 * 0x18);
        do {
          if (*piVar5 != -1) break;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (iVar6 <= iVar4);
      }
    } while (iVar6 <= iVar4);
  }
  return;
}

// 010EA300  FUN_010ea300  size=77  [run]
void __fastcall FUN_010ea300(undefined4 *param_1)

{
  FUN_010e9660(&PTR_vftable_018e9b94);
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010EA350  FUN_010ea350  size=120  [run]
void __fastcall FUN_010ea350(undefined4 *param_1)

{
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(param_1[3],param_1[5] * 8);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010EA3D0  FUN_010ea3d0  size=51  [run]
undefined4 * __thiscall FUN_010ea3d0(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  if (param_2 != 0) {
    FUN_010e9bd0(&PTR_vftable_018e9b94,param_2);
  }
  return param_1;
}

// 010EA430  FUN_010ea430  size=71  [run]
int __fastcall FUN_010ea430(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = *param_1 + param_1[1] * 0xc;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 010EA480  FUN_010ea480  size=115  [run]
undefined4 * __thiscall
FUN_010ea480(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[2] = 0x80000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x80000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x80000000;
  if (param_2 != 0) {
    FUN_01006000();
  }
  param_1[0x13] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = param_3;
  param_1[0x16] = param_4;
  return param_1;
}

// 010EA500  FUN_010ea500  size=262  [run]
void __fastcall FUN_010ea500(undefined4 *param_1)

{
  if (param_1[0x14] != 0) {
    FUN_010060a0();
  }
  param_1[0x14] = 0;
  if (param_1[0x13] != 0) {
    FUN_010060a0();
  }
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  if ((param_1[0x12] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x10],param_1[0x12] * 8);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  param_1[0xe] = 0;
  if ((param_1[0xf] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xd],param_1[0xf] * 8);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  FUN_010e8b30(&PTR_vftable_018e9b94);
  FUN_010e9660(&PTR_vftable_018e9b94);
  param_1[4] = 0;
  if ((param_1[5] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return;
}

// 010EA610  FUN_010ea610  size=88  [run]
uint __fastcall FUN_010ea610(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[6];
  if (uVar2 != 0xffffffff) {
    param_1[6] = *(int *)(*param_1 + 8 + uVar2 * 0xc);
    return uVar2;
  }
  uVar2 = param_1[1];
  if (uVar2 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = *param_1 + param_1[1] * 0xc;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  param_1[1] = param_1[1] + 1;
  return uVar2;
}

// 010EA670  FUN_010ea670  size=89  [run]
void __thiscall FUN_010ea670(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_010e8e00(param_2,param_3,0xffffffff);
  iVar3 = FUN_010ea610();
  puVar1 = (undefined4 *)(*param_1 + iVar3 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = uVar2;
  FUN_010e8cf0(&PTR_vftable_018e9b94,param_2,param_3,iVar3);
  return;
}

// 010EA6D0  FUN_010ea6d0  size=311  [run]
undefined4 __thiscall FUN_010ea6d0(int *param_1,int *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined8 local_c;
  
  if ((param_1[0x15] != 0) && (*(char *)((int)param_2 + 5) != '\0')) {
    iVar8 = 0;
    if (0 < param_1[0xe]) {
      piVar7 = (int *)param_1[0xd];
      do {
        if ((*piVar7 == *param_3) && (piVar7[1] == param_3[1])) {
          if (iVar8 != -1) {
            return 1;
          }
          break;
        }
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar8 < param_1[0xe]);
    }
  }
  iVar8 = FUN_010e8aa0(*param_3,param_3[1]);
  if (iVar8 <= param_1[0xc]) {
    iVar5 = param_1[10];
    iVar8 = iVar8 * 0x18;
    uVar2 = *(undefined8 *)(iVar5 + 8 + iVar8);
    uVar3 = *(undefined8 *)(iVar5 + 0x10 + iVar8);
    puVar6 = (undefined4 *)*param_2;
    iVar5 = param_2[1];
    local_14 = (undefined4)uVar2;
    *puVar6 = local_14;
    if ((char)iVar5 != '\0') {
      uStack_10 = (undefined4)((ulonglong)uVar2 >> 0x20);
      puVar6[1] = uStack_10;
    }
    cVar4 = *(char *)((int)param_2 + 5);
    puVar1 = (undefined8 *)(param_1[10] + 8 + iVar8);
    *puVar1 = uVar2;
    local_c._0_4_ = (int)uVar3;
    local_c = CONCAT44((int)((ulonglong)uVar3 >> 0x20),(int)local_c + (uint)(cVar4 != '\0'));
    puVar1[1] = local_c;
    return 0;
  }
  iVar8 = FUN_010ea670(*param_3,param_3[1],param_2);
  if ((iVar8 != 0) && (*(char *)((int)param_2 + 5) != '\0')) {
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
    }
    piVar7 = (int *)(*param_1 + param_1[1] * 8);
    if (piVar7 != (int *)0x0) {
      *piVar7 = *param_3;
      piVar7[1] = param_3[1];
    }
    param_1[1] = param_1[1] + 1;
  }
  return 0;
}

// 010EA810  FUN_010ea810  size=284  [run]
undefined4 __thiscall FUN_010ea810(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (0 < param_2[4]) {
    do {
      iVar7 = *(int *)(param_1 + 0x50);
      puVar1 = (undefined4 *)(param_2[3] + local_8 * 8);
      iVar6 = puVar1[1];
      if (iVar6 == -1) {
        uVar3 = *puVar1;
        piVar5 = (int *)(iVar7 + 0x34);
        if (*(uint *)(iVar7 + 0x38) == (*(uint *)(iVar7 + 0x3c) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar5,4);
        }
        *(undefined4 *)(*piVar5 + *(int *)(iVar7 + 0x38) * 4) = uVar3;
      }
      else {
        uVar3 = *puVar1;
        piVar5 = (int *)(iVar7 + 0x40);
        if (*(uint *)(iVar7 + 0x44) == (*(uint *)(iVar7 + 0x48) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar5,0xc);
        }
        puVar2 = (undefined8 *)(*piVar5 + *(int *)(iVar7 + 0x44) * 0xc);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(iVar6,uVar3);
          *(undefined4 *)(puVar2 + 1) = 6;
        }
      }
      piVar5[1] = piVar5[1] + 1;
      local_8 = local_8 + 1;
    } while (local_8 < param_2[4]);
  }
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar6 = 0;
    do {
      iVar4 = *param_2;
      local_c = *(undefined4 *)(iVar4 + 8 + iVar6);
      local_8._0_2_ =
           CONCAT11(*(undefined1 *)(iVar4 + iVar6 + 0xd),*(undefined1 *)(iVar4 + 0xc + iVar6));
      iVar4 = FUN_010ea6d0(&local_c,iVar4 + iVar6);
      if (iVar4 == 1) {
        return 1;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < param_2[1]);
  }
  return 0;
}

// 010EA930  FUN_010ea930  size=566  [run]
undefined4 * __thiscall FUN_010ea930(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  piVar3 = param_3;
  piVar2 = (int *)(**(code **)(*(int *)*param_3 + 8))();
  local_8 = (int *)(**(code **)(*piVar2 + 4))();
  local_28 = param_1[0x13];
  local_24 = param_1[0x15];
  local_48 = 0x80000000;
  local_3c = 0x80000000;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  local_40 = 0;
  FUN_0100a210(&PTR_vftable_018e9b8c,&local_50,0x20,0x10);
  local_10 = &local_18;
  local_18 = 0;
  local_14 = 0;
  local_c = CONCAT22(local_c._2_2_,0x101);
  local_20 = 0;
  local_1c = 0;
  if ((int *)*piVar3 == (int *)0x0) {
    piVar3 = &local_20;
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)*piVar3 + 4))(local_38);
  }
  local_30 = *piVar3;
  local_2c = piVar3[1];
  FUN_010ea6d0(&local_10,&local_30);
  iVar4 = param_1[1];
  do {
    if (iVar4 == 0) {
      *param_2 = local_18;
      param_2[1] = local_14;
LAB_010eab0a:
      FUN_010ea350();
      return param_2;
    }
    iVar4 = param_1[1];
    local_10 = *(undefined4 **)(*param_1 + -8 + iVar4 * 8);
    local_c = *(int *)(*param_1 + -4 + iVar4 * 8);
    if (local_10 != (undefined4 *)0x0) {
      if (param_1[0xe] == (param_1[0xf] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 0xd,8);
      }
      piVar3 = (int *)(param_1[0xd] + param_1[0xe] * 8);
      if (piVar3 != (int *)0x0) {
        *piVar3 = (int)local_10;
        piVar3[1] = local_c;
      }
      param_1[0xe] = param_1[0xe] + 1;
      iVar4 = *param_1;
      iVar1 = param_1[1];
      *(undefined4 *)(iVar4 + -8 + iVar1 * 8) = 0;
      *(undefined4 *)(iVar4 + -4 + iVar1 * 8) = 0;
      (**(code **)(*local_8 + 0x28))(&param_3,&local_10);
      FUN_011159e0(&local_20,&param_3,&local_50);
      if (local_20 != 0) {
        uVar5 = 0xffffffff;
        if (*(int *)(local_44 + -8 + local_40 * 8) == local_20) {
          uVar5 = *(undefined4 *)(local_44 + -4 + local_40 * 8);
        }
        FUN_010e9920(&local_10,&local_20,uVar5);
        FUN_01117880(local_20,&param_3,&local_50);
        iVar4 = FUN_010ea810(&local_50);
        if (iVar4 == 0) {
          local_40 = 0;
          local_4c = 0;
          if (param_1[0x16] != 0) {
            (**(code **)(*param_3 + 0x70))();
          }
          if (param_3 != (int *)0x0) {
            *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
            piVar3 = param_3 + 2;
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              (**(code **)*param_3)(1);
            }
          }
          goto LAB_010eaaf3;
        }
      }
      FUN_010e9c50();
      param_1[1] = 0;
      FUN_010e8b00();
      *param_2 = 0;
      param_2[1] = 0;
      if (param_3 != (int *)0x0) {
        *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
        piVar3 = param_3 + 2;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*param_3)(1);
          FUN_010ea350();
          return param_2;
        }
      }
      goto LAB_010eab0a;
    }
    param_1[1] = iVar4 + -1;
    param_1[0xe] = param_1[0xe] + -1;
LAB_010eaaf3:
    iVar4 = param_1[1];
  } while( true );
}

// 010EAB70  FUN_010eab70  size=250  [run]
undefined4 __thiscall FUN_010eab70(int param_1,undefined4 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c [2];
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x70);
  *(undefined2 *)(iVar2 + 4) = 0x70;
  iVar2 = hkPackfileData::hkPackfileData(0);
  if ((*(int *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x50) != iVar2)) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0x50) = iVar2;
  FUN_010ea930(local_c,param_2);
  if (local_c[0] == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x30) = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_010060a0();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    return 0;
  }
  FUN_010e9d90(param_3);
  FUN_010e9230();
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x18);
  *(undefined2 *)(iVar2 + 4) = 0x18;
  uVar3 = hkObjectResource::hkObjectResource(local_c);
  FUN_01119660(*(undefined4 *)(param_1 + 0x4c));
  FUN_01119690(param_3);
  iVar2 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return uVar3;
}

// 010EAC70  FUN_010eac70  size=216  [run]
undefined4 __thiscall FUN_010eac70(int param_1,int *param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  if (*param_2 == 0) {
    return 0;
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x70);
  *(undefined2 *)(iVar2 + 4) = 0x70;
  iVar2 = hkPackfileData::hkPackfileData(*(undefined4 *)(param_1 + 0x4c));
  if ((*(int *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x50) != iVar2)) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0x50) = iVar2;
  FUN_010ea930(&local_c,param_2);
  if ((local_c != 0) && (local_8 != 0)) {
    FUN_010ea200(*(undefined4 *)(param_1 + 0x50));
    uVar3 = FUN_010093a0();
    FUN_010f9a00(local_c,uVar3);
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    FUN_01006000();
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_010060a0();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    return uVar3;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return 0;
}

// 010EAD50  FUN_010ead50  size=18  [run]
void __thiscall FUN_010ead50(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 == 8;
  return;
}

// 010EAD70  FUN_010ead70  size=18  [run]
void __thiscall FUN_010ead70(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 == 1;
  return;
}

// 010EAD90  FUN_010ead90  size=18  [run]
void __thiscall FUN_010ead90(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 == 4;
  return;
}

// 010EADB0  FUN_010eadb0  size=18  [run]
void __thiscall FUN_010eadb0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 == 2;
  return;
}

// 010EADD0  FUN_010eadd0  size=18  [run]
void __thiscall FUN_010eadd0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = *param_1 == 5;
  return;
}

// 010EAE10  FUN_010eae10  size=23  [run]
undefined4 * __thiscall FUN_010eae10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)*param_1 + 0x10))();
  *param_2 = uVar1;
  return param_2;
}

// 010EAE30  FUN_010eae30  size=30  [run]
void __thiscall FUN_010eae30(undefined4 *param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)*param_1 + 0x58))(param_1[1],*param_2);
  return;
}

// 010EAE60  FUN_010eae60  size=21  [run]
bool __thiscall FUN_010eae60(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// 010EAE90  FUN_010eae90  size=14  [run]
void __thiscall FUN_010eae90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010EAEC0  _anon_75E1A8BC::InternedStringRefCounted::InternedStringRefCounted_2  size=32  [run]
void __thiscall
_anon_75E1A8BC::InternedStringRefCounted::InternedStringRefCounted_2
          (undefined4 *param_1,undefined4 *param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = *param_2;
  return;
}

// 010EAF00  FUN_010eaf00  size=226  [run]
void FUN_010eaf00(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if ((iVar4 != 8) && (iVar4 != 9)) {
    if (iVar4 == 5) {
      iVar4 = 0;
      if (0 < param_3) {
        do {
          FUN_01016050(param_2[iVar4 * 2]);
          param_2[iVar4 * 2] = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_3);
        return;
      }
    }
    else if (iVar4 == 6) {
      iVar4 = 0;
      if (0 < param_3) {
        do {
          piVar3 = (int *)param_2[iVar4 * 2];
          param_2[iVar4 * 2] = 0;
          if (piVar3 != (int *)0x0) {
            if (param_4 != 0) {
              (**(code **)(*piVar3 + 0x70))();
            }
            piVar1 = piVar3 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*piVar3)(1);
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_3);
        return;
      }
    }
    else if ((iVar4 == 7) && (iVar4 = 0, 0 < param_3)) {
      do {
        puVar2 = (undefined4 *)param_2[iVar4 * 2];
        param_2[iVar4 * 2] = 0;
        if (puVar2 != (undefined4 *)0x0) {
          piVar3 = puVar2 + 2;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            (**(code **)*puVar2)(1);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_3);
    }
    return;
  }
  puVar2 = (undefined4 *)*param_2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = puVar2 + 2;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_2 = 0;
  return;
}

// 010EAFF0  FUN_010eaff0  size=26  [run]
void __thiscall FUN_010eaff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010eaf00(param_2,param_1,1,param_3);
  return;
}

// 010EB020  FUN_010eb020  size=40  [run]
void __thiscall FUN_010eb020(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return;
}

// 010EB060  FUN_010eb060  size=13  [run]
void __thiscall FUN_010eb060(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

// 010EB070  ArrayOfTuplesImplementation::ArrayOfTuplesImplementation  size=56  [run]
void __thiscall
ArrayOfTuplesImplementation::ArrayOfTuplesImplementation
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[3] = param_2;
  param_1[5] = param_4;
  param_1[2] = 0;
  *param_1 = vftable;
  param_1[4] = param_3;
  param_1[6] = 0;
  if (param_3 != 0) {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  }
  return;
}

// 010EB0B0  ArrayOfTuplesImplementation::View::View  size=36  [run]
void __thiscall
ArrayOfTuplesImplementation::View::View(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  *param_1 = vftable;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}

// 010EB0E0  ArrayOfTuplesImplementation::View::vf04  size=14  [run]
undefined4 __fastcall ArrayOfTuplesImplementation::View::vf04(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 4))();
  return *(undefined4 *)(iVar1 + 4);
}

// 010EB0F0  ArrayOfTuplesImplementation::View::vf1C  size=10  [run]
void __fastcall ArrayOfTuplesImplementation::View::vf1C(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010eb0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
  return;
}

// 010EB100  ArrayOfTuplesImplementation::View::vf18  size=50  [run]
undefined4 __fastcall ArrayOfTuplesImplementation::View::vf18(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)(**(code **)(*param_1 + 4))();
  if (*piVar2 == 6) {
    iVar1 = **(int **)(param_1[3] + 0xc);
    uVar3 = FUN_010e0cd0();
    uVar3 = (**(code **)(iVar1 + 0x24))(uVar3);
    return uVar3;
  }
  return 0;
}

// 010EB140  ArrayOfTuplesImplementation::View::vf08  size=13  [run]
void __fastcall ArrayOfTuplesImplementation::View::vf08(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010eb14b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 8))();
  return;
}

// 010EB150  ArrayOfTuplesImplementation::View::vf0C  size=3  [run]
void ArrayOfTuplesImplementation::View::vf0C(void)

{
  return;
}

// 010EB160  ArrayOfTuplesImplementation::View::vf10  size=3  [run]
void ArrayOfTuplesImplementation::View::vf10(void)

{
  return;
}

// 010EB170  ArrayOfTuplesImplementation::View::vf14  size=17  [run]
void __fastcall ArrayOfTuplesImplementation::View::vf14(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 4))();
  FUN_010e0cc0();
  return;
}

// 010EB190  ArrayOfTuplesImplementation::View::vf8C  size=56  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf8C(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x50))
                (*(int *)(param_1 + 0x10) + iVar1,*(undefined1 *)(iVar1 + param_2));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

// 010EB1D0  ArrayOfTuplesImplementation::View::vf70  size=62  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf70(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x40))
                (*(int *)(param_1 + 0x10) + iVar1,*(undefined4 *)(param_2 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

// 010EB210  ArrayOfTuplesImplementation::View::vf80  size=55  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf80(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x50))
                (*(int *)(param_1 + 0x10) + iVar1,*(undefined4 *)(param_2 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}

// 010EB250  ArrayOfTuplesImplementation::View::vf20  size=8  [run]
undefined4 ArrayOfTuplesImplementation::View::vf20(void)

{
  return 1;
}

// 010EB260  ArrayOfTuplesImplementation::View::vf2C  size=29  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf2C(int param_1,int param_2)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x2c))
            (*(int *)(param_1 + 0x10) + param_2);
  return;
}

// 010EB280  ArrayOfTuplesImplementation::View::vf30  size=35  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf30(int param_1,int param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x30))
            (*(int *)(param_1 + 0x10) + param_2,param_3);
  return;
}

// 010EB2B0  ArrayOfTuplesImplementation::View::vf34  size=29  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf34(int param_1,int param_2)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x34))
            (*(int *)(param_1 + 0x10) + param_2);
  return;
}

// 010EB2D0  ArrayOfTuplesImplementation::View::vf38  size=35  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf38(int param_1,int param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x38))
            (*(int *)(param_1 + 0x10) + param_2,param_3);
  return;
}

// 010EB300  ArrayOfTuplesImplementation::View::vf3C  size=29  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf3C(int param_1,int param_2)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x3c))
            (*(int *)(param_1 + 0x10) + param_2);
  return;
}

// 010EB320  ArrayOfTuplesImplementation::View::vf40  size=40  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf40(int param_1,int param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x40))
            (*(int *)(param_1 + 0x10) + param_2,param_3);
  return;
}

// 010EB350  ArrayOfTuplesImplementation::View::vf4C  size=29  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf4C(int param_1,int param_2)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x4c))
            (*(int *)(param_1 + 0x10) + param_2);
  return;
}

// 010EB370  ArrayOfTuplesImplementation::View::vf50  size=35  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf50(int param_1,int param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x50))
            (*(int *)(param_1 + 0x10) + param_2,param_3);
  return;
}

// 010EB3A0  ArrayOfTuplesImplementation::View::vf54  size=29  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf54(int param_1,int param_2)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x54))
            (*(int *)(param_1 + 0x10) + param_2);
  return;
}

// 010EB3C0  ArrayOfTuplesImplementation::View::vf58  size=39  [run]
void __thiscall
ArrayOfTuplesImplementation::View::vf58
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x58))
            (*(int *)(param_1 + 0x10) + param_2,param_3,param_4);
  return;
}

// 010EB3F0  ArrayOfTuplesImplementation::View::vf5C  size=29  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf5C(int param_1,int param_2)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x5c))
            (*(int *)(param_1 + 0x10) + param_2);
  return;
}

// 010EB410  ArrayOfTuplesImplementation::View::vf60  size=35  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf60(int param_1,int param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x60))
            (*(int *)(param_1 + 0x10) + param_2,param_3);
  return;
}

// 010EB440  ArrayOfTuplesImplementation::View::vf64  size=29  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf64(int param_1,int param_2)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 100))
            (*(int *)(param_1 + 0x10) + param_2);
  return;
}

// 010EB460  ArrayOfTuplesImplementation::View::vf68  size=35  [run]
void __thiscall ArrayOfTuplesImplementation::View::vf68(int param_1,int param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x10) + 0x68))
            (*(int *)(param_1 + 0x10) + param_2,param_3);
  return;
}

// 010EB490  hkDataRefCounted::hkDataRefCounted_16  size=57  [run]
void __fastcall hkDataRefCounted::hkDataRefCounted_16(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[4];
  *param_1 = ArrayOfTuplesImplementation::vftable;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = vftable;
  return;
}

// 010EB4D0  FUN_010eb4d0  size=46  [run]
void __thiscall FUN_010eb4d0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}

// 010EB500  ArrayOfTuplesImplementation::vf04  size=37  [run]
void __fastcall ArrayOfTuplesImplementation::vf04(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(uVar1,uVar2);
  FUN_010e16f0(uVar1,uVar2);
  return;
}

// 010EB530  ArrayOfTuplesImplementation::vf1C  size=4  [run]
undefined4 __fastcall ArrayOfTuplesImplementation::vf1C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 010EB540  ArrayOfTuplesImplementation::vf18  size=43  [run]
undefined4 __fastcall ArrayOfTuplesImplementation::vf18(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)(**(code **)(*param_1 + 4))();
  if (*piVar2 == 6) {
    iVar1 = *(int *)param_1[3];
    uVar3 = FUN_010e0cd0();
    uVar3 = (**(code **)(iVar1 + 0x24))(uVar3);
    return uVar3;
  }
  return 0;
}

// 010EB570  ArrayOfTuplesImplementation::vf08  size=10  [run]
void __fastcall ArrayOfTuplesImplementation::vf08(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010eb578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 8))();
  return;
}

// 010EB580  ArrayOfTuplesImplementation::vf0C  size=27  [run]
void __thiscall ArrayOfTuplesImplementation::vf0C(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 0xc))(*(int *)(param_1 + 0x14) * param_2);
  return;
}

// 010EB5A0  ArrayOfTuplesImplementation::vf10  size=27  [run]
void __thiscall ArrayOfTuplesImplementation::vf10(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(*(int *)(param_1 + 0x14) * param_2);
  return;
}

// 010EB5C0  ArrayOfTuplesImplementation::vf14  size=19  [run]
int __fastcall ArrayOfTuplesImplementation::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))();
  return iVar1 / *(int *)(param_1 + 0x14);
}

// 010EB5E0  ArrayOfTuplesImplementation::vf20  size=8  [run]
undefined4 ArrayOfTuplesImplementation::vf20(void)

{
  return 1;
}

// 010EB640  hkDataWorldDict::vf1C  size=34  [run]
void __thiscall hkDataWorldDict::vf1C(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x30);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

// 010EB670  hkDataWorldDict::vf28  size=33  [run]
void hkDataWorldDict::vf28(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

// 010EB6A0  hkDataWorldDict::vf38  size=18  [run]
void hkDataWorldDict::vf38(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x14) = param_2;
  return;
}

// 010EB6C0  FUN_010eb6c0  size=20  [run]
undefined4 FUN_010eb6c0(int param_1)

{
  int in_EAX;
  
  if (param_1 <= *(int *)(in_EAX + 0x10)) {
    return *(undefined4 *)(in_EAX + 0xc);
  }
  return 0;
}

// 010EB6E0  hkDataWorldDict::vf18  size=16  [run]
void hkDataWorldDict::vf18(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}

// 010EB6F0  hkDataWorldDict::vf24  size=34  [run]
undefined4 hkDataWorldDict::vf24(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_01025be0(param_1,0);
    return uVar1;
  }
  return 0;
}

// 010EB720  hkDataWorldDict::vf44  size=118  [run]
void hkDataWorldDict::vf44(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *param_1;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_01025be0(param_2,0);
    if (iVar2 == 0) {
      iVar2 = FUN_01016080(param_2);
      FUN_01025470(iVar2,iVar2);
    }
  }
  iVar3 = *(int *)(iVar1 + 0x2c) + -1;
  if (-1 < iVar3) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x28) + iVar3 * 0x18);
    do {
      if (*piVar4 == iVar2) goto LAB_010eb782;
      piVar4 = piVar4 + -6;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = -1;
LAB_010eb782:
  *(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x14 + iVar3 * 0x18) = param_3;
  return;
}

// 010EB7A0  hkDataWorldDict::vf30  size=111  [run]
void hkDataWorldDict::vf30(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 8))();
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_01025be0(iVar1,0);
    if (iVar2 == 0) {
      iVar2 = FUN_01016080(iVar1);
      FUN_01025470(iVar2,iVar2);
    }
  }
  FUN_010e15a0(iVar2,param_2);
  FUN_010f0760(iVar2,param_2);
  return;
}

// 010EB810  hkDataWorldDict::vf20  size=12  [run]
void hkDataWorldDict::vf20(void)

{
  FUN_010f3120();
  return;
}

// 010EB820  hkDataWorldDict::vf40  size=206  [run]
void hkDataWorldDict::vf40(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  if (param_2 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)FUN_01025be0(param_2,0);
    if (param_1 == (int *)0x0) {
      param_1 = (int *)FUN_01016080(param_2);
      FUN_01025470(param_1,param_1);
    }
  }
  iVar3 = (**(code **)(*piVar2 + 0x20))(param_2);
  if (iVar3 != -1) {
    FUN_010f1cb0(param_1);
  }
  if (piVar2[0xb] == (piVar2[0xc] & 0x3fffffffU)) {
    FUN_0100a290(*(undefined4 *)(piVar2[3] + 0xc),piVar2 + 10,0x18);
  }
  piVar1 = (int *)(piVar2[10] + piVar2[0xb] * 0x18);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_1;
    piVar1[3] = 0;
    piVar1[2] = 0;
    piVar1[4] = param_3;
    piVar1[5] = param_4;
  }
  piVar2[0xb] = piVar2[0xb] + 1;
  return;
}

// 010EB8F0  hkDataWorldDict::vf48  size=481  [run]
void hkDataWorldDict::vf48(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = *param_1;
  if (param_2 == 0) {
    param_2 = 0;
    iVar2 = param_2;
  }
  else {
    iVar2 = FUN_01025be0(param_2,0);
    if (iVar2 == 0) {
      iVar2 = FUN_01016080(param_2);
      FUN_01025470(iVar2,iVar2);
    }
  }
  param_2 = iVar2;
  if (param_3 == 0) {
    param_3 = 0;
    iVar2 = param_3;
  }
  else {
    iVar2 = FUN_01025be0(param_3,0);
    if (iVar2 == 0) {
      iVar2 = FUN_01016080(param_3);
      FUN_01025470(iVar2,iVar2);
    }
  }
  param_3 = iVar2;
  local_24 = 0;
  local_20 = 0;
  local_1c = -0x80000000;
  uVar3 = (**(code **)(*(int *)*param_1 + 8))();
  local_20 = 0;
  FUN_010f31b0(uVar3,1,0,&local_24);
  iVar2 = local_c;
  iVar8 = 0;
  if (0 < local_20) {
    do {
      iVar1 = *(int *)(local_24 + iVar8 * 4);
      iVar5 = *(int *)(iVar1 + 0x14);
      iVar4 = 0;
      if (0 < iVar5) {
        piVar6 = *(int **)(iVar1 + 0x10);
        piVar7 = piVar6;
        do {
          if (*piVar7 == param_2) {
            piVar6[iVar4 * 4] = param_3;
            break;
          }
          iVar4 = iVar4 + 1;
          piVar7 = piVar7 + 4;
        } while (iVar4 < iVar5);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_20);
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = -0x80000000;
  FUN_010f3020(local_c,1,&local_18);
  iVar8 = 0;
  if (0 < local_14) {
    do {
      iVar2 = *(int *)(local_18 + iVar8 * 4);
      iVar1 = *(int *)(iVar2 + 0x10);
      iVar5 = 0;
      if (0 < iVar1) {
        piVar6 = *(int **)(iVar2 + 0xc);
        do {
          if (*piVar6 == param_2) {
            *piVar6 = param_3;
            break;
          }
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 2;
        } while (iVar5 < iVar1);
      }
      iVar8 = iVar8 + 1;
      iVar2 = local_c;
    } while (iVar8 < local_14);
  }
  iVar8 = *(int *)(iVar2 + 0x2c) + -1;
  if (-1 < iVar8) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x28) + iVar8 * 0x18);
    do {
      if (*piVar6 == param_2) goto LAB_010eba62;
      iVar8 = iVar8 + -1;
      piVar6 = piVar6 + -6;
    } while (-1 < iVar8);
  }
  iVar8 = -1;
LAB_010eba62:
  *(int *)(*(int *)(iVar2 + 0x28) + iVar8 * 0x18) = param_3;
  local_14 = 0;
  if (-1 < local_10) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_18,local_10 * 4);
  }
  local_18 = 0;
  local_20 = 0;
  local_10 = 0x80000000;
  if (-1 < local_1c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c * 4);
  }
  return;
}

// 010EBAE0  hkDataWorldDict::vf4C  size=539  [run]
void hkDataWorldDict::vf4C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  if (param_2 == 0) {
    param_2 = 0;
    iVar2 = param_2;
  }
  else {
    iVar2 = FUN_01025be0(param_2,0);
    if (iVar2 == 0) {
      iVar2 = FUN_01016080(param_2);
      FUN_01025470(iVar2,iVar2);
    }
  }
  param_2 = iVar2;
  iVar2 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = -0x80000000;
  uVar3 = (**(code **)(*(int *)*param_1 + 8))();
  local_1c = 0;
  FUN_010f31b0(uVar3,1,0,&local_20);
  if (0 < local_1c) {
    do {
      FUN_010f1fe0(param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_1c);
  }
  iVar2 = local_8;
  local_14 = 0;
  local_10 = 0;
  local_c = -0x80000000;
  FUN_010f3020(local_8,1,&local_14);
  param_1 = (int *)0x0;
  if (0 < local_10) {
    do {
      iVar5 = *(int *)(local_14 + (int)param_1 * 4);
      iVar7 = 0;
      if (0 < *(int *)(iVar5 + 0x10)) {
        piVar4 = *(int **)(iVar5 + 0xc);
        do {
          if (*piVar4 == param_2) {
            puVar6 = (undefined4 *)piVar4[1];
            piVar4 = puVar6 + 2;
            *piVar4 = *piVar4 + -1;
            if (*piVar4 == 0) {
              (**(code **)*puVar6)(1);
            }
            *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + -1;
            iVar1 = (*(int *)(iVar5 + 0x10) - iVar7) * 8;
            puVar6 = (undefined4 *)(*(int *)(iVar5 + 0xc) + iVar7 * 8);
            if (0 < iVar1) {
              iVar5 = (iVar1 - 1U >> 2) + 1;
              do {
                *puVar6 = puVar6[2];
                puVar6 = puVar6 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            break;
          }
          iVar7 = iVar7 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar7 < *(int *)(iVar5 + 0x10));
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < local_10);
  }
  iVar5 = *(int *)(iVar2 + 0x2c) + -1;
  if (-1 < iVar5) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x28) + iVar5 * 0x18);
    do {
      if (*piVar4 == param_2) goto LAB_010ebc38;
      piVar4 = piVar4 + -6;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = -1;
LAB_010ebc38:
  *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + -1;
  iVar7 = (*(int *)(iVar2 + 0x2c) - iVar5) * 0x18;
  puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x28) + iVar5 * 0x18);
  if (0 < iVar7) {
    iVar5 = (iVar7 - 1U >> 3) + 1;
    do {
      *puVar6 = puVar6[6];
      puVar6[1] = puVar6[7];
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  do {
    iVar5 = 0;
    if (0 < *(int *)(iVar2 + 0x2c)) {
      piVar4 = *(int **)(iVar2 + 0x28);
      do {
        if (*piVar4 == param_2) goto LAB_010ebc98;
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 6;
      } while (iVar5 < *(int *)(iVar2 + 0x2c));
    }
    iVar2 = *(int *)(iVar2 + 0x18);
  } while (iVar2 != 0);
LAB_010ebc98:
  local_10 = 0;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_14,local_c * 4);
  }
  local_14 = 0;
  local_1c = 0;
  local_c = 0x80000000;
  if (-1 < local_18) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,local_18 * 4);
  }
  return;
}

// 010EBD00  hkDataWorldDict::vf54  size=34  [run]
void hkDataWorldDict::vf54(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_010f31b0(param_1,0,1,param_2);
  return;
}

// 010EBD30  hkDataWorldDict::vf50  size=34  [run]
void hkDataWorldDict::vf50(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_010f31b0(param_1,1,1,param_2);
  return;
}

// 010EBD60  FUN_010ebd60  size=656  [run]
int * FUN_010ebd60(int *param_1,undefined4 *param_2,int param_3)

{
  LPVOID pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  switch(*param_2) {
  case 2:
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar2 + 4) = 0x20;
    piVar3 = (int *)ByteArrayImplementation::ByteArrayImplementation(param_1,param_2);
    return piVar3;
  case 3:
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar2 + 4) = 0x20;
    piVar3 = (int *)RealArrayImplementation::RealArrayImplementation(param_1,param_2);
    return piVar3;
  case 4:
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x30);
    *(undefined2 *)(iVar2 + 4) = 0x30;
    piVar3 = (int *)VariableIntArrayImplementation::VariableIntArrayImplementation(param_1);
    return piVar3;
  case 5:
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar2 + 4) = 0x20;
    piVar3 = (int *)CstringArrayImplementation::CstringArrayImplementation(param_1,param_2);
    return piVar3;
  case 6:
    iVar2 = *param_1;
    uVar4 = FUN_010e0cd0();
    iVar2 = (**(code **)(iVar2 + 0x24))(uVar4);
    if (iVar2 != 0) {
      pvVar1 = TlsGetValue(DAT_01f8fc4c);
      iVar6 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x28);
      *(undefined2 *)(iVar6 + 4) = 0x28;
      piVar3 = (int *)StructArrayImplementation::StructArrayImplementation
                                (param_1,param_2,iVar2,param_3);
      return piVar3;
    }
    break;
  case 7:
    iVar2 = FUN_010e0cd0();
    if (iVar2 != 0) {
      iVar2 = *param_1;
      uVar4 = FUN_010e0cd0();
      iVar2 = (**(code **)(iVar2 + 0x24))(uVar4);
      if (iVar2 == 0) {
        return (int *)0x0;
      }
    }
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar2 + 4) = 0x20;
    piVar3 = (int *)PointerArrayImplementation::PointerArrayImplementation(param_1,param_2);
    return piVar3;
  case 8:
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
    *(undefined2 *)(iVar2 + 4) = 0x20;
    piVar3 = (int *)ArrayArrayImplementation::ArrayArrayImplementation(param_1,param_2);
    (**(code **)(*piVar3 + 0x10))(param_3);
    iVar2 = 0;
    if (0 < param_3) {
      do {
        uVar4 = FUN_010ebd60(param_1,param_2[1],0);
        (**(code **)(*piVar3 + 0x68))(iVar2,uVar4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    return piVar3;
  case 9:
    if (*(int *)param_2[1] == 3) {
      pvVar1 = TlsGetValue(DAT_01f8fc4c);
      iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x20);
      *(undefined2 *)(iVar2 + 4) = 0x20;
      piVar3 = (int *)VecArrayImplementation::VecArrayImplementation(param_1,param_2);
      return piVar3;
    }
    uVar4 = FUN_010ebd60(param_1,(int *)param_2[1],0);
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1c);
    *(undefined2 *)(iVar2 + 4) = 0x1c;
    uVar5 = FUN_010e0cc0();
    piVar3 = (int *)ArrayOfTuplesImplementation::ArrayOfTuplesImplementation(param_1,uVar4,uVar5);
    return piVar3;
  }
  return (int *)0x0;
}

// 010EC010  hkDataWorldDict::vf14  size=111  [run]
undefined4 * __thiscall
hkDataWorldDict::vf14(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)(param_4 + 8);
  if (*piVar1 == 9) {
    uVar2 = FUN_010e0cc0();
  }
  else {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)FUN_010ebd60(param_1,piVar1[1],uVar2);
  piVar1 = (int *)*param_2;
  if (puVar3 != (undefined4 *)0x0) {
    *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + 1;
    puVar3[2] = puVar3[2] + 1;
  }
  (**(code **)(*piVar1 + 0x58))(param_3,puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  return puVar3;
}

