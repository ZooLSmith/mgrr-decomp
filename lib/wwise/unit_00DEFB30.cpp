// lib/wwise/unit_00DEFB30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DEFB30..00DEFB30, 1 functions

#include "types.h"

// 00DEFB30  AK::SoundEngine::GetIDFromString  size=5  [run]
ulong __cdecl AK::SoundEngine::GetIDFromString(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte abStack_108 [260];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 + (1 - (int)(param_1 + 1)) < (char *)0x104) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  }
  else {
    pcVar3 = (char *)0x103;
  }
  _strncpy_s((char *)abStack_108,0x104,param_1,(rsize_t)pcVar3);
  abStack_108[(int)pcVar3] = 0;
  pcVar3 = param_1 + 1;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  uVar4 = (int)param_1 - (int)pcVar3;
  uVar6 = 0;
  if (uVar4 != 0) {
    do {
      bVar2 = abStack_108[uVar6];
      if (('@' < (char)bVar2) && ((char)bVar2 < '[')) {
        abStack_108[uVar6] = bVar2 + 0x20;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  uVar6 = 0x811c9dc5;
  for (pbVar5 = abStack_108; pbVar5 < abStack_108 + uVar4; pbVar5 = pbVar5 + 1) {
    uVar6 = uVar6 * 0x1000193 ^ (uint)*pbVar5;
  }
  return uVar6;
}

