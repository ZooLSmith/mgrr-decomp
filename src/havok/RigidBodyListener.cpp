// src/havok/RigidBodyListener.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0091D730..009212F0, 15 functions

#include "types.h"

// 0091D730  RigidBodyListener::vf10  size=387  [class]
void RigidBodyListener::vf10(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *param_1;
  for (iVar7 = *(int *)(*param_1 + 0xc); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xc)) {
    iVar6 = iVar7;
  }
  if (*(char *)(iVar6 + 0x18) != '\x01') {
    return;
  }
  iVar6 = *(char *)(iVar6 + 0x10) + iVar6;
  if (iVar6 == 0) {
    return;
  }
  uVar5 = *(uint *)(iVar6 + 0xc);
  if (uVar5 != 0) {
    if (*(int *)((-(uint)(uVar5 != 0) & uVar5) + 0xa4) == 0) {
      return;
    }
    iVar7 = param_1[1];
    for (iVar3 = *(int *)(param_1[1] + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar7 = iVar3;
    }
    if (*(char *)(iVar7 + 0x18) == '\x01') {
      iVar7 = *(char *)(iVar7 + 0x10) + iVar7;
    }
    else {
      iVar7 = 0;
    }
    iVar3 = FUN_008f7780(iVar6);
    iVar4 = FUN_008f7780(iVar7);
    if (iVar4 == 0) {
      if (*(float *)(iVar7 + 0x124) < *(float *)(iVar3 + 0x44) ==
          (*(float *)(iVar7 + 0x124) == *(float *)(iVar3 + 0x44))) {
        return;
      }
      uVar5 = *(uint *)(iVar6 + 0xc);
      if (uVar5 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((-(uint)(uVar5 != 0) & uVar5) + 0xa0);
      }
      FUN_004066f0();
      uVar5 = -(uint)(*(uint *)(iVar6 + 0xc) != 0) & *(uint *)(iVar6 + 0xc);
      puVar1 = (uint *)(uVar5 + 4);
      *puVar1 = *puVar1 | 0x40;
      *(int *)(uVar5 + 0xa0) = iVar7 + 1;
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      if (*(float *)(iVar4 + 0x44) < *(float *)(iVar3 + 0x44) ==
          (*(float *)(iVar4 + 0x44) == *(float *)(iVar3 + 0x44))) {
        return;
      }
      uVar5 = *(uint *)(iVar6 + 0xc);
      if (uVar5 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((-(uint)(uVar5 != 0) & uVar5) + 0xa0);
      }
      FUN_004066f0();
      uVar5 = -(uint)(*(uint *)(iVar6 + 0xc) != 0) & *(uint *)(iVar6 + 0xc);
      puVar1 = (uint *)(uVar5 + 4);
      *puVar1 = *puVar1 | 0x40;
      *(int *)(uVar5 + 0xa0) = iVar7 + 1;
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar2 = (int *)(iVar6 + 4);
    *piVar2 = *piVar2 + -1;
    if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
    return;
  }
  return;
}

// 0091D8C0  RigidBodyListener::vf14  size=474  [class]
void __thiscall RigidBodyListener::vf14(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar7 = 0;
    do {
      *(undefined4 *)(*(int *)(iVar7 + 0x10 + *(int *)(param_1 + 0x20)) + 4) = 0;
      *(int *)(iVar7 + 8 + *(int *)(param_1 + 0x20)) = *(int *)(param_2 + 8) + 0x10;
      *(int *)(iVar7 + 0xc + *(int *)(param_1 + 0x20)) = *(int *)(param_2 + 0xc) + 0x10;
      iVar4 = *(int *)(param_1 + 0x20);
      (**(code **)(iVar4 + iVar7))(*(undefined4 *)(iVar4 + 4 + iVar7),iVar4 + 8 + iVar7);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x14;
    } while (iVar6 < *(int *)(param_1 + 0x24));
  }
  iVar6 = *(int *)(param_2 + 8);
  if (iVar6 == 0) {
    return;
  }
  uVar5 = *(uint *)(iVar6 + 0xc);
  if (uVar5 == 0) {
    return;
  }
  if (*(int *)((-(uint)(uVar5 != 0) & uVar5) + 0xa4) == 0) {
    return;
  }
  iVar6 = FUN_008f7780(iVar6);
  iVar7 = FUN_008f7780(*(undefined4 *)(param_2 + 0xc));
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_2 + 0xc);
    if (*(char *)(iVar7 + 0x28) != '\x01') {
      return;
    }
    iVar7 = (int)*(char *)(iVar7 + 0x20) + iVar7 + 0x10;
    if (iVar7 == 0) {
      return;
    }
    fVar3 = *(float *)(iVar7 + 0x124);
    if (fVar3 < *(float *)(iVar6 + 0x44) == (fVar3 == *(float *)(iVar6 + 0x44))) {
      return;
    }
    iVar6 = *(int *)(param_2 + 8);
    if (iVar6 == 0) {
      iVar7 = 0;
    }
    else {
      uVar5 = *(uint *)(iVar6 + 0xc);
      if (uVar5 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((-(uint)(uVar5 != 0) & uVar5) + 0xa0);
      }
    }
    if (iVar6 == 0) {
      return;
    }
    FUN_004066f0();
    uVar5 = -(uint)(*(uint *)(iVar6 + 0xc) != 0) & *(uint *)(iVar6 + 0xc);
    puVar1 = (uint *)(uVar5 + 4);
    *puVar1 = *puVar1 | 0x40;
    *(int *)(uVar5 + 0xa0) = iVar7 + -1;
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    if (*(float *)(iVar7 + 0x44) < *(float *)(iVar6 + 0x44) ==
        (*(float *)(iVar7 + 0x44) == *(float *)(iVar6 + 0x44))) {
      return;
    }
    iVar6 = *(int *)(param_2 + 8);
    if (iVar6 == 0) {
      iVar7 = 0;
    }
    else {
      uVar5 = *(uint *)(iVar6 + 0xc);
      if (uVar5 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((-(uint)(uVar5 != 0) & uVar5) + 0xa0);
      }
    }
    if (iVar6 == 0) {
      return;
    }
    FUN_004066f0();
    uVar5 = -(uint)(*(uint *)(iVar6 + 0xc) != 0) & *(uint *)(iVar6 + 0xc);
    puVar1 = (uint *)(uVar5 + 4);
    *puVar1 = *puVar1 | 0x40;
    *(int *)(uVar5 + 0xa0) = iVar7 + -1;
    if (DAT_01885d68 == 1) {
      return;
    }
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar2 = (int *)(iVar6 + 4);
  *piVar2 = *piVar2 + -1;
  if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
  return;
}

// 0091DAB0  RigidBodyListener::vf14  size=132  [class]
void __thiscall RigidBodyListener::vf14(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    FUN_004066f0();
    puVar2 = (uint *)(-(uint)(*(uint *)(param_2 + 0xc) != 0) & *(uint *)(param_2 + 0xc));
    *puVar2 = *puVar2 | 0x40000;
    puVar2[0x14] = 0;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  if ((int *)(param_1 + -4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0091db2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + -4) + 0xc))();
    return;
  }
  return;
}

// 0091DB40  RigidBodyListener::vf08  size=137  [class]
void __thiscall RigidBodyListener::vf08(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  
  if (*(short *)(param_2 + 6) == 1) {
    FUN_004066f0();
    puVar2 = (uint *)(-(uint)(*(uint *)(param_2 + 0xc) != 0) & *(uint *)(param_2 + 0xc));
    *puVar2 = *puVar2 | 0x40000;
    puVar2[0x14] = 0;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    if ((int *)(param_1 + -4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0091dbc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(param_1 + -4) + 0xc))();
      return;
    }
  }
  return;
}

// 0091DBD0  FUN_0091dbd0  size=64  [callgraph]
void __fastcall FUN_0091dbd0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0091DC10  FUN_0091dc10  size=86  [callgraph]
void __thiscall FUN_0091dc10(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x14);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0091DC90  FUN_0091dc90  size=64  [callgraph]
void __fastcall FUN_0091dc90(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0091DCD0  FUN_0091dcd0  size=61  [callgraph]
void __fastcall FUN_0091dcd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0091DDE0  FUN_0091dde0  size=134  [callgraph]
void __thiscall FUN_0091dde0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),0x30);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  puVar7 = (undefined4 *)(iVar1 * 0x30 + *(int *)(param_1 + 0x10));
  *puVar7 = *param_4;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  uVar2 = param_4[5];
  uVar3 = param_4[6];
  uVar4 = param_4[7];
  puVar7[4] = param_4[4];
  puVar7[5] = uVar2;
  puVar7[6] = uVar3;
  puVar7[7] = uVar4;
  iVar6 = *(int *)(param_2 + 0xc);
  iVar1 = param_2;
  while (iVar5 = iVar6, iVar5 != 0) {
    iVar1 = iVar5;
    iVar6 = *(int *)(iVar5 + 0xc);
  }
  puVar7[8] = iVar1;
  puVar7[9] = *(undefined4 *)(param_2 + 4);
  iVar6 = *(int *)(param_3 + 0xc);
  iVar1 = param_3;
  while (iVar5 = iVar6, iVar5 != 0) {
    iVar1 = iVar5;
    iVar6 = *(int *)(iVar5 + 0xc);
  }
  puVar7[10] = iVar1;
  puVar7[0xb] = *(undefined4 *)(param_3 + 4);
  return;
}

// 0091F3E0  RigidBodyListener::vf00  size=8  [class]
void RigidBodyListener::vf00(void)

{
  vf0C();
  return;
}

// 0091F420  hkpEntityListener::hkpEntityListener_5  size=999  [between]
void __fastcall hkpEntityListener::hkpEntityListener_5(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  int local_4;
  
  *param_1 = RigidBodyListener::vftable;
  param_1[1] = RigidBodyListener::vftable;
  FUN_00dd7270();
  FUN_0118fa20(param_1);
  FUN_01190160(param_1 + 1);
  param_1[0xe] = 0;
  local_4 = 0;
  if (0 < (int)param_1[3]) {
    iVar4 = 0;
    do {
      puVar1 = *(undefined4 **)(iVar4 + 0x10 + param_1[2]);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
        if (-1 < (int)puVar1[2]) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar1,puVar1[2] * 4);
        }
        *puVar1 = 0;
        puVar1[2] = 0x80000000;
        puVar1 = *(undefined4 **)(iVar4 + 0x10 + param_1[2]);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          if (-1 < (int)puVar1[2]) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar1,puVar1[2] * 4);
          }
          *puVar1 = 0;
          puVar1[2] = 0x80000000;
          pvVar3 = TlsGetValue(DAT_01f8fc4c);
          (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(puVar1,0xc);
          *(undefined4 *)(iVar4 + 0x10 + param_1[2]) = 0;
        }
      }
      local_4 = local_4 + 1;
      iVar4 = iVar4 + 0x14;
    } while (local_4 < (int)param_1[3]);
  }
  local_4 = 0;
  if (0 < (int)param_1[6]) {
    iVar4 = 0;
    do {
      puVar1 = *(undefined4 **)(iVar4 + 0x10 + param_1[5]);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
        if (-1 < (int)puVar1[2]) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar1,puVar1[2] * 4);
        }
        *puVar1 = 0;
        puVar1[2] = 0x80000000;
        puVar1 = *(undefined4 **)(iVar4 + 0x10 + param_1[5]);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          if (-1 < (int)puVar1[2]) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar1,puVar1[2] * 4);
          }
          *puVar1 = 0;
          puVar1[2] = 0x80000000;
          pvVar3 = TlsGetValue(DAT_01f8fc4c);
          (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(puVar1,0xc);
          *(undefined4 *)(iVar4 + 0x10 + param_1[5]) = 0;
        }
      }
      local_4 = local_4 + 1;
      iVar4 = iVar4 + 0x14;
    } while (local_4 < (int)param_1[6]);
  }
  local_4 = 0;
  if (0 < (int)param_1[9]) {
    iVar4 = 0;
    do {
      puVar1 = *(undefined4 **)(iVar4 + 0x10 + param_1[8]);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[1] = 0;
        if (-1 < (int)puVar1[2]) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar1,puVar1[2] * 4);
        }
        *puVar1 = 0;
        puVar1[2] = 0x80000000;
        puVar1 = *(undefined4 **)(iVar4 + 0x10 + param_1[8]);
        if (puVar1 != (undefined4 *)0x0) {
          puVar1[1] = 0;
          if (-1 < (int)puVar1[2]) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar1,puVar1[2] * 4);
          }
          *puVar1 = 0;
          puVar1[2] = 0x80000000;
          pvVar3 = TlsGetValue(DAT_01f8fc4c);
          (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(puVar1,0xc);
          *(undefined4 *)(iVar4 + 0x10 + param_1[8]) = 0;
        }
      }
      local_4 = local_4 + 1;
      iVar4 = iVar4 + 0x14;
    } while (local_4 < (int)param_1[9]);
  }
  uVar2 = param_1[4];
  param_1[3] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  uVar2 = param_1[7];
  param_1[6] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  uVar2 = param_1[10];
  param_1[9] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
    param_1[0xc] = 0;
  }
  if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd])(1);
    param_1[0xd] = 0;
  }
  FUN_00dd7270();
  uVar2 = param_1[10];
  param_1[9] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  uVar2 = param_1[7];
  param_1[6] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  uVar2 = param_1[4];
  param_1[3] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
  }
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  param_1[1] = vftable;
  *param_1 = hkpContactListener::vftable;
  return;
}

// 0091F810  RigidBodyListener::addCallback  size=198  [class]
void RigidBodyListener::addCallback(int *param_1,int param_2,int param_3)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iStack_10;
  int iStack_c;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    piVar4 = (int *)*param_1;
    do {
      if (*piVar4 == param_2) {
        FUN_00dd5650("RigidBodyListener::addCallback ERROR");
        return;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 5;
    } while (iVar1 < param_1[1]);
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0xc);
  puVar5 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0x80000000;
    puVar5 = puVar3;
  }
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x14);
  }
  piVar4 = (int *)(*param_1 + param_1[1] * 0x14);
  if (piVar4 != (int *)0x0) {
    *piVar4 = param_2;
    piVar4[1] = param_3;
    piVar4[2] = iStack_10;
    piVar4[3] = iStack_c;
    piVar4[4] = (int)puVar5;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0091F960  RigidBodyListener::vf1C  size=233  [class]
void __thiscall RigidBodyListener::vf1C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x10 + iVar3) + 4) = 0;
      piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x10 + iVar3);
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
      }
      *(undefined4 *)(*piVar1 + piVar1[1] * 4) = param_2[3];
      piVar1[1] = piVar1[1] + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 8 + iVar3) = *param_2;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc + iVar3) = param_2[1];
      iVar2 = *(int *)(param_1 + 0x14);
      (**(code **)(iVar2 + iVar3))(*(undefined4 *)(iVar2 + 4 + iVar3),iVar2 + 8 + iVar3);
      local_4 = local_4 + 1;
      iVar3 = iVar3 + 0x14;
    } while (local_4 < *(int *)(param_1 + 0x18));
  }
  iVar3 = param_2[1];
  if (*(char *)(iVar3 + 0x18) == '\x01') {
    iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
  }
  else {
    iVar3 = 0;
  }
  if (((*(int *)(param_1 + 0x30) != 0) && (iVar3 != 0)) &&
     ((iVar3 = FUN_008f7780(iVar3), iVar3 == 0 || ((*(byte *)(iVar3 + 0x4c8) & 2) == 0)))) {
    FUN_0091dde0(*param_2,param_2[1],param_2[3]);
  }
  return;
}

// 0091FA50  RigidBodyListener::contactProcessCallback  size=680  [class]
void __thiscall RigidBodyListener::contactProcessCallback(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  puVar1 = param_2;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  FUN_004066f0();
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x10 + iVar3) + 4) = 0;
      param_2 = (int *)puVar1[3];
      local_c = ((*param_2 - (int)param_2) + -0x10) / 0x30;
      if (0 < local_c) {
        param_2 = param_2 + 4;
        do {
          piVar4 = *(int **)(*(int *)(param_1 + 8) + 0x10 + iVar3);
          if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar4,4);
          }
          *(int **)(*piVar4 + piVar4[1] * 4) = param_2;
          piVar4[1] = piVar4[1] + 1;
          param_2 = param_2 + 0xc;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      *(undefined4 *)(*(int *)(param_1 + 8) + 8 + iVar3) = *puVar1;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xc + iVar3) = puVar1[1];
      iVar2 = *(int *)(param_1 + 8);
      (**(code **)(iVar2 + iVar3))(*(undefined4 *)(iVar2 + 4 + iVar3),iVar2 + 8 + iVar3);
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x14;
    } while (local_8 < *(int *)(param_1 + 0xc));
  }
  iVar3 = puVar1[1];
  if (*(char *)(iVar3 + 0x18) == '\x01') {
    param_2 = (int *)(*(char *)(iVar3 + 0x10) + iVar3);
  }
  else {
    param_2 = (int *)0x0;
  }
  if (((*(int *)(param_1 + 0x2c) != 0) && (param_2 != (int *)0x0)) &&
     ((iVar3 = FUN_008f7780(param_2), iVar3 == 0 || ((*(byte *)(iVar3 + 0x4c8) & 2) == 0)))) {
    piVar4 = (int *)puVar1[3];
    iVar2 = ((*piVar4 - (int)piVar4) + -0x10) / 0x30;
    if (0xff < iVar2) {
      FUN_00dd5650("RigidBodyListener::contactProcessCallback(pHit) need contact points %d.%x.0x%x",
                   iVar2,*(undefined4 *)(iVar3 + 0x4b0),param_2);
      iVar2 = 0x100;
    }
    if (0 < iVar2) {
      piVar4 = piVar4 + 4;
      do {
        FUN_0091dde0(*puVar1,puVar1[1],piVar4);
        piVar4 = piVar4 + 0xc;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar3 = puVar1[1];
  if (*(char *)(iVar3 + 0x18) == '\x02') {
    iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
  }
  else {
    iVar3 = 0;
  }
  if (((*(int *)(param_1 + 0x34) != 0) && ((param_2 != (int *)0x0 || (iVar3 != 0)))) &&
     (((iVar2 = FUN_008f7780(param_2), iVar2 == 0 && (iVar2 = FUN_008f7780(iVar3), iVar2 == 0)) ||
      ((*(byte *)(iVar2 + 0x4c8) & 2) == 0)))) {
    piVar4 = (int *)puVar1[3];
    iVar3 = ((*piVar4 - (int)piVar4) + -0x10) / 0x30;
    if (0x100 < iVar3) {
      FUN_00dd5650("RigidBodyListener::contactProcessCallback(pHitPhRb) need contact points %d.",
                   iVar3);
      iVar3 = 0x100;
    }
    if (0 < iVar3) {
      piVar4 = piVar4 + 4;
      do {
        FUN_0091dde0(*puVar1,puVar1[1],piVar4);
        piVar4 = piVar4 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (DAT_01885d68 != 1) {
    piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar4 = *piVar4 + -1;
    if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0091fcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  return;
}

// 009212F0  RigidBodyListener::vf0C  size=50  [class]
int __thiscall RigidBodyListener::vf0C(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkpEntityListener::hkpEntityListener_5();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x60);
  }
  return param_1;
}

