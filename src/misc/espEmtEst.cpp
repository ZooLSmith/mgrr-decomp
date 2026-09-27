// src/misc/espEmtEst.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F0ACF0..00F44EB0, 11 functions

#include "mgrr.h"
#include "espEmtEst.h"

// 00F0ACF0  espEmtEst::vf04  size=329  [class]
undefined4 __thiscall
espEmtEst::vf04(int param_1,undefined4 param_2,void *param_3,undefined4 param_4)

{
  int iVar1;
  float10 fVar2;
  
  FID_conflict__memcpy((void *)(param_1 + 0x440),param_3,0x40);
  FID_conflict__memcpy((void *)(param_1 + 0x480),param_3,0x40);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x4c4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  FUN_00f59e50();
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
    }
  }
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0xbf800000;
  FUN_00ef7aa0();
  if (*(int *)(param_1 + 0x120) == 0) {
    *(undefined4 *)(param_1 + 0x120) = 2;
  }
  iVar1 = FUN_00fdbc60();
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + iVar1;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = param_4;
  if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
    iVar1 = FUN_00a7c990(&DAT_01ee11f4);
    if (iVar1 == 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c890();
        if (iVar1 != 0) {
          iVar1 = FUN_00e26e90();
          if (iVar1 == 0) {
            fVar2 = (float10)-1.0;
          }
          else {
            fVar2 = (float10)FUN_00e36970(0);
          }
          *(float *)(param_1 + 0x4d4) = (float)fVar2;
        }
      }
    }
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x4000000;
  return 1;
}

// 00F0AE40  FUN_00f0ae40  size=173  [callgraph]
bool __thiscall FUN_00f0ae40(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    if (*(uint **)(param_2 + 4) == (uint *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(uint **)(param_2 + 4);
      if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
        uVar3 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
    }
    if ((*(int *)(param_2 + 4) == 0) ||
       (puVar2 = (uint *)(*(int *)(param_2 + 4) + 0x20), puVar2 == (uint *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *puVar2;
      if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
        uVar3 = FUN_00f59ed0(2);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
    }
    sVar4 = *(short *)(uVar5 + 0xe);
    if (*(char *)(uVar6 + 0x10) != '\0') {
      sVar4 = -2;
    }
    iVar1 = *(int *)(param_1 + 0x84);
    if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0x68) & 2) != 0)) && (*(char *)(uVar5 + 0x14) == -1)) {
      sVar4 = *(short *)(iVar1 + 0x28);
    }
    return -2 < sVar4;
  }
  return false;
}

// 00F12490  espEmtEst::createEspTbl  size=1103  [class]
void __fastcall espEmtEst::createEspTbl(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  code *pcVar10;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_3c;
  if ((*(int *)(param_1 + 0x430) == 0) ||
     (local_34 = 0, *(int *)(*(int *)(param_1 + 0x430) + 4) == 0)) {
LAB_00f128cf:
    __security_check_cookie(local_4 ^ (uint)&local_3c);
    return;
  }
  do {
    uVar9 = local_34;
    FUN_00f59e40();
    uVar5 = FUN_00f5a050(uVar9);
    local_2c = (uint *)FUN_00f5a080(uVar9);
    local_28 = *(undefined4 *)(*(int *)(param_1 + 0x430) + 0x18);
    local_30 = uVar5;
    if (local_2c == (uint *)0x0) {
      local_38 = 0;
      uVar3 = local_38;
    }
    else {
      uVar3 = *local_2c;
      if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
        uVar5 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
    }
    local_38 = uVar3;
    uVar3 = local_38;
    if ((local_2c == (uint *)0x0) || (local_2c + 4 == (uint *)0x0)) {
LAB_00f1255e:
      FUN_00dd5650(&DAT_016de690);
    }
    else {
      puVar1 = (uint *)local_2c[4];
      if ((uint *)((int)puVar1 + 0xfU & 0xfffffff0) != puVar1) {
        uVar5 = FUN_00f59ed0(1);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (puVar1 == (uint *)0x0) goto LAB_00f1255e;
      if (uVar3 == 0) {
        FUN_00dd5650(&DAT_016de6c0);
      }
      else if ((((((*(uint *)(uVar3 + 4) & 0x20000000) == 0) &&
                 (*(uint *)(param_1 + 0x424) == (uint)*(byte *)(uVar3 + 0x14))) &&
                ((*(byte *)(param_1 + 0x428) == 0xff ||
                 ((ushort)*(byte *)(param_1 + 0x428) == *(ushort *)(uVar3 + 0xc))))) &&
               (((*(uint *)(param_1 + 0x30) & 0x10) == 0 || ((*puVar1 & 0x2000) != 0)))) &&
              (((*(uint *)(param_1 + 0x30) & 4) == 0 ||
               ((((iVar6 = FUN_00a7c990(&DAT_01ee11f4), iVar6 == 0 &&
                  (iVar6 = FUN_00a81330(), iVar6 != 0)) && (iVar6 = FUN_00a7c800(), iVar6 != 0)) ||
                ((*(short *)(uVar3 + 0xe) == -2 || (*(short *)(uVar3 + 0xe) == -3)))))))) {
        uVar2 = *(uint *)(param_1 + 0x30);
        uVar3 = *(uint *)(uVar3 + 4);
        uVar4 = *(uint *)(param_1 + 0x6c);
        iVar6 = FUN_00f3be60();
        iVar7 = FUN_00fdbc60();
        if ((((uVar2 >> 0xc | uVar3) >> 1 | uVar4) & 1) == 0) {
          iVar7 = FUN_00f39810(iVar7 + (uint)*(ushort *)(iVar6 + 8));
        }
        else {
          iVar7 = FUN_00f39810(iVar7 + (uint)*(ushort *)(iVar6 + 8));
        }
        if ((iVar7 != 0) &&
           (piVar8 = (int *)FUN_00f43b00(param_1,*(undefined2 *)(iVar6 + 4),0), piVar8 != (int *)0x0
           )) {
          iVar6 = *(int *)(param_1 + 0x28);
          *(short *)(piVar8 + 0x103) = (short)uVar9;
          piVar8[10] = iVar6;
          FUN_00ec7e40((undefined4 *)(param_1 + 0x60));
          iVar6 = FUN_00a7c990(&DAT_01ee11f4);
          if (iVar6 == 0) {
            local_3c = FUN_00a81330();
          }
          else {
            local_3c = 0;
          }
          if ((*(uint *)(param_1 + 0x6c) & 0x10) == 0) {
            uVar9 = *(uint *)(local_38 + 0x18);
            if (uVar9 < 3) {
              if (uVar9 == 2) goto LAB_00f12769;
              if (uVar9 != 0) {
                if (uVar9 != 1) goto LAB_00f127cb;
                iVar6 = DAT_01be8e58;
                if (DAT_01be8e58 != 0) goto LAB_00f12779;
              }
            }
            else if (uVar9 != 0xffffffff) {
LAB_00f127cb:
              iVar6 = FUN_00416910(1);
              if (iVar6 == 0) {
                FUN_009f8ea0(local_14,0x10,uVar9,1);
                FUN_009cca90(param_1,&DAT_016de6f0,local_14);
              }
            }
          }
          else if ((*(uint *)(param_1 + 0x6c) & 0x40) == 0) {
            local_24 = 3;
            local_20 = 0xffffffff;
            local_1c = 0xffffffff;
            FUN_00f4a3f0(&local_24,*(undefined4 *)(param_1 + 0x60));
            iVar6 = *(int *)(param_1 + 0x84);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) == 6)) {
              local_24 = *(undefined4 *)(iVar6 + 0xb0);
              local_20 = *(undefined4 *)(iVar6 + 0xb4);
              local_1c = *(undefined4 *)(iVar6 + 0xb8);
            }
            iVar6 = *(int *)(local_38 + 0x18);
            if (iVar6 == -2) {
LAB_00f12769:
              iVar6 = FUN_00a81330();
            }
            else if ((iVar6 == -1) ||
                    (iVar6 = FUN_00e774b0(iVar6,(int)*(short *)(local_38 + 0xc),&local_24),
                    iVar6 == 0)) goto LAB_00f127fb;
LAB_00f12779:
            uVar5 = FUN_00a7c910();
            FUN_00e08600(uVar5);
            uVar5 = FUN_00a7c7f0();
            FUN_00a7c960(uVar5);
            local_3c = iVar6;
          }
LAB_00f127fb:
          uVar9 = FUN_00dde2a0(0,0xffff);
          *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + (uVar9 & 0xffff);
          FUN_00a7c930();
          if (local_3c != 0) {
            uVar5 = FUN_00a7c7f0();
            FUN_00a7c960(uVar5);
          }
          iVar6 = FUN_00f0ae40(&local_30);
          if (iVar6 == 0) {
            uVar5 = *(undefined4 *)(param_1 + 0x4d0);
            iVar6 = param_1 + 0x480;
            pcVar10 = *(code **)(*piVar8 + 4);
          }
          else {
            uVar5 = *(undefined4 *)(param_1 + 0x4d0);
            pcVar10 = *(code **)(*piVar8 + 4);
            iVar6 = param_1 + 0x440;
          }
          iVar6 = (*pcVar10)(&local_30,iVar6,uVar5);
          if (iVar6 == 0) {
            piVar8[0xc] = piVar8[0xc] | 0x80000000;
            piVar8[0x21] = 0;
            goto LAB_00f128cf;
          }
          FUN_00eaa260(*(undefined4 *)(param_1 + 0x84),piVar8);
          uVar9 = local_34;
        }
      }
    }
    local_34 = uVar9 + 1;
    if (*(uint *)(*(int *)(param_1 + 0x430) + 4) <= local_34) {
      __security_check_cookie(local_4 ^ (uint)&local_3c);
      return;
    }
  } while( true );
}

// 00F201E0  espEmtEst::vf08  size=391  [class]
void __fastcall espEmtEst::vf08(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float10 fVar4;
  
  FUN_00edfb50();
  if (((((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) &&
       (iVar3 = FUN_00a7c990(&DAT_01ee11f4), iVar3 == 0)) && (iVar3 = FUN_00a81330(), iVar3 != 0))
     && (iVar3 = FUN_00a7c890(), iVar3 != 0)) {
    iVar3 = FUN_00e26e90();
    if (iVar3 == 0) {
      fVar4 = (float10)-1.0;
    }
    else {
      fVar4 = (float10)FUN_00e36970(0);
    }
    fVar1 = (float)fVar4;
    if (*(float *)(param_1 + 0x4d4) < fVar1 == (*(float *)(param_1 + 0x4d4) == fVar1)) {
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
    }
    else {
      *(float *)(param_1 + 0x110) = (fVar1 - *(float *)(param_1 + 0x4d4)) / 0.016666668;
      *(float *)(param_1 + 0x4d4) = fVar1;
    }
  }
  if ((*(uint *)(param_1 + 0x6c) & 0x10000) != 0) {
    pfVar2 = *(float **)(param_1 + 0x88);
    if (pfVar2 != (float *)0x0) {
      *(float *)(param_1 + 0x470) = *(float *)(param_1 + 0x470) + *pfVar2;
      *(float *)(param_1 + 0x474) = pfVar2[1] + *(float *)(param_1 + 0x474);
      *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x478) + pfVar2[2];
      *(float *)(param_1 + 0x4b0) = *pfVar2 + *(float *)(param_1 + 0x4b0);
      *(float *)(param_1 + 0x4b4) = pfVar2[1] + *(float *)(param_1 + 0x4b4);
      *(float *)(param_1 + 0x4b8) = pfVar2[2] + *(float *)(param_1 + 0x4b8);
    }
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffeffff;
  }
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x118);
  FUN_00ef79a0();
  if (((*(byte *)(param_1 + 0x30) & 0x10) != 0) ||
     (createEspTbl(), (*(byte *)(param_1 + 0x30) & 0x10) != 0)) {
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
  }
  fVar4 = (float10)FUN_009d59c0(param_1);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x4c0);
  *(float *)(param_1 + 0x4c0) = *(float *)(param_1 + 0x4c0) + (float)fVar4;
  return;
}

// 00F41EE0  espEmtEst::espEmtEst_2  size=305  [class]
void __thiscall espEmtEst::espEmtEst_2(int param_1,undefined4 param_2,undefined4 param_3)

{
  LONG LVar1;
  LONG LVar2;
  undefined4 *_Dst;
  undefined1 local_44 [60];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_44;
  InterlockedIncrement((LONG *)(param_1 + 0x1678));
  if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 0x10)) {
    FUN_00f4a7a0(local_44,0x40,param_2,0);
    FUN_00dd5650(&DAT_016df8e4,local_44,param_3);
    __security_check_cookie(local_4 ^ (uint)local_44);
    return;
  }
  LVar1 = InterlockedIncrement((LONG *)(param_1 + 0x1684));
  LVar2 = InterlockedIncrement((LONG *)(param_1 + 0x1680));
  _Dst = (undefined4 *)FUN_00dd29b0(0x4e0,0x10,0,0);
  if (_Dst != (undefined4 *)0x0) {
    _memset(_Dst,0,0x4e0);
    cEspBase::cEspBase();
    _Dst[0x108] = 0;
    *_Dst = vftable;
    InterlockedDecrement((LONG *)(param_1 + 0xd0));
    *(char *)((int)_Dst + 0x429) = (char)(LVar1 % 3);
    FUN_00f44c30(_Dst);
    *(undefined2 *)(_Dst + 0x13) = 0xffff;
    _Dst[0xd] = _Dst[0xd] & 0xfbffffff;
    _Dst[0xe6] = LVar2 + -1;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffb8);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)local_44);
  return;
}

// 00F42020  espEmtEst::espEmtEst  size=349  [class]
void __thiscall espEmtEst::espEmtEst(int *param_1,undefined4 param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *_Dst;
  undefined1 local_48 [4];
  undefined1 local_44 [52];
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_48;
  InterlockedIncrement(param_1 + 0x59e);
  if (param_1[3] <= param_1[4]) {
    FUN_00f4a7a0(local_44,0x40);
    FUN_00dd5650(&DAT_016df900,local_44,param_3);
    __security_check_cookie(local_4 ^ (uint)local_48);
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  if (param_1[0xe] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  param_1[0x5a1] = (param_1[0x5a1] + 1) % 3;
  _Dst = (undefined4 *)FUN_00dd29b0(0x4e0,0x10,0,0);
  if (_Dst != (undefined4 *)0x0) {
    _memset(_Dst,0,0x4e0);
    cEspBase::cEspBase();
    _Dst[0x108] = 0;
    *_Dst = vftable;
    InterlockedDecrement(param_1 + 0x34);
    (**(code **)(*param_1 + 0x24))(local_48,_Dst,param_1[0x5a1]);
    *(undefined2 *)(_Dst + 0x13) = 0xffff;
    _Dst[0xd] = _Dst[0xd] & 0xfbffffff;
    _Dst[0xe6] = param_1[0x5a0];
    param_1[0x5a0] = param_1[0x5a0] + 1;
    if (param_1[0xe] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    __security_check_cookie(uStack_10 ^ (uint)&stack0xffffffac);
    return;
  }
  if (param_1[0xe] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  __security_check_cookie(local_4 ^ (uint)local_48);
  return;
}

// 00F44C30  FUN_00f44c30  size=74  [callgraph]
void __thiscall FUN_00f44c30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    *(int *)(param_2 + 0x420) = iVar2;
    LOCK();
    iVar1 = *param_1;
    if (iVar2 == iVar1) {
      *param_1 = param_2;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
                    /* WARNING: Could not recover jumptable at 0x00f44c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement(param_1 + 2);
  return;
}

// 00F44C80  FUN_00f44c80  size=158  [callgraph]
longlong __fastcall FUN_00f44c80(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  bool bVar5;
  
  iVar2 = (int)*param_1;
  uVar3 = *(uint *)((int)param_1 + 4);
  while( true ) {
    uVar4 = uVar3;
    if (iVar2 == 0) {
      return (ulonglong)param_2 << 0x20;
    }
    LOCK();
    lVar1 = *param_1;
    bVar5 = CONCAT44(uVar4,iVar2) == lVar1;
    if (bVar5) {
      *param_1 = CONCAT44(uVar4 + 1,*(undefined4 *)(iVar2 + 0x420));
    }
    else {
      uVar4 = (uint)((ulonglong)lVar1 >> 0x20);
    }
    UNLOCK();
    if (bVar5) break;
    iVar2 = (int)*param_1;
    uVar3 = *(uint *)((int)param_1 + 4);
    param_2 = uVar4;
  }
  InterlockedDecrement((LONG *)(param_1 + 1));
  return CONCAT44(extraout_EDX,iVar2);
}

// 00F44DC0  FUN_00f44dc0  size=122  [callgraph]
void __fastcall FUN_00f44dc0(void *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  pvVar1 = (void *)FUN_00e9ff50();
  FID_conflict__memcpy(param_1,pvVar1,0x40);
  puVar2 = (undefined4 *)FUN_00e9fe70();
  *(undefined4 *)((int)param_1 + 0x40) = *puVar2;
  *(undefined4 *)((int)param_1 + 0x44) = puVar2[1];
  *(undefined4 *)((int)param_1 + 0x48) = puVar2[2];
  *(undefined4 *)((int)param_1 + 0x4c) = puVar2[3];
  puVar2 = (undefined4 *)FUN_00e9feb0();
  *(undefined4 *)((int)param_1 + 0x50) = *puVar2;
  *(undefined4 *)((int)param_1 + 0x54) = puVar2[1];
  *(undefined4 *)((int)param_1 + 0x58) = puVar2[2];
  *(undefined4 *)((int)param_1 + 0x5c) = puVar2[3];
  iVar3 = FUN_00e9fef0();
  *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)(iVar3 + 4);
  uVar4 = FUN_00f98a90();
  *(undefined4 *)((int)param_1 + 100) = uVar4;
  uVar4 = FUN_00f98aa0();
  *(undefined4 *)((int)param_1 + 0x68) = uVar4;
  pvVar1 = (void *)FUN_00e9ff30();
  FID_conflict__memcpy((void *)((int)param_1 + 0x70),pvVar1,0x40);
  return;
}

// 00F44E80  espEmtEst::espEmtEst_3  size=28  [class]
undefined4 * __fastcall espEmtEst::espEmtEst_3(undefined4 *param_1)

{
  cEspBase::cEspBase();
  param_1[0x108] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00F44EB0  espEmtEst::vf00  size=30  [class]
undefined4 __thiscall espEmtEst::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

