// src/unsorted/unit_00C9D8C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C9D8C0..00C9EFC0, 58 functions

#include "mgrr.h"

// 00C9D8C0  FUN_00c9d8c0  size=51  [run]
void FUN_00c9d8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_50 [76];
  
  FUN_00ddc1d0(local_50,param_3,param_4);
  D3DXVec3TransformNormal(param_1,param_2,local_50);
  return;
}

// 00C9D910  FUN_00c9d910  size=3  [run]
undefined4 __fastcall FUN_00c9d910(undefined4 param_1)

{
  return param_1;
}

// 00C9D930  FUN_00c9d930  size=104  [run]
void __fastcall FUN_00c9d930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x3c) == -1) {
    if (((*(int *)(param_1 + 0x30) != 0) && (iVar1 = FUN_00a81330(), iVar1 == 0)) &&
       (iVar1 = FUN_00a18d70(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34)),
       iVar1 != 0)) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
  }
  else {
    iVar1 = FUN_00c2dad0(*(int *)(param_1 + 0x3c));
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      return;
    }
  }
  return;
}

// 00C9D9A0  FUN_00c9d9a0  size=23  [run]
undefined2 __thiscall FUN_00c9d9a0(int param_1,byte param_2)

{
  return CONCAT11((char)(*(ushort *)(param_1 + 0xc) >> 8),
                  (1 << (param_2 & 0x1f) & (uint)*(ushort *)(param_1 + 0xc)) != 0);
}

// 00C9D9E0  FUN_00c9d9e0  size=63  [run]
void __fastcall FUN_00c9d9e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0x10) != 0) && (iVar1 = FUN_00a81330(), iVar1 == 0)) &&
     (iVar1 = FUN_00a18d70(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14)),
     iVar1 != 0)) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  return;
}

// 00C9DA40  FUN_00c9da40  size=31  [run]
void __thiscall FUN_00c9da40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

// 00C9DA60  FUN_00c9da60  size=10  [run]
void __thiscall FUN_00c9da60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C9DA70  FUN_00c9da70  size=49  [run]
void __fastcall FUN_00c9da70(int *param_1)

{
  if (param_1[2] != 0) {
    if (param_1[1] == 0) {
      param_1[1] = *(int *)(*param_1 + 8);
    }
    param_1[1] = param_1[1] + -1;
    param_1[6] = 0;
    return;
  }
  param_1[1] = param_1[1] + 1;
  if (*(uint *)(*param_1 + 8) <= (uint)param_1[1]) {
    param_1[1] = 0;
  }
  param_1[6] = 0;
  return;
}

// 00C9DAB0  FUN_00c9dab0  size=3  [run]
undefined4 __fastcall FUN_00c9dab0(undefined4 *param_1)

{
  return *param_1;
}

// 00C9DAC0  FUN_00c9dac0  size=37  [run]
int __fastcall FUN_00c9dac0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if ((uint)param_1[1] < *(uint *)(iVar1 + 8)) {
      return param_1[1] * 0x10 + *(int *)(iVar1 + 0xc);
    }
    FUN_00dd5650(&DAT_016b1b50);
  }
  return 0;
}

// 00C9DAF0  FUN_00c9daf0  size=46  [run]
int __fastcall FUN_00c9daf0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar2 = param_1[1] + 1;
    if ((uVar2 < *(uint *)(iVar1 + 8)) || (uVar2 = 0, *(uint *)(iVar1 + 8) != 0)) {
      return uVar2 * 0x10 + *(int *)(iVar1 + 0xc);
    }
    FUN_00dd5650(&DAT_016b1b50);
  }
  return 0;
}

// 00C9DB20  FUN_00c9db20  size=63  [run]
uint __thiscall FUN_00c9db20(int *param_1,byte param_2)

{
  ushort uVar1;
  uint in_EAX;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if ((uint)param_1[1] < *(uint *)(iVar2 + 8)) {
      iVar2 = param_1[1] * 0x10 + *(int *)(iVar2 + 0xc);
      in_EAX = 0;
      if (iVar2 != 0) {
        uVar1 = *(ushort *)(iVar2 + 0xc);
        return (uint)CONCAT11((char)(uVar1 >> 8),(1 << (param_2 & 0x1f) & (uint)uVar1) != 0);
      }
    }
    else {
      in_EAX = FUN_00dd5650(&DAT_016b1b50);
    }
  }
  return in_EAX & 0xffffff00;
}

// 00C9DB60  FUN_00c9db60  size=119  [run]
uint __thiscall FUN_00c9db60(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
LAB_00c9db7e:
    iVar1 = 0;
  }
  else {
    if (*(uint *)(iVar1 + 8) <= (uint)param_1[1]) {
      FUN_00dd5650(&DAT_016b1b50);
      goto LAB_00c9db7e;
    }
    iVar1 = param_1[1] * 0x10 + *(int *)(iVar1 + 0xc);
  }
  if (param_1[2] != 0) {
    iVar1 = param_1[1];
    if (iVar1 == 0) {
      iVar1 = *(int *)(*param_1 + 8);
    }
    if (*(uint *)(*param_1 + 8) <= iVar1 - 1U) {
      uVar2 = FUN_00dd5650(&DAT_016b1b50);
      goto LAB_00c9dba7;
    }
    iVar1 = (iVar1 - 1U) * 0x10 + *(int *)(*param_1 + 0xc);
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 1 << (param_2 & 0x1f);
    return CONCAT31((int3)(uVar2 >> 8),(uVar2 & *(ushort *)(iVar1 + 0xe)) != 0);
  }
LAB_00c9dba7:
  return uVar2 & 0xffffff00;
}

// 00C9DBE0  FUN_00c9dbe0  size=53  [run]
int __thiscall FUN_00c9dbe0(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  
  iVar1 = *param_1;
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar4 = *(int *)(iVar1 + 8), iVar4 != 0)) {
    puVar3 = (ushort *)(*(int *)(iVar1 + 0xc) + 0xc);
    do {
      if ((1 << (param_2 & 0x1f) & (uint)*puVar3) != 0) {
        iVar2 = iVar2 + 1;
      }
      puVar3 = puVar3 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar2;
}

// 00C9DCB0  FUN_00c9dcb0  size=68  [run]
undefined4 __thiscall FUN_00c9dcb0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x9c))(param_2,param_3);
  if (iVar1 == -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0x100))(iVar1,param_2,param_3);
  return 1;
}

// 00C9DE60  FUN_00c9de60  size=12  [run]
undefined4 __fastcall FUN_00c9de60(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 00C9DE70  FUN_00c9de70  size=180  [run]
void __thiscall FUN_00c9de70(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  float *pfVar4;
  uint local_c;
  int local_8;
  
  iVar1 = FUN_00c2dad0(param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    pcVar2 = (char *)(param_1 + 0x6641);
    local_8 = 0x10;
    do {
      if (((pcVar2[-1] != '\0') && (*(int *)(pcVar2 + 0x1f) == param_2)) && (*pcVar2 == '\0')) {
        iVar3 = 0;
        *pcVar2 = '\x01';
        local_c = 0;
        if (*(int *)(pcVar2 + 7) != 0) {
          do {
            pfVar4 = (float *)(*(int *)(pcVar2 + 0xb) + iVar3);
            D3DXVec3TransformNormal(pfVar4,pfVar4,iVar1 + 0x10);
            local_c = local_c + 1;
            iVar3 = iVar3 + 0x10;
            *pfVar4 = *(float *)(iVar1 + 0x40) + *pfVar4;
            pfVar4[1] = pfVar4[1] + *(float *)(iVar1 + 0x44);
            pfVar4[2] = pfVar4[2] + *(float *)(iVar1 + 0x48);
          } while (local_c < *(uint *)(pcVar2 + 7));
        }
      }
      pcVar2 = pcVar2 + 0x24;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 00C9DF30  FUN_00c9df30  size=12  [run]
void __fastcall FUN_00c9df30(int param_1)

{
  FUN_00c18550(*(undefined4 *)(param_1 + 4));
  return;
}

// 00C9DF40  FUN_00c9df40  size=12  [run]
void __fastcall FUN_00c9df40(int param_1)

{
  FUN_00c18550(*(undefined4 *)(param_1 + 4));
  return;
}

// 00C9DFB0  FUN_00c9dfb0  size=50  [run]
undefined4 __thiscall FUN_00c9dfb0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 29000);
  while ((*piVar2 == 0 || (*piVar2 != param_2))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
    if (5 < uVar1) {
      return 0;
    }
  }
  return 1;
}

// 00C9DFF0  FUN_00c9dff0  size=29  [run]
undefined4 __thiscall FUN_00c9dff0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x7140) != 0) && (*(int *)(param_1 + 0x7140) == param_2)) {
    return 1;
  }
  return 0;
}

// 00C9E010  FUN_00c9e010  size=29  [run]
undefined4 __thiscall FUN_00c9e010(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x7144) != 0) && (*(int *)(param_1 + 0x7144) == param_2)) {
    return 1;
  }
  return 0;
}

// 00C9E030  FUN_00c9e030  size=92  [run]
undefined4 __fastcall FUN_00c9e030(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar3 = 0;
  pcVar2 = (char *)(param_1 + 0x40);
  do {
    if (*pcVar2 != '\0') {
      uVar4 = 0;
      piVar5 = (int *)(pcVar2 + 0x34);
      do {
        if (*piVar5 != -1) {
          iVar1 = FUN_0093db40(*piVar5);
          if (iVar1 != 0) {
            return 1;
          }
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 0x10;
      } while (uVar4 < 0x10);
    }
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 0x660;
  } while (uVar3 < 0x10);
  return 0;
}

// 00C9E0B0  FUN_00c9e0b0  size=28  [run]
int __thiscall FUN_00c9e0b0(int param_1,uint param_2)

{
  if (0xf < param_2) {
    return 0;
  }
  return (int)*(char *)(param_2 * 0x660 + 0x40 + param_1);
}

// 00C9E0D0  FUN_00c9e0d0  size=31  [run]
int __thiscall FUN_00c9e0d0(int param_1,uint param_2)

{
  if (0xf < param_2) {
    return 1;
  }
  return (int)*(char *)(param_2 * 0x660 + 0x41 + param_1);
}

// 00C9E0F0  FUN_00c9e0f0  size=122  [run]
undefined4 __fastcall FUN_00c9e0f0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = (int *)(param_1 + 0x664);
  do {
    if (piVar3[-0x180] != 0) {
      if (((uVar4 < 0x10) && ((char)piVar3[-0x189] != '\0')) || (piVar3[-0x70] != 0)) {
        if ((uVar4 < 0x10) && (*(char *)((int)piVar3 + -0x623) == '\0')) {
          return 0;
        }
      }
      else {
        iVar2 = *piVar3;
        if (((iVar2 == 1) || (iVar2 == 2)) ||
           ((iVar2 == 6 ||
            (((iVar2 == 7 || (iVar2 == 8)) ||
             (fVar1 = (float)piVar3[0xb], !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))))))) {
          return 0;
        }
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x198;
    if (0xf < uVar4) {
      return 1;
    }
  } while( true );
}

// 00C9E170  FUN_00c9e170  size=31  [run]
int __thiscall FUN_00c9e170(int param_1,uint param_2)

{
  if (0xf < param_2) {
    return 1;
  }
  return (int)*(char *)(param_2 * 0x660 + 0x42 + param_1);
}

// 00C9E190  FUN_00c9e190  size=122  [run]
undefined4 __fastcall FUN_00c9e190(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = (int *)(param_1 + 0x664);
  do {
    if (piVar3[-0x180] != 0) {
      if (((uVar4 < 0x10) && ((char)piVar3[-0x189] != '\0')) || (piVar3[-0x70] != 0)) {
        if ((uVar4 < 0x10) && (*(char *)((int)piVar3 + -0x622) == '\0')) {
          return 0;
        }
      }
      else {
        iVar2 = *piVar3;
        if (((iVar2 == 1) || (iVar2 == 2)) ||
           ((iVar2 == 6 ||
            (((iVar2 == 7 || (iVar2 == 8)) ||
             (fVar1 = (float)piVar3[0xb], !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))))))) {
          return 0;
        }
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x198;
    if (0xf < uVar4) {
      return 1;
    }
  } while( true );
}

// 00C9E210  FUN_00c9e210  size=33  [run]
undefined4 __thiscall FUN_00c9e210(int param_1,uint param_2)

{
  if (0xf < param_2) {
    return 1;
  }
  return *(undefined4 *)(param_2 * 0x660 + 0x694 + param_1);
}

// 00C9E290  FUN_00c9e290  size=68  [run]
void __fastcall FUN_00c9e290(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x58);
  do {
    iVar4 = 0x10;
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *puVar2 = puVar2[3];
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x198;
  } while (uVar3 < 0x10);
  return;
}

// 00C9E380  FUN_00c9e380  size=37  [run]
undefined4 __thiscall FUN_00c9e380(int param_1,uint param_2)

{
  if ((param_2 < 0x10) && (*(char *)(param_2 * 0x660 + 0x40 + param_1) != '\0')) {
    return *(undefined4 *)(param_2 * 0x660 + param_1 + 0x50);
  }
  return 0;
}

// 00C9E3B0  FUN_00c9e3b0  size=76  [run]
int __fastcall FUN_00c9e3b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x6b0);
  iVar3 = 4;
  do {
    if ((char)piVar2[-0x19c] != '\0') {
      iVar1 = iVar1 + piVar2[-0x198];
    }
    if ((char)piVar2[-4] != '\0') {
      iVar1 = iVar1 + *piVar2;
    }
    if ((char)piVar2[0x194] != '\0') {
      iVar1 = iVar1 + piVar2[0x198];
    }
    if ((char)piVar2[0x32c] != '\0') {
      iVar1 = iVar1 + piVar2[0x330];
    }
    piVar2 = piVar2 + 0x660;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

// 00C9E400  FUN_00c9e400  size=37  [run]
undefined4 __thiscall FUN_00c9e400(int param_1,uint param_2)

{
  if ((param_2 < 0x10) && (*(char *)(param_2 * 0x660 + 0x40 + param_1) != '\0')) {
    return *(undefined4 *)(param_2 * 0x660 + param_1 + 0x54);
  }
  return 0;
}

// 00C9E430  FUN_00c9e430  size=76  [run]
int __fastcall FUN_00c9e430(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x6b4);
  iVar3 = 4;
  do {
    if ((char)piVar2[-0x19d] != '\0') {
      iVar1 = iVar1 + piVar2[-0x198];
    }
    if ((char)piVar2[-5] != '\0') {
      iVar1 = iVar1 + *piVar2;
    }
    if ((char)piVar2[0x193] != '\0') {
      iVar1 = iVar1 + piVar2[0x198];
    }
    if ((char)piVar2[0x32b] != '\0') {
      iVar1 = iVar1 + piVar2[0x330];
    }
    piVar2 = piVar2 + 0x660;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

// 00C9E480  FUN_00c9e480  size=51  [run]
int __thiscall FUN_00c9e480(int param_1,uint param_2)

{
  char *pcVar1;
  
  if ((param_2 < 0x10) &&
     ((pcVar1 = (char *)(param_2 * 0x660 + 0x40 + param_1),
      *(int *)(param_2 * 0x660 + 0x4a4 + param_1) != 0 || (*pcVar1 != '\0')))) {
    return (*(int *)(pcVar1 + 0x24) - *(int *)(pcVar1 + 0x18)) + *(int *)(pcVar1 + 0x10);
  }
  return 0;
}

// 00C9E4C0  FUN_00c9e4c0  size=60  [run]
/* WARNING: Removing unreachable block (ram,0x00c9e4cd) */

int __fastcall FUN_00c9e4c0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = 0;
  piVar3 = (int *)(param_1 + 100);
  do {
    if ((piVar3[0x110] == 0) && ((char)piVar3[-9] == '\0')) {
      iVar2 = 0;
    }
    else {
      iVar2 = (piVar3[-5] - piVar3[-3]) + *piVar3;
    }
    uVar4 = uVar4 + 1;
    iVar1 = iVar1 + iVar2;
    piVar3 = piVar3 + 0x198;
  } while (uVar4 < 0x10);
  return iVar1;
}

// 00C9E500  FUN_00c9e500  size=47  [run]
bool __thiscall FUN_00c9e500(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 0x10) &&
     (iVar1 = param_2 * 0x660 + 0x40 + param_1, *(char *)(param_2 * 0x660 + 0x40 + param_1) != '\0')
     ) {
    return *(int *)(iVar1 + 0x18) < *(int *)(iVar1 + 0x24);
  }
  return false;
}

// 00C9E560  FUN_00c9e560  size=51  [run]
int __thiscall FUN_00c9e560(int param_1,uint param_2)

{
  char *pcVar1;
  
  if ((param_2 < 0x10) &&
     ((pcVar1 = (char *)(param_2 * 0x660 + 0x40 + param_1),
      *(int *)(param_2 * 0x660 + 0x4a4 + param_1) != 0 || (*pcVar1 != '\0')))) {
    return (*(int *)(pcVar1 + 0x24) - *(int *)(pcVar1 + 0x18)) + *(int *)(pcVar1 + 0x14);
  }
  return 0;
}

// 00C9E5A0  FUN_00c9e5a0  size=60  [run]
/* WARNING: Removing unreachable block (ram,0x00c9e5ad) */

int __fastcall FUN_00c9e5a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = 0;
  piVar3 = (int *)(param_1 + 100);
  do {
    if ((piVar3[0x110] == 0) && ((char)piVar3[-9] == '\0')) {
      iVar2 = 0;
    }
    else {
      iVar2 = (piVar3[-4] - piVar3[-3]) + *piVar3;
    }
    uVar4 = uVar4 + 1;
    iVar1 = iVar1 + iVar2;
    piVar3 = piVar3 + 0x198;
  } while (uVar4 < 0x10);
  return iVar1;
}

// 00C9E600  FUN_00c9e600  size=61  [run]
int __fastcall FUN_00c9e600(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = 0;
  iVar6 = 0;
  iVar5 = 0;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x6c4);
  iVar4 = 4;
  do {
    iVar1 = iVar1 + piVar2[-0x198];
    iVar3 = iVar3 + *piVar2;
    iVar5 = iVar5 + piVar2[0x198];
    iVar6 = iVar6 + piVar2[0x330];
    piVar2 = piVar2 + 0x660;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return iVar1 + iVar6 + iVar5 + iVar3;
}

// 00C9E690  FUN_00c9e690  size=71  [run]
int __fastcall FUN_00c9e690(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x674);
  iVar4 = 0x10;
  do {
    if ((*piVar2 < piVar2[1]) || ((char)piVar2[-0x18d] == '\0')) {
      iVar3 = piVar2[-0x184];
    }
    else {
      iVar3 = (piVar2[-0x189] - piVar2[-0x187]) + piVar2[-0x184];
    }
    iVar1 = iVar1 + iVar3;
    piVar2 = piVar2 + 0x198;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return iVar1;
}

// 00C9E720  FUN_00c9e720  size=71  [run]
int __fastcall FUN_00c9e720(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x674);
  iVar4 = 0x10;
  do {
    if ((*piVar2 < piVar2[1]) || ((char)piVar2[-0x18d] == '\0')) {
      iVar3 = piVar2[-0x184];
    }
    else {
      iVar3 = (piVar2[-0x188] - piVar2[-0x187]) + piVar2[-0x184];
    }
    iVar1 = iVar1 + iVar3;
    piVar2 = piVar2 + 0x198;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return iVar1;
}

// 00C9E770  FUN_00c9e770  size=73  [run]
uint __thiscall FUN_00c9e770(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if ((param_2 != 0) && (iVar1 = FUN_00e03ea0(param_2), iVar1 != 0)) {
    uVar2 = 0;
    piVar3 = (int *)(param_1 + 0x470);
    do {
      if (*piVar3 == iVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0x198;
    } while (uVar2 < 0x10);
    FUN_00dd5650(&DAT_016b1ba8,param_2);
  }
  return 0xffffffff;
}

// 00C9E840  FUN_00c9e840  size=39  [run]
void __thiscall FUN_00c9e840(int param_1,uint param_2,uint param_3)

{
  if ((((-1 < (int)param_2) && (param_2 < 0x10)) && (-1 < (int)param_3)) && (param_3 < 0x10)) {
    *(uint *)(param_2 * 0x660 + 0x68 + param_1) = param_3;
  }
  return;
}

// 00C9E8B0  FUN_00c9e8b0  size=46  [run]
undefined4 FUN_00c9e8b0(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 0x10) && (param_2 < 0x10)) {
    uVar1 = FUN_00a81330();
    return uVar1;
  }
  return 0;
}

// 00C9E8E0  FUN_00c9e8e0  size=57  [run]
int FUN_00c9e8e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (0xf < param_1) {
    return 0;
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  return 0;
}

// 00C9E920  FUN_00c9e920  size=97  [run]
int FUN_00c9e920(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if (0xf < param_1) {
    return 0;
  }
  uVar4 = 0;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x200))();
        if (iVar3 != 0) {
          return iVar1;
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  return 0;
}

// 00C9E990  FUN_00c9e990  size=166  [run]
int __thiscall FUN_00c9e990(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_4;
  
  local_4 = 0;
  if (0xf < param_2) {
    return 0;
  }
  iVar1 = FUN_00a81330();
  if (((iVar1 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) && (*(int *)(iVar2 + 0x80c) == param_3)
     ) {
    return iVar1;
  }
  if (0 < *(int *)(param_2 * 0x660 + param_1 + 0x54)) {
    uVar3 = 0;
    while (((local_4 = FUN_00a81330(), local_4 == 0 || (iVar1 = FUN_00a7c8a0(), iVar1 == 0)) ||
           (*(int *)(iVar1 + 0x80c) != param_3))) {
      uVar3 = uVar3 + 1;
      if (0xf < uVar3) {
        return 0;
      }
    }
  }
  return local_4;
}

// 00C9EA70  FUN_00c9ea70  size=52  [run]
undefined4 __thiscall FUN_00c9ea70(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((-1 < (int)param_2) && (param_2 < 0x10)) &&
     (*(int *)(param_2 * 0x660 + 0x660 + param_1) == 1)) {
    uVar1 = FUN_00a81330();
    return uVar1;
  }
  return 0;
}

// 00C9EAB0  FUN_00c9eab0  size=76  [run]
void __thiscall FUN_00c9eab0(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((((-1 < (int)param_2) && (param_2 < 0x10)) && (-1 < (int)param_3)) &&
     ((param_3 < 0x10 && (param_4 != 0)))) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    *(undefined4 *)(param_3 * 0x40 + param_2 * 0x660 + param_1 + 0x78) = 0;
  }
  return;
}

// 00C9EB00  FUN_00c9eb00  size=32  [run]
int __thiscall FUN_00c9eb00(int param_1,uint param_2)

{
  if (0xb < param_2) {
    return 0;
  }
  return (int)*(char *)(param_1 + 0x68c0 + param_2 * 0x44);
}

// 00C9EB20  FUN_00c9eb20  size=45  [run]
uint __thiscall FUN_00c9eb20(int param_1,uint param_2)

{
  if (0xb < param_2) {
    return 0;
  }
  return -(uint)(*(char *)(param_1 + 0x68c0 + param_2 * 0x44) != '\0') &
         param_1 + 0x68c0 + param_2 * 0x44;
}

// 00C9EB80  FUN_00c9eb80  size=34  [run]
int __thiscall FUN_00c9eb80(int param_1,uint param_2)

{
  int iVar1;
  
  if ((0xf < param_2) ||
     (iVar1 = param_1 + 0x6640 + param_2 * 0x24,
     *(char *)(param_1 + 0x6640 + param_2 * 0x24) == '\0')) {
    iVar1 = 0;
  }
  return iVar1;
}

// 00C9EBB0  FUN_00c9ebb0  size=23  [run]
void __thiscall FUN_00c9ebb0(int param_1,uint param_2)

{
  if (param_2 < 0x10) {
    *(undefined1 *)(param_2 * 0x660 + 0x43 + param_1) = 1;
  }
  return;
}

// 00C9ECA0  FUN_00c9eca0  size=23  [run]
void __thiscall FUN_00c9eca0(int param_1,uint param_2)

{
  if (param_2 < 0x10) {
    *(undefined1 *)(param_2 * 0x660 + 0x43 + param_1) = 0;
  }
  return;
}

// 00C9EE70  FUN_00c9ee70  size=59  [run]
bool FUN_00c9ee70(uint param_1,uint param_2)

{
  int iVar1;
  
  if ((((-1 < (int)param_1) && (param_1 < 0x10)) && (-1 < (int)param_2)) && (param_2 < 0x10)) {
    iVar1 = FUN_00a81330();
    return iVar1 == 0;
  }
  return false;
}

// 00C9EEF0  FUN_00c9eef0  size=65  [run]
bool __thiscall FUN_00c9eef0(int param_1,uint param_2,uint param_3)

{
  LONG LVar1;
  
  if ((((-1 < (int)param_2) && (param_2 < 0x10)) && (-1 < (int)param_3)) && (param_3 < 0x10)) {
    LVar1 = InterlockedIncrement((LONG *)(param_3 * 0x40 + 0x84 + param_2 * 0x660 + param_1));
    return LVar1 == 1;
  }
  return false;
}

// 00C9EFC0  FUN_00c9efc0  size=62  [run]
undefined4 __thiscall FUN_00c9efc0(int param_1,uint param_2,uint param_3,int param_4)

{
  if ((((-1 < (int)param_2) && (param_2 < 0x10)) && (-1 < (int)param_3)) &&
     ((param_3 < 0x10 &&
      (param_1 = param_2 * 0x660 + param_1, *(int *)(param_3 * 0x40 + 0x74 + param_1) == param_4))))
  {
    return *(undefined4 *)(param_3 * 0x40 + param_1 + 0xa4);
  }
  return 0;
}

