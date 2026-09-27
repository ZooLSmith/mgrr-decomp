// src/unsorted/unit_00A49540.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A49540..00A4C560, 78 functions

#include "mgrr.h"

// 00A49540  FUN_00a49540  size=68  [run]
undefined4 FUN_00a49540(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    piVar1 = (int *)FUN_00c14bb0();
    iVar2 = (**(code **)(*piVar1 + 4))();
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
    }
    return 0;
  }
  if ((*(uint *)(param_1 + 0x14) & 2) == 0) {
    piVar1 = (int *)FUN_00c18350();
    (**(code **)(*piVar1 + 8))(param_1);
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 2;
  }
  return 1;
}

// 00A495A0  FUN_00a495a0  size=195  [run]
void FUN_00a495a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_00de4550("_gaa.bxm",0);
  cXmlBinary::cXmlBinary_102(*param_1,uVar1);
  iVar2 = FUN_00de44b0(&DAT_01661c70,0);
  if (iVar2 != 0) {
    FUN_00eaf410(iVar2,*param_1,*param_1 >> 0x1f,0);
  }
  piVar3 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar3 + 4))(param_1,&DAT_01b7bd48);
  FUN_00c6a5e0(param_1);
  FUN_00c42270(*param_1);
  cXmlBinary::cXmlBinary_48(param_1);
  FUN_00957ef0(*param_1);
  FUN_00c1c0c0(*param_1);
  FUN_00987f10(*param_1);
  FUN_0094e7b0(*param_1);
  piVar3 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar3 + 0xc))(param_1);
  return;
}

// 00A496C0  FUN_00a496c0  size=8  [run]
void __fastcall FUN_00a496c0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 2;
  return;
}

// 00A496D0  FUN_00a496d0  size=10  [run]
bool __fastcall FUN_00a496d0(int param_1)

{
  return *(int *)(param_1 + 4) == 4;
}

// 00A496E0  FUN_00a496e0  size=4  [run]
undefined4 __fastcall FUN_00a496e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 00A49720  FUN_00a49720  size=50  [run]
void __thiscall FUN_00a49720(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (8 < param_3) {
    param_3 = 8;
  }
  iVar1 = 0;
  if (0 < (int)param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x214);
    do {
      *(undefined4 *)(param_2 + iVar1 * 4) = *puVar2;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < (int)param_3);
  }
  return;
}

// 00A49760  FUN_00a49760  size=40  [run]
void __thiscall FUN_00a49760(int param_1,int *param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x214;
  iVar1 = 8;
  do {
    (**(code **)(*param_2 + 8))(param_1);
    param_1 = param_1 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00A497E0  FUN_00a497e0  size=148  [run]
uint FUN_00a497e0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 != 0xffffffff) && (0xff < (int)param_1)) {
    uVar1 = param_1 & 0xff;
    if (uVar1 < 0x20) {
      param_1 = param_1 & 0xf00;
    }
    else if (uVar1 < 0x40) {
      param_1 = param_1 & 0xf00 | 0x20;
    }
    else if (uVar1 < 0x60) {
      param_1 = param_1 & 0xf00 | 0x40;
    }
    else if (uVar1 < 0x80) {
      param_1 = param_1 & 0xf00 | 0x60;
    }
    else if (uVar1 < 0xa0) {
      param_1 = param_1 & 0xf00 | 0x80;
    }
    else if (uVar1 < 0xc0) {
      param_1 = param_1 & 0xf00 | 0xa0;
    }
    else {
      if (0xdf < uVar1) {
        return 0xffffffff;
      }
      param_1 = param_1 & 0xf00 | 0xc0;
    }
    if (param_1 != 0) {
      return param_1;
    }
  }
  return 0xffffffff;
}

// 00A49940  FUN_00a49940  size=12  [run]
undefined4 __fastcall FUN_00a49940(undefined4 param_1)

{
  Hw::cTexture::cTexture();
  return param_1;
}

// 00A499A0  FUN_00a499a0  size=121  [run]
void __fastcall FUN_00a499a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_1 + 0xb;
  iVar2 = 0xb;
  do {
    iVar1 = iVar2;
    if (*piVar3 != 0) {
      FUN_00f972f0();
      FUN_00e9d6a0(*piVar3);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 9;
    iVar2 = iVar1 + -1;
  } while (iVar2 != 0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 2;
  param_1 = param_1 + 0xb;
  iVar1 = iVar1 + 10;
  do {
    *param_1 = 0;
    param_1 = param_1 + 9;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00A49A20  FUN_00a49a20  size=80  [run]
undefined4 __thiscall FUN_00a49a20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (10 < *(int *)(param_1 + 0x19c)) {
    return 0;
  }
  iVar1 = param_1 + 0x10 + *(int *)(param_1 + 0x19c) * 0x24;
  uVar2 = FUN_00e9e570(7,param_2,&DAT_01b82050,1,0);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x20) = param_3;
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  return 1;
}

// 00A49A70  FUN_00a49a70  size=233  [run]
undefined4 __fastcall FUN_00a49a70(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00f98a90();
  if (iVar2 < 0x557) {
    if (iVar2 == 0x556) {
      param_1[0x69] = 3;
    }
    else if (iVar2 == 800) {
      param_1[0x69] = 0;
    }
    else if (iVar2 == 0x400) {
      param_1[0x69] = 1;
    }
    else if (iVar2 == 0x500) {
      param_1[0x69] = 2;
    }
  }
  else if (iVar2 == 0x690) {
    param_1[0x69] = 4;
  }
  else if (iVar2 == 0x780) {
    param_1[0x69] = 5;
  }
  iVar2 = 0;
  do {
    iVar1 = param_1[0x67];
    if (iVar1 < 0xb) {
      uVar3 = FUN_00e9e570(7,(&PTR_s_logo_konami_wtb_018a0980)[iVar2 + param_1[0x69] * 6],
                           &DAT_01b82050,1,0);
      param_1[iVar1 * 9 + 0xc] = 0x40000000;
      param_1[iVar1 * 9 + 0xb] = uVar3;
      param_1[0x67] = param_1[0x67] + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  *param_1 = 0;
  param_1[1] = 0;
  return 1;
}

// 00A49B60  FUN_00a49b60  size=278  [run]
void __fastcall FUN_00a49b60(int *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1[0x68] == 0) {
    switch(*param_1) {
    case 0:
      iVar1 = param_1[1];
      iVar3 = FUN_00e9cf60(param_1[iVar1 * 9 + 0xb]);
      if (iVar3 != 0) {
        uVar4 = FUN_00e9d0b0(param_1[iVar1 * 9 + 0xb]);
        FUN_00fa25d0(uVar4);
        *param_1 = *param_1 + 1;
      }
      return;
    case 1:
      fVar2 = (float)param_1[2] + 0.016666668;
      param_1[2] = (int)fVar2;
      if (!NAN(fVar2) && 1.0 < fVar2 != (fVar2 == 1.0)) {
        param_1[2] = 0x3f800000;
        iVar1 = param_1[param_1[1] * 9 + 0xc];
        *param_1 = 2;
        param_1[3] = iVar1;
        return;
      }
      break;
    case 2:
      fVar2 = (float)param_1[3];
      param_1[3] = (int)(fVar2 - 0.016666668);
      if (((fVar2 - 0.016666668 <= 0.0) || ((DAT_01b7b914 & 0xf0) != 0)) ||
         ((DAT_01b7b914 & 0x100) != 0)) {
        param_1[3] = 0;
        *param_1 = 3;
        return;
      }
      break;
    case 3:
      fVar2 = (float)param_1[2];
      param_1[2] = (int)(fVar2 - 0.016666668);
      if (fVar2 - 0.016666668 <= 0.0) {
        param_1[2] = 0;
        *param_1 = 4;
        return;
      }
      break;
    case 4:
      param_1[1] = param_1[1] + 1;
      if (param_1[1] < param_1[0x67]) {
        *param_1 = 0;
        return;
      }
      param_1[1] = -1;
      param_1[0x68] = 1;
      return;
    }
  }
  return;
}

// 00A49D20  FUN_00a49d20  size=15  [run]
undefined4 __fastcall FUN_00a49d20(undefined4 param_1)

{
  FUN_00de3530();
  return param_1;
}

// 00A49D40  FUN_00a49d40  size=127  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00a49d40(int param_1)

{
  DAT_01bea060 = 0;
  DAT_01bea064 = 0;
  _DAT_01bea068 = 0;
  _DAT_01bea06c = 0;
  DAT_01bea070 = 0;
  DAT_01bea074 = 0;
  _DAT_01bea078 = 0;
  _DAT_01bea07c = 0;
  _DAT_01bea080 = 0;
  DAT_01bea084 = 0;
  DAT_01bea088 = 0;
  _DAT_01bea08c = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 1;
  return 1;
}

// 00A49DC0  FUN_00a49dc0  size=438  [run]
undefined4 __fastcall FUN_00a49dc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  FUN_00dd5650("--- STARTUP BOOT CORE ---");
  FUN_00e5da30();
  uVar1 = FUN_00df7f70();
  FUN_00deb490(local_80,0x40,"core.dat",uVar1);
  uVar1 = FUN_00df7f70();
  FUN_00deb490(local_40,0x40,"core.dtt",uVar1);
  FUN_00dd5650("--- READ CORE FILE ---");
  uVar1 = FUN_00e9e570(1,local_80,&DAT_01b7c320,0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00e9e570(1,local_40,&DAT_01b80140,0,0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  iVar2 = FUN_00cac2c0();
  if (iVar2 != 0) {
    iVar2 = FUN_00df7c00(8);
    while (iVar2 == 0) {
      iVar2 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x24));
      if (((iVar2 != 0) && (iVar2 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x28)), iVar2 != 0)) &&
         (iVar2 = FUN_00cac2d0(), iVar2 != 0)) {
        FUN_00dd5650("--- END READ CORE FILE ---");
        uVar1 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x24));
        uVar3 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x28));
        param_1 = param_1 + 0x2c;
        FUN_00de3540(uVar1,uVar3);
        FUN_00e51d80(param_1,0);
        FUN_00e46930(param_1,0);
        iVar2 = FUN_00943f70(&DAT_01b7bcf0);
        if (iVar2 != 0) {
          piVar4 = (int *)FUN_0093deb0();
          (**(code **)(*piVar4 + 0xc))(param_1);
        }
        iVar2 = FUN_0093d160(&DAT_01b7bcf0);
        if (iVar2 != 0) {
          piVar4 = (int *)FUN_0093bfd0();
          (**(code **)(*piVar4 + 0xc))(param_1);
        }
        FUN_00ebf000();
        FUN_00eaf6c0();
        FUN_00eaf700(param_1);
        return 1;
      }
      FUN_00dd89a0(1);
      iVar2 = FUN_00df7c00(8);
    }
  }
  return 0;
}

// 00A4A000  FUN_00a4a000  size=291  [run]
void __fastcall FUN_00a4a000(int param_1)

{
  undefined4 uVar1;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  uVar1 = FUN_00df7f70();
  FUN_00deb490(local_80,0x40,"core/coreeff.dat",uVar1);
  uVar1 = FUN_00df7f70();
  FUN_00deb490(local_40,0x40,"core/coreeff.dtt",uVar1);
  uVar1 = FUN_00e9e570(1,local_80,&DAT_01b7c320,0,0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = FUN_00e9e570(1,local_40,&DAT_01b824c0,0,0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_00df7f70();
  FUN_00deb490(local_80,0x40,"core/coreui.dat",uVar1);
  uVar1 = FUN_00df7f70();
  FUN_00deb490(local_40,0x40,"core/coreui.dtt",uVar1);
  uVar1 = FUN_00e9e570(1,local_80,&DAT_01b7c320,0,0);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_00e9e570(1,local_40,&DAT_01b82930,0,0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_00df7f70();
  FUN_00deb490(local_80,0x40,"core/coredlc.dat",uVar1);
  uVar1 = FUN_00e9e570(1,local_80,&DAT_01b7c320,0,0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  thunk_FUN_00dc2560();
  return;
}

// 00A4A130  FUN_00a4a130  size=119  [run]
bool __fastcall FUN_00a4a130(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x34));
  if (iVar1 != 0) {
    iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x38));
    if (iVar1 != 0) {
      iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x44));
      if (iVar1 != 0) {
        iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x48));
        if (iVar1 != 0) {
          iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x54));
          if (iVar1 != 0) {
            iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x58));
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return false;
}

// 00A4A1B0  FUN_00a4a1b0  size=127  [run]
void __fastcall FUN_00a4a1b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x34));
  uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x38));
  FUN_00de3540(uVar1,uVar2);
  uVar1 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x44));
  uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x48));
  FUN_00de3540(uVar1,uVar2);
  uVar1 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x54));
  uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x58));
  FUN_00de3540(uVar1,uVar2);
  return;
}

// 00A4A230  FUN_00a4a230  size=153  [run]
void __fastcall FUN_00a4a230(int param_1)

{
  FUN_00de3540(0,0);
  FUN_00de3540(0,0);
  FUN_00de3540(0,0);
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x54));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x58));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x44));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x48));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x34));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x38));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x24));
  FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x28));
  return;
}

// 00A4A2D0  FUN_00a4a2d0  size=3  [run]
undefined4 FUN_00a4a2d0(void)

{
  return 0;
}

// 00A4A320  FUN_00a4a320  size=44  [run]
undefined4 FUN_00a4a320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 < 0xef8) && ((0xef2 < param_1 || ((0xc07 < param_1 && (param_1 < 0xc0a)))))) {
    uVar1 = 1;
  }
  return uVar1;
}

// 00A4A350  FUN_00a4a350  size=92  [run]
undefined4 FUN_00a4a350(uint param_1)

{
  if ((((((param_1 != 0xd20) && (param_1 != 0xd21)) && ((param_1 & 0xffffff00) != 0xe00)) &&
       (((int)param_1 < 0xc71 || (0xc7f < (int)param_1)))) &&
      ((0xf < param_1 - 0xc00 && (((int)param_1 < 0xd71 || (0xd7f < (int)param_1)))))) &&
     (0xf < param_1 - 0xd20)) {
    return 0;
  }
  return 1;
}

// 00A4A3D0  FUN_00a4a3d0  size=27  [run]
undefined4 FUN_00a4a3d0(int param_1)

{
  if ((param_1 != 0xd20) && (param_1 != 0xd21)) {
    return 0;
  }
  return 1;
}

// 00A4A410  FUN_00a4a410  size=31  [run]
void FUN_00a4a410(uint param_1)

{
  (&DAT_01bea09c)[param_1 >> 5] =
       (&DAT_01bea09c)[param_1 >> 5] & ~(0x80000000U >> ((byte)param_1 & 0x1f));
  return;
}

// 00A4A4E0  FUN_00a4a4e0  size=134  [run]
void FUN_00a4a4e0(void)

{
  int iVar1;
  
  if (((DAT_01bea060 & 0x4000) != 0) &&
     (cObjReadManager::updateHookLoading(), (DAT_01bea060 & 0x4000) != 0)) {
    return;
  }
  FUN_00dd8da0();
  if ((DAT_01bea060 & 0x4000) != 0) {
    return;
  }
  FUN_00907360();
  FUN_009074a0();
  FUN_00907bb0();
  iVar1 = FUN_00982280();
  if (iVar1 == 0) {
    DAT_01be8e3e = 1;
  }
  FUN_00ebdcc0();
  thunk_FUN_009c9410();
  FUN_00a1d3f0();
  return;
}

// 00A4A570  FUN_00a4a570  size=134  [run]
void FUN_00a4a570(void)

{
  _PROCESS_INFORMATION local_25c;
  _STARTUPINFOA local_24c;
  CHAR local_208 [520];
  
  if (DAT_01be8e3d != '\0') {
    GetModuleFileNameA((HMODULE)0x0,local_208,0x208);
    local_25c.hProcess = (HANDLE)0x0;
    local_25c.hThread = (HANDLE)0x0;
    local_25c.dwProcessId = 0;
    local_25c.dwThreadId = 0;
    _memset(&local_24c,0,0x44);
    local_24c.wShowWindow = 1;
    local_24c.cb = 0x44;
    local_24c.dwFlags = 1;
    CreateProcessA((LPCSTR)0x0,local_208,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0,0,
                   (LPVOID)0x0,(LPCSTR)0x0,&local_24c,&local_25c);
  }
  return;
}

// 00A4A6B0  FUN_00a4a6b0  size=23  [run]
void FUN_00a4a6b0(void)

{
  DAT_01bea060 = DAT_01bea060 | 0x4000;
  FUN_00dd8570(1);
  return;
}

// 00A4A6D0  FUN_00a4a6d0  size=11  [run]
void FUN_00a4a6d0(void)

{
  DAT_01bea060 = DAT_01bea060 & 0xffffbfff;
  return;
}

// 00A4A710  FUN_00a4a710  size=41  [run]
uint __fastcall FUN_00a4a710(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_00cac330();
    if (iVar1 != 0) {
      iVar1 = FUN_00c1d6c0();
      return ~-(uint)(iVar1 != 0) & DAT_01b5d1dc;
    }
  }
  return 0;
}

// 00A4A740  FUN_00a4a740  size=331  [run]
undefined4 __fastcall FUN_00a4a740(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00c20a50();
  if ((((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) && (iVar1 != 1)) &&
     (iVar1 != 2)) {
    return 0;
  }
  iVar1 = FUN_00a53ae0();
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    iVar1 = FUN_00c1d6f0();
    if ((iVar1 != 0) || (iVar1 = thunk_FUN_009c5800(), iVar1 != 0)) {
      iVar1 = thunk_FUN_009c5800();
      if (iVar1 != 0) {
        thunk_FUN_00e7d700();
      }
      uVar3 = cFade::set(0,0xff000000,0xff000000,0,1,0,0x68);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      return 0;
    }
    break;
  case 1:
    iVar2 = FUN_00c1d6c0();
    if ((iVar2 != 0) && (iVar2 = thunk_FUN_009c5800(), iVar2 == 0)) {
      return 0;
    }
    iVar2 = thunk_FUN_009c5800();
    if (iVar2 != 0) {
      thunk_FUN_00e7d700();
    }
    FUN_00ebdd50(*(undefined4 *)(param_1 + 0xc));
    uVar3 = cFade::set(0,0xff000000,0,0x1e,1,0,0x68);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      return 0;
    }
    goto LAB_00a4a87b;
  case 2:
    iVar1 = FUN_00eb4340(*(undefined4 *)(param_1 + 0xc));
    if (iVar1 != 0) {
      FUN_00ebdd50(*(undefined4 *)(param_1 + 0xc));
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return 0;
    }
    break;
  case 3:
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
LAB_00a4a87b:
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return 0;
}

// 00A4A8A0  FUN_00a4a8a0  size=190  [run]
undefined4 __fastcall FUN_00a4a8a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(code **)(param_1 + 0x80) != (code *)0x0) {
    uVar3 = (**(code **)(param_1 + 0x80))();
    FUN_00d381c0();
    return uVar3;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_00eb4340(*(int *)(param_1 + 0xc));
    if (iVar1 != 0) {
      FUN_00ebdd50(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) goto LAB_00a4a932;
  iVar1 = FUN_00c1d6c0();
  if (iVar1 == 0) {
    if ((DAT_01bea064 & 0x40000000) != 0) {
      uVar3 = 10;
      goto LAB_00a4a90d;
    }
    uVar3 = 0x5a;
    uVar2 = 0;
  }
  else {
    uVar3 = 0x5a;
LAB_00a4a90d:
    uVar2 = 0xff000000;
  }
  uVar3 = cFade::set(0,0xff000000,uVar2,uVar3,1,0,0x68);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0xd4) = 0;
LAB_00a4a932:
  DAT_01bea084 = DAT_01bea084 & 0xffff7fff;
  FUN_00d381c0();
  return 0;
}

// 00A4AA40  FUN_00a4aa40  size=55  [run]
uint FUN_00a4aa40(void)

{
  uint uVar1;
  
  uVar1 = DAT_018b9148 >> 8 & 0xf;
  if (uVar1 == 10) {
    return 0;
  }
  if (uVar1 != 0xc) {
    if (uVar1 != 0xd) {
      if (9 < uVar1) {
        uVar1 = 0xffffffff;
      }
      return uVar1;
    }
    return 9;
  }
  return 8;
}

// 00A4AA80  FUN_00a4aa80  size=9  [run]
void __thiscall FUN_00a4aa80(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 00A4AA90  FUN_00a4aa90  size=92  [run]
void __fastcall FUN_00a4aa90(int param_1)

{
  undefined4 uVar1;
  
  FUN_00d4f170();
  FUN_009c83f0(0);
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0xc));
  }
  uVar1 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 4) = 4;
  *(undefined4 *)(param_1 + 0xd4) = 1;
  return;
}

// 00A4AAF0  FUN_00a4aaf0  size=326  [run]
undefined4 __thiscall
FUN_00a4aaf0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_8 != 0) {
    piVar1 = (int *)FUN_00c13920();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x84))();
    }
    if (DAT_01b76230 == -1) {
      DAT_01b76230 = 1;
    }
  }
  if (param_2 == -1) {
    iVar2 = 0x101;
  }
  else {
    iVar2 = (-(uint)(param_8 != 0) & 0xff) + 1;
  }
  if ((DAT_01be9218 == 1) || (DAT_01be9218 == 0x100)) {
    FUN_00d59170();
  }
  DAT_01be921c = param_4;
  DAT_01be9220 = param_5;
  DAT_01be9218 = iVar2;
  if (param_2 == -1) {
    FUN_00d46540(0xffffffff,0);
  }
  else {
    if (param_3 == 0) {
      param_3 = FUN_00d45a20(param_2);
    }
    FUN_00d4f230(param_2,param_3);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0xc));
  }
  if (param_6 != -1) {
    FUN_00c1d5b0(param_6,0);
    *(undefined4 *)(param_1 + 4) = 4;
    return 1;
  }
  if (param_7 == 0) {
    uVar4 = 0x1e;
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0xff000000;
  }
  uVar3 = cFade::set(0,uVar3,0xff000000,uVar4,1,0,0x68);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 4) = 4;
  return 1;
}

// 00A4AC40  FUN_00a4ac40  size=263  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00a4ac40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((DAT_01bea060 & 0x20000000) != 0) {
    return 0;
  }
  if (((_DAT_01bea098 & 0x80000000) != 0) &&
     ((((param_2 == 0xf07 || (param_2 == 0xf31)) || (param_2 == 0xf33)) ||
      ((param_2 == 0x730 && (param_4 != -1)))))) {
    FUN_00cad0c0();
    if ((DAT_01be9218 == 1) || (DAT_01be9218 == 0x100)) {
      FUN_00d59170();
    }
    DAT_01be921c = 0xffffffff;
    DAT_01be9220 = 0;
    DAT_01be9218 = 1;
    FUN_00d4f230(0xf01,"PF01_START");
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00ebdd50(*(int *)(param_1 + 0xc));
    }
    uVar1 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 4) = 4;
    return 1;
  }
  uVar1 = FUN_00a4aaf0(param_2,param_3,0xffffffff,0,param_4,0,0);
  return uVar1;
}

// 00A4AD50  FUN_00a4ad50  size=48  [run]
undefined4 FUN_00a4ad50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((DAT_01bea060 & 0x20000000) != 0) {
    return 0;
  }
  uVar1 = FUN_00a4aaf0(param_1,param_2,0xffffffff,0,param_3,1,0);
  return uVar1;
}

// 00A4AD80  FUN_00a4ad80  size=169  [run]
undefined4 __fastcall FUN_00a4ad80(int param_1)

{
  undefined4 uVar1;
  
  if ((DAT_01bea060 & 0x20000000) != 0) {
    return 0;
  }
  if ((DAT_01be9218 == 1) || (DAT_01be9218 == 0x100)) {
    FUN_00d59170();
  }
  DAT_01be921c = 0xffffffff;
  DAT_01be9220 = 0;
  DAT_01be9218 = 1;
  uVar1 = FUN_00d45a20(0xf01);
  FUN_00d4f230(0xf01,uVar1);
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0xc));
  }
  uVar1 = cFade::set(0,0,0xff000000,0x1e,1,0,0x68);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 4) = 4;
  return 1;
}

// 00A4AE30  FUN_00a4ae30  size=43  [run]
undefined4 FUN_00a4ae30(void)

{
  int iVar1;
  
  iVar1 = FUN_00932720();
  if ((iVar1 < 0xef8) && ((0xef2 < iVar1 || (iVar1 - 0xc08U < 2)))) {
    return 1;
  }
  return 0;
}

// 00A4AE60  FUN_00a4ae60  size=15  [run]
void FUN_00a4ae60(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00932720();
  FUN_00a4a350(uVar1);
  return;
}

// 00A4AE70  FUN_00a4ae70  size=23  [run]
bool FUN_00a4ae70(void)

{
  uint uVar1;
  
  uVar1 = FUN_00932720();
  return (uVar1 & 0xffffff00) == 0xa00;
}

// 00A4AE90  FUN_00a4ae90  size=64  [run]
void __thiscall FUN_00a4ae90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      local_20 = 0;
      local_1c = param_3;
      local_18 = 0;
      (**(code **)(*piVar1 + 0x7c))(param_2,&local_20);
    }
  }
  return;
}

// 00A4AED0  FUN_00a4aed0  size=88  [run]
uint __thiscall FUN_00a4aed0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 + 0xd8);
  do {
    uVar3 = *puVar1;
    if (0xffffffe < *puVar1) {
      *puVar1 = 0x10;
    }
    LOCK();
    uVar2 = *puVar1;
    if (uVar3 == uVar2) {
      *puVar1 = uVar3 + param_2;
    }
    UNLOCK();
  } while (uVar3 != uVar2);
  return uVar3;
}

// 00A4AF30  FUN_00a4af30  size=93  [run]
uint __thiscall FUN_00a4af30(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 + 0xdc);
  do {
    uVar3 = *puVar1;
    if (0xffffffe < *puVar1) {
      *puVar1 = 0x10;
    }
    LOCK();
    uVar2 = *puVar1;
    if (uVar3 == uVar2) {
      *puVar1 = uVar3 + param_2;
    }
    UNLOCK();
  } while (uVar3 != uVar2);
  return uVar3 | 0x80000000;
}

// 00A4AF90  FUN_00a4af90  size=88  [run]
uint __thiscall FUN_00a4af90(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 + 0xe0);
  do {
    uVar3 = *puVar1;
    if (0xffffffe < *puVar1) {
      *puVar1 = 0x10;
    }
    LOCK();
    uVar2 = *puVar1;
    if (uVar3 == uVar2) {
      *puVar1 = uVar3 + param_2;
    }
    UNLOCK();
  } while (uVar3 != uVar2);
  return uVar3;
}

// 00A4B080  FUN_00a4b080  size=199  [run]
void FUN_00a4b080(void)

{
  uint uVar1;
  
  FUN_00a28830();
  FUN_009d5f00();
  FUN_00a40e10();
  FUN_00eb0450();
  FUN_00eb5760(1);
  FUN_00f45840();
  FUN_009d5f80();
  FUN_00a200a0();
  FUN_00eb0210();
  FUN_00eab070();
  FUN_00a43e40();
  FUN_00eb2490(DAT_01beb8c0);
  FUN_00f98f20(-(uint)(DAT_01ddab50 != '\0') & 0x1edd290,DAT_01ddab50);
  FUN_00a45a50();
  FUN_00a0de70();
  uVar1 = DAT_01bea09c & 0x80000000;
  FUN_00a0da20();
  FUN_00a15e90(5,uVar1 == 0);
  return;
}

// 00A4B150  FUN_00a4b150  size=108  [run]
undefined4 FUN_00a4b150(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e086a0(param_1,0x42700000);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00e08640(0);
  FUN_00e08640(1);
  FUN_00e08640(2);
  FUN_00e08640(3);
  FUN_00e08640(3);
  FUN_00e08640(0);
  return 1;
}

// 00A4B210  FUN_00a4b210  size=10  [run]
void FUN_00a4b210(void)

{
  FUN_00e087f0();
  return;
}

// 00A4B270  FUN_00a4b270  size=15  [run]
undefined4 __fastcall FUN_00a4b270(undefined4 param_1)

{
  Hw::cTexture::cTexture();
  return param_1;
}

// 00A4B290  FUN_00a4b290  size=25  [run]
void __fastcall FUN_00a4b290(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    *param_1 = 0xffffffff;
    param_1[9] = 0;
    param_1 = param_1 + 10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00A4B300  FUN_00a4b300  size=58  [run]
void __fastcall FUN_00a4b300(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f99270(param_1[1]);
  if (iVar1 != 0) {
    FUN_00fa3830(iVar1);
  }
  FUN_00f972f0();
  param_1[1] = 0;
  param_1[9] = 0;
  *param_1 = 0xffffffff;
  return;
}

// 00A4B430  FUN_00a4b430  size=33  [run]
int __fastcall FUN_00a4b430(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x84);
  do {
    if (*piVar2 == 0) {
      return param_1 + (uVar1 * 3 + 0x21) * 4;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (uVar1 < 0x40);
  return 0;
}

// 00A4B460  FUN_00a4b460  size=31  [run]
undefined4 __fastcall FUN_00a4b460(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x8c);
  do {
    if (*piVar2 != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (uVar1 < 0x40);
  return 0;
}

// 00A4B480  FUN_00a4b480  size=39  [run]
void __fastcall FUN_00a4b480(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x8c);
  iVar2 = 0x40;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0xffffffff;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00A4B4B0  FUN_00a4b4b0  size=166  [run]
int __fastcall FUN_00a4b4b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_4;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x84);
  local_4 = 0x40;
  do {
    if (*piVar4 != 0) {
      iVar1 = FUN_00e9cf60(*piVar4);
      if (iVar1 != 0) {
        iVar1 = FUN_00f9e370(piVar4[1]);
        if (iVar1 == 0) {
          FUN_00f972f0();
          FUN_00e9d6a0(*piVar4);
        }
        else {
          *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x400000;
          *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xffdfffff;
          FUN_00f972f0();
          uVar2 = FUN_00e9d0b0(*piVar4);
          FUN_00fa25d0(uVar2);
        }
        *piVar4 = 0;
        piVar4[1] = -1;
        piVar4[2] = 0;
        iVar3 = iVar3 + 1;
      }
    }
    piVar4 = piVar4 + 3;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return iVar3;
}

// 00A4B560  FUN_00a4b560  size=62  [run]
void __fastcall FUN_00a4b560(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x84);
  iVar1 = 0x40;
  do {
    if (*piVar2 != 0) {
      FUN_00e9d6a0(*piVar2);
      *piVar2 = 0;
      piVar2[1] = -1;
      piVar2[2] = 0;
    }
    piVar2 = piVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00A4B5C0  FUN_00a4b5c0  size=25  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a4b5c0(void)

{
  _DAT_01be85f8 = 0;
  _DAT_01be85f4 = 0;
  _DAT_01be85f0 = 0;
  return;
}

// 00A4B5F0  FUN_00a4b5f0  size=25  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a4b5f0(void)

{
  _DAT_01be85f8 = _DAT_01be85f8 + 1;
  _DAT_01be85f4 = _DAT_01be85f4 + 1.0;
  return;
}

// 00A4B610  FUN_00a4b610  size=23  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a4b610(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00e049b0();
  _DAT_01be85f0 = (float)(fVar1 + (float10)_DAT_01be85f0);
  return;
}

// 00A4B740  FUN_00a4b740  size=120  [run]
undefined4 __thiscall FUN_00a4b740(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00A4BAC0  FUN_00a4bac0  size=36  [run]
undefined4 * __fastcall FUN_00a4bac0(undefined4 *param_1)

{
  FUN_00de3530();
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return param_1;
}

// 00A4BAF0  FUN_00a4baf0  size=36  [run]
undefined4 * __fastcall FUN_00a4baf0(undefined4 *param_1)

{
  FUN_00de3530();
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return param_1;
}

// 00A4BB20  FUN_00a4bb20  size=60  [run]
int __fastcall FUN_00a4bb20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  iVar2 = 7;
  do {
    FUN_00de3530();
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1 = puVar1 + 0xf;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return param_1;
}

// 00A4BB70  FUN_00a4bb70  size=40  [run]
void __fastcall FUN_00a4bb70(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = local_14;
  return;
}

// 00A4BD40  FUN_00a4bd40  size=70  [run]
void __fastcall FUN_00a4bd40(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    param_1 = param_1 + 0x14;
    iVar1 = 8;
    do {
      if (param_1[1] == 0xd) {
        FUN_00e5f8c0(param_1 + -9);
        FUN_00e51d60(param_1 + -9);
      }
      param_1[-2] = -1;
      *param_1 = -1;
      param_1[-1] = -1;
      param_1[-3] = 0;
      param_1[1] = 0;
      param_1 = param_1 + 0xf;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 00A4BDD0  FUN_00a4bdd0  size=28  [run]
int __fastcall FUN_00a4bdd0(int param_1)

{
  if ((*(int *)(param_1 + 0x1f8) != 0) && (*(int *)(param_1 + 0x1ec) == -1)) {
    return param_1 + 0x1d0;
  }
  return 0;
}

// 00A4BDF0  FUN_00a4bdf0  size=150  [run]
bool __thiscall FUN_00a4bdf0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == -2) {
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0x54);
    do {
      if ((*piVar1 != 0) && (piVar1[-1] != -1)) {
        switch(*piVar1) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
          goto switchD_00a4be18_caseD_1;
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xf;
      if (7 < iVar2) {
        return *(int *)(param_1 + 4) == 0;
      }
    } while( true );
  }
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x48);
  while ((piVar1[3] == 0 || (*piVar1 != param_2))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0xf;
    if (7 < iVar2) {
switchD_00a4be18_caseD_1:
      return false;
    }
  }
  iVar2 = param_1 + 0x2c + iVar2 * 0x3c;
  if (iVar2 == 0) {
    return false;
  }
  if (*(int *)(iVar2 + 0x24) != -1) {
    switch(*(undefined4 *)(iVar2 + 0x28)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      goto switchD_00a4be18_caseD_1;
    }
  }
  return true;
}

// 00A4BF00  FUN_00a4bf00  size=91  [run]
bool __fastcall FUN_00a4bf00(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  bVar1 = false;
  piVar5 = (int *)(param_1 + 8);
  iVar4 = 8;
  do {
    if (*piVar5 != -1) {
      iVar2 = 0;
      piVar3 = (int *)(param_1 + 0x48);
      do {
        if ((piVar3[3] != 0) && (*piVar3 == *piVar5)) {
          if (param_1 + 0x2c + iVar2 * 0x3c != 0) goto LAB_00a4bf49;
          break;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 0xf;
      } while (iVar2 < 8);
      bVar1 = true;
    }
LAB_00a4bf49:
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return !bVar1;
    }
  } while( true );
}

// 00A4BF60  FUN_00a4bf60  size=150  [run]
bool __thiscall FUN_00a4bf60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == -2) {
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0x54);
    do {
      if ((*piVar1 != 0) && (piVar1[-1] != -1)) {
        switch(*piVar1) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
          goto switchD_00a4bf88_caseD_2;
        }
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xf;
      if (7 < iVar2) {
        return *(int *)(param_1 + 4) == 0;
      }
    } while( true );
  }
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x48);
  while ((piVar1[3] == 0 || (*piVar1 != param_2))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0xf;
    if (7 < iVar2) {
switchD_00a4bf88_caseD_2:
      return false;
    }
  }
  iVar2 = param_1 + 0x2c + iVar2 * 0x3c;
  if (iVar2 == 0) {
    return false;
  }
  if (*(int *)(iVar2 + 0x24) != -1) {
    switch(*(undefined4 *)(iVar2 + 0x28)) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      goto switchD_00a4bf88_caseD_2;
    }
  }
  return true;
}

// 00A4C210  FUN_00a4c210  size=242  [run]
undefined4 __fastcall FUN_00a4c210(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char local_20 [32];
  
  if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 1;
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 == 0xfffffffd) {
    *(undefined4 *)(param_1 + 0x28) = 0xd;
    return 1;
  }
  uVar2 = (int)uVar1 >> 8 & 0xff;
  _sprintf_s(local_20,0x20,"st%x\\r%x%02x.dat",uVar2,uVar2,uVar1 & 0xff);
  iVar3 = FUN_00e9e570(2,local_20,&DAT_01b7ddc0,0,0);
  *(int *)(param_1 + 0x2c) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x3c;
    return 0;
  }
  FUN_00a48f80(local_20,0x20,1);
  iVar3 = FUN_00dec390(local_20);
  if (iVar3 != 0) {
    uVar4 = FUN_00e9e570(2,local_20,&DAT_01b82050,0,0);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x28) = 3;
  return 1;
}

// 00A4C310  FUN_00a4c310  size=147  [run]
undefined4 __fastcall FUN_00a4c310(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 6) & 8) != 0) {
    param_1[10] = 0x12;
    return 1;
  }
  iVar1 = FUN_00e9cf60(param_1[0xb]);
  if (iVar1 != 0) {
    if ((param_1[0xc] != 0) && (iVar1 = FUN_00e9cf60(param_1[0xc]), iVar1 == 0)) {
      return 0;
    }
    uVar3 = 0;
    if (param_1[0xc] != 0) {
      uVar3 = FUN_00e9d0b0(param_1[0xc]);
    }
    uVar2 = FUN_00e9d0b0(param_1[0xb]);
    FUN_00de3540(uVar2,uVar3);
    param_1[1] = param_1[8];
    *param_1 = param_1[7];
    param_1[5] = 0;
    param_1[10] = 4;
    return 1;
  }
  return 0;
}

// 00A4C3B0  FUN_00a4c3b0  size=61  [run]
undefined4 __fastcall FUN_00a4c3b0(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x12;
    return 1;
  }
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x18))(param_1);
  FUN_00e51d40(param_1);
  *(undefined4 *)(param_1 + 0x28) = 5;
  return 1;
}

// 00A4C3F0  FUN_00a4c3f0  size=53  [run]
undefined4 __fastcall FUN_00a4c3f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c18350();
  iVar2 = (**(code **)(*piVar1 + 0x14))(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_00e468b0(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 8;
      return 1;
    }
  }
  return 0;
}

// 00A4C430  FUN_00a4c430  size=41  [run]
undefined4 __fastcall FUN_00a4c430(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x18))(param_1);
  FUN_00e51d40(param_1);
  *(undefined4 *)(param_1 + 0x28) = 7;
  return 1;
}

// 00A4C460  FUN_00a4c460  size=53  [run]
undefined4 __fastcall FUN_00a4c460(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c18350();
  iVar2 = (**(code **)(*piVar1 + 0x14))(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_00e468b0(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 8;
      return 1;
    }
  }
  return 0;
}

// 00A4C4D0  FUN_00a4c4d0  size=68  [run]
undefined4 __fastcall FUN_00a4c4d0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x18) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x10;
    return 1;
  }
  if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
    iVar1 = FUN_00a49540(param_1);
    if (iVar1 != 0) {
      FUN_00a495a0(param_1);
      *(undefined4 *)(param_1 + 0x28) = 0xd;
      return 1;
    }
  }
  return 0;
}

// 00A4C560  FUN_00a4c560  size=65  [run]
undefined4 __fastcall FUN_00a4c560(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e468c0(param_1);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0x10;
      if ((*(uint *)(param_1 + 0x18) & 4) != 0) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb | 3;
        return 0;
      }
      return 1;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  }
  return 0;
}

