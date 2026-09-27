// src/unsorted/unit_00E9FC90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E9FC90..00EA11E0, 32 functions

#include "mgrr.h"

// 00E9FC90  FUN_00e9fc90  size=36  [run]
void __fastcall FUN_00e9fc90(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fbd0();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E9FCC0  FUN_00e9fcc0  size=42  [run]
void __fastcall FUN_00e9fcc0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fbd0();
                    /* WARNING: Could not recover jumptable at 0x00e9fce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E9FCF0  FUN_00e9fcf0  size=21  [run]
undefined4 * __fastcall FUN_00e9fcf0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E9FD10  FUN_00e9fd10  size=36  [run]
void __fastcall FUN_00e9fd10(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fbd0();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E9FD40  FUN_00e9fd40  size=41  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e9fd40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_01dda948 = 0;
  Hw::cDvd(param_1,param_2,param_3,&PTR_s_sound_stream_018d15c0,2);
  return;
}

// 00E9FD70  thunk_FUN_00debcd0  size=5  [run]
void thunk_FUN_00debcd0(void)

{
  FUN_00debb00();
  if (DAT_01dd4110 != 0) {
    FUN_0129990c();
  }
  FUN_01299f20();
  return;
}

// 00E9FD80  FUN_00e9fd80  size=8  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e9fd80(void)

{
  _DAT_01dda948 = _DAT_01dda948 | 1;
  return;
}

// 00E9FD90  FUN_00e9fd90  size=8  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e9fd90(void)

{
  _DAT_01dda948 = _DAT_01dda948 & 0xfffffffe;
  return;
}

// 00E9FDA0  FUN_00e9fda0  size=31  [run]
void FUN_00e9fda0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00dea9c0(param_1,param_2,param_3,&PTR_s_sound_stream_018d15c0,2);
  return;
}

// 00E9FE30  FUN_00e9fe30  size=18  [run]
int FUN_00e9fe30(void)

{
  if (DAT_01beb8c0 != 0) {
    return DAT_01beb8c0 + 0xb0;
  }
  return 0;
}

// 00E9FE50  FUN_00e9fe50  size=6  [run]
undefined4 FUN_00e9fe50(void)

{
  return DAT_01beb8c0;
}

// 00E9FE60  FUN_00e9fe60  size=11  [run]
int FUN_00e9fe60(void)

{
  return DAT_01beb8c0 + 0x2d0;
}

// 00E9FE70  FUN_00e9fe70  size=23  [run]
int FUN_00e9fe70(void)

{
  if (DAT_01beb8c0 != 0) {
    return DAT_01beb8c0 + 0x1b0;
  }
  return 0x100;
}

// 00E9FE90  FUN_00e9fe90  size=13  [run]
void FUN_00e9fe90(void)

{
  FUN_00da3980(0);
  return;
}

// 00E9FEB0  FUN_00e9feb0  size=23  [run]
int FUN_00e9feb0(void)

{
  if (DAT_01beb8c0 != 0) {
    return DAT_01beb8c0 + 0x1c0;
  }
  return 0x110;
}

// 00E9FED0  FUN_00e9fed0  size=23  [run]
int FUN_00e9fed0(void)

{
  if (DAT_01beb8c0 != 0) {
    return DAT_01beb8c0 + 0x1d0;
  }
  return 0x120;
}

// 00E9FEF0  FUN_00e9fef0  size=23  [run]
int FUN_00e9fef0(void)

{
  if (DAT_01beb8c0 != 0) {
    return DAT_01beb8c0 + 0x1e0;
  }
  return 0x130;
}

// 00E9FF10  FUN_00e9ff10  size=18  [run]
int FUN_00e9ff10(void)

{
  if (DAT_01beb8c0 != 0) {
    return DAT_01beb8c0 + 0xb0;
  }
  return 0;
}

// 00E9FF30  FUN_00e9ff30  size=21  [run]
int FUN_00e9ff30(void)

{
  if (DAT_01beb8c0 != 0) {
    return DAT_01beb8c0 + 0x130;
  }
  return 0x80;
}

// 00E9FF50  FUN_00e9ff50  size=23  [run]
int FUN_00e9ff50(void)

{
  if (DAT_01beb8c0 != 0) {
    return DAT_01beb8c0 + 0xf0;
  }
  return 0x40;
}

// 00EA0000  FUN_00ea0000  size=47  [run]
void FUN_00ea0000(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_01beb8c0 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_01beb8c0 + 0xb0;
  }
  FUN_00de5b60(param_1,param_2,iVar1,0xbf800000);
  return;
}

// 00EA0030  FUN_00ea0030  size=52  [run]
void FUN_00ea0030(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01beb8c0 != 0) {
    FUN_00de4dc0(param_1,param_2,DAT_01beb8c0 + 0xb0);
    return;
  }
  FUN_00de4dc0(param_1,param_2,0);
  return;
}

// 00EA0070  FUN_00ea0070  size=7  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00ea0070(void)

{
  return (float10)_DAT_01bea264;
}

// 00EA0080  FUN_00ea0080  size=20  [run]
void __fastcall FUN_00ea0080(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_00df8230();
    *(undefined4 *)(*param_1 + 8) = uVar1;
  }
  return;
}

// 00EA0200  FUN_00ea0200  size=138  [run]
void __fastcall FUN_00ea0200(int *param_1)

{
  int iVar1;
  float10 fVar2;
  int *piVar3;
  
  piVar3 = param_1;
  FUN_00f963b0(0x44160000,0x437a0000,0x41300000,0xffffffff,&DAT_016d2210);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00df8270(*(undefined4 *)(iVar1 + 8),0,*(undefined4 *)(iVar1 + 0xc),0,piVar3
                                 );
    FUN_00f963b0(0x44188000,0x43828000,0x41300000,0xffffffff,&DAT_016d21fc,(double)(float)fVar2);
  }
  return;
}

// 00EA0290  FUN_00ea0290  size=711  [run]
void __fastcall FUN_00ea0290(int *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  uint local_18;
  uint local_14;
  
  FUN_00f963b0(0x44160000,0x438c0000,0x41300000,0xffffffff,&DAT_016d22e0);
  iVar2 = *param_1;
  if ((iVar2 != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
    pbVar3 = *(byte **)param_1[1];
    puVar13 = (undefined4 *)(iVar2 + 0x1c);
    uVar11 = 0;
    iVar14 = 0;
    iVar12 = 0;
    local_14 = 0xffffffff;
    local_18 = 0;
    if (puVar13 != *(undefined4 **)(iVar2 + 0x10)) {
      do {
        if (puVar13[5] == 0) {
          pbVar10 = (byte *)*puVar13;
          pbVar7 = pbVar3;
          if (pbVar3 != pbVar10) {
            do {
              bVar1 = *pbVar7;
              bVar15 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_00ea0342:
                iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_00ea0347;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar15 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_00ea0342;
              pbVar10 = pbVar10 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_00ea0347:
            if (iVar8 != 0) goto LAB_00ea0372;
          }
          uVar4 = puVar13[2];
          uVar5 = puVar13[1];
          uVar9 = uVar4 - uVar5;
          iVar14 = iVar14 + 1;
          iVar12 = iVar12 + uVar9;
          if (uVar11 < uVar9) {
            uVar11 = uVar9;
          }
          if (uVar5 < local_14) {
            local_14 = uVar5;
          }
          if (local_18 < uVar4) {
            local_18 = uVar4;
          }
        }
LAB_00ea0372:
        puVar13 = (undefined4 *)0x0;
      } while (*(undefined4 **)(iVar2 + 0x10) != (undefined4 *)0x0);
    }
    fVar16 = (float10)FUN_00df8270(*(undefined4 *)(param_1[1] + 4),0,*(undefined4 *)(param_1[1] + 8)
                                   ,0);
    fVar17 = (float10)FUN_00df8270(0,0,iVar12,0);
    fVar18 = (float10)FUN_00df8270(0,0,uVar11,0);
    fVar19 = (float10)FUN_00df8270(local_14,0,local_18,0);
    FUN_00f963b0(0x44188000,0x43918000,0x41300000,0xffffffff,&DAT_016d22cc,pbVar3);
    FUN_00f963b0(0x44188000,0x43970000,0x41300000,0xffffffff,&DAT_016d22b4,iVar14);
    FUN_00f963b0(0x44188000,0x439c8000,0x41300000,0xffffffff,&DAT_016d2298,(double)(float)fVar16);
    FUN_00f963b0(0x44188000,0x43a20000,0x41300000,0xffffffff,&DAT_016d227c,(double)(float)fVar17);
    fVar6 = (float)iVar14;
    if (iVar14 < 0) {
      fVar6 = fVar6 + 4.2949673e+09;
    }
    FUN_00f963b0(0x44188000,0x43a78000,0x41300000,0xffffffff,&DAT_016d2260,
                 (double)((float)fVar17 / fVar6));
    FUN_00f963b0(0x44188000,0x43ad0000,0x41300000,0xffffffff,&DAT_016d2240,(double)(float)fVar18);
    FUN_00f963b0(0x44188000,0x43b28000,0x41300000,0xffffffff,&DAT_016d2224,(double)(float)fVar19);
  }
  return;
}

// 00EA0720  FUN_00ea0720  size=596  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ea0720(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  rsize_t _MaxCount;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  double local_4c;
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_5c;
  fVar1 = (float)*(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_54 = (float)(param_2[1] - *(int *)(param_1 + 0x18));
  fVar2 = (float)(int)local_54;
  if ((int)local_54 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_5c = (float)(param_2[2] - *(int *)(param_1 + 0x18));
  local_58 = *(float *)(param_1 + 0xc) + (fVar2 * *(float *)(param_1 + 0x14)) / fVar1;
  fVar2 = (float)(int)local_5c;
  if ((int)local_5c < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_50 = (fVar2 * *(float *)(param_1 + 0x14)) / fVar1 + *(float *)(param_1 + 0xc);
  if ((local_58 <= 1200.0) && (70.0 <= local_50)) {
    iVar3 = param_2[4] * 0x20 + 0x36;
    local_54 = (float)iVar3;
    if (iVar3 < 0) {
      local_54 = local_54 + 4.2949673e+09;
    }
    local_5c = local_54 + 24.0;
    if (local_58 < 70.0) {
      local_58 = 70.0;
    }
    if (1200.0 < local_50) {
      local_50 = 1200.0;
    }
    local_4c = (double)(local_50 - local_58);
    if (1.0 <= local_50 - local_58) {
      FUN_00f95e30(local_58,local_54,local_50,local_5c,param_2[3]);
    }
    else {
      FUN_00f95dd0(local_58,local_54,local_58,local_5c);
    }
    _MaxCount = FUN_00fdbc60();
    if (0 < (int)_MaxCount) {
      if (0x3f < (int)_MaxCount) {
        _MaxCount = 0x3f;
      }
      _strncpy_s(local_44,0x40,(char *)*param_2,_MaxCount);
      local_44[_MaxCount] = '\0';
      FUN_00f963c0(local_58,local_54,0x41100000,0x41300000,0xffffffff,local_44);
    }
    if ((((local_58 < _DAT_01b7b7a8 != (local_58 == _DAT_01b7b7a8)) && (_DAT_01b7b7a8 <= local_50))
        && (local_54 < _DAT_01b7b7ac != (local_54 == _DAT_01b7b7ac))) &&
       ((_DAT_01b7b7ac <= local_5c && (((byte)DAT_01b7b79c & 1) != 0)))) {
      *(undefined4 **)(DAT_01dda94c + 4) = param_2;
      __security_check_cookie(local_4 ^ (uint)&local_5c);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_5c);
  return;
}

// 00EA0A50  FUN_00ea0a50  size=1  [run]
void FUN_00ea0a50(void)

{
  return;
}

// 00EA0A60  FUN_00ea0a60  size=1  [run]
void FUN_00ea0a60(void)

{
  return;
}

// 00EA0AB0  FUN_00ea0ab0  size=16  [run]
void FUN_00ea0ab0(void)

{
  FUN_00ea0200();
  FUN_00ea0290();
  return;
}

// 00EA10E0  FUN_00ea10e0  size=251  [run]
uint FUN_00ea10e0(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0xffffffff;
  if (7 < param_2) {
    uVar2 = param_2 >> 3;
    do {
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_016d23b8 + (((int)*param_1 ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_016d23b8 + (((int)param_1[1] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_016d23b8 + (((int)param_1[2] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_016d23b8 + (((int)param_1[3] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_016d23b8 + (((int)param_1[4] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_016d23b8 + (((int)param_1[5] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_016d23b8 + (((int)param_1[6] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_016d23b8 + (((int)param_1[7] ^ uVar1) & 0xff) * 4);
      param_1 = param_1 + 8;
      param_2 = param_2 - 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_016d23b8 + (((int)*param_1 ^ uVar1) & 0xff) * 4);
    param_1 = param_1 + 1;
  }
  return ~uVar1;
}

// 00EA11E0  FUN_00ea11e0  size=40  [run]
undefined4 FUN_00ea11e0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = FUN_00ea10e0(param_1,(int)pcVar2 - (int)(param_1 + 1));
    return uVar3;
  }
  return 0;
}

