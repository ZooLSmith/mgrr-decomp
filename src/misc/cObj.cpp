// src/misc/cObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040DE00..00A01080, 53 functions

#include "types.h"

// 0040DE00  cObj::vf24  size=3  [class]
float10 cObj::vf24(void)

{
  return (float10)1;
}

// 0040DE70  cObj::vf38  size=22  [class]
uint __fastcall cObj::vf38(uint param_1)

{
  return -(uint)((*(byte *)(param_1 + 0x4c8) & 3) == 0) & param_1;
}

// 0040E660  cObj::vf28  size=13  [class]
void __thiscall cObj::vf28(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4e0) = param_2;
  return;
}

// 009F8A30  cObj::vf10  size=1  [class]
void cObj::vf10(void)

{
  return;
}

// 009F8A40  cObj::vf14  size=1  [class]
void cObj::vf14(void)

{
  return;
}

// 009F8A50  cObj::vf18  size=5  [class]
void __fastcall cObj::vf18(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x360);
  iVar3 = param_1;
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  if ((((*(short *)(iVar3 + 0x358) != 0) ||
       (uVar1 = *(ushort *)(*(int *)(param_1 + 0x334) + 0xa2), (uVar1 & 4) == 0)) ||
      ((uVar1 & 2) == 0)) && (iVar2 == 0)) {
    FUN_00a16680(param_1,param_1 + 0xb0);
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x10000;
  return;
}

// 009F8A60  FUN_009f8a60  size=19  [between]
void __fastcall FUN_009f8a60(int param_1)

{
  FUN_00a19180(param_1,*(undefined4 *)(param_1 + 0x518));
  return;
}

// 009F8A80  FUN_009f8a80  size=42  [between]
void __fastcall FUN_009f8a80(int param_1)

{
  if (((*(uint *)(param_1 + 0x364) & 0x1000000) != 0) &&
     ((*(uint *)(param_1 + 0x364) & 0x40000) == 0)) {
    FUN_00c2af30(param_1);
  }
  FUN_00a18770();
  return;
}

// 009F8AB0  cObj::vf3C  size=3  [class]
void cObj::vf3C(void)

{
  return;
}

// 009FAB30  cObj::vf04  size=6  [class]
undefined * cObj::vf04(void)

{
  return &DAT_01b7b380;
}

// 009FAB40  cObj::vf2C  size=1  [class]
void cObj::vf2C(void)

{
  return;
}

// 009FAB50  cObj::vf30  size=1  [class]
void cObj::vf30(void)

{
  return;
}

// 009FAB60  cObj::vf34  size=1  [class]
void cObj::vf34(void)

{
  return;
}

// 009FAB70  FUN_009fab70  size=40  [between]
void __fastcall FUN_009fab70(int *param_1)

{
  if ((*(byte *)(param_1 + 0x132) & 2) == 0) {
    *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) | 2;
    (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x009fab94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  return;
}

// 009FABA0  cObj::vf1C  size=8  [class]
void __fastcall cObj::vf1C(int param_1)

{
  *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 1;
  return;
}

// 009FABB0  cObj::vf20  size=8  [class]
void __fastcall cObj::vf20(int param_1)

{
  *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) & 0xfffffffe;
  return;
}

// 009FD150  cObj::cObj  size=141  [class]
undefined4 * __fastcall cObj::cObj(undefined4 *param_1)

{
  cModel::cModel();
  *param_1 = vftable;
  FUN_00de3530();
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  FUN_00a09be0();
  param_1[0x12d] = 0xffffffff;
  param_1[0x138] = 0xffffffff;
  param_1[0x148] = 0;
  param_1[0x13c] = 0;
  param_1[0x124] = 0;
  param_1[0x13b] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x137] = 0;
  *(undefined1 *)((int)param_1 + 0x4c9) = 0;
  param_1[0x146] = 0;
  param_1[0x145] = 0;
  param_1[0x130] = 1;
  return param_1;
}

// 009FD1E0  cObj::destruct_2  size=93  [class]
undefined4 * __thiscall cObj::destruct_2(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0x145] != 0) {
    FUN_00dd5650(&DAT_0165bed8);
  }
  param_1[0x13d] = cXmlBinary::vftable;
  FUN_00e04180();
  param_1[0x13d] = cXml::vftable;
  cModel::~cModel();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009FD240  FUN_009fd240  size=269  [between]
undefined4 __fastcall FUN_009fd240(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if ((((*(int *)(param_1 + 0x370) != 0) || (iVar1 = *(int *)(param_1 + 0x330), iVar1 == 0)) ||
      ((*(byte *)(param_1 + 0x4c0) & 2) != 0)) || (*(int *)(iVar1 + 0xd8) == 0)) {
    return 1;
  }
  if ((0 < *(int *)(iVar1 + 0xcc)) && (fVar2 = (float10)FUN_00a13390(), fVar2 < (float10)0.1)) {
    return 1;
  }
  iVar1 = FUN_00dd3500(0xd0,&DAT_01b7bd48);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00a1ad60();
  }
  *(int *)(param_1 + 0x370) = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_00a1bef0(param_1,*(undefined4 *)(param_1 + 0x330),&DAT_01b7bd48);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x370);
      if (iVar1 != 0) {
        thunk_FUN_00a1bdd0();
        FUN_00dd4920(iVar1);
        *(undefined4 *)(param_1 + 0x370) = 0;
      }
      return 0;
    }
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    if ((*(byte *)(param_1 + 0x4a0) & 8) != 0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
      return 1;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    return 1;
  }
  return 0;
}

// 009FD350  FUN_009fd350  size=641  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_009fd350(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  iVar1 = 1;
  local_28 = iVar1;
  if ((param_1[0x130] & 2U) == 0) {
    uVar4 = 0;
    do {
      local_28 = iVar1;
      if (*(int *)((int)&DAT_0189edb8 + uVar4) == param_1[300]) break;
      uVar4 = uVar4 + 4;
      local_28 = 0;
    } while (uVar4 < 0xf0);
  }
  if (*(int *)(param_2 + 0x68) < 1) {
    local_28 = iVar1;
  }
  param_1[0x130] = param_1[0x130] & 0xfffffffd;
  _DAT_01f6c980 = param_1[300];
  local_24 = _DAT_01be9190;
  local_20 = _DAT_01be9194;
  local_1c = _DAT_01be9198;
  uVar4 = param_1[300] & 0xffff0000;
  local_18 = _DAT_01be919c;
  if (((uVar4 == 0x90000) || (uVar4 == 0xf0000)) || (uVar4 == 0xd0000)) {
    local_c = 1;
    local_14 = 1;
  }
  else {
    local_c = 0;
    local_14 = 0;
  }
  local_4 = (uint)((param_1[300] & 0xf0000U) == 0xe0000);
  if ((uVar4 == 0x90000) || (local_10 = 1, uVar4 == 0xa0000)) {
    local_10 = 0;
  }
  if ((0 < *(int *)(param_2 + 0xcc)) || (local_8 = 1, uVar4 == 0x50000)) {
    local_8 = 0;
  }
  iVar1 = FUN_00a17c30(param_2,param_3,param_4,param_5,&local_28,&DAT_01b7bd48);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1[300] == 0x11011) {
    FUN_00a0ba60(1);
  }
  if (local_28 == 1) {
    param_1[0x130] = param_1[0x130] | 2;
    return 1;
  }
  FUN_00a13340((param_1[300] & 0xff000000U) != 0);
  uVar2 = param_1[300] & 0xf0000;
  if (((((uVar2 == 0x10000) || (uVar2 == 0x20000)) || (uVar2 == 0xd0000)) ||
      ((uVar2 == 0xf0000 || (uVar2 == 0xe0000)))) || (uVar2 == 0x70000)) {
    FUN_00a13340(1);
  }
  uVar2 = param_1[300];
  if (((uVar2 & 0xf0000) == 0x50000) || ((uVar2 & 0xf0000) == 0xa0000)) {
    param_1[0xd0] = 1;
  }
  puVar3 = &DAT_01890128;
  do {
    if (uVar2 == *puVar3) {
      FUN_00a0bf60(uVar2 == 0x20110,1);
      break;
    }
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x1890198);
  if ((uVar4 == 0x90000) || (param_1[300] == 0xd5500)) {
    param_1[0xd9] = param_1[0xd9] | 0x400;
  }
  else {
    param_1[0xd9] = param_1[0xd9] & 0xfffffbff;
  }
  if ((*(byte *)(param_1 + 0x130) & 2) != 0) {
    (**(code **)(*param_1 + 0x20))();
  }
  if ((param_1[0x12d] & 0xf0000U) == 0x60000) {
    iVar1 = FUN_00a0bd30();
    if (iVar1 != 0) {
      *(undefined1 *)((int)param_1 + 0x44d) = 0;
    }
    iVar1 = FUN_00a0bce0();
    if ((iVar1 != 0) && (iVar1 = FUN_00a0bc90(), iVar1 != 0)) {
      *(undefined1 *)((int)param_1 + 0x44d) = 4;
    }
  }
  return 1;
}

// 009FD5E0  FUN_009fd5e0  size=69  [between]
bool __thiscall
FUN_009fd5e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = cModelDataManager::EntryModelData(param_2,param_6);
  if (iVar1 == 0) {
    return false;
  }
  *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) & 0xfffffffd;
  iVar1 = FUN_009fd350(iVar1,param_3,param_4,param_5);
  return iVar1 != 0;
}

// 009FD630  FUN_009fd630  size=102  [between]
void __thiscall FUN_009fd630(int param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x4c0) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_2 + 0x4b4);
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
  }
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_2 + 0x4bc);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_2 + 0x51c);
  FUN_00a12890(param_2);
  *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  return;
}

// 009FD6A0  FUN_009fd6a0  size=30  [between]
void __fastcall FUN_009fd6a0(int param_1)

{
  if ((*(int *)(param_1 + 0x518) != 0) && ((*(byte *)(*(int *)(param_1 + 0x518) + 0x4c8) & 3) != 0))
  {
    *(undefined4 *)(param_1 + 0x518) = 0;
  }
  return;
}

// 009FD6C0  cObj::vf0C  size=62  [class]
void __fastcall cObj::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x4dc) != 0) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  if (*(undefined4 **)(param_1 + 0x4dc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x4dc))(1);
    *(undefined4 *)(param_1 + 0x4dc) = 0;
  }
  return;
}

// 009FD700  FUN_009fd700  size=323  [callgraph]
void __fastcall FUN_009fd700(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x4b4);
  uVar1 = uVar3 & 0xf0000;
  if (uVar1 < 0xa0001) {
    if (uVar1 == 0xa0000) {
      *(undefined1 *)(param_1 + 0x44d) = 5;
      return;
    }
    if (uVar1 < 0x30001) {
      if (uVar1 == 0x30000) {
        iVar2 = FUN_009f9370(uVar3);
        *(bool *)(param_1 + 0x44d) = iVar2 == 0;
        return;
      }
      if (uVar1 == 0x10000) {
        *(undefined1 *)(param_1 + 0x44d) = 0;
        return;
      }
      if (uVar1 == 0x20000) {
        *(undefined1 *)(param_1 + 0x44d) = 1;
        return;
      }
    }
    else if (uVar1 == 0x90000) {
      *(undefined1 *)(param_1 + 0x44d) = 3;
      return;
    }
  }
  else if (uVar1 == 0xd0000) {
    if ((uVar3 & 0xf000) == 0x5000) {
      *(undefined1 *)(param_1 + 0x44d) = 3;
    }
    if ((uVar3 & 0xffff) == 0x401) {
      *(undefined1 *)(param_1 + 0x44d) = 3;
    }
    if ((uVar3 & 0xffff) == 0x402) {
      *(undefined1 *)(param_1 + 0x44d) = 3;
    }
  }
  else if (uVar1 == 0xe0000) {
    if ((uVar3 & 0xf000) == 0x5000) {
      *(undefined1 *)(param_1 + 0x44d) = 3;
      return;
    }
  }
  else if (uVar1 == 0xf0000) {
    if ((uVar3 & 0xf000) == 0x5000) {
      *(undefined1 *)(param_1 + 0x44d) = 3;
    }
    uVar3 = uVar3 & 0xffff;
    if ((0x3ff < uVar3) && (uVar3 < 0x411)) {
      *(undefined1 *)(param_1 + 0x44d) = 3;
    }
    if (uVar3 == 0x41a) {
      *(undefined1 *)(param_1 + 0x44d) = 3;
    }
    if ((0xd3f < uVar3) && (uVar3 < 0xd43)) {
      *(undefined1 *)(param_1 + 0x44d) = 3;
      return;
    }
  }
  return;
}

// 009FD850  FUN_009fd850  size=33  [callgraph]
bool __thiscall FUN_009fd850(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e03ea0(param_2);
  return *(int *)(param_1 + 0x4ec) == iVar1;
}

// 009FD880  FUN_009fd880  size=25  [callgraph]
bool __fastcall FUN_009fd880(int param_1)

{
  if (*(int *)(param_1 + 0x4dc) == 0) {
    return false;
  }
  return *(int *)(*(int *)(param_1 + 0x4dc) + 0x98) != 0;
}

// 009FD8A0  FUN_009fd8a0  size=695  [callgraph]
int __thiscall FUN_009fd8a0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_88;
  int local_80;
  int local_7c;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0x330) != 0) {
    iVar2 = *(int *)(param_1 + 0x334);
    sVar1 = *(short *)(param_1 + 0x324);
    local_7c = 0;
    local_50 = *param_5 - *param_4;
    local_4c = param_5[1] - param_4[1];
    local_48 = param_5[2] - param_4[2];
    if (0 < sVar1) {
      local_80 = 0;
      do {
        if ((iVar6 < 0) || (*(short *)(param_1 + 0x324) <= iVar6)) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 800) + local_80;
        }
        if (((*(byte *)(iVar5 + 0x38) & 1) != 0) &&
           (iVar5 = FUN_00a0a890(&local_40,&local_30,iVar6), iVar5 != 0)) {
          local_88 = local_30 - local_40;
          fVar4 = local_2c - local_3c;
          fVar3 = local_28 - local_38;
          local_1c = local_3c * 0.5;
          local_70 = local_40 * 0.5 + local_88;
          local_6c = local_1c + fVar4;
          local_68 = local_38 * 0.5 + fVar3;
          if (local_88 <= fVar4) {
            local_88 = fVar4;
          }
          if (local_88 <= fVar3) {
            local_88 = fVar3;
          }
          local_64 = 0x3f800000;
          D3DXVec3TransformNormal(&local_70,&local_70,iVar2 + 0x10);
          local_70 = *(float *)(iVar2 + 0x40) + local_70;
          local_6c = *(float *)(iVar2 + 0x44) + local_6c;
          local_68 = *(float *)(iVar2 + 0x48) + local_68;
          if ((0.0 <= (local_68 - param_4[2]) * local_48 +
                      (local_70 - *param_4) * local_50 + (local_6c - param_4[1]) * local_4c) &&
             (iVar5 = FUN_00d97a20(&fStack_60,param_4,param_5,&local_70,local_88), iVar5 != 0)) {
            if (local_7c == 0) {
              *param_2 = fStack_60;
              local_7c = 1;
              param_2[1] = fStack_5c;
              param_2[2] = fStack_58;
              param_2[3] = fStack_54;
              *param_3 = local_88;
            }
            else if (SQRT((param_4[1] - fStack_5c) * (param_4[1] - fStack_5c) +
                          (*param_4 - fStack_60) * (*param_4 - fStack_60) +
                          (param_4[2] - fStack_58) * (param_4[2] - fStack_58)) <
                     SQRT((param_4[1] - param_2[1]) * (param_4[1] - param_2[1]) +
                          (*param_4 - *param_2) * (*param_4 - *param_2) +
                          (param_4[2] - param_2[2]) * (param_4[2] - param_2[2]))) {
              *param_2 = fStack_60;
              param_2[1] = fStack_5c;
              param_2[2] = fStack_58;
              param_2[3] = fStack_54;
              *param_3 = local_88;
            }
          }
        }
        local_80 = local_80 + 0x70;
        iVar6 = iVar6 + 1;
      } while (iVar6 < sVar1);
    }
    return local_7c;
  }
  return 0;
}

// 009FDB60  FUN_009fdb60  size=528  [callgraph]
/* WARNING: Removing unreachable block (ram,0x009fdd41) */

void __thiscall FUN_009fdb60(int param_1,undefined4 param_2,short *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int local_114;
  int local_110;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  uint local_e0 [55];
  
  FUN_0118f7b0();
  if ((char)param_3[4] != '\0') {
    iVar2 = *(int *)(param_1 + 0x330);
    if (iVar2 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = 0 < *(int *)(iVar2 + 0xcc);
    }
    iVar3 = *(int *)(iVar2 + 0xb0);
    iVar2 = *(int *)(iVar2 + 0xa0);
    if (*(int *)(param_1 + 0x4b4) != 0x2020c) {
      FUN_009f8ce0(param_3);
    }
    local_114 = 0;
    if (0 < param_3[3]) {
      do {
        iVar8 = (param_3[2] + local_114) * 0x60 + iVar3;
        puVar1 = (undefined4 *)(iVar2 + (param_3[2] + local_114) * 0x14);
        switch(*(undefined1 *)(iVar8 + 0x54)) {
        case 0:
switchD_009fdc2b_caseD_0:
          FUN_00930610((int)*(short *)(iVar8 + 0x50),*(undefined4 *)(iVar8 + 0x4c),local_e0);
          FUN_0092f970(*(undefined2 *)(iVar8 + 0x52),local_e8);
          local_110 = param_1;
          if (*param_3 != -1) {
            iVar5 = (int)*param_3;
            iVar8 = *(int *)(param_1 + 0x360);
            if (*(int *)(param_1 + 0x360) == 0) {
              iVar8 = param_1;
            }
            if ((iVar5 < 0) || (*(short *)(iVar8 + 0x358) <= iVar5)) {
              local_110 = 0;
            }
            else {
              local_110 = iVar5 * 0xb0 + *(int *)(iVar8 + 0x350);
            }
          }
          piVar6 = (int *)FUN_009f8b60();
          local_e0[0] = *piVar6 << 0x10 | 0xb;
          piVar6 = (int *)FUN_00910da0();
          uVar7 = (**(code **)(*piVar6 + 0x1c))
                            (local_e4,local_e0,local_110 + 0x10,*puVar1,puVar1[2],(int)puVar1[3] / 3
                             ,*(undefined2 *)(puVar1 + 1),0);
          FUN_00910ab0(uVar7);
          break;
        case 2:
          if (bVar4) goto switchD_009fdc2b_caseD_0;
          break;
        case 3:
          if (!bVar4) goto switchD_009fdc2b_caseD_0;
        }
        local_114 = local_114 + 1;
      } while (local_114 < param_3[3]);
    }
  }
  return;
}

// 009FDD80  FUN_009fdd80  size=87  [callgraph]
undefined4 __thiscall FUN_009fdd80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00917740();
  iVar1 = *(int *)(param_1 + 0x330);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(iVar1 + 0xb8);
  iVar3 = 0;
  if (0 < *(int *)(iVar1 + 0xbc)) {
    do {
      FUN_009fdb60(param_2,iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x330) + 0xbc));
  }
  return 1;
}

// 009FDDE0  FUN_009fdde0  size=58  [callgraph]
void __fastcall FUN_009fdde0(int *param_1)

{
  if (param_1[0x13c] != 0) {
    FUN_00a805f0();
    return;
  }
  if ((*(byte *)(param_1 + 0x132) & 2) == 0) {
    *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) | 2;
    (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x009fde16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  return;
}

// 009FDE20  FUN_009fde20  size=50  [callgraph]
bool __fastcall FUN_009fde20(int param_1)

{
  uint uVar1;
  
  if (((((*(byte *)(param_1 + 0x4c8) & 3) == 0) &&
       (uVar1 = *(uint *)(param_1 + 0x4c0), (uVar1 & 4) == 0)) && ((uVar1 & 2) == 0)) &&
     (((uVar1 & 8) == 0 && ((uVar1 & 0x10000) == 0)))) {
    return 0 < *(short *)(param_1 + 0x324);
  }
  return false;
}

// 009FDE60  FUN_009fde60  size=799  [callgraph]
int FUN_009fde60(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char local_12c;
  char local_12b;
  undefined1 local_12a;
  char *local_128;
  char *local_124;
  char local_120 [32];
  char local_100 [256];
  
  iVar2 = FUN_00fdc7b0(param_1,0x5f);
  if (iVar2 != 0) {
    _strcpy_s(local_100,0x100,param_1);
    pcVar3 = _strtok_s(local_100,"_",&local_128);
    if (pcVar3 == (char *)0x0) {
      return -1;
    }
    uVar8 = 0;
    do {
      iVar2 = __stricmp(*(char **)((int)&PTR_DAT_018901fc + uVar8),pcVar3);
      if (iVar2 == 0) {
        _strcpy_s(local_120,0x20,param_1);
        pcVar3 = _strtok_s(local_120,"_",&local_124);
        pcVar4 = _strtok_s((char *)0x0,"_",&local_124);
        uVar8 = 0;
        while (iVar2 = __stricmp((&PTR_DAT_018901fc)[uVar8 * 2],pcVar3), iVar2 != 0) {
          uVar8 = uVar8 + 1;
          if (1 < uVar8) {
            return -1;
          }
        }
        local_128 = (char *)(&DAT_018901f8)[uVar8 * 2];
        if (local_128 == (char *)0xffffffff) {
          return -1;
        }
        piVar7 = &DAT_01890198;
        uVar8 = 0;
        while( true ) {
          local_12c = *pcVar4;
          local_12b = pcVar4[1];
          local_12a = 0;
          iVar2 = __stricmp((char *)piVar7[1],&local_12c);
          if (iVar2 == 0) break;
          uVar8 = uVar8 + 8;
          piVar7 = piVar7 + 2;
          if (0x5f < uVar8) {
            return -1;
          }
        }
        cVar1 = pcVar4[2];
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar2 = cVar1 + -0x30;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar2 = cVar1 + -0x57;
        }
        else {
          iVar2 = -1;
        }
        cVar1 = pcVar4[3];
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar9 = cVar1 + -0x30;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar9 = cVar1 + -0x57;
        }
        else {
          iVar9 = -1;
        }
        cVar1 = pcVar4[4];
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar6 = cVar1 + -0x30;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar6 = cVar1 + -0x57;
        }
        else {
          iVar6 = -1;
        }
        cVar1 = pcVar4[5];
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar5 = cVar1 + -0x30;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar5 = cVar1 + -0x57;
        }
        else {
          iVar5 = -1;
        }
        if (iVar2 < 0) {
          return -1;
        }
        if (iVar9 < 0) {
          return -1;
        }
        if (iVar6 < 0) {
          return -1;
        }
        if (iVar5 < 0) {
          return -1;
        }
        return (int)(local_128 + *piVar7 + ((iVar2 * 0x10 + iVar9) * 0x10 + iVar6) * 0x10 + iVar5);
      }
      uVar8 = uVar8 + 8;
    } while (uVar8 < 0x10);
  }
  piVar7 = &DAT_01890198;
  uVar8 = 0;
  while( true ) {
    local_12c = *param_1;
    local_12b = param_1[1];
    local_12a = 0;
    iVar2 = __stricmp((char *)piVar7[1],&local_12c);
    if (iVar2 == 0) break;
    uVar8 = uVar8 + 8;
    piVar7 = piVar7 + 2;
    if (0x5f < uVar8) {
      return -1;
    }
  }
  cVar1 = param_1[2];
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar2 = cVar1 + -0x30;
  }
  else if ((byte)(cVar1 + 0x9fU) < 6) {
    iVar2 = cVar1 + -0x57;
  }
  else {
    iVar2 = -1;
  }
  cVar1 = param_1[3];
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar9 = cVar1 + -0x30;
  }
  else if ((byte)(cVar1 + 0x9fU) < 6) {
    iVar9 = cVar1 + -0x57;
  }
  else {
    iVar9 = -1;
  }
  cVar1 = param_1[4];
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar6 = cVar1 + -0x30;
  }
  else if ((byte)(cVar1 + 0x9fU) < 6) {
    iVar6 = cVar1 + -0x57;
  }
  else {
    iVar6 = -1;
  }
  cVar1 = param_1[5];
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar5 = cVar1 + -0x30;
  }
  else if ((byte)(cVar1 + 0x9fU) < 6) {
    iVar5 = cVar1 + -0x57;
  }
  else {
    iVar5 = -1;
  }
  if (iVar2 < 0) {
    return -1;
  }
  if (iVar9 < 0) {
    return -1;
  }
  if (iVar6 < 0) {
    return -1;
  }
  if (iVar5 < 0) {
    return -1;
  }
  return ((iVar2 * 0x10 + iVar9) * 0x10 + iVar6) * 0x10 + *piVar7 + iVar5;
}

// 009FE180  FUN_009fe180  size=457  [callgraph]
undefined4 FUN_009fe180(char *param_1,size_t param_2,uint param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  char local_20 [32];
  
  puVar6 = &DAT_0165bfb4;
  if (param_4 != 0) {
    puVar6 = &DAT_0165bfac;
  }
  uVar4 = 0;
  do {
    if (*(uint *)((int)&DAT_0189eabc + uVar4) == param_3) {
      bVar1 = true;
      goto LAB_009fe1b4;
    }
    uVar4 = uVar4 + 0xc;
  } while (uVar4 < 0x300);
  bVar1 = false;
LAB_009fe1b4:
  uVar4 = 0;
  do {
    if (*(uint *)((int)&DAT_0189eac0 + uVar4) == param_3) {
      bVar2 = true;
      goto LAB_009fe1ca;
    }
    uVar4 = uVar4 + 0xc;
  } while (uVar4 < 0x300);
  bVar2 = false;
LAB_009fe1ca:
  if ((((param_3 == 0x1e012) || (param_3 == 0x1fff2)) || (param_3 == 0x1e013)) ||
     (param_3 == 0x1fff3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((bVar1) || (bVar2)) || (bVar3)) {
    puVar7 = &DAT_016416fa;
    if ((DAT_01bea064 & 0x8000) == 0) {
      puVar7 = &DAT_0165c260;
    }
  }
  else {
    puVar7 = &DAT_016416fa;
  }
  if ((param_3 & 0xff000000) == 0) {
    puVar5 = &DAT_01890198;
    uVar4 = 0;
    do {
      if (*puVar5 == (param_3 & 0xffff0000)) {
        _sprintf_s(param_1,param_2,"%s\\%s%04x%s%s",puVar5[1],puVar5[1],param_3 & 0xffff,puVar7,
                   puVar6);
        return 1;
      }
      uVar4 = uVar4 + 8;
      puVar5 = puVar5 + 2;
    } while (uVar4 < 0x60);
    return 0;
  }
  uVar4 = 0;
  local_20[0] = '\0';
  local_20[1] = '\0';
  local_20[2] = '\0';
  local_20[3] = '\0';
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  local_20[0x10] = '\0';
  local_20[0x11] = '\0';
  local_20[0x12] = '\0';
  local_20[0x13] = '\0';
  local_20[0x14] = '\0';
  local_20[0x15] = '\0';
  local_20[0x16] = '\0';
  local_20[0x17] = '\0';
  local_20[0x18] = '\0';
  local_20[0x19] = '\0';
  local_20[0x1a] = '\0';
  local_20[0x1b] = '\0';
  local_20[0x1c] = '\0';
  local_20[0x1d] = '\0';
  local_20[0x1e] = '\0';
  local_20[0x1f] = 0;
  do {
    if ((param_3 & 0xff000000) == (&DAT_018901f8)[uVar4 * 2]) {
      _strcpy_s(local_20,0x20,(&PTR_DAT_018901fc)[uVar4 * 2]);
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  if (local_20[0] != '\0') {
    puVar5 = &DAT_01890198;
    uVar4 = 0;
    do {
      if (*puVar5 == (param_3 & 0xf0000)) {
        _sprintf_s(param_1,param_2,"%s\\%s%04x%s%s",local_20,puVar5[1],param_3 & 0xffff,puVar7,
                   puVar6);
        return 1;
      }
      uVar4 = uVar4 + 8;
      puVar5 = puVar5 + 2;
    } while (uVar4 < 0x60);
  }
  return 0;
}

// 009FE410  FUN_009fe410  size=513  [callgraph]
undefined4 * FUN_009fe410(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char local_a0 [160];
  
  iVar8 = 0;
  uVar4 = 0;
  while ((*(int *)((int)&DAT_0189eab8 + uVar4) == 0 ||
         (*(int *)((int)&DAT_0189eab8 + uVar4) != param_1))) {
    uVar4 = uVar4 + 0xc;
    iVar8 = iVar8 + 1;
    if (0x2ff < uVar4) {
      return (undefined4 *)0x0;
    }
  }
  uVar4 = (&DAT_0189eabc)[iVar8 * 3];
  uVar5 = 0;
  do {
    if (*(uint *)((int)&DAT_0189eabc + uVar5) == uVar4) {
      bVar1 = true;
      goto LAB_009fe474;
    }
    uVar5 = uVar5 + 0xc;
  } while (uVar5 < 0x300);
  bVar1 = false;
LAB_009fe474:
  uVar5 = 0;
  do {
    if (*(uint *)((int)&DAT_0189eac0 + uVar5) == uVar4) {
      bVar2 = true;
      goto LAB_009fe48a;
    }
    uVar5 = uVar5 + 0xc;
  } while (uVar5 < 0x300);
  bVar2 = false;
LAB_009fe48a:
  if ((((uVar4 == 0x1e012) || (uVar4 == 0x1fff2)) || (uVar4 == 0x1e013)) || (uVar4 == 0x1fff3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((bVar1) || (bVar2)) || (bVar3)) {
    puVar9 = &DAT_016416fa;
    if ((DAT_01bea064 & 0x8000) == 0) {
      puVar9 = &DAT_0165c260;
    }
  }
  else {
    puVar9 = &DAT_016416fa;
  }
  if ((uVar4 & 0xff000000) == 0) {
    puVar6 = &DAT_01890198;
    uVar5 = 0;
    do {
      if (*puVar6 == (uVar4 & 0xffff0000)) {
        pcVar10 = (char *)puVar6[1];
        pcVar11 = pcVar10;
        goto LAB_009fe5e2;
      }
      uVar5 = uVar5 + 8;
      puVar6 = puVar6 + 2;
    } while (uVar5 < 0x60);
  }
  else {
    uVar5 = 0;
    local_a0[0] = '\0';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_a0[4] = '\0';
    local_a0[5] = '\0';
    local_a0[6] = '\0';
    local_a0[7] = '\0';
    local_a0[8] = '\0';
    local_a0[9] = '\0';
    local_a0[10] = '\0';
    local_a0[0xb] = '\0';
    local_a0[0xc] = '\0';
    local_a0[0xd] = '\0';
    local_a0[0xe] = '\0';
    local_a0[0xf] = '\0';
    local_a0[0x10] = '\0';
    local_a0[0x11] = '\0';
    local_a0[0x12] = '\0';
    local_a0[0x13] = '\0';
    local_a0[0x14] = '\0';
    local_a0[0x15] = '\0';
    local_a0[0x16] = '\0';
    local_a0[0x17] = '\0';
    local_a0[0x18] = '\0';
    local_a0[0x19] = '\0';
    local_a0[0x1a] = '\0';
    local_a0[0x1b] = '\0';
    local_a0[0x1c] = '\0';
    local_a0[0x1d] = '\0';
    local_a0[0x1e] = '\0';
    local_a0[0x1f] = 0;
    do {
      if ((uVar4 & 0xff000000) == (&DAT_018901f8)[uVar5 * 2]) {
        _strcpy_s(local_a0,0x20,(&PTR_DAT_018901fc)[uVar5 * 2]);
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 2);
    if (local_a0[0] != '\0') {
      puVar6 = &DAT_01890198;
      uVar5 = 0;
      do {
        if (*puVar6 == (uVar4 & 0xf0000)) {
          pcVar10 = local_a0;
          pcVar11 = (char *)puVar6[1];
LAB_009fe5e2:
          _sprintf_s(local_a0 + 0x20,0x80,"%s\\%s%04x%s%s",pcVar10,pcVar11,uVar4 & 0xffff,puVar9,
                     &DAT_0165bfb4);
          break;
        }
        uVar5 = uVar5 + 8;
        puVar6 = puVar6 + 2;
      } while (uVar5 < 0x60);
    }
  }
  iVar7 = FUN_00dec390(local_a0 + 0x20);
  if (iVar7 == 0) {
    return (undefined4 *)0x0;
  }
  return &DAT_0189eab8 + iVar8 * 3;
}

// 009FE620  FUN_009fe620  size=129  [callgraph]
undefined4 * FUN_009fe620(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_80 [128];
  
  iVar3 = 0;
  uVar1 = 0;
  while (((*(int *)((int)&DAT_0189eab8 + uVar1) == 0 ||
          (*(int *)((int)&DAT_0189eab8 + uVar1) != param_1)) ||
         (*(int *)((int)&DAT_0189eac0 + uVar1) == -1))) {
    uVar1 = uVar1 + 0xc;
    iVar3 = iVar3 + 1;
    if (0x2ff < uVar1) {
      return (undefined4 *)0x0;
    }
  }
  FUN_009fe180(local_80,0x80,(&DAT_0189eac0)[iVar3 * 3],0);
  iVar2 = FUN_00dec390(local_80);
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  return &DAT_0189eab8 + iVar3 * 3;
}

// 009FE6B0  FUN_009fe6b0  size=92  [callgraph]
undefined4 FUN_009fe6b0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar3 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_2) goto LAB_009fe6e1;
      uVar1 = puVar3[1];
      puVar3 = puVar3 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_2 & 0xffff0000) != 0x90000) {
    uVar2 = FUN_009f9d10(param_2);
    uVar2 = FUN_00e9e8f0(param_1,uVar2);
    return uVar2;
  }
LAB_009fe6e1:
  FUN_00de3540(0,0);
  return 0;
}

// 009FE710  FUN_009fe710  size=190  [callgraph]
void FUN_009fe710(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar5 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_1) {
        return;
      }
      uVar1 = puVar5[1];
      puVar5 = puVar5 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_1 & 0xffff0000) != 0x90000) {
    uVar2 = FUN_009f9d10(param_1);
    FUN_00e9e9d0(uVar2);
    iVar3 = FUN_009f9ed0(uVar2,param_2);
    if (iVar3 != 0) {
      iVar7 = 0;
      piVar6 = (int *)(iVar3 + 8);
      do {
        if (*piVar6 == 0) break;
        uVar4 = FUN_009f9d10(*piVar6);
        FUN_00e9e9d0(uVar4);
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar7 < 0x30);
    }
    iVar3 = FUN_009fe410(uVar2);
    if (iVar3 != 0) {
      FUN_00e9e9d0(*(undefined4 *)(iVar3 + 4));
    }
    iVar3 = FUN_009fe620(uVar2);
    if (iVar3 != 0) {
      FUN_00e9e9d0(*(undefined4 *)(iVar3 + 8));
    }
  }
  return;
}

// 009FE7D0  FUN_009fe7d0  size=190  [callgraph]
void FUN_009fe7d0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar5 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_1) {
        return;
      }
      uVar1 = puVar5[1];
      puVar5 = puVar5 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_1 & 0xffff0000) != 0x90000) {
    uVar2 = FUN_009f9d10(param_1);
    FUN_00e9ea80(uVar2);
    iVar3 = FUN_009f9ed0(uVar2,param_2);
    if (iVar3 != 0) {
      iVar7 = 0;
      piVar6 = (int *)(iVar3 + 8);
      do {
        if (*piVar6 == 0) break;
        uVar4 = FUN_009f9d10(*piVar6);
        FUN_00e9ea80(uVar4);
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar7 < 0x30);
    }
    iVar3 = FUN_009fe410(uVar2);
    if (iVar3 != 0) {
      FUN_00e9ea80(*(undefined4 *)(iVar3 + 4));
    }
    iVar3 = FUN_009fe620(uVar2);
    if (iVar3 != 0) {
      FUN_00e9ea80(*(undefined4 *)(iVar3 + 8));
    }
  }
  return;
}

// 009FEB00  cObj::setCustomParam  size=444  [class]
void __thiscall cObj::setCustomParam(byte *param_1,int *param_2)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *local_10;
  int local_c;
  
  uVar8 = (uint)*param_1;
  pbVar7 = param_1 + (byte)((char)((int)(uVar8 + 3) >> 2) * '\x04') + 4;
  bVar6 = 8;
  local_c = 0;
  pbVar9 = pbVar7;
  local_10 = pbVar7;
  if (uVar8 != 0) {
    do {
      switch(param_1[local_c + 4]) {
      case 1:
        param_2[0x13b] = *(int *)pbVar7;
        FUN_00a18be0(param_2);
      case 3:
        pbVar7 = pbVar7 + 4;
        break;
      case 2:
        pbVar7 = pbVar7 + 4;
        param_2[99] = 0;
        break;
      default:
        FUN_00dd5650(&DAT_0165c288,param_1[local_c + 4]);
        break;
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
        local_10 = local_10 + 2;
        break;
      case 0x40:
        *(byte *)(param_2 + 0x113) = *pbVar9;
      case 0x41:
      case 0x44:
        pbVar9 = pbVar9 + 1;
        break;
      case 0x42:
        *(byte *)((int)param_2 + 0x4c9) = *pbVar9;
        pbVar9 = pbVar9 + 1;
        break;
      case 0x43:
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar4 = 0;
        fVar2 = (float)bVar1 * 0.01;
        if (0 < (short)param_2[0xc9]) {
          iVar5 = 0;
          do {
            iVar3 = param_2[200];
            *(float *)(iVar3 + 0x10 + iVar5) = fVar2;
            iVar3 = iVar3 + iVar5;
            *(float *)(iVar3 + 0x14) = fVar2;
            iVar4 = iVar4 + 1;
            *(float *)(iVar3 + 0x18) = fVar2;
            iVar5 = iVar5 + 0x70;
            *(undefined4 *)(iVar3 + 0x1c) = 0x3f800000;
          } while (iVar4 < (short)param_2[0xc9]);
        }
        break;
      case 0x80:
        bVar6 = bVar6 - 4;
        param_2[0xce] = *pbVar9 >> (bVar6 & 0x1f) & 0xf;
        break;
      case 0xa0:
        bVar6 = bVar6 - 2;
        break;
      case 0xc0:
        bVar6 = bVar6 - 1;
        if ((short)param_2[0xc9] != 0) {
          FUN_00a0ba60(*pbVar9 >> (bVar6 & 0x1f) & 1);
        }
        break;
      case 0xc1:
        bVar6 = bVar6 - 1;
        if ((short)param_2[0xc9] != 0) {
          FUN_00a13340(*pbVar9 >> (bVar6 & 0x1f) & 1);
        }
        break;
      case 0xc2:
        bVar6 = bVar6 - 1;
        (**(code **)(*param_2 + 0x20))();
        break;
      case 0xc3:
      case 0xc4:
        bVar6 = bVar6 - 1;
      }
      if (local_10 < pbVar7) {
        local_10 = pbVar7;
      }
      if (pbVar9 < local_10) {
        pbVar9 = local_10;
      }
      if (bVar6 == 0) {
        pbVar9 = pbVar9 + 1;
        bVar6 = 8;
      }
      local_c = local_c + 1;
    } while (local_c < (int)uVar8);
  }
  return;
}

// 00A005F0  cObj::construct  size=172  [class]
void __thiscall
cObj::construct(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x4b0) = param_2;
  if (*(int *)(param_1 + 0x514) != 0) {
    FUN_00dd5650(&DAT_0165c37c);
    FUN_009fe7d0(*(undefined4 *)(param_1 + 0x4b4),*(undefined4 *)(param_1 + 0x4b8));
  }
  *(undefined4 *)(param_1 + 0x4a0) = param_3;
  *(undefined4 *)(param_1 + 0x4b8) = param_5;
  *(undefined4 *)(param_1 + 0x4b4) = param_4;
  *(undefined4 *)(param_1 + 0x4bc) = param_4;
  *(undefined4 *)(param_1 + 0x514) = 1;
  *(undefined4 *)(param_1 + 0x494) = *param_6;
  uVar1 = param_6[1];
  *(undefined4 *)(param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0x498) = uVar1;
  *(undefined4 *)(param_1 + 0x51c) = 0xffffffff;
  FUN_009fe710(param_4,param_5);
  *(undefined4 *)(param_1 + 0x520) = 1;
  return;
}

// 00A006A0  FUN_00a006a0  size=25  [between]
void FUN_00a006a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  cObj::construct(param_1,param_2,param_1,param_2,param_3);
  return;
}

// 00A006C0  FUN_00a006c0  size=105  [between]
void __fastcall FUN_00a006c0(int param_1)

{
  if (*(int *)(param_1 + 0x520) != 0) {
    FUN_009fe7d0(*(undefined4 *)(param_1 + 0x4b4),*(undefined4 *)(param_1 + 0x4b8));
  }
  if (*(int *)(param_1 + 0x4ec) != 0) {
    FUN_00a18c30(param_1);
  }
  FUN_0092f760(param_1 + 0x4cc);
  *(undefined4 *)(param_1 + 0x520) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x514) = 0;
  return;
}

// 00A00730  cObj::vf08  size=63  [class]
bool __fastcall cObj::vf08(int *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar2 = (undefined4 *)FUN_0092f750(param_1[300]);
  pcVar1 = *(code **)(*param_1 + 0x3c);
  param_1[0x133] = (int)puVar2;
  (*pcVar1)(*puVar2);
  if (param_1[300] == 0x700000) {
    return true;
  }
  iVar3 = FUN_00de44b0(&DAT_01657e1c,0);
  iVar4 = FUN_00de44b0(&DAT_0164518c,0);
  iVar5 = FUN_00de44b0(&DAT_01645174,0);
  iVar6 = FUN_00de44b0(&DAT_01645170,0);
  uVar7 = FUN_00de4550("_param.bxm",0);
  uVar8 = FUN_00de4500("CutInfo.bxm");
  if (iVar4 == 0) {
    if ((iVar5 == 0) || (iVar4 = iVar6, iVar6 == 0)) {
      iVar5 = FUN_00de4500("dummy.wtb");
      iVar4 = 0;
      if (iVar5 == 0) {
        iVar5 = FUN_00de4500("dummy.wta");
        iVar4 = FUN_00de4500("dummy.wtp");
      }
    }
  }
  else {
    iVar5 = 0;
  }
  if ((iVar3 == 0) && (iVar3 = param_1[0x127], iVar3 == 0)) {
    iVar3 = FUN_00de4500("dummy.wmb");
    param_1[0x130] = param_1[0x130] | 2;
  }
  FUN_00a09c00(param_1 + 0x125);
  iVar3 = cModelDataManager::EntryModelData(iVar3,uVar8);
  if (iVar3 == 0) {
    return false;
  }
  param_1[0x130] = param_1[0x130] & 0xfffffffd;
  iVar3 = FUN_009fd350(iVar3,iVar4,iVar5,uVar7);
  return iVar3 != 0;
}

// 00A0076F  FUN_00a0076f  size=327  [callgraph]
bool FUN_00a0076f(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_EDI;
  int iStack00000004;
  int iStack00000008;
  
  iStack00000008 = FUN_00de44b0(&DAT_01657e1c,0);
  iStack00000004 = FUN_00de44b0(&DAT_0164518c,0);
  iVar1 = FUN_00de44b0(&DAT_01645174,0);
  iVar2 = FUN_00de44b0(&DAT_01645170,0);
  uVar3 = FUN_00de4550("_param.bxm",0);
  uVar4 = FUN_00de4500("CutInfo.bxm");
  if (iStack00000004 == 0) {
    if ((iVar1 == 0) || (iStack00000004 = iVar2, iVar2 == 0)) {
      iVar1 = FUN_00de4500("dummy.wtb");
      iStack00000004 = 0;
      if (iVar1 == 0) {
        iVar1 = FUN_00de4500("dummy.wta");
        iStack00000004 = FUN_00de4500("dummy.wtp");
      }
    }
  }
  else {
    iVar1 = 0;
  }
  if ((iStack00000008 == 0) && (iStack00000008 = *(int *)(unaff_EDI + 0x49c), iStack00000008 == 0))
  {
    iStack00000008 = FUN_00de4500("dummy.wmb");
    *(uint *)(unaff_EDI + 0x4c0) = *(uint *)(unaff_EDI + 0x4c0) | 2;
  }
  FUN_00a09c00(unaff_EDI + 0x494);
  iVar2 = cModelDataManager::EntryModelData(iStack00000008,uVar4);
  if (iVar2 == 0) {
    return false;
  }
  *(uint *)(unaff_EDI + 0x4c0) = *(uint *)(unaff_EDI + 0x4c0) & 0xfffffffd;
  iVar1 = FUN_009fd350(iVar2,iStack00000004,iVar1,uVar3);
  return iVar1 != 0;
}

// 00A008C0  FUN_00a008c0  size=401  [callgraph]
undefined4 __thiscall
FUN_00a008c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar3 = (**(code **)(*param_1 + 8))();
    if (iVar3 == 0) {
      return 0;
    }
LAB_00a0092e:
    if (param_6 != 0) goto LAB_00a0098a;
  }
  else {
    puVar4 = (undefined4 *)FUN_0092f750(param_1[300]);
    pcVar1 = *(code **)(*param_1 + 0x3c);
    param_1[0x133] = (int)puVar4;
    (*pcVar1)(*puVar4);
    iVar3 = FUN_009fd350(param_2,param_3,param_4,param_5);
    if (iVar3 == 0) {
      return 0;
    }
    if (param_6 != 0) {
      FUN_009fd630(param_6);
      goto LAB_00a0092e;
    }
  }
  switchD_0080dbae::default();
  if ((*(byte *)(param_1 + 0x130) & 2) == 0) {
    FUN_009f8b80();
    FUN_009fd700();
  }
  if (param_1[0xdc] == 0) {
    uVar2 = param_1[300];
    if ((uVar2 & 0xf0000) == 0x20000) {
      if (((uVar2 & 0xffff) != 0x91) && ((uVar2 & 0xffff) != 0x221)) goto LAB_00a009d1;
    }
    else if (((uVar2 & 0xf0000) == 0x30000) && ((uVar2 & 0xffff) != 0x90)) goto LAB_00a009d1;
  }
  else {
LAB_00a009d1:
    iVar3 = param_1[300];
    iVar5 = FUN_00c13980(iVar3);
    if ((((iVar5 == 0) && (iVar5 = FUN_00c139a0(iVar3), iVar5 == 0)) &&
        (iVar5 = FUN_00c139f0(iVar3), iVar5 == 0)) &&
       ((((iVar5 = FUN_00c13a30(iVar3), iVar5 == 0 && (iVar5 = FUN_00c13a70(iVar3), iVar5 == 0)) &&
         (iVar5 = FUN_00c13a90(iVar3), iVar5 == 0)) && (iVar3 = FUN_00c13ab0(iVar3), iVar3 == 0))))
    {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      goto LAB_00a0098a;
    }
  }
  param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
LAB_00a0098a:
  if (param_1[0x147] == -1) {
    iVar3 = FUN_00a4af90(1);
    param_1[0x147] = iVar3;
  }
  return 1;
}

// 00A00A60  FUN_00a00a60  size=353  [callgraph]
undefined4 FUN_00a00a60(uint param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar6 = &DAT_0189e7b8;
    uVar2 = DAT_0189e7b8;
    do {
      if (uVar2 == param_1) {
        return 1;
      }
      uVar2 = puVar6[1];
      puVar6 = puVar6 + 1;
    } while (uVar2 != 0xffffffff);
  }
  if ((param_1 & 0xffff0000) == 0x90000) {
    return 1;
  }
  uVar3 = FUN_009f9d10(param_1);
  iVar4 = FUN_00e9eeb0(uVar3);
  if (iVar4 == 0) {
    return 0;
  }
  iVar9 = 0;
  iVar4 = FUN_009f9ed0(param_1,param_2);
  if (iVar4 != 0) {
    piVar7 = (int *)(iVar4 + 8);
    do {
      if (*piVar7 == 0) break;
      uVar3 = FUN_009f9d10(*piVar7);
      iVar5 = FUN_00e9eeb0(uVar3);
      if (iVar5 == 0) goto LAB_00a00b44;
      iVar9 = iVar9 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar9 < 0x30);
  }
  iVar5 = FUN_009fe410(param_1);
  if (iVar5 != 0) {
    uVar3 = FUN_009f9d10(*(undefined4 *)(iVar5 + 4));
    iVar5 = FUN_00e9eeb0(uVar3);
    if (iVar5 == 0) goto LAB_00a00b44;
  }
  iVar5 = FUN_009fe620(param_1);
  if (iVar5 != 0) {
    uVar3 = FUN_009f9d10(*(undefined4 *)(iVar5 + 8));
    iVar5 = FUN_00e9eeb0(uVar3);
    if (iVar5 == 0) {
LAB_00a00b44:
      uVar3 = FUN_009f9d10(param_1);
      FUN_00e9e780(uVar3);
      iVar9 = iVar9 + -1;
      if (-1 < iVar9) {
        puVar8 = (uint *)(iVar4 + 8 + iVar9 * 4);
        do {
          uVar2 = *puVar8;
          if (((uVar2 & 0xf0000) == 0x20000) || ((uVar2 & 0xf0000) == 0xf0000)) {
            iVar4 = 0;
            uVar1 = DAT_0189e8a0;
            while (uVar1 != 0xffffffff) {
              if (uVar1 == uVar2) {
                uVar2 = (&DAT_0189e8a4)[iVar4 * 2];
                break;
              }
              iVar5 = iVar4 * 2;
              iVar4 = iVar4 + 1;
              uVar1 = (&DAT_0189e8a8)[iVar5];
            }
          }
          FUN_00e9e780(uVar2);
          puVar8 = puVar8 + -1;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
      }
      return 0;
    }
  }
  return 1;
}

// 00A00BD0  FUN_00a00bd0  size=204  [callgraph]
void FUN_00a00bd0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar4 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_1) {
        return;
      }
      uVar1 = puVar4[1];
      puVar4 = puVar4 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_1 & 0xffff0000) != 0x90000) {
    uVar2 = FUN_009f9d10(param_1);
    FUN_00e9e780(uVar2);
    iVar3 = FUN_009f9ed0(param_1,param_2);
    if (iVar3 != 0) {
      iVar6 = 0;
      piVar5 = (int *)(iVar3 + 8);
      do {
        if (*piVar5 == 0) break;
        uVar2 = FUN_009f9d10(*piVar5);
        FUN_00e9e780(uVar2);
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < 0x30);
    }
    iVar3 = FUN_009fe410(param_1);
    if (iVar3 != 0) {
      uVar2 = FUN_009f9d10(*(undefined4 *)(iVar3 + 4));
      FUN_00e9e780(uVar2);
    }
    iVar3 = FUN_009fe620(param_1);
    if (iVar3 != 0) {
      uVar2 = FUN_009f9d10(*(undefined4 *)(iVar3 + 8));
      FUN_00e9e780(uVar2);
    }
  }
  return;
}

// 00A00CA0  FUN_00a00ca0  size=241  [callgraph]
undefined4 FUN_00a00ca0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar4 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_1) {
        return 1;
      }
      uVar1 = puVar4[1];
      puVar4 = puVar4 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_1 & 0xffff0000) == 0x90000) {
    return 1;
  }
  uVar2 = FUN_009f9d10(param_1);
  iVar3 = FUN_00e9e7c0(uVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_009f9ed0(param_1,param_2);
  if (iVar3 != 0) {
    iVar5 = 0;
    piVar6 = (int *)(iVar3 + 8);
    do {
      if (*piVar6 == 0) break;
      uVar2 = FUN_009f9d10(*piVar6);
      iVar3 = FUN_00e9e7c0(uVar2);
      if (iVar3 == 0) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 0x30);
  }
  iVar3 = FUN_009fe410(param_1);
  if (iVar3 != 0) {
    uVar2 = FUN_009f9d10(*(undefined4 *)(iVar3 + 4));
    iVar3 = FUN_00e9e7c0(uVar2);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = FUN_009fe620(param_1);
  if (iVar3 != 0) {
    uVar2 = FUN_009f9d10(*(undefined4 *)(iVar3 + 8));
    iVar3 = FUN_00e9e7c0(uVar2);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00A00DA0  FUN_00a00da0  size=205  [callgraph]
undefined4 FUN_00a00da0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar4 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_1) {
        return 1;
      }
      uVar1 = puVar4[1];
      puVar4 = puVar4 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_1 & 0xffff0000) == 0x90000) {
    return 1;
  }
  uVar2 = FUN_009f9d10(param_1);
  iVar3 = FUN_00e9e860(uVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_009f9ed0(param_1,param_2);
  if (iVar3 != 0) {
    iVar5 = 0;
    piVar6 = (int *)(iVar3 + 8);
    do {
      if (*piVar6 == 0) break;
      uVar2 = FUN_009f9d10(*piVar6);
      iVar3 = FUN_00e9e860(uVar2);
      if (iVar3 == 0) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 0x30);
  }
  iVar3 = FUN_009fe410(param_1);
  if (iVar3 != 0) {
    uVar2 = FUN_009f9d10(*(undefined4 *)(iVar3 + 4));
    iVar3 = FUN_00e9e860(uVar2);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00A00E70  FUN_00a00e70  size=265  [callgraph]
undefined4 FUN_00a00e70(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar5 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_1) {
        return 1;
      }
      uVar1 = puVar5[1];
      puVar5 = puVar5 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_1 & 0xffff0000) == 0x90000) {
    return 1;
  }
  iVar2 = FUN_00e9e960(param_1,0);
  if (iVar2 == 0) {
    uVar3 = FUN_009f9d10(param_1);
    iVar2 = FUN_00e9e860(uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = FUN_009f9ed0(param_1,param_2);
  if (iVar2 != 0) {
    iVar7 = 0;
    piVar6 = (int *)(iVar2 + 8);
    do {
      iVar2 = *piVar6;
      if (iVar2 == 0) break;
      iVar4 = FUN_00e9e960(iVar2,0);
      if (iVar4 == 0) {
        uVar3 = FUN_009f9d10(iVar2);
        iVar2 = FUN_00e9e860(uVar3);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar7 < 0x30);
  }
  iVar2 = FUN_009fe410(param_1);
  if ((iVar2 != 0) && (iVar7 = FUN_00e9e960(*(undefined4 *)(iVar2 + 4),0), iVar7 == 0)) {
    uVar3 = FUN_009f9d10(*(undefined4 *)(iVar2 + 4));
    iVar2 = FUN_00e9e860(uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00A00F80  FUN_00a00f80  size=241  [callgraph]
undefined4 FUN_00a00f80(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar4 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_1) {
        return 1;
      }
      uVar1 = puVar4[1];
      puVar4 = puVar4 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_1 & 0xffff0000) == 0x90000) {
    return 1;
  }
  uVar2 = FUN_009f9d10(param_1);
  iVar3 = FUN_00e9e810(uVar2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_009f9ed0(param_1,param_2);
  if (iVar3 != 0) {
    iVar5 = 0;
    piVar6 = (int *)(iVar3 + 8);
    do {
      if (*piVar6 == 0) break;
      uVar2 = FUN_009f9d10(*piVar6);
      iVar3 = FUN_00e9e810(uVar2);
      if (iVar3 == 0) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 0x30);
  }
  iVar3 = FUN_009fe410(param_1);
  if (iVar3 != 0) {
    uVar2 = FUN_009f9d10(*(undefined4 *)(iVar3 + 4));
    iVar3 = FUN_00e9e810(uVar2);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = FUN_009fe620(param_1);
  if (iVar3 != 0) {
    uVar2 = FUN_009f9d10(*(undefined4 *)(iVar3 + 8));
    iVar3 = FUN_00e9e810(uVar2);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00A01080  FUN_00a01080  size=239  [callgraph]
undefined4 FUN_00a01080(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  if (DAT_0189e7b8 != 0xffffffff) {
    puVar4 = &DAT_0189e7b8;
    uVar1 = DAT_0189e7b8;
    do {
      if (uVar1 == param_1) {
        return 0;
      }
      uVar1 = puVar4[1];
      puVar4 = puVar4 + 1;
    } while (uVar1 != 0xffffffff);
  }
  if ((param_1 & 0xffff0000) == 0x90000) {
    return 0;
  }
  uVar2 = FUN_009f9d10(param_1);
  iVar3 = FUN_00e9e8b0(uVar2);
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = FUN_009f9ed0(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar5 = 0;
  piVar6 = (int *)(iVar3 + 8);
  do {
    if (*piVar6 == 0) break;
    uVar2 = FUN_009f9d10(*piVar6);
    iVar3 = FUN_00e9e8b0(uVar2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar5 < 0x30);
  iVar3 = FUN_009fe410(param_1);
  if (iVar3 != 0) {
    uVar2 = FUN_009f9d10(*(undefined4 *)(iVar3 + 4));
    iVar3 = FUN_00e9e8b0(uVar2);
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar3 = FUN_009fe620(param_1);
  if (iVar3 != 0) {
    uVar2 = FUN_009f9d10(*(undefined4 *)(iVar3 + 8));
    FUN_00e9e8b0(uVar2);
  }
  return 0;
}

