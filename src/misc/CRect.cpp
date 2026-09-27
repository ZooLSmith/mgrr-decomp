// src/misc/CRect.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA48F0..00FA4DE0, 5 functions

#include "types.h"

// 00FA48F0  FUN_00fa48f0  size=273  [callgraph]
undefined4 FUN_00fa48f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (DAT_01f206d4 == 0) {
    return 0;
  }
  uVar3 = 1;
  local_8 = 0x15;
  switch(param_4) {
  case 0:
    uVar3 = 2;
    goto switchD_00fa4933_default;
  case 1:
  case 2:
    break;
  case 3:
    local_8 = 0x1c;
    break;
  case 4:
    local_8 = 0x74;
    break;
  default:
    goto switchD_00fa4933_default;
  }
  uVar2 = 0x200;
  uVar3 = 0;
switchD_00fa4933_default:
  iVar1 = D3DXCreateTexture(DAT_01f206d4,param_2,param_3,1,uVar2,local_8,uVar3,&local_4);
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 0x20) = local_4;
    *(undefined4 *)(param_1 + 0x34) = 4;
    *(undefined4 *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (param_4 != 0) {
      FUN_00fa31c0(local_4,7,(undefined4 *)(param_1 + 0x20),param_2,param_3,uVar2,local_8,uVar3,
                   param_1 + 0x1c,0);
    }
    *(int *)(param_1 + 8) = param_1 + 0x1c;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    return 1;
  }
  return 0;
}

// 00FA4A20  FUN_00fa4a20  size=460  [callgraph]
undefined4
FUN_00fa4a20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int aiStack_90 [2];
  undefined4 local_78;
  undefined4 local_68 [14];
  undefined4 local_30;
  int iStack_10;
  int iStack_c;
  
  iVar1 = param_1 + 0x1c;
  FUN_00fa2620();
  if (DAT_01f206d4 == (int *)0x0) {
    return 0;
  }
  local_78 = 0x15;
  if (param_6 == 1) {
    local_78 = 0x72;
  }
  else if (param_6 == 5) {
    local_78 = 0x4c4c554e;
  }
  puVar4 = &DAT_01f20668;
  puVar5 = local_68;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  aiStack_90[0] = param_1 + 0x4c;
  if ((param_2 == 8) || (param_5 == 9)) {
    aiStack_90[1] = 0;
    uVar6 = 0;
    uVar3 = 0;
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x70))(DAT_01f206d4,param_2,param_3,local_78,0,0,0);
  }
  else {
    uVar3 = 0;
    if (DAT_01f20708 == 2) {
      uVar3 = 2;
    }
    else if (DAT_01f20708 == 4) {
      uVar3 = 4;
    }
    else if (DAT_01f20708 == 8) {
      uVar3 = 8;
    }
    aiStack_90[1] = 0;
    uVar6 = 0;
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x70))
                      (DAT_01f206d4,param_2,param_3,local_78,uVar3,local_30,0);
  }
  if (-1 < iVar2) {
    FUN_00fa31c0(*(undefined4 *)(param_1 + 0x4c),1,(undefined4 *)(param_1 + 0x4c),param_2,param_3,0,
                 uVar3,1,iVar1,iStack_10);
    iVar2 = D3DXCreateTexture(uVar6,param_2,param_3,1,1,uVar3,0,aiStack_90);
    if (-1 < iVar2) {
      *(int *)(param_1 + 0x20) = aiStack_90[0];
      *(undefined4 *)(param_1 + 0x34) = 4;
      *(int *)(param_1 + 0x24) = param_2;
      *(undefined4 *)(param_1 + 0x28) = param_3;
      *(undefined4 *)(param_1 + 0x3c) = 1;
      if (param_2 == 8) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      else {
        *(int *)(param_1 + 0x40) = DAT_01f20708;
      }
      *(uint *)(param_1 + 0x44) = (uint)(iStack_c == 5);
      if (iStack_10 == 9) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      FUN_00fa31c0(aiStack_90[0],8,(int *)(param_1 + 0x20),param_2,param_3,1,uVar3,0,iVar1,iStack_10
                  );
      *(int *)(param_1 + 8) = iVar1;
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return 1;
    }
  }
  return 0;
}

// 00FA4D00  FUN_00fa4d00  size=91  [callgraph]
undefined4 __thiscall FUN_00fa4d00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd5650(&DAT_016eb554);
    return 0;
  }
  iVar1 = FUN_00fa37b0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016eb580);
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return 1;
}

// 00FA4D60  FUN_00fa4d60  size=37  [callgraph]
void __thiscall
FUN_00fa4d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  FUN_00fa4a20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// 00FA4DE0  CRect::SetRect  size=32  [class]
/* Library Function - Single Match
    public: void __thiscall CRect::SetRect(int,int,int,int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CRect::SetRect(CRect *this,int param_1,int param_2,int param_3,int param_4)

{
  FUN_00fa48f0(this,param_1,param_2,param_3,param_4);
  return;
}

