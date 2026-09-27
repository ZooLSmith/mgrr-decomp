// src/misc/esp26.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8860..00F40900, 6 functions

#include "mgrr.h"
#include "esp26.h"

// 00ED8860  esp26::vf10  size=1  [class]
void esp26::vf10(void)

{
  return;
}

// 00ED8870  esp26::vf1C  size=3  [class]
void esp26::vf1C(void)

{
  return;
}

// 00F18C70  esp26::esp26  size=65  [class]
undefined4 * __fastcall esp26::esp26(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0x3f800000;
  _memset(param_1 + 0x118,0,0x60);
  return param_1;
}

// 00F18CC0  esp26::vf08  size=669  [class]
void __fastcall esp26::vf08(int param_1)

{
  int iVar1;
  undefined1 *puStack_108;
  undefined4 *puStack_104;
  undefined1 *puStack_100;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint uStack_38;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&uStack_e4;
  FUN_00edfc20();
  FUN_00f0b530();
  if (*(int *)(param_1 + 0x50) == 0) {
    *(int *)(param_1 + 0x3a0) = 0;
  }
  else {
    *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130();
  FUN_00efbd40();
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x100);
  *(float *)(param_1 + 0x49c) = *(float *)(*(int *)(param_1 + 0x24) + 0x14c) * -0.01;
  if (*(int *)(param_1 + 0x50) == 0) {
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_9c = 0;
    local_64 = 0x3f800000;
    local_78 = 0x3f800000;
    local_8c = 0x3f800000;
    local_a0 = 0x3f800000;
  }
  else {
    puStack_100 = (undefined1 *)0xf18d84;
    FID_conflict__memcpy(&local_a0,(void *)(*(int *)(param_1 + 0x50) + 0x10),0x40);
  }
  puStack_100 = (undefined1 *)0xf18deb;
  D3DXMatrixMultiply();
  uStack_b4 = 0;
  uStack_b8 = 0;
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_cc = 0;
  uStack_d0 = 0;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_e4 = 0;
  uStack_b0 = 0x3f800000;
  uStack_c4 = 0x3f800000;
  uStack_d8 = 0x3f800000;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    puStack_100 = *(undefined1 **)(param_1 + 0x1c8);
    puStack_104 = &local_6c;
    puStack_108 = (undefined1 *)0xf18e59;
    D3DXMatrixRotationZ();
    puStack_108 = &stack0xffffff0c;
    D3DXMatrixMultiply(puStack_108,&local_74);
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    puStack_100 = *(undefined1 **)(param_1 + 0x1c4);
    puStack_104 = &local_6c;
    puStack_108 = (undefined1 *)0xf18e9a;
    D3DXMatrixRotationY();
    puStack_108 = &stack0xffffff0c;
    D3DXMatrixMultiply(puStack_108,&local_74);
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    puStack_100 = *(undefined1 **)(param_1 + 0x1c0);
    puStack_104 = &local_6c;
    puStack_108 = (undefined1 *)0xf18ed7;
    D3DXMatrixRotationX();
    puStack_108 = &stack0xffffff0c;
    D3DXMatrixMultiply(puStack_108,&local_74);
  }
  puStack_108 = auStack_ac;
  puStack_104 = (undefined4 *)&stack0xffffff14;
  puStack_100 = puStack_108;
  D3DXMatrixMultiply();
  D3DXVec3TransformNormal(param_1 + 0x470,param_1 + 0x450,&uStack_b8);
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(iVar1 + 0x1f18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x1f00));
  }
  FUN_00ecb4f0(param_1 + 0x460);
  if (*(int *)(iVar1 + 0x1f18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x1f00));
  }
  __security_check_cookie(uStack_38 ^ (uint)&puStack_108);
  return;
}

// 00F34E50  esp26::vf04  size=402  [class]
undefined4 __thiscall
esp26::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar2 != 0) {
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar3;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar4 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (psVar1 != (short *)0x0) {
        *(int *)(param_1 + 0x494) = (int)*psVar1;
        *(float *)(param_1 + 0x4a4) = (float)(int)psVar1[1];
        *(int *)(param_1 + 0x4a0) = (int)psVar1[2];
        *(float *)(param_1 + 0x4a8) = (float)(int)psVar1[3];
        *(float *)(param_1 + 0x4ac) = (float)(int)psVar1[4];
        *(float *)(param_1 + 0x4b0) = (float)(int)psVar1[5];
      }
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar3 != (undefined4 *)0x0)) {
      puVar3 = (undefined4 *)*puVar3;
      if ((undefined4 *)((int)puVar3 + 0xfU & 0xfffffff0) != puVar3) {
        uVar4 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x480) = *puVar3;
        *(undefined4 *)(param_1 + 0x484) = puVar3[1];
        *(undefined4 *)(param_1 + 0x488) = puVar3[2];
        *(undefined4 *)(param_1 + 0x48c) = puVar3[3];
        *(undefined4 *)(param_1 + 0x450) = puVar3[0xc];
        *(undefined4 *)(param_1 + 0x454) = puVar3[0xd];
        *(undefined4 *)(param_1 + 0x458) = puVar3[0xe];
        *(undefined4 *)(param_1 + 0x45c) = 0x3f800000;
      }
    }
    if (*(int *)(param_1 + 0x494) < 1) {
      if (3 < *(uint *)(param_1 + 0x4a0)) {
        FUN_009cca90(param_1,&DAT_016dc1c0,*(uint *)(param_1 + 0x4a0));
        return 0;
      }
      *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x168);
      *(undefined4 *)(param_1 + 0x380) = 0;
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dc1a4,*(int *)(param_1 + 0x494));
  }
  return 0;
}

// 00F40900  esp26::vf00  size=72  [class]
undefined4 * __thiscall esp26::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

