// lib/havok/unit_010282B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010282B0..0102BFE0, 164 functions

#include "types.h"

// 010282B0  FUN_010282b0  size=91  [run]
undefined8
FUN_010282b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  
  if (param_1 == 0x14) {
    uVar1 = FUN_010281b0(param_2,*(undefined4 *)param_5,param_3,param_4);
    return uVar1;
  }
  if (param_1 != 0x19) {
    if (param_1 != 0x1c) {
      return 0;
    }
    return *param_5;
  }
  uVar1 = FUN_010281b0(param_2,param_5,param_3,param_4);
  return uVar1;
}

// 01028310  FUN_01028310  size=272  [run]
void FUN_01028310(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  switch(param_1) {
  case 1:
    FUN_01027d70(param_2,7,param_3,param_4);
    return;
  case 2:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(int *)(param_3 + iVar1 * 4) = (int)*(char *)(iVar1 + param_2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 3:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(int *)(param_3 + iVar1 * 4) = (int)*(char *)(iVar1 + param_2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 4:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(uint *)(param_3 + iVar1 * 4) = (uint)*(byte *)(iVar1 + param_2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 5:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(int *)(param_3 + iVar1 * 4) = (int)*(short *)(param_2 + iVar1 * 2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 6:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(uint *)(param_3 + iVar1 * 4) = (uint)*(ushort *)(param_2 + iVar1 * 2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
    }
    break;
  case 7:
  case 8:
    FUN_01015e80(param_3,param_2,param_4 * 4);
    return;
  case 9:
  case 10:
    FUN_01027e70(param_2,7,param_3,param_4);
    return;
  }
  return;
}

// 01028450  FUN_01028450  size=330  [run]
void FUN_01028450(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  switch(param_2) {
  case 1:
    FUN_01027c70(7,param_1,param_3,param_4);
    return;
  case 2:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(iVar2 + param_3) = *(undefined1 *)(param_1 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
      return;
    }
    break;
  case 3:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(iVar2 + param_3) = *(undefined1 *)(param_1 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
      return;
    }
    break;
  case 4:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(iVar2 + param_3) = *(undefined1 *)(param_1 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
      return;
    }
    break;
  case 5:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + iVar2 * 2) = *(undefined2 *)(param_1 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
      return;
    }
    break;
  case 6:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + iVar2 * 2) = *(undefined2 *)(param_1 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
      return;
    }
    break;
  case 7:
  case 8:
    FUN_01015e80(param_3,param_1,param_4 * 4);
    return;
  case 9:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        iVar1 = *(int *)(param_1 + iVar2 * 4);
        *(int *)(param_3 + iVar2 * 8) = iVar1;
        *(int *)(param_3 + 4 + iVar2 * 8) = iVar1 >> 0x1f;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
      return;
    }
    break;
  case 10:
    iVar2 = 0;
    if (0 < param_4) {
      do {
        iVar1 = *(int *)(param_1 + iVar2 * 4);
        *(int *)(param_3 + iVar2 * 8) = iVar1;
        *(int *)(param_3 + 4 + iVar2 * 8) = iVar1 >> 0x1f;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
  }
  return;
}

// 010285D0  FUN_010285d0  size=337  [run]
void FUN_010285d0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  switch(param_2) {
  case 1:
    FUN_01027c70(8,param_1,param_3,param_4);
    return;
  case 2:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(iVar1 + param_3) = *(undefined1 *)(param_1 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 3:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(iVar1 + param_3) = *(undefined1 *)(param_1 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 4:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(iVar1 + param_3) = *(undefined1 *)(param_1 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 5:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + iVar1 * 2) = *(undefined2 *)(param_1 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 6:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + iVar1 * 2) = *(undefined2 *)(param_1 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 7:
  case 8:
    FUN_01015e80(param_3,param_1,param_4 * 4);
    return;
  case 9:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_3 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar1 * 4);
        *(undefined4 *)(param_3 + 4 + iVar1 * 8) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
      return;
    }
    break;
  case 10:
    iVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_3 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar1 * 4);
        *(undefined4 *)(param_3 + 4 + iVar1 * 8) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_4);
    }
  }
  return;
}

// 01028750  FUN_01028750  size=581  [run]
void FUN_01028750(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_10c [256];
  int local_c;
  int local_8;
  
  if (param_1 == param_3) {
    iVar2 = FUN_01016260(param_1);
    FUN_01015e80(param_4,param_2,*(short *)(iVar2 + 8) * param_5);
    return;
  }
  switch(param_1) {
  case 1:
    FUN_01027d70(param_2,param_3,param_4,param_5);
    return;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    if (param_3 == 1) {
      FUN_01027c70(param_1,param_2,param_4,param_5);
      return;
    }
    iVar2 = FUN_01016260(param_1);
    iVar5 = FUN_01016260(param_3);
    sVar1 = *(short *)(iVar2 + 8);
    if (sVar1 == *(short *)(iVar5 + 8)) {
      FUN_01015e80(param_4,param_2,sVar1 * param_5);
      return;
    }
    local_c = (int)sVar1 << 6;
    local_8 = (int)*(short *)(iVar5 + 8) << 6;
    if (0 < param_5) {
      do {
        iVar2 = param_5;
        if (0x40 < param_5) {
          iVar2 = 0x40;
        }
        FUN_01028310(param_1,param_2,local_10c,iVar2);
        FUN_01028450(local_10c,param_3,param_4,iVar2);
        param_2 = param_2 + local_c;
        param_4 = param_4 + local_8;
        param_5 = param_5 - iVar2;
      } while (0 < param_5);
      return;
    }
    break;
  case 7:
    FUN_01028450(param_2,param_3,param_4,param_5);
    return;
  case 8:
    FUN_010285d0(param_2,param_3,param_4,param_5);
    return;
  case 9:
  case 10:
    FUN_01027e70(param_2,param_3,param_4,param_5);
    return;
  case 0xb:
    if ((param_3 == 0x20) && (iVar2 = 0, 0 < param_5)) {
      do {
        *(undefined2 *)(param_4 + iVar2 * 2) = *(undefined2 *)(param_2 + 2 + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_5);
    }
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    break;
  case 0x20:
    if (param_3 == 0xb) {
      iVar2 = 0;
      if (3 < param_5) {
        piVar4 = (int *)(param_4 + 8);
        psVar3 = (short *)(param_2 + 4);
        iVar5 = (param_5 - 4U >> 2) + 1;
        iVar2 = iVar5 * 4;
        do {
          piVar4[-2] = (int)psVar3[-2] << 0x10;
          piVar4[-1] = (int)psVar3[-1] << 0x10;
          *piVar4 = (int)*psVar3 << 0x10;
          piVar4[1] = (int)psVar3[1] << 0x10;
          psVar3 = psVar3 + 4;
          piVar4 = piVar4 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (iVar2 < param_5) {
        do {
          *(int *)(param_4 + iVar2 * 4) = (int)*(short *)(param_2 + iVar2 * 2) << 0x10;
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_5);
        return;
      }
    }
    break;
  default:
    goto switchD_0102879d_default;
  }
switchD_0102879d_default:
  return;
}

// 010289E0  FUN_010289e0  size=362  [run]
void FUN_010289e0(undefined8 *param_1,uint param_2,undefined8 *param_3,uint param_4,uint param_5,
                 int param_6)

{
  uint uVar1;
  
  uVar1 = param_2;
  if ((param_5 == param_2) && (param_5 == param_4)) {
    FUN_01015e80(param_3,param_1,param_5 * param_6);
    return;
  }
  switch(param_5) {
  case 1:
    if (param_6 < 1) {
      return;
    }
    do {
      *(undefined1 *)param_3 = *(undefined1 *)param_1;
      param_1 = (undefined8 *)((int)param_1 + param_2);
      param_3 = (undefined8 *)((int)param_3 + param_4);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
    return;
  case 2:
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 1) == 0) {
      if (param_6 < 1) {
        return;
      }
      do {
        *(undefined2 *)param_3 = *(undefined2 *)param_1;
        param_1 = (undefined8 *)((int)param_1 + param_2);
        param_3 = (undefined8 *)((int)param_3 + param_4);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      return;
    }
    break;
  case 4:
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 3) == 0) {
      if (param_6 < 1) {
        return;
      }
      do {
        *(undefined4 *)param_3 = *(undefined4 *)param_1;
        param_1 = (undefined8 *)((int)param_1 + param_2);
        param_3 = (undefined8 *)((int)param_3 + param_4);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      return;
    }
    break;
  case 8:
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 7) == 0) {
      if (param_6 < 1) {
        return;
      }
      do {
        *(undefined4 *)param_3 = *(undefined4 *)param_1;
        *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)((int)param_1 + 4);
        param_1 = (undefined8 *)((int)param_1 + param_2);
        param_3 = (undefined8 *)((int)param_3 + param_4);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      return;
    }
    break;
  case 0x10:
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 0xf) == 0) {
      if (param_6 < 1) {
        return;
      }
      do {
        *param_3 = *param_1;
        param_3[1] = param_1[1];
        param_1 = (undefined8 *)((int)param_1 + param_2);
        param_3 = (undefined8 *)((int)param_3 + param_4);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      return;
    }
  }
  if (0 < param_6) {
    param_2 = param_6;
    do {
      FUN_01015e80(param_3,param_1,param_5);
      param_3 = (undefined8 *)((int)param_3 + param_4);
      param_1 = (undefined8 *)((int)param_1 + uVar1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01028B80  FUN_01028b80  size=77  [run]
void FUN_01028b80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  if (param_2 == 0x19) {
    FUN_010279a0(param_1,param_3,param_4,param_5,param_6);
    return;
  }
  if ((param_2 == 0x21) && (0 < param_5)) {
    do {
      FUN_01006770();
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

// 01028BD0  FUN_01028bd0  size=62  [run]
void FUN_01028bd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2[1] != 0) {
    uVar1 = FUN_010274d0(param_3,param_4);
    FUN_01028b80(param_1,param_3,param_4,*param_2,param_2[1],uVar1);
    param_2[1] = 0;
  }
  return;
}

// 01028C10  FUN_01028c10  size=169  [run]
int FUN_01028c10(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  if (iVar1 != param_5) {
    iVar2 = FUN_010274d0(param_3,param_4);
    if (param_5 < param_2[1]) {
      FUN_01028b80(param_1,param_3,param_4,iVar2 * param_5 + *param_2,iVar1 - param_5,iVar2);
      param_2[1] = param_5;
      return *param_2;
    }
    if ((int)(param_2[2] & 0x3fffffffU) < param_5) {
      FUN_0100a210(&PTR_vftable_018e9b94,param_2,param_5,iVar2);
    }
    FUN_010280a0(param_1,param_3,param_4,iVar2 * iVar1 + *param_2,param_5 - iVar1,iVar2);
    param_2[1] = param_5;
  }
  return *param_2;
}

// 01028CC0  FUN_01028cc0  size=219  [run]
int FUN_01028cc0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_010279f0(param_1,param_2);
  iVar1 = (int)uVar7;
  if (iVar1 < 1) {
    return 0;
  }
  if ((int)((ulonglong)uVar7 >> 0x20) != 0x20) {
    return param_3;
  }
  iVar6 = iVar1 * 4;
  if ((int)(param_4[2] & 0x3fffffffU) < iVar6) {
    iVar2 = (param_4[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar6) {
      iVar2 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar2,1);
  }
  iVar2 = *param_4;
  param_4[1] = iVar6;
  iVar6 = 0;
  if (3 < iVar1) {
    psVar3 = (short *)(param_3 + 4);
    iVar5 = (iVar1 - 4U >> 2) + 1;
    piVar4 = (int *)(iVar2 + 8);
    iVar6 = iVar5 * 4;
    do {
      piVar4[-2] = (int)psVar3[-2] << 0x10;
      piVar4[-1] = (int)psVar3[-1] << 0x10;
      *piVar4 = (int)*psVar3 << 0x10;
      piVar4[1] = (int)psVar3[1] << 0x10;
      psVar3 = psVar3 + 4;
      piVar4 = piVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  for (; iVar6 < iVar1; iVar6 = iVar6 + 1) {
    *(int *)(iVar2 + iVar6 * 4) = (int)*(short *)(param_3 + iVar6 * 2) << 0x10;
  }
  return iVar2;
}

// 01028DA0  FUN_01028da0  size=448  [run]
void FUN_01028da0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  if (0 < param_1[3]) {
    iVar1 = *param_1;
    if ((iVar1 == *param_2) && (param_1[1] == param_2[1])) {
      iVar1 = FUN_01016260(iVar1);
      FUN_010289e0(param_1[2],param_1[4],param_2[2],param_2[4],
                   (int)*(short *)(iVar1 + 8) * param_1[1],param_1[3]);
      return;
    }
    iVar1 = FUN_01016260(iVar1);
    iVar2 = FUN_01016260(*param_2);
    iVar2 = (int)*(short *)(iVar2 + 8) * param_2[1];
    iVar1 = (int)*(short *)(iVar1 + 8) * param_1[1];
    if ((iVar1 - param_1[4] == 0) && (iVar2 - param_2[4] == 0)) {
      FUN_01028750(*param_1,param_1[2],*param_2,param_2[2],param_1[3] * param_1[1]);
      return;
    }
    local_10 = 0;
    local_c = 0;
    local_8 = 0x80000000;
    if (iVar1 - param_1[4] == 0) {
      uVar3 = param_1[3] * iVar2;
      if (0 < (int)uVar3) {
        FUN_0100a210(&PTR_vftable_018e9b8c,&local_10,((int)uVar3 < 0) - 1 & uVar3,1);
      }
      local_c = uVar3;
      FUN_01028750(*param_1,param_1[2],*param_2,local_10,param_1[1] * param_1[3]);
      FUN_010289e0(local_10,iVar2,param_2[2],param_2[4],iVar2,param_1[3]);
    }
    else {
      uVar3 = param_1[3] * iVar1;
      if (0 < (int)uVar3) {
        FUN_0100a210(&PTR_vftable_018e9b8c,&local_10,uVar3 & ((int)uVar3 < 0) - 1,1);
      }
      local_c = uVar3;
      FUN_010289e0(param_1[2],param_1[4],local_10,iVar1,iVar1,param_1[3]);
      FUN_01028750(*param_1,local_10,*param_2,param_2[2],param_1[1] * param_1[3]);
    }
    local_c = 0;
    if (-1 < (int)local_8) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 & 0x3fffffff);
    }
  }
  return;
}

// 01028FC0  FUN_01028fc0  size=11  [run]
int FUN_01028fc0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01028FD0  FUN_01028fd0  size=11  [run]
int FUN_01028fd0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01028FE0  FUN_01028fe0  size=11  [run]
int FUN_01028fe0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01028FF0  FUN_01028ff0  size=11  [run]
int FUN_01028ff0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01029000  FUN_01029000  size=11  [run]
int FUN_01029000(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01029010  FUN_01029010  size=11  [run]
int FUN_01029010(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01029020  FUN_01029020  size=11  [run]
int FUN_01029020(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01029030  FUN_01029030  size=11  [run]
int FUN_01029030(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01029040  FUN_01029040  size=11  [run]
int FUN_01029040(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01029050  FUN_01029050  size=11  [run]
int FUN_01029050(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01029060  FUN_01029060  size=11  [run]
int FUN_01029060(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01029070  FUN_01029070  size=52  [run]
undefined4 __thiscall FUN_01029070(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,1);
    return uVar3;
  }
  return 0;
}

// 010290D0  FUN_010290d0  size=11  [run]
void __fastcall FUN_010290d0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010290d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

// 010290E0  FUN_010290e0  size=8  [run]
undefined4 FUN_010290e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01029120  FUN_01029120  size=55  [run]
void __thiscall FUN_01029120(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,1);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01029160  FUN_01029160  size=13  [run]
void __thiscall FUN_01029160(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 01029170  FUN_01029170  size=57  [run]
void __thiscall FUN_01029170(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010291B0  FUN_010291b0  size=39  [run]
void FUN_010291b0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010291E0  FUN_010291e0  size=53  [run]
int __thiscall FUN_010291e0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 01029220  FUN_01029220  size=56  [run]
void __thiscall FUN_01029220(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,1);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01029260  FUN_01029260  size=56  [run]
void __thiscall FUN_01029260(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 010292A0  FUN_010292a0  size=57  [run]
void __fastcall FUN_010292a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010292E0  FUN_010292e0  size=57  [run]
void __fastcall FUN_010292e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01029330  hkMemoryTrackStreamReader::vf14  size=5  [run]
undefined4 hkMemoryTrackStreamReader::vf14(void)

{
  return 0;
}

// 01029340  hkMemoryTrackStreamReader::vf2C  size=7  [run]
undefined4 __fastcall hkMemoryTrackStreamReader::vf2C(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 8);
}

// 01029360  FUN_01029360  size=142  [run]
void __thiscall FUN_01029360(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[2] / *param_1 - param_1[3];
  iVar1 = param_1[2] - (param_1[3] + iVar2) * *param_1;
  if (0 < param_3) {
    while( true ) {
      if (iVar2 < param_1[5] + -1) {
        iVar3 = *param_1;
      }
      else {
        iVar3 = param_1[1];
      }
      iVar3 = iVar3 - iVar1;
      iVar1 = *(int *)(param_1[4] + iVar2 * 4) + iVar1;
      if (param_3 <= iVar3) break;
      FUN_01015e80(param_2,iVar1,iVar3);
      param_1[2] = param_1[2] + iVar3;
      param_2 = param_2 + iVar3;
      param_3 = param_3 - iVar3;
      iVar2 = iVar2 + 1;
      iVar1 = 0;
      if (param_3 < 1) {
        return;
      }
    }
    FUN_01015e80(param_2,iVar1,param_3);
    param_1[2] = param_1[2] + param_3;
  }
  return;
}

// 01029400  hkMemoryTrackStreamReader::hkMemoryTrackStreamReader  size=49  [run]
void __thiscall
hkMemoryTrackStreamReader::hkMemoryTrackStreamReader
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[4] = param_3;
  *param_1 = vftable;
  param_1[2] = param_2;
  param_1[3] = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = param_4;
  return;
}

// 01029440  FUN_01029440  size=129  [run]
void __fastcall FUN_01029440(int *param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_8;
  
  local_8 = (param_1[2] - param_1[3] * *param_1) / *param_1;
  if (0 < local_8) {
    do {
      iVar3 = *param_1;
      uVar1 = *(undefined4 *)param_1[4];
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(uVar1,iVar3);
      param_1[5] = param_1[5] + -1;
      puVar4 = (undefined4 *)param_1[4];
      if (0 < param_1[5] * 4) {
        iVar3 = (param_1[5] * 4 - 1U >> 2) + 1;
        do {
          *puVar4 = puVar4[1];
          puVar4 = puVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_1[3] = param_1[3] + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 010294D0  hkArrayStreamWriter::vf24  size=79  [run]
void __fastcall hkArrayStreamWriter::vf24(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = *(int *)(iVar1 + 4) + 1;
  uVar4 = *(uint *)(iVar1 + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar2 = uVar4 * 2;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,iVar1,iVar3,1);
  }
  *(undefined1 *)((*(int **)(param_1 + 8))[1] + **(int **)(param_1 + 8)) = 0;
  return;
}

// 01029520  hkArrayStreamWriter::vf10  size=141  [run]
int __thiscall hkArrayStreamWriter::vf10(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = piVar1[1];
  iVar4 = iVar2 - *(int *)(param_1 + 0xc);
  if (iVar4 < param_3) {
    iVar4 = param_3 + (iVar2 - iVar4);
    iVar2 = iVar4 + 1;
    if ((int)(piVar1[2] & 0x3fffffffU) < iVar2) {
      iVar3 = (piVar1[2] & 0x3fffffffU) * 2;
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar3,1);
    }
    *(int *)(*(int *)(param_1 + 8) + 4) = iVar4;
    *(undefined1 *)(iVar4 + **(int **)(param_1 + 8)) = 0;
  }
  else if (iVar2 < (int)(piVar1[2] & 0x3fffffffU)) {
    *(undefined1 *)(iVar2 + *piVar1) = 0;
  }
  FUN_01015e80(**(int **)(param_1 + 8) + *(int *)(param_1 + 0xc),param_2,param_3);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  return param_3;
}

// 010295B0  FUN_010295b0  size=220  [run]
void __thiscall FUN_010295b0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  if (0 < param_3) {
    local_8 = (param_1[5] + -1) * 4;
    piVar1 = param_1 + 4;
    while( true ) {
      iVar4 = *param_1;
      iVar5 = iVar4 - param_1[1];
      if (iVar5 == 0) {
        pvVar2 = TlsGetValue(DAT_01f8fc4c);
        uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(iVar4);
        if (param_1[5] == (param_1[6] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
        }
        *(undefined4 *)(*piVar1 + param_1[5] * 4) = uVar3;
        param_1[5] = param_1[5] + 1;
        local_8 = local_8 + 4;
        iVar5 = *param_1;
        param_1[1] = 0;
      }
      iVar4 = *(int *)(local_8 + *piVar1) + param_1[1];
      if (param_3 <= iVar5) break;
      FUN_01015e80(iVar4,param_2,iVar5);
      param_2 = param_2 + iVar5;
      param_3 = param_3 - iVar5;
      param_1[1] = *param_1;
      if (param_3 < 1) {
        return;
      }
    }
    FUN_01015e80(iVar4,param_2,param_3);
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

// 01029690  hkMemoryTrackStreamWriter::vf10  size=27  [run]
undefined4 hkMemoryTrackStreamWriter::vf10(undefined4 param_1,undefined4 param_2)

{
  FUN_010295b0(param_1,param_2);
  return param_2;
}

// 010296B0  hkArrayStreamWriter::vf1C  size=165  [run]
undefined4 __thiscall hkArrayStreamWriter::vf1C(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  size_t _Size;
  int iVar4;
  
  iVar4 = param_2;
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar4 = *(int *)(param_1 + 0xc) + param_2;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc);
      if (param_3 == 2) {
        iVar4 = *(int *)(*(int *)(param_1 + 8) + 4) - param_2;
      }
    }
  }
  if (iVar4 < 0) {
    return 1;
  }
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2[1] < iVar4) {
    iVar1 = iVar4 + 1;
    if ((int)(piVar2[2] & 0x3fffffffU) < iVar1) {
      iVar3 = (piVar2[2] & 0x3fffffffU) * 2;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,piVar2,iVar3,1);
    }
    _Size = iVar1 - piVar2[1];
    if (0 < (int)_Size) {
      _memset((void *)(*piVar2 + piVar2[1]),0,_Size);
    }
    piVar2[1] = iVar1;
    *(int *)(*(int *)(param_1 + 8) + 4) = iVar4;
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return 0;
}

// 01029760  FUN_01029760  size=38  [run]
void __thiscall FUN_01029760(undefined4 *param_1,undefined4 param_2)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  param_1[1] = param_2;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 01029790  FUN_01029790  size=131  [run]
void __fastcall FUN_01029790(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)param_1[5]) {
    do {
      uVar1 = *(undefined4 *)(param_1[4] + iVar4 * 4);
      uVar2 = *param_1;
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(uVar1,uVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[5]);
  }
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] * 4);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = *param_1;
  return;
}

// 01029820  FUN_01029820  size=212  [run]
void FUN_01029820(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  
  iVar1 = param_1[5];
  if (iVar1 != 1 && -1 < iVar1 + -1) {
    iVar5 = 0;
    do {
      uVar2 = *(undefined4 *)(param_1[4] + iVar5 * 4);
      FUN_010295b0(uVar2,*param_1);
      uVar3 = *param_1;
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 8))(uVar2,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1 + -1);
  }
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1[4] + -4 + iVar1 * 4);
    FUN_010295b0(uVar2,param_1[1]);
    uVar3 = *param_1;
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 8))(uVar2,uVar3);
  }
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] * 4);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  FUN_01029790();
  return;
}

// 01029900  hkMemoryTrackStreamWriter::vf24  size=8  [run]
void hkMemoryTrackStreamWriter::vf24(void)

{
  FUN_01029790();
  return;
}

// 01029910  hkMemoryTrackStreamReader::vf10  size=185  [run]
int __thiscall hkMemoryTrackStreamReader::vf10(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  pcVar2 = (char *)(**(code **)(*param_1 + 0xc))((int)&uStack_8 + 3);
  if (*pcVar2 == '\0') {
    return 0;
  }
  piVar1 = (int *)param_1[2];
  iVar3 = ((piVar1[5] + -1 + piVar1[3]) * *piVar1 - piVar1[2]) + piVar1[1];
  iVar4 = param_3;
  if (iVar3 <= param_3) {
    iVar4 = iVar3;
  }
  if (((piVar1[5] + -1 + piVar1[3]) * *piVar1 - piVar1[2]) + piVar1[1] < param_3) {
    param_1[3] = piVar1[2] + param_3;
    return 0;
  }
  FUN_01029360(param_2,iVar4);
  if ((char)param_1[5] != '\0') {
    FUN_01029440();
    piVar1 = (int *)param_1[2];
    if (piVar1[2] == (piVar1[5] + -1 + piVar1[3]) * *piVar1 + piVar1[1]) {
      FUN_01029790();
      param_1[3] = -1;
    }
  }
  return iVar4;
}

// 010299D0  FUN_010299d0  size=68  [run]
void __fastcall FUN_010299d0(int param_1)

{
  FUN_01029790();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < *(int *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) * 4);
  }
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 01029A20  hkBaseObject::hkBaseObject_162  size=72  [run]
void __fastcall hkBaseObject::hkBaseObject_162(undefined4 *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  *param_1 = hkMemoryTrackStreamReader::vftable;
  if (param_1[4] == 1) {
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      FUN_010299d0();
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x1c);
    }
    *param_1 = vftable;
    return;
  }
  *param_1 = vftable;
  return;
}

// 01029AA0  FUN_01029aa0  size=15  [run]
int __thiscall FUN_01029aa0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01029AC0  FUN_01029ac0  size=26  [run]
void __thiscall FUN_01029ac0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01029AF0  FUN_01029af0  size=38  [run]
void FUN_01029af0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    iVar1 = (param_3 - 1U >> 2) + 1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 01029B20  FUN_01029b20  size=34  [run]
void FUN_01029b20(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01029B90  hkMemoryTrackStreamReader::vf18  size=13  [run]
void hkMemoryTrackStreamReader::vf18(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 01029BA0  hkMemoryTrackStreamReader::vf1C  size=8  [run]
undefined4 hkMemoryTrackStreamReader::vf1C(void)

{
  return 1;
}

// 01029BB0  hkMemoryTrackStreamReader::vf20  size=6  [run]
undefined4 hkMemoryTrackStreamReader::vf20(void)

{
  return 1;
}

// 01029BC0  hkMemoryTrackStreamReader::vf24  size=13  [run]
void hkMemoryTrackStreamReader::vf24(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 01029BD0  hkMemoryTrackStreamReader::vf28  size=8  [run]
undefined4 hkMemoryTrackStreamReader::vf28(void)

{
  return 1;
}

// 01029BE0  hkMemoryTrackStreamReader::vf0C  size=39  [run]
void __thiscall hkMemoryTrackStreamReader::vf0C(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  *(bool *)param_2 = *(int *)(param_1 + 0xc) < (piVar1[5] + -1 + piVar1[3]) * *piVar1 + piVar1[1];
  return;
}

// 01029C30  FUN_01029c30  size=54  [run]
void __thiscall FUN_01029c30(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_1[1] + -1;
  iVar1 = (param_1[1] - param_2) * 4;
  puVar2 = (undefined4 *)(*param_1 + param_2 * 4);
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 01029C70  FUN_01029c70  size=57  [run]
void __thiscall FUN_01029c70(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01029CB0  FUN_01029cb0  size=87  [run]
void __thiscall FUN_01029cb0(int *param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,1);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_3 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined1 *)(iVar4 + iVar1 + iVar2) = *param_4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_3;
  return;
}

// 01029D10  FUN_01029d10  size=13  [run]
void __thiscall FUN_01029d10(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 01029D20  FUN_01029d20  size=35  [run]
void FUN_01029d20(undefined4 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,param_2);
  return;
}

// 01029D50  FUN_01029d50  size=31  [run]
void FUN_01029d50(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01029D80  FUN_01029d80  size=38  [run]
void FUN_01029d80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01029DB0  FUN_01029db0  size=58  [run]
void __thiscall FUN_01029db0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01029DF0  FUN_01029df0  size=88  [run]
void __thiscall FUN_01029df0(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,1);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_2 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined1 *)(iVar4 + iVar1 + iVar2) = *param_3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_2;
  return;
}

// 01029E50  FUN_01029e50  size=61  [run]
void __thiscall FUN_01029e50(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01029E90  FUN_01029e90  size=61  [run]
void __fastcall FUN_01029e90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01029ED0  FUN_01029ed0  size=61  [run]
void __fastcall FUN_01029ed0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01029F10  hkMemoryTrackStreamReader::vf00  size=52  [run]
int __thiscall hkMemoryTrackStreamReader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_162();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01029FA0  FUN_01029fa0  size=104  [run]
void __thiscall FUN_01029fa0(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[4] = param_1[1];
  param_2[8] = param_1[2];
  param_2[0xc] = param_1[3];
  param_2[1] = param_1[4];
  param_2[5] = param_1[5];
  param_2[9] = param_1[6];
  param_2[0xd] = param_1[7];
  param_2[2] = param_1[8];
  param_2[6] = param_1[9];
  param_2[10] = param_1[10];
  param_2[0xe] = param_1[0xb];
  param_2[3] = param_1[0xc];
  param_2[7] = param_1[0xd];
  param_2[0xb] = param_1[0xe];
  param_2[0xf] = param_1[0xf];
  return;
}

// 0102A010  FUN_0102a010  size=216  [run]
void __thiscall FUN_0102a010(float *param_1,double *param_2)

{
  *param_2 = (double)*param_1;
  param_2[4] = (double)param_1[1];
  param_2[8] = (double)param_1[2];
  param_2[0xc] = (double)param_1[3];
  param_2[1] = (double)param_1[4];
  param_2[5] = (double)param_1[5];
  param_2[9] = (double)param_1[6];
  param_2[0xd] = (double)param_1[7];
  param_2[2] = (double)param_1[8];
  param_2[6] = (double)param_1[9];
  param_2[10] = (double)param_1[10];
  param_2[0xe] = (double)param_1[0xb];
  param_2[3] = (double)param_1[0xc];
  param_2[7] = (double)param_1[0xd];
  param_2[0xb] = (double)param_1[0xe];
  param_2[0xf] = (double)param_1[0xf];
  return;
}

// 0102A0F0  FUN_0102a0f0  size=104  [run]
void __thiscall FUN_0102a0f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[4];
  param_1[2] = param_2[8];
  param_1[3] = param_2[0xc];
  param_1[4] = param_2[1];
  param_1[5] = param_2[5];
  param_1[6] = param_2[9];
  param_1[7] = param_2[0xd];
  param_1[8] = param_2[2];
  param_1[9] = param_2[6];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xe];
  param_1[0xc] = param_2[3];
  param_1[0xd] = param_2[7];
  param_1[0xe] = param_2[0xb];
  param_1[0xf] = param_2[0xf];
  return;
}

// 0102A160  FUN_0102a160  size=232  [run]
void __thiscall FUN_0102a160(float *param_1,double *param_2)

{
  *param_1 = (float)*param_2;
  param_1[1] = (float)param_2[4];
  param_1[2] = (float)param_2[8];
  param_1[3] = (float)param_2[0xc];
  param_1[4] = (float)param_2[1];
  param_1[5] = (float)param_2[5];
  param_1[6] = (float)param_2[9];
  param_1[7] = (float)param_2[0xd];
  param_1[8] = (float)param_2[2];
  param_1[9] = (float)param_2[6];
  param_1[10] = (float)param_2[10];
  param_1[0xb] = (float)param_2[0xe];
  param_1[0xc] = (float)param_2[3];
  param_1[0xd] = (float)param_2[7];
  param_1[0xe] = (float)param_2[0xb];
  param_1[0xf] = (float)param_2[0xf];
  return;
}

// 0102A250  FUN_0102a250  size=216  [run]
void __thiscall FUN_0102a250(float *param_1,double *param_2)

{
  *param_2 = (double)*param_1;
  param_2[1] = (double)param_1[1];
  param_2[2] = (double)param_1[2];
  param_2[3] = (double)param_1[3];
  param_2[4] = (double)param_1[4];
  param_2[5] = (double)param_1[5];
  param_2[6] = (double)param_1[6];
  param_2[7] = (double)param_1[7];
  param_2[8] = (double)param_1[8];
  param_2[9] = (double)param_1[9];
  param_2[10] = (double)param_1[10];
  param_2[0xb] = (double)param_1[0xb];
  param_2[0xc] = (double)param_1[0xc];
  param_2[0xd] = (double)param_1[0xd];
  param_2[0xe] = (double)param_1[0xe];
  param_2[0xf] = (double)param_1[0xf];
  return;
}

// 0102A330  FUN_0102a330  size=232  [run]
void __thiscall FUN_0102a330(float *param_1,double *param_2)

{
  *param_1 = (float)*param_2;
  param_1[1] = (float)param_2[1];
  param_1[2] = (float)param_2[2];
  param_1[3] = (float)param_2[3];
  param_1[4] = (float)param_2[4];
  param_1[5] = (float)param_2[5];
  param_1[6] = (float)param_2[6];
  param_1[7] = (float)param_2[7];
  param_1[8] = (float)param_2[8];
  param_1[9] = (float)param_2[9];
  param_1[10] = (float)param_2[10];
  param_1[0xb] = (float)param_2[0xb];
  param_1[0xc] = (float)param_2[0xc];
  param_1[0xd] = (float)param_2[0xd];
  param_1[0xe] = (float)param_2[0xe];
  param_1[0xf] = (float)param_2[0xf];
  return;
}

// 0102A4A0  FUN_0102a4a0  size=55  [run]
void __thiscall FUN_0102a4a0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 + *param_1;
  param_1[1] = fVar1 + param_1[1];
  param_1[2] = fVar2 + param_1[2];
  param_1[3] = fVar3 + param_1[3];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = param_2[4] + param_1[4];
  param_1[5] = fVar1 + param_1[5];
  param_1[6] = fVar2 + param_1[6];
  param_1[7] = fVar3 + param_1[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  param_1[8] = param_2[8] + param_1[8];
  param_1[9] = fVar1 + param_1[9];
  param_1[10] = fVar2 + param_1[10];
  param_1[0xb] = fVar3 + param_1[0xb];
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc] + param_1[0xc];
  param_1[0xd] = fVar1 + param_1[0xd];
  param_1[0xe] = fVar2 + param_1[0xe];
  param_1[0xf] = fVar3 + param_1[0xf];
  return;
}

// 0102A4E0  FUN_0102a4e0  size=55  [run]
void __thiscall FUN_0102a4e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - fVar1;
  param_1[2] = param_1[2] - fVar2;
  param_1[3] = param_1[3] - fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = param_1[4] - param_2[4];
  param_1[5] = param_1[5] - fVar1;
  param_1[6] = param_1[6] - fVar2;
  param_1[7] = param_1[7] - fVar3;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  param_1[8] = param_1[8] - param_2[8];
  param_1[9] = param_1[9] - fVar1;
  param_1[10] = param_1[10] - fVar2;
  param_1[0xb] = param_1[0xb] - fVar3;
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  param_1[0xc] = param_1[0xc] - param_2[0xc];
  param_1[0xd] = param_1[0xd] - fVar1;
  param_1[0xe] = param_1[0xe] - fVar2;
  param_1[0xf] = param_1[0xf] - fVar3;
  return;
}

// 0102AB20  FUN_0102ab20  size=40  [run]
void __thiscall FUN_0102ab20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[8] = param_1[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return;
}

// 0102AB50  FUN_0102ab50  size=40  [run]
void __thiscall FUN_0102ab50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 0102AB80  FUN_0102ab80  size=20  [run]
void __thiscall FUN_0102ab80(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = SUB164(*param_2,0);
  auVar1._0_12_ = SUB1612(*param_2,4);
  *param_1 = auVar1;
  return;
}

// 0102ABA0  FUN_0102aba0  size=20  [run]
void __thiscall FUN_0102aba0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *param_1 = param_2[3];
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 0102ABC0  FUN_0102abc0  size=24  [run]
void __thiscall FUN_0102abc0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_2 = param_2 * 0x10;
  uVar1 = *(undefined4 *)(&UNK_01706b74 + param_2);
  uVar2 = *(undefined4 *)(&UNK_01706b78 + param_2);
  uVar3 = *(undefined4 *)(&UNK_01706b7c + param_2);
  *param_1 = *(undefined4 *)(&DAT_01706b70 + param_2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

// 0102ABE0  FUN_0102abe0  size=40  [run]
void __thiscall FUN_0102abe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 0102AC10  FUN_0102ac10  size=20  [run]
void __thiscall FUN_0102ac10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 0102AC30  FUN_0102ac30  size=20  [run]
void __thiscall FUN_0102ac30(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 0102AC50  FUN_0102ac50  size=20  [run]
void __thiscall FUN_0102ac50(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 0102AC70  FUN_0102ac70  size=20  [run]
void __thiscall FUN_0102ac70(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 0102AC90  FUN_0102ac90  size=21  [run]
void __thiscall FUN_0102ac90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 0102ACB0  FUN_0102acb0  size=21  [run]
void __thiscall FUN_0102acb0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 0102ACD0  FUN_0102acd0  size=21  [run]
void __thiscall FUN_0102acd0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 0102ACF0  FUN_0102acf0  size=23  [run]
void __thiscall FUN_0102acf0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(*param_1 == 0.0);
  param_2[1] = -(uint)(fVar1 == 0.0);
  param_2[2] = -(uint)(fVar2 == 0.0);
  param_2[3] = -(uint)(fVar3 == 0.0);
  return;
}

// 0102AD10  FUN_0102ad10  size=36  [run]
void __thiscall FUN_0102ad10(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[2] + *param_1;
  fVar2 = param_1[3] + param_1[1];
  fVar3 = *param_1 + param_1[2];
  fVar4 = param_1[1] + param_1[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return;
}

// 0102AD40  FUN_0102ad40  size=37  [run]
bool __thiscall FUN_0102ad40(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(param_1[1] - param_2[1] == 0.0);
  auVar1._0_4_ = -(uint)(*param_1 - *param_2 == 0.0);
  auVar1._8_4_ = -(uint)(param_1[2] - param_2[2] == 0.0);
  auVar1._12_4_ = -(uint)(param_1[3] - param_2[3] == 0.0);
  uVar2 = movmskps(param_1,auVar1);
  return ((byte)uVar2 & 7) == 7;
}

// 0102AD70  FUN_0102ad70  size=58  [run]
void __thiscall FUN_0102ad70(float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar7 = param_1[0xd];
  fVar8 = param_1[0xe];
  fVar9 = param_1[0xf];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  fVar12 = param_1[7];
  fVar13 = param_1[9];
  fVar14 = param_1[10];
  fVar15 = param_1[0xb];
  *param_3 = fVar1 * *param_1 + param_1[0xc] + fVar2 * param_1[4] + fVar3 * param_1[8];
  param_3[1] = fVar1 * fVar4 + fVar7 + fVar2 * fVar10 + fVar3 * fVar13;
  param_3[2] = fVar1 * fVar5 + fVar8 + fVar2 * fVar11 + fVar3 * fVar14;
  param_3[3] = fVar1 * fVar6 + fVar9 + fVar2 * fVar12 + fVar3 * fVar15;
  return;
}

// 0102ADB0  FUN_0102adb0  size=54  [run]
void __thiscall FUN_0102adb0(float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  fVar10 = param_1[9];
  fVar11 = param_1[10];
  fVar12 = param_1[0xb];
  *param_3 = fVar2 * param_1[4] + fVar1 * *param_1 + fVar3 * param_1[8];
  param_3[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10;
  param_3[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11;
  param_3[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12;
  return;
}

// 0102AEE0  FUN_0102aee0  size=53  [run]
void __thiscall FUN_0102aee0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

// 0102AF20  FUN_0102af20  size=14  [run]
void __thiscall FUN_0102af20(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0102AF70  FUN_0102af70  size=54  [run]
int __thiscall FUN_0102af70(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x18);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}

// 0102AFB0  FUN_0102afb0  size=100  [run]
void __thiscall FUN_0102afb0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_1[3],param_1,0x18);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0x18);
  param_1[1] = param_1[1] + 1;
  uVar2 = FUN_01015d80(*param_2,param_1[3]);
  *puVar1 = uVar2;
  puVar1[4] = param_2[4];
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  return;
}

// 0102B020  FUN_0102b020  size=50  [run]
void FUN_0102b020(undefined4 param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0xffffffff;
  local_10 = 0xffffffff;
  local_18 = 0;
  local_1c = param_1;
  local_c = 2;
  FUN_0102afb0(&local_1c);
  return;
}

// 0102B060  FUN_0102b060  size=52  [run]
void FUN_0102b060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_1c = param_1;
  local_14 = param_3;
  local_18 = param_2;
  local_c = 1;
  local_10 = param_4;
  FUN_0102afb0(&local_1c);
  return;
}

// 0102B0A0  FUN_0102b0a0  size=366  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_0102b0a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  CHAR local_111c [4096];
  undefined4 local_11c;
  int local_118;
  uint local_114;
  CHAR *local_90;
  undefined4 local_8c;
  uint local_88;
  CHAR local_84 [124];
  undefined4 uStack_8;
  
  uStack_8 = 0x102b0ad;
  local_90 = local_84;
  local_88 = 0x80000080;
  local_8c = 1;
  local_84[0] = '\0';
  FUN_01026840(param_1);
  if (local_118 != 1 && -1 < local_118 + -1) {
    FUN_01025ff0(0x5c,0x2f,1);
    iVar2 = FUN_01025f20(&DAT_01701298);
    if (iVar2 == 0) {
      FUN_010267c0(&DAT_01701298);
    }
    (*(code *)PTR_FUN_018eaa74)(local_11c,&local_90);
  }
  local_118 = 0;
  if (-1 < (int)local_114) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_11c,local_114 & 0x3fffffff);
  }
  DVar3 = GetFullPathNameA(local_90,0x1000,local_111c,(LPSTR *)0x0);
  if (DVar3 != 0) {
    FUN_01026140(local_111c);
    FUN_01026510(1);
    uVar1 = *param_2;
    local_8c = 0;
    if (-1 < (int)local_88) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
    }
    return uVar1;
  }
  FUN_010262a0();
  local_8c = 0;
  if (-1 < (int)local_88) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
  }
  return 0;
}

// 0102B210  FUN_0102b210  size=626  [run]
undefined4 FUN_0102b210(undefined4 param_1)

{
  int iVar1;
  DWORD DVar2;
  HANDLE hFindFile;
  BOOL BVar3;
  _WIN32_FIND_DATAA local_278;
  undefined4 local_138;
  int local_134;
  uint local_130;
  CHAR *local_ac;
  int local_a8;
  uint local_a4;
  CHAR local_a0 [128];
  CHAR *local_20;
  undefined4 local_1c;
  DWORD local_18;
  DWORD local_14;
  undefined4 local_10;
  HANDLE local_8;
  
  local_ac = local_a0;
  local_a4 = 0x80000080;
  local_a8 = 1;
  local_a0[0] = '\0';
  FUN_01026840(param_1);
  if (local_134 != 1 && -1 < local_134 + -1) {
    FUN_01025ff0(0x5c,0x2f,1);
    iVar1 = FUN_01025f20(&DAT_01701298);
    if (iVar1 == 0) {
      FUN_010267c0(&DAT_01701298);
    }
    (*(code *)PTR_FUN_018eaa74)(local_138,&local_ac);
  }
  local_134 = 0;
  if (-1 < (int)local_130) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_138,local_130 & 0x3fffffff);
  }
  DVar2 = GetFileAttributesA(local_ac);
  if ((DVar2 != 0xffffffff) && ((DVar2 >> 4 & 1) != 0)) {
    if (local_a8 != 1) {
      FUN_010267c0(&DAT_016c4ff8);
    }
    hFindFile = FindFirstFileA(local_ac,&local_278);
    local_8 = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        iVar1 = FUN_01015b90(local_278.cFileName,&DAT_01656d18);
        if ((iVar1 != 0) && (iVar1 = FUN_01015b90(local_278.cFileName,&DAT_016c50b4), iVar1 != 0)) {
          if ((local_278.dwFileAttributes >> 4 & 1) == 0) {
            local_20 = local_278.cFileName;
            local_10 = 1;
            local_1c = __alldiv(local_278.ftLastWriteTime.dwLowDateTime + 0x2ac18000,
                                (local_278.ftLastWriteTime.dwHighDateTime + 0xfe624e22) -
                                (uint)(local_278.ftLastWriteTime.dwLowDateTime < 0xd53e8000),
                                &LAB_00989680,0);
            local_18 = local_278.nFileSizeLow;
            local_14 = local_278.nFileSizeHigh;
            FUN_0102afb0(&local_20);
            hFindFile = local_8;
          }
          else {
            local_20 = local_278.cFileName;
            local_1c = 0;
            local_18 = 0xffffffff;
            local_14 = 0xffffffff;
            local_10 = 2;
            FUN_0102afb0(&local_20);
          }
        }
        BVar3 = FindNextFileA(hFindFile,&local_278);
      } while (BVar3 != 0);
    }
    FindClose(hFindFile);
    local_a8 = 0;
    if (-1 < (int)local_a4) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_ac,local_a4 & 0x3fffffff);
    }
    return 0;
  }
  local_a8 = 0;
  if (-1 < (int)local_a4) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_ac,local_a4 & 0x3fffffff);
  }
  return 1;
}

// 0102B490  FUN_0102b490  size=30  [run]
void __thiscall FUN_0102b490(int param_1,char *param_2,char *param_3)

{
  FILE *pFVar1;
  
  pFVar1 = _fopen(param_2,param_3);
  *(FILE **)(param_1 + 8) = pFVar1;
  return;
}

// 0102B4B0  FUN_0102b4b0  size=34  [run]
void __fastcall FUN_0102b4b0(int param_1)

{
  if ((*(FILE **)(param_1 + 8) != (FILE *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) {
    _fclose(*(FILE **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0102B4E0  hkStdioStreamWriter::vf10  size=65  [run]
size_t __thiscall hkStdioStreamWriter::vf10(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((*(FILE **)(param_1 + 8) != (FILE *)0x0) && (0 < (int)param_3)) {
    sVar1 = _fwrite(param_2,1,param_3,*(FILE **)(param_1 + 8));
    if ((int)sVar1 < 1) {
      FUN_0102b4b0();
    }
    return sVar1;
  }
  return 0;
}

// 0102B530  hkStdioStreamWriter::vf14  size=15  [run]
void __fastcall hkStdioStreamWriter::vf14(int param_1)

{
  if (*(FILE **)(param_1 + 8) != (FILE *)0x0) {
    _fflush(*(FILE **)(param_1 + 8));
  }
  return;
}

// 0102B540  hkStdioStreamWriter::vf0C  size=19  [run]
void __thiscall hkStdioStreamWriter::vf0C(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 8) != 0;
  return;
}

// 0102B560  hkStdioStreamWriter::vf24  size=13  [run]
void hkStdioStreamWriter::vf24(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0102B570  hkStdioStreamWriter::vf18  size=13  [run]
void hkStdioStreamWriter::vf18(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0102B580  hkStdioStreamWriter::vf1C  size=33  [run]
bool __thiscall hkStdioStreamWriter::vf1C(int param_1,long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = _fseek(*(FILE **)(param_1 + 8),param_2,param_3);
  return iVar1 != 0;
}

// 0102B5B0  hkStdioStreamWriter::vf20  size=13  [run]
void __fastcall hkStdioStreamWriter::vf20(int param_1)

{
  _ftell(*(FILE **)(param_1 + 8));
  return;
}

// 0102B5C0  hkStdioStreamWriter::hkStdioStreamWriter  size=62  [run]
undefined4 * __thiscall hkStdioStreamWriter::hkStdioStreamWriter(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = FUN_00fec7c3();
  if (param_2 == 2) {
    param_1[2] = iVar1 + 0x40;
    return param_1;
  }
  param_1[2] = iVar1 + 0x20;
  return param_1;
}

// 0102B600  hkStdioStreamWriter::hkStdioStreamWriter_2  size=56  [run]
undefined4 * __thiscall hkStdioStreamWriter::hkStdioStreamWriter_2(undefined4 *param_1,int param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  if (param_2 != 0) {
    FUN_0102b490(param_2,&DAT_01706cac);
  }
  return param_1;
}

// 0102B640  hkBaseObject::hkBaseObject_155  size=22  [run]
void __fastcall hkBaseObject::hkBaseObject_155(undefined4 *param_1)

{
  *param_1 = hkStdioStreamWriter::vftable;
  FUN_0102b4b0();
  *param_1 = vftable;
  return;
}

// 0102B660  hkStdioStreamWriter::vf00  size=52  [run]
int __thiscall hkStdioStreamWriter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_155();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0102B6A0  FUN_0102b6a0  size=155  [run]
void __fastcall FUN_0102b6a0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar4 = 0;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  uVar3 = *(int *)(param_1 + 0x10) - iVar2;
  if (*(int *)(param_1 + 0x20) <= (int)uVar3) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    return;
  }
  if (0 < iVar2) {
    uVar1 = uVar3 & 0x800001ff;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffe00) + 1;
    }
    if (uVar1 != 0) {
      iVar4 = 0x200 - uVar1;
    }
    FUN_01015e90(*(int *)(param_1 + 0xc) + iVar4,iVar2 + *(int *)(param_1 + 0xc),uVar3);
    *(int *)(param_1 + 0x1c) = iVar4;
    iVar2 = (((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1ffU)) >> 9) + (uint)(uVar1 != 0)) * 0x200;
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(param_1 + 0x14) = iVar2;
  }
  return;
}

// 0102B740  hkBufferedStreamReader::vf10  size=131  [run]
int __thiscall hkBufferedStreamReader::vf10(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[4];
  iVar4 = param_1[5] - iVar2;
  iVar3 = param_3;
  if (iVar4 < param_3) {
    do {
      FUN_01015e80(param_2,param_1[3] + iVar2,iVar4);
      pcVar1 = *(code **)(*param_1 + 0x30);
      param_2 = param_2 + iVar4;
      param_1[4] = param_1[4] + iVar4;
      iVar3 = iVar3 - iVar4;
      iVar2 = (*pcVar1)(0xffffffff);
      if (iVar2 != 0) {
        return param_3 - iVar3;
      }
      iVar2 = param_1[4];
      iVar4 = param_1[5] - iVar2;
    } while (iVar4 < iVar3);
  }
  FUN_01015e80(param_2,param_1[3] + param_1[4],iVar3);
  param_1[4] = param_1[4] + iVar3;
  return param_3;
}

// 0102B7D0  hkBufferedStreamReader::vf14  size=73  [run]
int __thiscall hkBufferedStreamReader::vf14(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[5] - param_1[4];
  iVar2 = param_2;
  if (iVar1 < param_2) {
    do {
      iVar2 = iVar2 - iVar1;
      iVar1 = (**(code **)(*param_1 + 0x30))(0xffffffff);
      if (iVar1 != 0) {
        return param_2 - iVar2;
      }
      iVar1 = param_1[5] - param_1[4];
    } while (iVar1 < iVar2);
  }
  param_1[4] = param_1[4] + iVar2;
  return param_2;
}

// 0102B820  hkBufferedStreamReader::vf0C  size=57  [run]
void __thiscall hkBufferedStreamReader::vf0C(int param_1,undefined1 *param_2)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
    pcVar1 = (char *)(**(code **)(**(int **)(param_1 + 8) + 0xc))(&stack0xfffffffb,param_1);
    if (*pcVar1 == '\0') {
      *param_2 = 0;
      return;
    }
  }
  *param_2 = 1;
  return;
}

// 0102B860  hkBufferedStreamReader::vf18  size=19  [run]
void __thiscall hkBufferedStreamReader::vf18(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 0x18) != 0;
  return;
}

// 0102B880  hkBufferedStreamReader::vf1C  size=29  [run]
bool __thiscall hkBufferedStreamReader::vf1C(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_1 + 0x20) = param_2;
  return *(int *)(param_1 + 0x18) < param_2;
}

// 0102B8A0  hkBufferedStreamReader::vf20  size=19  [run]
undefined4 __fastcall hkBufferedStreamReader::vf20(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x1c);
    return 0;
  }
  return 1;
}

// 0102B8C0  hkBufferedStreamReader::vf24  size=25  [run]
undefined4 __thiscall hkBufferedStreamReader::vf24(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x24))(param_2);
  return param_2;
}

// 0102B8E0  hkBufferedStreamReader::vf28  size=31  [run]
void __fastcall hkBufferedStreamReader::vf28(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0102b8fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x28))();
  return;
}

// 0102B900  hkBufferedStreamReader::vf2C  size=34  [run]
int __fastcall hkBufferedStreamReader::vf2C(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))();
  if (-1 < iVar1) {
    return (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14)) + iVar1;
  }
  return -1;
}

// 0102B940  hkBufferedStreamReader::vf30  size=139  [run]
bool __thiscall hkBufferedStreamReader::vf30(int param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  pcVar1 = (char *)(**(code **)(**(int **)(param_1 + 8) + 0xc))((int)&uStack_8 + 3);
  if (*pcVar1 == '\0') {
    return true;
  }
  FUN_0102b6a0();
  uVar4 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  if ((-1 < (int)param_2) && ((int)param_2 <= (int)uVar4)) {
    uVar4 = param_2;
  }
  iVar3 = 0;
  if (0 < (int)uVar4) {
    do {
      if ((uVar4 & 0x1f) != 0) {
        uVar4 = uVar4 - (uVar4 & 0x1f);
      }
      uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))
                        (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc),uVar4);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar2;
      iVar3 = iVar3 + uVar2;
      if (uVar2 != uVar4) {
        return iVar3 == 0;
      }
    } while (iVar3 < (int)uVar4);
  }
  return false;
}

// 0102B9D0  FUN_0102b9d0  size=67  [run]
undefined4 * __thiscall FUN_0102b9d0(undefined4 *param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = FUN_01005c40(*(undefined4 *)((int)pvVar1 + 0x2c),param_2,0x40);
  *param_1 = uVar2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  return param_1;
}

// 0102BA20  FUN_0102ba20  size=30  [run]
void __fastcall FUN_0102ba20(undefined4 *param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  uVar1 = *param_1;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005c80(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  return;
}

// 0102BA40  hkBufferedStreamReader::hkBufferedStreamReader  size=54  [run]
undefined4 * __thiscall
hkBufferedStreamReader::hkBufferedStreamReader
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = param_2;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_0102b9d0(param_3);
  FUN_01006000();
  return param_1;
}

// 0102BA80  hkBaseObject::hkBaseObject_152  size=33  [run]
void __fastcall hkBaseObject::hkBaseObject_152(undefined4 *param_1)

{
  *param_1 = hkBufferedStreamReader::vftable;
  FUN_010060a0();
  FUN_0102ba20();
  *param_1 = vftable;
  return;
}

// 0102BAB0  FUN_0102bab0  size=38  [run]
void FUN_0102bab0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0102BAE0  hkBufferedStreamReader::vf00  size=52  [run]
int __thiscall hkBufferedStreamReader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_152();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0102BB20  hkStdioStreamReader::vf0C  size=15  [run]
void __thiscall hkStdioStreamReader::vf0C(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x10);
  return;
}

// 0102BB30  hkStdioStreamReader::vf18  size=13  [run]
void hkStdioStreamReader::vf18(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0102BB40  hkStdioStreamReader::vf24  size=13  [run]
void hkStdioStreamReader::vf24(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0102BB50  hkStdioStreamReader::vf28  size=33  [run]
bool __thiscall hkStdioStreamReader::vf28(int param_1,long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = _fseek(*(FILE **)(param_1 + 0xc),param_2,param_3);
  return iVar1 != 0;
}

// 0102BB80  hkStdioStreamReader::vf2C  size=13  [run]
void __fastcall hkStdioStreamReader::vf2C(int param_1)

{
  _ftell(*(FILE **)(param_1 + 0xc));
  return;
}

// 0102BB90  hkStdioStreamReader::hkStdioStreamReader  size=66  [run]
undefined4 * __thiscall hkStdioStreamReader::hkStdioStreamReader(undefined4 *param_1,char *param_2)

{
  FILE *pFVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 4) = 1;
  pFVar1 = _fopen(param_2,"rb");
  param_1[3] = pFVar1;
  *(bool *)(param_1 + 4) = pFVar1 != (FILE *)0x0;
  return param_1;
}

// 0102BBE0  hkBaseObject::hkBaseObject_151  size=33  [run]
void __fastcall hkBaseObject::hkBaseObject_151(undefined4 *param_1)

{
  *param_1 = hkStdioStreamReader::vftable;
  if ((FILE *)param_1[3] != (FILE *)0x0) {
    _fclose((FILE *)param_1[3]);
  }
  *param_1 = vftable;
  return;
}

// 0102BC10  hkStdioStreamReader::vf10  size=41  [run]
void __thiscall hkStdioStreamReader::vf10(int param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  sVar1 = _fread(param_2,1,param_3,*(FILE **)(param_1 + 0xc));
  if ((int)sVar1 < 1) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}

// 0102BC60  hkSeekableStreamReader::vf1C  size=27  [run]
bool __fastcall hkSeekableStreamReader::vf1C(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  param_1[2] = iVar1;
  return iVar1 == -1;
}

// 0102BC80  hkSeekableStreamReader::vf20  size=14  [run]
void __fastcall hkSeekableStreamReader::vf20(int *param_1)

{
  (**(code **)(*param_1 + 0x28))(param_1[2],0);
  return;
}

// 0102BC90  hkSeekableStreamReader::vf18  size=13  [run]
void hkSeekableStreamReader::vf18(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0102BCA0  hkSeekableStreamReader::vf24  size=13  [run]
void hkSeekableStreamReader::vf24(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0102BCC0  FUN_0102bcc0  size=38  [run]
void FUN_0102bcc0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0102BCF0  hkSeekableStreamReader::vf00  size=53  [run]
undefined4 * __thiscall hkSeekableStreamReader::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0102BD30  hkStdioStreamReader::vf00  size=52  [run]
int __thiscall hkStdioStreamReader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_151();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0102BD70  FUN_0102bd70  size=1  [run]
void FUN_0102bd70(void)

{
  return;
}

// 0102BD80  hkBsdSocket::vf0C  size=19  [run]
void __thiscall hkBsdSocket::vf0C(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 0x20) != -1;
  return;
}

// 0102BDA0  hkBsdSocket::vf10  size=26  [run]
void __fastcall hkBsdSocket::vf10(int param_1)

{
  if (*(SOCKET *)(param_1 + 0x20) != 0xffffffff) {
    closesocket(*(SOCKET *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return;
}

// 0102BDC0  FUN_0102bdc0  size=36  [run]
bool __fastcall FUN_0102bdc0(int *param_1)

{
  SOCKET SVar1;
  
  (**(code **)(*param_1 + 0x10))();
  SVar1 = socket(2,1,0);
  param_1[8] = SVar1;
  return SVar1 == 0xffffffff;
}

// 0102BDF0  hkBsdSocket::vf14  size=67  [run]
int __thiscall hkBsdSocket::vf14(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (param_1[8] != 0xffffffff) {
    iVar1 = recv(param_1[8],param_2,param_3,0);
    if ((0 < iVar1) && (iVar1 != -1)) {
      return iVar1;
    }
    iVar1 = WSAGetLastError();
    if (iVar1 != 0x2733) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return 0;
}

// 0102BE40  hkBsdSocket::vf18  size=67  [run]
int __thiscall hkBsdSocket::vf18(int *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (param_1[8] != 0xffffffff) {
    iVar1 = send(param_1[8],param_2,param_3,0);
    if ((0 < iVar1) && (iVar1 != -1)) {
      return iVar1;
    }
    iVar1 = WSAGetLastError();
    if (iVar1 != 0x2733) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return 0;
}

// 0102BE90  FUN_0102be90  size=12  [run]
void __fastcall FUN_0102be90(int param_1)

{
  undefined4 in_EAX;
  
  *(bool *)in_EAX = param_1 - 0x30U < 10;
  return;
}

// 0102BEA0  hkBsdSocket::vf1C  size=187  [run]
undefined4 __thiscall hkBsdSocket::vf1C(int *param_1,undefined4 param_2,u_short param_3)

{
  hostent *phVar1;
  int iVar2;
  char *name;
  undefined8 uVar3;
  sockaddr local_14;
  
  FUN_01015ea0(&local_14,0,0x10);
  local_14.sa_family = 2;
  local_14.sa_data._0_2_ = htons(param_3);
  uVar3 = FUN_0102be90();
  name = (char *)((ulonglong)uVar3 >> 0x20);
  if (*(char *)uVar3 == '\0') {
    phVar1 = gethostbyname(name);
    if (phVar1 == (hostent *)0x0) {
      return 1;
    }
    FUN_01015e80(local_14.sa_data + 2,*phVar1->h_addr_list,(int)phVar1->h_length);
  }
  else {
    local_14.sa_data._2_4_ = inet_addr(name);
  }
  if ((param_1[8] == -1) && (iVar2 = FUN_0102bdc0(), iVar2 != 0)) {
    return 1;
  }
  iVar2 = connect(param_1[8],&local_14,0x10);
  if ((iVar2 < 0) && (iVar2 = WSAGetLastError(), iVar2 != 0x2733)) {
    (**(code **)(*param_1 + 0x10))();
    return 1;
  }
  return 0;
}

// 0102BF60  hkBsdSocket::vf24  size=48  [run]
bool __thiscall hkBsdSocket::vf24(int param_1,HWND param_2,u_int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = WSAAsyncSelect(*(SOCKET *)(param_1 + 0x20),param_2,param_3,
                         (param_4 & 0xc) * 4 | param_4 & 3);
  return iVar1 != 0;
}

// 0102BF90  hkBsdSocket::vf28  size=78  [run]
ulonglong __fastcall hkBsdSocket::vf28(int param_1,undefined4 param_2)

{
  int iVar1;
  fd_set local_110;
  timeval local_c;
  
  local_110.fd_array[0] = *(SOCKET *)(param_1 + 0x20);
  if (local_110.fd_array[0] != 0xffffffff) {
    local_c.tv_sec = 0;
    local_c.tv_usec = 0;
    local_110.fd_count = 1;
    iVar1 = select(local_110.fd_array[0] + 1,&local_110,(fd_set *)0x0,(fd_set *)0x0,&local_c);
    return (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
  }
  return CONCAT44(param_2,0xffffffff) & 0xffffffffffffff00;
}

// 0102BFE0  FUN_0102bfe0  size=45  [run]
bool __thiscall FUN_0102bfe0(int param_1,char param_2)

{
  int iVar1;
  uint local_8;
  
  local_8 = (uint)(param_2 == '\0');
  iVar1 = ioctlsocket(*(SOCKET *)(param_1 + 0x20),-0x7ffb9982,&local_8);
  return iVar1 != 0;
}

