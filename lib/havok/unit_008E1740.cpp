// lib/havok/unit_008E1740.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E1740..008E1970, 7 functions

#include "mgrr.h"
#include "hkpCharacterProxyCinfo.h"
#include "hkpCharacterProxyListener.h"

// 008E1740  hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2  size=139  [run]
void __fastcall hkpCharacterProxyCinfo::hkpCharacterProxyCinfo_2(undefined4 *param_1)

{
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[0xe] = 0x3dcccccd;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = vftable;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 4;
  param_1[0x17] = 0x3d4ccccd;
  param_1[0x1f] = 10;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x18] = 0x41200000;
  param_1[0x1a] = 0x41200000;
  param_1[0x1b] = 0x7f7fffee;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x3fc90fdb;
  param_1[0x1e] = 0x3f800000;
  return;
}

// 008E17F0  hkpCharacterProxyListener::vf04  size=3  [run]
void hkpCharacterProxyListener::vf04(void)

{
  return;
}

// 008E1800  hkpCharacterProxyListener::vf08  size=3  [run]
void hkpCharacterProxyListener::vf08(void)

{
  return;
}

// 008E1810  hkpCharacterProxyListener::vf0C  size=3  [run]
void hkpCharacterProxyListener::vf0C(void)

{
  return;
}

// 008E1820  hkpCharacterProxyListener::vf10  size=3  [run]
void hkpCharacterProxyListener::vf10(void)

{
  return;
}

// 008E1830  hkpCharacterProxyListener::vf14  size=3  [run]
void hkpCharacterProxyListener::vf14(void)

{
  return;
}

// 008E1970  hkpCharacterProxyListener::hkpCharacterProxyListener  size=41  [run]
void __thiscall
hkpCharacterProxyListener::hkpCharacterProxyListener(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = vftable;
  *param_1 = CharacterProxyListener::vftable;
  param_1[2] = CharacterProxyListener::vftable;
  param_1[3] = param_2;
  return;
}

