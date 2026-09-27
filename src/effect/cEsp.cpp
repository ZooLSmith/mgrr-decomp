// src/effect/cEsp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F12970..00F40680, 7 functions

#include "mgrr.h"
#include "cEsp.h"

// 00F12970  cEsp::cEsp  size=130  [class]
undefined4 * __fastcall cEsp::cEsp(undefined4 *param_1)

{
  *param_1 = cEspBase::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00f59e40();
  FUN_00ec9bf0();
  FUN_00ddbbb0();
  param_1[0x101] = 0;
  *(undefined2 *)(param_1 + 0x10a) = 0;
  param_1[0x102] = 0xc0000000;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *param_1 = vftable;
  return param_1;
}

// 00F204B0  FUN_00f204b0  size=197  [callgraph]
void __thiscall
FUN_00f204b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00dd5650("ERROR04: cEsp::m_pDrawWorkList != NULL %p\n",*(int *)(param_1 + 0x2c));
    return;
  }
  FUN_00f20370(param_2 + 0x40,param_5,param_6);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00dd5650("ERROR03: pEsp->m_pDrawWorkList != NULL 0x%x\n",*(int *)(param_1 + 0x2c));
  }
  uVar1 = *(undefined4 *)(param_5 + 0x10);
  FUN_00f45d50();
  local_14 = param_2;
  local_c = param_5;
  local_8 = param_6;
  local_10 = param_1;
  local_4 = uVar1;
  FUN_00f49500(&local_14);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00dd5650("ERROR03: pEsp->m_pDrawWorkList != NULL 0x%x\n",*(int *)(param_1 + 0x2c));
  }
  if ((*(uint *)(param_1 + 0x34) & 0x40000000) == 0) {
    FUN_00edc9e0(param_2,param_3,param_5,param_4,param_6 + 0x40);
  }
  return;
}

// 00F20580  FUN_00f20580  size=124  [callgraph]
undefined4 FUN_00f20580(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((0xfb < param_1) && (param_1 < 0x120)) {
    *param_2 = 0;
    return 1;
  }
  if ((param_3 != 0) && (iVar1 = FUN_00f4a2a0(param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  iVar1 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
          cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
  if (param_1 - 0xf000U < 0x20) {
    iVar1 = *(int *)(iVar1 + -0x3b038 + param_1 * 4);
  }
  else {
    if (1000 < param_1) {
      *param_2 = 0;
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 0x28 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  *param_2 = iVar1;
  return 1;
}

// 00F20660  cEsp::FixTexture  size=312  [class]
undefined4
cEsp::FixTexture(int *param_1,uint *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (1000 < param_3) {
    FUN_00dd5650(&DAT_016da000,&DAT_016d9fd8);
  }
  if (((0xfb < (int)param_3) && ((int)param_3 < 0x120)) &&
     (iVar1 = DAT_01eddb74 + (param_3 - 0xfc) * 0x1c, iVar1 != 0)) {
    *param_1 = iVar1;
    *param_2 = 0;
    return 1;
  }
  if ((param_5 == 0) && (((int)param_3 < 0xfc || (0x11f < (int)param_3)))) {
    iVar1 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
            cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
    if (param_3 - 0xf000 < 0x20) {
      param_5 = *(int *)(iVar1 + -0x3b038 + param_3 * 4);
    }
    else {
      if (1000 < (int)param_3) goto LAB_00f20753;
      param_5 = *(int *)(iVar1 + 0x28 + param_3 * 4);
    }
    if (param_5 == 0) {
LAB_00f20753:
      if (param_6 != 0) {
        FUN_00dd5650(&DAT_016da040,param_3,param_4);
      }
      *param_1 = 0;
      *param_2 = 0;
      return 0;
    }
  }
  if (*(uint *)(param_5 + 0x14) <= param_4) {
    if (param_6 != 0) {
      FUN_00dd5650(&DAT_016da0c8,param_3,param_4);
    }
    *param_1 = 0;
    *param_2 = 0;
    return 0;
  }
  *param_1 = param_5 + 8;
  *param_2 = param_4;
  return 1;
}

// 00F2D190  cEsp::preTrans  size=1202  [class]
/* WARNING: Removing unreachable block (ram,0x00f2d2ca) */
/* WARNING: Removing unreachable block (ram,0x00f2d32b) */

void __thiscall cEsp::preTrans(int param_1,undefined4 *param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_74 [8];
  float local_6c;
  float *local_68;
  uint local_64;
  undefined1 local_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_74;
  local_68 = param_3;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x54) = *param_2;
    *(undefined4 *)(param_1 + 0x58) = param_2[1];
    *(undefined4 *)(param_1 + 0x5c) = param_2[2];
  }
  if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = **(uint **)(param_1 + 0x58);
    if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
      uVar5 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | *(uint *)(uVar6 + 4);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | *(uint *)(uVar6 + 8);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar6 + 0x20);
  local_64 = uVar6;
  iVar3 = FUN_00efcbb0();
  if (iVar3 != 0) {
    FUN_00ddbbd0(param_4);
    *(uint *)(param_1 + 0x120) = (uint)*(ushort *)(uVar6 + 2);
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x10), puVar4 != (uint *)0x0)) {
      uVar6 = *puVar4;
      if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
        uVar5 = FUN_00f59ed0(1);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (uVar6 != 0) {
        FUN_00ede4f0(uVar6);
        if ((*(uint *)(param_1 + 0x38) & 0x20000) != 0) {
          uVar6 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar6;
          local_6c = 1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0;
          if (0.0 <= local_6c) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfff7ffff;
          }
          else {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x80000;
          }
        }
        if ((*(byte *)(param_1 + 0x3a) & 1) != 0) {
          uVar6 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar6;
          local_6c = 1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0;
          if (0.0 <= local_6c) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffbffff;
          }
          else {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x40000;
          }
        }
        if ((*(byte *)(param_1 + 0x3b) & 1) != 0) {
          *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x200000;
        }
        if ((*(uint *)(param_1 + 0x38) & 0x4000) != 0) {
          if (*(int *)(param_1 + 0x50) == 0) {
            FUN_009cca90(param_1,&DAT_016da004);
            __security_check_cookie(local_14 ^ (uint)auStack_74);
            return;
          }
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
             (iVar3 = FUN_00a7c800(), iVar3 != 0)) {
            iVar3 = FUN_00a12290(0xffffffff);
          }
          else {
            iVar3 = 0;
          }
          *(int *)(param_1 + 0x50) = iVar3;
          if (iVar3 == 0) {
            FUN_009cca90(param_1,&DAT_016da190);
            __security_check_cookie(local_14 ^ (uint)auStack_74);
            return;
          }
          sVar2 = *(short *)(param_1 + 0x4e);
          if (sVar2 < 0) {
            FUN_009cca90(param_1,&DAT_016da1d4,(int)sVar2);
            __security_check_cookie(local_14 ^ (uint)auStack_74);
            return;
          }
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 != 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) ||
             ((iVar3 = FUN_00a7c800(), iVar3 == 0 || (iVar3 = FUN_00a12290((int)sVar2), iVar3 == 0))
             )) {
            FUN_009cca90(param_1,&DAT_016da248,(int)*(short *)(param_1 + 0x4e));
            __security_check_cookie(local_14 ^ (uint)auStack_74);
            return;
          }
          D3DXMatrixInverse(local_60,0,*(int *)(param_1 + 0x50) + 0x10);
          D3DXMatrixMultiply(&local_6c,iVar3 + 0x10,&local_6c);
          pfVar1 = (float *)(param_1 + 0x180);
          D3DXVec3TransformNormal(pfVar1,pfVar1,&stack0xffffff88);
          *pfVar1 = fStack_30 + *pfVar1;
          *(float *)(param_1 + 0x184) = fStack_2c + *(float *)(param_1 + 0x184);
          *(float *)(param_1 + 0x188) = fStack_28 + *(float *)(param_1 + 0x188);
        }
        pfVar1 = local_68;
        if (((*(short *)(param_1 + 0x4e) != -3) || ((*(uint *)(param_1 + 0x38) & 0x200) != 0)) &&
           (((*(uint *)(param_1 + 0x38) & 0x8000) == 0 &&
            (FUN_00edc5c0(local_68), *(short *)(param_1 + 0x4e) == -3)))) {
          local_68 = (float *)*pfVar1;
          *(float *)(param_1 + 0x1f0) = (float)local_68 * *(float *)(param_1 + 0x1f0);
          *(float *)(param_1 + 500) = (float)local_68 * *(float *)(param_1 + 500);
        }
        iVar3 = FUN_009d4a40();
        if ((iVar3 == 0) || (iVar3 = FUN_00f26850(iVar3), iVar3 != 0)) {
          if (*(byte *)(local_64 + 0x1d) < *(byte *)(local_64 + 0x1c)) {
            FUN_009cca90(param_1,&DAT_016da2b8);
            __security_check_cookie(local_14 ^ (uint)auStack_74);
            return;
          }
          *(undefined4 *)(param_1 + 900) = 0;
          *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x4000000;
          FUN_00efd190(param_1 + 0x3a0);
          if (*(int *)(*(int *)(param_1 + 0x28) + 0x1ecc) == 0) {
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
          }
          if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
            *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x400;
          }
          iVar3 = FUN_009cdd70(*(undefined2 *)(param_1 + 0x4c));
          if (iVar3 == 0) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x80000000;
          }
          iVar3 = FUN_009cde30(*(undefined2 *)(param_1 + 0x4c));
          if (iVar3 == 0) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x40000000;
          }
          iVar3 = FUN_009ce400(param_1);
          if (iVar3 != 0) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x100000;
          }
          __security_check_cookie(local_14 ^ (uint)auStack_74);
          return;
        }
        goto LAB_00f2d26d;
      }
    }
    FUN_009cca90(param_1,&DAT_016da120);
  }
LAB_00f2d26d:
  __security_check_cookie(local_14 ^ (uint)auStack_74);
  return;
}

// 00F2D650  cEsp::addOtTransList  size=337  [class]
void __fastcall cEsp::addOtTransList(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(uint *)(param_1 + 0x30) & 0x200000) != 0) {
    cEspDrawWork::cEspDrawWork_6();
    return;
  }
  iVar2 = FUN_00dd7ad0();
  esp107::vf10();
  if (0.01 < *(float *)(param_1 + 0x124)) {
    if ((DAT_01edd490 == 0) ||
       (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20), puVar3 == (undefined4 *)0x0)) {
      FUN_009cca90(param_1,&DAT_016da510);
      return;
    }
    *puVar3 = cEspDrawWork::vftable;
    puVar3[9] = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f26b40(puVar3);
    FUN_00f204b0(puVar3,puVar3,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1e74),param_1 + 0x3c8,
                 *(int *)(param_1 + 0x28));
    if ((ushort)(*(short *)(param_1 + 0x4e) + 0xdU) < 10) {
      uVar4 = FUN_009cc5a0(*(short *)(param_1 + 0x4e));
      uVar1 = *(uint *)(param_1 + 0x3c);
      uVar5 = uVar4 >> 5;
      uVar4 = 0x80000000 >> ((byte)uVar4 & 0x1f);
      (&DAT_01eddb60)[uVar5 + iVar2] = (&DAT_01eddb60)[uVar5 + iVar2] | uVar4;
      if ((uVar1 >> 0x16 & 1) == 0) {
        (&DAT_01eddb4c)[uVar5 + iVar2] = (&DAT_01eddb4c)[uVar5 + iVar2] & ~uVar4;
      }
      else {
        (&DAT_01eddb4c)[uVar5 + iVar2] = (&DAT_01eddb4c)[uVar5 + iVar2] | uVar4;
      }
      if ((uVar1 >> 7 & 1) == 0) {
        (&DAT_01eddb38)[uVar5 + iVar2] = (&DAT_01eddb38)[uVar5 + iVar2] & ~uVar4;
      }
      else {
        (&DAT_01eddb38)[uVar5 + iVar2] = (&DAT_01eddb38)[uVar5 + iVar2] | uVar4;
      }
    }
    if (0x6b < *(byte *)(puVar3 + 4)) {
      FUN_009cca90(param_1,&DAT_016da538);
    }
  }
  return;
}

// 00F40680  cEsp::vf00  size=72  [class]
undefined4 * __thiscall cEsp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

