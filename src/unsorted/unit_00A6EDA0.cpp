// src/unsorted/unit_00A6EDA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6EDA0..00A6F120, 3 functions

#include "types.h"

// 00A6EDA0  FUN_00a6eda0  size=120  [run]
undefined4 __thiscall FUN_00a6eda0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00A6EE80  FUN_00a6ee80  size=641  [run]
void __thiscall FUN_00a6ee80(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack_68;
  char *pcStack_64;
  int iStack_60;
  char *pcStack_5c;
  int iStack_58;
  char *pcStack_54;
  int iStack_50;
  char *pcStack_4c;
  int iStack_48;
  char *pcStack_44;
  int iStack_40;
  undefined *puStack_3c;
  int iStack_38;
  char *pcStack_34;
  
  iStack_38 = *param_3;
  pcStack_34 = "eWorkNo";
  puStack_3c = (undefined *)0xa6eea2;
  iStack_40 = (**(code **)(*param_2 + 0x18))();
  if (iStack_40 != -1) {
    pcStack_44 = (char *)0xa6eeb2;
    puStack_3c = (undefined *)param_1;
    (**(code **)(*param_2 + 0x6c))();
  }
  iStack_40 = *param_3;
  puStack_3c = &DAT_0164fcc4;
  pcStack_44 = (char *)0xa6eec3;
  iStack_48 = (**(code **)(*param_2 + 0x18))();
  if (iStack_48 != -1) {
    pcStack_44 = (char *)(param_1 + 2);
    pcStack_4c = (char *)0xa6eed6;
    (**(code **)(*param_2 + 0x6c))();
  }
  iStack_48 = *param_3;
  pcStack_44 = "eFlag";
  pcStack_4c = (char *)0xa6eee7;
  iStack_50 = (**(code **)(*param_2 + 0x18))();
  if (iStack_50 != -1) {
    pcStack_4c = (char *)(param_1 + 4);
    pcStack_54 = (char *)0xa6eefa;
    (**(code **)(*param_2 + 0x58))();
  }
  iStack_50 = *param_3;
  pcStack_4c = "eValue";
  pcStack_54 = (char *)0xa6ef0b;
  iStack_58 = (**(code **)(*param_2 + 0x18))();
  if (iStack_58 != -1) {
    pcStack_54 = (char *)(param_1 + 8);
    pcStack_5c = (char *)0xa6ef1e;
    (**(code **)(*param_2 + 0x58))();
  }
  iStack_58 = *param_3;
  pcStack_54 = "eAtName";
  pcStack_5c = (char *)0xa6ef2f;
  pcStack_64 = (char *)(**(code **)(*param_2 + 0x18))();
  if (pcStack_64 != (char *)0xffffffff) {
    pcStack_5c = (char *)0x10;
    iStack_60 = param_1 + 0x34;
    iStack_68 = 0xa6ef44;
    (**(code **)(*param_2 + 0x74))();
  }
  iStack_60 = *param_3;
  pcStack_5c = "eAtMask";
  pcStack_64 = (char *)0xa6ef55;
  iStack_68 = (**(code **)(*param_2 + 0x18))();
  if (iStack_68 != -1) {
    pcStack_64 = (char *)(param_1 + 0x10);
    (**(code **)(*param_2 + 0x58))();
  }
  iStack_68 = *param_3;
  pcStack_64 = "eAtAttr";
  iVar1 = (**(code **)(*param_2 + 0x18))();
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"eUserDataType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"eUseParent");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar1,param_1 + 0x14);
  }
  iVar1 = 0;
  do {
    if (iVar1 == 0) {
      iVar2 = (**(code **)(*param_2 + 0x18))(*param_3,"eUserDataParam");
      if (iVar2 != -1) {
        iVar3 = param_1 + 0x24;
LAB_00a6f046:
        (**(code **)(*param_2 + 0x58))(iVar2,iVar3);
      }
    }
    else {
      iStack_68 = 0;
      pcStack_64 = (char *)0x0;
      iStack_60 = 0;
      pcStack_5c = (char *)0x0;
      iStack_58 = 0;
      pcStack_54 = (char *)0x0;
      iStack_50 = 0;
      pcStack_4c = (char *)0x0;
      _sprintf_s((char *)&iStack_68,0x20,"eUserDataParam_%d",iVar1);
      iVar2 = (**(code **)(*param_2 + 0x18))(*param_3,&iStack_68);
      if (iVar2 != -1) {
        iVar3 = param_1 + 0x24 + iVar1 * 4;
        goto LAB_00a6f046;
      }
    }
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      if (*(int *)(param_1 + 0x14) == 0) {
        uVar4 = 0;
        param_1 = param_1 + 0x18;
        do {
          iStack_68 = 0;
          pcStack_64 = (char *)0x0;
          iStack_60 = 0;
          pcStack_5c = (char *)0x0;
          iStack_58 = 0;
          pcStack_54 = (char *)0x0;
          iStack_50 = 0;
          pcStack_4c = (char *)0x0;
          _sprintf_s((char *)&iStack_68,0x20,"eBaseRoom_%d",uVar4);
          iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&iStack_68);
          if (iVar1 != -1) {
            (**(code **)(*param_2 + 0x58))(iVar1,param_1);
          }
          uVar4 = uVar4 + 1;
          param_1 = param_1 + 4;
        } while (uVar4 < 2);
        return;
      }
      iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"eAtParent");
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0x74))(iVar1,param_1 + 0x48,0x10);
      }
      return;
    }
  } while( true );
}

// 00A6F120  FUN_00a6f120  size=235  [run]
void __fastcall FUN_00a6f120(int param_1)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x220) != 0) {
    iVar1 = FUN_00ea9ec0(local_20);
    if (iVar1 != 0) {
      iVar1 = FUN_00ea9f00(&local_40);
      if (iVar1 != 0) {
        iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                          (&local_30,0,0,0,local_20,&local_40,3,"esp103");
        if (iVar1 != 0) {
          FUN_00ea9e60(&local_30);
          local_40 = local_30;
          local_3c = local_2c;
          local_38 = local_28;
          local_34 = local_24;
        }
        FUN_00f96100(local_20,0x3f800000,0xffff0000,0,0);
        FUN_00f96100(&local_40,0x3f800000,0xff0000ff,0,0);
        FUN_00f95f40(local_20,&local_40,0xffffffff,0);
      }
    }
  }
  return;
}

