// src/managers/triggermanager/actions/TrgActPlAnim.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C87830..00C87830, 1 functions

#include "mgrr.h"

// 00C87830  Trigger::Act::PL_ANIM  size=703  [class]
bool __fastcall Trigger::Act::PL_ANIM(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  bool bVar12;
  undefined4 uStack_34;
  int local_2c;
  uint local_28;
  char acStack_24 [36];
  
  uVar1 = *(uint *)(param_1 + 4);
  local_2c = param_1;
  local_28 = uVar1;
  if (uVar1 == 0) {
    FUN_00dd5650(&DAT_016ac878);
    return false;
  }
  if (uVar1 == 0xfffffff8) {
    FUN_00dd5650(&DAT_016ac850);
    return false;
  }
  pcVar11 = (char *)(uVar1 + 0x18);
  if (pcVar11 == (char *)0x0) {
    FUN_00dd5650(&DAT_016ac824);
    return false;
  }
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar4 != 0) {
    iVar5 = FUN_00a7c8a0();
    iVar5 = *(int *)(iVar5 + 0x4b0);
    iVar6 = FUN_009fde60(uStack_34);
    if (iVar5 == iVar6) {
      piVar7 = (int *)FUN_00dd3500(0x10,&DAT_01b7bd48);
      piVar3 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        piVar7[1] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        *piVar7 = (int)cTriggerTask_PlAnim::vftable;
        piVar3 = piVar7;
      }
      (**(code **)(*piVar3 + 4))();
      FUN_00c83e90(iVar4);
      piVar3[1] = *(int *)(*(int *)(uVar1 + 0xc) + 4);
      cVar2 = FUN_00c84760(piVar3);
      if (cVar2 == '\0') {
        (**(code **)*piVar3)(1);
      }
      if (cVar2 != '\0') {
        if (*(int *)(local_2c + 4) == 0x51) {
          local_2c = 0;
          local_28 = local_28 & 0xffffff00;
          cVar2 = *pcVar11;
          pcVar8 = pcVar11;
          while (cVar2 != '_') {
            pcVar8 = pcVar8 + 1;
            cVar2 = *pcVar8;
          }
          _strncpy_s((char *)&local_2c,5,pcVar8 + 1,4);
          acStack_24[0] = '\0';
          acStack_24[1] = '\0';
          acStack_24[2] = '\0';
          acStack_24[3] = '\0';
          acStack_24[4] = '\0';
          acStack_24[5] = '\0';
          acStack_24[6] = '\0';
          acStack_24[7] = '\0';
          acStack_24[8] = '\0';
          acStack_24[9] = '\0';
          acStack_24[10] = '\0';
          acStack_24[0xb] = '\0';
          acStack_24[0xc] = '\0';
          acStack_24[0xd] = '\0';
          acStack_24[0xe] = '\0';
          acStack_24[0xf] = '\0';
          acStack_24[0x10] = '\0';
          acStack_24[0x11] = '\0';
          acStack_24[0x12] = '\0';
          acStack_24[0x13] = '\0';
          acStack_24[0x14] = '\0';
          acStack_24[0x15] = '\0';
          acStack_24[0x16] = '\0';
          acStack_24[0x17] = '\0';
          acStack_24[0x18] = '\0';
          acStack_24[0x19] = '\0';
          acStack_24[0x1a] = '\0';
          acStack_24[0x1b] = '\0';
          acStack_24[0x1c] = '\0';
          acStack_24[0x1d] = '\0';
          acStack_24[0x1e] = '\0';
          acStack_24[0x1f] = '\0';
          _sprintf_s(acStack_24,0x20,"%s.mot",pcVar11);
          uVar9 = FUN_00de4500(acStack_24);
          acStack_24[0] = '\0';
          acStack_24[1] = '\0';
          acStack_24[2] = '\0';
          acStack_24[3] = '\0';
          acStack_24[4] = '\0';
          acStack_24[5] = '\0';
          acStack_24[6] = '\0';
          acStack_24[7] = '\0';
          acStack_24[8] = '\0';
          acStack_24[9] = '\0';
          acStack_24[10] = '\0';
          acStack_24[0xb] = '\0';
          acStack_24[0xc] = '\0';
          acStack_24[0xd] = '\0';
          acStack_24[0xe] = '\0';
          acStack_24[0xf] = '\0';
          acStack_24[0x10] = '\0';
          acStack_24[0x11] = '\0';
          acStack_24[0x12] = '\0';
          acStack_24[0x13] = '\0';
          acStack_24[0x14] = '\0';
          acStack_24[0x15] = '\0';
          acStack_24[0x16] = '\0';
          acStack_24[0x17] = '\0';
          acStack_24[0x18] = '\0';
          acStack_24[0x19] = '\0';
          acStack_24[0x1a] = '\0';
          acStack_24[0x1b] = '\0';
          acStack_24[0x1c] = '\0';
          acStack_24[0x1d] = '\0';
          acStack_24[0x1e] = '\0';
          acStack_24[0x1f] = '\0';
          _sprintf_s(acStack_24,0x20,"%s_0_seq.bxm",pcVar11);
          uVar10 = FUN_00de4500(acStack_24);
          FUN_00bc2600(uVar9,uVar10,0,0,0x3f800000,0,0xbf800000,0x3f800000,&local_2c);
          FUN_00a96070(0,0x8000000,1);
          return true;
        }
        if (*(int *)(local_2c + 4) != 0x4d) {
          return cVar2 != '\0';
        }
        iVar4 = FUN_00aa4940(pcVar11,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        bVar12 = iVar4 != -1;
      }
      else {
        FUN_00dd5650(&DAT_016ac798);
        bVar12 = false;
      }
      if (bVar12 != false) {
        return bVar12;
      }
    }
    FUN_00dd5650(&DAT_016ac750,uStack_34,pcVar11);
    return false;
  }
  FUN_00dd5650(&DAT_016ac7e0,0);
  return false;
}

