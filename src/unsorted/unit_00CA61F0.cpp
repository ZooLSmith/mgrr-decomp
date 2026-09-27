// src/unsorted/unit_00CA61F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CA61F0..00CA6270, 2 functions

#include "mgrr.h"

// 00CA61F0  FUN_00ca61f0  size=105  [run]
undefined4 __thiscall FUN_00ca61f0(int param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((param_2 < 0xc) && (*(char *)(param_1 + 0x68c0 + param_2 * 0x44) != '\0')) &&
     (param_1 + 0x68c0 + param_2 * 0x44 != 0)) {
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = param_3[2];
    local_14 = 0x3f800000;
    cVar1 = FUN_00ca30d0(&local_20);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

// 00CA6270  FUN_00ca6270  size=1134  [run]
void __thiscall FUN_00ca6270(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  int local_30;
  int iStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined4 uStack_1f;
  undefined4 uStack_1b;
  undefined4 uStack_17;
  undefined4 uStack_13;
  undefined4 uStack_f;
  undefined2 uStack_b;
  undefined1 uStack_9;
  int *piStack_4;
  
  local_30 = param_1;
  uStack_34 = (**(code **)(*param_2 + 0x18))(param_3,"MemberList");
  piStack_4 = (int *)(param_1 + 0x6880);
  param_1 = param_1 + 0x68;
  uVar10 = 0;
  do {
    iVar1 = (**(code **)(*param_2 + 0x14))(uStack_34,uVar10);
    local_30 = iVar1;
    if (iVar1 != -1) {
      uStack_27 = 0;
      uStack_23 = 0;
      uStack_1f = 0;
      uStack_1b = 0;
      uStack_17 = 0;
      uStack_13 = 0;
      uStack_f = 0;
      uStack_b = 0;
      uStack_9 = 0;
      uStack_28 = 0;
      iVar2 = (**(code **)(*param_2 + 0x9c))(iVar1,&DAT_0164d4cc);
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xa4))(iVar2,&local_30,0x20);
      }
      uVar3 = FUN_00e03ea0(&local_30);
      *(undefined4 *)(param_1 + 0x408) = uVar3;
      uVar3 = (**(code **)(*param_2 + 0x18))(iVar1,"Setting");
      iVar2 = (**(code **)(*param_2 + 0x9c))(uVar3,"GenerateType");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xd8))(iVar2,param_1 + 0x5f8);
      }
      iVar2 = (**(code **)(*param_2 + 0x9c))(uVar3,"AddingType");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xd8))(iVar2,param_1 + 0x5fc);
      }
      iVar2 = (**(code **)(*param_2 + 0x9c))(uVar3,"AddingParam0");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xd8))(iVar2,param_1 + 0x600);
      }
      iVar2 = (**(code **)(*param_2 + 0x9c))(uVar3,"AddingParam1");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xd4))(iVar2,param_1 + 0x604);
      }
      iVar2 = (**(code **)(*param_2 + 0x9c))(uVar3,"Difficulty");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar2,param_1 + 0x608);
      }
      iVar2 = (**(code **)(*param_2 + 0x9c))(uVar3,"ReSetCount");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xd8))(iVar2,param_1 + 0x610);
      }
      iVar2 = (**(code **)(*param_2 + 0x9c))(uVar3,&DAT_016514a4);
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar2,param_1 + 0x614);
      }
      iVar2 = (**(code **)(*param_2 + 0x9c))(uVar3,"effective");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xd8))(iVar2,param_1 + 0x618);
      }
      iVar2 = (**(code **)(*param_2 + 0x9c))(uVar3,"subEffective");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0x100))(iVar2,param_1 + 0x61c,3);
      }
      *piStack_4 = -1;
      iStack_2c = FUN_00c18770();
      if ((*(uint *)(param_1 + 0x608) & 1 << ((byte)iStack_2c & 0x1f)) != 0) {
        iVar1 = (**(code **)(*param_2 + 0x10))(iVar1);
        iVar1 = iVar1 + -1;
        iStack_40 = iVar1;
        if (0 < iVar1) {
          iVar2 = -1;
          iStack_3c = -1;
          iStack_44 = -1;
          iStack_48 = -1;
          iVar9 = 0;
          if (0 < iVar1) {
            do {
              iVar4 = (**(code **)(*param_2 + 0x14))(local_30,iVar9);
              uVar10 = 0xffffffff;
              iVar5 = (**(code **)(*param_2 + 0x9c))(iVar4,&DAT_016b1fc0);
              if (iVar5 != -1) {
                (**(code **)(*param_2 + 0xd8))(iVar5,&iStack_4c);
              }
              if ((iStack_4c != -1) &&
                 (((uVar7 = iStack_4c - iStack_2c >> 0x1f,
                   iVar5 = (iStack_4c - iStack_2c ^ uVar7) - uVar7, iVar2 < 0 || (iVar5 < iVar2)) ||
                  ((iVar1 = iStack_40, iVar2 == iVar5 &&
                   (uVar7 = (int)(2U - iStack_4c) >> 0x1f, uVar8 = (int)(2U - iStack_48) >> 0x1f,
                   iVar2 = iStack_44,
                   (int)((2U - iStack_4c ^ uVar7) - uVar7) < (int)((2U - iStack_48 ^ uVar8) - uVar8)
                   )))))) {
                iStack_48 = iStack_4c;
                iStack_44 = iVar5;
                iVar1 = (**(code **)(*param_2 + 0x18))(iVar4,"EnemyList");
                *piStack_4 = iVar1;
                iVar2 = iVar5;
                iVar1 = iStack_40;
                iStack_3c = iVar4;
                if (iVar5 == 0) break;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar1);
          }
          if (*piStack_4 == -1) {
            *piStack_4 = -1;
          }
          if (iStack_3c != -1) {
            uVar3 = (**(code **)(*param_2 + 0x18))(iStack_3c,"Setting");
            uVar6 = (**(code **)(*param_2 + 0x18))(uVar3,"Generator");
            FUN_00ca4b10(param_2,param_3,param_1 + 0x438,uVar6);
            iVar1 = (**(code **)(*param_2 + 0x9c))(uVar3,"Leader");
            if (iVar1 != -1) {
              (**(code **)(*param_2 + 0xd8))(iVar1,param_1);
            }
            iVar1 = (**(code **)(*param_2 + 0x9c))(uVar3,"SetMax");
            if (iVar1 != -1) {
              (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + -0x1c);
            }
          }
          uVar3 = (**(code **)(*param_2 + 0x10))(*piStack_4);
          *(undefined4 *)(param_1 + -4) = uVar3;
        }
      }
    }
    piStack_4 = piStack_4 + 1;
    uVar10 = uVar10 + 1;
    param_1 = param_1 + 0x660;
    if (0xf < uVar10) {
      return;
    }
  } while( true );
}

