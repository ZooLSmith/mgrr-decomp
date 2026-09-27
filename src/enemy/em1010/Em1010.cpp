// src/enemy/em1010/Em1010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C6B70..00AB77B0, 31 functions

#include "types.h"

// 005C6B70  Em1010::vf50  size=43  [class]
void __fastcall Em1010::vf50(int param_1)

{
  if (*(int *)(param_1 + 0x10b0) == 0) {
    FUN_00a93170();
  }
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x10b0) == 0) {
    FUN_00a8efe0();
    return;
  }
  return;
}

// 005C6BA0  Em1010::vf30  size=71  [class]
void __fastcall Em1010::vf30(int param_1)

{
  char cVar1;
  
  BehaviorEmBase::vf30();
  cVar1 = *(char *)(param_1 + 0xba8);
  if (((-1 < cVar1) && (DAT_018b9174 == 0x168)) && (cVar1 < '\t')) {
    FUN_00c49970(0,cVar1 + 1);
  }
  FUN_00e5e0c0("Stop_em1010_se_mov_search",param_1,0xffffffff,0);
  return;
}

// 005C6BF0  Em1010::vf33C  size=14  [class]
void Em1010::vf33C(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x18) = 0x42000;
  return;
}

// 005C6C00  Em1010::vf2D4  size=17  [class]
bool __fastcall Em1010::vf2D4(int param_1)

{
  return *(int *)(param_1 + 0x618) != 3;
}

// 005C6C20  FUN_005c6c20  size=108  [between]
void __fastcall FUN_005c6c20(int param_1)

{
  int iVar1;
  
  if ((DAT_01bea060 & 0x2000000) == 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      *(undefined4 *)(param_1 + 0xe90) = 0x3f000000;
      *(undefined4 *)(param_1 + 0x1050) = 0x3f000000;
      *(undefined4 *)(param_1 + 0x1078) = 0;
      FUN_00a8caf0(1,0,0,0);
      return;
    }
    iVar1 = FUN_00a82d50();
    if (iVar1 != 1) {
      FUN_00a85340(1);
    }
  }
  return;
}

// 005C6C90  FUN_005c6c90  size=160  [between]
void __fastcall FUN_005c6c90(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((DAT_01bea060 & 0x2000000) == 0) {
    iVar2 = FUN_00a82d50();
    if (iVar2 == 4) {
      *(undefined4 *)(param_1 + 0xe90) = 0x3f000000;
      *(undefined4 *)(param_1 + 0x1050) = 0x3f000000;
      *(undefined4 *)(param_1 + 0x1078) = 0;
      FUN_00a8caf0(1,0,0,0);
      return;
    }
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1078);
    *(float *)(param_1 + 0x1078) = fVar1;
    if (360.0 < fVar1) {
      FUN_00a8caf0(0,0,0,0);
      FUN_00a885d0(0);
      *(undefined4 *)(param_1 + 0xe90) = 0x3d4ccccd;
      *(undefined4 *)(param_1 + 0x1050) = 0x3d4ccccd;
    }
  }
  return;
}

// 005C6D80  Em1010::vf2A0  size=1  [class]
void Em1010::vf2A0(void)

{
  return;
}

// 005C6DF0  FUN_005c6df0  size=146  [between]
void __fastcall FUN_005c6df0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_00de3850(0,"_col.hkx",0);
  iVar3 = FUN_00de3cf0(uVar2);
  if (iVar3 != 0) {
    iVar4 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = RigidBodyCollection::RigidBodyCollection_2();
    }
    *(int *)(param_1 + 0x7b0) = iVar4;
    if (iVar4 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x4f0);
      uVar2 = FUN_00de3ee0(uVar2);
      FUN_008f6410(uVar1,iVar3,uVar2);
      FUN_008f2cd0(1);
    }
  }
  return;
}

// 005C6E90  Em1010::vf264  size=165  [class]
undefined4 __thiscall Em1010::vf264(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_0040ac60(param_2);
  if (((DAT_018b9174 == 0x168) && (cVar1 = (char)param_1[0x2ea], -1 < cVar1)) && (cVar1 < '\t')) {
    iVar2 = FUN_00c3d5e0(0,cVar1 + 1);
    if (iVar2 != 0) {
      (**(code **)(param_1[0x430] + 8))(0x3f800000,0,0);
      param_1[0x139] = 1;
      FUN_00a85340(0);
      FUN_00e5e0c0("Stop_em1010_se_mov_search",param_1,0xffffffff,0);
      (**(code **)(*param_1 + 0x20))();
      FUN_009fdde0();
    }
  }
  return 1;
}

// 005C6F40  Em1010::vf54  size=89  [class]
void __fastcall Em1010::vf54(int param_1)

{
  BehaviorEmBase::vf54();
  if (((*(byte *)(param_1 + 0x4c0) & 1) != 0) && (*(int *)(param_1 + 0x10b0) == 1)) {
    if (*(int *)(param_1 + 0x7b4) != 0) {
      FUN_0091e980(param_1);
    }
    if (*(int *)(param_1 + 0x7b0) != 0) {
      FUN_008f7700(param_1);
    }
    if ((*(int *)(param_1 + 0x7b4) != 0) || (*(int *)(param_1 + 0x7b0) != 0)) {
      FUN_00a17aa0();
      return;
    }
  }
  return;
}

// 005C6FA0  FUN_005c6fa0  size=88  [between]
void __fastcall FUN_005c6fa0(int param_1)

{
  if ((DAT_01bea060 & 0x2000000) == 0) {
    if ((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) {
      *(undefined4 *)(param_1 + 0x1078) = 0;
      return;
    }
    FUN_00a8caf0(2,0,0,0);
    FUN_00a85340(3);
    *(undefined4 *)(param_1 + 0x1078) = 0;
    *(undefined4 *)(param_1 + 0xe90) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x1050) = 0x3d4ccccd;
  }
  return;
}

// 005C7000  FUN_005c7000  size=816  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_005c7000(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_50 [2];
  int local_48;
  int *local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_44 = param_1;
  if (param_1[0x187] == 0) {
    iVar2 = FUN_00a12210(1);
    iVar3 = FUN_00a12210(2);
    local_48 = FUN_00a12210(3);
    pfVar4 = (float *)(**(code **)(*param_1 + 0x84))();
    fStack_30 = *pfVar4;
    pfVar1 = (float *)(iVar2 + 0x90);
    fStack_2c = pfVar4[1];
    fStack_28 = pfVar4[2];
    fStack_24 = pfVar4[3];
    afStack_50[0] = 0.0;
    afStack_50[1] = 0.0;
    thunk_FUN_00ddfff0(pfVar1,iVar2 + 0x10);
    fStack_20 = *(float *)(iVar2 + 0x40);
    fStack_1c = *(float *)(iVar2 + 0x44);
    fStack_18 = *(float *)(iVar2 + 0x48);
    fStack_14 = *(float *)(iVar2 + 0x4c);
    fStack_40 = *(float *)(iVar2 + 0x30) + fStack_20;
    fStack_3c = *(float *)(iVar2 + 0x34) + fStack_1c;
    fStack_38 = *(float *)(iVar2 + 0x38) + fStack_18;
    fStack_34 = *(float *)(iVar2 + 0x3c) + fStack_14;
    thunk_FUN_00dde510(afStack_50,afStack_50 + 1,&fStack_40,&fStack_20);
    *pfVar1 = afStack_50[0];
    *pfVar1 = *pfVar1 * -1.0;
    *(float *)(iVar2 + 0x94) = *(float *)(iVar2 + 0x94) * -1.0;
    *(float *)(iVar2 + 0x98) = *(float *)(iVar2 + 0x98) * -1.0;
    *(float *)(iVar2 + 0x9c) = *(float *)(iVar2 + 0x9c) * -1.0;
    pfVar4 = (float *)(iVar3 + 0x90);
    *pfVar1 = *pfVar1 - fStack_30;
    *(float *)(iVar2 + 0x94) = *(float *)(iVar2 + 0x94) - fStack_2c;
    *(float *)(iVar2 + 0x98) = *(float *)(iVar2 + 0x98) - fStack_28;
    *(float *)(iVar2 + 0x9c) = *(float *)(iVar2 + 0x9c) - fStack_24;
    thunk_FUN_00ddfff0(pfVar4,iVar3 + 0x10);
    fStack_20 = *(float *)(iVar3 + 0x40);
    fStack_1c = *(float *)(iVar3 + 0x44);
    fStack_18 = *(float *)(iVar3 + 0x48);
    fStack_14 = *(float *)(iVar3 + 0x4c);
    fStack_40 = *(float *)(iVar3 + 0x30) + fStack_20;
    fStack_3c = *(float *)(iVar3 + 0x34) + fStack_1c;
    fStack_38 = *(float *)(iVar3 + 0x38) + fStack_18;
    fStack_34 = *(float *)(iVar3 + 0x3c) + fStack_14;
    thunk_FUN_00dde510(afStack_50,afStack_50 + 1,&fStack_40,&fStack_20);
    iVar2 = local_48;
    *pfVar4 = afStack_50[0];
    *pfVar4 = *pfVar4 * -1.0;
    *(float *)(iVar3 + 0x94) = *(float *)(iVar3 + 0x94) * -1.0;
    *(float *)(iVar3 + 0x98) = *(float *)(iVar3 + 0x98) * -1.0;
    *(float *)(iVar3 + 0x9c) = *(float *)(iVar3 + 0x9c) * -1.0;
    *pfVar4 = *pfVar4 - fStack_30;
    *(float *)(iVar3 + 0x94) = *(float *)(iVar3 + 0x94) - fStack_2c;
    *(float *)(iVar3 + 0x98) = *(float *)(iVar3 + 0x98) - fStack_28;
    *(float *)(iVar3 + 0x9c) = *(float *)(iVar3 + 0x9c) - fStack_24;
    pfVar1 = (float *)(local_48 + 0x90);
    thunk_FUN_00ddfff0(pfVar1,local_48 + 0x10);
    fStack_20 = *(float *)(iVar2 + 0x40);
    fStack_1c = *(float *)(iVar2 + 0x44);
    fStack_18 = *(float *)(iVar2 + 0x48);
    fStack_14 = *(float *)(iVar2 + 0x4c);
    fStack_40 = *(float *)(iVar2 + 0x30) + fStack_20;
    fStack_3c = *(float *)(iVar2 + 0x34) + fStack_1c;
    fStack_38 = *(float *)(iVar2 + 0x38) + fStack_18;
    fStack_34 = *(float *)(iVar2 + 0x3c) + fStack_14;
    thunk_FUN_00dde510(afStack_50,afStack_50 + 1,&fStack_40,&fStack_20);
    *pfVar1 = afStack_50[0];
    *pfVar1 = *pfVar1 * -1.0;
    *(float *)(iVar2 + 0x94) = *(float *)(iVar2 + 0x94) * -1.0;
    *(float *)(iVar2 + 0x98) = *(float *)(iVar2 + 0x98) * -1.0;
    *(float *)(iVar2 + 0x9c) = *(float *)(iVar2 + 0x9c) * -1.0;
    *pfVar1 = *pfVar1 - fStack_30;
    *(float *)(iVar2 + 0x94) = *(float *)(iVar2 + 0x94) - fStack_2c;
    *(float *)(iVar2 + 0x98) = *(float *)(iVar2 + 0x98) - fStack_28;
    *(float *)(iVar2 + 0x9c) = *(float *)(iVar2 + 0x9c) - fStack_24;
    *pfVar1 = *pfVar1 - *pfVar4;
    *(float *)(iVar2 + 0x94) = *(float *)(iVar2 + 0x94) - *(float *)(iVar3 + 0x94);
    *(float *)(iVar2 + 0x98) = *(float *)(iVar2 + 0x98) - *(float *)(iVar3 + 0x98);
    *(float *)(iVar2 + 0x9c) = *(float *)(iVar2 + 0x9c) - *(float *)(iVar3 + 0x9c);
    local_44[0x187] = local_44[0x187] + 1;
  }
  else if (param_1[0x187] == 1) {
    FUN_00a8caf0(5,0,0,0);
    return;
  }
  return;
}

// 005C7330  FUN_005c7330  size=341  [between]
void __fastcall FUN_005c7330(int param_1)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_004066f0();
    local_20 = 0;
    local_1c = 0xc1200000;
    local_18 = 0;
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xd4))(0x41f00000);
    FUN_008f3c70();
    puVar4 = auStack_28;
    (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(puVar4,0,auStack_24);
    FUN_0091a7e0(puVar4);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    pcVar2 = *(code **)(*(int *)(param_1 + 0x10c0) + 8);
    *(undefined4 *)(param_1 + 0x10b0) = 1;
    (*pcVar2)(0x3f800000,0,0);
    FUN_00a85340(0);
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    FUN_00e5e0c0("Stop_em1010_se_mov_search",param_1,0xffffffff,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar3 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar3;
  if (fVar3 < 0.0) {
    FUN_00a8caf0(6,0,0,0);
  }
  return;
}

// 005C7490  Em1010::vf268  size=101  [class]
undefined4 __thiscall Em1010::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  if ((*(int *)(param_1 + 0x4e4) == 0) && (*(int *)(param_1 + 0x618) < 4)) {
    local_20 = param_4[8];
    local_1c = param_4[9];
    local_18 = param_4[10];
    local_14 = 0x3f800000;
    if (*param_4 == 2) {
      FUN_00a883f0(4,0,&local_20);
      return 1;
    }
  }
  return 0;
}

// 005C7500  Em1010::vf44  size=94  [class]
void __fastcall Em1010::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  *(undefined4 *)(param_1 + 0x1060) = 0;
  *(undefined4 *)(param_1 + 0x1064) = 0;
  *(undefined4 *)(param_1 + 0x1068) = 0;
  FUN_00a8f000();
  BehaviorEmBase::vf44();
  return;
}

// 005C7560  FUN_005c7560  size=198  [callgraph]
void FUN_005c7560(float *param_1,undefined4 param_2,undefined4 param_3,float *param_4,float param_5)

{
  undefined4 *puVar1;
  undefined1 *puStack_bc;
  undefined4 *puStack_b8;
  undefined1 *puStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [24];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 local_50 [76];
  
  puStack_b4 = (undefined1 *)0x5;
  local_a0 = param_2;
  puStack_b8 = &local_a0;
  local_9c = param_3;
  puStack_bc = local_90;
  local_98 = 0;
  local_94 = 0x3f800000;
  local_b0 = 0x3f800000;
  local_ac = 0x3f800000;
  local_a8 = 0x3f800000;
  local_a4 = 0x3f800000;
  thunk_FUN_00ddc1d0();
  FUN_00ddd140(local_50,&local_b0);
  puStack_bc = local_90;
  puStack_b8 = (undefined4 *)local_50;
  puStack_b4 = puStack_bc;
  D3DXMatrixMultiply();
  fStack_6c = *param_4;
  puVar1 = &local_9c;
  fStack_68 = param_4[1];
  fStack_64 = param_4[2];
  D3DXVec3TransformNormal();
  *param_1 = fStack_78 + (float)&puStack_bc;
  param_1[1] = fStack_74 + param_5;
  param_1[2] = fStack_70 + (float)puVar1;
  param_1[3] = fStack_6c;
  return;
}

// 005C7B30  FUN_005c7b30  size=384  [callgraph]
void __fastcall FUN_005c7b30(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x4a0) == 2) {
    *(undefined4 *)(param_1 + 0x1064) = 0x3eb2b8c2;
  }
  else {
    *(undefined4 *)(param_1 + 0x1064) = 0x3f060a92;
  }
  local_c = 1.0;
  local_4 = 3.0;
  local_8 = 0.5235988;
  iVar2 = FUN_00ac4780();
  if (2 < iVar2) {
    local_c = 2.0;
    local_4 = 1.5;
    if ((*(byte *)(param_1 + 0x4a8) & 1) != 0) {
      local_8 = 1.0471976;
    }
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    fVar3 = (float10)FUN_00a92ff0();
    fVar3 = fVar3 * (float10)0.0052359877 * (float10)local_c + (float10)*(float *)(param_1 + 0x1060)
    ;
    *(float *)(param_1 + 0x1060) = (float)fVar3;
    bVar1 = fVar3 < (float10)local_8;
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 1) {
      fVar3 = (float10)FUN_00a92ff0();
      fVar3 = fVar3 * (float10)0.016666668 * (float10)local_c +
              (float10)*(float *)(param_1 + 0x1068);
      *(float *)(param_1 + 0x1068) = (float)fVar3;
      if ((float10)local_4 <= fVar3) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        FUN_005c78f0();
        return;
      }
      goto LAB_005c7ca4;
    }
    iVar2 = FUN_00a8cac0();
    if (iVar2 != 2) {
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 3) {
        fVar3 = (float10)FUN_00a92ff0();
        fVar3 = fVar3 * (float10)0.016666668 * (float10)local_c +
                (float10)*(float *)(param_1 + 0x1068);
        *(float *)(param_1 + 0x1068) = (float)fVar3;
        if ((float10)local_4 <= fVar3) {
          *(undefined4 *)(param_1 + 0x61c) = 0;
        }
      }
      goto LAB_005c7ca4;
    }
    fVar3 = (float10)FUN_00a92ff0();
    fVar3 = (float10)*(float *)(param_1 + 0x1060) - fVar3 * (float10)0.0052359877 * (float10)local_c
    ;
    *(float *)(param_1 + 0x1060) = (float)fVar3;
    bVar1 = -(float10)local_8 < fVar3;
  }
  if (!bVar1) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1068) = 0;
    FUN_005c78f0();
    return;
  }
LAB_005c7ca4:
  FUN_005c78f0();
  return;
}

// 005C7CB0  FUN_005c7cb0  size=423  [callgraph]
void __fastcall FUN_005c7cb0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = *(int *)(param_1 + 0x61c);
  if (iVar2 == 0) {
    (**(code **)(*(int *)(param_1 + 0x10c0) + 8))(0x3f800000,0,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      FUN_005c78f0();
      return;
    }
    goto LAB_005c7d71;
  }
  fVar4 = (float10)FUN_00dde300(0xbc8efa35,0x3c8efa35);
  *(float *)(param_1 + 0x106c) = (float)fVar4;
  fVar4 = (float10)FUN_00dde300(0xbc8efa35,0x3c8efa35);
  *(float *)(param_1 + 0x1070) = (float)fVar4;
  fVar4 = (float10)FUN_00dde300(0x41f00000,0x42f00000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(float *)(param_1 + 0x1074) = (float)fVar4;
LAB_005c7d71:
  fVar4 = (float10)FUN_00a92ff0();
  fVar1 = (float)(fVar4 * (float10)*(float *)(param_1 + 0x106c));
  fVar4 = (float10)FUN_00a92ff0();
  fVar4 = fVar4 * (float10)*(float *)(param_1 + 0x1070);
  fVar3 = fVar1 + *(float *)(param_1 + 0x1064);
  *(float *)(param_1 + 0x1064) = fVar3;
  fVar5 = fVar4 + (float10)*(float *)(param_1 + 0x1060);
  *(float *)(param_1 + 0x1060) = (float)fVar5;
  if (((float10)0.7853982 < fVar5 != ((float10)0.7853982 == fVar5)) ||
     (fVar5 <= (float10)-0.7853982)) {
    *(float *)(param_1 + 0x1060) = (float)(fVar5 - fVar4);
    *(float *)(param_1 + 0x1070) = -*(float *)(param_1 + 0x1070);
  }
  if ((!NAN(fVar3) && 0.5235988 < fVar3 != (fVar3 == 0.5235988)) || (fVar3 <= 0.08726646)) {
    *(float *)(param_1 + 0x1064) = fVar3 - fVar1;
    *(float *)(param_1 + 0x106c) = -*(float *)(param_1 + 0x106c);
  }
  fVar1 = *(float *)(param_1 + 0x1074) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1074) = fVar1;
  if (fVar1 <= 0.0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  FUN_005c78f0();
  return;
}

// 005C7E60  FUN_005c7e60  size=461  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_005c7e60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float *pfStack_368;
  int iStack_364;
  float local_350 [2];
  uint local_348 [2];
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 uStack_328;
  undefined4 uStack_324;
  uint uStack_2ac;
  undefined4 uStack_238;
  undefined4 uStack_1dc;
  undefined2 uStack_1ce;
  float fStack_1b8;
  float fStack_1b4;
  
  iStack_364 = 5;
  pfStack_368 = (float *)0x5c7e78;
  iVar1 = FUN_00a12210();
  local_350[0] = 0.0;
  local_350[1] = 0.0;
  local_348[0] = 0x3f4ccccd;
  pfStack_368 = local_350;
  local_340 = 0;
  local_33c = 0;
  local_338 = 0x424b3333;
  iStack_364 = iVar1 + 0x10;
  D3DXVec3TransformNormal(pfStack_368);
  D3DXVec3TransformNormal(local_350 + 1,local_350 + 1,iVar1 + 0x10);
  local_350[0] = *(float *)(iVar1 + 0x48) + local_350[0];
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  uStack_238 = 100;
  FUN_0043fe30(&pfStack_368,&stack0xfffffca8,param_1 + 0x90,0x3f4ccccd,0x42a00000);
  uStack_1dc = 0x3f7f7cee;
  fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
  fStack_1b8 = (float)fVar3;
  fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
  fStack_1b4 = (float)fVar3;
  uStack_324 = *(undefined4 *)(param_1 + 0x4f0);
  uStack_2ac = uStack_2ac | 0x10000010;
  uStack_334 = 5;
  uStack_32c = 0xf;
  uStack_328 = 0;
  uStack_330 = 0x96;
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  local_348[0] = local_348[0] | 4;
  uStack_1ce = *(undefined2 *)(iVar1 + 0xa0);
  FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),local_348);
  return;
}

// 005C8030  Em1010::vf32C  size=555  [class]
undefined4 __fastcall Em1010::vf32C(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  
  uVar4 = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  if (param_1[0x139] != 0) {
    return 0;
  }
  piVar6 = (int *)param_1[0x19f];
  piVar3 = piVar6 + param_1[0x1a1] * 0x54;
  if (piVar6 != piVar3) {
    do {
      iVar2 = FUN_00d46780();
      if ((iVar2 == 0) || (*piVar6 != 0x1b0)) {
        bVar1 = false;
        iVar2 = FUN_00ac82f0();
        if (((iVar2 != 0) && (iVar2 = FUN_00ac8350(), iVar2 != 0)) ||
           ((((piVar6[0x23] & 0x200U) != 0 || ((piVar6[0x24] & 0x60000U) != 0)) ||
            ((piVar6[0x23] & 0x400U) != 0)))) {
          bVar1 = true;
        }
        if ((piVar6[0x25] != 0) && (bVar1)) {
          FUN_00a8e5d0(param_1,piVar6,0);
          return 0;
        }
        iVar2 = *piVar6;
        if (((iVar2 != 0) && (iVar2 != 1)) &&
           ((iVar2 != 2 && ((iVar2 != 0x1b0 && (iVar2 != 0x147)))))) {
          (**(code **)(*param_1 + 0x30c))(piVar6[1],0);
          iVar5 = 0;
          iVar2 = FUN_00a81330();
          if (iVar2 != 0) {
            iVar5 = FUN_00a7c8a0();
          }
          if (((-1 < param_1[0x21c]) && (iVar5 != 0)) && ((*(byte *)(iVar5 + 0x4c0) & 0x10) != 0)) {
            (**(code **)(*param_1 + 0x21c))(iVar5,(char)piVar6[4],0x3c23d70a,0);
            (**(code **)(*param_1 + 0x220))(0x40000000);
          }
          fVar7 = (float10)FUN_00ddba30((float)piVar6[0xc] - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar7;
          if (param_1[0x21c] < 1) {
            if ((*(byte *)((int)piVar6 + 0x92) & 1) != 0) {
              piVar3 = (int *)FUN_00c209f0();
              (**(code **)(*piVar3 + 0x14))(0xe);
            }
            param_1[0x21c] = 0;
            param_1[0x139] = 1;
            FUN_00a8caf0(6,0,0,0);
            FUN_00e5e0c0("Stop_em1010_se_mov_search",param_1,0xffffffff,0);
            FUN_00a85340(0);
            (**(code **)(*param_1 + 0x198))(iVar5,piVar6,1);
            return 1;
          }
          (**(code **)(*param_1 + 0x198))(iVar5,piVar6,1);
          uVar4 = 1;
        }
      }
      piVar6 = piVar6 + 0x54;
      if (piVar6 == piVar3) {
        return uVar4;
      }
    } while( true );
  }
  return 0;
}

// 005C8260  FUN_005c8260  size=798  [between]
void __fastcall FUN_005c8260(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 *puVar10;
  float fStack_64;
  float local_60;
  int local_5c;
  undefined1 auStack_58 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [28];
  
  iVar1 = FUN_00a12210(2);
  local_5c = FUN_00a12210(3);
  local_60 = 0.0;
  iVar2 = (**(code **)(*param_1 + 0x84))();
  fStack_64 = *(float *)(iVar2 + 4);
  iVar2 = param_1[0x186];
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0x3f800000;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0x40a00000;
  uStack_24 = 0x3f800000;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      bVar5 = (DAT_01bea094 & 0x20000) != 0;
      if (bVar5) {
        piVar3 = (int *)FUN_00c13920();
      }
      else {
        piVar3 = (int *)FUN_00c13920();
      }
      iVar2 = (**(code **)(*piVar3 + 0x28))(bVar5);
      piVar3 = (int *)0x0;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
      }
      fVar8 = (float10)0;
      fStack_50 = (float)fVar8;
      fStack_4c = (float)fVar8;
      fStack_48 = (float)fVar8;
      fVar7 = (float10)1;
      fStack_44 = (float)fVar7;
      fVar6 = fVar7;
      fVar9 = fVar8;
      if (piVar3 != (int *)0x0) {
        pfVar4 = (float *)(**(code **)(*piVar3 + 0x204))(auStack_20);
        fStack_54 = *pfVar4;
        fStack_50 = pfVar4[1];
        fStack_4c = pfVar4[2];
        fStack_48 = pfVar4[3];
        fVar6 = (float10)(**(code **)(*piVar3 + 0x24))();
        fVar7 = (float10)fStack_44;
        fVar8 = (float10)fStack_48;
        fVar9 = (float10)fStack_50;
      }
      fVar6 = fVar6 * (float10)10.0;
      fStack_50 = (float)(fVar9 + (fVar9 - (float10)(float)param_1[0x428]) * fVar6);
      fStack_48 = (float)((fVar8 - (float10)(float)param_1[0x42a]) * fVar6 + fVar8);
      fStack_44 = (float)(fVar6 * (fVar7 - (float10)(float)param_1[0x42b]) + fVar7);
      if (iVar1 != 0) {
        thunk_FUN_00dde510(&local_60,auStack_58,&fStack_50,iVar1 + 0x40);
        local_60 = local_60 * -1.0;
        if (local_60 <= 0.7853982) {
          if (local_60 < 0.08726646) {
            local_60 = 0.08726646;
          }
        }
        else {
          local_60 = 0.7853982;
        }
      }
      if (local_5c != 0) {
        thunk_FUN_00dde510(auStack_58,&fStack_64,&fStack_50,local_5c + 0x40);
        fStack_54 = fStack_64;
        iVar2 = (**(code **)(*param_1 + 0x84))();
        fVar8 = (float10)FUN_00ddba30(fStack_54 - *(float *)(iVar2 + 4));
        fVar7 = (float10)1.3962634;
        if ((fVar8 <= fVar7) && (fVar7 = (float10)-1.3962634, fVar7 <= fVar8)) {
          fVar7 = fVar8;
        }
        fStack_64 = (float)fVar7;
        fStack_54 = (float)fVar7;
        iVar2 = (**(code **)(*param_1 + 0x84))();
        fVar7 = (float10)FUN_00ddba30(*(float *)(iVar2 + 4) + fStack_54);
        fStack_64 = (float)fVar7;
      }
      goto LAB_005c8307;
    }
    if (iVar2 != 3) {
      return;
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x84))();
  fStack_64 = *(float *)(iVar2 + 4) + (float)param_1[0x418];
  local_60 = (float)param_1[0x419];
LAB_005c8307:
  puVar10 = &uStack_30;
  iVar1 = iVar1 + 0x40;
  iVar2 = (**(code **)(*param_1 + 0x84))(iVar1,puVar10);
  FUN_005c7560(&uStack_40,local_60,*(undefined4 *)(iVar2 + 4),iVar1,puVar10);
  FUN_00a83330(&uStack_40,1);
  FUN_005c7560(&uStack_40,0,fStack_64,local_5c + 0x40,&uStack_30);
  FUN_00a83330(&uStack_40,1);
  return;
}

// 005C8580  FUN_005c8580  size=376  [between]
void __fastcall FUN_005c8580(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (((DAT_018b9174 == 0xd30) && (iVar2 = FUN_00d4f120("PD30_M2_RESULT",1), iVar2 != 0)) &&
     (iVar2 = FUN_00d4f120("PD30_M2_CLEAR2",1), iVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x61c) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42200000;
    goto LAB_005c85f7;
  case 1:
LAB_005c85f7:
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      switchD_005c85d4::default();
      return;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x61c) = 3;
    *(undefined4 *)(param_1 + 0x920) = 0x43700000;
    *(undefined4 *)(param_1 + 0x924) = 0x40c00000;
  case 3:
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x924) = 0x40c00000;
      FUN_005c7e60();
    }
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
      switchD_005c85d4::default();
      return;
    }
    break;
  case 4:
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x61c) = 3;
      *(undefined4 *)(param_1 + 0x924) = 0x40c00000;
      *(undefined4 *)(param_1 + 0x920) = 0x43700000;
      switchD_005c85d4::default();
      return;
    }
  }
  switchD_005c85d4::default();
  return;
}

// 005C8710  Em1010::vf48  size=265  [class]
/* WARNING: Type propagation algorithm not settling */

void __fastcall Em1010::vf48(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int local_28 [9];
  
  BehaviorEmBase::vf48();
  if ((*(int *)(param_1 + 0x10b0) == 0) && (*(int *)(param_1 + 0x10b4) == 0)) {
    FUN_00a83330(param_1 + 0x1090,1);
    FUN_005c8260();
  }
  if (*(int *)(param_1 + 0x618) < 3) {
    local_28[1] = 0;
    local_28[0] = 0;
    FUN_00ac81f0(param_1 + 0x40,local_28 + 1,local_28);
    if (local_28[0] != 0) {
      FUN_00a8caf0(3,0,0,0);
      *(undefined4 *)(param_1 + 0x1078) = 0;
      *(undefined4 *)(param_1 + 0xe90) = 0x3d4ccccd;
      *(undefined4 *)(param_1 + 0x1050) = 0x3d4ccccd;
    }
  }
  bVar4 = (DAT_01bea094 & 0x20000) != 0;
  if (bVar4) {
    piVar1 = (int *)FUN_00c13920();
  }
  else {
    piVar1 = (int *)FUN_00c13920();
  }
  iVar2 = (**(code **)(*piVar1 + 0x28))(bVar4);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x204))(local_28 + 1);
      *(undefined4 *)(param_1 + 0x10a0) = *puVar3;
      *(undefined4 *)(param_1 + 0x10a4) = puVar3[1];
      *(undefined4 *)(param_1 + 0x10a8) = puVar3[2];
      *(undefined4 *)(param_1 + 0x10ac) = puVar3[3];
    }
  }
  return;
}

// 005C8820  FUN_005c8820  size=78  [between]
void FUN_005c8820(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_1,uVar1,uVar2);
  if (param_2 != 0) {
    FUN_00dffb20(param_2);
  }
  FUN_00a963e0(local_160);
  return;
}

// 005C8870  Em1010::vf40  size=755  [class]
undefined4 __fastcall Em1010::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d0 [112];
  undefined1 local_160 [348];
  
  iVar1 = BehaviorEmBase::vf40();
  if (iVar1 != 0) {
    FUN_005c6df0();
    FUN_00a8efe0();
    FUN_00405230();
    local_1e0 = 0;
    local_1dc = 0;
    local_1d8 = 0;
    FUN_00c151f0(0,*(undefined4 *)(param_1 + 0x4f0),0,&local_1e0,0,0x41f00000,0x3f800000,0,0);
    FUN_00c57830(local_1d0);
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
    uVar2 = FUN_00a8d2a0();
    puVar3 = (undefined4 *)FUN_009f8b60();
    iVar1 = CollisionCapsule::CollisionCapsule(2,*puVar3,0);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
      *(undefined4 *)(iVar1 + 0x594) = 0x3fa66666;
      *(undefined4 *)(iVar1 + 0x590) = 0x3f000000;
      FUN_00d771d0(0xd);
      FUN_00a93a00(iVar1,uVar2);
      FUN_00d7b0f0();
      FUN_00d7b890();
      FUN_00410540(0x10,&DAT_01b7bd48);
      FUN_00a82610(*(undefined4 *)(param_1 + 0x4f0),1,0xffffffff);
      *(undefined4 *)(param_1 + 0xe90) = 0x3d4ccccd;
      FUN_00a82610(*(undefined4 *)(param_1 + 0x4f0),2,0xffffffff);
      *(undefined4 *)(param_1 + 0xf70) = 0x3d4ccccd;
      FUN_00a82610(*(undefined4 *)(param_1 + 0x4f0),3,0xffffffff);
      *(undefined4 *)(param_1 + 0x1050) = 0x3d4ccccd;
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x107c) = 0x3c;
      *(undefined4 *)(param_1 + 0x1080) = 0x3c;
      *(undefined4 *)(param_1 + 0x10b0) = 0;
      uVar2 = FUN_00a7c8a0(0);
      FUN_004039a0(1,uVar2,uVar4);
      if (param_1 + 0x10c0 != 0) {
        FUN_00dffb20(param_1 + 0x10c0);
      }
      FUN_00a963e0(local_160);
      if (*(int *)(param_1 + 0x4a0) == 1) {
        lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                  (*(undefined4 *)(param_1 + 0x4f0),5,&DAT_018816d0,4);
      }
      else {
        lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                  (*(undefined4 *)(param_1 + 0x4f0),5,&DAT_01881640,4);
        *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x400000;
      }
      FUN_00a82d60(1);
      FUN_00a82dd0(1);
      FUN_00a82e30(1);
      *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x200000;
      FUN_009fd240();
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
      }
      FUN_00a8ee10(0x1e);
      FUN_00a8ee20(0x1e);
      if ((*(int *)(param_1 + 0x330) != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 0)) {
        FUN_00a88b50(1,0);
        FUN_00a8caf0(0,0,0,0);
        *(undefined4 *)(param_1 + 0x10b4) = 0;
        FUN_00e5e0c0("em1010_se_mov_search",param_1,0xffffffff,0);
        *(undefined4 *)(param_1 + 0x878) = 1;
        return 1;
      }
      FUN_00a8caf0(4,0,0,0);
      FUN_00a88b50(0,0);
      *(undefined4 *)(param_1 + 0x10b4) = 1;
      *(undefined4 *)(param_1 + 0x878) = 1;
      return 1;
    }
  }
  return 0;
}

// 005C8B70  FUN_005c8b70  size=190  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_005c8b70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int local_168 [2];
  undefined1 local_160 [348];
  
  if (0 < *(int *)(param_1 + 0x61c)) {
    local_168[1] = 0;
    local_168[0] = 0;
    FUN_00ac81f0(param_1 + 0x40,local_168 + 1,local_168);
    if (local_168[0] == 0) {
      FUN_00a8caf0(0,0,0,0);
      FUN_00a885d0(0);
      *(undefined4 *)(param_1 + 0x1078) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0xe90) = 0x3d4ccccd;
      *(undefined4 *)(param_1 + 0x1050) = 0x3d4ccccd;
      uVar1 = FUN_00a7c8a0(0);
      FUN_004039a0(1,uVar1,uVar2);
      if (param_1 + 0x10c0 != 0) {
        FUN_00dffb20(param_1 + 0x10c0);
      }
      FUN_00a963e0(local_160);
    }
  }
  return;
}

// 005C8C30  FUN_005c8c30  size=287  [between]
void __fastcall FUN_005c8c30(int *param_1)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    pcVar3 = *(code **)(param_1[0x430] + 8);
    param_1[0x187] = 1;
    (*pcVar3)(0x3f800000,0,0);
    param_1[0x248] = 0x43340000;
    param_1[0x139] = 1;
    FUN_00a85340(0);
  case 1:
    param_1[0x187] = param_1[0x187] + 1;
  case 2:
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43340000;
    uVar5 = 0;
    uVar4 = FUN_00a7c8a0(0);
    FUN_004039a0(2,uVar4,uVar5);
    FUN_00a963e0(local_160);
    (**(code **)(*param_1 + 0x20))();
    FUN_00e5e0c0("em1010_se_dmg_explosion",param_1,0xffffffff,0);
    cVar2 = (char)param_1[0x2ea];
    if (((-1 < cVar2) && (DAT_018b9174 == 0x168)) && (cVar2 < '\t')) {
      FUN_00c49970(0,cVar2 + 1);
    }
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_009fdde0();
    }
  default:
    return;
  }
}

// 005C8E10  Em1010::vf4C  size=147  [class]
void __fastcall Em1010::vf4C(int param_1)

{
  BehaviorEmBase::vf4C();
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_005c6c20();
    break;
  case 1:
    FUN_005c6fa0();
    break;
  case 2:
    FUN_005c6c90();
    break;
  case 3:
    FUN_005c8b70();
  }
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_005c7b30();
    return;
  case 1:
    FUN_005c8580();
    return;
  case 2:
    if (*(int *)(param_1 + 0x61c) == 0) {
      *(undefined4 *)(param_1 + 0x61c) = 1;
    }
    break;
  case 3:
    FUN_005c7cb0();
    return;
  case 4:
    FUN_005c7000();
    return;
  case 5:
    FUN_005c7330();
    return;
  case 6:
    FUN_005c8c30();
    return;
  }
  return;
}

// 00AAEC40  Em1010::Em1010  size=71  [class]
undefined4 * __fastcall Em1010::Em1010(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a831e0();
  iVar1 = 1;
  do {
    FUN_00a831e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControler::cEspControler();
  return param_1;
}

// 00AAEC90  Em1010::vf04  size=6  [class]
undefined * Em1010::vf04(void)

{
  return &DAT_01b351e0;
}

// 00AB77B0  Em1010::vf00  size=43  [class]
undefined4 __thiscall Em1010::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

