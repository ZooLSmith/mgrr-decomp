// src/managers/cgimanager/cGIManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F956A0..00F956A0, 1 functions

#include "mgrr.h"

// 00F956A0  cGIManager::setData  size=289  [class]
void __thiscall cGIManager::setData(int param_1,uint param_2,float *param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *local_c;
  uint local_8;
  uint local_4;
  
  iVar1 = (int)param_3;
  *(int *)(param_1 + 0x23000) = *(int *)(param_1 + 0x23000) + 1;
  pfVar4 = (float *)((int)param_3 + 0x10);
  local_8 = 0;
  local_4 = 0;
  puVar5 = (uint *)(param_1 + 0x21000);
  pfVar2 = (float *)(param_1 + 0xc);
  param_3 = pfVar4;
  local_c = pfVar4;
  do {
    if ((*puVar5 & 0x80000000) == 0) {
      *puVar5 = *puVar5 | 0x80000000;
      puVar5[1] = param_2;
      if (1 < *(uint *)(iVar1 + 4)) {
        pfVar4 = param_3;
      }
      pfVar2[-3] = *pfVar4;
      pfVar2[-2] = pfVar4[1];
      pfVar2[-1] = pfVar4[2];
      *pfVar2 = pfVar4[3];
      pfVar6 = pfVar4 + 4;
      pfVar7 = pfVar2;
      for (iVar3 = 0x1b; pfVar7 = pfVar7 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
      }
      pfVar2[0x1c] = pfVar4[0x1f];
      pfVar2[0x1d] = pfVar4[0x20];
      if (param_4 != (float *)0x0) {
        pfVar2[-2] = pfVar2[-2] + *param_4;
        pfVar2[-1] = param_4[1] + pfVar2[-1];
        *pfVar2 = param_4[2] + *pfVar2;
      }
      if (*(uint *)(iVar1 + 4) < 2) {
        *puVar5 = *puVar5 & 0xbfffffff;
        pfVar2[0x1c] = 0.0;
        pfVar2[0x1d] = 0.0;
      }
      else {
        *puVar5 = *puVar5 | 0x40000000;
      }
      param_3 = param_3 + 0x21;
      pfVar4 = local_c + 0x1f;
      local_8 = local_8 + 1;
      local_c = pfVar4;
      if (*(uint *)(iVar1 + 0xc) <= local_8) {
        return;
      }
    }
    local_4 = local_4 + 1;
    puVar5 = puVar5 + 2;
    pfVar2 = pfVar2 + 0x21;
    if (0x3ff < local_4) {
      FUN_00dd5650(&DAT_016eb200);
      return;
    }
  } while( true );
}

