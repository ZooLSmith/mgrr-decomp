// src/object/bh0056/Bh0056.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040D3C0..00AE27F0, 65 functions

#include "types.h"

// 0040D3C0  Bh0056::vf40  size=39  [class]
undefined4 Bh0056::vf40(void)

{
  int iVar1;
  
  iVar1 = Bh0140::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_008f3100("_hvk_1",1);
  return 1;
}

// 0040D3F0  FUN_0040d3f0  size=33  [between]
void FUN_0040d3f0(void)

{
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  return;
}

// 0040D580  FUN_0040d580  size=207  [between]
void FUN_0040d580(undefined4 *param_1,float *param_2)

{
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  if (param_2[2] != 0.0) {
    D3DXMatrixRotationZ(local_50,param_2[2]);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  if (param_2[1] != 0.0) {
    D3DXMatrixRotationY(local_50,param_2[1]);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  if (*param_2 != 0.0) {
    D3DXMatrixRotationX(local_50,*param_2);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  return;
}

// 0040D650  FUN_0040d650  size=207  [between]
void FUN_0040d650(undefined4 *param_1,float *param_2)

{
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[5] = 0x3f800000;
  *param_1 = 0x3f800000;
  if (param_2[2] != 0.0) {
    D3DXMatrixRotationZ(local_50,param_2[2]);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  if (param_2[1] != 0.0) {
    D3DXMatrixRotationY(local_50,param_2[1]);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  if (*param_2 != 0.0) {
    D3DXMatrixRotationX(local_50,*param_2);
    D3DXMatrixMultiply(param_1,auStack_58,param_1);
  }
  return;
}

// 0040D7C0  FUN_0040d7c0  size=55  [between]
void FUN_0040d7c0(void)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  return;
}

// 0040D800  Bh0056::Bh0056_2  size=61  [class]
void __fastcall Bh0056::Bh0056_2(undefined4 *param_1)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  return;
}

// 0040DDE0  Bh0056::vf310  size=3  [class]
void Bh0056::vf310(void)

{
  return;
}

// 0040DDF0  Bh0056::vf04  size=6  [class]
undefined * Bh0056::vf04(void)

{
  return &DAT_01b34b68;
}

// 0040E050  Bh0056::Bh0056  size=18  [class]
undefined4 * __fastcall Bh0056::Bh0056(undefined4 *param_1)

{
  BehaviorBh::BehaviorBh();
  *param_1 = vftable;
  return param_1;
}

// 0040E070  Bh0056::vf00  size=82  [class]
undefined4 * __thiscall Bh0056::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0040E100  FUN_0040e100  size=510  [between]
undefined4 FUN_0040e100(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_6c;
  float local_68;
  float local_60;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_80 = param_2[0xc];
  local_7c = param_2[0xd];
  local_78 = param_2[0xe];
  local_6c = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
  local_68 = SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6]);
  fVar2 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
  local_c8 = param_2[6] / fVar2;
  fVar1 = param_2[10];
  fVar3 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar2));
  local_c4 = (float)fVar3;
  fVar4 = (float10)fpatan((float10)local_c8,(float10)(fVar1 / fVar2));
  local_60 = (float)fVar4;
  fVar5 = (float10)fpatan((float10)param_2[1] / (float10)local_68,
                          (float10)*param_2 / (float10)local_6c);
  fVar4 = (float10)0;
  local_88 = (float)fVar4;
  local_8c = (float)fVar4;
  local_90 = (float)fVar4;
  local_94 = (float)fVar4;
  local_9c = (float)fVar4;
  local_a0 = (float)fVar4;
  local_a4 = (float)fVar4;
  local_a8 = (float)fVar4;
  local_b0 = (float)fVar4;
  local_b4 = (float)fVar4;
  local_b8 = (float)fVar4;
  local_bc = (float)fVar4;
  local_84 = 0x3f800000;
  local_98 = 0x3f800000;
  local_ac = 0x3f800000;
  local_c0 = 0x3f800000;
  if (fVar4 != fVar5) {
    D3DXMatrixRotationZ(local_50,(float)fVar5);
    D3DXMatrixMultiply(&local_c8,auStack_58,&local_c8);
    fVar3 = (float10)local_c4;
  }
  if ((float10)0 != fVar3) {
    D3DXMatrixRotationY(local_50,(float)fVar3);
    D3DXMatrixMultiply(&local_c8,auStack_58,&local_c8);
  }
  if (local_60 != 0.0) {
    D3DXMatrixRotationX(local_50,local_60);
    D3DXMatrixMultiply(&local_c8,auStack_58,&local_c8);
  }
  local_90 = local_80;
  local_8c = local_7c;
  local_88 = local_78;
  FUN_01005190(&local_c0);
  return param_1;
}

// 0040E300  Bh0056::vf54  size=575  [class]
void __fastcall Bh0056::vf54(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float afStack_190 [2];
  undefined4 uStack_188;
  float local_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  float fStack_134;
  float fStack_130;
  float fStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [56];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [64];
  undefined1 auStack_58 [84];
  
  Bh0140::vf54();
  if ((*(byte *)(param_1 + 0x4c0) & 1) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x2c))(&local_184,"_hvk_1");
    uStack_148 = *(undefined4 *)(param_1 + 0x40);
    uStack_144 = *(undefined4 *)(param_1 + 0x44);
    uStack_140 = *(undefined4 *)(param_1 + 0x48);
    fStack_134 = SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                      *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                      *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18));
    fStack_130 = SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                      *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                      *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28));
    fVar3 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
                 *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
                 *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
    fVar1 = *(float *)(param_1 + 0x28);
    fVar2 = *(float *)(param_1 + 0x38);
    fVar4 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x18) / fVar3));
    afStack_190[0] = (float)fVar4;
    fVar5 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
    fStack_128 = (float)fVar5;
    fVar6 = (float10)fpatan((float10)*(float *)(param_1 + 0x14) / (float10)fStack_130,
                            (float10)*(float *)(param_1 + 0x10) / (float10)fStack_134);
    fVar5 = (float10)0;
    fStack_150 = (float)fVar5;
    fStack_154 = (float)fVar5;
    fStack_158 = (float)fVar5;
    fStack_15c = (float)fVar5;
    fStack_164 = (float)fVar5;
    fStack_168 = (float)fVar5;
    fStack_16c = (float)fVar5;
    fStack_170 = (float)fVar5;
    fStack_178 = (float)fVar5;
    fStack_17c = (float)fVar5;
    fStack_180 = (float)fVar5;
    local_184 = (float)fVar5;
    uStack_14c = 0x3f800000;
    uStack_160 = 0x3f800000;
    uStack_174 = 0x3f800000;
    uStack_188 = 0x3f800000;
    if (fVar5 != fVar6) {
      D3DXMatrixRotationZ(auStack_118,(float)fVar6);
      D3DXMatrixMultiply(afStack_190,auStack_120,afStack_190);
      fVar4 = (float10)afStack_190[0];
    }
    if ((float10)0 != fVar4) {
      D3DXMatrixRotationY(auStack_98,(float)fVar4);
      D3DXMatrixMultiply(afStack_190,auStack_a0,afStack_190);
    }
    if (fStack_128 != 0.0) {
      D3DXMatrixRotationX(auStack_d8,fStack_128);
      D3DXMatrixMultiply(afStack_190,auStack_e0,afStack_190);
    }
    fStack_158 = (float)uStack_148;
    fStack_154 = (float)uStack_144;
    fStack_150 = (float)uStack_140;
    FUN_01005190(&uStack_188);
    FUN_00915780(auStack_58);
  }
  return;
}

// 00A8F590  FUN_00a8f590  size=99  [callgraph]
undefined4 __thiscall FUN_00a8f590(int param_1,int param_2,int param_3)

{
  LONG LVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 != *(int *)(param_2 + 0x604)) {
    LVar1 = InterlockedIncrement((LONG *)(param_1 + 0xdc));
    uVar2 = LVar1 - 1;
    if (0x7f < uVar2) {
      FUN_00dd5650(&DAT_01664e84);
      return 0;
    }
    *(int *)(param_1 + 0xe0 + uVar2 * 8) = param_2;
    *(int *)(param_1 + 0xe4 + uVar2 * 8) = param_3;
  }
  return 1;
}

// 00A8F620  Bh0056::vf308  size=21  [class]
void Bh0056::vf308(undefined4 param_1)

{
  FUN_00c31470(1,param_1);
  return;
}

// 00A8F640  FUN_00a8f640  size=21  [between]
void __fastcall FUN_00a8f640(int param_1)

{
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  *(undefined4 *)(param_1 + 0x8a4) = 0;
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  return;
}

// 00A8F660  FUN_00a8f660  size=47  [between]
void __thiscall FUN_00a8f660(int param_1,int param_2,int param_3,int param_4)

{
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x8a4) = 1;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x8a0) = 1;
  }
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0x8a8) = 1;
  }
  return;
}

// 00A8F690  Bh0056::vfC8  size=113  [class]
void __thiscall Bh0056::vfC8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e6c60(param_2);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(param_2);
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091acf0(param_2);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(param_2);
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091acf0(param_2);
  }
  return;
}

// 00A8F710  Bh0056::vfDC  size=68  [class]
uint __fastcall Bh0056::vfDC(int param_1)

{
  uint uVar1;
  uint local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xec))(&local_4);
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    uVar1 = FUN_00916970();
    return uVar1 | local_4;
  }
  return local_4;
}

// 00A8F760  Bh0056::vfEC  size=3  [class]
undefined4 Bh0056::vfEC(void)

{
  return 0;
}

// 00A8F770  Bh0056::vf1B4  size=3  [class]
void Bh0056::vf1B4(void)

{
  return;
}

// 00A8F780  Bh0056::vf1D0  size=34  [class]
void __thiscall Bh0056::vf1D0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x8ac) == 0) || (*(int *)(param_2 + 0xec) != 0)) {
    FUN_00a8e5d0(param_1,param_2,0);
  }
  return;
}

// 00A8F7B0  FUN_00a8f7b0  size=13  [between]
void __thiscall FUN_00a8f7b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x8a8) = param_2;
  return;
}

// 00A8F7C0  Bh0056::vf114  size=21  [class]
void __fastcall Bh0056::vf114(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a8f7d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}

// 00A8F7E0  Bh0056::vf304  size=42  [class]
void __thiscall Bh0056::vf304(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xe0))(param_2,param_3,0,0);
  }
  return;
}

// 00A8F810  Bh0056::vf300  size=40  [class]
void __thiscall Bh0056::vf300(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xe4))(param_2,param_3,0);
  }
  return;
}

// 00A8F840  FUN_00a8f840  size=89  [between]
void __thiscall FUN_00a8f840(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)*(short *)(param_1 + 0x324);
  iVar4 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      if ((((-1 < iVar4) && (iVar4 < iVar1)) &&
          (iVar1 = *(int *)(param_1 + 800) + iVar3, iVar1 != 0)) &&
         (iVar2 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x40),param_2), iVar2 != 0))
      {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
      }
      iVar1 = (int)*(short *)(param_1 + 0x324);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar4 < iVar1);
  }
  return;
}

// 00A8F8A0  FUN_00a8f8a0  size=117  [between]
void __fastcall FUN_00a8f8a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)*(short *)(param_1 + 0x324);
  iVar4 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      if (((-1 < iVar4) && (iVar4 < iVar1)) && (iVar1 = *(int *)(param_1 + 800) + iVar3, iVar1 != 0)
         ) {
        iVar2 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x40),"appear");
        if (iVar2 == 0) {
          iVar2 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x40),&DAT_0163bdcc);
          if (iVar2 != 0) {
            *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
          }
        }
        else {
          *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
        }
      }
      iVar1 = (int)*(short *)(param_1 + 0x324);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar4 < iVar1);
  }
  return;
}

// 00A8F920  FUN_00a8f920  size=117  [between]
void __fastcall FUN_00a8f920(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)*(short *)(param_1 + 0x324);
  iVar4 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      if (((-1 < iVar4) && (iVar4 < iVar1)) && (iVar1 = *(int *)(param_1 + 800) + iVar3, iVar1 != 0)
         ) {
        iVar2 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x40),&DAT_0163bdcc);
        if (iVar2 == 0) {
          iVar2 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x40),"appear");
          if (iVar2 != 0) {
            *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
          }
        }
        else {
          *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe;
        }
      }
      iVar1 = (int)*(short *)(param_1 + 0x324);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar4 < iVar1);
  }
  return;
}

// 00A8F9A0  Bh0056::vf14C  size=5  [class]
undefined4 Bh0056::vf14C(void)

{
  return 0;
}

// 00A8F9B0  Bh0056::vf154  size=23  [class]
void __thiscall Bh0056::vf154(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x16c))(param_3,param_4);
  return;
}

// 00A8FA20  FUN_00a8fa20  size=37  [between]
bool __thiscall FUN_00a8fa20(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x884) == 0) {
    return false;
  }
  cVar1 = FUN_00928e50(param_2);
  return cVar1 != '\0';
}

// 00A8FAB0  Bh0056::vf314  size=14  [class]
void Bh0056::vf314(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x18) = 0x42000;
  return;
}

// 00A8FAC0  Bh0056::vf2F4  size=10  [class]
void __fastcall Bh0056::vf2F4(int param_1)

{
  *(undefined1 *)(param_1 + 0xa68) = 1;
  return;
}

// 00A8FAD0  Bh0056::vf2F0  size=48  [class]
short __fastcall Bh0056::vf2F0(int param_1)

{
  float10 fVar1;
  undefined2 in_AX;
  byte bVar2;
  float10 fVar3;
  
  bVar2 = (byte)((ushort)in_AX >> 8);
  if (*(int *)(param_1 + 0x884) != 0) {
    fVar3 = (float10)FUN_00928de0();
    fVar1 = (float10)(float)(undefined *)0x0;
    bVar2 = fVar3 < fVar1 | (byte)((ushort)((ushort)(NAN(fVar3) || NAN(fVar1)) << 10) >> 8) |
            (byte)((ushort)((ushort)(fVar3 == fVar1) << 0xe) >> 8);
    if (fVar3 < fVar1 != (fVar3 == fVar1)) {
      return CONCAT11(bVar2,*(undefined1 *)(param_1 + 0xa68));
    }
  }
  return (ushort)bVar2 << 8;
}

// 00A8FB00  Bh0056::vfA4  size=1  [class]
void Bh0056::vfA4(void)

{
  return;
}

// 00A98E10  Bh0056::vf7C  size=40  [class]
void __thiscall Bh0056::vf7C(int param_1,undefined4 param_2,undefined4 param_3)

{
  Bh0064::vf7C(param_2,param_3);
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091ea00(param_1);
  }
  return;
}

// 00A98E40  Bh0056::vf78  size=45  [class]
void __thiscall Bh0056::vf78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Bh0064::vf78(param_2,param_3,param_4);
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091ea00(param_1);
  }
  return;
}

// 00A98E70  Bh0056::vf28  size=37  [class]
void __thiscall Bh0056::vf28(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4e0) = param_2;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a98e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x124))();
    return;
  }
  return;
}

// 00A98EA0  Bh0056::vf3C  size=61  [class]
void __thiscall Bh0056::vf3C(int param_1,undefined4 param_2)

{
  Bh0064::vf3C(param_2);
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091c760(param_2);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(param_2);
  }
  return;
}

// 00A98EE0  Bh0056::vf2C  size=100  [class]
void __fastcall Bh0056::vf2C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x4b4);
  uVar2 = *(undefined4 *)(param_1 + 0x4ec);
  uVar4 = FUN_009f8b40();
  FUN_00957480(uVar1,uVar2,param_1 + 0x130,uVar4);
  if (*(int *)(param_1 + 0x588) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x7bc);
    iVar3 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar3 + 0x2c) = 1;
    *(undefined4 *)(iVar3 + 0x30) = uVar1;
    iVar3 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_1 + 0x7c0);
    *(undefined4 *)(iVar3 + 0x98) = 1;
  }
  return;
}

// 00A990D0  Bh0056::vf30  size=154  [class]
void __fastcall Bh0056::vf30(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  iVar3 = *(int *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x674) = 1;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x3c) == 0) {
      puVar1 = (undefined4 *)FUN_009f8b60();
      uVar4 = *puVar1;
      iVar3 = *(int *)(param_1 + 0x588);
    }
    else {
      uVar4 = *(undefined4 *)(iVar3 + 0x40);
    }
    *(undefined4 *)(iVar3 + 0x40) = uVar4;
    *(undefined4 *)(iVar3 + 0x3c) = 1;
  }
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar5);
      if ((iVar3 != 0) && (iVar3 = FUN_00b8c050(), iVar3 != 0)) {
        return;
      }
    }
    piVar2 = (int *)FUN_00c206d0();
    (**(code **)(*piVar2 + 4))(5,*(undefined4 *)(param_1 + 0x4f0),param_1 + 0x40);
  }
  return;
}

// 00A99170  Bh0056::vf1C  size=56  [class]
void __fastcall Bh0056::vf1C(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 200);
  param_1[0x130] = param_1[0x130] | 1;
  (*pcVar1)(1);
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1ec] + 0x88))();
    FUN_008f3cb0(param_1);
  }
  return;
}

// 00A99210  Bh0056::vf20  size=20  [class]
void __fastcall Bh0056::vf20(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 200);
  param_1[0x130] = param_1[0x130] & 0xfffffffe;
  (*pcVar1)(0);
  return;
}

// 00A99270  Bh0056::vf168  size=15  [class]
void __fastcall Bh0056::vf168(int param_1)

{
  *(undefined4 *)(param_1 + 0x8a4) = 1;
  Bh0064::vf168();
  return;
}

// 00A99280  FUN_00a99280  size=268  [between]
void __fastcall FUN_00a99280(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EDI;
  int local_4;
  
  if (*(int *)(param_1 + 0x7b0) != 0) {
    *(undefined4 *)(param_1 + 0x8f0) = 0x18a;
    *(undefined4 *)(param_1 + 0x8f4) = 0x32;
    *(undefined4 *)(param_1 + 0x8fc) = 0;
    *(undefined1 *)(param_1 + 0x900) = 0;
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    *(undefined1 *)(param_1 + 0x901) = 7;
    local_4 = param_1;
    (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&local_4,0);
    if (unaff_EDI != 0) {
      puVar1 = (undefined4 *)FUN_009f8b60();
      uVar4 = *puVar1;
      uVar2 = CollisionAttackData::CollisionAttackData((undefined4 *)(param_1 + 0x8f0));
      iVar3 = CollisionMesh::CollisionMesh(0,uVar4,uVar2);
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_01665460);
        return;
      }
      *(undefined4 *)(iVar3 + 0x380) = 0x18a;
      *(undefined4 *)(iVar3 + 0x38c) = 1;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
      *(undefined4 *)(iVar3 + 0x3f0) = *(undefined4 *)(param_1 + 0x4f0);
      uVar4 = FUN_00915990(9);
      FUN_00d771d0(uVar4);
      FUN_00d78e50(unaff_EDI);
      FUN_00a8c370(iVar3,*(undefined4 *)(param_1 + 0x760));
      FUN_00d7b0f0();
      *(undefined4 *)(iVar3 + 0x38c) = 1;
      FUN_00d7b890();
      FUN_009277e0();
    }
  }
  return;
}

// 00A993C0  FUN_00a993c0  size=141  [between]
void __fastcall FUN_00a993c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x7b0) != 0) {
    iStack_4 = param_1;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&iStack_4,iVar3);
        if (iStack_4 != 0) {
          uVar2 = FUN_00917cd0(iStack_4);
          if ((uVar2 & 0x60000) == 0) {
            if (*(int *)(param_1 + 0x658) != 0) {
              FUN_008f2a60(iStack_4);
            }
          }
          else {
            FUN_008f3030(iStack_4);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return;
}

// 00A99460  FUN_00a99460  size=152  [between]
void __fastcall FUN_00a99460(int param_1)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_34;
  int local_28;
  
  if (*(int *)(param_1 + 0x8b0) == 0) {
    *(undefined4 *)(param_1 + 0x8b0) = 1;
    FUN_009dbcf0();
    local_60 = *(undefined4 *)(param_1 + 0x40);
    local_28 = param_1 + 0x10;
    local_5c = *(undefined4 *)(param_1 + 0x44);
    local_58 = *(undefined4 *)(param_1 + 0x48);
    local_54 = *(undefined4 *)(param_1 + 0x4c);
    FUN_009dbd40(param_1);
    FUN_009d18a0(*(undefined4 *)(param_1 + 0x4b0));
    local_34 = 0x200;
    FUN_009d18f0(0,1);
    EffectAttrSystem::RequestCall(&local_60);
    *(undefined4 *)(param_1 + 0x8b4) = 0x41200000;
  }
  return;
}

// 00A99500  FUN_00a99500  size=89  [between]
uint FUN_00a99500(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar3 = &DAT_01be9c34;
        (**(code **)(*piVar2 + 4))(&DAT_01be9c34);
        iVar1 = FUN_00dd6d80(puVar3);
        return -(uint)(iVar1 != 0) & (uint)piVar2;
      }
    }
  }
  return 0;
}

// 00A99560  FUN_00a99560  size=28  [between]
undefined4 __fastcall FUN_00a99560(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a99500();
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x330);
  }
  return *(undefined4 *)(param_1 + 0x330);
}

// 00A99580  FUN_00a99580  size=47  [between]
undefined4 __fastcall FUN_00a99580(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a99500();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x330);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x330);
  }
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xcc);
  }
  return 0;
}

// 00A995E0  FUN_00a995e0  size=28  [between]
void FUN_00a995e0(void)

{
  int iVar1;
  
  FUN_009f8b10();
  iVar1 = FUN_00a99500();
  if (iVar1 != 0) {
    FUN_009f8b10();
    return;
  }
  return;
}

// 00A99600  Bh0056::vf30C  size=51  [class]
void Bh0056::vf30C(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  uVar1 = FUN_009f8b40();
  FUN_009f8ae0(uVar1);
  return;
}

// 00AA16C0  Bh0056::vf60  size=48  [class]
void __fastcall Bh0056::vf60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c1e240();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 8;
    FUN_00a98280();
    return;
  }
  *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) & 0xfffffff7;
  FUN_00a98280();
  return;
}

// 00AA16F0  Bh0056::vf16C  size=109  [class]
void __fastcall Bh0056::vf16C(int param_1)

{
  int iVar1;
  
  FUN_00a7c970(0);
  iVar1 = *(int *)(param_1 + 0x608);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  if (*(int *)(param_1 + 0x604) != iVar1) {
    *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x604);
    FUN_00a8f590(param_1,iVar1);
  }
  FUN_009f8b10();
  FUN_00a993c0();
  iVar1 = FUN_00a12210(0xf00);
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  return;
}

// 00AA1760  Bh0056::vf174  size=320  [class]
void __thiscall Bh0056::vf174(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_00a7c970(0);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  *(undefined4 *)(param_1 + 0x660) = 1;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    local_20 = 0x4032b8c2;
    local_1c = 0x405f66f3;
    local_18 = 0x401c61aa;
    (**(code **)(**(int **)(param_1 + 0x7b0) + 100))(&local_20);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x3c))(param_2);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xa4))(0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xb0))(0x3f19999a);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x7c))(0x42f00000);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x58))(0x43480000);
  }
  iVar1 = *(int *)(param_1 + 0x608);
  if (*(int *)(param_1 + 0x604) != iVar1) {
    *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x604);
    FUN_00a8f590(param_1,iVar1);
  }
  *(undefined4 *)(param_1 + 0x8e0) = 3;
  FUN_00a993c0();
  iVar1 = FUN_00a12210(0xf00);
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  FUN_00a99280();
  *(undefined4 *)(param_1 + 0x9f0) = 0x43340000;
  return;
}

// 00AA18A0  Bh0056::vf178  size=366  [class]
void __thiscall Bh0056::vf178(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00a7c970(0);
  *(undefined4 *)(param_1 + 0x65c) = 0;
  *(undefined4 *)(param_1 + 0x660) = 1;
  *(undefined4 *)(param_1 + 0x664) = 1;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    local_20 = 0x4032b8c2;
    local_1c = 0x405f66f3;
    local_18 = 0x401c61aa;
    (**(code **)(**(int **)(param_1 + 0x7b0) + 100))(&local_20);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xa4))(0x3f800000);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xb0))(0x3f19999a);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x7c))(0x42f00000);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x58))(0x43480000);
  }
  *(undefined4 *)(param_1 + 0x8c0) = *param_2;
  *(undefined4 *)(param_1 + 0x8c4) = param_2[1];
  *(undefined4 *)(param_1 + 0x8c8) = param_2[2];
  *(undefined4 *)(param_1 + 0x8cc) = param_2[3];
  *(undefined4 *)(param_1 + 0x8d0) = 0;
  *(undefined4 *)(param_1 + 0x8d4) = 0;
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  *(undefined4 *)(param_1 + 0x8dc) = local_14;
  iVar1 = *(int *)(param_1 + 0x608);
  if (*(int *)(param_1 + 0x604) != iVar1) {
    *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x604);
    FUN_00a8f590(param_1,iVar1);
  }
  *(undefined4 *)(param_1 + 0x8e0) = 3;
  FUN_00a993c0();
  iVar1 = FUN_00a12210(0xf00);
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  FUN_00a99280();
  return;
}

// 00AC3FB0  Bh0056::vf44  size=51  [class]
void __fastcall Bh0056::vf44(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xa88) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(param_1 + 0xa8c);
  }
  *(undefined4 *)(param_1 + 0xa88) = 0;
  BehaviorBgBase::vf44();
  return;
}

// 00AC78F0  Bh0056::vf4C  size=76  [class]
void __fastcall Bh0056::vf4C(int param_1)

{
  float10 fVar1;
  
  BehaviorBgBase::vf4C();
  if (((*(uint *)(param_1 + 0xa78) & 0x4000000) != 0) ||
     ((*(uint *)(param_1 + 0x4c0) & 0x200000) != 0)) {
    fVar1 = (float10)FUN_00a93060();
    fVar1 = (float10)*(float *)(param_1 + 0xa70) - fVar1;
    *(float *)(param_1 + 0xa70) = (float)fVar1;
    if (fVar1 < (float10)0) {
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 00ACE590  Bh0056::vf48  size=291  [class]
void __fastcall Bh0056::vf48(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x29e] & 0x4000000U) == 0) {
    BehaviorBgBase::vf48();
    if ((param_1[0x29e] & 0x8000000U) != 0) {
      (**(code **)(param_1[0x2d4] + 8))(0x3f800000,0,0);
      param_1[0x29e] = param_1[0x29e] & 0xf7ffffff;
      param_1[0x29e] = param_1[0x29e] | 0x4000000;
      (**(code **)(*param_1 + 0x20))();
      iVar1 = FUN_00e01c40(param_1,10);
      if (iVar1 != 0) {
        FUN_00e02cd0(param_1,10);
        param_1[0x29c] = 0x40800000;
      }
      if ((param_1[0x29e] & 0x20000000U) != 0) {
        FUN_0040b190();
        FUN_00a7c8b0();
        FUN_00a7c8d0();
        FUN_00a7c8f0();
        FUN_00a82090(0,param_1[0x2a0],&stack0xffffff64);
      }
    }
  }
  return;
}

// 00AD30A0  FUN_00ad30a0  size=734  [callgraph]
void __fastcall FUN_00ad30a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_2bc [336];
  undefined1 auStack_16c [360];
  
  if ((param_1[300] != 0xe009b) && (param_1[300] != 0xe009d)) {
    FUN_004117d0(10,param_1,param_1 + 0x2a8);
    (**(code **)(param_1[0x2d4] + 8))(0x3f800000,0,0);
    FUN_00a963e0(auStack_2bc);
    iVar3 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = CollisionAttackData::CollisionAttackData_3();
    }
    *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 100;
    *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc) = 1;
    *(undefined4 *)(*(int *)(iVar3 + 8) + 8) = 500;
    **(undefined4 **)(iVar3 + 8) = 4;
    *(undefined4 *)(*(int *)(iVar3 + 8) + 0x30) = 0;
    iVar1 = *(int *)(iVar3 + 8);
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    puVar4 = *(undefined4 **)(iVar3 + 8);
    *(undefined1 *)(puVar4 + 4) = 0;
    *puVar4 = 0x18a;
    puVar4[1] = 0x32;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined1 *)(*(int *)(iVar3 + 8) + 0x11) = 7;
    *(undefined4 *)(iVar3 + 4) = 1;
    puVar4 = (undefined4 *)FUN_009f8b60();
    piVar5 = (int *)FUN_00602cb0(5,*puVar4,iVar3);
    if (piVar5 != (int *)0x0) {
      iVar3 = *piVar5;
      uVar6 = (**(code **)(*param_1 + 0x68))();
      (**(code **)(iVar3 + 0x6c))(uVar6);
      piVar2 = (int *)piVar5[0x21c];
      piVar5[0x21d] = 0x3fd55555;
      puVar4 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*piVar2 + 0x20))(0xb,*puVar4,0);
      piVar7 = (int *)FUN_00d773c0();
      (**(code **)(*piVar7 + 8))(piVar2);
      FUN_00d7b0f0();
      FUN_00d77c50(piVar5[0x13c],0xffffffff);
      piVar2[0x144] = 0x3dcccccd;
      FUN_00d77580(0x3dcccccd,0x40800000,0x3e800000);
      piVar2[0xe0] = 0x18a;
      FUN_00d7b890();
    }
    piVar5 = (int *)FUN_00c206d0();
    (**(code **)(*piVar5 + 4))(2,param_1[0x13c],param_1 + 0x10);
    param_1[0x29c] = 0x41200000;
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  FUN_004117d0(10,param_1,param_1 + 0x2a8);
  (**(code **)(param_1[0x2d4] + 8))(0x3f800000,0,0);
  FUN_00a963e0(auStack_16c);
  piVar5 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar5 + 0x28))(0);
  if (iVar3 != 0) {
    piVar5 = (int *)FUN_00c13920();
    (**(code **)(*piVar5 + 0x28))(0);
    FUN_00a7c8a0();
    FUN_00bc39f0(0,param_1 + 0x10,0x41200000,0x44160000);
  }
  FUN_0040b190();
  FUN_00a82090("smoke",0xe009c,&stack0xfffffcc0);
  piVar5 = (int *)FUN_00c206d0();
  (**(code **)(*piVar5 + 4))(3,param_1[0x13c],param_1 + 0x10);
  return;
}

// 00AD3380  Bh0056::vf254  size=41  [class]
void __thiscall Bh0056::vf254(int param_1,int param_2)

{
  if (param_2 != 0) {
    if ((*(uint *)(param_1 + 0x4c0) & 0x200000) == 0) {
      FUN_00ad30a0();
    }
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x200000;
  }
  return;
}

// 00AD33B0  Bh0056::vf34  size=894  [class]
void __fastcall Bh0056::vf34(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_16c [12];
  undefined1 local_160 [348];
  
  FUN_004117d0(10,param_1,param_1 + 0x2a8);
  iVar3 = param_1[300];
  if ((((iVar3 == 0xe0040) || (iVar3 == 0xe00d4)) || (iVar3 == 0xe0048)) ||
     ((iVar3 == 0xe0121 || (iVar3 == 0xe005c)))) {
    bVar1 = true;
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar3 != 0) {
      piVar2 = (int *)FUN_00c13920();
      (**(code **)(*piVar2 + 0x28))(0);
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        iVar3 = FUN_00b8c050();
        if (iVar3 != 0) {
          bVar1 = false;
        }
      }
    }
    if (((param_1[300] == 0xe0048) || (param_1[300] == 0xe005c)) || (!bVar1)) goto LAB_00ad3714;
    (**(code **)(param_1[0x2d4] + 8))(0x3f800000,0,0);
    FUN_00a963e0(local_160);
    iVar3 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
    if (iVar3 == 0) goto LAB_00ad3714;
    piVar2 = (int *)CollisionAttackData::CollisionAttackData_3();
    if (piVar2 == (int *)0x0) goto LAB_00ad3714;
    *(undefined4 *)(piVar2[2] + 4) = 100;
    *(undefined4 *)(piVar2[2] + 0xc) = 1;
    *(undefined4 *)(piVar2[2] + 8) = 500;
    *(undefined4 *)piVar2[2] = 4;
    *(undefined4 *)(piVar2[2] + 0x30) = 0;
    iVar3 = piVar2[2];
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    puVar4 = (undefined4 *)piVar2[2];
    *(undefined1 *)(puVar4 + 4) = 0;
    *puVar4 = 0x18a;
    puVar4[1] = 0x32;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined1 *)(piVar2[2] + 0x11) = 7;
    piVar2[1] = 1;
    puVar4 = (undefined4 *)FUN_009f8b60();
    piVar5 = (int *)FUN_00602cb0(5,*puVar4,piVar2);
    if (piVar5 == (int *)0x0) {
      (**(code **)(*piVar2 + 4))(1);
    }
    else {
      iVar3 = *piVar5;
      uVar7 = (**(code **)(*param_1 + 0x68))();
      (**(code **)(iVar3 + 0x6c))(uVar7);
      piVar2 = (int *)piVar5[0x21c];
      piVar5[0x21d] = 0x3fd55555;
      puVar4 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*piVar2 + 0x20))(0xb,*puVar4,0);
      piVar6 = (int *)FUN_00d773c0();
      (**(code **)(*piVar6 + 8))(piVar2);
      FUN_00d7b0f0();
      FUN_00d77c50(piVar5[0x13c],0xffffffff);
      piVar2[0x144] = 0x3dcccccd;
      FUN_00d77580(0x3dcccccd,0x40800000,0x3e800000);
      piVar2[0xe0] = 0x18a;
      FUN_00d7b890();
    }
    piVar2 = (int *)FUN_00c206d0();
    iVar3 = param_1[0x13c];
    uVar7 = 2;
  }
  else {
    if ((iVar3 != 0xe009b) && (iVar3 != 0xe009d)) {
      if (*(int *)(param_1[0x13c] + 0x54) == 0) {
        *(undefined4 *)(param_1[0x13c] + 0x54) = 1;
      }
      goto LAB_00ad3714;
    }
    (**(code **)(param_1[0x2d4] + 8))(0x3f800000,0,0);
    FUN_00a963e0(auStack_16c);
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar3 != 0) {
      piVar2 = (int *)FUN_00c13920();
      (**(code **)(*piVar2 + 0x28))(0);
      FUN_00a7c8a0();
      FUN_00bc39f0(0,param_1 + 0x10,0x41200000,0x44160000);
    }
    FUN_0040b190();
    FUN_00a82090("smoke",0xe009c,&stack0xfffffe10);
    piVar2 = (int *)FUN_00c206d0();
    iVar3 = param_1[0x13c];
    uVar7 = 3;
  }
  (**(code **)(*piVar2 + 4))(uVar7,iVar3,param_1 + 0x10);
LAB_00ad3714:
  (**(code **)(*param_1 + 0x20))();
  param_1[0x2a1] = 1;
  return;
}

// 00AD3730  FUN_00ad3730  size=277  [callgraph]
void __thiscall FUN_00ad3730(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 local_164 [4];
  undefined1 local_160 [348];
  
  *(uint *)(param_1 + 0xa78) = *(uint *)(param_1 + 0xa78) | 0x2000000;
  FUN_004117d0(9,param_1,param_1 + 0xb50);
  FUN_00a963e0(local_160);
  *(undefined4 *)(param_1 + 0xa94) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xa90) = 0;
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_004066f0();
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(local_164,0);
    FUN_009277e0();
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x3c))(param_2);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 100))(param_3);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x58))(0x42480000);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xa4))(0x3e99999a);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 00AD3850  FUN_00ad3850  size=452  [callgraph]
void __fastcall FUN_00ad3850(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  
  param_1[0x29e] = param_1[0x29e] & 0xfdffffff;
  (**(code **)(param_1[0x2d4] + 8))(0x3f800000,0,0);
  FUN_004117d0(10,param_1,param_1 + 0x2a8);
  FUN_00a963e0(&stack0xfffffe94);
  iVar3 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar3 != 0) {
    iVar3 = CollisionAttackData::CollisionAttackData_3();
    if (iVar3 != 0) {
      *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x1e;
      *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 8) + 8) = 500;
      **(undefined4 **)(iVar3 + 8) = 4;
      *(undefined4 *)(*(int *)(iVar3 + 8) + 0x30) = 0;
      iVar1 = *(int *)(iVar3 + 8);
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      puVar4 = *(undefined4 **)(iVar3 + 8);
      *(undefined1 *)(puVar4 + 4) = 0;
      *puVar4 = 0x18a;
      puVar4[1] = 0x1e;
      puVar4[3] = 0;
      puVar4[2] = 0;
      *(undefined1 *)(*(int *)(iVar3 + 8) + 0x11) = 7;
      *(undefined4 *)(iVar3 + 4) = 1;
      puVar4 = (undefined4 *)FUN_009f8b60();
      piVar5 = (int *)FUN_00602cb0(5,*puVar4,iVar3);
      if (piVar5 != (int *)0x0) {
        iVar3 = *piVar5;
        uVar6 = (**(code **)(*param_1 + 0x68))();
        (**(code **)(iVar3 + 0x6c))(uVar6);
        piVar2 = (int *)piVar5[0x21c];
        piVar5[0x21d] = 0x3fd55555;
        puVar4 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*piVar2 + 0x20))(0xb,*puVar4,0);
        piVar7 = (int *)FUN_00d773c0();
        (**(code **)(*piVar7 + 8))(piVar2);
        FUN_00d7b0f0();
        FUN_00d77c50(piVar5[0x13c],0xffffffff);
        piVar2[0x144] = 0x3dcccccd;
        FUN_00d77580(0x3dcccccd,0x40000000,0x3e800000);
        piVar2[0xe0] = 0x18a;
        FUN_00d7b890();
      }
    }
  }
  (**(code **)(*param_1 + 0x20))();
  param_1[0x2a1] = 1;
  return;
}

// 00AE27F0  Bh0056::vf50  size=274  [class]
void __fastcall Bh0056::vf50(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined1 local_4 [4];
  
  if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0xb38) == 0)) {
    if (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
    }
    *(undefined4 *)(param_1 + 0xa84) = 0;
  }
  BehaviorBgBase::vf50();
  if (((*(uint *)(param_1 + 0xa78) & 0x2000000) != 0) && (*(int *)(param_1 + 0xa84) == 0)) {
    FUN_004066f0();
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(local_4,0);
    iVar2 = FUN_009165d0();
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x14) < 1)) {
      *(undefined4 *)(param_1 + 0xa90) = 0;
    }
    else {
      *(int *)(param_1 + 0xa90) = *(int *)(param_1 + 0xa90) + 1;
      if (5 < *(int *)(param_1 + 0xa90)) {
        FUN_00ad3850();
      }
    }
    fVar3 = (float10)FUN_00a93060();
    fVar3 = (float10)*(float *)(param_1 + 0xa94) - fVar3;
    *(float *)(param_1 + 0xa94) = (float)fVar3;
    if (fVar3 < (float10)0) {
      FUN_00ad3850();
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

