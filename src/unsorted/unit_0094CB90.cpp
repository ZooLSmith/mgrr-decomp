// src/unsorted/unit_0094CB90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094CB90..0094CB90, 1 functions

#include "types.h"

// 0094CB90  FUN_0094cb90  size=405  [run]
void __thiscall FUN_0094cb90(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcStack_44;
  int iStack_40;
  char *pcStack_3c;
  int iStack_38;
  undefined *puStack_34;
  int iStack_30;
  undefined *puStack_2c;
  
  iStack_30 = *param_3;
  puStack_2c = &DAT_0164eec0;
  puStack_34 = (undefined *)0x94cbb2;
  iStack_38 = (**(code **)(*param_2 + 0x18))();
  if (iStack_38 != -1) {
    pcStack_3c = (char *)0x94cbc2;
    puStack_34 = (undefined *)param_1;
    (**(code **)(*param_2 + 0x68))();
  }
  iStack_38 = *param_3;
  puStack_34 = &DAT_0164fcc8;
  pcStack_3c = (char *)0x94cbd3;
  iStack_40 = (**(code **)(*param_2 + 0x18))();
  if (iStack_40 != -1) {
    pcStack_3c = (char *)(param_1 + 4);
    pcStack_44 = (char *)0x94cbe6;
    (**(code **)(*param_2 + 0x68))();
  }
  iStack_40 = *param_3;
  pcStack_3c = "Alias";
  pcStack_44 = (char *)0x94cbf7;
  iVar1 = (**(code **)(*param_2 + 0x18))();
  if (iVar1 != -1) {
    pcStack_44 = (char *)(param_1 + 8);
    (**(code **)(*param_2 + 0x8c))(iVar1);
  }
  iStack_30 = 0;
  puStack_2c = (undefined *)0x0;
  pcStack_44 = "ObjId";
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x74))(iVar1,&iStack_38,0xc);
    uVar2 = FUN_009fde60(&iStack_38);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"DispName");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x74))(iVar1,param_1 + 0x18,0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"GetPoint");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"MaxPossession");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,param_1 + 0x10);
  }
  uVar4 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x38);
  do {
    uVar4 = uVar4 + 1;
    pcStack_44 = (char *)0x0;
    iStack_40 = 0;
    pcStack_3c = (char *)0x0;
    _sprintf_s((char *)&pcStack_44,0xc,"Param_%d",uVar4);
    iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&pcStack_44);
    if (iVar1 == -1) {
      *puVar3 = 0xffffffff;
    }
    else {
      (**(code **)(*param_2 + 0x58))(iVar1,puVar3);
    }
    puVar3 = puVar3 + 1;
  } while (uVar4 < 4);
  return;
}

