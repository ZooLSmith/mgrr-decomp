// src/sound/SoundSeHitCategoryWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009C9E30..009CB340, 19 functions

#include "types.h"

// 009C9E30  FUN_009c9e30  size=88  [callgraph]
void __fastcall FUN_009c9e30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_00dd4940(*piVar1);
      *piVar1 = 0;
    }
    if (piVar1[1] != 0) {
      FUN_00dd4940(piVar1[1]);
      piVar1[1] = 0;
    }
    piVar1[2] = -1;
    FUN_00dd4920(*param_1);
    *param_1 = 0;
  }
  param_1[2] = 0;
  return;
}

// 009C9EE0  FUN_009c9ee0  size=687  [callgraph]
void __fastcall FUN_009c9ee0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_8;
  uint local_4;
  
  local_4 = 0;
  if (param_1[5] != 0) {
    local_8 = 0;
    do {
      puVar2 = (undefined4 *)(*param_1 + local_8);
      piVar1 = (int *)*puVar2;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_00dd4940(*piVar1);
          *piVar1 = 0;
        }
        if (piVar1[1] != 0) {
          FUN_00dd4940(piVar1[1]);
          piVar1[1] = 0;
        }
        piVar1[2] = -1;
        FUN_00dd4920(*puVar2);
        *puVar2 = 0;
      }
      local_8 = local_8 + 0xc;
      local_4 = local_4 + 1;
      puVar2[2] = 0;
    } while (local_4 < (uint)param_1[5]);
  }
  local_4 = 0;
  if (param_1[6] != 0) {
    local_8 = 0;
    do {
      puVar2 = (undefined4 *)(param_1[1] + local_8);
      piVar1 = (int *)*puVar2;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_00dd4940(*piVar1);
          *piVar1 = 0;
        }
        if (piVar1[1] != 0) {
          FUN_00dd4940(piVar1[1]);
          piVar1[1] = 0;
        }
        piVar1[2] = -1;
        FUN_00dd4920(*puVar2);
        *puVar2 = 0;
      }
      local_8 = local_8 + 0xc;
      local_4 = local_4 + 1;
      puVar2[2] = 0;
    } while (local_4 < (uint)param_1[6]);
  }
  local_4 = 0;
  if (param_1[7] != 0) {
    local_8 = 0;
    do {
      puVar2 = (undefined4 *)(param_1[2] + local_8);
      piVar1 = (int *)*puVar2;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_00dd4940(*piVar1);
          *piVar1 = 0;
        }
        if (piVar1[1] != 0) {
          FUN_00dd4940(piVar1[1]);
          piVar1[1] = 0;
        }
        piVar1[2] = -1;
        FUN_00dd4920(*puVar2);
        *puVar2 = 0;
      }
      local_8 = local_8 + 0xc;
      local_4 = local_4 + 1;
      puVar2[2] = 0;
    } while (local_4 < (uint)param_1[7]);
  }
  local_4 = 0;
  if (param_1[8] != 0) {
    local_8 = 0;
    do {
      puVar2 = (undefined4 *)(param_1[3] + local_8);
      piVar1 = (int *)*puVar2;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_00dd4940(*piVar1);
          *piVar1 = 0;
        }
        if (piVar1[1] != 0) {
          FUN_00dd4940(piVar1[1]);
          piVar1[1] = 0;
        }
        piVar1[2] = -1;
        FUN_00dd4920(*puVar2);
        *puVar2 = 0;
      }
      local_8 = local_8 + 0xc;
      local_4 = local_4 + 1;
      puVar2[2] = 0;
    } while (local_4 < (uint)param_1[8]);
  }
  local_4 = 0;
  if (param_1[9] != 0) {
    local_8 = 0;
    do {
      puVar2 = (undefined4 *)(param_1[4] + local_8);
      piVar1 = (int *)*puVar2;
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          FUN_00dd4940(*piVar1);
          *piVar1 = 0;
        }
        if (piVar1[1] != 0) {
          FUN_00dd4940(piVar1[1]);
          piVar1[1] = 0;
        }
        piVar1[2] = -1;
        FUN_00dd4920(*puVar2);
        *puVar2 = 0;
      }
      local_8 = local_8 + 0xc;
      local_4 = local_4 + 1;
      puVar2[2] = 0;
    } while (local_4 < (uint)param_1[9]);
  }
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    FUN_00dd4940(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    FUN_00dd4940(param_1[3]);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    FUN_00dd4940(param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

// 009CA1B0  FUN_009ca1b0  size=549  [callgraph]
int * __thiscall FUN_009ca1b0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *local_c;
  
  uVar3 = *(uint *)(param_2 + 8);
  uVar4 = 0;
  local_c = (int *)0x0;
  if ((uVar3 != 0x700000) && (param_1[9] != 0)) {
    piVar2 = (int *)param_1[4];
    do {
      if ((*piVar2 == 0) || (*(uint *)(*piVar2 + 8) == uVar3)) {
        if (piVar2[1] == *(int *)(param_2 + 4)) {
          return (int *)(param_1[4] + uVar4 * 0xc);
        }
        if (piVar2[2] != 0) {
          local_c = piVar2;
        }
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar4 < (uint)param_1[9]);
    if (local_c != (int *)0x0) {
      return local_c;
    }
  }
  uVar4 = uVar3 & 0xf0000;
  iVar1 = FUN_009f9500(uVar3);
  if ((((iVar1 == 0) && (uVar4 != 0x90000)) && (uVar4 != 0xd0000)) &&
     (((uVar4 != 0xe0000 && (uVar4 != 0xf0000)) && (*(int *)(param_2 + 8) != 0x700000)))) {
    iVar1 = FUN_009f9350(*(int *)(param_2 + 8));
    if (iVar1 != 0) {
      uVar3 = 0;
      if (param_1[6] != 0) {
        piVar2 = (int *)param_1[1];
        do {
          if (piVar2[1] == *(int *)(param_2 + 4)) {
            return (int *)param_1[1] + uVar3 * 3;
          }
          if (piVar2[2] != 0) {
            local_c = piVar2;
          }
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 3;
        } while (uVar3 < (uint)param_1[6]);
      }
      if (local_c != (int *)0x0) {
        return local_c;
      }
      goto LAB_009ca382;
    }
    iVar1 = FUN_009f93b0(*(undefined4 *)(param_2 + 8));
    if (iVar1 == 0) goto LAB_009ca382;
    uVar3 = 0;
    if (param_1[7] != 0) {
      piVar2 = (int *)param_1[2];
      do {
        if (piVar2[1] == *(int *)(param_2 + 4)) {
          return (int *)param_1[2] + uVar3 * 3;
        }
        if (piVar2[2] != 0) {
          local_c = piVar2;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 3;
      } while (uVar3 < (uint)param_1[7]);
    }
  }
  else {
    uVar3 = 0;
    if (param_1[8] != 0) {
      iVar1 = 0;
      piVar2 = (int *)(param_1[3] + 8);
      do {
        if (piVar2[-1] == *(int *)(param_2 + 4)) {
          return (int *)(param_1[3] + uVar3 * 0xc);
        }
        if (*piVar2 != 0) {
          local_c = (int *)(param_1[4] + iVar1);
        }
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 0xc;
        piVar2 = piVar2 + 3;
      } while (uVar3 < (uint)param_1[8]);
    }
  }
  if (local_c != (int *)0x0) {
    return local_c;
  }
LAB_009ca382:
  uVar3 = 0;
  if (param_1[5] == 0) {
    return local_c;
  }
  piVar2 = (int *)*param_1;
  do {
    if (piVar2[1] == *(int *)(param_2 + 4)) {
      return (int *)*param_1 + uVar3 * 3;
    }
    if (piVar2[2] != 0) {
      local_c = piVar2;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 3;
  } while (uVar3 < (uint)param_1[5]);
  return local_c;
}

// 009CA3F0  FUN_009ca3f0  size=769  [callgraph]
void __fastcall FUN_009ca3f0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *param_1) {
    local_10 = 0;
    do {
      piVar3 = (int *)(param_1[1] + local_10);
      local_c = 0;
      if (piVar3[5] != 0) {
        local_14 = 0;
        do {
          puVar2 = (undefined4 *)(*piVar3 + local_14);
          piVar1 = (int *)*puVar2;
          if (piVar1 != (int *)0x0) {
            if (*piVar1 != 0) {
              FUN_00dd4940(*piVar1);
              *piVar1 = 0;
            }
            if (piVar1[1] != 0) {
              FUN_00dd4940(piVar1[1]);
              piVar1[1] = 0;
            }
            piVar1[2] = -1;
            FUN_00dd4920(*puVar2);
            *puVar2 = 0;
          }
          local_14 = local_14 + 0xc;
          local_c = local_c + 1;
          puVar2[2] = 0;
        } while (local_c < (uint)piVar3[5]);
      }
      local_c = 0;
      if (piVar3[6] != 0) {
        local_14 = 0;
        do {
          puVar2 = (undefined4 *)(piVar3[1] + local_14);
          piVar1 = (int *)*puVar2;
          if (piVar1 != (int *)0x0) {
            if (*piVar1 != 0) {
              FUN_00dd4940(*piVar1);
              *piVar1 = 0;
            }
            if (piVar1[1] != 0) {
              FUN_00dd4940(piVar1[1]);
              piVar1[1] = 0;
            }
            piVar1[2] = -1;
            FUN_00dd4920(*puVar2);
            *puVar2 = 0;
          }
          local_14 = local_14 + 0xc;
          local_c = local_c + 1;
          puVar2[2] = 0;
        } while (local_c < (uint)piVar3[6]);
      }
      local_c = 0;
      if (piVar3[7] != 0) {
        local_14 = 0;
        do {
          puVar2 = (undefined4 *)(piVar3[2] + local_14);
          piVar1 = (int *)*puVar2;
          if (piVar1 != (int *)0x0) {
            if (*piVar1 != 0) {
              FUN_00dd4940(*piVar1);
              *piVar1 = 0;
            }
            if (piVar1[1] != 0) {
              FUN_00dd4940(piVar1[1]);
              piVar1[1] = 0;
            }
            piVar1[2] = -1;
            FUN_00dd4920(*puVar2);
            *puVar2 = 0;
          }
          local_14 = local_14 + 0xc;
          local_c = local_c + 1;
          puVar2[2] = 0;
        } while (local_c < (uint)piVar3[7]);
      }
      local_c = 0;
      if (piVar3[8] != 0) {
        local_14 = 0;
        do {
          puVar2 = (undefined4 *)(piVar3[3] + local_14);
          piVar1 = (int *)*puVar2;
          if (piVar1 != (int *)0x0) {
            if (*piVar1 != 0) {
              FUN_00dd4940(*piVar1);
              *piVar1 = 0;
            }
            if (piVar1[1] != 0) {
              FUN_00dd4940(piVar1[1]);
              piVar1[1] = 0;
            }
            piVar1[2] = -1;
            FUN_00dd4920(*puVar2);
            *puVar2 = 0;
          }
          local_14 = local_14 + 0xc;
          local_c = local_c + 1;
          puVar2[2] = 0;
        } while (local_c < (uint)piVar3[8]);
      }
      local_c = 0;
      if (piVar3[9] != 0) {
        local_14 = 0;
        do {
          puVar2 = (undefined4 *)(piVar3[4] + local_14);
          piVar1 = (int *)*puVar2;
          if (piVar1 != (int *)0x0) {
            if (*piVar1 != 0) {
              FUN_00dd4940(*piVar1);
              *piVar1 = 0;
            }
            if (piVar1[1] != 0) {
              FUN_00dd4940(piVar1[1]);
              piVar1[1] = 0;
            }
            piVar1[2] = -1;
            FUN_00dd4920(*puVar2);
            *puVar2 = 0;
          }
          local_14 = local_14 + 0xc;
          local_c = local_c + 1;
          puVar2[2] = 0;
        } while (local_c < (uint)piVar3[9]);
      }
      if (*piVar3 != 0) {
        FUN_00dd4940(*piVar3);
        *piVar3 = 0;
      }
      if (piVar3[1] != 0) {
        FUN_00dd4940(piVar3[1]);
        piVar3[1] = 0;
      }
      if (piVar3[2] != 0) {
        FUN_00dd4940(piVar3[2]);
        piVar3[2] = 0;
      }
      if (piVar3[3] != 0) {
        FUN_00dd4940(piVar3[3]);
        piVar3[3] = 0;
      }
      if (piVar3[4] != 0) {
        FUN_00dd4940(piVar3[4]);
        piVar3[4] = 0;
      }
      local_10 = local_10 + 0x2c;
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      piVar3[8] = 0;
      piVar3[9] = 0;
      piVar3[10] = 0;
      local_8 = local_8 + 1;
    } while (local_8 < *param_1);
  }
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = 0;
  return;
}

// 009CA720  FUN_009ca720  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009ca720(void)

{
  DAT_01b78830 = 0;
  DAT_01b78834 = 0;
  DAT_01b78838 = 0;
  DAT_01b7883c = 0;
  _DAT_01b78840 = 0;
  _DAT_01b78844 = 0;
  DAT_01b781b8 = 0;
  return;
}

// 009CA750  FUN_009ca750  size=101  [callgraph]
void FUN_009ca750(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    iVar2 = 0;
    if (0 < *(int *)((int)&DAT_01b78830 + uVar1)) {
      do {
        FUN_009c9ee0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)&DAT_01b78830 + uVar1));
    }
    if (*(int *)((int)&DAT_01b78834 + uVar1) != 0) {
      FUN_00dd4940(*(int *)((int)&DAT_01b78834 + uVar1));
      *(undefined4 *)((int)&DAT_01b78834 + uVar1) = 0;
    }
    *(undefined4 *)((int)&DAT_01b78830 + uVar1) = 0;
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x18);
  DAT_01b781b8 = 0;
  return;
}

// 009CA850  FUN_009ca850  size=65  [callgraph]
undefined4 __thiscall FUN_009ca850(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))(param_2,param_3);
  if (iVar1 == -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0xa4))(iVar1,param_2,0x10);
  return 1;
}

// 009CA8A0  FUN_009ca8a0  size=63  [callgraph]
undefined4 __thiscall FUN_009ca8a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))(param_2,param_3);
  if (iVar1 == -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0xe8))(iVar1,param_2);
  return 1;
}

// 009CA910  FUN_009ca910  size=460  [callgraph]
void FUN_009ca910(void)

{
  int iVar1;
  int iVar2;
  int local_34;
  char local_30 [48];
  
  FUN_009c9c70();
  iVar1 = DAT_0188f518;
  iVar2 = thunk_FUN_00df28d0(&local_34,DAT_01b781dc);
  if (iVar2 != 0) {
    if (local_34 == DAT_01b781d8) {
      DAT_0188f518 = 1;
      if ((iVar1 != 1) && (iVar1 == 6)) {
        FUN_009c9950(1);
        FUN_009c9a70();
        return;
      }
    }
    else if (local_34 == DAT_01b781d4) {
      DAT_0188f518 = 2;
      if ((iVar1 != 2) && (iVar1 == 6)) {
        FUN_009c9950(2);
        FUN_009c9a70();
        return;
      }
    }
    else if (local_34 == DAT_01b781cc) {
      DAT_0188f518 = 3;
      if (iVar1 != 3) {
        _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stage",DAT_018b9174);
        FUN_00e5e1b0(local_30);
        FUN_009c9a70();
        return;
      }
    }
    else if (local_34 == DAT_01b781c8) {
      DAT_0188f518 = 4;
      if (iVar1 != 4) {
        _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_stealth",DAT_018b9174);
        FUN_00e5e1b0(local_30);
        FUN_009c9a70();
        return;
      }
    }
    else if (local_34 == DAT_01b781c4) {
      DAT_0188f518 = 5;
      if (iVar1 != 5) {
        _sprintf_s(local_30,0x30,"bgm_p%03x_statusSB_battle",DAT_018b9174);
        FUN_00e5e1b0(local_30);
        FUN_009c9a70();
        return;
      }
    }
    else {
      if (local_34 == DAT_01b781d0) {
        DAT_0188f518 = 0;
        FUN_009c9a70();
        return;
      }
      if (local_34 == DAT_01b781c0) {
        DAT_0188f518 = 6;
        FUN_009c9a70();
        return;
      }
      if (local_34 == DAT_01b781bc) {
        DAT_0188f518 = 7;
      }
    }
  }
  FUN_009c9a70();
  return;
}

// 009CAB20  FUN_009cab20  size=80  [callgraph]
uint * FUN_009cab20(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(*(int *)(param_1 + 8) + param_1);
  uVar2 = 0;
  if (*(uint *)(param_1 + 0xc) != 0) {
    do {
      if ((*puVar1 == (puVar1[1] & param_2)) &&
         (((puVar1[2] == 0xffffffff || (puVar1[2] == param_3)) &&
          (puVar1[3] == (puVar1[4] & param_4))))) {
        return puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 6;
    } while (uVar2 < *(uint *)(param_1 + 0xc));
  }
  return (uint *)0x0;
}

// 009CABD0  FUN_009cabd0  size=65  [callgraph]
uint * FUN_009cabd0(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(*(int *)(param_1 + 8) + param_1);
  if (*(uint *)(param_1 + 0xc) != 0) {
    uVar2 = 0;
    do {
      if ((*puVar1 == (puVar1[1] & param_2)) && (puVar1[3] == (puVar1[4] & param_4))) {
        return puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 8;
    } while (uVar2 < *(uint *)(param_1 + 0xc));
  }
  return (uint *)0x0;
}

// 009CAC40  FUN_009cac40  size=432  [callgraph]
undefined4 __thiscall FUN_009cac40(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *_Dst;
  undefined4 uVar4;
  undefined4 uStack_128;
  char *pcStack_124;
  char acStack_108 [120];
  char acStack_90 [144];
  
  pcStack_124 = "EventName";
  uStack_128 = param_3;
  iVar2 = (**(code **)(*param_2 + 0x9c))();
  if (iVar2 == -1) {
    *param_1 = 0;
  }
  else {
    (**(code **)(*param_2 + 0xa4))();
    pcVar3 = acStack_108;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (0 < (int)pcVar3 - (int)(acStack_108 + 1)) {
      _Dst = (char *)FUN_00dd3580();
      *param_1 = _Dst;
      if (_Dst == (char *)0x0) {
        FUN_00dd5650();
        return 0;
      }
      _strcpy_s(_Dst,((int)pcVar3 - (int)(acStack_108 + 1)) + 1,acStack_108);
    }
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))();
  if (iVar2 == -1) {
    param_1[1] = 0;
  }
  else {
    (**(code **)(*param_2 + 0xa4))(iVar2,acStack_90);
    pcVar3 = acStack_90;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar3 - (int)(acStack_90 + 1);
    if (0 < iVar2) {
      pcVar3 = (char *)FUN_00dd3580(iVar2);
      param_1[1] = pcVar3;
      if (pcVar3 == (char *)0x0) {
        FUN_00dd5650(&DAT_01658e38);
        return 0;
      }
      _strcpy_s(pcVar3,iVar2 + 1,acStack_90);
    }
  }
  iVar2 = (**(code **)(*param_2 + 0x9c))(param_3);
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xa4))(iVar2,&uStack_128,0x10);
    uVar4 = FUN_009fde60(&stack0xfffffecc);
    param_1[2] = uVar4;
  }
  return 1;
}

// 009CAE00  FUN_009cae00  size=37  [callgraph]
void __fastcall FUN_009cae00(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 009CAE40  SoundSeHitCategoryWork::readXml  size=199  [class]
undefined4 __thiscall
SoundSeHitCategoryWork::readXml(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_01658f34);
  if (iVar1 == -1) {
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AttrAll");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 1);
      param_1[2] = 1;
    }
  }
  else {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 1);
  }
  puVar2 = (undefined4 *)FUN_00dd3500(0xc,&DAT_01b7bd48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0xffffffff;
  }
  *param_1 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00dd5650(&DAT_01658ef0);
    FUN_009c9e30();
    return 0;
  }
  FUN_009cac40(param_2,param_3);
  return 1;
}

// 009CAF40  FUN_009caf40  size=245  [callgraph]
undefined4 __thiscall FUN_009caf40(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_EDI;
  
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,"SoundSeHitCategory_All");
  if (iVar2 != -1) {
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar2,"SoundSeAttrHit_Attr");
    uVar4 = (**(code **)(*param_2 + 0x10))(uVar3);
    param_1[5] = uVar4;
    puVar5 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)uVar4 * 0xc >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 0xc),&DAT_01b7bd48);
    puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 3;
      }
    }
    *param_1 = (int)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_01658f3c);
      FUN_009c9ee0();
      return 0;
    }
    uVar4 = 0;
    if (param_1[5] != 0) {
      iVar2 = 0;
      do {
        iVar6 = *param_1;
        *(undefined4 *)(iVar6 + iVar2) = 0;
        *(undefined4 *)(iVar6 + 8 + iVar2) = 0;
        iVar6 = (**(code **)(*param_2 + 0x14))(unaff_EDI,uVar4);
        if ((iVar6 != -1) && (iVar6 = SoundSeHitCategoryWork::readXml(param_2,iVar6), iVar6 == 0)) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar4 < (uint)param_1[5]);
    }
  }
  return 1;
}

// 009CB040  FUN_009cb040  size=250  [callgraph]
undefined4 __thiscall FUN_009cb040(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_EDI;
  
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,"SoundSeHitCategory_Pl");
  if (iVar2 != -1) {
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar2,"SoundSeAttrHit_Attr");
    uVar4 = (**(code **)(*param_2 + 0x10))(uVar3);
    *(uint *)(param_1 + 0x18) = uVar4;
    puVar5 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)uVar4 * 0xc >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 0xc),&DAT_01b7bd48);
    puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 3;
      }
    }
    *(undefined4 **)(param_1 + 4) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_01658f3c);
      FUN_009c9ee0();
      return 0;
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      iVar2 = 0;
      do {
        iVar6 = *(int *)(param_1 + 4);
        *(undefined4 *)(iVar6 + iVar2) = 0;
        *(undefined4 *)(iVar6 + 8 + iVar2) = 0;
        uVar3 = (**(code **)(*param_2 + 0x14))(unaff_EDI,uVar4);
        if ((unaff_EDI != -1) &&
           (iVar6 = SoundSeHitCategoryWork::readXml(param_2,uVar3), iVar6 == 0)) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar4 < *(uint *)(param_1 + 0x18));
    }
  }
  return 1;
}

// 009CB140  FUN_009cb140  size=250  [callgraph]
undefined4 __thiscall FUN_009cb140(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_EDI;
  
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,"SoundSeHitCategory_Em");
  if (iVar2 != -1) {
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar2,"SoundSeAttrHit_Attr");
    uVar4 = (**(code **)(*param_2 + 0x10))(uVar3);
    *(uint *)(param_1 + 0x1c) = uVar4;
    puVar5 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)uVar4 * 0xc >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 0xc),&DAT_01b7bd48);
    puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 3;
      }
    }
    *(undefined4 **)(param_1 + 8) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_01658f3c);
      FUN_009c9ee0();
      return 0;
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar2 = 0;
      do {
        iVar6 = *(int *)(param_1 + 8);
        *(undefined4 *)(iVar6 + iVar2) = 0;
        *(undefined4 *)(iVar6 + 8 + iVar2) = 0;
        uVar3 = (**(code **)(*param_2 + 0x14))(unaff_EDI,uVar4);
        if ((unaff_EDI != -1) &&
           (iVar6 = SoundSeHitCategoryWork::readXml(param_2,uVar3), iVar6 == 0)) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar4 < *(uint *)(param_1 + 0x1c));
    }
  }
  return 1;
}

// 009CB240  FUN_009cb240  size=248  [callgraph]
undefined4 __thiscall FUN_009cb240(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_EDI;
  
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,"SoundSeHitCategory_Scr");
  if (iVar2 != -1) {
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar2,"SoundSeAttrHit_Attr");
    uVar4 = (**(code **)(*param_2 + 0x10))(uVar3);
    *(uint *)(param_1 + 0x20) = uVar4;
    puVar5 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)uVar4 * 0xc >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 0xc),&DAT_01b7bd48);
    puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 3;
      }
    }
    *(undefined4 **)(param_1 + 0xc) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_01658f3c);
      FUN_009c9ee0();
      return 0;
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar2 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0xc);
        *(undefined4 *)(iVar6 + iVar2) = 0;
        *(undefined4 *)(iVar6 + 8 + iVar2) = 0;
        iVar6 = (**(code **)(*param_2 + 0x14))(unaff_EDI,uVar4);
        if ((iVar6 != -1) && (iVar6 = SoundSeHitCategoryWork::readXml(param_2,iVar6), iVar6 == 0)) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar4 < *(uint *)(param_1 + 0x20));
    }
  }
  return 1;
}

// 009CB340  FUN_009cb340  size=248  [callgraph]
undefined4 __thiscall FUN_009cb340(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 unaff_EDI;
  
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,"SoundSeHitCategory_ObjId");
  if (iVar2 != -1) {
    uVar3 = (**(code **)(*param_2 + 0x18))(iVar2,"SoundSeAttrHit_Attr");
    uVar4 = (**(code **)(*param_2 + 0x10))(uVar3);
    *(uint *)(param_1 + 0x24) = uVar4;
    puVar5 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)uVar4 * 0xc >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 0xc),&DAT_01b7bd48);
    puVar1 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1 = puVar1 + 3;
      }
    }
    *(undefined4 **)(param_1 + 0x10) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_01658f3c);
      FUN_009c9ee0();
      return 0;
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar2 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(iVar6 + iVar2) = 0;
        *(undefined4 *)(iVar6 + 8 + iVar2) = 0;
        iVar6 = (**(code **)(*param_2 + 0x14))(unaff_EDI,uVar4);
        if ((iVar6 != -1) && (iVar6 = SoundSeHitCategoryWork::readXml(param_2,iVar6), iVar6 == 0)) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar4 < *(uint *)(param_1 + 0x24));
    }
  }
  return 1;
}

