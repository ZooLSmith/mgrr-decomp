// src/unsorted/unit_00CDEBB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDEBB0..00CE01F0, 13 functions

#include "mgrr.h"

// 00CDEBB0  FUN_00cdebb0  size=307  [run]
void __fastcall FUN_00cdebb0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_00c1cf50();
  FUN_00c54680();
  FUN_00986fa0();
  FUN_00985790();
  FUN_00984370();
  FUN_00988200();
  FUN_00987330();
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x20),0);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x34),0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x48),0);
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}

// 00CDED00  FUN_00cded00  size=124  [run]
undefined4 __thiscall FUN_00cded00(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 < *(uint *)(param_1 + 0x80)) &&
     (iVar3 = param_2 * 0x400 + *(int *)(param_1 + 0x7c), iVar3 != 0)) {
    iVar2 = FUN_00cc8370(param_3);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar3 + 0x3d8) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar3 + 0x3dc) = *(undefined4 *)(iVar2 + 8);
    *(undefined1 *)(iVar3 + 0x3ec) = *(undefined1 *)(iVar2 + 0xc);
    *(undefined1 *)(iVar3 + 0x3ed) = 0;
    *(undefined4 *)(iVar3 + 0x3d4) = *(undefined4 *)(iVar2 + 4);
    uVar1 = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar3 + 0x3fc) = param_3;
    *(undefined4 *)(iVar3 + 0x3d0) = uVar1;
    *(undefined1 *)(iVar3 + 0x3ee) = 1;
    return 1;
  }
  return 0;
}

// 00CDED80  FUN_00cded80  size=149  [run]
undefined4 __thiscall FUN_00cded80(int param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0x80) <= param_2) ||
     (iVar3 = param_2 * 0x400 + *(int *)(param_1 + 0x7c), iVar3 == 0)) {
    return 0;
  }
  if ((param_4 == 0) && (*(int *)(iVar3 + 0x3fc) == param_3)) {
    return 1;
  }
  iVar2 = FUN_00cc8370(param_3);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar3 + 0x3d8) = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(iVar3 + 0x3dc) = *(undefined4 *)(iVar2 + 8);
  *(undefined1 *)(iVar3 + 0x3ec) = *(undefined1 *)(iVar2 + 0xc);
  *(undefined1 *)(iVar3 + 0x3ed) = 0;
  *(undefined4 *)(iVar3 + 0x3d4) = *(undefined4 *)(iVar2 + 4);
  uVar1 = *(undefined4 *)(iVar2 + 4);
  *(int *)(iVar3 + 0x3fc) = param_3;
  *(undefined4 *)(iVar3 + 0x3d0) = uVar1;
  *(undefined1 *)(iVar3 + 0x3ee) = 1;
  return 1;
}

// 00CDEE20  FUN_00cdee20  size=149  [run]
undefined4 __thiscall FUN_00cdee20(int param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 0x80) <= param_2) ||
     (iVar3 = param_2 * 0x400 + *(int *)(param_1 + 0x7c), iVar3 == 0)) {
    return 0;
  }
  if ((param_4 == 0) && (*(int *)(iVar3 + 0x3fc) == param_3)) {
    return 1;
  }
  iVar2 = FUN_00cc8370(param_3);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar3 + 0x3d8) = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(iVar3 + 0x3dc) = *(undefined4 *)(iVar2 + 8);
  *(undefined1 *)(iVar3 + 0x3ec) = *(undefined1 *)(iVar2 + 0xc);
  *(undefined1 *)(iVar3 + 0x3ed) = 0;
  *(undefined4 *)(iVar3 + 0x3d4) = *(undefined4 *)(iVar2 + 8);
  uVar1 = *(undefined4 *)(iVar2 + 8);
  *(int *)(iVar3 + 0x3fc) = param_3;
  *(undefined4 *)(iVar3 + 0x3d0) = uVar1;
  *(undefined1 *)(iVar3 + 0x3ee) = 1;
  return 1;
}

// 00CDEEC0  FUN_00cdeec0  size=91  [run]
void __thiscall FUN_00cdeec0(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (((*(int *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0x7c) != 0)) &&
     (iVar2 = FUN_00cc8370(param_2), iVar2 != 0)) {
    iVar4 = 0;
    do {
      bVar1 = *(byte *)(iVar2 + 0x10 + iVar4);
      if (bVar1 != 0xff) {
        if (bVar1 - 1 < 99) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x86 + (uint)bVar1 * 2);
        }
        else {
          uVar3 = 0xffffffff;
        }
        FUN_00cded00(uVar3,param_2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x30);
  }
  return;
}

// 00CDEF90  FUN_00cdef90  size=108  [run]
void __thiscall FUN_00cdef90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0x7c) != 0)) &&
     (iVar1 = FUN_00cc8370(param_2), iVar1 != 0)) {
    iVar3 = 0;
    do {
      uVar2 = (uint)*(byte *)(iVar1 + 0x10 + iVar3);
      if (uVar2 != 0xff) {
        if (uVar2 - 1 < 99) {
          uVar2 = (uint)*(ushort *)(param_1 + 0x86 + uVar2 * 2);
        }
        else {
          uVar2 = 0xffffffff;
        }
        FUN_00cdee20(uVar2,param_2,param_3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x30);
  }
  return;
}

// 00CDF180  FUN_00cdf180  size=178  [run]
undefined4 __thiscall FUN_00cdf180(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_4;
  
  uVar4 = 0;
  local_4 = 1;
  if (*(int *)(param_1 + 0x80) == 0) {
    return 1;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x80) == 0) goto LAB_00cdf205;
  do {
    iVar5 = *(int *)(param_1 + 0x7c) + iVar3;
    if (iVar5 == 0) {
LAB_00cdf205:
      local_4 = 0;
    }
    else {
      iVar2 = FUN_00cc8370(param_2);
      if (iVar2 == 0) goto LAB_00cdf205;
      *(undefined4 *)(iVar5 + 0x3d8) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar5 + 0x3dc) = *(undefined4 *)(iVar2 + 8);
      *(undefined1 *)(iVar5 + 0x3ec) = *(undefined1 *)(iVar2 + 0xc);
      *(undefined1 *)(iVar5 + 0x3ed) = 0;
      *(undefined4 *)(iVar5 + 0x3d4) = *(undefined4 *)(iVar2 + 4);
      uVar1 = *(undefined4 *)(iVar2 + 4);
      *(undefined1 *)(iVar5 + 0x3ee) = 1;
      *(undefined4 *)(iVar5 + 0x3d0) = uVar1;
      *(undefined4 *)(iVar5 + 0x3fc) = param_2;
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x400;
    if (*(uint *)(param_1 + 0x80) <= uVar4) {
      return local_4;
    }
  } while( true );
}

// 00CDF240  FUN_00cdf240  size=435  [run]
void __thiscall FUN_00cdf240(int param_1,undefined4 param_2,undefined1 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  if (((*(int *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0x7c) != 0)) &&
     (iVar2 = FUN_00cc8370(param_2), iVar2 != 0)) {
    iVar5 = 8;
    pbVar4 = (byte *)(iVar2 + 0x11);
    do {
      bVar1 = pbVar4[-1];
      if (bVar1 != 0xff) {
        if (bVar1 - 1 < 99) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x86 + (uint)bVar1 * 2);
        }
        else {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)(param_1 + 0x80)) &&
           (iVar2 = uVar3 * 0x400 + *(int *)(param_1 + 0x7c), iVar2 != 0)) {
          *(undefined1 *)(iVar2 + 0x3ed) = param_3;
          *(undefined1 *)(iVar2 + 0x3ee) = 1;
        }
      }
      bVar1 = *pbVar4;
      if (bVar1 != 0xff) {
        if (bVar1 - 1 < 99) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x86 + (uint)bVar1 * 2);
        }
        else {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)(param_1 + 0x80)) &&
           (iVar2 = uVar3 * 0x400 + *(int *)(param_1 + 0x7c), iVar2 != 0)) {
          *(undefined1 *)(iVar2 + 0x3ed) = param_3;
          *(undefined1 *)(iVar2 + 0x3ee) = 1;
        }
      }
      bVar1 = pbVar4[1];
      if (bVar1 != 0xff) {
        if (bVar1 - 1 < 99) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x86 + (uint)bVar1 * 2);
        }
        else {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)(param_1 + 0x80)) &&
           (iVar2 = uVar3 * 0x400 + *(int *)(param_1 + 0x7c), iVar2 != 0)) {
          *(undefined1 *)(iVar2 + 0x3ed) = param_3;
          *(undefined1 *)(iVar2 + 0x3ee) = 1;
        }
      }
      bVar1 = pbVar4[2];
      if (bVar1 != 0xff) {
        if (bVar1 - 1 < 99) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x86 + (uint)bVar1 * 2);
        }
        else {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)(param_1 + 0x80)) &&
           (iVar2 = uVar3 * 0x400 + *(int *)(param_1 + 0x7c), iVar2 != 0)) {
          *(undefined1 *)(iVar2 + 0x3ed) = param_3;
          *(undefined1 *)(iVar2 + 0x3ee) = 1;
        }
      }
      bVar1 = pbVar4[3];
      if (bVar1 != 0xff) {
        if (bVar1 - 1 < 99) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x86 + (uint)bVar1 * 2);
        }
        else {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)(param_1 + 0x80)) &&
           (iVar2 = uVar3 * 0x400 + *(int *)(param_1 + 0x7c), iVar2 != 0)) {
          *(undefined1 *)(iVar2 + 0x3ed) = param_3;
          *(undefined1 *)(iVar2 + 0x3ee) = 1;
        }
      }
      bVar1 = pbVar4[4];
      if (bVar1 != 0xff) {
        if (bVar1 - 1 < 99) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x86 + (uint)bVar1 * 2);
        }
        else {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)(param_1 + 0x80)) &&
           (iVar2 = uVar3 * 0x400 + *(int *)(param_1 + 0x7c), iVar2 != 0)) {
          *(undefined1 *)(iVar2 + 0x3ed) = param_3;
          *(undefined1 *)(iVar2 + 0x3ee) = 1;
        }
      }
      pbVar4 = pbVar4 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

// 00CDF400  FUN_00cdf400  size=132  [run]
undefined4 __thiscall FUN_00cdf400(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x78) == 0) || (iVar2 = *(int *)(param_1 + 0x7c), iVar2 == 0)) {
    return 1;
  }
  iVar3 = FUN_00cc8370(param_2);
  if (iVar3 != 0) {
    iVar6 = 0;
    do {
      bVar1 = *(byte *)(iVar3 + 0x10 + iVar6);
      if (bVar1 != 0xff) {
        if (bVar1 - 1 < 99) {
          uVar4 = (uint)*(ushort *)(param_1 + 0x86 + (uint)bVar1 * 2);
        }
        else {
          uVar4 = 0xffffffff;
        }
        if (((uVar4 < *(uint *)(param_1 + 0x80)) && (iVar5 = uVar4 * 0x400 + iVar2, iVar5 != 0)) &&
           (*(char *)(iVar5 + 0x3ed) == '\0')) {
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x30);
  }
  return 1;
}

// 00CDF520  FUN_00cdf520  size=430  [run]
void __thiscall FUN_00cdf520(int param_1,undefined4 *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(char *)((int)param_2 + 0x3ee) != '\0') {
    FUN_00cc83e0(param_2,param_3,param_2[0xf4],*(undefined1 *)((int)param_2 + 0x3ef));
  }
  puVar5 = param_2;
  puVar6 = param_2 + 0x14;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00cc8070(param_2 + 0x14,param_2);
  if ((int *)param_2[0xfc] != (int *)0x0) {
    (**(code **)(*(int *)param_2[0xfc] + 0x10))
              (*(undefined4 *)(param_1 + 0x78),param_3,param_2[0xf4],
               *(undefined1 *)((int)param_2 + 0x3ef));
  }
  if ((0.0 < param_4) && ((int *)param_2[0xfd] != (int *)0x0)) {
    (**(code **)(*(int *)param_2[0xfd] + 0x10))(param_2[0xf6],param_2[0xf7]);
    (**(code **)(*(int *)param_2[0xfd] + 0x14))(*(undefined4 *)(param_1 + 0x84));
  }
  fVar1 = (float)param_2[0xf4];
  if (*(char *)((int)param_2 + 0x3ed) == '\0') {
    fVar2 = (float)param_2[0xf4];
    param_2[0xf4] = fVar2 + param_4;
    if ((fVar2 + param_4 < (float)param_2[0xf6]) && (0.0 <= (float)param_2[0xf6])) {
      if (*(char *)(param_2 + 0xfb) == '\0') {
        uVar3 = param_2[0xf6];
        *(undefined1 *)((int)param_2 + 0x3ed) = 1;
      }
      else {
        uVar3 = param_2[0xf7];
      }
      param_2[0xf4] = uVar3;
    }
    if (((float)param_2[0xf7] < (float)param_2[0xf4]) && (0.0 <= (float)param_2[0xf7])) {
      if (*(char *)(param_2 + 0xfb) == '\0') {
        *(undefined1 *)((int)param_2 + 0x3ed) = 1;
        param_2[0xf4] = param_2[0xf7];
      }
      else {
        param_2[0xf4] = param_2[0xf6];
      }
    }
  }
  param_2[0xf5] = fVar1;
  if ((float)param_2[0xf4] == fVar1) {
    *(undefined1 *)((int)param_2 + 0x3ee) = 0;
    return;
  }
  *(undefined1 *)((int)param_2 + 0x3ee) = 1;
  return;
}

// 00CDF6D0  FUN_00cdf6d0  size=2558  [run]
void FUN_00cdf6d0(int param_1,float *param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 unaff_ESI;
  float *pfVar6;
  undefined4 unaff_EDI;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 *puVar16;
  float fVar17;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined1 auStack_18c [8];
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [8];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4 [4];
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [112];
  
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x33c);
  *(undefined4 *)(param_1 + 0x3cc) = 0x3f800000;
  local_d8 = 0.0;
  local_dc = 0.0;
  local_e0 = 0.0;
  local_e4 = 0.0;
  local_ec = 0.0;
  local_f0 = 0.0;
  local_f4 = 0.0;
  local_f8 = 0;
  local_100 = 0;
  local_104 = 0;
  local_108 = 0;
  local_10c = 0;
  local_d4[0] = 1.0;
  local_e8 = 1.0;
  local_fc = 0x3f800000;
  local_110 = 0x3f800000;
  if (*(float *)(param_1 + 0x388) != 0.0) {
    D3DXMatrixRotationZ(&local_160,*(undefined4 *)(param_1 + 0x388));
    D3DXMatrixMultiply(auStack_118,&uStack_168,auStack_118);
  }
  if (*(float *)(param_1 + 900) != 0.0) {
    D3DXMatrixRotationY(&local_160,*(undefined4 *)(param_1 + 900));
    D3DXMatrixMultiply(auStack_118,&uStack_168,auStack_118);
  }
  if (*(float *)(param_1 + 0x380) != 0.0) {
    D3DXMatrixRotationX(&local_160,*(undefined4 *)(param_1 + 0x380));
    D3DXMatrixMultiply(auStack_118,&uStack_168,auStack_118);
  }
  local_e0 = *(float *)(param_1 + 0x360);
  local_dc = *(float *)(param_1 + 0x364);
  local_d8 = *(float *)(param_1 + 0x368);
  FUN_00ddd140(&local_160,param_1 + 0x370);
  puVar16 = &local_110;
  D3DXMatrixMultiply(puVar16,&local_160);
  local_dc = *(float *)(param_1 + 0x390);
  puVar1 = (undefined4 *)(param_1 + 0x2a0);
  local_d8 = *(float *)(param_1 + 0x394);
  local_d4[0] = *(float *)(param_1 + 0x398);
  local_d4[1] = *(float *)(param_1 + 0x39c);
  local_d4[2] = *(float *)(param_1 + 0x3a0);
  local_d4[3] = *(float *)(param_1 + 0x3a4);
  uStack_c4 = *(undefined4 *)(param_1 + 0x3a8);
  uStack_c0 = *(undefined4 *)(param_1 + 0x3ac);
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b4) = 0x3f800000;
  *puVar1 = 0x3f800000;
  if (*(float *)(param_1 + 0x78) != 0.0) {
    D3DXMatrixRotationZ(&uStack_16c,*(undefined4 *)(param_1 + 0x78));
    D3DXMatrixMultiply(puVar1,&uStack_174,puVar1);
  }
  if (*(float *)(param_1 + 0x74) != 0.0) {
    D3DXMatrixRotationY(&uStack_16c,*(undefined4 *)(param_1 + 0x74));
    D3DXMatrixMultiply(puVar1,&uStack_174,puVar1);
  }
  if (*(float *)(param_1 + 0x70) != 0.0) {
    D3DXMatrixRotationX(&uStack_16c,*(undefined4 *)(param_1 + 0x70));
    D3DXMatrixMultiply(puVar1,&uStack_174,puVar1);
  }
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x58);
  FUN_00ddd140(&uStack_16c,param_1 + 0x60);
  puVar12 = &uStack_16c;
  puVar11 = puVar1;
  D3DXMatrixMultiply(puVar1,puVar12,puVar1);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x9c);
  D3DXMatrixMultiply(puVar1,auStack_128,puVar1);
  *(undefined4 **)(param_1 + 0x2d0) = puVar16;
  *(undefined4 *)(param_1 + 0x2d4) = unaff_EDI;
  *(undefined4 *)(param_1 + 0x2d8) = unaff_ESI;
  *(float *)(param_1 + 0x2e0) = local_f4 * *(float *)(param_1 + 0x2e0);
  *(float *)(param_1 + 0x2e4) = local_f0 * *(float *)(param_1 + 0x2e4);
  *(float *)(param_1 + 0x2e8) = *(float *)(param_1 + 0x2e8) * local_ec;
  *(float *)(param_1 + 0x2ec) = local_e8 * *(float *)(param_1 + 0x2ec);
  *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) * local_e4;
  *(float *)(param_1 + 0x2f4) = local_e0 * *(float *)(param_1 + 0x2f4);
  *(float *)(param_1 + 0x2f8) = local_dc * *(float *)(param_1 + 0x2f8);
  *(float *)(param_1 + 0x2fc) = local_d8 * *(float *)(param_1 + 0x2fc);
  if (*(int *)(param_3 + 0x60) == 0) {
    if ((*(int *)(param_3 + 0x6c) == 0) && (*(int *)(param_3 + 0x78) == 0)) {
      pfVar6 = param_2;
      pfVar7 = local_d4;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
      goto LAB_00cdfe62;
    }
    fStack_1ac = param_2[0xc];
    fStack_1a8 = param_2[0xd];
    fStack_1a4 = param_2[0xe];
  }
  else {
    fStack_1ac = 0.0;
    fStack_1a8 = 0.0;
    fStack_1a4 = 0.0;
  }
  fVar9 = (float10)0;
  fVar10 = fVar9;
  fVar8 = fVar9;
  if (*(int *)(param_3 + 0x6c) == 0) {
    fVar13 = param_2[4];
    fVar2 = param_2[5];
    fVar3 = param_2[6];
    fVar17 = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
    fVar4 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8]);
    fVar14 = param_2[6] / fVar4;
    fVar15 = param_2[10] / fVar4;
    fVar8 = (float10)FUN_00ddbaa0(-(param_2[2] / fVar4));
    fVar10 = (float10)fpatan((float10)fVar14,(float10)fVar15);
    fVar9 = (float10)fpatan((float10)param_2[1] /
                            (float10)SQRT(fVar13 * fVar13 + fVar2 * fVar2 + fVar3 * fVar3),
                            (float10)*param_2 / (float10)fVar17);
  }
  fStack_19c = (float)fVar8;
  fStack_1a0 = (float)fVar10;
  fStack_198 = (float)fVar9;
  if (*(int *)(param_3 + 0x78) == 0) {
    fStack_140 = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
    fStack_13c = SQRT(param_2[4] * param_2[4] + param_2[5] * param_2[5] + param_2[6] * param_2[6]);
    fStack_138 = SQRT(param_2[10] * param_2[10] + param_2[9] * param_2[9] + param_2[8] * param_2[8])
    ;
  }
  else {
    iVar5 = FUN_00f98a90();
    fStack_140 = (float)iVar5 * 0.00078125;
    iVar5 = FUN_00f98aa0();
    fStack_13c = (float)iVar5 * 0.0013888889;
    fStack_138 = 1.0;
  }
  FUN_00ddd140(local_d4,&fStack_140);
  uStack_14c = 0;
  uStack_150 = 0;
  uStack_154 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_164 = 0;
  uStack_168 = 0;
  uStack_16c = 0;
  uStack_174 = 0;
  uStack_178 = 0;
  uStack_17c = 0;
  uStack_180 = 0;
  uStack_148 = 0x3f800000;
  uStack_15c = 0x3f800000;
  uStack_170 = 0x3f800000;
  uStack_184 = 0x3f800000;
  if (fStack_198 != 0.0) {
    D3DXMatrixRotationZ(auStack_74,fStack_198);
    D3DXMatrixMultiply(auStack_18c,&fStack_7c,auStack_18c);
  }
  if (fStack_19c != 0.0) {
    D3DXMatrixRotationY(auStack_74,fStack_19c);
    D3DXMatrixMultiply(auStack_18c,&fStack_7c,auStack_18c);
  }
  if (fStack_1a0 != 0.0) {
    D3DXMatrixRotationX(auStack_74,fStack_1a0);
    D3DXMatrixMultiply(auStack_18c,&fStack_7c,auStack_18c);
  }
  D3DXMatrixMultiply(local_d4,&uStack_184,local_d4);
  fStack_a4 = fStack_1ac;
  fStack_a0 = fStack_1a8;
  fStack_9c = fStack_1a4;
LAB_00cdfe62:
  if (*(int *)(param_3 + 0x84) == 0) {
    fStack_94 = param_2[0x10];
    fStack_90 = param_2[0x11];
    fStack_8c = param_2[0x12];
    fStack_88 = param_2[0x13];
    fStack_84 = param_2[0x14];
    fStack_80 = param_2[0x15];
    fStack_7c = param_2[0x16];
    fStack_78 = param_2[0x17];
  }
  else {
    fStack_78 = 1.0;
    fStack_94 = 1.0;
    fStack_90 = 1.0;
    fStack_8c = 1.0;
    fStack_88 = 1.0;
    fStack_84 = 1.0;
    fStack_80 = 1.0;
    fStack_7c = 1.0;
  }
  D3DXMatrixMultiply(param_1 + 0x300,param_1 + 0x2a0,local_d4);
  *(float *)(param_1 + 0x340) = fStack_a0 * *(float *)(param_1 + 0x2e0);
  *(float *)(param_1 + 0x344) = *(float *)(param_1 + 0x2e4) * fStack_9c;
  *(float *)(param_1 + 0x348) = *(float *)(param_1 + 0x2e8) * fStack_98;
  *(float *)(param_1 + 0x34c) = *(float *)(param_1 + 0x2ec) * fStack_94;
  *(float *)(param_1 + 0x350) = fStack_a0 * *(float *)(param_1 + 0x2f0);
  *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x2f4) * fStack_9c;
  *(float *)(param_1 + 0x358) = fStack_98 * *(float *)(param_1 + 0x2f8);
  *(float *)(param_1 + 0x35c) = fStack_94 * *(float *)(param_1 + 0x2fc);
  if (*(int *)(param_3 + 0x54) != 0) {
    fVar13 = *(float *)(param_1 + 0x330);
    fStack_1a0 = fVar13 - *(float *)(param_1 + 0x3c0);
    fStack_19c = *(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x3c4);
    fStack_198 = *(float *)(param_1 + 0x338) - *(float *)(param_1 + 0x3c8);
    fStack_194 = 1.0 - *(float *)(param_1 + 0x3cc);
    if ((0.001 < ABS(fStack_1a0)) && (0.001 < ABS(fStack_19c))) {
      fVar2 = fStack_198 * fStack_198 + fStack_1a0 * fStack_1a0 + fStack_19c * fStack_19c;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&fStack_1a0,&fStack_1a0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_1a0 = 0.0;
        fStack_19c = 1.0;
        fStack_198 = 0.0;
      }
      fVar10 = (float10)fpatan((float10)fStack_19c,(float10)fStack_1a0);
      fVar10 = (float10)FUN_00ddba30((float)(fVar10 - (float10)1.5707964));
      *(float *)(param_1 + 0x3e0) = (float)fVar10;
    }
    D3DXMatrixRotationZ(param_1 + 0x300,*(undefined4 *)(param_1 + 0x3e0));
    *(undefined4 **)(param_1 + 0x330) = puVar11;
    *(undefined4 **)(param_1 + 0x334) = puVar12;
    *(float *)(param_1 + 0x338) = fVar13;
  }
  return;
}

// 00CE00D0  FUN_00ce00d0  size=279  [run]
void __thiscall FUN_00ce00d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x70) == 0) {
    local_60 = *(undefined4 *)(param_1 + 0x40);
    local_5c = *(undefined4 *)(param_1 + 0x44);
    local_58 = *(undefined4 *)(param_1 + 0x48);
    iVar1 = FUN_00f98a90();
    local_6c = (float)iVar1 * 0.00078125;
    iVar1 = FUN_00f98aa0();
    local_68 = (float)iVar1 * 0.0013888889;
    local_64 = 0x3f800000;
    FUN_00ddd140(local_50,&local_6c);
    D3DXMatrixMultiply(param_1 + 0x10,local_50,param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x40) = local_60;
    *(undefined4 *)(param_1 + 0x44) = local_5c;
    *(undefined4 *)(param_1 + 0x48) = local_58;
  }
  if (*(int *)(param_3 + 0x44) == -1) {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = *(int *)(param_3 + 0x44) * 0x400 + *(int *)(param_1 + 0x7c);
    iVar1 = *(int *)(param_1 + 0x3b4);
    if (*(int *)(param_2 + 0x3b4) < iVar1) {
      *(int *)(param_2 + 0x3b4) = iVar1;
    }
    param_1 = param_1 + 0x300;
  }
  FUN_00cdf6d0(param_2,param_1,param_3);
  if (*(int **)(param_2 + 0x3f0) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x3f0) + 0xc))(param_2 + 0x300);
  }
  if (*(int **)(param_2 + 0x3f4) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x3f4) + 0x18))
              (param_2 + 0x300,*(undefined4 *)(param_2 + 0x3f0));
  }
  return;
}

// 00CE01F0  FUN_00ce01f0  size=179  [run]
void __thiscall FUN_00ce01f0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    iVar2 = FUN_00e03960();
    fVar1 = *(float *)(iVar2 + 0x7c);
    if ((1.0 < fVar1) && (fVar1 < 1.1)) {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0x84) = fVar1 * param_2 + *(float *)(param_1 + 0x84);
    iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 0x10);
    if (((iVar2 != 0) && (iVar2 = iVar2 + *(int *)(param_1 + 0x78), iVar2 != 0)) &&
       (uVar3 = 0, *(int *)(param_1 + 0x80) != 0)) {
      iVar4 = 0;
      do {
        FUN_00cdf520(*(int *)(param_1 + 0x7c) + iVar4,uVar3,fVar1 * param_2);
        FUN_00ce00d0(*(int *)(param_1 + 0x7c) + iVar4,iVar2);
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x1b0;
        iVar4 = iVar4 + 0x400;
      } while (uVar3 < *(uint *)(param_1 + 0x80));
    }
  }
  return;
}

