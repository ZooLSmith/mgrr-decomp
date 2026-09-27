// src/enemy/em01a0/Em01a0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00519000..00AB73C0, 165 functions

#include "mgrr.h"
#include "Em01a0.h"

// 00519000  Em01a0::vf1CC  size=11  [class]
void __fastcall Em01a0::vf1CC(int param_1)

{
  *(undefined4 *)(param_1 + 0xfdc) = 1;
  return;
}

// 00519010  Em01a0::vf50  size=86  [class]
void __fastcall Em01a0::vf50(int param_1)

{
  int iVar1;
  
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f3cb0(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x1490) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x1494) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x1498) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x149c) = *(undefined4 *)(param_1 + 0x4c);
  return;
}

// 00519070  FUN_00519070  size=41  [between]
unkbyte10 FUN_00519070(void)

{
  unkbyte10 Var1;
  
  Var1 = fpatan((float10)DAT_01bea390 - (float10)DAT_01bea380,
                (float10)DAT_01bea398 - (float10)DAT_01bea388);
  return Var1;
}

// 00519120  FUN_00519120  size=115  [between]
void __fastcall FUN_00519120(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  param_1[0x504] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2b,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005191F0  FUN_005191f0  size=187  [between]
void __fastcall FUN_005191f0(int *param_1)

{
  param_1[0x504] = 1;
  FUN_0093dc50();
  (**(code **)(*param_1 + 0x318))();
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  if (param_1[0x187] == 0) {
    param_1[0x505] = 0;
    FUN_00aa4080(4,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00519390  FUN_00519390  size=114  [between]
void __fastcall FUN_00519390(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1428) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1418);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x940) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x15c4) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x940) = 1;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x940) == 0)) {
    *(undefined4 *)(param_1 + 0x940) = 1;
  }
  return;
}

// 00519410  FUN_00519410  size=105  [between]
void __fastcall FUN_00519410(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1428) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1418);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = FUN_00a8c760(0xf);
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x940) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x15c4) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x940) = 1;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
  }
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x940) == 0)) {
    *(undefined4 *)(param_1 + 0x940) = 1;
  }
  return;
}

// 00519500  Em01a0::vf1B0  size=5  [class]
undefined4 Em01a0::vf1B0(void)

{
  return 0;
}

// 00519510  FUN_00519510  size=38  [callgraph]
void __fastcall FUN_00519510(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x764) != 0)) {
    uVar1 = FUN_009f8b40();
    FUN_008e26e0(uVar1);
  }
  return;
}

// 00519540  FUN_00519540  size=331  [callgraph]
void __thiscall FUN_00519540(int param_1,int param_2)

{
  int iVar1;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == -1) {
    return;
  }
  if (param_2 == 3) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00a7c8a0();
    if (iVar1 == 0) {
      return;
    }
    FUN_00da9630(1,1);
    FUN_00da9660(1,iVar1 + 0x40,0);
    return;
  }
  if (param_2 == 5) {
    iVar1 = FUN_00a12210(0xf00);
    FUN_00da9630(1,1);
    FUN_00da9660(1,iVar1 + 0x40,0);
    return;
  }
  local_1c = 0;
  local_18 = 0x40a00000;
  if (param_2 != 1) {
    if (param_2 == 2) {
      local_1c = 0;
      local_18 = 0;
      goto LAB_0051962d;
    }
    if (param_2 != 4) goto LAB_0051962d;
  }
  local_1c = 0xc0400000;
  local_18 = 0;
LAB_0051962d:
  local_20 = 0;
  D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
  fStack_2c = *(float *)(param_1 + 0x40) + fStack_2c;
  fStack_28 = *(float *)(param_1 + 0x44) + fStack_28;
  fStack_24 = *(float *)(param_1 + 0x48) + fStack_24;
  FUN_00da9630(1,1);
  FUN_00da9660(1,&fStack_2c,0);
  return;
}

// 00519A90  Em01a0::vf158  size=5  [class]
undefined4 Em01a0::vf158(void)

{
  return 0;
}

// 00519AA0  Em01a0::vf15C  size=33  [class]
void Em01a0::vf15C(undefined4 param_1,undefined4 param_2)

{
  BehaviorAppBase::vf15C(param_1,param_2);
  FUN_00a93090(6);
  return;
}

// 00519AD0  FUN_00519ad0  size=72  [between]
void __thiscall FUN_00519ad0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00a7c960(&param_2);
  *(undefined4 *)(param_1 + 0x874) = param_3;
  *(undefined4 *)(param_1 + 0x880) = *param_4;
  *(undefined4 *)(param_1 + 0x884) = param_4[1];
  *(undefined4 *)(param_1 + 0x888) = param_4[2];
  *(undefined4 *)(param_1 + 0x88c) = param_4[3];
  return;
}

// 00519B20  FUN_00519b20  size=72  [between]
void __thiscall FUN_00519b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_00a7c960(&param_2);
  *(undefined4 *)(param_1 + 0x894) = param_3;
  *(undefined4 *)(param_1 + 0x8a0) = *param_4;
  *(undefined4 *)(param_1 + 0x8a4) = param_4[1];
  *(undefined4 *)(param_1 + 0x8a8) = param_4[2];
  *(undefined4 *)(param_1 + 0x8ac) = param_4[3];
  return;
}

// 00519B70  FUN_00519b70  size=245  [between]
void FUN_00519b70(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0x15;
  do {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if ((iVar2 != 0) && (iVar3 = 0, 0 < *(short *)(iVar2 + 0x324))) {
        iVar5 = 0;
        do {
          puVar1 = (uint *)(*(int *)(iVar2 + 800) + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar3 < *(short *)(iVar2 + 0x324));
      }
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    if ((iVar4 != 0) && (iVar2 = 0, 0 < *(short *)(iVar4 + 0x324))) {
      iVar3 = 0;
      do {
        puVar1 = (uint *)(*(int *)(iVar4 + 800) + 0x38 + iVar3);
        *puVar1 = *puVar1 & 0xfffffffe;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar4 + 0x324));
    }
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    if ((iVar4 != 0) && (iVar2 = 0, 0 < *(short *)(iVar4 + 0x324))) {
      iVar3 = 0;
      do {
        puVar1 = (uint *)(*(int *)(iVar4 + 800) + 0x38 + iVar3);
        *puVar1 = *puVar1 & 0xfffffffe;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar2 < *(short *)(iVar4 + 0x324));
    }
  }
  return;
}

// 00519C70  FUN_00519c70  size=167  [between]
void FUN_00519c70(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  iVar3 = FUN_00a4a2d0();
  if (iVar3 == 0) {
    local_4 = 0x15;
    do {
      iVar3 = FUN_00a81330();
      if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
         (iVar6 = 0, 0 < *(short *)(iVar3 + 0x324))) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0163ef44), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 | 1;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

// 00519D20  FUN_00519d20  size=121  [between]
void FUN_00519d20(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x15;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 00519DA0  FUN_00519da0  size=60  [between]
int FUN_00519da0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x15;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x618) == 1)) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

// 00519DE0  FUN_00519de0  size=116  [between]
bool FUN_00519de0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = &DAT_018812f8;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xa08) != 0)) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        if ((iVar2 == *(int *)(iVar1 + 0xa08)) && (*(int *)(iVar1 + 0x618) == 0)) {
          iVar3 = iVar3 + 1;
        }
      }
    }
    puVar4 = puVar4 + 1;
  } while ((int)puVar4 < 0x1881308);
  return iVar3 == 4;
}

// 00519E60  FUN_00519e60  size=116  [between]
bool FUN_00519e60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = &DAT_01881294;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xa08) != 0)) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        if ((iVar2 == *(int *)(iVar1 + 0xa08)) && (*(int *)(iVar1 + 0x618) == 0)) {
          iVar3 = iVar3 + 1;
        }
      }
    }
    puVar4 = puVar4 + 1;
  } while ((int)puVar4 < 0x18812a8);
  return iVar3 == 5;
}

// 00519EE0  FUN_00519ee0  size=116  [between]
bool FUN_00519ee0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = &DAT_01881308;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xa08) != 0)) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        if ((iVar2 == *(int *)(iVar1 + 0xa08)) && (*(int *)(iVar1 + 0x618) == 0)) {
          iVar3 = iVar3 + 1;
        }
      }
    }
    puVar4 = puVar4 + 1;
  } while ((int)puVar4 < 0x188131c);
  return iVar3 == 5;
}

// 00519F60  FUN_00519f60  size=116  [between]
bool FUN_00519f60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = &DAT_0188131c;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xa08) != 0)) {
        FUN_00a81330();
        iVar2 = FUN_00a7c8a0();
        if ((iVar2 == *(int *)(iVar1 + 0xa08)) && (*(int *)(iVar1 + 0x618) == 0)) {
          iVar3 = iVar3 + 1;
        }
      }
    }
    puVar4 = puVar4 + 1;
  } while ((int)puVar4 < 0x1881340);
  return iVar3 == 9;
}

// 00519FF0  FUN_00519ff0  size=236  [between]
void FUN_00519ff0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x15;
  do {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      iVar3 = 0;
      iVar2 = 0;
      if (0 < *(short *)(iVar1 + 0x324)) {
        do {
          *(undefined4 *)(iVar3 + 0x1c + *(int *)(iVar1 + 800)) = param_1;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x70;
        } while (iVar2 < *(short *)(iVar1 + 0x324));
      }
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    iVar2 = 0;
    iVar1 = 0;
    if (0 < *(short *)(iVar4 + 0x324)) {
      do {
        *(undefined4 *)(*(int *)(iVar4 + 800) + 0x1c + iVar2) = param_1;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x70;
      } while (iVar1 < *(short *)(iVar4 + 0x324));
    }
  }
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    iVar2 = 0;
    iVar1 = 0;
    if (0 < *(short *)(iVar4 + 0x324)) {
      do {
        *(undefined4 *)(*(int *)(iVar4 + 800) + 0x1c + iVar2) = param_1;
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x70;
      } while (iVar1 < *(short *)(iVar4 + 0x324));
    }
  }
  return;
}

// 0051A0E0  FUN_0051a0e0  size=132  [between]
void FUN_0051a0e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x15;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00a0ba60(param_1);
      }
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_00a0ba60(param_1);
    }
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_00a0ba60(param_1);
    }
  }
  return;
}

// 0051A1B0  FUN_0051a1b0  size=63  [between]
void __thiscall FUN_0051a1b0(int param_1,float param_2)

{
  if (((1 < *(uint *)(param_1 + 0x1010)) && (*(uint *)(param_1 + 0x1010) < 6)) &&
     (param_2 = *(float *)(param_1 + 0x10d0) - param_2, *(float *)(param_1 + 0x10d0) = param_2,
     param_2 < -1.0)) {
    *(undefined4 *)(param_1 + 0x10d0) = 0xbf800000;
    return;
  }
  return;
}

// 0051A240  FUN_0051a240  size=70  [between]
void __thiscall FUN_0051a240(int param_1,float param_2)

{
  if ((1 < *(uint *)(param_1 + 0x1010)) && (*(uint *)(param_1 + 0x1010) < 6)) {
    *(float *)(param_1 + 0x10d0) = param_2;
    if (*(float *)(param_1 + 0x1444) <= param_2) {
      *(undefined4 *)(param_1 + 0x10d0) = *(undefined4 *)(param_1 + 0x1444);
    }
    if (*(char *)(param_1 + 0x10d4) == '\x03') {
      *(undefined1 *)(param_1 + 0x10d4) = 1;
    }
  }
  return;
}

// 0051A2B0  FUN_0051a2b0  size=30  [between]
void __fastcall FUN_0051a2b0(int param_1)

{
  *(undefined1 *)(param_1 + 0x10d4) = 4;
  *(undefined4 *)(param_1 + 0x10d0) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x100c) = 0;
  return;
}

// 0051A300  FUN_0051a300  size=43  [between]
undefined4 __fastcall FUN_0051a300(int param_1)

{
  if (((*(int *)(param_1 + 0x1418) != 0) && (*(int *)(param_1 + 0x10e0) != 0)) &&
     ((*(char *)(param_1 + 0x10d4) == '\x06' || (*(char *)(param_1 + 0x10d4) == '\a')))) {
    return 1;
  }
  return 0;
}

// 0051A330  FUN_0051a330  size=43  [between]
undefined4 __fastcall FUN_0051a330(int param_1)

{
  if (((*(int *)(param_1 + 0x1418) != 0) && (*(int *)(param_1 + 0x10e0) != 0)) &&
     ((*(char *)(param_1 + 0x10d4) == '\x02' || (*(char *)(param_1 + 0x10d4) == '\x03')))) {
    return 1;
  }
  return 0;
}

// 0051A360  FUN_0051a360  size=80  [between]
void FUN_0051a360(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x15;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0xba0) + 8))(0x41200000,0,0);
      }
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 0051A3C0  FUN_0051a3c0  size=105  [between]
undefined4 __fastcall FUN_0051a3c0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0xa84) != 0) &&
       (fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44),
       !NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0))) && (fVar1 < 4.0 != (fVar1 == 4.0))) &&
     ((iVar2 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x1d8))(), iVar2 != 0 &&
      (*(float *)(*(int *)(param_1 + 0xa84) + 0x894) <= 0.02)))) {
    return 1;
  }
  return 0;
}

// 0051A440  FUN_0051a440  size=135  [between]
void __fastcall FUN_0051a440(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(int **)(param_1 + 0xa84) != (int *)0x0) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x330))(), iVar2 != 0)) {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x141c);
    *(float *)(param_1 + 0x141c) = fVar1;
    if (NAN(fVar1) || 120.0 < fVar1 == (fVar1 == 120.0)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x141c) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x1420) = 1;
    return;
  }
  fVar1 = *(float *)(param_1 + 0x141c) - (*(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x910))
  ;
  *(float *)(param_1 + 0x141c) = fVar1;
  if (0.0 <= fVar1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x141c) = 0;
  *(undefined4 *)(param_1 + 0x1420) = 0;
  return;
}

// 0051A4D0  FUN_0051a4d0  size=37  [between]
undefined4 FUN_0051a4d0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 0051A500  FUN_0051a500  size=46  [between]
void FUN_0051a500(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    *(undefined4 *)(iVar1 + 0x6ec) = param_1;
  }
  return;
}

// 0051A570  Em01a0::vf228  size=20  [class]
undefined4 __fastcall Em01a0::vf228(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x618) == 0x5000e) {
    return 0;
  }
  uVar1 = BehaviorEmBase::vf228();
  return uVar1;
}

// 0051A590  Em01a0::vf10C  size=29  [class]
undefined4 Em01a0::vf10C(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0x201ba) {
    return 0;
  }
  uVar1 = FUN_00a81330();
  return uVar1;
}

// 0051B0C0  Em01a0::vf33C  size=14  [class]
void Em01a0::vf33C(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x18) = 0x423a0;
  return;
}

// 0051C220  Em01a0::vf44  size=320  [class]
void __fastcall Em01a0::vf44(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  FUN_00519d20();
  FUN_00d8a1d0(0x16,*(undefined4 *)(param_1 + 0x14b4));
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
        *(undefined4 *)(param_1 + 0x7b0) = 0;
      }
    }
  }
  iVar1 = 4;
  do {
    FUN_00900ca0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  FUN_00a9d8a0();
  FUN_00a944d0();
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00a944d0();
  BehaviorEmBase::vf44();
  return;
}

// 0051C360  FUN_0051c360  size=352  [between]
int __thiscall FUN_0051c360(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_110 [148];
  int local_7c;
  
  iVar3 = 0;
  FUN_004105d0();
  FUN_0043e160(param_2);
  iVar1 = FUN_00ac8cd0(local_110);
  if ((iVar1 != 0) && (local_7c != 0)) {
    FUN_00ac8d00(param_1,local_110,0);
    iVar3 = 1;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      iVar1 = FUN_00a9f890(local_110);
      if ((iVar1 != 0) && (local_7c != 0)) {
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          FUN_00a81330();
          uVar2 = FUN_00a7c8a0();
        }
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
        }
        FUN_00a8e5d0(uVar2,local_110,0);
        iVar3 = 1;
        goto LAB_0051c487;
      }
    }
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_0051c487:
  uVar2 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x198))(uVar2,param_2,0x100);
  return iVar3;
}

// 0051C4C0  Em01a0::vf54  size=75  [class]
void __fastcall Em01a0::vf54(int param_1)

{
  float fVar1;
  float fVar2;
  
  BehaviorEmBase::vf54();
  fVar1 = *(float *)(param_1 + 0x1490) - *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x1498) - *(float *)(param_1 + 0x48);
  if (*(float *)(param_1 + 0x1488) * *(float *)(param_1 + 0x1488) < fVar2 * fVar2 + fVar1 * fVar1) {
    *(int *)(param_1 + 0x1484) = *(int *)(param_1 + 0x1484) + 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1484) = 0;
  return;
}

// 0051C510  Em01a0::getAttackInfo  size=1034  [class]
undefined4 __thiscall Em01a0::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if ((iVar2 != 0) && (iVar2 = CollisionAttackData::CollisionAttackData(), iVar2 != 0)) {
    puVar1 = *(uint **)(iVar2 + 8);
    puVar1[5] = *(uint *)(param_1 + 0x4f0);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    uVar4 = FUN_00ac8520(*param_2);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
    puVar1[3] = unaff_ESI;
    puVar1[2] = uVar5;
    puVar1[1] = uVar4;
    *(undefined1 *)(puVar1 + 4) = uStack_8;
    *puVar1 = (uint)*param_2;
    *(undefined2 *)(puVar1 + 0x21) = 0x5300;
    switch(*param_2) {
    case 4:
      *puVar1 = 0x12e;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 6:
      *puVar1 = 0x130;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x800000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      return unaff_EBX;
    case 8:
      *puVar1 = 0x131;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      return unaff_EBX;
    case 10:
      *puVar1 = 0x132;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0xc:
      *puVar1 = 0x130;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x800000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      return unaff_EBX;
    case 0xe:
      *puVar1 = 0x131;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      return unaff_EBX;
    case 0x10:
      *puVar1 = 0x133;
      return unaff_EBX;
    case 0x12:
      *puVar1 = 0x134;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      return unaff_EBX;
    case 0x14:
      *puVar1 = 0x135;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x24] = puVar1[0x24] | 0x800000;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x16:
      *puVar1 = 0x136;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x18:
      *puVar1 = 0x137;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x1a:
      *puVar1 = 0x138;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      return unaff_EBX;
    case 0x1c:
      *puVar1 = 0x139;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      puVar1[0x24] = puVar1[0x24] | 0x1000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x1e:
      *puVar1 = 0x13a;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      puVar1[0x24] = puVar1[0x24] | 0x100000;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x20:
      *puVar1 = 0x13b;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      puVar1[0x24] = puVar1[0x24] | 0x1000000;
      *(undefined2 *)(puVar1 + 0x21) = 0x5301;
      return unaff_EBX;
    case 0x22:
      *puVar1 = 0x13c;
      puVar1[0x24] = puVar1[0x24] | 0x1000000;
    }
    return unaff_EBX;
  }
  FUN_00dd5650(&DAT_01640ca4);
  return 0;
}

// 0051C980  FUN_0051c980  size=215  [between]
void __fastcall FUN_0051c980(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  param_1[0x504] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x24,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = -0x4036f025;
    param_1[0x248] = 0;
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      iVar2 = FUN_00a7c8a0();
      *(undefined4 *)(iVar2 + 0x6ec) = 0;
    }
    param_1[0x505] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0051CA60  Em01a0::vf1A0  size=436  [class]
undefined4 __thiscall Em01a0::vf1A0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  float10 fVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (param_1[0x50a] != 0) {
    return 0;
  }
  iVar2 = *param_2;
  if ((((iVar2 != 0x133) && (iVar2 != 0x135)) && (iVar2 != 0x134)) &&
     ((iVar2 != 0x13a && (iVar2 != 0x13b)))) {
    param_1[0x580] = param_1[0x580] + 1;
    iVar2 = FUN_00518a90();
    if (iVar2 == 0) {
      if ((param_1[0x528] != 0) && (*param_2 == 0x138)) {
        (**(code **)(*piVar1 + 0x150))(0x5c,param_1[0x13c]);
        (**(code **)(*param_1 + 0x150))(0x5c,piVar1[0x13c]);
        param_1[0x580] = 0;
        fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
        piVar1[0x25] = (int)(float)fVar4;
        param_1[0x528] = 0;
        param_1[0x529] = 1;
        return 1;
      }
      if (((param_1[0x508] != 0) && (*param_2 == 0x138)) || (*param_2 == 0x13c)) {
        iVar2 = param_1[0x13c];
        pcVar3 = *(code **)(*piVar1 + 0x150);
LAB_0051cbb4:
        (*pcVar3)(0x5c,iVar2);
        (**(code **)(*param_1 + 0x150))(0x5c,piVar1[0x13c]);
        param_1[0x580] = 0;
        fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
        piVar1[0x25] = (int)(float)fVar4;
        param_1[0x528] = 0;
        param_1[0x529] = 0;
        return 1;
      }
      if (0xb < param_1[0x580]) {
        iVar2 = (**(code **)(*piVar1 + 0x14c))(0x5c,param_1[0x13c]);
        if (iVar2 != 0) {
          iVar2 = param_1[0x13c];
          pcVar3 = *(code **)(*piVar1 + 0x150);
          goto LAB_0051cbb4;
        }
      }
    }
  }
  return 0;
}

// 0051CC20  FUN_0051cc20  size=82  [callgraph]
void __fastcall FUN_0051cc20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x764) != 0)) {
    uVar1 = FUN_009f8b40();
    FUN_008e26e0(uVar1);
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    *(undefined4 *)(iVar2 + 0x6ec) = 1;
  }
  return;
}

// 0051CC80  FUN_0051cc80  size=207  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0051cce0) */

undefined4 __thiscall FUN_0051cc80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_24;
  undefined1 local_20 [28];
  
  iVar4 = 0;
  iVar1 = FUN_00907640(param_2,&local_24,local_20);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 1;
  FUN_0112bcf0();
  if (0 < *(int *)(local_24 + 0x14)) {
    iVar1 = *(int *)(*(int *)(local_24 + 0x10) + 0x28);
    iVar2 = 0;
    if (*(char *)(iVar1 + 0x18) == '\x01') {
      iVar2 = *(char *)(iVar1 + 0x10) + iVar1;
    }
    if (*(char *)(iVar1 + 0x18) == '\x02') {
      if (*(char *)(iVar1 + 0x18) == '\x02') {
        iVar4 = *(char *)(iVar1 + 0x10) + iVar1;
      }
      else {
        iVar4 = 0;
      }
    }
    if (iVar2 != 0) {
      iVar1 = FUN_008f7780(iVar2);
      uVar3 = 1;
      if ((*(int *)(param_1 + 0xa84) != 0) && (iVar1 == *(int *)(param_1 + 0xa84))) {
        uVar3 = 0;
      }
    }
    if (iVar4 != 0) {
      iVar1 = FUN_008f7780(iVar4);
      if ((*(int *)(param_1 + 0xa84) != 0) && (iVar1 == *(int *)(param_1 + 0xa84))) {
        return 0;
      }
    }
  }
  return uVar3;
}

// 0051CD50  FUN_0051cd50  size=205  [callgraph]
void FUN_0051cd50(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a92f90();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffff7;
    }
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xffffffef;
    }
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xffffffdf;
    }
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xffffffbf;
    }
    if (param_1 != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 8;
      }
    }
    if (param_2 != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 0x10;
      }
    }
    if (param_3 != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 0x20;
      }
    }
    if (param_4 != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 0x40;
      }
    }
  }
  return;
}

// 0051D070  FUN_0051d070  size=1099  [callgraph]
void __thiscall FUN_0051d070(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  *(undefined4 *)(param_1 + 0xa9c) = param_2;
  if (*(int **)(param_1 + 0x7b0) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x7b0) + 0x28))(&local_24,0xffffffff);
  if (iStack_2c == 0) {
    return;
  }
  FUN_004066f0();
  switch(*(undefined4 *)(param_1 + 0xa9c)) {
  case 0:
    FUN_008f3030(iStack_2c);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(5);
    FUN_00901540(0x1f);
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_00915e60(0x43480000);
    FUN_00915ea0(0x43340000);
    FUN_00915ef0(0x3ecccccd);
    uStack_28 = 0;
    local_24 = 0;
    uStack_20 = 0;
    FUN_0091a620(&uStack_28);
    FUN_0091a6d0(&uStack_28);
    goto LAB_0051d46c;
  case 1:
    FUN_008f2a60(iStack_2c);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0xb);
    FUN_00901540(7);
    FUN_00915e60(0x41200000);
    FUN_00915ea0(0x40060a92);
    FUN_0091a620(param_1 + 0xb80);
    FUN_0091a6d0(param_1 + 0xb90);
    FUN_00915ef0(0x3ecccccd);
    *(undefined4 *)(param_1 + 0xa80) = 1;
    goto switchD_0051d0ca_default;
  case 2:
    FUN_008f3030(iStack_2c);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(5);
    FUN_00901540(7);
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_00915e60(0);
    FUN_00915ea0(0);
    FUN_00915ef0(0x3ecccccd);
    uStack_28 = 0;
    local_24 = 0;
    uStack_20 = 0;
    FUN_0091a620(&uStack_28);
    FUN_0091a6d0(&uStack_28);
    *(undefined4 *)(param_1 + 0xaa0) = 0;
    goto LAB_0051d472;
  case 3:
    FUN_008f3030(iStack_2c);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(5);
    FUN_00901540(0x1f);
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_00915e60(0x40a00000);
    uVar2 = 0x43340000;
    break;
  case 4:
    FUN_008f3030(iStack_2c);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(5);
    FUN_00901540(0x1f);
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_00915e60(0x40000000);
    uVar2 = 0x3f800000;
    break;
  case 5:
    FUN_008f3030(iStack_2c);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(5);
    FUN_00901540(0x1f);
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_00915e60(0x41a00000);
    uVar2 = 0x40400000;
    break;
  case 6:
    FUN_008f3030(iStack_2c);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(5);
    FUN_00901540(0x1f);
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_00915e60(0x42200000);
    uVar2 = 0x40a00000;
    break;
  case 7:
    FUN_008f3030(iStack_2c);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(5);
    FUN_00901540(0x1f);
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_00915e60(0x42a00000);
    FUN_00915ea0(0x41200000);
    uVar2 = 0;
    goto LAB_0051d45f;
  default:
    goto switchD_0051d0ca_default;
  }
  FUN_00915ea0(uVar2);
  uVar2 = 0x3ecccccd;
LAB_0051d45f:
  FUN_00915ef0(uVar2);
LAB_0051d46c:
  *(undefined4 *)(param_1 + 0xaa0) = 1;
LAB_0051d472:
  *(undefined4 *)(param_1 + 0xa80) = 0;
switchD_0051d0ca_default:
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0051D530  Em01a0::vf14C  size=72  [class]
bool __thiscall Em01a0::vf14C(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((0 < *(int *)(param_1 + 0x870)) && (*(int *)(param_1 + 0x4e4) == 0)) {
    if (param_2 == 0x5a) {
      return true;
    }
    return param_2 == 0x5c;
  }
  return false;
}

// 0051D620  FUN_0051d620  size=218  [between]
void __thiscall
FUN_0051d620(int *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0xffff0000;
  if (uVar2 != 0x80000) {
    iVar1 = FUN_00a8cab0();
    param_1[0x3fc] = iVar1;
    iVar1 = FUN_00a8cac0();
    param_1[0x3fd] = iVar1;
    param_1[0x3f9] = param_1[0x3f8];
    param_1[0x400] = param_1[0x400] & 0xc7ffffff;
    (**(code **)(*param_1 + 0x314))();
    if (uVar2 == 0x50000) {
      FUN_00c27260(0x40200000);
    }
    else if (uVar2 == 0x70000) {
      param_1[0x400] = param_1[0x400] | 0x8000000;
    }
  }
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  param_1[0x3f8] = param_3;
  if (param_3 < 0) {
    FUN_00a962d0(1,0);
    param_1[0x3fb] = 0x40;
    return;
  }
  FUN_00a962d0(0,0);
  param_1[0x3fb] = 0;
  return;
}

// 0051D700  FUN_0051d700  size=68  [between]
void FUN_0051d700(uint param_1)

{
  int iVar1;
  
  if (param_1 < 8) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_0051b3c0();
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c950();
    }
  }
  return;
}

// 0051D750  FUN_0051d750  size=44  [between]
void FUN_0051d750(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_0051be00();
    }
  }
  FUN_00a81330();
  return;
}

// 0051D780  FUN_0051d780  size=73  [between]
void FUN_0051d780(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if ((((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x618), iVar1 != 2)) && (iVar1 != 3)) &&
       (iVar1 != 4)) {
      FUN_00a8caf0(1,0,0,0);
    }
  }
  FUN_00a81330();
  return;
}

// 0051D7D0  FUN_0051d7d0  size=44  [between]
undefined4 FUN_0051d7d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x4e4) == 0)) {
      return 1;
    }
  }
  return 0;
}

// 0051D800  FUN_0051d800  size=395  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0051d800(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
  iVar3 = FUN_00ac8120();
  if (iVar3 != 0) {
    FUN_00bc3cf0(param_1 + 0x40,local_8,local_8 + 1);
  }
  if ((DAT_01bea060 & 0x40000000) != 0) {
    local_8[0] = 0;
  }
  if ((DAT_01bea060 & 0x8000000) != 0) {
    local_8[0] = 0;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    local_8[0] = 0;
  }
  *(int *)(param_1 + 0x1428) = local_8[0];
  if (local_8[0] != 0) {
    *(undefined4 *)(param_1 + 0x142c) = 1;
  }
  if (*(int *)(param_1 + 0x142c) == 0) {
    return;
  }
  if (local_8[0] == 0) {
    fVar1 = *(float *)(param_1 + 0x1424) + 0.05;
    *(float *)(param_1 + 0x1424) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x1424) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x142c) = 0;
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
        *(undefined4 *)(iVar3 + 0x6ec) = 1;
      }
      FUN_0051a0e0(1);
    }
  }
  else {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      *(undefined4 *)(iVar3 + 0x6ec) = 0;
    }
    FUN_0051a0e0(0);
    if (*(float *)(param_1 + 0xa90) <= 12.25) {
      fVar1 = *(float *)(param_1 + 0x1424) + 0.05;
      *(float *)(param_1 + 0x1424) = fVar1;
      uVar2 = 0x3f800000;
      if (fVar1 <= 1.0) goto LAB_0051d912;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x1424) - 0.05;
      *(float *)(param_1 + 0x1424) = fVar1;
      uVar2 = 0;
      if (0.0 <= fVar1) goto LAB_0051d912;
    }
    *(undefined4 *)(param_1 + 0x1424) = uVar2;
  }
LAB_0051d912:
  FUN_00519ff0(*(undefined4 *)(param_1 + 0x1424));
  return;
}

// 0051D990  FUN_0051d990  size=101  [between]
undefined4 __fastcall FUN_0051d990(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_1 + 0x1418) != 0) && (*(int *)(param_1 + 0x1428) == 0)) &&
     (*(int *)(param_1 + 0x10e0) != 0)) {
    if ((*(char *)(param_1 + 0x10d4) == '\x02') || (*(char *)(param_1 + 0x10d4) == '\x03')) {
      *(undefined1 *)(param_1 + 0x10d4) = 4;
      *(undefined4 *)(param_1 + 0x100c) = 0;
      return 1;
    }
    uVar2 = FUN_0051a300();
    iVar1 = (int)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar2 != 0) {
      *(undefined1 *)(iVar1 + 0x10d4) = 0;
      *(undefined4 *)(iVar1 + 0x100c) = 1;
      return 2;
    }
  }
  return 0;
}

// 0051DA00  Em01a0::vf360  size=78  [class]
void __fastcall Em01a0::vf360(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  uVar2 = 1;
  uVar1 = FUN_00a81330(1);
  FUN_00e03080(uVar1,uVar2);
  uVar2 = 2;
  uVar1 = FUN_00a81330(2);
  FUN_00e03080(uVar1,uVar2);
  return;
}

// 00521BE0  Em01a0::vf48  size=442  [class]
void __fastcall Em01a0::vf48(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x14a8);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x14a8) = *(float *)(param_1 + 0x14a8) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x1318) != (*(float *)(param_1 + 0x1318) == 0.0)) {
    *(float *)(param_1 + 0x1318) = *(float *)(param_1 + 0x1318) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x15fc) != (*(float *)(param_1 + 0x15fc) == 0.0)) {
    *(float *)(param_1 + 0x15fc) = *(float *)(param_1 + 0x15fc) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x1318) != (*(float *)(param_1 + 0x1318) == 0.0)) {
    FUN_00519540(*(undefined4 *)(param_1 + 0x1314));
  }
  if ((0.0 < *(float *)(param_1 + 0x15dc) != (*(float *)(param_1 + 0x15dc) == 0.0)) &&
     (fVar1 = *(float *)(param_1 + 0x15dc) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x15dc) = fVar1, fVar1 < 0.0)) {
    *(undefined4 *)(param_1 + 0x15d8) = 0;
  }
  if ((0.0 < *(float *)(param_1 + 0x15e4) != (*(float *)(param_1 + 0x15e4) == 0.0)) &&
     (fVar1 = *(float *)(param_1 + 0x15e4) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x15e4) = fVar1, fVar1 < 0.0)) {
    *(undefined4 *)(param_1 + 0x15e0) = 0;
  }
  if (((0.0 < *(float *)(param_1 + 0x15ec) != (*(float *)(param_1 + 0x15ec) == 0.0)) &&
      (*(int *)(param_1 + 0x15e8) != 0)) &&
     (fVar1 = *(float *)(param_1 + 0x15ec) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x15ec) = fVar1, fVar1 < 0.0)) {
    *(undefined4 *)(param_1 + 0x15ec) = *(undefined4 *)(param_1 + 0x1468);
    *(int *)(param_1 + 0x15e8) = *(int *)(param_1 + 0x15e8) + -1;
  }
  FUN_0051a440();
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x40);
  }
  if (((0 < *(int *)(param_1 + 0x870)) && (*(int *)(param_1 + 0x4a0) != 1)) &&
     (*(int *)(param_1 + 0x4e4) == 0)) {
    DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
    DAT_01dc08e0 = 0;
    DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
    DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
    DAT_01dc08ec = 1;
    DAT_01dc08dc = *(int *)(param_1 + 0x4a0);
    FUN_00cad2a0();
  }
  FUN_0051d800();
  BehaviorEmBase::vf48();
  return;
}

// 00521DA0  FUN_00521da0  size=533  [between]
undefined4 __fastcall FUN_00521da0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[0x506];
  if (iVar4 == 0) {
    iVar3 = FUN_00fdbc60();
    iVar4 = param_1[0x21c];
    if (iVar4 <= iVar3) {
      iVar1 = param_1[0x505];
      if ((iVar1 == 0) || (iVar3 = FUN_00fdbc60(), iVar4 <= iVar3)) {
        param_1[0x21c] = iVar3;
      }
      if (param_1[0x128] != 2) {
        if (iVar1 == 0) {
          FUN_0051d620(0x60006,0,0,0,0);
        }
        pcVar2 = *(code **)(*param_1 + 0x220);
        param_1[0x505] = 1;
        (*pcVar2)(0x41200000);
        param_1[0x585] = 0;
        return 1;
      }
      param_1[0x506] = 1;
      param_1[0x403] = 1;
      param_1[0x438] = 1;
      param_1[0x585] = 0;
      return 1;
    }
  }
  else if (iVar4 == 1) {
    iVar3 = FUN_00fdbc60();
    iVar4 = param_1[0x21c];
    if (iVar4 <= iVar3) {
      iVar1 = param_1[0x505];
      if ((iVar1 == 0) || (iVar3 = FUN_00fdbc60(), iVar4 <= iVar3)) {
        param_1[0x21c] = iVar3;
      }
      param_1[0x506] = 2;
      param_1[0x403] = 1;
      if (param_1[0x128] != 2) {
        *(undefined1 *)(param_1 + 0x435) = 0;
        param_1[0x434] = param_1[0x511];
        if (iVar1 == 0) {
          FUN_0051d620(0x60007,0,0,0,0);
          FUN_00519c70();
        }
        pcVar2 = *(code **)(*param_1 + 0x220);
        param_1[0x505] = 1;
        (*pcVar2)(0x41200000);
        return 1;
      }
      param_1[0x438] = 1;
      return 1;
    }
  }
  else if ((iVar4 == 2) && (param_1[0x128] != 2)) {
    if (param_1[0x57e] == 0) {
      iVar4 = FUN_00fdbc60();
      if (param_1[0x21c] <= iVar4) {
        param_1[0x57e] = 1;
        param_1[0x434] = param_1[0x511];
        *(undefined1 *)(param_1 + 0x435) = 0;
        param_1[0x403] = 1;
      }
      if (param_1[0x57e] == 0) {
        return 0;
      }
    }
    iVar4 = FUN_00fdbc60();
    param_1[0x21c] = iVar4;
    return 0;
  }
  return 0;
}

// 00521FC0  FUN_00521fc0  size=554  [between]
void __fastcall FUN_00521fc0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((6.25 <= *(float *)(param_1 + 0xa8c)) || (0.5235988 <= *(float *)(param_1 + 0xaa0))) {
    if ((6.25 <= *(float *)(param_1 + 0xa8c)) ||
       ((1.0471976 <= *(float *)(param_1 + 0xaa0) || (sVar2 = FUN_00dde2d0(0,1), sVar2 == 0))))
    goto LAB_0052208c;
  }
  else {
    FUN_0051d620(0x50006,0,0,0,0);
    sVar2 = FUN_00dde2d0(0,2);
    if (sVar2 != 1) goto LAB_0052208c;
  }
  FUN_0051d620(0x5000e,0,0,0,0);
  sVar2 = FUN_00dde2d0(0,1);
  if ((sVar2 != 0) && (iVar3 = FUN_00ac4780(), iVar3 != 0)) {
    FUN_0051d620(0x5000f,0,0,0,0);
  }
LAB_0052208c:
  fVar1 = *(float *)(param_1 + 0xa8c);
  if (!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) {
    FUN_0051d620(0x10008,0,0,0,0);
  }
  fVar1 = *(float *)(param_1 + 0xa8c);
  if ((!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) && (*(float *)(param_1 + 0xaa0) < 0.5235988))
  {
    FUN_0051d620(0x10009,0,0,0,0);
    sVar2 = FUN_00dde2d0(0,1);
    if ((sVar2 != 0) && (*(float *)(param_1 + 0xa8c) <= 64.0)) {
      FUN_0051d620(0x50009,0,0,0,0);
    }
  }
  fVar1 = *(float *)(param_1 + 0xaa0);
  if ((!NAN(fVar1) && 0.5235988 < fVar1 != (fVar1 == 0.5235988)) &&
     (*(float *)(param_1 + 0xa8c) <= 12.25)) {
    FUN_0051d620(0x10009,0,0,0,0);
  }
  fVar1 = *(float *)(param_1 + 0xaa0);
  if ((!NAN(fVar1) && 0.5235988 < fVar1 != (fVar1 == 0.5235988)) &&
     (12.25 < *(float *)(param_1 + 0xa8c))) {
    FUN_0051d620(0x10009,0,0,0,0);
    sVar2 = FUN_00dde2d0(0,1);
    if ((sVar2 != 0) &&
       ((*(float *)(param_1 + 0xa8c) <= 64.0 &&
        (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0))))) {
      FUN_0051d620(0x50009,0,0,0,0);
    }
  }
  return;
}

// 005221F0  FUN_005221f0  size=672  [between]
void __fastcall FUN_005221f0(int param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*(uint *)(param_1 + 0x1010) < 2) || (5 < *(uint *)(param_1 + 0x1010))) {
    FUN_00521fc0();
    return;
  }
  if (*(int *)(param_1 + 0x1634) == 0) {
    if (*(float *)(param_1 + 0x924) < *(float *)(param_1 + 0x920)) {
      FUN_0051d620(0x10008,0,0,0,0);
    }
LAB_00522446:
    if ((*(float *)(param_1 + 0x924) < *(float *)(param_1 + 0x920)) &&
       (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25))) {
      FUN_0051d620(0x10008,0,0,0,0);
      return;
    }
  }
  else {
    if ((6.25 < *(float *)(param_1 + 0xa8c)) || (0.5235988 <= *(float *)(param_1 + 0xaa0))) {
LAB_00522269:
      fVar1 = *(float *)(param_1 + 0xaa0);
      if ((!NAN(fVar1) && 0.5235988 < fVar1 != (fVar1 == 0.5235988)) &&
         (*(float *)(param_1 + 0xa8c) <= 12.25)) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar2 = FUN_00dde2d0(0,1);
        FUN_0051d620(sVar2 + 0x10023,uVar3,uVar4,uVar5,uVar6);
      }
      if (*(int *)(param_1 + 0x940) < 1) goto LAB_00522446;
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) {
        FUN_0051d620(0x10008,0,0,0,0);
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if ((((NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) || (100.0 < *(float *)(param_1 + 0xa8c))
           ) || (1.0471976 <= *(float *)(param_1 + 0xaa0))) || (0.0 <= *(float *)(param_1 + 0x14a8))
         ) {
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (((NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) ||
            (0.5235988 <= *(float *)(param_1 + 0xaa0))) || (0.0 <= *(float *)(param_1 + 0x14a8))) {
          fVar1 = *(float *)(param_1 + 0xa8c);
          if (((!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) &&
              (*(float *)(param_1 + 0xa8c) <= 36.0)) &&
             ((*(float *)(param_1 + 0xaa0) < 1.0471976 && (*(float *)(param_1 + 0x14a8) < 0.0)))) {
            FUN_0051d620(0x50007,0,0,0,0);
            return;
          }
          goto LAB_00522446;
        }
      }
      else {
        FUN_0051d620(0x5000a,0,0,0,0);
        if (0.5235988 <= *(float *)(param_1 + 0xaa0)) {
          return;
        }
        sVar2 = FUN_00dde2d0(0,2);
        if (sVar2 != 1) {
          return;
        }
      }
      uVar3 = 0x50003;
    }
    else {
      sVar2 = FUN_00dde2d0(0,1);
      uVar3 = 0x10022;
      if (sVar2 == 0) {
        FUN_0051d620(0x10022,0,0,0,0);
        goto LAB_00522269;
      }
    }
    FUN_0051d620(uVar3,0,0,0,0);
  }
  return;
}

// 00522490  FUN_00522490  size=394  [between]
void __fastcall FUN_00522490(int param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*(uint *)(param_1 + 0x1010) < 2) || (5 < *(uint *)(param_1 + 0x1010))) {
    FUN_00521fc0();
    return;
  }
  if ((6.25 < *(float *)(param_1 + 0xa8c)) || (0.5235988 <= *(float *)(param_1 + 0xaa0))) {
LAB_005224fc:
    fVar1 = *(float *)(param_1 + 0xaa0);
    if ((!NAN(fVar1) && 0.5235988 < fVar1 != (fVar1 == 0.5235988)) &&
       (*(float *)(param_1 + 0xa8c) <= 12.25)) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar2 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar2 + 0x10023,uVar3,uVar4,uVar5,uVar6);
    }
    if (0 < *(int *)(param_1 + 0x940)) {
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) {
        FUN_0051d620(0x10009,0,0,0,0);
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if ((((!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) &&
           (*(float *)(param_1 + 0xa8c) <= 225.0)) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) &&
         (*(float *)(param_1 + 0x14a8) < 0.0)) {
        uVar3 = 0x5000b;
        goto LAB_005225d1;
      }
    }
    if ((*(float *)(param_1 + 0x924) < *(float *)(param_1 + 0x920)) &&
       (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25))) {
      FUN_0051d620(0x10008,0,0,0,0);
      return;
    }
  }
  else {
    sVar2 = FUN_00dde2d0(0,1);
    uVar3 = 0x10022;
    if (sVar2 == 0) {
      FUN_0051d620(0x10022,0,0,0,0);
      goto LAB_005224fc;
    }
LAB_005225d1:
    FUN_0051d620(uVar3,0,0,0,0);
  }
  return;
}

// 00522620  FUN_00522620  size=343  [between]
void __fastcall FUN_00522620(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = 4;
  if (((*(int *)(param_1 + 0x1418) == 1) && (1 < *(uint *)(param_1 + 0x1010))) &&
     (*(uint *)(param_1 + 0x1010) < 6)) {
    uVar4 = 5;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(uVar4,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0051cc20();
    *(undefined4 *)(param_1 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0x43340000;
    if (*(int *)(param_1 + 0x1418) == 2) {
      *(undefined4 *)(param_1 + 0x924) = 0;
    }
    sVar2 = FUN_00dde2d0(0,1);
    *(int *)(param_1 + 0x940) = (int)sVar2;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00522745;
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x920);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00aa4080(uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  }
LAB_00522745:
  if ((0 < *(int *)(param_1 + 0x1418)) &&
     (fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1638),
     *(float *)(param_1 + 0x1638) = fVar1, 600.0 < fVar1)) {
    *(undefined4 *)(param_1 + 0x1634) = 1;
  }
  return;
}

// 00522780  FUN_00522780  size=74  [between]
void __fastcall FUN_00522780(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x1428) == 0) {
      FUN_0051d620(0x60005,0,0,0,0);
      return;
    }
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      FUN_0051d620(0x10001,0,0,0,0);
    }
  }
  return;
}

// 005227D0  FUN_005227d0  size=280  [between]
void __fastcall FUN_005227d0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1c,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3f860a92,0);
    param_1[0x249] = 0x3f800000;
    if (param_1[0x506] == 2) {
      param_1[0x249] = 0x40000000;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_005228b4;
  FUN_00ac80a0(0x3fc00000,param_1[0x249]);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_0051d620(0x10001,0,0,0,0);
  }
LAB_005228b4:
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3ea0d97c,0);
  return;
}

// 005228F0  FUN_005228f0  size=275  [between]
void __fastcall FUN_005228f0(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1[0x187] != 0) {
    iVar3 = FUN_00519f60();
    if (iVar3 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x58c] = 0;
                    /* WARNING: Could not recover jumptable at 0x0052291e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    fVar1 = (float)param_1[0x52a];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && ((float)param_1[0x2a3] < 20.25)) {
      FUN_0051d620(0x10005,0,0,0,0);
      return;
    }
    fVar1 = (float)param_1[0x52a];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (20.25 < (float)param_1[0x2a3])) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      sVar2 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar2 + 0x10006,uVar4,uVar5,uVar6,uVar7);
      return;
    }
    if (6.25 < (float)param_1[0x2a3]) {
      FUN_0051d620(0x10004,0,0,0,0);
    }
    if (((float)param_1[0x2a3] <= 6.25) && ((float)param_1[0x2a8] < 0.5235988)) {
      FUN_0051d620(0x50006,0,0,0,0);
    }
  }
  return;
}

// 00522B40  FUN_00522b40  size=174  [between]
void __fastcall FUN_00522b40(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (param_1[0x187] != 0) {
    iVar1 = FUN_00519f60();
    if (iVar1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x58c] = 0;
                    /* WARNING: Could not recover jumptable at 0x00522b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (((param_1[0x186] != 0x10004) && ((float)param_1[0x52a] < 0.0)) &&
       (6.25 < (float)param_1[0x2a3])) {
      FUN_0051d620(0x10004,0,0,0,0);
    }
    if (((float)param_1[0x2a3] <= 6.25) && ((float)param_1[0x2a8] < 0.5235988)) {
      FUN_0051d620(0x50006,0,0,0,0);
    }
  }
  return;
}

// 00522BF0  FUN_00522bf0  size=472  [between]
void __fastcall FUN_00522bf0(int *param_1)

{
  float fVar1;
  float10 fVar2;
  float fStack_8;
  
  (**(code **)(*param_1 + 0x318))();
  fStack_8 = (float)param_1[0x25];
  if (param_1[0x186] == 0x10005) {
    fVar2 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    fStack_8 = (float)fVar2;
  }
  if (param_1[0x186] == 0x10006) {
    fVar2 = (float10)FUN_00ddba30((float)param_1[0x25] - 1.5707964);
    fStack_8 = (float)fVar2;
  }
  if (param_1[0x186] == 0x10007) {
    fVar2 = (float10)FUN_00ddba30((float)param_1[0x25] + 1.5707964);
    fStack_8 = (float)fVar2;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(6,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    param_1[0x248] = 0;
    param_1[0x249] = 0x43340000;
  }
  else if (param_1[0x187] != 1) goto LAB_00522d09;
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00522d09:
  fVar2 = (float10)fcos((float10)(float)param_1[0x586]);
  param_1[0x15] = (int)(float)(fVar2 * (float10)0.008 + (float10)(float)param_1[0x15]);
  fVar1 = (float)param_1[0x586];
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  fVar2 = (float10)FUN_00ddba30((float)((fVar2 + (float10)1.0) * (float10)0.017453292 +
                                       (float10)fVar1));
  param_1[0x586] = (int)(float)fVar2;
  fVar2 = (float10)FUN_00ddba30(fStack_8 + 0.05235988);
  FUN_00a8de10((float)param_1[0x244] * 0.08,(float)fVar2,0);
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
  return;
}

// 00522DD0  FUN_00522dd0  size=309  [between]
void __fastcall FUN_00522dd0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((*(float *)(param_1 + 0xa8c) <= 4.0) && (*(float *)(param_1 + 0x14a8) < 0.0)) {
    FUN_0051d620(0x50006,0,0,0,0);
    sVar2 = FUN_00dde2d0(0,2);
    if (sVar2 == 1) {
      iVar3 = FUN_00ac4780();
      if (iVar3 != 0) {
        FUN_0051d620(0x5000f,0,0,0,0);
      }
    }
  }
  if (((*(float *)(param_1 + 0xa8c) < 6.25) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) &&
     (*(float *)(param_1 + 0x14a8) < 0.0)) {
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      FUN_0051d620(0x5000e,0,0,0,0);
      sVar2 = FUN_00dde2d0(0,2);
      if (sVar2 == 1) {
        iVar3 = FUN_00ac4780();
        if (iVar3 != 0) {
          FUN_0051d620(0x5000f,0,0,0,0);
        }
      }
    }
  }
  fVar1 = *(float *)(param_1 + 0xa8c);
  if ((!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) && (*(float *)(param_1 + 0xaa0) < 0.5235988))
  {
    FUN_0051d620(0x10009,0,0,0,0);
  }
  return;
}

// 00522F10  FUN_00522f10  size=521  [between]
void __fastcall FUN_00522f10(int param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(param_1 + 0x1010) < 2) || (5 < *(uint *)(param_1 + 0x1010))) {
    FUN_00522dd0();
    return;
  }
  if (*(int *)(param_1 + 0x1634) != 0) {
    fVar1 = *(float *)(param_1 + 0x920);
    if (NAN(fVar1) || 120.0 < fVar1 == (fVar1 == 120.0)) {
      if ((*(float *)(param_1 + 0xa8c) < 6.25) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          FUN_0051d620(0x5000e,0,0,0,0);
          return;
        }
        FUN_0051d620(0x10022,0,0,0,0);
      }
      if ((*(float *)(param_1 + 0xa8c) < 6.25) &&
         (fVar1 = *(float *)(param_1 + 0xaa0),
         !NAN(fVar1) && 0.5235988 < fVar1 != (fVar1 == 0.5235988))) {
        uVar3 = 0x10021;
LAB_00523106:
        FUN_0051d620(uVar3,0,0,0,0);
        return;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0xa8c);
      if ((!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) &&
         (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
        FUN_0051d620(0x10021,0,0,0,0);
      }
      if ((*(float *)(param_1 + 0xa8c) < 6.25) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
        sVar2 = FUN_00dde2d0(0,1);
        uVar3 = 0x10022;
        if (sVar2 != 0) goto LAB_00523106;
        FUN_0051d620(0x10022,0,0,0,0);
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (((!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) &&
          (*(float *)(param_1 + 0xaa0) < 0.5235988)) && (*(float *)(param_1 + 0x14a8) < 0.0)) {
        FUN_0051d620(0x50003,0,0,0,0);
        return;
      }
      if (((*(float *)(param_1 + 0xaa0) <= 2.443461) && (*(float *)(param_1 + 0xa8c) <= 36.0)) &&
         (*(float *)(param_1 + 0x14a8) < 0.0)) {
        FUN_0051d620(0x50007,0,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00523120  FUN_00523120  size=458  [between]
void __fastcall FUN_00523120(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(8,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    param_1[0x248] = 0;
    param_1[0x521] = 0;
    param_1[0x522] = 0x3c23d70a;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(9,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(10,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
  if ((0 < param_1[0x506]) &&
     (fVar1 = (float)param_1[0x58e], param_1[0x58e] = (int)(fVar1 + (float)param_1[0x244]),
     600.0 < fVar1 + (float)param_1[0x244])) {
    param_1[0x58d] = 1;
  }
  return;
}

// 00523310  FUN_00523310  size=822  [between]
void __fastcall FUN_00523310(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_0051a3c0();
  if (((iVar2 != 0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
     (*(float *)(param_1 + 0xa90) <= 36.0)) {
    FUN_0051d620(0x5000e,0,0,0,0);
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 == 0) {
      return;
    }
    if (*(uint *)(param_1 + 0x1010) < 2) {
      return;
    }
    if (5 < *(uint *)(param_1 + 0x1010)) {
      return;
    }
    FUN_0051d620(0x50010,0,0,0,0);
    return;
  }
  if (((180.0 < *(float *)(param_1 + 0x920)) && (*(float *)(param_1 + 0xa8c) <= 49.0)) &&
     (*(float *)(param_1 + 0xaa0) < 1.5707964)) {
    FUN_0051d620(0x50009,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x940) != 0) {
    if (4.0 < *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (0.7853982 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (0.0 <= *(float *)(param_1 + 0x14a8)) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar1 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
      return;
    }
    sVar1 = FUN_00dde2d0(0,1);
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    if (sVar1 == 0) {
      sVar1 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
      sVar1 = FUN_00dde2d0(0,2);
      if (sVar1 != 1) goto LAB_005234d3;
      uVar3 = 0x50007;
    }
    else {
      FUN_0051d620(0x50006,0,0,0,0);
      sVar1 = FUN_00dde2d0(0,2);
      if ((sVar1 != 1) || (iVar2 = FUN_00ac4780(), iVar2 == 0)) goto LAB_005234d3;
      uVar3 = 0x5000f;
    }
    FUN_0051d620(uVar3,0,0,0,0);
LAB_005234d3:
    if (*(int *)(param_1 + 0x1420) == 0) {
      return;
    }
    FUN_0051d620(0x50009,0,0,0,0);
    return;
  }
  if ((16.0 < *(float *)(param_1 + 0xa8c)) || (0.7853982 <= *(float *)(param_1 + 0xaa0)))
  goto LAB_005235f3;
  if (0.0 <= *(float *)(param_1 + 0x14a8)) {
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar1 = FUN_00dde2d0(0,1);
      goto LAB_005235cb;
    }
  }
  else {
    FUN_0051d620(0x5000c,0,0,0,0);
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 == 1) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar1 = FUN_00dde2d0(0,1);
LAB_005235cb:
      FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
    }
  }
  if (*(int *)(param_1 + 0x1420) != 0) {
    FUN_0051d620(0x50009,0,0,0,0);
  }
LAB_005235f3:
  if (((*(float *)(param_1 + 0xa8c) <= 16.0) && (*(float *)(param_1 + 0xaa0) < 1.5707964)) &&
     (60.0 < *(float *)(param_1 + 0x920))) {
    FUN_0051d620(0x50007,0,0,0,0);
    return;
  }
  return;
}

// 00523650  FUN_00523650  size=1061  [between]
void __fastcall FUN_00523650(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((1 < *(uint *)(param_1 + 0x1010)) && (*(uint *)(param_1 + 0x1010) < 6)) {
    if ((*(int *)(param_1 + 0x1420) != 0) && (*(float *)(param_1 + 0xa8c) <= 144.0)) {
      FUN_0051d620(0x5000b,0,0,0,0);
      return;
    }
    if (((180.0 < *(float *)(param_1 + 0x920)) && (*(float *)(param_1 + 0xa8c) <= 49.0)) &&
       (*(float *)(param_1 + 0xaa0) < 1.5707964)) {
      FUN_0051d620(0x5000a,0,0,0,0);
    }
    if (*(int *)(param_1 + 0x940) == 0) {
      if (16.0 < *(float *)(param_1 + 0xa8c)) {
        return;
      }
      if (0.7853982 <= *(float *)(param_1 + 0xaa0)) {
        return;
      }
      if (0.0 <= *(float *)(param_1 + 0x14a8)) {
        FUN_0051d620(0x10021,0,0,0,0);
        return;
      }
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        FUN_0051d620(0x50007,0,0,0,0);
        return;
      }
      FUN_0051d620(0x10021,0,0,0,0);
      return;
    }
    if (4.0 < *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (0.7853982 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (0.0 <= *(float *)(param_1 + 0x14a8)) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar1 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar1 + 0x10023,uVar3,uVar4,uVar5,uVar6);
      return;
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      return;
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    sVar1 = FUN_00dde2d0(0,1);
    FUN_0051d620(sVar1 + 0x10023,uVar3,uVar4,uVar5,uVar6);
    return;
  }
  if (((180.0 < *(float *)(param_1 + 0x920)) && (*(float *)(param_1 + 0xa8c) <= 49.0)) &&
     (*(float *)(param_1 + 0xaa0) < 1.5707964)) {
    FUN_0051d620(0x50009,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x940) == 0) {
    if ((*(float *)(param_1 + 0xa8c) <= 16.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
      FUN_0051d620(0x5000c,0,0,0,0);
      sVar1 = FUN_00dde2d0(0,2);
      if (sVar1 == 1) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,1);
        FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
      }
      if (*(int *)(param_1 + 0x1420) != 0) {
        FUN_0051d620(0x50009,0,0,0,0);
      }
    }
    if (16.0 < *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (1.5707964 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (*(float *)(param_1 + 0x920) <= 60.0) {
      return;
    }
LAB_00523a42:
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    iVar2 = 0x50007;
  }
  else {
    if (4.0 < *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (0.7853982 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (0.0 <= *(float *)(param_1 + 0x14a8)) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar1 = FUN_00dde2d0(0,1);
      iVar2 = sVar1 + 0x1000a;
    }
    else {
      sVar1 = FUN_00dde2d0(0,1);
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      if (sVar1 == 0) {
        sVar1 = FUN_00dde2d0(0,1);
        FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
        sVar1 = FUN_00dde2d0(0,2);
        if (sVar1 != 1) goto LAB_00523a56;
        goto LAB_00523a42;
      }
      FUN_0051d620(0x50006,0,0,0,0);
      if (((*(int *)(param_1 + 0x1418) < 1) || (sVar1 = FUN_00dde2d0(0,1), sVar1 == 0)) ||
         (iVar2 = FUN_00ac4780(), iVar2 == 0)) goto LAB_00523a56;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      iVar2 = 0x5000f;
    }
  }
  FUN_0051d620(iVar2,uVar3,uVar4,uVar5,uVar6);
LAB_00523a56:
  if (*(int *)(param_1 + 0x1420) != 0) {
    FUN_0051d620(0x50009,0,0,0,0);
  }
  return;
}

// 00523A80  FUN_00523a80  size=564  [between]
void __fastcall FUN_00523a80(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xc,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    sVar3 = FUN_00dde2d0(0,1);
    param_1[0x248] = 0;
    param_1[0x250] = (int)sVar3;
    param_1[0x522] = 0x3d4ccccd;
    param_1[0x521] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (param_1[0x50a] != 0) {
      param_1[0x187] = 2;
    }
    break;
  case 2:
    FUN_00aa4080(0xd,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    sVar3 = FUN_00dde2d0(0,1);
    param_1[0x248] = 0;
    param_1[0x250] = (int)sVar3;
  case 3:
    uVar2 = 0x3f800000;
    if (param_1[0x50a] != 0) {
      uVar2 = 0x3fa66666;
    }
    FUN_00ac80a0(uVar2,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    break;
  case 4:
    FUN_00aa4080(0xe,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if ((((param_1[0x528] == 0) || (param_1[0x4c8] != 0)) ||
      (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 1.0471976 < fVar1 != (fVar1 == 1.0471976))) ||
     (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0))) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e8efa35,0);
  }
  return;
}

// 00523CD0  FUN_00523cd0  size=325  [between]
void __fastcall FUN_00523cd0(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if ((*(int *)(param_1 + 0x14a0) == 0) || (*(int *)(param_1 + 0x1320) == 0)) {
      if (9 < *(int *)(param_1 + 0x1484)) {
        *(undefined4 *)(param_1 + 0x14a0) = 1;
        FUN_0051d620(0x10009,0,0,0,0);
        sVar1 = FUN_00dde2d0(0,2);
        if ((sVar1 == 1) || (*(int *)(param_1 + 0x1320) == 0)) {
          if (*(int *)(param_1 + 0x618) == 0x1000a) {
            FUN_0051d620(0x1000b,0,0,0,0);
          }
          if (*(int *)(param_1 + 0x618) == 0x1000b) {
            FUN_0051d620(0x1000a,0,0,0,0);
          }
        }
      }
    }
    else {
      FUN_0051d620(0x10009,0,2,0,0);
      *(undefined4 *)(param_1 + 0x1488) = 0x3d4ccccd;
      *(undefined4 *)(param_1 + 0x1484) = 0;
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        iVar2 = *(int *)(param_1 + 0x1418);
        if ((iVar2 == 0) || (iVar2 == 1)) {
          FUN_0051d620(0x50009,0,0,0,0);
          return;
        }
        if (iVar2 == 2) {
          iVar2 = FUN_00518a90();
          if (iVar2 != 0) {
            FUN_0051d620(0x5000b,0,0,0,0);
            return;
          }
          FUN_0051d620(0x50009,0,0,0,0);
          return;
        }
      }
    }
  }
  return;
}

// 00523FC0  FUN_00523fc0  size=119  [between]
void __fastcall FUN_00523fc0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if ((param_1[0x187] == 3) && (iVar1 != 0)) {
      FUN_0051d620(0x10020,0,0,0,0);
    }
    if (((float)param_1[0x225] <= 0.0) && (0.0 < (float)param_1[0x24a])) {
      FUN_0051d620(0x50008,0,0,0,0);
      return;
    }
  }
  return;
}

// 00524040  FUN_00524040  size=353  [between]
void __fastcall FUN_00524040(int param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  int iVar3;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x7e;
    if (*(int *)(param_1 + 0x618) == 0x1000f) {
      uVar2 = 0x7f;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0051cc20();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      iVar3 = FUN_00a92f90();
      FUN_00e26e90();
      *(undefined4 *)(iVar3 + 0xe4) = 0;
      puVar1 = (undefined4 *)(param_1 + 0x890);
      *(undefined4 *)(iVar3 + 0xe8) = 0;
      *(undefined4 *)(iVar3 + 0xec) = 0;
      *(undefined4 *)(param_1 + 0x894) = 0x3e800000;
      *puVar1 = 0;
      *(undefined4 *)(param_1 + 0x898) = 0x3e19999a;
      D3DXVec3TransformNormal(puVar1,puVar1,param_1 + 0x10);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_1 + 0x894);
      return;
    }
  default:
    *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_1 + 0x894);
    return;
  case 2:
    FUN_00aa4080(0x80,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(param_1 + 0x894);
    return;
  }
}

// 005241C0  FUN_005241c0  size=58  [between]
void __fastcall FUN_005241c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_0051d620(0x10020,0,0,0,0);
    }
  }
  return;
}

// 005242D0  FUN_005242d0  size=650  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005242d0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  param_1[0x504] = 1;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2c,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x575] = param_1[0x575] + 1;
    FUN_00940b10();
    break;
  case 1:
  case 5:
  case 7:
    break;
  case 2:
    FUN_00aa4080(0x2d,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43eb0000;
    param_1[0x250] = 0;
    param_1[0x249] = 0x41700000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248] - _DAT_01be942c;
    param_1[0x248] = (int)fVar2;
    if (fVar2 < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar2 = (float)param_1[0x249] - _DAT_01be942c;
    param_1[0x249] = (int)fVar2;
    if (0.0 <= fVar2) {
      return;
    }
    param_1[0x249] = 0x425c0000;
    FUN_0051d700(param_1[0x250]);
    param_1[0x250] = param_1[0x250] + 1;
    return;
  case 4:
    FUN_00aa4080(0x2e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
      FUN_00a7c950();
    }
    break;
  case 6:
    FUN_00aa4080(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 8:
    FUN_00aa4080(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0051d620(0x10011,0,0,0,0);
      return;
    }
  default:
    goto switchD_005242fa_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005242fa_default:
  return;
}

// 00524590  FUN_00524590  size=110  [between]
void __fastcall FUN_00524590(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (120.0 < *(float *)(param_1 + 0x920)) {
    if (*(int *)(param_1 + 0x15f8) != 0) {
      FUN_0051d620(0x10017,0,0,0,0);
      return;
    }
    if (0 < *(int *)(param_1 + 0x1608)) goto LAB_005245f2;
    FUN_0051d620(0x10017,0,0,0,0);
  }
  if (*(int *)(param_1 + 0x1608) < 1) {
    return;
  }
LAB_005245f2:
  FUN_0051d620(0x10018,0,0,0,0);
  return;
}

// 00524600  FUN_00524600  size=221  [between]
void __fastcall FUN_00524600(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  param_1[0x504] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x33,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051d780();
    param_1[0x248] = 0;
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      iVar2 = FUN_00a7c8a0();
      *(undefined4 *)(iVar2 + 0x6ec) = 0;
    }
    FUN_00a81330();
    param_1[0x505] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005246E0  FUN_005246e0  size=554  [between]
void __fastcall FUN_005246e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  param_1[0x504] = 1;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x34,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051d750();
    param_1[0x582] = param_1[0x582] + 1;
    break;
  case 1:
  case 5:
    break;
  case 2:
    FUN_00aa4080(0x35,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43160000;
    param_1[0x250] = 0;
    param_1[0x249] = 0x41700000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      iVar2 = FUN_00a7c8a0();
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(iVar2 + 0x4e4) == 0) {
        return;
      }
    }
    param_1[0x187] = 4;
    return;
  case 4:
    FUN_00aa4080(0x36,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 6:
    param_1[0x187] = 7;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 8:
    param_1[0x187] = 9;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if ((((iVar2 != 0) && (iVar2 = FUN_0051d7d0(), iVar2 == 0)) &&
        (iVar2 = FUN_00416910(6), iVar2 == 0)) &&
       (FUN_0051d620(0x10016,0,0,0,0), param_1[0x57e] != 0)) {
      FUN_0051d620(0xb0002,0,0,0,0);
      return;
    }
  default:
    goto switchD_0052470a_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0052470a_default:
  return;
}

// 00524940  FUN_00524940  size=168  [between]
void __fastcall FUN_00524940(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x54c] != 0) && (param_1[0x54c] != 1)) {
    if (param_1[0x581] < 2) {
      FUN_0051d620(0x1001c,0,0,0,0);
      return;
    }
    FUN_0051d620(0x1001f,0,0,0,0);
    return;
  }
  iVar1 = FUN_00a8cab0();
  param_1[0x3fc] = iVar1;
  iVar1 = FUN_00a8cac0();
  param_1[0x3fd] = iVar1;
  param_1[0x3f9] = param_1[0x3f8];
  param_1[0x400] = param_1[0x400] & 0xc7ffffff;
  (**(code **)(*param_1 + 0x314))();
  FUN_00a8caf0(0x1001a,0,0,0);
  param_1[0x3f8] = 0;
  FUN_00a962d0(0,0);
  param_1[0x3fb] = 0;
  return;
}

// 00524A30  FUN_00524a30  size=199  [between]
void __fastcall FUN_00524a30(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  param_1[0x504] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x88,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      iVar2 = FUN_00a7c8a0();
      *(undefined4 *)(iVar2 + 0x6ec) = 0;
    }
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00524B90  FUN_00524b90  size=176  [between]
void __fastcall FUN_00524b90(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 == 0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xa8c);
  if (NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) {
    if ((36.0 < *(float *)(param_1 + 0xa8c)) ||
       (FUN_0051d620(0x10009,0,0,0,0), 1.5707964 <= *(float *)(param_1 + 0xaa0))) goto LAB_00524c0e;
    uVar4 = 0x50007;
  }
  else {
    uVar4 = 0x50003;
  }
  FUN_0051d620(uVar4,0,0,0,0);
LAB_00524c0e:
  if ((*(int *)(param_1 + 0x1418) == 2) && (sVar2 = FUN_00dde2d0(0,2), sVar2 != 0)) {
    FUN_0051d620(0x5000b,0,0,0,0);
  }
  return;
}

// 00524C40  FUN_00524c40  size=45  [between]
void __fastcall FUN_00524c40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      FUN_0051d620(0x10001,0,0,0,0);
    }
  }
  return;
}

// 00524C70  FUN_00524c70  size=554  [between]
void __fastcall FUN_00524c70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x49,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0051cd50(1,1,1,1);
    FUN_00a8d280();
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x4a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cd50(1,1,1,1);
    break;
  case 4:
    FUN_00aa4080(0x4b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar2 = FUN_00a92f90();
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x94) & 1) != 0)) {
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffff7;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xffffffef;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xffffffdf;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xffffffbf;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 8;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 0x10;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 0x40;
      }
    }
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_00524c8a_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00524c8a_default:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00524EC0  FUN_00524ec0  size=983  [between]
void __fastcall FUN_00524ec0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x1428) != 0) {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 != 0) {
      FUN_0051d620(0x10002,0,0,0,0);
    }
    if (*(int *)(param_1 + 0x15c4) == 0) {
      return;
    }
    FUN_0051d620(0x10002,0,0,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1418);
  if (iVar2 == 0) {
    iVar2 = FUN_00a8c760(0xf);
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x940) == 0)) && (*(int *)(param_1 + 0x15c4) != 0)) {
      sVar1 = FUN_00dde2d0(0,1);
      if ((sVar1 != 0) && (*(float *)(param_1 + 0x15fc) < 0.0)) {
        FUN_0051d620(0x50001,0,0,0,0);
      }
      sVar1 = FUN_00dde2d0(0,1);
      if ((sVar1 != 0) && (iVar2 = FUN_00ac4780(), iVar2 != 0)) {
        FUN_0051d620(0x5000f,0,0,0,0);
      }
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
    iVar2 = FUN_00a8c760(0xf);
    if ((((iVar2 == 0) || (iVar2 = FUN_0051a3c0(), iVar2 == 0)) ||
        (0.7853982 <= *(float *)(param_1 + 0xaa0))) || (36.0 < *(float *)(param_1 + 0xa90))) {
      if (*(int *)(param_1 + 0x1614) != 0) {
        return;
      }
      iVar2 = FUN_00a8c760(0xf);
      if (iVar2 == 0) {
        return;
      }
LAB_0052500b:
      FUN_0051d620(0x50001,0,0,0,0);
      return;
    }
    goto LAB_0052524f;
  }
  if (iVar2 == 1) {
    if ((1 < *(uint *)(param_1 + 0x1010)) && (*(uint *)(param_1 + 0x1010) < 6)) {
      iVar2 = FUN_00a8c760(0xf);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x940) != 0) {
        return;
      }
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_0051d620(sVar1 + 0x10022,uVar3,uVar4,uVar5,uVar6);
      }
      *(undefined4 *)(param_1 + 0x940) = 1;
      return;
    }
    iVar2 = FUN_00a8c760(0xf);
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x940) == 0)) && (*(int *)(param_1 + 0x15c4) != 0)) {
      sVar1 = FUN_00dde2d0(0,1);
      if ((sVar1 != 0) && (iVar2 = FUN_00ac4780(), iVar2 != 0)) {
        uVar3 = 0x5000f;
LAB_00525204:
        FUN_0051d620(uVar3,0,0,0,0);
      }
LAB_0052520b:
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
  }
  else {
    if (iVar2 != 2) {
      return;
    }
    if ((*(int *)(param_1 + 0x1614) == 0) && (iVar2 = FUN_00a8c760(0xf), iVar2 != 0))
    goto LAB_0052500b;
    if ((1 < *(uint *)(param_1 + 0x1010)) && (*(uint *)(param_1 + 0x1010) < 6)) {
      iVar2 = FUN_00a8c760(0xf);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x940) != 0) {
        return;
      }
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0,2);
        FUN_0051d620(sVar1 + 0x10022,uVar3,uVar4,uVar5,uVar6);
      }
      *(undefined4 *)(param_1 + 0x940) = 1;
      return;
    }
    iVar2 = FUN_00a8c760(0xf);
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x940) == 0)) && (*(int *)(param_1 + 0x15c4) != 0)) {
      sVar1 = FUN_00dde2d0(0,1);
      if (((sVar1 != 0) && (*(int *)(param_1 + 0x1630) == 0)) &&
         (iVar2 = FUN_00ac4780(), iVar2 != 0)) {
        FUN_0051d620(0x5000f,0,0,0,0);
      }
      sVar1 = FUN_00dde2d0(0,2);
      if (sVar1 != 0) {
        uVar3 = 0x50001;
        goto LAB_00525204;
      }
      goto LAB_0052520b;
    }
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_0051a3c0();
  if (iVar2 == 0) {
    return;
  }
  if (0.7853982 <= *(float *)(param_1 + 0xaa0)) {
    return;
  }
  if (36.0 < *(float *)(param_1 + 0xa90)) {
    return;
  }
LAB_0052524f:
  FUN_0051d620(0x5000e,0,0,0,0);
  sVar1 = FUN_00dde2d0(0,1);
  if ((sVar1 != 0) && (iVar2 = FUN_00518a90(), iVar2 != 0)) {
    FUN_0051d620(0x50010,0,0,0,0);
  }
  return;
}

// 005252A0  FUN_005252a0  size=986  [between]
void __fastcall FUN_005252a0(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x40,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar4 = FUN_00a92f90();
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x94) & 1) != 0)) {
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xfffffff7;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffef;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffdf;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffbf;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 8;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x10;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x20;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x40;
      }
    }
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    param_1[0x573] = 0;
    param_1[0x574] = 0;
    sVar2 = FUN_00dde2d0(0,7);
    param_1[0x253] = sVar2 + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00525573;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
    if (((uint)param_1[0x404] < 2) || (5 < (uint)param_1[0x404])) {
      if (((float)param_1[0x2a3] <= 9.0) &&
         (((float)param_1[0x2a8] < 1.0471976 && (param_1[0x58c] == 0)))) {
        FUN_0051d620(0x50007,0,0,0,0);
      }
      sVar2 = FUN_00dde2d0(0,1);
      if ((((sVar2 != 0) && ((float)param_1[0x2a3] <= 6.25)) && ((float)param_1[0x2a8] < 0.5235988))
         && ((param_1[0x58c] == 0 && (iVar4 = FUN_00ac4780(), iVar4 != 0)))) {
        uVar5 = 0x5000f;
        goto LAB_0052551d;
      }
    }
    else if ((((float)param_1[0x2a3] <= 36.0) && ((float)param_1[0x2a8] < 1.5707964)) &&
            (param_1[0x58c] == 0)) {
      uVar5 = 0x50007;
LAB_0052551d:
      FUN_0051d620(uVar5,0,0,0,0);
    }
    if (param_1[0x585] == 0) {
      FUN_0051d620(0x50001,0,0,0,0);
    }
  }
  iVar4 = FUN_00a8c760(0x33);
  if (((iVar4 != 0) && (iVar4 = FUN_00ac4780(), 2 < iVar4)) && (param_1[0x253] <= param_1[0x573])) {
    FUN_0051d620(0x5000f,0,0,0,0);
  }
LAB_00525573:
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    fVar7 = 0.0;
    fVar6 = 0.00017453292;
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35);
    iVar4 = FUN_00a12210(0xf00);
    if (iVar4 != 0) {
      D3DXVec3TransformNormal(&stack0xffffffd0,&stack0xffffffd0,iVar4 + 0x10);
      fVar6 = (*(float *)(param_1[0x2a1] + 0x40) - (fVar6 + *(float *)(iVar4 + 0x40))) * 0.05;
      fVar7 = (*(float *)(param_1[0x2a1] + 0x48) - (*(float *)(iVar4 + 0x48) + fVar7)) * 0.05;
      if (param_1[0x50a] != 0) {
        fVar6 = fVar6 * 0.2;
        fVar7 = fVar7 * 0.2;
      }
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x14] = (int)(fVar6 + (float)param_1[0x14]);
      param_1[0x16] = (int)(fVar7 + (float)param_1[0x16]);
      (*pcVar1)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 00525680  FUN_00525680  size=331  [between]
void __fastcall FUN_00525680(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1418);
  if (iVar2 == 0) {
    iVar2 = FUN_00a8c760(0xf);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x940) == 0)) {
      if ((*(float *)(param_1 + 0xa8c) <= 4.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_0051d620(0x50006,0,0,0,0);
      }
      sVar1 = FUN_00dde2d0(0,1);
      if (((sVar1 != 0) && (*(int *)(param_1 + 0x1428) == 0)) &&
         (*(float *)(param_1 + 0x15fc) < 0.0)) {
        FUN_0051d620(0x50001,0,0,0,0);
      }
      *(undefined4 *)(param_1 + 0x940) = 1;
      if (*(int *)(param_1 + 0x1614) == 0) {
        FUN_0051d620(0x50001,0,0,0,0);
        return;
      }
    }
  }
  else if ((iVar2 == 1) || (iVar2 == 2)) {
    iVar2 = FUN_00a8c760(0xf);
    if ((iVar2 != 0) && ((*(int *)(param_1 + 0x940) == 0 && (*(int *)(param_1 + 0x15c4) != 0)))) {
      if ((*(float *)(param_1 + 0xa8c) <= 6.25) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        iVar2 = FUN_00ac4780();
        if (iVar2 != 0) {
          FUN_0051d620(0x5000f,0,0,0,0);
        }
      }
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
  }
  return;
}

// 005257D0  FUN_005257d0  size=338  [between]
void __fastcall FUN_005257d0(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    return;
  }
  if (((param_1[0x50a] != 0) && (param_1[0x571] != 0)) && ((iVar3 == 0xb || (iVar3 == 0xd)))) {
    FUN_0051d620(0x10002,0,0,0,0);
  }
  iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
  iVar3 = param_1[0x187];
  if ((((iVar3 == 5) || (iVar3 == 7)) || (iVar3 == 0xd)) && (iVar2 != 0)) {
    param_1[0x187] = 8;
    if (param_1[0x50a] == 0) goto LAB_00525872;
    FUN_0051d620(0x10002,0,0,0,0);
  }
  if (param_1[0x50a] != 0) {
    return;
  }
LAB_00525872:
  iVar3 = FUN_00a8c760(0xf);
  if (((iVar3 != 0) && ((param_1[0x250] == 0 || (6 < param_1[0x572])))) && (param_1[0x571] != 0)) {
    if ((float)param_1[0x2a3] <= 12.25) {
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      param_1[0x57a] = 0;
      sVar1 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar1 + 0x1000a,uVar4,uVar5,uVar6,uVar7);
      sVar1 = FUN_00dde2d0(0,2);
      if ((sVar1 == 1) && (iVar3 = FUN_00ac4780(), iVar3 != 0)) {
        FUN_0051d620(0x5000f,0,0,0,0);
      }
    }
    param_1[0x250] = 1;
  }
  return;
}

// 00525930  FUN_00525930  size=1143  [between]
void __fastcall FUN_00525930(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uStack_10;
  
  (**(code **)(*param_1 + 0x314))();
  iVar7 = param_1[0x187];
  if (iVar7 == 0) {
    param_1[0x187] = 1;
    sVar4 = FUN_00dde2d0(0,2);
    param_1[0x251] = sVar4 + 1;
    iVar7 = FUN_00ac4780();
    if (iVar7 == 0) {
      param_1[0x251] = 1;
    }
    iVar7 = FUN_00ac4780();
    if (2 < iVar7) {
      sVar4 = FUN_00dde2d0(0,2);
      param_1[0x251] = sVar4 + 2;
    }
    if (((1 < (uint)param_1[0x404]) && ((uint)param_1[0x404] < 6)) &&
       (fVar2 = (float)param_1[0x434], param_1[0x434] = (int)(fVar2 - (float)param_1[0x515]),
       fVar2 - (float)param_1[0x515] < -1.0)) {
      param_1[0x434] = -0x40800000;
    }
LAB_005259f7:
    FUN_00aa4080(0x56,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar7 = FUN_00a92f90();
    if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x94) & 1) != 0)) {
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xfffffff7;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffef;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffdf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffbf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 8;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x10;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x20;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x40;
      }
    }
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    if ((param_1[0x2a1] != 0) && (param_1[0x1d9] != 0)) {
      uVar6 = FUN_009f8b40();
      FUN_008e26e0(uVar6);
    }
    param_1[0x250] = 0;
    param_1[0x248] = 0;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
  }
  else {
    if (iVar7 == 1) goto LAB_005259f7;
    if (iVar7 != 2) goto LAB_00525bcd;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar7 = FUN_00a94ce0(0);
  if (iVar7 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
    FUN_0051cc20();
  }
  iVar7 = FUN_00a8c760(0xf);
  if ((iVar7 != 0) && (param_1[0x251] != 0)) {
    param_1[0x251] = param_1[0x251] + -1;
    pcVar3 = *(code **)(*param_1 + 0x308);
    param_1[0x187] = 1;
    (*pcVar3)(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
LAB_00525bcd:
  iVar7 = FUN_00a8c760(10);
  if (iVar7 != 0) {
    FUN_00a8de10((float)param_1[0x248] * (float)param_1[0x244],param_1[0x25],0);
    uStack_10 = 0x3e8efa35;
    iVar7 = FUN_00ac4780();
    if (iVar7 < 3) {
      uVar6 = 0x3dd67750;
      fVar2 = 0.06;
      fVar1 = 0.6;
    }
    else {
      uStack_10 = 0x3eb2b8c2;
      uVar6 = 0x3e0efa35;
      fVar2 = 0.08;
      fVar1 = 0.8;
    }
    fVar2 = fVar2 * (float)param_1[0x244] + (float)param_1[0x248];
    param_1[0x248] = (int)fVar2;
    if (fVar1 <= fVar2) {
      param_1[0x248] = (int)fVar1;
    }
    if ((param_1[0x570] == 0) && (param_1[0x571] == 0)) {
      fVar2 = (float)param_1[0x2a4];
      if (((!NAN(fVar2) && 9.0 < fVar2 != (fVar2 == 9.0)) && ((float)param_1[0x2a8] < 1.0471976)) &&
         ((**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,uVar6,0), param_1[0x508] != 0)) {
        (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,uStack_10,0);
      }
    }
    else {
      fVar8 = (float10)FUN_00fdc1f0();
      param_1[0x248] = (int)(float)(fVar8 * (float10)(float)param_1[0x248]);
    }
  }
  iVar7 = FUN_00a8c760(0);
  if (iVar7 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,0x3f0efa35,0);
  }
  return;
}

// 00525DB0  FUN_00525db0  size=548  [between]
void __fastcall FUN_00525db0(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1428) != 0) {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 != 0) {
      FUN_0051d620(0x10002,0,0,0,0);
    }
    if (*(int *)(param_1 + 0x15c4) == 0) {
      return;
    }
    FUN_0051d620(0x10002,0,0,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1418);
  if (iVar2 == 0) {
    iVar2 = FUN_00a8c760(10);
    if ((iVar2 != 0) && ((*(int *)(param_1 + 0x15c0) != 0 || (*(int *)(param_1 + 0x15c4) != 0)))) {
LAB_00525e29:
      FUN_0051d620(0x5000d,0,0,0,0);
      return;
    }
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x940) != 0) {
      return;
    }
    if ((*(float *)(param_1 + 0xa8c) <= 4.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
      FUN_0051d620(0x50006,0,0,0,0);
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (((sVar1 != 0) && (*(int *)(param_1 + 0x1428) == 0)) && (*(float *)(param_1 + 0x15fc) < 0.0))
    {
      FUN_0051d620(0x50001,0,0,0,0);
      *(undefined4 *)(param_1 + 0x940) = 1;
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      iVar2 = FUN_00a8c760(0xf);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x940) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x15c4) == 0) {
        return;
      }
      FUN_00dde2d0(0,1);
      *(undefined4 *)(param_1 + 0x940) = 1;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
    iVar2 = FUN_00a8c760(10);
    if ((iVar2 != 0) && ((*(int *)(param_1 + 0x15c0) != 0 || (*(int *)(param_1 + 0x15c4) != 0))))
    goto LAB_00525e29;
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x940) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x15c4) == 0) {
      return;
    }
    if (((*(float *)(param_1 + 0xa8c) <= 6.25) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) &&
       (iVar2 = FUN_00ac4780(), iVar2 != 0)) {
      FUN_0051d620(0x5000f,0,0,0,0);
    }
  }
  *(undefined4 *)(param_1 + 0x940) = 1;
  return;
}

// 00525FE0  FUN_00525fe0  size=630  [between]
void __fastcall FUN_00525fe0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x42,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar3 = FUN_00a92f90();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x94) & 1) != 0)) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffef;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffdf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffbf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x10;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x20;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x40;
      }
    }
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x250] = 0;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00526150;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
  }
LAB_00526150:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    fVar5 = 0.0;
    fVar4 = 0.00017453292;
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35);
    iVar3 = FUN_00a12210(0xf00);
    if (iVar3 != 0) {
      D3DXVec3TransformNormal(&stack0xffffffd0,&stack0xffffffd0,iVar3 + 0x10);
      fVar4 = *(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar3 + 0x40) + fVar4);
      fVar5 = *(float *)(param_1[0x2a1] + 0x48) - (*(float *)(iVar3 + 0x48) + fVar5);
      if (param_1[0x50a] == 0) {
        fVar4 = fVar4 * 0.1;
        fVar5 = fVar5 * 0.1;
      }
      else {
        fVar4 = fVar4 * 0.3;
        fVar5 = fVar5 * 0.3;
      }
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x14] = (int)((float)param_1[0x14] + fVar4);
      param_1[0x16] = (int)(fVar5 + (float)param_1[0x16]);
      (*pcVar1)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 00526260  FUN_00526260  size=503  [between]
void __fastcall FUN_00526260(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1428) != 0) {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 != 0) {
      FUN_0051d620(0x10002,0,0,0,0);
    }
    if (*(int *)(param_1 + 0x15c4) == 0) {
      return;
    }
    FUN_0051d620(0x10002,0,0,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1418);
  if (iVar2 == 0) {
    iVar2 = FUN_00a8c760(0xf);
    if ((iVar2 == 0) || (*(int *)(param_1 + 0x940) != 0)) goto LAB_005263d1;
    if ((((*(float *)(param_1 + 0xa8c) <= 4.0) &&
         ((*(float *)(param_1 + 0xaa0) < 0.7853982 &&
          (FUN_0051d620(0x50006,0,0,0,0), 0 < *(int *)(param_1 + 0x1418))))) &&
        (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) && (iVar2 = FUN_00ac4780(), iVar2 != 0)) {
      FUN_0051d620(0x5000f,0,0,0,0);
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (((sVar1 != 0) && (*(int *)(param_1 + 0x1428) == 0)) && (*(float *)(param_1 + 0x15fc) < 0.0))
    {
      FUN_0051d620(0x50001,0,0,0,0);
    }
  }
  else {
    if ((iVar2 != 1) && (iVar2 != 2)) {
      return;
    }
    iVar2 = FUN_00a8c760(0xf);
    if (((iVar2 == 0) || (*(int *)(param_1 + 0x940) != 0)) || (*(int *)(param_1 + 0x15c4) == 0))
    goto LAB_005263d1;
    FUN_00dde2d0(0,1);
  }
  *(undefined4 *)(param_1 + 0x940) = 1;
LAB_005263d1:
  iVar2 = FUN_00a8c760(0xf);
  if (((iVar2 != 0) && (iVar2 = FUN_0051a3c0(), iVar2 != 0)) &&
     ((*(float *)(param_1 + 0xaa0) < 0.7853982 && (*(float *)(param_1 + 0xa90) <= 36.0)))) {
    FUN_0051d620(0x5000e,0,0,0,0);
    sVar1 = FUN_00dde2d0(0,1);
    if ((sVar1 != 0) && (iVar2 = FUN_00518a90(), iVar2 != 0)) {
      FUN_0051d620(0x50010,0,0,0,0);
    }
  }
  return;
}

// 00526460  FUN_00526460  size=701  [between]
void __fastcall FUN_00526460(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x46,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar6 = FUN_00a92f90();
    if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x94) & 1) != 0)) {
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) & 0xfffffff7;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) & 0xffffffef;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) & 0xffffffdf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) & 0xffffffbf;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) | 8;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) | 0x10;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) | 0x20;
      }
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) | 0x40;
      }
    }
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x250] = 0;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    param_1[0x573] = 0;
    param_1[0x574] = 0;
    sVar4 = FUN_00dde2d0(0,4);
    param_1[0x253] = sVar4 + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00526626;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
  }
  iVar6 = FUN_00a8c760(0x33);
  if (((iVar6 != 0) && (iVar6 = FUN_00ac4780(), 2 < iVar6)) && (param_1[0x253] <= param_1[0x573])) {
    FUN_0051d620(0x5000f,0,0,0,0);
  }
LAB_00526626:
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    fVar8 = 0.0;
    fVar7 = 0.00017453292;
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35);
    iVar6 = FUN_00a12210(0xf00);
    if (iVar6 != 0) {
      D3DXVec3TransformNormal(&stack0xffffffd0,&stack0xffffffd0,iVar6 + 0x10);
      fVar1 = *(float *)(iVar6 + 0x48);
      fVar2 = *(float *)(param_1[0x2a1] + 0x48);
      pcVar3 = *(code **)(*param_1 + 0x308);
      param_1[0x14] =
           (int)((float)param_1[0x14] +
                (*(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar6 + 0x40) + fVar7)) * 0.05);
      param_1[0x16] = (int)((fVar2 - (fVar1 + fVar8)) * 0.05 + (float)param_1[0x16]);
      (*pcVar3)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 00526720  FUN_00526720  size=547  [between]
void __fastcall FUN_00526720(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1428) != 0) {
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 != 0) {
      FUN_0051d620(0x10002,0,0,0,0);
    }
    if (*(int *)(param_1 + 0x15c4) == 0) {
      return;
    }
    FUN_0051d620(0x10002,0,0,0,0);
    return;
  }
  iVar3 = FUN_00a8c760(0x31);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x15c0) != 0)) {
    FUN_0051d620(0x50011,0,0,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x1418);
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0xf);
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x940) == 0)) {
      if ((*(float *)(param_1 + 0xa8c) <= 4.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_0051d620(0x50006,0,0,0,0);
      }
      sVar2 = FUN_00dde2d0(0,1);
      if (((sVar2 != 0) && (*(int *)(param_1 + 0x1428) == 0)) &&
         (*(float *)(param_1 + 0x15fc) < 0.0)) {
        FUN_0051d620(0x50001,0,0,0,0);
      }
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x15c0) == 0) {
      return;
    }
  }
  else {
    if ((iVar3 != 1) && (iVar3 != 2)) {
      return;
    }
    iVar3 = FUN_00a8c760(0xf);
    if (((iVar3 != 0) && (*(int *)(param_1 + 0x940) == 0)) && (*(int *)(param_1 + 0x15c4) != 0)) {
      FUN_00dde2d0(0,1);
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
    iVar3 = FUN_00a8c760(0xf);
    if (((iVar3 != 0) && (*(int *)(param_1 + 0x15c0) != 0)) &&
       ((iVar3 = FUN_00518a90(), iVar3 != 0 &&
        ((fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44),
         fVar1 < 5.0 != (fVar1 == 5.0) && (*(float *)(*(int *)(param_1 + 0xa84) + 0x894) <= 0.0)))))
       ) {
      FUN_0051d620(0x50010,0,0,0,0);
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x15c0) == 0) {
      return;
    }
    iVar3 = FUN_00518a90();
    if (iVar3 != 0) {
      return;
    }
  }
  FUN_0051d620(0x50009,0,0,0,0);
  return;
}

// 00526950  FUN_00526950  size=729  [between]
void __fastcall FUN_00526950(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float unaff_ESI;
  float10 fVar4;
  float fStack_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  float fStack_24;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x44,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar3 = FUN_00a92f90();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x94) & 1) != 0)) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffef;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffdf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffbf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x10;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x20;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x40;
      }
    }
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    param_1[0x573] = 0;
    param_1[0x574] = 0;
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x253] = sVar1 + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00526b1c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
  }
  iVar3 = FUN_00a8c760(0x33);
  if (((iVar3 != 0) && (iVar3 = FUN_00ac4780(), 2 < iVar3)) && (param_1[0x253] <= param_1[0x573])) {
    FUN_0051d620(0x5000f,0,0,0,0);
  }
LAB_00526b1c:
  iVar3 = FUN_00a8c760(0);
  if ((iVar3 != 0) && (iVar3 = FUN_00a12210(0xf00), iVar3 != 0)) {
    local_30 = 0;
    local_2c = 0.0;
    local_28 = 0;
    D3DXVec3TransformNormal(&local_30,&local_30,iVar3 + 0x10);
    local_2c = *(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar3 + 0x40) + unaff_ESI);
    fStack_24 = *(float *)(param_1[0x2a1] + 0x48) - (*(float *)(iVar3 + 0x48) + fStack_34);
    if (param_1[0x251] == 0) {
      local_2c = local_2c * 0.05;
      fStack_24 = fStack_24 * 0.05;
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
    }
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x248] = (int)(float)fVar4;
    param_1[0x14] = (int)(local_2c + (float)param_1[0x14]);
    param_1[0x16] = (int)(fStack_24 + (float)param_1[0x16]);
  }
  return;
}

// 00526C30  FUN_00526c30  size=547  [between]
void __fastcall FUN_00526c30(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1428) != 0) {
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 != 0) {
      FUN_0051d620(0x10002,0,0,0,0);
    }
    if (*(int *)(param_1 + 0x15c4) == 0) {
      return;
    }
    FUN_0051d620(0x10002,0,0,0,0);
    return;
  }
  iVar3 = FUN_00a8c760(0x31);
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x15c0) != 0)) {
    FUN_0051d620(0x50011,0,0,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x1418);
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0xf);
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x940) == 0)) {
      if ((*(float *)(param_1 + 0xa8c) <= 4.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
        FUN_0051d620(0x50006,0,0,0,0);
      }
      sVar2 = FUN_00dde2d0(0,1);
      if (((sVar2 != 0) && (*(int *)(param_1 + 0x1428) == 0)) &&
         (*(float *)(param_1 + 0x15fc) < 0.0)) {
        FUN_0051d620(0x50001,0,0,0,0);
      }
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x15c0) == 0) {
      return;
    }
  }
  else {
    if ((iVar3 != 1) && (iVar3 != 2)) {
      return;
    }
    iVar3 = FUN_00a8c760(0xf);
    if (((iVar3 != 0) && (*(int *)(param_1 + 0x940) == 0)) && (*(int *)(param_1 + 0x15c4) != 0)) {
      FUN_00dde2d0(0,1);
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
    iVar3 = FUN_00a8c760(0xf);
    if (((iVar3 != 0) && (*(int *)(param_1 + 0x15c0) != 0)) &&
       ((iVar3 = FUN_00518a90(), iVar3 != 0 &&
        ((fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44),
         fVar1 < 5.0 != (fVar1 == 5.0) && (*(float *)(*(int *)(param_1 + 0xa84) + 0x894) <= 0.0)))))
       ) {
      FUN_0051d620(0x50010,0,0,0,0);
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x15c0) == 0) {
      return;
    }
    iVar3 = FUN_00518a90();
    if (iVar3 != 0) {
      return;
    }
  }
  FUN_0051d620(0x50009,0,0,0,0);
  return;
}

// 00526E60  FUN_00526e60  size=989  [between]
void __fastcall FUN_00526e60(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fStack_34;
  float fStack_2c;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x45,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar4 = FUN_00a92f90();
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x94) & 1) != 0)) {
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xfffffff7;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffef;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffdf;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffbf;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 8;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x10;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x20;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x40;
      }
    }
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    param_1[0x573] = 0;
    sVar2 = FUN_00dde2d0(0,1);
    param_1[0x574] = param_1[0x574] + 1;
    param_1[0x253] = sVar2 + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0052704d;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
    param_1[0x574] = 0;
  }
  iVar4 = FUN_00a8c760(0x33);
  if ((iVar4 != 0) && (iVar4 = FUN_00ac4780(), 2 < iVar4)) {
    iVar4 = 1;
    if (param_1[0x506] == 2) {
      iVar4 = 2;
    }
    if ((param_1[0x253] <= param_1[0x573]) && (param_1[0x574] <= iVar4)) {
      FUN_0051d620(0x5000f,0,0,0,0);
    }
  }
LAB_0052704d:
  iVar4 = FUN_00a8c760(0);
  if ((iVar4 != 0) && (iVar4 = FUN_00a12210(0xf00), iVar4 != 0)) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    D3DXVec3TransformNormal(&local_20,&local_20,iVar4 + 0x10);
    fVar6 = *(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar4 + 0x40) + fStack_2c);
    fStack_34 = *(float *)(param_1[0x2a1] + 0x48) - (*(float *)(iVar4 + 0x48) + fStack_24);
    iVar4 = FUN_00a8c760(10);
    if ((iVar4 == 0) || (iVar4 = FUN_0051a3c0(), iVar4 != 0)) {
      if (param_1[0x251] == 0) {
        fVar6 = fVar6 * 0.05;
        fStack_34 = fStack_34 * 0.05;
        (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
      }
      fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
      param_1[0x248] = (int)(float)fVar5;
    }
    else {
      fVar1 = fVar6 * fVar6 + fStack_34 * fStack_34;
      if (fVar1 < 2.25 == (fVar1 == 2.25)) {
        if (param_1[0x251] == 0) {
          fVar6 = fVar6 * 0.05;
          fStack_34 = fStack_34 * 0.05;
          (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
        }
      }
      else {
        fVar6 = fVar6 * 0.94;
        fStack_34 = fStack_34 * 0.94;
        fVar5 = (float10)FUN_00ddba30((float)param_1[0x248] - (float)param_1[0x25]);
        fVar5 = (float10)FUN_00ddba30((float)(fVar5 * (float10)0.07 + (float10)(float)param_1[0x25])
                                     );
        param_1[0x25] = (int)(float)fVar5;
        param_1[0x251] = 1;
      }
    }
    param_1[0x14] = (int)(fVar6 + (float)param_1[0x14]);
    param_1[0x16] = (int)(fStack_34 + (float)param_1[0x16]);
  }
  return;
}

// 00527240  FUN_00527240  size=423  [between]
void __fastcall FUN_00527240(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x1428) != 0) {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 != 0) {
      FUN_0051d620(0x10002,0,0,0,0);
    }
    if (*(int *)(param_1 + 0x15c4) == 0) {
      return;
    }
    FUN_0051d620(0x10002,0,0,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1418);
  if (iVar2 == 0) {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x940) != 0) {
      return;
    }
    if ((*(float *)(param_1 + 0xa8c) <= 4.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
      FUN_0051d620(0x50006,0,0,0,0);
    }
    uVar3 = 1;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = FUN_00a8c760(0xf);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x940) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x15c4) == 0) {
        return;
      }
      FUN_00dde2d0(0,1);
      *(undefined4 *)(param_1 + 0x940) = 1;
      return;
    }
    if (iVar2 != 2) {
      return;
    }
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x940) != 0) {
      return;
    }
    if ((*(float *)(param_1 + 0xa8c) <= 4.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
      FUN_0051d620(0x50006,0,0,0,0);
    }
    uVar3 = 2;
  }
  sVar1 = FUN_00dde2d0(0,uVar3);
  if (((sVar1 != 0) && (*(int *)(param_1 + 0x1428) == 0)) && (*(float *)(param_1 + 0x15fc) < 0.0)) {
    FUN_0051d620(0x50001,0,0,0,0);
  }
  *(undefined4 *)(param_1 + 0x940) = 1;
  return;
}

// 005273F0  FUN_005273f0  size=585  [between]
void __fastcall FUN_005273f0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float unaff_ESI;
  float fStack_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  float fStack_24;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x5b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar4 = FUN_00a92f90();
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x94) & 1) != 0)) {
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xfffffff7;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffef;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffdf;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffbf;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 8;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x10;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x20;
      }
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x40;
      }
    }
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00527566;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
  }
LAB_00527566:
  iVar4 = FUN_00a8c760(0);
  if ((iVar4 != 0) && (iVar4 = FUN_00a12210(0xf00), iVar4 != 0)) {
    local_30 = 0;
    local_2c = 0.0;
    local_28 = 0;
    D3DXVec3TransformNormal(&local_30,&local_30,iVar4 + 0x10);
    fVar1 = *(float *)(iVar4 + 0x40) + unaff_ESI;
    fVar2 = *(float *)(iVar4 + 0x48) + fStack_34;
    local_2c = (*(float *)(param_1[0x2a1] + 0x40) - fVar1) * 0.05;
    fStack_24 = (*(float *)(param_1[0x2a1] + 0x48) - fVar2) * 0.05;
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    param_1[0x14] = (int)((float)param_1[0x14] + fVar1);
    param_1[0x16] = (int)((float)param_1[0x16] + fVar2);
  }
  return;
}

// 00527640  FUN_00527640  size=1045  [between]
void __fastcall FUN_00527640(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float unaff_ESI;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x5d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0051cd50(1,1,1,1);
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x5e,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cd50(1,1,1,1);
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x248] = 0x42b40000;
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    param_1[0x249] = 0x3e4ccccd;
    goto LAB_005277c0;
  case 3:
LAB_005277c0:
    (**(code **)(*param_1 + 0x318))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x15] = (int)((float)param_1[0x249] * (float)param_1[0x244] + (float)param_1[0x15]);
    fVar1 = (float)param_1[0x244] * 0.05 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (0.5 < fVar1) {
      param_1[0x249] = 0x3f000000;
    }
    if ((param_1[0x570] != 0) || (param_1[0x571] != 0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x41200000;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      (**(code **)(*param_1 + 0x314))();
      FUN_0051d620(0x1000d,0,0,0,0);
      param_1[0x52a] = 0x42700000;
    }
    goto switchD_00527666_default;
  case 4:
    param_1[0x187] = 5;
    param_1[0x248] = 0x41700000;
    goto LAB_005278b0;
  case 5:
LAB_005278b0:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_0051d620(0x50012,0,0,0,0);
    }
    if ((param_1[0x2a1] != 0) && (*(float *)(param_1[0x2a1] + 0x44) + 0.5 < (float)param_1[0x11])) {
      FUN_0051d620(0x50012,0,0,0,0);
    }
    iVar3 = param_1[0x2a1];
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x890) = *(float *)(iVar3 + 0x890) * 0.1;
      *(float *)(param_1[0x2a1] + 0x894) = *(float *)(param_1[0x2a1] + 0x894) * 0.1;
      *(float *)(param_1[0x2a1] + 0x898) = *(float *)(param_1[0x2a1] + 0x898) * 0.1;
    }
    (**(code **)(*param_1 + 0x318))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x15] = (int)((float)param_1[0x249] * (float)param_1[0x244] + (float)param_1[0x15]);
    fVar1 = (float)param_1[0x244] * 0.1 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (0.6 < fVar1) {
      param_1[0x249] = 0x3f19999a;
    }
  default:
    goto switchD_00527666_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
switchD_00527666_default:
  iVar3 = FUN_00a8c760(0);
  if ((((iVar3 != 0) && (param_1[0x570] == 0)) && (param_1[0x571] == 0)) &&
     (iVar3 = FUN_00a12210(0xf00), iVar3 != 0)) {
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    D3DXVec3TransformNormal(&uStack_20,&uStack_20,iVar3 + 0x10);
    fVar1 = *(float *)(iVar3 + 0x48);
    fVar2 = *(float *)(param_1[0x2a1] + 0x48);
    param_1[0x14] =
         (int)((float)param_1[0x14] +
              (*(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar3 + 0x40) + unaff_ESI)) * 0.2);
    param_1[0x16] = (int)((fVar2 - (fVar1 + fStack_24)) * 0.2 + (float)param_1[0x16]);
  }
  return;
}

// 00527DC0  FUN_00527dc0  size=589  [between]
void __fastcall FUN_00527dc0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x143c) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    sVar1 = FUN_00dde2d0(0,1);
    FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 == 1) {
      FUN_0051d620(0x50009,0,0,0,0);
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (((sVar1 == 1) && (*(float *)(param_1 + 0xaa0) <= 1.5707964)) &&
       (iVar2 = FUN_00ac4780(), iVar2 != 0)) {
      FUN_0051d620(0x5000f,0,0,0,0);
    }
    sVar1 = FUN_00dde2d0(0,2);
    if ((sVar1 == 1) && (*(float *)(param_1 + 0xaa0) <= 1.0471976)) {
      FUN_0051d620(0x5000e,0,0,0,0);
    }
    sVar1 = FUN_00dde2d0(0,1);
    if ((sVar1 == 1) && (*(float *)(param_1 + 0xaa0) <= 1.5707964)) {
      FUN_0051d620(0x50006,0,0,0,0);
    }
    *(undefined4 *)(param_1 + 0x15e8) = 0;
    *(undefined4 *)(param_1 + 0x1434) = 0;
    *(undefined4 *)(param_1 + 0x1438) = 0;
    *(undefined4 *)(param_1 + 0x143c) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x1418) == 0) {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x940) != 0) {
      return;
    }
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 == 1) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar1 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
    }
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 1) goto LAB_00527fc6;
  }
  else {
    if (*(int *)(param_1 + 0x1418) != 2) {
      return;
    }
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x940) != 0) {
      return;
    }
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 == 1) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar1 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
    }
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 == 0) goto LAB_00527fc6;
  }
  FUN_0051d620(0x50009,0,0,0,0);
LAB_00527fc6:
  sVar1 = FUN_00dde2d0(0,2);
  if (((sVar1 == 1) && (*(int *)(param_1 + 0x1428) == 0)) && (*(float *)(param_1 + 0x15fc) < 0.0)) {
    FUN_0051d620(0x50001,0,0,0,0);
  }
  *(undefined4 *)(param_1 + 0x940) = 1;
  return;
}

// 00528010  FUN_00528010  size=452  [between]
void __fastcall FUN_00528010(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xa5,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar2 = FUN_00a92f90();
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x94) & 1) != 0)) {
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffff7;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xffffffef;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xffffffdf;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xffffffbf;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 8;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 0x10;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 0x20;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 0x40;
      }
    }
    param_1[0x576] = param_1[0x576] + 1;
    param_1[0x577] = 0x43960000;
    param_1[0x250] = 0;
    param_1[0x57a] = 0;
    FUN_00eaa6e0(0x3f800000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00528193;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
  }
LAB_00528193:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 005281E0  FUN_005281e0  size=538  [between]
void __fastcall FUN_005281e0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x143c) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    sVar1 = FUN_00dde2d0(0,1);
    FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 == 1) {
      FUN_0051d620(0x50009,0,0,0,0);
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (((sVar1 == 1) && (*(float *)(param_1 + 0xaa0) <= 1.5707964)) &&
       (iVar2 = FUN_00ac4780(), iVar2 != 0)) {
      FUN_0051d620(0x5000f,0,0,0,0);
    }
    sVar1 = FUN_00dde2d0(0,2);
    if ((sVar1 == 1) && (*(float *)(param_1 + 0xaa0) <= 1.0471976)) {
      FUN_0051d620(0x5000e,0,0,0,0);
    }
    sVar1 = FUN_00dde2d0(0,1);
    if ((sVar1 == 1) && (*(float *)(param_1 + 0xaa0) <= 1.5707964)) {
      FUN_0051d620(0x50006,0,0,0,0);
    }
    *(undefined4 *)(param_1 + 0x15e8) = 0;
    *(undefined4 *)(param_1 + 0x1434) = 0;
    *(undefined4 *)(param_1 + 0x1438) = 0;
    *(undefined4 *)(param_1 + 0x143c) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x1418) == 0) {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x940) != 0) {
      return;
    }
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 1) goto LAB_005283b3;
    uVar3 = 0x50009;
  }
  else {
    if (*(int *)(param_1 + 0x1418) != 2) {
      return;
    }
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x940) != 0) {
      return;
    }
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 == 0) goto LAB_005283b3;
    iVar2 = FUN_00ac4780();
    if (iVar2 != 0) {
      FUN_0051d620(0x5000f,0,0,0,0);
    }
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 1) goto LAB_005283b3;
    uVar3 = 0x5000e;
  }
  FUN_0051d620(uVar3,0,0,0,0);
LAB_005283b3:
  sVar1 = FUN_00dde2d0(0,2);
  if (((sVar1 == 1) && (*(int *)(param_1 + 0x1428) == 0)) && (*(float *)(param_1 + 0x15fc) < 0.0)) {
    FUN_0051d620(0x50001,0,0,0,0);
  }
  *(undefined4 *)(param_1 + 0x940) = 1;
  return;
}

// 00528600  FUN_00528600  size=494  [between]
void __fastcall FUN_00528600(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00a94bc0(1,0);
    FUN_00a94bc0(2,0);
    FUN_00aa4080(0xb1,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar2 = FUN_00a92f90();
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x94) & 1) != 0)) {
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffff7;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xffffffef;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xffffffdf;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xffffffbf;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 8;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 0x10;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 0x20;
      }
      iVar1 = FUN_00e26e90();
      if (iVar1 != 0) {
        *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) | 0x40;
      }
    }
    param_1[0x250] = 0;
    iVar2 = FUN_0051d990();
    param_1[0x251] = iVar2;
    FUN_00eaa6e0(0x3f800000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_005287ad;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
    if (param_1[0x251] == 2) {
      FUN_0051d620(0x10019,0,0,0,0);
    }
  }
LAB_005287ad:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 005287F0  FUN_005287f0  size=646  [between]
void __fastcall FUN_005287f0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  if (param_1[0x187] == 0) {
    FUN_00a94bc0(1,0);
    uVar4 = 0xa9;
    if ((float)param_1[0x57d] * (float)param_1[0x57d] < 2.4674013) {
      uVar4 = 0xaa;
    }
    FUN_00aa4080(uVar4,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar3 = FUN_00a92f90();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x94) & 1) != 0)) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffef;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffdf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffbf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x10;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x20;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x40;
      }
    }
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x250] = 0;
    (*pcVar1)(0x3e99999a,0x393702d3,0x3f860a92,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00eaa6e0(0x3f800000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00528a35;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x186] == 0x60006) && (iVar3 = FUN_00a8c760(0x31), iVar3 != 0)) {
    FUN_0051d620(0xb0001,0,0,0,0);
  }
  if ((param_1[0x186] == 0x60007) && (iVar3 = FUN_00a8c760(0x31), iVar3 != 0)) {
    FUN_0051d620(0x10010,0,0,0,0);
  }
  if ((param_1[0x186] == 0x60008) && (iVar3 = FUN_00a8c760(0x31), iVar3 != 0)) {
    FUN_0051d620(0x10019,0,0,0,0);
  }
  FUN_00a94ce0(0);
LAB_00528a35:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00528A80  FUN_00528a80  size=646  [between]
void __fastcall FUN_00528a80(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  if (param_1[0x187] == 0) {
    FUN_00a94bc0(1,0);
    uVar4 = 0xa9;
    if ((float)param_1[0x57d] * (float)param_1[0x57d] < 2.4674013) {
      uVar4 = 0xaa;
    }
    FUN_00aa4080(uVar4,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar3 = FUN_00a92f90();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x94) & 1) != 0)) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffef;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffdf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xffffffbf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x10;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x20;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 0x40;
      }
    }
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x250] = 0;
    (*pcVar1)(0x3e99999a,0x393702d3,0x3f860a92,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00eaa6e0(0x3f800000,0);
  }
  else if (param_1[0x187] != 1) goto LAB_00528cc5;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x186] == 0x60006) && (iVar3 = FUN_00a8c760(0x31), iVar3 != 0)) {
    FUN_0051d620(0xb0001,0,0,0,0);
  }
  if ((param_1[0x186] == 0x60007) && (iVar3 = FUN_00a8c760(0x31), iVar3 != 0)) {
    FUN_0051d620(0x10010,0,0,0,0);
  }
  if ((param_1[0x186] == 0x60008) && (iVar3 = FUN_00a8c760(0x31), iVar3 != 0)) {
    FUN_0051d620(0x10019,0,0,0,0);
  }
  FUN_00a94ce0(0);
LAB_00528cc5:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00528D10  FUN_00528d10  size=613  [between]
void __fastcall FUN_00528d10(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  param_1[0x4c6] = 0x42f00000;
  pcVar1 = *(code **)(*param_1 + 0x318);
  param_1[0x4c5] = 5;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x3a,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      *(undefined4 *)(iVar4 + 0x6ec) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar4 = FUN_00a92f90();
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x94) & 1) != 0)) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xfffffff7;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffef;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffdf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xffffffbf;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 8;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x10;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x20;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 0x40;
      }
    }
    uVar5 = 0xf5011;
    param_1[0x250] = 0;
    uVar3 = FUN_00e03ea0("throw_obj",0xf5011);
    iVar4 = FUN_00a18d70(uVar3,uVar5);
    if (iVar4 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a81330();
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        iVar4 = FUN_00a81330();
        if (iVar4 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
        }
        FUN_00a9e290(&DAT_01640e18,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
    }
    uVar3 = FUN_00e678d0(2,0xc005,0xffffffff);
    FUN_00e80d00(uVar3);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00d5ea40("P380_FINISH_QTE",1,0);
  }
  return;
}

// 00528F80  Em01a0::vf34C  size=141  [class]
void __fastcall Em01a0::vf34C(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  param_1[0x3fc] = iVar1;
  iVar1 = FUN_00a8cac0();
  param_1[0x3fd] = iVar1;
  param_1[0x3f9] = param_1[0x3f8];
  param_1[0x400] = param_1[0x400] & 0xc7ffffff;
  (**(code **)(*param_1 + 0x314))();
  FUN_00a8caf0(0x10000,0,0,0);
  param_1[0x3f8] = 0;
  FUN_00a962d0(0,0);
  param_1[0x3fb] = 0;
  if (param_1[0x58c] != 0) {
    FUN_0051d620(0x10003,0,0,0,0);
  }
  return;
}

// 00529010  Em01a0::vf19C  size=179  [class]
void __thiscall Em01a0::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 005290D0  Em01a0::vf1A4  size=158  [class]
void __thiscall Em01a0::vf1A4(int param_1,undefined4 param_2,byte param_3)

{
  undefined4 uVar1;
  
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x15c0) = 1;
    *(undefined4 *)(param_1 + 0x14a0) = 0;
  }
  if ((param_3 & 0xe) != 0) {
    *(int *)(param_1 + 0x15cc) = *(int *)(param_1 + 0x15cc) + 1;
    *(undefined4 *)(param_1 + 0x15c4) = 1;
    *(undefined4 *)(param_1 + 0x14a0) = 0;
  }
  if ((param_3 & 4) != 0) {
    *(undefined4 *)(param_1 + 0x14a0) = 0;
    if ((*(uint *)(param_1 + 0x1010) < 2) || (5 < *(uint *)(param_1 + 0x1010))) {
      uVar1 = 0x60005;
    }
    else {
      uVar1 = 0x60000;
    }
    FUN_0051d620(uVar1,0,0,0,0);
    if (*(int *)(param_1 + 0x1428) != 0) {
      FUN_0051d620(0x10002,0,0,0,0);
    }
  }
  return;
}

// 00529170  FUN_00529170  size=397  [between]
void __thiscall FUN_00529170(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined2 uStack_31c;
  undefined4 uStack_318;
  uint uStack_2a0;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1cc;
  
  iVar1 = FUN_00a12210(9);
  if (param_2 == 2) {
    iVar1 = FUN_00a12210(0xd);
  }
  local_340 = param_3;
  local_33c = *(undefined4 *)(param_1 + 0x94);
  local_338 = 0;
  local_350 = *(undefined4 *)(iVar1 + 0x40);
  local_34c = *(undefined4 *)(iVar1 + 0x44);
  local_348 = *(undefined4 *)(iVar1 + 0x48);
  local_344 = *(undefined4 *)(iVar1 + 0x4c);
  local_360 = 0;
  local_35c = 0;
  local_358 = 0x41700000;
  D3DXVec3TransformNormal(&local_360,&local_360,param_1 + 0x10);
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  uStack_228 = 0x17;
  local_338 = 0x31031;
  uStack_22c = 0x52;
  if ((param_2 == 1) || (param_2 == 2)) {
    uStack_22c = 0x71;
  }
  uStack_1cc = FUN_009f8b40();
  uStack_318 = *(undefined4 *)(param_1 + 0x4f0);
  uStack_2a0 = uStack_2a0 | 0x20;
  uStack_328 = 0;
  uStack_320 = 0x1e;
  uStack_324 = 0x96;
  uStack_31c = 0xa00;
  uStack_32c = 0x57;
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  FUN_00416e30(&local_35c,&stack0xfffffc94,&local_34c,param_4,0x44480000);
  FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),&local_33c);
  return;
}

// 00529300  FUN_00529300  size=333  [between]
bool __fastcall FUN_00529300(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
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
  
  iVar5 = FUN_00a12210(0);
  if (iVar5 == 0) {
    return false;
  }
  iVar6 = FUN_0051cc80(param_1 + 0x131c);
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8d230(&local_70);
    fVar1 = *(float *)(iVar5 + 0x40);
    fVar2 = *(float *)(iVar5 + 0x44);
    fVar3 = *(float *)(iVar5 + 0x48);
    fVar4 = *(float *)(iVar5 + 0x4c);
    iVar5 = FUN_009f8b40();
    local_28 = FUN_00a8d5a0();
    local_60[1] = 0;
    local_2c = iVar5 << 0x10 | 7;
    local_24 = 0;
    local_20 = 0;
    local_1c = " Mon View";
    local_30 = 0x3f000000;
    local_60[0] = param_1 + 0x131c;
    local_50 = fVar1;
    local_4c = fVar2;
    local_48 = fVar3;
    local_44 = fVar4;
    local_40 = local_70 - fVar1;
    local_3c = local_6c - fVar2;
    local_38 = local_68 - fVar3;
    local_34 = local_64 - fVar4;
    FUN_0090fb00(local_60);
  }
  return iVar6 == 0;
}

// 00529450  FUN_00529450  size=99  [between]
void __thiscall FUN_00529450(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  FUN_004066f0();
  FUN_0051d070(param_2);
  *(undefined4 *)(param_1 + 0xa8c) = 0;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 005294F0  FUN_005294f0  size=160  [between]
void __thiscall FUN_005294f0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != 0) {
    FUN_00a8caf0(1,0,0,0);
  }
  *(undefined4 *)(param_1 + 0xb80) = 0;
  *(undefined4 *)(param_1 + 0xb84) = 0;
  *(undefined4 *)(param_1 + 0xb88) = 0;
  *(undefined4 *)(param_1 + 0xb90) = 0;
  *(undefined4 *)(param_1 + 0xb94) = 0;
  *(undefined4 *)(param_1 + 0xb98) = 0;
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xb80) = *param_3;
    *(undefined4 *)(param_1 + 0xb84) = param_3[1];
    *(undefined4 *)(param_1 + 0xb88) = param_3[2];
    *(undefined4 *)(param_1 + 0xb8c) = param_3[3];
  }
  if (param_4 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xb90) = *param_4;
    *(undefined4 *)(param_1 + 0xb94) = param_4[1];
    *(undefined4 *)(param_1 + 0xb98) = param_4[2];
    *(undefined4 *)(param_1 + 0xb9c) = param_4[3];
  }
  FUN_00529450(1);
  return;
}

// 00529590  FUN_00529590  size=332  [between]
void __thiscall FUN_00529590(int param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  FUN_00a8caf0(7,0,0,0);
  *(undefined4 *)(param_1 + 0xb80) = 0;
  pfVar1 = (float *)(param_1 + 0xb80);
  *(undefined4 *)(param_1 + 0xb84) = 0;
  *(undefined4 *)(param_1 + 0xb88) = 0;
  *(undefined4 *)(param_1 + 0xb90) = 0;
  *(undefined4 *)(param_1 + 0xb94) = 0;
  *(undefined4 *)(param_1 + 0xb98) = 0;
  iVar8 = FUN_00a12210(*(undefined4 *)(param_1 + 0xa50));
  if (iVar8 != 0) {
    fVar2 = *(float *)(iVar8 + 0x44);
    fVar3 = param_2[1];
    fVar4 = *(float *)(iVar8 + 0x48);
    fVar5 = param_2[2];
    fVar6 = *(float *)(iVar8 + 0x4c);
    fVar7 = param_2[3];
    *pfVar1 = *(float *)(iVar8 + 0x40) - *param_2;
    *(float *)(param_1 + 0xb84) = fVar2 - fVar3;
    *(float *)(param_1 + 0xb88) = fVar4 - fVar5;
    *(float *)(param_1 + 0xb8c) = fVar6 - fVar7;
    *(float *)(param_1 + 0xb84) = *(float *)(param_1 + 0xb84) * 0.2;
    fVar2 = *(float *)(param_1 + 0xb88) * *(float *)(param_1 + 0xb88) +
            *pfVar1 * *pfVar1 + *(float *)(param_1 + 0xb84) * *(float *)(param_1 + 0xb84);
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      *(undefined4 *)(param_1 + 0xb84) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xb88) = 0;
    }
    *pfVar1 = param_3 * *pfVar1;
    *(float *)(param_1 + 0xb84) = *(float *)(param_1 + 0xb84) * param_3;
    *(float *)(param_1 + 0xb88) = *(float *)(param_1 + 0xb88) * param_3;
    *(float *)(param_1 + 0xb8c) = param_3 * *(float *)(param_1 + 0xb8c);
  }
  FUN_00529450(1);
  return;
}

// 00529770  FUN_00529770  size=66  [between]
void __fastcall FUN_00529770(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xac0) + 8))(0x40a00000,0,0);
  FUN_00a8caf0(2,0,0,0);
  FUN_00529450(6);
  return;
}

// 00529890  Em01a0::vf150  size=213  [class]
void __thiscall Em01a0::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    FUN_00eaa6e0(0x3f800000,0);
    if (param_2 == 0x5a) {
      *(undefined4 *)(param_1 + 0x1418) = 2;
      FUN_00519c70();
      *(undefined4 *)(param_1 + 0x10d0) = *(undefined4 *)(param_1 + 0x1444);
      *(undefined1 *)(param_1 + 0x10d4) = 0;
      *(undefined4 *)(param_1 + 0x100c) = 1;
      *(undefined4 *)(param_1 + 0x10e0) = 1;
      uVar1 = FUN_00fdbc60();
      *(undefined4 *)(param_1 + 0x870) = uVar1;
      FUN_0051d620(0xa0000,0,0,0,0);
      return;
    }
    if (param_2 == 0x5c) {
      FUN_0051d620(0xa0004,0,0,0,0);
    }
  }
  return;
}

// 00529970  FUN_00529970  size=4628  [callgraph]
undefined4 __fastcall FUN_00529970(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iStack_28;
  int aiStack_24 [4];
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x4a0) == 2) {
    uVar7 = 0x201c0;
  }
  else {
    uVar7 = 0x201a1;
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),uVar7);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  FUN_0051dab0();
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201a2);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201a3);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c940(uVar7);
    *(undefined4 *)(iVar2 + 0xa64) = 1;
    FUN_00a7c960(aiStack_24);
    *(undefined4 *)(iVar2 + 0xa70) = 0x3e800000;
    *(undefined4 *)(iVar2 + 0xa78) = 0x503;
    *(undefined4 *)(iVar2 + 0xa6c) = 1;
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201a4);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c940(uVar7);
    *(undefined4 *)(iVar2 + 0xa64) = 1;
    FUN_00a7c960(aiStack_24);
    *(undefined4 *)(iVar2 + 0xa70) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xa78) = 0x503;
    *(undefined4 *)(iVar2 + 0xa6c) = 1;
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201a5);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c940(uVar7);
    *(undefined4 *)(iVar2 + 0xa64) = 1;
    FUN_00a7c960(aiStack_24);
    *(undefined4 *)(iVar2 + 0xa70) = 0x3f400000;
    *(undefined4 *)(iVar2 + 0xa78) = 0x503;
    *(undefined4 *)(iVar2 + 0xa6c) = 1;
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201a6);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    aiStack_24[0] = 0;
    if (0 < *(short *)(iVar2 + 0x324)) {
      iStack_28 = 0;
      do {
        iVar5 = *(int *)(iVar2 + 800) + iStack_28;
        iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"_sude"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar5 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iStack_28 = iStack_28 + 0x70;
        aiStack_24[0] = aiStack_24[0] + 1;
      } while (aiStack_24[0] < *(short *)(iVar2 + 0x324));
    }
    aiStack_24[0] = 0;
    if (0 < *(short *)(iVar2 + 0x324)) {
      iStack_28 = 0;
      do {
        iVar5 = *(int *)(iVar2 + 800) + iStack_28;
        iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_01640e44), iVar3 != 0)) {
          puVar1 = (uint *)(iVar5 + 0x38);
          *puVar1 = *puVar1 | 1;
        }
        iStack_28 = iStack_28 + 0x70;
        aiStack_24[0] = aiStack_24[0] + 1;
      } while (aiStack_24[0] < *(short *)(iVar2 + 0x324));
    }
    if (*(int *)(param_1 + 0x4a0) == 1) {
      aiStack_24[0] = 0;
      if (0 < *(short *)(iVar2 + 0x324)) {
        iStack_28 = 0;
        do {
          iVar5 = *(int *)(iVar2 + 800) + iStack_28;
          iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
          if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"_sude"), iVar3 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38);
            *puVar1 = *puVar1 | 1;
          }
          iStack_28 = iStack_28 + 0x70;
          aiStack_24[0] = aiStack_24[0] + 1;
        } while (aiStack_24[0] < *(short *)(iVar2 + 0x324));
      }
      aiStack_24[0] = 0;
      if (0 < *(short *)(iVar2 + 0x324)) {
        iStack_28 = 0;
        do {
          iVar5 = *(int *)(iVar2 + 800) + iStack_28;
          iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
          if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_01640e44), iVar3 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_28 = iStack_28 + 0x70;
          aiStack_24[0] = aiStack_24[0] + 1;
        } while (aiStack_24[0] < *(short *)(iVar2 + 0x324));
      }
    }
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201a7);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201a8);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c940(uVar7);
    *(undefined4 *)(iVar2 + 0xa64) = 1;
    FUN_00a7c960(aiStack_24);
    *(undefined4 *)(iVar2 + 0xa70) = 0x3e800000;
    *(undefined4 *)(iVar2 + 0xa78) = 0x50a;
    *(undefined4 *)(iVar2 + 0xa6c) = 0;
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201a9);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c940(uVar7);
    *(undefined4 *)(iVar2 + 0xa64) = 1;
    FUN_00a7c960(aiStack_24);
    *(undefined4 *)(iVar2 + 0xa70) = 0x3f000000;
    *(undefined4 *)(iVar2 + 0xa78) = 0x50a;
    *(undefined4 *)(iVar2 + 0xa6c) = 0;
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201aa);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c940(uVar7);
    *(undefined4 *)(iVar2 + 0xa64) = 1;
    FUN_00a7c960(aiStack_24);
    *(undefined4 *)(iVar2 + 0xa70) = 0x3f400000;
    *(undefined4 *)(iVar2 + 0xa78) = 0x50a;
    *(undefined4 *)(iVar2 + 0xa6c) = 0;
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201ab);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    aiStack_24[0] = 0;
    if (0 < *(short *)(iVar2 + 0x324)) {
      iStack_28 = 0;
      do {
        iVar5 = *(int *)(iVar2 + 800) + iStack_28;
        iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"_sude"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar5 + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iStack_28 = iStack_28 + 0x70;
        aiStack_24[0] = aiStack_24[0] + 1;
      } while (aiStack_24[0] < *(short *)(iVar2 + 0x324));
    }
    aiStack_24[0] = 0;
    if (0 < *(short *)(iVar2 + 0x324)) {
      iStack_28 = 0;
      do {
        iVar5 = *(int *)(iVar2 + 800) + iStack_28;
        iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_01640e44), iVar3 != 0)) {
          puVar1 = (uint *)(iVar5 + 0x38);
          *puVar1 = *puVar1 | 1;
        }
        iStack_28 = iStack_28 + 0x70;
        aiStack_24[0] = aiStack_24[0] + 1;
      } while (aiStack_24[0] < *(short *)(iVar2 + 0x324));
    }
    if (*(int *)(param_1 + 0x4a0) == 1) {
      aiStack_24[0] = 0;
      if (0 < *(short *)(iVar2 + 0x324)) {
        iStack_28 = 0;
        do {
          iVar5 = *(int *)(iVar2 + 800) + iStack_28;
          iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
          if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"_sude"), iVar3 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38);
            *puVar1 = *puVar1 | 1;
          }
          iStack_28 = iStack_28 + 0x70;
          aiStack_24[0] = aiStack_24[0] + 1;
        } while (aiStack_24[0] < *(short *)(iVar2 + 0x324));
      }
      aiStack_24[0] = 0;
      if (0 < *(short *)(iVar2 + 0x324)) {
        iStack_28 = 0;
        do {
          iVar5 = *(int *)(iVar2 + 800) + iStack_28;
          iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
          if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_01640e44), iVar3 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_28 = iStack_28 + 0x70;
          aiStack_24[0] = aiStack_24[0] + 1;
        } while (aiStack_24[0] < *(short *)(iVar2 + 0x324));
      }
    }
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201ac);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201ad);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201ae);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201af);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201b0);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201b1);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201b2);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201b3);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201b4);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = FUN_0051cee0(*(undefined4 *)(param_1 + 0x4f0),0x201b5);
  if (iVar2 != 0) {
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    uVar7 = FUN_009f8b40();
    FUN_009f8ae0(uVar7);
    uVar7 = FUN_009f8b40();
    if (*(int *)(iVar2 + 0xc60) != 0) {
      FUN_00901590(uVar7);
    }
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
  }
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 != 0) {
    iVar2 = FUN_00a82090("Em01a0_Sai",0x301a0,0);
    if (iVar2 != 0) {
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
      uVar7 = FUN_009f8b40();
      FUN_00a7c8a0(uVar7);
      FUN_009f8ae0();
      uVar8 = 0xffffffff;
      uVar7 = 0xffffffff;
      if (*(int *)(param_1 + 0x4a0) == 1) {
        uVar4 = *(undefined4 *)(param_1 + 0x4f0);
        uVar6 = 0x770;
      }
      else {
        uVar6 = 0x700;
        uVar4 = FUN_00a81330(iVar2,0x700,0xffffffff,0xffffffff);
      }
      FUN_00ac8ad0(0,uVar4,iVar2,uVar6,uVar7,uVar8);
    }
    iVar2 = FUN_00a82090("Em01a0_Sai",0x301a0,0);
    if (iVar2 != 0) {
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
      uVar7 = FUN_009f8b40();
      FUN_00a7c8a0(uVar7);
      FUN_009f8ae0();
      uVar8 = 0xffffffff;
      uVar7 = 0xffffffff;
      if (*(int *)(param_1 + 0x4a0) == 1) {
        uVar4 = *(undefined4 *)(param_1 + 0x4f0);
        uVar6 = 0x771;
      }
      else {
        uVar6 = 0x701;
        uVar4 = FUN_00a81330(iVar2,0x701,0xffffffff,0xffffffff);
      }
      FUN_00ac8ad0(1,uVar4,iVar2,uVar6,uVar7,uVar8);
    }
    iVar2 = FUN_0051a6b0(*(undefined4 *)(param_1 + 0x4f0),0x201b6);
    if (iVar2 != 0) {
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
      uVar7 = FUN_009f8b40();
      FUN_009f8ae0(uVar7);
    }
    iVar2 = FUN_0051a6b0(*(undefined4 *)(param_1 + 0x4f0),0x201b8);
    if (iVar2 != 0) {
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
      uVar7 = FUN_009f8b40();
      FUN_009f8ae0(uVar7);
    }
    if (*(int *)(param_1 + 0x4f0) != 0) {
      iVar2 = FUN_00a82090("Em01a0Line",0x401a0,0);
      if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        FUN_00a7c940(param_1 + 0xf64);
        FUN_00a7c960(aiStack_24);
        *(undefined4 *)(iVar2 + 0x874) = 0x503;
        *(undefined4 *)(iVar2 + 0x880) = 0;
        *(undefined4 *)(iVar2 + 0x884) = 0;
        *(undefined4 *)(iVar2 + 0x888) = 0;
        *(undefined4 *)(iVar2 + 0x88c) = uStack_14;
        FUN_00a7c940(param_1 + 0xf74);
        FUN_00a7c960(aiStack_24);
        *(undefined4 *)(iVar2 + 0x894) = 0xe10;
        *(undefined4 *)(iVar2 + 0x8a0) = 0x3e051eb8;
        *(undefined4 *)(iVar2 + 0x8a4) = 0;
        *(undefined4 *)(iVar2 + 0x8a8) = 0;
        *(undefined4 *)(iVar2 + 0x8ac) = uStack_14;
        uVar7 = FUN_00a7c7f0();
        FUN_00a7c960(uVar7);
      }
      if (((*(int *)(param_1 + 0x4f0) != 0) &&
          (iVar2 = FUN_00a82090("Em01a0Line",0x401a0,0), iVar2 != 0)) &&
         (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        FUN_00a7c940(param_1 + 0xf78);
        FUN_00a7c960(aiStack_24);
        *(undefined4 *)(iVar2 + 0x874) = 0x50a;
        *(undefined4 *)(iVar2 + 0x880) = 0;
        *(undefined4 *)(iVar2 + 0x884) = 0;
        *(undefined4 *)(iVar2 + 0x888) = 0;
        *(undefined4 *)(iVar2 + 0x88c) = uStack_14;
        FUN_00a7c940(param_1 + 0xf88);
        FUN_00a7c960(aiStack_24);
        *(undefined4 *)(iVar2 + 0x894) = 0xe20;
        *(undefined4 *)(iVar2 + 0x8a0) = 0;
        *(undefined4 *)(iVar2 + 0x8a4) = 0;
        *(undefined4 *)(iVar2 + 0x8a8) = 0;
        *(undefined4 *)(iVar2 + 0x8ac) = uStack_14;
        uVar7 = FUN_00a7c7f0();
        FUN_00a7c960(uVar7);
      }
    }
    return 1;
  }
  return 0;
}

// 0052ABB0  FUN_0052abb0  size=184  [callgraph]
void __thiscall FUN_0052abb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar3 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        if (param_2 == 0) {
          FUN_00a7c940(param_1 + 0xf60 + param_3 * 4);
          FUN_00a7c960(local_8);
          if (*(int *)(iVar1 + 0xa64) != 0) {
            *(undefined4 *)(iVar1 + 0xa68) = 1;
          }
        }
        else {
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c940(uVar2);
          FUN_00a7c960(local_4);
          *(undefined4 *)(iVar1 + 0xa68) = 0;
        }
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x10);
  return;
}

// 0052AC70  FUN_0052ac70  size=184  [callgraph]
void __thiscall FUN_0052ac70(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar3 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        if (param_2 == 0) {
          FUN_00a7c940(param_1 + 0xf60 + param_3 * 4);
          FUN_00a7c960(local_8);
          if (*(int *)(iVar1 + 0xa64) != 0) {
            *(undefined4 *)(iVar1 + 0xa68) = 1;
          }
        }
        else {
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c940(uVar2);
          FUN_00a7c960(local_4);
          *(undefined4 *)(iVar1 + 0xa68) = 0;
        }
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x10);
  return;
}

// 0052AD30  FUN_0052ad30  size=184  [callgraph]
void __thiscall FUN_0052ad30(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar3 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        if (param_2 == 0) {
          FUN_00a7c940(param_1 + 0xf60 + param_3 * 4);
          FUN_00a7c960(local_8);
          if (*(int *)(iVar1 + 0xa64) != 0) {
            *(undefined4 *)(iVar1 + 0xa68) = 1;
          }
        }
        else {
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c940(uVar2);
          FUN_00a7c960(local_4);
          *(undefined4 *)(iVar1 + 0xa68) = 0;
        }
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0xc);
  return;
}

// 0052AEA0  FUN_0052aea0  size=184  [callgraph]
void __thiscall FUN_0052aea0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar3 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        if (param_2 == 0) {
          FUN_00a7c940(param_1 + 0xf60 + param_3 * 4);
          FUN_00a7c960(local_8);
          if (*(int *)(iVar1 + 0xa64) != 0) {
            *(undefined4 *)(iVar1 + 0xa68) = 1;
          }
        }
        else {
          uVar2 = FUN_00a7c7f0();
          FUN_00a7c940(uVar2);
          FUN_00a7c960(local_4);
          *(undefined4 *)(iVar1 + 0xa68) = 0;
        }
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x24);
  return;
}

// 0052AF60  FUN_0052af60  size=335  [callgraph]
void __fastcall FUN_0052af60(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float local_c;
  int local_4;
  
  iVar4 = _tls_index;
  local_c = *(float *)(param_1 + 0x44) + 3.5;
  bVar3 = false;
  local_4 = 0x15;
  do {
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      iVar5 = FUN_00a7c8a0();
      if (iVar5 != 0) {
        if (!bVar3) {
          local_c = *(float *)(iVar5 + 0x134);
          bVar3 = true;
        }
        *(float *)(iVar5 + 0xa88) = (local_c - *(float *)(iVar5 + 0x134)) * 20.0 + 5.0;
        FUN_00a8caf0(3,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + iVar4 * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(2);
        *(undefined4 *)(iVar5 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar4 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
    }
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 0052B0B0  FUN_0052b0b0  size=390  [callgraph]
void __thiscall FUN_0052b0b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  FUN_00e5e0c0("em01a0_se_mov_body_unite",param_1,0xffffffff,0);
  iVar3 = _tls_index;
  local_8 = 0;
  if (param_2 == 0) {
    local_8 = -1;
  }
  if (local_8 < 0x15) {
    local_8 = 0x15 - local_8;
    do {
      iVar4 = FUN_00a81330();
      if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
        (**(code **)(*(int *)(iVar4 + 0xac0) + 8))(0x40a00000,0,0);
        FUN_00a8caf0(2,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(6);
        *(undefined4 *)(iVar4 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if ((*(uint *)(param_1 + 0x1440) & 2) != 0) {
    *(uint *)(param_1 + 0x1440) = *(uint *)(param_1 + 0x1440) | 8;
    FUN_00c27f40(0xc,0xbf800000);
  }
  return;
}

// 0052B240  FUN_0052b240  size=288  [callgraph]
void FUN_0052b240(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = _tls_index;
  uVar6 = 0;
  do {
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      iVar5 = FUN_00a7c8a0();
      if (iVar5 != 0) {
        sVar4 = FUN_00dde2d0(0,0x14);
        *(float *)(iVar5 + 0xa88) = (float)(int)sVar4 + 5.0;
        FUN_00a8caf0(3,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(2);
        *(undefined4 *)(iVar5 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  return;
}

// 0052B360  FUN_0052b360  size=288  [callgraph]
void FUN_0052b360(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = _tls_index;
  uVar6 = 0;
  do {
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      iVar5 = FUN_00a7c8a0();
      if (iVar5 != 0) {
        sVar4 = FUN_00dde2d0(0,0x14);
        *(float *)(iVar5 + 0xa88) = (float)(int)sVar4 + 5.0;
        FUN_00a8caf0(3,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(2);
        *(undefined4 *)(iVar5 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x10);
  return;
}

// 0052B480  FUN_0052b480  size=288  [callgraph]
void FUN_0052b480(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = _tls_index;
  uVar6 = 0;
  do {
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      iVar5 = FUN_00a7c8a0();
      if (iVar5 != 0) {
        sVar4 = FUN_00dde2d0(0,0x14);
        *(float *)(iVar5 + 0xa88) = (float)(int)sVar4 + 5.0;
        FUN_00a8caf0(3,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(2);
        *(undefined4 *)(iVar5 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
    }
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x24);
  return;
}

// 0052B5A0  FUN_0052b5a0  size=117  [callgraph]
void __thiscall FUN_0052b5a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00e5e0c0("em01a0_se_mov_body_separate",param_1,0xffffffff,0);
  iVar2 = 0x15;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00529590(param_2,param_3);
      }
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(uint *)(param_1 + 0x1440) = *(uint *)(param_1 + 0x1440) | 2;
  FUN_00c27f40(10,0xbf800000);
  return;
}

// 0052B620  FUN_0052b620  size=354  [callgraph]
void FUN_0052b620(float *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 0.0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (param_1 != (float *)0x0) {
    local_30 = *param_1;
    local_2c = param_1[1];
    local_28 = param_1[2];
    local_24 = param_1[3];
  }
  if (param_2 != (undefined4 *)0x0) {
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        if (param_1 != (float *)0x0) {
          local_30 = *param_1;
          local_2c = param_1[1];
          local_28 = param_1[2];
          local_24 = param_1[3];
          fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
          local_30 = (float)(fVar3 * (float10)local_30);
          fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
          local_2c = (float)(fVar3 * (float10)local_2c);
          fVar3 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
          local_28 = (float)(fVar3 * (float10)local_28);
        }
        FUN_005294f0(1,&local_30,&local_20);
      }
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x10);
  return;
}

// 0052B790  FUN_0052b790  size=180  [callgraph]
void FUN_0052b790(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_20 = *param_1;
    local_1c = param_1[1];
    local_18 = param_1[2];
    local_14 = param_1[3];
  }
  if (param_2 != (undefined4 *)0x0) {
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = param_2[2];
    local_24 = param_2[3];
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_005294f0(1,&local_20,&local_30);
      }
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x10);
  return;
}

// 0052B850  FUN_0052b850  size=159  [callgraph]
void FUN_0052b850(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_20 = *param_1;
    local_1c = param_1[1];
    local_18 = param_1[2];
    local_14 = param_1[3];
  }
  if (param_2 != (undefined4 *)0x0) {
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = param_2[2];
    local_24 = param_2[3];
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_005294f0(1,&local_20,&local_30);
    }
  }
  return;
}

// 0052B900  FUN_0052b900  size=180  [callgraph]
void FUN_0052b900(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_20 = *param_1;
    local_1c = param_1[1];
    local_18 = param_1[2];
    local_14 = param_1[3];
  }
  if (param_2 != (undefined4 *)0x0) {
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = param_2[2];
    local_24 = param_2[3];
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_005294f0(1,&local_20,&local_30);
      }
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0xc);
  return;
}

// 0052B9C0  FUN_0052b9c0  size=180  [callgraph]
void FUN_0052b9c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_1 != (undefined4 *)0x0) {
    local_20 = *param_1;
    local_1c = param_1[1];
    local_18 = param_1[2];
    local_14 = param_1[3];
  }
  if (param_2 != (undefined4 *)0x0) {
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = param_2[2];
    local_24 = param_2[3];
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_005294f0(1,&local_20,&local_30);
      }
    }
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x24);
  return;
}

// 0052BA80  FUN_0052ba80  size=258  [callgraph]
void FUN_0052ba80(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_3c;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_2 != (undefined4 *)0x0) {
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
  }
  if (param_3 != (undefined4 *)0x0) {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    local_24 = param_3[3];
  }
  local_3c = 0x15;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        iVar2 = FUN_00a81330();
        if (param_4 == iVar2) {
          FUN_005294f0(1,&local_20,&local_30);
          if (param_1 != 0) {
            uVar3 = FUN_00a7c7f0();
            FUN_00a7c940(uVar3);
            FUN_00a7c960(local_34);
            *(undefined4 *)(iVar1 + 0xa68) = 0;
          }
        }
      }
    }
    local_3c = local_3c + -1;
  } while (local_3c != 0);
  return;
}

// 0052BB90  FUN_0052bb90  size=318  [callgraph]
void FUN_0052bb90(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int local_4;
  
  local_4 = 0x15;
  do {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        FUN_00a8caf0(4,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(2);
        *(undefined4 *)(iVar3 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
        *(undefined4 *)(iVar3 + 0xa8c) = 1;
        fVar4 = (float10)FUN_00dde300(0,0x3e99999a);
        *(float *)(iVar3 + 0xa94) = (float)(fVar4 + (float10)*(float *)(iVar3 + 0x134));
        *(undefined4 *)(iVar3 + 0xa98) = 0;
      }
    }
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 0052BCD0  FUN_0052bcd0  size=338  [callgraph]
void FUN_0052bcd0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *local_c;
  undefined1 auStack_4 [4];
  
  iVar3 = _tls_index;
  local_c = &DAT_018812f8;
  do {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0xac0) + 8))(0x40a00000,0,0);
        FUN_00a8caf0(2,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(6);
        *(undefined4 *)(iVar4 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
        uVar5 = FUN_00a7c7f0();
        FUN_00a7c940(uVar5);
        FUN_00a7c960(auStack_4);
        *(undefined4 *)(iVar4 + 0xa68) = 0;
      }
    }
    local_c = local_c + 1;
  } while ((int)local_c < 0x1881308);
  return;
}

// 0052BE30  FUN_0052be30  size=338  [callgraph]
void FUN_0052be30(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *local_c;
  undefined1 auStack_4 [4];
  
  iVar3 = _tls_index;
  local_c = &DAT_01881294;
  do {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0xac0) + 8))(0x40a00000,0,0);
        FUN_00a8caf0(2,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(6);
        *(undefined4 *)(iVar4 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
        uVar5 = FUN_00a7c7f0();
        FUN_00a7c940(uVar5);
        FUN_00a7c960(auStack_4);
        *(undefined4 *)(iVar4 + 0xa68) = 0;
      }
    }
    local_c = local_c + 1;
  } while ((int)local_c < 0x18812a8);
  return;
}

// 0052BF90  FUN_0052bf90  size=338  [callgraph]
void FUN_0052bf90(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *local_c;
  undefined1 auStack_4 [4];
  
  iVar3 = _tls_index;
  local_c = &DAT_01881308;
  do {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0xac0) + 8))(0x40a00000,0,0);
        FUN_00a8caf0(2,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(6);
        *(undefined4 *)(iVar4 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
        uVar5 = FUN_00a7c7f0();
        FUN_00a7c940(uVar5);
        FUN_00a7c960(auStack_4);
        *(undefined4 *)(iVar4 + 0xa68) = 0;
      }
    }
    local_c = local_c + 1;
  } while ((int)local_c < 0x188131c);
  return;
}

// 0052C0F0  FUN_0052c0f0  size=338  [callgraph]
void FUN_0052c0f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *local_c;
  undefined1 auStack_4 [4];
  
  iVar3 = _tls_index;
  local_c = &DAT_0188131c;
  do {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0xac0) + 8))(0x40a00000,0,0);
        FUN_00a8caf0(2,0,0,0);
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_0051d070(6);
        *(undefined4 *)(iVar4 + 0xa8c) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
        uVar5 = FUN_00a7c7f0();
        FUN_00a7c940(uVar5);
        FUN_00a7c960(auStack_4);
        *(undefined4 *)(iVar4 + 0xa68) = 0;
      }
    }
    local_c = local_c + 1;
  } while ((int)local_c < 0x1881340);
  return;
}

// 0052FF40  Em01a0::startup  size=2806  [class]
undefined4 __fastcall Em01a0::startup(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  float10 fVar14;
  uint local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar4 = BehaviorEmBase::startup();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c800();
    iVar4 = *(int *)(iVar4 + 0x330);
    *(int *)(param_1 + 0xfd8) = iVar4;
    *(undefined4 *)(param_1 + 0xfd0) = *(undefined4 *)(iVar4 + 0xcc);
    *(undefined4 *)(param_1 + 0xfd4) = **(undefined4 **)(param_1 + 0xfd8);
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    *(undefined4 *)(param_1 + 0xfdc) = 0;
    FUN_00a929d0();
    FUN_00a8edf0(100);
    *(undefined4 *)(param_1 + 0x11a4) = 0;
    *(undefined4 *)(param_1 + 0x1460) = 0x1e;
    *(undefined4 *)(param_1 + 0x1444) = 0x43960000;
    *(undefined4 *)(param_1 + 0x146c) = 5;
    *(undefined4 *)(param_1 + 0x1470) = 0x14;
    *(undefined4 *)(param_1 + 0x1448) = 0x41200000;
    *(undefined4 *)(param_1 + 0x144c) = 0;
    *(undefined4 *)(param_1 + 0x1450) = 0x41f00000;
    *(undefined4 *)(param_1 + 0x1454) = 0x42c80000;
    *(undefined4 *)(param_1 + 0x1458) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x145c) = 0x43480000;
    *(undefined4 *)(param_1 + 0x1464) = 0x42f00000;
    *(undefined4 *)(param_1 + 0x1468) = 0x40a00000;
    *(undefined4 *)(param_1 + 0x1474) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x1478) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x147c) = 0x3e051eb8;
    if (*(int *)(param_1 + 0x754) != 0) {
      FUN_00ac8570(0x19);
      uVar5 = FUN_00fdbc60();
      if (*(int *)(param_1 + 0x4a0) == 2) {
        FUN_00ac8570(0x2e);
        uVar5 = FUN_00fdbc60();
      }
      FUN_00a8edf0(uVar5);
      fVar14 = (float10)FUN_00ac8570(0x17);
      *(float *)(param_1 + 0x11a4) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x1b);
      *(float *)(param_1 + 0x1444) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x1c);
      *(float *)(param_1 + 0x1448) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x1d);
      *(float *)(param_1 + 0x144c) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x1e);
      *(float *)(param_1 + 0x1450) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x1f);
      *(float *)(param_1 + 0x1454) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x22);
      *(float *)(param_1 + 0x1458) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x23);
      *(float *)(param_1 + 0x145c) = (float)fVar14;
      FUN_00ac8570(0x26);
      uVar5 = FUN_00fdbc60();
      *(undefined4 *)(param_1 + 0x1460) = uVar5;
      fVar14 = (float10)FUN_00ac8570(0x27);
      *(float *)(param_1 + 0x1464) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x28);
      *(float *)(param_1 + 0x1468) = (float)fVar14;
      FUN_00ac8570(0x2a);
      uVar5 = FUN_00fdbc60();
      *(undefined4 *)(param_1 + 0x146c) = uVar5;
      FUN_00ac8570(0x2b);
      uVar5 = FUN_00fdbc60();
      *(undefined4 *)(param_1 + 0x1470) = uVar5;
      fVar14 = (float10)FUN_00ac8570(0x2c);
      *(float *)(param_1 + 0x1474) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x2f);
      *(float *)(param_1 + 0x1478) = (float)fVar14;
      fVar14 = (float10)FUN_00ac8570(0x31);
      *(float *)(param_1 + 0x147c) = (float)fVar14;
    }
    *(undefined4 *)(param_1 + 0x14a8) = 0;
    *(undefined4 *)(param_1 + 0x1314) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x15e8) = 0;
    *(undefined4 *)(param_1 + 0x1318) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x15d8) = 0;
    *(undefined4 *)(param_1 + 0x15ec) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x15e0) = 0;
    *(undefined4 *)(param_1 + 0x15dc) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x10e0) = 0;
    *(undefined4 *)(param_1 + 0x15e4) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x1630) = 0;
    *(undefined4 *)(param_1 + 0x15f4) = 0;
    *(undefined4 *)(param_1 + 0x15fc) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x1618) = 0;
    *(undefined4 *)(param_1 + 0x1620) = 0;
    *(undefined4 *)(param_1 + 0x1624) = 0;
    *(undefined4 *)(param_1 + 0x1628) = 0;
    *(undefined4 *)(param_1 + 0x143c) = 0;
    *(undefined4 *)(param_1 + 0x141c) = 0;
    *(undefined4 *)(param_1 + 0x1434) = 0;
    *(undefined4 *)(param_1 + 0x1438) = 0;
    *(undefined4 *)(param_1 + 0x1488) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x1414) = 0;
    *(undefined4 *)(param_1 + 0x1420) = 0;
    *(undefined4 *)(param_1 + 0x6e8) = 0x3fc00000;
    *(undefined4 *)(param_1 + 0x1440) = 0;
    *(undefined4 *)(param_1 + 0x160c) = 0;
    *(undefined4 *)(param_1 + 0x1424) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1484) = 0;
    *(undefined4 *)(param_1 + 0x1324) = 0;
    *(undefined4 *)(param_1 + 0x1638) = 0;
    *(undefined4 *)(param_1 + 0x14a4) = 0;
    *(undefined4 *)(param_1 + 0x14a0) = 0;
    *(undefined4 *)(param_1 + 0x15d0) = 0;
    *(undefined4 *)(param_1 + 0x6e4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6e0) = 5;
    *(undefined4 *)(param_1 + 0x142c) = 0;
    *(undefined4 *)(param_1 + 0x1428) = 0;
    *(undefined4 *)(param_1 + 0x15d4) = 1;
    *(undefined4 *)(param_1 + 0x15f8) = 0;
    *(undefined4 *)(param_1 + 0x1600) = 0;
    *(undefined4 *)(param_1 + 0x1614) = 0;
    *(undefined4 *)(param_1 + 0x1634) = 0;
    uVar5 = FUN_008ec660(param_1,0x3fc00000,0x3f000000,0x41a00000,0x41a00000,0x78,7,0);
    *(undefined4 *)(param_1 + 0x764) = uVar5;
    FUN_008e6d00();
    *(undefined2 *)(param_1 + 0x14ac) = 0;
    iVar4 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar4 != 0) {
      uVar5 = FUN_00de3850(0,"_col.hkx",0);
      iVar4 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = RigidBodyCollision::RigidBodyCollision();
      }
      *(int *)(param_1 + 0x7b0) = iVar4;
      if (iVar4 != 0) {
        uVar1 = *(undefined4 *)(param_1 + 0x4f0);
        uVar6 = FUN_00de3ee0(uVar5);
        uVar5 = FUN_00de3cf0(uVar5);
        iVar4 = FUN_008f6410(uVar1,uVar5,uVar6);
        if (iVar4 != 0) {
          FUN_008f2cd0(0);
          (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(7);
          puVar7 = (undefined4 *)FUN_009f8b60();
          (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar7);
          FUN_008f1600(0x80000000);
          FUN_008f1600(0x20);
          FUN_008f18c0(0x100);
        }
      }
      iVar4 = FUN_00ac8120();
      if (((iVar4 != 0) && (*(int *)(iVar4 + 0x1190) != 0)) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0))
      {
        local_38 = 0;
        do {
          iVar9 = FUN_00a12210(0);
          puVar7 = (undefined4 *)(iVar9 + 0x10);
          puVar13 = (undefined4 *)(local_38 * 0x40 + 0x11f0 + param_1);
          for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          uStack_30 = 0x3e4ccccd;
          uStack_2c = 0x3f4ccccd;
          uStack_28 = 0x3f99999a;
          piVar10 = (int *)FUN_00900480();
          iVar9 = *piVar10;
          uVar5 = FUN_009f8b40(0);
          iVar9 = (**(code **)(iVar9 + 8))(iVar8 + 0x130,&uStack_20,&uStack_30,0xf,uVar5);
          FUN_008f7f00(iVar9,*(undefined4 *)(iVar4 + 0x4f0));
          FUN_004066f0();
          if ((iVar9 != 0) && (uVar2 = *(uint *)(iVar9 + 0xc), uVar2 != 0)) {
            puVar11 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
            *puVar11 = *puVar11 | 1;
            puVar11[2] = puVar11[2] | 0x40;
          }
          pvVar3 = ThreadLocalStoragePointer;
          iVar12 = _tls_index;
          if (DAT_01885d68 != 1) {
            piVar10 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
            *piVar10 = *piVar10 + -1;
            if (((*piVar10 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          FUN_004066f0();
          if ((iVar9 != 0) && (uVar2 = *(uint *)(iVar9 + 0xc), uVar2 != 0)) {
            puVar11 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
            *puVar11 = *puVar11 | 4;
            puVar11[4] = puVar11[4] | 4;
          }
          if (DAT_01885d68 != 1) {
            piVar10 = (int *)(*(int *)((int)pvVar3 + iVar12 * 4) + 4);
            *piVar10 = *piVar10 + -1;
            if (((*piVar10 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          FUN_004066f0();
          if ((iVar9 != 0) && (uVar2 = *(uint *)(iVar9 + 0xc), uVar2 != 0)) {
            puVar11 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
            *puVar11 = *puVar11 | 8;
            puVar11[5] = puVar11[5] | 4;
          }
          if (DAT_01885d68 != 1) {
            piVar10 = (int *)(*(int *)((int)pvVar3 + iVar12 * 4) + 4);
            *piVar10 = *piVar10 + -1;
            if (((*piVar10 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          FUN_004066f0();
          if ((iVar9 != 0) && (uVar2 = *(uint *)(iVar9 + 0xc), uVar2 != 0)) {
            puVar11 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
            *puVar11 = *puVar11 | 1;
            puVar11[2] = puVar11[2] | 0x8000;
          }
          if (DAT_01885d68 != 1) {
            piVar10 = (int *)(*(int *)((int)pvVar3 + iVar12 * 4) + 4);
            *piVar10 = *piVar10 + -1;
            if (((*piVar10 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          FUN_004066f0();
          if ((iVar9 != 0) && (uVar2 = *(uint *)(iVar9 + 0xc), uVar2 != 0)) {
            puVar11 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
            *puVar11 = *puVar11 | 1;
            puVar11[2] = puVar11[2] | 0x10000;
          }
          if (DAT_01885d68 != 1) {
            piVar10 = (int *)(*(int *)((int)pvVar3 + iVar12 * 4) + 4);
            *piVar10 = *piVar10 + -1;
            if (((*piVar10 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          FUN_004066f0();
          if ((iVar9 != 0) && (uVar2 = *(uint *)(iVar9 + 0xc), uVar2 != 0)) {
            puVar11 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
            *puVar11 = *puVar11 | 1;
            puVar11[2] = puVar11[2] | 0x20000;
          }
          if (DAT_01885d68 != 1) {
            piVar10 = (int *)(*(int *)((int)pvVar3 + iVar12 * 4) + 4);
            *piVar10 = *piVar10 + -1;
            if (((*piVar10 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
              FUN_00dd7320();
            }
          }
          lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar9);
          FUN_00900bd0();
          local_38 = local_38 + 1;
        } while (local_38 < 4);
      }
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
      uVar5 = FUN_00a8d2a0();
      puVar7 = (undefined4 *)FUN_009f8b60();
      iVar4 = CollisionCapsule::CollisionCapsule(2,*puVar7,0);
      *(undefined4 *)(iVar4 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
      *(undefined4 *)(iVar4 + 0x594) = 0x3f666666;
      *(undefined4 *)(iVar4 + 0x590) = 0x3f000000;
      FUN_00d771d0(0xb);
      FUN_00a93a00(iVar4,uVar5);
      FUN_00d7b0f0();
      FUN_00d7b890();
      puVar7 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = HoldEntitySlot::vftable;
        puVar7[1] = param_1;
      }
      *(undefined4 **)(param_1 + 0x14b4) = puVar7;
      FUN_00d89ec0(0x16,puVar7);
      iVar4 = 0;
      iVar8 = 0;
      *(undefined4 *)(param_1 + 0x133c) = 0xffffffff;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          puVar11 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar8);
          *puVar11 = *puVar11 & 0xfffffffe;
          iVar4 = iVar4 + 1;
          iVar8 = iVar8 + 0x70;
        } while (iVar4 < *(short *)(param_1 + 0x324));
      }
      *(undefined4 *)(param_1 + 0x1534) = 0;
      if ((*(int *)(param_1 + 0xfd0) != 0) || (iVar4 = FUN_00529970(), iVar4 != 0)) {
        *(undefined4 *)(param_1 + 0x1418) = 0;
        FUN_0051d620(0x10000,0,0,0,0);
        *(undefined4 *)(param_1 + 0x10d0) = 0x43960000;
        *(undefined4 *)(param_1 + 0x100c) = 0;
        *(undefined4 *)(param_1 + 0x1010) = 0;
        *(undefined1 *)(param_1 + 0x10d4) = 0;
        if (*(int *)(param_1 + 0x4a0) == 1) {
          FUN_0051d620(0xb0000,0,0,0,0);
        }
        iVar4 = FUN_00932720();
        if (iVar4 == 0x370) {
          uVar5 = FUN_00a82090("Em01a0_FACE",0x201ba,0);
          FUN_00a7c970(uVar5);
          iVar4 = FUN_00a81330();
          if (iVar4 != 0) {
            iVar4 = FUN_00a81330();
            FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar4,5,5);
            if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
              iVar4 = FUN_00a7c8a0();
              *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xfffffffd;
              piVar10 = (int *)FUN_00a7c8a0();
              (**(code **)(*piVar10 + 0x1c))();
              uVar5 = 5;
              FUN_00a7c8a0(5);
              cModelBase::setRootPartsNo(uVar5);
            }
          }
        }
        if (*(int *)(param_1 + 0x4a0) == 2) {
          FUN_00e5e0c0("em01a0_voice_stop",param_1,0xffffffff,0);
          FUN_00ac8120();
          FUN_00bc39f0(*(undefined4 *)(param_1 + 0x4f0),param_1 + 0x50,0x43960000,0x44610000);
          FUN_0051d620(0x10001,0,0,0,0);
          *(undefined4 *)(param_1 + 0x1424) = 0;
          *(undefined4 *)(param_1 + 0x1428) = 1;
        }
        *(undefined4 *)(param_1 + 0x11a0) = 0;
        *(undefined4 *)(param_1 + 0x878) = 1;
        *(undefined4 *)(param_1 + 0x87c) = 0x16;
        *(undefined4 *)(param_1 + 0x880) = 0x12;
        FUN_00aa4080(4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        FUN_00a92f90();
        FUN_00e3f050();
        switchD_0080dbae::default();
        return 1;
      }
    }
  }
  return 0;
}

// 00530A40  FUN_00530a40  size=394  [callgraph]
void __fastcall FUN_00530a40(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if ((*(int *)(param_1 + 0x15f8) != 0) && (*(int *)(param_1 + 0x1428) == 0)) {
      FUN_0051d620(0x10010,0,0,0,0);
      return;
    }
    iVar2 = FUN_0051d990();
    if (iVar2 == 0) {
      iVar2 = FUN_0051a3c0();
      if ((((iVar2 == 0) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
          (36.0 < *(float *)(param_1 + 0xa90))) || (*(int *)(param_1 + 0x1630) != 0)) {
        iVar2 = FUN_0051da50();
        if (iVar2 != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          sVar1 = FUN_00dde2d0(0,1);
          FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
          sVar1 = FUN_00dde2d0(0,1);
          if (sVar1 != 0) {
            FUN_0051d620(0x50009,0,0,0,0);
          }
        }
        iVar2 = *(int *)(param_1 + 0x1418);
        if (iVar2 == 0) {
          FUN_00521fc0();
          return;
        }
        if (iVar2 == 1) {
          FUN_005221f0();
          return;
        }
        if (iVar2 == 2) {
          FUN_00522490();
          return;
        }
      }
      else {
        FUN_0051d620(0x5000e,0,0,0,0);
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 != 0) {
          iVar2 = FUN_00518a90();
          if (iVar2 != 0) {
            FUN_0051d620(0x50010,0,0,0,0);
            return;
          }
        }
      }
    }
    else {
      if (iVar2 == 2) {
        if (*(int *)(param_1 + 0x4a0) != 2) {
          FUN_0051d620(0x10019,0,0,0,0);
          return;
        }
        FUN_0051d620(0x10009,0,0,0,0);
        return;
      }
      if (iVar2 == 1) {
        FUN_0051d620(0x10009,0,0,0,0);
      }
    }
  }
  return;
}

// 00530BD0  FUN_00530bd0  size=302  [callgraph]
void FUN_00530bd0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int local_2c [3];
  float local_20 [7];
  
  fVar1 = *param_1 + param_1[5] + param_1[10];
  if (0.0 < fVar1) {
    fVar7 = SQRT(fVar1 + 1.0);
    fVar8 = 0.5 / fVar7;
    fVar1 = param_1[8];
    fVar2 = param_1[2];
    fVar3 = param_1[1];
    fVar4 = param_1[4];
    *param_2 = (param_1[6] - param_1[9]) * fVar8;
    param_2[1] = (fVar1 - fVar2) * fVar8;
    param_2[2] = (fVar3 - fVar4) * fVar8;
    param_2[3] = fVar7 * 0.5;
    return;
  }
  local_2c[0] = 1;
  local_2c[1] = 2;
  local_2c[2] = 0;
  uVar9 = (uint)(*param_1 < param_1[5]);
  if (param_1[uVar9 * 5] < param_1[10]) {
    uVar9 = 2;
  }
  iVar5 = local_2c[uVar9];
  iVar6 = local_2c[iVar5];
  fVar1 = SQRT((param_1[uVar9 * 5] - (param_1[local_2c[iVar5] * 5] + param_1[iVar5 * 5])) + 1.0);
  fVar2 = 0.5 / fVar1;
  local_20[uVar9] = fVar1 * 0.5;
  local_20[3] = (param_1[iVar6 + iVar5 * 4] - param_1[iVar5 + iVar6 * 4]) * fVar2;
  local_20[iVar5] = (param_1[uVar9 + iVar5 * 4] + param_1[iVar5 + uVar9 * 4]) * fVar2;
  local_20[iVar6] = (param_1[uVar9 + iVar6 * 4] + param_1[iVar6 + uVar9 * 4]) * fVar2;
  *param_2 = local_20[0];
  param_2[1] = local_20[1];
  param_2[2] = local_20[2];
  param_2[3] = local_20[3];
  return;
}

// 00530D00  FUN_00530d00  size=308  [callgraph]
void __thiscall FUN_00530d00(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int local_2c [3];
  float local_20 [7];
  
  fVar1 = *param_2 + param_2[5] + param_2[10];
  if (0.0 < fVar1) {
    fVar7 = SQRT(fVar1 + 1.0);
    fVar8 = 0.5 / fVar7;
    fVar1 = param_2[8];
    fVar2 = param_2[2];
    fVar3 = param_2[1];
    fVar4 = param_2[4];
    *param_1 = (param_2[6] - param_2[9]) * fVar8;
    param_1[1] = (fVar1 - fVar2) * fVar8;
    param_1[2] = (fVar3 - fVar4) * fVar8;
    param_1[3] = fVar7 * 0.5;
    return;
  }
  local_2c[0] = 1;
  local_2c[1] = 2;
  local_2c[2] = 0;
  uVar9 = (uint)(*param_2 < param_2[5]);
  if (param_2[uVar9 * 5] < param_2[10]) {
    uVar9 = 2;
  }
  iVar5 = local_2c[uVar9];
  iVar6 = local_2c[iVar5];
  fVar1 = SQRT((param_2[uVar9 * 5] - (param_2[local_2c[iVar5] * 5] + param_2[iVar5 * 5])) + 1.0);
  fVar2 = 0.5 / fVar1;
  local_20[uVar9] = fVar1 * 0.5;
  local_20[3] = (param_2[iVar6 + iVar5 * 4] - param_2[iVar5 + iVar6 * 4]) * fVar2;
  local_20[iVar5] = (param_2[uVar9 + iVar5 * 4] + param_2[iVar5 + uVar9 * 4]) * fVar2;
  local_20[iVar6] = (param_2[uVar9 + iVar6 * 4] + param_2[iVar6 + uVar9 * 4]) * fVar2;
  *param_1 = local_20[0];
  param_1[1] = local_20[1];
  param_1[2] = local_20[2];
  param_1[3] = local_20[3];
  return;
}

// 00530E40  FUN_00530e40  size=529  [callgraph]
void __fastcall FUN_00530e40(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  float unaff_ESI;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [39];
  
  param_1[0x4c6] = 0x42f00000;
  pcVar4 = *(code **)(*param_1 + 0x318);
  param_1[0x4c5] = 0;
  param_1[0x504] = 1;
  (*pcVar4)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x28,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x581] = param_1[0x581] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 2:
    FUN_00aa4080(0x2a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0052c250(0);
    break;
  case 3:
    break;
  default:
    goto switchD_00530e8c_default;
  }
  FUN_0040b190();
  afStack_a0[0] = 0.0;
  afStack_a0[1] = 3.0;
  afStack_a0[2] = 10.0;
  D3DXVec3TransformNormal(afStack_a0,afStack_a0,param_1 + 4);
  iVar5 = FUN_00a12210(0x50e);
  fVar1 = *(float *)(iVar5 + 0x40);
  fVar2 = *(float *)(iVar5 + 0x44);
  fVar3 = *(float *)(iVar5 + 0x48);
  afStack_a0[0] = *(float *)(iVar5 + 0x4c) + afStack_a0[0];
  iVar5 = FUN_00a81330();
  if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
    *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) | 4;
    *(float *)(iVar5 + 0x40) =
         ((fVar1 + unaff_ESI) - *(float *)(iVar5 + 0x40)) * 0.06 + *(float *)(iVar5 + 0x40);
    *(float *)(iVar5 + 0x44) =
         ((fVar2 + fStack_a8) - *(float *)(iVar5 + 0x44)) * 0.06 + *(float *)(iVar5 + 0x44);
    *(float *)(iVar5 + 0x48) =
         ((fVar3 + fStack_a4) - *(float *)(iVar5 + 0x48)) * 0.06 + *(float *)(iVar5 + 0x48);
    switchD_0080dbae::default();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    FUN_0051d620(0x10013,0,0,0,0);
    return;
  }
switchD_00530e8c_default:
  return;
}

// 00531070  FUN_00531070  size=720  [callgraph]
void __fastcall FUN_00531070(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  float afStack_c0 [4];
  int iStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  param_1[0x4c6] = 0x42f00000;
  pcVar2 = *(code **)(*param_1 + 0x318);
  param_1[0x4c5] = 0;
  param_1[0x504] = 1;
  (*pcVar2)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x32,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00940b10();
    if (param_1[0x583] == 0) {
      uVar9 = 0xc003;
    }
    else {
      uVar9 = 0xc004;
    }
    uVar9 = FUN_00e678d0(2,uVar9,0xffffffff);
    FUN_00e80d00(uVar9);
    param_1[0x24a] = 0x41f00000;
    param_1[0x583] = 1;
    param_1[0x252] = 0;
    param_1[0x505] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = FUN_00a8c760(10);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (param_1[0x252] != 0) {
      return;
    }
    fVar1 = (float)param_1[0x24a];
    param_1[0x24a] = (int)(fVar1 - (float)param_1[0x244]);
    if (param_1[0x2a1] == 0) {
      return;
    }
    if (0.0 <= fVar1 - (float)param_1[0x244]) {
      return;
    }
    piVar3 = (int *)FUN_0041c960(param_1[0x2a1]);
    uStack_a0 = 0x440d60a4;
    uStack_9c = 0xc3a0d333;
    uStack_98 = 0xc44b228f;
    afStack_c0[0] = 0.0;
    afStack_c0[1] = 1.5707964;
    afStack_c0[2] = 0.0;
    (**(code **)(*piVar3 + 0x7c))(&uStack_a0,afStack_c0);
    param_1[0x252] = 1;
    return;
  case 2:
    param_1[0x187] = 3;
    FUN_0052c810();
    break;
  case 3:
    break;
  default:
    goto switchD_005310bb_default;
  }
  FUN_0040b190();
  afStack_c0[0] = 0.0;
  afStack_c0[1] = 0.0;
  afStack_c0[2] = 0.0;
  D3DXVec3TransformNormal(afStack_c0,afStack_c0,param_1 + 4);
  iVar4 = FUN_00a12210(0xf00);
  afStack_c0[0] = *(float *)(iVar4 + 0x4c) + afStack_c0[0];
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iStack_b0 = iVar4, iVar4 != 0)) {
    *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) | 4;
    iVar5 = FUN_00a12210(0xf00);
    puVar7 = (undefined4 *)(iVar5 + 0x10);
    puVar8 = (undefined4 *)(iVar4 + 0x10);
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    switchD_0080dbae::default();
  }
  iVar4 = FUN_00a952e0(0,0x43660000);
  if (iVar4 != 0) {
    FUN_00e5e0c0("em01a0_se_atk_cars_wheel",param_1,0xffffffff,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_0051d620(0x10016,0,0,0,0);
    return;
  }
switchD_005310bb_default:
  return;
}

// 00531880  FUN_00531880  size=90  [callgraph]
void __fastcall FUN_00531880(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_0052bb90();
    if ((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x764) != 0)) {
      uVar1 = FUN_009f8b40();
      FUN_008e26e0(uVar1);
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005318E0  FUN_005318e0  size=448  [callgraph]
void __fastcall FUN_005318e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x8f,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    param_1[0x510] = param_1[0x510] | 4;
    FUN_00c27f40(0xb,0xbf800000);
  }
  else if (param_1[0x187] != 1) goto LAB_00531a5f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(8);
  if (iVar3 != 0) {
    FUN_00529170(0,0,0x41200000);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    fVar1 = (float)param_1[0x2a3];
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    if (NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0)) {
      sVar2 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar2 + 0x1000a,uVar4,uVar5,uVar6,uVar7);
      if ((36.0 < (float)param_1[0x2a3]) || (0.5235988 <= (float)param_1[0x2a8])) goto LAB_00531a5f;
      uVar4 = 0x10008;
    }
    else {
      FUN_0051d620(0x50003,0,0,0,0);
      if ((0.5235988 <= (float)param_1[0x2a8]) || (sVar2 = FUN_00dde2d0(0,1), sVar2 == 0))
      goto LAB_00531a5f;
      uVar4 = 0x10009;
    }
    FUN_0051d620(uVar4,0,0,0,0);
  }
LAB_00531a5f:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00531BF0  FUN_00531bf0  size=693  [callgraph]
void __fastcall FUN_00531bf0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  
  if (param_1[0x187] == 0) {
    uVar6 = 0x43;
    if ((1 < (uint)param_1[0x404]) && ((uint)param_1[0x404] < 6)) {
      uVar6 = 0x41;
      FUN_0052bcd0();
    }
    FUN_00aa4080(uVar6,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    iVar5 = FUN_00a92f90();
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x94) & 1) != 0)) {
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) & 0xfffffff7;
      }
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) & 0xffffffef;
      }
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) & 0xffffffdf;
      }
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) & 0xffffffbf;
      }
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) | 8;
      }
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) | 0x10;
      }
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) | 0x20;
      }
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) | 0x40;
      }
    }
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00531d9a;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x52a] = 0x42700000;
    if (param_1[0x585] == 0) {
      FUN_0051d620(0x50001,0,0,0,0);
    }
  }
LAB_00531d9a:
  iVar5 = FUN_00a8c760(0);
  if (iVar5 != 0) {
    fVar8 = 0.0;
    fVar7 = 0.00017453292;
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35);
    if ((((uint)param_1[0x404] < 2) || (5 < (uint)param_1[0x404])) &&
       (iVar5 = FUN_00a12210(0xf00), iVar5 != 0)) {
      D3DXVec3TransformNormal(&stack0xffffffd0,&stack0xffffffd0,iVar5 + 0x10);
      fVar1 = *(float *)(iVar5 + 0x48);
      fVar2 = *(float *)(param_1[0x2a1] + 0x48);
      pcVar3 = *(code **)(*param_1 + 0x308);
      param_1[0x14] =
           (int)((float)param_1[0x14] +
                (*(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar5 + 0x40) + fVar7)) * 0.05);
      param_1[0x16] = (int)((fVar2 - (fVar1 + fVar8)) * 0.05 + (float)param_1[0x16]);
      (*pcVar3)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 00532250  FUN_00532250  size=411  [callgraph]
void __fastcall FUN_00532250(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a94bc0(1,0);
    FUN_00aa4080(0xc0,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0051cd50(1,1,1,1);
    param_1[0x250] = 0;
    FUN_00c57120(param_1[0x13c]);
    param_1[0x403] = 0;
    FUN_00eaa6e0(0x3f800000,0);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x1af] = 1;
    }
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      FUN_0052b5a0(param_1 + 0x10,0x40a00000);
      param_1[0x1af] = 1;
      FUN_00a9e060(0);
      FUN_00a9e060(1);
      FUN_00a81330();
      FUN_00a805f0();
      FUN_00a81330();
      FUN_00a805f0();
      FUN_008e3c10();
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    param_1[0x248] = 0x43340000;
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 0053F760  Em01a0::vf32C  size=384  [class]
undefined4 __fastcall Em01a0::vf32C(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  int local_160 [12];
  float local_130;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  iVar2 = FUN_00a8ef10();
  if (((iVar2 == 0) && (*(int *)(param_1 + 0x4e4) == 0)) && ((DAT_01bea060 & 0x40000000) == 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa00);
    if (*(int *)(param_1 + 0xa18) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar2 = *(int *)(param_1 + 0x67c);
    iVar5 = *(int *)(param_1 + 0x684) * 0x150 + iVar2;
    FUN_00445db0();
    iVar3 = -1;
    bVar1 = false;
    if (iVar2 != iVar5) {
      do {
        if (iVar3 < *(int *)(iVar2 + 4)) {
          bVar1 = true;
          FUN_00448f50(iVar2);
          iVar3 = *(int *)(iVar2 + 4);
        }
        iVar2 = iVar2 + 0x150;
      } while (iVar2 != iVar5);
      if (bVar1) {
        iVar2 = FUN_00a8f040(local_160);
        if ((((iVar2 == 0) && (local_160[0] != 0)) &&
            ((local_160[0] != 1 && ((local_160[0] != 2 && (local_160[0] != 0x1b0)))))) &&
           (local_160[0] != 0x147)) {
          if (*(int *)(param_1 + 0x1534) == 0) {
            fVar6 = (float10)FUN_00ddba30(local_130 - *(float *)(param_1 + 0x94));
            *(int *)(param_1 + 0x15c8) = *(int *)(param_1 + 0x15c8) + 1;
            *(float *)(param_1 + 0x15f4) = (float)fVar6;
            iVar2 = FUN_00518a90();
            if (iVar2 == 0) {
              uVar4 = FUN_0053cd30(local_160);
            }
            else {
              uVar4 = FUN_0053d260(local_160);
            }
          }
          else {
            uVar4 = FUN_0051c360(local_160);
          }
          if (*(int *)(param_1 + 0xa18) != 0) {
            LeaveCriticalSection(lpCriticalSection);
          }
          return uVar4;
        }
      }
    }
    if (*(int *)(param_1 + 0xa18) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 0053F8E0  FUN_0053f8e0  size=242  [callgraph]
undefined4 __thiscall FUN_0053f8e0(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float unaff_ESI;
  float unaff_EDI;
  float local_84;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  *param_2 = *(float *)(param_1 + 0x40);
  param_2[1] = *(float *)(param_1 + 0x44);
  param_2[2] = *(float *)(param_1 + 0x48);
  param_2[3] = *(float *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0xa84) != 0) {
    local_70 = 0.0;
    local_6c = 0x3f4ccccd;
    local_68 = 0x40c00000;
    local_84 = param_3;
    D3DXMatrixRotationY(local_50);
    D3DXVec3TransformNormal(&fStack_78,&fStack_78,auStack_58);
    iVar4 = *(int *)(param_1 + 0xa84);
    fVar1 = *(float *)(iVar4 + 0x44);
    fVar2 = *(float *)(iVar4 + 0x48);
    fVar3 = *(float *)(iVar4 + 0x4c);
    *param_2 = *(float *)(iVar4 + 0x40) + local_84;
    param_2[1] = fVar1 + unaff_EDI;
    param_2[2] = fVar2 + unaff_ESI;
    param_2[3] = fVar3 + fStack_78;
    iVar4 = *(int *)(param_1 + 0xa84);
    uStack_74 = *(undefined4 *)(iVar4 + 0x40);
    local_6c = *(undefined4 *)(iVar4 + 0x48);
    local_68 = *(undefined4 *)(iVar4 + 0x4c);
    local_70 = *(float *)(iVar4 + 0x44) + 0.8;
    uVar5 = hkpAllCdPointCollector::hkpAllCdPointCollector_8(param_2,&uStack_74,&local_84);
    return uVar5;
  }
  return 0;
}

// 0053F9E0  FUN_0053f9e0  size=242  [callgraph]
undefined4 __thiscall FUN_0053f9e0(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float unaff_ESI;
  float unaff_EDI;
  float local_84;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  *param_2 = *(float *)(param_1 + 0x40);
  param_2[1] = *(float *)(param_1 + 0x44);
  param_2[2] = *(float *)(param_1 + 0x48);
  param_2[3] = *(float *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0xa84) != 0) {
    local_70 = 0.0;
    local_6c = 0x3fe66666;
    local_68 = 0x404ccccd;
    local_84 = param_3;
    D3DXMatrixRotationY(local_50);
    D3DXVec3TransformNormal(&fStack_78,&fStack_78,auStack_58);
    iVar4 = *(int *)(param_1 + 0xa84);
    fVar1 = *(float *)(iVar4 + 0x44);
    fVar2 = *(float *)(iVar4 + 0x48);
    fVar3 = *(float *)(iVar4 + 0x4c);
    *param_2 = *(float *)(iVar4 + 0x40) + local_84;
    param_2[1] = fVar1 + unaff_EDI;
    param_2[2] = fVar2 + unaff_ESI;
    param_2[3] = fVar3 + fStack_78;
    iVar4 = *(int *)(param_1 + 0xa84);
    uStack_74 = *(undefined4 *)(iVar4 + 0x40);
    local_6c = *(undefined4 *)(iVar4 + 0x48);
    local_68 = *(undefined4 *)(iVar4 + 0x4c);
    local_70 = *(float *)(iVar4 + 0x44) + 0.8;
    uVar5 = hkpAllCdPointCollector::hkpAllCdPointCollector_8(param_2,&uStack_74,&local_84);
    return uVar5;
  }
  return 0;
}

// 0053FAE0  FUN_0053fae0  size=504  [callgraph]
void __fastcall FUN_0053fae0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if ((*(int *)(param_1 + 0x15f8) != 0) && (*(int *)(param_1 + 0x1428) == 0)) {
      FUN_0051d620(0x10010,0,0,0,0);
      return;
    }
    iVar2 = FUN_0051d990();
    if (iVar2 == 0) {
      iVar2 = FUN_0051a3c0();
      if (((iVar2 == 0) || (0.7853982 <= *(float *)(param_1 + 0xaa0))) ||
         (36.0 < *(float *)(param_1 + 0xa90))) {
        iVar2 = FUN_0051da50();
        if (iVar2 != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          sVar1 = FUN_00dde2d0(0,1);
          FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
          sVar1 = FUN_00dde2d0(0,1);
          if (sVar1 != 0) {
            FUN_0051d620(0x50009,0,0,0,0);
          }
        }
        if ((4 < *(int *)(param_1 + 0x1484)) ||
           (((9 < *(int *)(param_1 + 0x1324) && (*(float *)(param_1 + 0xa90) <= 25.0)) &&
            (*(float *)(param_1 + 0xaa0) < 0.7853982)))) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          uVar3 = 0;
          sVar1 = FUN_00dde2d0(0,1);
          FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
          *(undefined4 *)(param_1 + 0x14a0) = 1;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x1418);
          if (iVar2 == 0) {
            FUN_00522dd0();
            return;
          }
          if (iVar2 == 1) {
            FUN_00522f10();
            return;
          }
          if (iVar2 == 2) {
            FUN_0053d620();
            return;
          }
        }
      }
      else {
        FUN_0051d620(0x5000e,0,0,0,0);
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 != 0) {
          iVar2 = FUN_00518a90();
          if (iVar2 != 0) {
            FUN_0051d620(0x50010,0,0,0,0);
            return;
          }
        }
      }
    }
    else {
      if (iVar2 == 2) {
        if (*(int *)(param_1 + 0x4a0) != 2) {
          FUN_0051d620(0x10019,0,0,0,0);
          return;
        }
        FUN_0051d620(0x10009,0,0,0,0);
        return;
      }
      if (iVar2 == 1) {
        FUN_0051d620(0x10009,0,0,0,0);
        return;
      }
    }
  }
  return;
}

// 0053FCE0  FUN_0053fce0  size=5199  [callgraph]
void __fastcall FUN_0053fce0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uVar9;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  local_34 = 0.08;
  local_38 = 0.5;
  if (param_1[0x50a] != 0) {
    local_34 = 0.03;
    local_38 = 0.1;
  }
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    uVar6 = 0x4e;
    if (param_1[0x186] == 0x50009) {
      uVar6 = 0x4d;
    }
    FUN_00aa4080(uVar6,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    FUN_0051cd50(1,1,1,1);
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    uVar9 = 0;
    FUN_00a92f90(0);
    FUN_0041cc40(uVar9);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    switchD_0080dbae::default();
    param_1[0x56c] = param_1[0x224];
    param_1[0x56d] = param_1[0x225];
    param_1[0x56e] = param_1[0x226];
    param_1[0x56f] = param_1[0x227];
    param_1[0x56d] = 0;
    if (param_1[0x186] == 0x50009) {
      param_1[0x56c] = 0;
      param_1[0x56e] = 0;
    }
    D3DXVec3TransformNormal(param_1 + 0x224,param_1 + 0x224,param_1 + 4);
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    param_1[0x572] = 0;
    param_1[0x250] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x4f,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cd50(1,1,1,1);
    FUN_00a8d280();
    param_1[0x52a] = 0x42700000;
    uVar9 = 0;
    FUN_00a92f90(0);
    FUN_0041cc40(uVar9);
    param_1[0x225] = 0;
    param_1[0x224] = 0;
    param_1[0x226] = 0;
    param_1[0x56c] = 0;
    param_1[0x56d] = 0;
    param_1[0x56e] = 0;
    param_1[0x248] = 0;
    param_1[0x24a] = 0x41200000;
    if ((param_1[0x50a] != 0) && (param_1[0x24a] = 0x41a00000, param_1[0x506] == 2)) {
      param_1[0x24a] = 0x40a00000;
    }
    if ((param_1[0x508] != 0) || (iVar7 = FUN_0051a3c0(), iVar7 != 0)) {
      param_1[0x24a] = 0x3f800000;
    }
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    goto LAB_005401cb;
  case 3:
LAB_005401cb:
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    if (param_1[0x50a] != 0) {
      (**(code **)(*param_1 + 0x318))();
      fVar8 = (float10)FUN_00519070();
      fVar8 = (float10)FUN_00ddba30((float)(fVar8 + (float10)(float)param_1[0x50c]));
      iVar7 = FUN_0053f9e0(&iStack_20,(float)fVar8);
      if (iVar7 == 0) {
        param_1[0x14] = iStack_20;
        param_1[0x15] = iStack_1c;
        param_1[0x16] = iStack_18;
        param_1[0x17] = iStack_14;
        (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,param_1 + 0x24);
        switchD_0080dbae::default();
        FUN_00a8e880(param_1[0x2a1] + 0x40);
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      }
    }
    if ((float)param_1[0x225] <= 0.0) {
      param_1[0x225] = (int)((float)param_1[0x225] * 0.7);
    }
    FUN_00ac80a0(0,0x3f800000);
    if ((float)param_1[0x248] <= (float)param_1[0x24a]) {
LAB_005403ea:
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
    }
    else {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_0053fd46_default;
  case 4:
    FUN_00aa4080(0x50,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar9 = 0;
    FUN_00a92f90(0);
    FUN_0041cc40(uVar9);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0x3e19999a;
    if (param_1[0x508] != 0) {
      param_1[0x24a] = 0x3e4ccccd;
    }
    if (param_1[0x50a] != 0) {
      param_1[0x24a] = 0x3d4ccccd;
    }
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    goto LAB_0054037b;
  case 5:
LAB_0054037b:
    param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
    param_1[0x15] = (int)((float)param_1[0x24a] + (float)param_1[0x15]);
    fVar8 = (float10)FUN_00fdc1f0();
    pcVar5 = *(code **)(*param_1 + 0x318);
    param_1[0x24a] = (int)(float)(fVar8 * (float10)(float)param_1[0x24a]);
    (*pcVar5)();
    FUN_00ac80a0(0,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_005403ea;
  case 6:
    FUN_00aa4080(0x51,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    uVar9 = 0;
    FUN_00a92f90(0);
    FUN_0041cc40(uVar9);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x56c] = 0;
    param_1[0x56d] = 0;
    pfVar1 = (float *)(param_1 + 0x568);
    param_1[0x56e] = 0;
    *pfVar1 = 0.0;
    param_1[0x569] = -0x41b33333;
    param_1[0x56a] = 0x3e99999a;
    D3DXVec3TransformNormal(pfVar1,pfVar1,param_1 + 4);
    iVar7 = param_1[0x2a1];
    if (iVar7 != 0) {
      fVar2 = *(float *)(iVar7 + 0x44);
      fVar3 = *(float *)(iVar7 + 0x48);
      fVar4 = *(float *)(iVar7 + 0x4c);
      *pfVar1 = *(float *)(iVar7 + 0x40) - (float)param_1[0x10];
      param_1[0x569] = (int)((fVar2 + local_38) - (float)param_1[0x11]);
      param_1[0x56a] = (int)(fVar3 - (float)param_1[0x12]);
      param_1[0x56b] = (int)(fVar4 - (float)param_1[0x13]);
      fVar2 = (float)param_1[0x56a] * (float)param_1[0x56a] +
              *pfVar1 * *pfVar1 + (float)param_1[0x569] * (float)param_1[0x569];
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        param_1[0x569] = 0x3f800000;
        param_1[0x56a] = 0;
      }
    }
    goto LAB_00540577;
  case 7:
LAB_00540577:
    iVar7 = param_1[0x2a1];
    if (iVar7 != 0) {
      pfVar1 = (float *)(param_1 + 0x568);
      fVar2 = *(float *)(iVar7 + 0x44);
      fVar3 = *(float *)(iVar7 + 0x48);
      fVar4 = *(float *)(iVar7 + 0x4c);
      *pfVar1 = *(float *)(iVar7 + 0x40) - (float)param_1[0x10];
      param_1[0x569] = (int)((fVar2 + local_38) - (float)param_1[0x11]);
      param_1[0x56a] = (int)(fVar3 - (float)param_1[0x12]);
      param_1[0x56b] = (int)(fVar4 - (float)param_1[0x13]);
      fVar2 = (float)param_1[0x56a] * (float)param_1[0x56a] +
              *pfVar1 * *pfVar1 + (float)param_1[0x569] * (float)param_1[0x569];
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        param_1[0x569] = 0x3f800000;
        param_1[0x56a] = 0;
      }
      fVar2 = (float)param_1[0x569];
      if (!NAN(fVar2) && -0.05 < fVar2 != (fVar2 == -0.05)) {
        param_1[0x569] = -0x42b33333;
      }
    }
    fVar2 = (float)param_1[0x244];
    pfVar1 = (float *)(param_1 + 0x56c);
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar1 * fVar2);
    param_1[0x15] = (int)(fVar2 * (float)param_1[0x56d] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x56e] * fVar2 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x56f] * fVar2 + (float)param_1[0x17]);
    *pfVar1 = *pfVar1 + (float)param_1[0x568] * local_34;
    param_1[0x56d] = (int)((float)param_1[0x569] * local_34 + (float)param_1[0x56d]);
    param_1[0x56e] = (int)((float)param_1[0x56a] * local_34 + (float)param_1[0x56e]);
    param_1[0x56f] = (int)((float)param_1[0x56b] * local_34 + (float)param_1[0x56f]);
    fVar8 = (float10)FUN_00fdc1f0();
    *pfVar1 = (float)((float10)*pfVar1 * fVar8);
    param_1[0x56d] = (int)(float)(fVar8 * (float10)(float)param_1[0x56d]);
    param_1[0x56e] = (int)(float)((float10)(float)param_1[0x56e] * fVar8);
    param_1[0x56f] = (int)(float)(fVar8 * (float10)(float)param_1[0x56f]);
    fVar2 = *pfVar1 * *pfVar1;
    if (0.7 <= SQRT((float)param_1[0x56d] * (float)param_1[0x56d] + fVar2 +
                    (float)param_1[0x56e] * (float)param_1[0x56e])) {
      fVar2 = (float)param_1[0x56e] * (float)param_1[0x56e] +
              (float)param_1[0x56d] * (float)param_1[0x56d] + fVar2;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        param_1[0x56d] = 0x3f800000;
        param_1[0x56e] = 0;
      }
      *pfVar1 = *pfVar1 * 0.7;
      param_1[0x56d] = (int)((float)param_1[0x56d] * 0.7);
      param_1[0x56e] = (int)((float)param_1[0x56e] * 0.7);
      param_1[0x56f] = (int)((float)param_1[0x56f] * 0.7);
    }
    (**(code **)(*param_1 + 0x308))(0x3d4ccccd,0x393702d3,0x3d8efa35,0);
    iVar7 = param_1[0x2a1];
    if ((iVar7 != 0) &&
       (fVar2 = *(float *)(iVar7 + 0x40) - (float)param_1[0x14],
       fVar4 = *(float *)(iVar7 + 0x44) - (float)param_1[0x15],
       fVar3 = *(float *)(iVar7 + 0x48) - (float)param_1[0x16],
       SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) < 6.0)) {
      param_1[0x187] = 10;
    }
    goto LAB_005403ea;
  case 8:
    FUN_00aa4080(0x54,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cd50(1,1,1,1);
    param_1[0x52a] = 0x42700000;
    uVar9 = 0;
    FUN_00a92f90(0);
    FUN_0041cc40(uVar9);
    param_1[0x569] = 0;
    goto LAB_005408e3;
  case 9:
LAB_005408e3:
    (**(code **)(*param_1 + 0x318))();
    FUN_00ac80a0(0,0x3f800000);
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x56c]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x56d]);
    param_1[0x16] = (int)((float)param_1[0x56e] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x56f] + (float)param_1[0x17]);
    fVar8 = (float10)FUN_00fdc1f0();
    param_1[0x56c] = (int)(float)(fVar8 * (float10)(float)param_1[0x56c]);
    param_1[0x56d] = (int)(float)(fVar8 * (float10)(float)param_1[0x56d]);
    param_1[0x56e] = (int)(float)(fVar8 * (float10)(float)param_1[0x56e]);
    param_1[0x56f] = (int)(float)(fVar8 * (float10)(float)param_1[0x56f]);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    goto switchD_0053fd46_default;
  case 10:
    FUN_00aa4080(0x52,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar9 = 0;
    FUN_00a92f90(0);
    FUN_0041cc40(uVar9);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cd50(1,1,1,1);
    FUN_00a8d280();
    param_1[0x570] = 0;
    param_1[0x571] = 0;
    goto LAB_00540a0a;
  case 0xb:
LAB_00540a0a:
    (**(code **)(*param_1 + 0x318))();
    FUN_00ac80a0(0,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar7 = param_1[0x2a1];
    if (iVar7 != 0) {
      pfVar1 = (float *)(param_1 + 0x568);
      fVar2 = *(float *)(iVar7 + 0x44);
      fVar3 = *(float *)(iVar7 + 0x48);
      fVar4 = *(float *)(iVar7 + 0x4c);
      *pfVar1 = *(float *)(iVar7 + 0x40) - (float)param_1[0x10];
      param_1[0x569] = (int)((fVar2 + local_38) - (float)param_1[0x11]);
      param_1[0x56a] = (int)(fVar3 - (float)param_1[0x12]);
      param_1[0x56b] = (int)(fVar4 - (float)param_1[0x13]);
      fVar2 = (float)param_1[0x56a] * (float)param_1[0x56a] +
              *pfVar1 * *pfVar1 + (float)param_1[0x569] * (float)param_1[0x569];
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        param_1[0x569] = 0x3f800000;
        param_1[0x56a] = 0;
      }
      fVar2 = (float)param_1[0x569];
      if (!NAN(fVar2) && -0.05 < fVar2 != (fVar2 == -0.05)) {
        param_1[0x569] = -0x42b33333;
      }
    }
    fVar2 = (float)param_1[0x244];
    pfVar1 = (float *)(param_1 + 0x56c);
    param_1[0x14] = (int)(fVar2 * *pfVar1 + (float)param_1[0x14]);
    param_1[0x15] = (int)(fVar2 * (float)param_1[0x56d] + (float)param_1[0x15]);
    param_1[0x16] = (int)(fVar2 * (float)param_1[0x56e] + (float)param_1[0x16]);
    param_1[0x17] = (int)(fVar2 * (float)param_1[0x56f] + (float)param_1[0x17]);
    *pfVar1 = (float)param_1[0x568] * local_34 + *pfVar1;
    param_1[0x56d] = (int)((float)param_1[0x569] * local_34 + (float)param_1[0x56d]);
    param_1[0x56e] = (int)((float)param_1[0x56a] * local_34 + (float)param_1[0x56e]);
    param_1[0x56f] = (int)((float)param_1[0x56b] * local_34 + (float)param_1[0x56f]);
    fVar8 = (float10)FUN_00fdc1f0();
    *pfVar1 = (float)(fVar8 * (float10)*pfVar1);
    param_1[0x56d] = (int)(float)(fVar8 * (float10)(float)param_1[0x56d]);
    param_1[0x56e] = (int)(float)(fVar8 * (float10)(float)param_1[0x56e]);
    param_1[0x56f] = (int)(float)(fVar8 * (float10)(float)param_1[0x56f]);
    fVar2 = *pfVar1 * *pfVar1;
    if (0.7 <= SQRT((float)param_1[0x56d] * (float)param_1[0x56d] + fVar2 +
                    (float)param_1[0x56e] * (float)param_1[0x56e])) {
      fVar2 = (float)param_1[0x56e] * (float)param_1[0x56e] +
              (float)param_1[0x56d] * (float)param_1[0x56d] + fVar2;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        param_1[0x56d] = 0x3f800000;
        param_1[0x56e] = 0;
      }
      *pfVar1 = *pfVar1 * 0.7;
      param_1[0x56d] = (int)((float)param_1[0x56d] * 0.7);
      param_1[0x56e] = (int)((float)param_1[0x56e] * 0.7);
      param_1[0x56f] = (int)((float)param_1[0x56f] * 0.7);
    }
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
    if (((param_1[0x50a] != 0) || (param_1[0x508] != 0)) || (iVar7 = FUN_0051a3c0(), iVar7 != 0)) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
      iVar7 = FUN_00a12210(0xf00);
      if (iVar7 != 0) {
        fStack_30 = 0.0;
        fStack_2c = 0.0;
        fStack_28 = 0.0;
        D3DXVec3TransformNormal(&fStack_30,&fStack_30,iVar7 + 0x10);
        fStack_30 = fStack_30 + *(float *)(iVar7 + 0x40);
        fStack_2c = *(float *)(iVar7 + 0x44) + fStack_2c;
        fStack_28 = *(float *)(iVar7 + 0x48) + fStack_28;
        fVar2 = *(float *)(param_1[0x2a1] + 0x48);
        param_1[0x14] =
             (int)((float)param_1[0x14] + (*(float *)(param_1[0x2a1] + 0x40) - fStack_30) * 0.1);
        param_1[0x15] = param_1[0x15];
        param_1[0x16] = (int)((fVar2 - fStack_28) * 0.1 + (float)param_1[0x16]);
      }
    }
    goto switchD_0053fd46_default;
  case 0xc:
    FUN_00aa4080(0x53,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    uVar9 = 0;
    FUN_00a92f90(0);
    FUN_0041cc40(uVar9);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cd50(1,1,1,1);
    goto LAB_00540e17;
  case 0xd:
LAB_00540e17:
    (**(code **)(*param_1 + 0x318))();
    FUN_00ac80a0(0,0x3f800000);
    iVar7 = param_1[0x2a1];
    if (iVar7 != 0) {
      pfVar1 = (float *)(param_1 + 0x568);
      fVar2 = *(float *)(iVar7 + 0x44);
      fVar3 = *(float *)(iVar7 + 0x48);
      fVar4 = *(float *)(iVar7 + 0x4c);
      *pfVar1 = *(float *)(iVar7 + 0x40) - (float)param_1[0x10];
      param_1[0x569] = (int)((fVar2 + local_38) - (float)param_1[0x11]);
      param_1[0x56a] = (int)(fVar3 - (float)param_1[0x12]);
      param_1[0x56b] = (int)(fVar4 - (float)param_1[0x13]);
      fVar2 = (float)param_1[0x56a] * (float)param_1[0x56a] +
              *pfVar1 * *pfVar1 + (float)param_1[0x569] * (float)param_1[0x569];
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        param_1[0x569] = 0x3f800000;
        param_1[0x56a] = 0;
      }
      fVar2 = (float)param_1[0x569];
      if (!NAN(fVar2) && -0.05 < fVar2 != (fVar2 == -0.05)) {
        param_1[0x569] = -0x42b33333;
      }
    }
    fVar2 = (float)param_1[0x244];
    pfVar1 = (float *)(param_1 + 0x56c);
    param_1[0x14] = (int)(fVar2 * *pfVar1 + (float)param_1[0x14]);
    param_1[0x15] = (int)(fVar2 * (float)param_1[0x56d] + (float)param_1[0x15]);
    param_1[0x16] = (int)(fVar2 * (float)param_1[0x56e] + (float)param_1[0x16]);
    param_1[0x17] = (int)(fVar2 * (float)param_1[0x56f] + (float)param_1[0x17]);
    *pfVar1 = (float)param_1[0x568] * local_34 + *pfVar1;
    param_1[0x56d] = (int)((float)param_1[0x569] * local_34 + (float)param_1[0x56d]);
    param_1[0x56e] = (int)((float)param_1[0x56a] * local_34 + (float)param_1[0x56e]);
    param_1[0x56f] = (int)((float)param_1[0x56b] * local_34 + (float)param_1[0x56f]);
    fVar8 = (float10)FUN_00fdc1f0();
    *pfVar1 = (float)(fVar8 * (float10)*pfVar1);
    param_1[0x56d] = (int)(float)(fVar8 * (float10)(float)param_1[0x56d]);
    param_1[0x56e] = (int)(float)(fVar8 * (float10)(float)param_1[0x56e]);
    param_1[0x56f] = (int)(float)(fVar8 * (float10)(float)param_1[0x56f]);
    fVar2 = *pfVar1 * *pfVar1;
    if (0.7 <= SQRT((float)param_1[0x56d] * (float)param_1[0x56d] + fVar2 +
                    (float)param_1[0x56e] * (float)param_1[0x56e])) {
      fVar2 = (float)param_1[0x56e] * (float)param_1[0x56e] +
              (float)param_1[0x56d] * (float)param_1[0x56d] + fVar2;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(pfVar1,pfVar1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        param_1[0x56d] = 0x3f800000;
        param_1[0x56e] = 0;
      }
      *pfVar1 = *pfVar1 * 0.7;
      param_1[0x56d] = (int)((float)param_1[0x56d] * 0.7);
      param_1[0x56e] = (int)((float)param_1[0x56e] * 0.7);
      param_1[0x56f] = (int)((float)param_1[0x56f] * 0.7);
    }
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
  default:
    goto switchD_0053fd46_default;
  }
  iVar7 = FUN_00a8c760(10);
  if (iVar7 != 0) {
    param_1[0x225] = 0x3e800000;
    param_1[0x224] = 0;
    param_1[0x226] = -0x42b33333;
    if ((float)param_1[0x2a4] < 36.0) {
      param_1[0x226] = -0x42333333;
    }
    if ((float)param_1[0x2a4] < 25.0) {
      param_1[0x226] = -0x41b33333;
    }
    if ((float)param_1[0x2a4] < 16.0) {
      param_1[0x226] = -0x41666666;
    }
    if ((float)param_1[0x2a4] < 9.0) {
      param_1[0x226] = -0x41333333;
    }
    if ((float)param_1[0x2a4] < 4.0) {
      param_1[0x226] = -0x41000000;
    }
    if (100.0 < (float)param_1[0x2a4]) {
      param_1[0x226] = 0x3dcccccd;
    }
    if (144.0 < (float)param_1[0x2a4]) {
      param_1[0x226] = 0x3e4ccccd;
    }
    if (param_1[0x186] == 0x50009) {
      param_1[0x225] = 0x3eb33333;
      param_1[0x226] = (int)((float)param_1[0x226] - 0.2);
    }
    if ((float)param_1[0x2a4] < 16.0) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3f8efa35,0);
    }
  }
  fVar2 = (float)param_1[0x244];
  param_1[0x14] = (int)(fVar2 * (float)param_1[0x56c] + (float)param_1[0x14]);
  param_1[0x15] = (int)(fVar2 * (float)param_1[0x56d] + (float)param_1[0x15]);
  param_1[0x16] = (int)(fVar2 * (float)param_1[0x56e] + (float)param_1[0x16]);
  param_1[0x17] = (int)(fVar2 * (float)param_1[0x56f] + (float)param_1[0x17]);
  fVar8 = (float10)FUN_00fdc1f0();
  param_1[0x56c] = (int)(float)(fVar8 * (float10)(float)param_1[0x56c]);
  param_1[0x56d] = (int)(float)(fVar8 * (float10)(float)param_1[0x56d]);
  param_1[0x56e] = (int)(float)(fVar8 * (float10)(float)param_1[0x56e]);
  param_1[0x56f] = (int)(float)(fVar8 * (float10)(float)param_1[0x56f]);
  FUN_00ac80a0(0,0x3f800000);
  iVar7 = FUN_00a94ce0(0);
  if (iVar7 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
switchD_0053fd46_default:
  iVar7 = FUN_00a8c760(0);
  if (iVar7 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00541300  FUN_00541300  size=423  [callgraph]
void __fastcall FUN_00541300(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x50a] == 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    if (param_1[0x250] < 1) {
      FUN_0051d620(0x10009,0,0,0,0);
      sVar1 = FUN_00dde2d0(0,1);
      if (((sVar1 == 0) && (param_1[0x508] == 0)) && (iVar2 = FUN_0051a3c0(), iVar2 == 0)) {
        return;
      }
      fVar4 = (float10)fpatan((float10)DAT_01bea390 - (float10)DAT_01bea380,
                              (float10)DAT_01bea398 - (float10)DAT_01bea388);
      fVar3 = (float10)FUN_00ddba30((float)(fVar4 + (float10)0.5235988));
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        fVar3 = (float10)FUN_00ddba30((float)fVar4 - 0.5235988);
      }
      fStack_28 = (float)fVar3;
      fVar3 = (float10)FUN_00ddba30(fStack_28 - (float)fVar4);
      param_1[0x50c] = (int)(float)fVar3;
      iVar2 = FUN_0053f9e0(&iStack_20,fStack_28);
      if (iVar2 == 0) {
        param_1[0x14] = iStack_20;
        param_1[0x15] = iStack_1c;
        param_1[0x16] = iStack_18;
        param_1[0x17] = iStack_14;
        (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,param_1 + 0x24);
        switchD_0080dbae::default();
        FUN_00a8e880(param_1[0x2a1] + 0x40);
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
        FUN_0051d620(0x50008,0,2,0,0);
      }
    }
  }
  return;
}

// 005414B0  FUN_005414b0  size=815  [callgraph]
void __fastcall FUN_005414b0(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(5,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    fVar3 = (float10)FUN_00dde300(0xc0490fdb,0x40490fdb);
    param_1[0x248] = (int)(float)fVar3;
    local_24 = 0;
    do {
      fVar3 = (float10)FUN_00ddba30((float)local_24 * 45.0 * 0.017453292 + (float)param_1[0x248]);
      iVar2 = FUN_0053f8e0(&local_20,(float)fVar3);
      if (iVar2 == 0) {
        fVar3 = (float10)FUN_00ddba30((float)local_24 * 45.0 * 0.017453292 + (float)param_1[0x248]);
        param_1[0x248] = (int)(float)fVar3;
        break;
      }
      local_24 = local_24 + 1;
    } while (local_24 < 8);
    param_1[0x14] = local_20;
    param_1[0x15] = local_1c;
    param_1[0x16] = local_18;
    param_1[0x17] = local_14;
    fVar3 = (float10)FUN_00dde300(0,0x42700000);
    param_1[0x249] = (int)(float)(fVar3 + (float10)60.0);
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x250] = sVar1 + 1;
    if ((param_1[0x506] == 2) || (iVar2 = FUN_00ac4780(), 1 < iVar2)) {
      param_1[0x249] = 0x40000000;
      sVar1 = FUN_00dde2d0(0,2);
      param_1[0x250] = sVar1 + 1;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_005417ad;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  iVar2 = FUN_0053f8e0(&local_20,param_1[0x248]);
  if ((iVar2 != 0) || ((float)param_1[0x249] < 0.0)) {
    param_1[0x250] = param_1[0x250] + -1;
    fVar3 = (float10)FUN_00dde300(0,0x41f00000);
    param_1[0x249] = (int)(float)(fVar3 + (float10)30.0);
    if ((param_1[0x506] == 2) || (iVar2 = FUN_00ac4780(), 1 < iVar2)) {
      param_1[0x249] = 0x40000000;
    }
    fVar3 = (float10)FUN_00dde300(0xc0490fdb,0x40490fdb);
    param_1[0x248] = (int)(float)fVar3;
    local_24 = 0;
    do {
      fVar3 = (float10)FUN_00ddba30((float)local_24 * 45.0 * 0.017453292 + (float)param_1[0x248]);
      iVar2 = FUN_0053f8e0(&local_20,(float)fVar3);
      if (iVar2 == 0) {
        fVar3 = (float10)FUN_00ddba30((float)local_24 * 45.0 * 0.017453292 + (float)param_1[0x248]);
        param_1[0x248] = (int)(float)fVar3;
        break;
      }
      local_24 = local_24 + 1;
    } while (local_24 < 8);
  }
  (**(code **)(*param_1 + 0x7c))(&local_20,param_1 + 0x24);
  param_1[0x14] = local_20;
  param_1[0x15] = local_1c;
  param_1[0x16] = local_18;
  param_1[0x17] = local_14;
LAB_005417ad:
  (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
  return;
}

// 005417E0  FUN_005417e0  size=403  [callgraph]
void __fastcall FUN_005417e0(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x186];
  if (iVar1 < 0x50001) {
    if (iVar1 == 0x50000) {
      FUN_00524b90();
      return;
    }
    switch(iVar1) {
    case 0x10000:
      FUN_00530a40();
      return;
    case 0x10001:
      FUN_00541300();
      return;
    case 0x10002:
      FUN_00522780();
      return;
    case 0x10003:
      FUN_005228f0();
      return;
    case 0x10004:
    case 0x10005:
    case 0x10006:
    case 0x10007:
      FUN_00522b40();
      return;
    case 0x10008:
      FUN_0053fae0();
      return;
    case 0x10009:
      FUN_0053d7f0();
      return;
    case 0x1000a:
    case 0x1000b:
      FUN_00523cd0();
      return;
    case 0x1000c:
    case 0x1000f:
      FUN_00523fc0();
      return;
    case 0x1000d:
    case 0x1000e:
      FUN_005241c0();
      return;
    case 0x10011:
      if ((param_1[0x187] != 0) && (60.0 <= (float)param_1[0x248])) {
        FUN_0051d620(0x10015,0,0,0,0);
      }
      return;
    case 0x10016:
      FUN_00524590();
      return;
    case 0x1001b:
      FUN_00524940();
      return;
    case 0x1001d:
      if ((((param_1[0x187] != 0) && (param_1[0x54c] != 0)) && (param_1[0x54c] != 1)) &&
         (60.0 < (float)param_1[0x248])) {
        FUN_0051d620(0x1001e,0,0,0,0);
      }
      return;
    }
  }
  else if (iVar1 < 0x60001) {
    if (iVar1 == 0x60000) {
      FUN_00527dc0();
      return;
    }
    switch(iVar1) {
    case 0x50001:
      FUN_00524c40();
      return;
    case 0x50006:
      FUN_00524ec0();
      return;
    case 0x50007:
      FUN_00525680();
      return;
    case 0x50008:
    case 0x50009:
      FUN_005257d0();
      return;
    case 0x5000c:
      FUN_00525db0();
      return;
    case 0x5000d:
      FUN_00526260();
      return;
    case 0x5000e:
      FUN_00526720();
      return;
    case 0x5000f:
      FUN_00526c30();
      return;
    case 0x50010:
      FUN_00527240();
      return;
    case 0x50011:
      FUN_00519390();
      return;
    case 0x50012:
      FUN_00519410();
      return;
    }
  }
  else if ((iVar1 < 0x80001) && (iVar1 != 0x80000)) {
    switch(iVar1) {
    case 0x60001:
      FUN_005281e0();
      return;
    case 0x60002:
      iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
      if ((param_1[0x187] == 3) && (iVar1 != 0)) {
        param_1[0x187] = 4;
      }
      return;
    case 0x60003:
      FUN_0053e460();
      return;
    }
  }
  return;
}

// 005419B0  FUN_005419b0  size=11778  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005419b0(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  float fStack_a4;
  float afStack_a0 [12];
  undefined4 uStack_70;
  undefined *puStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  char *local_60;
  undefined4 *puStack_5c;
  char *local_58;
  undefined **local_54;
  float in_stack_ffffffc4;
  float fVar12;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  undefined *local_20;
  float local_1c;
  float local_18;
  int *local_14;
  
  iVar7 = param_1[0x186];
  if (0x50000 < iVar7) {
    if (iVar7 < 0x60001) {
      if (iVar7 == 0x60000) {
        FUN_00528010();
        return;
      }
      switch(iVar7) {
      case 0x50001:
        goto LAB_00531aa0;
      case 0x50002:
        if (param_1[0x187] == 0) {
          local_14 = (int *)0x8000000;
          local_18 = 1.0;
          local_1c = 0.16666667;
          local_20 = (undefined *)0x0;
          fStack_24 = 5.60519e-45;
          local_28 = 7.657583e-39;
          FUN_00aa4080();
          param_1[0x187] = param_1[0x187] + 1;
          FUN_0051cc20();
          iVar7 = FUN_00a81330();
          if ((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
            local_14 = (int *)0x0;
            local_18 = 0.0;
            *(undefined4 *)(iVar7 + 0xdc0) = 0x3e;
            *(undefined4 *)(iVar7 + 0xdc4) = 0;
            *(undefined4 *)(iVar7 + 0xdc8) = 0;
            *(undefined4 *)(iVar7 + 0xdd0) = 0;
            *(undefined4 *)(iVar7 + 0xdcc) = 1;
            local_1c = 7.657732e-39;
            FUN_0051df70();
            FUN_00a8d280();
            iVar7 = FUN_00a81330();
            if ((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
              FUN_009f8b40();
              FUN_009f8ae0();
            }
          }
          iVar7 = FUN_00a92f90();
          if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x94) & 1) != 0)) {
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xfffffff7;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffef;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffdf;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffbf;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 8;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x10;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x40;
            }
          }
          FUN_00a8d280();
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        FUN_00ac80a0();
        iVar7 = FUN_00a94ce0();
        if (iVar7 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x005363a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      case 0x50003:
        FUN_005399f0();
        return;
      case 0x50004:
        FUN_00539f60();
        return;
      case 0x50005:
        FUN_00524c70();
        return;
      case 0x50006:
        FUN_005252a0();
        return;
      case 0x50007:
        FUN_00531bf0();
        return;
      case 0x50008:
      case 0x50009:
        FUN_0053fce0();
        return;
      case 0x5000a:
        FUN_0053e150();
        return;
      case 0x5000b:
        FUN_00525930();
        return;
      case 0x5000c:
        FUN_00525fe0();
        return;
      case 0x5000d:
        FUN_00526460();
        return;
      case 0x5000e:
        FUN_00526950();
        return;
      case 0x5000f:
        FUN_00526e60();
        return;
      case 0x50010:
        FUN_005273f0();
        return;
      case 0x50011:
        FUN_00527640();
        return;
      case 0x50012:
        (**(code **)(*param_1 + 0x314))();
        iVar7 = FUN_00a8c760();
        if (iVar7 != 0) {
          (**(code **)(*param_1 + 0x318))();
        }
        if (param_1[0x187] == 0) {
          local_54 = (undefined **)0x3e2aaaab;
          local_58 = (char *)0x0;
          puStack_5c = (undefined4 *)0x5f;
          local_60 = (char *)0x527aec;
          FUN_00aa4080();
          param_1[0x187] = param_1[0x187] + 1;
          FUN_0051cc20();
          iVar7 = FUN_00a92f90();
          if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x94) & 1) != 0)) {
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xfffffff7;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffef;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffdf;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffbf;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 8;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x10;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x20;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x40;
            }
          }
          FUN_00a8d280();
          param_1[0x52a] = 0x42700000;
          param_1[0x250] = 0;
          param_1[0x251] = 0;
          param_1[0x252] = 0;
          param_1[0x570] = 0;
          param_1[0x571] = 0;
        }
        else if (param_1[0x187] != 1) goto LAB_00527c75;
        FUN_00ac80a0();
        iVar7 = FUN_00a94ce0();
        if (iVar7 != 0) {
          local_54 = (undefined **)0x1000d;
          local_58 = (char *)0x527c07;
          FUN_0051d620();
          if ((param_1[0x570] != 0) || (param_1[0x571] != 0)) {
            local_54 = (undefined **)0x1000e;
            local_58 = (char *)0x527c27;
            FUN_0051d620();
          }
          param_1[0x52a] = 0x42700000;
        }
        if (param_1[0x252] == 0) {
          if ((param_1[0x570] != 0) || (param_1[0x571] != 0)) {
            param_1[0x252] = 1;
            param_1[0x225] = 0x3e4ccccd;
          }
          if (param_1[0x252] == 0) goto LAB_00527c75;
        }
        (**(code **)(*param_1 + 0x314))();
LAB_00527c75:
        iVar7 = FUN_00a8c760();
        if (((iVar7 != 0) && (param_1[0x570] == 0)) && (param_1[0x571] == 0)) {
          iVar7 = param_1[0x2a1];
          if (iVar7 != 0) {
            *(float *)(iVar7 + 0x890) = *(float *)(iVar7 + 0x890) * 0.1;
            *(float *)(param_1[0x2a1] + 0x894) = *(float *)(param_1[0x2a1] + 0x894) * 0.1;
            *(float *)(param_1[0x2a1] + 0x898) = *(float *)(param_1[0x2a1] + 0x898) * 0.1;
          }
          iVar7 = FUN_00a12210();
          if (iVar7 != 0) {
            local_30 = 0;
            local_2c = 0.0;
            local_28 = 0.0;
            D3DXVec3TransformNormal();
            fVar12 = *(float *)(iVar7 + 0x40) + unaff_ESI;
            iVar8 = param_1[0x2a1];
            fVar3 = *(float *)(iVar7 + 0x44) + unaff_EBX;
            fVar2 = *(float *)(iVar7 + 0x48) + local_34;
            local_2c = (*(float *)(iVar8 + 0x40) - fVar12) * 0.1;
            local_28 = (*(float *)(iVar8 + 0x44) - fVar3) * 0.1;
            fStack_24 = (*(float *)(iVar8 + 0x48) - fVar2) * 0.1;
            local_54 = (undefined **)0x3f0efa35;
            local_58 = (char *)0x393702d3;
            puStack_5c = (undefined4 *)0x3f000000;
            local_60 = (char *)0x527d9a;
            (**(code **)(*param_1 + 0x308))();
            param_1[0x14] = (int)((float)param_1[0x14] + fVar12);
            param_1[0x15] = (int)((float)param_1[0x15] + fVar3);
            param_1[0x16] = (int)((float)param_1[0x16] + fVar2);
          }
        }
        return;
      default:
        goto switchD_005419d5_default;
      }
    }
    if (iVar7 < 0x80001) {
      if (iVar7 == 0x80000) {
        FUN_00532250();
        return;
      }
      switch(iVar7) {
      case 0x60001:
        if (param_1[0x187] == 0) {
          sVar5 = 0xa7;
          if ((float)param_1[0x57d] * (float)param_1[0x57d] < 2.4674013) {
            sVar5 = 0xa8;
          }
          fStack_24 = (float)(int)sVar5;
          local_14 = (int *)0x8000000;
          local_18 = 1.0;
          local_1c = 0.06666667;
          local_20 = (undefined *)0x0;
          local_28 = 7.57802e-39;
          FUN_00aa4080();
          param_1[0x187] = param_1[0x187] + 1;
          FUN_0051cc20();
          iVar7 = FUN_00a92f90();
          if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x94) & 1) != 0)) {
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xfffffff7;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffef;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffdf;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffbf;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 8;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x10;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x20;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x40;
            }
          }
          param_1[0x578] = param_1[0x578] + 1;
          param_1[0x577] = -0x40800000;
          param_1[0x579] = 0x43960000;
          param_1[0x250] = 0;
          param_1[0x576] = 0;
          param_1[0x57a] = 0;
          local_14 = (int *)0x528580;
          FUN_00eaa6e0();
        }
        else if (param_1[0x187] != 1) goto LAB_005285b9;
        FUN_00ac80a0();
        iVar7 = FUN_00a94ce0();
        if (iVar7 != 0) {
          (**(code **)(*param_1 + 0x34c))();
          param_1[0x52a] = 0x42700000;
        }
LAB_005285b9:
        iVar7 = FUN_00a8c760();
        if (iVar7 != 0) {
          local_14 = (int *)0x3dcccccd;
          local_18 = 7.57857e-39;
          (**(code **)(*param_1 + 0x308))();
        }
        return;
      case 0x60002:
        goto LAB_00531eb0;
      case 0x60003:
        FUN_0053e5a0();
        return;
      case 0x60004:
        FUN_00528600();
        return;
      case 0x60005:
        if (param_1[0x187] == 0) {
          local_14 = (int *)0x53a4c8;
          FUN_00a94bc0();
          local_14 = (int *)0x8000000;
          local_18 = 1.0;
          local_1c = 0.06666667;
          local_20 = (undefined *)0x0;
          fStack_24 = 4.06377e-44;
          local_28 = 7.681529e-39;
          FUN_00aa4080();
          param_1[0x187] = param_1[0x187] + 1;
          FUN_0051cc20();
          iVar7 = FUN_00a92f90();
          if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x94) & 1) != 0)) {
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xfffffff7;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffef;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffdf;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xffffffbf;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 8;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x10;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x20;
            }
            iVar8 = FUN_00e26e90();
            if (iVar8 != 0) {
              *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 0x40;
            }
          }
          pcVar4 = *(code **)(*param_1 + 0x308);
          param_1[0x250] = 0;
          local_14 = (int *)0x393702d3;
          local_18 = 0.3;
          local_1c = 7.681875e-39;
          (*pcVar4)();
          local_1c = 10.0;
          local_20 = (undefined *)0x53a607;
          (**(code **)(*param_1 + 0x220))();
          local_14 = (int *)0x53a620;
          FUN_00eaa6e0();
        }
        else if (param_1[0x187] != 1) goto LAB_0053a6c0;
        FUN_00ac80a0();
        iVar7 = FUN_00a94ce0();
        if (iVar7 != 0) {
          (**(code **)(*param_1 + 0x34c))();
          param_1[0x52a] = 0x42700000;
        }
        iVar7 = FUN_00a8c760();
        if ((((iVar7 != 0) && (1 < (uint)param_1[0x404])) && ((uint)param_1[0x404] < 6)) &&
           ((param_1[0x50a] == 0 && (0 < param_1[0x506])))) {
          sVar5 = FUN_00dde2d0();
          if (sVar5 == 0) {
            FUN_00537090();
            param_1[0x58c] = 1;
          }
          else {
            local_14 = (int *)0x0;
            local_18 = 4.59191e-40;
            local_1c = 7.682141e-39;
            FUN_0051d620();
          }
        }
LAB_0053a6c0:
        iVar7 = FUN_00a8c760();
        if (iVar7 != 0) {
          local_14 = (int *)0x3dcccccd;
          local_18 = 7.682253e-39;
          (**(code **)(*param_1 + 0x308))();
        }
        return;
      case 0x60006:
      case 0x60007:
      case 0x60008:
        FUN_005287f0();
        return;
      case 0x60009:
        FUN_00528a80();
        return;
      default:
        goto switchD_005419d5_default;
      }
    }
    if (0xb0000 < iVar7) {
      if (iVar7 == 0xb0001) {
        FUN_005363b0();
        return;
      }
      if (iVar7 == 0xb0002) {
        FUN_00528d10();
        return;
      }
switchD_005419d5_default:
      return;
    }
    if (iVar7 == 0xb0000) {
      return;
    }
    switch(iVar7) {
    case 0xa0000:
      FUN_0052ec40();
      return;
    case 0xa0001:
      FUN_0051ee90();
      return;
    case 0xa0002:
      iVar7 = FUN_00a81330();
      if ((iVar7 != 0) && (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) {
        (**(code **)(*piVar9 + 4))();
        FUN_00dd6d80();
      }
      switch(param_1[0x187]) {
      case 0:
        local_14 = (int *)0x3f800000;
        local_18 = 0.0;
        local_1c = 0.0;
        local_20 = (undefined *)0xe6;
        fStack_24 = 7.526134e-39;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
      case 1:
        FUN_00ac80a0();
        FUN_00a94ce0();
        return;
      case 2:
        goto switchD_0051f393_caseD_2;
      case 3:
        goto switchD_0051f393_caseD_3;
      case 4:
        local_14 = (int *)0x3f800000;
        local_18 = 0.0;
        local_1c = 0.0;
        local_20 = (undefined *)0xf2;
        fStack_24 = 7.526392e-39;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
        iVar7 = FUN_00518ad0();
        if (iVar7 != 0) {
          local_14 = (int *)0x3f800000;
          local_18 = 0.0;
          local_1c = 0.0;
          local_20 = &DAT_01640d14;
          fStack_24 = 7.526485e-39;
          FUN_00518ad0();
          fStack_24 = 7.526495e-39;
          FUN_00a9e290();
        }
        iVar7 = FUN_00518b00();
        if (iVar7 != 0) {
          local_14 = (int *)0x3f800000;
          local_18 = 0.0;
          local_1c = 0.0;
          local_20 = &DAT_01640d14;
          fStack_24 = 7.526579e-39;
          FUN_00518b00();
          fStack_24 = 7.526588e-39;
          FUN_00a9e290();
        }
      case 5:
        FUN_00ac80a0();
        return;
      default:
        return;
      }
    case 0xa0003:
      fVar12 = 0.0;
      local_54 = (undefined **)0x51f55f;
      iVar7 = FUN_00a81330();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x51f56a;
        piVar9 = (int *)FUN_00a7c8a0();
        if (piVar9 == (int *)0x0) {
          fVar12 = 0.0;
        }
        else {
          local_54 = (undefined **)&DAT_01be9db8;
          local_58 = (char *)0x51f584;
          (**(code **)(*piVar9 + 4))();
          local_58 = (char *)0x51f58b;
          iVar7 = FUN_00dd6d80();
          fVar12 = (float)(-(uint)(iVar7 != 0) & (uint)piVar9);
        }
      }
      break;
    case 0xa0004:
      (**(code **)(*param_1 + 0x220))();
      piVar9 = (int *)0x0;
      iVar7 = FUN_00a81330();
      if (iVar7 != 0) {
        local_14 = (int *)0x51eb51;
        piVar6 = (int *)FUN_00a7c8a0();
        if (piVar6 != (int *)0x0) {
          local_14 = (int *)&DAT_01be9db8;
          local_18 = 7.523119e-39;
          (**(code **)(*piVar6 + 4))();
          local_18 = 7.523129e-39;
          iVar7 = FUN_00dd6d80();
          piVar9 = (int *)(-(uint)(iVar7 != 0) & (uint)piVar6);
        }
      }
      (**(code **)(*param_1 + 0x314))();
      switch(param_1[0x187]) {
      case 0:
        local_14 = (int *)0xbf800000;
        local_18 = 3.85186e-34;
        local_1c = 1.0;
        local_20 = (undefined *)0x3e2aaaab;
        fStack_24 = 0.0;
        local_28 = 2.95674e-43;
        local_2c = 7.523269e-39;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
        FUN_0051cc20();
        if (piVar9 != (int *)0x0) {
          FUN_009f8b40();
          local_14 = (int *)0x51ebf0;
          FUN_009f8ae0();
          local_14 = (int *)0x13;
          local_18 = 7.523326e-39;
          local_18 = (float)FUN_00ac84d0();
          local_14 = (int *)0x0;
          local_1c = 7.523347e-39;
          (**(code **)(*piVar9 + 0x30c))();
        }
      case 1:
        local_14 = (int *)0x3f800000;
        local_18 = 7.523374e-39;
        FUN_00ac80a0();
        local_14 = (int *)0x51ec24;
        iVar7 = FUN_00a94ce0();
        if (iVar7 != 0) {
          (**(code **)(*param_1 + 0x34c))();
          local_14 = (int *)0x0;
          local_18 = 0.0;
          local_1c = 0.0;
          local_20 = (undefined *)0xa0005;
          fStack_24 = 7.523437e-39;
          FUN_0051d620();
          FUN_009f8b10();
        }
        local_14 = (int *)0x51ec58;
        iVar7 = FUN_00a8c760();
        if ((iVar7 != 0) && (piVar9 != (int *)0x0)) {
          local_14 = (int *)0x51ec71;
          local_14 = (int *)FUN_00ac84d0();
          local_18 = 7.523515e-39;
          (**(code **)(*piVar9 + 0x30c))();
        }
        break;
      case 2:
        local_14 = (int *)0xbf800000;
        local_18 = 3.85186e-34;
        local_1c = 1.0;
        local_20 = (undefined *)0x3e2aaaab;
        fStack_24 = 0.0;
        local_28 = 2.97075e-43;
        local_2c = 7.523594e-39;
        FUN_00aa4080();
        param_1[0x187] = param_1[0x187] + 1;
      case 3:
        local_14 = (int *)0x3f800000;
        local_18 = 7.523629e-39;
        FUN_00ac80a0();
        local_14 = (int *)0x51ecda;
        iVar7 = FUN_00a94ce0();
        if (iVar7 != 0) {
          (**(code **)(*param_1 + 0x34c))();
          local_14 = (int *)0x0;
          param_1[0x529] = 0;
          local_18 = 7.523703e-39;
          sVar5 = FUN_00dde2d0();
          if (sVar5 != 0) {
            local_14 = (int *)0x0;
            local_18 = 0.0;
            local_1c = 0.0;
            local_20 = (undefined *)0x1;
            fStack_24 = 0.0;
            local_28 = 7.523741e-39;
            sVar5 = FUN_00dde2d0();
            local_20 = (undefined *)(sVar5 + 0x1000a);
            fStack_24 = 7.523765e-39;
            FUN_0051d620();
          }
          local_14 = (int *)0x0;
          local_18 = 7.523784e-39;
          sVar5 = FUN_00dde2d0();
          if (sVar5 == 1) {
            local_14 = (int *)0x0;
            local_18 = 0.0;
            local_1c = 0.0;
            local_20 = (undefined *)0x50009;
            fStack_24 = 7.523821e-39;
            FUN_0051d620();
          }
          FUN_009f8b10();
        }
      }
      local_14 = (int *)0x51ed6c;
      iVar7 = FUN_00a8c760();
      if (iVar7 == 0) {
        local_14 = (int *)0x51ed79;
        iVar7 = FUN_00a8c760();
        if (iVar7 == 0) {
          local_14 = (int *)0x51ed85;
          FUN_0051b730();
        }
      }
      return;
    case 0xa0005:
      FUN_0051eda0();
      return;
    default:
      goto switchD_005419d5_default;
    }
    switch(param_1[0x187]) {
    case 0:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0xbf800000;
      puStack_5c = (undefined4 *)0x8000000;
      local_60 = (char *)0x3f800000;
      local_64 = 0;
      uStack_68 = 0;
      puStack_6c = (undefined *)0xe7;
      uStack_70 = 0x51f5e5;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      local_54 = (undefined **)0x1;
      local_58 = (char *)0x51f5f3;
      FUN_00ac8d40();
      param_1[0x54d] = 1;
      local_54 = (undefined **)0x51f600;
      FUN_0051a2b0();
      local_54 = (undefined **)0x51f605;
      iVar7 = FUN_00518b00();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x51f610;
        piVar9 = (int *)FUN_00518b00();
        local_54 = (undefined **)0x51f619;
        (**(code **)(*piVar9 + 0x20))();
      }
      local_54 = (undefined **)0x51f61e;
      piVar9 = (int *)FUN_00c14bb0();
      local_54 = (undefined **)0x30b;
      local_58 = "floor_before";
      puStack_5c = (undefined4 *)0x51f631;
      iVar7 = (**(code **)(*piVar9 + 0x20))();
      if (iVar7 != 0) {
        puStack_5c = (undefined4 *)0x51f63c;
        piVar9 = (int *)FUN_00a7c8a0();
        puStack_5c = (undefined4 *)0x51f645;
        (**(code **)(*piVar9 + 0x20))();
      }
      puStack_5c = (undefined4 *)0x51f64a;
      piVar9 = (int *)FUN_00c14bb0();
      puStack_5c = (undefined4 *)0x30b;
      local_60 = "floor_after";
      local_64 = 0x51f65d;
      iVar7 = (**(code **)(*piVar9 + 0x20))();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x51f668;
        piVar9 = (int *)FUN_00a7c8a0();
        local_54 = (undefined **)0x51f671;
        (**(code **)(*piVar9 + 0x1c))();
      }
      break;
    case 1:
    case 3:
    case 7:
    case 0xb:
      break;
    case 2:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0xbf800000;
      puStack_5c = (undefined4 *)0x8000000;
      local_60 = (char *)0x3f800000;
      local_64 = 0;
      uStack_68 = 0;
      puStack_6c = (undefined *)0xe8;
      uStack_70 = 0x51f6d3;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      break;
    case 4:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0xbf800000;
      puStack_5c = (undefined4 *)0x8000000;
      local_60 = (char *)0x3f800000;
      local_64 = 0;
      uStack_68 = 0;
      puStack_6c = (undefined *)0xe9;
      uStack_70 = 0x51f70e;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      local_54 = (undefined **)0x51f71b;
      iVar7 = FUN_00518b60();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x8000000;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d8c;
        uStack_70 = 0x51f750;
        FUN_00518b60();
        uStack_70 = 0x51f757;
        FUN_00a9e290();
        local_54 = (undefined **)0x51f75e;
        piVar9 = (int *)FUN_00518b60();
        local_54 = (undefined **)0x51f767;
        (**(code **)(*piVar9 + 0x20))();
      }
      local_54 = (undefined **)0x51f76e;
      iVar7 = FUN_00518b90();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x8000000;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d8c;
        uStack_70 = 0x51f7a3;
        FUN_00518b90();
        uStack_70 = 0x51f7aa;
        FUN_00a9e290();
        local_54 = (undefined **)0x51f7b1;
        piVar9 = (int *)FUN_00518b90();
        local_54 = (undefined **)0x51f7ba;
        (**(code **)(*piVar9 + 0x20))();
      }
    case 5:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0x3f800000;
      puStack_5c = (undefined4 *)0x51f7cd;
      FUN_00ac80a0();
      local_54 = (undefined **)0x0;
      local_58 = (char *)0x51f7d6;
      iVar7 = FUN_00a94ce0();
      if (iVar7 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      local_54 = (undefined **)0xa;
      local_58 = (char *)0x51f7e9;
      iVar7 = FUN_00a8c760();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x51f7f8;
        FUN_00519b70();
        local_54 = (undefined **)0x51f7ff;
        iVar7 = FUN_00518b60();
        if (iVar7 != 0) {
          local_54 = (undefined **)0x51f80a;
          piVar9 = (int *)FUN_00518b60();
          local_54 = (undefined **)0x51f813;
          (**(code **)(*piVar9 + 0x1c))();
        }
        local_54 = (undefined **)0x51f81a;
        iVar7 = FUN_00518b90();
        if (iVar7 != 0) {
          local_54 = (undefined **)0x51f825;
          piVar9 = (int *)FUN_00518b90();
          local_54 = (undefined **)0x51f82e;
          (**(code **)(*piVar9 + 0x1c))();
        }
        local_54 = (undefined **)0x51f835;
        iVar7 = FUN_00518b30();
        if (iVar7 != 0) {
          local_34 = 0.0;
          if (0 < *(short *)(iVar7 + 0x324)) {
            in_stack_ffffffc4 = 0.0;
            do {
              iVar8 = *(int *)(iVar7 + 800) + (int)in_stack_ffffffc4;
              local_58 = *(char **)(*(int *)(iVar8 + 0x60) + 0x40);
              if (local_58 != (char *)0x0) {
                local_54 = (undefined **)&DAT_01640d88;
                puStack_5c = (undefined4 *)0x51f87f;
                iVar10 = FUN_00fdbbd0();
                if (iVar10 != 0) {
                  puVar1 = (uint *)(iVar8 + 0x38);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
              }
              in_stack_ffffffc4 = (float)((int)in_stack_ffffffc4 + 0x70);
              local_34 = (float)((int)local_34 + 1);
            } while ((int)local_34 < (int)*(short *)(iVar7 + 0x324));
          }
          local_34 = 0.0;
          if (0 < *(short *)(iVar7 + 0x324)) {
            in_stack_ffffffc4 = 0.0;
            do {
              iVar8 = *(int *)(iVar7 + 800) + (int)in_stack_ffffffc4;
              local_58 = *(char **)(*(int *)(iVar8 + 0x60) + 0x40);
              if (local_58 != (char *)0x0) {
                local_54 = (undefined **)&DAT_01640d84;
                puStack_5c = (undefined4 *)0x51f8d7;
                iVar10 = FUN_00fdbbd0();
                if (iVar10 != 0) {
                  puVar1 = (uint *)(iVar8 + 0x38);
                  *puVar1 = *puVar1 | 1;
                }
              }
              in_stack_ffffffc4 = (float)((int)in_stack_ffffffc4 + 0x70);
              local_34 = (float)((int)local_34 + 1);
            } while ((int)local_34 < (int)*(short *)(iVar7 + 0x324));
          }
        }
      }
      local_54 = (undefined **)0x8;
      local_58 = (char *)0x51f904;
      iVar7 = FUN_00a8c760();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x51f913;
        iVar7 = FUN_00518b30();
        if (iVar7 != 0) {
          local_34 = 0.0;
          if (0 < *(short *)(iVar7 + 0x324)) {
            in_stack_ffffffc4 = 0.0;
            do {
              iVar8 = *(int *)(iVar7 + 800) + (int)in_stack_ffffffc4;
              local_58 = *(char **)(*(int *)(iVar8 + 0x60) + 0x40);
              if (local_58 != (char *)0x0) {
                local_54 = (undefined **)&DAT_01640d88;
                puStack_5c = (undefined4 *)0x51f95f;
                iVar10 = FUN_00fdbbd0();
                if (iVar10 != 0) {
                  puVar1 = (uint *)(iVar8 + 0x38);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
              }
              in_stack_ffffffc4 = (float)((int)in_stack_ffffffc4 + 0x70);
              local_34 = (float)((int)local_34 + 1);
            } while ((int)local_34 < (int)*(short *)(iVar7 + 0x324));
          }
          local_34 = 0.0;
          if (0 < *(short *)(iVar7 + 0x324)) {
            in_stack_ffffffc4 = 0.0;
            do {
              iVar8 = *(int *)(iVar7 + 800) + (int)in_stack_ffffffc4;
              local_58 = *(char **)(*(int *)(iVar8 + 0x60) + 0x40);
              if (local_58 != (char *)0x0) {
                local_54 = (undefined **)&DAT_01640d84;
                puStack_5c = (undefined4 *)0x51f9bd;
                iVar10 = FUN_00fdbbd0();
                if (iVar10 != 0) {
                  puVar1 = (uint *)(iVar8 + 0x38);
                  *puVar1 = *puVar1 | 1;
                }
              }
              in_stack_ffffffc4 = (float)((int)in_stack_ffffffc4 + 0x70);
              local_34 = (float)((int)local_34 + 1);
            } while ((int)local_34 < (int)*(short *)(iVar7 + 0x324));
          }
        }
      }
      goto switchD_0051f5ab_default;
    case 6:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0xbf800000;
      puStack_5c = (undefined4 *)0x8000000;
      local_60 = (char *)0x3f800000;
      local_64 = 0;
      uStack_68 = 0;
      puStack_6c = (undefined *)0xea;
      uStack_70 = 0x51fa19;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      local_54 = (undefined **)0x51fa26;
      iVar7 = FUN_00518b60();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x8000000;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d7c;
        uStack_70 = 0x51fa5b;
        FUN_00518b60();
        uStack_70 = 0x51fa62;
        FUN_00a9e290();
      }
      local_54 = (undefined **)0x51fa69;
      iVar7 = FUN_00518b90();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x8000000;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d7c;
        uStack_70 = 0x51faa2;
        FUN_00518b90();
        uStack_70 = 0x51faa9;
        FUN_00a9e290();
      }
      break;
    case 8:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0xbf800000;
      puStack_5c = (undefined4 *)0x8000000;
      local_60 = (char *)0x3f800000;
      local_64 = 0;
      uStack_68 = 0;
      puStack_6c = (undefined *)0xeb;
      uStack_70 = 0x51fae1;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      local_54 = (undefined **)0x51faee;
      iVar7 = FUN_00518b60();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x8000000;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d74;
        uStack_70 = 0x51fb23;
        FUN_00518b60();
        uStack_70 = 0x51fb2a;
        FUN_00a9e290();
      }
      local_54 = (undefined **)0x51fb31;
      iVar7 = FUN_00518b90();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x8000000;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d74;
        uStack_70 = 0x51fb66;
        FUN_00518b90();
        uStack_70 = 0x51fb6d;
        FUN_00a9e290();
      }
      local_54 = (undefined **)0x51fb74;
      iVar7 = FUN_00518b60();
      local_54 = (undefined **)0x1;
      local_58 = (char *)(uint)(iVar7 == 0);
      puStack_5c = (undefined4 *)0xb;
      local_60 = "j";
      (**(code **)(*param_1 + 0x344))();
      local_54 = (undefined **)0x0;
      param_1[0x139] = 1;
      local_58 = (char *)0x51fb9b;
      FUN_0051a500();
      local_54 = (undefined **)0x51fba6;
      iVar7 = FUN_00a81330();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x51fbb5;
        FUN_00a81330();
        local_54 = (undefined **)0x51fbbc;
        iVar7 = FUN_00a7c8a0();
        *(undefined4 *)(iVar7 + 0x4e4) = 1;
      }
    case 9:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0x3f800000;
      puStack_5c = (undefined4 *)0x51fbd5;
      FUN_00ac80a0();
      local_54 = (undefined **)0x0;
      local_58 = (char *)0x51fbde;
      iVar7 = FUN_00a94ce0();
      if (iVar7 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      local_54 = (undefined **)0xa;
      local_58 = (char *)0x51fbf1;
      iVar7 = FUN_00a8c760();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x51fc00;
        iVar7 = FUN_00518b90();
        if (iVar7 != 0) {
          local_54 = (undefined **)0x51fc0f;
          iVar7 = FUN_00518b90();
          local_34 = 0.0;
          if (0 < *(short *)(iVar7 + 0x324)) {
            in_stack_ffffffc4 = 0.0;
            do {
              iVar10 = *(int *)(iVar7 + 800) + (int)in_stack_ffffffc4;
              iVar8 = *(int *)(*(int *)(iVar10 + 0x60) + 0x40);
              if (iVar8 != 0) {
                local_54 = (undefined **)0x1640d6c;
                puStack_5c = (undefined4 *)0x51fc4f;
                local_58 = (char *)iVar8;
                iVar8 = FUN_00fdbbd0();
                if (iVar8 != 0) {
                  puVar1 = (uint *)(iVar10 + 0x38);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
              }
              in_stack_ffffffc4 = (float)((int)in_stack_ffffffc4 + 0x70);
              local_34 = (float)((int)local_34 + 1);
            } while ((int)local_34 < (int)*(short *)(iVar7 + 0x324));
          }
          local_54 = (undefined **)0x51fc7a;
          iVar7 = FUN_00518b90();
          local_34 = 0.0;
          if (0 < *(short *)(iVar7 + 0x324)) {
            in_stack_ffffffc4 = 0.0;
            do {
              iVar10 = *(int *)(iVar7 + 800) + (int)in_stack_ffffffc4;
              iVar8 = *(int *)(*(int *)(iVar10 + 0x60) + 0x40);
              if (iVar8 != 0) {
                local_54 = (undefined **)0x1640d64;
                puStack_5c = (undefined4 *)0x51fcb0;
                local_58 = (char *)iVar8;
                iVar8 = FUN_00fdbbd0();
                if (iVar8 != 0) {
                  puVar1 = (uint *)(iVar10 + 0x38);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
              }
              in_stack_ffffffc4 = (float)((int)in_stack_ffffffc4 + 0x70);
              local_34 = (float)((int)local_34 + 1);
            } while ((int)local_34 < (int)*(short *)(iVar7 + 0x324));
          }
          local_54 = (undefined **)0x51fcdb;
          iVar7 = FUN_00518b90();
          local_34 = 0.0;
          if (0 < *(short *)(iVar7 + 0x324)) {
            in_stack_ffffffc4 = 0.0;
            do {
              iVar10 = *(int *)(iVar7 + 800) + (int)in_stack_ffffffc4;
              iVar8 = *(int *)(*(int *)(iVar10 + 0x60) + 0x40);
              if (iVar8 != 0) {
                local_54 = (undefined **)0x1640d5c;
                puStack_5c = (undefined4 *)0x51fd11;
                local_58 = (char *)iVar8;
                iVar8 = FUN_00fdbbd0();
                if (iVar8 != 0) {
                  puVar1 = (uint *)(iVar10 + 0x38);
                  *puVar1 = *puVar1 | 1;
                }
              }
              in_stack_ffffffc4 = (float)((int)in_stack_ffffffc4 + 0x70);
              local_34 = (float)((int)local_34 + 1);
            } while ((int)local_34 < (int)*(short *)(iVar7 + 0x324));
          }
          local_54 = (undefined **)0x51fd3c;
          iVar7 = FUN_00518b90();
          local_34 = 0.0;
          if (0 < *(short *)(iVar7 + 0x324)) {
            in_stack_ffffffc4 = 0.0;
            do {
              iVar10 = *(int *)(iVar7 + 800) + (int)in_stack_ffffffc4;
              iVar8 = *(int *)(*(int *)(iVar10 + 0x60) + 0x40);
              if (iVar8 != 0) {
                local_54 = (undefined **)0x1640d54;
                puStack_5c = (undefined4 *)0x51fd72;
                local_58 = (char *)iVar8;
                iVar8 = FUN_00fdbbd0();
                if (iVar8 != 0) {
                  puVar1 = (uint *)(iVar10 + 0x38);
                  *puVar1 = *puVar1 | 1;
                }
              }
              in_stack_ffffffc4 = (float)((int)in_stack_ffffffc4 + 0x70);
              local_34 = (float)((int)local_34 + 1);
            } while ((int)local_34 < (int)*(short *)(iVar7 + 0x324));
          }
          local_54 = (undefined **)0x51fda0;
          iVar7 = FUN_00a4a2d0();
          if (iVar7 != 0) {
            local_54 = (undefined **)0x51fdaf;
            iVar7 = FUN_00518b90();
            local_34 = 0.0;
            if (0 < *(short *)(iVar7 + 0x324)) {
              in_stack_ffffffc4 = 0.0;
              do {
                iVar8 = *(int *)(iVar7 + 800) + (int)in_stack_ffffffc4;
                local_58 = *(char **)(*(int *)(iVar8 + 0x60) + 0x40);
                if (local_58 != (char *)0x0) {
                  local_54 = (undefined **)&DAT_0163ef44;
                  puStack_5c = (undefined4 *)0x51fdef;
                  iVar10 = FUN_00fdbbd0();
                  if (iVar10 != 0) {
                    puVar1 = (uint *)(iVar8 + 0x38);
                    *puVar1 = *puVar1 & 0xfffffffe;
                  }
                }
                in_stack_ffffffc4 = (float)((int)in_stack_ffffffc4 + 0x70);
                local_34 = (float)((int)local_34 + 1);
              } while ((int)local_34 < (int)*(short *)(iVar7 + 0x324));
            }
          }
        }
      }
      goto switchD_0051f5ab_default;
    case 10:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0xbf800000;
      puStack_5c = (undefined4 *)0x8000000;
      local_60 = (char *)0x3f800000;
      local_64 = 0;
      uStack_68 = 0;
      puStack_6c = (undefined *)0xec;
      uStack_70 = 0x51fe4b;
      FUN_00aa4080();
      local_54 = (undefined **)param_1[0x20f];
      param_1[0x187] = param_1[0x187] + 1;
      local_58 = (char *)0x51fe62;
      FUN_00940c50();
      local_54 = (undefined **)0x51fe69;
      iVar7 = FUN_00518b60();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x8000000;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d4c;
        uStack_70 = 0x51fe9e;
        FUN_00518b60();
        uStack_70 = 0x51fea5;
        FUN_00a9e290();
      }
      local_54 = (undefined **)0x51feac;
      iVar7 = FUN_00518b90();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x8000000;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d4c;
        uStack_70 = 0x51fee5;
        FUN_00518b90();
        uStack_70 = 0x51feec;
        FUN_00a9e290();
      }
      break;
    case 0xc:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0xbf800000;
      puStack_5c = (undefined4 *)0x0;
      local_60 = (char *)0x3f800000;
      local_64 = 0;
      uStack_68 = 0;
      puStack_6c = (undefined *)0xed;
      uStack_70 = 0x51ff1d;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      local_54 = (undefined **)0x51ff2a;
      iVar7 = FUN_00518b60();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x0;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d44;
        uStack_70 = 0x51ff5c;
        FUN_00518b60();
        uStack_70 = 0x51ff63;
        FUN_00a9e290();
      }
      local_54 = (undefined **)0x51ff6a;
      iVar7 = FUN_00518b90();
      if (iVar7 != 0) {
        local_54 = (undefined **)0x3f800000;
        local_58 = (char *)0xbf800000;
        puStack_5c = (undefined4 *)0x0;
        local_60 = (char *)0x3f800000;
        local_64 = 0;
        uStack_68 = 0;
        puStack_6c = &DAT_01640d44;
        uStack_70 = 0x51ff9c;
        FUN_00518b90();
        uStack_70 = 0x51ffa3;
        FUN_00a9e290();
      }
    case 0xd:
      local_54 = (undefined **)0x3f800000;
      local_58 = (char *)0x3f800000;
      puStack_5c = (undefined4 *)0x51ffb6;
      FUN_00ac80a0();
    default:
      goto switchD_0051f5ab_default;
    }
    local_54 = (undefined **)0x3f800000;
    local_58 = (char *)0x3f800000;
    puStack_5c = (undefined4 *)0x51f684;
    FUN_00ac80a0();
    local_54 = (undefined **)0x0;
    local_58 = (char *)0x51f68d;
    iVar7 = FUN_00a94ce0();
    if (iVar7 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
switchD_0051f5ab_default:
    if (((fVar12 != 0.0) && (param_1[0x187] != 0xd)) && (*(int *)((int)fVar12 + 0x40c8) != 8)) {
      local_54 = &local_20;
      local_58 = (char *)&local_30;
      puStack_5c = (undefined4 *)0x51ffeb;
      FUN_00a8ce90();
      local_54 = (undefined **)((float)param_1[0x25] + local_1c);
      local_58 = (char *)0x51fffe;
      fVar11 = (float10)FUN_00ddba30();
      *(float *)((int)fVar12 + 0x94) = (float)fVar11;
      local_54 = (undefined **)(param_1 + 4);
      puStack_5c = &local_30;
      local_60 = (char *)0x520018;
      local_58 = (char *)puStack_5c;
      D3DXVec3TransformNormal();
      fVar2 = (float)param_1[0x10];
      fVar3 = (float)param_1[0x11];
      *(float *)((int)fVar12 + 0x58) = (float)param_1[0x12] + local_34;
      *(float *)((int)fVar12 + 0x50) = fVar2 + in_stack_ffffffc4;
      *(float *)((int)fVar12 + 0x54) = fVar3 + fVar12;
      *(undefined4 *)((int)fVar12 + 0x5c) = local_30;
      local_60 = (char *)0x520052;
      switchD_0080dbae::default();
    }
    return;
  }
  if (iVar7 == 0x50000) {
    FUN_005318e0();
    return;
  }
  switch(iVar7) {
  case 0x10000:
    FUN_00522620();
    return;
  case 0x10001:
    FUN_005414b0();
    return;
  case 0x10002:
    FUN_005227d0();
    return;
  case 0x10003:
    (**(code **)(*param_1 + 0x318))();
    if (param_1[0x187] == 0) {
      local_14 = (int *)0x0;
      local_18 = 1.0;
      local_1c = 0.16666667;
      local_20 = (undefined *)0x0;
      fStack_24 = 8.40779e-45;
      local_28 = 7.545708e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_0051cc20();
      param_1[0x248] = 0;
      param_1[0x249] = 0x43340000;
      param_1[0x586] = 0;
    }
    else if (param_1[0x187] != 1) goto LAB_00522aab;
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    local_14 = (int *)0x522aa9;
    FUN_00ac80a0();
LAB_00522aab:
    fVar11 = (float10)fcos((float10)(float)param_1[0x586]);
    param_1[0x15] = (int)(float)(fVar11 * (float10)0.008 + (float10)(float)param_1[0x15]);
    local_14 = (int *)0x522adf;
    FUN_00dde300();
    fVar11 = (float10)FUN_00ddba30();
    param_1[0x586] = (int)(float)fVar11;
    local_14 = (int *)0x393702d3;
    local_18 = 0.1;
    local_1c = 7.546002e-39;
    (**(code **)(*param_1 + 0x308))();
    return;
  case 0x10004:
  case 0x10005:
  case 0x10006:
  case 0x10007:
    FUN_00522bf0();
    return;
  case 0x10008:
    FUN_00523120();
    return;
  case 0x10009:
    FUN_00523a80();
    return;
  case 0x1000a:
  case 0x1000b:
    if (param_1[0x187] == 0) {
      sVar5 = 0x1a;
      if (param_1[0x186] == 0x1000b) {
        sVar5 = 0x1b;
      }
      local_20 = (undefined *)(int)sVar5;
      local_14 = (int *)0x3f800000;
      local_18 = 0.16666667;
      local_1c = 0.0;
      fStack_24 = 7.55293e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_0051cc20();
      fVar11 = (float10)FUN_00dde300();
      param_1[0x248] = (int)(float)(fVar11 + (float10)180.0);
      param_1[0x249] = param_1[0x25];
      param_1[0x24a] = 0;
    }
    else if (param_1[0x187] != 1) goto LAB_00523f4d;
    FUN_00ac80a0();
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
    if (fVar12 - (float)param_1[0x244] < 0.0) {
      (**(code **)(*param_1 + 0x34c))();
      local_14 = (int *)0x0;
      local_18 = 9.18481e-41;
      local_1c = 7.553144e-39;
      FUN_0051d620();
    }
    if (9.869605 <= (float)param_1[0x24a] * (float)param_1[0x24a]) {
      (**(code **)(*param_1 + 0x34c))();
      local_14 = (int *)0x0;
      local_18 = 9.18481e-41;
      local_1c = 7.553219e-39;
      FUN_0051d620();
    }
LAB_00523f4d:
    local_14 = (int *)0x3e99999a;
    local_18 = 7.553289e-39;
    (**(code **)(*param_1 + 0x308))();
    local_18 = (float)param_1[0x25] - (float)param_1[0x249];
    local_1c = 7.553318e-39;
    fVar11 = (float10)FUN_00ddba30();
    param_1[0x24a] = (int)(float)(fVar11 + (float10)(float)param_1[0x24a]);
    param_1[0x249] = param_1[0x25];
    return;
  case 0x1000c:
  case 0x1000f:
    FUN_00524040();
    return;
  case 0x1000d:
  case 0x1000e:
    if (param_1[0x187] == 0) {
      local_20 = (undefined *)0x80;
      if (param_1[0x186] == 0x1000e) {
        local_20 = (undefined *)0x60;
      }
      local_14 = (int *)0x3f800000;
      local_18 = 0.0;
      local_1c = 0.0;
      fStack_24 = 7.554303e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_0051cc20();
      FUN_00a8d280();
      param_1[0x570] = 0;
      param_1[0x571] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0();
    return;
  case 0x10010:
    FUN_00535600();
    return;
  case 0x10011:
    FUN_0051c980();
    return;
  case 0x10012:
    FUN_00530e40();
    return;
  case 0x10013:
    FUN_00519120();
    return;
  case 0x10014:
    FUN_005242d0();
    return;
  case 0x10015:
    FUN_00531070();
    return;
  case 0x10016:
    FUN_00524600();
    return;
  case 0x10017:
    FUN_005246e0();
    return;
  case 0x10018:
    FUN_00535800();
    return;
  case 0x10019:
    FUN_00535aa0();
    return;
  case 0x1001a:
    FUN_00535db0();
    return;
  case 0x1001b:
    FUN_005191f0();
    return;
  case 0x1001c:
    param_1[0x4c6] = 0x42f00000;
    pcVar4 = *(code **)(*param_1 + 0x318);
    param_1[0x4c5] = 2;
    param_1[0x504] = 1;
    (*pcVar4)();
    switch(param_1[0x187]) {
    case 0:
      FUN_00aa4080(0x87,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_0051cc20();
      iVar7 = FUN_00a81330();
      if (iVar7 != 0) {
        FUN_00a81330();
        iVar7 = FUN_00a7c8a0();
        *(undefined4 *)(iVar7 + 0x6ec) = 0;
      }
      param_1[0x581] = param_1[0x581] + 1;
      FUN_00940b10();
      param_1[0x505] = 0;
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar7 = FUN_00a8c760(10);
      if (iVar7 == 0) {
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    case 2:
      param_1[0x187] = 3;
      FUN_0052c250(1);
      break;
    case 3:
      break;
    default:
      goto switchD_0053139d_default;
    }
    FUN_0040b190();
    afStack_a0[0] = 0.0;
    afStack_a0[1] = 0.0;
    afStack_a0[2] = 0.0;
    D3DXVec3TransformNormal(afStack_a0,afStack_a0,param_1 + 4);
    iVar7 = FUN_00a12210(0xf00);
    fVar12 = *(float *)(iVar7 + 0x40);
    fVar2 = *(float *)(iVar7 + 0x44);
    fVar3 = *(float *)(iVar7 + 0x48);
    afStack_a0[0] = *(float *)(iVar7 + 0x4c) + afStack_a0[0];
    iVar7 = FUN_00a81330();
    if ((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
      *(ushort *)(iVar7 + 0xa2) = *(ushort *)(iVar7 + 0xa2) | 4;
      *(float *)(iVar7 + 0x40) =
           ((fVar12 + unaff_ESI) - *(float *)(iVar7 + 0x40)) * 0.06 + *(float *)(iVar7 + 0x40);
      *(float *)(iVar7 + 0x44) =
           ((fVar2 + unaff_EBX) - *(float *)(iVar7 + 0x44)) * 0.06 + *(float *)(iVar7 + 0x44);
      *(float *)(iVar7 + 0x48) =
           ((fVar3 + fStack_a4) - *(float *)(iVar7 + 0x48)) * 0.06 + *(float *)(iVar7 + 0x48);
      switchD_0080dbae::default();
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      FUN_0051d620(0x1001d,0,0,0,0);
      return;
    }
switchD_0053139d_default:
    return;
  case 0x1001d:
    FUN_00524a30();
    return;
  case 0x1001e:
    pcVar4 = *(code **)(*param_1 + 0x318);
    param_1[0x504] = 1;
    local_14 = (int *)0x5315ab;
    (*pcVar4)();
    local_14 = (int *)0x5315b5;
    FUN_0093dc50();
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      local_14 = (int *)&DAT_01be9db8;
      local_18 = 7.630167e-39;
      (**(code **)(*(int *)param_1[0x2a1] + 4))();
      local_18 = 7.630177e-39;
      iVar7 = FUN_00dd6d80();
      if (iVar7 != 0) {
        local_14 = (int *)0x41700000;
        local_18 = 7.630206e-39;
        FUN_00b8c350();
      }
    }
    switch(param_1[0x187]) {
    case 0:
      local_14 = (int *)0x3f800000;
      local_18 = -1.0;
      local_1c = 3.85186e-34;
      local_20 = (undefined *)0x3f800000;
      fStack_24 = 0.16666667;
      local_28 = 0.0;
      local_2c = 1.91978e-43;
      local_30 = 0x531638;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      local_14 = (int *)0x531645;
      FUN_0051cc20();
      local_14 = (int *)0x531650;
      iVar7 = FUN_00a81330();
      if (iVar7 != 0) {
        local_14 = (int *)0x53165f;
        FUN_00a81330();
        local_14 = (int *)0x531666;
        iVar7 = FUN_00a7c8a0();
        *(undefined4 *)(iVar7 + 0x6ec) = 0;
      }
      iVar7 = param_1[0x575];
      param_1[0x510] = param_1[0x510] | 1;
      param_1[0x250] = 0;
      param_1[0x575] = iVar7 + 1;
      param_1[0x248] = (int)((float)iVar7 * 55.0 + 30.0);
      param_1[0x249] = 0x41700000;
      local_14 = (int *)0xbf800000;
      local_18 = 1.26117e-44;
      local_1c = 7.63052e-39;
      FUN_00c27f40();
      local_14 = (int *)param_1[0x2a1];
      local_18 = 7.630537e-39;
      FUN_0041c960();
      local_14 = (int *)0x3e4ccccd;
      local_18 = 1.4013e-45;
      local_1c = 1.4013e-45;
      local_20 = (undefined *)0x3f800000;
      fStack_24 = 1.0;
      local_28 = 60.0;
      local_2c = 7.630593e-39;
      FUN_00b85350();
    case 1:
      local_14 = (int *)0x3f800000;
      local_18 = 1.0;
      local_1c = 7.63062e-39;
      FUN_00ac80a0();
      fVar12 = (float)param_1[0x248] - _DAT_01be942c;
      param_1[0x248] = (int)fVar12;
      if (fVar12 < 0.0) {
        local_14 = (int *)0x531734;
        iVar7 = FUN_0052c7c0();
        if (iVar7 == 0) {
          param_1[0x187] = param_1[0x187] + 1;
        }
      }
      fVar12 = (float)param_1[0x249] - _DAT_01be942c;
      param_1[0x249] = (int)fVar12;
      if (fVar12 < 0.0) {
        local_14 = (int *)param_1[0x250];
        param_1[0x249] = 0x425c0000;
        local_18 = 7.630767e-39;
        FUN_0051d700();
        param_1[0x250] = param_1[0x250] + 1;
        return;
      }
      break;
    case 2:
      param_1[0x187] = 3;
      local_14 = (int *)0x53179b;
      iVar7 = FUN_00a81330();
      if (iVar7 != 0) {
        local_14 = (int *)0x5317aa;
        FUN_00a81330();
        local_14 = (int *)0x5317b1;
        FUN_00a805f0();
        local_14 = (int *)0x5317bc;
        FUN_00a7c950();
      }
      param_1[0x248] = 0x43160000;
      local_14 = (int *)0x3f800000;
      local_18 = -1.0;
      local_1c = 0.0;
      local_20 = (undefined *)0x3f800000;
      fStack_24 = 0.16666667;
      local_28 = 0.0;
      local_2c = 5.60519e-45;
      local_30 = 0x5317f7;
      FUN_00aa4080();
    case 3:
      local_14 = (int *)0x3f800000;
      local_18 = 1.0;
      local_1c = 7.63097e-39;
      FUN_00ac80a0();
      local_14 = (int *)0x0;
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
      local_18 = 7.631008e-39;
      iVar7 = FUN_00a94ce0();
      if (iVar7 != 0) {
        local_14 = (int *)0x531830;
        iVar7 = FUN_0052c7c0();
        if ((iVar7 == 0) && ((float)param_1[0x248] < 0.0)) {
          local_14 = (int *)0x0;
          local_18 = 0.0;
          local_1c = 0.0;
          local_20 = (undefined *)0x0;
          fStack_24 = 9.18733e-41;
          local_28 = 7.631078e-39;
          FUN_0051d620();
          return;
        }
      }
    }
    return;
  case 0x1001f:
    FUN_00535f90();
    return;
  case 0x10020:
    if (param_1[0x187] == 0) {
      local_14 = (int *)0x3f800000;
      local_18 = 0.06666667;
      local_1c = 0.0;
      local_20 = (undefined *)0x81;
      fStack_24 = 7.557517e-39;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_0051cc20();
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar7 = FUN_00a94ce0();
    if (iVar7 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00524b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 0x10021:
  case 0x10022:
  case 0x10023:
  case 0x10024:
    if (param_1[0x186] == 0x10022) {
      FUN_00ddba30();
    }
    if (param_1[0x186] == 0x10023) {
      FUN_00ddba30();
    }
    if (param_1[0x186] == 0x10024) {
      FUN_00ddba30();
    }
    break;
  case 0x10025:
    if (param_1[0x187] == 0) {
      param_1[0x187] = 1;
      local_54 = (undefined **)0x53e07e;
      FUN_00e5e0c0();
      local_20 = (undefined *)0x0;
      local_1c = 0.0;
      local_18 = 0.0;
      local_30 = 0;
      local_2c = 0.0;
      local_28 = 0.0;
      FUN_0052b620();
      FUN_0052b790();
      FUN_0052b850();
      FUN_0052b900();
      FUN_0052b9c0();
      param_1[0x510] = param_1[0x510] | 2;
      FUN_00c27f40();
      FUN_0053aa20();
      if ((param_1[0x2a1] != 0) && (param_1[0x1d9] != 0)) {
        FUN_009f8b40();
        FUN_008e26e0();
      }
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    return;
  case 0x10026:
    FUN_00531880();
    return;
  default:
    goto switchD_005419d5_default;
  }
  switch(param_1[0x187]) {
  case 0:
    iVar7 = param_1[0x186];
    fStack_24 = 2.24208e-44;
    if (iVar7 == 0x10022) {
      fStack_24 = 2.52234e-44;
    }
    if (iVar7 == 0x10023) {
      fStack_24 = 2.8026e-44;
    }
    if (iVar7 == 0x10024) {
      fStack_24 = 3.08286e-44;
    }
    local_14 = (int *)0x8000000;
    local_18 = 1.0;
    local_1c = 0.16666667;
    local_20 = (undefined *)0x0;
    local_28 = 7.70132e-39;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00519510();
    local_14 = (int *)0x53dc41;
    sVar5 = FUN_00dde2d0();
    if (sVar5 == 1) {
      local_14 = (int *)0x0;
      local_18 = 7.701385e-39;
      FUN_00533f90();
      FUN_0053aa20();
    }
    break;
  case 1:
    break;
  case 2:
    local_14 = (int *)0x0;
    local_18 = 1.0;
    local_1c = 0.0;
    local_20 = (undefined *)0x0;
    fStack_24 = 1.26117e-44;
    local_28 = 7.701531e-39;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41500000;
    FUN_0051cc20();
    goto LAB_0053dcdb;
  case 3:
LAB_0053dcdb:
    local_14 = (int *)0x53dcec;
    FUN_00ac80a0();
    local_14 = (int *)((float)param_1[0x244] * 0.5);
    local_18 = 7.701653e-39;
    FUN_00a8de10();
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
    if (fVar12 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_0053dbbb_default;
  case 4:
    if (param_1[0x186] != 0x10021) {
      local_14 = (int *)0x393702d3;
      local_18 = 1.0;
      local_1c = 7.701796e-39;
      (**(code **)(*param_1 + 0x308))();
    }
    pcVar4 = *(code **)(*param_1 + 0x34c);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar4)();
    if (param_1[0x506] == 1) {
      if (param_1[0x58d] != 0) {
        if (((float)param_1[0x2a3] <= 16.0) && ((float)param_1[0x2a8] < 0.7853982)) {
          local_14 = (int *)0x0;
          local_18 = 0.0;
          local_1c = 9.18831e-41;
          local_20 = (undefined *)0x53dde5;
          FUN_0051d620();
        }
        local_14 = (int *)0x53ddf3;
        sVar5 = FUN_00dde2d0();
        if ((((sVar5 == 1) &&
             (fVar12 = (float)param_1[0x2a3], !NAN(fVar12) && 16.0 < fVar12 != (fVar12 == 16.0))) &&
            ((float)param_1[0x2a3] <= 100.0)) && ((float)param_1[0x2a8] < 0.7853982)) {
          local_14 = (int *)0x0;
          local_18 = 0.0;
          local_1c = 4.59183e-40;
          local_20 = (undefined *)0x53de46;
          FUN_0051d620();
        }
        local_14 = (int *)0x53de54;
        sVar5 = FUN_00dde2d0();
        if (sVar5 == 1) {
          local_14 = (int *)0x0;
          local_18 = 0.0;
          local_1c = 4.59191e-40;
          local_20 = (undefined *)0x53de6e;
          FUN_0051d620();
        }
        local_14 = (int *)0x53de7c;
        sVar5 = FUN_00dde2d0();
        if (((sVar5 == 1) &&
            (fVar12 = (float)param_1[0x2a3], !NAN(fVar12) && 16.0 < fVar12 != (fVar12 == 16.0))) &&
           ((float)param_1[0x2a3] <= 100.0)) {
          local_14 = (int *)0x0;
          local_18 = 0.0;
          local_1c = 4.59177e-40;
          local_20 = (undefined *)0x53dec8;
          FUN_0051d620();
        }
      }
    }
    else if (param_1[0x506] == 2) {
      fVar12 = (float)param_1[0x2a3];
      if ((!NAN(fVar12) && 6.25 < fVar12 != (fVar12 == 6.25)) && ((float)param_1[0x2a8] < 1.5707964)
         ) {
        local_14 = (int *)0x0;
        local_18 = 0.0;
        local_1c = 9.18481e-41;
        local_20 = (undefined *)0x53df10;
        FUN_0051d620();
      }
      local_14 = (int *)0x53df1e;
      sVar5 = FUN_00dde2d0();
      if ((sVar5 == 1) &&
         (fVar12 = (float)param_1[0x2a3], !NAN(fVar12) && 144.0 < fVar12 != (fVar12 == 144.0))) {
        local_14 = (int *)0x0;
        local_18 = 0.0;
        local_1c = 4.59191e-40;
        local_20 = (undefined *)0x53df4b;
        FUN_0051d620();
        local_14 = (int *)0x53df59;
        sVar5 = FUN_00dde2d0();
        if (sVar5 == 1) {
          local_14 = (int *)0x0;
          local_18 = 0.0;
          local_1c = 4.59193e-40;
          local_20 = (undefined *)0x53df73;
          FUN_0051d620();
        }
      }
    }
  default:
    goto switchD_0053dbbb_default;
  }
  local_14 = (int *)0x53dc72;
  FUN_00ac80a0();
  iVar7 = FUN_00a94ce0();
  if (iVar7 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0052af60();
  }
switchD_0053dbbb_default:
  if (((param_1[0x186] == 0x10022) || (param_1[0x186] == 0x10021)) &&
     ((float)param_1[0x2a8] < 0.5235988)) {
    local_14 = (int *)0x393702d3;
    local_18 = 0.1;
    local_1c = 7.702635e-39;
    (**(code **)(*param_1 + 0x308))();
  }
  if (((param_1[0x186] == 0x10023) || (param_1[0x186] == 0x10024)) &&
     ((float)param_1[0x2a8] < 1.5707964)) {
    local_14 = (int *)0x393702d3;
    local_18 = 0.1;
    local_1c = 7.70276e-39;
    (**(code **)(*param_1 + 0x308))();
  }
  return;
switchD_0051f393_caseD_2:
  local_14 = (int *)0x3f800000;
  local_18 = 0.0;
  local_1c = 0.0;
  local_20 = (undefined *)0xf1;
  fStack_24 = 7.526256e-39;
  FUN_00aa4080();
  param_1[0x187] = param_1[0x187] + 1;
switchD_0051f393_caseD_3:
  FUN_00ac80a0();
  iVar7 = FUN_00a94ce0();
  if (iVar7 == 0) {
    return;
  }
  param_1[0x187] = param_1[0x187] + 1;
  return;
LAB_00531aa0:
  if (param_1[0x187] == 0) {
    local_14 = (int *)0x3f800000;
    local_18 = 0.16666667;
    local_1c = 0.0;
    local_20 = (undefined *)0x90;
    fStack_24 = 7.632003e-39;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    param_1[0x510] = param_1[0x510] | 4;
    FUN_00c27f40();
  }
  else if (param_1[0x187] != 1) goto LAB_00531baa;
  FUN_00ac80a0();
  iVar7 = FUN_00a8c760();
  if (iVar7 != 0) {
    param_1[0x585] = 1;
    local_14 = (int *)0x531b5e;
    FUN_00529170();
    local_14 = (int *)0x531b7d;
    FUN_00529170();
  }
  iVar7 = FUN_00a94ce0();
  if (iVar7 != 0) {
    local_14 = (int *)0x0;
    local_18 = 9.18369e-41;
    local_1c = 7.632253e-39;
    FUN_0051d620();
    param_1[0x57f] = 0x45430000;
  }
LAB_00531baa:
  iVar7 = FUN_00a8c760();
  if (iVar7 != 0) {
    local_14 = (int *)0x3dcccccd;
    local_18 = 7.632358e-39;
    (**(code **)(*param_1 + 0x308))();
  }
  return;
LAB_00531eb0:
  switch(param_1[0x187]) {
  case 0:
    local_14 = (int *)0x8000000;
    local_18 = 1.0;
    local_1c = 0.06666667;
    local_20 = (undefined *)0x0;
    fStack_24 = 2.42425e-43;
    local_28 = 7.633475e-39;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    local_14 = (int *)0x1;
    local_18 = 1.4013e-45;
    local_1c = 7.633515e-39;
    FUN_0051cd50();
    param_1[0x577] = -0x40800000;
    local_14 = param_1 + 0x224;
    param_1[0x579] = -0x40800000;
    param_1[0x225] = 0x3dcccccd;
    *local_14 = 0;
    param_1[0x250] = 0;
    param_1[0x576] = 0;
    param_1[0x226] = -0x42333333;
    param_1[0x57a] = 0;
    param_1[0x578] = 0;
    local_18 = 7.633636e-39;
    D3DXVec3TransformNormal();
    local_14 = (int *)0x531f92;
    FUN_00eaa6e0();
    break;
  case 1:
    break;
  case 2:
    local_14 = (int *)0x0;
    local_18 = 1.0;
    local_1c = 0.0;
    local_20 = (undefined *)0x0;
    fStack_24 = 2.45227e-43;
    local_28 = 7.6338e-39;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0051cc20();
    local_14 = (int *)0x1;
    local_18 = 1.4013e-45;
    local_1c = 7.63384e-39;
    FUN_0051cd50();
    goto LAB_00532010;
  case 3:
LAB_00532010:
    local_14 = (int *)0x532021;
    FUN_00ac80a0();
    goto switchD_00531ec9_default;
  case 4:
    local_14 = (int *)0x8000000;
    local_18 = 1.0;
    local_1c = 0.033333335;
    local_20 = (undefined *)0x0;
    fStack_24 = 2.43826e-43;
    local_28 = 7.633955e-39;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    local_14 = (int *)0x1;
    local_18 = 1.4013e-45;
    local_1c = 7.633984e-39;
    FUN_0051cd50();
    goto LAB_00532077;
  case 5:
LAB_00532077:
    local_14 = (int *)0x532088;
    FUN_00ac80a0();
    iVar7 = FUN_00a94ce0();
    if (iVar7 != 0) {
      local_14 = (int *)0x0;
      local_18 = 0.0;
      local_1c = 5.51019e-40;
      local_20 = (undefined *)0x5320a8;
      FUN_0051d620();
      param_1[0x52a] = 0x42700000;
      param_1[0x505] = 0;
      iVar7 = FUN_00518a90();
      if (iVar7 == 0) {
        local_14 = (int *)0x8;
        local_18 = 0.0;
        local_1c = 5.51016e-40;
        param_1[0x505] = 1;
        local_20 = (undefined *)0x5320e4;
        FUN_0051d620();
        iVar7 = FUN_00519da0();
        if (9 < iVar7) {
          local_14 = (int *)0x6;
          local_18 = 0.0;
          local_1c = 5.51016e-40;
          local_20 = (undefined *)0x532105;
          FUN_0051d620();
        }
      }
    }
    goto switchD_00531ec9_default;
  case 6:
    param_1[0x187] = 7;
    param_1[0x248] = 0x43340000;
    goto LAB_00532126;
  case 7:
LAB_00532126:
    fVar12 = (float)param_1[0x248] - (float)param_1[0x244];
    param_1[0x248] = (int)fVar12;
    if (fVar12 < 0.0 != (fVar12 == 0.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_0052b0b0();
    }
    goto switchD_00531ec9_default;
  case 8:
    local_14 = (int *)0x8000000;
    local_18 = 1.0;
    local_1c = 0.033333335;
    local_20 = (undefined *)0x0;
    fStack_24 = 2.49431e-43;
    local_28 = 7.634376e-39;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    local_14 = (int *)0x1;
    local_18 = 1.4013e-45;
    local_1c = 7.634406e-39;
    FUN_0051cd50();
    FUN_0051a500();
    goto LAB_005321ad;
  case 9:
LAB_005321ad:
    local_14 = (int *)0x5321be;
    FUN_00ac80a0();
    iVar7 = FUN_00a94ce0();
    if (iVar7 != 0) {
      local_14 = (int *)0x2;
      local_18 = 0.0;
      local_1c = 9.18481e-41;
      local_20 = (undefined *)0x5321db;
      FUN_0051d620();
      param_1[0x505] = 0;
    }
  default:
    goto switchD_00531ec9_default;
  }
  local_14 = (int *)0x531fa9;
  FUN_00ac80a0();
  iVar7 = FUN_00a94ce0();
  if (iVar7 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00531ec9_default:
  iVar7 = FUN_00a8c760();
  if (iVar7 != 0) {
    local_14 = (int *)0x393702d3;
    local_18 = 0.1;
    local_1c = 7.634592e-39;
    (**(code **)(*param_1 + 0x308))();
  }
  return;
}

// 00541CA0  Em01a0::vf4C  size=361  [class]
void __fastcall Em01a0::vf4C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  float10 fVar8;
  int local_54;
  undefined4 local_50 [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00529300();
  *(int *)(param_1 + 0x1320) = iVar1;
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x1324) = *(int *)(param_1 + 0x1324) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x1324) = 0;
  }
  iVar1 = FUN_00ac8120();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1190) != 0)) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = 3;
      puVar4 = (undefined4 *)(param_1 + 0x12b0);
      do {
        iVar2 = iVar2 + -1;
        puVar5 = puVar4 + -0x10;
        puVar7 = puVar4;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar4 = puVar4 + -0x10;
      } while (iVar2 != 0);
      iVar2 = FUN_00a12210(0);
      FID_conflict__memcpy(local_50,(void *)(iVar2 + 0x10),0x40);
      local_20 = *(undefined4 *)(iVar1 + 0x130);
      local_1c = *(undefined4 *)(iVar1 + 0x134);
      local_54 = 4;
      local_18 = *(undefined4 *)(iVar1 + 0x138);
      puVar4 = local_50;
      puVar5 = (undefined4 *)(param_1 + 0x11f0);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      piVar6 = (int *)(param_1 + 0x11a8);
      iVar1 = param_1 + 0x11f0;
      do {
        if (*piVar6 != 0) {
          Phantom::setTransform(iVar1);
        }
        iVar1 = iVar1 + 0x40;
        piVar6 = piVar6 + 4;
        local_54 = local_54 + -1;
      } while (local_54 != 0);
    }
  }
  FUN_00a92fb0();
  fVar8 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar8;
  BehaviorEmBase::vf4C();
  *(undefined4 *)(param_1 + 0x1410) = 0;
  iVar1 = FUN_00ac4770();
  if (iVar1 == 0) {
    FUN_005417e0();
  }
  FUN_005419b0();
  FUN_0053ab30(1);
  FUN_00537250();
  iVar1 = *(int *)(param_1 + 0x4f0);
  if (((*(byte *)(iVar1 + 0x28) & 2) == 0) && (*(int *)(iVar1 + 0x50) == 0)) {
    FUN_00cd3bf0(iVar1);
  }
  return;
}

// 00AADE00  Em01a0::Em01a0  size=270  [class]
undefined4 * __fastcall Em01a0::Em01a0(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = vftable;
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 0x1b;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  iVar1 = 3;
  do {
    FUN_009003e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 7;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  FUN_00904d60();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a603a0();
  FUN_00a603a0();
  return param_1;
}

// 00AADF20  Em01a0::vf04  size=6  [class]
undefined * Em01a0::vf04(void)

{
  return &DAT_01b34f34;
}

// 00AADF30  Em01a0::vf210  size=11  [class]
void Em01a0::vf210(void)

{
  FUN_00a81330();
  return;
}

// 00AB73C0  Em01a0::destruct  size=98  [class]
undefined4 __thiscall Em01a0::destruct(undefined4 param_1,byte param_2)

{
  cXml::cXml_7();
  cXml::cXml_7();
  cEspControler::~cEspControler();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

