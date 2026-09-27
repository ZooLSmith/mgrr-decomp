// src/managers/triggermanager/actions/TrgActCamFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FA10..00C7FA10, 1 functions

#include "mgrr.h"

// 00C7FA10  Trigger::Act::CAM_FLAG  size=241  [class]
undefined4 __fastcall Trigger::Act::CAM_FLAG(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016ab06c);
    return 0;
  }
  pcVar5 = "HANDSHAKE";
  pbVar2 = (byte *)(iVar4 + 8);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00c7fa54:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00c7fa59;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_00c7fa54;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00c7fa59:
  if (iVar3 == 0) {
    if (*(int *)(iVar4 + 0x18) == 0) {
      FUN_00da57a0();
      FUN_00da5790();
      return 1;
    }
    iVar4 = FUN_00da5770();
    if (iVar4 == 0) {
      FUN_00da5780(0,0x3db2b8c2);
      return 1;
    }
  }
  else {
    pcVar5 = "ANIMOFF";
    pbVar2 = (byte *)(iVar4 + 8);
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_00c7fae0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00c7fae5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_00c7fae0;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00c7fae5:
    if (iVar3 == 0) {
      FUN_00da5000(*(int *)(iVar4 + 0x18) == 0);
    }
  }
  return 1;
}

