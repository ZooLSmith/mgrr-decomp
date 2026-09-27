// src/unsorted/unit_00C23C40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C23C40..00C24970, 9 functions

#include "types.h"

// 00C23C40  FUN_00c23c40  size=586  [run]
void FUN_00c23c40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_01bea05c != 0) {
    piVar4 = &DAT_018a97f0;
    do {
      if (*piVar4 != -1) {
        FUN_00a00bd0(*piVar4,0);
      }
      piVar4 = piVar4 + -1;
    } while (0x18a979f < (int)piVar4);
  }
  FUN_00f972f0();
  iVar3 = DAT_01bea034;
  if (DAT_01bea03c != -1) {
    iVar2 = DAT_01bea038;
    if (DAT_01bea034 != 0) {
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar1 = *(int *)(iVar3 + iVar2 * 4);
        if (iVar1 != -1) {
          FUN_00a00bd0(iVar1,0);
        }
      }
    }
    DAT_01bea03c = -1;
  }
  iVar3 = DAT_01bea01c;
  if (DAT_01bea024 != -1) {
    iVar2 = DAT_01bea020;
    if (DAT_01bea01c != 0) {
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar1 = *(int *)(iVar3 + iVar2 * 4);
        if (iVar1 != -1) {
          FUN_00a00bd0(iVar1,0);
        }
      }
    }
    DAT_01bea024 = -1;
  }
  iVar3 = DAT_01bea008;
  if (DAT_01bea010 != -1) {
    iVar2 = DAT_01bea00c;
    if (DAT_01bea008 != 0) {
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar1 = *(int *)(iVar3 + iVar2 * 4);
        if (iVar1 != -1) {
          FUN_00a00bd0(iVar1,0);
        }
      }
    }
    DAT_01bea010 = -1;
  }
  iVar3 = DAT_01be9ff4;
  if (DAT_01be9ffc != -1) {
    iVar2 = DAT_01be9ff8;
    if (DAT_01be9ff4 != 0) {
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar1 = *(int *)(iVar3 + iVar2 * 4);
        if (iVar1 != -1) {
          FUN_00a00bd0(iVar1,0);
        }
      }
    }
    DAT_01be9ffc = -1;
  }
  iVar3 = DAT_01be9fcc;
  if (DAT_01be9fd4 != -1) {
    iVar2 = DAT_01be9fd0;
    if (DAT_01be9fcc != 0) {
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar1 = *(int *)(iVar3 + iVar2 * 4);
        if (iVar1 != -1) {
          FUN_00a00bd0(iVar1,0);
        }
      }
    }
    DAT_01be9fd4 = -1;
  }
  iVar3 = DAT_01be9fe0;
  if (DAT_01be9fe8 != -1) {
    iVar2 = DAT_01be9fe4;
    if (DAT_01be9fe0 != 0) {
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar1 = *(int *)(iVar3 + iVar2 * 4);
        if (iVar1 != -1) {
          FUN_00a00bd0(iVar1,0);
        }
      }
    }
    DAT_01be9fe8 = -1;
  }
  iVar3 = DAT_01bea048;
  if (DAT_01bea050 != -1) {
    iVar2 = DAT_01bea04c;
    if (DAT_01bea048 != 0) {
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar1 = *(int *)(iVar3 + iVar2 * 4);
        if (iVar1 != -1) {
          FUN_00a00bd0(iVar1,0);
        }
      }
    }
    DAT_01bea050 = -1;
  }
  iVar3 = DAT_01be9fb8;
  if (DAT_01be9fc0 != -1) {
    iVar2 = DAT_01be9fbc;
    if (DAT_01be9fb8 != 0) {
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar1 = *(int *)(iVar3 + iVar2 * 4);
        if (iVar1 != -1) {
          FUN_00a00bd0(iVar1,0);
        }
      }
    }
    DAT_01be9fc0 = -1;
  }
  DAT_01bea05c = 0;
  DAT_01be9fa0 = 0;
  return;
}

// 00C23E90  FUN_00c23e90  size=507  [run]
void FUN_00c23e90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  uint local_10;
  uint local_c;
  
  if ((1 < DAT_01bea05c) && (iVar1 = FUN_00c13cd0(), iVar1 != 0)) {
    DAT_01be9fa8 = 1;
  }
  DAT_01bea040 = 0;
  DAT_01bea030 = FUN_00c13de0(param_1);
  FUN_009c7e10(&local_14,DAT_01bea030);
  if ((((local_14 != 5) || (param_1 != 0x750)) && (param_1 - 0x101U < 0x6ff)) && (local_14 != 0)) {
    FUN_009c52d0(1);
  }
  uVar3 = DAT_01be9fb0;
  iVar1 = DAT_01be9fb4;
  switch(DAT_01bea030) {
  case 0:
  case 4:
    break;
  default:
    iVar1 = 0xe;
    goto LAB_00c23f48;
  case 3:
  case 5:
    if (DAT_01be9fb4 == 0) {
      iVar1 = 0xd;
    }
    break;
  case 6:
  case 7:
    iVar1 = 0;
LAB_00c23f48:
    uVar3 = 0;
  }
  if (DAT_01bea030 == 8) {
    DAT_01bea040 = 1;
LAB_00c23f70:
    iVar1 = DAT_01bea030 + 7;
    uVar3 = 0xffffffff;
  }
  else if (DAT_01bea030 == 9) {
    DAT_01bea040 = 2;
    goto LAB_00c23f70;
  }
  DAT_01be9fc4 = 0xffffffff;
  iVar2 = FUN_009c7400();
  if ((iVar2 != 0) && ((DAT_01bea030 == 0 || (DAT_01bea030 - 3U < 3)))) {
    DAT_01be9fc4 = 0;
  }
  iVar1 = FUN_009c7420(iVar1);
  if (DAT_01bea030 == 2) {
    DAT_01bea054 = 0;
  }
  else {
    DAT_01bea054 = 0xffffffff;
    if (DAT_01bea030 == 8 || DAT_01bea030 == 9) {
      local_10 = local_10 | 0x80000000;
    }
    if (DAT_01bea030 - 8U < 2) {
      local_c = local_c | 0x80000000;
    }
    DAT_01be9fd8 = local_10;
    DAT_01be9fec = local_c;
    DAT_01bea000 = local_14;
    DAT_01bea014 = uVar3;
    DAT_01bea028 = iVar1;
    if (DAT_01bea030 == 1) {
      DAT_01bea090 = DAT_01bea090 | 0x80000000;
      goto LAB_00c23fce;
    }
  }
  DAT_01bea090 = DAT_01bea090 & 0x7fffffff;
LAB_00c23fce:
  if ((DAT_01bea030 == 0) || (DAT_01bea030 - 3U < 3)) {
    if (iVar1 == 10) {
      iVar2 = 0;
    }
    else if (iVar1 == 0xb) {
      iVar2 = 1;
    }
    else {
      if (iVar1 != 0xc) {
        DAT_01be9fa4 = 1;
        return;
      }
      iVar2 = 2;
    }
    if ((&DAT_01b7596c)[iVar2] == 0) {
      FUN_0094e6b0(iVar1);
      (&DAT_01b7596c)[iVar2] = 1;
      FUN_009c57c0();
    }
  }
  DAT_01be9fa4 = 1;
  return;
}

// 00C240B0  FUN_00c240b0  size=331  [run]
void FUN_00c240b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)DAT_01bea034;
  if (DAT_01bea044 == 0) {
    if (DAT_01bea040 != DAT_01bea03c) {
      if (DAT_01bea03c != -1) {
        iVar4 = DAT_01bea038;
        if (DAT_01bea034 != (undefined4 *)0x0) {
          while (iVar4 = iVar4 + -1, -1 < iVar4) {
            iVar1 = *(int *)(iVar3 + iVar4 * 4);
            if (iVar1 != -1) {
              FUN_00a00bd0(iVar1,0);
            }
          }
        }
        DAT_01bea03c = -1;
      }
      DAT_01bea044 = DAT_01bea044 + 1;
    }
    return;
  }
  if (DAT_01bea044 != 1) {
    if (DAT_01bea044 != 2) {
      return;
    }
    iVar3 = FUN_00c13d80(DAT_01bea034,DAT_01bea038);
    if (iVar3 == 0) {
      return;
    }
    DAT_01bea03c = DAT_01bea040;
    DAT_01bea044 = 0;
    return;
  }
  iVar3 = FUN_00c13d30(DAT_01bea034,DAT_01bea038);
  if (iVar3 == 0) {
    return;
  }
  if (DAT_01bea040 == -1) {
    DAT_01bea03c = DAT_01bea040;
    DAT_01bea044 = 0;
    return;
  }
  iVar3 = 6;
  DAT_01bea034 = &DAT_018a97f4;
  DAT_01bea038 = 6;
  if (DAT_01bea040 == 1) {
    DAT_01bea034 = &DAT_018a9784;
  }
  else {
    if (DAT_01bea040 != 2) goto LAB_00c24176;
    DAT_01bea034 = &DAT_018a980c;
  }
  iVar3 = 7;
  DAT_01bea038 = 7;
LAB_00c24176:
  puVar2 = DAT_01bea034;
  if ((DAT_01bea034 != (undefined4 *)0x0) && (iVar4 = 0, iVar3 != 0)) {
    do {
      if (puVar2[iVar4] != -1) {
        FUN_00a00a60(puVar2[iVar4],0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  DAT_01bea044 = DAT_01bea044 + 1;
  return;
}

// 00C24200  FUN_00c24200  size=686  [run]
void FUN_00c24200(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = DAT_01bea01c;
  if (DAT_01bea02c == 0) {
    if ((DAT_01bea028 != DAT_01bea024) || (DAT_01bea014 != DAT_01bea010)) {
      if (DAT_01bea024 != -1) {
        iVar4 = DAT_01bea020;
        if (DAT_01bea01c != (undefined4 *)0x0) {
          while (iVar4 = iVar4 + -1, -1 < iVar4) {
            if (puVar1[iVar4] != -1) {
              FUN_00a00bd0(puVar1[iVar4],0);
            }
          }
        }
        DAT_01bea024 = -1;
      }
      iVar4 = (int)DAT_01bea008;
      if (DAT_01bea010 != -1) {
        iVar3 = DAT_01bea00c;
        if (DAT_01bea008 != (int *)0x0) {
          while (iVar3 = iVar3 + -1, -1 < iVar3) {
            iVar2 = *(int *)(iVar4 + iVar3 * 4);
            if (iVar2 != -1) {
              FUN_00a00bd0(iVar2,0);
            }
          }
        }
        DAT_01bea010 = -1;
      }
      FUN_00f972f0();
      DAT_01bea02c = DAT_01bea02c + 1;
      DAT_01bea018 = DAT_01bea018 + 1;
    }
  }
  else if (DAT_01bea02c == 1) {
    iVar4 = FUN_00c13d30(DAT_01bea01c,DAT_01bea020);
    if ((iVar4 != 0) && (iVar4 = FUN_00c13d30(DAT_01bea008,DAT_01bea00c), iVar4 != 0)) {
      if (DAT_01bea028 == -1) {
        DAT_01bea024 = -1;
        DAT_01bea02c = 0;
      }
      else {
        puVar1 = &DAT_018a9828 + DAT_01bea028 * 5;
        DAT_01bea020 = 5;
        DAT_01bea01c = puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          iVar4 = 0;
          do {
            if (puVar1[iVar4] != -1) {
              FUN_00a00a60(puVar1[iVar4],0);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 5);
        }
        DAT_01bea02c = DAT_01bea02c + 1;
      }
      switch(DAT_01bea028) {
      case 5:
      case 7:
      case 0xe:
        DAT_01be9fac = 1;
        break;
      default:
        DAT_01be9fac = 0;
        break;
      case 8:
        DAT_01be9fac = 2;
        break;
      case 9:
        DAT_01be9fac = 3;
      }
      if ((DAT_01bea028 == 0xf) || (DAT_01bea028 == 0x10)) {
        DAT_01bea018 = 0;
        DAT_01be9fac = 0xffffffff;
        DAT_01bea014 = 0xffffffff;
        DAT_01bea010 = 0xffffffff;
        return;
      }
      if (DAT_01be9fac == -1) {
        DAT_01bea018 = 0;
        DAT_01bea014 = 0xffffffff;
        DAT_01bea010 = 0xffffffff;
        return;
      }
      if (DAT_01bea014 != -1) {
        DAT_01bea008 = &DAT_018a9980 + DAT_01bea014 + DAT_01be9fac * 4;
        DAT_01bea00c = 1;
        if ((DAT_01bea008 != (int *)0x0) && (*DAT_01bea008 != -1)) {
          FUN_00a00a60(*DAT_01bea008,0);
        }
        DAT_01bea018 = DAT_01bea018 + 1;
        return;
      }
      DAT_01bea018 = 0;
      DAT_01bea010 = 0xffffffff;
      return;
    }
  }
  else if (((DAT_01bea02c == 2) && (iVar4 = FUN_00c13d80(DAT_01bea01c,DAT_01bea020), iVar4 != 0)) &&
          (iVar4 = FUN_00c13d80(DAT_01bea008,DAT_01bea00c), iVar4 != 0)) {
    if (DAT_01be9fac != -1) {
      DAT_01be9fa0 = 1;
    }
    DAT_01bea02c = 0;
    DAT_01bea018 = 0;
    DAT_01bea024 = DAT_01bea028;
    DAT_01bea010 = DAT_01bea014;
    return;
  }
  return;
}

// 00C244D0  FUN_00c244d0  size=267  [run]
void FUN_00c244d0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_01be9ff4;
  if (DAT_01bea004 == 0) {
    if (DAT_01bea000 == DAT_01be9ffc) {
      return;
    }
    if (DAT_01be9ffc != -1) {
      iVar2 = DAT_01be9ff8;
      if (DAT_01be9ff4 != (int *)0x0) {
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
          if (piVar1[iVar2] != -1) {
            FUN_00a00bd0(piVar1[iVar2],0);
          }
        }
      }
      DAT_01be9ffc = -1;
    }
  }
  else {
    if (DAT_01bea004 != 1) {
      if (DAT_01bea004 != 2) {
        return;
      }
      iVar2 = FUN_00c13d80(DAT_01be9ff4,DAT_01be9ff8);
      if (iVar2 == 0) {
        return;
      }
      DAT_01be9ffc = DAT_01bea000;
      DAT_01bea004 = 0;
      return;
    }
    iVar2 = FUN_00c13d30(DAT_01be9ff4,DAT_01be9ff8);
    if (iVar2 == 0) {
      return;
    }
    if (DAT_01bea000 == -1) {
      DAT_01be9ffc = DAT_01bea000;
      DAT_01bea004 = 0;
      return;
    }
    DAT_01be9ff4 = &DAT_018a99c0 + DAT_01bea000;
    DAT_01be9ff8 = 1;
    if ((DAT_01be9ff4 != (int *)0x0) && (*DAT_01be9ff4 != -1)) {
      FUN_00a00a60(*DAT_01be9ff4,0);
      DAT_01bea004 = DAT_01bea004 + 1;
      return;
    }
  }
  DAT_01bea004 = DAT_01bea004 + 1;
  return;
}

// 00C245E0  FUN_00c245e0  size=267  [run]
void FUN_00c245e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (&DAT_01be9fdc)[param_1 * 5];
  piVar1 = (int *)(&DAT_01be9fcc + param_1 * 5);
  if (iVar4 == 0) {
    if ((&DAT_01be9fd8)[param_1 * 5] == (&DAT_01be9fd4)[param_1 * 5]) {
      return;
    }
    if ((&DAT_01be9fd4)[param_1 * 5] != -1) {
      iVar4 = *piVar1;
      if (iVar4 != 0) {
        iVar2 = (&DAT_01be9fd0)[param_1 * 5];
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
          iVar3 = *(int *)(iVar4 + iVar2 * 4);
          if (iVar3 != -1) {
            FUN_00a00bd0(iVar3,0);
          }
        }
      }
      (&DAT_01be9fd4)[param_1 * 5] = 0xffffffff;
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        return;
      }
      iVar4 = FUN_00c13d80(*piVar1,(&DAT_01be9fd0)[param_1 * 5]);
      if (iVar4 == 0) {
        return;
      }
      (&DAT_01be9fdc)[param_1 * 5] = 0;
      (&DAT_01be9fd4)[param_1 * 5] = (&DAT_01be9fd8)[param_1 * 5];
      return;
    }
    iVar4 = FUN_00c13d30(*piVar1,(&DAT_01be9fd0)[param_1 * 5]);
    if (iVar4 == 0) {
      return;
    }
    iVar4 = (&DAT_01be9fd8)[param_1 * 5];
    if (iVar4 == -1) {
      (&DAT_01be9fdc)[param_1 * 5] = 0;
      (&DAT_01be9fd4)[param_1 * 5] = 0xffffffff;
      return;
    }
    if (param_1 == 0) {
      DAT_01be9fcc = &DAT_018a99f0 + iVar4;
    }
    else {
      *piVar1 = (int)(&DAT_018a9a08 + iVar4);
      if (iVar4 < 0) {
        *piVar1 = (int)(&DAT_018a9a38 + iVar4);
      }
    }
    (&DAT_01be9fd0)[param_1 * 5] = 1;
    if (((int *)*piVar1 != (int *)0x0) && (iVar4 = *(int *)*piVar1, iVar4 != -1)) {
      FUN_00a00a60(iVar4,0);
      (&DAT_01be9fdc)[param_1 * 5] = (&DAT_01be9fdc)[param_1 * 5] + 1;
      return;
    }
  }
  (&DAT_01be9fdc)[param_1 * 5] = (&DAT_01be9fdc)[param_1 * 5] + 1;
  return;
}

// 00C246F0  FUN_00c246f0  size=283  [run]
void FUN_00c246f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = (int)DAT_01bea048;
  if (DAT_01bea058 == 0) {
    if (DAT_01bea054 != DAT_01bea050) {
      if (DAT_01bea050 != -1) {
        iVar2 = DAT_01bea04c;
        if (DAT_01bea048 != (undefined4 *)0x0) {
          while (iVar2 = iVar2 + -1, -1 < iVar2) {
            iVar1 = *(int *)(iVar3 + iVar2 * 4);
            if (iVar1 != -1) {
              FUN_00a00bd0(iVar1,0);
            }
          }
        }
        DAT_01bea050 = -1;
      }
      DAT_01bea058 = DAT_01bea058 + 1;
    }
  }
  else if (DAT_01bea058 == 1) {
    iVar3 = FUN_00c13d30(DAT_01bea048,DAT_01bea04c);
    if (iVar3 != 0) {
      if (DAT_01bea054 != -1) {
        piVar4 = &DAT_018a9a68;
        DAT_01bea048 = &DAT_018a9a68;
        DAT_01bea04c = 6;
        do {
          if (*piVar4 != -1) {
            FUN_00a00a60(*piVar4,0);
          }
          piVar4 = piVar4 + 1;
        } while ((int)piVar4 < 0x18a9a80);
        DAT_01bea058 = DAT_01bea058 + 1;
        return;
      }
      DAT_01bea050 = 0xffffffff;
      DAT_01bea058 = 0;
      return;
    }
  }
  else if ((DAT_01bea058 == 2) && (iVar3 = FUN_00c13d80(DAT_01bea048,DAT_01bea04c), iVar3 != 0)) {
    DAT_01bea050 = DAT_01bea054;
    DAT_01bea058 = 0;
    return;
  }
  return;
}

// 00C24810  FUN_00c24810  size=341  [run]
void FUN_00c24810(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = DAT_01bea1a8;
  puVar1 = DAT_01be9fb8;
  if (DAT_01be9fc8 == 0) {
    if (DAT_01be9fc4 != DAT_01be9fc0) {
      if (DAT_01be9fc0 != -1) {
        iVar3 = DAT_01be9fbc;
        if (DAT_01be9fb8 != (undefined4 *)0x0) {
          while (iVar3 = iVar3 + -1, -1 < iVar3) {
            if (puVar1[iVar3] != -1) {
              FUN_00a00bd0(puVar1[iVar3],0);
            }
          }
        }
        DAT_01be9fc0 = -1;
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))();
      }
      DAT_01be9fc8 = DAT_01be9fc8 + 1;
      return;
    }
    if ((DAT_01be9fc4 == -1) && (iVar3 = FUN_009c7400(), iVar3 != 0)) {
      DAT_01be9fc4 = 0;
    }
  }
  else if (DAT_01be9fc8 == 1) {
    iVar3 = FUN_00c13d30(DAT_01be9fb8,DAT_01be9fbc);
    if (iVar3 != 0) {
      if (DAT_01be9fc4 == -1) {
        DAT_01be9fc8 = 0;
        DAT_01be9fc0 = 0xffffffff;
        return;
      }
      DAT_01be9fb8 = &DAT_018a997c;
      DAT_01be9fbc = 1;
      if (DAT_018a997c != -1) {
        FUN_00a00a60(DAT_018a997c,0);
      }
      DAT_01be9fc8 = DAT_01be9fc8 + 1;
      return;
    }
  }
  else if ((DAT_01be9fc8 == 2) && (iVar3 = FUN_00c13d80(DAT_01be9fb8,DAT_01be9fbc), iVar3 != 0)) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(*DAT_01be9fb8);
    }
    DAT_01be9fc8 = 0;
    DAT_01be9fc0 = DAT_01be9fc4;
    return;
  }
  return;
}

// 00C24970  FUN_00c24970  size=483  [run]
void FUN_00c24970(void)

{
  int iVar1;
  
  FUN_00c246f0();
  if (DAT_01bea05c == 0) {
    FUN_00c13c60(&DAT_018a97a0,0x15);
  }
  else if ((DAT_01bea05c != 1) || (iVar1 = FUN_00c13d80(&DAT_018a97a0,0x15), iVar1 == 0))
  goto LAB_00c249ac;
  DAT_01bea05c = DAT_01bea05c + 1;
LAB_00c249ac:
  if (((1 < DAT_01bea05c) && (DAT_01be9fa4 != 0)) && (DAT_01be8e44 < 4)) {
    FUN_00c240b0();
    FUN_00c24810();
    if ((DAT_01bea030 != 2) || (DAT_01be9fa8 != 0)) {
      FUN_00c24200();
      FUN_00c244d0();
      FUN_00c245e0(0);
      FUN_00c245e0(1);
      if ((((DAT_01be9fa8 != 0) && ((DAT_01bea058 == 0 && (DAT_01bea054 == DAT_01bea050)))) &&
          (1 < DAT_01bea05c)) &&
         (((DAT_01bea044 == 0 && (DAT_01bea040 == DAT_01bea03c)) &&
          ((DAT_01bea030 == 2 ||
           (((((DAT_01bea02c == 0 && (DAT_01bea028 == DAT_01bea024)) && (DAT_01bea018 == 0)) &&
             (((DAT_01bea014 == DAT_01bea010 && (DAT_01bea004 == 0)) &&
              ((DAT_01bea000 == DAT_01be9ffc &&
               ((DAT_01be9fdc == 0 && (DAT_01be9fd8 == DAT_01be9fd4)))))))) &&
            ((DAT_01be9ff0 == 0 &&
             (((DAT_01be9fec == DAT_01be9fe8 && (DAT_01be9fc8 == 0)) &&
              (DAT_01be9fc4 == DAT_01be9fc0)))))))))))) {
        DAT_01be9fa8 = 0;
      }
    }
  }
  return;
}

