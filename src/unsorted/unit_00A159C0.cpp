// src/unsorted/unit_00A159C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A159C0..00A160F0, 13 functions

#include "mgrr.h"

// 00A159C0  FUN_00a159c0  size=242  [run]
void __fastcall FUN_00a159c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x80));
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar2 = 0;
    if (*(short *)(param_1 + 0x88) != 0) {
      iVar3 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x84);
        iVar1 = *(int *)(iVar4 + iVar3);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar4 = *(int *)(iVar4 + iVar3 + 4);
        if (iVar4 != 0) {
          FUN_00dd4940(iVar4);
        }
        FUN_00fa26b0();
        FUN_00fa26b0();
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xa8;
      } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x88));
    }
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4) + -1;
      if (-1 < iVar3) {
        iVar4 = *(int *)(iVar2 + -4) * 0xa8 + 0x10 + iVar2;
        do {
          iVar4 = iVar4 + -0xa8;
          FUN_00401070(iVar4,0x4c,2,Hw::cTexture::cTexture_3);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      FUN_00dd4940(iVar2 + -4);
    }
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8e) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

// 00A15AC0  FUN_00a15ac0  size=256  [run]
undefined4 __thiscall
FUN_00a15ac0(int param_1,ushort param_2,ushort param_3,undefined2 param_4,undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  uint *_Dst;
  uint uVar3;
  
  FUN_00a159c0();
  *(undefined2 *)(param_1 + 0x8c) = param_4;
  if ((param_2 == 0) || (param_3 == 0)) {
    return 1;
  }
  iVar1 = FUN_00dd3580((uint)param_2 * 0x30,param_5);
  *(int *)(param_1 + 0x80) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = (uint)param_3;
  puVar2 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar3 * 0xa8) | uVar3 * 0xa8 + 4,param_5);
  if (puVar2 == (uint *)0x0) {
    _Dst = (uint *)0x0;
  }
  else {
    _Dst = puVar2 + 1;
    *puVar2 = uVar3;
    FUN_00401040(_Dst,0xa8,uVar3,&LAB_00a0c0e0);
  }
  *(uint **)(param_1 + 0x84) = _Dst;
  if (_Dst == (uint *)0x0) {
    return 0;
  }
  _memset(_Dst,0,uVar3 * 0xa8);
  *(ushort *)(param_1 + 0x88) = param_3;
  *(ushort *)(param_1 + 0x8a) = param_2;
  return 1;
}

// 00A15BC0  FUN_00a15bc0  size=134  [run]
void __thiscall FUN_00a15bc0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x8e) = *(char *)(param_1 + 0x8e) - 1U & 1;
  if (*(byte *)(param_1 + 0x8f) < 2) {
    *(byte *)(param_1 + 0x8f) = *(byte *)(param_1 + 0x8f) + 1;
  }
  if (*(short *)(param_1 + 0x8a) != 0) {
    FUN_00a15760(*(undefined4 *)(param_1 + 0x80));
    FUN_00a0c1a0();
  }
  iVar1 = (int)*(short *)(param_1 + 0x8c);
  if (((iVar1 < 0) || ((short)param_3[2] <= iVar1)) || (iVar1 = iVar1 * 0xb0 + *param_3, iVar1 == 0)
     ) {
    iVar1 = param_2;
  }
  D3DXMatrixTranspose((uint)*(byte *)(param_1 + 0x8e) * 0x40 + param_1,iVar1 + 0x10);
  return;
}

// 00A15C50  FUN_00a15c50  size=146  [run]
void __fastcall FUN_00a15c50(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar3 = FUN_00a0cd90();
    while (uVar3 != 0) {
      if (*(int *)(uVar3 + 8) == 0) {
        iVar1 = *(int *)(uVar3 + 0xc);
        *(int *)(param_1 + 0x38) = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 8) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(uVar3 + 8) + 0xc) = *(undefined4 *)(uVar3 + 0xc);
      }
      if (*(int *)(uVar3 + 0xc) == 0) {
        iVar1 = *(int *)(uVar3 + 8);
        *(int *)(param_1 + 0x3c) = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
        }
      }
      else {
        *(undefined4 *)(*(int *)(uVar3 + 0xc) + 8) = *(undefined4 *)(uVar3 + 8);
      }
      *(undefined4 *)(uVar3 + 8) = 0;
      *(undefined4 *)(uVar3 + 0xc) = 0;
      uVar2 = *(uint *)(param_1 + 0x18);
      if (((uVar2 != 0) && (uVar2 <= uVar3)) && (uVar3 < uVar2 + *(int *)(param_1 + 0x1c) * 0x18)) {
        FUN_00a0d380(uVar3);
      }
      uVar3 = FUN_00a0cd90();
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return;
}

// 00A15CF0  FUN_00a15cf0  size=274  [run]
void FUN_00a15cf0(undefined4 param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  FUN_00dd7ad0();
  piVar3 = (int *)FUN_00a0c8a0();
  while (piVar3 != (int *)0x0) {
    iVar5 = piVar3[1];
    if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x4c8) & 2) != 0)) {
      if (piVar3[4] == 0) {
        piVar1 = (int *)(param_2 + 0x28);
        piVar3[4] = 1;
        do {
          iVar4 = *piVar1;
          *piVar3 = iVar4;
          LOCK();
          iVar5 = *piVar1;
          if (iVar4 == iVar5) {
            *piVar1 = (int)piVar3;
          }
          UNLOCK();
        } while (iVar4 != iVar5);
        InterlockedIncrement((LONG *)(param_2 + 0x30));
        piVar3 = (int *)(param_2 + 0x44);
        do {
          iVar4 = *piVar3;
          LOCK();
          iVar5 = *piVar3;
          if (iVar4 == iVar5) {
            *piVar3 = 1;
          }
          UNLOCK();
        } while (iVar4 != iVar5);
      }
    }
    else {
      FUN_009fd6a0();
      bVar2 = false;
      if ((*(byte *)(iVar5 + 0x4c0) & 1) != 0) {
        bVar2 = 0 < *(short *)(iVar5 + 0x324);
      }
      FUN_00a0ab30(bVar2);
      iVar4 = FUN_009fde20();
      if ((iVar4 != 0) && (iVar5 = FUN_00a13f90(iVar5), iVar5 != 0)) {
        FUN_009f8a60();
      }
    }
    piVar3 = (int *)FUN_00a0c8a0();
  }
  return;
}

// 00A15E10  FUN_00a15e10  size=110  [run]
void __thiscall FUN_00a15e10(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    if (param_3 == 0) {
      pcVar1 = FUN_00a14100;
    }
    else {
      FUN_00dd75d0(FUN_00a15cf0,param_1,0xffffffff);
      FUN_00dd79a0(param_2);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
      pcVar1 = FUN_00a0c900;
    }
    FUN_00dd75d0(pcVar1,param_1,0xffffffff);
    FUN_00dd79a0(param_2);
  }
  return;
}

// 00A15E80  FUN_00a15e80  size=8  [run]
void FUN_00a15e80(void)

{
  FUN_00a15c50();
  return;
}

// 00A15E90  FUN_00a15e90  size=79  [run]
void FUN_00a15e90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00c1d6d0();
  if (iVar1 == 0) {
    iVar1 = FUN_00eb4300(0xfffffffd);
    if ((iVar1 == 0) && (DAT_01be8e50 < 2)) {
      FUN_00a15e10(param_1,param_2);
      return;
    }
  }
  FUN_00a15e10(param_1,0);
  return;
}

// 00A15F20  FUN_00a15f20  size=48  [run]
void __fastcall FUN_00a15f20(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00A15F50  FUN_00a15f50  size=116  [run]
undefined4 __thiscall FUN_00a15f50(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x1f0,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00a14650();
  return 1;
}

// 00A16000  FUN_00a16000  size=48  [run]
void __fastcall FUN_00a16000(int param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// 00A16030  FUN_00a16030  size=117  [run]
undefined4 __thiscall FUN_00a16030(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = FUN_00dd29b0(param_2 * 0x18,0x20,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(int *)(param_1 + 0x1c) = param_2;
  FUN_00a146f0();
  return 1;
}

// 00A160F0  FUN_00a160f0  size=43  [run]
void __fastcall FUN_00a160f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

