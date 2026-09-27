// src/misc/espEmt00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED1C40..00F25140, 7 functions

#include "mgrr.h"
#include "espEmt00.h"

// 00ED1C40  espEmt00::espEmt00  size=28  [class]
undefined4 * __fastcall espEmt00::espEmt00(undefined4 *param_1)

{
  cEspBase::cEspBase_8();
  *param_1 = vftable;
  param_1[0x148] = 0;
  return param_1;
}

// 00ED1D70  espEmt00::vf00  size=30  [class]
undefined4 __thiscall espEmt00::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_9();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EDACF0  espEmt00::vf20  size=3  [class]
void espEmt00::vf20(void)

{
  return;
}

// 00EF6600  espEmt00::vf10  size=584  [class]
void __fastcall espEmt00::vf10(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8;
  
  piVar5 = (int *)0x0;
  local_8 = 0;
  if (*(int *)(param_1 + 0x530) == 1) {
    piVar4 = *(int **)(param_1 + 0x424);
    while (piVar1 = piVar4, piVar1 != (int *)0x0) {
      piVar4 = (int *)piVar1[5];
      if ((piVar1[0xc] & 0xd0000000U) == 0) {
        iVar3 = FUN_009d58f0(piVar1);
        if (iVar3 != 0) {
          piVar1[0xc] = piVar1[0xc] | 2;
        }
        if (((piVar1[0x14] == 0) ||
            (((iVar3 = FUN_00a7c990(&DAT_01ee11f4), iVar3 == 0 &&
              (iVar3 = FUN_00a81330(), iVar3 != 0)) && (iVar3 = FUN_00a7c800(), iVar3 != 0)))) &&
           (iVar3 = FUN_009d5b00(piVar1), iVar3 != 0)) {
          if (piVar5 != (int *)0x0) {
            piVar1[0xc] = piVar1[0xc] | 0x100000;
            piVar1[0x68] = *piVar5;
            piVar1[0x69] = piVar5[1];
            piVar1[0x6a] = piVar5[2];
            piVar1[0x6b] = piVar5[3];
          }
          pcVar2 = *(code **)(*piVar1 + 0x10);
          piVar1[0xb] = 0;
          (*pcVar2)();
          piVar1[0xc] = piVar1[0xc] & 0xffefffff;
          if (piVar1[0xb] != 0) {
            *(int *)(piVar1[0xb] + 4) = local_8;
            local_8 = piVar1[0xb];
            piVar1[0xb] = 0;
            if ((piVar5 == (int *)0x0) && (piVar5 = piVar1 + 0x68, (piVar1[0xc] & 0x100000U) == 0))
            {
              piVar5 = piVar1 + 100;
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x530) != 2) {
      return;
    }
    piVar4 = *(int **)(param_1 + 0x420);
    if (piVar4 != (int *)0x0) {
      do {
        piVar1 = (int *)piVar4[6];
        if ((piVar4[0xc] & 0xd0000000U) == 0) {
          iVar3 = FUN_009d58f0(piVar4);
          if (iVar3 != 0) {
            piVar4[0xc] = piVar4[0xc] | 2;
          }
          if (((piVar4[0x14] == 0) ||
              (((iVar3 = FUN_00a7c990(&DAT_01ee11f4), iVar3 == 0 &&
                (iVar3 = FUN_00a81330(), iVar3 != 0)) && (iVar3 = FUN_00a7c800(), iVar3 != 0)))) &&
             (iVar3 = FUN_009d5b00(piVar4), iVar3 != 0)) {
            if (piVar5 != (int *)0x0) {
              piVar4[0xc] = piVar4[0xc] | 0x100000;
              piVar4[0x68] = *piVar5;
              piVar4[0x69] = piVar5[1];
              piVar4[0x6a] = piVar5[2];
              piVar4[0x6b] = piVar5[3];
            }
            pcVar2 = *(code **)(*piVar4 + 0x10);
            piVar4[0xb] = 0;
            (*pcVar2)();
            piVar4[0xc] = piVar4[0xc] & 0xffefffff;
            if (piVar4[0xb] != 0) {
              *(int *)(piVar4[0xb] + 4) = local_8;
              local_8 = piVar4[0xb];
              piVar4[0xb] = 0;
              if ((piVar5 == (int *)0x0) && (piVar5 = piVar4 + 0x68, (piVar4[0xc] & 0x100000U) == 0)
                 ) {
                piVar5 = piVar4 + 100;
              }
            }
          }
        }
        piVar4 = piVar1;
      } while (piVar1 != (int *)0x0);
      *(int *)(param_1 + 0x2c) = local_8;
      return;
    }
  }
  *(int *)(param_1 + 0x2c) = local_8;
  return;
}

// 00EF6850  espEmt00::vf1C  size=23  [class]
void espEmt00::vf1C(void *param_1,void *param_2)

{
  FID_conflict__memcpy(param_1,param_2,0x40);
  return;
}

// 00F09BA0  espEmt00::vf04  size=1586  [class]
void __thiscall espEmt00::vf04(int param_1,undefined4 *param_2,void *param_3,undefined4 param_4)

{
  void *_Dst;
  undefined4 *_Src;
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  short *psVar6;
  float10 fVar7;
  undefined1 auStack_c4 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  int local_a4;
  undefined1 local_a0 [16];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [24];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_c4;
  FID_conflict__memcpy((void *)(param_1 + 0x4e0),param_3,0x40);
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x54) = *param_2;
    *(undefined4 *)(param_1 + 0x58) = param_2[1];
    *(undefined4 *)(param_1 + 0x5c) = param_2[2];
  }
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = **(uint **)(param_1 + 0x58);
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar4 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | *(uint *)(uVar5 + 4);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | *(uint *)(uVar5 + 8);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar5 + 0x20);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x4000000;
  iVar2 = FUN_00efcbb0();
  if (iVar2 == 0) goto LAB_00f09e6b;
  if (*(byte *)(uVar5 + 0x15) == 0) {
    *(undefined4 *)(param_1 + 0x52c) = param_4;
  }
  else {
    *(uint *)(param_1 + 0x52c) = (uint)*(byte *)(uVar5 + 0x15);
  }
  FUN_00ddbbd0(*(undefined4 *)(param_1 + 0x52c));
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0x90), puVar3 == (uint *)0x0)) {
LAB_00f09ca3:
    uVar5 = *(int *)(param_1 + 0x28) + 0xc0;
  }
  else {
    uVar5 = *puVar3;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar4 = FUN_00f59ed0(9);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (uVar5 == 0) goto LAB_00f09ca3;
  }
  FUN_00ede4f0(uVar5);
  if ((*(uint *)(param_1 + 0x38) & 0x2000) != 0) {
    iVar2 = FUN_00a7c990(&DAT_01ee11f4);
    if ((((iVar2 != 0) || (iVar2 = FUN_00a81330(), iVar2 == 0)) ||
        (local_a4 = FUN_00a7c800(), local_a4 == 0)) || (*(int *)(param_1 + 0x50) == 0)) {
      FUN_009cca90(param_1,&DAT_016dd684);
LAB_00f09e6b:
      __security_check_cookie(local_14 ^ (uint)auStack_c4);
      return;
    }
    _Dst = (void *)(param_1 + 0x460);
    FID_conflict__memcpy(_Dst,(void *)(param_1 + 0x4e0),0x40);
    local_c0 = *(float *)(param_1 + 0x1f0);
    local_bc = *(float *)(param_1 + 500);
    local_b8 = *(float *)(param_1 + 0x1f8);
    FUN_00ddd140(local_a0,&local_c0);
    D3DXMatrixMultiply(_Dst,_Dst,local_a0);
    thunk_FUN_00ddc1d0(auStack_ac,param_1 + 0x1b0,5);
    D3DXMatrixMultiply(_Dst,_Dst,auStack_ac);
    *(float *)(param_1 + 0x490) = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x490);
    *(float *)(param_1 + 0x494) = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x494);
    *(float *)(param_1 + 0x498) = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x498);
    iVar2 = FUN_00a7c990(&DAT_01ee11f4);
    if (((iVar2 == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c800(), iVar2 != 0)) {
      iVar2 = FUN_00a12290(0xffffffff);
    }
    else {
      iVar2 = 0;
    }
    D3DXMatrixInverse(auStack_78,0,iVar2 + 0x10);
    D3DXMatrixMultiply(auStack_84,*(int *)(param_1 + 0x50) + 0x10,auStack_84);
    D3DXMatrixTranslation(auStack_90,uStack_60,uStack_5c,uStack_58);
    D3DXMatrixMultiply(_Dst,_Dst,local_a0);
    iVar2 = FUN_00a12210(0xffffffff);
    D3DXMatrixMultiply(_Dst,_Dst,iVar2 + 0x10);
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0x20), puVar3 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar3;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar4 = FUN_00f59ed0(2);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  if (*(ushort *)(uVar5 + 10) == 0) {
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  else {
    *(uint *)(param_1 + 0x120) = *(ushort *)(uVar5 + 10) + 1;
  }
  iVar2 = param_1 + 0x3a0;
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x118);
  *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x118) + 2.0;
  *(undefined4 *)(param_1 + 0x524) = 0xc2c80000;
  *(undefined4 *)(param_1 + 0x528) = 0xc2ca0000;
  FUN_00efd190(iVar2);
  FUN_00edfc20(iVar2);
  FUN_00efb130(iVar2);
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0xe0), puVar3 != (uint *)0x0)) {
    uVar1 = *puVar3;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar4 = FUN_00f59ed0(0xe);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (uVar1 != 0) {
      *(int *)(param_1 + 0x530) = (int)*(char *)(uVar1 + 0x17);
      if (*(undefined4 **)(param_1 + 0x58) == (undefined4 *)0x0) {
        psVar6 = (short *)0x0;
      }
      else {
        psVar6 = (short *)**(undefined4 **)(param_1 + 0x58);
        if ((short *)((int)psVar6 + 0xfU & 0xfffffff0) != psVar6) {
          uVar4 = FUN_00f59ed0(0);
          FUN_00dd5650(&DAT_016597b4,uVar4);
        }
      }
      iVar2 = *(int *)(param_1 + 0x530);
      if ((iVar2 != 0) && (*psVar6 != 0)) {
        FUN_009cca90(param_1,&DAT_016dd6b8,iVar2);
        __security_check_cookie(local_14 ^ (uint)auStack_c4);
        return;
      }
      if (2 < iVar2) {
        FUN_009cca90(param_1,&DAT_016dd6f4,iVar2);
        __security_check_cookie(local_14 ^ (uint)auStack_c4);
        return;
      }
    }
  }
  if (*(char *)(uVar5 + 0x10) != '\0') {
    _Src = (undefined4 *)(param_1 + 0x460);
    local_c0 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
    local_bc = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
    local_b8 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x498) = 0;
    *(undefined4 *)(param_1 + 0x494) = 0;
    *(undefined4 *)(param_1 + 0x490) = 0;
    *(undefined4 *)(param_1 + 0x48c) = 0;
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined4 *)(param_1 + 0x47c) = 0;
    *(undefined4 *)(param_1 + 0x478) = 0;
    *(undefined4 *)(param_1 + 0x470) = 0;
    *(undefined4 *)(param_1 + 0x46c) = 0;
    *(undefined4 *)(param_1 + 0x468) = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x49c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x488) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x474) = 0x3f800000;
    *_Src = 0x3f800000;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      D3DXMatrixRotationZ(local_a0,*(undefined4 *)(param_1 + 0x1c8));
      D3DXMatrixMultiply(_Src,auStack_a8,_Src);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY(local_a0,*(undefined4 *)(param_1 + 0x1c4));
      D3DXMatrixMultiply(_Src,auStack_a8,_Src);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX(local_a0,*(undefined4 *)(param_1 + 0x1c0));
      D3DXMatrixMultiply(_Src,auStack_a8,_Src);
    }
    *(float *)(param_1 + 0x490) = local_c0;
    *(float *)(param_1 + 0x494) = local_bc;
    *(float *)(param_1 + 0x498) = local_b8;
    D3DXMatrixMultiply(_Src,_Src,param_1 + 0x4e0);
    if (*(int *)(param_1 + 0x50) != 0) {
      D3DXMatrixMultiply(_Src,_Src,*(int *)(param_1 + 0x50) + 0x10);
    }
    FID_conflict__memcpy((void *)(param_1 + 0x4a0),_Src,0x40);
  }
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  if (((((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) &&
       (iVar2 = FUN_00a7c990(&DAT_01ee11f4), iVar2 == 0)) && (iVar2 = FUN_00a81330(), iVar2 != 0))
     && (iVar2 = FUN_00a7c890(), iVar2 != 0)) {
    fVar7 = (float10)FUN_00407b40(0);
    *(float *)(param_1 + 0x540) = (float)fVar7;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_c4);
  return;
}

// 00F25140  espEmt00::vf08  size=17  [class]
void __fastcall espEmt00::vf08(int param_1)

{
  FUN_00f1dad0();
  *(uint *)(param_1 + 0x520) = *(uint *)(param_1 + 0x520) | 2;
  return;
}

