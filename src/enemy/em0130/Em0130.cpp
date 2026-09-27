// src/enemy/em0130/Em0130.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006046C0..00ABA4A0, 148 functions

#include "mgrr.h"
#include "Em0130.h"

// 006046C0  Em0130::vf268  size=5  [class]
undefined4 Em0130::vf268(void)

{
  return 0;
}

// 006046D0  FUN_006046d0  size=93  [between]
void __fastcall FUN_006046d0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 006047C0  FUN_006047c0  size=234  [between]
void __fastcall FUN_006047c0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0xc;
    if (param_1[0x186] == 0x10007) {
      uVar1 = 0xb;
    }
    if (param_1[0x186] == 0x10008) {
      uVar1 = 10;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00604860;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00604860:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d0efa35,0);
  }
  return;
}

// 006048B0  FUN_006048b0  size=402  [between]
void __fastcall FUN_006048b0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x12,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar1 = FUN_00dde2a0(0,1000);
    if ((uVar1 & 0xffff) % 5 == 1) {
      param_1[0x3a4] = param_1[0x3a4] | 0x400000;
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x13,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(0x14,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00604A70  FUN_00604a70  size=93  [between]
void __fastcall FUN_00604a70(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(6,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00604AD0  FUN_00604ad0  size=23  [between]
void __fastcall FUN_00604ad0(int *param_1)

{
  if ((param_1[0x3a4] & 0x80000000U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00604ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00604B20  Em0130::vf100  size=49  [class]
void __fastcall Em0130::vf100(int param_1)

{
  int iVar1;
  
  BehaviorAppBase::vf100();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(7);
    }
  }
  return;
}

// 00604B90  FUN_00604b90  size=932  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00604b90(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  char *_Format;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [8];
  float local_28;
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_00604bae_caseD_1;
  case 2:
    FUN_00aa4080(0x1c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
  case 3:
    _DAT_01beaa88 = _DAT_01beaa88 | 0x2000000;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = (float10)FUN_00ac85c0(5,0x51);
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_28 = (float)(fVar3 * (float10)(float)param_1[0x244]);
    local_40 = param_1[0x10];
    local_3c = param_1[0x11];
    local_38 = param_1[0x12];
    local_34 = param_1[0x13];
    FUN_00a8e130(&local_40,local_30,param_1[0x25],0);
    param_1[0x14] = local_40;
    param_1[0x15] = local_3c;
    param_1[0x16] = local_38;
    param_1[0x17] = local_34;
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) || ((float)param_1[0x248] < 0.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00604bae_default;
  case 4:
    FUN_00aa4080(0x1d,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_00604bae_default;
  }
  FUN_00aa4080(0x1b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  FUN_00a8d280();
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x46d] = 0;
switchD_00604bae_caseD_1:
  _DAT_01beaa88 = _DAT_01beaa88 | 0x2000000;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0xe);
  if ((iVar2 != 0) && (iVar2 = thunk_FUN_00e58ed0(param_1[0x464]), iVar2 == 0)) {
    iVar2 = param_1[0x469];
    do {
      sVar1 = FUN_00dde2d0(0,1000);
      sVar1 = sVar1 % 3;
      *(short *)(param_1 + 0x469) = sVar1;
    } while (sVar1 == (short)iVar2);
    if (sVar1 == 0) {
      _Format = "DC3b5000_161010";
LAB_00604cac:
      _sprintf_s(local_30,0x14,_Format);
    }
    else {
      if (sVar1 == 1) {
        _Format = "DC3b4000_1h1010";
        goto LAB_00604cac;
      }
      if (sVar1 == 2) {
        _Format = "DC3b4000_1a1010";
        goto LAB_00604cac;
      }
    }
    iVar2 = FUN_00e5e0c0(local_30,param_1,0xffffffff,0);
    param_1[0x464] = iVar2;
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    fVar3 = (float10)FUN_00ac85c0(5,0x51);
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_28 = (float)(fVar3 * (float10)(float)param_1[0x244]);
    local_40 = param_1[0x10];
    local_3c = param_1[0x11];
    local_38 = param_1[0x12];
    local_34 = param_1[0x13];
    FUN_00a8e130(&local_40,local_30,param_1[0x25],0);
    param_1[0x14] = local_40;
    param_1[0x15] = local_3c;
    param_1[0x16] = local_38;
    param_1[0x17] = local_34;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00604bae_default:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0,0x3f060a92,0);
  }
  return;
}

// 00604F50  Em0130::vf158  size=12  [class]
bool Em0130::vf158(undefined4 param_1,int param_2)

{
  return param_2 == 0;
}

// 00604F60  Em0130::thunk_vf15C  size=5  [class]
void Em0130::thunk_vf15C(void)

{
  FUN_00a7c950();
  return;
}

// 00604F80  FUN_00604f80  size=22  [between]
void FUN_00604f80(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 00604FB0  FUN_00604fb0  size=22  [between]
void FUN_00604fb0(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 00604FE0  FUN_00604fe0  size=1  [between]
void FUN_00604fe0(void)

{
  return;
}

// 00605020  FUN_00605020  size=123  [between]
void __fastcall FUN_00605020(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x81,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00605099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006050C0  FUN_006050c0  size=588  [between]
void __fastcall FUN_006050c0(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(param_1[0x187]) {
  case 0:
    iVar4 = FUN_00ac8660(0,0x47);
    param_1[599] = iVar4;
    uVar2 = FUN_00dde2a0(0,1000);
    param_1[0x256] = uVar2 & 0xffff;
    uVar3 = 0x7d;
    if ((uVar2 & 1) != 0) {
      uVar3 = 0x79;
    }
    FUN_00aa4080(uVar3,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x207,param_1 + 0x49c);
  case 1:
    *(undefined2 *)(param_1 + 0x209) = 4;
    param_1[0x20a] = 0x78;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      if (param_1[599] < 1) {
        param_1[0x187] = 4;
        FUN_00eaa6e0(0x3f800000,0);
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    uVar3 = 0x7e;
    if ((*(byte *)(param_1 + 0x256) & 1) != 0) {
      uVar3 = 0x7a;
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 3:
    *(undefined2 *)(param_1 + 0x209) = 4;
    param_1[0x20a] = 0x78;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) && (param_1[0x250] = param_1[0x250] + 1, param_1[599] <= param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00eaa6e0(0x3f800000,0);
      return;
    }
    break;
  case 4:
    uVar3 = 0x7f;
    if ((*(byte *)(param_1 + 0x256) & 1) != 0) {
      uVar3 = 0x7b;
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00605307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00605330  FUN_00605330  size=116  [between]
void __thiscall FUN_00605330(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x73;
  switch(param_2) {
  case 0:
    if ((*(uint *)(param_1 + 0xe90) & 0x40000) != 0) {
      uVar1 = 0x74;
    }
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) ^ 0x40000;
    break;
  case 1:
  case 2:
    uVar1 = 0x75;
    break;
  case 3:
    uVar1 = 0x77;
    break;
  case 4:
    uVar1 = 0x76;
  }
  FUN_00aa4080(uVar1,1,0x3d088889,0x3f800000,0x8000010,0xbf800000,0x3f800000);
  return;
}

// 00605420  Em0130::vf13C  size=13  [class]
uint __fastcall Em0130::vf13C(int param_1)

{
  return *(uint *)(param_1 + 0xe90) >> 0x1d & 1;
}

// 00605430  FUN_00605430  size=130  [callgraph]
void __fastcall FUN_00605430(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"R-arm");
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"L-arm");
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"R-leg");
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"L-leg");
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"HumanBody");
      FUN_00a93730(1);
    }
  }
  return;
}

// 006054C0  FUN_006054c0  size=67  [callgraph]
undefined4 __fastcall FUN_006054c0(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0xe90) & 0x80000000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_8,local_4);
    return local_8;
  }
  FUN_00ac8270(param_1 + 0x40,&local_8,local_4);
  return local_8;
}

// 00605540  FUN_00605540  size=67  [callgraph]
undefined4 __thiscall FUN_00605540(int param_1,float *param_2)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xa84) == 0) {
    return 0;
  }
  fVar1 = (float10)FUN_00a8ec30(param_1 + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(*(int *)(param_1 + 0xa84) + 0x94
                                                                   )));
  *param_2 = (float)fVar1;
  return 1;
}

// 00605590  FUN_00605590  size=165  [callgraph]
undefined4 __fastcall FUN_00605590(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0xd80);
  if (iVar1 == 0) {
    return 0;
  }
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x49);
  *(float *)(iVar1 + 0x10) = (float)(fVar2 * (float10)0.017453292);
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x49);
  *(float *)(iVar1 + 0xc) = (float)(fVar2 * (float10)0.017453292);
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x49);
  *(float *)(iVar1 + 0x14) = (float)fVar2;
  iVar1 = *(int *)(param_1 + 0xd80);
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x4a);
  *(float *)(iVar1 + 0x1c) = (float)(fVar2 * (float10)0.017453292);
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x4a);
  *(float *)(iVar1 + 0x18) = (float)(fVar2 * (float10)0.017453292);
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x4a);
  *(float *)(iVar1 + 0x20) = (float)fVar2;
  return 1;
}

// 00605670  FUN_00605670  size=120  [callgraph]
/* WARNING: Removing unreachable block (ram,0x006056dc) */

bool __fastcall FUN_00605670(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x870) <= *(int *)(param_1 + 0x874) / 2) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x4e);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(0x4e);
    if (iVar1 <= *(int *)(param_1 + 0x11b4)) {
      if (*(int *)(param_1 + 0x11b4) < iVar2) {
        uVar3 = FUN_00dde2a0(0,1000);
        return (uVar3 & 3) == 0;
      }
      return true;
    }
  }
  return false;
}

// 006056F0  FUN_006056f0  size=233  [callgraph]
uint __thiscall FUN_006056f0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 0xe90 + (param_2 >> 5) * 4) & 0x80000000U >> ((byte)param_2 & 0x1f)) != 0
     ) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x870);
  iVar1 = FUN_00fdbc60();
  if (iVar1 < iVar2) {
    return 0;
  }
  iVar1 = FUN_00fdbc60();
  if (iVar2 < iVar1) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfffeffff;
    return 0;
  }
  *(uint *)(param_1 + 0xedc) = param_2;
  if ((*(uint *)(param_1 + 0xe90 + (param_3 >> 5) * 4) & 0x80000000U >> ((byte)param_3 & 0x1f)) != 0
     ) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x31);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(0x31);
    if (*(int *)(param_1 + 0x11b4) < iVar2) {
      return 0;
    }
    if (*(int *)(param_1 + 0x11b4) < iVar1) {
      uVar3 = FUN_00dde2a0(0,1000);
      return (uVar3 & 0xff ^ 0xffffffff) & 1;
    }
  }
  return 1;
}

// 006057E0  FUN_006057e0  size=35  [callgraph]
bool __fastcall FUN_006057e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 00605810  FUN_00605810  size=81  [callgraph]
bool __fastcall FUN_00605810(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x870);
  iVar2 = FUN_00fdbc60();
  if (iVar2 < iVar1) {
    return false;
  }
  iVar2 = FUN_00fdbc60();
  if (iVar1 < iVar2) {
    return true;
  }
  return *(int *)(param_1 + 0x618) == 0x20019;
}

// 006058A0  FUN_006058a0  size=622  [callgraph]
void __thiscall FUN_006058a0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *_Format;
  char local_14 [20];
  
  if (param_3 != 0) {
    *(undefined2 *)(param_1 + 0x824) = 2;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  }
  if (param_2 != 0) {
    puVar1 = (uint *)(param_1 + 0xe90 + (*(uint *)(param_1 + 0xedc) >> 5) * 4);
    *puVar1 = *puVar1 | 0x80000000U >> ((byte)*(uint *)(param_1 + 0xedc) & 0x1f);
    uVar2 = FUN_00dde2a0(0,1000);
    switch((uVar2 & 0xffff) % 9) {
    case 0:
      _sprintf_s(local_14,0x14,"D23_1000_161010");
      break;
    case 1:
      _sprintf_s(local_14,0x14,"D23_1000_171010");
      break;
    case 2:
      _sprintf_s(local_14,0x14,"D23_1000_181010");
      break;
    case 3:
      _sprintf_s(local_14,0x14,"DC3b2000_1d1010");
      break;
    case 4:
      _sprintf_s(local_14,0x14,"DC3b2000_1e1010");
      break;
    case 5:
      _sprintf_s(local_14,0x14,"DC3b2000_1f1010");
      break;
    case 6:
      _sprintf_s(local_14,0x14,"DC3b2000_1g1010");
      break;
    case 7:
      _sprintf_s(local_14,0x14,"DC3b2000_1h1010");
      break;
    case 8:
      _sprintf_s(local_14,0x14,"DC3b2000_1i1010");
    }
    goto switchD_00605911_default;
  }
  if (*(float *)(param_1 + 0xed4) <= 0.0) {
    uVar2 = FUN_00dde2a0(0,1000);
    uVar2 = (uVar2 & 0xffff) % 3;
    if (uVar2 == 0) {
      _Format = "D23_1000_1c1010";
    }
    else if (uVar2 == 1) {
      _Format = "D23_1000_1d1010";
    }
    else {
      if (uVar2 != 2) goto switchD_00605a64_default;
      _Format = "D23_1000_1e1010";
    }
    goto LAB_00605ab6;
  }
  uVar2 = FUN_00dde2a0(0,1000);
  switch((uVar2 & 0xffff) % 6) {
  case 0:
    _Format = "D23_1000_191010";
    break;
  case 1:
    _Format = "D23_1000_1a1010";
    break;
  case 2:
    _Format = "D23_1000_1b1010";
    break;
  case 3:
    _Format = "DC3b3000_151010";
    break;
  case 4:
    _Format = "DC3b3000_161010";
    break;
  case 5:
    _Format = "DC3b3000_191010";
    break;
  default:
    goto switchD_00605a64_default;
  }
LAB_00605ab6:
  _sprintf_s(local_14,0x14,_Format);
switchD_00605a64_default:
  FUN_00e5e1b0("bgm_Khamsin_Stealth_Failed");
switchD_00605911_default:
  iVar3 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1190));
  if (iVar3 == 0) {
    uVar4 = FUN_00e5e0c0(local_14,param_1,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x1190) = uVar4;
  }
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xdfffffff;
  *(undefined4 *)(param_1 + 0xed4) = 0;
  return;
}

// 00605BD0  FUN_00605bd0  size=133  [callgraph]
undefined4 __fastcall FUN_00605bd0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float local_4;
  
  fVar2 = (float10)FUN_00ac85c0(5,0x34);
  if (*(int *)(param_1 + 0x870) <= *(int *)(param_1 + 0x874) / 2) {
    fVar2 = (float10)FUN_00ac85c0(5,0x35);
  }
  local_4 = (float)fVar2;
  if ((float10)0 < fVar2) {
    fVar1 = (float10)1;
    if ((fVar1 < fVar2 == (fVar1 == fVar2)) &&
       (fVar2 = (float10)FUN_00dde300((float)(float10)0,(float)fVar1),
       fVar2 < (float10)local_4 == (fVar2 == (float10)local_4))) {
      return 0;
    }
    return 1;
  }
  return 0;
}

// 00605C60  FUN_00605c60  size=100  [callgraph]
void __fastcall FUN_00605c60(int param_1)

{
  float unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float10)FUN_00ac85c0(5,0x2b);
  fVar4 = (float)(fVar1 * (float10)60.0);
  fVar3 = 6.02558e-44;
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))();
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))
                             (0x2b,fVar3,
                              (float)((float10)unaff_ESI -
                                     fVar1 * (float10)*(float *)(param_1 + 0xeb4) * (float10)60.0),
                              fVar4);
  fVar1 = fVar1 * (float10)60.0;
  fVar2 = (float10)fVar3;
  if ((!NAN(fVar2) && !NAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
    return;
  }
  return;
}

// 00605CE0  FUN_00605ce0  size=92  [callgraph]
void FUN_00605ce0(short param_1)

{
  uint uVar1;
  short local_10 [8];
  
  local_10[0] = 1;
  local_10[1] = 2;
  local_10[2] = 3;
  local_10[3] = 4;
  local_10[4] = 5;
  local_10[5] = 6;
  local_10[6] = 7;
  uVar1 = 0;
  do {
    FUN_00a33520(param_1 == local_10[uVar1],0xd40,local_10[uVar1]);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  return;
}

// 00605D40  FUN_00605d40  size=728  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00605d40(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float **ppfVar3;
  float *pfVar4;
  undefined4 **ppuVar5;
  undefined4 **ppuVar6;
  float *pfVar7;
  undefined4 *puStack_1bc;
  float **ppfStack_1b8;
  float *pfStack_1b4;
  undefined4 **ppuStack_1b0;
  undefined1 *puStack_1ac;
  undefined4 *puStack_1a8;
  float *pfStack_1a4;
  float *pfStack_1a0;
  undefined1 *puStack_19c;
  float *pfStack_198;
  float *pfStack_194;
  undefined1 *puStack_190;
  float *pfStack_18c;
  float *pfStack_188;
  undefined4 *puStack_184;
  undefined4 uStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170 [4];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 auStack_154 [12];
  float local_148;
  float local_144;
  undefined1 auStack_13c [12];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined1 auStack_a8 [52];
  undefined4 auStack_74 [28];
  
  local_148 = _DAT_01b7b920;
  local_144 = -_DAT_01b7b924;
  if ((ABS(_DAT_01b7b920) < 0.001) && (ABS(local_144) < 0.001)) {
    return 0;
  }
  puStack_184 = &local_130;
  local_f8 = 0;
  local_fc = 0;
  pfStack_18c = local_170;
  local_100 = 0;
  local_104 = 0.0;
  local_10c = 0.0;
  local_110 = 0.0;
  local_114 = 0.0;
  local_118 = 0.0;
  local_120 = 0;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_f4 = 1.0;
  local_108 = 1.0;
  local_11c = 0x3f800000;
  local_130 = 0x3f800000;
  local_170[1] = 1.0;
  local_158 = 0x3f800000;
  local_170[0] = 0.0;
  local_170[2] = 0.0;
  local_160 = 0;
  local_15c = 0;
  puStack_190 = (undefined1 *)0x605e10;
  pfStack_188 = pfStack_18c;
  D3DXVec3TransformNormal();
  puStack_190 = auStack_13c;
  fStack_17c = local_10c + fStack_17c;
  pfStack_198 = local_170 + 1;
  fStack_178 = fStack_178 + local_108;
  fStack_174 = fStack_174 + local_104;
  puStack_19c = (undefined1 *)0x605e4f;
  pfStack_194 = pfStack_198;
  D3DXVec3TransformNormal();
  puStack_19c = (undefined1 *)0x5;
  fStack_178 = local_118 + fStack_178;
  pfStack_1a0 = (float *)&local_f8;
  pfStack_1a4 = (float *)auStack_a8;
  fStack_174 = fStack_174 + local_114;
  local_170[0] = local_170[0] + local_110;
  local_108 = 0.0;
  local_104 = 1.0;
  local_100 = 0;
  local_f8 = 0;
  local_f4 = 0.0;
  uStack_f0 = 0;
  puStack_1a8 = (undefined4 *)0x605ec1;
  FUN_00ddc1d0();
  puStack_19c = auStack_a8;
  pfStack_1a4 = &local_108;
  puStack_1a8 = (undefined4 *)0x605edc;
  pfStack_1a0 = pfStack_1a4;
  D3DXVec3TransformNormal();
  puStack_1a8 = (undefined4 *)0x40490fdb;
  ppuStack_1b0 = &puStack_184;
  puStack_1ac = (undefined1 *)0x3f800000;
  pfStack_1b4 = &local_114;
  ppfStack_1b8 = &pfStack_194;
  puStack_1bc = auStack_74;
  FUN_00de2bc0();
  puStack_1a8 = auStack_74;
  ppuStack_1b0 = (undefined4 **)auStack_154;
  pfStack_1b4 = (float *)0x605f25;
  puStack_1ac = (undefined1 *)ppuStack_1b0;
  D3DXMatrixMultiply();
  pfStack_1b4 = (float *)&local_160;
  ppfStack_1b8 = (float **)0x0;
  puStack_1bc = &local_100;
  ppuVar6 = &puStack_1bc;
  ppuVar5 = &puStack_1bc;
  D3DXMatrixInverse();
  puStack_1bc = puStack_184;
  pfVar7 = &local_10c;
  ppfStack_1b8 = (float **)0x0;
  pfStack_1b4 = (float *)uStack_180;
  fStack_17c = 0.0;
  fStack_178 = 0.0;
  fStack_174 = 0.0;
  D3DXVec3TransformNormal(&puStack_1bc,&puStack_1bc,pfVar7);
  pfVar4 = &local_118;
  ppfVar3 = &pfStack_188;
  D3DXVec3TransformNormal
            (ppfVar3,ppfVar3,pfVar4,fStack_e8 + (float)ppuVar5,fStack_e4 + (float)ppuVar6,
             fStack_e0 + (float)pfVar7);
  fVar2 = (float10)(float)ppfVar3 - ((float10)local_f4 + (float10)(float)pfStack_194);
  fVar1 = (float10)(float)pfVar4 - ((float10)fStack_ec + (float10)(float)pfStack_18c);
  if ((ABS(fVar2) < (float10)0.001) && (ABS(fVar1) < (float10)0.001)) {
    *param_1 = 0.0;
    fVar1 = (float10)fpatan(fVar2,fVar1);
    *param_1 = (float)fVar1;
    return 1;
  }
  fVar1 = (float10)fpatan(fVar2,fVar1);
  *param_1 = (float)fVar1;
  return 1;
}

// 00606020  FUN_00606020  size=234  [callgraph]
uint __thiscall FUN_00606020(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  char *_Format;
  char local_14 [20];
  
  if (param_2 != 0) {
    uVar3 = FUN_00dde2a0(0,1000);
    if ((uVar3 & 0xffff) % 3 != 0) {
      return (uVar3 & 0xffff) / 3;
    }
  }
  uVar3 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1190));
  if (uVar3 != 0) {
    return uVar3;
  }
  sVar1 = *(short *)(param_1 + 0x1194);
  do {
    sVar2 = FUN_00dde2d0(0,1000);
    sVar2 = sVar2 % 5;
    *(short *)(param_1 + 0x1194) = sVar2;
  } while (sVar2 == sVar1);
  switch(sVar2) {
  case 0:
    _Format = "D23_1000_111010";
    break;
  case 1:
    _Format = "D23_1000_121010";
    break;
  case 2:
    _Format = "DC3b5000_151010";
    break;
  case 3:
    _Format = "DC3b1000_121010";
    break;
  case 4:
    _Format = "DC3b1000_171010";
    break;
  default:
    goto switchD_0060609f_default;
  }
  _sprintf_s(local_14,0x14,_Format);
switchD_0060609f_default:
  uVar3 = FUN_00e5e0c0(local_14,param_1,0xffffffff,0);
  *(uint *)(param_1 + 0x1190) = uVar3;
  return uVar3;
}

// 00606120  FUN_00606120  size=265  [callgraph]
void __fastcall FUN_00606120(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  char *_Format;
  char local_14 [20];
  
  iVar3 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1190));
  if (iVar3 != 0) {
    return;
  }
  sVar1 = *(short *)(param_1 + 0x11a0);
  do {
    sVar2 = FUN_00dde2d0(0,1000);
    sVar2 = sVar2 % 0xb;
    *(short *)(param_1 + 0x11a0) = sVar2;
  } while (sVar2 == sVar1);
  switch(sVar2) {
  case 0:
    _Format = "DC3b5000_141010";
    break;
  case 1:
    _Format = "DC3b5000_131010";
    break;
  case 2:
    _Format = "DC3b2000_1i1010";
    break;
  case 3:
    _Format = "DC3b2000_1h1010";
    break;
  case 4:
    _Format = "DC3b2000_1f1010";
    break;
  case 5:
    _Format = "DC3b2000_1e1010";
    break;
  case 6:
    _Format = "DC3b2000_1d1010";
    break;
  case 7:
    _Format = "DC3b2000_1c1010";
    break;
  case 8:
    _Format = "DC3b1000_191010";
    break;
  case 9:
    _Format = "D32_1000_161010";
    break;
  case 10:
    _Format = "D32_1000_171010";
    break;
  default:
    goto switchD_00606183_default;
  }
  _sprintf_s(local_14,0x14,_Format);
switchD_00606183_default:
  uVar4 = FUN_00e5e0c0(local_14,param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x1190) = uVar4;
  return;
}

// 00606260  FUN_00606260  size=279  [callgraph]
int __fastcall FUN_00606260(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  char *_Format;
  char local_14 [20];
  
  *(short *)(param_1 + 0x11a6) = *(short *)(param_1 + 0x11a6) + 1;
  if ((int)*(short *)(param_1 + 0x11a6) % 6 != 0) {
    return (int)*(short *)(param_1 + 0x11a6) / 6;
  }
  iVar3 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1190));
  if (iVar3 != 0) {
    return iVar3;
  }
  sVar1 = *(short *)(param_1 + 0x11a2);
  do {
    sVar2 = FUN_00dde2d0(0,1000);
    sVar2 = sVar2 % 10;
    *(short *)(param_1 + 0x11a2) = sVar2;
  } while (sVar2 == sVar1);
  switch(sVar2) {
  case 0:
    _Format = "DC3b5000_101010";
    break;
  case 1:
    _Format = "DC3b5000_111010";
    break;
  case 2:
    _Format = "DC3b5000_121010";
    break;
  case 3:
    _Format = "DC3b1000_121010";
    break;
  case 4:
    _Format = "DC3b1000_131010";
    break;
  case 5:
    _Format = "DC3b1000_141010";
    break;
  case 6:
    _Format = "DC3b1000_151010";
    break;
  case 7:
    _Format = "DC3b1000_161010";
    break;
  case 8:
    _Format = "DC3b1000_181010";
    break;
  case 9:
    _Format = "DC3b1000_191010";
    break;
  default:
    goto switchD_006062d6_default;
  }
  _sprintf_s(local_14,0x14,_Format);
switchD_006062d6_default:
  iVar3 = FUN_00e5e0c0(local_14,param_1,0xffffffff,0);
  *(int *)(param_1 + 0x1190) = iVar3;
  return iVar3;
}

// 00606550  FUN_00606550  size=135  [callgraph]
void __thiscall FUN_00606550(int param_1,int param_2)

{
  float fVar1;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  fVar1 = 0.0;
  D3DXMatrixInverse(local_50,0,param_2 + 0x10);
  D3DXVec3TransformNormal(&stack0xffffff94,param_2 + 0x13a0,auStack_5c);
  fVar1 = (*(float *)(param_1 + 0x40) / *(float *)(param_1 + 0x30)) * 0.3 +
          (fVar1 / (*(float *)(param_1 + 0x2c) * 0.7)) * 0.7;
  if ((fVar1 <= 1.0) && (-1.0 <= fVar1)) {
    return;
  }
  return;
}

// 006065E0  FUN_006065e0  size=163  [callgraph]
void __thiscall FUN_006065e0(int param_1,int param_2)

{
  float fVar1;
  float unaff_EDI;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  D3DXMatrixInverse(local_50,0,param_2 + 0x10);
  D3DXVec3TransformNormal(&stack0xffffff94,param_2 + 0x13a0,auStack_5c);
  if (*(float *)(param_1 + 0x48) == 0.0) {
    fVar1 = *(float *)(param_1 + 0x48) / (*(float *)(param_1 + 0x3c) * -1.0);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x48) / *(float *)(param_1 + 0x38);
  }
  fVar1 = (unaff_EDI / (*(float *)(param_1 + 0x2c) * 0.9)) * 0.7 + fVar1 * 0.3;
  if ((fVar1 <= 1.0) && (fVar1 < -1.0)) {
    return;
  }
  return;
}

// 00606690  Em0130::vf338  size=3  [class]
void Em0130::vf338(void)

{
  return;
}

// 006066A0  Em0130::vf1C0  size=5  [class]
void __thiscall Em0130::vf1C0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  BehaviorEmBase::vf1C0(param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x4b0);
  if (uVar1 < 0x2c011) {
    if (uVar1 == 0x2c010) goto switchD_00a9b148_caseD_2c050;
    if (uVar1 < 0x28141) {
      if (uVar1 != 0x28140) {
        switch(uVar1) {
        case 0x28010:
        case 0x28050:
          break;
        default:
          goto switchD_00a9af52_caseD_28011;
        case 0x28030:
        case 0x28033:
        case 0x28035:
          if (*(int *)(param_1 + 0x4f0) != 0) {
            FUN_00a7c890();
          }
          FUN_00e26e90();
          uVar5 = 0x20030;
          uVar4 = 0x2803f;
          goto LAB_00a9b2ce;
        case 0x28040:
          goto switchD_00a9af52_caseD_28040;
        case 0x28070:
        case 0x28071:
          goto switchD_00a9af52_caseD_28070;
        case 0x28080:
        case 0x28081:
          goto switchD_00a9af52_caseD_28080;
        }
      }
switchD_00a9af52_caseD_28010:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x28012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2814f,0x20010);
    }
    else {
      switch(uVar1) {
      case 0x28142:
      case 0x28144:
      case 0x28160:
        goto switchD_00a9af52_caseD_28010;
      case 0x28150:
      case 0x28152:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        FUN_00e272b0(0x28012,0x20010);
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e27330(0x2815f,0x20010);
        break;
      case 0x28170:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        uVar4 = 0x28012;
        goto LAB_00a9b26a;
      case 0x28220:
        goto switchD_00a9b04c_caseD_28220;
      }
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (0x2c140 < uVar1) {
    switch(uVar1) {
    case 0x2c142:
    case 0x2c144:
    case 0x2c160:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c150:
    case 0x2c152:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x2c012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2c15f,0x20010);
      break;
    case 0x2c170:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar4 = 0x2c012;
LAB_00a9b26a:
      FUN_00e272b0(uVar4,0x20010);
      uVar4 = *(undefined4 *)(param_1 + 0x4b0);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e27330(uVar4,0x20010);
      }
      else {
        FUN_00a7c890();
        FUN_00e27330(uVar4,0x20010);
      }
      break;
    case 0x2c220:
switchD_00a9b04c_caseD_28220:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20220;
      goto LAB_00a9b2ce;
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (uVar1 == 0x2c140) {
switchD_00a9b148_caseD_2c050:
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e26e90();
    FUN_00e272b0(0x2c012,0x20010);
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e27330(0x2c14f,0x20010);
  }
  else {
    switch(uVar1) {
    case 0x2c030:
    case 0x2c033:
    case 0x2c035:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20030;
      uVar4 = 0x2c03f;
      break;
    default:
      goto switchD_00a9af52_caseD_28011;
    case 0x2c040:
switchD_00a9af52_caseD_28040:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      break;
    case 0x2c050:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c071:
switchD_00a9af52_caseD_28070:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      break;
    case 0x2c081:
switchD_00a9af52_caseD_28080:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
    }
LAB_00a9b2ce:
    FUN_00e272b0(uVar4,uVar5);
  }
switchD_00a9af52_caseD_28011:
  if (param_2 != (int *)0x0) {
    puVar6 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar6);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00acdea0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9c3c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c3c);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xdc0) = piVar3[0x370];
      }
    }
  }
  return;
}

// 00606F80  Em0130::vf50  size=258  [class]
void __fastcall Em0130::vf50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  FUN_00a93170();
  if (param_1[0x1ec] != 0) {
    FUN_008f3cb0(param_1);
  }
  if (param_1[0x460] != 0) {
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_14 = 0x3f800000;
    local_28 = 0x3f800000;
    local_3c = 0x3f800000;
    local_50 = 0x3f800000;
    local_60 = 0;
    local_5c = 0;
    local_58 = param_1[0x461];
    local_70 = param_1[0x10];
    local_6c = param_1[0x11];
    local_68 = param_1[0x12];
    local_64 = param_1[0x13];
    uVar2 = 0;
    iVar1 = (**(code **)(*param_1 + 0x84))(0);
    FUN_00a8e130(&local_70,&local_60,*(undefined4 *)(iVar1 + 4),uVar2);
    local_20 = local_70;
    local_1c = local_6c;
    local_18 = local_68;
    FUN_00920c60(&local_50,0,0);
  }
  BehaviorEmBase::vf50();
  return;
}

// 00607090  Em0130::vf264  size=41  [class]
undefined4 Em0130::vf264(int param_1)

{
  FUN_0040ac60(param_1);
  FUN_00aa0920(*(undefined4 *)(param_1 + 0x5c));
  return 1;
}

// 006070C0  Em0130::vf130  size=544  [class]
undefined4 __thiscall Em0130::vf130(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  FUN_00ac8520(*param_2);
  uVar4 = FUN_00fdbc60();
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar1[2] = uVar5;
  puVar1[1] = uVar4;
  puVar1[3] = unaff_ESI;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  *puVar1 = (uint)*param_2;
  switch(*param_2) {
  case 4:
    *puVar1 = 0x1ca;
    goto LAB_006071a6;
  default:
    goto switchD_00607199_caseD_5;
  case 6:
    *puVar1 = 0x1cb;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 8:
    *puVar1 = 0x1cc;
    goto LAB_006071ed;
  case 10:
    *puVar1 = 0x1cd;
    goto LAB_006071a6;
  case 0xc:
    *puVar1 = 0x1ce;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0xe:
    *puVar1 = 0x1cf;
    goto LAB_006071ed;
  case 0x10:
    *puVar1 = 0x1d0;
    goto LAB_006071a6;
  case 0x12:
    *puVar1 = 0x1d1;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0x13:
    *puVar1 = 0x1d2;
    goto LAB_006071ed;
  case 0x14:
    *puVar1 = 0x1d3;
LAB_006071a6:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
LAB_006071b4:
    *(undefined2 *)(puVar1 + 0x21) = 0x5101;
    return unaff_EBX;
  case 0x16:
    *puVar1 = 0x1d4;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0x18:
    *puVar1 = 0x1d5;
LAB_006071ed:
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined2 *)(puVar1 + 0x21) = 0x5101;
    return unaff_EBX;
  case 0x1a:
    *puVar1 = 0x1d6;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    goto LAB_006071b4;
  case 0x1c:
    *puVar1 = 0x1d7;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
  }
  *(undefined2 *)(puVar1 + 0x21) = 0x5101;
switchD_00607199_caseD_5:
  return unaff_EBX;
}

// 00607340  FUN_00607340  size=182  [between]
void __fastcall FUN_00607340(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x4b;
    if (param_1[0x186] == 0x20015) {
      uVar1 = 0x4c;
    }
    if (param_1[0x186] == 0x20016) {
      uVar1 = 0x5d;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x46d] = param_1[0x46d] + 1;
    FUN_00606260();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006073f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00607400  Em0130::vf14C  size=64  [class]
bool __thiscall Em0130::vf14C(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x870) < 1) || (*(int *)(param_1 + 0x4e4) != 0)) {
    return false;
  }
  if ((param_2 != 0x81) && (param_2 != 0x82)) {
    return param_2 == 0x83;
  }
  return true;
}

// 00607440  FUN_00607440  size=650  [between]
void __fastcall FUN_00607440(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35510;
    (**(code **)(*piVar2 + 4))(&DAT_01b35510);
    FUN_00dd6d80(puVar3);
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x9c,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    break;
  case 2:
    FUN_00aa4520(0x9d,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4520(0x9e,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 6:
    FUN_00aa4520(0x9f,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 8:
    FUN_00aa4520(0xa0,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 10:
    FUN_00aa4520(0xa1,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xb:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_00a7c950();
      FUN_00ba6810(1,0);
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  default:
    goto switchD_006074c0_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_006074c0_default:
  return;
}

// 00607700  FUN_00607700  size=587  [between]
void __fastcall FUN_00607700(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35510;
    (**(code **)(*piVar2 + 4))(&DAT_01b35510);
    FUN_00dd6d80(puVar3);
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x9d,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    break;
  case 1:
  case 3:
  case 5:
  case 7:
    break;
  case 2:
    FUN_00aa4520(0x9e,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4520(0x9f,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 6:
    FUN_00aa4520(0xa0,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 8:
    FUN_00aa4520(0xa1,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_00a7c950();
      FUN_00ba6810(1,0);
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  default:
    goto switchD_00607780_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00607780_default:
  return;
}

// 00607980  FUN_00607980  size=764  [between]
void __fastcall FUN_00607980(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35510;
    (**(code **)(*piVar2 + 4))(&DAT_01b35510);
    FUN_00dd6d80(puVar3);
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x8e,iVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b80920(iVar1,0x40400000,0x3dcccccd,0x3e99999a,1);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    break;
  case 1:
  case 3:
  case 5:
    break;
  case 2:
    FUN_00aa4520(0x8f,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4520(0x90,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 6:
    FUN_00aa4520(0x91,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    FUN_00a7c950();
    (**(code **)(*param_1 + 0x15c))(0x83,0);
    FUN_00ba6810(1,1);
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    iVar1 = FUN_00a8eea0();
    if (iVar1 < 1) {
      FUN_00b7ce10();
      FUN_00b7c9c0(0);
      FUN_008abc80(0x50001);
      return;
    }
    FUN_008abc80(0x3000a);
    return;
  case 8:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00a7c950();
    (**(code **)(*param_1 + 0x15c))(0x83,0);
    FUN_00ba6810(1,1);
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_008abc80(0x40005);
    FUN_00e5e0c0("pl1500_se_grd_hit_sword_m",param_1,0xffffffff,0);
    return;
  default:
    goto switchD_00607a00_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00607a00_default:
  return;
}

// 00607CA0  FUN_00607ca0  size=325  [between]
undefined4 __thiscall FUN_00607ca0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_110 [140];
  uint local_84;
  uint local_80;
  int local_7c;
  
  uVar5 = 0;
  FUN_004105d0();
  FUN_0043e160(param_2);
  iVar3 = FUN_00ac8cd0(local_110);
  if (iVar3 != 0) {
    iVar3 = FUN_00ac8350();
    uVar1 = local_80 & 0x40000;
    uVar2 = local_80 & 0x20000;
    iVar4 = FUN_00a8cbe0(0x40003);
    if ((iVar4 != 0) ||
       ((local_84 & 0x400) != 0 ||
        (uVar2 != 0 || (uVar1 != 0 || ((local_84 & 0x200) != 0 || iVar3 != 0))))) {
      if (local_7c != 0) {
        FUN_00ac8d00(param_1,local_110,0);
        uVar5 = 1;
        uVar6 = 0;
        iVar3 = FUN_00a81330();
        if (iVar3 != 0) {
          uVar6 = FUN_00a7c8a0();
        }
        if ((local_80 & 0x10000) != 0) {
          (**(code **)(*param_1 + 0x198))(uVar6,param_2,1);
          return 1;
        }
        (**(code **)(*param_1 + 0x198))(uVar6,param_2,0x100);
      }
      return uVar5;
    }
  }
  return 0;
}

// 00607DF0  FUN_00607df0  size=524  [between]
void __fastcall FUN_00607df0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    uVar1 = 0x7d;
    if (param_1[0x186] == 0x30001) {
      uVar1 = 0x79;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar2 = FUN_00ac8660(0,0x37);
    param_1[599] = iVar2;
  case 1:
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[599] < 1) {
        param_1[0x187] = 4;
        return;
      }
LAB_00607f68:
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    uVar1 = 0x7e;
    if (param_1[0x186] == 0x30001) {
      uVar1 = 0x7a;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 3:
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] = param_1[0x250] + 1, param_1[599] <= param_1[0x250]))
    goto LAB_00607f68;
    break;
  case 4:
    uVar1 = 0x7f;
    if (param_1[0x186] == 0x30001) {
      uVar1 = 0x7b;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00606120();
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00607ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    break;
  }
  return;
}

// 00608060  FUN_00608060  size=56  [between]
bool __fastcall FUN_00608060(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa84);
  if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x4e4) != 0 || (*(int *)(iVar1 + 0x870) < 1)))) {
    return false;
  }
  return *(float *)(param_1 + 0xea8) <= 0.0;
}

// 006080A0  FUN_006080a0  size=64  [between]
uint __fastcall FUN_006080a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if ((((iVar1 != 0x30000) && (iVar1 != 0x30001)) && (iVar1 != 0x30005)) &&
     (((*(uint *)(param_1 + 0xe90) & 0x20000000) == 0 && (*(int *)(param_1 + 0x628) != 0x30005)))) {
    return ~(*(uint *)(param_1 + 0xe90) >> 0x1f) & 1;
  }
  return 0;
}

// 006080E0  FUN_006080e0  size=165  [between]
undefined4 __fastcall FUN_006080e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((*(uint *)(param_1 + 0xe90) & 0x20000000) != 0) {
    piVar1 = (int *)FUN_00a9b930();
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x1d8))();
      if ((iVar2 == 0) && (piVar1[0x139] == 0)) {
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        FUN_00c59410(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&uStack_20,0x41100000,0x40200000,
                     0x40490fdb,0x3f490fdb,0x1009,0);
        return 1;
      }
    }
  }
  return 0;
}

// 00608190  FUN_00608190  size=64  [between]
bool __fastcall FUN_00608190(int param_1)

{
  int iVar1;
  undefined1 local_24 [4];
  undefined1 local_20 [28];
  
  iVar1 = FUN_00907640(param_1 + 0xebc,local_24,local_20);
  if (iVar1 != 0) {
    FUN_0112bcf0();
  }
  return iVar1 == 0;
}

// 006081D0  FUN_006081d0  size=178  [between]
void __thiscall FUN_006081d0(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  iVar1 = FUN_009f8b40();
  local_40 = *param_3 - *param_2;
  local_2c = iVar1 << 0x10 | 7;
  local_3c = param_3[1] - param_2[1];
  local_60[0] = param_1 + 0xebc;
  local_38 = param_3[2] - param_2[2];
  local_34 = param_3[3] - param_2[3];
  local_50 = *param_2;
  local_60[1] = 0;
  local_28 = 0x1b;
  local_4c = param_2[1];
  local_24 = 8;
  local_20 = 0;
  local_48 = param_2[2];
  local_1c = "Em0130PlayerView";
  local_44 = param_2[3];
  local_30 = 0x3dcccccd;
  FUN_0090fb00(local_60);
  return;
}

// 00608290  FUN_00608290  size=58  [between]
undefined4 __fastcall FUN_00608290(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  if ((*(int *)(param_1 + 0x870) <= iVar1) && (225.0 < *(float *)(param_1 + 0xa8c))) {
    return 1;
  }
  return 0;
}

// 006082D0  FUN_006082d0  size=143  [between]
bool __fastcall FUN_006082d0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_00fdbc60();
  if ((*(int *)(param_1 + 0x870) <= iVar2) &&
     (fVar1 = *(float *)(param_1 + 0xa8c), NAN(fVar1) || 225.0 < fVar1 == (fVar1 == 225.0))) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x57);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(0x57);
    if (iVar2 <= *(int *)(param_1 + 0x11b4)) {
      if (iVar3 <= *(int *)(param_1 + 0x11b4)) {
        return true;
      }
      uVar4 = FUN_00dde2a0(0,1000);
      return (uVar4 & 0xffff) % 3 == 0;
    }
  }
  return false;
}

// 00608360  FUN_00608360  size=112  [between]
void FUN_00608360(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35514;
    (**(code **)(*piVar2 + 4))(&DAT_01b35514);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00a9e290(&DAT_0163b604,1,0,0x3f800000,0x10,0xbf800000,0x3f800000);
      piVar2[0x232] = 1;
    }
  }
  return;
}

// 006083D0  FUN_006083d0  size=124  [between]
void FUN_006083d0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35514;
    (**(code **)(*piVar2 + 4))(&DAT_01b35514);
    iVar1 = FUN_00dd6d80(puVar3);
    if ((iVar1 != 0) && (piVar2[0x232] != 0)) {
      FUN_00a9e290(&DAT_0163bbb8,1,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      piVar2[0x232] = 0;
    }
  }
  return;
}

// 00608450  FUN_00608450  size=195  [between]
void __thiscall FUN_00608450(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_60 [4];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  iVar5 = FUN_009f8b40();
  local_2c = iVar5 << 0x10 | 7;
  local_60[0] = param_1 + 0xfcc;
  local_40 = *param_2;
  local_60[1] = 0;
  local_3c = param_2[1];
  local_28 = 0x3ff001b;
  local_24 = 0;
  local_38 = param_2[2];
  local_20 = 0;
  local_1c = "Em0130FreeSpace";
  local_34 = param_2[3];
  local_30 = 0x3f000000;
  local_50 = uVar1;
  local_4c = fVar2 + 1.5;
  local_48 = uVar3;
  local_44 = uVar4;
  FUN_0090fb00(local_60);
  return;
}

// 00608520  Em0130::vf360  size=85  [class]
void __fastcall Em0130::vf360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00e00900();
  iVar1 = FUN_00ac89d0();
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x4f0);
  }
  else {
    uVar2 = FUN_00a81330(0);
  }
  FUN_00e03080(uVar2,uVar3);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00e03080(iVar1,1);
  }
  return;
}

// 00608580  FUN_00608580  size=37  [between]
undefined4 FUN_00608580(void)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if ((2 < iVar1) && (iVar1 = FUN_00a8c760(0xf), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// 006085B0  FUN_006085b0  size=307  [between]
undefined4 __thiscall FUN_006085b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_ESI;
  float10 fVar5;
  float10 fVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float afStack_ac [3];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [2];
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58 [2];
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    local_a0 = 0;
    local_9c = 0;
    local_98[0] = 0x40e00000;
    fVar5 = (float10)FUN_00a8ec30(param_1 + 0x40);
    fVar6 = (float10)FUN_00ddba30((float)(fVar5 - (float10)*(float *)(*(int *)(param_1 + 0xa84) +
                                                                     0x94)));
    fVar5 = (float10)0;
    local_58[0] = (float)fVar5;
    local_5c = (float)fVar5;
    local_60 = (float)fVar5;
    local_64 = (float)fVar5;
    local_6c = (float)fVar5;
    local_70 = (float)fVar5;
    local_74 = (float)fVar5;
    local_78 = (float)fVar5;
    local_80 = (float)fVar5;
    local_84 = (float)fVar5;
    local_88 = (float)fVar5;
    local_8c = (float)fVar5;
    local_58[1] = 1.0;
    local_68 = 0x3f800000;
    local_7c = 0x3f800000;
    local_90 = 0x3f800000;
    if (fVar6 != fVar5) {
      D3DXMatrixRotationY(local_50,(float)fVar6);
      D3DXMatrixMultiply(local_98,local_58,local_98);
    }
    puVar8 = &local_90;
    puVar7 = &local_a0;
    D3DXVec3TransformNormal(puVar7);
    D3DXVec3TransformNormal(afStack_ac,afStack_ac,*(int *)(param_1 + 0xa84) + 0x10);
    iVar4 = *(int *)(param_1 + 0xa84);
    fVar1 = *(float *)(iVar4 + 0x44);
    fVar2 = *(float *)(iVar4 + 0x48);
    fVar3 = *(float *)(iVar4 + 0x4c);
    *param_2 = *(float *)(iVar4 + 0x40) + (float)puVar7;
    param_2[1] = fVar1 + (float)puVar8;
    param_2[2] = fVar2 + unaff_ESI;
    param_2[3] = fVar3 + afStack_ac[0];
    return 1;
  }
  return 0;
}

// 006086F0  FUN_006086f0  size=116  [between]
void FUN_006086f0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b3551c;
      (**(code **)(*piVar2 + 4))(&DAT_01b3551c);
      iVar1 = FUN_00dd6d80(puVar3);
      if (iVar1 != 0) {
        FUN_00a9e290(param_1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
    }
  }
  return;
}

// 00608770  FUN_00608770  size=46  [between]
void __fastcall FUN_00608770(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar2 = &DAT_01b35b90;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01b35b90);
    iVar1 = FUN_00dd6d80(puVar2);
    if (iVar1 != 0) {
      FUN_008ba120();
      return;
    }
  }
  return;
}

// 006087A0  FUN_006087a0  size=221  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_006087a0(float param_1)

{
  int iVar1;
  undefined4 uVar2;
  float local_4;
  
  uVar2 = 0;
  local_4 = param_1;
  iVar1 = FUN_009c5640();
  if ((iVar1 != 0) && ((DAT_01b7b914 & 0xc0) != 0)) {
    return 1;
  }
  if (((*(uint *)((int)param_1 + 0xe90) & 0x100000) == 0) && ((DAT_01b7b914 & 0x40) != 0)) {
    *(uint *)((int)param_1 + 0xe90) = *(uint *)((int)param_1 + 0xe90) | 0x100000;
  }
  if ((((((*(uint *)((int)param_1 + 0xe90) & 0x200000) == 0) && ((DAT_01b7b914 & 0xf0000) != 0)) &&
       (local_4 = 0.0, 90000.0 < _DAT_01b7b920 * _DAT_01b7b920 + _DAT_01b7b924 * _DAT_01b7b924)) &&
      ((iVar1 = FUN_00605d40(&local_4), iVar1 != 0 && (-0.6981317 <= local_4)))) &&
     (local_4 < 1.2217305 != (local_4 == 1.2217305))) {
    *(uint *)((int)param_1 + 0xe90) = *(uint *)((int)param_1 + 0xe90) | 0x200000;
  }
  if (((*(uint *)((int)param_1 + 0xe90) & 0x200000) != 0) &&
     ((*(uint *)((int)param_1 + 0xe90) & 0x100000) != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

// 00608880  FUN_00608880  size=137  [between]
void __thiscall FUN_00608880(int param_1,int param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x13a0) = 0;
    *(undefined4 *)(param_2 + 0x13a4) = 0;
    *(undefined4 *)(param_2 + 0x13a8) = 0;
  }
  else if (*(int *)(param_1 + 0x18) != 1) {
    return;
  }
  fVar1 = *(float *)(param_2 + 0x13a8) * *(float *)(param_2 + 0x13a8) +
          *(float *)(param_2 + 0x13a0) * *(float *)(param_2 + 0x13a0) +
          *(float *)(param_2 + 0x13a4) * *(float *)(param_2 + 0x13a4);
  if (fVar1 < 0.0001 != (fVar1 == 0.0001)) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

// 00608910  FUN_00608910  size=45  [between]
void __thiscall
FUN_00608910(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_3;
  local_c = param_2;
  local_4 = param_4;
  (**(code **)(*(int *)*param_1 + 8))(&local_c);
  return;
}

// 00608940  Em0130::vf33C  size=72  [class]
void __thiscall Em0130::vf33C(int param_1,undefined4 param_2,int param_3)

{
  if ((*(uint *)(param_1 + 0xe90) & 0x2000) == 0) {
    if (((*(uint *)(param_1 + 0xe90) & 0xc000) != 0) &&
       (((*(uint *)(param_3 + 0x10) & 0x80000000) == 0 || (-1 < *(int *)(param_3 + 8))))) {
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x4b4);
      return;
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x18) = 0x42130;
  }
  *(undefined4 *)(param_3 + 0x18) = 0x42130;
  return;
}

// 00609DA0  FUN_00609da0  size=107  [callgraph]
undefined4 * __thiscall FUN_00609da0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 8);
  puVar1 = (undefined4 *)(iVar2 + uVar3 * 0xc);
  if ((((param_2 != puVar1) && (iVar2 != 0)) && (uVar3 != 0)) &&
     ((uint)(((int)param_2 - iVar2) / 0xc) < uVar3)) {
    for (puVar4 = param_2; puVar4 != puVar1 + -3; puVar4 = puVar4 + 3) {
      *puVar4 = puVar4[3];
      puVar4[1] = puVar4[4];
      puVar4[2] = puVar4[5];
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    return param_2;
  }
  return puVar1;
}

// 00609E90  Em0130::vf44  size=345  [class]
void __fastcall Em0130::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00900ca0();
  FUN_00900ca0();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
  DAT_01dc08dc = 0;
  DAT_01dc08e0 = 0;
  FUN_00a92a00();
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  if (*(int *)(param_1 + 0x1180) != 0) {
    piVar2 = (int *)FUN_00910da0();
    (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1180);
  }
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  if (*(undefined4 **)(param_1 + 0x1330) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1330))(1);
    *(undefined4 *)(param_1 + 0x1330) = 0;
  }
  BehaviorEmBase::vf44();
  return;
}

// 00609FF0  Em0130::vf19C  size=179  [class]
void __thiscall Em0130::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 0060A0B0  FUN_0060a0b0  size=41  [between]
void __fastcall FUN_0060a0b0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060a0d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0060A0E0  FUN_0060a0e0  size=274  [between]
void __fastcall FUN_0060a0e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x32;
    if (param_1[0x186] == 0x20001) {
      uVar1 = 0x55;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608360();
    FUN_00a8d280();
    param_1[0x46d] = param_1[0x46d] + 1;
    FUN_00606260();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0060a1a8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    fVar3 = (float10)FUN_00ac85c0(5,0x30);
    param_1[0x3aa] = (int)(float)(fVar3 * (float10)60.0);
    FUN_006083d0();
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0060a1a8:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0060A200  FUN_0060a200  size=41  [between]
void __fastcall FUN_0060a200(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060a225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0060A230  FUN_0060a230  size=41  [between]
void __fastcall FUN_0060a230(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060a255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0060A260  FUN_0060a260  size=308  [between]
void __fastcall FUN_0060a260(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    iVar2 = param_1[0x186];
    uVar1 = 0x39;
    if (iVar2 == 0x20005) {
      uVar1 = 0x5c;
    }
    if (iVar2 == 0x20006) {
      uVar1 = 0x38;
    }
    if (iVar2 == 0x20007) {
      uVar1 = 0x5b;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608360();
    FUN_00a8d280();
    param_1[0x46d] = param_1[0x46d] + 1;
    FUN_00606260();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0060a34a;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    fVar3 = (float10)FUN_00ac85c0(5,0x30);
    param_1[0x3aa] = (int)(float)(fVar3 * (float10)60.0);
    FUN_006083d0();
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0060a34a:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0060A3A0  FUN_0060a3a0  size=41  [between]
void __fastcall FUN_0060a3a0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060a3c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0060A3D0  FUN_0060a3d0  size=274  [between]
void __fastcall FUN_0060a3d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x3b;
    if (param_1[0x186] == 0x20009) {
      uVar1 = 0x5f;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608360();
    FUN_00a8d280();
    param_1[0x46d] = param_1[0x46d] + 1;
    FUN_00606260();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0060a498;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    fVar3 = (float10)FUN_00ac85c0(5,0x30);
    param_1[0x3aa] = (int)(float)(fVar3 * (float10)60.0);
    FUN_006083d0();
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0060a498:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0060A4F0  FUN_0060a4f0  size=41  [between]
void __fastcall FUN_0060a4f0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060a515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0060A520  FUN_0060a520  size=386  [between]
void __fastcall FUN_0060a520(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  float10 fVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x42,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x46d] = param_1[0x46d] + 1;
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x43,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00608770();
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) && (param_1[0x250] = param_1[0x250] + 1, 1 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x44,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_00ac85c0(5,0x30);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x3aa] = (int)(float)(fVar2 * (float10)60.0);
                    /* WARNING: Could not recover jumptable at 0x0060a69d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0060A6C0  FUN_0060a6c0  size=41  [between]
void __fastcall FUN_0060a6c0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060a6e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0060A6F0  FUN_0060a6f0  size=285  [between]
void __fastcall FUN_0060a6f0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    iVar2 = param_1[0x186];
    uVar1 = 0x3e;
    if (iVar2 == 0x2000d) {
      uVar1 = 0x3d;
    }
    if (iVar2 == 0x2000c) {
      uVar1 = 0x62;
    }
    if (iVar2 == 0x2000e) {
      uVar1 = 0x61;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608360();
    FUN_00a8d280();
    param_1[0x46d] = param_1[0x46d] + 1;
    FUN_00606260();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0060a7c3;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_006083d0();
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0060a7c3:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0060A810  FUN_0060a810  size=53  [between]
void __fastcall FUN_0060a810(int *param_1)

{
  int iVar1;
  
  if (param_1[0x186] == 0x2000f) {
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060a841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
  }
  return;
}

// 0060A850  FUN_0060a850  size=41  [between]
void __fastcall FUN_0060a850(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060a875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0060A880  FUN_0060a880  size=661  [between]
void __fastcall FUN_0060a880(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    uVar3 = 0x46;
    if (param_1[0x186] == 0x20011) {
      uVar3 = 100;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608360();
    FUN_00a8d280();
    param_1[0x46d] = param_1[0x46d] + 1;
    FUN_00606260();
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(10);
    if (((iVar2 != 0) && ((param_1[0x3a4] & 0x80000000U) == 0)) && ((float)param_1[0x2a3] <= 225.0))
    {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    uVar3 = 0x47;
    if (param_1[0x186] == 0x20011) {
      uVar3 = 0x65;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(10);
    if (((iVar2 != 0) && ((param_1[0x3a4] & 0x80000000U) == 0)) && ((float)param_1[0x2a3] <= 225.0))
    {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    uVar3 = 0x48;
    bVar1 = FUN_00dde2a0(0,1000);
    if ((bVar1 & 1) != 0) {
      uVar3 = 0x49;
    }
    if (param_1[0x186] == 0x20011) {
      uVar3 = 0x66;
      bVar1 = FUN_00dde2a0(0,1000);
      if ((bVar1 & 1) != 0) {
        uVar3 = 0x67;
      }
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  default:
    goto switchD_0060a89a_default;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_006083d0();
    (**(code **)(*param_1 + 0x34c))();
  }
switchD_0060a89a_default:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0060AB30  FUN_0060ab30  size=358  [between]
void __fastcall FUN_0060ab30(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *_Format;
  char local_14 [20];
  
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_0060ac5d;
  }
  uVar1 = 0x53;
  if (param_1[0x186] == 0x20014) {
    uVar1 = 0x69;
  }
  FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  FUN_00608360();
  FUN_00a8d280();
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x46d] = 0;
  iVar3 = thunk_FUN_00e58ed0(param_1[0x464]);
  if (iVar3 != 0) goto LAB_0060ac5d;
  uVar2 = FUN_00dde2a0(0,1000);
  switch((uVar2 & 0xffff) % 6) {
  case 0:
    _Format = "DC3b4000_171010";
    break;
  case 1:
    _Format = "DC3b4000_181010";
    break;
  case 2:
    _Format = "DC3b4000_1a1010";
    break;
  case 3:
    _Format = "DC3b4000_1d1010";
    break;
  case 4:
    _Format = "DC3b4000_1g1010";
    break;
  case 5:
    _Format = "DC3b4000_1h1010";
    break;
  default:
    goto switchD_0060abe9_default;
  }
  _sprintf_s(local_14,0x14,_Format);
switchD_0060abe9_default:
  iVar3 = FUN_00e5e0c0(local_14,param_1,0xffffffff,0);
  param_1[0x464] = iVar3;
LAB_0060ac5d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
  FUN_006083d0();
                    /* WARNING: Could not recover jumptable at 0x0060ac94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0060ACB0  FUN_0060acb0  size=41  [between]
void __fastcall FUN_0060acb0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060acd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0060ACE0  FUN_0060ace0  size=41  [between]
void __fastcall FUN_0060ace0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0060ad05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0060AD10  FUN_0060ad10  size=671  [between]
undefined4 __thiscall FUN_0060ad10(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  float local_34c;
  float local_348;
  float local_340;
  float local_33c;
  float local_338;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined4 uStack_318;
  uint uStack_2a0;
  undefined4 uStack_22c;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1ac;
  float fStack_1a8;
  
  fVar1 = *(float *)(param_1 + 0xfd8) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0xfd8) = fVar1;
  if (fVar1 <= 0.0) {
    iVar4 = FUN_00a12210(0x600);
    if (iVar4 != 0) {
      local_34c = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                       *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                       *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
      local_348 = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                       *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                       *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
      fVar3 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                   *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                   *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
      fVar1 = *(float *)(iVar4 + 0x28);
      fVar2 = *(float *)(iVar4 + 0x38);
      fVar6 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar3));
      fVar7 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
      local_340 = (float)fVar7;
      local_33c = (float)fVar6;
      fVar6 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_348,
                              (float10)*(float *)(iVar4 + 0x10) / (float10)local_34c);
      local_338 = (float)fVar6;
      local_360 = 0;
      local_35c = 0;
      local_358 = 0;
      D3DXVec3TransformNormal(&local_360,&local_360,(float *)(iVar4 + 0x10));
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      uStack_1cc = FUN_009f8b40();
      uStack_328 = 10;
      uStack_320 = 10;
      uStack_31c = 0;
      uStack_324 = 0x96;
      uStack_22c = 0x83;
      fVar6 = (float10)FUN_00dde300(0xbcd67750,0x3cd67750);
      fStack_1ac = (float)fVar6;
      fVar6 = (float10)FUN_00dde300(0xbcd67750,0x3cd67750);
      fStack_1a8 = (float)fVar6;
      uStack_318 = *(undefined4 *)(param_1 + 0x4f0);
      uStack_2a0 = uStack_2a0 | 0x10000010;
      uStack_1d0 = 0x3f7f7cee;
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      FUN_00416e30(&stack0xfffffc94,param_2,&local_34c,0x40600000,0x42c80000);
      FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),&local_33c);
      FUN_00a8d280();
      *(int *)(param_1 + 0xfd0) = *(int *)(param_1 + 0xfd0) + -1;
      *(undefined4 *)(param_1 + 0xfd8) = 0x41200000;
      if (*(int *)(param_1 + 0xfd0) < 1) {
        *(undefined4 *)(param_1 + 0xfd4) = 0;
        *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfffdffff;
      }
      return 1;
    }
  }
  return 0;
}

// 0060AFB0  FUN_0060afb0  size=194  [between]
void __thiscall
FUN_0060afb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if ((*(int *)(param_1 + 0x618) == 0x10006) &&
     ((((param_2 == 0x40003 || (param_2 == 0x1000c)) || (param_2 == 0x30002)) ||
      ((param_2 == 0x30000 || (param_2 == 0x30001)))))) {
    *(undefined4 *)(param_1 + 0x1344) = 2;
    *(undefined4 *)(param_1 + 0x1348) = 0;
    *(uint *)(param_1 + 0x1340) = *(uint *)(param_1 + 0x1340) | 2;
  }
  FUN_00a8caf0(param_2,param_3,param_4,param_5);
  if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
    FUN_006083d0();
  }
  if (*(int *)(param_1 + 0x618) != 0x30002) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  FUN_006086f0(&DAT_0163b5f4);
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
  return;
}

// 0060B080  Em0130::vf34C  size=254  [class]
void __fastcall Em0130::vf34C(int *param_1)

{
  (**(code **)(*param_1 + 0x1f8))(0);
  (**(code **)(*param_1 + 0x1d4))(0);
  param_1[0x22a] = 0x3f800000;
  FUN_00a8caf0(0x10000,0,0,0);
  if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
    FUN_006083d0();
  }
  if (param_1[0x186] != 0x30002) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  FUN_006086f0(&DAT_0163b5f4);
  param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
  if (param_1[0x4d3] != 0) {
    FUN_00a8caf0(0x10006,0,0,0);
    if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
      FUN_006083d0();
    }
    if (param_1[0x186] != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
  }
  return;
}

// 0060B180  FUN_0060b180  size=165  [between]
void __fastcall FUN_0060b180(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35514;
    (**(code **)(*piVar2 + 4))(&DAT_01b35514);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),piVar2[0x13c],0x700,0xffffffff,1);
      FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      piVar2[0x231] = 1;
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x800000;
    }
  }
  return;
}

// 0060B230  FUN_0060b230  size=84  [between]
void __fastcall FUN_0060b230(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35514;
    (**(code **)(*piVar2 + 4))(&DAT_01b35514);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00ac8b80(piVar2[0x13c]);
    }
  }
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xff7fffff;
  return;
}

// 0060B290  FUN_0060b290  size=402  [between]
undefined4 __fastcall FUN_0060b290(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xa84) != 0) {
    if (1.2217305 < *(float *)(param_1 + 0xa9c)) {
      FUN_00a8caf0(0x10008,0,0,0);
      if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
        FUN_006083d0();
      }
      if (*(int *)(param_1 + 0x618) != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
      uVar2 = 1;
    }
    if (*(float *)(param_1 + 0xa9c) < -1.2217305) {
      FUN_00a8caf0(0x10007,0,0,0);
      if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
        FUN_006083d0();
      }
      if (*(int *)(param_1 + 0x618) != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
      uVar2 = 1;
    }
    fVar1 = *(float *)(param_1 + 0xaa0);
    if (!NAN(fVar1) && 2.3561945 < fVar1 != (fVar1 == 2.3561945)) {
      FUN_00a8caf0(0x10009,0,0,0);
      if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
        FUN_006083d0();
      }
      if (*(int *)(param_1 + 0x618) != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
      return 1;
    }
  }
  return uVar2;
}

// 0060B430  FUN_0060b430  size=482  [between]
undefined4 __fastcall FUN_0060b430(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *_Format;
  int local_1c;
  undefined1 local_18 [4];
  char local_14 [20];
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xe90) & 0x80000000) == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_1c,local_18);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_1c,local_18);
  }
  if (local_1c == 0) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0x7fffffff;
    *(undefined4 *)(param_1 + 0x1188) = 0;
    return 0;
  }
  if ((*(uint *)(param_1 + 0xe90) & 0x80000000) != 0) goto LAB_0060b547;
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x80000000;
  *(undefined2 *)(param_1 + 0x824) = 1;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  iVar3 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1190));
  if (iVar3 != 0) goto LAB_0060b547;
  sVar1 = *(short *)(param_1 + 0x1198);
  do {
    sVar2 = FUN_00dde2d0(0,1000);
    uVar4 = (int)sVar2 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    sVar2 = (short)uVar4;
    *(short *)(param_1 + 0x1198) = sVar2;
  } while (sVar2 == sVar1);
  switch(sVar2) {
  case 0:
    _Format = "DC3b2000_1e1010";
    break;
  case 1:
    _Format = "D23_1000_121010";
    break;
  case 2:
    _Format = "D23_1000_161010";
    break;
  case 3:
    _Format = "D23_1000_171010";
    break;
  default:
    goto switchD_0060b4f2_default;
  }
  _sprintf_s(local_14,0x14,_Format);
switchD_0060b4f2_default:
  uVar5 = FUN_00e5e0c0(local_14,param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x1190) = uVar5;
LAB_0060b547:
  iVar3 = *(int *)(param_1 + 0x618);
  if (((iVar3 != 0x10000) && (iVar3 != 0x10001)) && (iVar3 != 0x10006)) {
    return 0;
  }
  if (iVar3 == 0x10006) {
    *(undefined4 *)(param_1 + 0x1344) = 2;
    *(undefined4 *)(param_1 + 0x1348) = 0;
    *(uint *)(param_1 + 0x1340) = *(uint *)(param_1 + 0x1340) | 2;
  }
  FUN_00a8caf0(0x1000c,0,0,0);
  if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
    FUN_006083d0();
  }
  if (*(int *)(param_1 + 0x618) != 0x30002) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  FUN_006086f0(&DAT_0163b5f4);
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
  return 1;
}

// 0060B630  FUN_0060b630  size=982  [between]
undefined4 __fastcall FUN_0060b630(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  undefined *puVar11;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 auStack_4c [4];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  piVar7 = (int *)FUN_00a9b930();
  if (piVar7 != (int *)0x0) {
    puVar11 = &DAT_01b35b90;
    (**(code **)(*piVar7 + 4))(&DAT_01b35b90);
    iVar8 = FUN_00dd6d80(puVar11);
    if (iVar8 != 0) {
      fStack_40 = *(float *)(param_1 + 0x40);
      fStack_3c = *(float *)(param_1 + 0x44);
      uStack_58 = 0;
      fStack_38 = *(float *)(param_1 + 0x48);
      fStack_34 = *(float *)(param_1 + 0x4c);
      fStack_54 = *(float *)(param_1 + 0x94);
      fStack_5c = 0.0;
      iVar8 = FUN_00a12210(0);
      if (iVar8 != 0) {
        fStack_40 = *(float *)(iVar8 + 0x40);
        fStack_3c = *(float *)(iVar8 + 0x44);
        fStack_38 = *(float *)(iVar8 + 0x48);
        fStack_34 = *(float *)(iVar8 + 0x4c);
        fStack_20 = *(float *)(iVar8 + 0x30) + fStack_40;
        fStack_1c = *(float *)(iVar8 + 0x34) + fStack_3c;
        fStack_18 = fStack_38 + *(float *)(iVar8 + 0x38);
        fStack_14 = fStack_34 + *(float *)(iVar8 + 0x3c);
        thunk_FUN_00dde510(&fStack_5c,&fStack_54,&fStack_20,&fStack_40);
        fStack_5c = fStack_5c * -1.0;
      }
      fStack_30 = (float)piVar7[0x10];
      fStack_28 = (float)piVar7[0x12];
      iStack_24 = piVar7[0x13];
      fStack_2c = (float)piVar7[0x11] + 1.5;
      fVar1 = fStack_30 - fStack_40;
      fStack_48 = fStack_28 - fStack_38;
      thunk_FUN_00dde510(&fStack_64,auStack_4c,&fStack_30,&fStack_40);
      fStack_64 = fStack_64 * -1.0;
      thunk_FUN_00dde510(&fStack_60,auStack_4c,piVar7 + 0x10,&fStack_40);
      fStack_60 = fStack_60 * -1.0;
      fStack_50 = (fStack_30 - fStack_40) * (fStack_30 - fStack_40) +
                  (fStack_2c - fStack_3c) * (fStack_2c - fStack_3c) +
                  (fStack_28 - fStack_38) * (fStack_28 - fStack_38);
      fVar10 = (float10)fpatan((float10)fVar1,(float10)fStack_48);
      fVar10 = (float10)FUN_00ddba30((float)(fVar10 - (float10)fStack_54));
      fVar1 = fStack_64;
      fStack_44 = (float)fVar10;
      bVar5 = false;
      bVar6 = false;
      if (fStack_64 < fStack_60) {
        fStack_64 = fStack_60;
        fStack_60 = fVar1;
      }
      iVar8 = *(int *)(param_1 + 0xd80);
      fVar3 = *(float *)(iVar8 + 0x1c) + fStack_5c;
      fVar4 = fStack_5c - *(float *)(iVar8 + 0x1c);
      fVar2 = *(float *)(iVar8 + 0x10) + fStack_5c;
      fVar1 = fStack_5c - *(float *)(iVar8 + 0x10);
      if ((fVar3 <= fStack_60) || (fStack_60 <= fVar4)) {
        if ((fVar3 <= fStack_64) || (fStack_64 <= fVar4)) {
          if ((fStack_64 <= fVar3) || (fVar4 <= fStack_60)) {
            if ((fStack_64 < fVar3) && (fVar4 < fStack_60)) {
              bVar6 = true;
            }
          }
          else {
            bVar6 = true;
          }
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
      }
      if ((fVar2 <= fStack_60) || (fStack_60 <= fVar1)) {
        if ((fVar2 <= fStack_64) || (fStack_64 <= fVar1)) {
          if ((fStack_64 <= fVar2) || (fVar1 <= fStack_60)) {
            if ((fStack_64 < fVar2) && (fVar1 < fStack_60)) {
              bVar5 = true;
            }
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
        }
      }
      else {
        bVar5 = true;
      }
      iVar8 = FUN_00907640(param_1 + 0xebc,&fStack_48,&fStack_20);
      bVar9 = iVar8 != 0;
      if (bVar9) {
        FUN_0112bcf0();
      }
      iVar8 = *(int *)(param_1 + 0xd80);
      fVar1 = ABS(fStack_44);
      if ((((fVar1 < *(float *)(iVar8 + 0xc) != (fVar1 == *(float *)(iVar8 + 0xc))) &&
           (fStack_50 <= *(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14))) && (bVar5)) &&
         (!bVar9)) {
        uStack_58 = 1;
      }
      if (((fVar1 < *(float *)(iVar8 + 0x18) != (fVar1 == *(float *)(iVar8 + 0x18))) &&
          (fStack_50 <= *(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20))) &&
         ((bVar6 && (!bVar9)))) {
        uStack_58 = 1;
      }
      if ((*(uint *)(param_1 + 0xe90) & 0x80000000) != 0) {
        uStack_58 = 0;
      }
      FUN_006081d0(&fStack_40,&fStack_30);
      return uStack_58;
    }
  }
  return 0;
}

// 0060BA10  FUN_0060ba10  size=656  [between]
void __fastcall FUN_0060ba10(int param_1)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  float *pfStack_d8;
  float *local_d4;
  undefined1 auStack_cc [12];
  float local_c0 [4];
  float local_b0 [2];
  uint local_a8 [41];
  
  fVar3 = *(float *)(param_1 + 0xfc8) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0xfc8) = fVar3;
  if (fVar3 <= 0.0) {
    local_b0[0] = 8.0;
    local_a8[0] = 0x58;
    local_b0[1] = 0.0;
    local_a8[3] = 0x5d;
    local_a8[6] = 0x5b;
    local_a8[1] = 0x41000000;
    local_a8[9] = 0x5f;
    local_a8[0xc] = 0x59;
    local_a8[2] = 0xbf490fdb;
    local_a8[0xf] = 0x5e;
    local_a8[0x12] = 0x5a;
    local_a8[4] = 0x41000000;
    local_a8[0x15] = 0x5c;
    local_a8[5] = 0xbfc90fdb;
    local_a8[7] = 0x41000000;
    local_a8[8] = 0xc016cbe4;
    local_a8[10] = 0x41000000;
    local_a8[0xb] = 0x40490fdb;
    local_a8[0xd] = 0x41000000;
    local_a8[0xe] = 0x4016cbe4;
    local_a8[0x10] = 0x41000000;
    local_a8[0x11] = 0x3fc90fdb;
    local_a8[0x13] = 0x41000000;
    local_a8[0x14] = 0x3f490fdb;
    if (*(int *)(param_1 + 0xfc4) == 0) {
      local_d4 = (float *)local_b0[*(int *)(param_1 + 0xfc0) * 3 + 1];
      local_c0[0] = 0.0;
      local_c0[1] = 0.0;
      local_c0[2] = local_b0[*(int *)(param_1 + 0xfc0) * 3];
      local_a8[0x24] = 0;
      local_a8[0x23] = 0;
      local_a8[0x22] = 0;
      local_a8[0x21] = 0;
      local_a8[0x1f] = 0;
      local_a8[0x1e] = 0;
      local_a8[0x1d] = 0;
      local_a8[0x1c] = 0;
      local_a8[0x1a] = 0;
      local_a8[0x19] = 0;
      local_a8[0x18] = 0;
      local_a8[0x17] = 0;
      local_a8[0x25] = 0x3f800000;
      local_a8[0x20] = 0x3f800000;
      local_a8[0x1b] = 0x3f800000;
      local_a8[0x16] = 0x3f800000;
      if ((float)local_d4 != 0.0) {
        pfStack_d8 = local_b0;
        D3DXMatrixRotationY();
        D3DXMatrixMultiply(local_a8 + 0x14,local_c0 + 2,local_a8 + 0x14);
      }
      local_d4 = (float *)(local_a8 + 0x16);
      pfStack_d8 = local_c0;
      D3DXVec3TransformNormal(pfStack_d8);
      D3DXVec3TransformNormal(auStack_cc,auStack_cc,param_1 + 0x10);
      FUN_00608450(&pfStack_d8);
      *(undefined4 *)(param_1 + 0xfc4) = 1;
      return;
    }
    pfStack_d8 = (float *)(*(int *)(param_1 + 0xfc4) + -1);
    if (pfStack_d8 == (float *)0x0) {
      local_d4 = pfStack_d8;
      iVar4 = FUN_00907640(param_1 + 0xfcc);
      uVar2 = local_a8[*(int *)(param_1 + 0xfc0) * 3];
      if (iVar4 == 0) {
        puVar1 = (uint *)(param_1 + 0xe90 + (uVar2 >> 5) * 4);
        *puVar1 = *puVar1 & ~(0x80000000U >> ((byte)uVar2 & 0x1f));
      }
      else {
        puVar1 = (uint *)(param_1 + 0xe90 + (uVar2 >> 5) * 4);
        *puVar1 = *puVar1 | 0x80000000U >> ((byte)uVar2 & 0x1f);
      }
      *(undefined4 *)(param_1 + 0xfc8) = 0x40a00000;
      *(undefined4 *)(param_1 + 0xfc4) = 0;
      *(uint *)(param_1 + 0xfc0) = *(int *)(param_1 + 0xfc0) + 1U & 7;
      return;
    }
  }
  return;
}

// 0060BCA0  FUN_0060bca0  size=540  [between]
void __fastcall FUN_0060bca0(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ushort uVar5;
  float unaff_ESI;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x20000000;
  fVar7 = (float10)FUN_00ac85c0(5,0x2a);
  *(float *)(param_1 + 0xed4) = (float)(fVar7 * (float10)60.0);
  *(undefined2 *)(param_1 + 0x824) = 1;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  FUN_00a8caf0(0x50002,0,0,0);
  if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
    FUN_006083d0();
  }
  if (*(int *)(param_1 + 0x618) != 0x30002) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  FUN_006086f0(&DAT_0163b5f4);
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfebfffff;
  if ((*(byte *)(param_1 + 0xe92) & 1) == 0) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x10000;
    uVar2 = FUN_00dde2a0(0,0xe);
    uVar6 = uVar2 & 0xffff;
    do {
      uVar1 = FUN_00dde2a0(0,0xe);
    } while ((ushort)uVar2 == uVar1);
    uVar5 = 0;
    do {
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        piVar4 = (int *)FUN_00a7c8a0();
        if (piVar4 != (int *)0x0) {
          puVar9 = &DAT_01b354d0;
          (**(code **)(*piVar4 + 4))(&DAT_01b354d0);
          iVar3 = FUN_00dd6d80(puVar9);
          if (iVar3 != 0) {
            piVar4[0x2d7] = 0;
            if ((uVar5 == (ushort)uVar6) || (uVar5 == uVar1)) {
              piVar4[0x2d7] = 1;
            }
            else {
              piVar4[0x2d7] = 0;
            }
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xf);
  }
  *(undefined4 *)(param_1 + 0xeb4) = 0;
  fVar7 = (float10)FUN_00ac85c0(5,0x2b);
  fVar11 = (float)(fVar7 * (float10)60.0);
  fVar10 = 6.02558e-44;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))();
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))
                             (0x2b,fVar10,
                              (float)((float10)unaff_ESI -
                                     fVar7 * (float10)*(float *)(param_1 + 0xeb4) * (float10)60.0),
                              fVar11);
  fVar8 = fVar8 * (float10)60.0;
  fVar7 = (float10)fVar10;
  if (fVar7 < fVar8 != (fVar7 == fVar8)) {
    fVar7 = fVar8;
  }
  *(float *)(param_1 + 0xeb0) = (float)fVar7;
  fVar7 = (float10)FUN_00ac85c0(5,0x2c);
  *(float *)(param_1 + 0xeac) = (float)(fVar7 * (float10)60.0);
  *(undefined4 *)(param_1 + 0xfb0) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xfb4) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0xfb8) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0xfbc) = *(undefined4 *)(param_1 + 0x4c);
  FUN_00e5e1b0("bgm_Khamsin_Stealth_Enter");
  return;
}

// 0060BEC0  FUN_0060bec0  size=279  [between]
void __fastcall FUN_0060bec0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 0x618) == 0x10006) {
    *(undefined4 *)(param_1 + 0x1344) = 2;
    *(undefined4 *)(param_1 + 0x1348) = 0;
    *(uint *)(param_1 + 0x1340) = *(uint *)(param_1 + 0x1340) | 2;
  }
  FUN_00a8caf0(0x40003,0,0,0);
  if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
    FUN_006083d0();
  }
  if (*(int *)(param_1 + 0x618) != 0x30002) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  FUN_006086f0(&DAT_0163b5f4);
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
  iVar3 = 0xf;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01b354d0;
        (**(code **)(*piVar2 + 4))(&DAT_01b354d0);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          (**(code **)(*piVar2 + 0x20))();
        }
      }
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar4 = &DAT_01be9c38;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9c38);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      FUN_00b7aa80();
      return;
    }
  }
  return;
}

// 0060BFE0  FUN_0060bfe0  size=483  [between]
void __thiscall FUN_0060bfe0(int *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 0xa9c);
  fVar4 = (float)param_1[9] * 0.08;
  switch(param_1[6]) {
  case 0:
    param_1[4] = param_1[4] & 0xfffffffd;
    param_1[7] = 1;
    param_1[8] = 0;
    param_1[6] = 1;
    break;
  case 1:
    break;
  case 2:
    goto switchD_0060c014_caseD_2;
  case 3:
    if (*(int *)(*param_1 + 8) == 0) {
      param_1[6] = 0;
      param_1[5] = 2;
      return;
    }
    piVar3 = *(int **)(*param_1 + 4);
    param_1[1] = *piVar3;
    param_1[2] = piVar3[1];
    param_1[3] = piVar3[2];
    FUN_00609da0(piVar3);
    param_1[6] = 2;
    return;
  default:
    return;
  }
  if (*(int *)(*param_1 + 8) == 0) {
    param_1[5] = 0;
    param_1[6] = 0;
    return;
  }
  piVar3 = *(int **)(*param_1 + 4);
  param_1[1] = *piVar3;
  param_1[2] = piVar3[1];
  param_1[3] = piVar3[2];
  FUN_00609da0(piVar3);
  param_1[6] = param_1[6] + 1;
switchD_0060c014_caseD_2:
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[8] = (int)((float)param_1[9] + (float)param_1[8]);
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    param_1[0x14] = (int)(fVar1 * 0.01);
  }
  uVar2 = param_1[1];
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 8) != 0) {
      fVar5 = (float)param_1[0x10] - (float)param_1[0xc] * fVar4;
      param_1[0x10] = (int)fVar5;
      fVar1 = (float)param_1[0xc] * -1.0 * 0.95;
      if (fVar5 <= fVar1) {
        param_1[0x10] = (int)fVar1;
      }
      goto LAB_0060c0e1;
    }
  }
  else {
    fVar1 = (float)param_1[0xc] * fVar4 + (float)param_1[0x10];
    param_1[0x10] = (int)fVar1;
    fVar5 = (float)param_1[0xc] * 0.95;
    if (fVar5 < fVar1 != (fVar5 == fVar1)) {
      param_1[0x10] = (int)fVar5;
    }
LAB_0060c0e1:
    param_1[0x15] = 1;
  }
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) goto LAB_0060c153;
    fVar4 = (float)param_1[0xf] * fVar4 + (float)param_1[0x12];
    param_1[0x12] = (int)fVar4;
    fVar1 = (float)param_1[0xf] * 0.95;
    if (fVar4 < fVar1 != (fVar4 == fVar1)) {
      param_1[0x12] = (int)fVar1;
      param_1[0x16] = 1;
      goto LAB_0060c153;
    }
  }
  else {
    if (param_1[0x15] == 0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = 0.5;
    }
    fVar4 = (float)param_1[0xe] * fVar4 * fVar1 + (float)param_1[0x12];
    param_1[0x12] = (int)fVar4;
    fVar1 = (float)param_1[0xe] * 0.95 * fVar1;
    if (fVar1 <= fVar4) {
      param_1[0x12] = (int)fVar1;
      param_1[0x16] = 1;
      goto LAB_0060c153;
    }
  }
  param_1[0x16] = 1;
LAB_0060c153:
  fVar1 = (float)param_1[2];
  param_1[2] = (int)(fVar1 - (float)param_1[9]);
  if (0.0 <= fVar1 - (float)param_1[9]) {
    return;
  }
  param_1[6] = param_1[6] + 1;
  return;
}

// 0060C1E0  FUN_0060c1e0  size=449  [between]
void __thiscall FUN_0060c1e0(int *param_1,int param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(*param_1 + 4) != 0) {
    *(undefined4 *)(*param_1 + 8) = 0;
  }
  if (param_2 == 0) {
    local_8 = 0x43700000;
    local_c = 1;
    local_4 = 3;
    (**(code **)(*(int *)*param_1 + 8))(&local_c);
    param_1[5] = 1;
    param_1[6] = 0;
    return;
  }
  if (param_2 == 1) {
    local_8 = 0x42f00000;
    local_c = 1;
    local_4 = 1;
    (**(code **)(*(int *)*param_1 + 8))(&local_c);
    local_c = 0x42700000;
    local_8 = 3;
    (**(code **)(*(int *)*param_1 + 8))(&stack0xfffffff0);
    local_8 = 0x42f00000;
    local_c = 9;
    local_4 = 3;
  }
  else if (param_2 == 2) {
    local_8 = 0x42f00000;
    local_c = 1;
    local_4 = 1;
    (**(code **)(*(int *)*param_1 + 8))(&local_c);
    local_c = 0x42700000;
    local_8 = 3;
    (**(code **)(*(int *)*param_1 + 8))(&stack0xfffffff0);
    local_c = 3;
    (**(code **)(*(int *)*param_1 + 8))(&stack0xffffffec);
    local_8 = 0x42700000;
    local_c = 6;
    local_4 = 3;
  }
  else {
    if (param_2 == 3) {
      local_8 = 0x43160000;
      local_c = 4;
      local_4 = 1;
      (**(code **)(*(int *)*param_1 + 8))(&local_c);
      param_1[5] = 1;
      param_1[6] = 0;
      return;
    }
    if (param_2 != 4) goto LAB_0060c38e;
    local_8 = 0x43160000;
    local_c = 8;
    local_4 = 1;
  }
  (**(code **)(*(int *)*param_1 + 8))(&local_c);
LAB_0060c38e:
  param_1[5] = 1;
  param_1[6] = 0;
  return;
}

// 0060C3B0  Em0130::vf260  size=86  [class]
void __fastcall Em0130::vf260(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35514;
    (**(code **)(*piVar2 + 4))(&DAT_01b35514);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00ac8b80(piVar2[0x13c]);
    }
  }
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xff7fffff;
  return;
}

// 0060C410  Em0130::vf334  size=664  [class]
void __thiscall Em0130::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  EmBaseDLC::vf334(param_2,param_3);
  FUN_009fd240();
  FUN_00ac8d40(0);
  if (param_3 != (int *)0x0) {
    puVar10 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar1 = FUN_00dd6d80(puVar10);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00acdea0();
      if (piVar2 != (int *)0x0) {
        puVar10 = &DAT_01b35510;
        (**(code **)(*piVar2 + 4))(&DAT_01b35510);
        iVar1 = FUN_00dd6d80(puVar10);
        if (iVar1 != 0) {
          if (piVar2 == param_1) {
            param_1[0x3a4] = piVar2[0x3a4];
            param_1[0x3a5] = piVar2[0x3a5];
            param_1[0x3a6] = piVar2[0x3a6];
            if ((piVar2[0x3a4] & 0x8000U) != 0) {
              param_1[0x3a4] = param_1[0x3a4] | 0x8000;
              param_1[0x3a4] = param_1[0x3a4] & 0xffffefff;
              FUN_00ac8dd0("CG_MecR",1);
            }
            if ((piVar2[0x3a4] & 0x4000U) != 0) {
              param_1[0x3a4] = param_1[0x3a4] | 0x4000;
              param_1[0x3a4] = param_1[0x3a4] & 0xffffefff;
              FUN_00ac8dd0("CG_MecL",1);
            }
            if ((piVar2[0x3a4] & 0x2000U) != 0) {
              param_1[0x3a4] = param_1[0x3a4] & 0xffffefff;
              FUN_00ac94e0(&DAT_01645d70);
              FUN_00ac9300("Armband_brk0");
              FUN_00ac9300("Hakama_brk0_DEC");
              FUN_00ac94e0("_brk0_");
              FUN_00ac9420("_brk1_");
            }
          }
          else {
            uVar3 = FUN_00a8cae0();
            uVar4 = FUN_00a8cad0(uVar3);
            uVar5 = FUN_00a8cac0(uVar4);
            uVar6 = FUN_00a8cab0(uVar5);
            FUN_0060afb0(uVar6,uVar5,uVar4,uVar3);
            uVar11 = 0x3f800000;
            uVar9 = 0xbf800000;
            uVar3 = FUN_00a95d20(0);
            uVar8 = 0x3f800000;
            uVar6 = 0;
            uVar5 = 0;
            uVar4 = FUN_00a95df0(0);
            FUN_00a9e290(uVar4,uVar5,uVar6,uVar8,uVar3,uVar9,uVar11);
            fVar7 = (float10)FUN_00a958c0(0);
            FUN_00a92f90();
            iVar1 = FUN_00e26e90();
            if (iVar1 != 0) {
              Animation::Motion::Unit::setCurrentTime(0,(float)fVar7);
            }
            FUN_0040ac60(piVar2 + 0x2ac);
            param_1[0x3a4] = piVar2[0x3a4];
            param_1[0x3a5] = piVar2[0x3a5];
            param_1[0x3a6] = piVar2[0x3a6];
            if ((piVar2[0x3a4] & 0x8000U) != 0) {
              param_1[0x3a4] = param_1[0x3a4] | 0x8000;
              param_1[0x3a4] = param_1[0x3a4] & 0xffffefff;
              FUN_00ac8dd0("CG_MecR",1);
            }
            if ((piVar2[0x3a4] & 0x4000U) != 0) {
              param_1[0x3a4] = param_1[0x3a4] | 0x4000;
              param_1[0x3a4] = param_1[0x3a4] & 0xffffefff;
              FUN_00ac8dd0("CG_MecL",1);
            }
            if ((piVar2[0x3a4] & 0x2000U) != 0) {
              FUN_006068d0();
            }
          }
          uVar3 = FUN_009f8b40();
          FUN_009f8ae0(uVar3);
        }
      }
    }
  }
  return;
}

// 0060D3B0  Em0130::vf48  size=379  [class]
void __fastcall Em0130::vf48(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  
  if ((DAT_01bea070 & 0x20000000) == 0) {
    EmBaseDLC::vf48();
    fVar1 = *(float *)(param_1 + 0xea8);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      *(float *)(param_1 + 0xea8) = *(float *)(param_1 + 0xea8) - *(float *)(param_1 + 0x910);
    }
    if (0.0 < *(float *)(param_1 + 0xed4) != (*(float *)(param_1 + 0xed4) == 0.0)) {
      *(float *)(param_1 + 0xed4) = *(float *)(param_1 + 0xed4) - *(float *)(param_1 + 0x910);
    }
    if (0.0 < *(float *)(param_1 + 0xea0) != (*(float *)(param_1 + 0xea0) == 0.0)) {
      *(float *)(param_1 + 0xea0) = *(float *)(param_1 + 0xea0) - *(float *)(param_1 + 0x910);
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x40);
    }
    if ((*(uint *)(param_1 + 0xe90) & 0x40000000) != 0) {
      DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
      DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
      DAT_01dc08ec = 1;
    }
    uVar2 = FUN_00ac48f0(0);
    *(undefined4 *)(param_1 + 0x11a8) = uVar2;
    FUN_0060b430();
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      uVar2 = FUN_00a92fb0();
      FUN_00e08600(uVar2);
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      uVar2 = FUN_00a92fb0();
      FUN_00a81330(uVar2);
      FUN_00e08600(uVar2);
    }
    if ((*(int *)(param_1 + 0x1320) == 0) && (piVar4 = (int *)FUN_00a9b930(), piVar4 != (int *)0x0))
    {
      puVar5 = &DAT_01b35b90;
      (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
      iVar3 = FUN_00dd6d80(puVar5);
      if ((iVar3 != 0) && (*(undefined4 *)(param_1 + 0x1320) = 1, *(int *)(param_1 + 0x4f0) != 0)) {
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c960(uVar2);
      }
    }
  }
  return;
}

// 0060D530  FUN_0060d530  size=1389  [between]
void __fastcall FUN_0060d530(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xa84);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x4e4) != 0) {
      return;
    }
    if (*(int *)(iVar3 + 0x870) < 1) {
      return;
    }
  }
  iVar3 = FUN_006082d0();
  if (iVar3 != 0) {
    FUN_00a8caf0(0x1000b,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    return;
  }
  iVar3 = FUN_00608060();
  if (iVar3 == 0) {
LAB_0060d914:
    iVar3 = FUN_0060b290();
    if (iVar3 != 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) {
      FUN_00a8caf0(0x10001,0,0,0);
      if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
        FUN_006083d0();
      }
      if (*(int *)(param_1 + 0x618) != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    }
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (!NAN(fVar1) && 900.0 < fVar1 != (fVar1 == 900.0)) {
      FUN_00a8caf0(0x10006,0,0,0);
      if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
        FUN_006083d0();
      }
      if (*(int *)(param_1 + 0x618) != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
      sVar2 = FUN_00dde2d0(0,2);
      *(int *)(param_1 + 0x624) = (int)sVar2;
    }
    iVar3 = FUN_00608290();
    if (iVar3 == 0) {
      return;
    }
    FUN_00a8caf0(0x20018,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    return;
  }
  iVar3 = FUN_006056f0(3,5,*(undefined4 *)(param_1 + 0xec0),*(undefined4 *)(param_1 + 0xec4));
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x4000000;
    FUN_00a8caf0(0x20012,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    return;
  }
  iVar3 = FUN_006056f0(4,6,*(undefined4 *)(param_1 + 0xec8),*(undefined4 *)(param_1 + 0xecc));
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x2000000;
    FUN_00a8caf0(0x20012,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    return;
  }
  iVar3 = FUN_00605bd0();
  if (*(float *)(param_1 + 0xa8c) <= 25.0) {
    if (0.0 <= *(float *)(param_1 + 0xa9c)) {
      uVar4 = FUN_00dde2a0(0,1000);
      if ((uVar4 & 0xffff) % 3 == 0) {
        FUN_0060afb0((iVar3 != 0) + 0x20008,0,0,0);
        return;
      }
    }
    else if (*(float *)(param_1 + 0xaa0) <= 1.3962634) {
      FUN_0060afb0((iVar3 != 0) + 0x20015,0,0,0);
      return;
    }
  }
  if (100.0 < *(float *)(param_1 + 0xa8c)) goto LAB_0060d914;
  if (*(int *)(param_1 + 0x11ac) != 0) {
    uVar4 = FUN_00dde2a0(0,1000);
    if ((uVar4 & 1) == 0) {
      iVar5 = (iVar3 != 0) + 0x20006;
    }
    else {
      iVar5 = (iVar3 != 0) + 0x20004;
    }
    FUN_0060afb0(iVar5,0,0,0);
  }
  if (0.87266463 < *(float *)(param_1 + 0xaa0)) {
    if (0.0 <= *(float *)(param_1 + 0xa9c)) {
      iVar5 = (iVar3 != 0) + 0x2000d;
    }
    else {
      iVar5 = (iVar3 != 0) + 0x2000b;
    }
  }
  else {
    uVar4 = FUN_00dde2a0(0,1000);
    switch((uVar4 & 0xffff) % 5) {
    case 0:
      iVar5 = (iVar3 != 0) + 0x20000;
      break;
    case 1:
      iVar5 = (iVar3 != 0) + 0x20002;
      break;
    case 2:
      iVar5 = (iVar3 != 0) + 0x20004;
      break;
    case 3:
      iVar5 = (iVar3 != 0) + 0x20006;
      break;
    case 4:
      iVar5 = (iVar3 != 0) + 0x20010;
      break;
    default:
      goto switchD_0060d840_default;
    }
  }
  FUN_0060afb0(iVar5,0,0,0);
switchD_0060d840_default:
  iVar5 = FUN_00605670();
  if (iVar5 == 0) {
    return;
  }
  FUN_0060afb0((iVar3 != 0) + 0x20013,0,0,0);
  return;
}

// 0060DAC0  FUN_0060dac0  size=398  [between]
void __fastcall FUN_0060dac0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x17,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x18,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(0x19,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) && (iVar1 = FUN_0060b290(), iVar1 == 0)) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a8c760(0), iVar1 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0,0x3f060a92,0);
  }
  return;
}

// 0060DC70  FUN_0060dc70  size=733  [between]
void __fastcall FUN_0060dc70(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if (param_1[0x187] < 3) {
    return;
  }
  if (param_1[0x4d3] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0060dc92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  iVar2 = FUN_0060b290();
  if (iVar2 != 0) {
    return;
  }
  iVar2 = FUN_00608060();
  if (iVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x4cf) & 2) == 0) {
    if (((float)param_1[0x2a4] < 36.0) && ((float)param_1[0x2a8] < 2.0943952)) {
      fVar1 = (float)param_1[0x24a];
      param_1[0x24a] = (int)((float)param_1[0x244] + fVar1);
      if ((float)param_1[0x2a4] < 25.0) {
        param_1[0x24a] = (int)((float)param_1[0x244] + fVar1 + (float)param_1[0x244]);
      }
      param_1[0x4ce] = (int)(-(float)param_1[0x244] + (float)param_1[0x4ce]);
      goto LAB_0060ddbf;
    }
  }
  else if (((float)param_1[0x2a4] < 225.0) && ((float)param_1[0x2a8] < 2.0943952)) {
    fVar1 = (float)param_1[0x24a];
    param_1[0x24a] = (int)((float)param_1[0x244] + fVar1);
    if ((float)param_1[0x2a4] < 100.0) {
      param_1[0x24a] = (int)((float)param_1[0x244] + fVar1 + (float)param_1[0x244]);
    }
    goto LAB_0060ddbf;
  }
  fVar1 = (float)param_1[0x24a] - ((float)param_1[0x244] + (float)param_1[0x244]);
  param_1[0x24a] = (int)fVar1;
  if (fVar1 < 0.0) {
    param_1[0x24a] = 0;
  }
LAB_0060ddbf:
  if (90.0 < (float)param_1[0x24a]) {
    param_1[0x24a] = 0x42b40000;
  }
  if (100.0 < (float)param_1[0x2a3]) {
    return;
  }
  param_1[0x4d1] = 2;
  param_1[0x4d2] = 0;
  param_1[0x4d0] = param_1[0x4d0] | 2;
  if (param_1[0x4cd] == 1) {
    FUN_00a8caf0(0x2000f,0,0,0);
    if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
      FUN_006083d0();
    }
    if (param_1[0x186] != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
    return;
  }
  if ((float)param_1[0x2a8] < 0.0) {
    FUN_00a8caf0(0x2000b,0,0,0);
    if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
      FUN_006083d0();
    }
    if (param_1[0x186] != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
    return;
  }
  FUN_00a8caf0(0x2000d,0,0,0);
  if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
    FUN_006083d0();
  }
  if (param_1[0x186] != 0x30002) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  FUN_006086f0(&DAT_0163b5f4);
  param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
  return;
}

// 0060DF50  FUN_0060df50  size=621  [between]
void __fastcall FUN_0060df50(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x17,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x920) = 0;
      *(undefined4 *)(param_1 + 0x928) = 0;
      sVar2 = FUN_00dde2d0(0,10);
      *(int *)(param_1 + 0x948) = sVar2 + 10;
      FUN_0060c1e0(*(undefined4 *)(param_1 + 0x624));
      *(undefined4 *)(param_1 + 0xfd4) = 1;
      *(undefined4 *)(param_1 + 0xfd0) = 10;
      *(undefined4 *)(param_1 + 0xfd8) = 0;
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x20000;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 2:
    FUN_00a9f4c0("ROLLERMOVE",0x3e888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,5,0x3e888889,0);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x18,0x3e888889,0);
    FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x20,0x3e888889,0);
    FUN_00a9f600(0xffffffff,0,0xffffffff,0,0,0x28,0x3e888889,0);
    FUN_00a9f600(0xffffffff,0,1,0,0,0x24,0x3e888889,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 3:
    break;
  default:
    return;
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    fVar4 = (float10)FUN_00fdc1f0();
    fVar5 = (float10)FUN_00606550(param_1);
    *(float *)(param_1 + 0x1390) =
         (float)((fVar5 - (float10)*(float *)(param_1 + 0x1390)) * (float10)(float)fVar4 +
                (float10)*(float *)(param_1 + 0x1390));
    fVar4 = (float10)FUN_006065e0(param_1);
    fVar1 = *(float *)(param_1 + 0x1394);
    fVar5 = (float10)FUN_00fdc1f0();
    fVar4 = fVar5 * (float10)(float)(fVar4 - (float10)fVar1) + (float10)*(float *)(param_1 + 0x1394)
    ;
    *(float *)(param_1 + 0x1394) = (float)fVar4;
    FUN_00a947e0(0,*(undefined4 *)(param_1 + 0x1390),0,(float)fVar4);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0060E1D0  FUN_0060e1d0  size=164  [between]
void __fastcall FUN_0060e1d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0x36);
  if ((iVar1 != 0) && ((*(float *)(param_1 + 0xed4) < 0.0 || (*(int *)(param_1 + 0xeb8) != 0)))) {
    FUN_006058a0(0,*(undefined4 *)(param_1 + 0xeb8));
    FUN_00a8caf0(0x20013,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
  }
  return;
}

// 0060E280  FUN_0060e280  size=164  [between]
void __fastcall FUN_0060e280(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0x36);
  if ((iVar1 != 0) && ((*(float *)(param_1 + 0xed4) < 0.0 || (*(int *)(param_1 + 0xeb8) != 0)))) {
    FUN_006058a0(0,*(undefined4 *)(param_1 + 0xeb8));
    FUN_00a8caf0(0x20013,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
  }
  return;
}

// 0060E330  FUN_0060e330  size=307  [between]
void __fastcall FUN_0060e330(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0xf;
    if (param_1[0x186] == 0x50001) {
      uVar1 = 0xe;
    }
    FUN_00aa4080(uVar1,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0060e419;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x50002,0,0,0);
    if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
      FUN_006083d0();
    }
    if (param_1[0x186] != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
  }
LAB_0060e419:
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3d0efa35,0);
  }
  return;
}

// 0060E470  FUN_0060e470  size=1200  [between]
void __fastcall FUN_0060e470(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0xa84);
  if (((iVar3 != 0) && ((*(int *)(iVar3 + 0x4e4) != 0 || (*(int *)(iVar3 + 0x870) < 1)))) ||
     (0.0 < *(float *)(param_1 + 0xea8))) {
LAB_0060e762:
    if ((*(float *)(param_1 + 0xa8c) <= 100.0) && (*(int *)(param_1 + 0x61c) < 4)) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    if (((*(uint *)(param_1 + 0xe90) & 0x400000) == 0) &&
       (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 900.0 < fVar1 != (fVar1 == 900.0))) {
      FUN_00a8caf0(0x10006,0,0,0);
      if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
        FUN_006083d0();
      }
      if (*(int *)(param_1 + 0x618) != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
      sVar2 = FUN_00dde2d0(0,2);
      *(int *)(param_1 + 0x624) = (int)sVar2;
    }
    iVar3 = FUN_006082d0();
    if (iVar3 != 0) {
      FUN_00a8caf0(0x1000b,0,0,0);
      if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
        FUN_006083d0();
      }
      if (*(int *)(param_1 + 0x618) != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    }
    iVar3 = FUN_00fdbc60();
    if (iVar3 < *(int *)(param_1 + 0x870)) {
      return;
    }
    if (*(float *)(param_1 + 0xa8c) <= 225.0) {
      return;
    }
    FUN_00a8caf0(0x20018,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    return;
  }
  iVar3 = FUN_006056f0(3,5,*(undefined4 *)(param_1 + 0xec0),*(undefined4 *)(param_1 + 0xec4));
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x4000000;
    FUN_00a8caf0(0x20012,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    return;
  }
  iVar3 = FUN_006056f0(4,6,*(undefined4 *)(param_1 + 0xec8),*(undefined4 *)(param_1 + 0xecc));
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x2000000;
    FUN_00a8caf0(0x20012,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    return;
  }
  iVar3 = FUN_00605bd0();
  if (((*(float *)(param_1 + 0xa8c) <= 25.0) && (*(float *)(param_1 + 0xa9c) < 0.0)) &&
     (*(float *)(param_1 + 0xaa0) <= 1.3962634)) {
    FUN_0060afb0((iVar3 != 0) + 0x20015,0,0,0);
    return;
  }
  if (100.0 < *(float *)(param_1 + 0xa8c)) goto LAB_0060e762;
  if (0.87266463 < *(float *)(param_1 + 0xaa0)) {
    if (0.0 <= *(float *)(param_1 + 0xa9c)) {
      iVar5 = (iVar3 != 0) + 0x2000d;
    }
    else {
      iVar5 = (iVar3 != 0) + 0x2000b;
    }
  }
  else {
    uVar4 = FUN_00dde2a0(0,1000);
    switch((uVar4 & 0xffff) % 5) {
    case 0:
      iVar5 = (iVar3 != 0) + 0x20000;
      break;
    case 1:
      iVar5 = (iVar3 != 0) + 0x20002;
      break;
    case 2:
      iVar5 = (iVar3 != 0) + 0x20004;
      break;
    case 3:
      iVar5 = (iVar3 != 0) + 0x20006;
      break;
    case 4:
      iVar5 = (iVar3 != 0) + 0x20010;
      break;
    default:
      goto switchD_0060e68d_default;
    }
  }
  FUN_0060afb0(iVar5,0,0,0);
switchD_0060e68d_default:
  iVar5 = FUN_00605670();
  if (iVar5 == 0) {
    return;
  }
  FUN_0060afb0((iVar3 != 0) + 0x20013,0,0,0);
  return;
}

// 0060E940  FUN_0060e940  size=147  [between]
void __fastcall FUN_0060e940(int param_1)

{
  if ((*(float *)(param_1 + 0xed4) < 0.0) || (*(int *)(param_1 + 0xeb8) != 0)) {
    FUN_006058a0(0,*(undefined4 *)(param_1 + 0xeb8));
    FUN_00a8caf0(0x20013,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
  }
  return;
}

// 0060E9E0  FUN_0060e9e0  size=990  [between]
void __fastcall FUN_0060e9e0(int param_1)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  char *_Format;
  char local_14 [20];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar6 = 6;
    iVar4 = FUN_00ac4780();
    if (1 < iVar4) {
      uVar6 = 7;
    }
    FUN_00aa4080(uVar6,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(float *)(param_1 + 0xeb0) != 0.0) {
    *(float *)(param_1 + 0xeb0) = *(float *)(param_1 + 0xeb0) - *(float *)(param_1 + 0x910);
  }
  if (*(float *)(param_1 + 0xeac) != 0.0) {
    *(float *)(param_1 + 0xeac) = *(float *)(param_1 + 0xeac) - *(float *)(param_1 + 0x910);
  }
  iVar4 = FUN_00a8c760(0x37);
  bVar7 = iVar4 != 0;
  iVar4 = FUN_00a8c760(0x38);
  if ((iVar4 != 0) && ((*(uint *)(param_1 + 0xe90) & 0x10000000) != 0)) {
    bVar7 = true;
  }
  if (((*(uint *)(param_1 + 0xe90) & 0x80000000) != 0) || (!bVar7)) goto LAB_0060ed58;
  uVar5 = FUN_00dde2a0(0,1000);
  if ((uVar5 & 1) != 0) {
    if ((uVar5 & 1) != 1) goto LAB_0060ed58;
LAB_0060ec8e:
    if (*(float *)(param_1 + 0xeac) <= 0.0) {
      *(undefined4 *)(param_1 + 0xeac) = 0;
      fVar1 = *(float *)(param_1 + 0xaa0);
      if (!NAN(fVar1) && 0.87266463 < fVar1 != (fVar1 == 0.87266463)) {
        if (0.0 <= *(float *)(param_1 + 0xa9c)) {
          FUN_00a8caf0(0x50001,0,0,0);
          uVar5 = *(uint *)(param_1 + 0x618);
        }
        else {
          FUN_00a8caf0(0x50000,0,0,0);
          uVar5 = *(uint *)(param_1 + 0x618);
        }
        if ((uVar5 & 0xffff0000) != 0x20000) {
          FUN_006083d0();
        }
        if (*(int *)(param_1 + 0x618) != 0x30002) {
          FUN_00eaa6e0(0x3f800000,0);
        }
        FUN_006086f0(&DAT_0163b5f4);
        *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
        FUN_00606020(1);
      }
    }
    goto LAB_0060ed58;
  }
  if ((0.0 < *(float *)(param_1 + 0xeb0)) ||
     (*(undefined4 *)(param_1 + 0xeb0) = 0, 0.87266463 < *(float *)(param_1 + 0xaa0)))
  goto LAB_0060ec8e;
  FUN_00a8caf0(0x20002,0,0,0);
  if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
    FUN_006083d0();
  }
  if (*(int *)(param_1 + 0x618) != 0x30002) {
    FUN_00eaa6e0(0x3f800000,0);
  }
  FUN_006086f0(&DAT_0163b5f4);
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
  iVar4 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1190));
  if (iVar4 != 0) goto LAB_0060ed58;
  sVar2 = *(short *)(param_1 + 0x1196);
  do {
    sVar3 = FUN_00dde2d0(0,1000);
    uVar5 = (int)sVar3 & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    sVar3 = (short)uVar5;
    *(short *)(param_1 + 0x1196) = sVar3;
  } while (sVar3 == sVar2);
  switch(sVar3) {
  case 0:
    _Format = "D23_1000_141010";
    break;
  case 1:
    _Format = "D23_1000_151010";
    break;
  case 2:
    _Format = "DC3b1000_191010";
    break;
  case 3:
    _Format = "DC3b1000_181010";
    break;
  case 4:
    _Format = "DC3b4000_191010";
    break;
  case 5:
    _Format = "DC3b4000_1b1010";
    break;
  case 6:
    _Format = "DC3b4000_1c1010";
    break;
  case 7:
    _Format = "D23_1000_131010";
    break;
  default:
    goto switchD_0060ec00_default;
  }
  _sprintf_s(local_14,0x14,_Format);
switchD_0060ec00_default:
  uVar6 = FUN_00e5e0c0(local_14,param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x1190) = uVar6;
LAB_0060ed58:
  iVar4 = FUN_00a8c760(0xe);
  if ((iVar4 != 0) && ((*(byte *)(param_1 + 0xe93) & 1) == 0)) {
    iVar4 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1190));
    if (iVar4 == 0) {
      uVar6 = FUN_00e5e0c0("D23_1000_101010",param_1,0xffffffff,0);
      *(undefined4 *)(param_1 + 0x1190) = uVar6;
    }
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x1000000;
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00606020(0);
  }
  return;
}

// 0060EDE0  FUN_0060ede0  size=896  [between]
void __fastcall FUN_0060ede0(int param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  float10 fVar8;
  char *_Format;
  char local_14 [20];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(6,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    fVar8 = (float10)FUN_00ac85c0(5,0x44);
    *(float *)(param_1 + 0x920) = (float)(fVar8 * (float10)60.0);
    if (*(float *)(param_1 + 0x1188) <= 0.0) {
      fVar8 = (float10)FUN_00ac85c0(5,0x45);
      *(float *)(param_1 + 0x1188) = (float)(fVar8 * (float10)60.0);
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar2;
  fVar3 = *(float *)(param_1 + 0x1188) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1188) = fVar3;
  if (0.0 < fVar3) {
    if (0.0 < fVar2) {
      return;
    }
    uVar6 = FUN_00dde2a0(0,1000);
    if ((uVar6 & 1) == 0) {
      FUN_00a8caf0(0x2000d,0,0,0);
      uVar6 = *(uint *)(param_1 + 0x618);
    }
    else {
      FUN_00a8caf0(0x2000b,0,0,0);
      uVar6 = *(uint *)(param_1 + 0x618);
    }
    if ((uVar6 & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    iVar5 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1190));
    if (iVar5 != 0) {
      return;
    }
    sVar1 = *(short *)(param_1 + 0x119a);
    do {
      sVar4 = FUN_00dde2d0(0,1000);
      sVar4 = sVar4 % 9;
      *(short *)(param_1 + 0x119a) = sVar4;
    } while (sVar4 == sVar1);
    switch(sVar4) {
    case 0:
      _Format = "DC3b5000_151010";
      break;
    case 1:
      _Format = "DC3b1000_121010";
      break;
    case 2:
      _Format = "DC3b1000_171010";
      break;
    case 3:
      _Format = "DC3b2000_1i1010";
      break;
    case 4:
      _Format = "DC3b2000_1f1010";
      break;
    case 5:
      _Format = "DC3b2000_1g1010";
      break;
    case 6:
      _Format = "D23_1000_101010";
      break;
    case 7:
      _Format = "D23_1000_111010";
      break;
    case 8:
      _Format = "D23_1000_141010";
      break;
    default:
      goto switchD_0060ef72_default;
    }
  }
  else {
    FUN_00a8caf0(0x2000a,0,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
    iVar5 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1190));
    if (iVar5 != 0) {
      return;
    }
    sVar1 = *(short *)(param_1 + 0x119c);
    do {
      sVar4 = FUN_00dde2d0(0,1000);
      sVar4 = sVar4 % 6;
      *(short *)(param_1 + 0x119c) = sVar4;
    } while (sVar4 == sVar1);
    switch(sVar4) {
    case 0:
      _Format = "DC3b4000_1b1010";
      break;
    case 1:
      _Format = "DC3b4000_1c1010";
      break;
    case 2:
      _Format = "D23_1000_151010";
      break;
    case 3:
      _Format = "D23_1000_1c1010";
      break;
    case 4:
      _Format = "D23_1000_1d1010";
      break;
    case 5:
      _Format = "D23_1000_1e1010";
      break;
    default:
      goto switchD_0060ef72_default;
    }
  }
  _sprintf_s(local_14,0x14,_Format);
switchD_0060ef72_default:
  uVar7 = FUN_00e5e0c0(local_14,param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x1190) = uVar7;
  return;
}

// 0060F1B0  Em0130::vf1A4  size=418  [class]
void __thiscall Em0130::vf1A4(int param_1,int *param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  FUN_00a81330();
  piVar1 = (int *)FUN_00a7c8a0();
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    puVar5 = &DAT_01be9c38;
    (**(code **)(*piVar1 + 4))(&DAT_01be9c38);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if ((param_3 & 8) != 0) {
    if (*param_2 == 0x1d4) {
      if (uVar3 != 0) {
        iVar2 = FUN_00b7f550(0);
        if (iVar2 == 0) {
          uVar4 = FUN_00e678d0(2,0xcf13,0xffffffff);
          FUN_00e80d00(uVar4);
          *(undefined4 *)(param_1 + 4000) = 0x3fc90fdb;
          return;
        }
        uVar4 = FUN_00e678d0(2,0xcf14,0xffffffff);
        FUN_00e80d00(uVar4);
        *(undefined4 *)(param_1 + 4000) = 0xbfc90fdb;
        return;
      }
    }
    else if (*param_2 == 0x1d7) {
      iVar2 = FUN_00fdbc60();
      if (*(int *)(param_1 + 0x870) <= iVar2) {
LAB_0060f29a:
        FUN_0060bec0();
        return;
      }
    }
    else {
      iVar2 = FUN_00605810();
      if (iVar2 != 0) goto LAB_0060f29a;
      *(int *)(param_1 + 0x11b0) = *(int *)(param_1 + 0x11b0) + 1;
      iVar2 = FUN_006080a0();
      if ((iVar2 != 0) && (iVar2 = FUN_00ac8660(0,0x32), iVar2 <= *(int *)(param_1 + 0x11b0))) {
        FUN_00a8caf0(0x30004,0,0,0);
        if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
          FUN_006083d0();
        }
        if (*(int *)(param_1 + 0x618) != 0x30002) {
          FUN_00eaa6e0(0x3f800000,0);
        }
        FUN_006086f0(&DAT_0163b5f4);
        *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
        *(undefined4 *)(param_1 + 0x11b0) = 0;
      }
    }
  }
  return;
}

// 0060F360  Em0130::vf1A0  size=248  [class]
undefined4 __thiscall Em0130::vf1A0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = 0;
  piVar1 = (int *)FUN_00a7c8a0();
  if (*param_2 == 0x1d6) {
    iVar2 = (**(code **)(*piVar1 + 0x14c))(0x83,param_1[0x13c]);
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 0x150))(0x83,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x83,piVar1[0x13c]);
      uVar3 = 1;
    }
  }
  if (*param_2 == 0x1d7) {
    FUN_00a8caf0(0x20019,0,0,0);
    if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
      FUN_006083d0();
    }
    if (param_1[0x186] != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
    uVar3 = 1;
  }
  return uVar3;
}

// 0060F460  Em0130::vf108  size=33  [class]
void __thiscall Em0130::vf108(int *param_1,undefined4 param_2,int param_3)

{
  if ((param_3 != 0) && (param_3 == 1)) {
    FUN_0060bca0();
    return;
  }
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0060F490  FUN_0060f490  size=493  [between]
void __fastcall FUN_0060f490(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1[0x3a4] & 0x20000000U) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      if ((param_1[0x186] != 0x20003) || (225.0 < (float)param_1[0x2a3])) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0060f67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
      }
      else {
        iVar1 = param_1[0x463];
        iVar2 = FUN_00ac8660(0,0x4c);
        if (iVar1 < iVar2) {
          param_1[0x463] = iVar1 + 1;
          param_1[0x187] = 0;
          iVar1 = FUN_00ac4780();
          if (((2 < iVar1) && (1 < param_1[0x463])) &&
             (uVar3 = FUN_00dde2a0(0,1000), (uVar3 & 1) != 0)) {
            FUN_00a8caf0(0x20014,0,0,0);
            if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
              FUN_006083d0();
            }
            if (param_1[0x186] != 0x30002) {
              FUN_00eaa6e0(0x3f800000,0);
            }
            FUN_006086f0(&DAT_0163b5f4);
            param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
          }
        }
        else {
          param_1[0x463] = 0;
          iVar1 = FUN_00ac4780();
          if (2 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0060f5ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0x36);
    if ((iVar1 != 0) && (((float)param_1[0x3b5] < 0.0 || (param_1[0x3ae] != 0)))) {
      FUN_006058a0(0,param_1[0x3ae]);
      FUN_00a8caf0(0x20013,0,0,0);
      if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
        FUN_006083d0();
      }
      if (param_1[0x186] != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
      return;
    }
  }
  return;
}

// 0060F680  FUN_0060f680  size=725  [between]
void __fastcall FUN_0060f680(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (param_1[0x187] == 0) {
    FUN_00a9f4c0("TATEGIRI",0x3e2aaaab,0,0);
    if (param_1[0x186] == 0x20003) {
      FUN_00a9f600(0xffffffff,0,0,1,0,0x58,0x3e2aaaab,0x8080000);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x57,0x3e2aaaab,0x8080000);
      uVar4 = 0x59;
    }
    else {
      FUN_00a9f600(0xffffffff,0,0,1,0,0x35,0x3e2aaaab,0x8080000);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x34,0x3e2aaaab,0x8080000);
      uVar4 = 0x36;
    }
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,uVar4,0x3e2aaaab,0x8080000);
    FUN_00608360();
    FUN_00a8d280();
    param_1[0x46d] = param_1[0x46d] + 1;
    FUN_00606260();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0060f8ff;
  if ((param_1[0x3a4] & 0x20000000U) == 0) {
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      param_1[0x24f] = 0;
      if (-0.87266463 < (float)param_1[0x2a7]) {
        fVar1 = (float)param_1[0x2a7];
        if (NAN(fVar1) || 0.87266463 < fVar1 == (fVar1 == 0.87266463)) {
          fVar1 = (float)param_1[0x2a7] * 57.29578 * 0.02;
        }
        else {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = -1.0;
      }
      goto LAB_0060f7f4;
    }
  }
  else {
    fVar1 = 0.0;
LAB_0060f7f4:
    param_1[0x24f] = (int)fVar1;
  }
  FUN_00a947e0(0,0,param_1[0x24f],0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94d60("TATEGIRI");
  if (iVar2 != 0) {
    fVar3 = (float10)FUN_00ac85c0(5,0x30);
    param_1[0x3aa] = (int)(float)(fVar3 * (float10)60.0);
    FUN_006083d0();
    if ((param_1[0x3a4] & 0x20000000U) == 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      param_1[0x3ad] = (int)((float)param_1[0x3ad] + 1.0);
      fVar3 = (float10)FUN_00605c60();
      param_1[0x3ac] = (int)(float)fVar3;
      FUN_00a8caf0(0x50002,0,0,0);
      if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
        FUN_006083d0();
      }
      if (param_1[0x186] != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
    }
  }
LAB_0060f8ff:
  if (((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
     ((param_1[0x3a4] & 0x20000000U) == 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 0060F960  FUN_0060f960  size=348  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0060f960(int *param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x40,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608360();
    FUN_00a8d280();
    param_1[0x46d] = param_1[0x46d] + 1;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x186] == 0x20019) {
    iVar2 = FUN_00a8c760(0x37);
    if ((iVar2 != 0) && ((int *)param_1[0x2a1] != (int *)0x0)) {
      puVar4 = &DAT_01be9c38;
      (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9c38);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        uVar5 = 0x3d4ccccd;
        fVar3 = (float10)FUN_00ac85c0(5,0x50);
        FUN_00b7ab80((float)fVar3,uVar5);
      }
    }
    iVar2 = FUN_00a8c760(0x38);
    if (iVar2 != 0) {
      _DAT_01beaa88 = _DAT_01beaa88 | 0x2000000;
    }
    iVar2 = FUN_00a8c760(0x33);
    if (iVar2 != 0) {
      FUN_00cbc8f0(10,1);
      piVar1 = (int *)param_1[0x2a1];
      if (piVar1 != (int *)0x0) {
        puVar4 = &DAT_01be9c38;
        (**(code **)(*piVar1 + 4))(&DAT_01be9c38);
        iVar2 = FUN_00dd6d80(puVar4);
        if ((iVar2 != 0) && (piVar1[0x39d] != 0)) {
          FUN_0060bec0();
        }
      }
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  FUN_006083d0();
                    /* WARNING: Could not recover jumptable at 0x0060faba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0060FAC0  Em0130::vf150  size=239  [class]
void __thiscall Em0130::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (param_3 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 0x81) {
      FUN_00a8caf0(0x40001,0,0,0);
      bVar2 = (*(uint *)(param_1 + 0x618) & 0xffff0000) == 0x20000;
    }
    else if (param_2 == 0x82) {
      FUN_00a8caf0(0x40002,0,0,0);
      bVar2 = (*(uint *)(param_1 + 0x618) & 0xffff0000) == 0x20000;
    }
    else {
      if (param_2 != 0x83) {
        return;
      }
      FUN_00a8caf0(0x40000,0,0,0);
      bVar2 = (*(uint *)(param_1 + 0x618) & 0xffff0000) == 0x20000;
    }
    if (!bVar2) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
  }
  return;
}

// 0060FBB0  FUN_0060fbb0  size=1010  [between]
void __fastcall FUN_0060fbb0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float unaff_EBX;
  uint uVar6;
  float unaff_ESI;
  float10 fVar7;
  undefined *puVar8;
  char *pcVar9;
  float fStack_34;
  undefined4 auStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  uVar6 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x94,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0x25] = param_1[1000];
    param_1[0x14] = param_1[0x3ec];
    param_1[0x15] = param_1[0x3ed];
    param_1[0x16] = param_1[0x3ee];
    param_1[0x17] = param_1[0x3ef];
    if (param_1[0x3b7] == 3) {
      pcVar9 = "bgm_Khamsin_Stealth_Succeeded1";
    }
    else {
      pcVar9 = "bgm_Khamsin_Stealth_Succeeded2";
    }
    FUN_00e5e1b0(pcVar9);
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    break;
  case 2:
    FUN_00aa4080(0x95,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4080(0x96,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_006086f0(&DAT_01645ef0);
    break;
  case 6:
    FUN_00aa4080(0x97,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 8:
    FUN_00aa4080(0x98,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_006086f0(&DAT_01645ee8);
    break;
  case 10:
    FUN_00aa4080(0x99,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_006058a0(1,0);
      (**(code **)(*param_1 + 0x15c))(0x81,0);
      FUN_00a8caf0(0x30005,0,0,0);
      if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
        FUN_006083d0();
      }
      if (param_1[0x186] != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
    }
  default:
    goto switchD_0060fc1b_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0060fc1b_default:
  iVar3 = FUN_00a8c760(10);
  if (iVar3 != 0) {
    uVar5 = FUN_00ac8660(0,0x2e);
    (**(code **)(*param_1 + 0x30c))(uVar5,0);
  }
  if ((uVar6 != 0) && (iVar3 = FUN_00a8c760(0x1c), iVar3 == 0)) {
    switchD_0080dbae::default();
    FUN_00a8ce90(auStack_30,auStack_20);
    fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    *(float *)(uVar6 + 0x94) = (float)fVar7;
    D3DXVec3TransformNormal(auStack_30,auStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    *(float *)(uVar6 + 0x58) = (float)param_1[0x12] + fStack_34;
    *(float *)(uVar6 + 0x50) = fVar1 + unaff_ESI;
    *(float *)(uVar6 + 0x54) = fVar2 + unaff_EBX;
    *(undefined4 *)(uVar6 + 0x5c) = auStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 0060FFE0  FUN_0060ffe0  size=948  [between]
void __fastcall FUN_0060ffe0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float unaff_EBX;
  uint uVar6;
  float unaff_ESI;
  float10 fVar7;
  undefined *puVar8;
  char *pcVar9;
  float fStack_34;
  undefined4 auStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  uVar6 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x95,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0x25] = param_1[1000];
    param_1[0x14] = param_1[0x3ec];
    param_1[0x15] = param_1[0x3ed];
    param_1[0x16] = param_1[0x3ee];
    param_1[0x17] = param_1[0x3ef];
    if (param_1[0x3b7] == 3) {
      pcVar9 = "bgm_Khamsin_Stealth_Succeeded1";
    }
    else {
      pcVar9 = "bgm_Khamsin_Stealth_Succeeded2";
    }
    FUN_00e5e1b0(pcVar9);
    break;
  case 1:
  case 3:
  case 5:
  case 7:
    break;
  case 2:
    FUN_00aa4080(0x96,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_006086f0(&DAT_01645ef0);
    break;
  case 4:
    FUN_00aa4080(0x97,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 6:
    FUN_00aa4080(0x98,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_006086f0(&DAT_01645ee8);
    break;
  case 8:
    FUN_00aa4080(0x99,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_006058a0(1,0);
      (**(code **)(*param_1 + 0x15c))(0x81,0);
      FUN_00a8caf0(0x30005,0,0,0);
      if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
        FUN_006083d0();
      }
      if (param_1[0x186] != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
    }
  default:
    goto switchD_0061004b_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0061004b_default:
  iVar3 = FUN_00a8c760(10);
  if (iVar3 != 0) {
    uVar5 = FUN_00ac8660(0,0x2e);
    (**(code **)(*param_1 + 0x30c))(uVar5,0);
  }
  if ((uVar6 != 0) && (iVar3 = FUN_00a8c760(0x1c), iVar3 == 0)) {
    switchD_0080dbae::default();
    FUN_00a8ce90(auStack_30,auStack_20);
    fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    *(float *)(uVar6 + 0x94) = (float)fVar7;
    D3DXVec3TransformNormal(auStack_30,auStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    *(float *)(uVar6 + 0x58) = (float)param_1[0x12] + fStack_34;
    *(float *)(uVar6 + 0x50) = fVar1 + unaff_ESI;
    *(float *)(uVar6 + 0x54) = fVar2 + unaff_EBX;
    *(undefined4 *)(uVar6 + 0x5c) = auStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 006103C0  FUN_006103c0  size=1057  [between]
void __fastcall FUN_006103c0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float unaff_EBX;
  uint uVar6;
  float unaff_ESI;
  float10 fVar7;
  undefined *puVar8;
  undefined4 uVar9;
  float fStack_34;
  undefined4 auStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  uVar6 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x89,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3a4] = param_1[0x3a4] & 0xffc7ffff;
    param_1[0x14] = 0x40cc3c9f;
    param_1[0x15] = 0x41aad461;
    param_1[0x16] = 0x4285f845;
    param_1[0x25] = 0;
    switchD_0080dbae::default();
    break;
  case 1:
  case 3:
  case 5:
    break;
  case 2:
    FUN_00aa4080(0x8a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4080(0x8b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 6:
    FUN_00aa4080(0x8c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x15c))(0x83,0);
      (**(code **)(*param_1 + 0x34c))();
    }
    goto switchD_0061041a_default;
  case 8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    (**(code **)(*param_1 + 0x15c))(0x83,0);
    FUN_00a8caf0(0x30003,0,0,0);
    if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
      FUN_006083d0();
    }
    if (param_1[0x186] != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
    param_1[0x25] = 0x3fc90fdb;
    if (param_1[0x2a1] == 0) {
      return;
    }
    *(undefined4 *)(param_1[0x2a1] + 0x94) = 0x4096cbe4;
    return;
  default:
    goto switchD_0061041a_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0061041a_default:
  iVar3 = FUN_00a8c760(0x33);
  if ((iVar3 != 0) && (iVar3 = FUN_006087a0(), iVar3 != 0)) {
    param_1[0x3a4] = param_1[0x3a4] | 0x80000;
  }
  if (param_1[0x2a1] != 0) {
    iVar3 = FUN_00a8c760(0x34);
    if (iVar3 != 0) {
      iVar3 = *(int *)param_1[0x2a1];
      uVar9 = 0;
      uVar5 = FUN_00ac8660(0,0x39);
      (**(code **)(iVar3 + 0x30c))(uVar5,uVar9);
    }
    iVar3 = FUN_00a8c760(0x35);
    if (iVar3 != 0) {
      iVar3 = *(int *)param_1[0x2a1];
      uVar9 = 0;
      uVar5 = FUN_00ac8660(0,0x3a);
      (**(code **)(iVar3 + 0x30c))(uVar5,uVar9);
    }
  }
  iVar3 = FUN_00a8c760(4);
  if ((((iVar3 != 0) && ((param_1[0x3a4] & 0x80000U) != 0)) && (param_1[0x2a1] != 0)) &&
     (0 < *(int *)(param_1[0x2a1] + 0x870))) {
    param_1[0x187] = 8;
    FUN_00a8cb60(8);
    param_1[0x3a4] = param_1[0x3a4] & 0xfff7ffff;
  }
  if ((uVar6 != 0) && (iVar3 = FUN_00a8c760(0x1c), iVar3 == 0)) {
    switchD_0080dbae::default();
    FUN_00a8ce90(auStack_30,auStack_20);
    fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    *(float *)(uVar6 + 0x94) = (float)fVar7;
    D3DXVec3TransformNormal(auStack_30,auStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    *(float *)(uVar6 + 0x58) = (float)param_1[0x12] + fStack_34;
    *(float *)(uVar6 + 0x50) = fVar1 + unaff_ESI;
    *(float *)(uVar6 + 0x54) = fVar2 + unaff_EBX;
    *(undefined4 *)(uVar6 + 0x5c) = auStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 00610810  FUN_00610810  size=1012  [between]
undefined4 __thiscall FUN_00610810(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_ESI;
  bool bVar5;
  float10 fVar6;
  undefined8 uVar7;
  int local_4;
  
  piVar2 = param_2;
  iVar3 = *param_2;
  bVar5 = false;
  local_4 = 0;
  if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) || ((iVar3 == 0x1b0 || (iVar3 == 0x147)))) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x10) != 0) {
    return 0;
  }
  iVar3 = FUN_00a81330();
  if (((iVar3 != 0) && (local_4 = FUN_00a7c8a0(), local_4 != 0)) &&
     ((*(byte *)(local_4 + 0x4c0) & 0x10) != 0)) {
    (**(code **)(*param_1 + 0x21c))(local_4,(char)param_2[4],0x3c23d70a,0);
    (**(code **)(*param_1 + 0x220))(0x40000000);
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    (**(code **)(*param_1 + 0x198))(local_4,param_2,1);
    return 1;
  }
  iVar3 = *param_2;
  iVar1 = param_2[0x4a];
  param_2 = (int *)param_2[1];
  if (iVar3 == 0x57) {
    if (iVar1 != 5) {
      FUN_00ac85c0(5,0x42);
    }
    else {
      FUN_00ac85c0(5,0x3f);
    }
    bVar5 = iVar1 == 5;
    param_2 = (int *)FUN_00fdbc60();
  }
  if (*piVar2 == 0x1c3) {
    if (iVar1 == 5) {
      FUN_00ac85c0(5,0x3e);
      bVar5 = true;
    }
    else {
      FUN_00ac85c0(5,0x41);
    }
    param_2 = (int *)FUN_00fdbc60();
  }
  if ((float)param_1[0x3a8] <= 0.0) {
    iVar3 = FUN_00ac8660(0,0x27);
    param_1[0x3a7] = iVar3;
    fVar6 = (float10)FUN_00ac85c0(5,0x28);
    param_1[0x3a8] = (int)(float)(fVar6 * (float10)60.0);
  }
  if (bVar5) {
    param_1[0x3a7] = param_1[0x3a7] - (int)param_2;
  }
  if (param_1[0x3a7] < 0) {
    uVar7 = FUN_006080a0();
    iVar3 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      if (iVar1 == 3) {
        if (param_1[0x186] == 0x10006) {
          param_1[0x4d1] = 2;
          param_1[0x4d2] = iVar3;
          param_1[0x4d0] = param_1[0x4d0] | 2;
        }
LAB_00610ab4:
        FUN_00a8caf0(0x30000,iVar3,iVar3,iVar3);
        bVar5 = (param_1[0x186] & 0xffff0000U) == 0x20000;
      }
      else if (iVar1 == 4) {
        if (param_1[0x186] == 0x10006) {
          param_1[0x4d1] = 2;
          param_1[0x4d2] = iVar3;
          param_1[0x4d0] = param_1[0x4d0] | 2;
        }
        FUN_00a8caf0(0x30001,iVar3,iVar3,iVar3);
        bVar5 = (param_1[0x186] & 0xffff0000U) == 0x20000;
      }
      else {
        uVar4 = FUN_00dde2a0(iVar3,1000);
        if ((uVar4 & 1) != 0) {
          if (param_1[0x186] == 0x10006) {
            param_1[0x4d1] = 2;
            param_1[0x4d2] = 0;
            param_1[0x4d0] = param_1[0x4d0] | 2;
          }
          iVar3 = 0;
          goto LAB_00610ab4;
        }
        if (param_1[0x186] == 0x10006) {
          param_1[0x4d1] = 2;
          param_1[0x4d2] = 0;
          param_1[0x4d0] = param_1[0x4d0] | 2;
        }
        FUN_00a8caf0(0x30001,0,0,0);
        bVar5 = (param_1[0x186] & 0xffff0000U) == 0x20000;
      }
      if (!bVar5) {
        FUN_006083d0();
      }
      if (param_1[0x186] != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
      param_1[0x3a8] = 0;
      goto LAB_00610b26;
    }
  }
  FUN_00605330(iVar1);
LAB_00610b26:
  if ((piVar2[0x23] & 0x20000U) != 0) {
    param_2 = (int *)0x0;
    if (param_1[0x186] == 0x10006) {
      param_1[0x4d1] = 2;
      param_1[0x4d2] = 0;
      param_1[0x4d0] = param_1[0x4d0] | 2;
    }
    FUN_00a8caf0(0x30002,0,0,0);
    if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
      FUN_006083d0();
    }
    if (param_1[0x186] != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
  }
  (**(code **)(*param_1 + 0x30c))(param_2,0);
  (**(code **)(*param_1 + 0x198))(unaff_ESI,piVar2,1);
  if ((param_1[0x3a4] & 0x20000000U) != 0) {
    param_1[0x3b5] = 0;
  }
  return 0;
}

// 00610C10  FUN_00610c10  size=326  [between]
void __fastcall FUN_00610c10(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x9a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x7f,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8caf0(0x20013,0,0,0);
      if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
        FUN_006083d0();
      }
      if (*(int *)(param_1 + 0x618) != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
      return;
    }
  }
  return;
}

// 00610D70  FUN_00610d70  size=280  [between]
void __fastcall FUN_00610d70(int param_1)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0x824) = 3;
  *(undefined4 *)(param_1 + 0x828) = 0x78;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x82,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x618) == 0x10006) {
      *(undefined4 *)(param_1 + 0x1344) = 2;
      *(undefined4 *)(param_1 + 0x1348) = 0;
      *(uint *)(param_1 + 0x1340) = *(uint *)(param_1 + 0x1340) | 2;
    }
    FUN_00a8caf0(0x30001,2,0,0);
    if ((*(uint *)(param_1 + 0x618) & 0xffff0000) != 0x20000) {
      FUN_006083d0();
    }
    if (*(int *)(param_1 + 0x618) != 0x30002) {
      FUN_00eaa6e0(0x3f800000,0);
    }
    FUN_006086f0(&DAT_0163b5f4);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xffbfffff;
  }
  return;
}

// 00610E90  FUN_00610e90  size=185  [between]
void FUN_00610e90(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 auStack_4 [4];
  
  FUN_00a7c950();
  iVar1 = FUN_00a82090("Em0130_Weapon",0x30350,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b35514;
      (**(code **)(*piVar3 + 4))(&DAT_01b35514);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        uVar2 = FUN_009f8b40();
        FUN_009f8ae0(uVar2);
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c940(uVar2);
        FUN_00a7c960(auStack_4);
      }
    }
    FUN_0060b180();
    return;
  }
  FUN_00dd5650(&DAT_01645f48);
  return;
}

// 00610F50  FUN_00610f50  size=1287  [between]
/* WARNING: Removing unreachable block (ram,0x0061117b) */
/* WARNING: Removing unreachable block (ram,0x006112fe) */

void FUN_00610f50(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float unaff_ESI;
  float unaff_retaddr;
  float **ppfVar4;
  float **ppfVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float *pfStack_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  pfStack_64 = (float *)0x610f6f;
  pfStack_64 = (float *)FUN_00a1d5c0();
  FUN_0041c8e0(8);
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if (local_8 < local_c) {
    pfVar7 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_2c;
      pfVar7[1] = local_28;
      pfVar7[2] = local_24;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_20 = local_44 - local_2c;
  local_1c = local_40 - local_28;
  local_18 = local_3c - local_24;
  param_2 = (float *)(SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) *
                     0.33333334);
  if (param_4 < (float)param_2) {
    param_2 = (float *)param_4;
  }
  if ((float)param_2 < param_5) {
    param_2 = (float *)param_5;
  }
  local_50 = (local_2c + local_44) * 0.5;
  local_48 = (local_3c + local_24) * 0.5;
  if (local_40 <= local_28) {
    local_4c = local_28 + (float)param_2;
  }
  else {
    local_4c = (float)param_2;
    if (local_40 + 5.0 < local_28) {
      local_4c = (float)param_2 * 0.5;
    }
    local_4c = local_4c + local_40;
  }
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
  local_38 = local_50 - local_20;
  local_34 = local_4c - local_1c;
  local_30 = local_48 - local_18;
  local_5c = local_38 - local_2c;
  local_58 = local_34 - local_28;
  local_54 = local_30 - local_24;
  fVar6 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    pfStack_64 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar7 = &local_5c;
  pfStack_64 = pfVar7;
  D3DXVec3Normalize();
  iVar2 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)pfStack_64 * (float)param_2 + local_34;
      pfVar1[1] = unaff_ESI * (float)param_2 + local_30;
      pfVar1[2] = local_5c * (float)param_2 + local_2c;
    }
    iVar2 = local_10 + 1;
    if (iVar2 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_40;
        pfVar1[1] = local_3c;
        pfVar1[2] = local_38;
      }
      iVar2 = local_10 + 2;
      if (iVar2 < local_14) {
        pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_58;
          pfVar1[1] = local_54;
          pfVar1[2] = local_50;
        }
        iVar2 = local_10 + 3;
      }
    }
  }
  local_10 = iVar2;
  local_34 = local_28 + local_58;
  local_30 = local_24 + local_54;
  local_2c = local_20 + local_50;
  pfStack_64 = (float *)(local_4c - local_34);
  local_5c = local_44 - local_2c;
  fVar6 = local_5c * local_5c +
          (float)pfStack_64 * (float)pfStack_64 + (local_48 - local_30) * (local_48 - local_30);
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    pfStack_64 = (float *)0x0;
    local_5c = 0.0;
  }
  ppfVar4 = &pfStack_64;
  ppfVar5 = ppfVar4;
  D3DXVec3Normalize(ppfVar4);
  fVar6 = (float)ppfVar5 * unaff_retaddr;
  fVar8 = (float)pfVar7 * unaff_retaddr;
  pfStack_64 = (float *)((float)pfStack_64 * unaff_retaddr);
  fVar3 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar7 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_3c;
      pfVar7[1] = local_38;
      pfVar7[2] = local_34;
    }
    fVar3 = (float)((int)local_18 + 1);
    if ((int)fVar3 < (int)local_1c) {
      pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
      if (pfVar7 != (float *)0x0) {
        *pfVar7 = local_54 - fVar6;
        pfVar7[1] = local_50 - fVar8;
        pfVar7[2] = local_4c - (float)pfStack_64;
      }
      fVar3 = (float)((int)local_18 + 2);
      if ((int)fVar3 < (int)local_1c) {
        pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
        if (pfVar7 == (float *)0x0) {
          fVar3 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar7 = local_54;
          pfVar7[1] = local_50;
          pfVar7[2] = local_4c;
          fVar3 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar3;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0,ppfVar4,fVar6,fVar8);
  }
  return;
}

// 00611460  Em0130::vf30C  size=123  [class]
void __thiscall Em0130::vf30C(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x870) <= *(int *)(param_1 + 0x874) / 10) {
    FUN_00ac85c0(5,0x53);
    param_2 = FUN_00fdbc60();
  }
  BehaviorAppBase::vf30C(param_2,param_3);
  if (((*(int *)(param_1 + 0x870) < 1) &&
      (*(undefined4 *)(param_1 + 0x870) = 1, (DAT_01bea060 & 0x2000000) == 0)) &&
     (*(int *)(param_1 + 0x618) != 0x40003)) {
    FUN_0060bec0();
  }
  return;
}

// 006114E0  FUN_006114e0  size=113  [callgraph]
void __thiscall FUN_006114e0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x910);
  fVar2 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x40) = (float)(fVar2 * (float10)*(float *)(param_1 + 0x40));
  fVar2 = (float10)FUN_00fdc1f0();
  iVar1 = *(int *)(param_1 + 0x14);
  *(float *)(param_1 + 0x48) = (float)(fVar2 * (float10)*(float *)(param_1 + 0x48));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    if (iVar1 == 1) {
      FUN_0060bfe0(param_2);
      return;
    }
    if (iVar1 == 2) {
      FUN_00608880(param_2);
      return;
    }
  }
  return;
}

// 00611560  FUN_00611560  size=244  [callgraph]
void __fastcall FUN_00611560(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_009416e0(*(undefined4 *)(param_1 + 0x83c));
  iVar4 = 0;
  while( true ) {
    iVar1 = FUN_0093e4a0(iVar4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) == *(int *)(param_1 + 0x83c))) break;
    iVar4 = iVar4 + 1;
    if (0xb < iVar4) {
      return;
    }
  }
  FUN_0093fc70(&local_170);
  FUN_0093dda0(0x3f800000);
  uVar3 = *(uint *)(param_1 + 0x4b0);
  if (uVar3 == 0x7c0000) {
    uVar3 = 0;
  }
  else if ((uVar3 < 0x10000) || (uVar3 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar3);
  }
  uVar5 = 0;
  uVar2 = FUN_00a7c8a0(0);
  FUN_004039a0(0xb,uVar2,uVar5);
  local_40 = local_170;
  local_3c = local_16c;
  local_38 = local_168;
  local_34 = local_164;
  FUN_00a8c930(uVar3,local_160);
  return;
}

// 00611660  FUN_00611660  size=212  [callgraph]
void __fastcall FUN_00611660(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_00ac94e0(&DAT_01645f7c);
  iVar5 = FUN_00a12210(0x19);
  if (iVar5 != 0) {
    uVar1 = *(undefined4 *)(iVar5 + 0x40);
    uVar7 = *(uint *)(param_1 + 0x4b0);
    uVar2 = *(undefined4 *)(iVar5 + 0x44);
    uVar3 = *(undefined4 *)(iVar5 + 0x48);
    uVar4 = *(undefined4 *)(iVar5 + 0x4c);
    if (uVar7 == 0x7c0000) {
      uVar7 = 0;
    }
    else if ((uVar7 < 0x10000) || (uVar7 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,uVar7);
    }
    uVar8 = 0;
    uVar6 = FUN_00a7c8a0(0);
    FUN_004039a0(0xb,uVar6,uVar8);
    local_40 = uVar1;
    local_3c = uVar2;
    local_38 = uVar3;
    local_34 = uVar4;
    FUN_00a8c930(uVar7,local_160);
  }
  return;
}

// 00611740  FUN_00611740  size=212  [callgraph]
void __fastcall FUN_00611740(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_00ac94e0(&DAT_01645f84);
  iVar5 = FUN_00a12210(0x2f);
  if (iVar5 != 0) {
    uVar1 = *(undefined4 *)(iVar5 + 0x40);
    uVar7 = *(uint *)(param_1 + 0x4b0);
    uVar2 = *(undefined4 *)(iVar5 + 0x44);
    uVar3 = *(undefined4 *)(iVar5 + 0x48);
    uVar4 = *(undefined4 *)(iVar5 + 0x4c);
    if (uVar7 == 0x7c0000) {
      uVar7 = 0;
    }
    else if ((uVar7 < 0x10000) || (uVar7 + 0xe0000000 < 0x100000)) {
      FUN_00dd5650(&DAT_0163e20c,uVar7);
    }
    uVar8 = 0;
    uVar6 = FUN_00a7c8a0(0);
    FUN_004039a0(0xb,uVar6,uVar8);
    local_40 = uVar1;
    local_3c = uVar2;
    local_38 = uVar3;
    local_34 = uVar4;
    FUN_00a8c930(uVar7,local_160);
  }
  return;
}

// 00611820  FUN_00611820  size=295  [callgraph]
void __fastcall FUN_00611820(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined1 auStack_160 [288];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar5 = FUN_00a81330();
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00a7c8a0();
    if (piVar6 != (int *)0x0) {
      puVar9 = &DAT_01b35514;
      (**(code **)(*piVar6 + 4))(&DAT_01b35514);
      iVar5 = FUN_00dd6d80(puVar9);
      if (iVar5 != 0) {
        if ((*(uint *)(param_1 + 0xe90) & 0x800000) != 0) {
          FUN_0060b230();
        }
        iVar5 = FUN_00a12210(0xffffffff);
        if (iVar5 != 0) {
          uVar1 = *(undefined4 *)(iVar5 + 0x40);
          uVar8 = *(uint *)(param_1 + 0x4b0);
          uVar2 = *(undefined4 *)(iVar5 + 0x44);
          uVar3 = *(undefined4 *)(iVar5 + 0x48);
          uVar4 = *(undefined4 *)(iVar5 + 0x4c);
          if (uVar8 == 0x7c0000) {
            uVar8 = 0;
          }
          else if ((uVar8 < 0x10000) || (uVar8 + 0xe0000000 < 0x100000)) {
            FUN_00dd5650(&DAT_0163e20c,uVar8);
          }
          uVar10 = 0;
          uVar7 = FUN_00a7c8a0(0);
          FUN_004039a0(0xb,uVar7,uVar10);
          uStack_40 = uVar1;
          uStack_3c = uVar2;
          uStack_38 = uVar3;
          uStack_34 = uVar4;
          FUN_00a8c930(uVar8,auStack_160);
        }
        FUN_009fdde0();
      }
    }
  }
  return;
}

// 00613390  FUN_00613390  size=334  [callgraph]
/* WARNING: Switch with 1 destination removed at 0x006134a5 : 5 cases all go to same destination */

uint __fastcall FUN_00613390(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  uVar3 = param_1[0x186];
  if ((int)uVar3 < 0x20001) {
    if (uVar3 == 0x20000) {
      uVar1 = FUN_00ac4780();
      if (2 < (int)uVar1) {
        iVar2 = FUN_00a8c760(0xf);
        uVar1 = 0;
        if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00613416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*param_1 + 0x34c))();
          return uVar3;
        }
      }
    }
    else {
      uVar1 = uVar3 - 0x10000;
      if (uVar3 - 0x10000 < 0xd) {
        uVar1 = (uint)*(byte *)(uVar3 + 0x6034f4);
        switch(uVar3) {
        case 0x10000:
          uVar3 = FUN_0060d530();
          return uVar3;
        case 0x10001:
          uVar3 = FUN_0060e470();
          return uVar3;
        case 0x10006:
          uVar3 = FUN_0060dc70();
          return uVar3;
        case 0x1000c:
          uVar3 = FUN_00604ad0();
          return uVar3;
        }
      }
    }
  }
  else {
    uVar1 = uVar3;
    if ((int)uVar3 < 0x30001) {
      if (uVar3 != 0x30000) {
        uVar1 = uVar3 - 0x20001;
        switch(uVar3 - 0x20001) {
        case 0:
          uVar3 = FUN_0060a0b0();
          return uVar3;
        case 1:
        case 2:
          uVar3 = FUN_0060f490();
          return uVar3;
        case 3:
        case 4:
          uVar3 = FUN_0060a200();
          return uVar3;
        case 5:
        case 6:
          uVar3 = FUN_0060a230();
          return uVar3;
        case 7:
        case 8:
          uVar3 = FUN_0060a3a0();
          return uVar3;
        case 9:
          uVar3 = FUN_0060a4f0();
          return uVar3;
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
          uVar3 = FUN_0060a6c0();
          return uVar3;
        case 0xe:
        case 0x18:
          uVar3 = FUN_0060a810();
          return uVar3;
        case 0xf:
        case 0x10:
          uVar3 = FUN_0060a850();
          return uVar3;
        case 0x14:
        case 0x15:
          uVar3 = FUN_0060acb0();
          return uVar3;
        case 0x16:
          uVar3 = FUN_0060ace0();
          return uVar3;
        }
      }
    }
    else if ((int)uVar3 < 0x40001) {
      if (uVar3 != 0x40000) {
        uVar1 = uVar3 - 0x30001;
      }
    }
    else if ((int)uVar3 < 0x50001) {
      if (uVar3 == 0x50000) {
        uVar3 = FUN_0060e1d0();
        return uVar3;
      }
      uVar1 = uVar3 - 0x40001;
    }
    else {
      if (uVar3 == 0x50001) {
        uVar3 = FUN_0060e280();
        return uVar3;
      }
      uVar1 = uVar3 - 0x50002;
      if (uVar1 == 0) {
        uVar3 = FUN_0060e940();
        return uVar3;
      }
    }
  }
  return uVar1;
}

// 00613580  FUN_00613580  size=1132  [callgraph]
void __fastcall FUN_00613580(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int local_14;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2c,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    fVar1 = 21.0 - (float)param_1[0x11];
    if ((-21.0 - (float)param_1[0x10]) * (-21.0 - (float)param_1[0x10]) + fVar1 * fVar1 +
        (68.0 - (float)param_1[0x12]) * (68.0 - (float)param_1[0x12]) <=
        fVar1 * fVar1 + (45.0 - (float)param_1[0x10]) * (45.0 - (float)param_1[0x10]) +
        (65.0 - (float)param_1[0x12]) * (65.0 - (float)param_1[0x12])) {
      param_1[0x3d0] = 0x42340000;
      param_1[0x3d1] = 0x41a80000;
      param_1[0x3d2] = 0x42820000;
      param_1[0x3d3] = local_14;
      iVar2 = -0x4036f025;
    }
    else {
      param_1[0x3d0] = -0x3e580000;
      param_1[0x3d1] = 0x41a80000;
      param_1[0x3d2] = 0x42880000;
      param_1[0x3d3] = local_14;
      iVar2 = 0x3fc90fdb;
    }
    param_1[0x3d8] = iVar2;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00610f50(param_1 + 0x3b8,param_1 + 0x10,param_1 + 0x3d0,0x41100000,0x40c00000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
      param_1[0x24a] = 0x3f800000;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x2d,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00613759;
  case 3:
LAB_00613759:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = (float10)FUN_00a581b0(&iStack_24,(float)param_1[0x24a] * (float)param_1[0x244],
                                  param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    param_1[0x14] = iStack_24;
    param_1[0x15] = iStack_20;
    param_1[0x16] = iStack_1c;
    FUN_00a8e960(param_1[0x3d8]);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    fVar1 = 1.0;
LAB_00613805:
    if (fVar1 < (float)param_1[0x249] != (fVar1 == (float)param_1[0x249])) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0061385a;
  case 5:
LAB_0061385a:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar3 = (float10)FUN_00a581b0(&iStack_24,(float)param_1[0x24a] * (float)param_1[0x244],
                                  param_1[0x249]);
    param_1[0x249] = (int)(float)fVar3;
    param_1[0x14] = iStack_24;
    param_1[0x15] = iStack_20;
    param_1[0x16] = iStack_1c;
    FUN_00a8e960(param_1[0x3d8]);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    fVar1 = 2.0;
    goto LAB_00613805;
  case 6:
    FUN_00aa4080(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(4);
    if (iVar2 != 0) {
      FUN_00a8caf0(0x20018,0,0,0);
      if ((param_1[0x186] & 0xffff0000U) != 0x20000) {
        FUN_006083d0();
      }
      if (param_1[0x186] != 0x30002) {
        FUN_00eaa6e0(0x3f800000,0);
      }
      FUN_006086f0(&DAT_0163b5f4);
      param_1[0x3a4] = param_1[0x3a4] & 0xffbfffff;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00613A10  FUN_00613a10  size=1287  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00613a10(int *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBX;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *_Format;
  char local_14 [4];
  int iStack_10;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x4e,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608360();
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x46d] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_006085b0(param_1 + 0x3d0);
      param_1[0x3d1] = param_1[0x11];
      param_1[0x3d4] = param_1[0x10];
      param_1[0x3d5] = param_1[0x11];
      param_1[0x3d6] = param_1[0x12];
      param_1[0x3d7] = param_1[0x13];
      FUN_00610f50(param_1 + 0x3b8,param_1 + 0x3d4,param_1 + 0x3d0,0x40c00000,0x40400000);
      iVar4 = param_1[0x2a1];
      param_1[600] = *(int *)(iVar4 + 0x40);
      param_1[0x259] = *(int *)(iVar4 + 0x44);
      param_1[0x25a] = *(int *)(iVar4 + 0x48);
      param_1[0x25b] = *(int *)(iVar4 + 0x4c);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x4f,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar4 = thunk_FUN_00e58ed0(param_1[0x464]);
    if (iVar4 != 0) goto LAB_00613c4b;
    sVar1 = *(short *)((int)param_1 + 0x119e);
    do {
      sVar2 = FUN_00dde2d0(0,1000);
      sVar2 = sVar2 % 7;
      *(short *)((int)param_1 + 0x119e) = sVar2;
    } while (sVar2 == sVar1);
    switch(sVar2) {
    case 0:
      _Format = "DC3b4000_191010";
      break;
    case 1:
      _Format = "DC3b4000_1h1010";
      break;
    case 2:
      _Format = "DC3b4000_1i1010";
      break;
    case 3:
      _Format = "DC3b4000_1c1010";
      break;
    case 4:
      _Format = "DC3b4000_1b1010";
      break;
    case 5:
      _Format = "DC3b4000_1a1010";
      break;
    case 6:
      _Format = "DC3b1000_151010";
      break;
    default:
      goto switchD_00613bce_default;
    }
    _sprintf_s(local_14,0x14,_Format);
switchD_00613bce_default:
    iVar4 = FUN_00e5e0c0(local_14,param_1,0xffffffff,0);
    param_1[0x464] = iVar4;
    goto LAB_00613c4b;
  case 3:
LAB_00613c4b:
    _DAT_01beaa88 = _DAT_01beaa88 | 0x20000000;
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_006085b0(param_1 + 0x3d0);
    param_1[0x3d1] = param_1[0x3d5];
    FUN_00610f50(param_1 + 0x3b8,param_1 + 0x3d4,param_1 + 0x3d0,0x40c00000,0x40400000);
    FUN_00a581b0(&stack0xffffffe8,0,param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.02631579 + (float)param_1[0x249]);
    param_1[0x14] = unaff_EBX;
    param_1[0x16] = iStack_10;
    FUN_00a8e880(param_1 + 600);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x50,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00613d9c;
  case 5:
LAB_00613d9c:
    _DAT_01beaa88 = _DAT_01beaa88 | 0x20000000;
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&stack0xffffffe8,0,param_1[0x249]);
    param_1[0x249] = (int)((float)param_1[0x244] * 0.02631579 + (float)param_1[0x249]);
    param_1[0x14] = unaff_EBX;
    param_1[0x16] = iStack_10;
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    uVar7 = 1;
    iVar4 = param_1[0x2a1] + 0x40;
    uVar6 = 0x41000000;
    uVar3 = FUN_00a7c7f0(iVar4,0x41000000,1);
    uVar5 = extraout_ECX;
    FUN_00a7c940(uVar3);
    FUN_00c62c50(uVar5,iVar4,uVar6,uVar7);
    return;
  case 6:
    FUN_00aa4080(0x51,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_006083d0();
                    /* WARNING: Could not recover jumptable at 0x00613f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    break;
  }
  return;
}

// 00613F60  Em0130::vf32C  size=370  [class]
undefined4 __fastcall Em0130::vf32C(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_160 [348];
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(3);
  FUN_00ac2080(4);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  FUN_00ac2080(5);
  iVar2 = FUN_00a8c240();
  if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x4c0) & 1) != 0)) {
    iVar2 = FUN_00a8ef10();
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(9);
      if (iVar2 == 0) {
        lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa00);
        if (*(int *)(param_1 + 0xa18) != 0) {
          EnterCriticalSection(lpCriticalSection);
        }
        piVar5 = *(int **)(param_1 + 0x67c);
        piVar4 = piVar5 + *(int *)(param_1 + 0x684) * 0x54;
        FUN_00445db0();
        iVar2 = -1;
        bVar1 = false;
        if (piVar5 != piVar4) {
          do {
            if ((*piVar5 != 0x147) && (iVar2 < piVar5[1])) {
              bVar1 = true;
              FUN_00448f50(piVar5);
              iVar2 = piVar5[1];
            }
            piVar5 = piVar5 + 0x54;
          } while (piVar5 != piVar4);
          if (bVar1) {
            iVar2 = FUN_00607ca0(local_160);
            if ((iVar2 == 0) && (*(int *)(param_1 + 0x618) != 0x40003)) {
              iVar2 = FUN_00a8f040(local_160);
              if (iVar2 == 0) {
                uVar3 = FUN_00610810(local_160);
                if (*(int *)(param_1 + 0xa18) != 0) {
                  LeaveCriticalSection(lpCriticalSection);
                }
                return uVar3;
              }
            }
          }
        }
        if (*(int *)(param_1 + 0xa18) != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
      }
    }
  }
  return 0;
}

// 006140E0  FUN_006140e0  size=74  [callgraph]
void __thiscall FUN_006140e0(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00614130  FUN_00614130  size=3387  [callgraph]
void __fastcall FUN_00614130(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  undefined *puVar10;
  int *piStack_4c;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  piVar7 = (int *)0x0;
  piVar4 = (int *)FUN_00c13920();
  iVar5 = (**(code **)(*piVar4 + 0x28))(0);
  if ((iVar5 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar10 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar5 = FUN_00dd6d80(puVar10);
    piVar7 = (int *)(-(uint)(iVar5 != 0) & (uint)piVar4);
    piStack_4c = piVar7;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_006067b0();
    FUN_00a8cb60(1);
    if (piVar7 != (int *)0x0) {
      FUN_008a8f40(1,0,0);
      FUN_00a8caf0(0x200000,0,0,0);
    }
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    fStack_44 = 8.8607;
    fStack_40 = 21.353;
    uStack_3c = 0x42869048;
    (**(code **)(*param_1 + 0x7c))(&fStack_44,&uStack_34);
    goto LAB_0061421c;
  case 1:
LAB_0061421c:
    param_1[0x187] = param_1[0x187] + 1;
    if (piVar7 != (int *)0x0) {
      FUN_00a8caf0(0x200000,param_1[0x187],0,0);
    }
LAB_00614241:
    FUN_006067b0();
    FUN_00aa4080(0xa6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    FUN_00608360();
    param_1[0x187] = param_1[0x187] + 1;
switchD_0061419b_caseD_3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 0) break;
    param_1[0x187] = param_1[0x187] + 1;
switchD_0061419b_caseD_4:
    FUN_00aa4080(0xa7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    param_1[0x187] = param_1[0x187] + 1;
    goto switchD_0061419b_caseD_5;
  case 2:
    goto LAB_00614241;
  case 3:
    goto switchD_0061419b_caseD_3;
  case 4:
    goto switchD_0061419b_caseD_4;
  case 5:
  case 0xc:
  case 0x17:
  case 0x1e:
  case 0x22:
  case 0x2a:
    goto switchD_0061419b_caseD_5;
  case 6:
    FUN_00aa4080(0xa9,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    break;
  case 8:
    param_1[0x187] = 9;
    if (piVar7 != (int *)0x0) {
      FUN_00a8caf0(0x200000,9,0,0);
    }
    break;
  case 9:
    FUN_00aa4080(0xa8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    FUN_006083d0();
    goto LAB_006143ee;
  case 10:
  case 0x13:
  case 0x28:
    goto switchD_0061419b_caseD_a;
  case 0xb:
    FUN_00606870();
    FUN_00aa4080(0xaa,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    if (piVar7 != (int *)0x0) {
      FUN_00a8cb60(param_1[0x187]);
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto switchD_0061419b_caseD_5;
  case 0xd:
    FUN_00aa4080(0xab,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    FUN_00608ae0(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
  case 0xe:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      if (param_1[0x188] == 0) {
        param_1[0x3a4] = param_1[0x3a4] | 0x1000;
        iVar5 = *param_1;
        uVar6 = FUN_00fdbc60(0);
        (**(code **)(iVar5 + 0x30c))(uVar6);
        param_1[0x188] = param_1[0x188] + 1;
        piVar7 = piStack_4c;
      }
      else if (param_1[0x188] == 1) {
        FUN_00611820();
        param_1[0x188] = param_1[0x188] + 1;
      }
    }
    break;
  case 0xf:
    FUN_00aa4080(0xac,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
    FUN_00605ce0(6);
  case 0x10:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = 0x12;
    }
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      if (param_1[0x188] == 0) {
LAB_0061474c:
        FUN_00611560();
        param_1[0x188] = param_1[0x188] + 1;
      }
      else if (param_1[0x188] == 1) {
        FUN_00611660();
        param_1[0x188] = param_1[0x188] + 1;
      }
    }
    break;
  case 0x11:
    if ((piVar7 != (int *)0x0) && (iVar5 = FUN_00a8cc00(0x200000,0x11), iVar5 != 0)) {
      FUN_00611560();
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 0x12:
    FUN_00aa4080(0xad,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00605ce0(7);
    goto switchD_0061419b_caseD_a;
  case 0x14:
    FUN_006068a0();
    FUN_00aa4080(0xae,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    FUN_00608ae0(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
    FUN_00605ce0(5);
  case 0x15:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar5 = FUN_00a8c760(10);
    if (iVar5 == 0) break;
    if (param_1[0x188] == 0) {
      param_1[0x3a4] = param_1[0x3a4] | 0x1000;
      iVar5 = *param_1;
      uVar6 = FUN_00fdbc60(0);
      (**(code **)(iVar5 + 0x30c))(uVar6);
      param_1[0x188] = param_1[0x188] + 1;
      piVar7 = piStack_4c;
      break;
    }
    if (param_1[0x188] != 1) break;
    goto LAB_0061474c;
  case 0x16:
    FUN_006068a0();
    FUN_00aa4080(0xaf,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    if (piVar7 != (int *)0x0) {
      FUN_00a8cb60(param_1[0x187]);
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto switchD_0061419b_caseD_5;
  case 0x18:
    FUN_00aa4080(0xb0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00608d90();
    FUN_00608ae0(2);
    param_1[0x187] = param_1[0x187] + 1;
  case 0x19:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      param_1[0x3a4] = param_1[0x3a4] | 0x1000;
      iVar5 = *param_1;
      uVar6 = FUN_00fdbc60(0);
      (**(code **)(iVar5 + 0x30c))(uVar6);
    }
    break;
  case 0x1a:
    FUN_00aa4080(0xb1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00608d90();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
  case 0x1b:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a8c760(10);
    if (iVar5 == 0) break;
    if (param_1[0x188] != 0) {
      if (param_1[0x188] == 1) {
        FUN_00611740();
        param_1[0x188] = param_1[0x188] + 1;
      }
      break;
    }
    goto LAB_0061474c;
  case 0x1c:
    if ((piVar7 != (int *)0x0) && (iVar5 = FUN_00a8cc00(0x200000,0x1c), iVar5 != 0)) {
      FUN_00611560();
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 0x1d:
    FUN_00aa4080(0xb2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00608d90();
    param_1[0x187] = param_1[0x187] + 1;
    goto switchD_0061419b_caseD_5;
  case 0x1f:
    param_1[0x187] = 0x20;
  case 0x20:
    goto switchD_0061419b_caseD_5;
  case 0x21:
    iVar5 = FUN_00a82090("Em0131",0x20131,0);
    if (iVar5 != 0) {
      uVar6 = FUN_00a7c7f0();
      FUN_00a7c960(uVar6);
      iVar5 = FUN_00a7c8a0();
      if (iVar5 != 0) {
        FUN_00a8caf0(0x40000,0,0,0);
        FUN_00606af0(param_1[0x13c]);
        iVar5 = FUN_00604620();
        if (iVar5 != 0) {
          piVar4 = (int *)FUN_00604620();
          (**(code **)(*piVar4 + 0x20))();
        }
        FUN_00ac94e0(&DAT_01645d78);
      }
    }
    FUN_006068d0();
    FUN_00aa4080(0xb5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00611950(0xd0);
    param_1[0x187] = param_1[0x187] + 1;
    goto switchD_0061419b_caseD_5;
  case 0x23:
    FUN_00aa4080(0xb6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00611950(0xd1);
    param_1[0x251] = 1;
    iVar5 = FUN_00a81330();
    if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), piVar7 = piStack_4c, iVar5 != 0)) {
      FUN_00606a30();
      FUN_00ac9420(&DAT_01645d78);
    }
    FUN_00941240(param_1[0x20f],1);
    param_1[0x187] = param_1[0x187] + 1;
  case 0x24:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x251] != 0) && (piVar7 != (int *)0x0)) &&
       (iVar5 = (**(code **)(*piVar7 + 0x32c))(), iVar5 != 0)) {
      param_1[0x251] = 0;
      FUN_00608ae0(3);
    }
    break;
  case 0x25:
    FUN_00aa4080(0xb7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00611950(0xd2);
    FUN_00e5e1b0("bgm_Khamsin_Dead");
    (**(code **)(*param_1 + 0x344))(0xb,1,1);
    param_1[0x3a4] = param_1[0x3a4] & 0xbfffffff;
    FUN_00941240(param_1[0x20f],1);
    param_1[0x187] = param_1[0x187] + 1;
  case 0x26:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      param_1[0x3a4] = param_1[0x3a4] | 0x1000;
      param_1[0x21c] = 0;
    }
    break;
  case 0x27:
    FUN_00aa4080(0xb8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00611950(0xd3);
    FUN_00941240(param_1[0x20f],1);
LAB_006143ee:
    param_1[0x187] = param_1[0x187] + 1;
switchD_0061419b_caseD_a:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 0x29:
    FUN_00aa4080(0xb9,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00611950(0xd4);
    param_1[0x187] = param_1[0x187] + 1;
switchD_0061419b_caseD_5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 0x2b:
    param_1[0x250] = 0x14;
    param_1[0x187] = param_1[0x187] + 1;
  case 0x2c:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    piVar4 = param_1 + 0x250;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 < 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
  }
  iVar5 = FUN_00a8c760(0x1c);
  if (((((iVar5 == 0) && (2 < param_1[0x187])) && (piVar7 != (int *)0x0)) &&
      ((piVar7[0x15d0] == 0 && (iVar5 = FUN_00a8cab0(), iVar5 == 0x200000)))) &&
     (iVar5 = FUN_00a8cac0(), iVar5 < 0x29)) {
    switchD_0080dbae::default();
    iVar5 = FUN_00a12210(0xf00);
    uStack_34 = *(undefined4 *)(iVar5 + 0x40);
    uStack_30 = *(undefined4 *)(iVar5 + 0x44);
    uStack_2c = *(undefined4 *)(iVar5 + 0x48);
    uStack_28 = *(undefined4 *)(iVar5 + 0x4c);
    fStack_44 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                     *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                     *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
    fStack_40 = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                     *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                     *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
    fVar3 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                 *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                 *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
    fVar1 = *(float *)(iVar5 + 0x28);
    fVar2 = *(float *)(iVar5 + 0x38);
    fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar3));
    fVar9 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
    fStack_24 = (float)fVar9;
    fStack_20 = (float)fVar8;
    fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)fStack_40,
                            (float10)*(float *)(iVar5 + 0x10) / (float10)fStack_44);
    fStack_1c = (float)fVar8;
    (**(code **)(*piVar7 + 0x7c))(&uStack_34,&fStack_24);
  }
  return;
}

// 00614F20  FUN_00614f20  size=610  [callgraph]
void __fastcall FUN_00614f20(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  iVar1 = param_1[0x186];
  if (iVar1 < 0x20001) {
    if (iVar1 != 0x20000) {
      switch(iVar1) {
      case 0x10000:
        FUN_006046d0();
        break;
      case 0x10001:
        FUN_006048b0();
        break;
      case 0x10002:
      case 0x10003:
      case 0x10004:
      case 0x10005:
        FUN_0060dac0();
        break;
      case 0x10006:
        FUN_0060df50();
        break;
      case 0x10007:
      case 0x10008:
      case 0x10009:
        FUN_006047c0();
        break;
      case 0x1000a:
        FUN_00604a70();
        break;
      case 0x1000b:
        FUN_00613580();
        break;
      case 0x1000c:
        FUN_0060ede0();
      }
      goto switchD_00614f4e_default;
    }
switchD_00614fd4_caseD_20001:
    FUN_0060a0e0();
  }
  else {
    if (0x30000 < iVar1) {
      if (0x40000 < iVar1) {
        if (iVar1 < 0x50001) {
          if (iVar1 != 0x50000) {
            if (iVar1 == 0x40001) {
              FUN_0060fbb0();
            }
            else if (iVar1 == 0x40002) {
              FUN_0060ffe0();
            }
            else if (iVar1 == 0x40003) {
              FUN_00614130();
            }
            goto switchD_00614f4e_default;
          }
        }
        else if (iVar1 != 0x50001) {
          if (iVar1 == 0x50002) {
            FUN_0060e9e0();
          }
          goto switchD_00614f4e_default;
        }
        FUN_0060e330();
        goto switchD_00614f4e_default;
      }
      if (iVar1 == 0x40000) {
        FUN_006103c0();
        goto switchD_00614f4e_default;
      }
      switch(iVar1) {
      case 0x30001:
        goto switchD_00615082_caseD_30001;
      case 0x30002:
        FUN_006050c0();
        break;
      case 0x30003:
        FUN_00605020();
        break;
      case 0x30004:
        FUN_00610d70();
        break;
      case 0x30005:
        FUN_00610c10();
      }
      goto switchD_00614f4e_default;
    }
    if (iVar1 == 0x30000) {
switchD_00615082_caseD_30001:
      FUN_00607df0();
      goto switchD_00614f4e_default;
    }
    switch(iVar1) {
    case 0x20001:
      goto switchD_00614fd4_caseD_20001;
    case 0x20002:
    case 0x20003:
      FUN_0060f680();
      break;
    case 0x20004:
    case 0x20005:
    case 0x20006:
    case 0x20007:
      FUN_0060a260();
      break;
    case 0x20008:
    case 0x20009:
      FUN_0060a3d0();
      break;
    case 0x2000a:
      FUN_0060a520();
      break;
    case 0x2000b:
    case 0x2000c:
    case 0x2000d:
    case 0x2000e:
      FUN_0060a6f0();
      break;
    case 0x2000f:
    case 0x20019:
      FUN_0060f960();
      break;
    case 0x20010:
    case 0x20011:
      FUN_0060a880();
      break;
    case 0x20012:
      FUN_00613a10();
      break;
    case 0x20013:
    case 0x20014:
      FUN_0060ab30();
      break;
    case 0x20015:
    case 0x20016:
    case 0x20017:
      FUN_00607340();
      break;
    case 0x20018:
      FUN_00604b90();
    }
  }
switchD_00614f4e_default:
  iVar1 = FUN_00a8c760(0xc);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  iVar1 = FUN_00a8c760(0x30);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8c760(0x31);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(0x32);
      if (iVar1 != 0) {
        FUN_006086f0(&DAT_0163b5f4);
      }
      FUN_006080e0();
      return;
    }
    FUN_006086f0(&DAT_0163bbb8);
    FUN_006080e0();
    return;
  }
  FUN_006086f0(&DAT_0163b604);
  FUN_006080e0();
  return;
}

// 00616030  Em0130::vf40  size=3091  [class]
undefined4 __fastcall Em0130::vf40(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float10 fVar9;
  int iStack_224;
  int iStack_220;
  char *pcStack_21c;
  int **ppiStack_218;
  uint *puStack_214;
  undefined1 *puStack_210;
  int *piStack_20c;
  int *piStack_1f4;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  int *piStack_1cc;
  int local_1c8 [4];
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  int *piStack_1a0;
  float fStack_19c;
  int local_190 [6];
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  char acStack_168 [24];
  int local_150 [26];
  uint auStack_e8 [36];
  undefined4 uStack_58;
  
  piStack_1f4 = (int *)0x616046;
  iVar2 = EmBaseDLC::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  piStack_1f4 = (int *)0x61605a;
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 == 0) {
    return 0;
  }
  piStack_1f4 = (int *)0x616069;
  iVar2 = lib::AllocatedArray<Em0130::RollerMove::sMoveCommand>::
          AllocatedArray<Em0130::RollerMove::sMoveCommand>();
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a6] = 0;
  piStack_1f4 = (int *)0x61608e;
  FUN_00a7c950();
  param_1[0x3f2] = 0;
  param_1[0x4e4] = 0;
  param_1[0x3f0] = 0;
  param_1[0x4e5] = 0;
  param_1[0x3f1] = 0;
  param_1[0x4e8] = 0;
  param_1[0x4e9] = 0;
  param_1[0x4ea] = 0;
  piStack_1f4 = (int *)0x1646134;
  *(undefined2 *)((int)param_1 + 0x1196) = 0xffff;
  param_1[0x3f6] = 0;
  *(undefined2 *)(param_1 + 0x465) = 0xffff;
  param_1[0x461] = 0x3fc00000;
  *(undefined2 *)((int)param_1 + 0x119a) = 0xffff;
  param_1[0x3a8] = 0;
  *(undefined2 *)(param_1 + 0x467) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x119e) = 0xffff;
  *(undefined2 *)(param_1 + 0x468) = 0xffff;
  *(undefined2 *)(param_1 + 0x469) = 0xffff;
  param_1[0x46c] = 0;
  param_1[0x3f5] = 0;
  param_1[0x46d] = 0;
  param_1[0x4c8] = 0;
  *(undefined2 *)((int)param_1 + 0x11a2) = 0xffff;
  param_1[0x463] = 0;
  *(undefined2 *)((int)param_1 + 0x11a6) = 0;
  FUN_00acf600();
  piStack_1f4 = (int *)0x616161;
  iVar2 = FUN_00ac8a50();
  if (iVar2 == 0) {
    piStack_1f4 = (int *)0x61616c;
    FUN_00610e90();
  }
  piStack_1f4 = (int *)0x0;
  FUN_00ac8e10();
  piStack_1f4 = (int *)0x1;
  FUN_00ac8eb0();
  piStack_1f4 = (int *)0x0;
  FUN_00ac8d40();
  piStack_1f4 = (int *)param_1[0x13c];
  iVar2 = FUN_00c5def0();
  param_1[0x25c] = iVar2;
  piStack_1f4 = (int *)0x6161aa;
  FUN_00405230();
  puStack_210 = (undefined1 *)param_1[0x13c];
  piStack_1f4 = (int *)0x0;
  local_1d8 = 0;
  piStack_20c = (int *)0x0;
  puStack_214 = (uint *)0x1;
  ppiStack_218 = (int **)0x6161f3;
  FUN_00c151f0();
  piStack_1f4 = local_150;
  FUN_00c57830();
  param_1[0x1bb] = 1;
  piStack_1f4 = (int *)0x616216;
  FUN_00a929d0();
  piStack_1f4 = (int *)0x27;
  iVar2 = FUN_00ac8660();
  piStack_1f4 = (int *)0x21;
  param_1[0x3a7] = iVar2;
  fVar9 = (float10)FUN_00ac85c0();
  param_1[0x3b0] = (int)(float)fVar9;
  piStack_1f4 = (int *)0x22;
  fVar9 = (float10)FUN_00ac85c0();
  param_1[0x3b1] = (int)(float)fVar9;
  piStack_1f4 = (int *)0x23;
  fVar9 = (float10)FUN_00ac85c0();
  param_1[0x3b2] = (int)(float)fVar9;
  piStack_1f4 = (int *)0x24;
  fVar9 = (float10)FUN_00ac85c0();
  param_1[0x3b3] = (int)(float)fVar9;
  piStack_1f4 = (int *)0x25;
  fVar9 = (float10)FUN_00ac85c0();
  param_1[0x3b4] = (int)(float)fVar9;
  piStack_1f4 = (int *)0x1f;
  piStack_1f4 = (int *)FUN_00ac8660();
  FUN_00a8edf0();
  DAT_01dc08dc = param_1[0x128];
  local_190[0] = 0;
  DAT_01dc08e0 = param_1[0x2c0];
  local_190[1] = 0;
  DAT_018b4414 = param_1[0x12d];
  local_190[2] = 0;
  piStack_1f4 = local_190;
  param_1[0x3a4] = param_1[0x3a4] | 0x40000000;
  puStack_210 = (undefined1 *)0x6162f1;
  piStack_20c = param_1;
  iVar2 = FUN_008ec700();
  param_1[0x1d9] = iVar2;
  piStack_1f4 = (int *)0x616301;
  FUN_008e6d00();
  piStack_1f4 = (int *)0x400000;
  *(float *)(param_1[0x1d9] + 0xf4) = *(float *)(param_1[0x1d9] + 0xf4) * 0.5;
  FUN_008e7400();
  piStack_1f4 = (int *)0x616334;
  FUN_008e1c70();
  piStack_1f4 = (int *)0x20;
  FUN_008e5610();
  piStack_1f4 = (int *)0x40;
  FUN_008e5610();
  piStack_1f4 = (int *)0x0;
  piVar3 = (int *)FUN_00de3850();
  piStack_1f4 = &DAT_01b7bd48;
  iVar2 = FUN_00dd3500();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    piStack_1f4 = (int *)0x61637c;
    iVar2 = RigidBodyCollection::RigidBodyCollection_2();
  }
  param_1[0x1ec] = iVar2;
  if (iVar2 != 0) {
    local_1c8[0] = param_1[0x13c];
    piStack_1f4 = piVar3;
    piStack_1f4 = (int *)FUN_00de3ee0();
    FUN_00de3cf0();
    iVar2 = FUN_008f6410();
    if (iVar2 != 0) {
      piStack_1f4 = (int *)0x0;
      FUN_008f2cd0();
      piStack_1f4 = (int *)0x7;
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))();
      FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))();
      piStack_1f4 = (int *)0x80000000;
      FUN_008f1600();
      piStack_1f4 = (int *)0x20;
      FUN_008f1600();
      piStack_1f4 = (int *)0x40;
      FUN_008f1600();
      piStack_1f4 = (int *)0x400000;
      FUN_008f1040();
      piStack_1f4 = (int *)0x400000;
      FUN_008f12d0();
      piStack_1f4 = (int *)0x100;
      FUN_008f18c0();
      piStack_1f4 = (int *)0x10000;
      FUN_008f18c0();
      piStack_1f4 = (int *)0x100;
      FUN_008f1600();
      piStack_1f4 = (int *)0x80;
      FUN_008f1600();
    }
  }
  piStack_1f4 = (int *)0x40;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2();
  piStack_1f4 = (int *)0x61649d;
  FUN_00605430();
  piStack_1f4 = &DAT_01b7bd48;
  puVar4 = (undefined4 *)FUN_00dd3580();
  param_1[0x360] = (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    puVar8 = &DAT_01881db8;
    for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar4 = puVar4 + 1;
    }
    piStack_1f4 = (int *)0x6164ce;
    FUN_00605590();
  }
  piStack_1f4 = param_1;
  FUN_00c1cf50();
  FUN_00c54720();
  param_1[0x20b] = 0x13;
  param_1[0x20c] = 0x13;
  piStack_1f4 = (int *)0x6164f8;
  (**(code **)(*param_1 + 0x34c))();
  piStack_1f4 = param_1 + 0x470;
  (**(code **)(*param_1 + 0x358))();
  fVar9 = (float10)FUN_00ac85c0();
  fStack_19c = (float)fVar9;
  piStack_1cc = param_1 + 0x3d9;
  iStack_1d0 = 0xf;
  do {
    piStack_20c = (int *)0x61654e;
    _sprintf_s(acStack_168,0x10,"gareki_%x");
    FUN_00e03ea0();
    iVar2 = FUN_00a18d70();
    if (iVar2 != 0) {
      FUN_00a7c7f0();
      FUN_00a7c960();
      piStack_1a0 = (int *)FUN_00a7c8a0();
      if (piStack_1a0 != (int *)0x0) {
        (**(code **)(*piStack_1a0 + 4))();
        iVar2 = FUN_00dd6d80();
        if (iVar2 != 0) {
          piVar3 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar3 + 0x20))();
          piStack_1a0[0x2d5] = (int)fStack_19c;
        }
      }
    }
    piStack_1cc = piStack_1cc + 1;
    iStack_1d0 = iStack_1d0 + -1;
  } while (iStack_1d0 != 0);
  local_190[2] = 0;
  local_190[3] = 0;
  local_190[4] = param_1[0x461];
  (**(code **)(*param_1 + 0x84))();
  piStack_20c = (int *)0x616632;
  FUN_00a8e130();
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  local_1c8[2] = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0x40400000;
  uStack_1b0 = 0;
  uStack_178 = 0;
  uStack_174 = 0xbf800000;
  uStack_170 = 0;
  FUN_0118f7b0();
  uStack_58 = 0;
  iVar2 = FUN_009f8b40();
  auStack_e8[0] = iVar2 << 0x10 | 7;
  piVar3 = (int *)FUN_00910da0();
  piStack_20c = local_1c8;
  puStack_210 = &stack0xfffffe18;
  puStack_214 = auStack_e8;
  ppiStack_218 = &piStack_1a0;
  pcStack_21c = (char *)0x6166d4;
  pcStack_21c = (char *)(**(code **)(*piVar3 + 0xc))();
  iStack_220 = 0x6166e0;
  FUN_00910ab0();
  if (param_1[0x460] != 0) {
    pcStack_21c = (char *)0x6166f8;
    FUN_00916260();
    iStack_220 = param_1[0x460];
    pcStack_21c = (char *)0x40;
    iStack_224 = 0x616706;
    FUN_00917bd0();
    iStack_224 = 0x20;
    FUN_00917bd0(param_1[0x460]);
    FUN_00917bd0(param_1[0x460],0x100);
    FUN_00917bd0(param_1[0x460],0x80);
    FUN_00917cf0(param_1[0x460],0x10000);
    pcStack_21c = "Em0130Dummy";
    iStack_220 = 0x61675a;
    FUN_00911ca0();
    pcStack_21c = (char *)param_1[0x13c];
    iStack_220 = param_1[0x460];
    iStack_224 = 0x61676d;
    FUN_008f7f00();
  }
  pcStack_21c = (char *)0x616779;
  FUN_004066f0();
  local_1d8 = 0;
  uStack_1d4 = 0x40200000;
  iStack_1d0 = 0;
  pcStack_21c = (char *)0x6167c0;
  piVar3 = (int *)FUN_00900480();
  iVar2 = *piVar3;
  pcStack_21c = (char *)0x0;
  iStack_220 = 0x6167cd;
  iStack_220 = FUN_009f8b40();
  iStack_224 = 5;
  iVar2 = (**(code **)(iVar2 + 0xc))(&stack0xfffffdf8,&local_1d8,&stack0xfffffe18,0x40900000);
  FUN_008f7f00(iVar2,param_1[0x13c]);
  FUN_004066f0();
  if ((iVar2 == 0) || (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_00616858;
    }
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar5 = *puVar5 | 1;
    puVar5[2] = puVar5[2] | 0x40;
    if (DAT_01885d68 != 1) {
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_00616858:
      piVar3 = (int *)(iVar6 + 4);
      *piVar3 = *piVar3 + -1;
      if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_004066f0();
  if ((iVar2 == 0) || (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_006168f9;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar1 != 0) & uVar1);
    *puVar5 = *puVar5 | 4;
    puVar5[4] = puVar5[4] | 0x400000;
    if (DAT_01885d68 == 1) goto LAB_006168f9;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar3 = (int *)(iVar6 + 4);
  *piVar3 = *piVar3 + -1;
  if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_006168f9:
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar2);
  FUN_009009c0("RollerMoveCheck");
  FUN_00900bd0();
  if (DAT_01885d68 != 1) {
    piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar3 = *piVar3 + -1;
    if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_004066f0();
  iStack_224 = param_1[0x14];
  iStack_220 = param_1[0x15];
  pcStack_21c = (char *)param_1[0x16];
  ppiStack_218 = (int **)param_1[0x17];
  piStack_1f4 = (int *)0x0;
  piVar3 = (int *)FUN_00900480();
  iVar2 = *piVar3;
  uVar7 = FUN_009f8b40(0);
  uVar7 = (**(code **)(iVar2 + 0xc))
                    (&iStack_224,&piStack_1f4,&stack0xfffffdfc,0x40800000,0x10,uVar7);
  FUN_008f7f00(uVar7,param_1[0x13c]);
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar7);
  FUN_009009c0("RollerMovePLCheck");
  FUN_00900bd0();
  if (DAT_01885d68 != 1) {
    piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar3 = *piVar3 + -1;
    if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00a82790(param_1[0x13c],0xe,0);
  param_1[0x3f8] = param_1[0x3f8] | 2;
  FUN_00a82870(0x3f5f66f3,0xbf5f66f3,0x3e99999a,0x3ae4c388,0x3d0efa35);
  FUN_00a82790(param_1[0x13c],0xf,0);
  param_1[0x42c] = param_1[0x42c] | 2;
  FUN_00a82840(0x3f490fdb,0xbf490fdb,0x3e99999a,0x3ae4c388,0x3d0efa35);
  iVar2 = FUN_00a82090("Em0130_FACE",0x20134,0);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    FUN_00a8c5f0(2,param_1[0x13c],iVar2,0xffffffff,0xffffffff);
    FUN_00a8c5f0(3,param_1[0x13c],iVar2,0,0);
    FUN_00a8c5f0(4,param_1[0x13c],iVar2,3,1);
    FUN_00a8c5f0(5,param_1[0x13c],iVar2,4,2);
    FUN_00a8c5f0(6,param_1[0x13c],iVar2,5,3);
    FUN_00a8c5f0(7,param_1[0x13c],iVar2,0x704,0x704);
    FUN_00a8c5f0(8,param_1[0x13c],iVar2,0x705,0x705);
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xfffffffd;
      piVar3 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar3 + 0x1c))();
      uVar7 = 3;
      FUN_00a7c8a0(3);
      cModelBase::setRootPartsNo(uVar7);
      uVar7 = FUN_00ac89d0();
      iVar2 = FUN_00a7c8a0();
      *(undefined4 *)(iVar2 + 0x518) = uVar7;
    }
  }
  FUN_00ac94e0("_brk1_");
  return 1;
}

// 00616C50  Em0130::vf4C  size=573  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Em0130::vf4C(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((DAT_01bea070 & 0x20000000) == 0) {
    FUN_00a92fb0();
    fVar5 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x910) = (float)fVar5;
    uVar6 = *(undefined4 *)(param_1 + 0x4f0);
    uVar8 = 0x41200000;
    uVar7 = 0x3f860a92;
    uVar3 = *(undefined4 *)(param_1 + 0x94);
    uVar2 = FUN_00ac45b0(uVar6,uVar3,0x3f860a92,0x41200000);
    uVar3 = lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_4(uVar2,uVar6,uVar3,uVar7,uVar8);
    *(undefined4 *)(param_1 + 0x11ac) = uVar3;
    uVar3 = FUN_0060b630();
    *(undefined4 *)(param_1 + 0xeb8) = uVar3;
    BehaviorEmBase::vf4C();
    FUN_0060ba10();
    iVar4 = FUN_00ac4770();
    if (iVar4 == 0) {
      FUN_00613390();
    }
    FUN_00614f20();
    FUN_006114e0(param_1);
    fVar1 = *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x13a0) * fVar1 + *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x13a4) * fVar1 + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x13a8) * fVar1 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x13ac) * fVar1 + *(float *)(param_1 + 0x5c);
    fVar5 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x13b0) * *(float *)(param_1 + 0x910) +
                                  *(float *)(param_1 + 0x94));
    *(float *)(param_1 + 0x94) = (float)fVar5;
    hkpCdPointCollector::hkpCdPointCollector_8(param_1);
    if (*(int *)(param_1 + 0x13b4) != 0) {
      Phantom::setTransform(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x13c4) != 0) {
      Phantom::setTransform(param_1 + 0x10);
    }
    iVar4 = *(int *)(param_1 + 0xa84);
    local_20 = 0;
    local_1c = 0.0;
    local_18 = 0;
    if (iVar4 != 0) {
      local_20 = *(undefined4 *)(iVar4 + 0x40);
      local_18 = *(undefined4 *)(iVar4 + 0x48);
      local_14 = *(undefined4 *)(iVar4 + 0x4c);
      local_1c = *(float *)(iVar4 + 0x44) + 0.5;
    }
    FUN_00a84720();
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(&local_20,0,*(uint *)(param_1 + 0xe90) >> 0x11 & 1,0,0,0x3f800000);
    FUN_00a84780(&local_20,*(uint *)(param_1 + 0xe90) >> 0x11 & 1,0,0,0,0x3f800000);
    switchD_0080dbae::default();
    if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0xfd4) != 0)) {
      FUN_0060ad10(*(int *)(param_1 + 0xa84) + 0x40);
    }
    if ((*(uint *)(param_1 + 0xe90) & 0x20000000) != 0) {
      _DAT_01beaa88 = _DAT_01beaa88 | 0x10000000;
    }
  }
  return;
}

// 00AB58C0  Em0130::vf04  size=6  [class]
undefined * Em0130::vf04(void)

{
  return &DAT_01b35510;
}

// 00AB58D0  Em0130::vf140  size=7  [class]
float10 Em0130::vf140(void)

{
  return (float10)7.0;
}

// 00AB58E0  Em0130::vf144  size=7  [class]
float10 Em0130::vf144(void)

{
  return (float10)7.1;
}

// 00AB58F0  Em0130::vf148  size=7  [class]
float10 Em0130::vf148(void)

{
  return (float10)6.5;
}

// 00ABA4A0  Em0130::vf00  size=98  [class]
undefined4 __thiscall Em0130::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00905ce0();
  cXml::cXml_7();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

