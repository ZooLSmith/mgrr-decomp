// src/sound/SoundSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E5D5B0..00E5DA30, 6 functions

#include "mgrr.h"

// 00E5D5B0  SoundSystem::BankManager::addBankName  size=269  [class]
void SoundSystem::BankManager::addBankName(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e4a6f0(local_24,0x20,param_2);
  iVar1 = FUN_00e5c860(local_24);
  if (iVar1 != 0) {
    FUN_00dd5650(&DAT_016cebac,param_2);
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  iVar1 = FUN_00e5c8d0(param_1);
  if (iVar1 != 0) {
    FUN_00dd5650(&DAT_016cebac,param_2);
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  puVar2 = (undefined4 *)FUN_00dd2bc0();
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(char *)(puVar2 + 2) = '\0';
    _strcpy_s((char *)(puVar2 + 2),0x20,local_24);
    *puVar2 = param_1;
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  FUN_00dd5650(&DAT_016ceb74,param_2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E5D6C0  SoundSystem::BankManager::addBankName_2  size=270  [class]
void SoundSystem::BankManager::addBankName_2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e4a6f0(local_24,0x20,param_2);
  iVar1 = FUN_00e5c860(local_24);
  if (iVar1 != 0) {
    FUN_00dd5650(&DAT_016cebac,param_2);
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  iVar1 = FUN_00e5c910(param_1);
  if (iVar1 != 0) {
    FUN_00dd5650(&DAT_016cebac,param_2);
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  puVar2 = (undefined4 *)FUN_00dd2bc0();
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(char *)(puVar2 + 2) = '\0';
    _strcpy_s((char *)(puVar2 + 2),0x20,local_24);
    puVar2[1] = param_1;
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  FUN_00dd5650(&DAT_016ceb74,param_2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E5D880  FUN_00e5d880  size=134  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e5d880(void)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  fVar1 = _DAT_01dd9520;
  if (_DAT_01dd9520 != _DAT_01dd9524) {
    FUN_00df3cd0("Volume_Master",_DAT_01dd9520,0);
    _DAT_01dd9524 = fVar1;
  }
  FUN_00e5c9a0();
  puVar2 = (undefined4 *)FUN_00e9fe70();
  local_20 = *puVar2;
  local_1c = puVar2[1];
  local_18 = puVar2[2];
  local_14 = puVar2[3];
  DAT_01dd9528 = FUN_00932860(&local_20);
  return;
}

// 00E5D910  FUN_00e5d910  size=66  [callgraph]
void FUN_00e5d910(void)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00e5c9a0();
  puVar1 = (undefined4 *)FUN_00e9fe70();
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  DAT_01dd9528 = FUN_00932860(&local_20);
  return;
}

// 00E5DA00  FUN_00e5da00  size=36  [callgraph]
void FUN_00e5da00(void)

{
  FUN_00defc30(0);
  FUN_00e5d880();
  FUN_00e5be80();
  FUN_00e5d2e0();
  FUN_00e5d1c0();
  return;
}

// 00E5DA30  FUN_00e5da30  size=102  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e5da30(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00932cb0();
  uVar1 = FUN_00df48f0(uVar1);
  uVar2 = FUN_00932cb0();
  SoundSystem::BankManager::addBankName_2(uVar1,uVar2);
  FUN_00defba0(&DAT_01dd9520,"Volume_Master");
  _DAT_01dd9524 = _DAT_01dd9520;
  FUN_00e49e80();
  FUN_00defba0(&DAT_01dd9508,"Volume_BGM");
  _DAT_01dd950c = _DAT_01dd9508;
  FUN_009cb6e0();
  return;
}

