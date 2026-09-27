// src/managers/triggermanager/actions/TrgActSeObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C97E90..00C97E90, 1 functions

#include "mgrr.h"

// 00C97E90  Trigger::Act::SE_OBJ  size=355  [class]
bool __fastcall Trigger::Act::SE_OBJ(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [64];
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016b16dc);
    return false;
  }
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_48 = 0;
  local_44 = 0;
  iVar5 = *(int *)(iVar2 + 0x28);
  pcVar3 = (char *)(iVar2 + 0x2c);
  if (iVar5 == -1) {
    FUN_00c77fc0(pcVar3,&local_54);
  }
  else {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 == (char *)(iVar2 + 0x2d)) {
      FUN_00a814d0(&local_54,iVar5);
    }
    else {
      FUN_00c959c0(iVar2 + 0x2c,iVar5,&local_54);
    }
  }
  if (local_48 == 0) {
    if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
      FUN_00dd48d0(local_50,0);
    }
    return false;
  }
  iVar5 = 0;
  bVar6 = true;
  if (0 < local_48) {
    do {
      if ((*(int *)(local_50 + iVar5 * 4) == 0) || (iVar4 = FUN_00a7c800(), iVar4 == 0)) {
        if (*(int *)(iVar2 + 0x28) == -1) {
          FUN_00dd5650(&DAT_016abfb8,iVar2 + 0x2c,&DAT_016b1568);
        }
        bVar6 = false;
      }
      else {
        iVar4 = FUN_00e5e0c0(iVar2 + 8,iVar4,*(undefined4 *)(iVar2 + 0x4c),0);
        bVar6 = (bVar6 & iVar4 != 0) != 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_48);
  }
  if ((local_50 != (undefined1 *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return bVar6;
}

