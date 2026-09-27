// lib/havok/Source/Common/Serialize/Version/hkVersionPatchManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010DDF20..010DDF20, 1 functions

#include "mgrr.h"

// 010DDF20  FUN_010ddf20  size=2533  [__FILE__]
undefined4 FUN_010ddf20(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 *puVar16;
  undefined1 local_314 [512];
  undefined1 local_114 [152];
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  undefined8 *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  (**(code **)(*param_1 + 0x20))(&local_2c);
  local_14 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  if (0 < local_28) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_14,local_28,8);
  }
  local_30 = 0;
  if (0 < local_28) {
    do {
      piVar7 = *(int **)(local_2c + local_30 * 4);
      iVar3 = (**(code **)(*piVar7 + 0xc))();
      if (iVar3 < 0) {
        hkErrStream::hkErrStream(local_314,0x200);
        FUN_01018d00(
                    "Intermediate version found in a release build. The asset probably needs to be re-exported"
                    );
        iVar3 = (**(code **)(*DAT_01f8fc58 + 0xc))
                          (3,0x54d3b666,local_314,
                           "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Version\\hkVersionPatchManager.cpp"
                           ,0x2ec);
        if (iVar3 != 0) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        hkBaseObject::hkBaseObject_38();
      }
      else {
        uVar4 = (**(code **)(*piVar7 + 8))();
        uVar5 = (**(code **)(*piVar7 + 0xc))();
        puVar16 = (undefined4 *)(local_14 + local_10 * 8);
        if (puVar16 != (undefined4 *)0x0) {
          *puVar16 = uVar4;
          puVar16[1] = uVar5;
        }
        local_10 = local_10 + 1;
      }
      local_30 = local_30 + 1;
    } while (local_30 < local_28);
  }
  hkDataWorldDict::hkDataWorldDict_2();
  iVar10 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0xffffffff;
  local_3c = 0;
  local_38 = 0;
  local_34 = -1;
  iVar3 = local_8;
  if (0 < *(int *)(local_8 + 0x10)) {
    do {
      uVar11 = FUN_010dc760(*(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar10 * 4));
      iVar6 = (int)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 == 0) {
        FUN_010107e0(&PTR_vftable_018e9b94);
        FUN_0100fe00();
        FUN_010107e0(&PTR_vftable_018e9b94);
        FUN_0100fe00();
        hkBaseObject::hkBaseObject_200();
        local_10 = 0;
        if (-1 < (int)local_c) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
        }
        if ((int)local_24 < 0) {
          return 1;
        }
        goto LAB_010de1ee;
      }
      if (*(int *)(iVar6 + 8) == -1) {
        uVar11 = FUN_010dc8f0(*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 0xc));
        iVar3 = FUN_01010560(uVar11);
        if (iVar3 <= local_34) {
          FUN_010107e0(&PTR_vftable_018e9b94);
          FUN_0100fe00();
          FUN_010107e0(&PTR_vftable_018e9b94);
          FUN_0100fe00();
          hkBaseObject::hkBaseObject_200();
          local_10 = 0;
          if (-1 < (int)local_c) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
          }
          local_14 = 0;
          local_c = 0x80000000;
          local_28 = 0;
          if ((int)local_24 < 0) {
            return 1;
          }
          (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_2c,local_24 * 4);
          return 1;
        }
        FUN_010104c0(&PTR_vftable_018e9b94,uVar11,iVar10,0);
        iVar3 = local_8;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(iVar3 + 0x10));
  }
  iVar3 = local_8;
  iVar10 = 0;
  param_3[1] = 0;
  local_20 = (undefined8 *)0x0;
  local_1c = 0;
  local_18 = 0x80000000;
  if (0 < local_10) {
    do {
      FUN_010dde10(&local_20,*(undefined4 *)(local_14 + iVar10 * 8),
                   *(undefined4 *)(local_14 + 4 + iVar10 * 8),param_1,iVar3,&local_3c,&local_58);
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_10);
    while (local_1c != 0) {
      uVar11 = *local_20;
      local_1c = local_1c + -1;
      local_44 = local_20[1];
      puVar8 = local_20 + 2;
      if (0 < local_1c * 0x10) {
        iVar3 = (local_1c * 0x10 - 1U >> 3) + 1;
        puVar9 = local_20;
        do {
          *(undefined4 *)puVar9 = *(undefined4 *)puVar8;
          *(undefined4 *)((int)puVar9 + 4) = *(undefined4 *)((int)puVar8 + 4);
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = (int)local_44;
      if (((int)local_44 == -1) ||
         (*(int *)(*(int *)(*(int *)(local_8 + 0xc) + (int)local_44 * 4) + 8) != -1)) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      local_4c._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      uVar2 = local_4c._4_4_;
      local_4c._0_4_ = (undefined4)uVar11;
      uVar5 = (undefined4)local_4c;
      local_4c = uVar11;
      FUN_010104c0(&PTR_vftable_018e9b94,uVar5,uVar2,uVar4,0);
      if (iVar3 < 0) {
        uVar4 = FUN_010dc8d0(uVar5,uVar2);
        iVar3 = FUN_010dc740(uVar5,uVar2);
        if (iVar3 != -1) {
          piVar7 = (int *)(**(code **)(*param_2 + 0xc))(local_114,uVar4);
          if (piVar7 == (int *)0x0) {
            hkErrStream::hkErrStream(local_314,0x200);
            pcVar12 = 
            " is not registered. If this is a Havok class, make sure the class\'s product reflection is enabled near where hkProductFeatures.cxx is included. Otherwise, check your own class registration."
            ;
            FUN_01018d00("Class ");
            FUN_01018d00(uVar4);
            FUN_01018d00(pcVar12);
            uVar5 = 0x338;
            uVar4 = 0x3f79ddb0;
            goto LAB_010de442;
          }
          iVar10 = (**(code **)(*piVar7 + 0xc))();
          if (iVar10 != iVar3) {
            hkErrStream::hkErrStream(local_314,0x200);
            uVar5 = (**(code **)(*piVar7 + 0xc))();
            pcVar15 = "Make sure required patches are registered to update this class.";
            pcVar14 = " is the current version.\n";
            pcVar13 = ", but  ";
            pcVar12 = " version ";
            FUN_01018d00("Source contains ");
            FUN_01018d00(uVar4);
            FUN_01018d00(pcVar12);
            FUN_01018dc0(iVar3);
            FUN_01018d00(pcVar13);
            FUN_01018dc0(uVar5);
            FUN_01018d00(pcVar14);
            FUN_01018d00(pcVar15);
            uVar5 = 0x33f;
            uVar4 = 0x3f79ddb1;
LAB_010de442:
            (**(code **)(*DAT_01f8fc58 + 0xc))
                      (1,uVar4,local_314,
                       "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Serialize\\Version\\hkVersionPatchManager.cpp"
                       ,uVar5);
            hkBaseObject::hkBaseObject_38();
            local_1c = 0;
            if ((local_18 & 0x80000000) == 0) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
            }
            local_20 = (undefined8 *)0x0;
            local_18 = 0x80000000;
            FUN_010107e0(&PTR_vftable_018e9b94);
            FUN_0100fe00();
            FUN_010107e0(&PTR_vftable_018e9b94);
            FUN_0100fe00();
            hkBaseObject::hkBaseObject_200();
            local_10 = 0;
            if ((local_c & 0x80000000) == 0) {
              (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
            }
            if ((local_24 & 0x80000000) == 0) {
LAB_010de1ee:
              local_c = 0x80000000;
              local_14 = 0;
              local_28 = 0;
              (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_2c,local_24 * 4);
            }
            return 1;
          }
        }
      }
      else {
        uVar4 = *(undefined4 *)(*(int *)(local_8 + 0xc) + iVar3 * 4);
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
        }
        *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar4;
        param_3[1] = param_3[1] + 1;
        piVar7 = *(int **)(*(int *)(local_8 + 0xc) + iVar3 * 4);
        iVar3 = piVar7[1];
        if (iVar3 == 0) {
          iVar3 = *piVar7;
        }
        FUN_010dde10(&local_20,iVar3,piVar7[3],param_1,local_8,&local_3c,&local_58);
      }
    }
  }
  local_1c = 0;
  if (-1 < (int)local_18) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 << 4);
  }
  local_30 = param_3[1];
  while (local_30 = local_30 + -1, -1 < local_30) {
    piVar7 = *(int **)(*param_3 + local_30 * 4);
    local_7c = *piVar7;
    iVar3 = local_7c;
    if (piVar7[1] != 0) {
      iVar3 = piVar7[1];
    }
    local_8 = iVar3;
    param_2 = (int *)hkDataWorldDict::vf24(iVar3);
    if (param_2 == (int *)0x0) {
      local_70 = piVar7[2];
      local_68 = 0;
      local_64 = 0;
      local_60 = 0x80000000;
      local_6c = 0;
      local_74 = iVar3;
      param_2 = (int *)hkDataWorldDict::vf0C(&local_74);
      local_64 = 0;
      if (-1 < (int)local_60) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_68,(local_60 & 0x3fffffff) * 0xc);
      }
    }
    iVar3 = piVar7[5];
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar10 = piVar7[4] + iVar3 * 8;
      switch(*(undefined4 *)(piVar7[4] + iVar3 * 8)) {
      case 1:
        hkDataWorldDict::vf4C(&param_2,**(undefined4 **)(iVar10 + 4));
        break;
      case 2:
        puVar16 = *(undefined4 **)(iVar10 + 4);
        uVar4 = FUN_010e1a70(puVar16[1],puVar16[2],puVar16[3]);
        hkDataWorldDict::vf40(&param_2,*puVar16,uVar4,0);
        break;
      case 3:
        hkDataWorldDict::vf48
                  (&param_2,(*(undefined4 **)(iVar10 + 4))[1],**(undefined4 **)(iVar10 + 4));
        break;
      case 7:
        hkDataWorldDict::vf24(**(undefined4 **)(iVar10 + 4));
        break;
      case 8:
        if (**(int **)(iVar10 + 4) == 0) {
          puVar16 = &local_5c;
          local_5c = 0;
        }
        else {
          local_78 = hkDataWorldDict::vf24(**(int **)(iVar10 + 4));
          puVar16 = &local_78;
        }
        hkDataWorldDict::vf3C(&param_2,puVar16);
      }
    }
    if (piVar7[2] == -1) {
      hkDataWorldDict::vf34(&param_2);
    }
    else {
      if (local_8 != local_7c) {
        hkDataWorldDict::vf30(&param_2,local_7c);
      }
      hkDataWorldDict::vf38(&param_2,piVar7[2]);
    }
  }
  local_20 = (undefined8 *)0x0;
  local_1c = 0;
  local_18 = -0x80000000;
  hkDataWorldDict::vf20(&local_20);
  param_3 = (int *)((uint)param_3 & 0xffffff00);
  FUN_01025830(param_3);
  param_3 = (int *)((uint)param_3 & 0xffffff00);
  FUN_01025830(param_3);
  iVar3 = 0;
  if (0 < local_1c) {
    do {
      piVar7 = *(int **)((int)local_20 + iVar3 * 4);
      uVar4 = (**(code **)(*piVar7 + 8))();
      FUN_01025470(uVar4,piVar7);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_1c);
  }
  iVar3 = 0;
  if (0 < local_28) {
    do {
      piVar7 = *(int **)(local_2c + iVar3 * 4);
      uVar4 = (**(code **)(*piVar7 + 8))();
      iVar6 = FUN_01025be0(uVar4,0);
      iVar10 = *piVar7;
      if (iVar6 == 0) {
        (**(code **)(iVar10 + 0xc))();
      }
      else {
        uVar4 = (**(code **)(iVar10 + 8))();
        FUN_01025950(uVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_28);
  }
  uVar4 = FUN_010253c0();
  FUN_01025890((int)&param_3 + 3,uVar4);
  while (param_3._3_1_ != '\0') {
    piVar7 = (int *)FUN_01025400(uVar4);
    iVar3 = *param_1;
    uVar5 = (**(code **)(*piVar7 + 8))(local_114);
    (**(code **)(iVar3 + 0x5c))(uVar5);
    uVar4 = FUN_01025440(uVar4);
    FUN_01025890((int)&param_3 + 3,uVar4);
  }
  FUN_01025870();
  FUN_01025870();
  local_1c = 0;
  if (-1 < (int)local_18) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,local_18 * 4);
  }
  FUN_010107e0(&PTR_vftable_018e9b94);
  FUN_0100fe00();
  FUN_010107e0(&PTR_vftable_018e9b94);
  FUN_0100fe00();
  hkBaseObject::hkBaseObject_200();
  local_10 = 0;
  if (-1 < (int)local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 8);
  }
  local_14 = 0;
  local_c = 0x80000000;
  local_28 = 0;
  if (-1 < (int)local_24) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_2c,local_24 * 4);
  }
  return 0;
}

