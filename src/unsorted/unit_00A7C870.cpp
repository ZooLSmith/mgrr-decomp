// src/unsorted/unit_00A7C870.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A7C870..00A7F330, 32 functions

#include "mgrr.h"

// 00A7C870  FUN_00a7c870  size=30  [run]
undefined4 __thiscall FUN_00a7c870(undefined4 param_1,byte param_2)

{
  Animation::Motion::NodeListener::NodeListener();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A7C890  FUN_00a7c890  size=4  [run]
undefined4 __fastcall FUN_00a7c890(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}

// 00A7C8A0  FUN_00a7c8a0  size=4  [run]
undefined4 __fastcall FUN_00a7c8a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}

// 00A7C8B0  FUN_00a7c8b0  size=17  [run]
undefined4 * __fastcall FUN_00a7c8b0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    return &DAT_01be9a50;
  }
  return (undefined4 *)(*(int *)(param_1 + 0x3c) + 0x50);
}

// 00A7C8D0  FUN_00a7c8d0  size=19  [run]
undefined4 * __fastcall FUN_00a7c8d0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    return &DAT_01be9a50;
  }
  return (undefined4 *)(*(int *)(param_1 + 0x3c) + 0x90);
}

// 00A7C8F0  FUN_00a7c8f0  size=17  [run]
undefined4 * __fastcall FUN_00a7c8f0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    return &DAT_01be9a50;
  }
  return (undefined4 *)(*(int *)(param_1 + 0x3c) + 0x70);
}

// 00A7C910  FUN_00a7c910  size=3  [run]
undefined4 __fastcall FUN_00a7c910(undefined4 param_1)

{
  return param_1;
}

// 00A7C930  FUN_00a7c930  size=9  [run]
void __fastcall FUN_00a7c930(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00A7C940  FUN_00a7c940  size=13  [run]
void __thiscall FUN_00a7c940(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 00A7C950  FUN_00a7c950  size=7  [run]
void __fastcall FUN_00a7c950(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00A7C960  FUN_00a7c960  size=13  [run]
void __thiscall FUN_00a7c960(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 00A7C970  FUN_00a7c970  size=27  [run]
void __thiscall FUN_00a7c970(undefined4 *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x2c);
    return;
  }
  *param_1 = 0;
  return;
}

// 00A7C990  FUN_00a7c990  size=18  [run]
bool __thiscall FUN_00a7c990(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}

// 00A7C9B0  FUN_00a7c9b0  size=18  [run]
bool __thiscall FUN_00a7c9b0(int *param_1,int *param_2)

{
  return *param_1 != *param_2;
}

// 00A7CA00  FUN_00a7ca00  size=30  [run]
undefined4 __thiscall FUN_00a7ca00(undefined4 param_1,byte param_2)

{
  FUN_00e085e0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A7CA20  FUN_00a7ca20  size=4  [run]
int __fastcall FUN_00a7ca20(int param_1)

{
  return param_1 + 0x38;
}

// 00A7CA30  FUN_00a7ca30  size=7  [run]
int __fastcall FUN_00a7ca30(int param_1)

{
  return param_1 + 0xe0;
}

// 00A7CA40  FUN_00a7ca40  size=43  [run]
void __fastcall FUN_00a7ca40(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 00A7CB40  FUN_00a7cb40  size=37  [run]
void __fastcall FUN_00a7cb40(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00dd7270();
    return;
  }
  return;
}

// 00A7CD50  FUN_00a7cd50  size=46  [run]
void __fastcall FUN_00a7cd50(int *param_1)

{
  if ((*(byte *)(param_1 + 0x132) & 2) == 0) {
    *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) | 2;
    (**(code **)(*param_1 + 0x20))();
    (**(code **)(*param_1 + 0xc))();
  }
  *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) | 1;
  return;
}

// 00A7CDE0  FUN_00a7cde0  size=42  [run]
int __fastcall FUN_00a7cde0(int param_1)

{
  FUN_00e03940();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_00de3530();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return param_1;
}

// 00A7CE60  FUN_00a7ce60  size=37  [run]
void __fastcall FUN_00a7ce60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    Animation::Motion::NodeListener::NodeListener();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

// 00A7CE90  FUN_00a7ce90  size=37  [run]
void __thiscall FUN_00a7ce90(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x50) = *param_2;
    *(undefined4 *)(iVar1 + 0x54) = param_2[1];
    *(undefined4 *)(iVar1 + 0x58) = param_2[2];
    *(undefined4 *)(iVar1 + 0x5c) = param_2[3];
  }
  return;
}

// 00A7CEC0  FUN_00a7cec0  size=49  [run]
void __thiscall FUN_00a7cec0(int param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x50) = *(float *)(iVar1 + 0x50) + *param_2;
    *(float *)(iVar1 + 0x54) = param_2[1] + *(float *)(iVar1 + 0x54);
    *(float *)(iVar1 + 0x58) = param_2[2] + *(float *)(iVar1 + 0x58);
    *(float *)(iVar1 + 0x5c) = param_2[3] + *(float *)(iVar1 + 0x5c);
  }
  return;
}

// 00A7CF00  FUN_00a7cf00  size=49  [run]
void __thiscall FUN_00a7cf00(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x90) = *param_2;
    *(undefined4 *)(iVar1 + 0x94) = param_2[1];
    *(undefined4 *)(iVar1 + 0x98) = param_2[2];
    *(undefined4 *)(iVar1 + 0x9c) = param_2[3];
  }
  return;
}

// 00A7CF90  FUN_00a7cf90  size=91  [run]
void __thiscall FUN_00a7cf90(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 != 0) {
    *(float *)(iVar2 + 0x70) = *param_2;
    *(float *)(iVar2 + 0x74) = param_2[1];
    *(float *)(iVar2 + 0x78) = param_2[2];
    *(float *)(iVar2 + 0x7c) = param_2[3];
    iVar2 = *(int *)(param_1 + 0x40);
    if (((iVar2 != 0) && (fVar1 = *param_2, fVar1 != *(float *)(iVar2 + 0xe0))) &&
       (fVar1 != *(float *)(iVar2 + 0xe0))) {
      *(float *)(iVar2 + 0xe0) = fVar1;
      return;
    }
  }
  return;
}

// 00A7D000  FUN_00a7d000  size=4251  [run]
void __thiscall FUN_00a7d000(LPCRITICAL_SECTION param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_40 [32];
  byte local_20 [32];
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  if (*(int *)(param_2 + 0x54) != 0) goto LAB_00a7d0ed;
  FUN_009f92a0(local_20,0x20,*(undefined4 *)(param_2 + 0x24));
  FUN_009f92f0(local_40,0x20,*(undefined4 *)(param_2 + 0x24));
  pbVar5 = &DAT_0164ea44;
  pbVar2 = local_20;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a7d071:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a7d076;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a7d071;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a7d076:
  if (iVar3 == 0) goto LAB_00a7e04d;
  pbVar5 = &DAT_01663edc;
  pbVar2 = local_20;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a7d0a7:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a7d0ac;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a7d0a7;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a7d0ac:
  if (iVar3 == 0) {
    pbVar5 = &DAT_01663ed4;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) goto LAB_00a7d0e0;
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7d0e0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
  }
  else {
    pbVar5 = &DAT_0164ea34;
    pbVar2 = local_20;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7d130:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7d135;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7d130;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7d135:
    if (iVar3 == 0) {
      pbVar5 = &DAT_01641bd4;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d166:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d16b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d166;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d16b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01642b58;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d1a0:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d1a5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d1a0;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d1a5:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01642b50;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d1d6:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d1db;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d1d6;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d1db:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663ecc;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d210:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d215;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d210;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d215:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663ec4;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d246:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d24b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d246;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d24b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663ebc;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d280:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d285;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d280;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d285:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663eb4;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d2b6:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d2bb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d2b6;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d2bb:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01646730;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d2f0:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d2f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d2f0;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d2f5:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663eac;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d326:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d32b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d326;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d32b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01646728;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d360:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d365;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d360;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d365:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_016457f4;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d396:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d39b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d396;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d39b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01645740;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d3d0:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d3d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d3d0;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d3d5:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_016467d0;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d406:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d40b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d406;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d40b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_016467dc;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d440:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d445;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d440;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d445:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663ea4;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d476:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d47b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d476;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d47b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e9c;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d4b0:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d4b5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d4b0;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d4b5:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e94;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d4e6:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d4eb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d4e6;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d4eb:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e8c;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d520:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d525;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d520;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d525:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e84;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d556:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d55b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d556;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d55b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e7c;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d590:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d595;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d590;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d595:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e74;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d5c6:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d5cb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d5c6;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d5cb:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e6c;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d600:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d605;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d600;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d605:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e64;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d636:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d63b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d636;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d63b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e5c;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d670:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d675;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d670;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d675:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e54;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d6a6:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d6ab;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d6a6;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d6ab:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01641c14;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d6e0:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d6e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d6e0;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d6e5:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01641c0c;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d716:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d71b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d716;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d71b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01641c04;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d750:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d755;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d750;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d755:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01645708;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d786:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d78b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d786;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d78b:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e4c;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d7c0:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d7c5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d7c0;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d7c5:
      if (iVar3 == 0) goto LAB_00a7e04d;
      pbVar5 = &DAT_01663e44;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) goto LAB_00a7d0e0;
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d0e0;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
    }
    else {
      pbVar5 = &DAT_0164ea38;
      pbVar2 = local_20;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7d830:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7d835;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7d830;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7d835:
      if (iVar3 == 0) {
        pbVar5 = &DAT_01641bdc;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7d866:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7d86b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7d866;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7d86b:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01641bcc;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7d8a0:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7d8a5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7d8a0;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7d8a5:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663e3c;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7d8d6:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7d8db;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7d8d6;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7d8db:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663e34;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7d910:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7d915;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7d910;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7d915:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01641bd4;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7d946:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7d94b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7d946;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7d94b:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01642b58;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7d980:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7d985;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7d980;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7d985:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01642b50;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7d9b6:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7d9bb;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7d9b6;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7d9bb:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663ecc;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7d9f0:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7d9f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7d9f0;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7d9f5:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663ec4;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7da26:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7da2b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7da26;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7da2b:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663ebc;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7da60:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7da65;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7da60;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7da65:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663e2c;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7da96:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7da9b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7da96;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7da9b:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663eb4;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7dad0:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7dad5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7dad0;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7dad5:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663e24;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7db06:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7db0b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7db06;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7db0b:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663e1c;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7db40:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7db45;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7db40;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7db45:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_016457ec;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7db76:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7db7b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7db76;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7db7b:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663e14;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7dbb0:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7dbb5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7dbb0;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7dbb5:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01641c14;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7dbe6:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7dbeb;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7dbe6;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7dbeb:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663e4c;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7dc20:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7dc25;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7dc20;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7dc25:
        if (iVar3 == 0) goto LAB_00a7e04d;
        pbVar5 = &DAT_01663e44;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) goto LAB_00a7d0e0;
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7d0e0;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
      }
      else {
        pbVar5 = &DAT_0164ea3c;
        pbVar2 = local_20;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7dc90:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7dc95;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7dc90;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7dc95:
        if (iVar3 == 0) {
          pbVar5 = &DAT_01641bdc;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7dcc6:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7dccb;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7dcc6;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7dccb:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01641bd4;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7dd00:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7dd05;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7dd00;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7dd05:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01642b58;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7dd36:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7dd3b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7dd36;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7dd3b:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01642b50;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7dd70:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7dd75;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7dd70;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7dd75:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01663ecc;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7dda6:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7ddab;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7dda6;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7ddab:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01663ec4;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7dde0:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7dde5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7dde0;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7dde5:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01663ebc;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7de16:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7de1b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7de16;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7de1b:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01663e2c;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7de50:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7de55;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7de50;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7de55:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_016457ec;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7de86:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7de8b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7de86;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7de8b:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01646730;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7dec0:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7dec5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7dec0;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7dec5:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01641c14;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7def6:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7defb;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7def6;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7defb:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01641c0c;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) goto LAB_00a7d0e0;
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7d0e0;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
        }
        else {
          pbVar5 = &DAT_0164ea30;
          pbVar2 = local_20;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7df64:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7df69;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7df64;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7df69:
          if (iVar3 != 0) goto LAB_00a7d0ed;
          pbVar5 = &DAT_01663e0c;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7dfa0:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7dfa5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7dfa0;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7dfa5:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01663e04;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7dfd6:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7dfdb;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7dfd6;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7dfdb:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01663dfc;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7e008:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7e00d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7e008;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7e00d:
          if (iVar3 == 0) goto LAB_00a7e04d;
          pbVar5 = &DAT_01663df4;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7e040:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto joined_r0x00a7e047;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7e040;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
        }
      }
    }
  }
joined_r0x00a7e047:
  if (iVar3 == 0) {
LAB_00a7e04d:
    for (piVar4 = param_1[1].OwningThread;
        piVar4 != (int *)((int)param_1[1].OwningThread + (int)param_1[1].LockSemaphore * 4);
        piVar4 = piVar4 + 1) {
      if (*piVar4 == param_2) goto LAB_00a7e086;
    }
    (**(code **)(param_1[1].RecursionCount + 8))(&param_2);
    FUN_00d89e60(0xd);
LAB_00a7e086:
    if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(param_1);
    }
    return;
  }
LAB_00a7d0ed:
  if (param_1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    return;
  }
  LeaveCriticalSection(param_1);
  return;
LAB_00a7d0e0:
  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  goto joined_r0x00a7e047;
}

// 00A7E3B0  FUN_00a7e3b0  size=3803  [run]
void __thiscall FUN_00a7e3b0(LPCRITICAL_SECTION param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_40 [32];
  byte local_20 [32];
  
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  if (*(int *)(param_2 + 0x54) != 0) goto LAB_00a7eaf3;
  FUN_009f92a0(local_20,0x20,*(undefined4 *)(param_2 + 0x24));
  FUN_009f92f0(local_40,0x20,*(undefined4 *)(param_2 + 0x24));
  pbVar5 = &DAT_0164ea34;
  pbVar2 = local_20;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a7e421:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a7e426;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a7e421;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a7e426:
  if (iVar3 == 0) {
    pbVar5 = &DAT_01641bd4;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e457:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e45c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e457;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e45c:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar2 = local_40;
    pbVar5 = &DAT_01642b58;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e490:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e495;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e490;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e495:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01642b50;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e4c6:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e4cb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e4c6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e4cb:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663ecc;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e500:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e505;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e500;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e505:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663ec4;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e536:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e53b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e536;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e53b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663ebc;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e570:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e575;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e570;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e575:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663eb4;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e5a6:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e5ab;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e5a6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e5ab:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01646730;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e5e0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e5e5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e5e0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e5e5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663eac;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e616:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e61b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e616;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e61b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01646728;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e650:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e655;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e650;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e655:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_016457f4;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e686:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e68b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e686;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e68b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01645740;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e6c0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e6c5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e6c0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e6c5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_016467d0;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e6f6:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e6fb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e6f6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e6fb:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_016467dc;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e730:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e735;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e730;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e735:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663ea4;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e766:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e76b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e766;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e76b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e9c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e7a0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e7a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e7a0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e7a5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e94;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e7d6:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e7db;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e7d6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e7db:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e8c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e810:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e815;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e810;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e815:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e84;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e846:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e84b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e846;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e84b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e7c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e880:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e885;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e880;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e885:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e74;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e8b6:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e8bb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e8b6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e8bb:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e6c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e8f0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e8f5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e8f0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e8f5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e64;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e926:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e92b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e926;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e92b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e5c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e960:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e965;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e960;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e965:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e54;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e996:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e99b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e996;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e99b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01641c14;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7e9d0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7e9d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7e9d0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7e9d5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01641c0c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ea06:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ea0b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ea06;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ea0b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01641c04;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ea40:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ea45;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ea40;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ea45:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01645708;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ea76:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ea7b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ea76;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ea7b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e4c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7eab0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7eab5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7eab0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7eab5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e44;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) goto LAB_00a7eae6;
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7eae6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
  }
  else {
    pbVar5 = &DAT_0164ea38;
    pbVar2 = local_20;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7eb34:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7eb39;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7eb34;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7eb39:
    if (iVar3 != 0) {
      pbVar5 = &DAT_0164ea3c;
      pbVar2 = local_20;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7ef94:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7ef99;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7ef94;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7ef99:
      if (iVar3 != 0) goto LAB_00a7eaf3;
      pbVar5 = &DAT_01641bdc;
      pbVar2 = local_40;
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00a7efd0:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00a7efd5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00a7efd0;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7efd5:
      if (iVar3 != 0) {
        pbVar5 = &DAT_01641bd4;
        pbVar2 = local_40;
        do {
          bVar1 = *pbVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00a7f006:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00a7f00b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00a7f006;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00a7f00b:
        if (iVar3 != 0) {
          pbVar5 = &DAT_01642b58;
          pbVar2 = local_40;
          do {
            bVar1 = *pbVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00a7f040:
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00a7f045;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00a7f040;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00a7f045:
          if (iVar3 != 0) {
            pbVar5 = &DAT_01642b50;
            pbVar2 = local_40;
            do {
              bVar1 = *pbVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00a7f076:
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00a7f07b;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00a7f076;
              pbVar2 = pbVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00a7f07b:
            if (iVar3 != 0) {
              pbVar5 = &DAT_01663ecc;
              pbVar2 = local_40;
              do {
                bVar1 = *pbVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00a7f0b0:
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00a7f0b5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00a7f0b0;
                pbVar2 = pbVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00a7f0b5:
              if (iVar3 != 0) {
                pbVar5 = &DAT_01663ec4;
                pbVar2 = local_40;
                do {
                  bVar1 = *pbVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00a7f0e6:
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00a7f0eb;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00a7f0e6;
                  pbVar2 = pbVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00a7f0eb:
                if (iVar3 != 0) {
                  pbVar5 = &DAT_01663ebc;
                  pbVar2 = local_40;
                  do {
                    bVar1 = *pbVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00a7f120:
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00a7f125;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00a7f120;
                    pbVar2 = pbVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00a7f125:
                  if (iVar3 != 0) {
                    pbVar5 = &DAT_01663e2c;
                    pbVar2 = local_40;
                    do {
                      bVar1 = *pbVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00a7f156:
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00a7f15b;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00a7f156;
                      pbVar2 = pbVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00a7f15b:
                    if (iVar3 != 0) {
                      pbVar5 = &DAT_016457ec;
                      pbVar2 = local_40;
                      do {
                        bVar1 = *pbVar2;
                        bVar6 = bVar1 < *pbVar5;
                        if (bVar1 != *pbVar5) {
LAB_00a7f190:
                          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                          goto LAB_00a7f195;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar2[1];
                        bVar6 = bVar1 < pbVar5[1];
                        if (bVar1 != pbVar5[1]) goto LAB_00a7f190;
                        pbVar2 = pbVar2 + 2;
                        pbVar5 = pbVar5 + 2;
                      } while (bVar1 != 0);
                      iVar3 = 0;
LAB_00a7f195:
                      if (iVar3 != 0) {
                        pbVar5 = &DAT_01646730;
                        pbVar2 = local_40;
                        do {
                          bVar1 = *pbVar2;
                          bVar6 = bVar1 < *pbVar5;
                          if (bVar1 != *pbVar5) {
LAB_00a7f1c6:
                            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                            goto LAB_00a7f1cb;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar2[1];
                          bVar6 = bVar1 < pbVar5[1];
                          if (bVar1 != pbVar5[1]) goto LAB_00a7f1c6;
                          pbVar2 = pbVar2 + 2;
                          pbVar5 = pbVar5 + 2;
                        } while (bVar1 != 0);
                        iVar3 = 0;
LAB_00a7f1cb:
                        if (iVar3 != 0) {
                          pbVar5 = &DAT_01641c14;
                          pbVar2 = local_40;
                          do {
                            bVar1 = *pbVar2;
                            bVar6 = bVar1 < *pbVar5;
                            if (bVar1 != *pbVar5) {
LAB_00a7f1f8:
                              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                              goto LAB_00a7f1fd;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar2[1];
                            bVar6 = bVar1 < pbVar5[1];
                            if (bVar1 != pbVar5[1]) goto LAB_00a7f1f8;
                            pbVar2 = pbVar2 + 2;
                            pbVar5 = pbVar5 + 2;
                          } while (bVar1 != 0);
                          iVar3 = 0;
LAB_00a7f1fd:
                          if (iVar3 != 0) {
                            pbVar5 = &DAT_01641c0c;
                            pbVar2 = local_40;
                            do {
                              bVar1 = *pbVar2;
                              bVar6 = bVar1 < *pbVar5;
                              if (bVar1 != *pbVar5) {
LAB_00a7f230:
                                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                                goto LAB_00a7f235;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar2[1];
                              bVar6 = bVar1 < pbVar5[1];
                              if (bVar1 != pbVar5[1]) goto LAB_00a7f230;
                              pbVar2 = pbVar2 + 2;
                              pbVar5 = pbVar5 + 2;
                            } while (bVar1 != 0);
                            iVar3 = 0;
LAB_00a7f235:
                            if (iVar3 != 0) goto LAB_00a7eaf3;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_00a7f23d;
    }
    pbVar5 = &DAT_01641bdc;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7eb70:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7eb75;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7eb70;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7eb75:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01641bcc;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7eba6:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ebab;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7eba6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ebab:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e3c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ebe0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ebe5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ebe0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ebe5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e34;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ec16:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ec1b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ec16;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ec1b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01641bd4;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ec50:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ec55;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ec50;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ec55:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01642b58;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ec86:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ec8b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ec86;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ec8b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01642b50;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ecc0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ecc5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ecc0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ecc5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663ecc;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ecf6:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ecfb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ecf6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ecfb:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663ec4;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ed30:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ed35;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ed30;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ed35:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663ebc;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ed66:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ed6b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ed66;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ed6b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e2c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7eda0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7eda5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7eda0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7eda5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663eb4;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7edd6:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7eddb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7edd6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7eddb:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e24;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ee10:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ee15;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ee10;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ee15:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e1c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ee46:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ee4b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ee46;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ee4b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_016457ec;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ee80:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ee85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ee80;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ee85:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e14;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7eeb6:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7eebb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7eeb6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7eebb:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01641c14;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7eef0:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7eef5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7eef0;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7eef5:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e4c;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a7ef26:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00a7ef2b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7ef26;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a7ef2b:
    if (iVar3 == 0) goto LAB_00a7f23d;
    pbVar5 = &DAT_01663e44;
    pbVar2 = local_40;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) goto LAB_00a7eae6;
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a7eae6;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
  }
LAB_00a7eaeb:
  if (iVar3 == 0) {
LAB_00a7f23d:
    for (piVar4 = param_1[1].OwningThread;
        piVar4 != (int *)((int)param_1[1].OwningThread + (int)param_1[1].LockSemaphore * 4);
        piVar4 = piVar4 + 1) {
      if (*piVar4 == param_2) goto LAB_00a7f276;
    }
    (**(code **)(param_1[1].RecursionCount + 8))(&param_2);
    FUN_00d89e60(0xd);
LAB_00a7f276:
    if (param_1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      return;
    }
    LeaveCriticalSection(param_1);
    return;
  }
LAB_00a7eaf3:
  if (param_1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    return;
  }
  LeaveCriticalSection(param_1);
  return;
LAB_00a7eae6:
  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  goto LAB_00a7eaeb;
}

// 00A7F290  FUN_00a7f290  size=27  [run]
void __thiscall FUN_00a7f290(undefined4 *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x2c);
    return;
  }
  *param_1 = 0;
  return;
}

// 00A7F2B0  FUN_00a7f2b0  size=39  [run]
void FUN_00a7f2b0(void)

{
  if (DAT_01be9a70 != 0) {
    FUN_00dd4940(DAT_01be9a70);
    DAT_01be9a70 = 0;
    FUN_00dd7270();
    return;
  }
  return;
}

// 00A7F2E0  FUN_00a7f2e0  size=69  [run]
void __fastcall FUN_00a7f2e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 0x50);
  for (piVar2 = *(int **)(param_1 + 0x4c); piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
    if (*(int *)(*piVar2 + 0x54) != 0) {
      *(undefined4 *)(*piVar2 + 0x50) = 1;
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}

// 00A7F330  FUN_00a7f330  size=113  [run]
void __fastcall FUN_00a7f330(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 0x50);
  for (piVar2 = *(int **)(param_1 + 0x4c); piVar2 != piVar1; piVar2 = (int *)piVar2[2]) {
    iVar3 = *piVar2;
    if ((((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + 0x3c), iVar4 != 0)) &&
        (*(int *)(iVar4 + 0x330) != 0)) &&
       ((0 < *(int *)(*(int *)(iVar4 + 0x330) + 0xcc) && (*(int *)(iVar4 + 0x360) == 0)))) {
      *(undefined4 *)(iVar3 + 0x50) = 1;
    }
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}

