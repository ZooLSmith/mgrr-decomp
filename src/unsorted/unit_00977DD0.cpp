// src/unsorted/unit_00977DD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00977DD0..00981D10, 151 functions

#include "mgrr.h"

// 00977DD0  FUN_00977dd0  size=917  [run]
undefined4 __thiscall
FUN_00977dd0(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  iVar4 = param_1[0xb];
  iVar6 = 0;
  iVar5 = 0;
  iVar2 = 0;
  local_78 = 0;
  local_7c = 0;
  local_74 = 0;
  if (0 < (int)param_1[0x13]) {
    do {
      *(undefined4 *)(param_1[0x10] + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0x13]);
  }
  iVar2 = 0;
  if (0 < (int)param_1[7]) {
    local_7c = 0;
    iVar3 = local_7c;
    do {
      local_7c = iVar3;
      iVar3 = param_1[6] + local_7c;
      if (*(int *)(iVar3 + 0x3c) == param_3) {
        if ((int)param_1[0x14] <= iVar5) {
          FUN_00dd5650(&DAT_01651e80);
          return 0;
        }
        *(int *)(param_1[0x11] + iVar5 * 4) = iVar2;
        iVar6 = iVar6 + *(int *)(iVar3 + 0x5c);
        iVar1 = *(int *)(iVar3 + 0x34);
        local_74 = local_74 + *(int *)(iVar3 + 0x60);
        if ((iVar1 < 0) || ((int)param_1[0x13] <= iVar1)) goto LAB_00977fc0;
        *(int *)(param_1[0x10] + iVar1 * 4) = iVar5;
        iVar5 = iVar5 + 1;
      }
      iVar3 = local_7c + 0x80;
      iVar2 = iVar2 + 1;
      local_7c = iVar6;
    } while (iVar2 < (int)param_1[7]);
  }
  iVar2 = 0;
  if (0 < iVar4 * 2) {
    iVar6 = 0;
    do {
      if (*(int *)(iVar6 + 0xc + param_1[10]) == param_3) {
        if ((int)param_1[0x15] <= local_78) {
LAB_00977fc0:
          FUN_00dd5650(&DAT_01651e58);
          return 0;
        }
        *(int *)(param_1[0x12] + local_78 * 4) = iVar2;
        local_78 = local_78 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar2 < iVar4 * 2);
  }
  if ((param_1[2] != 0) && (iVar4 = 0, 0 < (int)param_1[1])) {
    do {
      *(undefined4 *)(param_1[2] + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[1]);
  }
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_8 = 0;
  local_4 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_58 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_54 = 0;
  local_30 = 0;
  local_c = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_00976810(param_4,param_1[0x10],param_1[2],param_5,param_6);
  iVar4 = FUN_00977830(iVar5,param_5,param_6);
  if (iVar4 == 0) {
    pcVar8 = "CreateInfo.allocMesh!!";
  }
  else {
    iVar4 = FUN_00977940(local_74 + local_7c,param_5);
    if (iVar4 != 0) {
      iVar4 = 0;
      if (0 < iVar5) {
        iVar2 = 0;
        do {
          iVar6 = *(int *)(param_1[0x11] + iVar4 * 4) * 0x80 + param_1[6];
          *(int *)(iVar6 + 0x44) = iVar4;
          if (*(int *)(iVar6 + 0x40) == 0) {
            iVar6 = FUN_00a07000(local_50 + iVar2,*(undefined4 *)(iVar6 + 0x30));
            if (iVar6 == 0) {
              pcVar8 = "CreateInfo.moveVertexData!!";
              goto LAB_00977f8a;
            }
          }
          else {
            iVar6 = FUN_009756e0(iVar4,*(undefined4 *)(iVar6 + 100),*(undefined4 *)(iVar6 + 0x68));
            if (iVar6 == 0) {
              pcVar8 = "CreateInfo.allocNewVertexData!!";
              goto LAB_00977f8a;
            }
          }
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 0x18;
        } while (iVar4 < iVar5);
      }
      iVar4 = 0;
      if (0 < local_78) {
        do {
          piVar7 = (int *)(*(int *)(param_1[0x12] + iVar4 * 4) * 0x20 + param_1[10]);
          if (*piVar7 == 0) {
            pcVar8 = "Cls NULL!!";
            goto LAB_00977f8a;
          }
          iVar2 = param_1[6];
          piVar7[5] = local_2c;
          iVar2 = FUN_0097e150(&local_6c,piVar7[2],*(undefined4 *)(piVar7[4] * 0x80 + iVar2 + 0x40))
          ;
          if (iVar2 == 0) {
            pcVar8 = "CreateInfo.createNewCluster!!";
            goto LAB_00977f8a;
          }
          iVar4 = iVar4 + 1;
          piVar7[6] = local_2c - piVar7[5];
        } while (iVar4 < local_78);
      }
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          iVar2 = FUN_00976640(&local_6c,*(int *)(param_1[0x11] + iVar4 * 4) * 0x80 + param_1[6]);
          if (iVar2 == 0) {
            pcVar8 = "createNewMeshCutFaceData!!";
            goto LAB_00977f8a;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          iVar2 = FUN_00976c70(*(int *)(param_1[0x11] + iVar4 * 4) * 0x80 + param_1[6],param_1[0x16]
                               ,iVar4);
          if (iVar2 == 0) {
            pcVar8 = "createNewMeshInfo!!";
            goto LAB_00977f8a;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      FUN_00976d40(*param_1,param_1[3]);
      FUN_00975bb0(param_2);
      FUN_00975570();
      return 1;
    }
    pcVar8 = "CreateInfo.allocClusterInfo!!";
  }
LAB_00977f8a:
  FUN_00dd5650(pcVar8);
  FUN_00975570();
  return 0;
}

// 00978180  FUN_00978180  size=441  [run]
undefined4 __thiscall
FUN_00978180(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = 0;
  iVar2 = 0;
  local_50 = 0;
  local_48 = 0;
  bVar1 = false;
  if (0 < *(int *)(param_1 + 100)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar2 * 4) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 100));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    local_4c = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x20) + local_4c;
      if (*(int *)(iVar5 + 0x28) == param_3) {
        *(int *)(*(int *)(param_1 + 0x44) + iVar4 * 4) = iVar2;
        if (*(int *)(iVar5 + 0x30) != 0) {
          bVar1 = true;
        }
        *(int *)(*(int *)(param_1 + 0x40) + *(int *)(iVar5 + 0x20) * 4) = iVar4;
        local_48 = local_48 + *(int *)(iVar5 + 0x44);
        iVar3 = *(int *)(iVar5 + 0x3c);
        if (*(int *)(iVar5 + 0x2c) == 0) {
          if (iVar3 != *(int *)(iVar5 + 0x4c)) {
            FUN_00dd5650(&DAT_01651ebc);
          }
          iVar3 = *(int *)(iVar5 + 0x4c);
        }
        local_50 = local_50 + iVar3;
        iVar4 = iVar4 + 1;
      }
      local_4c = local_4c + 0x60;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x24));
    if (((0 < iVar4) && (0 < local_50)) && (!bVar1)) {
      local_40 = 0;
      local_4 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_2c = 0;
      local_c = 0;
      local_8 = 0;
      local_14 = 0;
      local_10 = 0;
      iVar2 = FUN_00977a60(iVar4,local_50,local_48,param_5,param_6,param_7);
      if (iVar2 == 0) {
LAB_009782a5:
        FUN_00975c90();
        return 0;
      }
      iVar2 = 0;
      if (0 < iVar4) {
        do {
          iVar5 = *(int *)(*(int *)(param_1 + 0x44) + iVar2 * 4) * 0x60 + *(int *)(param_1 + 0x20);
          if (*(int *)(iVar5 + 0x2c) == 0) {
            iVar5 = FUN_00976de0(iVar2,*(undefined4 *)(iVar5 + 0x20));
          }
          else {
            iVar5 = FUN_00977780(&local_40,iVar5,param_4,iVar2);
          }
          if (iVar5 == 0) goto LAB_009782a5;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar4);
      }
      FUN_00977120(param_5,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 100));
      FUN_00975d40(param_2);
      FUN_00975c90();
    }
  }
  return 1;
}

// 00978340  FUN_00978340  size=419  [run]
undefined4 __thiscall
FUN_00978340(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      uVar2 = cCutDataManager::entryData();
      *(undefined4 *)(*(int *)(param_1 + 0x38) + iVar5 * 4) = uVar2;
      if (*(int *)(*(int *)(param_1 + 0x38) + iVar5 * 4) == -1) {
        uVar2 = 1;
LAB_00978491:
        FUN_00dd5650(&DAT_01651ee0,iVar5,*(undefined4 *)(param_1 + 0x3c),uVar2);
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x3c)) {
          do {
            iVar3 = FUN_00d8bc90(*(undefined4 *)(*(int *)(param_1 + 0x38) + iVar5 * 4));
            if (iVar3 != 0) {
              FUN_00a06770();
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x3c));
        }
        FUN_00a07130();
        return 0;
      }
      iVar3 = FUN_00d8bc90(*(undefined4 *)(*(int *)(param_1 + 0x38) + iVar5 * 4));
      if (iVar3 == 0) {
        uVar2 = 2;
        goto LAB_00978491;
      }
      iVar3 = iVar3 + 0x100;
      iVar4 = FUN_00977dd0(iVar3,iVar5,param_2,param_4,param_5);
      if (iVar4 == 0) {
        uVar2 = 3;
        goto LAB_00978491;
      }
      iVar4 = FUN_00978180(iVar3,iVar5,param_3,param_2,param_4,param_5);
      if (iVar4 == 0) {
        uVar2 = 4;
        goto LAB_00978491;
      }
      iVar3 = FUN_00976700(iVar3,param_2,param_4);
      if (iVar3 == 0) {
        uVar2 = 5;
        goto LAB_00978491;
      }
      FUN_00a06920(param_3);
      FUN_00a06900(param_2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x3c));
  }
  if ((0 < *(int *)(param_1 + 4)) && (iVar5 = 0, 0 < *(int *)(param_1 + 4))) {
    do {
      if ((1 < *(int *)(*(int *)(param_1 + 0xc) + iVar5 * 4)) &&
         (iVar3 = 0, 0 < *(int *)(param_1 + 0x3c))) {
        do {
          iVar4 = FUN_00d8bc90(*(undefined4 *)(*(int *)(param_1 + 0x38) + iVar3 * 4));
          if ((((iVar4 != 0) && (iVar1 = *(int *)(iVar4 + 0x1bc), iVar1 != 0)) && (-1 < iVar5)) &&
             ((iVar5 < *(int *)(iVar4 + 0x1c0) && (*(int *)(iVar1 + iVar5 * 4) == 0)))) {
            *(undefined4 *)(iVar1 + iVar5 * 4) = 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0x3c));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 4));
  }
  return 1;
}

// 009784F0  FUN_009784f0  size=259  [run]
void __thiscall FUN_009784f0(int param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short local_14 [10];
  
  *param_3 = 0;
  iVar3 = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  if (0 < param_4) {
    do {
      bVar1 = false;
      uVar5 = 0;
      iVar4 = 0;
      uVar6 = 1;
      iVar2 = *(int *)(param_1 + 0x1c) + iVar3;
      do {
        if (*(char *)(iVar2 + 4) == '\0') {
          uVar5 = uVar5 | uVar6;
        }
        else if (*(char *)(iVar2 + 4) == '\x01') {
          bVar1 = true;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 8;
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      } while (iVar4 < 3);
      if (uVar5 == 0) {
        if (bVar1) {
          local_14[0] = local_14[0] + 1;
        }
        else {
          local_14[1] = local_14[1] + 1;
        }
      }
      else {
        if (uVar5 == 5) {
          bVar1 = !bVar1;
        }
        bVar1 = !bVar1;
        if (uVar5 == 3) {
LAB_00978595:
          local_14[bVar1] = local_14[bVar1] + 2;
          local_14[!bVar1] = local_14[!bVar1] + 1;
        }
        else if (uVar5 == 5) {
          local_14[bVar1] = local_14[bVar1] + 1;
          local_14[!bVar1] = local_14[!bVar1] + 2;
        }
        else if (uVar5 == 6) goto LAB_00978595;
        *param_3 = *param_3 + 1;
      }
      iVar3 = iVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  *(int *)(param_2 + 4) = local_14[0] * 3;
  *(int *)(param_2 + 0xc) = local_14[1] * 3;
  return;
}

// 00978600  FUN_00978600  size=52  [run]
uint FUN_00978600(float param_1)

{
  undefined4 local_8;
  
  local_8 = (uint)(longlong)ROUND(param_1 * 1023.0);
  return local_8 & 0x7ff;
}

// 00978640  FUN_00978640  size=52  [run]
uint FUN_00978640(float param_1)

{
  undefined4 local_8;
  
  local_8 = (uint)(longlong)ROUND(param_1 * 511.0);
  return local_8 & 0x3ff;
}

// 00978700  FUN_00978700  size=153  [run]
void FUN_00978700(uint *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = (uint)(longlong)ROUND(param_2[1] * 1023.0);
  uVar2 = local_8 & 0x7ff;
  local_8 = (uint)(longlong)ROUND(param_2[2] * 511.0);
  uVar1 = local_8 << 0xb;
  local_8 = (uint)(longlong)ROUND(*param_2 * 1023.0);
  *param_1 = (uVar2 | uVar1) << 0xb | local_8 & 0x7ff;
  return;
}

// 00978860  FUN_00978860  size=153  [run]
void FUN_00978860(uint *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = (uint)(longlong)ROUND(param_2[1] * 1023.0);
  uVar2 = local_8 & 0x7ff;
  local_8 = (uint)(longlong)ROUND(param_2[2] * 511.0);
  uVar1 = local_8 << 0xb;
  local_8 = (uint)(longlong)ROUND(*param_2 * 1023.0);
  *param_1 = (uVar2 | uVar1) << 0xb | local_8 & 0x7ff;
  return;
}

// 00978C70  FUN_00978c70  size=344  [run]
undefined4 __thiscall FUN_00978c70(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_8;
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  uVar1 = *param_1;
  uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 8) + param_3 * 6);
  if (uVar7 < uVar1) {
    FUN_00dd5650(&DAT_01651a04);
  }
  uVar7 = uVar7 - uVar1;
  if (0xfffe < (int)uVar7) {
    FUN_00dd5650(&DAT_01651a04);
  }
  uVar7 = (uint)*(byte *)(*(int *)(param_1 + 4) + (uVar7 & 0xffff));
  local_8 = 0;
  iVar6 = param_2 + uVar7 * 0x14;
  iVar4 = param_3 * 0x18;
  param_3 = param_3 * 6;
  do {
    uVar1 = *param_1;
    uVar2 = *(ushort *)(*(int *)(param_1 + 8) + param_3);
    if ((uint)uVar2 < (uint)uVar1) {
      FUN_00dd5650(&DAT_01651a04);
    }
    uVar5 = (uint)uVar2 - (uint)uVar1;
    if (0xfffe < (int)uVar5) {
      FUN_00dd5650(&DAT_01651a04);
    }
    iVar3 = *(int *)(param_1 + 6);
    if (3 < *(int *)(iVar6 + 0x10)) {
      return 0;
    }
    *(uint *)(iVar6 + *(int *)(iVar6 + 0x10) * 4) = uVar5 & 0xffff;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (*(char *)(iVar3 + 4 + iVar4) == '\0') {
      if (3 < *(int *)(iVar6 + 0x10)) {
        return 0;
      }
      *(uint *)(iVar6 + *(int *)(iVar6 + 0x10) * 4) = *(uint *)(iVar3 + iVar4) | 0x80000000;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      uVar7 = uVar7 - 1 & 1;
      iVar6 = param_2 + uVar7 * 0x14;
      if (3 < *(int *)(iVar6 + 0x10)) {
        return 0;
      }
      *(uint *)(iVar6 + *(int *)(iVar6 + 0x10) * 4) = *(uint *)(iVar3 + iVar4) | 0x80000000;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    }
    param_3 = param_3 + 2;
    local_8 = local_8 + 1;
    iVar4 = iVar4 + 8;
    if (2 < local_8) {
      return 1;
    }
  } while( true );
}

// 00978DD0  FUN_00978dd0  size=170  [run]
undefined4 FUN_00978dd0(int param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3[4];
  if (iVar1 == 3) {
    iVar3 = 3;
  }
  else if (iVar1 == 4) {
    iVar3 = 6;
  }
  else {
    iVar3 = 0;
  }
  iVar2 = *param_2;
  if (param_4 < iVar3 + iVar2) {
    return 0;
  }
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *param_3;
    *(undefined4 *)(param_1 + 4 + *param_2 * 4) = param_3[1];
    *(undefined4 *)(param_1 + 8 + *param_2 * 4) = param_3[2];
    *param_2 = *param_2 + 3;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *param_3;
    *(undefined4 *)(param_1 + 4 + *param_2 * 4) = param_3[1];
    *(undefined4 *)(param_1 + 8 + *param_2 * 4) = param_3[2];
    *(undefined4 *)(param_1 + 0xc + *param_2 * 4) = *param_3;
    *(undefined4 *)(param_1 + 0x10 + *param_2 * 4) = param_3[2];
    *(undefined4 *)(param_1 + 0x14 + *param_2 * 4) = param_3[3];
    *param_2 = *param_2 + 6;
    return 1;
  }
  return 1;
}

// 00978E80  FUN_00978e80  size=114  [run]
undefined4 __fastcall FUN_00978e80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [20];
  undefined1 local_14 [20];
  
  if (0 < *(int *)(param_1 + 4)) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00978c70(local_28,iVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00978dd0(*(undefined4 *)(param_1 + 0x14),param_1 + 0x24,local_28,
                           *(undefined4 *)(param_1 + 0x1c));
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_00978dd0(*(undefined4 *)(param_1 + 0x18),param_1 + 0x28,local_14,
                           *(undefined4 *)(param_1 + 0x20));
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return 1;
}

// 00978F00  FUN_00978f00  size=172  [run]
void __thiscall FUN_00978f00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  iVar3 = param_2;
  *(undefined4 *)(param_2 + 0x14) = 0;
  local_8 = 0;
  param_2 = param_3 * 4;
  do {
    iVar1 = *(int *)(param_2 + *param_1);
    iVar2 = param_1[4];
    iVar4 = 0;
    iVar6 = -1;
    if (0 < iVar2) {
      piVar7 = (int *)param_1[2];
      do {
        iVar6 = iVar4;
        if (*piVar7 == iVar1) break;
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 1;
        iVar6 = -1;
      } while (iVar4 < iVar2);
    }
    iVar4 = *(int *)(iVar3 + 0x14);
    iVar5 = 0;
    if (0 < iVar4) {
      piVar7 = (int *)(iVar3 + 8);
      do {
        if (*piVar7 == iVar1) {
          iVar6 = iVar2 + iVar5;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar5 < iVar4);
    }
    if (iVar6 == -1) {
      *(int *)(iVar3 + 8 + iVar4 * 4) = iVar1;
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      iVar6 = iVar2 + iVar4;
    }
    param_2 = param_2 + 4;
    *(short *)(iVar3 + local_8 * 2) = (short)iVar6;
    local_8 = local_8 + 1;
    if (2 < local_8) {
      return;
    }
  } while( true );
}

// 00979010  FUN_00979010  size=223  [run]
void __thiscall FUN_00979010(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  local_4 = 0;
  if (0 < *(int *)(param_4 + 0x70)) {
    piVar3 = (int *)(param_4 + 4);
    do {
      iVar1 = piVar3[-1];
      iVar2 = 0;
      if (iVar1 < 0x31) {
        if (iVar1 == 0x30) {
          iVar2 = param_3 * 0x10 + *(int *)(param_1 + 0x18);
        }
        else if (iVar1 == 1) {
          iVar2 = param_3 * 0x10 + *(int *)(param_1 + 0xc);
        }
        else if (iVar1 == 2) {
          iVar2 = param_3 * 0x10 + *(int *)(param_1 + 0x10);
        }
        else if (iVar1 == 4) {
          iVar2 = *(int *)(param_1 + 0x10) + 4 + param_3 * 0x10;
        }
      }
      else if (iVar1 == 0x100) {
        iVar2 = param_3 * 0x10 + *(int *)(param_1 + 0x14);
      }
      else if (iVar1 == 0x200) {
        iVar2 = *(int *)(param_1 + 0x14) + 4 + param_3 * 0x10;
      }
      else if (iVar1 == 0x10000) {
        iVar2 = *(int *)(param_1 + 0x14) + 8 + param_3 * 0x10;
      }
      FUN_00a1aca0((uint)*(byte *)(*piVar3 + 8 + param_1) * param_2 + piVar3[1],iVar2,piVar3[2]);
      local_4 = local_4 + 1;
      piVar3 = piVar3 + 4;
    } while (local_4 < *(int *)(param_4 + 0x70));
  }
  return;
}

// 009790F0  FUN_009790f0  size=127  [run]
void __thiscall FUN_009790f0(int param_1,short param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short local_8;
  short local_6;
  short local_4;
  
  param_3 = param_3 / 3;
  if (0 < param_3) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x20);
      local_8 = *(short *)(iVar3 + iVar1) + param_2;
      local_6 = *(short *)(iVar3 + 2 + iVar1) + param_2;
      local_4 = *(short *)(iVar3 + 4 + iVar1) + param_2;
      FUN_00a1aca0(iVar2,&local_8,6);
      iVar3 = iVar3 + 6;
      iVar2 = iVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00979170  FUN_00979170  size=139  [run]
void __thiscall FUN_00979170(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x4c)) {
    do {
      uVar2 = *(uint *)(*(int *)(param_1 + 0x1c) + iVar4 * 4);
      uVar3 = uVar2 & 0xffff;
      if ((int)uVar2 < 0) {
        FUN_00979010(iVar4,uVar3,param_3);
      }
      else {
        iVar5 = 0;
        do {
          iVar1 = *(int *)(param_1 + iVar5 * 4);
          if (iVar1 != 0) {
            uVar2 = (uint)*(byte *)(iVar5 + 8 + param_1);
            FUN_00a1aca0(uVar2 * iVar4,iVar1 + uVar2 * uVar3,uVar2);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_2 + 0x4c));
  }
  FUN_009790f0(0,*(undefined4 *)(param_2 + 0x54));
  return;
}

// 00979240  FUN_00979240  size=142  [run]
void __thiscall FUN_00979240(int param_1,short param_2,short param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short local_8;
  short local_6;
  short local_4;
  
  param_4 = param_4 / 3;
  if (0 < param_4) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      local_8 = (*(short *)(iVar3 + iVar1) - param_2) + param_3;
      local_6 = (*(short *)(iVar3 + 2 + iVar1) - param_2) + param_3;
      local_4 = (*(short *)(iVar3 + 4 + iVar1) - param_2) + param_3;
      FUN_00a1aca0(iVar2,&local_8,6);
      iVar3 = iVar3 + 6;
      iVar2 = iVar2 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// 009793A0  FUN_009793a0  size=136  [run]
void __fastcall FUN_009793a0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[8] = 0;
  param_1[0xe] = 0;
  param_1[4] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}

// 00979430  FUN_00979430  size=149  [run]
void __fastcall FUN_00979430(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00978e80();
  if (iVar1 == 0) {
    *param_1 = 0xffffffff;
  }
  *(undefined4 *)(param_1[0x25] + 8) = 0;
  *(undefined4 *)(param_1[0x25] + 0x28) = 0;
  return;
}

// 009794F0  FUN_009794f0  size=88  [run]
void __fastcall FUN_009794f0(undefined4 *param_1)

{
  int iVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[6] = 0xffffffff;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  iVar1 = 2;
  do {
    FUN_00a19be0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00a19be0();
  return;
}

// 00979550  FUN_00979550  size=120  [run]
void __fastcall FUN_00979550(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  do {
    FUN_00a19c00();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00a19c00();
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[6] = 0xffffffff;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  iVar1 = 2;
  do {
    FUN_00a19be0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00a19be0();
  return;
}

// 009795D0  FUN_009795d0  size=87  [run]
void __thiscall FUN_009795d0(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_00979550();
  param_1[2] = *(int *)(param_2 + 4);
  param_1[3] = *(int *)(param_2 + 8);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0xc);
  param_1[5] = *(int *)(param_2 + 0x44);
  *param_1 = *(int *)(param_2 + 0x18);
  param_1[6] = *(int *)(param_2 + 0x1c);
  param_1[1] = *(int *)(param_2 + 0x3c);
  iVar1 = *param_1;
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(iVar1 + 0x34);
  param_1[9] = *(int *)(param_2 + 0x38);
  param_1[7] = *(int *)(iVar1 + 0x38);
  param_1[8] = *(int *)(iVar1 + 0x40);
  return;
}

// 00979630  FUN_00979630  size=42  [run]
undefined4 __thiscall FUN_00979630(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  iVar2 = 0;
  if (0 < piVar3[1]) {
    do {
      piVar1 = (int *)(param_2 + iVar2 * 4);
      *piVar1 = *piVar1 + *(int *)(*piVar3 + iVar2 * 4);
      piVar3 = *(int **)(param_1 + 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < piVar3[1]);
  }
  return 1;
}

// 00979660  FUN_00979660  size=98  [run]
undefined4 __thiscall FUN_00979660(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_2 + iVar3 * 4);
    if (iVar1 != 0) {
      iVar1 = FUN_00a19c30(iVar1,(uint)*(byte *)(iVar3 + 0x10 + param_1) * *(int *)(param_2 + 8),
                           param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  uVar2 = FUN_00a19c30(*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 0x10) * 2,param_3);
  return uVar2;
}

// 009796D0  FUN_009796d0  size=233  [run]
undefined4 __thiscall FUN_009796d0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_3c [24];
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  int local_8;
  int local_4;
  
  if (param_3 == 0) {
    iVar1 = FUN_00975a20(*param_1,param_1[6]);
    if (iVar1 != 0) {
      param_1[10] = 0;
      return 1;
    }
  }
  else {
    local_24 = *param_1;
    local_20 = local_24 + 0x10;
    local_14 = *(undefined4 *)(local_24 + 0x20);
    local_e = *(undefined2 *)(local_24 + 0x2a);
    local_10 = *(undefined2 *)(local_24 + 0x28);
    local_b = *(undefined1 *)(local_24 + 0x2c);
    local_c = *(undefined1 *)(local_24 + 0x2d);
    local_8 = param_1[7];
    local_4 = param_1[8];
    local_1c = *(undefined4 *)(local_24 + 0x30);
    local_a = 1;
    if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = *(undefined4 *)param_1[1];
    }
    iVar1 = FUN_009768f0(local_3c,&local_24);
    if (iVar1 != 0) {
      iVar1 = FUN_00979660(local_3c,&DAT_01b7c060);
      if (iVar1 != 0) {
        param_1[10] = 1;
        return 1;
      }
    }
  }
  return 0;
}

// 009797C0  FUN_009797c0  size=147  [run]
void __fastcall FUN_009797c0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_1c [2];
  byte local_14 [4];
  undefined4 local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    local_14[0] = *(byte *)(param_1 + 0x10);
    local_1c[0] = *(int *)(param_1 + 8);
    local_c = param_1 + 0x34;
    iVar1 = *(int *)(param_1 + 0x1c);
    local_1c[1] = *(undefined4 *)(param_1 + 0xc);
    local_10 = *(undefined4 *)(param_1 + 0x14);
    local_14[1] = *(undefined1 *)(param_1 + 0x11);
    local_8 = param_1 + 0x48;
    local_4 = param_1 + 0x5c;
    iVar2 = 0;
    do {
      if (local_1c[iVar2] != 0) {
        FUN_00a1aca0(0,local_1c[iVar2],(uint)local_14[iVar2] * iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    FUN_00979240(*(undefined2 *)(param_1 + 0x2c),0,*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

// 00979970  FUN_00979970  size=219  [run]
void __fastcall FUN_00979970(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x48));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x50));
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x58));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x60));
  }
  local_4 = 2;
  do {
    FUN_00a19c00();
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  FUN_00a19c00();
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar1 = 2;
  do {
    FUN_00a19be0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00a19be0();
  return;
}

// 00979A50  FUN_00979a50  size=133  [run]
undefined4 __thiscall
FUN_00979a50(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  
  FUN_00979970();
  lVar1 = (ulonglong)(uint)(param_2 * 2) * 4;
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_5);
  *(int *)(param_1 + 0x48) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)param_3 * 2),param_5);
    *(int *)(param_1 + 0x50) = iVar2;
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x6c) = param_3;
      *(int *)(param_1 + 0x68) = param_2;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      return 1;
    }
  }
  return 0;
}

// 00979AE0  FUN_00979ae0  size=109  [run]
undefined4 __thiscall FUN_00979ae0(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  if (0 < (int)param_3) {
    iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)param_3 * 4),param_4);
    *(int *)(param_1 + 0x58) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = 0;
    if (0 < (int)param_3) {
      do {
        if (*(int *)(param_2 + iVar1 * 4) < 1) {
          *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar1 * 4) = 0xffffffff;
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar1 * 4) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_3);
    }
    *(uint *)(param_1 + 0x5c) = param_3;
  }
  return 1;
}

// 00979B50  FUN_00979b50  size=116  [run]
undefined4 __thiscall FUN_00979b50(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_2[1] * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)(uint)param_2[1] * 4),param_3);
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = 0;
    if (0 < param_2[1]) {
      do {
        if (*(int *)(*param_2 + iVar1 * 4) < 1) {
          *(undefined4 *)(*(int *)(param_1 + 0x60) + iVar1 * 4) = 0xffffffff;
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x60) + iVar1 * 4) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2[1]);
    }
    *(int *)(param_1 + 100) = param_2[1];
  }
  return 1;
}

// 00979C00  FUN_00979c00  size=101  [run]
undefined4 __thiscall FUN_00979c00(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_2 + iVar3 * 4);
    if (iVar1 != 0) {
      iVar1 = FUN_00a19c30(iVar1,(uint)*(byte *)(iVar3 + 0x28 + param_1) * *(int *)(param_2 + 8),
                           param_3);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  uVar2 = FUN_00a19c30(*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 0x10) * 2,param_3);
  return uVar2;
}

// 00979C70  FUN_00979c70  size=217  [run]
undefined4 __thiscall FUN_00979c70(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 local_3c [24];
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x4c)) {
    FUN_00dd5650(&DAT_01651f5c);
  }
  if (*(int *)(param_1 + 0x6c) < *(int *)(param_1 + 0x54)) {
    FUN_00dd5650(&DAT_01651f18);
  }
  local_14 = *(undefined4 *)(param_3 + 0x20);
  local_20 = param_1 + 0x10;
  local_e = *(undefined2 *)(param_3 + 0x2a);
  local_10 = *(undefined2 *)(param_3 + 0x28);
  local_b = *(undefined1 *)(param_3 + 0x2c);
  local_c = *(undefined1 *)(param_3 + 0x2d);
  local_8 = *(undefined4 *)(param_1 + 0x4c);
  local_4 = *(undefined4 *)(param_1 + 0x54);
  local_1c = *(undefined4 *)(param_1 + 0x58);
  local_18 = *(undefined4 *)(param_1 + 0x60);
  local_a = 0;
  local_24 = param_1;
  iVar1 = FUN_009768f0(local_3c,&local_24);
  if (iVar1 != 0) {
    iVar1 = FUN_00979c00(local_3c,&DAT_01b7c060);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x70) = 1;
      return 1;
    }
  }
  return 0;
}

// 00979D50  FUN_00979d50  size=246  [run]
void __thiscall FUN_00979d50(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_30 [2];
  byte local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    local_30[0] = *(int *)(param_1 + 0x20);
    local_28[0] = *(byte *)(param_1 + 0x28);
    local_c = param_1 + 0x74;
    local_30[1] = *(undefined4 *)(param_1 + 0x24);
    local_24 = *(undefined4 *)(param_1 + 0x2c);
    local_8 = param_1 + 0x88;
    local_28[1] = *(undefined1 *)(param_1 + 0x29);
    local_20 = *(undefined4 *)(param_1 + 0x34);
    local_1c = *(undefined4 *)(param_1 + 0x38);
    local_18 = *(undefined4 *)(param_1 + 0x3c);
    local_14 = *(int *)(param_1 + 0x48);
    local_10 = *(undefined4 *)(param_1 + 0x50);
    iVar2 = 0;
    local_4 = param_1 + 0x9c;
    if (0 < *(int *)(param_1 + 0x4c)) {
      do {
        uVar1 = *(uint *)(local_14 + iVar2 * 4);
        uVar4 = uVar1 & 0xffff;
        if ((int)uVar1 < 0) {
          FUN_00979010(iVar2,uVar4,param_2);
        }
        else {
          iVar3 = 0;
          do {
            if (local_30[iVar3] != 0) {
              uVar1 = (uint)local_28[iVar3];
              FUN_00a1aca0(uVar1 * iVar2,local_30[iVar3] + uVar1 * uVar4,uVar1);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x4c));
    }
    FUN_009790f0(0,*(undefined4 *)(param_1 + 0x54));
  }
  return;
}

// 00979E80  FUN_00979e80  size=95  [run]
void FUN_00979e80(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_3[1] == 0) {
    iVar1 = 0;
    if (0 < param_3[2]) {
      do {
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(*param_3 + param_2 * 4);
        param_2 = param_2 + 1;
        if (param_3[2] <= param_2) {
          param_2 = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_3[2]);
    }
  }
  else {
    iVar1 = 0;
    if (0 < param_3[2]) {
      do {
        param_2 = param_2 + -1;
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(*param_3 + 4 + param_2 * 4);
        if (param_2 < 0) {
          param_2 = param_3[2] + -1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_3[2]);
      return;
    }
  }
  return;
}

// 00979EF0  FUN_00979ef0  size=88  [run]
void __thiscall FUN_00979ef0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 1;
      *(int *)(iVar2 + *(int *)(param_1 + 0x1c)) = iVar3 + -1;
      *(int *)(*(int *)(param_1 + 0x1c) + 4 + iVar2) = iVar1;
      *(int *)(*(int *)(param_1 + 0x1c) + 8 + iVar2) = iVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc + iVar2) = 0;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar1;
    } while (iVar1 < param_2);
  }
  **(int **)(param_1 + 0x1c) = param_2 + -1;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4 + (param_2 + -1) * 0x10) = 0;
  return;
}

// 00979F50  FUN_00979f50  size=170  [run]
void FUN_00979f50(uint *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = (uint)(longlong)ROUND(param_2[1] * 1023.0);
  uVar2 = local_8 & 0x7ff;
  local_8 = (uint)(longlong)ROUND(param_2[2] * 511.0);
  uVar1 = local_8 << 0xb;
  local_8 = (uint)(longlong)ROUND(*param_2 * 1023.0);
  uVar1 = (uVar2 | uVar1) << 0xb | local_8 & 0x7ff;
  *param_1 = uVar1;
  if (uVar1 == 0) {
    FUN_00dd5650(&DAT_01651f98);
  }
  return;
}

// 0097A000  FUN_0097a000  size=189  [run]
void __thiscall FUN_0097a000(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_4;
  
  local_4 = 0;
  if (0 < *(int *)(param_4 + 0x70)) {
    piVar2 = (int *)(param_4 + 4);
    do {
      iVar1 = piVar2[-1];
      if (iVar1 < 0x31) {
        if (iVar1 == 0x30) {
          iVar1 = param_2 * 0x10 + param_1[1];
          uVar3 = 8;
        }
        else if (iVar1 == 1) {
          iVar1 = param_2 * 0x10 + *param_1;
          uVar3 = 0xc;
        }
        else {
          if (iVar1 != 2) {
            if (iVar1 != 4) goto LAB_0097a0a2;
            iVar1 = param_3 + 4;
            goto LAB_0097a099;
          }
          uVar3 = 4;
          iVar1 = param_3;
        }
LAB_0097a09c:
        FUN_00a1aca0((uint)*(byte *)(*piVar2 + 0x14 + (int)param_1) * param_5 + piVar2[1],iVar1,
                     uVar3);
      }
      else {
        if ((iVar1 == 0x100) || (iVar1 == 0x200)) {
          iVar1 = param_3 + 8;
LAB_0097a099:
          uVar3 = 4;
          goto LAB_0097a09c;
        }
        if (iVar1 == 0x10000) {
          iVar1 = param_3 + 0xc;
          goto LAB_0097a099;
        }
      }
LAB_0097a0a2:
      local_4 = local_4 + 1;
      piVar2 = piVar2 + 4;
    } while (local_4 < *(int *)(param_4 + 0x70));
  }
  return;
}

// 0097A0D0  FUN_0097a0d0  size=207  [run]
void __thiscall FUN_0097a0d0(int param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  short local_8;
  short local_6;
  short local_4;
  
  param_2 = param_2 / 3;
  if (*(int *)(param_1 + 0x18) == 0) {
    if (0 < param_2) {
      iVar2 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0xc);
        local_8 = *(short *)(iVar2 + iVar1) + param_3;
        local_6 = *(short *)(iVar2 + 2 + iVar1) + param_3;
        local_4 = *(short *)(iVar2 + 4 + iVar1) + param_3;
        FUN_00a1aca0(iVar2,&local_8,6);
        iVar2 = iVar2 + 6;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else if (0 < param_2) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      local_4 = *(short *)(iVar2 + iVar1) + param_3;
      local_6 = *(short *)(iVar2 + 2 + iVar1) + param_3;
      local_8 = *(short *)(iVar2 + 4 + iVar1) + param_3;
      FUN_00a1aca0(iVar2,&local_8,6);
      iVar2 = iVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return;
  }
  return;
}

// 0097A220  FUN_0097a220  size=136  [run]
undefined4 __thiscall
FUN_0097a220(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = *(int *)(param_2 + iVar2 * 4), iVar1 == 0 ||
         (iVar1 = FUN_00a19c30(iVar1,(uint)*(byte *)(iVar2 + param_3) * *(int *)(param_2 + 8),
                               param_5), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    if (1 < iVar2) {
      iVar2 = FUN_00a19c30(*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 0x10) * 2,param_5);
      if (iVar2 == 0) {
        return 0;
      }
      *(undefined4 *)((uint)(param_4 != 0) * 0x40 + param_1 + 0xcc) = 1;
      return 1;
    }
  }
  return 0;
}

// 0097A2B0  FUN_0097a2b0  size=188  [run]
undefined4 __thiscall
FUN_0097a2b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_3c [24];
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x8c) == -1) {
    return 1;
  }
  local_24 = param_1 + 0x20;
  local_20 = param_1 + 0x30;
  local_14 = param_3;
  local_e = *(undefined2 *)(*(int *)(param_1 + 0x8c) * 0x40 + 0x3c + *(int *)(param_1 + 0x68));
  local_8 = *(undefined4 *)(param_1 + 0x78);
  local_4 = *(undefined4 *)(param_1 + 0x80);
  local_10 = param_5;
  local_b = *(undefined1 *)(param_2 + 100);
  local_1c = 0;
  local_18 = 0;
  local_a = 0;
  local_c = 1;
  iVar1 = FUN_009768f0(local_3c,&local_24);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0097a220(local_3c,param_2 + 0x5c,param_4,&DAT_01b7c060);
  return uVar2;
}

// 0097A5D0  FUN_0097a5d0  size=98  [run]
void __thiscall FUN_0097a5d0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = 0;
  if (0 < param_2) {
    iVar2 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 8) * iVar3 + *(int *)(param_1 + 4));
      local_1c = puVar1[1];
      local_18 = puVar1[2];
      local_20 = *puVar1;
      local_14 = 0x3f800000;
      D3DXVec4Transform(*(int *)(param_1 + 0x24) + iVar2,&local_20,param_3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < param_2);
  }
  return;
}

// 0097A640  FUN_0097a640  size=251  [run]
void __thiscall FUN_0097a640(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  local_b0 = 0;
  if (0 < param_2) {
    local_a8 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x10);
      puVar3 = (undefined4 *)(*(int *)(param_1 + 8) * local_b0 + *(int *)(param_1 + 4));
      iVar2 = *(int *)(param_1 + 0xc);
      _memset(local_90,0,0x40);
      pbVar4 = (byte *)(iVar1 * local_b0 + iVar2 + 4);
      local_ac = 4;
      do {
        if (*pbVar4 != 0) {
          FUN_00ddc140(local_50,(uint)pbVar4[-4] * 0x40 + param_3,(float)*pbVar4 * 0.003921569);
          FUN_00ddbf80(local_90,local_90,local_50);
        }
        pbVar4 = pbVar4 + 1;
        local_ac = local_ac + -1;
      } while (local_ac != 0);
      local_9c = puVar3[1];
      local_98 = puVar3[2];
      local_a0 = *puVar3;
      local_94 = 0x3f800000;
      D3DXVec4Transform(*(int *)(param_1 + 0x24) + local_a8,&local_a0,local_90);
      local_b0 = local_b0 + 1;
      local_a8 = local_a8 + 0x10;
    } while (local_b0 < param_2);
  }
  return;
}

// 0097A740  FUN_0097a740  size=393  [run]
undefined4 __thiscall FUN_0097a740(int *param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  iVar3 = 0;
  local_8 = 0;
  local_4 = 0;
  if (0 < param_3) {
    iVar4 = 0;
    do {
      fVar6 = (float10)FUN_00d93b50(param_1[9] + iVar4);
      fVar2 = (float10)0;
      if ((float10)1e-05 < ABS(fVar6)) {
        if (fVar6 <= fVar2) {
          local_4 = local_4 + 1;
        }
        else {
          local_8 = local_8 + 1;
        }
        iVar3 = iVar3 + 1;
      }
      *(float *)(*param_1 + iVar5 * 4) = (float)fVar6;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 < param_3);
    if (0 < iVar3) {
      if (local_4 < 1) {
        return 0;
      }
      if (local_8 < 1) {
        return 1;
      }
      iVar3 = 0;
      if (3 < param_3) {
        do {
          if ((float10)*(float *)(*param_1 + iVar3 * 4) <= fVar2) {
            *(undefined1 *)(param_1[6] + iVar3) = 1;
            param_2[2] = param_2[2] + 1;
          }
          else {
            *(undefined1 *)(param_1[6] + iVar3) = 0;
            *param_2 = *param_2 + 1;
          }
          puVar1 = (undefined1 *)(param_1[6] + 1 + iVar3);
          if ((float10)*(float *)(*param_1 + 4 + iVar3 * 4) <= fVar2) {
            *puVar1 = 1;
            param_2[2] = param_2[2] + 1;
          }
          else {
            *puVar1 = 0;
            *param_2 = *param_2 + 1;
          }
          puVar1 = (undefined1 *)(param_1[6] + 2 + iVar3);
          if ((float10)*(float *)(*param_1 + 8 + iVar3 * 4) <= fVar2) {
            *puVar1 = 1;
            param_2[2] = param_2[2] + 1;
          }
          else {
            *puVar1 = 0;
            *param_2 = *param_2 + 1;
          }
          puVar1 = (undefined1 *)(param_1[6] + 3 + iVar3);
          if ((float10)*(float *)(*param_1 + 0xc + iVar3 * 4) <= fVar2) {
            *puVar1 = 1;
            param_2[2] = param_2[2] + 1;
          }
          else {
            *puVar1 = 0;
            *param_2 = *param_2 + 1;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < param_3 + -3);
      }
      for (; iVar3 < param_3; iVar3 = iVar3 + 1) {
        if ((float10)*(float *)(*param_1 + iVar3 * 4) <= fVar2) {
          *(undefined1 *)(param_1[6] + iVar3) = 1;
          param_2[2] = param_2[2] + 1;
        }
        else {
          *(undefined1 *)(param_1[6] + iVar3) = 0;
          *param_2 = *param_2 + 1;
        }
      }
      return 2;
    }
  }
  return 3;
}

// 0097A8D0  FUN_0097a8d0  size=788  [run]
void __thiscall FUN_0097a8d0(int param_1,int *param_2,int param_3,ushort param_4,float *param_5)

{
  ushort *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  ushort uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  ushort local_1e [4];
  undefined2 local_16;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  ushort *local_4;
  
  local_14 = param_3;
  *param_2 = 0;
  local_c = param_1;
  if (0 < param_3) {
    local_10 = 0;
    param_3 = 4;
    do {
      iVar15 = local_c;
      iVar12 = *(int *)(local_c + 0x14);
      local_8 = (uint)*(ushort *)(param_3 + -4 + iVar12);
      uVar13 = (uint)param_4;
      if (local_8 < uVar13) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = local_8 - uVar13;
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = (uint)*(ushort *)(param_3 + -2 + iVar12);
      if (local_8 < uVar13) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = local_8 - uVar13;
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_1e[0] = (ushort)local_8;
      local_8 = (uint)*(ushort *)(param_3 + -2 + iVar12);
      if (local_8 < uVar13) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = local_8 - uVar13;
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_1e[1] = (short)local_8;
      local_8 = (uint)*(ushort *)(param_3 + iVar12);
      if (local_8 < uVar13) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = local_8 - uVar13;
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_1e[2] = (short)local_8;
      local_8 = (uint)*(ushort *)(param_3 + iVar12);
      if (local_8 < uVar13) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = local_8 - uVar13;
      if (0xfffe < (int)local_8) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_1e[3] = (short)local_8;
      uVar11 = (uint)*(ushort *)(param_3 + -4 + iVar12);
      if (uVar11 < uVar13) {
        FUN_00dd5650(&DAT_01651a04);
      }
      iVar12 = uVar11 - uVar13;
      if (0xfffe < iVar12) {
        FUN_00dd5650(&DAT_01651a04);
      }
      local_8 = local_10;
      local_4 = local_1e;
      local_16 = (short)iVar12;
      local_10 = 3;
      do {
        uVar10 = local_4[-1];
        uVar13 = (uint)*local_4;
        piVar14 = (int *)(*(int *)(iVar15 + 0x1c) + local_8);
        cVar9 = *(char *)((uint)uVar10 + *(int *)(iVar15 + 0x18));
        if (cVar9 == *(char *)(uVar13 + *(int *)(iVar15 + 0x18))) {
          *(char *)(piVar14 + 1) = (cVar9 != '\0') + '\x01';
        }
        else {
          *(undefined1 *)(piVar14 + 1) = 0;
          *piVar14 = *param_2;
          puVar1 = (ushort *)(*(int *)(local_c + 0x20) + *param_2 * 8);
          iVar12 = *(int *)(local_c + 0x24);
          fVar3 = *(float *)(iVar12 + uVar13 * 0x10);
          pfVar2 = (float *)(iVar12 + (uint)uVar10 * 0x10);
          fVar4 = *pfVar2;
          fVar5 = *(float *)(iVar12 + 4 + uVar13 * 0x10);
          fVar6 = pfVar2[1];
          fVar7 = *(float *)(iVar12 + 8 + uVar13 * 0x10);
          fVar8 = pfVar2[2];
          puVar1[1] = *local_4;
          *puVar1 = uVar10;
          fVar3 = (fVar7 - fVar8) * param_5[2] +
                  (fVar5 - fVar6) * param_5[1] + *param_5 * (fVar3 - fVar4);
          fVar4 = ABS(fVar3);
          if (fVar4 < 1e-05 == (fVar4 == 1e-05)) {
            *(float *)(puVar1 + 2) =
                 (param_5[4] -
                 (pfVar2[2] * param_5[2] + *param_5 * *pfVar2 + pfVar2[1] * param_5[1])) / fVar3;
          }
          else {
            puVar1[2] = 0;
            puVar1[3] = 0;
          }
          if (0.0 < *(float *)(puVar1 + 2)) {
            if (1.0 < *(float *)(puVar1 + 2)) {
              puVar1[2] = 0;
              puVar1[3] = 0x3f80;
            }
          }
          else {
            puVar1[2] = 0;
            puVar1[3] = 0;
          }
          *param_2 = *param_2 + 1;
        }
        local_8 = local_8 + 8;
        local_4 = local_4 + 2;
        local_10 = local_10 + -1;
        iVar15 = local_c;
      } while (local_10 != 0);
      param_3 = param_3 + 6;
      local_14 = local_14 + -1;
      local_10 = local_8;
    } while (local_14 != 0);
  }
  return;
}

// 0097ABF0  FUN_0097abf0  size=132  [run]
void __thiscall FUN_0097abf0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_0097a5d0(param_2[0x12],param_3);
  }
  else {
    FUN_0097a640(param_2[0x12],param_3);
  }
  iVar1 = FUN_0097a740(param_2 + 0x1b,param_2[0x12],param_4);
  *param_2 = iVar1;
  if (iVar1 == 2) {
    iVar1 = param_2[0x13];
    FUN_0097a8d0(param_2 + 0x16,iVar1 / 3,(short)param_2[9],param_4);
    FUN_009784f0(param_2 + 0x1b,param_2 + 0x17,iVar1 / 3);
  }
  return;
}

// 0097AED0  FUN_0097aed0  size=1243  [run]
void FUN_0097aed0(int param_1,undefined1 *param_2,undefined1 *param_3,float param_4)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  size_t _Size;
  size_t local_84;
  undefined4 local_80;
  int local_7c;
  uint local_78;
  char local_74 [4];
  undefined4 local_70;
  float local_6c [5];
  int local_58;
  int local_4c;
  float local_48 [5];
  uint local_34;
  float local_30 [5];
  uint local_1c;
  float local_18 [6];
  
  bVar6 = param_2[4];
  if (bVar6 != 0) {
    local_48[0]._0_1_ = *param_2;
    local_48[1] = (float)bVar6 * 0.003921569;
  }
  local_34 = (uint)(bVar6 != 0);
  bVar6 = param_2[5];
  if (bVar6 != 0) {
    *(undefined1 *)((int)local_48 + local_34) = param_2[1];
    local_34 = local_34 + 1;
    local_48[local_34] = (float)bVar6 * 0.003921569;
  }
  bVar6 = param_2[6];
  if (bVar6 != 0) {
    *(undefined1 *)((int)local_48 + local_34) = param_2[2];
    local_34 = local_34 + 1;
    local_48[local_34] = (float)bVar6 * 0.003921569;
  }
  bVar6 = param_2[7];
  if (bVar6 != 0) {
    *(undefined1 *)((int)local_48 + local_34) = param_2[3];
    local_34 = local_34 + 1;
    local_48[local_34] = (float)bVar6 * 0.003921569;
  }
  uVar10 = local_34;
  if (local_34 < 4) {
    do {
      *(undefined1 *)((int)local_48 + uVar10) = 0;
      local_48[uVar10 + 1] = 0.0;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 4);
  }
  bVar6 = param_3[4];
  if (bVar6 != 0) {
    local_30[0]._0_1_ = *param_3;
    local_30[1] = (float)bVar6 * 0.003921569;
  }
  uVar10 = (uint)(bVar6 != 0);
  bVar6 = param_3[5];
  if (bVar6 != 0) {
    *(undefined1 *)((int)local_30 + uVar10) = param_3[1];
    uVar10 = uVar10 + 1;
    local_30[uVar10] = (float)bVar6 * 0.003921569;
  }
  bVar6 = param_3[6];
  if (bVar6 != 0) {
    *(undefined1 *)((int)local_30 + uVar10) = param_3[2];
    uVar10 = uVar10 + 1;
    local_30[uVar10] = (float)bVar6 * 0.003921569;
  }
  bVar6 = param_3[7];
  if (bVar6 != 0) {
    *(undefined1 *)((int)local_30 + uVar10) = param_3[3];
    uVar10 = uVar10 + 1;
    local_30[uVar10] = (float)bVar6 * 0.003921569;
  }
  local_78 = local_34;
  if (uVar10 < 4) {
    pfVar14 = local_30 + uVar10 + 1;
    uVar7 = uVar10;
    do {
      *(undefined1 *)((int)local_30 + uVar7) = 0;
      *pfVar14 = 0.0;
      uVar7 = uVar7 + 1;
      pfVar14 = pfVar14 + 1;
      local_78 = local_34;
    } while ((int)uVar7 < 4);
  }
  iVar12 = 0;
  local_1c = uVar10;
  if (local_78 != 0) {
    pfVar14 = local_18;
    pfVar16 = local_6c;
    do {
      pfVar17 = pfVar16;
      if (0.0 < local_48[iVar12 + 1]) {
        *(undefined1 *)pfVar14 = *(undefined1 *)((int)local_48 + iVar12);
        pfVar14 = (float *)((int)pfVar14 + 1);
        pfVar17 = pfVar16 + 1;
        *pfVar16 = (1.0 - param_4) * local_48[iVar12 + 1];
      }
      iVar12 = iVar12 + 1;
      pfVar16 = pfVar17;
    } while (iVar12 < (int)local_78);
  }
  iVar12 = 0;
  _Size = local_78;
  if (uVar10 != 0) {
    do {
      if (0.0 < local_30[iVar12 + 1]) {
        iVar8 = 0;
        fVar4 = local_30[iVar12 + 1] * param_4;
        if (local_78 == 0) {
LAB_0097b0fa:
          uVar2 = *(undefined1 *)((int)local_30 + iVar12);
          local_6c[_Size] = fVar4;
          *(undefined1 *)((int)local_18 + _Size) = uVar2;
          _Size = _Size + 1;
        }
        else {
          do {
            if (*(char *)((int)local_18 + iVar8) == *(char *)((int)local_30 + iVar12)) {
              local_6c[iVar8] = local_6c[iVar8] + fVar4;
              if (iVar8 < (int)local_78) goto LAB_0097b10b;
              goto LAB_0097b0fa;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)local_78);
          uVar2 = *(undefined1 *)((int)local_30 + iVar12);
          local_6c[_Size] = fVar4;
          *(undefined1 *)((int)local_18 + _Size) = uVar2;
          _Size = _Size + 1;
        }
      }
LAB_0097b10b:
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar10);
  }
  iVar12 = 0;
  local_80 = 0.0;
  local_7c = 0;
  local_84 = _Size;
  if (3 < (int)_Size) {
    local_84 = 4;
  }
  local_78 = _Size;
  _memset(local_74,0,_Size);
  local_4c = 0;
  fVar4 = local_80;
  if (0 < (int)local_84) {
    do {
      pcVar13 = (char *)0xffffffff;
      pcVar11 = (char *)0x0;
      fVar1 = -3.4028235e+38;
      if (3 < (int)_Size) {
        do {
          if ((local_74[(int)pcVar11] == '\0') && (fVar1 < local_6c[(int)pcVar11])) {
            fVar1 = local_6c[(int)pcVar11];
            pcVar13 = pcVar11;
          }
          if ((local_74[(int)(pcVar11 + 1)] == '\0') && (fVar1 < local_6c[(int)(pcVar11 + 1)])) {
            pcVar13 = pcVar11 + 1;
            fVar1 = local_6c[(int)(pcVar11 + 1)];
          }
          if ((local_74[(int)(pcVar11 + 2)] == '\0') && (fVar1 < local_6c[(int)(pcVar11 + 2)])) {
            fVar1 = local_6c[(int)(pcVar11 + 2)];
            pcVar13 = local_74 + (int)(pcVar11 + (3 - (int)(local_74 + 1)));
          }
          if ((local_74[(int)(pcVar11 + 3)] == '\0') && (fVar1 < local_6c[(int)(pcVar11 + 3)])) {
            fVar1 = local_6c[(int)(pcVar11 + 3)];
            pcVar13 = local_74 + (int)(pcVar11 + (4 - (int)(local_74 + 1)));
          }
          pcVar11 = pcVar11 + 4;
        } while ((int)pcVar11 < (int)(local_78 - 3));
      }
      for (; (int)pcVar11 < (int)local_78; pcVar11 = pcVar11 + 1) {
        if ((local_74[(int)pcVar11] == '\0') && (fVar1 < local_6c[(int)pcVar11])) {
          fVar1 = local_6c[(int)pcVar11];
          pcVar13 = pcVar11;
        }
      }
      if (pcVar13 != (char *)0xffffffff) {
        if (local_6c[(int)pcVar13] < 0.003921569) break;
        fVar1 = local_6c[(int)pcVar13];
        cVar3 = *(char *)((int)local_18 + (int)pcVar13);
        local_18[iVar12 + 2] = fVar1;
        *(char *)((int)&local_80 + iVar12) = cVar3;
        fVar4 = fVar1 + fVar4;
        iVar12 = iVar12 + 1;
        local_74[(int)pcVar13] = '\x01';
      }
      local_4c = local_4c + 1;
      _Size = local_78;
    } while (local_4c < (int)local_84);
    local_7c = iVar12;
  }
  iVar8 = 0;
  fVar4 = 1.0 / fVar4;
  if (3 < iVar12) {
    iVar15 = iVar8;
    pfVar14 = (float *)(local_74 + iVar12 * 4 + 4);
    pcVar13 = local_74 + iVar12 + 6;
    do {
      cVar3 = *(char *)((int)&local_80 + iVar15);
      iVar8 = iVar15 + 4;
      pfVar14[1] = local_18[iVar15 + 2] * fVar4;
      pcVar13[1] = cVar3;
      cVar3 = *(char *)((int)&local_80 + iVar15 + 1);
      *pfVar14 = local_18[iVar15 + 3] * fVar4;
      *pcVar13 = cVar3;
      cVar3 = *(char *)((int)&local_80 + iVar15 + 2);
      pfVar14[-1] = local_18[iVar8] * fVar4;
      pcVar13[-1] = cVar3;
      cVar3 = *(char *)((int)&local_80 + iVar15 + 3);
      pfVar14[-2] = local_18[iVar15 + 5] * fVar4;
      pcVar13[-2] = cVar3;
      iVar15 = iVar8;
      pfVar14 = pfVar14 + -4;
      pcVar13 = pcVar13 + -4;
    } while (iVar8 < iVar12 + -3);
  }
  iVar15 = iVar12;
  if (iVar8 < iVar12) {
    pfVar14 = local_6c + (iVar12 - iVar8);
    pcVar13 = local_74 + (iVar12 - iVar8) + 7;
    do {
      iVar5 = iVar8 + 2;
      cVar3 = *(char *)((int)&local_80 + iVar8);
      iVar8 = iVar8 + 1;
      *pfVar14 = local_18[iVar5] * fVar4;
      *pcVar13 = cVar3;
      pfVar14 = pfVar14 + -1;
      pcVar13 = pcVar13 + -1;
    } while (iVar8 < iVar12);
  }
  for (; iVar15 < 4; iVar15 = iVar15 + 1) {
    local_6c[iVar15 + 1] = 0.0;
    *(undefined1 *)((int)local_6c + iVar15) = 0;
  }
  iVar15 = 0;
  local_58 = iVar12;
  iVar8 = 0xff;
  if (0 < iVar12) {
    do {
      if (iVar8 < 1) break;
      if (iVar15 == local_7c + -1) {
        *(char *)(iVar15 + 4 + param_1) = (char)iVar8;
      }
      else {
        bVar6 = FUN_00fdbc60();
        *(byte *)(iVar15 + 4 + param_1) = bVar6;
        iVar8 = iVar8 - (uint)bVar6;
      }
      puVar9 = (undefined1 *)(iVar15 + param_1);
      iVar15 = iVar15 + 1;
      *puVar9 = puVar9[(int)local_6c - param_1];
    } while (iVar15 < local_7c);
  }
  if (local_7c < 4) {
    puVar9 = (undefined1 *)(local_7c + 4 + param_1);
    local_7c = 4 - local_7c;
    do {
      puVar9[-4] = 0;
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
      local_7c = local_7c + -1;
    } while (local_7c != 0);
  }
  return;
}

// 0097B3B0  FUN_0097b3b0  size=152  [run]
void FUN_0097b3b0(undefined2 *param_1,undefined4 *param_2,undefined4 *param_3,float param_4)

{
  undefined2 uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined2 uStack_16;
  undefined2 local_14;
  
  uStack_16 = (undefined2)((uint)*param_2 >> 0x10);
  fVar2 = (float10)FUN_00a05170(*param_2);
  fVar3 = (float10)FUN_00a05170(CONCAT22(local_14,uStack_16));
  uStack_16 = (undefined2)((uint)*param_3 >> 0x10);
  fVar4 = (float10)FUN_00a05170(*param_3);
  fVar5 = (float10)FUN_00a05170(CONCAT22(local_14,uStack_16));
  uVar1 = FUN_00a0df00((float)(((float10)(float)fVar4 - (float10)(float)fVar2) * (float10)param_4 +
                              (float10)(float)fVar2));
  *param_1 = uVar1;
  uVar1 = FUN_00a0df00((float)((fVar5 - (float10)(float)fVar3) * (float10)param_4 +
                              (float10)(float)fVar3));
  param_1[1] = uVar1;
  return;
}

// 0097B450  FUN_0097b450  size=364  [run]
void FUN_0097b450(undefined1 *param_1,uint *param_2,uint *param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 local_34;
  
  uVar1 = *param_2;
  fVar3 = (float)(uVar1 & 0xff) * 0.003921569;
  uVar2 = *param_3;
  fVar4 = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
  fVar5 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
  fVar6 = (float)(uVar1 >> 0x18) * 0.003921569;
  local_34 = (undefined1)
             (int)ROUND((((float)(uVar2 & 0xff) * 0.003921569 - fVar3) * param_4 + fVar3) * 255.0);
  *param_1 = local_34;
  local_34 = (undefined1)
             (int)ROUND((((float)(uVar2 >> 8 & 0xff) * 0.003921569 - fVar4) * param_4 + fVar4) *
                        255.0);
  param_1[1] = local_34;
  local_34 = (undefined1)
             (int)ROUND((((float)(uVar2 >> 0x10 & 0xff) * 0.003921569 - fVar5) * param_4 + fVar5) *
                        255.0);
  param_1[2] = local_34;
  local_34 = (undefined1)
             (int)ROUND((((float)(uVar2 >> 0x18) * 0.003921569 - fVar6) * param_4 + fVar6) * 255.0);
  param_1[3] = local_34;
  return;
}

// 0097B5C0  FUN_0097b5c0  size=211  [run]
void __thiscall FUN_0097b5c0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_10 [12];
  int local_4;
  
  iVar3 = (*(int *)(param_1 + 4) - *param_3) / 3;
  if (0x5555 < iVar3) {
    iVar3 = 0x5555;
  }
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (0 < iVar3) {
    local_1c = 0;
    do {
      FUN_00978f00(&local_18,*param_3 + local_1c);
      iVar2 = local_4;
      if (0xfffe < *(int *)(param_1 + 0x10) + local_4) break;
      FID_conflict__memcpy
                ((void *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 4),local_10,local_4 * 4
                );
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14) * 2);
      *puVar1 = local_18;
      *(undefined2 *)(puVar1 + 1) = local_14;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar2;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 3;
      local_1c = local_1c + 3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_1 + 0x14);
  *param_3 = *param_3 + *(int *)(param_1 + 0x14);
  return;
}

// 0097B6A0  FUN_0097b6a0  size=562  [run]
void __thiscall FUN_0097b6a0(int *param_1,float *param_2,float *param_3)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  param_2[4] = 3.4028235e+38;
  param_2[5] = 3.4028235e+38;
  param_2[6] = 3.4028235e+38;
  local_24 = 0;
  param_2[7] = 1.0;
  *param_2 = -3.4028235e+38;
  param_2[1] = -3.4028235e+38;
  param_2[2] = -3.4028235e+38;
  param_2[3] = 1.0;
  if (0 < (int)param_2[0x13]) {
    do {
      uVar2 = *(uint *)(param_1[2] + local_24 * 4);
      uVar5 = uVar2 & 0xffff;
      if ((int)uVar2 < 0) {
        pfVar6 = (float *)(uVar5 * 0x10 + param_1[1]);
        local_20 = *param_3 + *pfVar6;
        local_1c = pfVar6[1] + param_3[1];
        local_18 = pfVar6[2] + param_3[2];
        local_14 = pfVar6[3] + param_3[3];
      }
      else {
        pfVar6 = (float *)(param_1[3] * uVar5 + *param_1);
        local_20 = *param_3 + *pfVar6;
        local_1c = pfVar6[1] + param_3[1];
        local_18 = param_3[2] + pfVar6[2];
        local_14 = param_3[3] + 1.0;
      }
      fVar3 = param_2[4];
      if (local_20 < param_2[4]) {
        fVar3 = local_20;
      }
      param_2[4] = fVar3;
      fVar3 = param_2[5];
      if (local_1c < param_2[5]) {
        fVar3 = local_1c;
      }
      param_2[5] = fVar3;
      fVar3 = param_2[6];
      if (local_18 < param_2[6]) {
        fVar3 = local_18;
      }
      param_2[6] = fVar3;
      fVar3 = local_20;
      if (local_20 < *param_2) {
        fVar3 = *param_2;
      }
      *param_2 = fVar3;
      fVar3 = local_1c;
      if (local_1c < param_2[1]) {
        fVar3 = param_2[1];
      }
      param_2[1] = fVar3;
      fVar3 = local_18;
      if (local_18 < param_2[2]) {
        fVar3 = param_2[2];
      }
      iVar4 = 0;
      param_2[2] = fVar3;
      if (0 < (int)param_2[0x17]) {
        local_28 = 0;
        do {
          if ((-1 < *(int *)(param_1[5] + iVar4 * 4)) &&
             (iVar7 = FUN_00d96bf0(&local_20,param_1[4] + local_28), iVar7 != 0)) {
            piVar1 = (int *)(param_1[5] + iVar4 * 4);
            *piVar1 = *piVar1 + 1;
          }
          local_28 = local_28 + 0x50;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)param_2[0x17]);
      }
      iVar4 = 0;
      if (0 < (int)param_2[0x19]) {
        local_28 = 0;
        do {
          if ((-1 < *(int *)(param_1[7] + iVar4 * 4)) &&
             (iVar7 = FUN_00d8d6c0(&local_20,param_1[6] + local_28,param_1[6] + local_28 + 0x10),
             iVar7 != 0)) {
            piVar1 = (int *)(param_1[7] + iVar4 * 4);
            *piVar1 = *piVar1 + 1;
          }
          local_28 = local_28 + 0x30;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)param_2[0x19]);
      }
      local_24 = local_24 + 1;
    } while (local_24 < (int)param_2[0x13]);
  }
  iVar4 = 0;
  if (0 < (int)param_2[0x17]) {
    do {
      if (0x7fffffff < *(uint *)(param_1[5] + iVar4 * 4)) {
        *(undefined4 *)(param_1[5] + iVar4 * 4) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_2[0x17]);
  }
  iVar4 = 0;
  if (0 < (int)param_2[0x19]) {
    do {
      if (0x7fffffff < *(uint *)(param_1[7] + iVar4 * 4)) {
        *(undefined4 *)(param_1[7] + iVar4 * 4) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_2[0x19]);
  }
  return;
}

// 0097B8E0  FUN_0097b8e0  size=8  [run]
undefined4 FUN_0097b8e0(void)

{
  undefined4 extraout_ECX;
  
  FUN_009793a0();
  return extraout_ECX;
}

// 0097B8F0  FUN_0097b8f0  size=36  [run]
void FUN_0097b8f0(void)

{
  int iVar1;
  
  FUN_00a1ac70();
  iVar1 = 1;
  do {
    FUN_00a1ac70();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

// 0097B920  FUN_0097b920  size=36  [run]
void __thiscall FUN_0097b920(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a073f0(*(undefined4 *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x40) = *param_2;
  }
  return;
}

// 0097B950  FUN_0097b950  size=308  [run]
void __thiscall FUN_0097b950(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint local_40;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = FUN_00a1d5c0();
  iVar4 = 0;
  local_40 = 0;
  iVar3 = FUN_00a04a40(local_38,param_1[8],1);
  if ((iVar3 != 0) && (param_1[local_34 + 1] != 0)) {
    local_40 = (uint)*(byte *)(local_34 + 0xc + (int)param_1);
    iVar4 = param_1[local_34 + 1] + local_30;
  }
  uVar1 = param_1[8];
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)(uint)param_1[0x12] * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)param_1[0x12] * 4),uVar2);
  if (iVar3 != 0) {
    local_14 = param_1[0x11];
    local_10 = param_1[0x18];
    local_c = param_1[0x19];
    local_8 = param_1[0x1a];
    local_4 = param_1[4];
    local_20 = local_40;
    local_28 = iVar3;
    local_24 = iVar4;
    if ((uVar1 & 0x30) == 0) {
      local_1c = 0;
      local_18 = 0;
    }
    else {
      iVar4 = FUN_00a04a40(local_38,param_1[8],0x30);
      local_1c = 0;
      local_18 = 0;
      if ((iVar4 != 0) && (param_1[local_34 + 1] != 0)) {
        local_1c = param_1[local_34 + 1] + local_30;
        local_18 = (uint)*(byte *)(local_34 + 0xc + (int)param_1);
      }
    }
    FUN_0097abf0(param_1,*param_2,param_3);
    FUN_00dd4940(iVar3);
    return;
  }
  FUN_00dd5650(&DAT_01651fb4);
  *param_1 = 0xffffffff;
  return;
}

// 0097BA90  FUN_0097ba90  size=22  [run]
void __thiscall FUN_0097ba90(int param_1,int param_2)

{
  FUN_0097b950(param_1 + 0x50,param_2 + 0xb0);
  return;
}

// 0097BAB0  FUN_0097bab0  size=50  [run]
undefined4 __fastcall FUN_0097bab0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_00a1ac50();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a1ac50();
  FUN_009794f0();
  return param_1;
}

// 0097BAF0  FUN_0097baf0  size=234  [run]
void __thiscall FUN_0097baf0(int *param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  if ((*(int *)(*param_1 + 0x30) != 0) && (iVar3 = 0, 0 < param_1[9])) {
    do {
      if (0 < *(int *)(*(int *)(*param_1 + 0x30) + iVar3 * 4)) {
        *(undefined1 *)(iVar3 + *(int *)(param_2 + 0xc)) = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[9]);
  }
  pfVar2 = (float *)*param_1;
  fVar1 = param_3[4];
  if (pfVar2[4] < fVar1) {
    fVar1 = pfVar2[4];
  }
  param_3[4] = fVar1;
  fVar1 = param_3[5];
  if (pfVar2[5] < fVar1) {
    fVar1 = pfVar2[5];
  }
  param_3[5] = fVar1;
  fVar1 = param_3[6];
  if (pfVar2[6] < fVar1) {
    fVar1 = pfVar2[6];
  }
  param_3[6] = fVar1;
  fVar1 = *pfVar2;
  if (fVar1 < *param_3) {
    fVar1 = *param_3;
  }
  *param_3 = fVar1;
  fVar1 = pfVar2[1];
  if (fVar1 < param_3[1]) {
    fVar1 = param_3[1];
  }
  param_3[1] = fVar1;
  fVar1 = pfVar2[2];
  if (fVar1 < param_3[2]) {
    fVar1 = param_3[2];
  }
  param_3[2] = fVar1;
  FUN_00a19d10(param_3,*(undefined2 *)(*param_1 + 0x2a));
  param_3[0x19] = (float)((int)param_3[0x19] + param_1[7]);
  param_3[0x1a] = (float)((int)param_3[0x1a] + param_1[8]);
  *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + 1;
  return;
}

// 0097BC00  FUN_0097bc00  size=48  [run]
void FUN_0097bc00(void)

{
  int iVar1;
  
  FUN_00a1ac70();
  iVar1 = 1;
  do {
    FUN_00a1ac70();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

// 0097BC30  FUN_0097bc30  size=330  [run]
void __fastcall FUN_0097bc30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_3c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_10 [12];
  int local_4;
  
  iVar2 = *(int *)(param_1 + 8);
  local_50 = 0;
  local_3c = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_48 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x14) + local_48;
      if (*(int *)(param_1 + 8) <= local_50) {
        return;
      }
      iVar3 = *(int *)(iVar5 + 0x48);
      iVar4 = *(int *)(iVar5 + 0x50);
      iVar8 = (iVar2 - local_50) / 3;
      if (0x5555 < iVar8) {
        iVar8 = 0x5555;
      }
      iVar7 = 0;
      local_44 = 0;
      iVar6 = 0;
      if (0 < iVar8) {
        local_4c = local_50;
        do {
          FUN_00978f00(&local_18,local_4c);
          iVar1 = local_4 + iVar6;
          if (0xfffe < iVar1) break;
          FID_conflict__memcpy((void *)(iVar3 + iVar6 * 4),local_10,local_4 * 4);
          local_4c = local_4c + 3;
          *(undefined4 *)(iVar4 + iVar7 * 2) = local_18;
          *(undefined2 *)(iVar4 + 4 + iVar7 * 2) = local_14;
          local_44 = local_44 + 1;
          iVar7 = iVar7 + 3;
          iVar6 = iVar1;
        } while (local_44 < iVar8);
      }
      local_50 = local_50 + iVar7;
      local_48 = local_48 + 0xb0;
      *(int *)(iVar5 + 0x4c) = iVar6;
      *(int *)(iVar5 + 0x54) = iVar7;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      local_3c = local_3c + 1;
    } while (local_3c < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 0097BD80  FUN_0097bd80  size=268  [run]
undefined4 __thiscall FUN_0097bd80(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_3c [24];
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_3;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    param_3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x14) + param_3;
      if (*(int *)(iVar4 + 0x68) < *(int *)(iVar4 + 0x4c)) {
        FUN_00dd5650(&DAT_01651f5c);
      }
      if (*(int *)(iVar4 + 0x6c) < *(int *)(iVar4 + 0x54)) {
        FUN_00dd5650(&DAT_01651f18);
      }
      local_14 = *(undefined4 *)(iVar1 + 0x20);
      local_e = *(undefined2 *)(iVar1 + 0x2a);
      local_b = *(undefined1 *)(iVar1 + 0x2c);
      local_c = *(undefined1 *)(iVar1 + 0x2d);
      local_20 = iVar4 + 0x10;
      local_10 = *(undefined2 *)(iVar1 + 0x28);
      local_4 = *(undefined4 *)(iVar4 + 0x54);
      local_1c = *(undefined4 *)(iVar4 + 0x58);
      local_8 = *(undefined4 *)(iVar4 + 0x4c);
      local_18 = *(undefined4 *)(iVar4 + 0x60);
      local_a = 0;
      local_24 = iVar4;
      iVar2 = FUN_009768f0(local_3c,&local_24);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_00979c00(local_3c,&DAT_01b7c060);
      if (iVar2 == 0) {
        return 0;
      }
      param_3 = param_3 + 0xb0;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(iVar4 + 0x58) = 0;
      *(undefined4 *)(iVar4 + 0x60) = 0;
      *(undefined4 *)(iVar4 + 0x70) = 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  return 1;
}

// 0097BE90  FUN_0097be90  size=74  [run]
undefined4 __thiscall FUN_0097be90(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar3 = 0;
      if (0 < *(int *)(iVar2 + 100 + iVar5)) {
        do {
          piVar1 = (int *)(param_2 + iVar3 * 4);
          *piVar1 = *piVar1 + *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + iVar3 * 4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar2 + 100 + iVar5));
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xb0;
    } while (iVar4 < *(int *)(param_1 + 0x18));
  }
  return 1;
}

// 0097BEE0  FUN_0097bee0  size=177  [run]
void __thiscall FUN_0097bee0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x14) + iVar3;
      if (*(int *)(iVar1 + 0x70) != 0) {
        FUN_00979170(iVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xb0;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}

// 0097BFA0  FUN_0097bfa0  size=96  [run]
void __fastcall FUN_0097bfa0(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = 2;
      do {
        FUN_00a19ce0();
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      FUN_00a19ce0();
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x18));
  }
  return;
}

// 0097C050  FUN_0097c050  size=82  [run]
void __thiscall FUN_0097c050(undefined4 param_1,undefined4 param_2)

{
  FUN_0097b6a0(param_1,param_2);
  return;
}

// 0097C180  FUN_0097c180  size=367  [run]
void __thiscall FUN_0097c180(int *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  
  if ((int)param_2[9] < 1) {
    return;
  }
  *param_2 = 3.4028235e+38;
  param_2[1] = 3.4028235e+38;
  param_2[2] = 3.4028235e+38;
  param_2[3] = 1.0;
  iVar2 = param_1[5];
  param_2[4] = -3.4028235e+38;
  param_2[5] = -3.4028235e+38;
  param_2[6] = -3.4028235e+38;
  param_2[7] = 1.0;
  fVar3 = 0.0;
  iVar4 = 0;
  if (0 < (int)param_2[9]) {
    iVar7 = (int)param_2[8] * 4;
    pfVar5 = (float *)(*(int *)(iVar2 + -4 + ((int)param_2[8] + (int)param_2[9]) * 4) * 0x10 +
                      *param_1);
    do {
      pfVar6 = (float *)(*(int *)(iVar7 + param_1[5]) * 0x10 + *param_1);
      fVar3 = (pfVar6[2] * *pfVar5 - pfVar5[2] * *pfVar6) + fVar3;
      fVar1 = *param_2;
      if (*pfVar6 < fVar1) {
        fVar1 = *pfVar6;
      }
      *param_2 = fVar1;
      fVar1 = param_2[1];
      if (pfVar6[1] < fVar1) {
        fVar1 = pfVar6[1];
      }
      param_2[1] = fVar1;
      fVar1 = param_2[2];
      if (pfVar6[2] < fVar1) {
        fVar1 = pfVar6[2];
      }
      param_2[2] = fVar1;
      fVar1 = *pfVar6;
      if (fVar1 < param_2[4]) {
        fVar1 = param_2[4];
      }
      param_2[4] = fVar1;
      fVar1 = pfVar6[1];
      if (fVar1 < param_2[5]) {
        fVar1 = param_2[5];
      }
      param_2[5] = fVar1;
      fVar1 = pfVar6[2];
      if (fVar1 < param_2[6]) {
        fVar1 = param_2[6];
      }
      iVar4 = iVar4 + 1;
      param_2[6] = fVar1;
      iVar7 = iVar7 + 4;
      pfVar5 = pfVar6;
    } while (iVar4 < (int)param_2[9]);
    if (0.0 < fVar3) {
      *(undefined1 *)(param_2 + 0xc) = 1;
      goto LAB_0097c2a8;
    }
  }
  *(undefined1 *)(param_2 + 0xc) = 0;
LAB_0097c2a8:
  fVar3 = (param_2[4] - *param_2) * 0.5;
  fVar1 = (param_2[6] - param_2[2]) * 0.5;
  if (fVar3 <= fVar1) {
    param_2[0xb] = -NAN;
    param_2[10] = fVar1;
    *(undefined1 *)((int)param_2 + 0x31) = 0;
    return;
  }
  param_2[0xb] = -NAN;
  param_2[10] = fVar3;
  *(undefined1 *)((int)param_2 + 0x31) = 0;
  return;
}

// 0097C2F0  FUN_0097c2f0  size=431  [run]
undefined4 __thiscall FUN_0097c2f0(int *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int local_44;
  int local_3c;
  float local_38;
  float local_34;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_38 = param_2;
  pfVar7 = (float *)(param_1[3] + (int)param_2 * 0x40);
  local_34 = param_3;
  pfVar6 = (float *)(param_1[3] + (int)param_3 * 0x40);
  if ((((pfVar7[0xb] != -NAN) || (pfVar6[0xb] != -NAN)) || (pfVar7[4] < *pfVar6)) ||
     (((pfVar6[4] < *pfVar7 || (pfVar7[6] < pfVar6[2])) || (pfVar6[6] < pfVar7[2])))) {
    return 0;
  }
  if (pfVar7[10] < pfVar6[10]) {
    pfVar7 = (float *)(param_1[3] + (int)param_3 * 0x40);
    pfVar6 = (float *)(param_1[3] + (int)param_2 * 0x40);
    local_38 = param_3;
    local_34 = param_2;
  }
  local_3c = 0;
  local_20 = pfVar7[4] * 2.0;
  local_1c = pfVar7[5] * 2.0;
  local_18 = pfVar7[6] * 2.0;
  local_14 = pfVar7[7] * 2.0;
  if (0 < (int)pfVar6[9]) {
    do {
      iVar1 = *(int *)(param_1[5] + ((int)pfVar6[8] + local_3c) * 4);
      iVar2 = *param_1;
      bVar4 = false;
      local_44 = 0;
      iVar5 = *(int *)(param_1[5] + -4 + ((int)pfVar7[8] + (int)pfVar7[9]) * 4);
      if (0 < (int)pfVar7[9]) {
        do {
          iVar3 = *(int *)(param_1[5] + ((int)pfVar7[8] + local_44) * 4);
          iVar5 = FUN_00d8d890(iVar1 * 0x10 + iVar2,&local_20,iVar5 * 0x10 + *param_1,
                               iVar3 * 0x10 + *param_1);
          if (iVar5 != 0) {
            bVar4 = (bool)(bVar4 ^ 1);
          }
          local_44 = local_44 + 1;
          iVar5 = iVar3;
        } while (local_44 < (int)pfVar7[9]);
      }
      if (!bVar4) {
        return 0;
      }
      local_3c = local_3c + 1;
    } while (local_3c < (int)pfVar6[9]);
  }
  pfVar7[0xb] = local_34;
  pfVar6[0xb] = local_38;
  *(undefined1 *)((int)pfVar6 + 0x31) = 1;
  return 1;
}

// 0097C4A0  FUN_0097c4a0  size=119  [run]
void __fastcall FUN_0097c4a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar2 = 0;
    do {
      FUN_0097c180(*(int *)(param_1 + 0xc) + iVar2);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  if (1 < *(int *)(param_1 + 0x10)) {
    iVar4 = *(int *)(param_1 + 0x10) + -1;
    iVar2 = 0;
    if (0 < iVar4) {
      iVar3 = 0;
      do {
        if ((*(int *)(*(int *)(param_1 + 0xc) + 0x2c + iVar3) == -1) &&
           (iVar5 = iVar2 + 1, iVar5 < *(int *)(param_1 + 0x10))) {
          do {
            iVar1 = FUN_0097c2f0(iVar2,iVar5);
            if (iVar1 != 0) break;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x10));
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x40;
      } while (iVar2 < iVar4);
    }
  }
  return;
}

// 0097C5A0  FUN_0097c5a0  size=818  [run]
int __thiscall FUN_0097c5a0(int param_1,float *param_2,int param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float local_2c;
  int local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_2c = -3.4028235e+38;
  iVar8 = 0;
  fVar1 = -3.4028235e+38;
  local_28 = -1;
  if (3 < param_3) {
    pfVar7 = (float *)(*(int *)(param_1 + 0xc) + 8);
    pfVar6 = (float *)(*(int *)(param_1 + 0xc) + 0x48);
    do {
      if (param_5 == 0) {
        fVar2 = 0.0;
LAB_0097c636:
        fVar4 = ABS((param_2[2] * local_18 + *param_2 * local_20 + param_2[1] * local_1c) -
                    pfVar7[1]);
        iVar5 = iVar8;
        if ((ABS(fVar1 - fVar2) < 0.017) && (local_2c < fVar4)) goto LAB_0097c679;
      }
      else {
        local_20 = pfVar7[-2];
        local_1c = pfVar7[-1];
        local_18 = *pfVar7;
        fVar2 = ABS(param_4[2] * local_18 + *param_4 * local_20 + param_4[1] * local_1c);
        if (fVar1 <= fVar2) goto LAB_0097c636;
LAB_0097c679:
        fVar2 = fVar1;
        fVar4 = local_2c;
        iVar5 = local_28;
      }
      local_28 = iVar5;
      local_2c = fVar4;
      if (param_5 == 0) {
        fVar1 = 0.0;
LAB_0097c6b0:
        fVar4 = ABS((param_2[2] * local_18 + *param_2 * local_20 + param_2[1] * local_1c) -
                    pfVar6[1]);
        if ((0.017 <= ABS(fVar2 - fVar1)) || (fVar4 <= local_2c)) {
          local_28 = iVar8 + 1;
          fVar2 = fVar1;
          local_2c = fVar4;
        }
      }
      else {
        local_20 = pfVar7[0xe];
        local_1c = pfVar6[-1];
        local_18 = *pfVar6;
        fVar1 = ABS(param_4[2] * local_18 + *param_4 * local_20 + param_4[1] * local_1c);
        if (fVar2 <= fVar1) goto LAB_0097c6b0;
      }
      if (param_5 == 0) {
        fVar1 = 0.0;
LAB_0097c72e:
        fVar4 = ABS((param_2[2] * local_18 + *param_2 * local_20 + param_2[1] * local_1c) -
                    pfVar6[0x11]);
        if ((0.017 <= ABS(fVar2 - fVar1)) || (fVar4 <= local_2c)) {
          local_28 = iVar8 + 2;
          fVar2 = fVar1;
          local_2c = fVar4;
        }
      }
      else {
        local_20 = pfVar7[0x1e];
        local_1c = pfVar6[0xf];
        local_18 = pfVar6[0x10];
        fVar1 = ABS(param_4[2] * local_18 + *param_4 * local_20 + param_4[1] * local_1c);
        if (fVar2 <= fVar1) goto LAB_0097c72e;
      }
      fVar1 = fVar2;
      if (param_5 == 0) {
        fVar4 = 0.0;
LAB_0097c7b2:
        fVar3 = ABS((param_2[2] * local_18 + *param_2 * local_20 + param_2[1] * local_1c) -
                    pfVar6[0x21]);
        if ((0.017 <= ABS(fVar2 - fVar4)) || (fVar3 <= local_2c)) {
          local_28 = iVar8 + 3;
          fVar1 = fVar4;
          local_2c = fVar3;
        }
      }
      else {
        local_20 = pfVar7[0x2e];
        local_1c = pfVar6[0x1f];
        local_18 = pfVar6[0x20];
        fVar4 = ABS(param_4[2] * local_18 + *param_4 * local_20 + param_4[1] * local_1c);
        if (fVar2 <= fVar4) goto LAB_0097c7b2;
      }
      iVar8 = iVar8 + 4;
      pfVar7 = pfVar7 + 0x40;
      pfVar6 = pfVar6 + 0x40;
    } while (iVar8 < param_3 + -3);
  }
  if (iVar8 < param_3) {
    pfVar7 = (float *)(iVar8 * 0x40 + *(int *)(param_1 + 0xc));
    do {
      if (param_5 == 0) {
        fVar2 = 0.0;
LAB_0097c86a:
        fVar4 = ABS((param_2[2] * local_18 + *param_2 * local_20 + param_2[1] * local_1c) -
                    pfVar7[3]);
        iVar5 = iVar8;
        if ((ABS(fVar1 - fVar2) < 0.017) && (local_2c < fVar4)) goto LAB_0097c8ad;
      }
      else {
        local_20 = *pfVar7;
        local_1c = pfVar7[1];
        local_18 = pfVar7[2];
        fVar2 = ABS(param_4[2] * local_18 + *param_4 * local_20 + param_4[1] * local_1c);
        if (fVar1 <= fVar2) goto LAB_0097c86a;
LAB_0097c8ad:
        fVar2 = fVar1;
        fVar4 = local_2c;
        iVar5 = local_28;
      }
      local_28 = iVar5;
      local_2c = fVar4;
      iVar8 = iVar8 + 1;
      pfVar7 = pfVar7 + 0x10;
      fVar1 = fVar2;
    } while (iVar8 < param_3);
  }
  return local_28;
}

// 0097C8E0  FUN_0097c8e0  size=491  [run]
void FUN_0097c8e0(char *param_1,float *param_2,int param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char local_40;
  float local_24;
  
  fVar2 = *(float *)(param_3 + 0x1c);
  fVar3 = *(float *)(param_3 + 0x20);
  fVar4 = *(float *)(param_3 + 0x24);
  local_24 = 1.0;
  fVar5 = (*param_2 * fVar3 - param_2[1] * fVar2) * *(float *)(param_3 + 0x30) +
          (param_2[2] * fVar2 - *param_2 * fVar4) * *(float *)(param_3 + 0x2c) +
          (param_2[1] * fVar4 - param_2[2] * fVar3) * *(float *)(param_3 + 0x28);
  if (fVar5 < 0.0 != (fVar5 == 0.0)) {
    local_24 = -1.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  else if (fVar2 < -1.0) {
    fVar2 = -1.0;
  }
  fVar5 = -1.0;
  fVar2 = (fVar2 + 1.0) * 0.5 * 255.0;
  uVar1 = (uint)ROUND(fVar2);
  local_40 = (char)uVar1;
  if (0.5 < fVar2 - (float)(uVar1 & 0xff)) {
    local_40 = local_40 + '\x01';
  }
  *param_1 = local_40;
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  else if (fVar3 < -1.0) {
    fVar3 = fVar5;
  }
  fVar2 = (fVar3 + 1.0) * 0.5 * 255.0;
  uVar1 = (uint)ROUND(fVar2);
  local_40 = (char)uVar1;
  if (0.5 < fVar2 - (float)(uVar1 & 0xff)) {
    local_40 = local_40 + '\x01';
  }
  param_1[1] = local_40;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  else if (fVar4 < -1.0) goto LAB_0097ca66;
  fVar5 = fVar4;
LAB_0097ca66:
  fVar2 = (fVar5 + 1.0) * 0.5 * 255.0;
  uVar1 = (uint)ROUND(fVar2);
  local_40 = (char)uVar1;
  if (0.5 < fVar2 - (float)(uVar1 & 0xff)) {
    local_40 = local_40 + '\x01';
  }
  param_1[2] = local_40;
  if (0.0 <= local_24) {
    param_1[3] = -1;
    return;
  }
  param_1[3] = '\0';
  return;
}

// 0097CAD0  FUN_0097cad0  size=180  [run]
void FUN_0097cad0(undefined2 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined2 uVar8;
  
  fVar1 = (param_2[2] * param_3[2] + param_2[1] * param_3[1] + *param_2 * *param_3) - param_3[3];
  fVar5 = (*param_2 - *param_3 * fVar1) - param_3[4];
  fVar6 = (param_2[1] - param_3[1] * fVar1) - param_3[5];
  fVar7 = (param_2[2] - fVar1 * param_3[2]) - param_3[6];
  fVar1 = param_3[10];
  fVar2 = param_3[0xc];
  fVar3 = param_3[0xb];
  fVar4 = param_3[0xe];
  uVar8 = FUN_00a0df00((param_3[9] * fVar7 + param_3[7] * fVar5 + param_3[8] * fVar6) * param_3[0xd]
                      );
  *param_1 = uVar8;
  uVar8 = FUN_00a0df00((fVar3 * fVar6 + fVar1 * fVar5 + fVar2 * fVar7) * fVar4);
  param_1[1] = uVar8;
  return;
}

// 0097CB90  FUN_0097cb90  size=187  [run]
void __thiscall FUN_0097cb90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00979f50(local_10,param_2);
  iVar1 = 0;
  local_4 = 0xffffffff;
  if (param_1[4] == 0) {
    local_c = 0;
    local_8 = 0;
    if (0 < param_4) {
      do {
        FUN_0097a000(*(undefined4 *)(param_1[2] + iVar1 * 4),local_10,param_3,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
    }
  }
  else {
    FUN_0097c8e0(&local_c,param_2,param_1[4]);
    if (0 < param_4) {
      do {
        FUN_0097cad0(&local_8,*(int *)(param_1[2] + iVar1 * 4) * 0x10 + *param_1,param_1[4]);
        FUN_0097a000(*(undefined4 *)(param_1[2] + iVar1 * 4),local_10,param_3,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
  }
  return;
}

// 0097CC50  FUN_0097cc50  size=180  [run]
void __thiscall FUN_0097cc50(int param_1,int param_2,undefined4 param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_2 + 0x70) == 0) {
    local_20 = 0.0;
    local_1c = 1.0;
    local_18 = 0.0;
    local_14 = 1.0;
  }
  else {
    local_20 = *(float *)(param_2 + 0x10);
    local_1c = *(float *)(param_2 + 0x14);
    local_18 = *(float *)(param_2 + 0x18);
    local_14 = *(float *)(param_2 + 0x1c);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    local_20 = local_20 * -1.0;
    local_1c = local_1c * -1.0;
    local_18 = local_18 * -1.0;
    local_14 = local_14 * -1.0;
  }
  FUN_0097cb90(&local_20,param_3,*(undefined4 *)(param_2 + 0x78));
  FUN_0097a0d0(*(undefined4 *)(param_2 + 0x80),0);
  return;
}

// 0097CDD0  FUN_0097cdd0  size=154  [run]
undefined4 __thiscall FUN_0097cdd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar1 = param_3;
  if (*(int *)(param_1 + 0x30) != 0) {
    local_4 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      param_3 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x30) + param_3;
        if (*(int *)(iVar2 + 0x8c) != -1) {
          FUN_00a19d10(param_2,*(undefined2 *)
                                (*(int *)(iVar2 + 0x8c) * 0x40 + 0x3c + *(int *)(iVar2 + 0x68)));
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + *(int *)(iVar2 + 0x78);
          *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + *(int *)(iVar2 + 0x80);
          *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        }
        param_3 = param_3 + 0x110;
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(param_1 + 0x34));
    }
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x34);
    return 1;
  }
  return 0;
}

// 0097CE70  FUN_0097ce70  size=136  [run]
void __thiscall FUN_0097ce70(int param_1,int param_2)

{
  int iVar1;
  int local_4;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (local_4 = 0, 0 < *(int *)(param_1 + 0x34))) {
    do {
      iVar1 = 0;
      do {
        if (*(char *)(iVar1 + param_2) != '\0') {
          FUN_00a19ce0();
          FUN_00a19ce0();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 2);
      FUN_00a19ce0();
      FUN_00a19ce0();
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 0097CF30  FUN_0097cf30  size=166  [run]
void __fastcall FUN_0097cf30(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1 = param_1 + 0xb8;
  local_4 = 2;
  do {
    iVar1 = 2;
    do {
      FUN_00a19be0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_00a19be0();
    *(undefined4 *)(param_1 + 0x14) = 0;
    param_1 = param_1 + 0x40;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 0097CFE0  FUN_0097cfe0  size=253  [run]
void __fastcall FUN_0097cfe0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x74));
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x7c));
  }
  iVar2 = param_1 + 0xb8;
  local_8 = 2;
  do {
    iVar1 = 2;
    do {
      FUN_00a19c00();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_00a19c00();
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_8 = 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  do {
    iVar1 = 2;
    do {
      FUN_00a19be0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_00a19be0();
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar2 = iVar2 + 0x40;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 0097D0E0  FUN_0097d0e0  size=153  [run]
undefined4 __thiscall FUN_0097d0e0(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_0097cfe0();
  uVar1 = param_2 * 3 - 6;
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),param_3);
  *(int *)(param_1 + 0x74) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 2 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 2),param_3);
    *(int *)(param_1 + 0x7c) = iVar2;
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x84) = uVar1;
      *(uint *)(param_1 + 0x78) = param_2;
      *(int *)(param_1 + 0x88) = (int)uVar1 / 3;
      *(undefined4 *)(param_1 + 0x80) = 0;
      return 1;
    }
  }
  return 0;
}

// 0097D180  FUN_0097d180  size=352  [run]
void __thiscall FUN_0097d180(int param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined2 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    local_34 = *(undefined4 *)(param_1 + 0x48);
    local_38 = *(undefined4 *)(param_1 + 0x40);
    local_30 = *(undefined4 *)(param_1 + 0x74);
    local_2c = *(undefined4 *)(param_1 + 0x7c);
    if ((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 0x8c) == -1)) {
      local_28 = 0;
    }
    else {
      local_28 = *(int *)(param_1 + 0x8c) * 0x40 + *(int *)(param_1 + 0x68);
    }
    local_24 = *param_3;
    iVar2 = param_1 + 0x90;
    do {
      if (*(int *)(iVar2 + 0x3c) != 0) {
        local_18 = iVar2 + 0x14;
        local_14 = iVar2 + 0x28;
        if (*(int *)(param_1 + 0x70) == 0) {
          local_50 = 0.0;
          local_4c = 1.0;
          local_48 = 0.0;
          local_44 = 1.0;
        }
        else {
          local_50 = *(float *)(param_1 + 0x10);
          local_4c = *(float *)(param_1 + 0x14);
          local_48 = *(float *)(param_1 + 0x18);
          local_44 = *(float *)(param_1 + 0x1c);
        }
        if (iVar1 != 0) {
          local_50 = local_50 * -1.0;
          local_4c = local_4c * -1.0;
          local_48 = local_48 * -1.0;
          local_44 = local_44 * -1.0;
        }
        local_20 = iVar1;
        local_1c = iVar2;
        FUN_0097cb90(&local_50,param_2,*(undefined4 *)(param_1 + 0x78));
        FUN_0097a0d0(*(undefined4 *)(param_1 + 0x80),0);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar1 < 2);
  }
  return;
}

// 0097D340  FUN_0097d340  size=264  [run]
undefined4 __thiscall FUN_0097d340(int param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (ulonglong)*(uint *)(param_1 + 0xa4) * 0x10;
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_2);
  *(int *)(param_1 + 0x90) = iVar2;
  if (iVar2 != 0) {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0xa4) * 0x10;
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_2);
    *(int *)(param_1 + 0x94) = iVar2;
    if (iVar2 != 0) {
      if ((*(byte *)(param_1 + 8) & 6) != 0) {
        lVar1 = (ulonglong)*(uint *)(param_1 + 0xa4) * 0x10;
        iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_2);
        *(int *)(param_1 + 0x98) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(uint *)(param_1 + 8) & 0x10300) != 0) {
        lVar1 = (ulonglong)*(uint *)(param_1 + 0xa4) * 0x10;
        iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_2);
        *(int *)(param_1 + 0x9c) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(byte *)(param_1 + 8) & 0x30) != 0) {
        lVar1 = (ulonglong)*(uint *)(param_1 + 0xa4) * 0x10;
        iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_2);
        *(int *)(param_1 + 0xa0) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

// 0097D450  FUN_0097d450  size=77  [run]
void __fastcall FUN_0097d450(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xac);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x2c))) {
    FUN_0097c4a0(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x20),
                 *(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28),*(int *)(iVar1 + 0x2c),
                 *(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(iVar1 + 0x1c));
  }
  return;
}

// 0097D4A0  FUN_0097d4a0  size=20  [run]
undefined4 __fastcall FUN_0097d4a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xac) == 0) {
    return 0;
  }
  uVar1 = FUN_0097cdd0();
  return uVar1;
}

// 0097D4C0  FUN_0097d4c0  size=24  [run]
void __fastcall FUN_0097d4c0(int param_1)

{
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_0097ce70(param_1 + 0x8c);
  }
  return;
}

// 0097D500  FUN_0097d500  size=87  [run]
void __thiscall
FUN_0097d500(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  if ((*param_1 == 2) && (iVar1 = 0, 0 < *(int *)(param_1[2] + 0x10))) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1[6] + iVar2) == 2) {
        cCutJobList::entryObject(param_3,param_4,(int *)(param_1[6] + iVar2),param_5,param_6);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xb0;
    } while (iVar1 < *(int *)(param_1[2] + 0x10));
  }
  return;
}

// 0097D690  FUN_0097d690  size=983  [run]
/* WARNING: Removing unreachable block (ram,0x0097d7a7) */

void FUN_0097d690(uint *param_1,uint *param_2,uint *param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  uVar3 = *param_2;
  local_30 = 0.0;
  uVar2 = uVar3 >> 0xb & 0x7ff;
  if ((short)(uVar3 & 0x7ff) != 0) {
    local_30 = (float)((short)((uVar3 & 0x7ff) << 5) + 0x8000) * 2.0 * 1.5266243e-05 - 1.0;
  }
  if ((short)uVar2 == 0) {
    local_2c = 0.0;
  }
  else {
    local_2c = (float)((short)(uVar2 << 5) + 0x8000) * 2.0 * 1.5266243e-05 - 1.0;
  }
  if ((ushort)(uVar3 >> 0x16) == 0) {
    local_28 = 0.0;
  }
  else {
    local_28 = (float)((short)((uVar3 >> 0x16) << 6) + 0x8000) * 2.0 * 1.5273705e-05 - 1.0;
  }
  local_24 = 0x3f800000;
  fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  local_18 = 0.0;
  uVar3 = *param_3;
  uVar2 = uVar3 >> 0xb & 0x7ff;
  local_20 = local_18;
  if ((short)(uVar3 & 0x7ff) != 0) {
    local_20 = (float)((short)((uVar3 & 0x7ff) << 5) + 0x8000) * 2.0 * 1.5266243e-05 - 1.0;
  }
  local_1c = local_18;
  if ((short)uVar2 != 0) {
    local_1c = (float)((short)(uVar2 << 5) + 0x8000) * 2.0 * 1.5266243e-05 - 1.0;
  }
  if ((ushort)(uVar3 >> 0x16) != 0) {
    local_18 = (float)((short)((uVar3 >> 0x16) << 6) + 0x8000) * 2.0 * 1.5273705e-05 - 1.0;
  }
  local_14 = 0x3f800000;
  fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_20 = 0.0;
    local_1c = 1.0;
    local_18 = 0.0;
  }
  local_40 = (local_20 - local_30) * param_4 + local_30;
  local_3c = (local_1c - local_2c) * param_4 + local_2c;
  local_38 = local_28 + (local_18 - local_28) * param_4;
  local_34 = 0x3f800000;
  fVar1 = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_40,&local_40);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
  }
  local_48 = (uint)(longlong)ROUND(local_3c * 1023.0);
  uVar2 = local_48 & 0x7ff;
  local_48 = (uint)(longlong)ROUND(local_38 * 511.0);
  uVar3 = local_48 << 0xb;
  local_48 = (uint)(longlong)ROUND(local_40 * 1023.0);
  uVar3 = (uVar2 | uVar3) << 0xb | local_48 & 0x7ff;
  *param_1 = uVar3;
  if (uVar3 == 0) {
    FUN_00dd5650(&DAT_01651f98);
  }
  return;
}

// 0097DA70  FUN_0097da70  size=792  [run]
void FUN_0097da70(char *param_1,uint *param_2,uint *param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bStack_49;
  byte bStack_45;
  char local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  uVar1 = *param_2;
  local_24 = 1.0;
  local_40 = (float)(uVar1 & 0xff) * 0.003921569 * 2.0 - 1.0;
  local_3c = (float)(uVar1 >> 8 & 0xff) * 0.003921569 * 2.0 - 1.0;
  local_38 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569 * 2.0 - 1.0;
  bStack_49 = (byte)(uVar1 >> 0x18);
  if (bStack_49 < 0x80) {
    local_24 = -1.0;
  }
  uVar1 = *param_3;
  local_20 = (float)(uVar1 & 0xff) * 0.003921569 * 2.0 - 1.0;
  local_1c = (float)(uVar1 >> 8 & 0xff) * 0.003921569 * 2.0 - 1.0;
  local_18 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569 * 2.0 - 1.0;
  fVar2 = 1.0;
  bStack_45 = (byte)(uVar1 >> 0x18);
  if (bStack_45 < 0x80) {
    fVar2 = -1.0;
  }
  local_40 = (local_20 - local_40) * param_4 + local_40;
  local_3c = (local_1c - local_3c) * param_4 + local_3c;
  local_38 = (local_18 - local_38) * param_4 + local_38;
  local_34 = (fVar2 - local_24) * param_4 + local_24;
  fVar2 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&local_40,&local_40);
    if (local_40 < 1.0) goto LAB_0097dbed;
    local_40 = 1.0;
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
LAB_0097dbed:
    if (local_40 < -1.0) {
      local_40 = -1.0;
    }
  }
  fVar4 = 1.0;
  fVar2 = -1.0;
  fVar3 = (local_40 + 1.0) * 0.5 * 255.0;
  uVar1 = (uint)ROUND(fVar3);
  local_44 = (char)uVar1;
  if (0.5 < fVar3 - (float)(uVar1 & 0xff)) {
    local_44 = local_44 + '\x01';
  }
  *param_1 = local_44;
  if ((local_3c < 1.0) && (fVar4 = local_3c, local_3c < -1.0)) {
    fVar4 = fVar2;
  }
  fVar3 = (fVar4 + 1.0) * 0.5 * 255.0;
  uVar1 = (uint)ROUND(fVar3);
  local_44 = (char)uVar1;
  if (0.5 < fVar3 - (float)(uVar1 & 0xff)) {
    local_44 = local_44 + '\x01';
  }
  param_1[1] = local_44;
  if (1.0 <= local_38) {
    local_38 = 1.0;
  }
  else if (local_38 < -1.0) goto LAB_0097dd1f;
  fVar2 = local_38;
LAB_0097dd1f:
  fVar2 = (fVar2 + 1.0) * 0.5 * 255.0;
  uVar1 = (uint)ROUND(fVar2);
  local_44 = (char)uVar1;
  if (0.5 < fVar2 - (float)(uVar1 & 0xff)) {
    local_44 = local_44 + '\x01';
  }
  param_1[2] = local_44;
  if (local_24 < 0.0) {
    param_1[3] = '\0';
    return;
  }
  param_1[3] = -1;
  return;
}

// 0097DD90  FUN_0097dd90  size=397  [run]
void __thiscall FUN_0097dd90(int param_1,int param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  int local_8;
  int local_4;
  
  iVar10 = *(int *)(param_1 + 0x24);
  local_8 = 0;
  if (0 < *(int *)(iVar10 + 0x70)) {
    local_4 = 0;
    do {
      iVar7 = *(int *)(local_4 + 4 + iVar10);
      uVar11 = (uint)*(byte *)(iVar7 + 0x1c + param_1);
      iVar7 = *(int *)(param_1 + 0x14 + iVar7 * 4);
      iVar8 = *(int *)(local_4 + 8 + iVar10);
      iVar10 = *(int *)(local_4 + iVar10);
      pfVar9 = (float *)(uVar11 * param_3 + iVar8 + iVar7);
      pfVar12 = (float *)(uVar11 * param_4 + iVar8 + iVar7);
      if (iVar10 < 0x31) {
        if (iVar10 == 0x30) {
          FUN_0097aed0(param_2 * 0x10 + *(int *)(param_1 + 0x10),pfVar9,pfVar12,param_5);
        }
        else if (iVar10 == 1) {
          pfVar13 = (float *)(param_2 * 0x10 + *(int *)(param_1 + 4));
          fVar1 = pfVar12[1];
          fVar2 = pfVar9[1];
          fVar3 = pfVar9[1];
          fVar4 = pfVar12[2];
          fVar5 = pfVar9[2];
          fVar6 = pfVar9[2];
          *pfVar13 = (*pfVar12 - *pfVar9) * param_5 + *pfVar9;
          pfVar13[1] = (fVar1 - fVar2) * param_5 + fVar3;
          pfVar13[2] = (fVar4 - fVar5) * param_5 + fVar6;
          pfVar13[3] = 1.0;
        }
        else if (iVar10 == 2) {
          FUN_0097d690(param_2 * 0x10 + *(int *)(param_1 + 8),pfVar9,pfVar12,param_5);
        }
        else if (iVar10 == 4) {
          FUN_0097da70(*(int *)(param_1 + 8) + 4 + param_2 * 0x10,pfVar9,pfVar12,param_5);
        }
      }
      else {
        if (iVar10 == 0x100) {
          iVar10 = param_2 * 0x10 + *(int *)(param_1 + 0xc);
        }
        else {
          if (iVar10 != 0x200) {
            if (iVar10 == 0x10000) {
              FUN_0097b450(*(int *)(param_1 + 0xc) + 8 + param_2 * 0x10,pfVar9,pfVar12,param_5);
            }
            goto LAB_0097def6;
          }
          iVar10 = *(int *)(param_1 + 0xc) + 4 + param_2 * 0x10;
        }
        FUN_0097b3b0(iVar10,pfVar9,pfVar12,param_5);
      }
LAB_0097def6:
      iVar10 = *(int *)(param_1 + 0x24);
      local_8 = local_8 + 1;
      local_4 = local_4 + 0x10;
    } while (local_8 < *(int *)(iVar10 + 0x70));
  }
  return;
}

// 0097DF20  FUN_0097df20  size=210  [run]
void __thiscall FUN_0097df20(int *param_1,undefined4 param_2)

{
  ushort *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar8 = 0;
  if (0 < param_1[8]) {
    local_2c = 0;
    do {
      iVar3 = param_1[0xb];
      uVar6 = (uint)*(ushort *)(iVar3 + 2 + iVar8 * 8);
      fVar2 = *(float *)(iVar3 + 4 + iVar8 * 8);
      puVar1 = (ushort *)(iVar3 + iVar8 * 8);
      uVar4 = (uint)*puVar1;
      pfVar7 = (float *)(uVar6 * 0x10 + param_1[10]);
      pfVar5 = (float *)(uVar4 * 0x10 + param_1[10]);
      local_20 = (*pfVar7 - *pfVar5) * fVar2 + *pfVar5;
      local_1c = (pfVar7[1] - pfVar5[1]) * fVar2 + pfVar5[1];
      local_18 = (pfVar7[2] - pfVar5[2]) * fVar2 + pfVar5[2];
      local_14 = (pfVar7[3] - pfVar5[3]) * fVar2 + pfVar5[3];
      D3DXVec4Transform(*param_1 + local_2c,&local_20,param_2);
      *(undefined4 *)(local_2c + 4 + *param_1) = 0;
      FUN_0097dd90(iVar8,uVar4,uVar6,*(undefined4 *)(puVar1 + 2));
      local_2c = local_2c + 0x10;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1[8]);
  }
  return;
}

// 0097E040  FUN_0097e040  size=123  [run]
void FUN_0097e040(int param_1)

{
  FUN_0097df20(param_1 + 0x40);
  return;
}

// 0097E0C0  FUN_0097e0c0  size=35  [run]
void __fastcall FUN_0097e0c0(int param_1)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0097bc30();
    FUN_0097bc30();
    return;
  }
  return;
}

// 0097E0F0  FUN_0097e0f0  size=92  [run]
undefined4 __thiscall FUN_0097e0f0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x94) != 0) {
      uVar1 = FUN_0097be90(param_2);
      return uVar1;
    }
  }
  else if (param_3 == 1) {
    if (*(int *)(param_1 + 0x94) != 0) {
      uVar1 = FUN_0097be90(param_2);
      return uVar1;
    }
  }
  else if ((param_3 == 2) && (*(int *)(param_1 + 0x90) != 0)) {
    uVar1 = FUN_00979630(param_2);
    return uVar1;
  }
  return 0;
}

// 0097E150  FUN_0097e150  size=117  [run]
undefined4 __thiscall FUN_0097e150(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    if (param_1[0x25] != 0) {
      uVar1 = FUN_0097bd80(param_2,param_1[6]);
      return uVar1;
    }
  }
  else if (param_3 == 1) {
    if (param_1[0x25] != 0) {
      uVar1 = FUN_0097bd80(param_2,param_1[6]);
      return uVar1;
    }
  }
  else if ((param_3 == 2) && (param_1[0x24] != 0)) {
    if (param_4 != 0) {
      *param_1 = 2;
    }
    uVar1 = FUN_009796d0(param_2,param_4);
    return uVar1;
  }
  return 0;
}

// 0097E1D0  FUN_0097e1d0  size=57  [run]
void __fastcall FUN_0097e1d0(int param_1)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0097bee0(*(undefined4 *)(param_1 + 0x14));
    FUN_0097bee0(*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_009797c0();
    return;
  }
  return;
}

// 0097E210  FUN_0097e210  size=79  [run]
void __fastcall FUN_0097e210(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0097bfa0();
    FUN_0097bfa0();
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar1 = 2;
    do {
      FUN_00a19ce0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_00a19ce0();
    return;
  }
  return;
}

// 0097E300  FUN_0097e300  size=592  [run]
undefined4 __thiscall
FUN_0097e300(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_c;
  int local_8;
  
  uVar6 = (param_1[2] / 0xffff + 1) * (param_3 / 0xffff + 1);
  param_1[7] = uVar6;
  if (0 < (int)uVar6) {
    uVar4 = -(uint)((int)((ulonglong)uVar6 * 0xb0 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0xb0);
    puVar1 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar4) | uVar4 + 0x10,param_4);
    if (puVar1 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      local_8 = uVar6 - 1;
      *puVar1 = uVar6;
      puVar2 = puVar1 + 4;
      if (-1 < local_8) {
        puVar1 = puVar1 + 0x15;
        do {
          FUN_00401040(puVar1 + 0xc,0x14,2,FUN_00a1ac50);
          FUN_00a1ac50();
          puVar1[-1] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[0xb] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[-9] = 0;
          puVar1[-8] = 0;
          *(undefined2 *)(puVar1 + -7) = 0;
          puVar1[-6] = 0;
          puVar1[-5] = 0;
          puVar1[-4] = 0;
          puVar1[-3] = 0;
          puVar1[-2] = 0;
          local_c = 2;
          do {
            FUN_00a19be0();
            local_c = local_c + -1;
          } while (local_c != 0);
          FUN_00a19be0();
          puVar1 = puVar1 + 0x2c;
          local_8 = local_8 + -1;
        } while (-1 < local_8);
      }
    }
    param_1[5] = (int)puVar2;
    if (puVar2 != (uint *)0x0) {
      if (0xffff < param_3) {
        param_3 = 0xffff;
      }
      param_1[3] = param_3;
      iVar3 = param_1[2];
      if (0xffff < iVar3) {
        iVar3 = 0xffff;
      }
      param_1[4] = iVar3;
      local_8 = 0;
      if (0 < param_1[7]) {
        param_3 = 0;
        do {
          iVar5 = param_1[5] + param_3;
          iVar3 = FUN_00979a50(param_1[3],param_1[4],*(undefined4 *)(param_2 + 0x18),param_4);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = FUN_00979ae0(*(undefined4 *)(*param_1 + 0x30),*(undefined4 *)(param_2 + 0x38),
                               param_5);
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = FUN_00979b50(*(undefined4 *)(param_2 + 0x3c),param_5);
          if (iVar3 == 0) {
            return 0;
          }
          *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(param_2 + 8);
          *(undefined2 *)(iVar5 + 0x28) = *(undefined2 *)(param_2 + 0xc);
          *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(param_2 + 0x7c);
          param_3 = param_3 + 0xb0;
          *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(param_2 + 0x80);
          *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(param_2 + 0x84);
          *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(param_2 + 0x88);
          *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(param_2 + 0x8c);
          *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(param_2 + 0x48);
          *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(param_2 + 0x58);
          local_8 = local_8 + 1;
        } while (local_8 < param_1[7]);
      }
      param_1[6] = 0;
      return 1;
    }
  }
  return 0;
}

// 0097E560  FUN_0097e560  size=679  [run]
void __thiscall FUN_0097e560(int param_1,float *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int local_50;
  int local_4c;
  int local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  float local_1c;
  float local_14;
  
  local_48 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    local_50 = 0;
    do {
      pfVar8 = (float *)(*(int *)(param_1 + 0x14) + local_50);
      local_24 = (uint)*(byte *)(pfVar8 + 10);
      local_30 = pfVar8[8];
      local_14 = pfVar8[0x18];
      local_28 = pfVar8[0x12];
      local_2c = pfVar8[0xb];
      local_1c = pfVar8[0x16];
      pfVar8[4] = 3.4028235e+38;
      pfVar8[5] = 3.4028235e+38;
      pfVar8[6] = 3.4028235e+38;
      local_4c = 0;
      pfVar8[7] = 1.0;
      pfVar8[3] = 1.0;
      *pfVar8 = -3.4028235e+38;
      pfVar8[1] = -3.4028235e+38;
      pfVar8[2] = -3.4028235e+38;
      if (0 < (int)pfVar8[0x13]) {
        do {
          uVar2 = *(uint *)((int)local_28 + local_4c * 4);
          uVar4 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            pfVar5 = (float *)(uVar4 * 0x10 + (int)local_2c);
            local_40 = *param_2 + *pfVar5;
            local_3c = pfVar5[1] + param_2[1];
            local_38 = pfVar5[2] + param_2[2];
            local_34 = pfVar5[3] + param_2[3];
          }
          else {
            pfVar5 = (float *)(uVar4 * local_24 + (int)local_30);
            local_40 = *param_2 + *pfVar5;
            local_3c = param_2[1] + pfVar5[1];
            local_38 = param_2[2] + pfVar5[2];
            local_34 = param_2[3] + 1.0;
          }
          fVar3 = pfVar8[4];
          if (local_40 < pfVar8[4]) {
            fVar3 = local_40;
          }
          pfVar8[4] = fVar3;
          fVar3 = pfVar8[5];
          if (local_3c < pfVar8[5]) {
            fVar3 = local_3c;
          }
          pfVar8[5] = fVar3;
          fVar3 = pfVar8[6];
          if (local_38 < pfVar8[6]) {
            fVar3 = local_38;
          }
          pfVar8[6] = fVar3;
          fVar3 = local_40;
          if (local_40 < *pfVar8) {
            fVar3 = *pfVar8;
          }
          *pfVar8 = fVar3;
          fVar3 = local_3c;
          if (local_3c < pfVar8[1]) {
            fVar3 = pfVar8[1];
          }
          pfVar8[1] = fVar3;
          fVar3 = local_38;
          if (local_38 < pfVar8[2]) {
            fVar3 = pfVar8[2];
          }
          iVar9 = 0;
          pfVar8[2] = fVar3;
          iVar7 = param_3;
          if (0 < (int)pfVar8[0x17]) {
            do {
              if ((-1 < *(int *)((int)local_1c + iVar9 * 4)) &&
                 (iVar6 = FUN_00d96bf0(&local_40,iVar7), iVar6 != 0)) {
                piVar1 = (int *)((int)local_1c + iVar9 * 4);
                *piVar1 = *piVar1 + 1;
              }
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 0x50;
            } while (iVar9 < (int)pfVar8[0x17]);
          }
          iVar9 = 0;
          iVar7 = param_4;
          if (0 < (int)pfVar8[0x19]) {
            do {
              if ((-1 < *(int *)((int)local_14 + iVar9 * 4)) &&
                 (iVar6 = FUN_00d8d6c0(&local_40,iVar7,iVar7 + 0x10), iVar6 != 0)) {
                piVar1 = (int *)((int)local_14 + iVar9 * 4);
                *piVar1 = *piVar1 + 1;
              }
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 0x30;
            } while (iVar9 < (int)pfVar8[0x19]);
          }
          local_4c = local_4c + 1;
        } while (local_4c < (int)pfVar8[0x13]);
      }
      iVar7 = 0;
      if (0 < (int)pfVar8[0x17]) {
        do {
          if (0x7fffffff < *(uint *)((int)local_1c + iVar7 * 4)) {
            *(undefined4 *)((int)local_1c + iVar7 * 4) = 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)pfVar8[0x17]);
      }
      iVar7 = 0;
      if (0 < (int)pfVar8[0x19]) {
        do {
          if (0x7fffffff < *(uint *)((int)local_14 + iVar7 * 4)) {
            *(undefined4 *)((int)local_14 + iVar7 * 4) = 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)pfVar8[0x19]);
      }
      local_50 = local_50 + 0xb0;
      local_48 = local_48 + 1;
    } while (local_48 < *(int *)(param_1 + 0x18));
  }
  return;
}

// 0097E810  FUN_0097e810  size=277  [run]
void __thiscall FUN_0097e810(int *param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_1[6]) {
    iVar4 = 0;
    do {
      pfVar3 = (float *)(param_1[5] + iVar4);
      if ((pfVar3[0x16] != 0.0) && (iVar2 = 0, 0 < (int)pfVar3[0x17])) {
        do {
          if (0 < *(int *)((int)pfVar3[0x16] + iVar2 * 4)) {
            *(undefined1 *)(iVar2 + *(int *)(param_2 + 0xc)) = 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)pfVar3[0x17]);
      }
      param_3[0x19] = (float)((int)param_3[0x19] + (int)pfVar3[0x13]);
      param_3[0x1a] = (float)((int)param_3[0x1a] + (int)pfVar3[0x15]);
      fVar1 = param_3[4];
      if (pfVar3[4] < fVar1) {
        fVar1 = pfVar3[4];
      }
      param_3[4] = fVar1;
      fVar1 = param_3[5];
      if (pfVar3[5] < fVar1) {
        fVar1 = pfVar3[5];
      }
      param_3[5] = fVar1;
      fVar1 = param_3[6];
      if (pfVar3[6] < fVar1) {
        fVar1 = pfVar3[6];
      }
      param_3[6] = fVar1;
      fVar1 = *pfVar3;
      if (fVar1 < *param_3) {
        fVar1 = *param_3;
      }
      *param_3 = fVar1;
      fVar1 = pfVar3[1];
      if (fVar1 < param_3[1]) {
        fVar1 = param_3[1];
      }
      param_3[1] = fVar1;
      fVar1 = pfVar3[2];
      if (fVar1 < param_3[2]) {
        fVar1 = param_3[2];
      }
      iVar5 = iVar5 + 1;
      param_3[2] = fVar1;
      iVar4 = iVar4 + 0xb0;
    } while (iVar5 < param_1[6]);
  }
  FUN_00a19d10(param_3,*(undefined2 *)(*param_1 + 0x2a));
  *(int *)(param_4 + 0xc) = *(int *)(param_4 + 0xc) + param_1[6];
  return;
}

// 0097E930  FUN_0097e930  size=361  [run]
undefined4 __thiscall FUN_0097e930(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  int local_4;
  
  fVar5 = 3.4028235e+38;
  iVar2 = param_1[2];
  iVar1 = iVar2 + param_2 * 0x1c;
  iVar3 = *param_1;
  pfVar11 = (float *)(*(int *)(iVar1 + 0x10 + param_3 * 4) * 0x10 + iVar3);
  iVar10 = -1;
  iVar9 = param_2 + 1;
  local_4 = -1;
  if (iVar9 < param_1[3]) {
    piVar12 = (int *)(iVar2 + iVar9 * 0x1c);
    do {
      if ((*piVar12 != param_2) && (piVar12[1] != param_2)) {
        iVar4 = piVar12[4];
        if ((piVar12[2] == -1) &&
           (fVar8 = *pfVar11 - *(float *)(iVar3 + iVar4 * 0x10),
           fVar7 = pfVar11[1] - *(float *)(iVar3 + 4 + iVar4 * 0x10),
           fVar6 = pfVar11[2] - *(float *)(iVar3 + 8 + iVar4 * 0x10),
           fVar6 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6, fVar6 <= fVar5)) {
          local_4 = 0;
          iVar10 = iVar9;
          fVar5 = fVar6;
        }
        iVar4 = piVar12[5];
        if ((piVar12[3] == -1) &&
           (fVar8 = *pfVar11 - *(float *)(iVar3 + iVar4 * 0x10),
           fVar7 = pfVar11[1] - *(float *)(iVar3 + 4 + iVar4 * 0x10),
           fVar6 = pfVar11[2] - *(float *)(iVar3 + 8 + iVar4 * 0x10),
           fVar6 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6, fVar6 <= fVar5)) {
          local_4 = 1;
          iVar10 = iVar9;
          fVar5 = fVar6;
        }
      }
      iVar9 = iVar9 + 1;
      piVar12 = piVar12 + 7;
    } while (iVar9 < param_1[3]);
    if ((iVar10 != -1) && (local_4 != -1)) {
      iVar2 = iVar2 + iVar10 * 0x1c;
      *(int *)(iVar1 + param_3 * 4) = iVar10;
      *(int *)(iVar1 + 8 + param_3 * 4) = local_4;
      *(int *)(iVar2 + 8 + local_4 * 4) = param_3;
      *(int *)(iVar2 + local_4 * 4) = param_2;
      return 1;
    }
  }
  return 0;
}

// 0097EAA0  FUN_0097eaa0  size=243  [run]
void __fastcall FUN_0097eaa0(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar7 = 0;
  if (0 < param_1[1]) {
    iVar6 = 0;
    do {
      iVar5 = *param_1;
      fVar4 = *(float *)(iVar6 + iVar5) - *(float *)(iVar6 + 0x10 + iVar5);
      fVar3 = *(float *)(iVar6 + 4 + iVar5) - *(float *)(iVar6 + 0x14 + iVar5);
      fVar2 = *(float *)(iVar6 + 8 + iVar5) - *(float *)(iVar6 + 0x18 + iVar5);
      fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      if (fVar2 < 9.9999994e-11 == (fVar2 == 9.9999994e-11)) {
        puVar1 = (undefined4 *)(param_1[2] + param_1[3] * 0x1c);
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        puVar1[4] = iVar7 * 2;
        puVar1[5] = iVar7 * 2 + 1;
        puVar1[6] = 0;
        param_1[3] = param_1[3] + 1;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar7 < param_1[1]);
  }
  local_8 = 0;
  if (param_1[3] != 1 && -1 < param_1[3] + -1) {
    local_4 = 8;
    do {
      iVar6 = 0;
      iVar7 = local_4;
      do {
        if ((*(int *)(iVar7 + param_1[2]) == -1) &&
           (iVar5 = FUN_0097e930(local_8,iVar6), iVar5 == 0)) {
          param_1[3] = 0;
          return;
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar6 < 2);
      local_8 = local_8 + 1;
      local_4 = local_4 + 0x1c;
      if (param_1[3] + -1 <= local_8) {
        return;
      }
    } while( true );
  }
  return;
}

// 0097EC70  FUN_0097ec70  size=325  [run]
void __fastcall FUN_0097ec70(int *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int local_c;
  float *local_8;
  
  local_c = param_1[2];
  param_1[6] = 0;
  do {
    if (local_c < 1) {
      return;
    }
    iVar8 = 0;
    iVar6 = 0;
    if (param_1[2] < 1) {
      return;
    }
    piVar3 = (int *)(param_1[1] + 0x18);
    while (*piVar3 != 0) {
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 7;
      if (param_1[2] <= iVar6) {
        return;
      }
    }
    if (iVar6 == -1) {
      return;
    }
    if (0xf < param_1[4]) {
      param_1[4] = 0;
      return;
    }
    iVar4 = param_1[4] * 0x40 + param_1[3];
    *(int *)(iVar4 + 0x20) = param_1[6];
    *(undefined4 *)(iVar4 + 0x24) = 0;
    local_8 = (float *)0x0;
    iVar6 = param_1[1] + iVar6 * 0x1c;
    do {
      iVar1 = *(int *)(iVar6 + 0x10 + iVar8 * 4);
      pfVar7 = (float *)(iVar1 * 0x10 + *param_1);
      if ((local_8 == (float *)0x0) ||
         (fVar2 = (*local_8 - *pfVar7) * (*local_8 - *pfVar7) +
                  (local_8[1] - pfVar7[1]) * (local_8[1] - pfVar7[1]) +
                  (local_8[2] - pfVar7[2]) * (local_8[2] - pfVar7[2]), fVar2 < 0.0 == (fVar2 == 0.0)
         )) {
        *(int *)(param_1[5] + param_1[6] * 4) = iVar1;
        param_1[6] = param_1[6] + 1;
        local_8 = pfVar7;
      }
      local_c = local_c + -1;
      *(undefined4 *)(iVar6 + 0x18) = 1;
      if (local_c < 1) break;
      uVar5 = iVar8 - 1U & 1;
      iVar1 = *(int *)(iVar6 + uVar5 * 4);
      iVar8 = *(int *)(iVar6 + 8 + uVar5 * 4);
      iVar6 = param_1[1] + iVar1 * 0x1c;
    } while (*(int *)(param_1[1] + 0x18 + iVar1 * 0x1c) == 0);
    *(int *)(iVar4 + 0x24) = param_1[6] - *(int *)(iVar4 + 0x20);
    if (2 < *(int *)(param_1[4] * 0x40 + 0x24 + param_1[3])) {
      param_1[4] = param_1[4] + 1;
    }
  } while( true );
}

// 0097EDC0  FUN_0097edc0  size=743  [run]
void __thiscall FUN_0097edc0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int local_c;
  int local_8;
  int local_4;
  
  piVar8 = param_2;
  fVar4 = 3.4028235e+38;
  iVar9 = param_2[2];
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar10 = 0;
  if (0 < iVar9) {
    iVar12 = param_2[5];
    iVar14 = *param_1;
    param_2 = (int *)*param_2;
    do {
      pfVar11 = (float *)(*param_2 * 0x10 + iVar14);
      iVar9 = 0;
      if (3 < iVar12) {
        fVar1 = *pfVar11;
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        piVar13 = (int *)(piVar8[3] + 8);
        do {
          iVar10 = piVar13[-2];
          fVar7 = *(float *)(iVar14 + iVar10 * 0x10) - fVar1;
          fVar6 = *(float *)(iVar14 + 4 + iVar10 * 0x10) - fVar2;
          fVar5 = *(float *)(iVar14 + 8 + iVar10 * 0x10) - fVar3;
          fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
          if (fVar5 <= fVar4) {
            local_c = local_4;
            fVar4 = fVar5;
            local_8 = iVar9;
          }
          iVar10 = piVar13[-1];
          fVar7 = *(float *)(iVar14 + iVar10 * 0x10) - fVar1;
          fVar6 = *(float *)(iVar14 + 4 + iVar10 * 0x10) - fVar2;
          fVar5 = *(float *)(iVar14 + 8 + iVar10 * 0x10) - fVar3;
          fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
          if (fVar5 <= fVar4) {
            local_c = local_4;
            local_8 = iVar9 + 1;
            fVar4 = fVar5;
          }
          iVar10 = *piVar13;
          fVar7 = *(float *)(iVar14 + iVar10 * 0x10) - fVar1;
          fVar6 = *(float *)(iVar14 + 4 + iVar10 * 0x10) - fVar2;
          fVar5 = *(float *)(iVar14 + 8 + iVar10 * 0x10) - fVar3;
          fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
          if (fVar5 <= fVar4) {
            local_c = local_4;
            local_8 = iVar9 + 2;
            fVar4 = fVar5;
          }
          iVar10 = piVar13[1];
          fVar7 = *(float *)(iVar14 + iVar10 * 0x10) - fVar1;
          fVar6 = *(float *)(iVar14 + 4 + iVar10 * 0x10) - fVar2;
          fVar5 = *(float *)(iVar14 + 8 + iVar10 * 0x10) - fVar3;
          fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
          if (fVar5 <= fVar4) {
            local_c = local_4;
            local_8 = iVar9 + 3;
            fVar4 = fVar5;
          }
          iVar9 = iVar9 + 4;
          piVar13 = piVar13 + 4;
        } while (iVar9 < iVar12 + -3);
      }
      iVar12 = piVar8[5];
      if (iVar9 < iVar12) {
        piVar13 = (int *)(piVar8[3] + iVar9 * 4);
        do {
          iVar10 = *piVar13;
          fVar3 = *(float *)(iVar14 + iVar10 * 0x10) - *pfVar11;
          fVar2 = *(float *)(iVar14 + 4 + iVar10 * 0x10) - pfVar11[1];
          fVar1 = *(float *)(iVar14 + 8 + iVar10 * 0x10) - pfVar11[2];
          fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
          if (fVar1 <= fVar4) {
            local_c = local_4;
            fVar4 = fVar1;
            local_8 = iVar9;
          }
          iVar9 = iVar9 + 1;
          piVar13 = piVar13 + 1;
        } while (iVar9 < iVar12);
      }
      iVar9 = piVar8[2];
      param_2 = param_2 + 1;
      local_4 = local_4 + 1;
      iVar10 = local_c;
    } while (local_4 < iVar9);
  }
  iVar12 = param_1[8];
  iVar14 = 0;
  if (piVar8[1] == 0) {
    if (0 < iVar9) {
      do {
        *(undefined4 *)(iVar12 + iVar14 * 4) = *(undefined4 *)(*piVar8 + iVar10 * 4);
        iVar10 = iVar10 + 1;
        if (piVar8[2] <= iVar10) {
          iVar10 = 0;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < piVar8[2]);
    }
  }
  else if (0 < iVar9) {
    do {
      iVar10 = iVar10 + -1;
      *(undefined4 *)(iVar12 + iVar14 * 4) = *(undefined4 *)(*piVar8 + 4 + iVar10 * 4);
      if (iVar10 < 0) {
        iVar10 = piVar8[2] + -1;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < piVar8[2]);
  }
  ((undefined4 *)param_1[8])[piVar8[2]] = *(undefined4 *)param_1[8];
  iVar10 = piVar8[2];
  iVar12 = piVar8[5];
  iVar9 = iVar10 * 4 + 4;
  iVar14 = param_1[8] + iVar9;
  if (piVar8[4] == 0) {
    iVar15 = 0;
    if (0 < piVar8[5]) {
      do {
        *(undefined4 *)(iVar14 + iVar15 * 4) = *(undefined4 *)(piVar8[3] + local_8 * 4);
        local_8 = local_8 + 1;
        if (piVar8[5] <= local_8) {
          local_8 = 0;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < piVar8[5]);
    }
  }
  else {
    iVar15 = 0;
    if (0 < piVar8[5]) {
      do {
        local_8 = local_8 + -1;
        *(undefined4 *)(iVar14 + iVar15 * 4) = *(undefined4 *)(piVar8[3] + 4 + local_8 * 4);
        if (local_8 < 0) {
          local_8 = piVar8[5] + -1;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < piVar8[5]);
    }
  }
  *(undefined4 *)(param_1[8] + (iVar12 + 1 + iVar10) * 4) = *(undefined4 *)(param_1[8] + iVar9);
  return;
}

// 0097F0B0  FUN_0097f0b0  size=141  [run]
bool __thiscall FUN_0097f0b0(int *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  fVar1 = -3.4028235e+38;
  iVar4 = 0;
  *param_2 = -1;
  if (0 < (int)param_3[0x1e]) {
    iVar5 = 0;
    do {
      if (*(int *)(param_1[7] + 0xc + iVar5) == 0) {
        pfVar3 = (float *)(*(int *)(param_1[8] + *(int *)(param_1[7] + 8 + iVar5) * 4) * 0x10 +
                          *param_1);
        fVar2 = (*param_3 - *pfVar3) * (*param_3 - *pfVar3) +
                (param_3[1] - pfVar3[1]) * (param_3[1] - pfVar3[1]) +
                (param_3[2] - pfVar3[2]) * (param_3[2] - pfVar3[2]);
        if (fVar1 <= fVar2) {
          *param_2 = iVar4;
          fVar1 = fVar2;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < (int)param_3[0x1e]);
  }
  return *param_2 != -1;
}

// 0097F140  FUN_0097f140  size=344  [run]
void FUN_0097f140(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_4;
  fVar2 = *param_5;
  fVar3 = param_4[1];
  fVar4 = param_5[1];
  fVar5 = param_4[2];
  fVar6 = param_5[2];
  fVar7 = param_3[2];
  fVar8 = *param_3;
  fVar9 = *param_3;
  fVar10 = param_3[1];
  *param_1 = param_3[1] * (fVar5 - fVar6) - param_3[2] * (fVar3 - fVar4);
  param_1[1] = fVar7 * (fVar1 - fVar2) - fVar8 * (fVar5 - fVar6);
  param_1[2] = (fVar3 - fVar4) * fVar9 - fVar10 * (fVar1 - fVar2);
  fVar1 = param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1];
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(param_1,param_1);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    *param_1 = 0.0;
    param_1[1] = 1.0;
    param_1[2] = 0.0;
  }
  fVar1 = param_1[2] * param_5[2] + param_5[1] * param_1[1] + *param_1 * *param_5;
  *param_2 = fVar1;
  fVar2 = 1.0 / ((param_6[2] * param_1[2] + *param_1 * *param_6 + param_6[1] * param_1[1]) - fVar1);
  *param_2 = fVar1 * fVar2;
  *param_1 = *param_1 * fVar2;
  param_1[1] = param_1[1] * fVar2;
  param_1[2] = param_1[2] * fVar2;
  param_1[3] = fVar2 * param_1[3];
  return;
}

// 0097F2A0  FUN_0097f2a0  size=309  [run]
undefined4 __thiscall FUN_0097f2a0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_20;
  int local_1c;
  float local_18;
  
  iVar1 = param_1[7];
  iVar5 = param_1[8];
  param_3 = param_3 * 0x10;
  local_1c = *(int *)(iVar5 + *(int *)(param_3 + 8 + iVar1) * 4);
  iVar7 = *(int *)(param_3 + iVar1) * 0x10 + iVar1;
  iVar6 = *(int *)(param_3 + 4 + iVar1) * 0x10;
  iVar4 = *param_1;
  iVar3 = *(int *)(iVar5 + *(int *)(iVar7 + 8) * 4) * 0x10 + iVar4;
  iVar5 = *(int *)(iVar5 + *(int *)(iVar6 + 8 + iVar1) * 4) * 0x10 + iVar4;
  iVar4 = local_1c * 0x10 + iVar4;
  fVar8 = (float10)FUN_00d8d400(iVar3,iVar4,iVar5);
  fVar8 = fVar8 * (float10)0.5;
  fVar2 = (float10)0;
  if (fVar2 < fVar8 == (fVar2 == fVar8)) {
    local_20 = (float)fVar2;
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(iVar7 + 8);
    local_1c = 0xbf800000;
    local_18 = (float)fVar2;
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + iVar1 + 8);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(iVar6 + iVar1 + 8);
    *(int *)(param_2 + 0x28) = iVar3;
    *(int *)(param_2 + 0x2c) = iVar4;
    *(int *)(param_2 + 0x30) = iVar5;
    FUN_0097f140(param_2,param_2 + 0x20,&local_20,iVar5,iVar4,iVar3);
    FUN_0097f140(param_2 + 0x10,param_2 + 0x24,&local_20,iVar3,iVar5,iVar4);
    return 1;
  }
  if (ABS(fVar8) < (float10)1e-05) {
    return 2;
  }
  return 0;
}

// 0097F3E0  FUN_0097f3e0  size=343  [run]
undefined4 __thiscall FUN_0097f3e0(int *param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  
  iVar1 = param_1[7];
  iVar2 = *(int *)(iVar1 + 4 + *(int *)(iVar1 + 4 + param_3 * 0x10) * 0x10);
joined_r0x0097f408:
  do {
    if (iVar2 == *(int *)(iVar1 + param_3 * 0x10)) {
      return 1;
    }
    iVar6 = iVar2 * 0x10 + iVar1;
    iVar7 = 0;
    iVar2 = *(int *)(iVar6 + 4);
    fVar3 = *(float *)(iVar6 + 8);
    pfVar9 = param_2 + 0xd;
    do {
      if (*pfVar9 == fVar3) {
        if (iVar7 < 3) goto joined_r0x0097f408;
        break;
      }
      iVar7 = iVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar7 < 3);
    pfVar8 = (float *)(*(int *)(param_1[8] + (int)fVar3 * 4) * 0x10 + *param_1);
    iVar6 = 0;
    pfVar9 = param_2 + 10;
    do {
      pfVar4 = (float *)*pfVar9;
      fVar3 = (*pfVar4 - *pfVar8) * (*pfVar4 - *pfVar8) +
              (pfVar4[1] - pfVar8[1]) * (pfVar4[1] - pfVar8[1]) +
              (pfVar4[2] - pfVar8[2]) * (pfVar4[2] - pfVar8[2]);
      if (fVar3 < 9.9999994e-11 != (fVar3 == 9.9999994e-11)) {
        if (iVar6 < 3) goto joined_r0x0097f408;
        break;
      }
      iVar6 = iVar6 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar6 < 3);
    fVar3 = (param_2[2] * pfVar8[2] + *param_2 * *pfVar8 + param_2[1] * pfVar8[1]) - param_2[8];
    if ((((-1e-05 <= fVar3) && (fVar3 <= 1.00001)) &&
        (fVar5 = (param_2[6] * pfVar8[2] + *pfVar8 * param_2[4] + param_2[5] * pfVar8[1]) -
                 param_2[9], -1e-05 <= fVar5)) && (-1e-05 <= (1.0 - fVar3) - fVar5)) {
      return 0;
    }
  } while( true );
}

// 0097F590  FUN_0097f590  size=110  [run]
undefined4 FUN_0097f590(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 0;
  puVar5 = (undefined4 *)(param_1 + 0x28);
  do {
    iVar4 = iVar4 + 1;
    pfVar1 = (float *)*puVar5;
    pfVar2 = *(float **)(param_1 + 0x28 + (iVar4 % 3) * 4);
    fVar3 = (*pfVar2 - *pfVar1) * (*pfVar2 - *pfVar1) +
            (pfVar2[1] - pfVar1[1]) * (pfVar2[1] - pfVar1[1]) +
            (pfVar2[2] - pfVar1[2]) * (pfVar2[2] - pfVar1[2]);
    if (fVar3 < 9.9999994e-11 != (fVar3 == 9.9999994e-11)) {
      return 0;
    }
    puVar5 = puVar5 + 1;
  } while (iVar4 < 3);
  return 1;
}

// 0097F600  FUN_0097f600  size=476  [run]
void __thiscall FUN_0097f600(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [52];
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  
  *(undefined4 *)(param_3 + 0x80) = 0;
  local_5c = 0;
  local_60 = 0;
  local_54 = 0;
  iVar2 = FUN_0097f0b0(&local_64,param_3);
  if (iVar2 != 0) {
    iVar2 = *param_2;
    local_58 = local_64;
    iVar3 = local_64;
    while (0 < iVar2) {
      iVar2 = FUN_0097f2a0(local_50,iVar3);
      if (iVar2 == 0) {
        local_5c = 0;
      }
      else if (iVar2 == 1) {
        local_5c = FUN_0097f3e0(local_50,iVar3);
      }
      else if (iVar2 == 2) {
        local_5c = -(uint)(local_54 != 0) & 2;
      }
      iVar2 = *(int *)(param_1 + 0x1c);
      if (local_5c == 0) {
        iVar3 = *(int *)(iVar2 + 4 + iVar3 * 0x10);
        local_64 = iVar3;
        if (local_58 == iVar3) {
          if (local_60 == 1) {
            local_54 = 1;
          }
          else if (local_60 == 2) {
            return;
          }
          local_60 = local_60 + 1;
        }
      }
      else if (local_5c == 1) {
        iVar2 = FUN_0097f590(local_50);
        if (iVar2 != 0) {
          *(undefined2 *)(*(int *)(param_1 + 0x24) + *(int *)(param_3 + 0x80) * 2) = local_1c;
          *(undefined2 *)(*(int *)(param_1 + 0x24) + 2 + *(int *)(param_3 + 0x80) * 2) = local_18;
          *(undefined2 *)(*(int *)(param_1 + 0x24) + 4 + *(int *)(param_3 + 0x80) * 2) = local_14;
          *(int *)(param_3 + 0x80) = *(int *)(param_3 + 0x80) + 3;
        }
        iVar2 = *(int *)(param_1 + 0x1c);
        iVar1 = *(int *)(iVar2 + 4 + iVar3 * 0x10);
        *(int *)(iVar2 + 4 + *(int *)(iVar2 + iVar3 * 0x10) * 0x10) = iVar1;
        *(undefined4 *)(iVar2 + iVar1 * 0x10) = *(undefined4 *)(iVar2 + iVar3 * 0x10);
        *(undefined4 *)(iVar2 + 0xc + iVar3 * 0x10) = 1;
        *param_2 = *param_2 + -1;
        iVar2 = FUN_0097f0b0(&local_64,param_3);
        if (iVar2 == 0) {
          return;
        }
        local_60 = 0;
        local_58 = local_64;
        iVar3 = local_64;
      }
      else if (local_5c == 2) {
        iVar1 = *(int *)(iVar2 + 4 + iVar3 * 0x10);
        *(int *)(iVar2 + 4 + *(int *)(iVar2 + iVar3 * 0x10) * 0x10) = iVar1;
        *(undefined4 *)(iVar2 + iVar1 * 0x10) = *(undefined4 *)(iVar2 + iVar3 * 0x10);
        *(undefined4 *)(iVar2 + 0xc + iVar3 * 0x10) = 1;
        *param_2 = *param_2 + -1;
        iVar2 = FUN_0097f0b0(&local_64,param_3);
        if (iVar2 == 0) {
          return;
        }
        local_60 = 0;
        local_58 = local_64;
        iVar3 = local_64;
      }
      iVar2 = *param_2;
    }
  }
  return;
}

// 0097F7E0  FUN_0097f7e0  size=73  [run]
void __thiscall FUN_0097f7e0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_00979e80(*(undefined4 *)(param_1 + 0x20),0,param_1 + 4);
  }
  else {
    FUN_0097edc0(param_1 + 4);
  }
  FUN_00979ef0(*(undefined4 *)(param_2 + 0x78));
  FUN_0097f600(param_2 + 0x88,param_2);
  return;
}

// 0097F830  FUN_0097f830  size=891  [run]
void __thiscall FUN_0097f830(int *param_1,int *param_2,float *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  ushort *puVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int local_48;
  int local_44;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_44 = param_4 / 3;
  *param_2 = 0;
  if (0 < local_44) {
    local_48 = 0;
    do {
      puVar5 = (ushort *)(param_1[2] + local_48);
      iVar1 = *param_1;
      iVar2 = param_1[1];
      pfVar7 = (float *)(*(int *)(iVar2 + (uint)puVar5[1] * 4) * 0x10 + iVar1);
      pfVar6 = (float *)(*(int *)(iVar2 + (uint)*puVar5 * 4) * 0x10 + iVar1);
      pfVar8 = (float *)(*(int *)(iVar2 + (uint)puVar5[2] * 4) * 0x10 + iVar1);
      local_30 = *pfVar7 - *pfVar6;
      local_2c = pfVar7[1] - pfVar6[1];
      local_28 = pfVar7[2] - pfVar6[2];
      local_24 = pfVar7[3] - pfVar6[3];
      local_20 = *pfVar8 - *pfVar6;
      local_1c = pfVar8[1] - pfVar6[1];
      local_18 = pfVar8[2] - pfVar6[2];
      local_14 = pfVar8[3] - pfVar6[3];
      fVar3 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
      if ((9.9999994e-11 < fVar3) &&
         (fVar4 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20,
         fVar4 < 9.9999994e-11 == (fVar4 == 9.9999994e-11))) {
        if (fVar3 <= 0.0) {
          FUN_00dd5650(&DAT_0163d0ac);
          local_30 = 0.0;
          local_2c = 1.0;
          local_28 = 0.0;
        }
        else {
          FUN_00ddf460(&local_30,&local_30);
        }
        fVar3 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
        if (fVar3 < 0.0 == (fVar3 == 0.0)) {
          FUN_00ddf460(&local_20,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_20 = 0.0;
          local_1c = 1.0;
          local_18 = 0.0;
        }
        if (ABS(local_1c * local_2c + local_20 * local_30 + local_18 * local_28) < 1.0) {
          *param_3 = *param_3 + (local_1c * local_28 - local_18 * local_2c);
          param_3[1] = param_3[1] + (local_18 * local_30 - local_20 * local_28);
          param_3[2] = (local_20 * local_2c - local_1c * local_30) + param_3[2];
          param_3[3] = param_3[3] + local_34;
          *param_2 = 1;
        }
      }
      local_48 = local_48 + 6;
      local_44 = local_44 + -1;
    } while (local_44 != 0);
  }
  fVar3 = param_3[1] * param_3[1] + *param_3 * *param_3 + param_3[2] * param_3[2];
  if (9.999999e-09 < fVar3) {
    if (*param_2 != 0) {
      if (0.0 < fVar3) {
        FUN_00ddf460(param_3,param_3);
        return;
      }
      FUN_00dd5650(&DAT_0163d0ac);
      *param_3 = 0.0;
      param_3[1] = 1.0;
      param_3[2] = 0.0;
      return;
    }
  }
  else {
    *param_2 = 0;
  }
  return;
}

// 0097FBB0  FUN_0097fbb0  size=346  [run]
void __thiscall FUN_0097fbb0(int *param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  FUN_0097f830(param_2 + 0x70,param_2 + 0x10,*(undefined4 *)(param_2 + 0x80));
  *(undefined4 *)(param_2 + 0x30) = 0x7f7fffff;
  iVar4 = 0;
  *(undefined4 *)(param_2 + 0x34) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x38) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x20) = 0xff7fffff;
  *(undefined4 *)(param_2 + 0x24) = 0xff7fffff;
  *(undefined4 *)(param_2 + 0x28) = 0xff7fffff;
  *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
  if (0 < *(int *)(param_2 + 0x78)) {
    do {
      fVar1 = *(float *)(param_2 + 0x30);
      pfVar3 = (float *)(*(int *)(param_1[1] + iVar4 * 4) * 0x10 + *param_1);
      if (*pfVar3 < fVar1) {
        fVar1 = *pfVar3;
      }
      *(float *)(param_2 + 0x30) = fVar1;
      fVar1 = *(float *)(param_2 + 0x34);
      if (pfVar3[1] < fVar1) {
        fVar1 = pfVar3[1];
      }
      *(float *)(param_2 + 0x34) = fVar1;
      fVar1 = *(float *)(param_2 + 0x38);
      if (pfVar3[2] < fVar1) {
        fVar1 = pfVar3[2];
      }
      *(float *)(param_2 + 0x38) = fVar1;
      fVar1 = *pfVar3;
      if (fVar1 < *(float *)(param_2 + 0x20)) {
        fVar1 = *(float *)(param_2 + 0x20);
      }
      *(float *)(param_2 + 0x20) = fVar1;
      fVar1 = pfVar3[1];
      if (fVar1 < *(float *)(param_2 + 0x24)) {
        fVar1 = *(float *)(param_2 + 0x24);
      }
      *(float *)(param_2 + 0x24) = fVar1;
      fVar1 = pfVar3[2];
      if (fVar1 < *(float *)(param_2 + 0x28)) {
        fVar1 = *(float *)(param_2 + 0x28);
      }
      iVar4 = iVar4 + 1;
      *(float *)(param_2 + 0x28) = fVar1;
    } while (iVar4 < *(int *)(param_2 + 0x78));
  }
  local_20 = *(float *)(param_2 + 0x30) +
             (*(float *)(param_2 + 0x20) - *(float *)(param_2 + 0x30)) * 0.5;
  local_1c = (*(float *)(param_2 + 0x24) - *(float *)(param_2 + 0x34)) * 0.5 +
             *(float *)(param_2 + 0x34);
  local_18 = (*(float *)(param_2 + 0x28) - *(float *)(param_2 + 0x38)) * 0.5 +
             *(float *)(param_2 + 0x38);
  local_14 = 0x3f800000;
  uVar2 = FUN_0097c5a0(&local_20,*(undefined4 *)(param_2 + 0x6c),param_2 + 0x10,
                       *(undefined4 *)(param_2 + 0x70));
  *(undefined4 *)(param_2 + 0x8c) = uVar2;
  return;
}

// 0097FD40  FUN_0097fd40  size=176  [run]
undefined4 __thiscall
FUN_0097fd40(int param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  
  if (0xfffe < param_3 / 2) {
    return 0;
  }
  lVar2 = (ulonglong)(uint)(param_3 / 2) * 4;
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,param_5);
  *(int *)(param_1 + 0x18) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 0x1c >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 0x1c),param_5);
  *(int *)(param_1 + 0x20) = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_00dd3580(0x400,param_5);
    *(int *)(param_1 + 0x28) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 8) = *param_2;
      uVar1 = param_2[1];
      *(uint *)(param_1 + 0x14) = param_4;
      *(int *)(param_1 + 0x10) = param_3;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}

// 0097FDF0  FUN_0097fdf0  size=56  [run]
void __fastcall FUN_0097fdf0(int param_1)

{
  FUN_0097eaa0();
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

// 0097FE30  FUN_0097fe30  size=128  [run]
undefined4 __fastcall FUN_0097fe30(int param_1)

{
  if ((*(int *)(param_1 + 0x24) < 1) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd4940(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  FUN_0097ec70();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 1;
}

// 0097FEB0  FUN_0097feb0  size=229  [run]
void __thiscall FUN_0097feb0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (local_2c = 0, 0 < *(int *)(param_1 + 0x34))) {
    local_30 = 0;
    do {
      iVar1 = 0;
      iVar3 = *(int *)(param_1 + 0x30) + local_30;
      if (0 < *(int *)(iVar3 + 0x80)) {
        iVar2 = iVar3 + 0x90;
        do {
          if (*(int *)(iVar2 + 0x3c) != 0) {
            FUN_0097cc50(iVar3,param_2);
          }
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0x40;
        } while (iVar1 < 2);
      }
      local_30 = local_30 + 0x110;
      local_2c = local_2c + 1;
    } while (local_2c < *(int *)(param_1 + 0x34));
  }
  return;
}

// 0097FFE0  FUN_0097ffe0  size=200  [run]
void __fastcall FUN_0097ffe0(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = FUN_00a1d5c0();
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) * 0x10;
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  if (iVar3 != 0) {
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    local_24 = *(undefined4 *)(param_1 + 0x50);
    local_14 = *(undefined4 *)(param_1 + 0x60);
    local_10 = *(undefined4 *)(param_1 + 100);
    local_18 = *(int *)(param_1 + 0x5c);
    local_4 = *(undefined4 *)(param_1 + 0x7c);
    local_8 = *(undefined4 *)(param_1 + 0x74);
    local_c = iVar3;
    if (local_18 == 0) {
      FUN_00979e80(local_8,0,&local_24);
    }
    else {
      FUN_0097edc0(&local_24);
    }
    FUN_00979ef0(*(undefined4 *)(param_1 + 0x78));
    FUN_0097f600(param_1 + 0x88,param_1);
    FUN_00dd4940(iVar3);
  }
  return;
}

// 009800B0  FUN_009800b0  size=55  [run]
void __fastcall FUN_009800b0(int param_1)

{
  if (0 < *(int *)(param_1 + 0x80)) {
    FUN_0097fbb0(param_1);
  }
  return;
}

// 009800F0  FUN_009800f0  size=29  [run]
void __fastcall FUN_009800f0(int param_1)

{
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_0097feb0(param_1 + 0xc,param_1 + 0x8c);
  }
  return;
}

// 00980110  FUN_00980110  size=33  [run]
void __fastcall FUN_00980110(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[6] = 0;
  return;
}

// 00980140  FUN_00980140  size=685  [run]
void __thiscall FUN_00980140(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*param_1 == 2) || (param_1[0x25] != 0)) {
    if (param_1[0x25] != 0) {
      local_18 = param_1 + 0x1b;
      local_14 = 0;
      while( true ) {
        iVar3 = param_1[0x16] + *local_18;
        piVar5 = (int *)(param_1[0x25] + local_14);
        uVar6 = (piVar5[2] / 0xffff + 1) * (iVar3 / 0xffff + 1);
        piVar5[7] = uVar6;
        if ((int)uVar6 < 1) break;
        uVar4 = -(uint)((int)((ulonglong)uVar6 * 0xb0 >> 0x20) != 0) |
                (uint)((ulonglong)uVar6 * 0xb0);
        puVar1 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar4) | uVar4 + 0x10,param_2);
        if (puVar1 == (uint *)0x0) {
          puVar2 = (uint *)0x0;
        }
        else {
          local_c = uVar6 - 1;
          *puVar1 = uVar6;
          puVar2 = puVar1 + 4;
          if (-1 < local_c) {
            puVar1 = puVar1 + 0x15;
            do {
              FUN_00401040(puVar1 + 0xc,0x14,2,FUN_00a1ac50);
              FUN_00a1ac50();
              puVar1[-1] = 0;
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              puVar1[4] = 0;
              puVar1[5] = 0;
              puVar1[6] = 0;
              puVar1[7] = 0;
              puVar1[8] = 0;
              puVar1[0xb] = 0;
              puVar1[9] = 0;
              puVar1[10] = 0;
              puVar1[-9] = 0;
              puVar1[-8] = 0;
              *(undefined2 *)(puVar1 + -7) = 0;
              puVar1[-6] = 0;
              puVar1[-5] = 0;
              puVar1[-4] = 0;
              puVar1[-3] = 0;
              puVar1[-2] = 0;
              local_10 = 2;
              do {
                FUN_00a19be0();
                local_10 = local_10 + -1;
              } while (local_10 != 0);
              FUN_00a19be0();
              puVar1 = puVar1 + 0x2c;
              local_c = local_c + -1;
            } while (-1 < local_c);
          }
        }
        piVar5[5] = (int)puVar2;
        if (puVar2 == (uint *)0x0) break;
        if (0xffff < iVar3) {
          iVar3 = 0xffff;
        }
        piVar5[3] = iVar3;
        iVar3 = piVar5[2];
        if (0xffff < iVar3) {
          iVar3 = 0xffff;
        }
        piVar5[4] = iVar3;
        local_c = 0;
        if (0 < piVar5[7]) {
          local_1c = 0;
          do {
            iVar7 = piVar5[5] + local_1c;
            iVar3 = FUN_00979a50(piVar5[3],piVar5[4],param_1[6],param_2);
            if (((iVar3 == 0) ||
                (iVar3 = FUN_00979ae0(*(undefined4 *)(*piVar5 + 0x30),param_1[0xe],param_3),
                iVar3 == 0)) || (iVar3 = FUN_00979b50(param_1[0xf],param_3), iVar3 == 0))
            goto LAB_009803dd;
            *(int *)(iVar7 + 0x20) = param_1[1];
            *(int *)(iVar7 + 0x24) = param_1[2];
            *(short *)(iVar7 + 0x28) = (short)param_1[3];
            *(int *)(iVar7 + 0x2c) = param_1[0x1f];
            local_1c = local_1c + 0xb0;
            *(int *)(iVar7 + 0x30) = param_1[0x20];
            *(int *)(iVar7 + 0x34) = param_1[0x21];
            *(int *)(iVar7 + 0x38) = param_1[0x22];
            *(int *)(iVar7 + 0x3c) = param_1[0x23];
            *(int *)(iVar7 + 0x40) = param_1[0x12];
            *(int *)(iVar7 + 0x44) = param_1[0x16];
            local_c = local_c + 1;
          } while (local_c < piVar5[7]);
        }
        local_18 = local_18 + 2;
        local_14 = local_14 + 0x20;
        piVar5[6] = 0;
        if (0x3f < local_14) {
          return;
        }
      }
    }
LAB_009803dd:
    *param_1 = -1;
  }
  return;
}

// 009803F0  FUN_009803f0  size=58  [run]
void __fastcall FUN_009803f0(int param_1)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_0097e560(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                 *(undefined4 *)(param_1 + 0x40));
    FUN_0097e560(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                 *(undefined4 *)(param_1 + 0x40));
  }
  return;
}

// 00980430  FUN_00980430  size=120  [run]
undefined4 __thiscall FUN_00980430(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    if (*(int *)(param_3 + 0x38) == 0) {
      FUN_0097e810(param_2,param_3,param_4);
      return 0;
    }
    if (*(int *)(param_3 + 0x38) == 1) {
      FUN_0097e810(param_2,param_3,param_4);
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_0097baf0(param_2,param_3,param_4);
    return 2;
  }
  return 0xffffffff;
}

// 009804B0  FUN_009804b0  size=164  [run]
void __fastcall FUN_009804b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
  }
  if (param_1[5] != 0) {
    iVar2 = 0;
    if (0 < (int)param_1[7]) {
      do {
        FUN_00979970();
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[7]);
    }
    iVar2 = param_1[5];
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + -0x10) + -1;
      if (-1 < iVar1) {
        iVar3 = *(int *)(iVar2 + -0x10) * 0xb0 + 0x74 + iVar2;
        do {
          iVar3 = iVar3 + -0xb0;
          FUN_00a1ac70();
          FUN_00401070(iVar3,0x14,2,FUN_00a1ac70);
          iVar1 = iVar1 + -1;
        } while (-1 < iVar1);
      }
      FUN_00dd4940(iVar2 + -0x10);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 009805D0  FUN_009805d0  size=557  [run]
int __thiscall FUN_009805d0(int param_1,float *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint *puVar9;
  float *pfVar10;
  int local_14;
  float *local_10;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    pcVar7 = (char *)(*(int *)(param_1 + 0x28) + 0x31);
    do {
      if (*pcVar7 == '\0') {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      }
      iVar3 = iVar3 + 1;
      pcVar7 = pcVar7 + 0x40;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
    uVar1 = *(uint *)(param_1 + 0x34);
    if ((int)uVar1 < 1) {
      return 1;
    }
    uVar8 = -(uint)((int)((ulonglong)uVar1 * 0x110 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x110)
    ;
    puVar4 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar8) | uVar8 + 0x10,param_3);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = uVar1;
      puVar4 = puVar4 + 4;
      puVar9 = puVar4;
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        FUN_00401040(puVar9 + 0x24,0x40,2,&LAB_0097cf00);
        FUN_0097cf30();
        puVar9 = puVar9 + 0x44;
      }
    }
    *(uint **)(param_1 + 0x30) = puVar4;
    if (puVar4 == (uint *)0x0) {
LAB_009807e4:
      FUN_00dd5650(&DAT_01651fe8);
      return 0;
    }
    local_8 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      local_14 = 0;
      iVar3 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x28);
        if (*(char *)(iVar3 + 0x31 + iVar2) == '\0') {
          iVar6 = *(int *)(iVar3 + 0x2c + iVar2);
          if (iVar6 == -1) {
            local_10 = (float *)(iVar3 + 0x24 + iVar2);
            fVar5 = *local_10;
            local_c = 0;
          }
          else {
            iVar6 = iVar6 * 0x40;
            local_c = iVar6 + iVar2;
            local_10 = (float *)(iVar3 + 0x24 + iVar2);
            fVar5 = (float)(*(int *)(iVar6 + 0x24 + iVar2) + 2 + (int)*local_10);
          }
          pfVar10 = (float *)(*(int *)(param_1 + 0x30) + local_14);
          iVar6 = FUN_0097d0e0(fVar5,param_3);
          if (iVar6 == 0) goto LAB_009807e4;
          pfVar10[0x10] = *param_2;
          pfVar10[0x11] = param_2[1];
          pfVar10[0x12] = param_2[4];
          pfVar10[0x13] = (float)(*(int *)(param_1 + 0x14) * 2);
          pfVar10[0x1a] = **(float **)(param_1 + 4);
          pfVar10[0x1b] = *(float *)(*(int *)(param_1 + 4) + 4);
          *pfVar10 = *(float *)(iVar3 + 0x10 + iVar2) * 2.0;
          pfVar10[1] = *(float *)(iVar3 + 0x14 + iVar2) * 2.0;
          pfVar10[2] = *(float *)(iVar3 + 0x18 + iVar2) * 2.0;
          pfVar10[3] = *(float *)(iVar3 + 0x1c + iVar2) * 2.0;
          pfVar10[0x14] = (float)(*(int *)(param_1 + 0x18) + *(int *)(iVar3 + 0x20 + iVar2) * 4);
          pfVar10[0x15] = (float)(int)*(char *)(iVar3 + 0x30 + iVar2);
          pfVar10[0x16] = *local_10;
          if (local_c == 0) {
            pfVar10[0x17] = 0.0;
            pfVar10[0x18] = 0.0;
            pfVar10[0x19] = 0.0;
          }
          else {
            pfVar10[0x17] = (float)(*(int *)(param_1 + 0x18) + *(int *)(local_c + 0x20) * 4);
            pfVar10[0x18] = (float)(uint)(*(char *)(local_c + 0x30) == '\0');
            pfVar10[0x19] = *(float *)(local_c + 0x24);
          }
          local_14 = local_14 + 0x110;
          *(undefined1 *)(iVar3 + 0x31 + iVar2) = 1;
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 0x40;
      } while (local_8 < *(int *)(param_1 + 0x2c));
    }
    iVar3 = 1;
  }
  return iVar3;
}

// 00980800  FUN_00980800  size=257  [run]
void __fastcall FUN_00980800(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = 0;
  if ((*(int *)(param_1 + 0x30) != 0) && (local_2c = 0, 0 < *(int *)(param_1 + 0x34))) {
    do {
      iVar5 = *(int *)(param_1 + 0x30) + iVar4;
      uVar2 = FUN_00a1d5c0();
      lVar1 = (ulonglong)*(uint *)(iVar5 + 0x78) * 0x10;
      iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
      if (iVar3 != 0) {
        local_20 = *(undefined4 *)(iVar5 + 0x54);
        local_1c = *(undefined4 *)(iVar5 + 0x58);
        local_24 = *(undefined4 *)(iVar5 + 0x50);
        local_14 = *(undefined4 *)(iVar5 + 0x60);
        local_10 = *(undefined4 *)(iVar5 + 100);
        local_18 = *(int *)(iVar5 + 0x5c);
        local_4 = *(undefined4 *)(iVar5 + 0x7c);
        local_8 = *(undefined4 *)(iVar5 + 0x74);
        local_c = iVar3;
        if (local_18 == 0) {
          FUN_00979e80(local_8,0,&local_24);
        }
        else {
          FUN_0097edc0(&local_24);
        }
        FUN_00979ef0(*(undefined4 *)(iVar5 + 0x78));
        FUN_0097f600(iVar5 + 0x88,iVar5);
        FUN_00dd4940(iVar3);
      }
      local_2c = local_2c + 1;
      iVar4 = iVar4 + 0x110;
    } while (local_2c < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00980910  FUN_00980910  size=98  [run]
void __fastcall FUN_00980910(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x34))) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x30) + iVar3;
      if (0 < *(int *)(iVar1 + 0x80)) {
        FUN_0097fbb0(iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x110;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00980980  FUN_00980980  size=18  [run]
void __fastcall FUN_00980980(int param_1)

{
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_00980910();
    return;
  }
  return;
}

// 009809A0  FUN_009809a0  size=205  [run]
void __fastcall FUN_009809a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00979550();
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 != 0) {
      FUN_00a1ac70();
      iVar2 = 1;
      do {
        FUN_00a1ac70();
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      FUN_00dd4920(iVar1);
    }
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_009804b0();
    FUN_009804b0();
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x94));
  }
  FUN_009793a0();
  return;
}

// 00980A70  FUN_00980a70  size=471  [run]
undefined4 __thiscall
FUN_00980a70(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            undefined4 param_7)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  
  FUN_009809a0();
  iVar3 = *(int *)(param_4 + *(int *)(param_2 + 0x20) * 0x1c);
  *param_1 = iVar3;
  param_1[6] = param_2;
  param_1[7] = param_3;
  if (iVar3 != 2) {
    return 1;
  }
  lVar2 = (ulonglong)*(uint *)(param_2 + 0x38) * 0x10;
  iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,param_7);
  param_1[4] = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_00dd3580(*(undefined4 *)(param_2 + 0x38),param_7);
    param_1[0x18] = iVar3;
    if (iVar3 != 0) {
      lVar2 = (ulonglong)*(uint *)(param_2 + 0x40) * 8;
      iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,param_7);
      param_1[0x19] = iVar3;
      if (iVar3 != 0) {
        lVar2 = (ulonglong)*(uint *)(param_2 + 0x40) * 8;
        iVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,param_7);
        param_1[0x1a] = iVar3;
        if (iVar3 != 0) {
          iVar3 = FUN_00dd3500(0x80,param_7);
          param_1[5] = iVar3;
          if (iVar3 != 0) {
            iVar3 = FUN_00a04840(param_1 + 1,*(undefined4 *)(param_2 + 0x24),
                                 *(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
            if (iVar3 != 0) {
              iVar3 = FUN_00a048e0(param_1 + 0x11,*(undefined4 *)(param_2 + 0x24),
                                   *(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40));
              if (iVar3 != 0) {
                *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 0x34);
                iVar3 = FUN_00a04a00();
                param_1[8] = iVar3;
                param_1[0x12] = *(int *)(param_2 + 0x38);
                param_1[0x13] = *(int *)(param_2 + 0x40);
                FUN_00a04990(param_1 + 3);
                uVar1 = *(ushort *)(param_2 + 0x28);
                if (uVar1 == 0xffff) {
                  param_1[0x14] = param_6;
                  param_1[0x15] = 1;
                }
                else {
                  iVar3 = *(int *)(param_6 + 0x58);
                  param_1[0x14] = *(int *)(iVar3 + (uint)uVar1 * 8);
                  param_1[0x15] = *(int *)(iVar3 + 4 + (uint)uVar1 * 8);
                }
                param_1[0xc] = param_6 + 0x40;
                FUN_00a04b10(param_1[5],param_1[8]);
                iVar3 = 0;
                if (0 < param_1[0x13]) {
                  puVar4 = (ushort *)param_1[0x11];
                  do {
                    if (((int)((uint)*puVar4 - (uint)*(ushort *)(param_1 + 9)) < 0) ||
                       (param_1[0x12] <= (int)((uint)*puVar4 - (uint)*(ushort *)(param_1 + 9)))) {
                      FUN_00dd5650(&DAT_0165200c);
                      return 0;
                    }
                    iVar3 = iVar3 + 1;
                    puVar4 = puVar4 + 1;
                  } while (iVar3 < param_1[0x13]);
                }
                return 1;
              }
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

// 00980C50  FUN_00980c50  size=336  [run]
undefined4 __thiscall FUN_00980c50(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  if (*param_1 == 2) {
    puVar4 = (undefined4 *)FUN_00dd3580(0x40,param_2);
    iVar7 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
    }
    param_1[0x25] = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      puVar6 = (uint *)(param_1 + 0x1c);
      while( true ) {
        iVar1 = param_1[6];
        iVar2 = param_1[0x25];
        if ((int)*puVar6 < 1) break;
        lVar3 = (ulonglong)*puVar6 * 4;
        iVar5 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,param_2);
        *(int *)(iVar2 + 4 + iVar7) = iVar5;
        if (iVar5 == 0) break;
        *(int *)(iVar2 + iVar7) = iVar1;
        iVar7 = iVar7 + 0x20;
        puVar6 = puVar6 + 2;
        if (0x3f < iVar7) {
          FUN_00979430();
          return 1;
        }
      }
    }
  }
  else {
    iVar7 = FUN_00dd3500(0x70,param_2);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0097bab0();
    }
    param_1[0x24] = iVar7;
    if (iVar7 != 0) {
      FUN_009795d0(param_1);
      return 1;
    }
  }
  if (param_1[0x25] != 0) {
    FUN_009804b0();
    FUN_009804b0();
    FUN_00dd4940(param_1[0x25]);
    param_1[0x25] = 0;
  }
  *param_1 = -1;
  return 0;
}

// 00980DA0  FUN_00980da0  size=204  [run]
void __fastcall FUN_00980da0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      do {
        FUN_0097cfe0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x34));
    }
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + -0x10) + -1;
      if (-1 < iVar1) {
        iVar3 = *(int *)(iVar2 + -0x10) * 0x110 + 0x90 + iVar2;
        do {
          iVar3 = iVar3 + -0x110;
          FUN_00401070(iVar3,0x40,2,&LAB_0097cd40);
          iVar1 = iVar1 + -1;
        } while (-1 < iVar1);
      }
      FUN_00dd4940(iVar2 + -0x10);
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

// 00980E70  FUN_00980e70  size=29  [run]
void __thiscall FUN_00980e70(int param_1,undefined4 param_2)

{
  FUN_00980da0();
  *(undefined4 *)(param_1 + 4) = param_2;
  FUN_00a04990(param_1);
  return;
}

// 00980E90  FUN_00980e90  size=45  [run]
void __fastcall FUN_00980e90(int param_1)

{
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_00980da0();
    FUN_00dd4920(*(undefined4 *)(param_1 + 0xac));
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}

// 00980EC0  FUN_00980ec0  size=220  [run]
void __fastcall FUN_00980ec0(undefined4 *param_1)

{
  if (param_1[0x24] != 0) {
    FUN_00dd4940(param_1[0x24]);
  }
  if (param_1[0x25] != 0) {
    FUN_00dd4940(param_1[0x25]);
  }
  if (param_1[0x26] != 0) {
    FUN_00dd4940(param_1[0x26]);
  }
  if (param_1[0x27] != 0) {
    FUN_00dd4940(param_1[0x27]);
  }
  if (param_1[0x28] != 0) {
    FUN_00dd4940(param_1[0x28]);
  }
  if (param_1[0x2b] != 0) {
    FUN_00980da0();
    FUN_00dd4920(param_1[0x2b]);
    param_1[0x2b] = 0;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  _memset(param_1 + 3,0,0x80);
  return;
}

// 00980FA0  FUN_00980fa0  size=65  [run]
void __thiscall FUN_00980fa0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_00980ec0();
  *(undefined4 *)(param_1 + 4) = param_2;
  uVar1 = FUN_00a04a00();
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_00a04990(param_1 + 0x8c);
  FUN_00a04b10(param_1 + 0xc,*(undefined4 *)(param_1 + 8));
  return;
}

// 00980FF0  FUN_00980ff0  size=510  [run]
undefined4 __thiscall
FUN_00980ff0(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)param_1[1];
  iVar4 = 0;
  *param_1 = 3;
  if (0 < piVar1[1]) {
    do {
      iVar2 = (uint)*(ushort *)(*piVar1 + iVar4 * 2) * 0x98;
      iVar5 = *(int *)(iVar2 + param_2);
      if (iVar5 == -1) {
        *param_1 = -1;
        *param_1 = -1;
        return 0;
      }
      if (iVar5 != 3) {
        if (*param_1 == 3) {
          *param_1 = iVar5;
        }
        else if (*param_1 != iVar5) {
          *param_1 = 2;
        }
        param_1[0x29] = param_1[0x29] + *(int *)(iVar2 + 0x58 + param_2);
        param_1[0x2a] = param_1[0x2a] + *(int *)(iVar2 + 0x5c + param_2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < piVar1[1]);
    if (*param_1 == 2) {
      if (param_1[0x29] < 1) {
        return 1;
      }
      iVar4 = FUN_0097d340(param_5);
      if (iVar4 != 0) {
        iVar4 = 0;
        iVar5 = 0;
        if (0 < *(int *)(param_1[1] + 4)) {
          do {
            iVar2 = (uint)*(ushort *)(*(int *)param_1[1] + iVar4 * 2) * 0x98 + param_2;
            if (0 < *(int *)(iVar2 + 0x58)) {
              iVar3 = iVar5 * 0x10;
              *(int *)(iVar2 + 0x7c) = param_1[0x24] + iVar3;
              *(int *)(iVar2 + 0x80) = param_1[0x25] + iVar3;
              if (param_1[0x26] != 0) {
                *(int *)(iVar2 + 0x84) = param_1[0x26] + iVar3;
              }
              if (param_1[0x27] != 0) {
                *(int *)(iVar2 + 0x88) = param_1[0x27] + iVar3;
              }
              if (param_1[0x28] != 0) {
                *(int *)(iVar2 + 0x8c) = param_1[0x28] + iVar3;
              }
              iVar5 = iVar5 + *(int *)(iVar2 + 0x58);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1[1] + 4));
        }
        if (param_4 == 0) {
          return 1;
        }
        if (param_1[0x2a] < 1) {
          return 1;
        }
        iVar4 = FUN_00dd3500(0x40,param_5);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 4) = 0;
          *(undefined4 *)(iVar4 + 8) = 0;
          *(undefined4 *)(iVar4 + 0xc) = 0;
          *(undefined4 *)(iVar4 + 0x10) = 0;
          *(undefined4 *)(iVar4 + 0x14) = 0;
          *(undefined4 *)(iVar4 + 0x18) = 0;
          *(undefined4 *)(iVar4 + 0x1c) = 0;
          *(undefined4 *)(iVar4 + 0x20) = 0;
          *(undefined4 *)(iVar4 + 0x24) = 0;
          *(undefined4 *)(iVar4 + 0x28) = 0;
          *(undefined4 *)(iVar4 + 0x2c) = 0;
          *(undefined4 *)(iVar4 + 0x30) = 0;
          *(undefined4 *)(iVar4 + 0x34) = 0;
        }
        param_1[0x2b] = iVar4;
        if (iVar4 != 0) {
          FUN_00980da0();
          *(int *)(iVar4 + 4) = param_4;
          FUN_00a04990(iVar4);
          return 1;
        }
      }
      *param_1 = -1;
      return 0;
    }
  }
  iVar4 = 0;
  if (piVar1[1] < 1) {
    return 1;
  }
  do {
    *(int *)((uint)*(ushort *)(*(int *)param_1[1] + iVar4 * 2) * 0x98 + param_2) = *param_1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < *(int *)(param_1[1] + 4));
  return 1;
}

// 00981200  FUN_00981200  size=166  [run]
void __thiscall FUN_00981200(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[0x2b] != 0) {
    iVar1 = FUN_0097fd40(param_1 + 0x24,param_1[0x29],param_1[0x2a],param_2);
    if (iVar1 == 0) {
      *param_1 = 0xffffffff;
      if (param_1[0x2b] != 0) {
        FUN_00980da0();
        FUN_00dd4920(param_1[0x2b]);
        param_1[0x2b] = 0;
        return;
      }
    }
    else {
      iVar1 = param_1[0x2b];
      FUN_0097eaa0();
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  return;
}

// 009812B0  FUN_009812b0  size=70  [run]
void __fastcall FUN_009812b0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[0x2b] != 0) {
    iVar1 = FUN_0097fe30();
    if (iVar1 == 0) {
      if (param_1[0x2b] != 0) {
        FUN_00980da0();
        FUN_00dd4920(param_1[0x2b]);
        param_1[0x2b] = 0;
      }
      *param_1 = 0xffffffff;
    }
  }
  return;
}

// 00981300  FUN_00981300  size=93  [run]
void __thiscall FUN_00981300(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[0x2b] != 0) {
    iVar1 = FUN_009805d0(param_1 + 0x24,param_2);
    if (iVar1 == 0) {
      *param_1 = 0xffffffff;
      if (param_1[0x2b] != 0) {
        FUN_00980da0();
        FUN_00dd4920(param_1[0x2b]);
        param_1[0x2b] = 0;
        return;
      }
    }
    else {
      FUN_00980800();
    }
  }
  return;
}

// 00981360  FUN_00981360  size=340  [run]
undefined4 __thiscall FUN_00981360(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  
  iVar6 = *(int *)(param_1[5] + 4);
  *param_1 = iVar6;
  if (iVar6 != 2) {
    return 1;
  }
  uVar1 = *(uint *)(param_1[2] + 0x10);
  uVar5 = -(uint)((int)((ulonglong)uVar1 * 0xb0 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0xb0);
  puVar3 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,param_3);
  iVar6 = 0;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    puVar8 = puVar3;
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      *puVar8 = 0xffffffff;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[0x2b] = 0;
      puVar8[0x29] = 0;
      puVar8[0x2a] = 0;
      puVar8[0x24] = 0;
      puVar8[0x25] = 0;
      puVar8[0x26] = 0;
      puVar8[0x27] = 0;
      puVar8[0x28] = 0;
      _memset(puVar8 + 3,0,0x80);
      puVar8 = puVar8 + 0x2c;
    }
  }
  param_1[6] = (int)puVar3;
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  if (0 < *(int *)(param_1[2] + 0x10)) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)(param_1[2] + 0xc);
      iVar9 = param_1[6] + iVar7;
      FUN_00980ec0();
      *(int *)(iVar9 + 4) = iVar2 + iVar6 * 8;
      uVar4 = FUN_00a04a00();
      *(undefined4 *)(iVar9 + 8) = uVar4;
      FUN_00a04990(iVar9 + 0x8c);
      FUN_00a04b10(iVar9 + 0xc,*(undefined4 *)(iVar9 + 8));
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0xb0;
    } while (iVar6 < *(int *)(param_1[2] + 0x10));
  }
  return 1;
}

// 009814C0  FUN_009814c0  size=663  [run]
undefined4 __thiscall FUN_009814c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if (*param_1 != 2) {
    return 1;
  }
  if (param_1[6] == 0) {
LAB_00981748:
    *param_1 = -1;
    return 0;
  }
  param_3 = 0;
  if (0 < *(int *)(param_1[2] + 0x10)) {
    do {
      iVar3 = param_1[3];
      piVar7 = (int *)(param_3 * 0xb0 + param_1[6]);
      iVar5 = 0;
      piVar1 = (int *)piVar7[1];
      *piVar7 = 3;
      if (piVar1[1] < 1) {
LAB_00981696:
        iVar3 = 0;
        if (0 < piVar1[1]) {
          do {
            *(int *)((uint)*(ushort *)(*(int *)piVar7[1] + iVar3 * 2) * 0x98 + param_2) = *piVar7;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(piVar7[1] + 4));
        }
      }
      else {
        do {
          iVar2 = (uint)*(ushort *)(*piVar1 + iVar5 * 2) * 0x98;
          iVar6 = *(int *)(iVar2 + param_2);
          if (iVar6 == -1) {
            *piVar7 = -1;
            *piVar7 = -1;
            *param_1 = -1;
            return 0;
          }
          if (iVar6 != 3) {
            if (*piVar7 == 3) {
              *piVar7 = iVar6;
            }
            else if (*piVar7 != iVar6) {
              *piVar7 = 2;
            }
            piVar7[0x29] = piVar7[0x29] + *(int *)(iVar2 + 0x58 + param_2);
            piVar7[0x2a] = piVar7[0x2a] + *(int *)(iVar2 + 0x5c + param_2);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < piVar1[1]);
        if (*piVar7 != 2) goto LAB_00981696;
        if (0 < piVar7[0x29]) {
          iVar5 = FUN_0097d340(param_4);
          if (iVar5 == 0) {
LAB_00981742:
            *piVar7 = -1;
            goto LAB_00981748;
          }
          iVar5 = 0;
          if (0 < *(int *)(piVar7[1] + 4)) {
            iVar6 = 0;
            do {
              iVar2 = (uint)*(ushort *)(*(int *)piVar7[1] + iVar6 * 2) * 0x98 + param_2;
              if (0 < *(int *)(iVar2 + 0x58)) {
                iVar4 = iVar5 * 0x10;
                *(int *)(iVar2 + 0x7c) = piVar7[0x24] + iVar4;
                *(int *)(iVar2 + 0x80) = piVar7[0x25] + iVar4;
                if (piVar7[0x26] != 0) {
                  *(int *)(iVar2 + 0x84) = piVar7[0x26] + iVar4;
                }
                if (piVar7[0x27] != 0) {
                  *(int *)(iVar2 + 0x88) = piVar7[0x27] + iVar4;
                }
                if (piVar7[0x28] != 0) {
                  *(int *)(iVar2 + 0x8c) = piVar7[0x28] + iVar4;
                }
                iVar5 = iVar5 + *(int *)(iVar2 + 0x58);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(piVar7[1] + 4));
          }
          if ((iVar3 != 0) && (0 < piVar7[0x2a])) {
            iVar5 = FUN_00dd3500(0x40,param_4);
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              *(undefined4 *)(iVar5 + 4) = 0;
              *(undefined4 *)(iVar5 + 8) = 0;
              *(undefined4 *)(iVar5 + 0xc) = 0;
              *(undefined4 *)(iVar5 + 0x10) = 0;
              *(undefined4 *)(iVar5 + 0x14) = 0;
              *(undefined4 *)(iVar5 + 0x18) = 0;
              *(undefined4 *)(iVar5 + 0x1c) = 0;
              *(undefined4 *)(iVar5 + 0x20) = 0;
              *(undefined4 *)(iVar5 + 0x24) = 0;
              *(undefined4 *)(iVar5 + 0x28) = 0;
              *(undefined4 *)(iVar5 + 0x2c) = 0;
              *(undefined4 *)(iVar5 + 0x30) = 0;
              *(undefined4 *)(iVar5 + 0x34) = 0;
            }
            piVar7[0x2b] = iVar5;
            if (iVar5 == 0) goto LAB_00981742;
            FUN_00980da0();
            *(int *)(iVar5 + 4) = iVar3;
            FUN_00a04990(iVar5);
          }
        }
      }
      iVar3 = *piVar7;
      if (iVar3 == -1) goto LAB_00981748;
      if (param_3 == 0) {
        *param_1 = iVar3;
      }
      else if (*param_1 != iVar3) {
        *param_1 = 2;
      }
      param_3 = param_3 + 1;
    } while (param_3 < *(int *)(param_1[2] + 0x10));
  }
  return 1;
}

// 009817E0  FUN_009817e0  size=75  [run]
void __fastcall FUN_009817e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_00980ec0();
    }
    FUN_00dd4940(iVar1 + -4);
  }
  param_1[6] = 0;
  *param_1 = 0xffffffff;
  return;
}

// 00981830  FUN_00981830  size=40  [run]
void __fastcall FUN_00981830(undefined4 *param_1)

{
  FUN_009817e0();
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[6] = 0;
  return;
}

// 00981860  FUN_00981860  size=144  [run]
bool __thiscall FUN_00981860(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  FUN_009817e0();
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[6] = 0;
  param_1[2] = param_2;
  iVar1 = FUN_00a06f70(*param_2);
  param_1[1] = iVar1;
  param_1[5] = param_4 + (uint)*(ushort *)(param_2 + 1) * 8;
  param_1[4] = *param_2;
  if (*(int *)(param_3 + 0x8c) <= (int)(uint)*(ushort *)(param_2 + 2)) {
    param_1[3] = 0;
    return iVar1 != 0;
  }
  param_1[3] = *(int *)(param_3 + 0x88) + (uint)*(ushort *)(param_2 + 2) * 8;
  return iVar1 != 0;
}

// 009818F0  FUN_009818f0  size=40  [run]
void __fastcall FUN_009818f0(undefined4 *param_1)

{
  FUN_009817e0();
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[6] = 0;
  return;
}

// 009819C0  FUN_009819c0  size=46  [run]
undefined4 __fastcall FUN_009819c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = SteamAPI_Init();
  if (cVar1 == '\0') {
    FUN_00dd5650("SteamAPI_Init() is failed");
    return 0;
  }
  uVar2 = SteamRemoteStorage();
  *(undefined4 *)(param_1 + 8) = uVar2;
  return 1;
}

// 009819F0  FUN_009819f0  size=58  [run]
void __fastcall FUN_009819f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (((*(int *)(param_1 + 0x14) != 1) && (iVar1 = SteamUserStats(), iVar1 != 0)) &&
     (iVar1 = SteamUser(), iVar1 != 0)) {
    puVar2 = (undefined4 *)SteamUserStats();
    uVar3 = (**(code **)*puVar2)();
    *(uint *)(param_1 + 0x14) = uVar3 & 0xff;
    if ((uVar3 & 0xff) != 0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
  }
  return;
}

// 00981A30  FUN_00981a30  size=54  [run]
undefined4 __fastcall FUN_00981a30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x48))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x4c))();
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00981a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x30))();
        return uVar2;
      }
    }
  }
  return 0;
}

// 00981A70  FUN_00981a70  size=74  [run]
undefined1 __thiscall
FUN_00981a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x48))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x4c))();
      if (cVar1 != '\0') {
        uVar2 = (**(code **)**(undefined4 **)(param_1 + 8))(param_2,param_3,param_4);
        return uVar2;
      }
    }
  }
  return 0;
}

// 00981AC0  FUN_00981ac0  size=54  [run]
undefined4 __fastcall FUN_00981ac0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x48))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x4c))();
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00981aee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(int **)(param_1 + 8) + 4))();
        return uVar2;
      }
    }
  }
  return 0;
}

// 00981B00  FUN_00981b00  size=52  [run]
void __fastcall FUN_00981b00(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x48))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x4c))();
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00981b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(param_1 + 8) + 0xc))();
        return;
      }
    }
  }
  return;
}

// 00981B40  FUN_00981b40  size=29  [run]
undefined4 FUN_00981b40(void)

{
  int iVar1;
  
  iVar1 = SteamUser();
  if (iVar1 != 0) {
    iVar1 = SteamUserStats();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00981CB0  FUN_00981cb0  size=46  [run]
undefined4 __fastcall FUN_00981cb0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = SteamAPI_Init();
  if (cVar1 == '\0') {
    FUN_00dd5650("SteamAPI_Init() is failed");
    return 0;
  }
  uVar2 = SteamRemoteStorage();
  *(undefined4 *)(param_1 + 8) = uVar2;
  return 1;
}

// 00981D10  FUN_00981d10  size=64  [run]
void __thiscall FUN_00981d10(int param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  
  if ((*(int **)(param_1 + 0x18) != (int *)0x0) &&
     (puVar1 = (&PTR_s_ACH_FILE_R_00_CLEAR_01887c74)[param_2 * 100], **(int **)(param_1 + 0x18) != 0
     )) {
    piVar2 = (int *)SteamUserStats();
    (**(code **)(*piVar2 + 0x1c))(puVar1);
    piVar2 = (int *)SteamUserStats();
    (**(code **)(*piVar2 + 0x28))();
  }
  return;
}

