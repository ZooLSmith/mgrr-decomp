// src/misc/switchD_0080dbae.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A16680..00A188A0, 23 functions

#include "types.h"

// 00A16680  FUN_00a16680  size=380  [callgraph]
void __thiscall FUN_00a16680(int *param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(ushort *)(param_2 + 0xa2) & 0x4002) == 0) {
    FUN_00ddb590(param_2 + 0x60,param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0xa8) == 0) {
    if ((*(byte *)(param_2 + 0xa2) & 4) == 0) {
      iVar3 = param_2 + 0x10;
      D3DXMatrixRotationQuaternion(iVar3,param_2 + 0x60);
      FUN_00ddd140(&stack0xffffffa8,param_2 + 0x70);
      D3DXMatrixMultiply(iVar3,&stack0xffffffa8,iVar3);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x54);
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x58);
      D3DXMatrixMultiply(iVar3,iVar3,param_3);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0x54);
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x58);
    }
  }
  else if ((*(ushort *)(param_2 + 0xa2) & 0x8004) == 0) {
    FUN_00a15310();
  }
  sVar1 = (short)param_1[2];
  if (sVar1 != 0) {
    iVar3 = 0;
    if (sVar1 != 1 && -1 < sVar1 + -1) {
      iVar4 = 0;
      do {
        iVar2 = *param_1 + iVar4;
        if ((*(ushort *)(iVar2 + 0xa2) & 0x4002) == 0) {
          FUN_00ddb590(iVar2 + 0x60,iVar2 + 0x90);
        }
        if ((*(ushort *)(*param_1 + iVar4 + 0xa2) & 0x8004) == 0) {
          FUN_00a15310();
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xb0;
      } while (iVar3 < (short)param_1[2] + -1);
    }
    iVar3 = (short)param_1[2] * 0xb0 + -0xb0 + *param_1;
    if ((*(ushort *)(iVar3 + 0xa2) & 0x4002) == 0) {
      FUN_00ddb590(iVar3 + 0x60,iVar3 + 0x90);
    }
    if ((*(ushort *)((short)param_1[2] * 0xb0 + *param_1 + -0xe) & 0x8004) == 0) {
      FUN_00a15310();
    }
  }
  return;
}

// 00A16800  FUN_00a16800  size=229  [callgraph]
void FUN_00a16800(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  uVar3 = param_2;
  piVar2 = param_1;
  uVar1 = *(undefined4 *)(*param_1 + 0xac);
  if ((*(byte *)(param_1[2] + 0x36c) & 1) != 0) {
    if (param_3 == 0) {
      FUN_00a11350(uVar1,(short)param_1[8],param_2);
    }
    else {
      iVar4 = FUN_00a0c2e0((short)param_1[8]);
      if (iVar4 == 0) {
        return;
      }
      param_1 = (int *)0x1111000;
      if (*(int *)(iVar4 + 0xc) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar4 + 8);
      }
      FUN_00fa01f0(0x101,&param_1,uVar5);
      if ((*(ushort *)(piVar2 + 8) != 0xffffffff) &&
         (iVar4 = FUN_00a0c240(&local_10,(uint)*(ushort *)(piVar2 + 8)), iVar4 != 0)) {
        FUN_00f91fc0(local_10,local_2);
      }
    }
  }
  local_10 = piVar2[6];
  local_c = piVar2[7];
  local_4 = (undefined2)piVar2[8];
  local_2 = (undefined1)uVar3;
  local_8 = uVar1;
  FUN_00a0d720(&local_10,piVar2[0xd]);
  return;
}

// 00A168F0  FUN_00a168f0  size=88  [callgraph]
void FUN_00a168f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  iVar1 = param_2[2];
  *(undefined4 *)(iVar1 + 0x368) = 0x42c80000;
  if (((param_2[0xb] != 0) && (iVar2 = param_2[9], -1 < iVar2)) && (iVar2 < (int)param_2[0xc])) {
    *(undefined4 *)(iVar1 + 0x368) = *(undefined4 *)(param_2[0xb] + iVar2 * 4);
  }
  (**(code **)(*param_1 + 0x24))(*param_2,param_2[1],iVar1);
  FUN_00a16800(param_2,unaff_retaddr,param_1);
  return;
}

// 00A16950  FUN_00a16950  size=1467  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a16950(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  piVar1 = *(int **)param_1[3];
  iVar2 = param_1[2];
  if ((*(byte *)(iVar2 + 0x36c) & 1) == 0) {
    FUN_00a114d0(*(undefined4 *)(*param_1 + 0xac),piVar1[2]);
  }
  if (DAT_01be5550 != 0) {
    local_20 = _DAT_018e84c0 * -1.6;
    local_1c = _DAT_018e84c4 * 1.6;
    local_18 = _DAT_018e84c8;
    local_14 = _DAT_018e84cc * 0.0;
    iVar5 = FUN_00f994a0(0xb8,&local_20,4);
    if (iVar5 == 0) {
      _DAT_01f14050 = local_20;
      _DAT_01f14054 = local_1c;
      _DAT_01f14058 = local_18;
      _DAT_01f1405c = local_14;
      FUN_00f995e0(0xb8,&DAT_01f14050,4);
    }
    iVar5 = FUN_00f99540(0xb8,&local_20,4);
    if (iVar5 == 0) {
      DAT_01f13250 = local_20;
      DAT_01f13254 = local_1c;
      DAT_01f13258 = local_18;
      DAT_01f1325c = local_14;
      FUN_00f99620(0xb8,&DAT_01f13250,4);
    }
  }
  if (((*(int *)(*param_1 + 0xb8) == 0) || (DAT_01be1f4c != 0)) ||
     ((*(uint *)(param_1[2] + 0x370) & 0xf0000000) != 0)) {
    uVar10 = 1;
  }
  else {
    uVar10 = 3;
  }
  FUN_00f9dd70(1,1,uVar10);
  FUN_00f9d7a0(*(ushort *)(param_1[2] + 0x36e) & 1);
  FUN_00f9d760(*(uint *)(param_1[2] + 0x36c) >> 0xf & 1);
  iVar5 = FUN_00f99540(0xb4,(undefined4 *)(iVar2 + 0x364),1);
  if (iVar5 == 0) {
    _DAT_01f13210 = *(undefined4 *)(iVar2 + 0x364);
    FUN_00f99620(0xb4,&DAT_01f13210,1);
  }
  if (param_1[4] == 0) {
    iVar5 = FUN_00f99540(0xb5,&DAT_01b84918,1);
    if (iVar5 == 0) {
      uVar11 = 1;
      puVar9 = &DAT_01f13220;
      _DAT_01f13220 = DAT_01b84918;
      uVar10 = 0xb5;
      goto LAB_00a16c17;
    }
  }
  else {
    iVar5 = param_1[4];
    local_20 = *(float *)(iVar5 + 0x70) - 1.0;
    local_1c = *(float *)(iVar5 + 0x74) - 1.0;
    local_18 = *(float *)(iVar5 + 0x78) - 1.0;
    local_14 = *(float *)(iVar5 + 0x7c) - 1.0;
    iVar6 = FUN_00f99540(0xb5,(undefined4 *)(iVar5 + 0x50),4);
    if (iVar6 == 0) {
      _DAT_01f13220 = *(undefined4 *)(iVar5 + 0x50);
      _DAT_01f13224 = *(undefined4 *)(iVar5 + 0x54);
      _DAT_01f13228 = *(undefined4 *)(iVar5 + 0x58);
      _DAT_01f1322c = *(undefined4 *)(iVar5 + 0x5c);
      FUN_00f99620(0xb5,&DAT_01f13220,4);
    }
    iVar5 = FUN_00f99540(0xb6,&local_20,4);
    if (iVar5 == 0) {
      uVar11 = 4;
      _DAT_01f13230 = local_20;
      puVar9 = &DAT_01f13230;
      _DAT_01f13234 = local_1c;
      _DAT_01f13238 = local_18;
      _DAT_01f1323c = local_14;
      uVar10 = 0xb6;
LAB_00a16c17:
      FUN_00f99620(uVar10,puVar9,uVar11);
    }
  }
  bVar7 = *(int *)(*param_1 + 0xbc) != -1;
  if (bVar7) {
    FUN_00f9dcf0(1);
    FUN_00f9de50(3,*(undefined4 *)(*param_1 + 0xbc),*(undefined4 *)(*param_1 + 0xbc));
    FUN_00f9dd70(1,1,1);
  }
  bVar8 = (DAT_01bea088 & 0x800000) != 0;
  if (bVar8) {
    FUN_00f9db30(1);
    FUN_00f9d930(1);
    FUN_00f9da00(5,2,1);
  }
  if ((DAT_01bea084 & 0x80000) != 0) {
    uVar3 = *(uint *)(param_1[2] + 0x370);
    if (((1 < uVar3) && ((uVar3 & 0xf0000000) == 0)) && (DAT_01be1f4c == 0)) {
      if ((*(byte *)(param_1[2] + 0x36c) & 1) == 0) {
        FUN_00a168f0(&PTR_PTR_018e8240,param_1,0,0);
      }
      else {
        FUN_00a168f0(&PTR_PTR_018e81c8,param_1,0,0);
      }
      goto LAB_00a16ef6;
    }
  }
  if (*(int *)(*param_1 + 0xc0) != 0) {
    if ((*(byte *)(param_1[2] + 0x36c) & 1) == 0) {
      if ((piVar1[0xb] == 0) && (piVar1[0x18] == 0)) {
        FUN_00a168f0(&PTR_PTR_018e83b8,param_1,0,0);
      }
      else {
        FUN_00a168f0(&PTR_PTR_018e8438,param_1,0,0);
      }
    }
    else if ((piVar1[0xb] == 0) && (piVar1[0x18] == 0)) {
      FUN_00a168f0(&PTR_PTR_018e82b8,param_1,0,0);
    }
    else {
      FUN_00a168f0(&PTR_PTR_018e8338,param_1,0,0);
    }
    goto LAB_00a16ef6;
  }
  uVar3 = *(uint *)(param_1[2] + 0x36c);
  FUN_00f9d6e0(*(undefined4 *)(iVar2 + 0x360));
  if (!bVar8) {
    if (DAT_01be5550 == 0) {
      if (((uVar3 >> 0xd & 1) == 0) && ((*(uint *)(iVar2 + 0x36c) & 0x2000) == 0)) {
        if (DAT_01be1f40 != 0) goto LAB_00a16e3e;
        FUN_00f9db30(DAT_01be1f44 == 0);
        if (piVar1[0xb] != 0) {
          if (DAT_018da65c == 0) {
            FUN_00f9d8f0(1);
            FUN_00f9d970(2,1,1);
          }
          FUN_00f9d930(1);
          FUN_00f9da00(1,1,4);
        }
      }
      else {
        FUN_00f9db30(1);
        FUN_00f9da00(5,6,1);
      }
    }
    else if (DAT_01be1f40 != 0) {
LAB_00a16e3e:
      FUN_00f9db30(1);
      FUN_00f9d930(1);
      FUN_00f9da00(1,6,1);
    }
  }
  iVar2 = param_1[2];
  *(undefined4 *)(iVar2 + 0x368) = 0x42c80000;
  if (((param_1[0xb] != 0) && (iVar5 = param_1[9], -1 < iVar5)) && (iVar5 < param_1[0xc])) {
    *(undefined4 *)(iVar2 + 0x368) = *(undefined4 *)(param_1[0xb] + iVar5 * 4);
  }
  (**(code **)(*piVar1 + 0x24))(*param_1,param_1[1],iVar2);
  fVar4 = *(float *)(*param_1 + 0xac);
  if ((*(byte *)(param_1[2] + 0x36c) & 1) != 0) {
    FUN_00a11350(fVar4,(short)param_1[8],0);
  }
  local_20 = (float)param_1[6];
  local_1c = (float)param_1[7];
  local_14._0_3_ = (uint3)*(ushort *)(param_1 + 8);
  local_18 = fVar4;
  FUN_00a0d720(&local_20,param_1[0xd]);
LAB_00a16ef6:
  if (bVar7) {
    FUN_00f9dcf0(0);
  }
  return;
}

// 00A16F10  FUN_00a16f10  size=22  [callgraph]
void FUN_00a16f10(undefined4 param_1,undefined4 param_2)

{
  FUN_00a11540(param_2);
  FUN_00a16950(param_2);
  return;
}

// 00A16F30  FUN_00a16f30  size=405  [callgraph]
void FUN_00a16f30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined2 uStack_4;
  undefined1 uStack_2;
  
  if ((*(byte *)(param_1[2] + 0x36c) & 1) == 0) {
    iVar1 = *(int *)(*param_1 + 0xac);
    _Src = (void *)((uint)*(byte *)(iVar1 + 0x8e) * 0x40 + iVar1);
    iVar3 = FUN_00f994a0(0x10,_Src,0x10);
    if (iVar3 == 0) {
      FID_conflict__memcpy(&DAT_01f135d0,_Src,0x40);
      FUN_00f995e0(0x10,&DAT_01f135d0,0x10);
    }
    FUN_00a11460(iVar1);
    FUN_00a113f0(iVar1);
  }
  bVar4 = *(int *)(*param_1 + 0xbc) != -1;
  if (bVar4) {
    FUN_00f9dcf0(1);
    FUN_00f9de50(3,*(undefined4 *)(*param_1 + 0xbc),*(undefined4 *)(*param_1 + 0xbc));
    FUN_00f9dd70(1,1,1);
  }
  if (param_1[10] != -1) {
    FUN_00f9a230(param_1[10]);
  }
  piVar2 = *(int **)(param_1[3] + 4);
  if (piVar2 != (int *)0x0) {
    FUN_00f9d6e0(*(undefined4 *)(param_1[2] + 0x360));
    iVar1 = param_1[2];
    *(undefined4 *)(iVar1 + 0x368) = 0x42c80000;
    if (((param_1[0xb] != 0) && (iVar3 = param_1[9], -1 < iVar3)) && (iVar3 < param_1[0xc])) {
      *(undefined4 *)(iVar1 + 0x368) = *(undefined4 *)(param_1[0xb] + iVar3 * 4);
    }
    (**(code **)(*piVar2 + 0x24))(*param_1,param_1[1],iVar1);
    uStack_8 = *(undefined4 *)(*param_1 + 0xac);
    if ((*(byte *)(param_1[2] + 0x36c) & 1) != 0) {
      FUN_00a11350(uStack_8,(short)param_1[8],0);
    }
    iStack_10 = param_1[6];
    iStack_c = param_1[7];
    uStack_4 = (undefined2)param_1[8];
    uStack_2 = 0;
    FUN_00a0d720(&iStack_10,param_1[0xd]);
  }
  if (param_1[10] != -1) {
    FUN_00f9a2a0(param_1[10]);
  }
  if (bVar4) {
    FUN_00f9dcf0();
    return;
  }
  return;
}

// 00A170E0  FUN_00a170e0  size=278  [callgraph]
void FUN_00a170e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  
  if ((*(byte *)(param_1[2] + 0x36c) & 1) == 0) {
    _Src = (void *)((uint)*(byte *)(*(int *)(*param_1 + 0xac) + 0x8e) * 0x40 +
                   *(int *)(*param_1 + 0xac));
    iVar3 = FUN_00f994a0(0x10,_Src);
    if (iVar3 == 0) {
      FID_conflict__memcpy(&DAT_01f135d0,_Src,0x40);
      FUN_00f995e0(0x10,&DAT_01f135d0,0x10);
    }
  }
  piVar1 = *(int **)(param_1[3] + 0xc);
  if (piVar1 != (int *)0x0) {
    FUN_00f9d6e0();
    iVar3 = param_1[2];
    *(undefined4 *)(iVar3 + 0x368) = 0x42c80000;
    if (((param_1[0xb] != 0) && (iVar2 = param_1[9], -1 < iVar2)) && (iVar2 < param_1[0xc])) {
      *(undefined4 *)(iVar3 + 0x368) = *(undefined4 *)(param_1[0xb] + iVar2 * 4);
    }
    (**(code **)(*piVar1 + 0x24))(*param_1,param_1[1],iVar3);
    if ((*(byte *)(param_1[2] + 0x36c) & 1) != 0) {
      FUN_00a11350(*(undefined4 *)(*param_1 + 0xac),(short)param_1[8],0);
    }
    FUN_00a0d720(&stack0xffffffe4,param_1[0xd]);
  }
  return;
}

// 00A17210  FUN_00a17210  size=806  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a17210(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  if ((*(byte *)(param_1[2] + 0x36c) & 1) == 0) {
    iVar2 = *(int *)(*param_1 + 0xac);
    pvVar4 = (void *)((uint)*(byte *)(iVar2 + 0x8e) * 0x40 + iVar2);
    iVar1 = FUN_00f994a0(0x10,pvVar4,0x10);
    if (iVar1 == 0) {
      FID_conflict__memcpy(&DAT_01f135d0,pvVar4,0x40);
      FUN_00f995e0(0x10,&DAT_01f135d0,0x10);
    }
    FUN_00a11460(iVar2);
    FUN_00a113f0(iVar2);
  }
  if ((DAT_01be5550 != 0) || ((DAT_01bea084 & 0x40000000) != 0)) {
    local_20 = _DAT_018e84c0 * -1.6;
    local_1c = _DAT_018e84c4 * 1.6;
    local_18 = _DAT_018e84c8;
    local_14 = _DAT_018e84cc * 0.0;
    if (((*(byte *)(param_1[2] + 0x36c) & 1) == 0) && ((DAT_01b83d3c & 0x10) != 0)) {
      local_14 = 1.0;
    }
    iVar2 = FUN_00f994a0(0xb8,&local_20,4);
    if (iVar2 == 0) {
      _DAT_01f14050 = local_20;
      _DAT_01f14054 = local_1c;
      _DAT_01f14058 = local_18;
      _DAT_01f1405c = local_14;
      FUN_00f995e0(0xb8,&DAT_01f14050,4);
    }
    iVar2 = FUN_00f99540(0xb8,&local_20,4);
    if (iVar2 == 0) {
      DAT_01f13250 = local_20;
      DAT_01f13254 = local_1c;
      DAT_01f13258 = local_18;
      DAT_01f1325c = local_14;
      FUN_00f99620(0xb8,&DAT_01f13250,4);
    }
    if ((DAT_01bea084 & 0x40000000) != 0) {
      iVar2 = *(int *)(*param_1 + 0xac);
      FUN_00f9d6e0(*(undefined4 *)(param_1[2] + 0x360));
      iVar1 = param_1[2];
      if ((*(byte *)(iVar1 + 0x36c) & 1) != 0) {
        *(undefined4 *)(iVar1 + 0x368) = 0x42c80000;
        if (((param_1[0xb] != 0) && (iVar2 = param_1[9], -1 < iVar2)) && (iVar2 < param_1[0xc])) {
          *(undefined4 *)(iVar1 + 0x368) = *(undefined4 *)(param_1[0xb] + iVar2 * 4);
        }
        (**(code **)(DAT_01f693f8 + 0x24))(*param_1,param_1[1],iVar1);
        FUN_00a16800(param_1,0,1);
        return;
      }
      uVar3 = (uint)*(byte *)(iVar2 + 0x8e);
      if (1 < *(byte *)(iVar2 + 0x8f)) {
        uVar3 = uVar3 - 1 & 1;
      }
      pvVar4 = (void *)(iVar2 + uVar3 * 0x40);
      iVar2 = FUN_00f994a0(0xb9,pvVar4,0x10);
      if (iVar2 == 0) {
        FID_conflict__memcpy(&DAT_01f14060,pvVar4,0x40);
        FUN_00f995e0(0xb9,&DAT_01f14060,0x10);
      }
      iVar2 = param_1[2];
      *(undefined4 *)(iVar2 + 0x368) = 0x42c80000;
      if (((param_1[0xb] != 0) && (iVar1 = param_1[9], -1 < iVar1)) && (iVar1 < param_1[0xc])) {
        *(undefined4 *)(iVar2 + 0x368) = *(undefined4 *)(param_1[0xb] + iVar1 * 4);
      }
      (**(code **)(DAT_01f6a6b8 + 0x24))(*param_1,param_1[1],iVar2);
      if ((*(byte *)(param_1[2] + 0x36c) & 1) != 0) {
        FUN_00a11350(*(undefined4 *)(*param_1 + 0xac),(short)param_1[8],0);
      }
      local_20._0_3_ = (uint3)*(ushort *)(param_1 + 8);
      FUN_00a0d720(&stack0xffffffd4,param_1[0xd]);
      return;
    }
  }
  iVar2 = *(int *)(param_1[3] + 8);
  if (iVar2 != 0) {
    FUN_00f9d6e0(*(undefined4 *)(param_1[2] + 0x360));
    FUN_00a168f0(iVar2,param_1,1,0);
  }
  return;
}

// 00A17550  FUN_00a17550  size=388  [callgraph]
void FUN_00a17550(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  if ((*(byte *)(param_1[2] + 0x36c) & 1) == 0) {
    iVar3 = *(int *)(*param_1 + 0xac);
    _Src = (void *)((uint)*(byte *)(iVar3 + 0x8e) * 0x40 + iVar3);
    iVar2 = FUN_00f994a0(0x10,_Src,0x10);
    if (iVar2 == 0) {
      FID_conflict__memcpy(&DAT_01f135d0,_Src,0x40);
      FUN_00f995e0(0x10,&DAT_01f135d0,0x10);
    }
    FUN_00a11460(iVar3);
    FUN_00a113f0(iVar3);
  }
  FUN_00f9d8f0(1);
  FUN_00f9d970(2,2,1);
  FUN_00f9db30(1);
  FUN_00f9d7a0(0);
  FUN_00fb0580();
  iVar3 = FUN_00e6b900();
  if (iVar3 != 3) {
    FUN_00fb05d0();
    local_8 = *(undefined4 *)(*param_1 + 0xac);
    if ((*(byte *)(param_1[2] + 0x36c) & 1) != 0) {
      FUN_00a11350(local_8,(short)param_1[8],0);
    }
    local_10 = param_1[6];
    local_c = param_1[7];
    local_4 = (undefined2)param_1[8];
    local_2 = 0;
    FUN_00a0d720(&local_10,param_1[0xd]);
  }
  FUN_00fb0650();
  uVar1 = *(undefined4 *)(*param_1 + 0xac);
  if ((*(byte *)(param_1[2] + 0x36c) & 1) != 0) {
    FUN_00a11350(uVar1,(short)param_1[8],0);
  }
  local_10 = param_1[6];
  local_c = param_1[7];
  local_4 = (undefined2)param_1[8];
  local_2 = 0;
  local_8 = uVar1;
  FUN_00a0d720(&local_10,param_1[0xd]);
  FUN_00fb07d0();
  FUN_00f9d810();
  return;
}

// 00A176F0  FUN_00a176f0  size=208  [callgraph]
void __fastcall FUN_00a176f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_00a07600();
  FUN_00a159c0();
  puVar1 = *(undefined4 **)(param_1 + 800);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-4] == 0) {
      FUN_00dd4940(puVar1 + -4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
    *(undefined4 *)(param_1 + 800) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x328);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -0x10);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      FUN_00a118e0();
    }
    FUN_00dd4940(iVar2 + -0x10);
    *(undefined4 *)(param_1 + 0x328) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x34c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x34c))(1);
    *(undefined4 *)(param_1 + 0x34c) = 0;
  }
  if ((*(int *)(param_1 + 0x330) != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0xf8) != 0)) {
    FUN_00a06520();
    return;
  }
  return;
}

// 00A177C0  FUN_00a177c0  size=151  [callgraph]
undefined4 FUN_00a177c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x60);
  sVar3 = *(short *)(param_1 + 0x44);
  iVar4 = FUN_00a15ac0(sVar3,uVar2,*(undefined2 *)(param_1 + 0x38),param_2);
  if (iVar4 == 0) {
    return 0;
  }
  if (((0 < sVar3) && (uVar2 != 0)) && (uVar5 = 0, uVar2 != 0)) {
    do {
      if ((short)uVar5 == -1) {
        return 0;
      }
      if (*(int *)(param_1 + 0x60) < (int)(uVar5 & 0xffff)) {
        return 0;
      }
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x5c) + (uVar5 & 0xffff) * 8);
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      iVar4 = FUN_00a0c110(uVar5,*puVar1,*(undefined1 *)(puVar1 + 1),param_2);
      if (iVar4 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while ((ushort)uVar5 < uVar2);
  }
  return 1;
}

// 00A17860  FUN_00a17860  size=473  [callgraph]
undefined4 __thiscall
FUN_00a17860(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00a0a680(param_2,param_6);
  if (iVar1 == 0) {
    return 0;
  }
  if (*param_5 == 1) {
LAB_00a17926:
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(int *)(param_1 + 0x330) = param_2;
    if (*(LONG **)(param_2 + 0xf8) != (LONG *)0x0) {
      InterlockedIncrement(*(LONG **)(param_2 + 0xf8));
    }
    iVar1 = *(int *)(param_1 + 0x360);
    iVar3 = iVar1;
    if (iVar1 == 0) {
      iVar3 = param_1;
    }
    if (0 < *(short *)(iVar3 + 0x358)) {
      iVar3 = 0;
      if ((*(int *)(param_1 + 0x330) == 0) || (iVar2 = FUN_00a06de0(0), iVar2 == 0xfff)) {
        if (iVar1 == 0) {
          iVar1 = param_1;
        }
        if ((0 < *(short *)(iVar1 + 0x358)) && (*(int *)(iVar1 + 0x350) != 0)) {
          iVar3 = (int)*(short *)(*(int *)(iVar1 + 0x350) + 0xa0);
        }
      }
      cModelBase::setRootPartsNo(iVar3);
      FUN_00a10cf0(*(int *)(param_1 + 0x334) + 0x10,0);
    }
    if (*param_5 != 1) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x10000;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 2;
    return 1;
  }
  iVar1 = FUN_00dd3500(0x1c,param_6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = Hw::cTexture::cTexture_6();
  }
  *(int *)(param_1 + 0x34c) = iVar1;
  if (iVar1 != 0) {
    if (param_4 == 0) {
      iVar1 = FUN_00fa25d0(param_3);
    }
    else {
      iVar1 = FUN_00fa4d00(param_4,param_3);
    }
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x348) = param_3;
      *(int *)(param_1 + 0x344) = param_4;
      iVar1 = FUN_00a11d20(param_2,param_6);
      if (((iVar1 != 0) && (iVar1 = cMesh::cMesh(param_2,param_6), iVar1 != 0)) &&
         (iVar1 = FUN_00a177c0(param_2,param_6), iVar1 != 0)) {
        FUN_00a07960(param_2,param_5 + 1);
        goto LAB_00a17926;
      }
    }
  }
  return 0;
}

// 00A17A40  switchD_0080dbae::default  size=83  [class]
void __fastcall switchD_0080dbae::default(int param_1)

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

// 00A17AA0  FUN_00a17aa0  size=83  [callgraph]
void __fastcall FUN_00a17aa0(int param_1)

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

// 00A17B00  FUN_00a17b00  size=22  [callgraph]
void __fastcall FUN_00a17b00(int param_1)

{
  if (*(int *)(param_1 + 0x360) == 0) {
    FUN_00a165b0(param_1);
  }
  return;
}

// 00A17B20  FUN_00a17b20  size=65  [callgraph]
void __thiscall FUN_00a17b20(int param_1,int param_2)

{
  if ((*(uint *)(param_1 + 0x364) & 0x10000) != 0) {
    FUN_00a0c350();
    FUN_00a15bc0(param_2,param_2 + 0x350);
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffeffff;
  }
  return;
}

// 00A17B70  FUN_00a17b70  size=192  [callgraph]
void __fastcall FUN_00a17b70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x474) != 0) {
    if (0 < *(int *)(param_1 + 0x47c)) {
      iVar3 = 0;
      iVar2 = 0;
      do {
        iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x474) + 0x34);
        if (iVar1 != -1) {
          FUN_00f9a1d0(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x44;
      } while (iVar2 < *(int *)(param_1 + 0x47c));
    }
    if (*(int *)(param_1 + 0x474) != 0) {
      FUN_00dd4940(*(int *)(param_1 + 0x474));
      *(undefined4 *)(param_1 + 0x474) = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x370);
  if (iVar2 != 0) {
    thunk_FUN_00a1bdd0();
    FUN_00dd4920(iVar2);
    *(undefined4 *)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x450) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x450));
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  FUN_00d8bc00(param_1 + 0x48c);
  FUN_00a176f0();
  return;
}

// 00A17C30  FUN_00a17c30  size=1037  [callgraph]
undefined4 __thiscall
FUN_00a17c30(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  
  FUN_00a17b70();
  iVar6 = FUN_00a17860(param_2,param_3,param_4,param_6,param_7);
  if ((iVar6 == 0) ||
     ((0 < *(short *)(param_1 + 0x324) && (iVar6 = FUN_00a12750(param_2,param_7), iVar6 == 0)))) {
    return 0;
  }
  if (*(int *)(param_6 + 0x1c) == 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 4;
  }
  if (*(int *)(param_6 + 0x24) == 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfdffffff;
  }
  else {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x2000000;
  }
  if (*(int *)(param_6 + 0x18) == 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfeffffff;
  }
  else {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x1000000;
  }
  if (*(int *)(param_6 + 0x20) == 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffffff7f;
  }
  else {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x80;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffeff;
  *(undefined4 *)(param_1 + 0x340) = 4;
  cXmlBinary::cXmlBinary_43(param_5);
  if (*(int *)(param_6 + 0x14) == 0) {
    *(uint *)(param_1 + 0x464) = *(uint *)(param_1 + 0x464) & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 0x464) = *(uint *)(param_1 + 0x464) | 2;
  }
  uVar4 = *(uint *)(param_2 + 0xcc);
  if (0 < (int)uVar4) {
    *(uint *)(param_1 + 0x454) = uVar4;
    iVar6 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar4 * 4),param_7);
    *(int *)(param_1 + 0x450) = iVar6;
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x454)) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 0x450) + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x454));
    }
  }
  fVar1 = *(float *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(*(int *)(param_1 + 0x330) + 0x3c);
  *(int *)(param_1 + 0x2fc) = param_1 + 0x1b0;
  fVar2 = *(float *)(param_1 + 0x74);
  fVar3 = *(float *)(param_1 + 0x78);
  param_6 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    param_7 = 0x4a0;
    iVar6 = 0;
    do {
      iVar12 = *(int *)(param_1 + 800) + iVar6;
      iVar8 = 0;
      if (0 < *(int *)(iVar12 + 0x34)) {
        do {
          iVar5 = *(int *)(*(int *)(iVar12 + 0x30) + iVar8 * 4);
          if (iVar5 != 0) {
            if ((*(uint *)(iVar5 + 0x51c) & 0x1000) == 0) {
              *(uint *)(iVar5 + 0x518) =
                   ~((uint)(fVar3 < 0.0) + (uint)(fVar2 < 0.0) + (uint)(fVar1 < 0.0)) & 1 | 2;
            }
            else {
              *(undefined4 *)(iVar5 + 0x518) = 1;
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(iVar12 + 0x34));
      }
      iVar8 = 0;
      if (0 < *(int *)(iVar12 + 0x34)) {
        piVar9 = *(int **)(iVar12 + 0x30);
        do {
          if ((*piVar9 != 0) && ((*(byte *)(*piVar9 + 0x51c) & 2) != 0)) {
            uVar10 = FUN_00a12210(param_7);
            param_7 = param_7 + 1;
            *(undefined4 *)(iVar12 + 100) = uVar10;
            break;
          }
          iVar8 = iVar8 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar8 < *(int *)(iVar12 + 0x34));
      }
      param_6 = param_6 + 1;
      iVar6 = iVar6 + 0x70;
    } while (param_6 < *(short *)(param_1 + 0x324));
  }
  iVar6 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    piVar9 = (int *)(*(int *)(param_1 + 0x328) + 0x470);
    do {
      if (*(int *)(*piVar9 + 100) != 0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x800000;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 0x158;
    } while (iVar6 < *(short *)(param_1 + 0x32c));
  }
  uVar4 = *(uint *)(param_1 + 0x4b4);
  uVar11 = uVar4 & 0xf0000;
  uVar10 = 0;
  if (uVar11 == 0x20000) {
    if ((uVar4 < 0x20090) || (0x2009f < uVar4)) {
      if ((uVar4 < 0x20180) || (0x2009f < uVar4)) {
        uVar10 = 2;
      }
      uVar7 = 0;
      do {
        if (*(uint *)((int)&DAT_0165c564 + uVar7) == uVar4) goto LAB_00a17fd2;
        uVar7 = uVar7 + 4;
      } while (uVar7 < 0x18);
    }
  }
  else if (((uVar4 < 0x10800) || (0x108ff < uVar4)) && (0xf < uVar4 - 0x10a00)) {
    if (uVar11 == 0x30000) {
      iVar6 = FUN_00c13980(uVar4);
      if (((((iVar6 == 0) && (iVar6 = FUN_00c139a0(uVar4), iVar6 == 0)) &&
           ((iVar6 = FUN_00c139f0(uVar4), iVar6 == 0 &&
            ((iVar6 = FUN_00c13a30(uVar4), iVar6 == 0 && (iVar6 = FUN_00c13a70(uVar4), iVar6 == 0)))
            ))) && (iVar6 = FUN_00c13a90(uVar4), iVar6 == 0)) &&
         (iVar6 = FUN_00c13ab0(uVar4), iVar6 == 0)) {
        uVar10 = 2;
      }
      else {
        uVar10 = 0;
      }
      uVar7 = 0;
      do {
        if (*(uint *)((int)&DAT_0165c57c + uVar7) == uVar4) goto LAB_00a17fd2;
        uVar7 = uVar7 + 4;
      } while (uVar7 < 0x3c);
    }
  }
  else {
    uVar10 = 4;
  }
LAB_00a17fd4:
  iVar8 = 0;
  iVar6 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x460 + iVar8) = uVar10;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x560;
    } while (iVar6 < *(short *)(param_1 + 0x32c));
  }
  *(undefined4 *)(param_1 + 0x310) = 0;
  if ((((uVar11 == 0x20000) || (uVar11 == 0x30000)) || (uVar11 == 0x10000)) || (uVar11 == 0x60000))
  {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x20;
  }
  return 1;
LAB_00a17fd2:
  uVar10 = 0;
  goto LAB_00a17fd4;
}

// 00A18040  FUN_00a18040  size=830  [callgraph]
void __thiscall FUN_00a18040(int param_1,uint *param_2,int param_3,float param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  code *pcVar7;
  
  iVar1 = *(int *)(param_3 + 0x478);
  iVar4 = *(int *)(param_3 + 0x508);
  if (iVar4 == 0) {
    uVar5 = *(uint *)(param_3 + 0x51c);
    if ((uVar5 & 0x400000) == 0) {
      if (*(int *)(param_1 + 0x310) == 0) {
        if (param_2[1] == 2) {
          iVar4 = 0x51;
          if (*(int *)(param_3 + 0x474) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 & 0x200000;
          }
          param_4 = *(float *)(param_3 + 0x510) + param_4;
          if (*(float *)(param_1 + 0x45c) < 1.0) {
            iVar3 = *(int *)(param_3 + 0x50c) + 0x400;
            goto LAB_00a180fe;
          }
          uVar2 = FUN_00a30560(param_4,*(undefined4 *)(param_3 + 0x50c));
          iVar3 = FUN_009cd310(0x2c);
          if (iVar3 != 0) {
            if (*(int *)(param_3 + 0x460) != 0) {
              iVar4 = 0x1b;
            }
            if (((*(uint *)(param_1 + 0x364) & 0x400000) != 0) &&
               ((*(uint *)(param_3 + 0x51c) & 0x80000) == 0)) {
              iVar4 = (-(uint)(*(int *)(param_3 + 0x460) != 0) & 0xffffffdb) + 0x40;
              uVar5 = 0;
            }
          }
        }
        else {
          uVar2 = *(uint *)(param_3 + 0x460);
          if (((((uVar2 & 0xfffffff) == 0) || (iVar4 = FUN_009cd310(0x2c), iVar4 == 0)) ||
              (DAT_01be1f4c != 0)) || ((uVar2 & 0xf0000000) != 0)) {
            uVar2 = *(uint *)(*(int *)(param_1 + 0x330) + 0xdc) & 0x2ff | (*param_2 & 0x2ff) << 10;
            iVar4 = 0x40;
            if (*(int *)(param_3 + 0x474) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 & 0x100000;
            }
          }
          else {
            uVar5 = 0;
            iVar4 = 0x1b;
            uVar2 = param_5;
            if (*(int *)(param_3 + 0x460) == 8) {
              FUN_00a212c0(0x1c,0x400,&LAB_00a170d0,param_2 + 3,1);
            }
          }
        }
      }
      else {
        iVar3 = *(int *)(param_3 + 0x50c);
        param_4 = *(float *)(param_3 + 0x510) + param_4;
LAB_00a180fe:
        iVar4 = 0x51;
        uVar2 = FUN_00a30560(param_4,iVar3);
        uVar5 = 0;
      }
    }
    else {
      if ((*(int *)(param_3 + 0x460) != 0) && ((DAT_01bea084 & 0x80000) != 0)) {
        return;
      }
      iVar4 = 0x42;
      uVar5 = 0;
      uVar2 = 0;
    }
    if ((((DAT_01bea084 & 0x40000) != 0) &&
        (((*(byte *)(param_1 + 0x364) & 0x20) != 0 || (DAT_01be1fe4 != 0)))) &&
       ((DAT_01be1fe8 != 0 || ((iVar4 != 0x51 || (*(int *)(*(int *)(param_3 + 0x470) + 0x60) != 0)))
        ))) {
      FUN_00a212c0(iVar4,uVar2,FUN_00a16f10,param_2 + 3,0);
    }
    FUN_00a212c0(iVar4,uVar2,FUN_00a16f10,param_2 + 3,1);
    if (uVar5 == 0) goto LAB_00a1832b;
    if ((*(uint *)(param_1 + 0x4b4) & 0xf0000) == 0x10000) {
      uVar6 = 0x1a;
    }
    else {
      uVar6 = 0x1c;
    }
    FUN_00a212c0(uVar6,param_5,&LAB_00a170d0,param_2 + 3,1);
    pcVar7 = (code *)&LAB_00a170d0;
    uVar6 = 0x15;
    uVar5 = param_5;
  }
  else if (iVar4 == 1) {
    pcVar7 = FUN_00a16f10;
    uVar6 = 0x4b;
    uVar5 = *(uint *)(param_3 + 0x50c);
  }
  else {
    if (iVar4 != 2) goto LAB_00a1832b;
    pcVar7 = FUN_00a16f10;
    uVar6 = 0x4c;
    uVar5 = *(uint *)(param_3 + 0x50c);
  }
  FUN_00a212c0(uVar6,uVar5,pcVar7,param_2 + 3,1);
LAB_00a1832b:
  if (((DAT_01bea084 & 0x40000000) != 0) && (iVar1 != 0)) {
    if ((DAT_01bea088 & 0x40000000) != 0) {
      FUN_00a0c560();
    }
    FUN_00a212c0(0x49,param_5,&LAB_00a17540,param_2 + 3,1);
  }
  return;
}

// 00A183C0  FUN_00a183c0  size=244  [callgraph]
void __thiscall FUN_00a183c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = param_4;
  bVar1 = *(byte *)(param_1 + 0x472);
  if ((bVar1 & 8) == 0) {
    iVar3 = FUN_00a21250(&param_4,3,0);
    if (iVar3 != 0) {
      FUN_00a212c0(param_4,uVar2,&LAB_00a17200,param_2 + 0xc,1);
    }
  }
  if ((bVar1 & 4) == 0) {
    iVar3 = FUN_00a21250(&param_4,2,0);
    if (iVar3 != 0) {
      FUN_00a212c0(param_4,uVar2,&LAB_00a17200,param_2 + 0xc,1);
    }
  }
  if ((bVar1 & 2) == 0) {
    iVar3 = FUN_00a21250(&param_4,1,0);
    if (iVar3 != 0) {
      FUN_00a212c0(param_4,uVar2,&LAB_00a17200,param_2 + 0xc,1);
    }
  }
  if ((bVar1 & 1) == 0) {
    iVar3 = FUN_00a21250(&param_4,0,0);
    if (iVar3 != 0) {
      FUN_00a212c0(param_4,uVar2,&LAB_00a17200,param_2 + 0xc,1);
    }
  }
  return;
}

// 00A184C0  FUN_00a184c0  size=686  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a184c0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 extraout_ST0_00;
  float10 fVar10;
  float10 extraout_ST1;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  undefined1 local_4 [4];
  
  iVar3 = DAT_01beb8c0;
  fVar4 = (float10)*(float *)(param_1 + 0x130);
  fVar5 = (float10)*(float *)(param_1 + 0x134);
  fVar6 = (float10)*(float *)(param_1 + 0x138);
  local_18 = 0;
  fVar10 = (float10)0;
  if ((float10)1 <
      (float10)*(float *)(DAT_01beb8c0 + 0x2d8) * fVar6 +
      (float10)*(float *)(DAT_01beb8c0 + 0x2d0) * fVar4 +
      (float10)*(float *)(DAT_01beb8c0 + 0x2d4) * fVar5 + (float10)*(float *)(DAT_01beb8c0 + 0x2dc))
  {
    fVar7 = fVar6;
    fVar4 = fVar5;
    local_18 = FUN_00fdbc60();
    fVar10 = extraout_ST0;
    fVar6 = extraout_ST1;
    fVar5 = fVar7;
    if ((int)local_18 < 0) {
      local_18 = 0;
    }
    else if (0xfff < (int)local_18) {
      local_18 = 0xfff;
    }
  }
  if ((*(uint *)(param_1 + 0x364) & 0x400) == 0) {
    local_18 = local_18 | 0x10000;
  }
  local_14 = 0;
  fVar7 = (float10)*(float *)(iVar3 + 0x1b0) - fVar4;
  fVar8 = (float10)*(float *)(iVar3 + 0x1b4) - fVar5;
  fVar9 = (float10)*(float *)(iVar3 + 0x1b8) - fVar6;
  local_8 = (float)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
  if ((float10)_DAT_0189f778 <
      (fVar6 - (float10)_DAT_0189f758) * (float10)_DAT_0189f768 +
      (fVar5 - (float10)_DAT_0189f754) * (float10)_DAT_0189f764 +
      (float10)_DAT_0189f760 * (fVar4 - (float10)_DAT_0189f750)) {
    local_14 = FUN_00fdbc60();
    fVar10 = extraout_ST0_00;
    if (local_14 < 0) {
      local_14 = 0;
    }
    else if (0x7f < local_14) {
      local_14 = 0x7f;
    }
  }
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x478)) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x474) + local_10 * 0x44);
      iVar3 = *(int *)(*(int *)(param_1 + 0x474) + local_10 * 0x44) * 0x560 +
              *(int *)(param_1 + 0x328);
      if (local_10 == 0) {
        if ((*(int *)(iVar3 + 0x460) == 0) || ((DAT_01bea084 & 0x80000) == 0)) {
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffff7ff;
        }
        else {
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x800;
        }
      }
      if (piVar1[1] != 0) {
        if ((*(int *)(iVar3 + 0x460) != 0) && (DAT_01be8e54 != 0)) {
          FUN_00bc3c20(param_1 + 0x130,&local_c,local_4,(float)fVar10);
          if (local_c == 0) {
            puVar2 = (uint *)(*piVar1 * 0x560 + 0x460 + *(int *)(param_1 + 0x328));
            *puVar2 = *puVar2 & 0xfffffff;
          }
          else {
            puVar2 = (uint *)(*piVar1 * 0x560 + 0x460 + *(int *)(param_1 + 0x328));
            *puVar2 = *puVar2 | 0xf0000000;
          }
        }
        FUN_00a18040(piVar1,iVar3,local_8,local_18);
        fVar10 = (float10)0;
      }
      if (piVar1[2] != 0) {
        FUN_00a183c0(piVar1,iVar3,local_14);
        fVar10 = (float10)0;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_1 + 0x478));
  }
  return;
}

// 00A18770  FUN_00a18770  size=150  [callgraph]
void __fastcall FUN_00a18770(int param_1)

{
  char cVar1;
  
  if ((*(uint *)(param_1 + 0x364) & 0x40000) != 0) {
    FUN_00a0aad0();
    return;
  }
  FUN_00a13040();
  FUN_00a0b370(*(uint *)(param_1 + 0x364) & 0x80);
  if ((*(uint *)(param_1 + 0x364) & 8) == 0) {
    if ((*(uint *)(param_1 + 0x364) & 0x8000000) == 0) {
      cVar1 = *(char *)(param_1 + 0x44e);
      if (cVar1 == -1) {
        FUN_00a184c0();
        return;
      }
      if (cVar1 == '\0') {
        FUN_00a0b420(2,3,0,FUN_00a16f10);
        return;
      }
      if (cVar1 == '\x01') {
        FUN_00a0b420(4,5,0,FUN_00a16f10);
        return;
      }
    }
    else {
      FUN_00a0b420(0x66,0x66,0,FUN_00a16f10);
    }
  }
  return;
}

// 00A188A0  FUN_00a188a0  size=52  [callgraph]
void __fastcall FUN_00a188a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x478)) {
    iVar1 = 0;
    do {
      FUN_00a17550(*(int *)(param_1 + 0x474) + 0xc + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x44;
    } while (iVar2 < *(int *)(param_1 + 0x478));
  }
  return;
}

