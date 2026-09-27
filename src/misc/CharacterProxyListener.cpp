// src/misc/CharacterProxyListener.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E0A30..008E3A90, 6 functions

#include "mgrr.h"
#include "CharacterProxyListener.h"

// 008E0A30  CharacterProxyListener::vf10  size=3  [class]
void CharacterProxyListener::vf10(void)

{
  return;
}

// 008E19A0  CharacterProxyListener::vf00  size=8  [class]
void CharacterProxyListener::vf00(void)

{
  vf00();
  return;
}

// 008E1A30  CharacterProxyListener::vf14  size=339  [class]
void CharacterProxyListener::vf14(undefined4 param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *param_3;
  local_1c = param_3[1];
  local_18 = param_3[2];
  local_14 = 0.0;
  if (((local_20 != 0.0) || (local_1c != 0.0)) || (local_18 != 0.0)) {
    fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
  }
  fVar1 = local_20 * 0.0 + local_1c + local_18 * 0.0;
  if (fVar1 < -0.5 != (fVar1 == -0.5)) {
    local_20 = local_20 * 0.1;
    local_1c = local_1c * 0.1;
    local_18 = local_18 * 0.1;
    local_14 = local_14 * 0.1;
  }
  *param_3 = local_20;
  param_3[1] = local_1c;
  param_3[2] = local_18;
  param_3[3] = local_14;
  return;
}

// 008E3620  CharacterProxyListener::vf00  size=57  [class]
undefined4 * __thiscall CharacterProxyListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[2] = hkpCharacterProxyListener::vftable;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 008E3A30  CharacterProxyListener::vf08  size=84  [class]
void CharacterProxyListener::vf08(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x20);
  if (*(char *)(iVar4 + 0x18) == '\x02') {
    iVar4 = *(char *)(iVar4 + 0x10) + iVar4;
  }
  else {
    iVar4 = 0;
  }
  iVar2 = *(int *)(param_2 + 0x28);
  if ((((*(char *)(iVar2 + 0x18) == '\x01') && (iVar2 = *(char *)(iVar2 + 0x10) + iVar2, iVar2 != 0)
       ) && (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 != 0)) &&
     (*(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x34) != 0)) {
    uVar3 = FUN_008f7f80(iVar4);
    FUN_008f84a0(uVar3);
  }
  return;
}

// 008E3A90  CharacterProxyListener::vf0C  size=84  [class]
void CharacterProxyListener::vf0C(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x20);
  if (*(char *)(iVar4 + 0x18) == '\x02') {
    iVar4 = *(char *)(iVar4 + 0x10) + iVar4;
  }
  else {
    iVar4 = 0;
  }
  iVar2 = *(int *)(param_2 + 0x28);
  if ((((*(char *)(iVar2 + 0x18) == '\x01') && (iVar2 = *(char *)(iVar2 + 0x10) + iVar2, iVar2 != 0)
       ) && (uVar1 = *(uint *)(iVar2 + 0xc), uVar1 != 0)) &&
     (*(int *)((-(uint)(uVar1 != 0) & uVar1) + 0x34) != 0)) {
    uVar3 = FUN_008f7f80(iVar4);
    FUN_008f9010(uVar3);
  }
  return;
}

