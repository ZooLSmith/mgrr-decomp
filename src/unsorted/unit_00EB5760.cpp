// src/unsorted/unit_00EB5760.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EB5760..00EBDA80, 44 functions

#include "mgrr.h"

// 00EB5760  FUN_00eb5760  size=691  [run]
void __thiscall FUN_00eb5760(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if ((*(float *)(param_1 + 0x442c) < 0.0) &&
     (fVar1 = *(float *)(param_1 + 0x4424), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))) {
    fVar1 = *(float *)(param_1 + 0x4424) + 1.0;
    *(float *)(param_1 + 0x4424) = fVar1;
    if (*(float *)(param_1 + 0x4428) == 0.0) {
      *(undefined4 *)(param_1 + 0x4420) = 0x3f800000;
    }
    else {
      *(float *)(param_1 + 0x4420) = fVar1 / *(float *)(param_1 + 0x4428);
    }
    if (1.0 < *(float *)(param_1 + 0x4420)) {
      *(undefined4 *)(param_1 + 0x4420) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x4424) = 0xbf800000;
      FUN_00ec3380(param_1 + 0x3a00);
    }
  }
  if (*(int *)(param_1 + 0x444c) != 0) {
    if (0.0 < *(float *)(param_1 + 0x442c) == (*(float *)(param_1 + 0x442c) == 0.0)) {
      FUN_00eac200(param_1 + 0x2fe0,param_1 + 0x3a00,*(undefined4 *)(param_1 + 0x4420));
    }
    else {
      FUN_00eac200(param_1 + 0x2fe0,param_1 + 0x3a00,*(undefined4 *)(param_1 + 0x442c));
    }
  }
  if (*(int *)(param_1 + 0x444c) == 0) {
    FUN_00eac200(param_1 + 0x2fe0,param_1 + 0x3a00,*(undefined4 *)(param_1 + 0x4420));
  }
  else if (DAT_01be8e54 != 0) {
    iVar2 = FUN_00eb1c20(DAT_01be8e54 + 0x40);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x4440) != 0) {
        *(undefined4 *)(param_1 + 0x4440) = 0;
      }
    }
    else {
      *(uint *)(param_1 + 0x446c) = (uint)*(ushort *)(iVar2 + 8);
      *(uint *)(param_1 + 0x4470) = (uint)*(ushort *)(iVar2 + 10);
      *(undefined4 *)(param_1 + 0x4440) = 1;
      FUN_00f96580(0x44670000,0x42000000,0x41200000,0xffffffff,0xffffffff,"C:R%03x_%d",
                   *(undefined2 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 10));
    }
  }
  if (*(int *)(param_1 + 0x47c) == 0) {
    *(undefined4 *)(param_1 + 0x4460) = 0;
  }
  else {
    FUN_00ec3380(param_1 + 0x1ba0);
    FUN_00f96580(0x44670000,0x41800000,0x41200000,0xffffffff,0xffffffff,&DAT_016d33b0);
  }
  if (*(int *)(param_1 + 0x4494) != 0) {
    *(undefined4 *)(param_1 + 0x4494) = 0;
    *(bool *)(param_1 + 0x4498) = *(char *)(param_1 + 0x4498) == '\0';
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00eb50c0();
  }
  FUN_00eaceb0();
  if (*(int *)(param_1 + 0x5a8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  *(undefined4 *)(param_1 + 0x580) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x584) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x588) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58c) = 0x3f800000;
  if (*(int *)(param_1 + 0x5a8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x590));
  }
  if ((*(int **)(param_1 + 0x60) != (int *)0x0) && (param_2 != 0)) {
    (**(code **)(**(int **)(param_1 + 0x60) + 0x14))();
  }
  return;
}

// 00EB5A20  FUN_00eb5a20  size=455  [run]
void __fastcall FUN_00eb5a20(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x1a4] = 0xffffffff;
  param_1[0x1a7] = 0xffffffff;
  param_1[0x1a6] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1aa] = 0xffffffff;
  param_1[0x1ac] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ad] = 0xffffffff;
  param_1[0x1af] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1b0] = 0xffffffff;
  param_1[0x1b2] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b3] = 0xffffffff;
  param_1[0x1b5] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b6] = 0xffffffff;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b9] = 0xffffffff;
  param_1[0x1bb] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bc] = 0xffffffff;
  param_1[0x1bf] = 0xffffffff;
  param_1[0x1be] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c2] = 0xffffffff;
  param_1[0x1c4] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c5] = 0xffffffff;
  param_1[0x1c7] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c8] = 0xffffffff;
  param_1[0x1ca] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1cb] = 0xffffffff;
  param_1[0x1cd] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1ce] = 0xffffffff;
  param_1[0x1d0] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d1] = 0xffffffff;
  param_1[0x1d3] = 0;
  param_1[0x1d2] = 0;
  if (DAT_01edab78 != 0) {
    FUN_00fa45a0();
    FUN_00fa45a0();
    FUN_00fa45a0();
    FUN_00fa45a0();
    FUN_00fa45a0();
    FUN_00fa46e0();
  }
  DAT_01edab78 = 0;
  FUN_00dd7270();
  return;
}

// 00EB5C50  FUN_00eb5c50  size=155  [run]
void __thiscall
FUN_00eb5c50(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  
  *(float *)(param_1 + 0x442c) = param_5;
  if (param_2 == 0) {
    return;
  }
  if ((*(int *)(param_2 + 0x84) == *(int *)(param_1 + 0x3a84)) &&
     (*(int *)(param_2 + 0x80) == *(int *)(param_1 + 0x3a80))) {
    return;
  }
  if (*(float *)(param_1 + 0x4428) < 0.0) {
    param_3 = 0x3f800000;
  }
  if (NAN(param_5) || 0.0 < param_5 == (param_5 == 0.0)) {
    iVar1 = param_1 + 0x1180;
  }
  else {
    if (*(int *)(param_1 + 0x3a84) == *(int *)(param_2 + 0x84)) goto LAB_00eb5cc1;
    iVar1 = param_1 + 0x3a00;
  }
  FUN_00ec3380(iVar1);
LAB_00eb5cc1:
  FUN_00ec3380(param_2);
  *(undefined4 *)(param_1 + 0x4424) = 0;
  *(undefined4 *)(param_1 + 0x4428) = param_3;
  return;
}

// 00EB5CF0  FUN_00eb5cf0  size=77  [run]
void __thiscall FUN_00eb5cf0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x442c) = param_4;
  if (param_2 != 0) {
    FUN_00ec3380(param_2);
  }
  if (param_3 != 0) {
    FUN_00ec3380(param_3);
  }
  *(undefined4 *)(param_1 + 0x4424) = 0;
  *(undefined4 *)(param_1 + 0x4428) = 0x41200000;
  return;
}

// 00EB5EA0  FUN_00eb5ea0  size=199  [run]
undefined4 __fastcall FUN_00eb5ea0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter01.pso");
  uVar3 = FUN_00a281f0("Filter01.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_ViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldMatrix");
      if (iVar4 != 0) {
        iVar4 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
        if (iVar4 != 0) {
          iVar4 = FUN_00fa39a0(param_1 + 0x4c,"g_SamplerTexture[0]");
          if (iVar4 != 0) {
            uVar5 = 2;
            iVar4 = 2;
            if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
              uVar5 = 3;
              iVar4 = 3;
            }
            uVar1 = *(uint *)(param_1 + 0x54);
            *(uint *)(param_1 + 0x54) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
            *(uint *)(param_1 + 0x54) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00EB5F70  FUN_00eb5f70  size=199  [run]
undefined4 __fastcall FUN_00eb5f70(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter02.pso");
  uVar3 = FUN_00a281f0("Filter02.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_ViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldMatrix");
      if (iVar4 != 0) {
        iVar4 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
        if (iVar4 != 0) {
          iVar4 = FUN_00fa39a0(param_1 + 0x4c,"g_SamplerTexture[0]");
          if (iVar4 != 0) {
            uVar5 = 2;
            iVar4 = 2;
            if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
              uVar5 = 3;
              iVar4 = 3;
            }
            uVar1 = *(uint *)(param_1 + 0x54);
            *(uint *)(param_1 + 0x54) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
            *(uint *)(param_1 + 0x54) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00EB6040  FUN_00eb6040  size=197  [run]
/* WARNING: Removing unreachable block (ram,0x00eb60df) */

undefined4 __fastcall FUN_00eb6040(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_00a281f0("Filter03.pso");
  uVar3 = FUN_00a281f0("Filter03.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x7c,"g_ViewProjMatrix"), iVar4 != 0)) &&
      (iVar4 = FUN_00f9e6d0(param_1 + 0x88,"g_WorldMatrix"), iVar4 != 0)) &&
     (iVar4 = FUN_00fa39a0(param_1 + 0x94,"g_SamplerTexture[0]"), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x9c);
    *(uint *)(param_1 + 0x9c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x9c) = uVar1 & 0xe1fff000 | 0x1000101;
    return 1;
  }
  return 0;
}

// 00EB6260  FUN_00eb6260  size=199  [run]
undefined4 __fastcall FUN_00eb6260(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter05.pso");
  uVar3 = FUN_00a281f0("Filter05.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_ViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldMatrix");
      if (iVar4 != 0) {
        iVar4 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
        if (iVar4 != 0) {
          iVar4 = FUN_00fa39a0(param_1 + 100,"g_SamplerTexture[0]");
          if (iVar4 != 0) {
            uVar5 = 2;
            iVar4 = 2;
            if ((*(byte *)(param_1 + 0x6f) & 0x1f) != 1) {
              uVar5 = 3;
              iVar4 = 3;
            }
            uVar1 = *(uint *)(param_1 + 0x6c);
            *(uint *)(param_1 + 0x6c) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
            *(uint *)(param_1 + 0x6c) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 00EB6330  FUN_00eb6330  size=219  [run]
undefined4 __fastcall FUN_00eb6330(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter06.pso");
  uVar3 = FUN_00a281f0("Filter06.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_ViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldMatrix");
      if (iVar4 != 0) {
        iVar4 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
        if (iVar4 != 0) {
          iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_pow");
          if (iVar4 != 0) {
            iVar4 = FUN_00fa39a0(param_1 + 0x58,"g_SamplerTexture[0]");
            if (iVar4 != 0) {
              uVar5 = 2;
              iVar4 = 2;
              if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
                uVar5 = 3;
                iVar4 = 3;
              }
              uVar1 = *(uint *)(param_1 + 0x60);
              *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
              *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00EB6410  FUN_00eb6410  size=219  [run]
undefined4 __fastcall FUN_00eb6410(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter07.pso");
  uVar3 = FUN_00a281f0("Filter07.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_ViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldMatrix");
      if (iVar4 != 0) {
        iVar4 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
        if (iVar4 != 0) {
          iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_pow");
          if (iVar4 != 0) {
            iVar4 = FUN_00fa39a0(param_1 + 0x58,"g_SamplerTexture[0]");
            if (iVar4 != 0) {
              uVar5 = 2;
              iVar4 = 2;
              if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
                uVar5 = 3;
                iVar4 = 3;
              }
              uVar1 = *(uint *)(param_1 + 0x60);
              *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
              *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00EB64F0  FUN_00eb64f0  size=179  [run]
undefined4 __fastcall FUN_00eb64f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter08.pso");
  uVar3 = FUN_00a281f0("Filter08.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_MatrialColor");
      if (iVar4 != 0) {
        iVar4 = FUN_00fa39a0(param_1 + 0x58,"g_Sampler[0]");
        if (iVar4 != 0) {
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = *(uint *)(param_1 + 0x60);
          *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00EB65B0  FUN_00eb65b0  size=245  [run]
undefined4 __fastcall FUN_00eb65b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter09.pso");
  uVar3 = FUN_00a281f0("Filter09.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x34,"g_SamplerTexture[0]");
    if (iVar4 != 0) {
      iVar4 = FUN_00fa39a0(param_1 + 0x40,"g_SamplerTexture[1]");
      if (iVar4 != 0) {
        iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
        if (iVar4 != 0) {
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = *(uint *)(param_1 + 0x3c);
          *(uint *)(param_1 + 0x3c) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          *(uint *)(param_1 + 0x3c) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = *(uint *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00EB66B0  FUN_00eb66b0  size=159  [run]
undefined4 __fastcall FUN_00eb66b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter09_Sub.pso");
  uVar3 = FUN_00a281f0("Filter09_Sub.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x34,"g_SamplerTexture");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
      if (iVar4 != 0) {
        uVar5 = 2;
        iVar4 = 2;
        if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
          uVar5 = 3;
          iVar4 = 3;
        }
        uVar1 = *(uint *)(param_1 + 0x3c);
        *(uint *)(param_1 + 0x3c) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
        *(uint *)(param_1 + 0x3c) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
        return 1;
      }
    }
  }
  return 0;
}

// 00EB6750  FUN_00eb6750  size=139  [run]
undefined4 __fastcall FUN_00eb6750(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter09_Sub2.pso");
  uVar3 = FUN_00a281f0("Filter09_Sub2.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00fa39a0(param_1 + 0x34,"g_SamplerTexture");
    if (iVar4 != 0) {
      uVar5 = 2;
      iVar4 = 2;
      if ((*(byte *)(param_1 + 0x3f) & 0x1f) != 1) {
        uVar5 = 3;
        iVar4 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x3c);
      *(uint *)(param_1 + 0x3c) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
      *(uint *)(param_1 + 0x3c) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
      return 1;
    }
  }
  return 0;
}

// 00EB67E0  FUN_00eb67e0  size=452  [run]
/* WARNING: Removing unreachable block (ram,0x00eb6969) */

undefined4 __fastcall FUN_00eb67e0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("Filter10.pso");
  uVar3 = FUN_00a281f0("Filter10.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if ((((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_CameraPos"), iVar4 != 0)) &&
        (iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_SunDir"), iVar4 != 0)) &&
       ((iVar4 = FUN_00f9e6d0(param_1 + 0x40,"g_SunCol"), iVar4 != 0 &&
        (iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_RayMie"), iVar4 != 0)))) &&
      ((iVar4 = FUN_00f9e6d0(param_1 + 0x58,"g_Ray2"), iVar4 != 0 &&
       ((iVar4 = FUN_00f9e6d0(param_1 + 100,"g_Mie2"), iVar4 != 0 &&
        (iVar4 = FUN_00f9e6d0(param_1 + 0x70,"g_Leap"), iVar4 != 0)))))) &&
     ((iVar4 = FUN_00f9e6d0(param_1 + 0x7c,"g_DebugPow"), iVar4 != 0 &&
      ((iVar4 = FUN_00fa39a0(param_1 + 0x88,"g_SamplerTexture[0]"), iVar4 != 0 &&
       (iVar4 = FUN_00fa39a0(param_1 + 0x94,"g_SamplerTexture[1]"), iVar4 != 0)))))) {
    uVar5 = 2;
    iVar4 = 2;
    if ((*(byte *)(param_1 + 0x93) & 0x1f) != 1) {
      uVar5 = 3;
      iVar4 = 3;
    }
    uVar1 = *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
    *(uint *)(param_1 + 0x90) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
    uVar5 = *(uint *)(param_1 + 0x9c);
    *(uint *)(param_1 + 0x9c) = uVar5 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x9c) = uVar5 & 0xe1fff010 | 0x1000111;
    *(uint *)(param_1 + 0x9c) = uVar5 & 0xe1333010 | 0x1333111;
    return 1;
  }
  return 0;
}

// 00EB69B0  FUN_00eb69b0  size=179  [run]
undefined4 __fastcall FUN_00eb69b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("FilterShaderCopyTex.pso");
  uVar3 = FUN_00a281f0("FilterShaderCopyTex.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor");
      if (iVar4 != 0) {
        iVar4 = FUN_00fa39a0(param_1 + 0x40,"g_Sampler[0]");
        if (iVar4 != 0) {
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = *(uint *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00EB6A70  FUN_00eb6a70  size=107  [run]
undefined4 __thiscall FUN_00eb6a70(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_2 != 0) + 1;
  if (uVar1 != 3) {
    if (uVar1 == 1) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xe1ffffff | 0x1000000;
    }
    uVar2 = uVar1;
    if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
      uVar2 = 3;
    }
    *(uint *)(param_1 + 0x48) =
         (uVar2 << 4 | uVar1) << 4 | *(uint *)(param_1 + 0x48) & 0xfffff000 | uVar2;
  }
  return 1;
}

// 00EB6BA0  FUN_00eb6ba0  size=145  [run]
undefined4 __thiscall FUN_00eb6ba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00fa01a0(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldViewProjMatrix");
    if (iVar2 != 0) {
      iVar2 = FUN_00fa39a0(param_1 + 0x28,"g_Sampler");
      if (iVar2 != 0) {
        uVar3 = 2;
        iVar2 = 2;
        if ((*(byte *)(param_1 + 0x33) & 0x1f) != 1) {
          uVar3 = 3;
          iVar2 = 3;
        }
        uVar1 = *(uint *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
        *(uint *)(param_1 + 0x30) = iVar2 << 8 | uVar1 & 0xff333020 | uVar3 | 0x333020;
        return 1;
      }
    }
  }
  return 0;
}

// 00EB6C40  FUN_00eb6c40  size=466  [run]
/* WARNING: Removing unreachable block (ram,0x00eb6ddc) */

undefined4 __thiscall FUN_00eb6c40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00fa01a0(param_2,param_3);
  if ((((((iVar1 != 0) && (iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix"), iVar1 != 0)
         ) && (iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_Brightness"), iVar1 != 0)) &&
       ((iVar1 = FUN_00f9e6d0(param_1 + 0x58,"g_MulColor"), iVar1 != 0 &&
        (iVar1 = FUN_00f9e6d0(param_1 + 100,"g_AddColor"), iVar1 != 0)))) &&
      ((iVar1 = FUN_00f9e6d0(param_1 + 0x70,"g_Saido"), iVar1 != 0 &&
       ((iVar1 = FUN_00f9e6d0(param_1 + 0x7c,"g_BloomColor"), iVar1 != 0 &&
        (iVar1 = FUN_00fa39a0(param_1 + 0x40,"g_Sampler[0]"), iVar1 != 0)))))) &&
     ((iVar1 = FUN_00fa39a0(param_1 + 0x4c,"g_Sampler[1]"), iVar1 != 0 &&
      (iVar1 = FUN_00fa39a0(param_1 + 0x88,"ColorTableTexture[0]"), iVar1 != 0)))) {
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x48) = iVar1 << 8 | *(uint *)(param_1 + 0x48) & 0xfffff020 | uVar2 | 0x20;
    uVar2 = 2;
    iVar1 = 2;
    if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
      uVar2 = 3;
      iVar1 = 3;
    }
    *(uint *)(param_1 + 0x54) = iVar1 << 8 | *(uint *)(param_1 + 0x54) & 0xfffff020 | uVar2 | 0x20;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xff333fff | 0x333000;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xff333fff | 0x333000;
    uVar2 = *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = uVar2 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x90) = uVar2 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00EB6E20  FUN_00eb6e20  size=140  [run]
undefined4 __thiscall FUN_00eb6e20(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00eb6c40(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = FUN_00fa39a0(param_1 + 0x94,"NoiseTexture");
    if (iVar2 != 0) {
      uVar3 = 2;
      iVar2 = 2;
      if ((*(byte *)(param_1 + 0x9f) & 0x1f) != 1) {
        uVar3 = 3;
        iVar2 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x9c);
      *(uint *)(param_1 + 0x9c) = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
      *(uint *)(param_1 + 0x9c) = iVar2 << 8 | uVar1 & 0xff111020 | uVar3 | 0x111020;
      return 1;
    }
  }
  return 0;
}

// 00EB6EB0  FUN_00eb6eb0  size=179  [run]
undefined4 __fastcall FUN_00eb6eb0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("FilterShaderZCopy.pso");
  uVar3 = FUN_00a281f0("FilterShaderZCopy.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_UvOffset");
      if (iVar4 != 0) {
        iVar4 = FUN_00fa39a0(param_1 + 0x40,"g_Sampler[0]");
        if (iVar4 != 0) {
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = *(uint *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00EB6FE0  FUN_00eb6fe0  size=179  [run]
undefined4 __fastcall FUN_00eb6fe0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("FilterShaderZConversion.pso");
  uVar3 = FUN_00a281f0("FilterShaderZConversion.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor");
      if (iVar4 != 0) {
        iVar4 = FUN_00fa39a0(param_1 + 0x40,"g_Sampler[0]");
        if (iVar4 != 0) {
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = *(uint *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00EB7310  FUN_00eb7310  size=179  [run]
undefined4 __fastcall FUN_00eb7310(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00a281f0("FilterShaderCopyTex.pso");
  uVar3 = FUN_00a281f0("FilterShaderCopyTex.vso",uVar2);
  iVar4 = FUN_00fa01a0(uVar3,uVar2);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor");
      if (iVar4 != 0) {
        iVar4 = FUN_00fa39a0(param_1 + 0x40,"g_Sampler[0]");
        if (iVar4 != 0) {
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = *(uint *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00EB76A0  FUN_00eb76a0  size=688  [run]
void FUN_00eb76a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,int param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_114;
  local_e4 = param_1;
  local_114 = param_2;
  if (DAT_01edab78 == 0) goto LAB_00eb793b;
  local_f8 = DAT_018da670;
  local_f0 = DAT_018da65c;
  local_ec = DAT_018da674;
  local_e8 = DAT_018da678;
  switch(param_7) {
  case 0:
    FUN_00f9d8f0(0);
    goto switchD_00eb7707_default;
  case 1:
    FUN_00f9d8f0(1);
    uVar5 = 6;
    uVar4 = 5;
    break;
  case 2:
    FUN_00f9d8f0(1);
    uVar5 = 2;
    uVar4 = 5;
    break;
  case 3:
    FUN_00f9d8f0(1);
    uVar5 = 2;
    uVar4 = 2;
    break;
  case 4:
    FUN_00f9d8f0(1);
    uVar5 = 6;
    uVar4 = 9;
    break;
  default:
    goto switchD_00eb7707_default;
  }
  FUN_00f9d970(uVar4,uVar5,1);
switchD_00eb7707_default:
  uVar4 = DAT_018da63c;
  FUN_00f9d6e0(1);
  uVar5 = DAT_018da644;
  FUN_00f9d760(0);
  uVar1 = DAT_018da648;
  FUN_00f9d7a0(0);
  local_f4 = DAT_018da688;
  FUN_00f9db30(param_8);
  FUN_00eadf00(local_e0,local_a0,param_3,param_4,param_5,param_6,1);
  FUN_00f9ea50(&DAT_01edcd64,local_114,4);
  D3DXMatrixMultiply(local_60,local_a0,local_e0);
  FUN_00f9ee50(&DAT_01edcd58,local_60);
  FUN_00eb6a70(param_9,0);
  uVar2 = FUN_00fa0740(param_10);
  FUN_00fa1d50(&DAT_01edcd70,uVar2);
  if (param_11 == 0) {
    puVar6 = &DAT_01edcd30;
LAB_00eb78cd:
    FUN_00f990e0(puVar6);
  }
  else {
    if (param_11 == 1) {
      puVar6 = &DAT_01edcd80;
      goto LAB_00eb78cd;
    }
    if (param_11 == 2) {
      uStack_110 = 0x3f800000;
      uStack_10c = 0x3f800000;
      uStack_108 = 0x3f800000;
      uStack_104 = *(undefined4 *)(local_114 + 0xc);
      iVar3 = FUN_00f99540(0xb9,&uStack_110,4);
      if (iVar3 == 0) {
        DAT_01f13260 = uStack_110;
        DAT_01f13264 = uStack_10c;
        DAT_01f13268 = uStack_108;
        DAT_01f1326c = uStack_104;
        FUN_00f99620(0xb9,&DAT_01f13260,4);
      }
      puVar6 = &DAT_01edcb50;
      goto LAB_00eb78cd;
    }
  }
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f9dfb0(5);
  FUN_00f9d8f0(local_f0);
  FUN_00f9d970(local_f8,local_ec,local_e8);
  FUN_00f9d6e0(uVar4);
  FUN_00f9d760(uVar5);
  FUN_00f9d7a0(uVar1);
  FUN_00f9da50(local_f4);
LAB_00eb793b:
  __security_check_cookie(local_14 ^ (uint)&local_114);
  return;
}

// 00EB7970  FUN_00eb7970  size=679  [run]
void FUN_00eb7970(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_114;
  local_e4 = param_1;
  local_114 = param_2;
  if (DAT_01edab78 == 0) goto LAB_00eb7c02;
  local_f8 = DAT_018da670;
  local_f0 = DAT_018da65c;
  local_ec = DAT_018da674;
  local_e8 = DAT_018da678;
  switch(param_7) {
  case 0:
    FUN_00f9d8f0(0);
    goto switchD_00eb79d7_default;
  case 1:
    FUN_00f9d8f0(1);
    uVar4 = 6;
    uVar3 = 5;
    break;
  case 2:
    FUN_00f9d8f0(1);
    uVar4 = 2;
    uVar3 = 5;
    break;
  case 3:
    FUN_00f9d8f0(1);
    uVar4 = 2;
    uVar3 = 2;
    break;
  case 4:
    FUN_00f9d8f0(1);
    uVar4 = 6;
    uVar3 = 9;
    break;
  default:
    goto switchD_00eb79d7_default;
  }
  FUN_00f9d970(uVar3,uVar4,1);
switchD_00eb79d7_default:
  uVar3 = DAT_018da63c;
  FUN_00f9d6e0(1);
  uVar4 = DAT_018da644;
  FUN_00f9d760(0);
  uVar1 = DAT_018da648;
  FUN_00f9d7a0(0);
  local_f4 = DAT_018da688;
  FUN_00f9db30(param_8);
  FUN_00eadf00(local_e0,local_a0,param_3,param_4,param_5,param_6,1);
  FUN_00f9ea50(&DAT_01edcd64,local_114,4);
  D3DXMatrixMultiply(local_60,local_a0,local_e0);
  FUN_00f9ee50(&DAT_01edcd58,local_60);
  FUN_00eb6a70(param_9,0);
  FUN_00fa1d50(&DAT_01edcd70,local_e4);
  if (param_10 == 0) {
    puVar5 = &DAT_01edcd30;
LAB_00eb7b94:
    FUN_00f990e0(puVar5);
  }
  else {
    if (param_10 == 1) {
      puVar5 = &DAT_01edcd80;
      goto LAB_00eb7b94;
    }
    if (param_10 == 2) {
      uStack_110 = 0x3f800000;
      uStack_10c = 0x3f800000;
      uStack_108 = 0x3f800000;
      uStack_104 = *(undefined4 *)(local_114 + 0xc);
      iVar2 = FUN_00f99540(0xb9,&uStack_110,4);
      if (iVar2 == 0) {
        DAT_01f13260 = uStack_110;
        DAT_01f13264 = uStack_10c;
        DAT_01f13268 = uStack_108;
        DAT_01f1326c = uStack_104;
        FUN_00f99620(0xb9,&DAT_01f13260,4);
      }
      puVar5 = &DAT_01edcb50;
      goto LAB_00eb7b94;
    }
  }
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f9dfb0(5);
  FUN_00f9d8f0(local_f0);
  FUN_00f9d970(local_f8,local_ec,local_e8);
  FUN_00f9d6e0(uVar3);
  FUN_00f9d760(uVar4);
  FUN_00f9d7a0(uVar1);
  FUN_00f9da50(local_f4);
LAB_00eb7c02:
  __security_check_cookie(local_14 ^ (uint)&local_114);
  return;
}

// 00EB7C30  FUN_00eb7c30  size=1374  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb7c30(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_124 [12];
  int local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_124;
  iVar9 = 0;
  local_f8 = param_1;
  local_f0 = param_2;
  if (DAT_01edab78 != 0) {
    local_e4 = DAT_018da65c;
    local_ec = DAT_018da670;
    local_100 = DAT_018da674;
    local_f4 = DAT_018da678;
    local_fc = DAT_018da66c;
    FUN_00f9d8f0(0);
    FUN_00f9d930(0);
    if ((_DAT_01edd9e0 & 1) == 0) {
      _DAT_01edd9e0 = _DAT_01edd9e0 | 1;
      iVar6 = FUN_00fa0740(0);
      if (iVar6 == 0) {
        local_114 = 0.0;
      }
      else {
        local_114 = *(float *)(iVar6 + 0xc);
      }
      iVar6 = FUN_00fa0740(0);
      if (iVar6 != 0) {
        iVar9 = *(int *)(iVar6 + 8);
      }
      iVar6 = FUN_00fa0740(0);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0xc);
      }
      iVar7 = FUN_00fa0740(0);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 8);
      }
      DAT_01edd9d0 = (float)iVar7;
      if (iVar7 < 0) {
        DAT_01edd9d0 = DAT_01edd9d0 + 4.2949673e+09;
      }
      DAT_01edd9d4 = (float)iVar6;
      if (iVar6 < 0) {
        DAT_01edd9d4 = DAT_01edd9d4 + 4.2949673e+09;
      }
      fVar1 = (float)iVar9;
      if (iVar9 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      DAT_01edd9d8 = 1.0 / fVar1;
      fVar1 = (float)(int)local_114;
      if ((int)local_114 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      DAT_01edd9dc = 1.0 / fVar1;
      local_118 = iVar9;
    }
    if ((_DAT_01edd9e0 & 2) == 0) {
      _DAT_01edd9e0 = _DAT_01edd9e0 | 2;
      iVar9 = 0;
      iVar6 = FUN_00fa0740(0);
      if (iVar6 == 0) {
        local_114 = 0.0;
      }
      else {
        local_114 = *(float *)(iVar6 + 0xc);
      }
      iVar6 = FUN_00fa0740(0);
      if (iVar6 != 0) {
        iVar9 = *(int *)(iVar6 + 8);
      }
      iVar6 = FUN_00fa0740(0);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + 0xc);
      }
      iVar7 = FUN_00fa0740(0);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 8);
      }
      fVar1 = (float)iVar7;
      if (iVar7 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      DAT_01edd9c0 = fVar1 * 0.5;
      fVar1 = (float)iVar6;
      if (iVar6 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      DAT_01edd9c4 = fVar1 * 0.5;
      fVar1 = (float)iVar9;
      if (iVar9 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      DAT_01edd9c8 = 1.0 / fVar1;
      fVar1 = (float)(int)local_114;
      if ((int)local_114 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      DAT_01edd9cc = 1.0 / fVar1;
      local_118 = iVar9;
    }
    iVar9 = FUN_00fa0740(0);
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(iVar9 + 0xc);
    }
    iVar6 = FUN_00fa0740(0);
    if (iVar6 == 0) {
      local_118 = 0;
    }
    else {
      local_118 = *(int *)(iVar6 + 8);
    }
    fVar1 = (float)iVar9;
    if (iVar9 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)local_118;
    if (local_118 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    FUN_00eadf00(local_e0,local_a0,0,0,fVar2,fVar1,1);
    iVar9 = FUN_00f994a0(0xb8,&DAT_01edd9d0,4);
    if (iVar9 == 0) {
      _DAT_01f14050 = DAT_01edd9d0;
      _DAT_01f14054 = DAT_01edd9d4;
      _DAT_01f14058 = DAT_01edd9d8;
      _DAT_01f1405c = DAT_01edd9dc;
      FUN_00f995e0(0xb8,&DAT_01f14050,4);
    }
    iVar9 = FUN_00f99540(0xb8,&DAT_01edd9c0,4);
    if (iVar9 == 0) {
      DAT_01f13250 = DAT_01edd9c0;
      DAT_01f13254 = DAT_01edd9c4;
      DAT_01f13258 = DAT_01edd9c8;
      DAT_01f1325c = DAT_01edd9cc;
      FUN_00f99620(0xb8,&DAT_01f13250,4);
    }
    uVar3 = DAT_018da63c;
    FUN_00f9d6e0(1);
    uVar4 = DAT_018da644;
    FUN_00f9d760(0);
    uVar5 = DAT_018da648;
    FUN_00f9d7a0(0);
    local_118 = DAT_018da688;
    FUN_00f9da90(1);
    FUN_00f9db30(0);
    local_114 = 1.0 / *DAT_01f6c7a0;
    local_104 = 1.0 / DAT_01f6c7a0[5];
    local_110 = _DAT_01f6c924;
    local_10c = _DAT_01f6c928 - _DAT_01f6c924;
    local_108 = local_114;
    local_e8 = local_104;
    iVar9 = FUN_00f994a0(0xc1,&local_110,4);
    if (iVar9 == 0) {
      _DAT_01f140e0 = local_110;
      _DAT_01f140e4 = local_10c;
      _DAT_01f140e8 = local_108;
      _DAT_01f140ec = local_104;
      FUN_00f995e0(0xc1,&DAT_01f140e0,4);
    }
    iVar9 = FUN_00f99540(0xc1,&local_110,4);
    if (iVar9 == 0) {
      _DAT_01f132e0 = local_110;
      _DAT_01f132e4 = local_10c;
      _DAT_01f132e8 = local_108;
      _DAT_01f132ec = local_104;
      FUN_00f99620(0xc1,&DAT_01f132e0,4);
    }
    D3DXMatrixMultiply(local_60,local_a0,local_e0);
    FUN_00f9ee50(&DAT_01edcbe8,local_60);
    uVar8 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edcbf4,uVar8);
    uVar8 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edcc00,uVar8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f990e0(&DAT_01edcbc0);
    FUN_00f9dfb0(5);
    FUN_00f9d8f0(local_e4);
    FUN_00f9d970(local_ec,local_100,local_f4);
    FUN_00f9d930(local_fc);
    FUN_00f9d6e0(uVar3);
    FUN_00f9d760(uVar4);
    FUN_00f9d7a0(uVar5);
    FUN_00f9da50(local_118);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_124);
  return;
}

// 00EB8190  FUN_00eb8190  size=850  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb8190(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_124;
  local_f0 = param_1;
  local_fc = param_2;
  if (DAT_01edab78 != 0) {
    local_e4 = DAT_018da65c;
    local_ec = DAT_018da670;
    local_104 = DAT_018da674;
    local_f4 = DAT_018da678;
    local_100 = DAT_018da66c;
    FUN_00f9d8f0(0);
    FUN_00f9d930(0);
    iVar6 = FUN_00fa0740(0);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0xc);
    }
    iVar7 = FUN_00fa0740(0);
    if (iVar7 == 0) {
      local_124 = 0;
    }
    else {
      local_124 = *(int *)(iVar7 + 8);
    }
    fVar1 = (float)iVar6;
    if (iVar6 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = (float)local_124;
    if (local_124 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    FUN_00eadf00(local_e0,local_a0,0,0,fVar2,fVar1,1);
    uVar3 = DAT_018da63c;
    FUN_00f9d6e0(1);
    uVar4 = DAT_018da644;
    FUN_00f9d760(0);
    uVar5 = DAT_018da648;
    FUN_00f9d7a0(0);
    local_124 = DAT_018da688;
    FUN_00f9da90(1);
    FUN_00f9db30(0);
    local_118 = 1.0 / *DAT_01f6c7a0;
    local_114 = 1.0 / DAT_01f6c7a0[5];
    local_120 = _DAT_01f6c924;
    local_11c = _DAT_01f6c928 - _DAT_01f6c924;
    local_f8 = local_114;
    local_e8 = local_118;
    iVar6 = FUN_00f994a0(0xc1,&local_120,4);
    if (iVar6 == 0) {
      _DAT_01f140e0 = local_120;
      _DAT_01f140e4 = local_11c;
      _DAT_01f140e8 = local_118;
      _DAT_01f140ec = local_114;
      FUN_00f995e0(0xc1,&DAT_01f140e0,4);
    }
    iVar6 = FUN_00f99540(0xc1,&local_120,4);
    if (iVar6 == 0) {
      _DAT_01f132e0 = local_120;
      _DAT_01f132e4 = local_11c;
      _DAT_01f132e8 = local_118;
      _DAT_01f132ec = local_114;
      FUN_00f99620(0xc1,&DAT_01f132e0,4);
    }
    FUN_00f9ec50(&DAT_01edccb8,&DAT_01f6c880,4);
    FUN_00eb1fd0(&DAT_018d1f90,&DAT_018d1fa0,&DAT_018d1fb0,&DAT_018d1fc0,&DAT_018d1fd0,DAT_018d1fd4,
                 DAT_018d1fd8,_DAT_018d1fe4);
    D3DXMatrixMultiply(local_60,local_a0,local_e0);
    FUN_00f9ee50(&DAT_01edcbe8,local_60);
    uVar8 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edcd18,uVar8);
    uVar8 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edcd24,uVar8);
    FUN_00f990e0(&DAT_01edcc90);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00f9d8f0(local_e4);
    FUN_00f9d970(local_ec,local_104,local_f4);
    FUN_00f9d930(local_100);
    FUN_00f9d6e0(uVar3);
    FUN_00f9d760(uVar4);
    FUN_00f9d7a0(uVar5);
    FUN_00f9da50(local_124);
  }
  __security_check_cookie(local_14 ^ (uint)&local_124);
  return;
}

// 00EB84F0  FUN_00eb84f0  size=392  [run]
void FUN_00eb84f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  uVar2 = DAT_018da65c;
  uVar1 = DAT_018da63c;
  local_14 = DAT_018e8764 ^ (uint)&local_f4;
  local_e4 = param_2;
  local_f0 = param_3;
  local_e8 = param_4;
  if (DAT_01edab78 != 0) {
    local_ec = DAT_018da644;
    FUN_00f9d8f0(0);
    FUN_00f9d6e0(1);
    FUN_00f9d760(0);
    local_f4 = FUN_00f98a80(1);
    local_f4 = FUN_00f98a70((float)local_f4);
    FUN_00eadf00(local_e0,local_a0,0,0,(float)local_f4);
    FUN_00f9ea50(param_1 + 0x34,local_e8,4);
    D3DXMatrixMultiply(local_60,local_a0,local_e0);
    FUN_00f9ee50(param_1 + 0x28,local_60);
    uVar3 = FUN_00fa0740(0);
    FUN_00fa1d50(param_1 + 0x40,uVar3);
    uVar3 = FUN_00fa0740(0);
    FUN_00fa1d50(param_1 + 0x4c,uVar3);
    if (DAT_018d1a20 != 0) {
      FUN_00eb1010();
    }
    FUN_00f990e0(param_1);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00f9d8f0(uVar2);
    FUN_00f9d6e0(uVar1);
    FUN_00f9d760(local_ec);
  }
  __security_check_cookie(local_14 ^ (uint)&local_f4);
  return;
}

// 00EB8680  FUN_00eb8680  size=1187  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb8680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5
                 ,float param_6,int param_7)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST1;
  undefined1 auStack_154 [8];
  float local_14c;
  float local_148;
  float local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  uVar3 = DAT_018da65c;
  uVar2 = DAT_018da63c;
  local_14 = DAT_018e8764 ^ (uint)auStack_154;
  local_e4 = param_2;
  if (DAT_01edab78 != 0) {
    local_ec = DAT_018da644;
    FUN_00f9d8f0(0);
    FUN_00f9d6e0(1);
    FUN_00f9d760(0);
    FUN_00eadf00(local_e0,local_a0,param_3,param_4,param_5,param_6,1);
    local_100 = 0x3f800000;
    local_fc = 0x3e6147ae;
    local_f8 = 0x3e75c28f;
    local_f4 = 0;
    local_144 = 0.15197642;
    local_14c = 1.3270497;
    fVar6 = (float10)FUN_00fdef70();
    local_14c = (float)fVar6;
    fVar1 = local_14c * local_14c;
    local_14c = (local_14c *
                (fVar1 * 0.24 * fVar1 + fVar1 * 0.22 + 1.0 + fVar1 * fVar1 * 0.0 * fVar1)) /
                local_14c;
    local_e8 = 1.0 / local_14c;
    fVar7 = (float10)param_5;
    iVar4 = FUN_00fdbc60();
    local_f0 = (float)((float10)iVar4 / (float10)param_6);
    fVar6 = (float10)iVar4 / extraout_ST1;
    local_14c = (float)fVar6;
    if (param_7 == 0) {
      fVar6 = fVar7;
    }
    if (param_7 != 0) {
      local_144 = -0.15197642;
    }
    fVar8 = (float10)local_14c;
    local_120 = (float)((float10)(float)fVar6 +
                       (fVar8 + (float10)local_144 * extraout_ST0) * extraout_ST0);
    local_148 = (float)(extraout_ST0 + fVar7);
    local_118 = (float)((float10)(float)fVar6 + fVar8 * extraout_ST0);
    local_130 = (float)((float10)local_e8 * fVar8 * extraout_ST0);
    local_12c = (float)((float10)local_f0 * (float10)local_e8 * extraout_ST0);
    local_128 = (float)((float10)2.0 / fVar8);
    local_124 = (float)((float10)2.0 / (float10)local_f0);
    local_110 = 0x3f7ef9db;
    local_10c = 0xbb83126f;
    local_108 = 0x3f81cac1;
    local_104 = 0;
    local_140 = 0x40000000;
    local_13c = 0x3f800000;
    local_138 = 0;
    local_134 = 0;
    if (param_7 != 0) {
      local_138 = 0xbf000000;
    }
    local_11c = local_148;
    local_114 = local_148;
    iVar4 = FUN_00f99540(0xb8,&local_120,4);
    if (iVar4 == 0) {
      DAT_01f13250 = local_120;
      DAT_01f13254 = local_11c;
      DAT_01f13258 = local_118;
      DAT_01f1325c = local_114;
      FUN_00f99620(0xb8,&DAT_01f13250,4);
    }
    iVar4 = FUN_00f99540(0xb9,&local_130,4);
    if (iVar4 == 0) {
      DAT_01f13260 = local_130;
      DAT_01f13264 = local_12c;
      DAT_01f13268 = local_128;
      DAT_01f1326c = local_124;
      FUN_00f99620(0xb9,&DAT_01f13260,4);
    }
    iVar4 = FUN_00f99540(0xba,&local_100,4);
    if (iVar4 == 0) {
      _DAT_01f13270 = local_100;
      _DAT_01f13274 = local_fc;
      _DAT_01f13278 = local_f8;
      _DAT_01f1327c = local_f4;
      FUN_00f99620(0xba,&DAT_01f13270,4);
    }
    iVar4 = FUN_00f99540(0xbb,&local_110,4);
    if (iVar4 == 0) {
      _DAT_01f13280 = local_110;
      _DAT_01f13284 = local_10c;
      _DAT_01f13288 = local_108;
      _DAT_01f1328c = local_104;
      FUN_00f99620(0xbb,&DAT_01f13280,4);
    }
    iVar4 = FUN_00f99540(0xbc,&local_140,4);
    if (iVar4 == 0) {
      _DAT_01f13290 = local_140;
      _DAT_01f13294 = local_13c;
      _DAT_01f13298 = local_138;
      _DAT_01f1329c = local_134;
      FUN_00f99620(0xbc,&DAT_01f13290,4);
    }
    D3DXMatrixMultiply(local_60,local_a0,local_e0);
    FUN_00f9ee50(param_1 + 0x34,local_60);
    uVar5 = FUN_00fa0740(0);
    FUN_00fa1d50(param_1 + 0x28,uVar5);
    FUN_00f990e0(param_1);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00f9d8f0(uVar3);
    FUN_00f9d6e0(uVar2);
    FUN_00f9d760(local_ec);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_154);
  return;
}

// 00EB8B30  FUN_00eb8b30  size=425  [run]
void FUN_00eb8b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_104 [8];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  uVar3 = DAT_018da674;
  uVar2 = DAT_018da670;
  uVar1 = DAT_018da65c;
  local_14 = DAT_018e8764 ^ (uint)auStack_104;
  local_f4 = param_1;
  local_e4 = param_2;
  if (DAT_01edab78 != 0) {
    local_e8 = DAT_018da678;
    FUN_00f9d8f0(0);
    local_ec = DAT_018da63c;
    FUN_00f9d6e0(1);
    local_fc = DAT_018da644;
    FUN_00f9d760(0);
    local_f8 = DAT_018da648;
    FUN_00f9d7a0(0);
    local_f0 = DAT_018da688;
    FUN_00eadf00(local_e0,local_a0,param_3,param_4,param_5,param_6,1);
    FUN_00f9ea50(&DAT_01edd0ac,local_e4,4);
    D3DXMatrixMultiply(local_60,local_a0,local_e0);
    FUN_00f9ee50(&DAT_01edd0a0,local_60);
    uVar4 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edd0b8,uVar4);
    FUN_00f990e0(&DAT_01edd078);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00f9d8f0(uVar1);
    FUN_00f9d970(uVar2,uVar3,local_e8);
    FUN_00f9d6e0(local_ec);
    FUN_00f9d760(local_fc);
    FUN_00f9d7a0(local_f8);
    FUN_00f9da50(local_f0);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_104);
  return;
}

// 00EB8CE0  FUN_00eb8ce0  size=482  [run]
/* WARNING: Removing unreachable block (ram,0x00eb8e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb8ce0(undefined4 param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [12];
  float local_fc;
  float local_f8;
  int local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_108;
  if (DAT_01edab78 != 0) {
    FUN_00eae600();
    FUN_00eadf00(local_a0,local_e0,0,0,param_2,param_3,1);
    local_fc = _DAT_01f6c924;
    local_f8 = _DAT_01f6c928;
    iVar1 = FUN_00fa0740(0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
    iVar2 = FUN_00fa0740(0);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    local_f0 = (float)iVar2;
    if (iVar2 < 0) {
      local_f0 = local_f0 + 4.2949673e+09;
    }
    local_f0 = param_3 / local_f0;
    local_ec = 1.0 / (local_f8 - local_fc);
    local_e8 = local_ec * local_fc;
    local_e4 = (float)iVar1;
    if (iVar1 < 0) {
      local_e4 = local_e4 + 4.2949673e+09;
    }
    local_e4 = param_2 / local_e4;
    local_f4 = iVar1;
    FUN_00eb23e0(&local_f0);
    D3DXMatrixMultiply(local_60,local_e0,local_a0);
    FUN_00f9ee50(&DAT_01edd010,local_60);
    DAT_01edd030 = DAT_01edd030 & 0xe1fff010 | 0x1000111;
    uVar3 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edd028,uVar3);
    FUN_00f990e0(&DAT_01edcfe8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00eae690();
  }
  __security_check_cookie(local_14 ^ (uint)auStack_108);
  return;
}

// 00EB8ED0  FUN_00eb8ed0  size=411  [run]
/* WARNING: Removing unreachable block (ram,0x00eb8fe1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb8ed0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_e8 [4];
  int local_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_e8;
  if (DAT_01edab78 != 0) {
    FUN_00eae600();
    FUN_00eadf00(local_e0,local_a0,0,0,param_2,param_3,1);
    if ((_DAT_01edd9f4 & 1) == 0) {
      _DAT_01edd9f4 = _DAT_01edd9f4 | 1;
      _DAT_01edd9e4 = 0.0;
      _DAT_01edd9e8 = 0;
      _DAT_01edd9ec = 0;
      _DAT_01edd9f0 = 0x3f800000;
    }
    local_e4 = FUN_00f98a70();
    _DAT_01edd9e4 = 0.25 / (float)local_e4;
    FUN_00f9ea50(&DAT_01edcf7c,&DAT_01edd9e4,4);
    D3DXMatrixMultiply(local_60,local_a0,local_e0);
    FUN_00f9ee50(&DAT_01edcf70,local_60);
    DAT_01edcf90 = DAT_01edcf90 & 0xe1fff010 | 0x1000111;
    uVar1 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edcf88,uVar1);
    FUN_00f990e0(&DAT_01edcf48);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00eae690();
  }
  __security_check_cookie(local_14 ^ (uint)auStack_e8);
  return;
}

// 00EB9070  FUN_00eb9070  size=1431  [run]
/* WARNING: Removing unreachable block (ram,0x00eb9303) */
/* WARNING: Removing unreachable block (ram,0x00eb950a) */

void FUN_00eb9070(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_164 [12];
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [64];
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_164;
  local_134 = param_1;
  if (DAT_01edab78 != 0) {
    iVar3 = FUN_00fa0740(0);
    if (iVar3 == 0) {
      local_158 = 0;
    }
    else {
      local_158 = *(int *)(iVar3 + 8);
    }
    iVar3 = FUN_00fa0740(0);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    local_14c = iVar3;
    iVar4 = FUN_00f98ed0(0);
    if (iVar4 == 0) {
      iVar4 = FUN_00f98a90();
      iVar5 = FUN_00f98aa0();
    }
    else {
      iVar4 = FUN_00fa0740(0);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
      iVar5 = FUN_00fa0740(0);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 0xc);
      }
    }
    uVar2 = DAT_018da65c;
    if ((iVar4 == local_158) && (iVar5 == iVar3)) {
      FUN_00f9d8f0(0);
      uVar1 = DAT_018da63c;
      FUN_00f9d6e0(1);
      uVar6 = DAT_018da644;
      FUN_00f9d760(0);
      local_150 = DAT_018da648;
      FUN_00f9d7a0(0);
      local_154 = DAT_018da688;
      FUN_00f9db30(1);
      FUN_00fa17a0(local_134,0,0,local_158,local_14c);
      FUN_00f9d8f0(uVar2);
      FUN_00f9d6e0(uVar1);
      FUN_00f9d760(uVar6);
      FUN_00f9d7a0(local_150);
      FUN_00f9da50(local_154);
    }
    else {
      FUN_00fa17a0(DAT_01b83c00,0,0,iVar4,iVar5);
      uVar1 = DAT_018da670;
      uVar2 = DAT_018da65c;
      local_130 = 0x3f800000;
      local_12c = 0x3f800000;
      local_128 = 0x3f800000;
      local_124 = 0x3f800000;
      local_154 = DAT_01b83c00;
      if (DAT_01edab78 != 0) {
        local_13c = DAT_018da674;
        local_150 = DAT_018da678;
        FUN_00f9d8f0(0);
        local_140 = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_148 = DAT_018da644;
        FUN_00f9d760(0);
        local_138 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_144 = DAT_018da688;
        FUN_00f9db30(1);
        FUN_00eadf00(local_a0,local_120,0,0,(float)local_158,(float)local_14c,1);
        FUN_00f9ea50(&DAT_01edcd64,&local_130,4);
        D3DXMatrixMultiply(local_e0,local_120,local_a0);
        FUN_00f9ee50(&DAT_01edcd58,local_e0);
        DAT_01edcd78 = DAT_01edcd78 & 0xe1fff010 | 0x1000111;
        uVar6 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcd70,uVar6);
        FUN_00f990e0(&DAT_01edcd30);
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar2);
        FUN_00f9d970(uVar1,local_13c,local_150);
        FUN_00f9d6e0(local_140);
        FUN_00f9d760(local_148);
        FUN_00f9d7a0(local_138);
        FUN_00f9da50(local_144);
        iVar3 = local_14c;
      }
      FUN_00fa17a0(local_134,0,0,local_158,iVar3);
      uVar1 = DAT_018da670;
      uVar2 = DAT_018da65c;
      if ((param_2 != 0) && (local_144 = DAT_01b83c00, DAT_01edab78 != 0)) {
        local_148 = DAT_018da674;
        local_138 = DAT_018da678;
        FUN_00f9d8f0(1);
        FUN_00f9d970(5,6,1);
        local_140 = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_13c = DAT_018da644;
        FUN_00f9d760(0);
        local_154 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_150 = DAT_018da688;
        FUN_00f9db30(1);
        FUN_00eadf00(local_e0,local_120,0,0,(float)local_158,(float)local_14c,1);
        FUN_00f9ea50(&DAT_01edcd64,&local_130,4);
        D3DXMatrixMultiply(local_a0,local_120,local_e0);
        FUN_00f9ee50(&DAT_01edcd58,local_a0);
        DAT_01edcd78 = DAT_01edcd78 & 0xe1fff010 | 0x1000111;
        uVar6 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcd70,uVar6);
        FUN_00f990e0(&DAT_01edcd30);
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar2);
        FUN_00f9d970(uVar1,local_148,local_138);
        FUN_00f9d6e0(local_140);
        FUN_00f9d760(local_13c);
        FUN_00f9d7a0(local_154);
        FUN_00f9da50(local_150);
      }
    }
    FUN_00a28070(local_60,0,0x477fff00);
    FUN_00f9ee50(&DAT_01edcd58,local_60);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_164);
  return;
}

// 00EB9610  FUN_00eb9610  size=2445  [run]
void FUN_00eb9610(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_194 [12];
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined4 local_178;
  float local_174;
  int local_170;
  float local_16c;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [64];
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  undefined1 local_90 [48];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_194;
  local_164 = param_1;
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  if (DAT_01edab78 != 0) {
    FUN_00f9bf20();
    iVar3 = FUN_00fa0740();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 8);
    }
    local_168 = iVar3;
    iVar4 = FUN_00fa0740();
    if (iVar4 == 0) {
      local_170 = 0;
    }
    else {
      local_170 = *(int *)(iVar4 + 0xc);
    }
    if ((param_4 - param_2 == iVar3) && (param_5 - param_3 == local_170)) {
      FUN_00fa17a0(local_164,0,0,iVar3,local_170);
    }
    else if (param_4 < iVar3) {
      FUN_00fa17a0(DAT_01b83c00,0,0,param_4,param_5);
      local_184 = (float)param_4;
      local_188 = (float)FUN_00f98a70();
      local_180 = local_184 / (float)(int)local_188;
      local_184 = (float)param_5;
      iVar4 = FUN_00f98a80();
      uVar2 = DAT_018da670;
      uVar1 = DAT_018da65c;
      local_188 = local_184 / (float)iVar4;
      if ((local_180 < 1.0 == (local_180 == 1.0)) || (local_188 < 1.0 == (local_188 == 1.0))) {
        FUN_00dd5650("Resolve(): SIZE ERROR [%d,%d]->[%d,%d](%f,%f)",param_4,param_5,iVar3,local_170
                     ,(double)local_180,(double)local_188);
      }
      else {
        local_160 = 0x3f800000;
        local_188 = DAT_01b83c00;
        local_15c = 0x3f800000;
        local_158 = 0x3f800000;
        local_154 = 0x3f800000;
        if (DAT_01edab78 != 0) {
          local_180 = DAT_018da674;
          local_184 = DAT_018da678;
          FUN_00f9d8f0();
          local_178 = DAT_018da63c;
          FUN_00f9d6e0(1);
          local_17c = DAT_018da644;
          FUN_00f9d760();
          local_174 = DAT_018da648;
          FUN_00f9d7a0(0);
          local_16c = DAT_018da688;
          FUN_00f9db30(1);
          FUN_00eadf00(local_d0,local_110,0,0,(float)local_168,(float)local_170,1);
          FUN_00f9ea50(&DAT_01edcd64,&local_160,4);
          D3DXMatrixMultiply();
          FUN_00f9ee50(&DAT_01edcd58,local_150);
          uVar5 = DAT_01edcd78 & 0xe1ffffff | 0x1000000;
          DAT_01edcd78._3_1_ = (byte)(uVar5 >> 0x18);
          uVar7 = 1;
          iVar3 = 1;
          if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
            uVar7 = 3;
            iVar3 = 3;
          }
          uVar5 = uVar5 ^ (iVar3 << 8 ^ uVar5) & 0xf00;
          DAT_01edcd78 = (uVar5 ^ (uVar5 ^ uVar7) & 0xf) & 0xffffff1f | 0x10;
          uVar6 = FUN_00fa0740();
          FUN_00fa1d50(&DAT_01edcd70,uVar6);
          FUN_00f990e0();
          FUN_00f98f80(&PTR_vftable_018da4d8);
          FUN_00f99010(0,&DAT_01edd1d8);
          FUN_00f99010(1,&DAT_01edd200);
          FUN_00f9dfb0(5);
          FUN_00f9d8f0(uVar1);
          FUN_00f9d970(uVar2,local_180,local_184);
          FUN_00f9d6e0(local_178);
          FUN_00f9d760(local_17c);
          FUN_00f9d7a0(local_174);
          FUN_00f9da50();
          iVar3 = local_168;
        }
        FUN_00fa17a0(local_164,0,0,iVar3,local_170);
        uVar2 = DAT_018da670;
        uVar1 = DAT_018da65c;
        if ((param_6 != 0) && (local_188 = DAT_01b83c00, DAT_01edab78 != 0)) {
          local_180 = DAT_018da674;
          local_184 = DAT_018da678;
          FUN_00f9d8f0();
          local_178 = DAT_018da63c;
          FUN_00f9d6e0(1);
          local_17c = DAT_018da644;
          FUN_00f9d760();
          local_174 = DAT_018da648;
          FUN_00f9d7a0(0);
          local_16c = DAT_018da688;
          FUN_00f9db30(1);
          FUN_00eadf00(local_d0,local_110,0,0,(float)local_168,(float)local_170,1);
          FUN_00f9ea50(&DAT_01edcd64,&local_160,4);
          D3DXMatrixMultiply();
          FUN_00f9ee50(&DAT_01edcd58,local_150);
          uVar5 = DAT_01edcd78 & 0xe1ffffff | 0x1000000;
          DAT_01edcd78._3_1_ = (byte)(uVar5 >> 0x18);
          uVar7 = 1;
          iVar3 = 1;
          if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
            uVar7 = 3;
            iVar3 = 3;
          }
          uVar5 = uVar5 ^ (iVar3 << 8 ^ uVar5) & 0xf00;
          DAT_01edcd78 = (uVar5 ^ (uVar5 ^ uVar7) & 0xf) & 0xffffff1f | 0x10;
          uVar6 = FUN_00fa0740();
          FUN_00fa1d50(&DAT_01edcd70,uVar6);
          FUN_00f990e0();
          FUN_00f98f80(&PTR_vftable_018da4d8);
          FUN_00f99010(0,&DAT_01edd1d8);
          FUN_00f99010(1,&DAT_01edd200);
          FUN_00f9dfb0(5);
          FUN_00f9d8f0(uVar1);
          FUN_00f9d970(uVar2,local_180,local_184);
          FUN_00f9d6e0(local_178);
          FUN_00f9d760(local_17c);
          FUN_00f9d7a0(local_174);
          FUN_00f9da50();
        }
      }
      thunk_FUN_00fa5730(local_90,1);
    }
    else {
      FUN_00fa17a0(DAT_01b83c00);
      uVar2 = DAT_018da670;
      uVar1 = DAT_018da65c;
      local_160 = 0x3f800000;
      local_15c = 0x3f800000;
      local_158 = 0x3f800000;
      local_154 = 0x3f800000;
      local_16c = DAT_01b83c00;
      if (DAT_01edab78 != 0) {
        local_17c = DAT_018da674;
        local_174 = DAT_018da678;
        FUN_00f9d8f0();
        local_178 = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_180 = DAT_018da644;
        FUN_00f9d760();
        local_184 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_188 = DAT_018da688;
        FUN_00f9db30(1);
        FUN_00eadf00(local_150,local_110,0,0,(float)local_168,(float)local_170,1);
        FUN_00f9ea50(&DAT_01edcd64,&local_160,4);
        D3DXMatrixMultiply();
        FUN_00f9ee50(&DAT_01edcd58,local_d0);
        uVar5 = DAT_01edcd78 & 0xe1ffffff | 0x1000000;
        DAT_01edcd78._3_1_ = (byte)(uVar5 >> 0x18);
        uVar7 = 1;
        iVar3 = 1;
        if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
          uVar7 = 3;
          iVar3 = 3;
        }
        uVar5 = uVar5 ^ (iVar3 << 8 ^ uVar5) & 0xf00;
        DAT_01edcd78 = (uVar5 ^ (uVar5 ^ uVar7) & 0xf) & 0xffffff1f | 0x10;
        uVar6 = FUN_00fa0740();
        FUN_00fa1d50(&DAT_01edcd70,uVar6);
        FUN_00f990e0();
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar1);
        FUN_00f9d970(uVar2,local_17c,local_174);
        FUN_00f9d6e0(local_178);
        FUN_00f9d760(local_180);
        FUN_00f9d7a0(local_184);
        FUN_00f9da50();
        iVar3 = local_168;
      }
      FUN_00fa17a0(local_164,0,0,iVar3,local_170);
      uVar2 = DAT_018da670;
      uVar1 = DAT_018da65c;
      if ((param_6 != 0) && (local_188 = DAT_01b83c00, DAT_01edab78 != 0)) {
        local_180 = DAT_018da674;
        local_184 = DAT_018da678;
        FUN_00f9d8f0();
        local_178 = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_17c = DAT_018da644;
        FUN_00f9d760();
        local_174 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_16c = DAT_018da688;
        FUN_00f9db30(1);
        FUN_00eadf00(local_d0,local_110,0,0,(float)local_168,(float)local_170,1);
        FUN_00f9ea50(&DAT_01edcd64,&local_160,4);
        D3DXMatrixMultiply();
        FUN_00f9ee50(&DAT_01edcd58,local_150);
        uVar5 = DAT_01edcd78 & 0xe1ffffff | 0x1000000;
        DAT_01edcd78._3_1_ = (byte)(uVar5 >> 0x18);
        uVar7 = 1;
        iVar3 = 1;
        if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
          uVar7 = 3;
          iVar3 = 3;
        }
        uVar5 = uVar5 ^ (iVar3 << 8 ^ uVar5) & 0xf00;
        DAT_01edcd78 = (uVar5 ^ (uVar5 ^ uVar7) & 0xf) & 0xffffff1f | 0x10;
        uVar6 = FUN_00fa0740();
        FUN_00fa1d50(&DAT_01edcd70,uVar6);
        FUN_00f990e0();
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar1);
        FUN_00f9d970(uVar2,local_180,local_184);
        FUN_00f9d6e0(local_178);
        FUN_00f9d760(local_17c);
        FUN_00f9d7a0(local_174);
        FUN_00f9da50();
      }
    }
    puVar8 = local_60;
    uVar9 = 0x477fff0000000000;
    FUN_00a28070();
    FUN_00f9ee50(&DAT_01edcd58,local_60,puVar8,uVar9);
  }
  Hw::cRenderTargetInfo::~cRenderTargetInfo();
  __security_check_cookie(local_14 ^ (uint)auStack_194);
  return;
}

// 00EB9FC0  FUN_00eb9fc0  size=554  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00eb9fc0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_01be8e54 != 0) {
    iVar2 = FUN_00eb1c20();
    if (iVar2 == 0) {
      uVar4 = 0;
      uVar3 = FUN_00a4d610();
      uVar3 = CubeMapManager::getCubeTexIndex(uVar3,uVar4);
      *(undefined4 *)(param_1 + 0x1858) = uVar3;
      if (*(int *)(param_1 + 0x185c) == -99999) {
        *(undefined4 *)(param_1 + 0x185c) = uVar3;
      }
      if (*(int *)(param_1 + 0x184c) != 0) {
        *(undefined4 *)(param_1 + 0x184c) = 0;
      }
    }
    else {
      uVar3 = CubeMapManager::getCubeTexIndex
                        (*(undefined2 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 10));
      *(undefined4 *)(param_1 + 0x1858) = uVar3;
      if (*(int *)(param_1 + 0x185c) == -99999) {
        *(undefined4 *)(param_1 + 0x185c) = uVar3;
      }
      *(uint *)(param_1 + 0x1850) = (uint)*(ushort *)(iVar2 + 8);
      *(uint *)(param_1 + 0x1854) = (uint)*(ushort *)(iVar2 + 10);
      *(undefined4 *)(param_1 + 0x184c) = 1;
      FUN_00f96580(0x44800000,0x42000000,0x41200000,0xffffffff,0xffffffff,"C:R%03x_%d",
                   *(undefined2 *)(iVar2 + 8),*(undefined2 *)(iVar2 + 10));
    }
  }
  if (*(float *)(param_1 + 0x1864) == -1.0) {
    if (*(int *)(param_1 + 0x185c) != *(int *)(param_1 + 0x1858)) {
      *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1858);
      *(undefined4 *)(param_1 + 0x1864) = 0;
      return;
    }
  }
  else {
    FUN_00f96580(0x44800000,0x42400000,0x41200000,0xffffffff,0xffffffff,&DAT_016d2ca0,
                 *(undefined4 *)(param_1 + 0x185c),*(undefined4 *)(param_1 + 0x1860),
                 (double)*(float *)(param_1 + 0x1864));
    fVar1 = 1.0 / (_DAT_018d5f04 * 60.0) + *(float *)(param_1 + 0x1864);
    *(float *)(param_1 + 0x1864) = fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      *(int *)(param_1 + 0x185c) = *(int *)(param_1 + 0x1860);
      if (*(int *)(param_1 + 0x1860) == *(int *)(param_1 + 0x1858)) {
        *(undefined4 *)(param_1 + 0x1864) = 0xbf800000;
        return;
      }
      *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1858);
      *(undefined4 *)(param_1 + 0x1864) = 0;
    }
  }
  return;
}

// 00EBA1F0  FUN_00eba1f0  size=127  [run]
void FUN_00eba1f0(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00eb3e60(param_1,&local_10,&local_20);
  FUN_00fcdcd0(0x80000007,local_10,local_20);
  FUN_00fcdcd0(0x80000008,local_c,local_1c);
  FUN_00fcdcd0(0x80000009,local_8,local_18);
  FUN_00fcdcd0(0x8000000a,local_4,local_14);
  return;
}

// 00EBA270  FUN_00eba270  size=28  [run]
void FUN_00eba270(uint param_1)

{
  FUN_00eb3fe0(param_1 & 0xff,param_1 >> 8 & 0xffff);
  return;
}

// 00EBA290  FUN_00eba290  size=18  [run]
void FUN_00eba290(undefined4 param_1,undefined4 param_2)

{
  FUN_00eb3fe0(param_2,param_1);
  return;
}

// 00EBA2B0  FUN_00eba2b0  size=4908  [run]
/* WARNING: Removing unreachable block (ram,0x00eba776) */
/* WARNING: Removing unreachable block (ram,0x00eba9c1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eba2b0(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  float10 fVar10;
  undefined1 auStack_134 [4];
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  float local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_134;
  if ((_DAT_01bea080 & 0x400000) == 0) {
    local_130 = 0;
    FUN_00f9d7a0(0);
    FUN_00f9d760(0);
    FUN_00f9d930(0);
    FUN_00f9d8f0(0);
    local_f4 = FUN_00f98ed0(0);
    if (local_f4 == DAT_01b83bc4) {
      local_130 = 1;
    }
    fVar10 = (float10)FUN_00e773a0(&DAT_01be5540);
    local_120 = (float)fVar10;
    if ((local_120 <= 2.0) || ((_DAT_01b83d3c & 0x400) == 0)) {
      FUN_00a28210(DAT_01b83c24 + 0x280,0,0,1);
      iVar5 = FUN_00fa0740(0);
      if (iVar5 == 0) {
        local_120 = 0.0;
      }
      else {
        local_120 = *(float *)(iVar5 + 0xc);
      }
      iVar5 = FUN_00fa0740(0);
      uVar4 = DAT_018da670;
      uVar3 = DAT_018da65c;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
      }
      local_108 = 0x3f800000;
      local_104 = 0x3f800000;
      local_100 = 0x3f800000;
      local_fc = 0x3f800000;
      if (DAT_01edab78 != 0) {
        local_124 = DAT_018da674;
        local_11c = DAT_018da678;
        FUN_00f9d8f0(0);
        local_10c = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_128 = DAT_018da644;
        FUN_00f9d760(0);
        local_110 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_118 = DAT_018da688;
        FUN_00f9db30(1);
        fVar1 = (float)(int)local_120;
        if ((int)local_120 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar2 = (float)iVar5;
        if (iVar5 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        local_114 = iVar5;
        FUN_00eadf00(local_60,local_a0,0,0,fVar2,fVar1,1);
        FUN_00f9ea50(&DAT_01edcd64,&local_108,4);
        D3DXMatrixMultiply(local_e0,local_a0,local_60);
        FUN_00f9ee50(&DAT_01edcd58,local_e0);
        uVar6 = DAT_01edcd78 & 0xe1ffffff | 0x1000000;
        DAT_01edcd78._3_1_ = (byte)(uVar6 >> 0x18);
        uVar8 = 1;
        iVar5 = 1;
        if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
          uVar8 = 3;
          iVar5 = 3;
        }
        uVar6 = uVar6 ^ (iVar5 << 8 ^ uVar6) & 0xf00;
        DAT_01edcd78 = (uVar6 ^ (uVar8 ^ uVar6) & 0xf) & 0xffffff1f | 0x10;
        uVar7 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcd70,uVar7);
        FUN_00f990e0(&DAT_01edcd30);
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar3);
        FUN_00f9d970(uVar4,local_124,local_11c);
        FUN_00f9d6e0(local_10c);
        FUN_00f9d760(local_128);
        FUN_00f9d7a0(local_110);
        FUN_00f9da50(local_118);
      }
    }
    else {
      if (_DAT_018d5f0c != local_120) {
        FUN_00a28210(DAT_01b83c24 + 0x2d0,0,0,1);
        iVar5 = FUN_00fa0740(0);
        if (iVar5 == 0) {
          local_12c = 0;
        }
        else {
          local_12c = *(int *)(iVar5 + 0xc);
        }
        iVar5 = FUN_00fa0740(0);
        uVar4 = DAT_018da670;
        uVar3 = DAT_018da65c;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar5 + 8);
        }
        local_108 = 0x3f800000;
        local_114 = DAT_01b83c24 + 0x280;
        local_104 = 0x3f800000;
        local_100 = 0x3f800000;
        local_fc = 0x3f800000;
        if (DAT_01edab78 != 0) {
          local_110 = DAT_018da674;
          local_118 = DAT_018da678;
          FUN_00f9d8f0(0);
          local_128 = DAT_018da63c;
          FUN_00f9d6e0(1);
          local_10c = DAT_018da644;
          FUN_00f9d760(0);
          local_124 = DAT_018da648;
          FUN_00f9d7a0(0);
          local_11c = DAT_018da688;
          FUN_00f9db30(1);
          fVar1 = (float)local_12c;
          if (local_12c < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          fVar2 = (float)iVar5;
          if (iVar5 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          local_12c = iVar5;
          FUN_00eadf00(local_e0,local_a0,0,0,fVar2,fVar1,1);
          FUN_00f9ea50(&DAT_01edcd64,&local_108,4);
          D3DXMatrixMultiply(local_60,local_a0,local_e0);
          FUN_00f9ee50(&DAT_01edcd58,local_60);
          uVar6 = DAT_01edcd78 & 0xe1ffffff | 0x1000000;
          DAT_01edcd78._3_1_ = (byte)(uVar6 >> 0x18);
          uVar8 = 1;
          iVar5 = 1;
          if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
            uVar8 = 3;
            iVar5 = 3;
          }
          uVar6 = uVar6 ^ (iVar5 << 8 ^ uVar6) & 0xf00;
          DAT_01edcd78 = (uVar6 ^ (uVar8 ^ uVar6) & 0xf) & 0xffffff1f | 0x10;
          uVar7 = FUN_00fa0740(0);
          FUN_00fa1d50(&DAT_01edcd70,uVar7);
          FUN_00f990e0(&DAT_01edcd30);
          FUN_00f98f80(&PTR_vftable_018da4d8);
          FUN_00f99010(0,&DAT_01edd1d8);
          FUN_00f99010(1,&DAT_01edd200);
          FUN_00f9dfb0(5);
          FUN_00f9d8f0(uVar3);
          FUN_00f9d970(uVar4,local_110,local_118);
          FUN_00f9d6e0(local_128);
          FUN_00f9d760(local_10c);
          FUN_00f9d7a0(local_124);
          FUN_00f9da50(local_11c);
        }
        FUN_00a28210(DAT_01b83c24 + 0x280,0,0,1);
        iVar5 = FUN_00fa0740(0);
        if (iVar5 == 0) {
          local_12c = 0;
        }
        else {
          local_12c = *(int *)(iVar5 + 0xc);
        }
        iVar5 = FUN_00fa0740(0);
        uVar4 = DAT_018da670;
        uVar3 = DAT_018da65c;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar5 + 8);
        }
        local_108 = 0x3f000000;
        local_11c = DAT_01b83c24 + 0x2d0;
        local_104 = 0x3f000000;
        local_100 = 0x3f000000;
        local_fc = 0x3f000000;
        if (DAT_01edab78 != 0) {
          local_10c = DAT_018da674;
          local_124 = DAT_018da678;
          FUN_00f9d8f0(0);
          local_128 = DAT_018da63c;
          FUN_00f9d6e0(1);
          local_110 = DAT_018da644;
          FUN_00f9d760(0);
          local_118 = DAT_018da648;
          FUN_00f9d7a0(0);
          local_114 = DAT_018da688;
          FUN_00f9db30(1);
          fVar1 = (float)local_12c;
          if (local_12c < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          fVar2 = (float)iVar5;
          if (iVar5 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          local_12c = iVar5;
          FUN_00eadf00(local_60,local_a0,0,0,fVar2,fVar1,1);
          FUN_00f9ea50(&DAT_01edcd64,&local_108,4);
          D3DXMatrixMultiply(local_e0,local_a0,local_60);
          FUN_00f9ee50(&DAT_01edcd58,local_e0);
          DAT_01edcd78 = DAT_01edcd78 & 0xe1fff010 | 0x1000111;
          uVar7 = FUN_00fa0740(0);
          FUN_00fa1d50(&DAT_01edcd70,uVar7);
          FUN_00f990e0(&DAT_01edcd30);
          FUN_00f98f80(&PTR_vftable_018da4d8);
          FUN_00f99010(0,&DAT_01edd1d8);
          FUN_00f99010(1,&DAT_01edd200);
          FUN_00f9dfb0(5);
          FUN_00f9d8f0(uVar3);
          FUN_00f9d970(uVar4,local_10c,local_124);
          FUN_00f9d6e0(local_128);
          FUN_00f9d760(local_110);
          FUN_00f9d7a0(local_118);
          FUN_00f9da50(local_114);
        }
        iVar5 = FUN_00fa0740(0);
        if (iVar5 == 0) {
          local_12c = 0;
        }
        else {
          local_12c = *(int *)(iVar5 + 0xc);
        }
        iVar5 = FUN_00fa0740(0);
        uVar4 = DAT_018da670;
        uVar3 = DAT_018da65c;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar5 + 8);
        }
        local_108 = 0x3f000000;
        local_104 = 0x3f000000;
        local_100 = 0x3f000000;
        local_fc = 0x3f000000;
        if (DAT_01edab78 != 0) {
          local_124 = DAT_018da674;
          local_11c = DAT_018da678;
          FUN_00f9d8f0(1);
          FUN_00f9d970(2,2,1);
          local_10c = DAT_018da63c;
          FUN_00f9d6e0(1);
          local_128 = DAT_018da644;
          FUN_00f9d760(0);
          local_110 = DAT_018da648;
          FUN_00f9d7a0(0);
          local_118 = DAT_018da688;
          FUN_00f9db30(1);
          fVar1 = (float)local_12c;
          if (local_12c < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          fVar2 = (float)iVar5;
          if (iVar5 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          local_114 = iVar5;
          FUN_00eadf00(local_60,local_a0,0,0,fVar2,fVar1,1);
          FUN_00f9ea50(&DAT_01edcd64,&local_108,4);
          D3DXMatrixMultiply(local_e0,local_a0,local_60);
          FUN_00f9ee50(&DAT_01edcd58,local_e0);
          DAT_01edcd78 = DAT_01edcd78 & 0xe1fff010 | 0x1000111;
          uVar7 = FUN_00fa0740(0);
          FUN_00fa1d50(&DAT_01edcd70,uVar7);
          FUN_00f990e0(&DAT_01edcd30);
          FUN_00f98f80(&PTR_vftable_018da4d8);
          FUN_00f99010(0,&DAT_01edd1d8);
          FUN_00f99010(1,&DAT_01edd200);
          FUN_00f9dfb0(5);
          FUN_00f9d8f0(uVar3);
          FUN_00f9d970(uVar4,local_124,local_11c);
          FUN_00f9d6e0(local_10c);
          FUN_00f9d760(local_128);
          FUN_00f9d7a0(local_110);
          FUN_00f9da50(local_118);
        }
      }
      _DAT_018d5f0c = local_120;
    }
    FUN_00f990e0(&DAT_01f8bdb8);
    iVar9 = local_130 * 0x50;
    FUN_00a28210(iVar9 + DAT_01b83bc4,0,0,1);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    uStack_f0 = DAT_01edc678;
    uStack_ec = _DAT_01edc674;
    uStack_e8 = DAT_01edc66c;
    uStack_e4 = DAT_01edc670;
    iVar5 = FUN_00f99540(0xb8,&uStack_f0,4);
    if (iVar5 == 0) {
      DAT_01f13250 = uStack_f0;
      DAT_01f13254 = uStack_ec;
      DAT_01f13258 = uStack_e8;
      DAT_01f1325c = uStack_e4;
      FUN_00f99620(0xb8,&DAT_01f13250,4);
    }
    FUN_00fb1a20(DAT_01b83c2c);
    FUN_00f9dfb0(5);
    if (DAT_018d5f08 != 0) {
      if ((_DAT_01edda08 & 1) == 0) {
        _DAT_01edda08 = _DAT_01edda08 | 1;
        DAT_01edd9f8 = 0x3f800000;
        DAT_01edd9fc = 0x3f800000;
        DAT_01edda00 = 0x3f800000;
        DAT_01edda04 = 0x3f800000;
      }
      iVar5 = FUN_00f99540(0xb9,&DAT_01edd9f8,4);
      if (iVar5 == 0) {
        DAT_01f13260 = DAT_01edd9f8;
        DAT_01f13264 = DAT_01edd9fc;
        DAT_01f13268 = DAT_01edda00;
        DAT_01f1326c = DAT_01edda04;
        FUN_00f99620(0xb9,&DAT_01f13260,4);
      }
      iVar5 = FUN_00f99540(0xba,&DAT_01edd9f8,4);
      if (iVar5 == 0) {
        _DAT_01f13270 = DAT_01edd9f8;
        _DAT_01f13274 = DAT_01edd9fc;
        _DAT_01f13278 = DAT_01edda00;
        _DAT_01f1327c = DAT_01edda04;
        FUN_00f99620(0xba,&DAT_01f13270,4);
      }
      FUN_00a28210(DAT_01b83c28 + 0x50,0,0,1);
      local_108 = DAT_01edd9f8;
      local_104 = DAT_01edd9fc;
      local_100 = DAT_01edda00;
      local_fc = DAT_01edda04;
      iVar5 = FUN_00fa0740(0);
      if (iVar5 == 0) {
        local_130 = 0;
      }
      else {
        local_130 = *(int *)(iVar5 + 0xc);
      }
      iVar5 = FUN_00fa0740(0);
      uVar4 = DAT_018da670;
      uVar3 = DAT_018da65c;
      if (iVar5 == 0) {
        local_120 = 0.0;
      }
      else {
        local_120 = *(float *)(iVar5 + 8);
      }
      local_11c = iVar9 + DAT_01b83bc4;
      if (DAT_01edab78 != 0) {
        local_10c = DAT_018da674;
        local_124 = DAT_018da678;
        FUN_00f9d8f0(0);
        local_128 = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_110 = DAT_018da644;
        FUN_00f9d760(0);
        local_118 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_114 = DAT_018da688;
        FUN_00f9db30(1);
        fVar1 = (float)local_130;
        if (local_130 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar2 = (float)(int)local_120;
        if ((int)local_120 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        FUN_00eadf00(local_60,local_a0,0,0,fVar2,fVar1,1);
        FUN_00f9db30(0);
        FUN_00f9ea50(&DAT_01edcaa8,&DAT_01edd9f8,4);
        FUN_00f9ea50(&DAT_01edcab4,&local_108,4);
        FUN_00f9ee50(&DAT_01edca90,local_60);
        FUN_00f9ee50(&DAT_01edca9c,local_a0);
        uVar7 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcac0,uVar7);
        FUN_00f990e0(&DAT_01edca68);
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar3);
        FUN_00f9d970(uVar4,local_10c,local_124);
        FUN_00f9d6e0(local_128);
        FUN_00f9d760(local_110);
        FUN_00f9d7a0(local_118);
        FUN_00f9da50(local_114);
      }
      FUN_00a28210(iVar9 + DAT_01b83bc4,0,0,1);
      local_108 = DAT_01edd9f8;
      local_104 = DAT_01edd9fc;
      local_100 = DAT_01edda00;
      local_fc = DAT_01edda04;
      iVar5 = FUN_00fa0740(0);
      if (iVar5 == 0) {
        local_130 = 0;
      }
      else {
        local_130 = *(int *)(iVar5 + 0xc);
      }
      iVar5 = FUN_00fa0740(0);
      uVar4 = DAT_018da670;
      uVar3 = DAT_018da65c;
      if (iVar5 == 0) {
        local_120 = 0.0;
      }
      else {
        local_120 = *(float *)(iVar5 + 8);
      }
      local_11c = DAT_01b83c28 + 0x50;
      if (DAT_01edab78 != 0) {
        local_10c = DAT_018da674;
        local_124 = DAT_018da678;
        FUN_00f9d8f0(0);
        local_128 = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_110 = DAT_018da644;
        FUN_00f9d760(0);
        local_118 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_114 = DAT_018da688;
        FUN_00f9db30(1);
        fVar1 = (float)local_130;
        if (local_130 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar2 = (float)(int)local_120;
        if ((int)local_120 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        FUN_00eadf00(local_60,local_a0,0,0,fVar2,fVar1,1);
        FUN_00f9db30(0);
        FUN_00f9ea50(&DAT_01edcb28,&DAT_01edd9f8,4);
        FUN_00f9ea50(&DAT_01edcb34,&local_108,4);
        FUN_00f9ee50(&DAT_01edcb10,local_60);
        FUN_00f9ee50(&DAT_01edcb1c,local_a0);
        uVar7 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcb40,uVar7);
        FUN_00f990e0(&DAT_01edcae8);
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar3);
        FUN_00f9d970(uVar4,local_10c,local_124);
        FUN_00f9d6e0(local_128);
        FUN_00f9d760(local_110);
        FUN_00f9d7a0(local_118);
        FUN_00f9da50(local_114);
      }
    }
    FUN_00a28210(DAT_01b83c24 + 0x280,0,0,1);
    if (DAT_018d5f08 != 0) {
      iVar5 = FUN_00f99540(0xb8,&DAT_01edc67c,1);
      if (iVar5 == 0) {
        DAT_01f13250 = DAT_01edc67c;
        FUN_00f99620(0xb8,&DAT_01f13250,1);
      }
      FUN_00f9db30(1);
      FUN_00f9dc40(1,0,0);
      Hw::cRenderTargetInfo::cRenderTargetInfo();
      FUN_00f97580(0,DAT_01b83c24 + 0x140,1);
      FUN_00f97580(1,DAT_01b83c24 + 400,1);
      thunk_FUN_00fa5730(local_e0,1);
      FUN_00f990e0(&DAT_01f8c568);
      FUN_00f99010(0,&DAT_01edd1d8);
      FUN_00f99010(1,&DAT_01edd200);
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00fb21e0(DAT_01b83c24 + 0x280,iVar9 + DAT_01b83bc4,DAT_01b83c2c,DAT_01b83c24 + 0x50,
                   DAT_01b83c24 + 0xf0);
      FUN_00f9dfb0(5);
      FUN_00f97580(0,DAT_01b83c24 + 0x1e0,1);
      FUN_00f97580(1,DAT_01b83c24 + 0x230,1);
      thunk_FUN_00fa5730(local_e0,1);
      FUN_00f990e0(&DAT_01f8c5d0);
      FUN_00f99010(0,&DAT_01edd1d8);
      FUN_00f99010(1,&DAT_01edd200);
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00fb2260(DAT_01b83c24 + 0x140,iVar9 + DAT_01b83bc4,DAT_01b83c2c);
      FUN_00f9dfb0(5);
      FUN_00a33150();
      FUN_00a28210(DAT_01b83c24 + 0x140,0,0,1);
      FUN_00f990e0(&DAT_01f8c5d0);
      FUN_00f99010(0,&DAT_01edd1d8);
      FUN_00f99010(1,&DAT_01edd200);
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00fb2260(DAT_01b83c24 + 400,iVar9 + DAT_01b83bc4,DAT_01b83c2c);
      FUN_00f9dfb0(5);
      FUN_00a33150();
      FUN_00f9db30(0);
      FUN_00f9d8f0(1);
      FUN_00f9d970(5,6,1);
      FUN_00a28210(local_f4,0,0,1);
      FUN_00f990e0(&DAT_01f8c620);
      FUN_00f99010(0,&DAT_01edd1d8);
      FUN_00f99010(1,&DAT_01edd200);
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00fb22b0(DAT_01b83c24 + 0x140,DAT_01b83c24 + 0x1e0,DAT_01b83c24 + 0x230);
      FUN_00f9dfb0(5);
      FUN_00f9d8f0(0);
      FUN_00f9dc40(0,0,0);
      Hw::cRenderTargetInfo::~cRenderTargetInfo();
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_134);
  return;
}

// 00EBB5E0  FUN_00ebb5e0  size=2439  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ebb5e0(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float unaff_EBX;
  float unaff_ESI;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfStack_1a8;
  undefined1 *puStack_1a4;
  float *local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined8 local_178;
  float local_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined1 local_110 [48];
  undefined1 local_e0 [64];
  float afStack_a0 [16];
  undefined1 auStack_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_194;
  if ((_DAT_01bea080 & 0x400000) == 0) {
    puStack_1a4 = (undefined1 *)0x0;
    pfStack_1a8 = (float *)0xebb614;
    FUN_00f9d720();
    puStack_1a4 = (undefined1 *)0xebb621;
    FUN_00eab330();
    puVar9 = (undefined4 *)(&DAT_01edc440 + DAT_01edc41c * 0x28);
    puVar10 = &DAT_01edc66c;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    puStack_1a4 = (undefined1 *)0xebb646;
    FUN_00eab4f0();
    if (DAT_01edc6bc == 0) {
      if (0.0 < _DAT_01edc6b8) {
        _DAT_01edc6b8 = _DAT_01edc6b8 - 0.08;
      }
      _DAT_01edc6ac = (DAT_01edc66c - _DAT_01edc6ac) * 0.2 + _DAT_01edc6ac;
      _DAT_01edc6b0 = _DAT_01edc6b0 + (DAT_01edc67c - _DAT_01edc6b0) * 0.2;
    }
    if (_DAT_01edc6b8 < 0.0 == (_DAT_01edc6b8 == 0.0)) {
      if (1.0 < _DAT_01edc6b8) {
        _DAT_01edc6b8 = 1.0;
      }
    }
    else {
      _DAT_01edc6b8 = 0.0;
      _DAT_01edc6ac = DAT_01edc66c;
      _DAT_01edc6b0 = DAT_01edc67c;
    }
    _DAT_01edc69c = 1;
    fVar1 = (_DAT_01edc6ac - DAT_01edc66c) * 0.5 * _DAT_01edc6b8;
    local_164 = _DAT_01edc6b8 * (_DAT_01edc6ac - _DAT_01edc674);
    _DAT_01edc674 = _DAT_01edc674 + local_164;
    DAT_01edc66c = fVar1 + DAT_01edc66c;
    DAT_01edc670 = DAT_01edc670 + fVar1;
    DAT_01edc680 = DAT_01edc680 + fVar1;
    local_194 = (float *)((_DAT_01edc6b0 - DAT_01edc67c) * _DAT_01edc6b8);
    DAT_01edc67c = DAT_01edc67c + (float)local_194;
    puStack_1a4 = (undefined1 *)0xebb794;
    Hw::cRenderTargetInfo::cRenderTargetInfo();
    puStack_1a4 = local_110;
    pfStack_1a8 = (float *)0xebb7a1;
    FUN_00f9bf20();
    pfStack_1a8 = (float *)0x0;
    uVar4 = FUN_00f98ed0();
    FUN_00a28210(DAT_01b83c24 + 0x50,0,0,1);
    local_180 = _DAT_01f6c880;
    local_17c = (float)_DAT_01f6c884;
    local_178 = (double)CONCAT44(_DAT_01f6c88c,_DAT_01f6c888);
    if (DAT_01edc698 != 0) {
      local_180 = _DAT_01edc430;
      local_17c = (float)_DAT_01edc434;
      local_178 = (double)CONCAT44(_DAT_01edc43c,_DAT_01edc438);
    }
    puStack_1a4 = (undefined1 *)0x5;
    local_190 = 0.0;
    local_18c = 0.0;
    pfStack_1a8 = (float *)&DAT_01f6c8b0;
    local_184 = 0.0;
    local_188 = -DAT_01edc66c;
    FUN_00ddc1d0(local_e0);
    puStack_1a4 = local_e0;
    pfStack_1a8 = &local_190;
    D3DXVec3TransformNormal(pfStack_1a8);
    local_18c = unaff_ESI + local_18c;
    local_188 = unaff_EBX + local_188;
    local_184 = local_184 + (float)local_194;
    local_180 = local_190 + local_180;
    if (((DAT_01bea060 & 0x40000000) == 0) && (iVar7 = FUN_00f96420(), iVar7 == 0x1f)) {
      local_194 = _DAT_01f6c898;
      local_190 = _DAT_01f6c89c;
      FUN_00f96100(&local_18c,0x3e4ccccd,0xffffffff,0,0);
      FUN_00f95f40(&local_18c,&stack0xfffffe64,0xffff0000,0);
    }
    uStack_13c = 0;
    uStack_138 = 0x3dcccccd;
    fStack_120 = 0.1;
    fStack_124 = 0.0;
    fStack_140 = DAT_01edc670;
    fStack_128 = DAT_01edc67c;
    local_180 = 1.0;
    D3DXVec3TransformCoord(&local_18c,&local_18c,DAT_01f6c7a4);
    local_17c = _DAT_01f6c924;
    local_178 = (double)(_DAT_01f6c928 - _DAT_01f6c924);
    local_190 = (local_190 - _DAT_01f6c924) / (_DAT_01f6c928 - _DAT_01f6c924);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00fb2170(uVar4,DAT_01b83c2c,uVar4);
    iVar7 = DAT_01f6c7a4;
    fStack_140 = _DAT_01edc674;
    uStack_13c = 0;
    uStack_138 = 0;
    puVar5 = DAT_01beb8c0;
    if (DAT_01beb8c0 == (undefined *)0x0) {
      puVar5 = &DAT_01bea1d0;
    }
    pfStack_1a8 = *(float **)(puVar5 + 0x1c0);
    puStack_1a4 = *(undefined1 **)(puVar5 + 0x1c4);
    D3DXVec3TransformNormal(&pfStack_1a8,&pfStack_1a8,DAT_01f6c7a4);
    puStack_1a4 = (undefined1 *)0x0;
    local_190 = *(float *)(iVar7 + 0x30) + local_190;
    local_18c = *(float *)(iVar7 + 0x34) + local_18c;
    local_194 = (float *)(*(float *)(iVar7 + 0x38) + local_188);
    local_188 = (float)local_194 * -1.0;
    local_180 = local_188 + DAT_01edc66c;
    fStack_134 = local_188 + fStack_134;
    local_17c = (float)(double)CONCAT44(uStack_15c,iStack_160);
    local_178 = (double)CONCAT44(local_178._4_4_,local_164);
    fStack_130 = 1.0 / (fStack_134 - local_180);
    fStack_12c = 1.0 / (DAT_01edc678 - fStack_128);
    fStack_124 = local_180 / (fStack_134 - local_180);
    fStack_120 = fStack_128 / (DAT_01edc678 - fStack_128);
    pfStack_1a8 = (float *)0xebbadc;
    FUN_00f9d720();
    pfStack_1a8 = (float *)&DAT_01f8c4b0;
    FUN_00f990e0();
    FUN_00f9da90(1);
    FUN_00f9db30(1);
    FUN_00f9d8f0(0);
    FUN_00f9d930(0);
    FUN_00f9d760(0);
    FUN_00f9d7a0(0);
    FUN_00f9d6e0(3);
    iVar7 = FUN_00f99540(0xb8,&local_180,3);
    if (iVar7 == 0) {
      puStack_1a4 = (undefined1 *)0x3;
      pfStack_1a8 = &DAT_01f13250;
      DAT_01f13250 = local_180;
      DAT_01f13254 = local_17c;
      DAT_01f13258 = (undefined4)local_178;
      FUN_00f99620(0xb8);
    }
    puStack_1a4 = (undefined1 *)0x3;
    pfStack_1a8 = &fStack_134;
    iVar7 = FUN_00f99540(0xb9);
    if (iVar7 == 0) {
      puStack_1a4 = (undefined1 *)0x3;
      pfStack_1a8 = &DAT_01f13260;
      DAT_01f13260 = fStack_134;
      DAT_01f13264 = fStack_130;
      DAT_01f13268 = fStack_12c;
      FUN_00f99620(0xb9);
    }
    puStack_1a4 = (undefined1 *)0x3;
    pfStack_1a8 = &fStack_128;
    iVar7 = FUN_00f99540(0xba);
    if (iVar7 == 0) {
      puStack_1a4 = (undefined1 *)0x3;
      pfStack_1a8 = (float *)&DAT_01f13270;
      _DAT_01f13270 = fStack_128;
      _DAT_01f13274 = fStack_124;
      _DAT_01f13278 = fStack_120;
      FUN_00f99620(0xba);
    }
    puStack_1a4 = (undefined1 *)0x1;
    pfStack_1a8 = &DAT_01edc678;
    iVar7 = FUN_00f99540(0xbb);
    if (iVar7 == 0) {
      puStack_1a4 = (undefined1 *)0x1;
      pfStack_1a8 = (float *)&DAT_01f13280;
      _DAT_01f13280 = DAT_01edc678;
      FUN_00f99620(0xbb);
    }
    puStack_1a4 = (undefined1 *)0x3;
    pfStack_1a8 = &fStack_11c;
    iVar7 = FUN_00f99540(0xbc);
    if (iVar7 == 0) {
      puStack_1a4 = (undefined1 *)0x3;
      pfStack_1a8 = (float *)&DAT_01f13290;
      _DAT_01f13290 = fStack_11c;
      _DAT_01f13294 = uStack_118;
      _DAT_01f13298 = uStack_114;
      FUN_00f99620(0xbc);
    }
    puStack_1a4 = (undefined1 *)0x1;
    pfStack_1a8 = &DAT_01edc680;
    iVar7 = FUN_00f99540(0xbd);
    if (iVar7 == 0) {
      puStack_1a4 = (undefined1 *)0x1;
      pfStack_1a8 = (float *)&DAT_01f132a0;
      _DAT_01f132a0 = DAT_01edc680;
      FUN_00f99620(0xbd);
    }
    puStack_1a4 = (undefined1 *)0x5;
    pfStack_1a8 = (float *)0xebbcbf;
    FUN_00f9dfb0();
    pfStack_1a8 = (float *)0x0;
    FUN_00f9db30();
    FUN_00f9d760(1);
    FUN_00f9d6e0(3);
    DAT_01edc698 = 0;
    thunk_FUN_00fa5730(local_110,1);
    puStack_1a4 = (undefined1 *)0x0;
    pfStack_1a8 = (float *)0xebbcf9;
    iVar7 = FUN_00fa0740();
    if (iVar7 == 0) {
      iStack_160 = 0;
    }
    else {
      iStack_160 = *(int *)(iVar7 + 8);
    }
    local_164 = (float)iStack_160;
    if (iStack_160 < 0) {
      local_164 = local_164 + 4.2949673e+09;
    }
    puStack_1a4 = (undefined1 *)0x0;
    pfStack_1a8 = (float *)0xebbd23;
    iVar7 = FUN_00fa0740();
    uVar3 = DAT_018da674;
    uVar2 = DAT_018da670;
    uVar4 = DAT_018da65c;
    if (iVar7 == 0) {
      iStack_160 = 0;
    }
    else {
      iStack_160 = *(int *)(iVar7 + 0xc);
    }
    local_194 = (float *)(float)iStack_160;
    if (iStack_160 < 0) {
      local_194 = (float *)((float)local_194 + 4.2949673e+09);
    }
    iStack_148 = DAT_01b83c24 + 0x50;
    uStack_144 = 0x3f800000;
    fStack_140 = 1.0;
    uStack_13c = 0x3f800000;
    uStack_138 = 0x3f800000;
    if (DAT_01edab78 != 0) {
      puStack_1a4 = (undefined1 *)0x1;
      uStack_154 = DAT_018da678;
      pfStack_1a8 = (float *)0xebbd93;
      FUN_00f9d8f0();
      pfStack_1a8 = (float *)0x1;
      FUN_00f9d970(5,6);
      uStack_14c = DAT_018da63c;
      FUN_00f9d6e0(1);
      uStack_158 = DAT_018da644;
      FUN_00f9d760(0);
      uStack_150 = DAT_018da648;
      FUN_00f9d7a0(0);
      iStack_160 = DAT_018da688;
      FUN_00f9db30(0);
      puStack_1a4 = (undefined1 *)0x1;
      pfStack_1a8 = local_194;
      FUN_00eadf00(local_e0,afStack_a0,0,0,local_164);
      FUN_00f9ea50(&DAT_01edcd64,&uStack_144,4);
      puStack_1a4 = local_e0;
      pfStack_1a8 = afStack_a0;
      D3DXMatrixMultiply(auStack_60);
      puStack_1a4 = auStack_60;
      pfStack_1a8 = (float *)&DAT_01edcd58;
      FUN_00f9ee50();
      uVar8 = 2;
      iVar7 = 2;
      if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
        uVar8 = 3;
        iVar7 = 3;
      }
      uVar6 = DAT_01edcd78 ^ (iVar7 << 8 ^ DAT_01edcd78) & 0xf00;
      DAT_01edcd78 = (uVar6 ^ (uVar6 ^ uVar8) & 0xf) & 0xffffff2f | 0x20;
      puStack_1a4 = (undefined1 *)0x0;
      pfStack_1a8 = (float *)0xebbea8;
      puStack_1a4 = (undefined1 *)FUN_00fa0740();
      pfStack_1a8 = (float *)&DAT_01edcd70;
      FUN_00fa1d50();
      FUN_00f990e0(&DAT_01edcd30);
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00f99010(0,&DAT_01edd1d8);
      FUN_00f99010(1,&DAT_01edd200);
      FUN_00f9dfb0(5);
      FUN_00f9d8f0(uVar4);
      FUN_00f9d970(uVar2,uVar3,uStack_154);
      FUN_00f9d6e0(uStack_14c);
      FUN_00f9d760(uStack_158);
      FUN_00f9d7a0(uStack_150);
      puStack_1a4 = (undefined1 *)iStack_160;
      pfStack_1a8 = (float *)0xebbf2f;
      FUN_00f9da50();
    }
    puStack_1a4 = (undefined1 *)0x0;
    pfStack_1a8 = (float *)0xebbf39;
    FUN_00f9d720();
    DAT_01edc6bc = 0;
    puStack_1a4 = (undefined1 *)0xebbf52;
    Hw::cRenderTargetInfo::~cRenderTargetInfo();
  }
  __security_check_cookie(local_14 ^ (uint)&local_194);
  return;
}

// 00EBBF70  FUN_00ebbf70  size=82  [run]
undefined4 __thiscall FUN_00ebbf70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x40))(0x28,param_3,4,param_2,"FactoryFixed");
  if (iVar1 != 0) {
    iVar1 = FUN_00ec3660(param_3,param_2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      return 1;
    }
  }
  return 0;
}

// 00EBBFD0  FUN_00ebbfd0  size=5508  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ebbfd0(undefined *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *local_1f4;
  undefined *local_1f0;
  undefined *local_1ec;
  undefined *local_1e8;
  undefined *local_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined *puStack_1d8;
  undefined4 uStack_1d4;
  float local_1d0;
  float local_1cc;
  undefined *local_1c8;
  undefined4 local_1c4;
  undefined *local_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined *puStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined *puStack_198;
  undefined4 uStack_194;
  float local_190;
  float local_18c;
  undefined *local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined *local_174;
  undefined4 local_164;
  float local_160;
  undefined *local_15c;
  float local_158;
  undefined4 local_154;
  undefined1 local_150 [64];
  undefined1 local_110 [64];
  undefined1 local_d0 [64];
  undefined1 local_90 [48];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_1f4;
  local_1f0 = param_1;
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  FUN_00f9bf20(local_90);
  local_164 = FUN_00f975e0(0);
  FUN_00f9db30(0);
  FUN_00eb9070(DAT_01b83bbc,1);
  FUN_00a28070(local_60,0,0x477fff00);
  FUN_00f5c120(local_60);
  FUN_00f9ee50(&DAT_01edc770,local_60);
  FUN_00f9d6e0(1);
  FUN_00f9d8f0(0);
  FUN_00f9d760(0);
  FUN_00f9d7a0(0);
  FUN_00f9db30(1);
  FUN_00a28210(&DAT_01be08e0,0,0,1);
  local_1b4 = *(undefined **)(param_1 + 0x3c);
  local_154 = *(undefined4 *)(param_1 + 0x74);
  local_160 = _DAT_018d5df0 + _DAT_018d5df0;
  local_158 = local_160 * 0.0;
  local_190 = 1.0;
  local_18c = 1.0;
  local_188 = (undefined *)0x3f800000;
  local_184 = 0x3f800000;
  local_1f4 = (undefined *)(1.0 - *(float *)(param_1 + 0x4c));
  local_180 = 0x3f800000;
  local_17c = 0x3f800000;
  local_178 = 0x3f800000;
  local_174 = local_1f4;
  local_15c = local_1b4;
  iVar3 = FUN_00f99540(0xba,&local_190,4);
  if (iVar3 == 0) {
    _DAT_01f13270 = local_190;
    _DAT_01f13274 = local_18c;
    _DAT_01f13278 = local_188;
    _DAT_01f1327c = local_184;
    FUN_00f99620(0xba,&DAT_01f13270,4);
  }
  iVar3 = FUN_00f99540(0xbb,&local_180,4);
  if (iVar3 == 0) {
    _DAT_01f13280 = local_180;
    _DAT_01f13284 = local_17c;
    _DAT_01f13288 = local_178;
    _DAT_01f1328c = local_174;
    FUN_00f99620(0xbb,&DAT_01f13280,4);
  }
  local_1d0 = 0.0015625;
  local_1cc = 0.0028409092;
  local_1c8 = (undefined *)0x3acccccd;
  local_1c4 = 0x3acccccd;
  iVar3 = FUN_00f99540(0xb9,&local_1d0,4);
  if (iVar3 == 0) {
    DAT_01f13260 = local_1d0;
    DAT_01f13264 = local_1cc;
    DAT_01f13268 = local_1c8;
    DAT_01f1326c = local_1c4;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  FUN_00f990e0(&DAT_01f8ea30);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00f9db30(1);
  FUN_00fce080(&local_160);
  FUN_00fce0a0(&DAT_01edab80,&DAT_01edab84,&DAT_01edab88);
  FUN_00fce010(DAT_01b83bbc,DAT_01b83be8,DAT_01b83bec,DAT_01b83bf0);
  FUN_00f9dfb0(5);
  puVar7 = DAT_018da674;
  uVar2 = DAT_018da670;
  uVar1 = DAT_018da65c;
  if ((DAT_01edda70 & 1) == 0) {
    DAT_01edda70 = DAT_01edda70 | 1;
    _DAT_01edda60 = 0x3f800000;
    _DAT_01edda64 = 0x3f800000;
    _DAT_01edda68 = 0x3f800000;
    _DAT_01edda6c = 0x3f666666;
  }
  if (DAT_01edda5c != 0) {
    if (DAT_018d5e58 == 0) {
      if (DAT_01edab78 != 0) {
        local_1f4 = DAT_018da678;
        FUN_00f9d8f0(1);
        FUN_00f9d970(5,2,1);
        local_1b4 = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_1e4 = DAT_018da644;
        FUN_00f9d760(0);
        local_1e8 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_1ec = DAT_018da688;
        FUN_00f9db30(1);
        FUN_00eadf00(local_150,local_d0,0,0,0x43a00000,0x43300000,1);
        FUN_00f9ea50(&DAT_01edcd64,&DAT_01edda60,4);
        D3DXMatrixMultiply(local_110,local_d0,local_150);
        FUN_00f9ee50(&DAT_01edcd58,local_110);
        uVar6 = 2;
        iVar3 = 2;
        if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
          uVar6 = 3;
          iVar3 = 3;
        }
        uVar4 = DAT_01edcd78 ^ (iVar3 << 8 ^ DAT_01edcd78) & 0xf00;
        DAT_01edcd78 = (uVar4 ^ (uVar4 ^ uVar6) & 0xf) & 0xffffff2f | 0x20;
        uVar5 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcd70,uVar5);
        fStack_1b0 = 1.0;
        fStack_1ac = 1.0;
        puStack_1a8 = (undefined *)0x3f800000;
        fStack_1a4 = (float)_DAT_01edda6c;
        iVar3 = FUN_00f99540(0xb9,&fStack_1b0,4);
        if (iVar3 == 0) {
          DAT_01f13260 = fStack_1b0;
          DAT_01f13264 = fStack_1ac;
          DAT_01f13268 = puStack_1a8;
          DAT_01f1326c = fStack_1a4;
          FUN_00f99620(0xb9,&DAT_01f13260,4);
        }
        FUN_00f990e0(&DAT_01edcb50);
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar1);
        FUN_00f9d970(uVar2,puVar7,local_1f4);
        FUN_00f9d6e0(local_1b4);
        FUN_00f9d760(local_1e4);
        FUN_00f9d7a0(local_1e8);
        FUN_00f9da50(local_1ec);
        param_1 = local_1f0;
      }
    }
    else if (DAT_01edab78 != 0) {
      local_1ec = DAT_018da674;
      local_1f0 = DAT_018da678;
      FUN_00f9d8f0(1);
      FUN_00f9d970(5,2,1);
      local_1e8 = DAT_018da63c;
      FUN_00f9d6e0(1);
      local_1e4 = DAT_018da644;
      FUN_00f9d760(0);
      local_1f4 = DAT_018da648;
      FUN_00f9d7a0(0);
      local_1b4 = DAT_018da688;
      FUN_00f9db30(1);
      FUN_00eadf00(local_110,local_d0,0,0,0x43a00000,0x43300000,1);
      FUN_00f9ea50(&DAT_01edcd64,&DAT_01edda60,4);
      D3DXMatrixMultiply(local_150,local_d0,local_110);
      FUN_00f9ee50(&DAT_01edcd58,local_150);
      uVar6 = 2;
      iVar3 = 2;
      if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
        uVar6 = 3;
        iVar3 = 3;
      }
      DAT_01edcd78 = iVar3 << 8 | DAT_01edcd78 & 0xfffff020 | uVar6 | 0x20;
      uVar5 = FUN_00fa0740(0);
      FUN_00fa1d50(&DAT_01edcd70,uVar5);
      fStack_1b0 = 1.0;
      fStack_1ac = 1.0;
      puStack_1a8 = (undefined *)0x3f800000;
      fStack_1a4 = (float)_DAT_01edda6c;
      iVar3 = FUN_00f99540(0xb9,&fStack_1b0,4);
      if (iVar3 == 0) {
        DAT_01f13260 = fStack_1b0;
        DAT_01f13264 = fStack_1ac;
        DAT_01f13268 = puStack_1a8;
        DAT_01f1326c = fStack_1a4;
        FUN_00f99620(0xb9,&DAT_01f13260,4);
      }
      FUN_00f990e0(&DAT_01edcb50);
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00f99010(0,&DAT_01edd1d8);
      FUN_00f99010(1,&DAT_01edd200);
      FUN_00f9dfb0(5);
      FUN_00f9d8f0(uVar1);
      FUN_00f9d970(uVar2,local_1ec,local_1f0);
      FUN_00f9d6e0(local_1e8);
      FUN_00f9d760(local_1e4);
      FUN_00f9d7a0(local_1f4);
      FUN_00f9da50(local_1b4);
    }
  }
  puVar7 = &DAT_01be0930 + (uint)DAT_018d5e58 * 0x50;
  if ((DAT_01edd614 & 1) == 0) {
    _DAT_01edd604 = 0x3f800000;
    DAT_01edd614 = DAT_01edd614 | 1;
    _DAT_01edd608 = 0x3f800000;
    _DAT_01edd60c = 0x3f800000;
    _DAT_01edd610 = 0x40000000;
  }
  if ((DAT_01edd614 & 2) == 0) {
    DAT_01edd614 = DAT_01edd614 | 2;
    _DAT_01edd5f4 = 0;
    _DAT_01edd5fc = 0;
    _DAT_01edd5f8 = 0x3f800000;
    _DAT_01edd600 = 0x3f800000;
  }
  fStack_1b0 = _DAT_018d5e50;
  fStack_1ac = _DAT_018d5e50;
  puStack_1a8 = (undefined *)_DAT_018d5e50;
  fStack_1a4 = _DAT_018d5e50;
  FUN_00fa17a0(puVar7,0,0,0x140,0xb0);
  FUN_00eae060(puVar7,&DAT_01edd604,0,0,0x43a00000,0x43300000,1,fStack_1b0,fStack_1ac,puStack_1a8,
               fStack_1a4,0);
  FUN_00fa17a0(puVar7,0,0,0x140,0xb0);
  local_1ec = (undefined *)(*(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x4c));
  local_1f0 = (undefined *)(*(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x4c));
  fStack_1a0 = *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x4c);
  uStack_194 = 0;
  fStack_1e0 = 1.0;
  fStack_1dc = 1.0;
  puStack_1d8 = (undefined *)0x3f800000;
  uStack_1d4 = 0;
  if (fStack_1a0 < 0.1) {
    fStack_1a0 = 0.1;
  }
  fStack_19c = (float)local_1f0;
  if ((float)local_1f0 < 0.1) {
    fStack_19c = 0.1;
  }
  puStack_198 = local_1ec;
  if ((float)local_1ec < 0.1) {
    puStack_198 = (undefined *)0x3dcccccd;
  }
  iVar3 = FUN_00f99540(0xb9,&fStack_1a0,4);
  if (iVar3 == 0) {
    DAT_01f13260 = fStack_1a0;
    DAT_01f13264 = fStack_19c;
    DAT_01f13268 = puStack_198;
    DAT_01f1326c = uStack_194;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  iVar3 = FUN_00f99540(0xba,&fStack_1e0,4);
  if (iVar3 == 0) {
    _DAT_01f13270 = fStack_1e0;
    _DAT_01f13274 = fStack_1dc;
    _DAT_01f13278 = puStack_1d8;
    _DAT_01f1327c = uStack_1d4;
    FUN_00f99620(0xba,&DAT_01f13270,4);
  }
  FUN_00eae060(puVar7,&DAT_01edd604,0,0,0x43a00000,0x43300000,0,fStack_1b0,fStack_1ac,puStack_1a8,
               fStack_1a4,0);
  FUN_00fa17a0(puVar7,0,0,0x140,0xb0);
  local_1d0 = 0.00625;
  local_1cc = 0.010416667;
  local_1c8 = (undefined *)0x3acccccd;
  local_1c4 = 0xbb3a2e8c;
  iVar3 = FUN_00f99540(0xb9,&local_1d0,4);
  if (iVar3 == 0) {
    DAT_01f13260 = local_1d0;
    DAT_01f13264 = local_1cc;
    DAT_01f13268 = local_1c8;
    DAT_01f1326c = local_1c4;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  FUN_00eb0a90(&DAT_01be0930 + (uint)DAT_018d5e58 * 0x50,&DAT_01be0a20,0x50,0x30,0);
  local_1d0 = 0.010416667;
  local_1cc = 0.015625;
  local_1c8 = (undefined *)0x0;
  local_1c4 = 0x3b3a2e8c;
  iVar3 = FUN_00f99540(0xb9,&local_1d0,4);
  if (iVar3 == 0) {
    DAT_01f13260 = local_1d0;
    DAT_01f13264 = local_1cc;
    DAT_01f13268 = local_1c8;
    DAT_01f1326c = local_1c4;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  FUN_00eb0a90(&DAT_01be0930 + (uint)DAT_018d5e58 * 0x50,&DAT_01be0a70,0x30,0x20,1);
  local_1d0 = 0.010416667;
  local_1cc = 0.015625;
  local_1c8 = (undefined *)0x3acccccd;
  local_1c4 = 0;
  iVar3 = FUN_00f99540(0xb9,&local_1d0,4);
  if (iVar3 == 0) {
    DAT_01f13260 = local_1d0;
    DAT_01f13264 = local_1cc;
    DAT_01f13268 = local_1c8;
    DAT_01f1326c = local_1c4;
    FUN_00f99620(0xb9,&DAT_01f13260,4);
  }
  FUN_00eb0a90(&DAT_01be0930 + (uint)DAT_018d5e58 * 0x50,&DAT_01be0a70,0x30,0x20,2);
  puVar7 = DAT_018da674;
  uVar2 = DAT_018da670;
  uVar1 = DAT_018da65c;
  if ((DAT_01edda70 & 2) == 0) {
    _DAT_01edda4c = 0x3f800000;
    DAT_01edda70 = DAT_01edda70 | 2;
    _DAT_01edda50 = 0x3f800000;
    _DAT_01edda54 = 0x3f800000;
    _DAT_01edda58 = 0;
  }
  if ((DAT_01edda70 & 4) == 0) {
    DAT_01edda70 = DAT_01edda70 | 4;
    _DAT_01edda3c = 0x3f800000;
    _DAT_01edda40 = 0x3f800000;
    _DAT_01edda44 = 0x3f800000;
    _DAT_01edda48 = 0x3ecccccd;
  }
  if ((DAT_01edda70 & 8) == 0) {
    _DAT_01edda2c = 0x3ecccccd;
    DAT_01edda70 = DAT_01edda70 | 8;
    _DAT_01edda30 = 0x3ecccccd;
    _DAT_01edda34 = 0x3ecccccd;
    _DAT_01edda38 = 0x3f800000;
  }
  if ((DAT_01edda70 & 0x10) == 0) {
    _DAT_01edda1c = 0x3ecccccd;
    DAT_01edda70 = DAT_01edda70 | 0x10;
    _DAT_01edda20 = 0x3ecccccd;
    _DAT_01edda24 = 0x3ecccccd;
    _DAT_01edda28 = 0x3f800000;
  }
  if ((DAT_01edda70 & 0x20) == 0) {
    DAT_01edda70 = DAT_01edda70 | 0x20;
    _DAT_01edda0c = 0x3f800000;
    _DAT_01edda10 = 0x3f800000;
    _DAT_01edda14 = 0x3f800000;
    _DAT_01edda18 = 0x3ecccccd;
  }
  local_1f0 = &DAT_01be0930 + (uint)DAT_018d5e58 * 0x50;
  if (DAT_01edab78 != 0) {
    local_1ec = DAT_018da678;
    FUN_00f9d8f0(0);
    local_1e8 = DAT_018da63c;
    FUN_00f9d6e0(1);
    local_1e4 = DAT_018da644;
    FUN_00f9d760(0);
    local_1f4 = DAT_018da648;
    FUN_00f9d7a0(0);
    local_1b4 = DAT_018da688;
    FUN_00f9db30(1);
    FUN_00eadf00(local_110,local_d0,0,0,0x43a00000,0x43300000,1);
    FUN_00f9ea50(&DAT_01edcd64,&DAT_01edda4c,4);
    D3DXMatrixMultiply(local_150,local_d0,local_110);
    FUN_00f9ee50(&DAT_01edcd58,local_150);
    uVar6 = 2;
    iVar3 = 2;
    if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
      uVar6 = 3;
      iVar3 = 3;
    }
    uVar4 = DAT_01edcd78 ^ (iVar3 << 8 ^ DAT_01edcd78) & 0xf00;
    DAT_01edcd78 = (uVar4 ^ (uVar6 ^ uVar4) & 0xf) & 0xffffff2f | 0x20;
    uVar5 = FUN_00fa0740(0);
    FUN_00fa1d50(&DAT_01edcd70,uVar5);
    fStack_1e0 = 1.0;
    fStack_1dc = 1.0;
    puStack_1d8 = (undefined *)0x3f800000;
    uStack_1d4 = _DAT_01edda58;
    iVar3 = FUN_00f99540(0xb9,&fStack_1e0,4);
    if (iVar3 == 0) {
      DAT_01f13260 = fStack_1e0;
      DAT_01f13264 = fStack_1dc;
      DAT_01f13268 = puStack_1d8;
      DAT_01f1326c = uStack_1d4;
      FUN_00f99620(0xb9,&DAT_01f13260,4);
    }
    FUN_00f990e0(&DAT_01edcb50);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(0,&DAT_01edd1d8);
    FUN_00f99010(1,&DAT_01edd200);
    FUN_00f9dfb0(5);
    FUN_00f9d8f0(uVar1);
    FUN_00f9d970(uVar2,puVar7,local_1ec);
    FUN_00f9d6e0(local_1e8);
    FUN_00f9d760(local_1e4);
    FUN_00f9d7a0(local_1f4);
    FUN_00f9da50(local_1b4);
    puVar7 = DAT_018da674;
    uVar2 = DAT_018da670;
    uVar1 = DAT_018da65c;
    if (DAT_01edab78 != 0) {
      local_1f0 = DAT_018da678;
      FUN_00f9d8f0(1);
      FUN_00f9d970(5,2,1);
      local_1ec = DAT_018da63c;
      FUN_00f9d6e0(1);
      local_1e8 = DAT_018da644;
      FUN_00f9d760(0);
      local_1e4 = DAT_018da648;
      FUN_00f9d7a0(0);
      local_1f4 = DAT_018da688;
      FUN_00f9db30(0);
      FUN_00eadf00(local_110,local_d0,0,0,0x43a00000,0x43300000,1);
      FUN_00f9ea50(&DAT_01edcd64,&DAT_01edda2c,4);
      D3DXMatrixMultiply(local_150,local_d0,local_110);
      FUN_00f9ee50(&DAT_01edcd58,local_150);
      uVar6 = 2;
      iVar3 = 2;
      if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
        uVar6 = 3;
        iVar3 = 3;
      }
      DAT_01edcd78 = iVar3 << 8 | DAT_01edcd78 & 0xfffff020 | uVar6 | 0x20;
      uVar5 = FUN_00fa0740(0);
      FUN_00fa1d50(&DAT_01edcd70,uVar5);
      fStack_1e0 = 1.0;
      fStack_1dc = 1.0;
      puStack_1d8 = (undefined *)0x3f800000;
      uStack_1d4 = _DAT_01edda38;
      iVar3 = FUN_00f99540(0xb9,&fStack_1e0,4);
      if (iVar3 == 0) {
        DAT_01f13260 = fStack_1e0;
        DAT_01f13264 = fStack_1dc;
        DAT_01f13268 = puStack_1d8;
        DAT_01f1326c = uStack_1d4;
        FUN_00f99620(0xb9,&DAT_01f13260,4);
      }
      FUN_00f990e0(&DAT_01edcb50);
      FUN_00f98f80(&PTR_vftable_018da4d8);
      FUN_00f99010(0,&DAT_01edd1d8);
      FUN_00f99010(1,&DAT_01edd200);
      FUN_00f9dfb0(5);
      FUN_00f9d8f0(uVar1);
      FUN_00f9d970(uVar2,puVar7,local_1f0);
      FUN_00f9d6e0(local_1ec);
      FUN_00f9d760(local_1e8);
      FUN_00f9d7a0(local_1e4);
      FUN_00f9da50(local_1f4);
      puVar7 = DAT_018da674;
      uVar2 = DAT_018da670;
      uVar1 = DAT_018da65c;
      if (DAT_01edab78 != 0) {
        local_1f0 = DAT_018da678;
        FUN_00f9d8f0(1);
        FUN_00f9d970(5,2,1);
        local_1ec = DAT_018da63c;
        FUN_00f9d6e0(1);
        local_1e8 = DAT_018da644;
        FUN_00f9d760(0);
        local_1e4 = DAT_018da648;
        FUN_00f9d7a0(0);
        local_1f4 = DAT_018da688;
        FUN_00f9db30(0);
        FUN_00eadf00(local_110,local_d0,0,0,0x43a00000,0x43300000,1);
        FUN_00f9ea50(&DAT_01edcd64,&DAT_01edda1c,4);
        D3DXMatrixMultiply(local_150,local_d0,local_110);
        FUN_00f9ee50(&DAT_01edcd58,local_150);
        uVar6 = 2;
        iVar3 = 2;
        if ((DAT_01edcd78._3_1_ & 0x1f) != 1) {
          uVar6 = 3;
          iVar3 = 3;
        }
        DAT_01edcd78 = iVar3 << 8 | DAT_01edcd78 & 0xfffff020 | uVar6 | 0x20;
        uVar5 = FUN_00fa0740(0);
        FUN_00fa1d50(&DAT_01edcd70,uVar5);
        fStack_1e0 = 1.0;
        fStack_1dc = 1.0;
        puStack_1d8 = (undefined *)0x3f800000;
        uStack_1d4 = _DAT_01edda28;
        iVar3 = FUN_00f99540(0xb9,&fStack_1e0,4);
        if (iVar3 == 0) {
          DAT_01f13260 = fStack_1e0;
          DAT_01f13264 = fStack_1dc;
          DAT_01f13268 = puStack_1d8;
          DAT_01f1326c = uStack_1d4;
          FUN_00f99620(0xb9,&DAT_01f13260,4);
        }
        FUN_00f990e0(&DAT_01edcb50);
        FUN_00f98f80(&PTR_vftable_018da4d8);
        FUN_00f99010(0,&DAT_01edd1d8);
        FUN_00f99010(1,&DAT_01edd200);
        FUN_00f9dfb0(5);
        FUN_00f9d8f0(uVar1);
        FUN_00f9d970(uVar2,puVar7,local_1f0);
        FUN_00f9d6e0(local_1ec);
        FUN_00f9d760(local_1e8);
        FUN_00f9d7a0(local_1e4);
        FUN_00f9da50(local_1f4);
      }
    }
  }
  FUN_00a33150();
  thunk_FUN_00fa5730(local_90,1);
  FUN_00f990e0(&DAT_01f8e9f0);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00f9db30(1);
  FUN_00fcdf50(DAT_01b83bbc,&DAT_01be08e0);
  FUN_00f9dfb0(5);
  FUN_00eb9070(&DAT_01be05e0,1);
  FUN_00a28210(&DAT_01be08e0,0,0,1);
  FUN_00f990e0(&DAT_01f8eab8);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00f9db30(0);
  FUN_00fce0e0(local_164);
  FUN_00fce110(_DAT_018d1898);
  FUN_00f9dfb0(5);
  thunk_FUN_00fa5730(local_90,1);
  FUN_00f990e0(&DAT_01f8e648);
  FUN_00f99010(0,&DAT_01edd1d8);
  FUN_00f99010(1,&DAT_01edd200);
  FUN_00f98f80(&PTR_vftable_018da4d8);
  FUN_00f9db30(0);
  FUN_00fcdf90(DAT_01b83bbc);
  FUN_00fcdfc0(_DAT_018d1898,_DAT_018d1890,_DAT_01edab7c,_DAT_018d1894);
  FUN_00f9dfb0(5);
  FUN_00f9d6e0(3);
  FUN_00f9d760(1);
  FUN_00f9d7a0(1);
  Hw::cRenderTargetInfo::~cRenderTargetInfo();
  __security_check_cookie(local_14 ^ (uint)&local_1f4);
  return;
}

// 00EBD640  FUN_00ebd640  size=468  [run]
void __thiscall
FUN_00ebd640(int *param_1,int param_2,uint param_3,int param_4,uint param_5,float param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint local_c;
  int local_8;
  
  if (param_3 < 0x28) {
    local_c = 0;
  }
  else {
    local_c = (-(uint)(param_3 < 100) & 0xffffffc4) + 100;
  }
  if (param_5 < 0x28) {
    local_8 = 0;
  }
  else {
    local_8 = (-(uint)(param_5 < 100) & 0xffffffc4) + 100;
  }
  uVar3 = 0;
  piVar9 = param_1;
  do {
    if (*piVar9 == param_2) {
      puVar1 = (uint *)param_1[uVar3 * 3 + 2];
      if (puVar1 != (uint *)0x0) {
        uVar3 = puVar1[1];
        uVar4 = 0;
        puVar2 = puVar1;
        if (uVar3 != 0) goto LAB_00ebd6d4;
      }
      break;
    }
    uVar3 = uVar3 + 1;
    piVar9 = piVar9 + 3;
  } while (uVar3 < 8);
  goto LAB_00ebd6a4;
  while (uVar5 = uVar5 + 1, puVar2 = puVar2 + 2, uVar5 < uVar3) {
LAB_00ebd6f7:
    if (puVar2[2] == local_c) {
      iVar6 = puVar1[uVar5 * 2 + 3] + (int)puVar1;
      if (iVar6 != 0) goto LAB_00ebd71a;
      break;
    }
  }
LAB_00ebd711:
  iVar6 = FUN_00eaadb0(0);
LAB_00ebd71a:
  uVar3 = 0;
  piVar9 = param_1;
  do {
    if (*piVar9 == param_4) {
      if ((param_1[uVar3 * 3 + 2] != 0) && (iVar7 = FUN_00eaadb0(param_5), iVar7 != 0)) {
        iVar8 = FUN_00eaadb0(local_8);
        if (iVar8 == 0) {
          iVar8 = FUN_00eaadb0(0);
        }
        FUN_00ec37b0(iVar6,uVar4 + (int)puVar1);
        FUN_00ec37b0(iVar8,iVar7);
        param_1[0x1108] = (int)param_6;
        if (param_6 <= 0.5) {
          param_1[0x1116] = param_4;
          param_1[0x1117] = param_5;
          param_1[0x1118] = 3;
          return;
        }
        param_1[0x1116] = param_2;
        param_1[0x1117] = param_3;
        param_1[0x1118] = 3;
        return;
      }
      break;
    }
    uVar3 = uVar3 + 1;
    piVar9 = piVar9 + 3;
  } while (uVar3 < 8);
  FUN_00dd5650(&DAT_016d33ec,param_4,param_5);
  return;
  while (uVar4 = uVar4 + 1, puVar2 = puVar2 + 2, uVar4 < uVar3) {
LAB_00ebd6d4:
    if (puVar2[2] == param_3) {
      uVar4 = puVar1[uVar4 * 2 + 3];
      if (uVar4 + (int)puVar1 != 0) {
        uVar5 = 0;
        puVar2 = puVar1;
        if (uVar3 != 0) goto LAB_00ebd6f7;
        goto LAB_00ebd711;
      }
      break;
    }
  }
LAB_00ebd6a4:
  FUN_00dd5650(&DAT_016d33bc,param_2,param_3);
  return;
}

// 00EBDA80  FUN_00ebda80  size=123  [run]
void __fastcall FUN_00ebda80(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x1111111;
  return;
}

