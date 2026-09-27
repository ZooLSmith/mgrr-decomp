// src/unsorted/unit_00C32B80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C32B80..00C3D300, 41 functions

#include "mgrr.h"

// 00C32B80  FUN_00c32b80  size=84  [run]
char * __thiscall FUN_00c32b80(int param_1,char *param_2)

{
  char *_Str1;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  _Str1 = (char *)0x0;
  if (puVar2 != puVar2 + *(int *)(param_1 + 0x14)) {
    while( true ) {
      _Str1 = (char *)*puVar2;
      iVar1 = _strncmp(_Str1,param_2,0x10);
      if (iVar1 == 0) break;
      puVar2 = puVar2 + 1;
      if (puVar2 == (undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4)) {
        return (char *)0x0;
      }
    }
  }
  return _Str1;
}

// 00C32C20  FUN_00c32c20  size=89  [run]
int __thiscall FUN_00c32c20(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)param_1[4];
  iVar2 = 0;
  if (puVar3 != puVar3 + param_1[5]) {
    do {
      iVar1 = _strncmp((char *)*puVar3,param_2,0x10);
      if (iVar1 == 0) break;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (puVar3 != (undefined4 *)(param_1[4] + param_1[5] * 4));
  }
  if (iVar2 < *param_1) {
    return iVar2;
  }
  return -1;
}

// 00C32C80  FUN_00c32c80  size=125  [run]
undefined4 __thiscall FUN_00c32c80(int param_1,byte *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar7 = *(undefined4 **)(param_1 + 0x10);
  if (puVar7 == puVar7 + *(int *)(param_1 + 0x14)) {
    return 0;
  }
  puVar1 = puVar7 + *(int *)(param_1 + 0x14);
  do {
    pbVar3 = (byte *)*puVar7;
    pbVar4 = param_2;
    pbVar6 = pbVar3;
    do {
      bVar2 = *pbVar4;
      bVar8 = bVar2 < *pbVar6;
      if (bVar2 != *pbVar6) {
LAB_00c32cc6:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00c32ccb;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar8 = bVar2 < pbVar6[1];
      if (bVar2 != pbVar6[1]) goto LAB_00c32cc6;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00c32ccb:
    if (((iVar5 == 0) && (param_3 == *(int *)(pbVar3 + 0x10))) &&
       (param_4 == *(int *)(pbVar3 + 0x14))) {
      return 1;
    }
    puVar7 = puVar7 + 1;
    if (puVar7 == puVar1) {
      return 0;
    }
  } while( true );
}

// 00C32E70  FUN_00c32e70  size=110  [run]
undefined4 __thiscall FUN_00c32e70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x10);
  iVar4 = 0;
  if (piVar3 != piVar3 + *(int *)(param_1 + 0x14)) {
    piVar1 = piVar3 + *(int *)(param_1 + 0x14);
    while (iVar2 = *piVar3, iVar4 != param_2) {
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
      if (piVar3 == piVar1) {
        return 0xffffffff;
      }
    }
    if (iVar2 != 0) {
      if ((void *)(iVar2 + 0x2208) != (void *)0x0) {
        _memset((void *)(iVar2 + 0x2208),0,0x40);
      }
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}

// 00C32EE0  FUN_00c32ee0  size=107  [run]
undefined4 __thiscall FUN_00c32ee0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x10);
  iVar4 = 0;
  if (piVar3 != piVar3 + *(int *)(param_1 + 0x14)) {
    piVar1 = piVar3 + *(int *)(param_1 + 0x14);
    do {
      iVar2 = *piVar3;
      if (iVar4 == param_2) {
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        if (*(int *)(iVar2 + 0x18) == 1) {
          return 0xffffffff;
        }
        if (*(int *)(iVar2 + 0x1c) != 0) {
          return 0xffffffff;
        }
        if ((void *)(iVar2 + 0x2208) != (void *)0x0) {
          _memset((void *)(iVar2 + 0x2208),0,0x40);
        }
        *(undefined4 *)(iVar2 + 0x18) = 1;
        return 0;
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (piVar3 != piVar1);
  }
  return 0xffffffff;
}

// 00C33070  FUN_00c33070  size=38  [run]
undefined4 FUN_00c33070(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c32b80(param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) == 1)) {
    *(undefined4 *)(iVar1 + 0x20) = 2;
    return 0;
  }
  return 0xffffffff;
}

// 00C330A0  FUN_00c330a0  size=86  [run]
undefined4 __thiscall FUN_00c330a0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x10);
  iVar4 = 0;
  if (piVar3 != piVar3 + *(int *)(param_1 + 0x14)) {
    piVar1 = piVar3 + *(int *)(param_1 + 0x14);
    while (iVar2 = *piVar3, iVar4 != param_2) {
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
      if (piVar3 == piVar1) {
        return 0xffffffff;
      }
    }
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) == 1)) {
      *(undefined4 *)(iVar2 + 0x20) = 2;
      return 0;
    }
  }
  return 0xffffffff;
}

// 00C33100  FUN_00c33100  size=78  [run]
bool __thiscall FUN_00c33100(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x10);
  iVar3 = 0;
  if (piVar2 != piVar2 + *(int *)(param_1 + 0x14)) {
    piVar1 = piVar2 + *(int *)(param_1 + 0x14);
    while (iVar3 != param_2) {
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
      if (piVar2 == piVar1) {
        return false;
      }
    }
    if (*piVar2 != 0) {
      return *(int *)(*piVar2 + 0x20) == 1;
    }
  }
  return false;
}

// 00C33B90  FUN_00c33b90  size=236  [run]
undefined4 __thiscall FUN_00c33b90(int param_1,int param_2,byte *param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte local_24 [36];
  
  piVar6 = *(int **)(param_1 + 0x10);
  iVar9 = 0;
  if (piVar6 != piVar6 + *(int *)(param_1 + 0x14)) {
    piVar1 = piVar6 + *(int *)(param_1 + 0x14);
    while (iVar4 = *piVar6, iVar9 != param_2) {
      piVar6 = piVar6 + 1;
      iVar9 = iVar9 + 1;
      if (piVar6 == piVar1) {
        return 0;
      }
    }
    if (iVar4 != 0) {
      puVar8 = *(undefined4 **)(iVar4 + 0x60);
      if (puVar8 == puVar8 + *(int *)(iVar4 + 100) * 9) {
        return 0;
      }
      puVar2 = puVar8 + *(int *)(iVar4 + 100) * 9;
      do {
        puVar10 = puVar8;
        pbVar7 = local_24;
        for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)pbVar7 = *puVar10;
          puVar10 = puVar10 + 1;
          pbVar7 = pbVar7 + 4;
        }
        pbVar7 = local_24;
        pbVar5 = param_3;
        do {
          bVar3 = *pbVar5;
          bVar11 = bVar3 < *pbVar7;
          if (bVar3 != *pbVar7) {
LAB_00c33c35:
            iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00c33c3a;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar5[1];
          bVar11 = bVar3 < pbVar7[1];
          if (bVar3 != pbVar7[1]) goto LAB_00c33c35;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar3 != 0);
        iVar9 = 0;
LAB_00c33c3a:
        if (iVar9 == 0) {
          *param_4 = *(undefined4 *)(*(ushort *)((int)puVar8 + 0x22) + 0x208 + iVar4);
          return 1;
        }
        puVar8 = puVar8 + 9;
        if (puVar8 == puVar2) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

// 00C33C80  FUN_00c33c80  size=234  [run]
undefined4 __thiscall FUN_00c33c80(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte local_24 [36];
  
  piVar6 = *(int **)(param_1 + 0x10);
  iVar9 = 0;
  if (piVar6 != piVar6 + *(int *)(param_1 + 0x14)) {
    piVar1 = piVar6 + *(int *)(param_1 + 0x14);
    while (iVar4 = *piVar6, iVar9 != param_2) {
      piVar6 = piVar6 + 1;
      iVar9 = iVar9 + 1;
      if (piVar6 == piVar1) {
        return 0;
      }
    }
    if (iVar4 != 0) {
      puVar8 = *(undefined4 **)(iVar4 + 0x60);
      if (puVar8 == puVar8 + *(int *)(iVar4 + 100) * 9) {
        return 0;
      }
      puVar2 = puVar8 + *(int *)(iVar4 + 100) * 9;
      do {
        puVar10 = puVar8;
        pbVar7 = local_24;
        for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)pbVar7 = *puVar10;
          puVar10 = puVar10 + 1;
          pbVar7 = pbVar7 + 4;
        }
        pbVar7 = local_24;
        pbVar5 = param_3;
        do {
          bVar3 = *pbVar5;
          bVar11 = bVar3 < *pbVar7;
          if (bVar3 != *pbVar7) {
LAB_00c33d25:
            iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00c33d2a;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar5[1];
          bVar11 = bVar3 < pbVar7[1];
          if (bVar3 != pbVar7[1]) goto LAB_00c33d25;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar3 != 0);
        iVar9 = 0;
LAB_00c33d2a:
        if (iVar9 == 0) {
          *(undefined4 *)(*(ushort *)((int)puVar8 + 0x22) + 0x208 + iVar4) = param_4;
          return 1;
        }
        puVar8 = puVar8 + 9;
        if (puVar8 == puVar2) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

// 00C33D70  FUN_00c33d70  size=184  [run]
undefined4 __thiscall FUN_00c33d70(int param_1,byte *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  byte local_24 [36];
  
  *param_3 = 0;
  puVar6 = *(undefined4 **)(param_1 + 0x60);
  if (puVar6 == puVar6 + *(int *)(param_1 + 100) * 9) {
    return 0;
  }
  puVar1 = puVar6 + *(int *)(param_1 + 100) * 9;
  do {
    puVar7 = puVar6;
    pbVar5 = local_24;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      pbVar5 = pbVar5 + 4;
    }
    pbVar5 = local_24;
    pbVar4 = param_2;
    do {
      bVar2 = *pbVar4;
      bVar8 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_00c33de0:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00c33de5;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar8 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_00c33de0;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_00c33de5:
    if (iVar3 == 0) {
      *param_3 = *(undefined4 *)(*(ushort *)((int)puVar6 + 0x22) + 0x208 + param_1);
      return 1;
    }
    puVar6 = puVar6 + 9;
    if (puVar6 == puVar1) {
      return 0;
    }
  } while( true );
}

// 00C33E30  FUN_00c33e30  size=171  [run]
undefined4 __thiscall FUN_00c33e30(int param_1,byte *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  byte local_24 [36];
  
  puVar6 = *(undefined4 **)(param_1 + 0x60);
  if (puVar6 == puVar6 + *(int *)(param_1 + 100) * 9) {
    return 0;
  }
  puVar1 = puVar6 + *(int *)(param_1 + 100) * 9;
  do {
    puVar7 = puVar6;
    pbVar5 = local_24;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      pbVar5 = pbVar5 + 4;
    }
    pbVar5 = local_24;
    pbVar4 = param_2;
    do {
      bVar2 = *pbVar4;
      bVar8 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_00c33e95:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00c33e9a;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar8 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_00c33e95;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_00c33e9a:
    if (iVar3 == 0) {
      *(undefined4 *)(*(ushort *)((int)puVar6 + 0x22) + 0x208 + param_1) = param_3;
      return 1;
    }
    puVar6 = puVar6 + 9;
    if (puVar6 == puVar1) {
      return 0;
    }
  } while( true );
}

// 00C33EE0  FUN_00c33ee0  size=108  [run]
uint __thiscall FUN_00c33ee0(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x60);
  uVar2 = 0xffffffff;
  if (puVar3 != puVar3 + *(int *)(param_1 + 100) * 5) {
    puVar1 = puVar3 + *(int *)(param_1 + 100) * 5;
    while( true ) {
      uVar2 = puVar3[3];
      if ((*puVar3 <= param_2) && (param_2 <= puVar3[1])) break;
      puVar3 = puVar3 + 5;
      if (puVar3 == puVar1) {
        return 0xffffffff;
      }
    }
  }
  return uVar2;
}

// 00C33FC0  FUN_00c33fc0  size=120  [run]
undefined4 __thiscall FUN_00c33fc0(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = *(undefined4 **)(param_1 + 0x60);
  uVar5 = 0;
  if (puVar6 != puVar6 + *(int *)(param_1 + 100) * 5) {
    puVar1 = puVar6 + *(int *)(param_1 + 100) * 5;
    while( true ) {
      uVar2 = puVar6[2];
      uVar5 = puVar6[1];
      uVar3 = puVar6[3];
      uVar4 = puVar6[4];
      if ((uVar2 <= param_2) && (param_2 <= uVar3)) break;
      puVar6 = puVar6 + 5;
      if (puVar6 == puVar1) {
        return 0;
      }
    }
    *param_3 = *puVar6;
    param_3[1] = uVar5;
    param_3[2] = uVar2;
    param_3[3] = uVar3;
    param_3[4] = uVar4;
    uVar5 = 1;
  }
  return uVar5;
}

// 00C34460  FUN_00c34460  size=1363  [run]
undefined4 FUN_00c34460(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_01b76238;
  FUN_00c33e30("@Ccom1000_401010_played",-(uint)((DAT_01b76238 & 1) != 0) & param_1);
  FUN_00c33e30("@Comnz000_211010_played",-(uint)((uVar1 & 2) != 0) & param_1);
  FUN_00c33e30("@C0201000_291010_played",-(uint)((uVar1 & 4) != 0) & param_1);
  FUN_00c33e30("@Comcz100_1d1010_played",-(uint)((uVar1 & 8) != 0) & param_1);
  uVar1 = DAT_01b7623c;
  switch(param_1 >> 8 & 7) {
  case 1:
    FUN_00c33e30("@Ccom1000_101010_played",-(uint)((DAT_01b7623c & 1) != 0) & param_1);
    FUN_00c33e30("@Ccom1000_1d1010_played",-(uint)((uVar1 & 2) != 0) & param_1);
    FUN_00c33e30("@Comcw000_101010_played",-(uint)((uVar1 & 4) != 0) & param_1);
    FUN_00c33e30("@C0106000_181010_played",-(uint)((uVar1 & 8) != 0) & param_1);
    FUN_00c33e30("@C0201000_101010_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
    FUN_00c33e30("@C01_1000_1t1010_played",-(uint)((uVar1 & 0x20) != 0) & param_1);
    FUN_00c33e30("@R01h2000_1w1010_played",-(uint)((uVar1 & 0x40) != 0) & param_1);
    FUN_00c33e30("@C0201000_1i1010_played",-(uint)((uVar1 & 0x80) != 0) & param_1);
    FUN_00c33e30("@Comcw000_1n1010_played",-(uint)((uVar1 & 0x100) != 0) & param_1);
    FUN_00c33e30("@Comcw000_2a1010_played",-(uint)((uVar1 & 0x200) != 0) & param_1);
    FUN_00c33e30("@Comnz600_101010_played",-(uint)((uVar1 & 0x400) != 0) & param_1);
    FUN_00c33e30("@Ccom1000_1o1010_played",-(uint)((uVar1 & 0x800) != 0) & param_1);
    FUN_00c33e30("@Ccom1000_241010_played",-(uint)((uVar1 & 0x1000) != 0) & param_1);
    FUN_00c33e30("@Comc1000_101010_played",-(uint)((uVar1 & 0x2000) != 0) & param_1);
    FUN_00c33e30("@Comc2000_101010_played",-(uint)((uVar1 & 0x4000) != 0) & param_1);
    FUN_00c33e30("@Comc3000_101010_played",-(uint)((uVar1 & 0x8000) != 0) & param_1);
    FUN_00c33e30("@C01_1000_101010_played",-(uint)((uVar1 & 0x10000) != 0) & param_1);
    FUN_00c33e30("@R01h2000_1e1010_played",-(uint)((uVar1 & 0x20000) != 0) & param_1);
    FUN_00c33e30("@C0103000_101010_played",-(uint)((uVar1 & 0x40000) != 0) & param_1);
    FUN_00c33e30("@S0109000_101010_played",-(uint)((uVar1 & 0x80000) != 0) & param_1);
    FUN_00c33e30("@Ccom1000_321010_played",-(uint)((uVar1 & 0x100000) != 0) & param_1);
    return 1;
  case 2:
    FUN_00c33e30("@C0301000_261010_played",-(uint)((DAT_01b7623c & 1) != 0) & param_1);
    FUN_00c33e30("@C0301000_371011_played",-(uint)((uVar1 & 2) != 0) & param_1);
    FUN_00c33e30("@C0251000_1l1010_played",-(uint)((uVar1 & 4) != 0) & param_1);
    FUN_00c33e30("@C0251000_291010_played",-(uint)((uVar1 & 8) != 0) & param_1);
    FUN_00c33e30("@C0301000_371110_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
    FUN_00c33e30("@C0301000_391010_played",-(uint)((uVar1 & 0x20) != 0) & param_1);
    FUN_00c33e30("@C0301000_3f1010_played",-(uint)((uVar1 & 0x40) != 0) & param_1);
    FUN_00c33e30("@C0301000_421010_played",-(uint)((uVar1 & 0x80) != 0) & param_1);
    return 1;
  case 3:
    FUN_00c33e30("@C0401000_101010_played",-(uint)((DAT_01b7623c & 1) != 0) & param_1);
    return 1;
  case 4:
    FUN_00c33e30("@C04_1000_161010_played",-(uint)((DAT_01b7623c & 1) != 0) & param_1);
    FUN_00c33e30("@R04h5000_101010_played",-(uint)((uVar1 & 2) != 0) & param_1);
    FUN_00c33e30("@R04ha000_1a1010_played",-(uint)((uVar1 & 4) != 0) & param_1);
    FUN_00c33e30("@R04ha000_2r1010_played",-(uint)((uVar1 & 8) != 0) & param_1);
    FUN_00c33e30("@R04he000_101010_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
    FUN_00c33e30("@R04hj000_101010_played",-(uint)((uVar1 & 0x20) != 0) & param_1);
    FUN_00c33e30("@C0501000_101010_played",-(uint)((uVar1 & 0x40) != 0) & param_1);
    return 1;
  case 5:
    FUN_00c33e30("@C05_1000_141010_played",-(uint)((DAT_01b7623c & 1) != 0) & param_1);
    FUN_00c33e30("@C05_1000_1q1010_played",-(uint)((uVar1 & 2) != 0) & param_1);
    return 1;
  case 7:
    FUN_00c33e30("@C07_1000_101010_played",-(uint)((DAT_01b7623c & 1) != 0) & param_1);
    FUN_00c33e30("@C0701000_101010_played",-(uint)((uVar1 & 2) != 0) & param_1);
    FUN_00c33e30("@C0707000_101010_played",-(uint)((uVar1 & 4) != 0) & param_1);
    FUN_00c33e30("@C0707000_1o1010_played",-(uint)((uVar1 & 8) != 0) & param_1);
  }
  return 1;
}

// 00C362F0  FUN_00c362f0  size=1213  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00c362f0(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_01b76270;
  FUN_00c33e30("@codec_doktor_loop_stage",DAT_01b76270 & 0xf);
  FUN_00c33e30("@codec_doktor_loop_mistral",uVar1 >> 4 & 0xf);
  FUN_00c33e30("@codec_doktor_loop_grad",uVar1 >> 8 & 0xf);
  FUN_00c33e30("@codec_doktor_loop_raptor",uVar1 >> 0xc & 0xf);
  FUN_00c33e30("@codec_doktor_loop_slider",uVar1 >> 0x10 & 0xf);
  FUN_00c33e30("@codec_doktor_loop_cyborg",uVar1 >> 0x14 & 0xf);
  uVar1 = DAT_01b762a0;
  FUN_00c33e30("@Ccom4000_1f1010_played",(DAT_01b762a0 & 0xf) << 8);
  FUN_00c33e30("@Ccom4000_201010_played",(uVar1 & 0xf0) << 4);
  FUN_00c33e30("@Comcn000_101010_played",uVar1 & 0xf00);
  FUN_00c33e30("@Comcz000_3s1010_played",uVar1 >> 4 & 0xf00);
  uVar1 = DAT_01b762b0;
  FUN_00c33e30("@Comcz000_101010_played",-(uint)((DAT_01b762b0 & 1) != 0) & param_1);
  FUN_00c33e30("@Comcz000_1v1010_played",-(uint)((uVar1 & 2) != 0) & param_1);
  FUN_00c33e30("@C01_3000_1m1010_played",-(uint)((uVar1 & 4) != 0) & param_1);
  FUN_00c33e30("@Comhd000_101010_played",-(uint)((uVar1 & 8) != 0) & param_1);
  FUN_00c33e30("@R02hg000_1j1010_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
  FUN_00c33e30("@Comhb000_131010_played",-(uint)((uVar1 & 0x20) != 0) & param_1);
  FUN_00c33e30("@Comhb000_191010_played",-(uint)((uVar1 & 0x40) != 0) & param_1);
  FUN_00c33e30("@Comh9000_101010_played",-(uint)((uVar1 & 0x80) != 0) & param_1);
  FUN_00c33e30("@Comha000_101010_played",-(uint)((uVar1 & 0x100) != 0) & param_1);
  FUN_00c33e30("@Comh6000_171010_played",-(uint)((uVar1 & 0x200) != 0) & param_1);
  FUN_00c33e30("@Comhc000_131010_played",-(uint)((uVar1 & 0x400) != 0) & param_1);
  FUN_00c33e30("@C0103000_1j1010_played",-(uint)((uVar1 & 0x800) != 0) & param_1);
  FUN_00c33e30("@Comh4000_101010_played",-(uint)((uVar1 & 0x1000) != 0) & param_1);
  FUN_00c33e30("@Comh3000_101010_played",-(uint)((uVar1 & 0x2000) != 0) & param_1);
  FUN_00c33e30("@Comh2000_101010_played",-(uint)((uVar1 & 0x4000) != 0) & param_1);
  FUN_00c33e30("@C01_3000_3x1010_played",-(uint)((uVar1 & 0x8000) != 0) & param_1);
  FUN_00c33e30("@Comh7000_141010_played",-(uint)((uVar1 & 0x10000) != 0) & param_1);
  FUN_00c33e30("@R01h4000_1v1010_played",-(uint)((uVar1 & 0x20000) != 0) & param_1);
  FUN_00c33e30("@C01_3000_4l1010_played",-(uint)((uVar1 & 0x40000) != 0) & param_1);
  FUN_00c33e30("@Comh5000_101010_played",-(uint)((uVar1 & 0x80000) != 0) & param_1);
  FUN_00c33e30("@Comh1000_101010_played",-(uint)((uVar1 & 0x100000) != 0) & param_1);
  FUN_00c33e30("@Comh1000_131010_played",-(uint)((uVar1 & 0x200000) != 0) & param_1);
  FUN_00c33e30("@Comhd000_141010_played",-(uint)((uVar1 & 0x400000) != 0) & param_1);
  FUN_00c33e30("@C01_3000_101010_played",-(uint)((uVar1 & 0x800000) != 0) & param_1);
  FUN_00c33e30("@Ccom4000_101010_played",-(uint)((uVar1 & 0x1000000) != 0) & param_1);
  FUN_00c33e30("@Ccom4000_2p1010_played",-(uint)((uVar1 & 0x2000000) != 0) & param_1);
  FUN_00c33e30("@Ccom4000_551010_played",-(uint)((uVar1 & 0x4000000) != 0) & param_1);
  FUN_00c33e30("@Comcz000_4a1010_played",-(uint)((uVar1 & 0x8000000) != 0) & param_1);
  FUN_00c33e30("@Ccom4000_5o1010_played",-(uint)((uVar1 & 0x10000000) != 0) & param_1);
  uVar1 = _DAT_01b762ac;
  FUN_00c33e30("@Comco000_101010_played",-(uint)((_DAT_01b762ac & 0x10000) != 0) & param_1);
  FUN_00c33e30("@C01_3000_2c1010_played",-(uint)((uVar1 & 0x20000) != 0) & param_1);
  FUN_00c33e30("@Comcz000_3e1010_played",-(uint)((uVar1 & 0x40000) != 0) & param_1);
  FUN_00c33e30("@Comcm000_101010_played",-(uint)((uVar1 & 0x80000) != 0) & param_1);
  FUN_00c33e30("@Comcz000_2o1010_played",-(uint)((uVar1 & 0x100000) != 0) & param_1);
  FUN_00c33e30("@C0304000_101010_played",-(uint)((uVar1 & 0x200000) != 0) & param_1);
  FUN_00c33e30("@C0304000_1v1010_played",-(uint)((uVar1 & 0x400000) != 0) & param_1);
  return 1;
}

// 00C367B0  FUN_00c367b0  size=371  [run]
undefined4 FUN_00c367b0(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_01b76278;
  FUN_00c33e30("@C0706000_101010_played",-(uint)((DAT_01b76278 & 1) != 0) & param_1);
  FUN_00c33e30("@C0706000_1q1010_played",-(uint)((uVar1 & 2) != 0) & param_1);
  FUN_00c33e30("@C0706000_2a1010_played",-(uint)((uVar1 & 4) != 0) & param_1);
  FUN_00c33e30("@C0706000_2m1010_played",-(uint)((uVar1 & 8) != 0) & param_1);
  FUN_00c33e30("@C0706000_2x1010_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
  FUN_00c33e30("@C0706000_3d1010_played",-(uint)((uVar1 & 0x20) != 0) & param_1);
  FUN_00c33e30("@C0706000_3v1010_played",-(uint)((uVar1 & 0x40) != 0) & param_1);
  FUN_00c33e30("@C0706000_4c1010_played",-(uint)((uVar1 & 0x80) != 0) & param_1);
  FUN_00c33e30("@C0706000_3q1010_played",-(uint)((uVar1 & 0x100) != 0) & param_1);
  FUN_00c33e30("@R07h4000_1j1010_played",-(uint)((uVar1 & 0x200) != 0) & param_1);
  FUN_00c33e30("@R07h5000_3m1010_played",-(uint)((uVar1 & 0x400) != 0) & param_1);
  FUN_00c33e30("@R07h5000_3v1010_played",-(uint)((uVar1 & 0x800) != 0) & param_1);
  FUN_00c33e30("@R07h5000_401010_played",-(uint)((uVar1 & 0x1000) != 0) & param_1);
  return 1;
}

// 00C36950  FUN_00c36950  size=1364  [run]
undefined4 FUN_00c36950(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_01b76288;
  FUN_00c33e30("@Comhd000_1f1010_played",-(uint)((DAT_01b76288 & 1) != 0) & param_1);
  FUN_00c33e30("@Comnz000_1f1010_played",-(uint)((uVar1 & 2) != 0) & param_1);
  FUN_00c33e30("@Comnz000_1g1010_played",-(uint)((uVar1 & 4) != 0) & param_1);
  FUN_00c33e30("@Comnz000_1h1010_played",-(uint)((uVar1 & 8) != 0) & param_1);
  FUN_00c33e30("@Comnz000_1i1010_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
  FUN_00c33e30("@Comnz000_1j1010_played",-(uint)((uVar1 & 0x20) != 0) & param_1);
  FUN_00c33e30("@Comnz000_1x1010_played",-(uint)((uVar1 & 0x40) != 0) & param_1);
  uVar1 = DAT_01b7628c;
  switch(param_1 >> 8 & 7) {
  case 2:
    FUN_00c33e30("@C0305000_101010_played",-(uint)((DAT_01b7628c & 1) != 0) & param_1);
    FUN_00c33e30("@C0305000_2a1010_played",-(uint)((uVar1 & 2) != 0) & param_1);
    FUN_00c33e30("@C0305000_2o1010_played",-(uint)((uVar1 & 4) != 0) & param_1);
    FUN_00c33e30("@C0305000_2z1010_played",-(uint)((uVar1 & 8) != 0) & param_1);
    FUN_00c33e30("@R02h4000_1b1010_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
    FUN_00c33e30("@R02h4000_1s1010_played",-(uint)((uVar1 & 0x20) != 0) & param_1);
    FUN_00c33e30("@R02h6000_101010_played",-(uint)((uVar1 & 0x40) != 0) & param_1);
    FUN_00c33e30("@R02h6000_1a1010_played",-(uint)((uVar1 & 0x80) != 0) & param_1);
    FUN_00c33e30("@R02h8000_101010_played",-(uint)((uVar1 & 0x100) != 0) & param_1);
    FUN_00c33e30("@C0305000_3b1010_played",-(uint)((uVar1 & 0x200) != 0) & param_1);
    FUN_00c33e30("@R02he000_151010_played",-(uint)((uVar1 & 0x400) != 0) & param_1);
    FUN_00c33e30("@R02he000_181010_played",-(uint)((uVar1 & 0x800) != 0) & param_1);
    FUN_00c33e30("@R02hg000_1q1010_played",-(uint)((uVar1 & 0x1000) != 0) & param_1);
    return 1;
  case 3:
    FUN_00c33e30("@C0405000_101010_played",-(uint)((DAT_01b7628c & 1) != 0) & param_1);
    FUN_00c33e30("@C0405000_141010_played",-(uint)((uVar1 & 2) != 0) & param_1);
    FUN_00c33e30("@R03h2000_101010_played",-(uint)((uVar1 & 4) != 0) & param_1);
    FUN_00c33e30("@R03h5000_101010_played",-(uint)((uVar1 & 8) != 0) & param_1);
    FUN_00c33e30("@R03h7000_101010_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
    FUN_00c33e30("@R03h7000_131010_played",-(uint)((uVar1 & 0x20) != 0) & param_1);
    FUN_00c33e30("@R03hb000_101010_played",-(uint)((uVar1 & 0x40) != 0) & param_1);
    FUN_00c33e30("@R03he000_1z1010_played",-(uint)((uVar1 & 0x80) != 0) & param_1);
    return 1;
  case 4:
    FUN_00c33e30("@C04_5000_1l1010_played",-(uint)((DAT_01b7628c & 1) != 0) & param_1);
    FUN_00c33e30("@R04h3000_101010_played",-(uint)((uVar1 & 2) != 0) & param_1);
    FUN_00c33e30("@R04h3000_1a1010_played",-(uint)((uVar1 & 4) != 0) & param_1);
    FUN_00c33e30("@R04h3000_1h1010_played",-(uint)((uVar1 & 8) != 0) & param_1);
    FUN_00c33e30("@R04h3000_1j1010_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
    FUN_00c33e30("@R04h3000_1l1010_played",-(uint)((uVar1 & 0x20) != 0) & param_1);
    FUN_00c33e30("@R04ha000_131010_played",-(uint)((uVar1 & 0x40) != 0) & param_1);
    FUN_00c33e30("@R04he000_1f1010_played",-(uint)((uVar1 & 0x80) != 0) & param_1);
    FUN_00c33e30("@R04hj000_121010_played",-(uint)((uVar1 & 0x100) != 0) & param_1);
    return 1;
  case 5:
    FUN_00c33e30("@C05_5000_101010_played",-(uint)((DAT_01b7628c & 1) != 0) & param_1);
    FUN_00c33e30("@C05_5000_1s1010_played",-(uint)((uVar1 & 2) != 0) & param_1);
    FUN_00c33e30("@C05_5000_1l1010_played",-(uint)((uVar1 & 4) != 0) & param_1);
    FUN_00c33e30("@C05_5000_1n1010_played",-(uint)((uVar1 & 8) != 0) & param_1);
    return 1;
  case 6:
    FUN_00c33e30("@R06h1000_231010_played",-(uint)((DAT_01b7628c & 1) != 0) & param_1);
    return 1;
  case 7:
    FUN_00c33e30("@C0705000_101010_played",-(uint)((DAT_01b7628c & 1) != 0) & param_1);
    FUN_00c33e30("@C0705000_1c1010_played",-(uint)((uVar1 & 2) != 0) & param_1);
    FUN_00c33e30("@R07h5000_3h1010_played",-(uint)((uVar1 & 4) != 0) & param_1);
    FUN_00c33e30("@R07h5000_3j1010_played",-(uint)((uVar1 & 8) != 0) & param_1);
    FUN_00c33e30("@Error_mess_played",-(uint)((uVar1 & 0x10) != 0) & param_1);
  }
  return 1;
}

// 00C36FB0  FUN_00c36fb0  size=1764  [run]
undefined4 FUN_00c36fb0(uint param_1)

{
  uint uVar1;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  uint uVar2;
  
  uVar4 = 0;
  FUN_00c33d70("@Ccom1000_401010_played",&local_8);
  bVar5 = local_8 != 0;
  FUN_00c33d70("@Comnz000_211010_played",&local_8);
  bVar6 = local_8 != 0;
  FUN_00c33d70("@C0201000_291010_played",&local_44);
  local_44 = (uint)(local_44 != 0);
  FUN_00c33d70("@Comcz100_1d1010_played",&local_8);
  DAT_01b76238 = (uint)bVar5 + ((uint)bVar6 + ((local_44 & 1) + (uint)(local_8 != 0) * 2) * 2) * 2;
  switch(param_1 >> 8 & 7) {
  case 1:
    FUN_00c33d70("@Ccom1000_101010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@Ccom1000_1d1010_played",&param_1);
    uVar4 = param_1;
    FUN_00c33d70("@Comcw000_101010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C0106000_181010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@C0201000_101010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@C01_1000_1t1010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@R01h2000_1w1010_played",&local_14);
    local_14 = (uint)(local_14 != 0);
    FUN_00c33d70("@C0201000_1i1010_played",&local_18);
    local_18 = (uint)(local_18 != 0);
    FUN_00c33d70("@Comcw000_1n1010_played",&local_1c);
    local_1c = (uint)(local_1c != 0);
    FUN_00c33d70("@Comcw000_2a1010_played",&local_20);
    local_20 = (uint)(local_20 != 0);
    FUN_00c33d70("@Comnz600_101010_played",&local_24);
    local_24 = (uint)(local_24 != 0);
    FUN_00c33d70("@Ccom1000_1o1010_played",&local_28);
    local_28 = (uint)(local_28 != 0);
    FUN_00c33d70("@Ccom1000_241010_played",&local_2c);
    local_2c = (uint)(local_2c != 0);
    FUN_00c33d70("@Comc1000_101010_played",&local_30);
    local_30 = (uint)(local_30 != 0);
    FUN_00c33d70("@Comc2000_101010_played",&local_34);
    local_34 = (uint)(local_34 != 0);
    FUN_00c33d70("@Comc3000_101010_played",&local_38);
    local_38 = (uint)(local_38 != 0);
    FUN_00c33d70("@C01_1000_101010_played",&local_3c);
    local_3c = (uint)(local_3c != 0);
    FUN_00c33d70("@R01h2000_1e1010_played",&local_40);
    local_40 = (uint)(local_40 != 0);
    FUN_00c33d70("@C0103000_101010_played",&local_44);
    local_44 = (uint)(local_44 != 0);
    FUN_00c33d70("@S0109000_101010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@Ccom1000_321010_played",&local_4);
    iVar3 = (local_c & 1) +
            ((local_10 & 1) +
            ((local_14 & 1) +
            ((local_18 & 1) +
            ((local_1c & 1) +
            ((local_20 & 1) +
            ((local_24 & 1) +
            ((local_28 & 1) +
            ((local_2c & 1) +
            ((local_30 & 1) +
            ((local_34 & 1) +
            ((local_38 & 1) +
            ((local_3c & 1) +
            ((local_40 & 1) + ((local_44 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2)
            * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2;
    local_10 = local_8;
    goto LAB_00c37373;
  case 2:
    FUN_00c33d70("@C0301000_261010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@C0301000_371011_played",&param_1);
    uVar4 = param_1;
    FUN_00c33d70("@C0251000_1l1010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C0251000_291010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@C0301000_371110_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@C0301000_391010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@C0301000_3f1010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@C0301000_421010_played",&local_4);
    iVar3 = (local_c & 1) + ((local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2;
LAB_00c37373:
    uVar4 = (uint)(uVar2 != 0) +
            ((uint)(uVar4 != 0) + ((uint)(uVar1 != 0) + ((local_10 & 1) + iVar3 * 2) * 2) * 2) * 2;
    break;
  case 3:
    FUN_00c33d70("@C0401000_101010_played",&param_1);
    uVar4 = (uint)(param_1 != 0);
    break;
  case 4:
    FUN_00c33d70("@C04_1000_161010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@R04h5000_101010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@R04ha000_1a1010_played",&param_1);
    bVar7 = param_1 != 0;
    FUN_00c33d70("@R04ha000_2r1010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@R04he000_101010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@R04hj000_101010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@C0501000_101010_played",&local_4);
    uVar4 = (uint)bVar5 +
            ((uint)bVar6 +
            ((uint)bVar7 +
            ((local_c & 1) + ((local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) *
            2) * 2) * 2;
    break;
  case 5:
    FUN_00c33d70("@C05_1000_141010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C05_1000_1q1010_played",&param_1);
    uVar4 = (uint)(param_1 != 0);
    goto LAB_00c37679;
  case 7:
    FUN_00c33d70("@C07_1000_101010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C0701000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@C0707000_101010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@C0707000_1o1010_played",&param_1);
    uVar4 = (uint)bVar5 + ((uint)bVar6 + (uint)(param_1 != 0) * 2) * 2;
LAB_00c37679:
    uVar4 = (uint)(uVar1 != 0) + uVar4 * 2;
  }
  DAT_01b7623c = uVar4;
  return 1;
}

// 00C37B40  FUN_00c37b40  size=1603  [run]
undefined4 FUN_00c37b40(uint param_1)

{
  uint uVar1;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  uint uVar2;
  uint uVar3;
  
  iVar4 = 0;
  FUN_00c33d70("@R01h2000_101010_played",&local_8);
  bVar5 = local_8 != 0;
  FUN_00c33d70("@C02_1000_1i1010_played",&local_8);
  bVar6 = local_8 != 0;
  FUN_00c33d70("@R02h6000_1c1010_played",&local_20);
  local_20 = (uint)(local_20 != 0);
  FUN_00c33d70("@R04ha000_1h1010_played",&local_24);
  local_24 = (uint)(local_24 != 0);
  FUN_00c33d70("@R04he000_191010_played",&local_8);
  DAT_01b7629c = (uint)bVar5 +
                 ((uint)bVar6 +
                 ((local_20 & 1) + ((local_24 & 1) + (uint)(local_8 != 0) * 2) * 2) * 2) * 2;
  switch(param_1 >> 8 & 7) {
  case 1:
    FUN_00c33d70("@Ccom3000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@Ccom3000_1k1010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@Ccom3000_281010_played",&param_1);
    bVar7 = param_1 != 0;
    FUN_00c33d70("@Ccom3000_2y1010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@Ccom3000_3m1010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@Ccom3000_4f1010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@Comcc000_101010_played",&local_14);
    local_14 = (uint)(local_14 != 0);
    FUN_00c33d70("@Comcy000_101010_played",&local_18);
    local_18 = (uint)(local_18 != 0);
    FUN_00c33d70("@Comcy000_1h1010_played",&local_1c);
    local_1c = (uint)(local_1c != 0);
    FUN_00c33d70("@C0203000_101010_played",&local_24);
    local_24 = (uint)(local_24 != 0);
    FUN_00c33d70("@C0203000_211010_played",&local_20);
    local_20 = (uint)(local_20 != 0);
    FUN_00c33d70("@Comcz200_101010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@C01_2000_101010_played",&local_4);
    iVar4 = (uint)bVar5 +
            ((uint)bVar6 +
            ((uint)bVar7 +
            ((local_8 & 1) +
            ((local_c & 1) +
            ((local_10 & 1) +
            ((local_14 & 1) +
            ((local_18 & 1) +
            ((local_1c & 1) +
            ((local_24 & 1) + ((local_20 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2)
            * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2;
    break;
  case 2:
    FUN_00c33d70("@C0253000_101010_played",&param_1);
    uVar3 = param_1;
    FUN_00c33d70("@C0253000_1f1010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C0303000_1i1010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@C0303000_1s1010_played",&local_18);
    local_18 = (uint)(local_18 != 0);
    FUN_00c33d70("@C0303000_261110_played",&local_14);
    local_14 = (uint)(local_14 != 0);
    FUN_00c33d70("@C0303000_271010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@C0303000_2f1010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@C0303000_2s1010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@Comcz200_101010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@C02_1000_101010_played",&local_4);
    iVar4 = (local_18 & 1) +
            ((local_14 & 1) +
            ((local_10 & 1) +
            ((local_c & 1) + ((local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) *
            2) * 2) * 2;
    goto LAB_00c3815b;
  case 3:
    FUN_00c33d70("@C0303000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@C0403000_101010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@C0403000_1o1010_played",&param_1);
    bVar7 = param_1 != 0;
    FUN_00c33d70("@C0403000_2a1010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@Comcz200_101010_played",&param_1);
    iVar4 = (uint)bVar5 +
            ((uint)bVar6 + ((uint)bVar7 + ((local_8 & 1) + (uint)(param_1 != 0) * 2) * 2) * 2) * 2;
    break;
  case 4:
    FUN_00c33d70("@C04_3000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@Comcz200_101010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@R04hm000_2b1010_played",&param_1);
    iVar4 = (uint)bVar5 + ((uint)bVar6 + (uint)(param_1 != 0) * 2) * 2;
    break;
  case 5:
    FUN_00c33d70("@C05_3000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@Comcz200_101010_played",&param_1);
    iVar4 = (uint)bVar5 + (uint)(param_1 != 0) * 2;
    break;
  case 7:
    FUN_00c33d70("@Comcz200_101010_played",&param_1);
    uVar3 = param_1;
    FUN_00c33d70("@C0703000_101010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C0703000_1m1010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@C0707000_2l1010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@R07h2000_291010_played",&local_4);
    iVar4 = (param_1 & 1) + (uint)(local_4 != 0) * 2;
LAB_00c3815b:
    iVar4 = (uint)(uVar3 != 0) + ((uint)(uVar1 != 0) + ((uint)(uVar2 != 0) + iVar4 * 2) * 2) * 2;
  }
  DAT_01b76248 = iVar4;
  return 1;
}

// 00C38350  FUN_00c38350  size=2621  [run]
undefined4 FUN_00c38350(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char *pcVar8;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  iVar3 = 0;
  FUN_00c33d70("@C0106000_1a1010_played",&local_8);
  bVar5 = local_8 != 0;
  FUN_00c33d70("@C0106000_1g1010_played",&local_8);
  bVar6 = local_8 != 0;
  FUN_00c33d70("@C0106000_1i1010_played",&local_8);
  local_8 = (uint)(local_8 != 0);
  FUN_00c33d70("@Comnz000_1k1010_played",&local_c);
  local_c = (uint)(local_c != 0);
  FUN_00c33d70("@Comnz000_1l1010_played",&local_10);
  local_10 = (uint)(local_10 != 0);
  FUN_00c33d70("@Comnz000_1n1010_played",&local_14);
  local_14 = (uint)(local_14 != 0);
  FUN_00c33d70("@Comnz000_1p1010_played",&local_18);
  local_18 = (uint)(local_18 != 0);
  FUN_00c33d70("@Comnz000_1q1010_played",&local_1c);
  local_1c = (uint)(local_1c != 0);
  FUN_00c33d70("@Comnz000_1s1010_played",&local_20);
  local_20 = (uint)(local_20 != 0);
  FUN_00c33d70("@Ccom2000_321010_played",&local_24);
  local_24 = (uint)(local_24 != 0);
  FUN_00c33d70("@Ccom2000_3r1010_played",&local_28);
  local_28 = (uint)(local_28 != 0);
  FUN_00c33d70("@Comc6000_101010_played",&local_2c);
  local_2c = (uint)(local_2c != 0);
  FUN_00c33d70("@Comcx000_101010_played",&local_30);
  local_30 = (uint)(local_30 != 0);
  FUN_00c33d70("@C0252000_1x1010_played",&local_34);
  local_34 = (uint)(local_34 != 0);
  FUN_00c33d70("@Comhd000_1d1010_played",&local_38);
  local_38 = (uint)(local_38 != 0);
  FUN_00c33d70("@Comnz000_151010_played",&local_3c);
  local_3c = (uint)(local_3c != 0);
  FUN_00c33d70("@Comnz000_161010_played",&local_40);
  local_40 = (uint)(local_40 != 0);
  FUN_00c33d70("@Comnz000_171010_played",&local_44);
  local_44 = (uint)(local_44 != 0);
  FUN_00c33d70("@Comnz000_181010_played",&local_48);
  local_48 = (uint)(local_48 != 0);
  FUN_00c33d70("@Comnz000_191010_played",&local_4);
  DAT_01b76258 = (uint)bVar5 +
                 ((uint)bVar6 +
                 ((local_8 & 1) +
                 ((local_c & 1) +
                 ((local_10 & 1) +
                 ((local_14 & 1) +
                 ((local_18 & 1) +
                 ((local_1c & 1) +
                 ((local_20 & 1) +
                 ((local_24 & 1) +
                 ((local_28 & 1) +
                 ((local_2c & 1) +
                 ((local_30 & 1) +
                 ((local_34 & 1) +
                 ((local_38 & 1) +
                 ((local_3c & 1) +
                 ((local_40 & 1) +
                 ((local_44 & 1) + ((local_48 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) * 2) * 2) *
                 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2;
  switch(param_1 >> 8 & 7) {
  case 1:
    FUN_00c33d70("@Ccom2000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@Ccom2000_181010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@Ccom2000_1l1010_played",&param_1);
    bVar7 = param_1 != 0;
    FUN_00c33d70("@Ccom2000_2a1010_played",&local_18);
    local_18 = (uint)(local_18 != 0);
    FUN_00c33d70("@Ccom2000_2p1010_played",&local_14);
    local_14 = (uint)(local_14 != 0);
    FUN_00c33d70("@C0202000_2k1010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@C0202000_2y1010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@C0202000_101010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@C0202000_1l1010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@C0202000_201010_played",&local_4);
    iVar3 = (uint)bVar5 +
            ((uint)bVar6 +
            ((uint)bVar7 +
            ((local_18 & 1) +
            ((local_14 & 1) +
            ((local_10 & 1) +
            ((local_c & 1) + ((local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) *
            2) * 2) * 2) * 2) * 2) * 2;
    break;
  case 2:
    FUN_00c33d70("@C0252000_1m1010_played",&param_1);
    uVar4 = (uint)(param_1 != 0);
    FUN_00c33d70("@R02h2000_101010_played",&param_1);
    uVar1 = (uint)(param_1 != 0);
    FUN_00c33d70("@R02h4000_101010_played",&param_1);
    uVar2 = (uint)(param_1 != 0);
    FUN_00c33d70("@R02hg000_1m1010_played",&local_20);
    local_20 = (uint)(local_20 != 0);
    FUN_00c33d70("@C0302000_101010_played",&local_1c);
    local_1c = (uint)(local_1c != 0);
    FUN_00c33d70("@C0302000_1o1010_played",&local_18);
    local_18 = (uint)(local_18 != 0);
    FUN_00c33d70("@C0302000_2a1010_played",&local_14);
    local_14 = (uint)(local_14 != 0);
    FUN_00c33d70("@C0302000_2v1010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@C0302000_3g1110_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@C0302000_3h1010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@C0302000_3q1010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@C0302000_3x1010_played",&local_4);
    iVar3 = (local_1c & 1) +
            ((local_18 & 1) +
            ((local_14 & 1) +
            ((local_10 & 1) +
            ((local_c & 1) + ((local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) *
            2) * 2) * 2) * 2;
    local_18 = local_20;
    goto LAB_00c38d5f;
  case 3:
    FUN_00c33d70("@C0402000_101010_played",&param_1);
    uVar4 = param_1;
    FUN_00c33d70("@C0402000_1s1010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C0402000_2d1010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@C03_1000_101010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@R03hc000_1a1010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@R03he000_151010_played",&param_1);
    pcVar8 = "@R03he000_1j1010_played";
    goto LAB_00c38a50;
  case 4:
    FUN_00c33d70("@C04_2000_101010_played",&param_1);
    uVar4 = param_1;
    FUN_00c33d70("@C04_2000_1t1010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@R04h6000_121010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@R04h6000_141010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@R04h6000_161010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@R04ha000_1f1010_played",&param_1);
    pcVar8 = "@R04he000_121010_played";
LAB_00c38a50:
    uVar4 = (uint)(uVar4 != 0);
    uVar2 = (uint)(uVar2 != 0);
    uVar1 = (uint)(uVar1 != 0);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70(pcVar8,&local_4);
    iVar3 = (local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2;
    local_18 = local_c;
    goto LAB_00c38d5f;
  case 5:
    FUN_00c33d70("@C05_2000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@C05_2000_1u1010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@C0502000_101010_played",&param_1);
    bVar7 = param_1 != 0;
    FUN_00c33d70("@R05h2000_101010_played",&param_1);
    iVar3 = (uint)bVar5 + ((uint)bVar6 + ((uint)bVar7 + (uint)(param_1 != 0) * 2) * 2) * 2;
    break;
  case 6:
    FUN_00c33d70("@R06h1000_1i1010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@R06h1000_1m1010_played",&param_1);
    iVar3 = (uint)bVar5 + (uint)(param_1 != 0) * 2;
    break;
  case 7:
    FUN_00c33d70("@C0702000_101010_played",&param_1);
    uVar4 = (uint)(param_1 != 0);
    FUN_00c33d70("@C0702000_181010_played",&param_1);
    uVar1 = (uint)(param_1 != 0);
    FUN_00c33d70("@C0702000_1u1010_played",&param_1);
    uVar2 = (uint)(param_1 != 0);
    FUN_00c33d70("@C0707000_1x1010_played",&local_18);
    local_18 = (uint)(local_18 != 0);
    FUN_00c33d70("@R07h2000_101010_played",&local_14);
    local_14 = (uint)(local_14 != 0);
    FUN_00c33d70("@R07h2000_1e1010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@R07h4000_1c1010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@R07h5000_1h1010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@R07h5000_2s1010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@R07h5000_3c1010_played",&local_4);
    iVar3 = (local_14 & 1) +
            ((local_10 & 1) +
            ((local_c & 1) + ((local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) *
            2) * 2;
LAB_00c38d5f:
    iVar3 = uVar4 + (uVar1 + (uVar2 + ((local_18 & 1) + iVar3 * 2) * 2) * 2) * 2;
  }
  DAT_01b7625c = iVar3;
  return 1;
}

// 00C38DB0  FUN_00c38db0  size=558  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00c38db0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  FUN_00c33d70("@codec_loop_battle",&local_c);
  FUN_00c33d70("@codec_loop_stage",&local_8);
  DAT_01b76260 = (local_8 & 0xf) * 0x10 + local_c;
  FUN_00c33d70("@C0102000_161010_played",&local_c);
  FUN_00c33d70("@C0102000_181010_played",&local_8);
  DAT_01b76264 = local_8 << 0x10 ^ local_c & 0xffff;
  FUN_00c33d70("@Comc5000_101010_played",&local_8);
  bVar1 = local_8 != 0;
  FUN_00c33d70("@Comc7000_101010_played",&local_8);
  bVar2 = local_8 != 0;
  FUN_00c33d70("@Comc9000_101010_played",&local_8);
  bVar3 = local_8 != 0;
  FUN_00c33d70("@Comcb000_101010_played",&local_8);
  local_8 = (uint)(local_8 != 0);
  FUN_00c33d70("@Comc8000_101010_played",&local_c);
  local_c = (uint)(local_c != 0);
  FUN_00c33d70("@Ccom2000_431010_played",&local_10);
  local_10 = (uint)(local_10 != 0);
  FUN_00c33d70("@Ccom2000_4u1010_played",&local_14);
  local_14 = (uint)(local_14 != 0);
  FUN_00c33d70("@Ccom2000_5c1010_played",&local_18);
  local_18 = (uint)(local_18 != 0);
  FUN_00c33d70("@R07h2000_1z1010_played",&local_1c);
  local_1c = (uint)(local_1c != 0);
  FUN_00c33d70("@R04ha000_241010_played",&local_20);
  local_20 = (uint)(local_20 != 0);
  FUN_00c33d70("@R01h2000_1m1010_played",&local_4);
  _DAT_01b762ac =
       (_DAT_01b762ac & 0xffff0000) +
       ((uint)bVar2 +
       ((uint)bVar3 +
       ((local_8 & 1) +
       ((local_c & 1) +
       ((local_10 & 1) +
       ((local_14 & 1) +
       ((local_18 & 1) + ((local_1c & 1) + ((local_20 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) * 2
       ) * 2) * 2) * 2) * 2) * 2) * 2 + (uint)bVar1;
  return 1;
}

// 00C38FE0  FUN_00c38fe0  size=2032  [run]
undefined4 FUN_00c38fe0(uint param_1)

{
  uint uVar1;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char *pcVar8;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  uint uVar2;
  uint uVar3;
  
  FUN_00c33d70("@Comcz000_2c1010_played",&local_8);
  bVar5 = local_8 != 0;
  FUN_00c33d70("@Comcz000_261010_played",&local_8);
  bVar6 = local_8 != 0;
  FUN_00c33d70("@Comcz000_291010_played",&local_8);
  bVar7 = local_8 != 0;
  FUN_00c33d70("@Ccom4000_3l1010_played",&local_8);
  local_8 = (uint)(local_8 != 0);
  FUN_00c33d70("@Ccom4000_4d1010_played",&local_c);
  local_c = (uint)(local_c != 0);
  FUN_00c33d70("@Ccom4000_6j1010_played",&local_10);
  local_10 = (uint)(local_10 != 0);
  FUN_00c33d70("@Comci000_101010_played",&local_14);
  local_14 = (uint)(local_14 != 0);
  FUN_00c33d70("@Comcj000_101010_played",&local_18);
  local_18 = (uint)(local_18 != 0);
  FUN_00c33d70("@Comck000_101010_played",&local_1c);
  local_1c = (uint)(local_1c != 0);
  FUN_00c33d70("@Comcl000_101010_played",&local_20);
  local_20 = (uint)(local_20 != 0);
  FUN_00c33d70("@C0254000_1m1010_played",&local_24);
  local_24 = (uint)(local_24 != 0);
  FUN_00c33d70("@C0254000_1x1010_played",&local_28);
  local_28 = (uint)(local_28 != 0);
  FUN_00c33d70("@Comcz300_101010_played",&local_2c);
  local_2c = (uint)(local_2c != 0);
  FUN_00c33d70("@Comcz300_1g1010_played",&local_30);
  local_30 = (uint)(local_30 != 0);
  FUN_00c33d70("@C0104000_101010_played",&local_34);
  local_34 = (uint)(local_34 != 0);
  FUN_00c33d70("@C0107000_121010_played",&local_38);
  local_38 = (uint)(local_38 != 0);
  FUN_00c33d70("@C01_3000_391010_played",&local_3c);
  local_3c = (uint)(local_3c != 0);
  FUN_00c33d70("@R01h4000_1g1010_played",&local_40);
  local_40 = (uint)(local_40 != 0);
  FUN_00c33d70("@C0254000_101010_played",&local_44);
  local_44 = (uint)(local_44 != 0);
  FUN_00c33d70("@C0105000_1f1010_played",&local_48);
  local_48 = (uint)(local_48 != 0);
  FUN_00c33d70("@Comhd000_1b1010_played",&local_4c);
  local_4c = (uint)(local_4c != 0);
  FUN_00c33d70("@Comnz000_1a1010_played",&local_50);
  local_50 = (uint)(local_50 != 0);
  FUN_00c33d70("@Comnz000_1b1010_played",&local_54);
  local_54 = (uint)(local_54 != 0);
  FUN_00c33d70("@Comnz000_1c1010_played",&local_58);
  local_58 = (uint)(local_58 != 0);
  FUN_00c33d70("@Comnz000_1d1010_played",&local_5c);
  local_5c = (uint)(local_5c != 0);
  FUN_00c33d70("@Comnz000_1e1010_played",&local_4);
  DAT_01b76268 = (uint)bVar5 +
                 ((uint)bVar6 +
                 ((uint)bVar7 +
                 ((local_8 & 1) +
                 ((local_c & 1) +
                 ((local_10 & 1) +
                 ((local_14 & 1) +
                 ((local_18 & 1) +
                 ((local_1c & 1) +
                 ((local_20 & 1) +
                 ((local_24 & 1) +
                 ((local_28 & 1) +
                 ((local_2c & 1) +
                 ((local_30 & 1) +
                 ((local_34 & 1) +
                 ((local_38 & 1) +
                 ((local_3c & 1) +
                 ((local_40 & 1) +
                 ((local_44 & 1) +
                 ((local_48 & 1) +
                 ((local_4c & 1) +
                 ((local_50 & 1) +
                 ((local_54 & 1) +
                 ((local_58 & 1) + ((local_5c & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) * 2) * 2) *
                 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2)
                 * 2) * 2) * 2;
  iVar4 = 0;
  switch(param_1 >> 8 & 7) {
  case 1:
    FUN_00c33d70("@C0204000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@C0204000_1j1010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@C0204000_251010_played",&param_1);
    bVar7 = param_1 != 0;
    FUN_00c33d70("@C0106000_1l1010_played",&param_1);
    DAT_01b7626c = (uint)bVar5 + ((uint)bVar6 + ((uint)bVar7 + (uint)(param_1 != 0) * 2) * 2) * 2;
    return 1;
  case 2:
    FUN_00c33d70("@C02_2000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@R02hc000_101010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@R02he000_101010_played",&param_1);
    bVar7 = param_1 != 0;
    FUN_00c33d70("@C02_2000_1m1010_played",&param_1);
    DAT_01b7626c = (uint)bVar5 + ((uint)bVar6 + ((uint)bVar7 + (uint)(param_1 != 0) * 2) * 2) * 2;
    return 1;
  case 3:
    FUN_00c33d70("@C03_2000_1g1010_played",&param_1);
    uVar3 = param_1;
    FUN_00c33d70("@C03_2000_101010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C0254000_281010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@C0404000_101010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@C0404000_1r1010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@C0404000_2c1010_played",&local_4);
    iVar4 = (param_1 & 1) + (uint)(local_4 != 0) * 2;
    local_c = local_8;
    goto LAB_00c395e0;
  case 4:
    FUN_00c33d70("@R04h4000_101010_played",&param_1);
    uVar3 = param_1;
    FUN_00c33d70("@R04h4000_131010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@R04h4000_151010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@R04ha000_101010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@R04ha000_2p1010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@R04hj000_141010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@C0501000_1f1010_played",&local_4);
    iVar4 = (local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2;
LAB_00c395e0:
    DAT_01b7626c = (uint)(uVar3 != 0) +
                   ((uint)(uVar1 != 0) + ((uint)(uVar2 != 0) + ((local_c & 1) + iVar4 * 2) * 2) * 2)
                   * 2;
    return 1;
  case 5:
    FUN_00c33d70("@C05_4000_131010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C05_4000_1s1010_played",&param_1);
    pcVar8 = "@C05_4000_261010_played";
    break;
  case 6:
    FUN_00c33d70("@R06h1000_1s1010_played",&param_1);
    DAT_01b7626c = (uint)(param_1 != 0);
    return 1;
  case 7:
    FUN_00c33d70("@C07_2000_101010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C0707000_3a1010_played",&param_1);
    pcVar8 = "@R07h5000_271010_played";
    break;
  default:
    goto switchD_00c393f4_default;
  }
  bVar5 = param_1 != 0;
  FUN_00c33d70(pcVar8,&param_1);
  iVar4 = (uint)(uVar1 != 0) + ((uint)bVar5 + (uint)(param_1 != 0) * 2) * 2;
switchD_00c393f4_default:
  DAT_01b7626c = iVar4;
  return 1;
}

// 00C397F0  FUN_00c397f0  size=1753  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00c397f0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  local_18 = 0;
  FUN_00c33d70("@codec_doktor_loop_mistral",&local_18);
  local_14 = 0;
  FUN_00c33d70("@codec_doktor_loop_grad",&local_14);
  local_10 = 0;
  FUN_00c33d70("@codec_doktor_loop_raptor",&local_10);
  local_c = 0;
  FUN_00c33d70("@codec_doktor_loop_slider",&local_c);
  local_8 = 0;
  FUN_00c33d70("@codec_doktor_loop_cyborg",&local_8);
  local_1c = 0;
  FUN_00c33d70("@codec_doktor_loop_stage",&local_1c);
  DAT_01b76270 = (((((local_8 & 0xf) * 0x10 + (local_c & 0xf)) * 0x10 + (local_10 & 0xf)) * 0x10 +
                  (local_14 & 0xf)) * 0x10 + (local_18 & 0xf)) * 0x10 + (local_1c & 0xf);
  FUN_00c33d70("@Ccom4000_1f1010_played",&local_8);
  uVar3 = local_8 >> 8;
  FUN_00c33d70("@Ccom4000_201010_played",&local_8);
  uVar1 = local_8 >> 8;
  FUN_00c33d70("@Comcn000_101010_played",&local_8);
  uVar2 = local_8 >> 8;
  FUN_00c33d70("@Comcz000_3s1010_played",&local_8);
  DAT_01b762a0 = (((local_8 >> 8 & 0xf) * 0x10 + (uVar2 & 0xf)) * 0x10 + (uVar1 & 0xf)) * 0x10 +
                 (uVar3 & 0xf);
  FUN_00c33d70("@Comcz000_101010_played",&local_8);
  bVar4 = local_8 != 0;
  FUN_00c33d70("@Comcz000_1v1010_played",&local_8);
  bVar5 = local_8 != 0;
  FUN_00c33d70("@C01_3000_1m1010_played",&local_8);
  bVar6 = local_8 != 0;
  FUN_00c33d70("@Comhd000_101010_played",&local_8);
  local_8 = (uint)(local_8 != 0);
  FUN_00c33d70("@R02hg000_1j1010_played",&local_c);
  local_c = (uint)(local_c != 0);
  FUN_00c33d70("@Comhb000_131010_played",&local_10);
  local_10 = (uint)(local_10 != 0);
  FUN_00c33d70("@Comhb000_191010_played",&local_14);
  local_14 = (uint)(local_14 != 0);
  FUN_00c33d70("@Comh9000_101010_played",&local_18);
  local_18 = (uint)(local_18 != 0);
  FUN_00c33d70("@Comha000_101010_played",&local_1c);
  local_1c = (uint)(local_1c != 0);
  FUN_00c33d70("@Comh6000_171010_played",&local_20);
  local_20 = (uint)(local_20 != 0);
  FUN_00c33d70("@Comhc000_131010_played",&local_24);
  local_24 = (uint)(local_24 != 0);
  FUN_00c33d70("@C0103000_1j1010_played",&local_28);
  local_28 = (uint)(local_28 != 0);
  FUN_00c33d70("@Comh4000_101010_played",&local_2c);
  local_2c = (uint)(local_2c != 0);
  FUN_00c33d70("@Comh3000_101010_played",&local_30);
  local_30 = (uint)(local_30 != 0);
  FUN_00c33d70("@Comh2000_101010_played",&local_34);
  local_34 = (uint)(local_34 != 0);
  FUN_00c33d70("@C01_3000_3x1010_played",&local_38);
  local_38 = (uint)(local_38 != 0);
  FUN_00c33d70("@Comh7000_141010_played",&local_3c);
  local_3c = (uint)(local_3c != 0);
  FUN_00c33d70("@R01h4000_1v1010_played",&local_40);
  local_40 = (uint)(local_40 != 0);
  FUN_00c33d70("@C01_3000_4l1010_played",&local_44);
  local_44 = (uint)(local_44 != 0);
  FUN_00c33d70("@Comh5000_101010_played",&local_48);
  local_48 = (uint)(local_48 != 0);
  FUN_00c33d70("@Comh1000_101010_played",&local_4c);
  local_4c = (uint)(local_4c != 0);
  FUN_00c33d70("@Comh1000_131010_played",&local_50);
  local_50 = (uint)(local_50 != 0);
  FUN_00c33d70("@Comhd000_141010_played",&local_54);
  local_54 = (uint)(local_54 != 0);
  FUN_00c33d70("@C01_3000_101010_played",&local_58);
  local_58 = (uint)(local_58 != 0);
  FUN_00c33d70("@Ccom4000_101010_played",&local_5c);
  local_5c = (uint)(local_5c != 0);
  FUN_00c33d70("@Ccom4000_2p1010_played",&local_60);
  local_60 = (uint)(local_60 != 0);
  FUN_00c33d70("@Ccom4000_551010_played",&local_64);
  local_64 = (uint)(local_64 != 0);
  FUN_00c33d70("@Comcz000_4a1010_played",&local_68);
  local_68 = (uint)(local_68 != 0);
  FUN_00c33d70("@Ccom4000_5o1010_played",&local_4);
  DAT_01b762b0 = (uint)bVar4 +
                 ((uint)bVar5 +
                 ((uint)bVar6 +
                 ((local_8 & 1) +
                 ((local_c & 1) +
                 ((local_10 & 1) +
                 ((local_14 & 1) +
                 ((local_18 & 1) +
                 ((local_1c & 1) +
                 ((local_20 & 1) +
                 ((local_24 & 1) +
                 ((local_28 & 1) +
                 ((local_2c & 1) +
                 ((local_30 & 1) +
                 ((local_34 & 1) +
                 ((local_38 & 1) +
                 ((local_3c & 1) +
                 ((local_40 & 1) +
                 ((local_44 & 1) +
                 ((local_48 & 1) +
                 ((local_4c & 1) +
                 ((local_50 & 1) +
                 ((local_54 & 1) +
                 ((local_58 & 1) +
                 ((local_5c & 1) +
                 ((local_60 & 1) +
                 ((local_64 & 1) + ((local_68 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) * 2) * 2) *
                 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2) * 2)
                 * 2) * 2) * 2) * 2) * 2) * 2;
  FUN_00c33d70("@Comco000_101010_played",&local_4);
  bVar4 = local_4 != 0;
  FUN_00c33d70("@C01_3000_2c1010_played",&local_4);
  bVar5 = local_4 != 0;
  FUN_00c33d70("@Comcz000_3e1010_played",&local_4);
  bVar6 = local_4 != 0;
  FUN_00c33d70("@Comcm000_101010_played",&local_10);
  local_10 = (uint)(local_10 != 0);
  FUN_00c33d70("@Comcz000_2o1010_played",&local_c);
  local_c = (uint)(local_c != 0);
  FUN_00c33d70("@C0304000_101010_played",&local_8);
  local_8 = (uint)(local_8 != 0);
  FUN_00c33d70("@C0304000_1v1010_played",&local_4);
  _DAT_01b762ac =
       ((uint)bVar4 +
       ((uint)bVar5 +
       ((uint)bVar6 +
       ((local_10 & 1) + ((local_c & 1) + ((local_8 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) * 2)
       * 2) * 2) * 0x10000 + (_DAT_01b762ac & 0xffff);
  return 1;
}

// 00C39EE0  FUN_00c39ee0  size=520  [run]
undefined4 FUN_00c39ee0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  
  FUN_00c33d70("@C0706000_101010_played",&local_8);
  bVar1 = local_8 != 0;
  FUN_00c33d70("@C0706000_1q1010_played",&local_8);
  bVar2 = local_8 != 0;
  FUN_00c33d70("@C0706000_2a1010_played",&local_8);
  bVar3 = local_8 != 0;
  FUN_00c33d70("@C0706000_2m1010_played",&local_8);
  local_8 = (uint)(local_8 != 0);
  FUN_00c33d70("@C0706000_2x1010_played",&local_c);
  local_c = (uint)(local_c != 0);
  FUN_00c33d70("@C0706000_3d1010_played",&local_10);
  local_10 = (uint)(local_10 != 0);
  FUN_00c33d70("@C0706000_3v1010_played",&local_14);
  local_14 = (uint)(local_14 != 0);
  FUN_00c33d70("@C0706000_4c1010_played",&local_18);
  local_18 = (uint)(local_18 != 0);
  FUN_00c33d70("@C0706000_3q1010_played",&local_1c);
  local_1c = (uint)(local_1c != 0);
  FUN_00c33d70("@R07h4000_1j1010_played",&local_20);
  local_20 = (uint)(local_20 != 0);
  FUN_00c33d70("@R07h5000_3m1010_played",&local_24);
  local_24 = (uint)(local_24 != 0);
  FUN_00c33d70("@R07h5000_3v1010_played",&local_28);
  local_28 = (uint)(local_28 != 0);
  FUN_00c33d70("@R07h5000_401010_played",&local_4);
  DAT_01b76278 = (uint)bVar1 +
                 ((uint)bVar2 +
                 ((local_8 & 1) * 6 +
                  ((local_c & 1) +
                  ((local_10 & 1) +
                  ((local_14 & 1) +
                  ((local_18 & 1) +
                  ((local_1c & 1) +
                  ((local_20 & 1) +
                  ((local_24 & 1) + ((local_28 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) * 2) * 2)
                  * 2) * 2) * 2) * 8 + (uint)bVar3) * 2) * 2;
  return 1;
}

// 00C3A120  FUN_00c3a120  size=1743  [run]
undefined4 FUN_00c3a120(uint param_1)

{
  uint uVar1;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int local_4;
  uint uVar2;
  
  uVar4 = 0;
  FUN_00c33d70("@Comhd000_1f1010_played",&local_8);
  bVar5 = local_8 != 0;
  FUN_00c33d70("@Comnz000_1f1010_played",&local_8);
  bVar6 = local_8 != 0;
  FUN_00c33d70("@Comnz000_1g1010_played",&local_18);
  local_18 = (uint)(local_18 != 0);
  FUN_00c33d70("@Comnz000_1h1010_played",&local_1c);
  local_1c = (uint)(local_1c != 0);
  FUN_00c33d70("@Comnz000_1i1010_played",&local_20);
  local_20 = (uint)(local_20 != 0);
  FUN_00c33d70("@Comnz000_1j1010_played",&local_24);
  local_24 = (uint)(local_24 != 0);
  FUN_00c33d70("@Comnz000_1x1010_played",&local_8);
  DAT_01b76288 = (uint)bVar5 +
                 ((uint)bVar6 +
                 ((local_18 & 1) +
                 ((local_1c & 1) +
                 ((local_20 & 1) + ((local_24 & 1) + (uint)(local_8 != 0) * 2) * 2) * 2) * 2) * 2) *
                 2;
  switch(param_1 >> 8 & 7) {
  case 2:
    FUN_00c33d70("@C0305000_101010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@C0305000_2a1010_played",&param_1);
    uVar4 = param_1;
    FUN_00c33d70("@C0305000_2o1010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@C0305000_2z1010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@R02h4000_1b1010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@R02h4000_1s1010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@R02h6000_101010_played",&local_14);
    local_14 = (uint)(local_14 != 0);
    FUN_00c33d70("@R02h6000_1a1010_played",&local_24);
    local_24 = (uint)(local_24 != 0);
    FUN_00c33d70("@R02h8000_101010_played",&local_20);
    local_20 = (uint)(local_20 != 0);
    FUN_00c33d70("@C0305000_3b1010_played",&local_1c);
    local_1c = (uint)(local_1c != 0);
    FUN_00c33d70("@R02he000_151010_played",&local_18);
    local_18 = (uint)(local_18 != 0);
    FUN_00c33d70("@R02he000_181010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@R02hg000_1q1010_played",&local_4);
    iVar3 = (local_c & 1) +
            ((local_10 & 1) +
            ((local_14 & 1) +
            ((local_24 & 1) +
            ((local_20 & 1) +
            ((local_1c & 1) + ((local_18 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2)
            * 2) * 2) * 2) * 2) * 2;
    local_10 = local_8;
    goto LAB_00c3a41d;
  case 3:
    FUN_00c33d70("@C0405000_101010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@C0405000_141010_played",&param_1);
    uVar4 = param_1;
    FUN_00c33d70("@R03h2000_101010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@R03h5000_101010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@R03h7000_101010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@R03h7000_131010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@R03hb000_101010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@R03he000_1z1010_played",&local_4);
    iVar3 = (local_c & 1) + ((local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2;
LAB_00c3a41d:
    uVar4 = (uint)(uVar2 != 0) +
            ((uint)(uVar4 != 0) + ((uint)(uVar1 != 0) + ((local_10 & 1) + iVar3 * 2) * 2) * 2) * 2;
    break;
  case 4:
    FUN_00c33d70("@C04_5000_1l1010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@R04h3000_101010_played",&param_1);
    uVar4 = param_1;
    FUN_00c33d70("@R04h3000_1a1010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@R04h3000_1h1010_played",&local_14);
    local_14 = (uint)(local_14 != 0);
    FUN_00c33d70("@R04h3000_1j1010_played",&local_10);
    local_10 = (uint)(local_10 != 0);
    FUN_00c33d70("@R04h3000_1l1010_played",&local_c);
    local_c = (uint)(local_c != 0);
    FUN_00c33d70("@R04ha000_131010_played",&local_8);
    local_8 = (uint)(local_8 != 0);
    FUN_00c33d70("@R04he000_1f1010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@R04hj000_121010_played",&local_4);
    iVar3 = (local_14 & 1) +
            ((local_10 & 1) +
            ((local_c & 1) + ((local_8 & 1) + ((param_1 & 1) + (uint)(local_4 != 0) * 2) * 2) * 2) *
            2) * 2;
    goto LAB_00c3a7c7;
  case 5:
    FUN_00c33d70("@C05_5000_101010_played",&param_1);
    bVar5 = param_1 != 0;
    FUN_00c33d70("@C05_5000_1s1010_played",&param_1);
    bVar6 = param_1 != 0;
    FUN_00c33d70("@C05_5000_1l1010_played",&param_1);
    bVar7 = param_1 != 0;
    FUN_00c33d70("@C05_5000_1n1010_played",&param_1);
    uVar4 = (uint)bVar5 + ((uint)bVar6 + ((uint)bVar7 + (uint)(param_1 != 0) * 2) * 2) * 2;
    break;
  case 6:
    FUN_00c33d70("@R06h1000_231010_played",&param_1);
    uVar4 = (uint)(param_1 != 0);
    break;
  case 7:
    FUN_00c33d70("@C0705000_101010_played",&param_1);
    uVar2 = param_1;
    FUN_00c33d70("@C0705000_1c1010_played",&param_1);
    uVar4 = param_1;
    FUN_00c33d70("@R07h5000_3h1010_played",&param_1);
    uVar1 = param_1;
    FUN_00c33d70("@R07h5000_3j1010_played",&param_1);
    param_1 = (uint)(param_1 != 0);
    FUN_00c33d70("@Error_mess_played",&local_4);
    iVar3 = (param_1 & 1) + (uint)(local_4 != 0) * 2;
LAB_00c3a7c7:
    uVar4 = (uint)(uVar2 != 0) + ((uint)(uVar4 != 0) + ((uint)(uVar1 != 0) + iVar3 * 2) * 2) * 2;
  }
  DAT_01b7628c = uVar4;
  return 1;
}

// 00C3A810  FUN_00c3a810  size=308  [run]
undefined4 FUN_00c3a810(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint local_c;
  uint local_8;
  int local_4;
  
  FUN_00c33d70("@codec_loop_battle",&local_8);
  FUN_00c33d70("@codec_loop_stage",&local_c);
  DAT_01b76290 = (local_8 & 0xf) * 0x10 + (local_c & 0xf);
  FUN_00c33d70("@C0255000_151010_played",&local_8);
  bVar1 = local_8 != 0;
  FUN_00c33d70("@C0255000_231010_played",&local_8);
  bVar2 = local_8 != 0;
  FUN_00c33d70("@C0255000_2c1010_played",&local_8);
  bVar3 = local_8 != 0;
  FUN_00c33d70("@C0305000_1l1010_played",&local_8);
  local_8 = (uint)(local_8 != 0);
  FUN_00c33d70("@C04_5000_1l1010_played",&local_c);
  local_c = (uint)(local_c != 0);
  FUN_00c33d70("@Comnw000_101010_played",&local_4);
  DAT_01b762b4 = ((uint)bVar1 +
                 ((uint)bVar2 +
                 ((uint)bVar3 + ((local_8 & 1) + ((local_c & 1) + (uint)(local_4 != 0) * 2) * 2) * 2
                 ) * 2) * 2) * 0x10000 + (DAT_01b762b4 & 0xffff);
  return 1;
}

// 00C3AF7A  FUN_00c3af7a  size=365  [run]
undefined4 FUN_00c3af7a(void)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 != (int *)0x0) {
    puVar8 = &DAT_01be9c24;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c24);
    FUN_00dd6d80(puVar8);
  }
  iVar3 = FUN_00a8eea0();
  iVar4 = FUN_00a8eeb0();
  iVar6 = DAT_01bebdbc;
  if (DAT_01bebdbc == DAT_01bebdc0) {
    return 0;
  }
  do {
    FUN_00a7c940(iVar6);
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if ((piVar2[300] == 0x2070a) || (piVar2[300] == 0x20700)) {
        puVar8 = &DAT_01b351c0;
        (**(code **)(*piVar2 + 4))(&DAT_01b351c0);
        iVar6 = FUN_00dd6d80(puVar8);
        uVar7 = -(uint)(iVar6 != 0) & (uint)piVar2;
        fVar1 = ((float)*(int *)(uVar7 + 0x870) / (float)*(int *)(uVar7 + 0x874)) * 100.0;
        if (DAT_018b9174 == 0x750) {
          if (((float)iVar3 / (float)iVar4) * 100.0 <= 75.0) {
            return 5;
          }
          return 4;
        }
        if (DAT_018b9174 == 0x740) {
          return 3;
        }
        if (DAT_018b9174 != 0x730) {
          return 0;
        }
        if (fVar1 < 99.5 != (fVar1 == 99.5)) {
          return 2;
        }
        return 1;
      }
    }
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == DAT_01bebdc0) {
      return 0;
    }
  } while( true );
}

// 00C3BD30  FUN_00c3bd30  size=354  [run]
undefined4 FUN_00c3bd30(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined *puVar9;
  
  FUN_00904d60();
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar1 == 0) {
    FUN_00905ce0();
    return 0;
  }
  uVar7 = 0;
  iVar1 = DAT_01bebdbc;
  if (DAT_01bebdbc != DAT_01bebdc0) {
    do {
      FUN_00a7c940(iVar1);
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3[300] == 0x20100)) {
        puVar9 = &DAT_01b34db0;
        (**(code **)(*piVar3 + 4))(&DAT_01b34db0);
        iVar2 = FUN_00dd6d80(puVar9);
        pfVar4 = (float *)(**(code **)(*(int *)(-(uint)(iVar2 != 0) & (uint)piVar3) + 0x68))();
        pfVar5 = (float *)FUN_00a7c8b0();
        if (SQRT((*pfVar5 - *pfVar4) * (*pfVar5 - *pfVar4) +
                 (pfVar5[1] - pfVar4[1]) * (pfVar5[1] - pfVar4[1]) +
                 (pfVar5[2] - pfVar4[2]) * (pfVar5[2] - pfVar4[2])) <= 25.0) {
          uVar6 = FUN_00a8cab0();
          uVar6 = uVar6 & 0xffff0000;
          if ((int)uVar6 < 0x50001) {
            if (uVar6 != 0x50000) {
              if ((int)uVar6 < 0x30001) {
                if ((uVar6 == 0x30000) || (uVar6 == 0x10000)) goto LAB_00c3be64;
                bVar8 = uVar6 == 0x20000;
              }
              else {
                bVar8 = uVar6 == 0x40000;
              }
LAB_00c3be5e:
              if (!bVar8) {
                uVar7 = 0;
                goto LAB_00c3be69;
              }
            }
          }
          else if ((uVar6 != 0x60000) && (uVar6 != 0x70000)) {
            bVar8 = uVar6 == 0x90000;
            goto LAB_00c3be5e;
          }
LAB_00c3be64:
          uVar7 = 1;
        }
      }
LAB_00c3be69:
      piVar3 = (int *)(iVar1 + 8);
      iVar1 = *piVar3;
    } while (*piVar3 != DAT_01bebdc0);
  }
  FUN_00905ce0();
  return uVar7;
}

// 00C3C970  FUN_00c3c970  size=262  [run]
float10 __fastcall FUN_00c3c970(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  
  if (DAT_01bea100 == (int *)0x0) {
    return (float10)-1.0;
  }
  iVar5 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
    iVar5 = FUN_00a7c8a0();
    fVar8 = 1e+08;
    piVar7 = *(int **)(*param_1 + 4);
    piVar1 = piVar7 + *(int *)(*param_1 + 8);
    for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
      FUN_00a7c940(*piVar7 + 0x40);
      iVar6 = FUN_00a81330();
      if ((((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) &&
          (iVar6 = FUN_00a7c8a0(), *(int *)(iVar6 + 0x4e4) == 0)) &&
         (fVar2 = *(float *)(iVar6 + 0x40) - *(float *)(iVar5 + 0x40),
         fVar4 = *(float *)(iVar6 + 0x44) - *(float *)(iVar5 + 0x44),
         fVar3 = *(float *)(iVar6 + 0x48) - *(float *)(iVar5 + 0x48),
         fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3, fVar2 < fVar8)) {
        fVar8 = fVar2;
      }
    }
    return SQRT((float10)fVar8);
  }
  return (float10)-1.0;
}

// 00C3CA80  FUN_00c3ca80  size=123  [run]
undefined4 __fastcall FUN_00c3ca80(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*param_1 + 4);
  if (piVar3 == piVar3 + *(int *)(*param_1 + 8)) {
    return 0;
  }
  while ((((iVar1 = *piVar3, (DAT_01bea094 & 0x20000) != 0 && (iVar2 = FUN_00a85390(), iVar2 != 0))
          && (*(int *)(iVar2 + 0x4b0) == 0x20040)) ||
         ((iVar2 = FUN_00a82d50(), iVar2 != 4 || ((*(uint *)(iVar1 + 0x134) & 0x2000000) == 0))))) {
    piVar3 = piVar3 + 1;
    if (piVar3 == (int *)(*(int *)(*param_1 + 4) + *(int *)(*param_1 + 8) * 4)) {
      return 0;
    }
  }
  return 1;
}

// 00C3CB10  FUN_00c3cb10  size=277  [run]
undefined4 __fastcall FUN_00c3cb10(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *unaff_EDI;
  float unaff_retaddr;
  undefined4 local_8;
  
  if (DAT_01bea100 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar5 != 0) {
    iVar5 = FUN_00a7c8a0();
    if (iVar5 != 0) {
      local_8 = 0;
      iVar5 = FUN_00a7c8a0();
      piVar7 = *(int **)(*param_1 + 4);
      if (piVar7 != piVar7 + *(int *)(*param_1 + 8)) {
        do {
          iVar1 = *piVar7;
          iVar6 = FUN_00a85390();
          if ((iVar6 != 0) &&
             ((((DAT_01bea094 & 0x20000) == 0 || (*(int *)(iVar6 + 0x4b0) != 0x20040)) &&
              (fVar2 = *(float *)(iVar6 + 0x40) - *(float *)(iVar5 + 0x40),
              fVar4 = *(float *)(iVar6 + 0x44) - *(float *)(iVar5 + 0x44),
              fVar3 = *(float *)(iVar6 + 0x48) - *(float *)(iVar5 + 0x48),
              fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 < unaff_retaddr * unaff_retaddr)))) {
            iVar6 = FUN_00a82d50();
            if ((iVar6 == 4) && ((*(uint *)(iVar1 + 0x134) & 0x2000000) != 0)) {
              local_8 = 1;
            }
          }
          piVar7 = piVar7 + 1;
        } while (piVar7 != (int *)(*(int *)(*unaff_EDI + 4) + *(int *)(*unaff_EDI + 8) * 4));
      }
      return local_8;
    }
  }
  return 0;
}

// 00C3CC30  FUN_00c3cc30  size=118  [run]
undefined4 __fastcall FUN_00c3cc30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 4);
  if (iVar2 == iVar2 + *(int *)(*param_1 + 8) * 4) {
    return 1;
  }
  while (((((DAT_01bea094 & 0x20000) != 0 && (iVar1 = FUN_00a85390(), iVar1 != 0)) &&
          (*(int *)(iVar1 + 0x4b0) == 0x20040)) || (iVar1 = FUN_00a82e60(), iVar1 != 0))) {
    iVar2 = iVar2 + 4;
    if (iVar2 == *(int *)(*param_1 + 4) + *(int *)(*param_1 + 8) * 4) {
      return 1;
    }
  }
  return 0;
}

// 00C3CCB0  FUN_00c3ccb0  size=229  [run]
void __thiscall FUN_00c3ccb0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 5)) &&
     ((iVar1 = FUN_00d467a0(), iVar1 == 0 ||
      (((((DAT_018b9174 != 0xd30 || (iVar1 = FUN_00d45a70("PD30_M2_BTL"), iVar1 == 0)) &&
         ((DAT_018b9174 != 0xd20 && ((DAT_018b9174 != 0xd21 && (DAT_018b9174 != 0xd60)))))) &&
        (DAT_018b9174 != 0xd71)) &&
       ((((DAT_018b9174 != 0xd72 && (DAT_018b9174 != 0xd73)) && (DAT_018b9174 != 0xd74)) &&
        (DAT_018b9174 != 0xd75)))))))) {
    (**(code **)(*DAT_01bea184 + 0x50))();
  }
  param_1[2] = 0x42c7fae1;
  param_1[1] = 2;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(*param_1 + 4), iVar1 != iVar1 + *(int *)(*param_1 + 8) * 4)) {
    do {
      FUN_00a884f0(0);
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(*param_1 + 4) + *(int *)(*param_1 + 8) * 4);
  }
  param_1[0xb] = 0;
  param_1[4] = 0;
  FUN_009c94e0();
  return;
}

// 00C3CDA0  FUN_00c3cda0  size=77  [run]
void __thiscall FUN_00c3cda0(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[1] = 3;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(*param_1 + 4), iVar1 != iVar1 + *(int *)(*param_1 + 8) * 4)) {
    do {
      FUN_00a88530(0);
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(*param_1 + 4) + *(int *)(*param_1 + 8) * 4);
  }
  param_1[4] = 0;
  FUN_009c94e0();
  return;
}

// 00C3CDF0  FUN_00c3cdf0  size=127  [run]
void __thiscall FUN_00c3cdf0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_1[2] = 0x42c7fae1;
  param_1[1] = 1;
  if ((param_3 != 0) && (*(int *)(DAT_01bea190 + 0xa0) != 0)) {
    FUN_00cbd9f0();
  }
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(*param_1 + 4), iVar1 != iVar1 + *(int *)(*param_1 + 8) * 4)) {
    do {
      if (param_3 == 0) {
        FUN_00a885d0(0);
      }
      else {
        FUN_00a88be0(0);
      }
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(*param_1 + 4) + *(int *)(*param_1 + 8) * 4);
  }
  param_1[4] = 0;
  FUN_009c9490();
  return;
}

// 00C3CF00  FUN_00c3cf00  size=217  [run]
int __fastcall FUN_00c3cf00(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_1 + 4);
  iVar3 = 1;
  if (iVar4 == iVar4 + *(int *)(*param_1 + 8) * 4) {
    return 1;
  }
  do {
    iVar1 = FUN_00a85390();
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x4e4) == 0)) && (iVar2 = FUN_00a82d50(), iVar2 != 0)) {
      iVar2 = FUN_00a82ec0(4);
      if (iVar2 != 0) {
        iVar3 = 0;
      }
      if (((DAT_01bea094 & 0x20000) == 0) && (*(int *)(iVar1 + 0x4b0) == 0x20040)) {
        iVar3 = 0;
      }
      iVar1 = *(int *)(iVar1 + 0x4b0);
      if (iVar1 == 0x20060) {
        iVar3 = 0;
      }
      if (iVar1 == 0x20080) {
        iVar3 = 0;
      }
      if (iVar1 == 0x20081) {
        iVar3 = 0;
      }
      if (iVar1 == 0x20190) {
        iVar3 = 0;
      }
      if (iVar1 == 0x20220) {
        return 0;
      }
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar4 = iVar4 + 4;
    if (iVar4 == *(int *)(*param_1 + 4) + *(int *)(*param_1 + 8) * 4) {
      return iVar3;
    }
  } while( true );
}

// 00C3CFE0  FUN_00c3cfe0  size=357  [run]
int __fastcall FUN_00c3cfe0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(*param_1 + 4);
  iVar4 = 0;
  if (iVar3 == iVar3 + *(int *)(*param_1 + 8) * 4) {
    return 0;
  }
  do {
    iVar1 = FUN_00a85390();
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x4e4) == 0)) && (iVar2 = FUN_00a82d50(), iVar2 != 0)) {
      iVar2 = FUN_00a82ec0(4);
      if (iVar2 != 0) {
        iVar4 = 1;
      }
      if ((((DAT_01bea094 & 0x20000) == 0) && (*(int *)(iVar1 + 0x4b0) == 0x20040)) &&
         (iVar2 = FUN_00a82d50(), 3 < iVar2)) {
        iVar4 = 1;
      }
      if ((*(int *)(iVar1 + 0x4b0) == 0x20060) && (iVar2 = FUN_00a82d50(), 3 < iVar2)) {
        iVar4 = 1;
      }
      if ((*(int *)(iVar1 + 0x4b0) == 0x20080) && (iVar2 = FUN_00a82e80(), iVar2 != 0)) {
        iVar4 = 1;
      }
      if ((*(int *)(iVar1 + 0x4b0) == 0x20081) && (iVar2 = FUN_00a82e80(), iVar2 != 0)) {
        iVar4 = 1;
      }
      if (*(int *)(iVar1 + 0x4b0) == 0x20190) {
        iVar4 = 1;
      }
      if (*(int *)(iVar1 + 0x4b0) == 0x20220) {
        iVar4 = 1;
      }
      uVar5 = FUN_00c20560();
      if (((int)uVar5 == 0) &&
         ((((DAT_01bea094 & 0x20000) == 0 || ((int)((ulonglong)uVar5 >> 0x20) != 0x20040)) &&
          (iVar1 = FUN_00a82d50(), iVar1 == 4)))) {
        return 1;
      }
      if (iVar4 == 1) {
        return 1;
      }
    }
    iVar3 = iVar3 + 4;
    if (iVar3 == *(int *)(*param_1 + 4) + *(int *)(*param_1 + 8) * 4) {
      return iVar4;
    }
  } while( true );
}

// 00C3D150  FUN_00c3d150  size=325  [run]
undefined4 __fastcall FUN_00c3d150(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piStack_8;
  
  if (DAT_01bea100 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if ((iVar5 == 0) || (iVar5 = FUN_00a7c8a0(), iVar5 == 0)) {
    return 0;
  }
  iVar5 = FUN_00a7c8a0();
  fVar1 = (float)param_1[0xf];
  piVar8 = *(int **)(*param_1 + 4);
  uVar9 = 0;
  if (piVar8 == piVar8 + *(int *)(*param_1 + 8)) {
    return 0;
  }
  do {
    FUN_00a7c940(*piVar8 + 0x40);
    iVar6 = FUN_00a81330();
    if ((((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) &&
        (iVar6 = FUN_00a7c8a0(), *(int *)(iVar6 + 0x4e4) == 0)) &&
       ((iVar7 = FUN_00a82d50(), iVar7 != 0 &&
        (fVar2 = *(float *)(iVar6 + 0x40) - *(float *)(iVar5 + 0x40),
        fVar4 = *(float *)(iVar6 + 0x44) - *(float *)(iVar5 + 0x44),
        fVar3 = *(float *)(iVar6 + 0x48) - *(float *)(iVar5 + 0x48),
        fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 < fVar1 * fVar1)))) {
      if (*(int *)(iVar6 + 0x4b0) != 0x21010) {
        return 0;
      }
      iVar6 = FUN_00a82d50();
      if (iVar6 != 1) {
        return 0;
      }
      uVar9 = 1;
    }
    piVar8 = piVar8 + 1;
    if (piVar8 == (int *)(*(int *)(*piStack_8 + 4) + *(int *)(*piStack_8 + 8) * 4)) {
      return uVar9;
    }
  } while( true );
}

// 00C3D2A0  FUN_00c3d2a0  size=92  [run]
void __thiscall FUN_00c3d2a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  if ((param_2 != 0) && (param_1[8] != 0)) {
    if (param_1[8] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    }
    iVar1 = *(int *)*param_1;
    uVar3 = FUN_00a7c7f0();
    cVar2 = (**(code **)(iVar1 + 8))(uVar3);
    if (cVar2 == '\0') {
      FUN_00dd5650(&DAT_016a6644);
    }
    if (param_1[8] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
    }
  }
  return;
}

// 00C3D300  FUN_00c3d300  size=121  [run]
bool FUN_00c3d300(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  switch(param_2) {
  case 0:
    bVar2 = *(int *)(param_1 + 0x4b0) == 0x310a1;
    break;
  case 1:
    bVar1 = *(int *)(param_1 + 0x4b0) == 0x31011;
    bVar2 = *(int *)(param_1 + 0x4b0) == 0x31013;
    break;
  case 2:
    bVar2 = *(int *)(param_1 + 0x4b0) == 0x31013;
    break;
  case 3:
    bVar2 = *(int *)(param_1 + 0x4b0) == 0x31011;
    break;
  case 4:
    bVar2 = *(int *)(param_1 + 0x4b0) == 0x12040;
    break;
  default:
    goto switchD_00c3d30b_default;
  }
  if (bVar2) {
    bVar1 = true;
  }
switchD_00c3d30b_default:
  return bVar1;
}

