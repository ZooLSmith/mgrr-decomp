// src/misc/EnemySetReader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CA5670..00CA6A50, 13 functions

#include "mgrr.h"

// 00CA5670  EnemySetReader::requestEnd  size=183  [class]
void __thiscall EnemySetReader::requestEnd(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (((((*(uint *)(param_1 + 0x1190) & 0x80000000) != 0) && (-1 < (int)param_2)) &&
      (param_2 < 0x20)) &&
     ((param_1 = param_2 * 0x58 + 0x404 + param_1, param_1 != 0 &&
      ((*(uint *)(param_1 + 0x54) & 0x80000000) != 0)))) {
    if (-1 < *(int *)(param_1 + 0x44)) {
      requestEnd(*(int *)(param_1 + 0x44));
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        puVar1 = *(undefined4 **)(param_1 + iVar3 * 4);
        iVar2 = puVar1[2];
        if (iVar2 < 0) {
          FUN_00dd5650(&DAT_016b1e98,*puVar1,puVar1[1]);
        }
        else if ((iVar2 != 0) && (puVar1[2] = iVar2 + -1, iVar2 + -1 == 0)) {
          FUN_00a00bd0(*puVar1,puVar1[1]);
          iVar2 = FUN_00e9e960(*puVar1,0);
          if (iVar2 == 0) {
            puVar1[3] = 1;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x40));
    }
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0x8fffffff;
  }
  return;
}

// 00CA5730  EnemySetReader::requestEnd_2  size=56  [class]
void EnemySetReader::requestEnd_2(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c18740(param_1);
  if (iVar1 == -1) {
    FUN_00dd5650(&DAT_016b1ee0,param_1);
    return;
  }
  requestEnd(iVar1);
  return;
}

// 00CA5770  FUN_00ca5770  size=101  [between]
void __fastcall FUN_00ca5770(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if ((*(uint *)(param_1 + 0x1190) & 0x80000000) != 0) {
    uVar2 = 0;
    piVar3 = (int *)(param_1 + 0x44c);
    do {
      if (((((*(uint *)(param_1 + 0x1190) & 0x80000000) != 0) && (-1 < (int)uVar2)) &&
          (uVar2 < 0x20)) && (piVar3 != (int *)&DAT_00000048)) {
        iVar1 = *piVar3;
        while (0 < iVar1) {
          EnemySetReader::requestEnd(uVar2);
          iVar1 = *piVar3;
        }
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x16;
    } while (uVar2 < 0x20);
    *(undefined4 *)(param_1 + 0x1184) = 0;
  }
  return;
}

// 00CA57E0  FUN_00ca57e0  size=74  [between]
uint __thiscall FUN_00ca57e0(int param_1,uint param_2)

{
  if (((((*(uint *)(param_1 + 0x1190) & 0x80000000) != 0) && (-1 < (int)param_2)) &&
      (param_2 < 0x20)) &&
     ((param_1 = param_2 * 0x58 + 0x404 + param_1, param_1 != 0 &&
      ((int)*(uint *)(param_1 + 0x54) < 0)))) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      return 1;
    }
    return *(uint *)(param_1 + 0x54) >> 0x1e & 1;
  }
  return 0;
}

// 00CA5830  FUN_00ca5830  size=161  [between]
undefined4 __thiscall FUN_00ca5830(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (((((*(uint *)(param_1 + 0x1190) & 0x80000000) == 0) || ((int)param_2 < 0)) || (0x1f < param_2)
      ) || (((param_1 = param_2 * 0x58 + 0x404 + param_1, param_1 == 0 ||
             (-1 < (int)*(uint *)(param_1 + 0x54))) ||
            (((*(uint *)(param_1 + 0x54) & 0x10000000) != 0 ||
             (iVar2 = FUN_00ca57e0(param_2), iVar2 == 0)))))) {
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      puVar1 = *(undefined4 **)(param_1 + iVar2 * 4);
      iVar3 = FUN_00a00ca0(*puVar1,puVar1[1]);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_00a00f80(*puVar1,puVar1[1]);
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x40));
  }
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x10000000;
  return 1;
}

// 00CA5A30  FUN_00ca5a30  size=254  [between]
undefined4 __fastcall FUN_00ca5a30(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_4;
  
  local_4 = 0;
  piVar5 = param_1 + 0x101;
  do {
    if ((((((param_1[0x464] & 0x80000000U) != 0) && (-1 < (int)local_4)) && (local_4 < 0x20)) &&
        ((piVar5 != (int *)0x0 && ((piVar5[0x15] & 0x80000000U) != 0)))) &&
       (iVar6 = 0, 0 < piVar5[0x10])) {
      do {
        piVar1 = (int *)piVar5[iVar6];
        if (piVar1[3] != 0) {
          iVar4 = *piVar1;
          iVar2 = 0;
          piVar3 = param_1;
          if (0 < param_1[0x100]) {
            do {
              if ((0 < piVar3[2]) && (*piVar3 == iVar4)) goto LAB_00ca5b03;
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 4;
            } while (iVar2 < param_1[0x100]);
          }
          iVar2 = 0;
          if (0 < param_1[0x463]) {
            piVar3 = param_1 + 0x3c1;
            do {
              if ((0 < piVar3[2]) && (*piVar3 == iVar4)) goto LAB_00ca5b03;
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 4;
            } while (iVar2 < param_1[0x463]);
          }
          iVar4 = FUN_00a00e70(iVar4,piVar1[1]);
          if (iVar4 == 0) {
            return 1;
          }
          *(undefined4 *)(piVar5[iVar6] + 0xc) = 0;
        }
LAB_00ca5b03:
        iVar6 = iVar6 + 1;
      } while (iVar6 < piVar5[0x10]);
    }
    local_4 = local_4 + 1;
    piVar5 = piVar5 + 0x16;
    if (0x1f < local_4) {
      return 0;
    }
  } while( true );
}

// 00CA5B40  FUN_00ca5b40  size=139  [between]
void FUN_00ca5b40(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40 [16];
  
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_44 = 0;
  local_48 = 0;
  FUN_00c95ec0(param_2,&local_54);
  piVar1 = local_50 + local_48;
  for (piVar2 = local_50; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (-1 < *piVar2) {
      EnemySetReader::requestEnd(*piVar2);
    }
  }
  if ((local_50 != (int *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return;
}

// 00CA5BD0  EnemySetReader::requestEnd_3  size=277  [class]
void __fastcall EnemySetReader::requestEnd_3(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint *local_8;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 0x1184) < 1) {
    *(undefined4 *)(param_1 + 0x1184) = 0;
    return;
  }
  local_8 = (uint *)(param_1 + 0x1104);
  do {
    uVar2 = *local_8;
    if ((((-1 < (int)uVar2) && ((*(uint *)(param_1 + 0x1190) & 0x80000000) != 0)) && (uVar2 < 0x20))
       && ((iVar1 = uVar2 * 0x58 + 0x404 + param_1, iVar1 != 0 &&
           ((*(uint *)(iVar1 + 0x54) & 0x80000000) != 0)))) {
      if (-1 < *(int *)(iVar1 + 0x44)) {
        requestEnd(*(int *)(iVar1 + 0x44));
      }
      *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + -1;
      iVar5 = 0;
      if (0 < *(int *)(iVar1 + 0x40)) {
        do {
          puVar3 = *(undefined4 **)(iVar1 + iVar5 * 4);
          iVar4 = puVar3[2];
          if (iVar4 < 0) {
            FUN_00dd5650(&DAT_016b1e98,*puVar3,puVar3[1]);
          }
          else if ((iVar4 != 0) && (puVar3[2] = iVar4 + -1, iVar4 + -1 == 0)) {
            FUN_00a00bd0(*puVar3,puVar3[1]);
            iVar4 = FUN_00e9e960(*puVar3,0);
            if (iVar4 == 0) {
              puVar3[3] = 1;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar1 + 0x40));
      }
      *(uint *)(iVar1 + 0x54) = *(uint *)(iVar1 + 0x54) & 0x8fffffff;
    }
    local_8 = local_8 + 1;
    local_4 = local_4 + 1;
  } while (local_4 < *(int *)(param_1 + 0x1184));
  *(undefined4 *)(param_1 + 0x1184) = 0;
  return;
}

// 00CA66E0  FUN_00ca66e0  size=315  [callgraph]
void __fastcall FUN_00ca66e0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint local_88;
  uint local_80;
  undefined1 local_7c [124];
  
  FUN_00ca33f0();
  *(undefined4 *)(param_1 + 0x118c) = 0;
  local_80 = 0;
  _memset(local_7c,0,0x7c);
  local_88 = 0;
  puVar8 = (uint *)(param_1 + 0x458);
  do {
    if ((((((puVar8[-1] != 0) && ((*(uint *)(param_1 + 0x1190) & 0x80000000) != 0)) &&
          (-1 < (int)local_88)) && ((local_88 < 0x20 && (puVar8 != (uint *)0x54)))) &&
        (((int)*puVar8 < 0 && ((puVar8[-2] != 0 || ((*puVar8 >> 0x1e & 1) != 0)))))) &&
       (iVar5 = 0, 0 < (int)puVar8[-5])) {
      iVar4 = *(int *)(param_1 + 0x118c);
      puVar6 = puVar8 + -0x15;
      do {
        uVar1 = *puVar6;
        iVar3 = 0;
        if (0 < iVar4) {
          do {
            if (uVar1 == *(uint *)(local_7c + iVar3 * 4 + -4)) goto LAB_00ca678e;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x118c));
        }
        if (uVar1 != 0) {
          *(uint *)(local_7c + iVar4 * 4 + -4) = uVar1;
          iVar4 = iVar4 + 1;
          *(int *)(param_1 + 0x118c) = iVar4;
        }
LAB_00ca678e:
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < (int)puVar8[-5]);
    }
    local_88 = local_88 + 1;
    puVar8 = puVar8 + 0x16;
    if (0x1f < local_88) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x118c)) {
        puVar7 = (undefined4 *)(param_1 + 0xf04);
        do {
          puVar2 = *(undefined4 **)(local_7c + iVar5 * 4 + -4);
          *puVar7 = *puVar2;
          puVar7[1] = puVar2[1];
          puVar7[2] = puVar2[2];
          puVar7[3] = puVar2[3];
          FUN_00a00a60(*puVar7,puVar7[1]);
          iVar5 = iVar5 + 1;
          puVar7 = puVar7 + 4;
        } while (iVar5 < *(int *)(param_1 + 0x118c));
      }
      if ((*(uint *)(param_1 + 0x1190) & 0x80000000) == 0) {
        return;
      }
      FUN_00ca5770();
      return;
    }
  } while( true );
}

// 00CA6820  EnemySetReader::requestStart  size=212  [class]
void __thiscall EnemySetReader::requestStart(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    *(uint *)(param_1 + 0x1190) = *(uint *)(param_1 + 0x1190) | 0x40000000;
    if ((((*(uint *)(param_1 + 0x1190) & 0x80000000) == 0) || ((int)param_2 < 0)) ||
       (0x1f < param_2)) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_2 * 0x58 + 0x404 + param_1;
    }
    iVar2 = FUN_00ca5a30();
    if ((iVar2 != 0) || (iVar2 = FUN_00a4c790(), iVar2 == 0)) {
      *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
      *(undefined4 *)(param_1 + 0x1188) = 1;
      return;
    }
    if (iVar3 == 0) {
      FUN_00dd5650(&DAT_016b2050);
      return;
    }
    if ((*(uint *)(iVar3 + 0x54) & 0x80000000) == 0) break;
    *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    iVar2 = 0;
    if (0 < *(int *)(iVar3 + 0x40)) {
      do {
        puVar1 = *(undefined4 **)(iVar3 + iVar2 * 4);
        if (puVar1[2] == 0) {
          FUN_00a00a60(*puVar1,puVar1[1]);
          puVar1[3] = 0;
        }
        puVar1[2] = puVar1[2] + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar3 + 0x40));
    }
    *(uint *)(iVar3 + 0x54) = *(uint *)(iVar3 + 0x54) | 0x40000000;
    param_2 = *(uint *)(iVar3 + 0x44);
    if ((int)param_2 < 0) {
      return;
    }
  }
  return;
}

// 00CA6900  EnemySetReader::requestStart_2  size=56  [class]
void EnemySetReader::requestStart_2(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c18740(param_1);
  if (iVar1 == -1) {
    FUN_00dd5650(&DAT_016b2090,param_1);
    return;
  }
  requestStart(iVar1);
  return;
}

// 00CA6940  EnemySetReader::requestStart_3  size=257  [class]
void __fastcall EnemySetReader::requestStart_3(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  if ((*(uint *)(param_1 + 0x1190) & 0x80000000) != 0) {
    iVar4 = param_1 + 0x404;
    local_8 = 0;
    do {
      *(uint *)(param_1 + 0x1190) = *(uint *)(param_1 + 0x1190) | 0x40000000;
      if ((((*(uint *)(param_1 + 0x1190) & 0x80000000) == 0) || ((int)local_8 < 0)) ||
         (iVar3 = iVar4, 0x1f < local_8)) {
        iVar3 = 0;
      }
      iVar2 = FUN_00ca5a30();
      if ((iVar2 == 0) && (iVar2 = FUN_00a4c790(), iVar2 != 0)) {
        if (iVar3 == 0) {
          FUN_00dd5650(&DAT_016b2050);
        }
        else if ((*(uint *)(iVar3 + 0x54) & 0x80000000) != 0) {
          *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
          iVar2 = 0;
          if (0 < *(int *)(iVar3 + 0x40)) {
            do {
              puVar1 = *(undefined4 **)(iVar3 + iVar2 * 4);
              if (puVar1[2] == 0) {
                FUN_00a00a60(*puVar1,puVar1[1]);
                puVar1[3] = 0;
              }
              puVar1[2] = puVar1[2] + 1;
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(iVar3 + 0x40));
          }
          *(uint *)(iVar3 + 0x54) = *(uint *)(iVar3 + 0x54) | 0x40000000;
          if (-1 < *(int *)(iVar3 + 0x44)) {
            requestStart(*(int *)(iVar3 + 0x44));
          }
        }
      }
      else {
        *(int *)(iVar3 + 0x4c) = *(int *)(iVar3 + 0x4c) + 1;
        *(undefined4 *)(param_1 + 0x1188) = 1;
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x58;
    } while (local_8 < 0x20);
  }
  return;
}

// 00CA6A50  FUN_00ca6a50  size=139  [callgraph]
void FUN_00ca6a50(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40 [16];
  
  local_50 = local_40;
  local_54 = 0;
  local_4c = 0x10;
  local_44 = 0;
  local_48 = 0;
  FUN_00c95ec0(param_2,&local_54);
  piVar1 = local_50 + local_48;
  for (piVar2 = local_50; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (-1 < *piVar2) {
      EnemySetReader::requestStart(*piVar2);
    }
  }
  if ((local_50 != (int *)0x0) && (local_48 = 0, local_44 != 0)) {
    FUN_00dd48d0(local_50,0);
  }
  return;
}

