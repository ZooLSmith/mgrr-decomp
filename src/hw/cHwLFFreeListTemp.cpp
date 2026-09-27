// src/hw/cHwLFFreeListTemp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00986400..015F44D0, 208 functions

#include "mgrr.h"

// 00986400  FUN_00986400  size=114  [callgraph]
void __fastcall FUN_00986400(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x10) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x14;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 009864A0  FUN_009864a0  size=114  [callgraph]
void __fastcall FUN_009864a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x10) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x14;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00986540  FUN_00986540  size=114  [callgraph]
void __fastcall FUN_00986540(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x10) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x14;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 009865E0  FUN_009865e0  size=114  [callgraph]
void __fastcall FUN_009865e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x18) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x1c;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00986660  FUN_00986660  size=199  [callgraph]
void __fastcall FUN_00986660(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = FUN_00984ea0();
  while (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0xcc) != 0) {
      *(int *)(*(int *)(param_1 + 0xcc) + 8) = iVar5;
    }
    *(undefined4 *)(iVar5 + 8) = 0;
    *(int *)(param_1 + 0xcc) = iVar5;
    iVar5 = FUN_00984ea0();
  }
  if (*(int *)(param_1 + 200) != 0) {
    uVar2 = *(uint *)(param_1 + 0xcc);
    while (uVar4 = uVar2, uVar4 != 0) {
      puVar1 = (uint *)(uVar4 + 0xc);
      uVar2 = *puVar1;
      if (*(int *)(uVar4 + 4) == 0) {
        if (*(int *)(uVar4 + 8) == 0) {
          *(uint *)(param_1 + 0xcc) = uVar2;
        }
        else {
          *(uint *)(*(int *)(uVar4 + 8) + 0xc) = uVar2;
        }
        if (*puVar1 != 0) {
          *(undefined4 *)(*puVar1 + 8) = *(undefined4 *)(uVar4 + 8);
        }
        *(undefined4 *)(uVar4 + 8) = 0;
        *puVar1 = 0;
        uVar3 = *(uint *)(param_1 + 0xa8);
        if (((uVar3 != 0) && (uVar3 <= uVar4)) && (uVar4 < uVar3 + *(int *)(param_1 + 0xac) * 0x14))
        {
          FUN_009852a0(uVar4);
        }
      }
    }
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}

// 00986730  FUN_00986730  size=199  [callgraph]
void __fastcall FUN_00986730(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = FUN_00984fa0();
  while (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0x11c);
    if (*(int *)(param_1 + 0x11c) != 0) {
      *(int *)(*(int *)(param_1 + 0x11c) + 8) = iVar5;
    }
    *(undefined4 *)(iVar5 + 8) = 0;
    *(int *)(param_1 + 0x11c) = iVar5;
    iVar5 = FUN_00984fa0();
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    uVar2 = *(uint *)(param_1 + 0x11c);
    while (uVar4 = uVar2, uVar4 != 0) {
      puVar1 = (uint *)(uVar4 + 0xc);
      uVar2 = *puVar1;
      if (*(int *)(uVar4 + 4) == 0) {
        if (*(int *)(uVar4 + 8) == 0) {
          *(uint *)(param_1 + 0x11c) = uVar2;
        }
        else {
          *(uint *)(*(int *)(uVar4 + 8) + 0xc) = uVar2;
        }
        if (*puVar1 != 0) {
          *(undefined4 *)(*puVar1 + 8) = *(undefined4 *)(uVar4 + 8);
        }
        *(undefined4 *)(uVar4 + 8) = 0;
        *puVar1 = 0;
        uVar3 = *(uint *)(param_1 + 0xf8);
        if (((uVar3 != 0) && (uVar3 <= uVar4)) && (uVar4 < uVar3 + *(int *)(param_1 + 0xfc) * 0x14))
        {
          FUN_009853a0(uVar4);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  return;
}

// 00986800  FUN_00986800  size=199  [callgraph]
void __fastcall FUN_00986800(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = FUN_009850a0();
  while (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0x15c);
    if (*(int *)(param_1 + 0x15c) != 0) {
      *(int *)(*(int *)(param_1 + 0x15c) + 8) = iVar5;
    }
    *(undefined4 *)(iVar5 + 8) = 0;
    *(int *)(param_1 + 0x15c) = iVar5;
    iVar5 = FUN_009850a0();
  }
  if (*(int *)(param_1 + 0x158) != 0) {
    uVar2 = *(uint *)(param_1 + 0x15c);
    while (uVar4 = uVar2, uVar4 != 0) {
      puVar1 = (uint *)(uVar4 + 0xc);
      uVar2 = *puVar1;
      if (*(int *)(uVar4 + 4) == 0) {
        if (*(int *)(uVar4 + 8) == 0) {
          *(uint *)(param_1 + 0x15c) = uVar2;
        }
        else {
          *(uint *)(*(int *)(uVar4 + 8) + 0xc) = uVar2;
        }
        if (*puVar1 != 0) {
          *(undefined4 *)(*puVar1 + 8) = *(undefined4 *)(uVar4 + 8);
        }
        *(undefined4 *)(uVar4 + 8) = 0;
        *puVar1 = 0;
        uVar3 = *(uint *)(param_1 + 0x138);
        if (((uVar3 != 0) && (uVar3 <= uVar4)) && (uVar4 < uVar3 + *(int *)(param_1 + 0x13c) * 0x14)
           ) {
          FUN_009854a0(uVar4);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  return;
}

// 009868D0  FUN_009868d0  size=205  [callgraph]
void __fastcall FUN_009868d0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = FUN_009851a0();
  while (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(param_1 + 0x19c);
    if (*(int *)(param_1 + 0x19c) != 0) {
      *(int *)(*(int *)(param_1 + 0x19c) + 0x10) = iVar5;
    }
    *(undefined4 *)(iVar5 + 0x10) = 0;
    *(int *)(param_1 + 0x19c) = iVar5;
    iVar5 = FUN_009851a0();
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    uVar2 = *(uint *)(param_1 + 0x19c);
    while (uVar4 = uVar2, uVar4 != 0) {
      puVar1 = (uint *)(uVar4 + 0x14);
      uVar2 = *puVar1;
      if (*(int *)(uVar4 + 4) == 0) {
        if (*(int *)(uVar4 + 0x10) == 0) {
          *(uint *)(param_1 + 0x19c) = uVar2;
        }
        else {
          *(uint *)(*(int *)(uVar4 + 0x10) + 0x14) = uVar2;
        }
        if (*puVar1 != 0) {
          *(undefined4 *)(*puVar1 + 0x10) = *(undefined4 *)(uVar4 + 0x10);
        }
        *(undefined4 *)(uVar4 + 0x10) = 0;
        *puVar1 = 0;
        uVar3 = *(uint *)(param_1 + 0x178);
        if (((uVar3 != 0) && (uVar3 <= uVar4)) && (uVar4 < uVar3 + *(int *)(param_1 + 0x17c) * 0x1c)
           ) {
          FUN_009855a0(uVar4);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  return;
}

// 009869B0  FUN_009869b0  size=16  [callgraph]
void FUN_009869b0(void)

{
  FUN_00985920();
  FUN_00984430();
  return;
}

// 009869C0  FUN_009869c0  size=94  [callgraph]
void __thiscall FUN_009869c0(int param_1,int param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0xcf0);
  while ((piVar1[-0xc] != param_2 || (*piVar1 != 0))) {
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
    if (5 < iVar3) {
      return;
    }
  }
  if (param_2 < 0x14) {
    ppuVar2 = &PTR_s_Raiden_0188dc28 + param_2 * 3;
  }
  else {
    ppuVar2 = &PTR_DAT_0188ddf0;
  }
  FUN_00a00bd0(ppuVar2[2],0);
  *(undefined4 *)(param_1 + 0xcc0 + iVar3 * 4) = 0xffffffff;
  return;
}

// 00986A20  FUN_00986a20  size=82  [callgraph]
void __fastcall FUN_00986a20(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + 0xcc0);
  iVar4 = 6;
  do {
    iVar1 = *piVar3;
    if ((iVar1 != -1) && (piVar3[0xc] == 0)) {
      if (iVar1 < 0x14) {
        ppuVar2 = &PTR_s_Raiden_0188dc28 + iVar1 * 3;
      }
      else {
        ppuVar2 = &PTR_DAT_0188ddf0;
      }
      FUN_00a00bd0(ppuVar2[2],0);
      *piVar3 = -1;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

// 00986A80  FUN_00986a80  size=79  [callgraph]
undefined4 FUN_00986a80(int param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  int iVar3;
  
  if (param_1 < 0x14) {
    ppuVar2 = &PTR_s_Raiden_0188dc28 + param_1 * 3;
  }
  else {
    ppuVar2 = &PTR_DAT_0188ddf0;
  }
  puVar1 = ppuVar2[2];
  iVar3 = FUN_00a00ca0(puVar1,0);
  if (iVar3 != 0) {
    iVar3 = FUN_00a00f80(puVar1,0);
    if (iVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00986B00  Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>_2  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>::
cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00986B70  FUN_00986b70  size=48  [between]
void __fastcall FUN_00986b70(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00986BA0  FUN_00986ba0  size=115  [between]
undefined4 __thiscall FUN_00986ba0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x14,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00986400();
  return 1;
}

// 00986C70  FUN_00986c70  size=48  [between]
void __fastcall FUN_00986c70(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00986CA0  FUN_00986ca0  size=115  [between]
undefined4 __thiscall FUN_00986ca0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x14,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_009864a0();
  return 1;
}

// 00986D70  FUN_00986d70  size=48  [between]
void __fastcall FUN_00986d70(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00986DA0  FUN_00986da0  size=115  [between]
undefined4 __thiscall FUN_00986da0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x14,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00986540();
  return 1;
}

// 00986E70  FUN_00986e70  size=48  [between]
void __fastcall FUN_00986e70(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00986EA0  FUN_00986ea0  size=121  [between]
undefined4 __thiscall FUN_00986ea0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x1c,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_009865e0();
  return 1;
}

// 00986F40  Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00986FA0  FUN_00986fa0  size=429  [between]
void __fastcall FUN_00986fa0(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if ((*(int *)(param_1 + 0xa8) != 0) && (*(int *)(param_1 + 0xb0) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0xa8),0);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (*(undefined4 **)(param_1 + 0x8c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x8c))(1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x88) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x88))(1);
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x58))(1);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x84) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x84))(1);
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x50))(1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x80) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x80))(1);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x7c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7c))(1);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x78))(1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x74))(1);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x70) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x70))(1);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x6c))(1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x68))(1);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 100))(1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x60) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x60))(1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x5c))(1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x48))(1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}

// 00987150  FUN_00987150  size=309  [between]
void __fastcall FUN_00987150(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00986660();
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00cd4890(DAT_01dc1488);
      cHeadMarkParts::cHeadMarkParts();
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_00d30cf0();
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      cEnemyNameParts::cEnemyNameParts();
    }
    if (*(int *)(param_1 + 100) != 0) {
      FUN_00d2e5e0();
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_00d2f590();
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      cEnemyLeftHandInfoParts::cEnemyLeftHandInfoParts();
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_00d2ff80();
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      for (iVar1 = *(int *)(param_1 + 0xcc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
        if ((*(byte *)(*(int *)(iVar1 + 4) + 0x4c0) & 1) != 0) {
          FUN_00cd5810(*(int *)(iVar1 + 4));
        }
      }
      FUN_00d31800();
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_00d36380();
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_00cf3510();
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_00d30ed0();
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00d2c7f0();
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_00d433e0();
    }
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_00d33d60();
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_00d2dfe0();
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_00d2e1b0();
    }
    if (*(int *)(param_1 + 0x88) != 0) {
      cEnemyLogParts::cEnemyLogParts();
    }
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_00d315b0();
      return;
    }
  }
  return;
}

// 00987290  FUN_00987290  size=72  [between]
void __fastcall FUN_00987290(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00986ba0(0x40,&DAT_01b7be50);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_0165293c);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  return;
}

// 009872E0  FUN_009872e0  size=73  [between]
void __thiscall FUN_009872e0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    puVar1 = (undefined4 *)FUN_009852f0();
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = param_2;
      FUN_00984e50(puVar1);
      return;
    }
  }
  FUN_00dd5650(&DAT_01652968);
  return;
}

// 00987330  FUN_00987330  size=684  [between]
void __fastcall FUN_00987330(int param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x40))(1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x24))(1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x2c))(1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x44) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x44))(1);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x50))(1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x58))(1);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x30))(1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x34))(1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x3c))(1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 100))(1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x68))(1);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x6c))(1);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x70) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x70))(1);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x74))(1);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x78))(1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x7c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7c))(1);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x80) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x80))(1);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x84) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x84))(1);
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if ((*(int *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0x100) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0xf8),0);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  if ((*(int *)(param_1 + 0x138) != 0) && (*(int *)(param_1 + 0x140) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x138),0);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if ((*(int *)(param_1 + 0x178) != 0) && (*(int *)(param_1 + 0x180) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x178),0);
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  return;
}

// 009875E0  FUN_009875e0  size=1949  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009875e0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0 [8];
  float fStack_b0;
  float fStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 auStack_60 [23];
  
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_00986730();
    FUN_00986800();
    FUN_009868d0();
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00d2b040();
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00d31df0();
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      for (iVar6 = *(int *)(param_1 + 0x11c); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
        iVar2 = *(int *)(iVar6 + 4);
        if (((*(byte *)(iVar2 + 0x4c0) & 1) != 0) && (*(int *)(iVar2 + 0x818) != 0)) {
          sVar1 = *(short *)(iVar2 + 0x81c);
          uVar3 = FUN_00a12210(*(undefined4 *)(iVar2 + 0x820));
          FUN_00cbd6a0((int)sVar1,uVar3);
          *(undefined4 *)(*(int *)(iVar6 + 4) + 0x818) = 0;
        }
      }
      if (((DAT_01dc1300 != 0) && (DAT_01dc1488 != 0)) && (DAT_01dc1490 != 0)) {
        pfVar4 = (float *)FUN_00caac30(2);
        local_e0 = *pfVar4;
        local_dc = pfVar4[1];
        local_d8 = pfVar4[2];
        local_d4 = pfVar4[3];
        FUN_00d9fa80(local_d0,&local_e0);
        fVar7 = (float10)FUN_00cad4b0();
        fVar8 = (float10)FUN_00cad4d0();
        FUN_00cbd660((float)(fVar7 * (float10)64.0 + (float10)local_d0[0]),
                     (float)(fVar8 * (float10)-16.0 + (float10)local_d0[1]));
      }
      FUN_00d3e1a0();
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00d334c0();
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00d3e080();
    }
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x30) + 4))();
    }
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34) + 4))();
    }
    if (*(int **)(param_1 + 100) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 100) + 4))();
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_00d31190();
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_00d314c0();
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      for (iVar6 = *(int *)(param_1 + 0x19c); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14)) {
        FUN_00cbbc70(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8),
                     *(undefined4 *)(iVar6 + 0xc));
      }
      FUN_00cd5470();
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_00d2fd00();
    }
    iVar6 = 0;
    local_d0[0] = 8.40779e-45;
    local_d0[1] = 7.00649e-45;
    local_d0[2] = 0.0;
    local_d0[3] = 1.26117e-44;
    local_d0[4] = 1.4013e-44;
    pfVar4 = local_d0;
    do {
      puVar5 = (undefined4 *)FUN_00caac30(*pfVar4);
      *(undefined4 *)((int)auStack_60 + iVar6) = *puVar5;
      *(undefined4 *)((int)auStack_60 + iVar6 + 4) = puVar5[1];
      *(undefined4 *)((int)auStack_60 + iVar6 + 8) = puVar5[2];
      *(undefined4 *)((int)auStack_60 + iVar6 + 0xc) = puVar5[3];
      FUN_00d9fa80((int)&fStack_b0 + iVar6,(int)auStack_60 + iVar6);
      iVar6 = iVar6 + 0x10;
      pfVar4 = pfVar4 + 1;
    } while (iVar6 < 0x50);
    fVar7 = (float10)FUN_00cad4b0();
    fVar8 = (float10)FUN_00cad4d0();
    fVar9 = (float10)fStack_90;
    fVar10 = (float10)_DAT_0188df8c;
    fVar11 = ((float10)fStack_b0 - fVar9) * fVar10 + fVar9;
    fVar7 = (float10)(float)(fVar7 * (float10)160.0);
    if (*(int *)(param_1 + 0xd0) == 0) {
      fVar11 = fVar11 - fVar7;
      fVar12 = ((float10)fStack_ac - (float10)fStack_8c) * fVar10 + (float10)fStack_8c;
      fVar7 = ((float10)fStack_a0 - fVar9) * fVar10 + fVar9 + fVar7;
    }
    else {
      fVar11 = fVar11 + fVar7;
      fVar12 = ((float10)fStack_ac - (float10)fStack_8c) * fVar10 + (float10)fStack_8c;
      fVar7 = (((float10)fStack_a0 - fVar9) * fVar10 + fVar9) - fVar7;
    }
    fVar12 = fVar12 + fVar8 * (float10)-45.0;
    local_dc = (float)fVar12;
    local_e0 = (float)fVar11;
    fVar8 = (float10)fStack_8c + ((float10)fStack_9c - (float10)fStack_8c) * fVar10 +
            fVar8 * (float10)-45.0;
    if (*(int *)(param_1 + 0x54) != 0) {
      pfVar4 = (float *)(param_1 + 0xc0);
      fVar10 = (fVar7 - (float10)*pfVar4) * (float10)_DAT_0188df88;
      fVar9 = (float10)_DAT_0188df88 * (fVar8 - (float10)*(float *)(param_1 + 0xc4));
      if ((float10)*pfVar4 <= fVar7) {
        if (((float10)*pfVar4 < fVar7) &&
           (fVar10 = (float10)*pfVar4 + fVar10, *pfVar4 = (float)fVar10, fVar7 < fVar10)) {
          *pfVar4 = (float)fVar7;
        }
      }
      else {
        fVar10 = (float10)*pfVar4 + fVar10;
        *pfVar4 = (float)fVar10;
        if (fVar10 < fVar7) {
          *pfVar4 = (float)fVar7;
        }
      }
      if ((float10)*(float *)(param_1 + 0xc4) <= fVar8) {
        if (((float10)*(float *)(param_1 + 0xc4) < fVar8) &&
           (fVar9 = (float10)*(float *)(param_1 + 0xc4) + fVar9,
           *(float *)(param_1 + 0xc4) = (float)fVar9, fVar8 < fVar9)) {
          *(float *)(param_1 + 0xc4) = (float)fVar8;
        }
      }
      else {
        fVar9 = (float10)*(float *)(param_1 + 0xc4) + fVar9;
        *(float *)(param_1 + 0xc4) = (float)fVar9;
        if (fVar9 < fVar8) {
          *(float *)(param_1 + 0xc4) = (float)fVar8;
        }
      }
      FUN_00cc1f30(*(int *)(param_1 + 0xd0));
      FUN_00cc1f20(auStack_80,pfVar4);
      FUN_00d368e0();
      fVar12 = (float10)local_dc;
      fVar11 = (float10)local_e0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      pfVar4 = (float *)(param_1 + 0xa0);
      fVar8 = (fVar11 - (float10)*pfVar4) * (float10)_DAT_0188df88;
      fVar7 = (float10)_DAT_0188df88 * (fVar12 - (float10)*(float *)(param_1 + 0xa4));
      if ((float10)*pfVar4 <= fVar11) {
        if (((float10)*pfVar4 < fVar11) &&
           (fVar8 = (float10)*pfVar4 + fVar8, *pfVar4 = (float)fVar8, fVar11 < fVar8)) {
          *pfVar4 = (float)fVar11;
        }
      }
      else {
        fVar8 = (float10)*pfVar4 + fVar8;
        *pfVar4 = (float)fVar8;
        if (fVar8 < fVar11) {
          *pfVar4 = (float)fVar11;
        }
      }
      if ((float10)*(float *)(param_1 + 0xa4) <= fVar12) {
        if (((float10)*(float *)(param_1 + 0xa4) < fVar12) &&
           (fVar7 = (float10)*(float *)(param_1 + 0xa4) + fVar7,
           *(float *)(param_1 + 0xa4) = (float)fVar7, fVar12 < fVar7)) {
          *(float *)(param_1 + 0xa4) = (float)fVar12;
        }
      }
      else {
        fVar7 = (float10)*(float *)(param_1 + 0xa4) + fVar7;
        *(float *)(param_1 + 0xa4) = (float)fVar7;
        if (fVar7 < fVar12) {
          *(float *)(param_1 + 0xa4) = (float)fVar12;
        }
      }
      FUN_00cbfc30(*(undefined4 *)(param_1 + 0xd0));
      FUN_00cbfc20(&fStack_90,pfVar4);
      FUN_00d34d50();
      fVar12 = (float10)local_dc;
      fVar11 = (float10)local_e0;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      fVar7 = fVar12;
      if (DAT_01dc1354 != 0) {
        fVar7 = fVar12 + (float10)126.0;
      }
      pfVar4 = (float *)(param_1 + 0xb0);
      fVar8 = (fVar11 - (float10)*pfVar4) * (float10)_DAT_0188df88;
      fVar7 = (float10)_DAT_0188df88 * (fVar7 - (float10)*(float *)(param_1 + 0xb4));
      if ((float10)*pfVar4 <= fVar11) {
        if (((float10)*pfVar4 < fVar11) &&
           (fVar8 = (float10)*pfVar4 + fVar8, *pfVar4 = (float)fVar8, fVar11 < fVar8)) {
          *pfVar4 = (float)fVar11;
        }
      }
      else {
        fVar8 = (float10)*pfVar4 + fVar8;
        *pfVar4 = (float)fVar8;
        if (fVar8 < fVar11) {
          *pfVar4 = (float)fVar11;
        }
      }
      if ((float10)*(float *)(param_1 + 0xb4) <= fVar12) {
        if (((float10)*(float *)(param_1 + 0xb4) < fVar12) &&
           (fVar7 = (float10)*(float *)(param_1 + 0xb4) + fVar7,
           *(float *)(param_1 + 0xb4) = (float)fVar7, fVar12 < fVar7)) {
          *(float *)(param_1 + 0xb4) = (float)fVar12;
        }
      }
      else {
        fVar7 = (float10)*(float *)(param_1 + 0xb4) + fVar7;
        *(float *)(param_1 + 0xb4) = (float)fVar7;
        if (fVar7 < fVar12) {
          *(float *)(param_1 + 0xb4) = (float)fVar12;
        }
      }
      FUN_00cb5b20(*(undefined4 *)(param_1 + 0xd0));
      FUN_00cb5b10(auStack_70,pfVar4);
      FUN_00d2a5f0();
      fVar12 = (float10)local_dc;
      fVar11 = (float10)local_e0;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      pfVar4 = (float *)(param_1 + 0x90);
      fVar8 = (fVar11 - (float10)*pfVar4) * (float10)_DAT_0188df88;
      fVar7 = (float10)_DAT_0188df88 * (fVar12 - (float10)*(float *)(param_1 + 0x94));
      if ((float10)*pfVar4 <= fVar11) {
        if (((float10)*pfVar4 < fVar11) &&
           (fVar8 = (float10)*pfVar4 + fVar8, *pfVar4 = (float)fVar8, fVar11 < fVar8)) {
          *pfVar4 = (float)fVar11;
        }
      }
      else {
        fVar8 = (float10)*pfVar4 + fVar8;
        *pfVar4 = (float)fVar8;
        if (fVar8 < fVar11) {
          *pfVar4 = (float)fVar11;
        }
      }
      if ((float10)*(float *)(param_1 + 0x94) <= fVar12) {
        if (((float10)*(float *)(param_1 + 0x94) < fVar12) &&
           (fVar7 = (float10)*(float *)(param_1 + 0x94) + fVar7,
           *(float *)(param_1 + 0x94) = (float)fVar7, fVar12 < fVar7)) {
          *(float *)(param_1 + 0x94) = (float)fVar12;
        }
      }
      else {
        fVar7 = (float10)*(float *)(param_1 + 0x94) + fVar7;
        *(float *)(param_1 + 0x94) = (float)fVar7;
        if (fVar7 < fVar12) {
          *(float *)(param_1 + 0x94) = (float)fVar12;
        }
      }
      FUN_00cbac70(*(undefined4 *)(param_1 + 0xd0));
      FUN_00cbac60(&fStack_90,pfVar4);
      FUN_00d30570();
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_00d33940();
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00d33c50();
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      cStingerMissileLockOnParts::cStingerMissileLockOnParts();
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_00d34290();
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_00d2cde0();
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_00d2fb90();
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_00d35870();
    }
    if (*(int **)(param_1 + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x84) + 4))();
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00d2dd30();
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00d2de20();
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00d2df10();
    }
  }
  return;
}

// 00987D80  FUN_00987d80  size=75  [between]
void __fastcall FUN_00987d80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00986ca0(0x80,&DAT_01b7be50);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01652990);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}

// 00987DD0  FUN_00987dd0  size=73  [between]
void __thiscall FUN_00987dd0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0xf8) != 0) {
    puVar1 = (undefined4 *)FUN_009853f0();
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = param_2;
      FUN_00984f50(puVar1);
      return;
    }
  }
  FUN_00dd5650(&DAT_016529bc);
  return;
}

// 00987E20  FUN_00987e20  size=75  [between]
void __fastcall FUN_00987e20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00986da0(0x80,&DAT_01b7be50);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01652990);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  return;
}

// 00987E70  FUN_00987e70  size=73  [between]
void __thiscall FUN_00987e70(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    puVar1 = (undefined4 *)FUN_009854f0();
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = param_2;
      FUN_00985050(puVar1);
      return;
    }
  }
  FUN_00dd5650(&DAT_016529e8);
  return;
}

// 00987EC0  FUN_00987ec0  size=75  [between]
void __fastcall FUN_00987ec0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00986ea0(0x80,&DAT_01b7be50);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01652990);
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  return;
}

// 00987F10  FUN_00987f10  size=411  [between]
void __thiscall FUN_00987f10(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char local_20 [32];
  
  if (0x7f < *(int *)(param_1 + 400)) {
    FUN_00dd5650(&DAT_01652a38,0x80);
    return;
  }
  iVar6 = 0;
  do {
    uVar8 = 0;
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
    _sprintf_s(local_20,0x20,"nr_navi_%02d",iVar6);
    piVar2 = (int *)FUN_00c14bb0();
    iVar3 = (**(code **)(*piVar2 + 0x20))(local_20,param_2);
    if (iVar3 == 0) {
      _sprintf_s(local_20,0x20,"nr_navi_norange_%02d",iVar6);
      piVar2 = (int *)FUN_00c14bb0();
      iVar3 = (**(code **)(*piVar2 + 0x20))(local_20,param_2);
      uVar8 = 1;
      if (iVar3 != 0) goto LAB_00987fda;
    }
    else {
LAB_00987fda:
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        if ((*(int *)(param_1 + 0x178) == 0) ||
           (puVar4 = (undefined4 *)FUN_009855f0(), puVar4 == (undefined4 *)0x0)) {
          FUN_00dd5650(&DAT_01652a0c);
          return;
        }
        *puVar4 = 0;
        if ((0 < *(short *)(iVar3 + 0x324)) && (iVar1 = *(int *)(iVar3 + 800), iVar1 != 0)) {
          *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) & 0xfffffffe | 0x10;
          iVar5 = 0;
          if (0 < *(int *)(iVar1 + 0x34)) {
            do {
              if ((iVar5 < 0) || (*(int *)(iVar1 + 0x34) <= iVar5)) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(iVar1 + 0x30) + iVar5 * 4);
              }
              *(uint *)(iVar7 + 0x51c) = *(uint *)(iVar7 + 0x51c) | 0x80000;
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(iVar1 + 0x34));
          }
          puVar4[1] = iVar3;
          puVar4[2] = 0;
          puVar4[3] = uVar8;
          FUN_00985150(puVar4);
        }
      }
    }
    iVar6 = iVar6 + 1;
    if (0x62 < iVar6) {
      return;
    }
  } while( true );
}

// 009880B0  FUN_009880b0  size=330  [between]
void __thiscall FUN_009880b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0x7f < *(int *)(param_1 + 400)) {
    FUN_00dd5650(&DAT_01652a38,0x80,param_1);
    return;
  }
  if ((*(int *)(param_1 + 0x178) != 0) &&
     (puVar1 = (undefined4 *)FUN_009855f0(), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = 0;
    iVar5 = 0;
    if (0 < *(short *)(param_2 + 0x324)) {
      iVar4 = 0;
      while ((iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 800) + 0x60 + iVar4) + 0x40), iVar2 == 0
             || (iVar2 = FUN_00fdbbd0(iVar2,"nr_navi_obj"), iVar2 == 0))) {
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x70;
        if (*(short *)(param_2 + 0x324) <= iVar5) {
          return;
        }
      }
      if (iVar5 != -1) {
        if ((iVar5 < 0) || (*(short *)(param_2 + 0x324) <= iVar5)) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar5 * 0x70 + *(int *)(param_2 + 800);
        }
        *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) & 0xfffffffe | 0x10;
        iVar2 = 0;
        if (0 < *(int *)(iVar4 + 0x34)) {
          do {
            if ((iVar2 < 0) || (*(int *)(iVar4 + 0x34) <= iVar2)) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(int *)(iVar4 + 0x30) + iVar2 * 4);
            }
            *(uint *)(iVar3 + 0x51c) = *(uint *)(iVar3 + 0x51c) | 0x80000;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(iVar4 + 0x34));
        }
        FUN_00a09750(0);
        FUN_00a11be0(0);
        *(uint *)(iVar4 + 0x38) = *(uint *)(iVar4 + 0x38) | 8;
        puVar1[1] = param_2;
        puVar1[2] = iVar5;
        puVar1[3] = 0;
        FUN_00985150(puVar1);
      }
    }
    return;
  }
  FUN_00dd5650(&DAT_01652a0c);
  return;
}

// 00988200  FUN_00988200  size=135  [between]
void __fastcall FUN_00988200(int param_1)

{
  FUN_00986a20();
  *(undefined4 *)(param_1 + 0xca0) = 0;
  *(undefined4 *)(param_1 + 0xca4) = 0;
  *(undefined4 *)(param_1 + 0xca8) = 0;
  *(undefined4 *)(param_1 + 0xcc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcac) = 0;
  *(undefined4 *)(param_1 + 0xcc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcb0) = 0;
  *(undefined4 *)(param_1 + 0xcc8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcb4) = 0;
  *(undefined4 *)(param_1 + 0xccc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcb8) = 0;
  *(undefined4 *)(param_1 + 0xcd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcbc) = 0;
  *(undefined4 *)(param_1 + 0xcd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcec) = 0xffffffff;
  return;
}

// 00988290  FUN_00988290  size=254  [between]
void __fastcall FUN_00988290(int param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xca0);
  if (iVar5 == 0) {
    bVar1 = false;
    piVar4 = (int *)(param_1 + 0xcc0);
    iVar5 = 6;
    do {
      if (*piVar4 != piVar4[6]) {
        FUN_009869c0(*piVar4);
        *piVar4 = piVar4[6];
        bVar1 = true;
        piVar4[-6] = 1;
      }
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (bVar1) {
      *(int *)(param_1 + 0xca0) = *(int *)(param_1 + 0xca0) + 1;
    }
  }
  else {
    if (iVar5 == 1) {
      piVar4 = (int *)(param_1 + 0xca8);
      iVar5 = 6;
      do {
        if (*piVar4 != 0) {
          if (piVar4[6] < 0x14) {
            ppuVar2 = &PTR_s_Raiden_0188dc28 + piVar4[6] * 3;
          }
          else {
            ppuVar2 = &PTR_DAT_0188ddf0;
          }
          FUN_00a00a60(ppuVar2[2],0);
          *piVar4 = 0;
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(int *)(param_1 + 0xca0) = *(int *)(param_1 + 0xca0) + 1;
      return;
    }
    if (iVar5 == 2) {
      piVar4 = (int *)(param_1 + 0xcc0);
      iVar5 = 6;
      bVar1 = true;
      do {
        if (*piVar4 < 0x14) {
          ppuVar2 = &PTR_s_Raiden_0188dc28 + *piVar4 * 3;
        }
        else {
          ppuVar2 = &PTR_DAT_0188ddf0;
        }
        iVar3 = FUN_00a00ca0(ppuVar2[2],0);
        if (iVar3 == 0) {
          bVar1 = false;
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (bVar1) {
        *(undefined4 *)(param_1 + 0xca0) = 0;
        return;
      }
    }
  }
  return;
}

// 009883A0  FUN_009883a0  size=460  [between]
void __thiscall FUN_009883a0(int *param_1,int param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int local_8;
  uint local_4;
  
  iVar3 = *param_1;
  uVar7 = 0;
  if (param_2 == 0) {
    if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
      iVar3 = 8;
      do {
        iVar5 = *(int *)(iVar3 + *param_1);
        if (iVar5 != -1) {
          if (iVar5 < 0x14) {
            ppuVar4 = &PTR_s_Raiden_0188dc28 + iVar5 * 3;
          }
          else {
            ppuVar4 = &PTR_DAT_0188ddf0;
          }
          puVar1 = ppuVar4[2];
          iVar5 = FUN_00a00ca0(puVar1,0);
          if ((iVar5 != 0) && (iVar5 = FUN_00a00f80(puVar1,0), iVar5 != 0)) {
            FUN_009869c0(*(undefined4 *)(iVar3 + *param_1));
          }
        }
        uVar7 = uVar7 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar7 < *(uint *)(*param_1 + 4));
    }
  }
  else {
    if ((iVar3 != 0) && (local_4 = 0, *(int *)(iVar3 + 4) != 0)) {
      local_8 = 8;
      do {
        iVar3 = *(int *)(local_8 + *param_1);
        if (iVar3 != -1) {
          bVar2 = false;
          uVar7 = 0;
          if (*(uint *)(param_2 + 4) != 0) {
            piVar6 = (int *)(param_2 + 8);
            do {
              if ((*piVar6 == iVar3) && (*piVar6 != -1)) {
                bVar2 = true;
                break;
              }
              uVar7 = uVar7 + 1;
              piVar6 = piVar6 + 1;
            } while (uVar7 < *(uint *)(param_2 + 4));
          }
          if (iVar3 < 0x14) {
            ppuVar4 = &PTR_s_Raiden_0188dc28 + iVar3 * 3;
          }
          else {
            ppuVar4 = &PTR_DAT_0188ddf0;
          }
          puVar1 = ppuVar4[2];
          iVar3 = FUN_00a00ca0(puVar1,0);
          if (((iVar3 != 0) && (iVar3 = FUN_00a00f80(puVar1,0), iVar3 != 0)) && (!bVar2)) {
            FUN_009869c0(*(undefined4 *)(local_8 + *param_1));
          }
        }
        local_8 = local_8 + 4;
        local_4 = local_4 + 1;
      } while (local_4 < *(uint *)(*param_1 + 4));
    }
    uVar7 = 0;
    *param_1 = param_2;
    if (*(int *)(param_2 + 4) != 0) {
      iVar3 = 8;
      do {
        if (*(int *)(iVar3 + *param_1) < 0x14) {
          ppuVar4 = &PTR_s_Raiden_0188dc28 + *(int *)(iVar3 + *param_1) * 3;
        }
        else {
          ppuVar4 = &PTR_DAT_0188ddf0;
        }
        puVar1 = ppuVar4[2];
        iVar5 = FUN_00a00ca0(puVar1,0);
        if (((iVar5 == 0) || (iVar5 = FUN_00a00f80(puVar1,0), iVar5 == 0)) &&
           (*(int *)(iVar3 + *param_1) != -1)) {
          FUN_00984ce0(*(int *)(iVar3 + *param_1));
        }
        uVar7 = uVar7 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar7 < *(uint *)(*param_1 + 4));
      return;
    }
  }
  return;
}

// 00988570  Hw::cHwLFFreeListTemp<cEnemyInfoManager::_NpcInfoWork>::cHwLFFreeListTemp<cEnemyInfoManager::_NpcInfoWork>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cEnemyInfoManager::_NpcInfoWork>::
cHwLFFreeListTemp<cEnemyInfoManager::_NpcInfoWork>(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 009885B0  Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>_2  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>::
cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 009885F0  Hw::cHwLFFreeListTemp<cPlayerInfoManager::_JammingWork>::cHwLFFreeListTemp<cPlayerInfoManager::_JammingWork>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cPlayerInfoManager::_JammingWork>::
cHwLFFreeListTemp<cPlayerInfoManager::_JammingWork>(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00988630  Hw::cHwLFFreeListTemp<cPlayerInfoManager::_NinjyaRunNaviWork>::cHwLFFreeListTemp<cPlayerInfoManager::_NinjyaRunNaviWork>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cPlayerInfoManager::_NinjyaRunNaviWork>::
cHwLFFreeListTemp<cPlayerInfoManager::_NinjyaRunNaviWork>(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00988670  Hw::cHwLFFreeListTemp<cEnemyInfoManager::_NpcInfoWork>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cEnemyInfoManager::_NpcInfoWork>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009886D0  Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00988730  Hw::cHwLFFreeListTemp<cPlayerInfoManager::_JammingWork>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cPlayerInfoManager::_JammingWork>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00988790  Hw::cHwLFFreeListTemp<cPlayerInfoManager::_NinjyaRunNaviWork>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cPlayerInfoManager::_NinjyaRunNaviWork>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009887F0  Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>_3  size=202  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>::
cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>_3(undefined4 *param_1)

{
  *param_1 = cEnemyInfoManager::vftable;
  param_1[2] = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = cHwLFFreeListTemp<cEnemyInfoManager::_NpcInfoWork>::vftable;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return;
}

// 009888C0  Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>  size=188  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>::
cHwLFFreeListTemp<cEnemyInfoManager::_WeakPointWork>(undefined4 *param_1)

{
  *param_1 = cEnemyInfoManager::vftable;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x24] = cHwLFFreeListTemp<cEnemyInfoManager::_NpcInfoWork>::vftable;
  if ((param_1[0x2a] != 0) && (param_1[0x2c] != 0)) {
    FUN_00dd3d90(param_1[0x2a],0);
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[2] = vftable;
  if ((param_1[8] != 0) && (param_1[10] != 0)) {
    FUN_00dd3d90(param_1[8],0);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00988980  Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>_3  size=485  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>::
cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>_3(undefined4 *param_1)

{
  *param_1 = cPlayerInfoManager::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 1;
  param_1[0x36] = 0;
  param_1[0x38] = vftable;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x48] = cHwLFFreeListTemp<cPlayerInfoManager::_JammingWork>::vftable;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x50] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x58] = cHwLFFreeListTemp<cPlayerInfoManager::_NinjyaRunNaviWork>::vftable;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x60] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3f800000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x33] = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}

// 00988B70  Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>  size=342  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>::
cHwLFFreeListTemp<cPlayerInfoManager::_QTECallAlarmWork>(undefined4 *param_1)

{
  *param_1 = cPlayerInfoManager::vftable;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x58] = cHwLFFreeListTemp<cPlayerInfoManager::_NinjyaRunNaviWork>::vftable;
  if ((param_1[0x5e] != 0) && (param_1[0x60] != 0)) {
    FUN_00dd3d90(param_1[0x5e],0);
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x60] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x48] = cHwLFFreeListTemp<cPlayerInfoManager::_JammingWork>::vftable;
  if ((param_1[0x4e] != 0) && (param_1[0x50] != 0)) {
    FUN_00dd3d90(param_1[0x4e],0);
  }
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x50] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x38] = vftable;
  if ((param_1[0x3e] != 0) && (param_1[0x40] != 0)) {
    FUN_00dd3d90(param_1[0x3e],0);
  }
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return;
}

// 00A18F30  Hw::cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>::cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>::
cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A18F70  Hw::cHwLFFreeListTemp<cModelList::_MODEL_INFO>::cHwLFFreeListTemp<cModelList::_MODEL_INFO>_2  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cModelList::_MODEL_INFO>::cHwLFFreeListTemp<cModelList::_MODEL_INFO>_2
          (undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A18FB0  Hw::cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A19010  Hw::cHwLFFreeListTemp<cModelList::_MODEL_INFO>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cModelList::_MODEL_INFO>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A195A0  Hw::cHwLFFreeListTemp<cModelList::_MODEL_INFO>::cHwLFFreeListTemp<cModelList::_MODEL_INFO>  size=72  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cModelList::_MODEL_INFO>::cHwLFFreeListTemp<cModelList::_MODEL_INFO>
          (undefined4 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A197D0  Hw::cHwLFFreeListTemp<cModelList::_MODEL_INFO>::cHwLFFreeListTemp<cModelList::_MODEL_INFO>_3  size=118  [class]
void __thiscall
Hw::cHwLFFreeListTemp<cModelList::_MODEL_INFO>::cHwLFFreeListTemp<cModelList::_MODEL_INFO>_3
          (undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = SceneModelSystem::vftable;
  param_1[1] = 0;
  param_1[2] = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = *param_2;
  param_1[0x15] = param_2[1];
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  return;
}

// 00A3E4E0  Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A3E550  Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_2  size=86  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_2(undefined4 *param_1)

{
  FUN_00a2a170();
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A3E5B0  Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A46E50  Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3  size=105  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3(void)

{
  if ((_DAT_01be85b0 & 1) == 0) {
    _DAT_01be85b0 = _DAT_01be85b0 | 1;
    _DAT_01be7568 = vftable;
    _DAT_01be7570 = 0;
    _DAT_01be7574 = 0;
    _DAT_01be7578 = 0;
    DAT_01be7588 = 0;
    DAT_01be7580 = 0;
    DAT_01be7584 = 0;
    FUN_00a2a170();
    _atexit((_func_4879 *)&LAB_015edb50);
  }
  return &DAT_01be7568;
}

// 00AA5E80  Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>_4  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::
cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>_4(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00AA5EC0  FUN_00aa5ec0  size=65  [between]
void __fastcall FUN_00aa5ec0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00AA5FB0  Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AA9420  Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>_2  size=71  [class]
void __fastcall
Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::
cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>_2(undefined4 *param_1)

{
  FUN_00dd7270();
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00ABB270  Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>  size=72  [class]
void __fastcall
Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>
          (int param_1)

{
  FUN_00dd7270();
  *(undefined ***)(param_1 + 0x10) = vftable;
  if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x28),0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 00AC20F0  Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>_3  size=100  [class]
void __fastcall
Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::
cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>_3(undefined4 *param_1)

{
  *param_1 = SceneBehaviorSystem::vftable;
  FUN_00dd7270();
  FUN_00dd7270();
  FUN_00dd7270();
  param_1[6] = vftable;
  if ((param_1[0xc] != 0) && (param_1[0xe] != 0)) {
    FUN_00dd3d90(param_1[0xc],0);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

// 00C55F90  Hw::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>_2  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>::
cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00C56720  Hw::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C5BD20  Hw::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>  size=79  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>
          (int param_1)

{
  DAT_01bea190 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined ***)(param_1 + 0x20) = vftable;
  if ((*(int *)(param_1 + 0x38) != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x38),0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

// 00D8AC30  FUN_00d8ac30  size=70  [callgraph]
void __thiscall FUN_00d8ac30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *param_2 = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = (int)param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00d8ac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00D8AC80  FUN_00d8ac80  size=155  [callgraph]
longlong __fastcall FUN_00d8ac80(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  puVar2 = *(undefined4 **)param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,puVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*puVar2);
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    puVar2 = *(undefined4 **)param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,puVar2);
}

// 00D8AD30  FUN_00d8ad30  size=70  [callgraph]
void __thiscall FUN_00d8ad30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *param_2 = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = (int)param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00d8ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00D8AD80  FUN_00d8ad80  size=155  [callgraph]
longlong __fastcall FUN_00d8ad80(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  puVar2 = *(undefined4 **)param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,puVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*puVar2);
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    puVar2 = *(undefined4 **)param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,puVar2);
}

// 00D8AE30  FUN_00d8ae30  size=70  [callgraph]
void __thiscall FUN_00d8ae30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *param_2 = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = (int)param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00d8ae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00D8AE80  FUN_00d8ae80  size=155  [callgraph]
longlong __fastcall FUN_00d8ae80(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  puVar2 = *(undefined4 **)param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (puVar2 == (undefined4 *)0x0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,puVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*puVar2);
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    puVar2 = *(undefined4 **)param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,puVar2);
}

// 00D8AF20  FUN_00d8af20  size=18  [callgraph]
undefined4 __fastcall FUN_00d8af20(undefined4 param_1)

{
  FUN_00d93a30();
  return param_1;
}

// 00D8AF40  FUN_00d8af40  size=23  [callgraph]
undefined4 __fastcall FUN_00d8af40(undefined4 param_1)

{
  FUN_00a15130();
  FUN_00a16570();
  return param_1;
}

// 00D8AF60  FUN_00d8af60  size=22  [callgraph]
void FUN_00d8af60(void)

{
  FUN_00a16590();
  FUN_00a15160();
  return;
}

// 00D8AFD0  FUN_00d8afd0  size=74  [callgraph]
void __thiscall FUN_00d8afd0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x120) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00d8b014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00D8B020  FUN_00d8b020  size=158  [callgraph]
longlong __fastcall FUN_00d8b020(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x120));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00D8B0C0  FUN_00d8b0c0  size=71  [callgraph]
void __thiscall FUN_00d8b0c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x14) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00d8b101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00D8B110  FUN_00d8b110  size=155  [callgraph]
longlong __fastcall FUN_00d8b110(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x14));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00D8B1B0  FUN_00d8b1b0  size=74  [callgraph]
void __thiscall FUN_00d8b1b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x200) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00d8b1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00D8B200  FUN_00d8b200  size=158  [callgraph]
longlong __fastcall FUN_00d8b200(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x200));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00D8B330  FUN_00d8b330  size=102  [callgraph]
int __thiscall FUN_00d8b330(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *param_2;
  if (((iVar3 != -1) && (-1 < iVar3)) && (iVar3 < *(int *)(param_1 + 0x1c))) {
    iVar2 = iVar3 * 0x130 + *(int *)(param_1 + 0x18);
    iVar3 = 0;
    if (iVar2 != 0) {
      piVar1 = (int *)(param_1 + 0x38);
      *(undefined4 *)(iVar2 + 0x100) = 0;
      do {
        iVar2 = *piVar1;
        LOCK();
        iVar3 = *piVar1;
        bVar4 = iVar2 == iVar3;
        if (bVar4) {
          *piVar1 = 1;
          iVar3 = iVar2;
        }
        UNLOCK();
      } while (!bVar4);
      *param_2 = -1;
    }
  }
  return iVar3;
}

// 00D8B3A0  FUN_00d8b3a0  size=186  [callgraph]
void FUN_00d8b3a0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  
  plVar3 = (longlong *)(param_2 + 0x28);
  do {
    puVar1 = *(undefined4 **)plVar3;
    iVar2 = *(int *)(param_2 + 0x2c);
    while( true ) {
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      LOCK();
      bVar4 = CONCAT44(iVar2,puVar1) == *plVar3;
      if (bVar4) {
        *plVar3 = CONCAT44(iVar2 + 1,*puVar1);
      }
      UNLOCK();
      if (bVar4) break;
      puVar1 = *(undefined4 **)plVar3;
      iVar2 = *(int *)(param_2 + 0x2c);
    }
    InterlockedDecrement((LONG *)(param_2 + 0x30));
    FUN_00a1ab40(puVar1[1],puVar1[2],puVar1[3],*(undefined2 *)(puVar1 + 4),
                 *(undefined2 *)((int)puVar1 + 0x12));
  } while( true );
}

// 00D8B460  FUN_00d8b460  size=56  [callgraph]
void __thiscall FUN_00d8b460(int param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x4b4) & 0xf0000) == 0x20000) {
                    /* WARNING: Could not recover jumptable at 0x00d8b482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InterlockedIncrement((LONG *)(param_1 + 0x17c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d8b492. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement((LONG *)(param_1 + 0x184));
  return;
}

// 00D8B4A0  FUN_00d8b4a0  size=56  [callgraph]
void __thiscall FUN_00d8b4a0(int param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x4b4) & 0xf0000) == 0x20000) {
                    /* WARNING: Could not recover jumptable at 0x00d8b4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InterlockedDecrement((LONG *)(param_1 + 0x17c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d8b4d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedDecrement((LONG *)(param_1 + 0x184));
  return;
}

// 00D8B4E0  FUN_00d8b4e0  size=185  [callgraph]
undefined4 __thiscall FUN_00d8b4e0(int param_1,int param_2)

{
  int iVar1;
  
  if ((DAT_01bea090 & 0x100000) == 0) {
    iVar1 = Hw::cHeapVariableBase::vf18();
    if ((((0x100000 < iVar1) && (iVar1 = Hw::cHeapPhysicalBase::vf18(), 0x100000 < iVar1)) &&
        (iVar1 = Hw::cHeapVariableBase::vf18(), 0x100000 < iVar1)) &&
       (iVar1 = Hw::cHeapVariableBase::vf18(), 0x100000 < iVar1)) {
      if ((*(uint *)(param_2 + 0x4b4) & 0xf0000) == 0x20000) {
        if (*(int *)(param_1 + 0x180) <= *(int *)(param_1 + 0x17c)) {
          return 0;
        }
      }
      else if (*(int *)(param_1 + 0x188) <= *(int *)(param_1 + 0x184)) {
        return 0;
      }
      return 1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016c2644);
    FUN_0093dc20(3);
  }
  return 0;
}

// 00D8B5A0  FUN_00d8b5a0  size=726  [callgraph]
void FUN_00d8b5a0(float *param_1,float *param_2)

{
  float fVar1;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  fVar1 = param_2[0xc];
  fVar1 = param_2[0xe] * param_2[0xe] + fVar1 * fVar1 + param_2[0xd] * param_2[0xd];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_40,param_2 + 0xc);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
  }
  local_50 = param_2[8] - param_2[4];
  local_4c = param_2[9] - param_2[5];
  local_48 = param_2[10] - param_2[6];
  local_44 = param_2[0xb] - param_2[7];
  fVar1 = local_48 * local_48 + local_50 * local_50 + local_4c * local_4c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_50,&local_50);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_50 = 0.0;
    local_4c = 1.0;
    local_48 = 0.0;
  }
  local_30 = local_38 * local_4c - local_3c * local_48;
  local_2c = local_40 * local_48 - local_38 * local_50;
  local_28 = local_3c * local_50 - local_40 * local_4c;
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_28 = 0.0;
    local_2c = 1.0;
    local_30 = 0.0;
  }
  *param_1 = local_38 * local_2c - local_3c * local_28;
  param_1[1] = local_40 * local_28 - local_38 * local_30;
  param_1[2] = local_3c * local_30 - local_40 * local_2c;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = local_30;
  param_1[5] = local_2c;
  param_1[6] = local_28;
  param_1[8] = local_40;
  param_1[9] = local_3c;
  param_1[10] = local_38;
  param_1[0xb] = 0.0;
  param_1[0xc] = local_20;
  param_1[0xd] = local_1c;
  param_1[0xe] = local_18;
  param_1[0xf] = 1.0;
  return;
}

// 00D8B880  FUN_00d8b880  size=648  [callgraph]
void FUN_00d8b880(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  param_1[0x20] = param_2[0xc];
  param_1[0x21] = param_2[0xd];
  param_1[0x22] = param_2[0xe];
  param_1[0x23] = param_2[0xf];
  param_1[0x23] = 1.0;
  param_1[0x34] = param_3;
  param_1[0x35] = param_4;
  if (param_3 < 0.0) {
    param_1[0x34] = 0.0;
  }
  if (0.0 <= param_4) {
    if (!NAN(param_4) && 6.2831855 < param_4 != (param_4 == 6.2831855)) {
      param_1[0x35] = 6.2831855;
    }
  }
  else {
    param_1[0x35] = 0.0;
  }
  pfVar3 = param_1 + 0x28;
  *pfVar3 = param_2[8];
  pfVar4 = param_1 + 0x24;
  param_1[0x29] = param_2[9];
  param_1[0x2a] = param_2[10];
  param_1[0x2b] = param_2[0xb];
  param_1[0x2b] = 1.0;
  *pfVar4 = *param_2;
  param_1[0x25] = param_2[1];
  param_1[0x26] = param_2[2];
  param_1[0x27] = param_2[3];
  param_1[0x27] = 1.0;
  fVar1 = param_1[0x29] * param_1[0x29] + *pfVar3 * *pfVar3 + param_1[0x2a] * param_1[0x2a];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(pfVar3,pfVar3);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *pfVar3 = 0.0;
    param_1[0x29] = 1.0;
    param_1[0x2a] = 0.0;
  }
  fVar1 = param_1[0x26] * param_1[0x26] + *pfVar4 * *pfVar4 + param_1[0x25] * param_1[0x25];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(pfVar4,pfVar4);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *pfVar4 = 0.0;
    param_1[0x25] = 1.0;
    param_1[0x26] = 0.0;
  }
  local_20 = param_1[0x20] + *pfVar4;
  local_1c = param_1[0x25] + param_1[0x21];
  local_18 = param_1[0x26] + param_1[0x22];
  local_14 = param_1[0x27] + param_1[0x23];
  local_30 = param_1[0x20] + *pfVar3;
  local_2c = param_1[0x29] + param_1[0x21];
  local_28 = param_1[0x2a] + param_1[0x22];
  local_24 = param_1[0x2b] + param_1[0x23];
  FUN_00d99510(param_1 + 0x20,&local_20,&local_30);
  pfVar3 = param_2;
  pfVar4 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar4 = pfVar4 + 1;
  }
  D3DXMatrixInverse(param_1 + 0x10,0,param_2);
  return;
}

// 00D8BB10  FUN_00d8bb10  size=184  [callgraph]
int __thiscall FUN_00d8bb10(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  bool bVar4;
  
  if (((*(int *)(param_3 + 0xd8) != 0) &&
      (((in_EAX = *(int *)(param_2 + 0x330), in_EAX == 0 || (*(int *)(in_EAX + 0xcc) < 1)) &&
       ((*(uint *)(param_2 + 0x4b0) & 0x20000) != 0)))) && (*(int *)(param_2 + 0x360) != 0)) {
    if (*(int *)(param_1 + 0x194) != *(int *)(param_3 + 0xe0)) {
      piVar1 = (int *)(param_1 + 0x198);
      do {
        iVar2 = *piVar1;
        LOCK();
        iVar3 = *piVar1;
        bVar4 = iVar2 == iVar3;
        if (bVar4) {
          *piVar1 = 1;
          iVar3 = iVar2;
        }
        UNLOCK();
      } while (!bVar4);
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_3 + 0xe0);
      return iVar3;
    }
    in_EAX = InterlockedIncrement((LONG *)(param_1 + 0x198));
    if (2 < in_EAX) {
      in_EAX = FUN_009c6540(0x26);
    }
  }
  return in_EAX;
}

// 00D8BBD0  FUN_00d8bbd0  size=42  [callgraph]
void __thiscall FUN_00d8bbd0(int param_1,int param_2)

{
  int iVar1;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1c))) &&
     (iVar1 = param_2 * 0x210 + *(int *)(param_1 + 0x18), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00d8bbf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InterlockedIncrement((LONG *)(iVar1 + 500));
    return;
  }
  return;
}

// 00D8BC00  FUN_00d8bc00  size=132  [callgraph]
int __thiscall FUN_00d8bc00(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *param_2;
  if (((iVar3 != -1) && (-1 < iVar3)) && (iVar3 < *(int *)(param_1 + 0x1c))) {
    iVar2 = iVar3 * 0x210 + *(int *)(param_1 + 0x18);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = InterlockedDecrement((LONG *)(iVar2 + 500));
      if (iVar3 < 1) {
        piVar1 = (int *)(param_1 + 0x38);
        *(undefined4 *)(iVar2 + 0x1f0) = 1;
        do {
          iVar2 = *piVar1;
          LOCK();
          iVar3 = *piVar1;
          bVar4 = iVar2 == iVar3;
          if (bVar4) {
            *piVar1 = 1;
            iVar3 = iVar2;
          }
          UNLOCK();
        } while (!bVar4);
      }
      *param_2 = -1;
    }
  }
  return iVar3;
}

// 00D8BC90  FUN_00d8bc90  size=35  [callgraph]
int __thiscall FUN_00d8bc90(int param_1,int param_2)

{
  int iVar1;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1c))) &&
     (iVar1 = param_2 * 0x210 + *(int *)(param_1 + 0x18), iVar1 != 0)) {
    return iVar1 + 0x10;
  }
  return 0;
}

// 00D8BD60  FUN_00d8bd60  size=114  [callgraph]
void __fastcall FUN_00d8bd60(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x14) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x18;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00D8BDE0  FUN_00d8bde0  size=24  [callgraph]
undefined4 * __fastcall FUN_00d8bde0(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00d93a30();
  return param_1;
}

// 00D8BE10  FUN_00d8be10  size=34  [callgraph]
undefined4 * __fastcall FUN_00d8be10(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00a15130();
  FUN_00a16570();
  return param_1;
}

// 00D8BE40  FUN_00d8be40  size=46  [callgraph]
undefined4 __thiscall FUN_00d8be40(undefined4 param_1,byte param_2)

{
  FUN_00a16590();
  FUN_00a15160();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D8BEA0  FUN_00d8bea0  size=120  [callgraph]
void __fastcall FUN_00d8bea0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x120) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x130;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00D8BF20  FUN_00d8bf20  size=120  [callgraph]
void __fastcall FUN_00d8bf20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_10;
  
  iVar5 = 0;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x18) + local_10;
      do {
        iVar3 = *piVar1;
        *(int *)(iVar4 + 0x200) = iVar3;
        LOCK();
        iVar2 = *piVar1;
        if (iVar3 == iVar2) {
          *piVar1 = iVar4;
        }
        UNLOCK();
      } while (iVar3 != iVar2);
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      local_10 = local_10 + 0x210;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 00D8BFD0  FUN_00d8bfd0  size=48  [callgraph]
void __fastcall FUN_00d8bfd0(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00D8C000  FUN_00d8c000  size=48  [callgraph]
void __fastcall FUN_00d8c000(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00D8C030  FUN_00d8c030  size=48  [callgraph]
void __fastcall FUN_00d8c030(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00D8C060  FUN_00d8c060  size=254  [callgraph]
void __fastcall FUN_00d8c060(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x3c) = 1;
  iVar5 = FUN_00d8ac80();
  while (iVar5 != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      *(int *)(*(int *)(param_1 + 0x44) + 0x114) = iVar5;
      *(undefined4 *)(iVar5 + 0x110) = *(undefined4 *)(param_1 + 0x44);
    }
    if (*(int *)(param_1 + 0x40) == 0) {
      *(int *)(param_1 + 0x40) = iVar5;
    }
    *(int *)(param_1 + 0x44) = iVar5;
    iVar5 = FUN_00d8ac80();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar2 = *(uint *)(param_1 + 0x40);
    while (uVar4 = uVar2, uVar4 != 0) {
      puVar1 = (uint *)(uVar4 + 0x114);
      uVar2 = *puVar1;
      if (*(int *)(uVar4 + 0x100) == 0) {
        if (*(int *)(uVar4 + 0x110) == 0) {
          *(uint *)(param_1 + 0x40) = uVar2;
          if (uVar2 != 0) {
            *(undefined4 *)(uVar2 + 0x110) = 0;
          }
        }
        else {
          *(uint *)(*(int *)(uVar4 + 0x110) + 0x114) = uVar2;
        }
        if (*puVar1 == 0) {
          iVar5 = *(int *)(uVar4 + 0x110);
          *(int *)(param_1 + 0x44) = iVar5;
          if (iVar5 != 0) {
            *(undefined4 *)(iVar5 + 0x114) = 0;
          }
        }
        else {
          *(undefined4 *)(*puVar1 + 0x110) = *(undefined4 *)(uVar4 + 0x110);
        }
        *(undefined4 *)(uVar4 + 0x110) = 0;
        *puVar1 = 0;
        uVar3 = *(uint *)(param_1 + 0x18);
        if (((uVar3 != 0) && (uVar3 <= uVar4)) && (uVar4 < *(int *)(param_1 + 0x1c) * 0x130 + uVar3)
           ) {
          FUN_00d8afd0(uVar4);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

// 00D8C160  FUN_00d8c160  size=48  [callgraph]
void __fastcall FUN_00d8c160(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00D8C190  FUN_00d8c190  size=55  [callgraph]
void __fastcall FUN_00d8c190(int param_1)

{
  if (0 < *(int *)(param_1 + 0x30)) {
    FUN_00f98a40();
    FUN_00dd75d0(FUN_00d8b3a0,param_1,0xffffffff);
    FUN_00dd79a0(1);
    FUN_00d8bd60();
    return;
  }
  return;
}

// 00D8C1D0  FUN_00d8c1d0  size=875  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d8c1d0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined *puVar9;
  
  iVar7 = 0;
  uVar6 = 100;
  if (DAT_01b6efd0 != 0) {
    if (DAT_01b6efd0 == 1) {
      uVar6 = 200;
    }
    else if (DAT_01b6efd0 == 2) {
      uVar6 = 400;
    }
  }
  fVar1 = _DAT_01be943c + *(float *)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x188) = uVar6;
  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + 1;
  *(float *)(param_1 + 400) = fVar1;
  *(undefined4 *)(param_1 + 0x180) = uVar6;
  bVar8 = false;
  if (9 < *(int *)(param_1 + 0x18c)) {
    fVar1 = fVar1 * 0.1;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    if (100.0 < fVar1 == (fVar1 == 100.0)) {
      if (50.0 <= fVar1) {
        bVar8 = true;
      }
    }
    else {
      iVar7 = 1;
    }
  }
  if (*(int *)(param_1 + 0x184) + *(int *)(param_1 + 0x17c) < 1) goto LAB_00d8c43a;
  iVar2 = Hw::cHeapVariableBase::vf18();
  iVar3 = Hw::cHeapPhysicalBase::vf18();
  iVar4 = Hw::cHeapVariableBase::vf18();
  iVar5 = Hw::cHeapVariableBase::vf18();
  if (iVar2 < 0x80000) {
    iVar7 = 2;
  }
  else if (iVar3 < 0x80000) {
    iVar7 = 3;
  }
  else if (iVar4 < 0x100000) {
    iVar7 = 4;
  }
  else if (iVar5 < 0x80000) {
    iVar7 = 5;
  }
  else if (iVar7 == 0) {
    if ((((iVar2 < 0x100000) || (iVar3 < 0x100000)) || (iVar5 < 0x100000)) || (iVar4 < 0x200000)) {
      bVar8 = true;
    }
    iVar2 = FUN_00fdbc60();
    if ((iVar2 <= *(int *)(param_1 + 0x17c)) ||
       (iVar2 = FUN_00fdbc60(), iVar2 <= *(int *)(param_1 + 0x184))) {
      bVar8 = true;
    }
  }
  if (((DAT_01bea060 & 0x2000000) != 0) ||
     ((DAT_018b9174 == 0x470 &&
      (((iVar2 = FUN_00d45a70("P470_QTE_SUN_RESULT"), iVar2 != 0 ||
        (iVar2 = FUN_00d45a70("P470_QTE_SUN_DEAD"), iVar2 != 0)) ||
       (iVar2 = FUN_00d45a70("P470_EVENT"), iVar2 != 0)))))) {
    bVar8 = iVar7 != 0;
    goto LAB_00d8c427;
  }
  if (iVar7 == 0) goto LAB_00d8c427;
  switch(iVar7) {
  case 1:
    FUN_00dd5650(&DAT_016c2768);
    goto switchD_00d8c3d1_default;
  case 2:
    uVar6 = 0x80000;
    puVar9 = &DAT_016c2730;
    break;
  case 3:
    uVar6 = 0x80000;
    puVar9 = &DAT_016c26f4;
    break;
  case 4:
    uVar6 = 0x100000;
    puVar9 = &DAT_016c26b8;
    break;
  case 5:
    uVar6 = 0x80000;
    puVar9 = &DAT_016c267c;
    break;
  default:
    goto switchD_00d8c3d1_default;
  }
  FUN_00dd5650(puVar9,uVar6);
switchD_00d8c3d1_default:
  FUN_0093db80();
LAB_00d8c427:
  if (bVar8) {
    FUN_0093dc20(5);
  }
LAB_00d8c43a:
  FUN_00d8c060();
  if (*(int *)(param_1 + 0x130) != 0) {
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x130);
    if (*(int *)(param_1 + 0x130) != 0) {
      FUN_00f98a40();
      FUN_00dd75d0(FUN_00d8aa70,0,0xffffffff);
      FUN_00dd79a0(1);
      if (0 < *(int *)(param_1 + 0x170)) {
        FUN_00f98a40();
        FUN_00dd75d0(FUN_00d8b3a0,param_1 + 0x140,0xffffffff);
        FUN_00dd79a0(1);
        FUN_00d8bd60();
      }
    }
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x130);
    if (*(int *)(param_1 + 0x130) != 0) {
      FUN_00f98a40();
      FUN_00dd75d0(FUN_00d8aa70,0,0xffffffff);
      FUN_00dd79a0(1);
      if (0 < *(int *)(param_1 + 0x170)) {
        FUN_00f98a40();
        FUN_00dd75d0(FUN_00d8b3a0,param_1 + 0x140,0xffffffff);
        FUN_00dd79a0(1);
        FUN_00d8bd60();
        return;
      }
    }
  }
  return;
}

// 00D8C550  FUN_00d8c550  size=190  [callgraph]
bool FUN_00d8c550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar2;
  undefined1 local_100 [216];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_00d8b4e0(param_1);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x370) != 0)) {
    FUN_00d93a30();
    FUN_00d8b880(local_100,param_2,param_3,param_4);
    local_28 = param_5;
    local_24 = param_8;
    local_20 = param_6;
    local_1c = param_7;
    iVar1 = FUN_00a1c430(param_1,local_100);
    return iVar1 != 0;
  }
  if (*(int *)(param_1 + 0x4f0) != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x1c8))();
    }
  }
  return false;
}

// 00D8C640  FUN_00d8c640  size=116  [callgraph]
undefined4 __thiscall FUN_00d8c640(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x130,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00d8bea0();
  return 1;
}

// 00D8C720  FUN_00d8c720  size=117  [callgraph]
undefined4 __thiscall FUN_00d8c720(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x18,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00d8bd60();
  return 1;
}

// 00D8C7F0  FUN_00d8c7f0  size=116  [callgraph]
undefined4 __thiscall FUN_00d8c7f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x210,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00d8bf20();
  return 1;
}

// 00D8C8B0  FUN_00d8c8b0  size=85  [callgraph]
undefined4 __thiscall FUN_00d8c8b0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 <= param_2) && (param_2 < *(int *)(param_1 + 0x1c) * 0x210 + uVar1)) {
    FUN_00a16590();
    FUN_00a15160();
    FUN_00d8b1b0(param_2);
    return 1;
  }
  return 0;
}

// 00D8C910  Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>
          (undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00D8C950  Hw::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>
          (undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00D8C990  Hw::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>_2  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>::
cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00D8C9D0  Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D8CA30  Hw::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D8CA90  Hw::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D8CB20  Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>_2  size=72  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::
cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>_2(undefined4 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00D8CBB0  FUN_00d8cbb0  size=53  [between]
void __fastcall FUN_00d8cbb0(int param_1)

{
  FUN_00d8c060();
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00D8CBF0  FUN_00d8cbf0  size=168  [between]
undefined4 __thiscall FUN_00d8cbf0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 *puVar3;
  
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (puVar1 = (undefined4 *)FUN_00d8b020(), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = 0;
    FUN_00d93a30();
    puVar3 = puVar1 + 4;
    for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar1[0x40] = param_2;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0;
    FUN_00d8ac30(puVar1);
    return unaff_EBX;
  }
  return 0xffffffff;
}

// 00D8CCD0  Hw::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>_2  size=72  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>::cHwLFFreeListTemp<cCutJobList::_JOB_WORK>_2
          (undefined4 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00D8CDA0  Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>_3  size=184  [class]
int __fastcall
Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::
cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>_3(int param_1)

{
  FUN_00d93a30();
  *(undefined ***)(param_1 + 0xf0) = vftable;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined ***)(param_1 + 0x140) = cHwLFFreeListTemp<cCutJobList::_JOB_WORK>::vftable;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  return param_1;
}

// 00D8CE60  Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>_4  size=227  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::
cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>_4(int param_1)

{
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined ***)(param_1 + 0x140) = cHwLFFreeListTemp<cCutJobList::_JOB_WORK>::vftable;
  if ((*(int *)(param_1 + 0x158) != 0) && (*(int *)(param_1 + 0x160) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x158),0);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined ***)(param_1 + 0xf0) = vftable;
  if ((*(int *)(param_1 + 0x108) != 0) && (*(int *)(param_1 + 0x110) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x108),0);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}

// 00D8D010  FUN_00d8d010  size=148  [callgraph]
void __fastcall FUN_00d8d010(int param_1)

{
  FUN_00d8c060();
  if ((*(int *)(param_1 + 0x108) != 0) && (*(int *)(param_1 + 0x110) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x108),0);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if ((*(int *)(param_1 + 0x158) != 0) && (*(int *)(param_1 + 0x160) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x158),0);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  return;
}

// 00D8D0E0  Hw::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>  size=72  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>::
cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>(undefined4 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00D8D130  FUN_00d8d130  size=39  [callgraph]
undefined4 __fastcall FUN_00d8d130(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d8c7f0(0x100,&DAT_01b7bd48);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 1;
}

// 00D8D160  FUN_00d8d160  size=147  [callgraph]
void __fastcall FUN_00d8d160(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  while (uVar3 = uVar1, uVar3 != 0) {
    uVar1 = *(uint *)(uVar3 + 0x1fc);
    FUN_00a0ffd0();
    FUN_00a14d90();
    uVar2 = *(uint *)(param_1 + 0x18);
    if (((uVar2 != 0) && (uVar2 <= uVar3)) && (uVar3 < *(int *)(param_1 + 0x1c) * 0x210 + uVar2)) {
      FUN_00a16590();
      FUN_00a15160();
      FUN_00d8b1b0(uVar3);
    }
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00D8D200  FUN_00d8d200  size=264  [callgraph]
void __fastcall FUN_00d8d200(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = FUN_00d8ae80();
  while (iVar5 != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      *(int *)(*(int *)(param_1 + 0x40) + 0x1f8) = iVar5;
      *(undefined4 *)(iVar5 + 0x1fc) = *(undefined4 *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x40) = iVar5;
    iVar5 = FUN_00d8ae80();
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar2 = *(uint *)(param_1 + 0x40);
    while (uVar4 = uVar2, uVar4 != 0) {
      puVar1 = (uint *)(uVar4 + 0x1fc);
      uVar2 = *puVar1;
      if (*(int *)(uVar4 + 0x1f0) != 0) {
        if (*(int *)(uVar4 + 500) < 1) {
          if (*(int *)(uVar4 + 0x1f8) == 0) {
            *(uint *)(param_1 + 0x40) = *puVar1;
          }
          else {
            *(uint *)(*(int *)(uVar4 + 0x1f8) + 0x1fc) = *puVar1;
          }
          if (*puVar1 != 0) {
            *(undefined4 *)(*puVar1 + 0x1f8) = *(undefined4 *)(uVar4 + 0x1f8);
          }
          *(undefined4 *)(uVar4 + 0x1f8) = 0;
          *puVar1 = 0;
          FUN_00a0ffd0();
          FUN_00a14d90();
          uVar3 = *(uint *)(param_1 + 0x18);
          if (((uVar3 != 0) && (uVar3 <= uVar4)) &&
             (uVar4 < *(int *)(param_1 + 0x1c) * 0x210 + uVar3)) {
            FUN_00a16590();
            FUN_00a15160();
            FUN_00d8b1b0(uVar4);
          }
        }
        else {
          *(undefined4 *)(uVar4 + 0x1f0) = 0;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

// 00E08FB0  Hw::cHwLFFreeListTemp<cSlowRateUnit>::cHwLFFreeListTemp<cSlowRateUnit>_3  size=82  [class]
undefined4 * __fastcall
Hw::cHwLFFreeListTemp<cSlowRateUnit>::cHwLFFreeListTemp<cSlowRateUnit>_3(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (DAT_01dd9160 != (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_016cc3f8);
    return param_1;
  }
  DAT_01dd9160 = param_1;
  return param_1;
}

// 00E09010  Hw::cHwLFFreeListTemp<cSlowRateUnit>::cHwLFFreeListTemp<cSlowRateUnit>_2  size=72  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cSlowRateUnit>::cHwLFFreeListTemp<cSlowRateUnit>_2(undefined4 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00E1AC40  Hw::cHwLFFreeListTemp<cSlowRateUnit>::cHwLFFreeListTemp<cSlowRateUnit>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cSlowRateUnit>::cHwLFFreeListTemp<cSlowRateUnit>(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00E1AD40  FUN_00e1ad40  size=59  [between]
/* WARNING: Removing unreachable block (ram,0x00e1ad54) */

void __thiscall FUN_00e1ad40(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
  }
  FUN_00e19960(*(undefined4 *)(param_1 + 4),param_2,param_3);
  return;
}

// 00E1AD80  FUN_00e1ad80  size=290  [between]
int FUN_00e1ad80(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  _Lockit local_14 [4];
  _Lockit local_10 [4];
  undefined1 local_c [12];
  
  std::_Lockit::_Lockit(local_10,0);
  iVar4 = DAT_01dd9170;
  local_18 = DAT_01dd9170;
  if (DAT_01b35c14 == 0) {
    std::_Lockit::_Lockit(local_14,0);
    if (DAT_01b35c14 == 0) {
      DAT_01b35c14 = DAT_01f8eda8 + 1;
      DAT_01f8eda8 = DAT_01b35c14;
    }
    FUN_00fda874();
  }
  piVar2 = param_1;
  uVar1 = DAT_01b35c14;
  iVar3 = *param_1;
  if (DAT_01b35c14 < *(uint *)(iVar3 + 0xc)) {
    iVar5 = *(int *)(*(int *)(iVar3 + 8) + DAT_01b35c14 * 4);
    if (iVar5 != 0) goto LAB_00e1ae8f;
  }
  else {
    iVar5 = 0;
  }
  if (*(char *)(iVar3 + 0x14) == '\0') {
LAB_00e1ae07:
    if (iVar5 != 0) goto LAB_00e1ae8f;
  }
  else {
    iVar3 = FUN_00fda9e4();
    if (uVar1 < *(uint *)(iVar3 + 0xc)) {
      iVar5 = *(int *)(*(int *)(iVar3 + 8) + uVar1 * 4);
      goto LAB_00e1ae07;
    }
  }
  if (iVar4 != 0) {
    FUN_00fda874();
    return iVar4;
  }
  iVar4 = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::
          num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>(&local_18,piVar2);
  iVar5 = local_18;
  if (iVar4 == -1) {
    std::bad_cast::bad_cast("bad cast");
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_01879074);
  }
  DAT_01dd9170 = local_18;
  std::_Lockit::_Lockit((_Lockit *)&param_1,0);
  if (*(int *)(iVar5 + 4) != -1) {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
  }
  FUN_00fda874();
  Facet_Register(iVar5);
LAB_00e1ae8f:
  FUN_00fda874();
  return iVar5;
}

// 00E1AEB0  Hw::cHwLFFreeListTemp<cSlowRateUnit>::vf00  size=83  [class]
undefined4 * __thiscall Hw::cHwLFFreeListTemp<cSlowRateUnit>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E1AFB0  FUN_00e1afb0  size=127  [callgraph]
void FUN_00e1afb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_014a76f0;
  local_10 = ExceptionList;
  uStack_30 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    FUN_00e18ab0(param_4,param_1,&local_20);
    param_1 = param_1 + 0xc;
  }
  ExceptionList = local_10;
  return;
}

// 00E1B032  Catch@00e1b032  size=9  [callgraph]
void Catch_00e1b032(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1B040  FUN_00e1b040  size=121  [callgraph]
int FUN_00e1b040(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_014a7710;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_00e19d60(param_4,param_3,param_1);
    param_3 = param_3 + 8;
  }
  ExceptionList = local_10;
  return param_3;
}

// 00E1B0B9  Catch@00e1b0b9  size=9  [callgraph]
void Catch_00e1b0b9(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1B110  FUN_00e1b110  size=39  [callgraph]
void __fastcall FUN_00e1b110(undefined4 *param_1)

{
  if (0xf < (uint)param_1[5]) {
    FUN_00dd4920(*param_1);
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return;
}

// 00E1B140  FUN_00e1b140  size=79  [callgraph]
int * __fastcall FUN_00e1b140(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(byte *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) & 6) == 0) {
    iVar1 = (**(code **)(**(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1) + 0x34))();
    if (iVar1 == -1) {
      uVar2 = 4;
    }
  }
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | uVar2;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar2 = uVar2 | 4;
    }
    std::ios_base::failure::failure(uVar2,0);
  }
  return param_1;
}

// 00E1B1B0  FUN_00e1b1b0  size=47  [callgraph]
void __fastcall FUN_00e1b1b0(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E1B1E0  FUN_00e1b1e0  size=47  [callgraph]
void __fastcall FUN_00e1b1e0(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E1B210  FUN_00e1b210  size=47  [callgraph]
void __fastcall FUN_00e1b210(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E1B290  FUN_00e1b290  size=90  [callgraph]
void __fastcall FUN_00e1b290(int *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_014a7730;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((*(byte *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) & 2) != 0) {
    FUN_00e1b140();
  }
  ExceptionList = local_10;
  return;
}

// 00E1B2EA  Catch@00e1b2ea  size=13  [callgraph]
undefined4 Catch_00e1b2ea(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  return 0xe1b2d8;
}

// 00E1B3F0  FUN_00e1b3f0  size=230  [callgraph]
int * __thiscall FUN_00e1b3f0(int *param_1,int *param_2,uint param_3,uint param_4)

{
  int *_Dst;
  uint uVar1;
  
  uVar1 = param_2[4];
  if (uVar1 < param_3) {
    std::out_of_range::out_of_range_2("invalid string position");
  }
  uVar1 = uVar1 - param_3;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  if (param_1 == param_2) {
    FUN_00e183d0(uVar1 + param_3,0xffffffff);
    FUN_00e183d0(0,param_3);
    return param_1;
  }
  if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("string too long");
  }
  if ((uint)param_1[5] < uVar1) {
    FUN_00e18570(uVar1,param_1[4]);
    if (uVar1 == 0) {
      return param_1;
    }
  }
  else if (uVar1 == 0) {
    param_1[4] = 0;
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)*param_1 = 0;
      return param_1;
    }
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  if (0xf < (uint)param_2[5]) {
    param_2 = (int *)*param_2;
  }
  _Dst = param_1;
  if (0xf < (uint)param_1[5]) {
    _Dst = (int *)*param_1;
  }
  FID_conflict__memcpy(_Dst,(void *)((int)param_2 + param_3),uVar1);
  param_1[4] = uVar1;
  if ((uint)param_1[5] < 0x10) {
    *(undefined1 *)((int)param_1 + uVar1) = 0;
    return param_1;
  }
  *(undefined1 *)(*param_1 + uVar1) = 0;
  return param_1;
}

// 00E1B4E0  FUN_00e1b4e0  size=48  [callgraph]
void __fastcall FUN_00e1b4e0(undefined4 *param_1)

{
  void *_Dst;
  
  _Dst = (void *)*param_1;
  if (_Dst != (void *)param_1[1]) {
    FID_conflict__memcpy(_Dst,(void *)param_1[1],0);
    param_1[1] = _Dst;
  }
  return;
}

// 00E1B580  FUN_00e1b580  size=30  [callgraph]
undefined4 __thiscall FUN_00e1b580(undefined4 param_1,byte param_2)

{
  FUN_00e1a460();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E1B610  FUN_00e1b610  size=121  [callgraph]
int FUN_00e1b610(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_014a7750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    FUN_00e18a70(param_4,param_3,param_1);
    param_3 = param_3 + 4;
  }
  ExceptionList = local_10;
  return param_3;
}

// 00E1B689  Catch@00e1b689  size=9  [callgraph]
void Catch_00e1b689(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1B6A0  FUN_00e1b6a0  size=121  [callgraph]
int FUN_00e1b6a0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_014a7770;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    FUN_00e18a90(param_4,param_3,param_1);
    param_3 = param_3 + 4;
  }
  ExceptionList = local_10;
  return param_3;
}

// 00E1B719  Catch@00e1b719  size=9  [callgraph]
void Catch_00e1b719(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1B730  FUN_00e1b730  size=121  [callgraph]
int FUN_00e1b730(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_014a7790;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    FUN_00e18ad0(param_4,param_3,param_1);
    param_3 = param_3 + 4;
  }
  ExceptionList = local_10;
  return param_3;
}

// 00E1B7A9  Catch@00e1b7a9  size=9  [callgraph]
void Catch_00e1b7a9(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1B7C0  FUN_00e1b7c0  size=124  [callgraph]
int FUN_00e1b7c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_014a77b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_00e1a6a0(param_4,param_3,param_1);
    param_3 = param_3 + 8;
  }
  ExceptionList = local_10;
  return param_3;
}

// 00E1B83C  Catch@00e1b83c  size=9  [callgraph]
void Catch_00e1b83c(void)

{
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1B940  FUN_00e1b940  size=38  [callgraph]
void __fastcall FUN_00e1b940(int param_1)

{
  FUN_00e1a8a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
  }
  return;
}

// 00E1B9D0  FUN_00e1b9d0  size=240  [callgraph]
int * __thiscall FUN_00e1b9d0(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    uVar1 = param_1[5];
    piVar2 = param_1;
    if (0xf < uVar1) {
      piVar2 = (int *)*param_1;
    }
    if (piVar2 <= param_2) {
      piVar2 = param_1;
      if (0xf < uVar1) {
        piVar2 = (int *)*param_1;
      }
      if (param_2 < (int *)(param_1[4] + (int)piVar2)) {
        if (0xf < uVar1) {
          piVar2 = (int *)FUN_00e1b3f0(param_1,(int)param_2 - *param_1,param_3);
          return piVar2;
        }
        piVar2 = (int *)FUN_00e1b3f0(param_1,(int)param_2 - (int)param_1,param_3);
        return piVar2;
      }
    }
  }
  if (param_3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("string too long");
  }
  if ((uint)param_1[5] < param_3) {
    FUN_00e18570(param_3,param_1[4]);
    if (param_3 == 0) {
      return param_1;
    }
  }
  else if (param_3 == 0) {
    param_1[4] = 0;
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)*param_1 = 0;
      return param_1;
    }
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  piVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    piVar2 = (int *)*param_1;
  }
  FID_conflict__memcpy(piVar2,param_2,param_3);
  param_1[4] = param_3;
  if ((uint)param_1[5] < 0x10) {
    *(undefined1 *)((int)param_1 + param_3) = 0;
    return param_1;
  }
  *(undefined1 *)(*param_1 + param_3) = 0;
  return param_1;
}

// 00E1BB00  FUN_00e1bb00  size=163  [callgraph]
int * __thiscall FUN_00e1bb00(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1[4];
  if (-iVar2 - 1U <= param_2) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("string too long");
  }
  if (param_2 != 0) {
    uVar1 = iVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::length_error::length_error_3("string too long");
    }
    if ((uint)param_1[5] < uVar1) {
      FUN_00e19eb0(uVar1,iVar2);
      if (uVar1 == 0) {
        return param_1;
      }
    }
    else if (uVar1 == 0) {
      param_1[4] = 0;
      if ((uint)param_1[5] < 0x10) {
        *(undefined1 *)param_1 = 0;
        return param_1;
      }
      *(undefined1 *)*param_1 = 0;
      return param_1;
    }
    FUN_00e17930(param_1[4],param_2,param_3);
    param_1[4] = uVar1;
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      return param_1;
    }
    *(undefined1 *)((int)param_1 + uVar1) = 0;
  }
  return param_1;
}

// 00E1BBB0  FUN_00e1bbb0  size=76  [callgraph]
void __thiscall FUN_00e1bbb0(ios_base *param_1,undefined4 param_2,char param_3)

{
  ios_base iVar1;
  
  FUN_00e16ac0();
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar1 = (ios_base)FUN_00e1abb0(0x20);
  param_1[0x40] = iVar1;
  if (*(int *)(param_1 + 0x38) == 0) {
    std::ios_base::failure::failure(*(uint *)(param_1 + 0xc) | 4,0);
  }
  if (param_3 != '\0') {
    std::ios_base::_Addstd(param_1);
  }
  return;
}

// 00E1BC20  FUN_00e1bc20  size=227  [callgraph]
int * __thiscall FUN_00e1bc20(int *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint extraout_ECX;
  uint uVar4;
  
  uVar2 = param_2[4];
  uVar4 = param_3;
  if (uVar2 < param_3) {
    uVar2 = std::out_of_range::out_of_range_2("invalid string position");
    uVar4 = extraout_ECX;
  }
  if (uVar2 - uVar4 < param_4) {
    param_4 = uVar2 - uVar4;
  }
  iVar1 = param_1[4];
  if (-iVar1 - 1U <= param_4) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("string too long");
  }
  if (param_4 != 0) {
    uVar2 = iVar1 + param_4;
    if (uVar2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::length_error::length_error_3("string too long");
    }
    if ((uint)param_1[5] < uVar2) {
      FUN_00e19eb0(uVar2,iVar1);
      if (uVar2 == 0) {
        return param_1;
      }
    }
    else if (uVar2 == 0) {
      param_1[4] = 0;
      if (0xf < (uint)param_1[5]) {
        *(undefined1 *)*param_1 = 0;
        return param_1;
      }
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    piVar3 = param_1;
    if (0xf < (uint)param_1[5]) {
      piVar3 = (int *)*param_1;
    }
    FID_conflict__memcpy
              ((void *)(param_1[4] + (int)piVar3),(void *)((int)param_2 + param_3),param_4);
    param_1[4] = uVar2;
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)(*param_1 + uVar2) = 0;
      return param_1;
    }
    *(undefined1 *)((int)param_1 + uVar2) = 0;
  }
  return param_1;
}

// 00E1BD70  FUN_00e1bd70  size=188  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00e1bde8) */
/* WARNING: Removing unreachable block (ram,0x00e1bdaa) */
/* WARNING: Removing unreachable block (ram,0x00e1bdb0) */

int FUN_00e1bd70(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_2 == param_3) {
    return param_1;
  }
  puVar4 = param_2 + 9;
  do {
    uVar2 = puVar4[-8];
    uVar3 = puVar4[-7];
    if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
    }
    FUN_00e19960(*(undefined4 *)(param_1 + 4),uVar2,uVar3);
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24);
    }
    FUN_00e19960(*(undefined4 *)(param_1 + 0x24),uVar2,uVar3);
    puVar1 = puVar4 + 7;
    param_1 = param_1 + 0x40;
    puVar4 = puVar4 + 0x10;
  } while (puVar1 != param_3);
  return param_1;
}

// 00E1BE30  FUN_00e1be30  size=290  [callgraph]
int FUN_00e1be30(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  _Lockit local_14 [4];
  _Lockit local_10 [4];
  undefined1 local_c [12];
  
  std::_Lockit::_Lockit(local_10,0);
  iVar4 = DAT_01dd9174;
  local_18 = DAT_01dd9174;
  if (DAT_01b35c10 == 0) {
    std::_Lockit::_Lockit(local_14,0);
    if (DAT_01b35c10 == 0) {
      DAT_01b35c10 = DAT_01f8eda8 + 1;
      DAT_01f8eda8 = DAT_01b35c10;
    }
    FUN_00fda874();
  }
  piVar2 = param_1;
  uVar1 = DAT_01b35c10;
  iVar3 = *param_1;
  if (DAT_01b35c10 < *(uint *)(iVar3 + 0xc)) {
    iVar5 = *(int *)(*(int *)(iVar3 + 8) + DAT_01b35c10 * 4);
    if (iVar5 != 0) goto LAB_00e1bf3f;
  }
  else {
    iVar5 = 0;
  }
  if (*(char *)(iVar3 + 0x14) == '\0') {
LAB_00e1beb7:
    if (iVar5 != 0) goto LAB_00e1bf3f;
  }
  else {
    iVar3 = FUN_00fda9e4();
    if (uVar1 < *(uint *)(iVar3 + 0xc)) {
      iVar5 = *(int *)(*(int *)(iVar3 + 8) + uVar1 * 4);
      goto LAB_00e1beb7;
    }
  }
  if (iVar4 != 0) {
    FUN_00fda874();
    return iVar4;
  }
  iVar4 = std::numpunct<char>::numpunct<char>(&local_18,piVar2);
  iVar5 = local_18;
  if (iVar4 == -1) {
    std::bad_cast::bad_cast("bad cast");
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_c,&DAT_01879074);
  }
  DAT_01dd9174 = local_18;
  std::_Lockit::_Lockit((_Lockit *)&param_1,0);
  if (*(int *)(iVar5 + 4) != -1) {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
  }
  FUN_00fda874();
  Facet_Register(iVar5);
LAB_00e1bf3f:
  FUN_00fda874();
  return iVar5;
}

// 00E1BF90  FUN_00e1bf90  size=47  [callgraph]
void __fastcall FUN_00e1bf90(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E1BFC0  FUN_00e1bfc0  size=47  [callgraph]
void __fastcall FUN_00e1bfc0(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E1BFF0  FUN_00e1bff0  size=47  [callgraph]
void __fastcall FUN_00e1bff0(int *param_1)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E1C020  FUN_00e1c020  size=45  [callgraph]
void __fastcall FUN_00e1c020(int *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = thunk_FUN_00fe2e0d();
  if (cVar2 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e1c04a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}

// 00E1C050  FUN_00e1c050  size=238  [callgraph]
int * __thiscall FUN_00e1c050(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = param_1[4];
  if (uVar3 < param_2) {
    uVar3 = std::out_of_range::out_of_range_2("invalid string position");
  }
  if (-uVar3 - 1 <= param_3) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("string too long");
  }
  if (param_3 != 0) {
    uVar1 = uVar3 + param_3;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::length_error::length_error_3("string too long");
    }
    if ((uint)param_1[5] < uVar1) {
      FUN_00e19eb0(uVar1,uVar3);
      if (uVar1 == 0) {
        return param_1;
      }
    }
    else if (uVar1 == 0) {
      param_1[4] = 0;
      if ((uint)param_1[5] < 0x10) {
        *(undefined1 *)param_1 = 0;
        return param_1;
      }
      *(undefined1 *)*param_1 = 0;
      return param_1;
    }
    piVar4 = param_1;
    piVar2 = param_1;
    if (0xf < (uint)param_1[5]) {
      piVar4 = (int *)*param_1;
      piVar2 = (int *)*param_1;
    }
    FID_conflict__memcpy
              ((void *)((int)piVar4 + param_3 + param_2),(void *)((int)piVar2 + param_2),
               param_1[4] - param_2);
    FUN_00e17930(param_2,param_3,param_4);
    param_1[4] = uVar1;
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)(*param_1 + uVar1) = 0;
      return param_1;
    }
    *(undefined1 *)((int)param_1 + uVar1) = 0;
  }
  return param_1;
}

// 00E1C140  FUN_00e1c140  size=230  [callgraph]
int * __thiscall FUN_00e1c140(int *param_1,int *param_2,uint param_3,uint param_4)

{
  int *_Dst;
  uint uVar1;
  
  uVar1 = param_2[4];
  if (uVar1 < param_3) {
    std::out_of_range::out_of_range_2("invalid string position");
  }
  uVar1 = uVar1 - param_3;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  if (param_1 == param_2) {
    FUN_00e18220(uVar1 + param_3,0xffffffff);
    FUN_00e18220(0,param_3);
    return param_1;
  }
  if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error_3("string too long");
  }
  if ((uint)param_1[5] < uVar1) {
    FUN_00e19eb0(uVar1,param_1[4]);
    if (uVar1 == 0) {
      return param_1;
    }
  }
  else if (uVar1 == 0) {
    param_1[4] = 0;
    if (0xf < (uint)param_1[5]) {
      *(undefined1 *)*param_1 = 0;
      return param_1;
    }
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  if (0xf < (uint)param_2[5]) {
    param_2 = (int *)*param_2;
  }
  _Dst = param_1;
  if (0xf < (uint)param_1[5]) {
    _Dst = (int *)*param_1;
  }
  FID_conflict__memcpy(_Dst,(void *)((int)param_2 + param_3),uVar1);
  param_1[4] = uVar1;
  if ((uint)param_1[5] < 0x10) {
    *(undefined1 *)((int)param_1 + uVar1) = 0;
    return param_1;
  }
  *(undefined1 *)(*param_1 + uVar1) = 0;
  return param_1;
}

// 00E1C2B0  FUN_00e1c2b0  size=37  [callgraph]
void __thiscall FUN_00e1c2b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00e1a550(param_2,param_3,param_4,param_1 + 0xc,0,param_4);
  return;
}

// 00E1C420  FUN_00e1c420  size=51  [callgraph]
void __thiscall FUN_00e1c420(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_40 [64];
  
  puVar2 = &DAT_01b7bcf0;
  uVar1 = FUN_00e09060(param_2,*(undefined4 *)(param_1 + 0xc));
  FUN_00e093f0(uVar1,puVar2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_40,&DAT_018793c4);
}

// 00E1C4B0  FUN_00e1c4b0  size=38  [callgraph]
void __fastcall FUN_00e1c4b0(int param_1)

{
  FUN_00e1a8a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
  }
  return;
}

// 00E1C4E0  FUN_00e1c4e0  size=438  [callgraph]
int * __thiscall FUN_00e1c4e0(int *param_1,ushort param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uStack_40;
  undefined1 local_30 [4];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  _Lockit local_20 [4];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a77d0;
  local_10 = ExceptionList;
  uStack_40 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_1c = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_18 = param_1;
  puVar3 = &uStack_40;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00e1b140();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    uVar5 = **(uint **)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
    local_24 = uVar5;
    std::_Lockit::_Lockit(local_20,0);
    if (*(int *)(uVar5 + 4) != -1) {
      *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
    }
    FUN_00fda874();
    local_2c = FUN_00e1ad80(&local_24);
    std::_Lockit::_Lockit((_Lockit *)&local_24,0);
    iVar2 = *(int *)(uVar5 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar5 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar5 + 4);
    FUN_00fda874();
    puVar7 = (undefined4 *)(~-(uint)(iVar2 != 0) & uVar5);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
    uVar5 = *(uint *)(*(int *)(*param_1 + 4) + 0x14 + (int)param_1) & 0xe00;
    if ((uVar5 == 0x400) || (uVar8 = (uint)(short)param_2, uVar5 == 0x800)) {
      uVar8 = (uint)param_2;
    }
    local_8 = 0;
    iVar2 = *(int *)(*param_1 + 4);
    local_28 = local_28 & 0xffffff00;
    pcVar6 = (char *)FUN_00e14100(local_30,local_28,*(undefined4 *)(iVar2 + 0x38 + (int)param_1),
                                  *(int *)(*param_1 + 4) + (int)param_1,
                                  *(undefined1 *)(iVar2 + 0x40 + (int)param_1),uVar8);
    if (*pcVar6 != '\0') {
      local_1c = 4;
    }
    local_8 = 0xffffffff;
  }
  if (local_1c != 0) {
    uVar5 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_1c;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar5 = uVar5 | 4;
    }
    std::ios_base::failure::failure(uVar5,0);
  }
  cVar4 = thunk_FUN_00fe2e0d();
  if (cVar4 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

// 00E1C696  Catch@00e1c696  size=58  [callgraph]
undefined * Catch_00e1c696(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    return &DAT_00e1c6c7;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1C6E0  FUN_00e1c6e0  size=406  [callgraph]
int * __thiscall FUN_00e1c6e0(int *param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uStack_40;
  uint local_30 [2];
  undefined4 local_28;
  uint local_24;
  _Lockit local_20 [4];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a77f0;
  local_10 = ExceptionList;
  uStack_40 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_1c = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_18 = param_1;
  puVar3 = &uStack_40;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00e1b140();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    uVar6 = **(uint **)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
    local_24 = uVar6;
    std::_Lockit::_Lockit(local_20,0);
    if (*(int *)(uVar6 + 4) != -1) {
      *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
    }
    FUN_00fda874();
    local_28 = FUN_00e1ad80(&local_24);
    std::_Lockit::_Lockit((_Lockit *)&local_24,0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    FUN_00fda874();
    puVar7 = (undefined4 *)(~-(uint)(iVar2 != 0) & uVar6);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
    local_8 = 0;
    iVar2 = *(int *)(*param_1 + 4);
    local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(iVar2 + 0x40 + (int)param_1));
    local_30[0] = local_30[0] & 0xffffff00;
    pcVar5 = (char *)FUN_00e14130(local_30,local_30[0],*(undefined4 *)(iVar2 + 0x38 + (int)param_1),
                                  *(int *)(*param_1 + 4) + (int)param_1,local_24,param_2);
    if (*pcVar5 != '\0') {
      local_1c = 4;
    }
    local_8 = 0xffffffff;
  }
  if (local_1c != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_1c;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    std::ios_base::failure::failure(uVar6,0);
  }
  cVar4 = thunk_FUN_00fe2e0d();
  if (cVar4 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

// 00E1C876  Catch@00e1c876  size=58  [callgraph]
undefined * Catch_00e1c876(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    return &DAT_00e1c8a7;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1C8C0  FUN_00e1c8c0  size=405  [callgraph]
int * __thiscall FUN_00e1c8c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uStack_40;
  uint local_30 [2];
  undefined4 local_28;
  uint local_24;
  _Lockit local_20 [4];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7810;
  local_10 = ExceptionList;
  uStack_40 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_1c = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_18 = param_1;
  puVar3 = &uStack_40;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00e1b140();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    uVar6 = **(uint **)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
    local_24 = uVar6;
    std::_Lockit::_Lockit(local_20,0);
    if (*(int *)(uVar6 + 4) != -1) {
      *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
    }
    FUN_00fda874();
    local_28 = FUN_00e1ad80(&local_24);
    std::_Lockit::_Lockit((_Lockit *)&local_24,0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    FUN_00fda874();
    puVar7 = (undefined4 *)(~-(uint)(iVar2 != 0) & uVar6);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
    local_8 = 0;
    iVar2 = *(int *)(*param_1 + 4);
    local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(iVar2 + 0x40 + (int)param_1));
    local_30[0] = local_30[0] & 0xffffff00;
    pcVar5 = (char *)FUN_00e14100(local_30,local_30[0],*(undefined4 *)(iVar2 + 0x38 + (int)param_1),
                                  *(int *)(*param_1 + 4) + (int)param_1,local_24,param_2);
    if (*pcVar5 != '\0') {
      local_1c = 4;
    }
    local_8 = 0xffffffff;
  }
  if (local_1c != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_1c;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    std::ios_base::failure::failure(uVar6,0);
  }
  cVar4 = thunk_FUN_00fe2e0d();
  if (cVar4 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

// 00E1CA55  Catch@00e1ca55  size=58  [callgraph]
undefined * Catch_00e1ca55(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    return &DAT_00e1ca86;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1CAA0  FUN_00e1caa0  size=405  [callgraph]
int * __thiscall FUN_00e1caa0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uStack_40;
  uint local_30 [2];
  undefined4 local_28;
  uint local_24;
  _Lockit local_20 [4];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7830;
  local_10 = ExceptionList;
  uStack_40 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_1c = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_18 = param_1;
  puVar3 = &uStack_40;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00e1b140();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    uVar6 = **(uint **)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
    local_24 = uVar6;
    std::_Lockit::_Lockit(local_20,0);
    if (*(int *)(uVar6 + 4) != -1) {
      *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
    }
    FUN_00fda874();
    local_28 = FUN_00e1ad80(&local_24);
    std::_Lockit::_Lockit((_Lockit *)&local_24,0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    FUN_00fda874();
    puVar7 = (undefined4 *)(~-(uint)(iVar2 != 0) & uVar6);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
    local_8 = 0;
    iVar2 = *(int *)(*param_1 + 4);
    local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(iVar2 + 0x40 + (int)param_1));
    local_30[0] = local_30[0] & 0xffffff00;
    pcVar5 = (char *)FUN_00e14130(local_30,local_30[0],*(undefined4 *)(iVar2 + 0x38 + (int)param_1),
                                  *(int *)(*param_1 + 4) + (int)param_1,local_24,param_2);
    if (*pcVar5 != '\0') {
      local_1c = 4;
    }
    local_8 = 0xffffffff;
  }
  if (local_1c != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_1c;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    std::ios_base::failure::failure(uVar6,0);
  }
  cVar4 = thunk_FUN_00fe2e0d();
  if (cVar4 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

// 00E1CC35  Catch@00e1cc35  size=58  [callgraph]
undefined * Catch_00e1cc35(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    return &DAT_00e1cc66;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1CC80  FUN_00e1cc80  size=409  [callgraph]
int * __thiscall FUN_00e1cc80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uStack_40;
  uint local_30;
  uint local_24;
  _Lockit local_20 [4];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7850;
  local_10 = ExceptionList;
  uStack_40 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_1c = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_18 = param_1;
  puVar3 = &uStack_40;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00e1b140();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    uVar6 = **(uint **)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
    local_24 = uVar6;
    std::_Lockit::_Lockit(local_20,0);
    if (*(int *)(uVar6 + 4) != -1) {
      *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
    }
    FUN_00fda874();
    FUN_00e1ad80(&local_24);
    std::_Lockit::_Lockit((_Lockit *)&local_24,0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    FUN_00fda874();
    puVar7 = (undefined4 *)(~-(uint)(iVar2 != 0) & uVar6);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
    local_8 = 0;
    iVar2 = *(int *)(*param_1 + 4);
    local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(iVar2 + 0x40 + (int)param_1));
    local_30 = local_30 & 0xffffff00;
    pcVar5 = (char *)FUN_00e14160(&param_2,local_30,*(undefined4 *)(iVar2 + 0x38 + (int)param_1),
                                  *(int *)(*param_1 + 4) + (int)param_1,local_24,param_2,param_3);
    if (*pcVar5 != '\0') {
      local_1c = 4;
    }
    local_8 = 0xffffffff;
  }
  if (local_1c != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_1c;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    std::ios_base::failure::failure(uVar6,0);
  }
  cVar4 = thunk_FUN_00fe2e0d();
  if (cVar4 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

// 00E1CE19  Catch@00e1ce19  size=58  [callgraph]
undefined * Catch_00e1ce19(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    return &DAT_00e1ce4a;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1CE60  FUN_00e1ce60  size=412  [callgraph]
int * __thiscall FUN_00e1ce60(int *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uStack_40;
  uint local_30 [2];
  undefined4 local_28;
  uint local_24;
  _Lockit local_20 [4];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7870;
  local_10 = ExceptionList;
  uStack_40 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_1c = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_18 = param_1;
  puVar3 = &uStack_40;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00e1b140();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    uVar6 = **(uint **)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
    local_24 = uVar6;
    std::_Lockit::_Lockit(local_20,0);
    if (*(int *)(uVar6 + 4) != -1) {
      *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
    }
    FUN_00fda874();
    local_28 = FUN_00e1ad80();
    std::_Lockit::_Lockit((_Lockit *)&local_24,0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    FUN_00fda874();
    puVar7 = (undefined4 *)(~-(uint)(iVar2 != 0) & uVar6);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)();
    }
    local_8 = 0;
    iVar2 = *(int *)(*param_1 + 4);
    local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(iVar2 + 0x40 + (int)param_1));
    local_30[0] = local_30[0] & 0xffffff00;
    pcVar5 = (char *)FUN_00e141a0(local_30,local_30[0],*(undefined4 *)(iVar2 + 0x38 + (int)param_1),
                                  *(int *)(*param_1 + 4) + (int)param_1,local_24,(double)param_2);
    if (*pcVar5 != '\0') {
      local_1c = 4;
    }
    local_8 = 0xffffffff;
  }
  if (local_1c != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_1c;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    std::ios_base::failure::failure(uVar6,0);
  }
  cVar4 = thunk_FUN_00fe2e0d();
  if (cVar4 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

// 00E1CFFC  Catch@00e1cffc  size=58  [callgraph]
undefined * Catch_00e1cffc(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  iVar2 = *(int *)(*piVar1 + 4);
  uVar3 = *(uint *)((int)piVar1 + iVar2 + 0xc) & 0x17 | 4;
  *(uint *)((int)piVar1 + iVar2 + 0xc) = uVar3;
  if ((*(uint *)((int)piVar1 + iVar2 + 0x10) & uVar3) == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    return &DAT_00e1d02d;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E1D040  FUN_00e1d040  size=412  [callgraph]
int * __thiscall FUN_00e1d040(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uStack_40;
  uint local_30;
  uint local_24;
  _Lockit local_20 [4];
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7890;
  local_10 = ExceptionList;
  uStack_40 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_1c = 0;
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  local_18 = param_1;
  puVar3 = &uStack_40;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    puVar3 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar3;
  if ((*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) &&
     (*(int *)(*(int *)(*param_1 + 4) + 0x3c + (int)param_1) != 0)) {
    FUN_00e1b140();
  }
  if (*(int *)(*(int *)(*param_1 + 4) + 0xc + (int)param_1) == 0) {
    uVar6 = **(uint **)(*(int *)(*param_1 + 4) + 0x30 + (int)param_1);
    local_24 = uVar6;
    std::_Lockit::_Lockit(local_20,0);
    if (*(int *)(uVar6 + 4) != -1) {
      *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
    }
    FUN_00fda874();
    FUN_00e1ad80();
    std::_Lockit::_Lockit((_Lockit *)&local_24,0);
    iVar2 = *(int *)(uVar6 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar6 + 4) = iVar2 + -1;
    }
    iVar2 = *(int *)(uVar6 + 4);
    FUN_00fda874();
    puVar7 = (undefined4 *)(~-(uint)(iVar2 != 0) & uVar6);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)();
    }
    local_8 = 0;
    iVar2 = *(int *)(*param_1 + 4);
    local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(iVar2 + 0x40 + (int)param_1));
    local_30 = local_30 & 0xffffff00;
    pcVar5 = (char *)FUN_00e141a0(&param_2,local_30,*(undefined4 *)(iVar2 + 0x38 + (int)param_1),
                                  *(int *)(*param_1 + 4) + (int)param_1,local_24,param_2);
    if (*pcVar5 != '\0') {
      local_1c = 4;
    }
    local_8 = 0xffffffff;
  }
  if (local_1c != 0) {
    uVar6 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) | local_1c;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) {
      uVar6 = uVar6 | 4;
    }
    std::ios_base::failure::failure(uVar6,0);
  }
  cVar4 = thunk_FUN_00fe2e0d();
  if (cVar4 == '\0') {
    FUN_00e1b290();
  }
  piVar1 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

// 00F3FF90  Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00F40000  Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>_2  size=86  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>_2(undefined4 *param_1)

{
  FUN_00f3b960();
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00F400D0  Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F405C0  Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>_3  size=105  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
Hw::cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>::
cHwLFFreeListTemp<cEffResource<cEffectModelData,eEffDataManager>_>_3(void)

{
  if ((_DAT_01ee53f0 & 1) == 0) {
    _DAT_01ee53f0 = _DAT_01ee53f0 | 1;
    _DAT_01ee1348 = vftable;
    _DAT_01ee1350 = 0;
    _DAT_01ee1354 = 0;
    _DAT_01ee1358 = 0;
    DAT_01ee1368 = 0;
    DAT_01ee1360 = 0;
    DAT_01ee1364 = 0;
    FUN_00f3b960();
    _atexit((_func_4879 *)&LAB_015f2110);
  }
  return &DAT_01ee1348;
}

// 00F4DE90  Hw::cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>::cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>_2  size=63  [class]
void __fastcall
Hw::
cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
::
cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>_2
          (undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00F4DF10  FUN_00f4df10  size=87  [between]
void __fastcall FUN_00f4df10(int param_1)

{
  FUN_00f4dbf0();
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x2c),0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00F4DF70  FUN_00f4df70  size=122  [between]
void __thiscall FUN_00f4df70(int param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (uint *)*param_3;
  uVar2 = *puVar1;
  if (uVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    if (((uVar3 != 0) && (uVar3 <= uVar2)) && (uVar2 < uVar3 + *(int *)(param_1 + 0x1c) * 0xc)) {
      FUN_00f4ca90(uVar2);
    }
    *puVar1 = 0;
  }
  iVar4 = *param_3 - *(int *)(param_1 + 0x2c) >> 2;
  iVar5 = iVar4;
  if (iVar4 < *(int *)(param_1 + 0x34) + -1) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar5 * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4 + iVar5 * 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x34) + -1);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  *param_2 = *(int *)(param_1 + 0x2c) + iVar4 * 4;
  return;
}

// 00F4DFF0  Hw::cHwLFFreeListTemp<cEffectData>::cHwLFFreeListTemp<cEffectData>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<cEffectData>::cHwLFFreeListTemp<cEffectData>(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00F4E050  FUN_00f4e050  size=130  [between]
void __thiscall FUN_00f4e050(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (((uVar1 <= param_2) && (param_2 < uVar1 + *(int *)(param_1 + 0x1c) * 0x3c)) &&
     ((param_2 - uVar1) / 0x3c != 0xffffffff)) {
    FUN_00f972f0();
    uVar1 = *(uint *)(param_1 + 0x18);
    if (((uVar1 != 0) && (uVar1 <= param_2)) && (param_2 < uVar1 + *(int *)(param_1 + 0x1c) * 0x3c))
    {
      Hw::cTexture::cTexture_5();
      FUN_00f4cae0(param_2);
    }
    return;
  }
  FUN_00dd5650(&DAT_016e0c38,param_2);
  return;
}

// 00F4E100  Hw::cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::
cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F4E160  Hw::cHwLFFreeListTemp<cEffectData>::vf00  size=83  [class]
undefined4 * __thiscall Hw::cHwLFFreeListTemp<cEffectData>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F4E220  FUN_00f4e220  size=65  [between]
int __thiscall FUN_00f4e220(int param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (0 < *(int *)(param_1 + 0x34)) {
    pvVar1 = _bsearch(param_2,(void *)(*(int *)(param_1 + 0x2c) + param_3 * 4),
                      *(int *)(param_1 + 0x34) - param_3,4,(_PtFuncCompare *)&LAB_00f4d510);
    if (pvVar1 != (void *)0x0) {
      return (int)pvVar1 - *(int *)(param_1 + 0x2c) >> 2;
    }
  }
  return -1;
}

// 00F4E310  Hw::cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>::cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>  size=87  [class]
void __fastcall
Hw::
cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
::
cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
          (undefined4 *param_1)

{
  *param_1 = effect::utility::
             FixedFactory<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
             ::vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00FA9AE0  Hw::cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>::cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>  size=63  [class]
void __fastcall
Hw::cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>::
cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>(undefined4 *param_1)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00FA9B20  Hw::cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>::vf00  size=83  [class]
undefined4 * __thiscall
Hw::cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_1[6] != 0) && (param_1[8] != 0)) {
    FUN_00dd3d90(param_1[6],0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015ED390  Hw::cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>::cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>_2  size=95  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>::
     cHwLFFreeListTemp<cModelDataManager::_DATA_WORK>_2(void)

{
  PTR_vftable_0189ef10 = (undefined *)vftable;
  if ((DAT_0189ef28 != 0) && (DAT_0189ef30 != 0)) {
    FUN_00dd3d90(DAT_0189ef28,0);
  }
  DAT_0189ef30 = 0;
  DAT_0189ef28 = 0;
  DAT_0189ef2c = 0;
  _DAT_0189ef18 = 0;
  _DAT_0189ef1c = 0;
  _DAT_0189ef20 = 0;
  return;
}

// 015EEB50  Hw::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>_3  size=119  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>::
     cHwLFFreeListTemp<cRadarMapManager::_ICON_WORK>_3(void)

{
  DAT_01bea190 = 0;
  _DAT_018aa178 = 0;
  _DAT_018aa17c = 0;
  _DAT_018aa180 = 0;
  PTR_vftable_018aa150 = (undefined *)vftable;
  if ((DAT_018aa168 != 0) && (DAT_018aa170 != 0)) {
    FUN_00dd3d90(DAT_018aa168,0);
  }
  DAT_018aa170 = 0;
  DAT_018aa168 = 0;
  _DAT_018aa16c = 0;
  _DAT_018aa158 = 0;
  _DAT_018aa15c = 0;
  _DAT_018aa160 = 0;
  return;
}

// 015F0880  FUN_015f0880  size=10  [callgraph]
void FUN_015f0880(void)

{
  Hw::cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>::
  cHwLFFreeListTemp<cCutTargetList::_TARGET_WORK>_4();
  return;
}

// 015F0890  Hw::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>_3  size=113  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>::
     cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>_3(void)

{
  _DAT_018bc048 = 0;
  _DAT_018bc04c = 0;
  _DAT_018bc050 = 0;
  PTR_vftable_018bc020 = (undefined *)vftable;
  if ((DAT_018bc038 != 0) && (DAT_018bc040 != 0)) {
    FUN_00dd3d90(DAT_018bc038,0);
  }
  DAT_018bc040 = 0;
  DAT_018bc038 = 0;
  _DAT_018bc03c = 0;
  _DAT_018bc028 = 0;
  _DAT_018bc02c = 0;
  _DAT_018bc030 = 0;
  return;
}

// 015F2220  Hw::cHwLFFreeListTemp<cEffectData>::cHwLFFreeListTemp<cEffectData>_2  size=95  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cHwLFFreeListTemp<cEffectData>::cHwLFFreeListTemp<cEffectData>_2(void)

{
  PTR_vftable_018d72c0 = (undefined *)vftable;
  if ((DAT_018d72d8 != 0) && (DAT_018d72e0 != 0)) {
    FUN_00dd3d90(DAT_018d72d8,0);
  }
  DAT_018d72e0 = 0;
  DAT_018d72d8 = 0;
  DAT_018d72dc = 0;
  _DAT_018d72c8 = 0;
  _DAT_018d72cc = 0;
  DAT_018d72d0 = 0;
  return;
}

// 015F44D0  Hw::cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>::cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>_2  size=95  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Hw::cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>::
     cHwLFFreeListTemp<Hw::OcclusionQueryManager::_QUERY_WORK>_2(void)

{
  PTR_vftable_018da498 = (undefined *)vftable;
  if ((DAT_018da4b0 != 0) && (DAT_018da4b8 != 0)) {
    FUN_00dd3d90(DAT_018da4b0,0);
  }
  DAT_018da4b8 = 0;
  DAT_018da4b0 = 0;
  DAT_018da4b4 = 0;
  _DAT_018da4a0 = 0;
  _DAT_018da4a4 = 0;
  _DAT_018da4a8 = 0;
  return;
}

