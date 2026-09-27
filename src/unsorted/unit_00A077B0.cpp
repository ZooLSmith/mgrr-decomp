// src/unsorted/unit_00A077B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A077B0..00A09C30, 42 functions

#include "mgrr.h"

// 00A077B0  FUN_00a077b0  size=48  [run]
void __thiscall FUN_00a077b0(int *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < (short)param_1[2]) {
    iVar3 = 0;
    do {
      puVar1 = (ushort *)(*param_1 + 0xa2 + iVar3);
      *puVar1 = *puVar1 | param_2;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xb0;
    } while (iVar2 < (short)param_1[2]);
  }
  return;
}

// 00A077E0  FUN_00a077e0  size=52  [run]
void __thiscall FUN_00a077e0(int *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (short)param_1[2]) {
    iVar2 = 0;
    do {
      puVar1 = (ushort *)(*param_1 + 0xa2 + iVar2);
      *puVar1 = *puVar1 & ~param_2;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xb0;
    } while (iVar3 < (short)param_1[2]);
  }
  return;
}

// 00A07820  FUN_00a07820  size=67  [run]
void __thiscall FUN_00a07820(int *param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  *(ushort *)(param_2 + 0xa2) = *(ushort *)(param_2 + 0xa2) & 0xffcf;
  iVar2 = 0;
  if (0 < (short)param_1[2]) {
    iVar3 = 0;
    do {
      puVar1 = (ushort *)(*param_1 + 0xa2 + iVar3);
      *puVar1 = *puVar1 & 0xffcf;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xb0;
    } while (iVar2 < (short)param_1[2]);
  }
  return;
}

// 00A07870  FUN_00a07870  size=136  [run]
void __thiscall FUN_00a07870(int *param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  *(float *)(param_2 + 0x40) = *(float *)(param_2 + 0x40) + *param_3;
  *(float *)(param_2 + 0x44) = *(float *)(param_2 + 0x44) + param_3[1];
  *(float *)(param_2 + 0x48) = param_3[2] + *(float *)(param_2 + 0x48);
  *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + *param_3;
  *(float *)(param_2 + 0x54) = *(float *)(param_2 + 0x54) + param_3[1];
  *(float *)(param_2 + 0x58) = param_3[2] + *(float *)(param_2 + 0x58);
  *(float *)(param_2 + 0x5c) = param_3[3] + *(float *)(param_2 + 0x5c);
  if (0 < (short)param_1[2]) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + 0x40;
      iVar2 = iVar4 + 0x10 + *param_1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xb0;
      *(float *)(iVar2 + 0x30) = *(float *)(iVar1 + *param_1) + *param_3;
      *(float *)(iVar2 + 0x34) = *(float *)(iVar2 + 0x34) + param_3[1];
      *(float *)(iVar2 + 0x38) = param_3[2] + *(float *)(iVar2 + 0x38);
    } while (iVar3 < (short)param_1[2]);
  }
  return;
}

// 00A07960  FUN_00a07960  size=89  [run]
void __thiscall FUN_00a07960(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  *param_1 = 0xbf800000;
  param_1[1] = 0xbf800000;
  param_1[2] = 0xbf800000;
  param_1[3] = 0xbf800000;
  param_1[8] = 1;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[5] = 0x3f59999a;
  if (param_3 != (undefined4 *)0x0) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  param_1[7] = *(undefined4 *)(param_2 + 0x34);
  return;
}

// 00A07AC0  FUN_00a07ac0  size=180  [run]
void __thiscall FUN_00a07ac0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_4 + 0x14);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_4 + 0x1c);
  if (((-1 < param_3) && (param_3 < *(int *)(param_4 + 0x44))) &&
     (iVar3 = param_3 * 0x20 + *(int *)(param_4 + 0x40), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x18);
    uVar2 = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)(param_1 + 0x44) = uVar1;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) * -1.0;
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * -1.0;
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) * -1.0;
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) * -1.0;
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  return;
}

// 00A07BE0  FUN_00a07be0  size=124  [run]
void __thiscall FUN_00a07be0(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = *param_1 & 0xfffffffb;
  uVar1 = *param_1;
  if (param_3 == 0) {
    uVar3 = DAT_01bea084 >> 0x1c & 1;
    *param_1 = uVar1 & 0xfffffff7;
    if (((uVar1 & 1) != 0) || (uVar3 != 0)) {
      uVar2 = FUN_00a33360(param_2,uVar1 & 2);
      if ((uVar2 != param_1[1]) || (((uVar1 & 8) != 0 || (uVar3 != 0)))) {
        uVar3 = FUN_00eba270(uVar2);
        *param_1 = *param_1 | 4;
        param_1[2] = uVar3;
        param_1[1] = uVar2;
      }
      if ((uVar1 & 2) != 0) {
        *param_1 = *param_1 & 0xfffffffe;
      }
    }
  }
  return;
}

// 00A07CF0  FUN_00a07cf0  size=321  [run]
undefined4 FUN_00a07cf0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_8c [4];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  D3DXMatrixInverse(local_50,0,param_2);
  D3DXVec3TransformNormal(auStack_8c,param_3,auStack_5c);
  iVar5 = 0;
  if (param_4[2] < 1) {
    return 0;
  }
  iVar4 = 0;
  iVar3 = 0;
  do {
    pfVar1 = (float *)(param_4[1] + iVar3);
    if ((*(byte *)(iVar4 + 0x38 + *param_4) & 1) != 0) {
      fStack_78 = *pfVar1 + *(float *)(param_1 + 0x40);
      fStack_74 = pfVar1[1] + *(float *)(param_1 + 0x44);
      fStack_70 = pfVar1[2] + *(float *)(param_1 + 0x48);
      fStack_6c = pfVar1[3] + *(float *)(param_1 + 0x4c);
      fStack_88 = *(float *)(param_1 + 0x40) + pfVar1[4];
      fStack_84 = pfVar1[5] + *(float *)(param_1 + 0x44);
      fStack_80 = pfVar1[6] + *(float *)(param_1 + 0x48);
      fStack_7c = pfVar1[7] + *(float *)(param_1 + 0x4c);
      iVar2 = FUN_00d8d720(&stack0xffffff68,param_4[3],&fStack_78,&fStack_88);
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar4 = iVar4 + 0x70;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x50;
  } while (iVar5 < param_4[2]);
  return 0;
}

// 00A07E90  FUN_00a07e90  size=6  [run]
undefined4 FUN_00a07e90(void)

{
  return 1;
}

// 00A07EA0  FUN_00a07ea0  size=1  [run]
void FUN_00a07ea0(void)

{
  return;
}

// 00A07EB0  FUN_00a07eb0  size=159  [run]
void FUN_00a07eb0(int param_1)

{
  if (param_1 != -1) {
    FUN_00f9d8f0(1);
    switch(param_1) {
    case 0:
      FUN_00f9d970(5,6,1);
      return;
    case 1:
      FUN_00f9d970(5,2,1);
      return;
    case 2:
      FUN_00f9d970(5,2,3);
      return;
    case 3:
      FUN_00f9d970(9,6,1);
      return;
    case 4:
      FUN_00f9d970(5,2,5);
      return;
    case 5:
      FUN_00f9d970(10,6,1);
      return;
    default:
      FUN_00f9d970(5,6,1);
      FUN_00dd5650(&DAT_0165c604,param_1);
    }
  }
  return;
}

// 00A07FA0  FUN_00a07fa0  size=276  [run]
void __fastcall FUN_00a07fa0(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x480) = 0x3f4ccccd;
  *(undefined4 *)((int)param_1 + 0x520) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x484) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x550) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x554) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x488) = 0;
  *(undefined4 *)((int)param_1 + 0x518) = 3;
  *(undefined4 *)((int)param_1 + 0x48c) = 0;
  *(undefined4 *)((int)param_1 + 0x504) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x490) = 0;
  *(undefined4 *)((int)param_1 + 0x4fc) = 0;
  *(undefined4 *)((int)param_1 + 0x4f4) = 0;
  *(undefined4 *)((int)param_1 + 0x514) = 0;
  *(undefined4 *)((int)param_1 + 0x510) = 0;
  *(undefined4 *)((int)param_1 + 0x508) = 0;
  *(undefined4 *)((int)param_1 + 0x51c) = 0;
  *(undefined4 *)((int)param_1 + 0x4f8) = 0;
  *(undefined4 *)((int)param_1 + 0x50c) = 0;
  *(undefined4 *)((int)param_1 + 0x524) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x528) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x52c) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x530) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x534) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x538) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x53c) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x540) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x544) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x548) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x54c) = 0xffffffff;
  _memset((void *)((int)param_1 + 0x494),0,0x60);
  _memset(param_1,0,0xf0);
  _memset((void *)((int)param_1 + 0xf0),0,0x380);
  *(undefined4 *)((int)param_1 + 0x470) = 0;
  *(undefined4 *)((int)param_1 + 0x474) = 0;
  *(undefined4 *)((int)param_1 + 0x478) = 0;
  *(undefined4 *)((int)param_1 + 0x47c) = 0;
  return;
}

// 00A080C0  FUN_00a080c0  size=54  [run]
void __fastcall FUN_00a080c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  if (*(int *)(param_1 + 0x4f4) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x4f4));
    *(undefined4 *)(param_1 + 0x4f4) = 0;
  }
  return;
}

// 00A08100  FUN_00a08100  size=404  [run]
undefined4 __thiscall FUN_00a08100(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar2 = *(int *)(param_2 + 0x54);
  piVar6 = *(int **)(param_3 + 4);
  uVar3 = *(uint *)(param_3 + 0x10);
  iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar3 * 8 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar3 * 8),param_4);
  *(int *)(param_1 + 0x4fc) = iVar4;
  if (iVar4 != 0) {
    param_2 = 0;
    if (0 < (int)uVar3) {
      do {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0x4fc) + param_2 * 8);
        iVar4 = *(int *)(iVar2 + 4 + piVar6[1] * 8);
        uVar5 = FUN_00fa1a10(iVar4);
        puVar1[1] = uVar5;
        switch(*piVar6) {
        case 0:
          *puVar1 = 0;
          break;
        case 1:
          *puVar1 = 1;
          break;
        case 2:
          *puVar1 = 2;
          break;
        case 3:
          *puVar1 = 3;
          break;
        case 4:
          *puVar1 = 4;
          break;
        case 5:
          *puVar1 = 5;
          break;
        case 6:
          *puVar1 = 6;
          break;
        case 7:
          *puVar1 = 7;
          break;
        case 8:
          *puVar1 = 8;
          break;
        case 9:
          *puVar1 = 9;
          break;
        case 10:
          *puVar1 = 10;
          break;
        default:
          *puVar1 = 0xffffffff;
          FUN_00dd5650(&DAT_0165c630,piVar6[param_2 * 2]);
          return 0;
        }
        if (*piVar6 == 4) {
          if (iVar4 == 0x3619f83e) {
            *(undefined4 *)(param_1 + 0x550) = 0;
          }
          else if (iVar4 == 0x1d418ce6) {
            *(undefined4 *)(param_1 + 0x550) = 1;
          }
          else if (iVar4 == 0x750d0069) {
            *(undefined4 *)(param_1 + 0x550) = 2;
          }
          else if (iVar4 == 0x5e5574b1) {
            *(undefined4 *)(param_1 + 0x550) = 3;
          }
        }
        param_2 = param_2 + 1;
        piVar6 = piVar6 + 2;
      } while (param_2 < (int)uVar3);
    }
    *(uint *)(param_1 + 0x500) = uVar3;
    return 1;
  }
  return 0;
}

// 00A082C0  FUN_00a082c0  size=1  [run]
undefined4 __thiscall FUN_00a082c0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  if (*(int *)(param_1 + 0x4f4) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x4f4));
    *(undefined4 *)(param_1 + 0x4f4) = 0;
  }
  uVar2 = (**(code **)(*param_2 + 0x18))();
  _Dst = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar2 * 4),param_3);
  *(void **)(param_1 + 0x4f4) = _Dst;
  if (_Dst == (void *)0x0) {
    FUN_00dd5650(&DAT_0165c670);
    return 0;
  }
  _memset(_Dst,0,uVar2 * 4);
  *(int *)(param_1 + 0x524) = (int)(char)param_2[0x1e];
  *(int *)(param_1 + 0x528) = (int)(char)param_2[0x1f];
  *(int *)(param_1 + 0x52c) = (int)(char)param_2[0x23];
  *(int *)(param_1 + 0x530) = (int)(char)param_2[0x24];
  *(int *)(param_1 + 0x534) = (int)(char)param_2[0x21];
  *(int *)(param_1 + 0x53c) = (int)(char)param_2[0x27];
  *(int *)(param_1 + 0x538) = (int)(char)param_2[0x22];
  *(int *)(param_1 + 0x540) = (int)(char)param_2[0x20];
  *(int *)(param_1 + 0x544) = (int)(char)param_2[0x25];
  *(int *)(param_1 + 0x548) = (int)(char)param_2[0x28];
  iVar1 = param_2[0x26];
  *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x20;
  *(int *)(param_1 + 0x54c) = (int)(char)iVar1;
  *(uint *)(param_1 + 0x4f8) = uVar2;
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x4f4);
  return 1;
}

// 00A082C1  FUN_00a082c1  size=323  [run]
undefined4 __thiscall FUN_00a082c1(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  if (*(int *)(param_1 + 0x4f4) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x4f4));
    *(undefined4 *)(param_1 + 0x4f4) = 0;
  }
  uVar2 = (**(code **)(*param_3 + 0x18))();
  _Dst = (void *)FUN_00dd3580(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar2 * 4),param_4);
  *(void **)(param_1 + 0x4f4) = _Dst;
  if (_Dst == (void *)0x0) {
    FUN_00dd5650(&DAT_0165c670);
    return 0;
  }
  _memset(_Dst,0,uVar2 * 4);
  *(int *)(param_1 + 0x524) = (int)(char)param_3[0x1e];
  *(int *)(param_1 + 0x528) = (int)(char)param_3[0x1f];
  *(int *)(param_1 + 0x52c) = (int)(char)param_3[0x23];
  *(int *)(param_1 + 0x530) = (int)(char)param_3[0x24];
  *(int *)(param_1 + 0x534) = (int)(char)param_3[0x21];
  *(int *)(param_1 + 0x53c) = (int)(char)param_3[0x27];
  *(int *)(param_1 + 0x538) = (int)(char)param_3[0x22];
  *(int *)(param_1 + 0x540) = (int)(char)param_3[0x20];
  *(int *)(param_1 + 0x544) = (int)(char)param_3[0x25];
  *(int *)(param_1 + 0x548) = (int)(char)param_3[0x28];
  iVar1 = param_3[0x26];
  *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x20;
  *(int *)(param_1 + 0x54c) = (int)(char)iVar1;
  *(uint *)(param_1 + 0x4f8) = uVar2;
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x4f4);
  return 1;
}

// 00A084C0  FUN_00a084c0  size=276  [run]
void __thiscall FUN_00a084c0(int param_1,int param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x508) == 0) && (*(int *)(param_2 + 0x48) != 0)) {
    *(undefined4 *)(param_1 + 0x508) = 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x490) + 0x1e) & 4) == 0) {
    if (*(int *)(param_2 + 0x54) == 0) {
      *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xffbfffff;
    }
    else {
      *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x400000;
    }
  }
  else {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x400000;
  }
  if (*(int *)(param_2 + 0x54) == 0) {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x10000;
  }
  else {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xfffeffff;
  }
  if (*(int *)(param_2 + 0x50) == 0) {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 2;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xffdffffb | 0x800000;
  }
  else {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 4;
    if (*(int *)(param_2 + 0x28) == 0) {
      uVar1 = *(uint *)(param_1 + 0x51c) & 0xff7fffff;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x51c) | 0x800000;
    }
    *(uint *)(param_1 + 0x51c) = uVar1;
    if (*(int *)(param_2 + 0x28) == 0) {
      *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xffdfffff;
    }
    else {
      *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x200000;
    }
  }
  if ((*(byte *)(*(int *)(param_1 + 0x490) + 0x1e) & 8) == 0) {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xff7fffff;
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 8;
    return;
  }
  *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xfffffff7;
  return;
}

// 00A085E0  FUN_00a085e0  size=470  [run]
void __fastcall FUN_00a085e0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined **ppuVar6;
  
  iVar1 = *(int *)(param_1 + 0x470);
  iVar2 = *(int *)(iVar1 + 0x2c);
  if ((iVar2 == 0) && (*(int *)(iVar1 + 0x10) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar5 = *(uint *)(param_1 + 0x51c) & 1;
  if (uVar5 == 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      if (*(int *)(iVar1 + 0x34) == 0) {
        ppuVar6 = &PTR_PTR_018dd8c8;
        if (iVar2 == 0) goto LAB_00a08675;
      }
      else if (iVar2 == 0) {
        ppuVar6 = &PTR_PTR_018dd9b8;
      }
      else {
        ppuVar6 = &PTR_PTR_018ddaa8;
      }
    }
    else {
LAB_00a08675:
      ppuVar6 = &PTR_PTR_018dd7d8;
    }
  }
  else if (*(int *)(iVar1 + 0x10) == 0) {
    if (*(int *)(iVar1 + 0x34) == 0) {
      if (iVar2 == 0) {
        ppuVar6 = &PTR_PTR_018dd760;
      }
      else {
        ppuVar6 = &PTR_PTR_018dd850;
      }
    }
    else if (iVar2 == 0) {
      ppuVar6 = &PTR_PTR_018dd940;
    }
    else {
      ppuVar6 = &PTR_PTR_018dda30;
    }
  }
  else {
    ppuVar6 = &PTR_PTR_018dd850;
  }
  if (*(int *)(iVar1 + 0x40) != 0) {
    ppuVar6 = (undefined **)0x0;
  }
  iVar4 = FUN_00e6b900();
  if (((iVar4 != 3) && (*(int *)(iVar1 + 0x10) != 0)) && (*(int *)(iVar1 + 0x60) == 0)) {
    ppuVar6 = (undefined **)0x0;
  }
  *(undefined ***)(param_1 + 0x47c) = ppuVar6;
  if (*(undefined ***)(param_1 + 0x474) == &PTR_PTR_018e7958) goto LAB_00a08745;
  if (((*(int *)(iVar1 + 0x10) == 0) && (*(int *)(iVar1 + 0x28) != 0)) ||
     (*(int *)(param_1 + 0x508) == 2)) {
    if (uVar5 == 0) {
      if (*(int *)(iVar1 + 0x34) == 0) {
        ppuVar6 = &PTR_PTR_018e7a68;
        if (!bVar3) {
          ppuVar6 = &PTR_PTR_018e7868;
        }
      }
      else if (bVar3) {
        ppuVar6 = &PTR_PTR_018e7d38;
      }
      else {
        ppuVar6 = &PTR_PTR_018e7bd0;
      }
    }
    else {
      if (*(int *)(iVar1 + 0x34) == 0) goto LAB_00a086c6;
      if (bVar3) {
        ppuVar6 = &PTR_PTR_018e7cc0;
      }
      else {
        ppuVar6 = &PTR_PTR_018e7b58;
      }
    }
  }
  else {
LAB_00a086c6:
    if (bVar3) {
      ppuVar6 = &PTR_PTR_018e79d0;
    }
    else {
      ppuVar6 = &PTR_PTR_018e77f0;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    ppuVar6 = (undefined **)0x0;
  }
  *(undefined ***)(param_1 + 0x474) = ppuVar6;
  if (ppuVar6 == (undefined **)0x0) {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xffefffff;
  }
  else {
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x100000;
  }
LAB_00a08745:
  if (((*(int *)(iVar1 + 0x10) != 0) && (*(int *)(iVar1 + 0x60) == 0)) ||
     (*(int *)(iVar1 + 0x28) == 0)) {
    *(undefined4 *)(param_1 + 0x478) = 0;
    return;
  }
  if (uVar5 == 0) {
    ppuVar6 = &PTR_PTR_018e8060;
    if (iVar2 == 0) {
      ppuVar6 = &PTR_PTR_018e7fe8;
    }
    *(undefined ***)(param_1 + 0x478) = ppuVar6;
    return;
  }
  if (iVar2 != 0) {
    *(undefined ***)(param_1 + 0x478) = &PTR_PTR_018e7f50;
    return;
  }
  *(undefined ***)(param_1 + 0x478) = &PTR_PTR_018e7ed8;
  return;
}

// 00A087C0  FUN_00a087c0  size=68  [run]
bool __thiscall FUN_00a087c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x470) = param_2;
  if (*(int *)(param_1 + 0x474) != 0) {
    *(undefined ***)(param_1 + 0x474) = &PTR_PTR_018e7958;
  }
  FUN_00a084c0(param_2);
  FUN_00a085e0();
  iVar1 = FUN_00a082c0(param_2,&DAT_01b7bd48);
  return iVar1 != 0;
}

// 00A08810  FUN_00a08810  size=173  [run]
void __thiscall FUN_00a08810(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (((uint)param_1[0x147] & 8) != 0) {
    param_1[0x3a] = param_1[0x3a] + param_2;
    if (param_1[1] != 0.0) {
      fVar1 = param_1[2] + param_2;
      param_1[2] = fVar1;
      *param_1 = ABS(fVar1) / (param_1[1] * 30.0);
      fVar2 = ABS(param_1[1] * 30.0);
      if (fVar2 < fVar1 != (fVar2 == fVar1)) {
        param_1[2] = fVar1 - fVar2;
      }
    }
    if (param_1[5] == 0.0) {
      return;
    }
    param_2 = param_1[6] + param_2;
    param_1[6] = param_2;
    param_1[4] = ABS(param_2) / (param_1[5] * 30.0);
    fVar1 = ABS(param_1[5] * 30.0);
    if (fVar1 < param_2 != (fVar1 == param_2)) {
      param_1[6] = param_2 - fVar1;
      return;
    }
  }
  return;
}

// 00A088F0  FUN_00a088f0  size=220  [run]
void __fastcall FUN_00a088f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  puVar6 = (uint *)(param_1 + 0x49c);
  do {
    if (puVar6[-2] == 0) {
      return;
    }
    switch(puVar6[-2]) {
    case 1:
      uVar8 = 0;
      break;
    case 2:
      uVar8 = 1;
      break;
    default:
      goto switchD_00a08915_caseD_3;
    case 5:
      uVar8 = 2;
      break;
    case 6:
      uVar8 = 3;
      break;
    case 7:
    case 0xc:
      uVar8 = 4;
      break;
    case 8:
      uVar8 = 5;
      break;
    case 9:
      uVar8 = 7;
      break;
    case 10:
      uVar8 = 8;
      break;
    case 0xb:
      uVar8 = 6;
    }
    uVar1 = puVar6[-1];
    if (uVar1 == 0) {
      piVar5 = (int *)FUN_00f9e370(*puVar6);
      if (piVar5 != (int *)0x0) {
        if ((int *)*piVar5 == (int *)0x0) {
          if ((int *)piVar5[1] == (int *)0x0) goto LAB_00a08997;
          iVar4 = *(int *)piVar5[1];
        }
        else {
          iVar4 = *(int *)*piVar5;
        }
        goto LAB_00a08999;
      }
    }
    else {
      uVar2 = *puVar6;
      if (((int)uVar2 < 0) || (*(uint *)(uVar1 + 0xc) <= uVar2)) {
LAB_00a08997:
        iVar4 = 0;
      }
      else {
        iVar4 = uVar2 * 0x30 + *(int *)(uVar1 + 8);
      }
LAB_00a08999:
      if (((uVar8 < 0xb) && (iVar3 = *(int *)(param_1 + 0x524 + uVar8 * 4), -1 < iVar3)) &&
         (iVar3 < *(int *)(param_1 + 0x4f8))) {
        *(int *)(*(int *)(param_1 + 0x4f4) + iVar3 * 4) = iVar4;
      }
    }
switchD_00a08915_caseD_3:
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 3;
    if (7 < uVar7) {
      return;
    }
  } while( true );
}

// 00A08AE0  FUN_00a08ae0  size=300  [run]
void __thiscall FUN_00a08ae0(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((*(byte *)(param_1 + 0x51c) & 0x20) != 0) || (param_2 != 0)) {
    _memset(*(void **)(param_1 + 0x4f4),0,*(int *)(param_1 + 0x4f8) * 4);
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x500)) {
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x4fc) + 4 + iVar6 * 8);
        puVar1 = (uint *)(*(int *)(param_1 + 0x4fc) + iVar6 * 8);
        if (piVar2 == (int *)0x0) {
          uVar3 = *puVar1;
          if (((uVar3 < 0xb) && (iVar4 = *(int *)(param_1 + 0x524 + uVar3 * 4), -1 < iVar4)) &&
             (iVar4 < *(int *)(param_1 + 0x4f8))) {
            *(undefined4 *)(*(int *)(param_1 + 0x4f4) + iVar4 * 4) = 0;
          }
        }
        else {
          if ((undefined4 *)*piVar2 == (undefined4 *)0x0) {
            if ((undefined4 *)piVar2[1] == (undefined4 *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)piVar2[1];
            }
          }
          else {
            uVar5 = *(undefined4 *)*piVar2;
          }
          uVar3 = *puVar1;
          if (((uVar3 < 0xb) && (iVar4 = *(int *)(param_1 + 0x524 + uVar3 * 4), -1 < iVar4)) &&
             (iVar4 < *(int *)(param_1 + 0x4f8))) {
            *(undefined4 *)(*(int *)(param_1 + 0x4f4) + iVar4 * 4) = uVar5;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x500));
    }
    FUN_00a088f0();
    iVar6 = *(int *)(param_1 + 0x524);
    if (*(int *)(param_1 + 0x554) != -1) {
      iVar4 = *(int *)(param_1 + 0x554) * 0x50;
      if (*(int *)(&DAT_01be15bc + iVar4) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(&DAT_01be15b8 + iVar4);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x4f4) + iVar6 * 4) = uVar5;
    }
    if (-1 < iVar6) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x4f4) + iVar6 * 4);
      *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xffffffdf;
      *(undefined4 *)(param_1 + 0x448) = uVar5;
      return;
    }
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xffffffdf;
    *(undefined4 *)(param_1 + 0x448) = 0;
  }
  return;
}

// 00A08C10  FUN_00a08c10  size=312  [run]
void __thiscall
FUN_00a08c10(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x504);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x518);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x51c);
  FUN_00a08ae0(param_3);
  if ((*(uint *)(param_1 + 0x51c) & 0x10) != 0) {
    if ((*(uint *)(param_1 + 0x51c) & 0x40) != 0) {
      iVar2 = FUN_00a4a2d0();
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xfffffeff;
      }
      else {
        *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x100;
      }
    }
    if ((*(byte *)(param_1 + 0x51c) & 0x80) != 0) {
      iVar2 = FUN_00a4a2d0();
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) & 0xfffffdff;
      }
      else {
        *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x200;
      }
    }
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_1 + 0x480);
    *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_1 + 0x484);
    *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_1 + 0x488);
    *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_1 + 0x48c);
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_1 + 0x438);
    }
    else {
      if ((*(byte *)(param_1 + 0x51c) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x430) = param_5;
        *(undefined4 *)(param_1 + 0x434) = param_5;
      }
      *(float *)(param_1 + 0x430) = *(float *)(param_1 + 0x430) + *(float *)(param_1 + 0x430);
      uVar1 = *(undefined4 *)(param_1 + 0x434);
      *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_1 + 0x438);
      *(undefined4 *)(param_1 + 0x438) = uVar1;
    }
    (**(code **)(**(int **)(param_1 + 0x470) + 0x20))(param_1 + 0xf0,param_1,param_2);
  }
  return;
}

// 00A08D50  FUN_00a08d50  size=131  [run]
undefined4 __thiscall FUN_00a08d50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)0x0;
  uVar3 = 0;
  piVar1 = (int *)(param_1 + 0x494);
  do {
    if (*piVar1 == param_2) {
      if ((piVar1[1] == 0) && (piVar1[2] == param_3)) {
        return 1;
      }
      piVar1[1] = 0;
      piVar1[2] = param_3;
      *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x20;
      return 1;
    }
    if ((*piVar1 == 0) && (piVar2 == (int *)0x0)) {
      piVar2 = piVar1;
    }
    uVar3 = uVar3 + 1;
    piVar1 = piVar1 + 3;
  } while (uVar3 < 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_2;
    piVar2[1] = 0;
    piVar2[2] = param_3;
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x20;
    return 1;
  }
  return 0;
}

// 00A08DE0  FUN_00a08de0  size=130  [run]
undefined4 __thiscall FUN_00a08de0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)0x0;
  uVar3 = 0;
  piVar1 = (int *)(param_1 + 0x494);
  do {
    if (*piVar1 == param_2) {
      if ((piVar1[1] == param_3) && (piVar1[2] == param_4)) {
        return 1;
      }
      piVar1[2] = param_4;
      piVar1[1] = param_3;
      *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x20;
      return 1;
    }
    if ((*piVar1 == 0) && (piVar2 == (int *)0x0)) {
      piVar2 = piVar1;
    }
    uVar3 = uVar3 + 1;
    piVar1 = piVar1 + 3;
  } while (uVar3 < 8);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_2;
    piVar2[1] = param_3;
    piVar2[2] = param_4;
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x20;
    return 1;
  }
  return 0;
}

// 00A08E70  FUN_00a08e70  size=64  [run]
void __thiscall FUN_00a08e70(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(param_1 + 0x494);
  do {
    if (*piVar1 == param_2) {
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x51c) | 0x20;
      return;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 3;
  } while (uVar2 < 8);
  return;
}

// 00A08F20  FUN_00a08f20  size=72  [run]
void __fastcall FUN_00a08f20(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}

// 00A08F70  FUN_00a08f70  size=217  [run]
undefined4 __thiscall FUN_00a08f70(int param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (0 < (int)*(uint *)(param_2 + 0x48)) {
    lVar1 = (ulonglong)*(uint *)(param_2 + 0x48) * 4;
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,param_4);
    *(int *)(param_1 + 0x30) = iVar2;
    if (iVar2 == 0) {
      FUN_00a08f20();
      return 0;
    }
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0x48)) {
      do {
        *(uint *)(*(int *)(param_1 + 0x30) + iVar2 * 4) =
             (uint)*(ushort *)(*(int *)(param_2 + 0x44) + iVar2 * 2) * 0x560 + param_3;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0x48));
    }
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x48);
  *(int *)(param_1 + 0x60) = param_2;
  if (*(int *)(param_2 + 0x48) < 1) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffe;
    return 1;
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
  return 1;
}

// 00A09090  FUN_00a09090  size=577  [run]
void __thiscall FUN_00a09090(int param_1,int param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint local_8;
  
  if ((*(uint *)(param_1 + 0x38) & 1) == 0) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffff9;
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * param_3;
  if (param_2 != 0) {
    *(float *)(param_1 + 0x40) = *(float *)(param_2 + 0x20) * *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) = *(float *)(param_2 + 0x24) * *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x48) = *(float *)(param_2 + 0x28) * *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x4c) = *(float *)(param_2 + 0x2c) * *(float *)(param_1 + 0x4c);
  }
  local_8 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x44) * 255.0);
  uVar2 = local_8;
  local_8 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x40) * 255.0);
  uVar1 = local_8 << 8;
  local_8 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x48) * 255.0);
  uVar2 = (uVar2 | uVar1) << 8 | local_8;
  local_8 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x4c) * 255.0);
  *(uint *)(param_1 + 0x68) = uVar2 << 8 | local_8;
  local_8 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x54) * 255.0);
  uVar2 = local_8;
  local_8 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x50) * 255.0);
  uVar1 = local_8 << 8;
  local_8 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x58) * 255.0);
  uVar2 = (uVar2 | uVar1) << 8 | local_8;
  local_8 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x5c) * 255.0);
  *(uint *)(param_1 + 0x6c) = uVar2 << 8 | local_8;
  if ((0.01 < *(float *)(param_1 + 0x4c)) && (0.01 < *(float *)(param_1 + 0x5c))) {
    if ((1.0 <= *(float *)(param_1 + 0x4c)) && (1.0 <= *(float *)(param_1 + 0x5c))) {
      uVar2 = *(uint *)(param_1 + 0x38);
      if ((uVar2 & 0x10) == 0) {
        *(uint *)(param_1 + 0x38) = uVar2 & 0xfffffffd;
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 4;
        return;
      }
      *(uint *)(param_1 + 0x38) = uVar2 | 2;
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 4;
      return;
    }
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 2;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 4;
    return;
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffff9;
  return;
}

// 00A09380  FUN_00a09380  size=496  [run]
void __fastcall FUN_00a09380(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined **ppuVar7;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + local_8 * 4);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x470);
        iVar3 = *(int *)(iVar2 + 0x2c);
        if ((iVar3 == 0) && (*(int *)(iVar2 + 0x10) == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        uVar5 = *(uint *)(iVar1 + 0x51c) & 1;
        if (uVar5 == 0) {
          if (*(int *)(iVar2 + 0x10) == 0) {
            if (*(int *)(iVar2 + 0x34) == 0) {
              ppuVar7 = &PTR_PTR_018dd8c8;
              if (iVar3 == 0) goto LAB_00a0943a;
            }
            else if (iVar3 == 0) {
              ppuVar7 = &PTR_PTR_018dd9b8;
            }
            else {
              ppuVar7 = &PTR_PTR_018ddaa8;
            }
          }
          else {
LAB_00a0943a:
            ppuVar7 = &PTR_PTR_018dd7d8;
          }
        }
        else if (*(int *)(iVar2 + 0x10) == 0) {
          if (*(int *)(iVar2 + 0x34) == 0) {
            if (iVar3 == 0) {
              ppuVar7 = &PTR_PTR_018dd760;
            }
            else {
              ppuVar7 = &PTR_PTR_018dd850;
            }
          }
          else if (iVar3 == 0) {
            ppuVar7 = &PTR_PTR_018dd940;
          }
          else {
            ppuVar7 = &PTR_PTR_018dda30;
          }
        }
        else {
          ppuVar7 = &PTR_PTR_018dd850;
        }
        if (*(int *)(iVar2 + 0x40) != 0) {
          ppuVar7 = (undefined **)0x0;
        }
        iVar6 = FUN_00e6b900();
        if (((iVar6 != 3) && (*(int *)(iVar2 + 0x10) != 0)) && (*(int *)(iVar2 + 0x60) == 0)) {
          ppuVar7 = (undefined **)0x0;
        }
        *(undefined ***)(iVar1 + 0x47c) = ppuVar7;
        if (*(undefined ***)(iVar1 + 0x474) != &PTR_PTR_018e7958) {
          if (((*(int *)(iVar2 + 0x10) == 0) && (*(int *)(iVar2 + 0x28) != 0)) ||
             (*(int *)(iVar1 + 0x508) == 2)) {
            if (uVar5 == 0) {
              if (*(int *)(iVar2 + 0x34) == 0) {
                ppuVar7 = &PTR_PTR_018e7a68;
                if (!bVar4) {
                  ppuVar7 = &PTR_PTR_018e7868;
                }
              }
              else if (bVar4) {
                ppuVar7 = &PTR_PTR_018e7d38;
              }
              else {
                ppuVar7 = &PTR_PTR_018e7bd0;
              }
            }
            else {
              if (*(int *)(iVar2 + 0x34) == 0) goto LAB_00a0948a;
              if (bVar4) {
                ppuVar7 = &PTR_PTR_018e7cc0;
              }
              else {
                ppuVar7 = &PTR_PTR_018e7b58;
              }
            }
          }
          else {
LAB_00a0948a:
            if (bVar4) {
              ppuVar7 = &PTR_PTR_018e79d0;
            }
            else {
              ppuVar7 = &PTR_PTR_018e77f0;
            }
          }
          if (*(int *)(iVar2 + 0x28) == 0) {
            ppuVar7 = (undefined **)0x0;
          }
          *(undefined ***)(iVar1 + 0x474) = ppuVar7;
          if (ppuVar7 == (undefined **)0x0) {
            *(uint *)(iVar1 + 0x51c) = *(uint *)(iVar1 + 0x51c) & 0xffefffff;
          }
          else {
            *(uint *)(iVar1 + 0x51c) = *(uint *)(iVar1 + 0x51c) | 0x100000;
          }
        }
        if (((*(int *)(iVar2 + 0x10) == 0) || (*(int *)(iVar2 + 0x60) != 0)) &&
           (*(int *)(iVar2 + 0x28) != 0)) {
          if (uVar5 == 0) {
            ppuVar7 = &PTR_PTR_018e8060;
            if (iVar3 == 0) {
              ppuVar7 = &PTR_PTR_018e7fe8;
            }
          }
          else if (iVar3 == 0) {
            ppuVar7 = &PTR_PTR_018e7ed8;
          }
          else {
            ppuVar7 = &PTR_PTR_018e7f50;
          }
        }
        else {
          ppuVar7 = (undefined **)0x0;
        }
        *(undefined ***)(iVar1 + 0x478) = ppuVar7;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A096F0  FUN_00a096f0  size=42  [run]
void __thiscall FUN_00a096f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar2 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x50c) = param_2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A09750  FUN_00a09750  size=79  [run]
void __thiscall FUN_00a09750(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar2 * 4);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x490) != 0)) &&
         ((*(byte *)(*(int *)(iVar1 + 0x490) + 0x1e) & 8) != 0)) {
        if (param_2 == 0) {
          *(uint *)(iVar1 + 0x51c) = *(uint *)(iVar1 + 0x51c) & 0xff7fffff;
        }
        else {
          *(uint *)(iVar1 + 0x51c) = *(uint *)(iVar1 + 0x51c) | 0x800000;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A097D0  FUN_00a097d0  size=54  [run]
void __thiscall FUN_00a097d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar2 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x488) = param_2;
        *(undefined4 *)(iVar1 + 0x48c) = param_3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A09840  FUN_00a09840  size=116  [run]
void __thiscall
FUN_00a09840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar2 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x20) = param_2;
        *(undefined4 *)(iVar1 + 0x24) = param_3;
        *(undefined4 *)(iVar1 + 0x28) = param_4;
        *(undefined4 *)(iVar1 + 0x2c) = param_5;
        *(undefined4 *)(iVar1 + 0x3c) = param_5;
        *(undefined4 *)(iVar1 + 0x30) = param_6;
        *(undefined4 *)(iVar1 + 0x34) = param_7;
        *(undefined4 *)(iVar1 + 0x38) = param_8;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A098C0  FUN_00a098c0  size=56  [run]
void __thiscall FUN_00a098c0(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar2 * 4);
      if (iVar1 != 0) {
        FID_conflict__memcpy((void *)(iVar1 + 0x20),param_2,0x80);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A099A0  FUN_00a099a0  size=47  [run]
void __thiscall FUN_00a099a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar2 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = *param_2;
        *(undefined4 *)(iVar1 + 0x1c) = param_2[1];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A099D0  FUN_00a099d0  size=54  [run]
void __thiscall FUN_00a099d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar2 * 4);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xe0) = *param_2;
        *(undefined4 *)(iVar1 + 0xe4) = param_2[1];
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A09AB0  FUN_00a09ab0  size=153  [run]
undefined4 __thiscall FUN_00a09ab0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + local_8 * 4);
      if (iVar1 != 0) {
        piVar3 = (int *)0x0;
        uVar4 = 0;
        piVar2 = (int *)(iVar1 + 0x494);
        do {
          if (*piVar2 == param_2) {
            if ((piVar2[1] == param_3) && (piVar2[2] == param_4)) goto LAB_00a09b16;
            piVar2[1] = param_3;
            piVar2[2] = param_4;
            goto LAB_00a09b0f;
          }
          if ((*piVar2 == 0) && (piVar3 == (int *)0x0)) {
            piVar3 = piVar2;
          }
          uVar4 = uVar4 + 1;
          piVar2 = piVar2 + 3;
        } while (uVar4 < 8);
        if (piVar3 != (int *)0x0) {
          *piVar3 = param_2;
          piVar3[1] = param_3;
          piVar3[2] = param_4;
LAB_00a09b0f:
          *(uint *)(iVar1 + 0x51c) = *(uint *)(iVar1 + 0x51c) | 0x20;
        }
      }
LAB_00a09b16:
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x34));
  }
  return 1;
}

// 00A09BA0  FUN_00a09ba0  size=59  [run]
void __thiscall FUN_00a09ba0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + iVar2 * 4);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x51c) = *(uint *)(iVar1 + 0x51c) | 0x20;
        *(undefined4 *)(iVar1 + 0x554) = param_2;
        *(undefined4 *)(iVar1 + 0x514) = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A09BE0  FUN_00a09be0  size=12  [run]
undefined4 __fastcall FUN_00a09be0(undefined4 param_1)

{
  cXmlBinary::cXmlBinary_103();
  return param_1;
}

// 00A09C00  FUN_00a09c00  size=33  [run]
void FUN_00a09c00(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00de3d80(0,"meshPattern.bxm");
  FUN_00e062b0(uVar1,0);
  return;
}

// 00A09C30  FUN_00a09c30  size=37  [run]
void __fastcall FUN_00a09c30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = (**(code **)(*param_1 + 4))();
  (**(code **)(*param_1 + 0x10))(uVar2);
  return;
}

