// src/unsorted/unit_0095F040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0095F040..0095F040, 1 functions

#include "types.h"

// 0095F040  FUN_0095f040  size=134  [run]
char * __thiscall FUN_0095f040(int *param_1,char param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    puVar6 = &DAT_016416fa;
  }
  else {
    puVar6 = *(undefined1 **)(iVar3 + 0x14);
  }
  pcVar5 = puVar6 + param_3;
  if (iVar3 == 0) {
    puVar6 = &DAT_016416fa;
    pcVar4 = "";
  }
  else {
    puVar6 = *(undefined1 **)(iVar3 + 0x14);
    pcVar4 = *(char **)(iVar3 + 0x14);
  }
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  pcVar4 = pcVar4 + ((int)puVar6 - (int)pcVar1);
  if (pcVar5 < pcVar4) {
    do {
      if (*pcVar5 == param_2) break;
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != pcVar4);
    if (pcVar5 < pcVar4) {
      if (iVar3 != 0) {
        return pcVar5 + -*(int *)(iVar3 + 0x14);
      }
      return pcVar5 + -0x16416fa;
    }
  }
  return (char *)0xffffffff;
}

