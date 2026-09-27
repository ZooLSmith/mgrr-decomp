// src/unsorted/unit_00EC9B00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC9B00..00ECBF60, 22 functions

#include "mgrr.h"

// 00EC9B00  FUN_00ec9b00  size=69  [run]
void __fastcall FUN_00ec9b00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0xff;
  puVar1 = (undefined4 *)(param_1 + 0x10);
  do {
    puVar1[-1] = &LAB_00ecca30;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 0x13;
  puVar1 = (undefined4 *)(param_1 + 0x1410);
  do {
    puVar1[-1] = &LAB_00ecca30;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}

// 00EC9BF0  FUN_00ec9bf0  size=186  [run]
undefined4 * __fastcall FUN_00ec9bf0(undefined4 *param_1)

{
  *param_1 = 0xfff;
  param_1[1] = 0;
  param_1[2] = 0xffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  FUN_00e03940();
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_00a7c930();
  param_1[0xc] = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined2 *)((int)param_1 + 0x92) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0x1e] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  return param_1;
}

// 00EC9CB0  FUN_00ec9cb0  size=148  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ec9cb0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_01ede1d0 != 0) {
    DAT_01eddae8 = 0;
    iVar2 = DAT_01ede1b0;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x14);
      if (DAT_01ede1b0 == iVar2) {
        DAT_01ede1b0 = iVar1;
      }
      if (DAT_01ede1b4 == iVar2) {
        DAT_01ede1b4 = *(int *)(iVar2 + 0x10);
      }
      if (*(int *)(iVar2 + 0x10) != 0) {
        *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      }
      if (*(int *)(iVar2 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      }
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      FUN_00dd3d90(iVar2,0);
      iVar2 = iVar1;
    }
    _DAT_01eddae4 = 0;
    FUN_00dd7270();
    DAT_01eddae0 = 0;
  }
  return;
}

// 00EC9D50  FUN_00ec9d50  size=351  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00ec9d50(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_01ede1d0 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
  }
  iVar3 = OcclusionQueryManager::AllocQuery();
  if ((iVar3 != -1) &&
     (puVar4 = (undefined4 *)FUN_00dd3540(0x90,DAT_01eddae0), puVar4 != (undefined4 *)0x0)) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[6] = iVar3;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0x3f800000;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0x3f800000;
    puVar4[0x1b] = 0x3f800000;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1c] = 0xffffffff;
    puVar4[0x1d] = 0xffffffff;
    puVar4[0x1e] = 0xbf800000;
    puVar4[0x1f] = 0xffffffff;
    puVar4[0x21] = 0xbf800000;
    puVar4[0x20] = 0xffffffff;
    if ((puVar4[4] == 0) && (puVar4[5] == 0)) {
      if (DAT_01ede1b0 == (undefined4 *)0x0) {
        DAT_01ede1b0 = puVar4;
      }
      puVar2 = puVar4;
      if (DAT_01ede1b4 != (undefined4 *)0x0) {
        if (DAT_01ede1b4[5] != 0) {
          *(undefined4 **)(DAT_01ede1b4[5] + 0x10) = puVar4;
        }
        puVar4[5] = DAT_01ede1b4[5];
        puVar4[4] = DAT_01ede1b4;
        DAT_01ede1b4[5] = puVar4;
      }
    }
    else {
      FUN_00dd5650(&DAT_016d7054);
      puVar2 = DAT_01ede1b4;
    }
    DAT_01ede1b4 = puVar2;
    FUN_00ece910(&DAT_01eddae8,puVar4,&LAB_00ec6af0);
    _DAT_01eddae4 = _DAT_01eddae4 + 1;
    uVar1 = puVar4[6];
    if (DAT_01ede1d0 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
    }
    return uVar1;
  }
  FUN_00f9a1d0(iVar3);
  if (DAT_01ede1d0 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
  }
  return 0xffffffff;
}

// 00EC9EB0  FUN_00ec9eb0  size=148  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ec9eb0(int param_1)

{
  int iVar1;
  
  if (param_1 != -1) {
    iVar1 = DAT_01eddae8;
    if (DAT_01ede1d0 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
      iVar1 = DAT_01eddae8;
    }
    while (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x18) == param_1) {
        FUN_00ece8c0(iVar1);
        FUN_00eceb10(&DAT_01eddae8,iVar1);
        FUN_00dd3d90(iVar1,0);
        FUN_00f9a1d0(param_1);
        _DAT_01eddae4 = _DAT_01eddae4 + -1;
        break;
      }
      if (*(int *)(iVar1 + 0x18) < param_1) {
        iVar1 = *(int *)(iVar1 + 8);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
    }
    if (DAT_01ede1d0 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
    }
  }
  return;
}

// 00EC9F50  FUN_00ec9f50  size=202  [run]
void FUN_00ec9f50(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  
  if (param_1 != -1) {
    iVar1 = DAT_01eddae8;
    if (DAT_01ede1d0 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
      iVar1 = DAT_01eddae8;
    }
    while (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x18) == param_1) {
        *(undefined4 *)(iVar1 + 0x30) = *param_2;
        *(undefined4 *)(iVar1 + 0x34) = param_2[1];
        *(undefined4 *)(iVar1 + 0x38) = param_2[2];
        *(undefined4 *)(iVar1 + 0x3c) = param_2[3];
        *(undefined4 *)(iVar1 + 0x40) = param_3;
        *(undefined4 *)(iVar1 + 0x44) = param_4;
        *(undefined4 *)(iVar1 + 0x48) = param_5;
        *(undefined4 *)(iVar1 + 0x4c) = param_6;
        *(undefined4 *)(iVar1 + 0x50) = *param_7;
        *(undefined4 *)(iVar1 + 0x54) = param_7[1];
        *(undefined4 *)(iVar1 + 0x58) = param_7[2];
        *(undefined4 *)(iVar1 + 0x5c) = param_7[3];
        *(undefined4 *)(iVar1 + 0x60) = *param_8;
        *(undefined4 *)(iVar1 + 100) = param_8[1];
        *(undefined4 *)(iVar1 + 0x68) = param_8[2];
        *(undefined4 *)(iVar1 + 0x6c) = param_8[3];
        break;
      }
      if (*(int *)(iVar1 + 0x18) < param_1) {
        iVar1 = *(int *)(iVar1 + 8);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
    }
    if (DAT_01ede1d0 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
    }
  }
  return;
}

// 00ECA020  FUN_00eca020  size=280  [run]
void FUN_00eca020(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if (param_1 != -1) {
    iVar1 = DAT_01eddae8;
    if (DAT_01ede1d0 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
      iVar1 = DAT_01eddae8;
    }
    while (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x18) == param_1) {
        FUN_00f9a230(param_1);
        iVar3 = FUN_00f98ed0(0);
        if (iVar3 == 0) {
          iVar3 = FUN_00f98a70();
          *(float *)(iVar1 + 0x1c) = (float)iVar3;
          iVar3 = FUN_00f98a80();
          fVar2 = (float)iVar3;
        }
        else {
          iVar3 = FUN_00fa0740(0);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 8);
          }
          fVar2 = (float)iVar3;
          if (iVar3 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          *(float *)(iVar1 + 0x1c) = fVar2;
          iVar3 = FUN_00fa0740(0);
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 0xc);
          }
          fVar2 = (float)iVar3;
          if (iVar3 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
        }
        *(float *)(iVar1 + 0x20) = fVar2;
        *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(iVar1 + 0x78);
        *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar1 + 0x70);
        *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(iVar1 + 0x74);
        *(undefined4 *)(iVar1 + 0x78) = 0xbf800000;
        *(undefined4 *)(iVar1 + 0x70) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x74) = 0xffffffff;
        break;
      }
      if (*(int *)(iVar1 + 0x18) < param_1) {
        iVar1 = *(int *)(iVar1 + 8);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
      }
    }
    if (DAT_01ede1d0 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
    }
  }
  return;
}

// 00ECA140  FUN_00eca140  size=145  [run]
undefined4 FUN_00eca140(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == -1) {
    return 0;
  }
  iVar1 = DAT_01eddae8;
  if (DAT_01ede1d0 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
    iVar1 = DAT_01eddae8;
  }
  while( true ) {
    if (iVar1 == 0) {
      if (DAT_01ede1d0 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
      }
      return 0;
    }
    if (*(int *)(iVar1 + 0x18) == param_1) break;
    if (*(int *)(iVar1 + 0x18) < param_1) {
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
  }
  if (*(float *)(iVar1 + 0x78) == -1.0) {
    FUN_00ec6b10();
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x70);
  if (DAT_01ede1d0 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
  }
  return uVar2;
}

// 00ECA1E0  FUN_00eca1e0  size=156  [run]
float10 FUN_00eca1e0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (param_1 == -1) {
    return (float10)-1.0;
  }
  iVar2 = DAT_01eddae8;
  if (DAT_01ede1d0 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
    iVar2 = DAT_01eddae8;
  }
  while( true ) {
    if (iVar2 == 0) {
      if (DAT_01ede1d0 != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
      }
      return (float10)-1.0;
    }
    if (*(int *)(iVar2 + 0x18) == param_1) break;
    if (*(int *)(iVar2 + 0x18) < param_1) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  if (*(float *)(iVar2 + 0x78) == -1.0) {
    FUN_00ec6b10();
  }
  fVar1 = *(float *)(iVar2 + 0x78);
  if (DAT_01ede1d0 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01ede1b8);
  }
  return (float10)fVar1;
}

// 00ECA280  FUN_00eca280  size=304  [run]
void __thiscall FUN_00eca280(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    FUN_00dd5650(&DAT_016d6d9c);
    return;
  }
  fVar1 = *(float *)(*param_2 + 0x110);
  FUN_00ec83c0(param_2);
  FUN_00ec84e0(param_2);
  iVar5 = *param_1;
  fVar2 = (float)param_1[9];
  fVar3 = (float)param_1[10];
  fVar4 = (float)param_1[0xb];
  *(float *)(iVar5 + 0x90) = fVar1 * (float)param_1[8] + *(float *)(iVar5 + 0x90);
  *(float *)(iVar5 + 0x94) = *(float *)(iVar5 + 0x94) + fVar2 * fVar1;
  *(float *)(iVar5 + 0x98) = *(float *)(iVar5 + 0x98) + fVar3 * fVar1;
  *(float *)(iVar5 + 0x9c) = *(float *)(iVar5 + 0x9c) + fVar1 * fVar4;
  iVar5 = *param_1;
  if ((*(ushort *)(iVar5 + 0xa2) & 0x4002) == 0) {
    FUN_00ddb590(iVar5 + 0x60,iVar5 + 0x90);
  }
  if ((*(ushort *)(*param_1 + 0xa2) & 0x8004) == 0) {
    FUN_00a15310();
  }
  return;
}

// 00ECA3B0  FUN_00eca3b0  size=223  [run]
undefined4 __thiscall
FUN_00eca3b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float10 fVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[2];
  if (*(char *)((int)param_2 + 0x11) == '\x01') {
    if (*(short *)((int)param_2 + 0x3e) != 0) {
      fVar5 = (float10)FUN_00dde300(0,0x3f800000);
      fVar1 = (float)*(ushort *)((int)param_2 + 0x3e) * 0.01 * (float)fVar5;
      param_1[2] = fVar1;
      param_1[3] = fVar1 - 1.0;
    }
    if ((param_2[0x10] & 0x40000000) != 0) {
      uVar4 = 5;
      iVar2 = 0;
      pfVar3 = (float *)(param_2 + 5);
      do {
        if (1.0 < *pfVar3 != (*pfVar3 == 1.0)) {
          uVar4 = iVar2 + 1;
          if (uVar4 < 3) {
            return 1;
          }
          break;
        }
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 1;
      } while (iVar2 < 5);
      iVar2 = FixedSplineLoop::create(uVar4,param_4,0x20);
      if (iVar2 == 0) {
        return 0;
      }
      (**(code **)(param_1[5] + 4))(param_2 + 10,uVar4);
      return 1;
    }
  }
  return 1;
}

// 00ECA490  FUN_00eca490  size=267  [run]
void __thiscall FUN_00eca490(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if (*(char *)((int)param_2 + 0x11) != '\0') {
    FUN_00ec8c70(param_2,param_4);
    return;
  }
  fVar1 = param_3 + 1.0;
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  fVar2 = (float)(int)*(short *)((int)param_2 + 0xe);
  if (fVar1 < fVar2 != (fVar1 == fVar2)) {
    *param_1 = (fVar1 / fVar2) * *param_2;
    return;
  }
  if ((float)((int)*(short *)(param_2 + 3) + (int)*(short *)((int)param_2 + 0xe)) < param_3) {
    if (param_4 != 1.0) {
      fVar1 = param_2[1];
      if (2.0 <= fVar1) {
        fVar3 = (float10)FUN_00fdc1f0();
        *param_1 = (float)fVar3 * *param_1;
        return;
      }
      *param_1 = (fVar1 / ((param_4 - fVar1 * param_4) + fVar1)) * *param_1;
      return;
    }
    *param_1 = param_2[1] * *param_1;
  }
  return;
}

// 00ECA5A0  FUN_00eca5a0  size=216  [run]
undefined4 __thiscall
FUN_00eca5a0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  
  *param_1 = *param_2;
  if (*(char *)(param_2 + 3) == '\x01') {
    if (*(short *)((int)param_2 + 0x3a) != 0) {
      fVar5 = (float10)FUN_00dde300(0,0x3f800000);
      fVar1 = (float)*(ushort *)((int)param_2 + 0x3a) * 0.01 * (float)fVar5;
      param_1[1] = fVar1;
      param_1[2] = fVar1 - 1.0;
    }
    if ((param_2[0xf] & 0x40000000) != 0) {
      iVar4 = 5;
      iVar2 = 0;
      pfVar3 = (float *)(param_2 + 4);
      do {
        if (1.0 < *pfVar3 != (*pfVar3 == 1.0)) {
          iVar4 = iVar2 + 1;
          if (iVar4 == 0) {
            return 1;
          }
          break;
        }
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 1;
      } while (iVar2 < 5);
      iVar2 = FixedSplineLoop::create(iVar4,param_4,0x20);
      if (iVar2 == 0) {
        return 0;
      }
      (**(code **)(param_1[4] + 4))(param_2 + 9,iVar4);
      return 1;
    }
  }
  return 1;
}

// 00ECA680  FUN_00eca680  size=267  [run]
void __thiscall FUN_00eca680(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if (*(char *)(param_2 + 3) != '\0') {
    FUN_00ec8ea0(param_2,param_4);
    return;
  }
  fVar1 = param_3 + 1.0;
  if (fVar1 <= 0.0001) {
    fVar1 = 0.0001;
  }
  fVar2 = (float)(int)*(short *)((int)param_2 + 10);
  if (fVar1 < fVar2 != (fVar1 == fVar2)) {
    *param_1 = (fVar1 / fVar2) * *param_2;
    return;
  }
  if ((float)((int)*(short *)(param_2 + 2) + (int)*(short *)((int)param_2 + 10)) < param_3) {
    if (param_4 != 1.0) {
      fVar1 = param_2[1];
      if (2.0 <= fVar1) {
        fVar3 = (float10)FUN_00fdc1f0();
        *param_1 = (float)fVar3 * *param_1;
        return;
      }
      *param_1 = (fVar1 / ((param_4 - fVar1 * param_4) + fVar1)) * *param_1;
      return;
    }
    *param_1 = param_2[1] * *param_1;
  }
  return;
}

// 00ECA790  FUN_00eca790  size=2653  [run]
/* WARNING: Removing unreachable block (ram,0x00ecb01e) */

void __thiscall FUN_00eca790(float *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined1 auStack_154 [12];
  float local_148;
  float local_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined1 auStack_100 [4];
  undefined1 auStack_fc [12];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [15];
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_154;
  if ((((param_2[0xd] & 0x40000000U) == 0) && (param_2[9] != 0)) &&
     (param_2[9] <= (int)param_1[0x18])) goto LAB_00ecb1d6;
  local_130 = param_1[0xc] * (float)param_2[7];
  local_12c = param_1[0xd] * (float)param_2[7];
  local_128 = param_1[0xe] * (float)param_2[7];
  param_1[8] = (float)param_2[7] * param_1[0x14] + param_1[8];
  param_1[9] = param_1[0x15] * (float)param_2[7] + param_1[9];
  param_1[10] = param_1[0x16] * (float)param_2[7] + param_1[10];
  fVar23 = (float)param_2[5];
  param_1[0x14] = fVar23 * param_1[0x14];
  param_1[0x15] = param_1[0x15] * fVar23;
  param_1[0x16] = param_1[0x16] * fVar23;
  param_1[0x17] = fVar23 * param_1[0x17];
  local_104 = (float)param_2[7] * (float)param_2[2];
  local_110 = local_104 * param_1[0x10];
  local_10c = param_1[0x11] * local_104;
  local_108 = param_1[0x12] * local_104;
  local_104 = local_104 * param_1[0x13];
  param_1[0xc] = param_1[0xc] + local_110;
  param_1[0xd] = param_1[0xd] + local_10c;
  param_1[0xe] = param_1[0xe] + local_108;
  param_1[0xf] = param_1[0xf] + local_104;
  local_144 = (float)param_2[3];
  local_148 = (float)param_2[7];
  if (local_148 != 1.0) {
    if (local_144 < 2.0) {
      local_144 = local_144 / ((local_148 - local_144 * local_148) + local_144);
    }
    else {
      fVar6 = (float10)FUN_00fdc1f0();
      local_148 = (float)fVar6;
      local_144 = local_148;
    }
  }
  param_1[0xc] = local_144 * param_1[0xc];
  param_1[0xd] = param_1[0xd] * local_144;
  param_1[0xe] = param_1[0xe] * local_144;
  param_1[0xf] = local_144 * param_1[0xf];
  if ((param_2[10] == 0) || ((param_2[0xd] & 0x40000000U) != 0)) {
LAB_00ecb172:
    *param_1 = *param_1 + local_130;
    param_1[1] = param_1[1] + local_12c;
    param_1[2] = local_128 + param_1[2];
    param_1[3] = param_1[3] + local_124;
  }
  else {
    iVar3 = *param_2;
    local_a8[0] = 0.0;
    local_ac = 0.0;
    local_b0 = 0.0;
    local_b4 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_c4 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d4 = 0;
    local_d8 = 0;
    local_dc = 0.0;
    local_a8[1] = 1.0;
    local_b8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_e0 = 1.0;
    fVar23 = *(float *)(iVar3 + 0x188);
    D3DXMatrixTranslation(&local_e0,*(undefined4 *)(iVar3 + 0x180),*(undefined4 *)(iVar3 + 0x184));
    iVar3 = *param_2;
    local_a8[0xc] = 0.0;
    local_a8[0xb] = 0.0;
    local_a8[10] = 0.0;
    local_a8[9] = 0.0;
    local_a8[7] = 0.0;
    local_a8[6] = 0.0;
    local_a8[5] = 0.0;
    local_a8[4] = 0.0;
    local_a8[2] = 0.0;
    local_a8[1] = 0.0;
    local_a8[0] = 0.0;
    local_ac = 0.0;
    local_a8[0xd] = 1.0;
    local_a8[8] = 1.0;
    local_a8[3] = 1.0;
    local_b0 = 1.0;
    if (*(float *)(iVar3 + 0x1b8) != 0.0) {
      unaff_EBX = *(float *)(iVar3 + 0x1b8);
      D3DXMatrixRotationZ(local_a8 + 0xe,unaff_EBX);
      D3DXMatrixMultiply(&local_b8,local_a8 + 0xc,&local_b8);
    }
    if (*(float *)(iVar3 + 0x1b4) != 0.0) {
      unaff_EBX = *(float *)(iVar3 + 0x1b4);
      D3DXMatrixRotationY(local_a8 + 0xe,unaff_EBX);
      D3DXMatrixMultiply(&local_b8,local_a8 + 0xc,&local_b8);
    }
    if (*(float *)(iVar3 + 0x1b0) != 0.0) {
      unaff_EBX = *(float *)(iVar3 + 0x1b0);
      D3DXMatrixRotationX(local_a8 + 0xe,unaff_EBX);
      D3DXMatrixMultiply(&local_b8,local_a8 + 0xc,&local_b8);
    }
    D3DXMatrixMultiply(&fStack_f0,&local_b0,&fStack_f0);
    D3DXMatrixMultiply(auStack_fc,*param_2 + 0x200,auStack_fc);
    pfVar10 = param_1 + 4;
    D3DXVec3TransformNormal(&local_128,pfVar10,&local_108);
    fStack_134 = fStack_134 + fStack_e4;
    local_130 = local_130 + local_e0;
    local_12c = local_12c + local_dc;
    local_144 = *param_1 + fVar23;
    fStack_140 = param_1[1] + unaff_EDI;
    fStack_13c = unaff_ESI + param_1[2];
    fStack_138 = param_1[3] + unaff_EBX;
    param_1[7] = fStack_138;
    *pfVar10 = local_144;
    param_1[5] = fStack_140;
    param_1[6] = fStack_13c;
    D3DXVec3TransformNormal(&local_144,&local_144,&fStack_114);
    local_110 = local_110 + local_b0;
    local_10c = local_10c + local_ac;
    local_108 = local_108 + local_a8[0];
    iVar3 = FUN_009d6070(&fStack_f0,&fStack_120,auStack_100,&local_110);
    if (iVar3 == 0) goto LAB_00ecb172;
    if (fStack_11c <= 0.5) {
      param_1[0x18] = (float)((int)param_1[0x18] + 3);
    }
    else {
      param_1[0x18] = (float)((int)param_1[0x18] + 10);
    }
    if (param_1[0x11] < 0.995) {
      D3DXMatrixTranspose(local_a8 + 2,&local_e0);
      D3DXVec3TransformNormal(&local_128,&local_128,local_a8);
      fStack_120 = fStack_120 + local_a8[0xe];
      fStack_11c = fStack_6c + fStack_11c;
      fStack_118 = fStack_118 + fStack_68;
      local_148 = fStack_11c * fStack_11c + fStack_120 * fStack_120 + fStack_118 * fStack_118;
      if (local_148 < 0.0 == (local_148 == 0.0)) {
        FUN_00ddf460(&fStack_120,&fStack_120);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_120 = 0.0;
        fStack_11c = 1.0;
        fStack_118 = 0.0;
      }
    }
    D3DXMatrixInverse(auStack_60,0,&local_e0);
    D3DXVec3TransformNormal(param_1,auStack_fc,&fStack_6c);
    fVar23 = *param_1;
    *param_1 = fVar23 + fStack_30;
    fVar23 = fStack_120 * 0.01 + fVar23 + fStack_30;
    *param_1 = fVar23;
    param_1[1] = fStack_2c + param_1[1] + fStack_11c * 0.01;
    param_1[2] = fStack_28 + param_1[2] + fStack_118 * 0.01;
    param_1[3] = param_1[3] + fStack_114 * 0.01;
    *pfVar10 = fVar23;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[7] = param_1[3];
    fVar23 = param_1[0xe] * fStack_118 + fStack_120 * param_1[0xc] + param_1[0xd] * fStack_11c;
    local_130 = fVar23 * fStack_120 * 2.0;
    local_12c = fVar23 * fStack_11c * 2.0;
    local_128 = fStack_118 * fVar23 * 2.0;
    local_124 = fVar23 * fStack_114 * 2.0;
    param_1[0xc] = param_1[0xc] + local_130;
    param_1[0xd] = param_1[0xd] + local_12c;
    param_1[0xe] = param_1[0xe] + local_128;
    param_1[0xf] = param_1[0xf] + local_124;
    fVar23 = -(float)param_2[6];
    param_1[0xc] = fVar23 * param_1[0xc];
    param_1[0xd] = param_1[0xd] * fVar23;
    param_1[0xe] = param_1[0xe] * fVar23;
    param_1[0xf] = fVar23 * param_1[0xf];
    param_1[0x14] = param_1[0x14] * 0.5;
    param_1[0x15] = param_1[0x15] * 0.5;
    param_1[0x16] = param_1[0x16] * 0.5;
    param_1[0x17] = param_1[0x17] * 0.5;
    fStack_134 = param_1[0xe] * fStack_118 + fStack_120 * param_1[0xc] + param_1[0xd] * fStack_11c;
    fStack_140 = fStack_134 * fStack_120;
    fStack_13c = fStack_134 * fStack_11c;
    fStack_138 = fStack_134 * fStack_118;
    fStack_134 = fStack_114 * fStack_134;
    param_1[0xc] = param_1[0xc] - fStack_140;
    param_1[0xd] = param_1[0xd] - fStack_13c;
    param_1[0xe] = param_1[0xe] - fStack_138;
    param_1[0xf] = param_1[0xf] - fStack_134;
    fVar23 = (float)param_2[4];
    uVar4 = *(uint *)param_2[8] * 0x19660d + 0x3c6ef35f;
    *(uint *)param_2[8] = uVar4;
    local_148 = 1.0 - (float)(uVar4 >> 8) * 5.960465e-08 * 2.0;
    if (-0.5 <= local_148) {
      local_144 = (local_148 + 1.0) * 0.75;
    }
    else {
      local_144 = local_148 * 0.2;
    }
    local_144 = local_144 * fVar23;
    param_1[0xc] = local_144 * param_1[0xc];
    param_1[0xd] = param_1[0xd] * local_144;
    param_1[0xe] = param_1[0xe] * local_144;
    param_1[0xf] = local_144 * param_1[0xf];
    param_1[0xc] = param_1[0xc] + fStack_140;
    param_1[0xd] = fStack_13c + param_1[0xd];
    param_1[0xe] = fStack_138 + param_1[0xe];
    param_1[0xf] = fStack_134 + param_1[0xf];
    if (((*(byte *)(*param_2 + 0x30) & 0x10) == 0) && (param_1[0x19] != 0.0)) {
      fStack_140 = fStack_f0;
      param_1[0x19] = (float)((int)param_1[0x19] + -1);
      fStack_13c = fStack_ec;
      fStack_138 = fStack_e8;
      fStack_134 = fStack_e4;
      if ((*(uint *)(*param_2 + 0x6c) & 0x1000) != 0) {
        puVar1 = (uint *)(*param_2 + 0x6c);
        *puVar1 = *puVar1 & 0xffffefff;
      }
      iVar15 = param_2[0xc];
      iVar14 = param_2[0xb];
      iVar2 = *param_2;
      uVar24 = 0;
      uVar22 = 0;
      uVar21 = 0;
      uVar20 = 0;
      uVar19 = 0;
      uVar18 = 0x3f800000;
      uVar17 = 0xff;
      uVar16 = 0;
      uVar4 = *(uint *)(iVar2 + 0x6c) | 0x40;
      uVar13 = *(undefined4 *)(iVar2 + 0x74);
      uVar12 = *(undefined4 *)(iVar2 + 0x78);
      uVar11 = 0;
      pfVar10 = &fStack_140;
      uVar5 = FUN_00a81330(pfVar10,0,uVar12,uVar13,uVar4,iVar14,iVar15,0,0xff,0x3f800000,0,0,0,0,0);
      uVar8 = *(undefined4 *)(iVar2 + 0x60);
      uVar9 = *(undefined4 *)(iVar2 + 0x68);
      iVar3 = iVar2 + 0x7c;
      uVar7 = *(undefined4 *)(iVar2 + 0x84);
      FUN_009cf0e0(uVar7,uVar8,uVar9,iVar3,uVar5);
      FUN_00f42b60(uVar7,uVar8,uVar9,iVar3,uVar5,pfVar10,uVar11,uVar12,uVar13,uVar4,iVar14,iVar15,
                   uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar24);
    }
  }
  iVar3 = param_2[1];
  *(float *)(iVar3 + 0x50) = *param_1;
  *(float *)(iVar3 + 0x54) = param_1[1];
  *(float *)(iVar3 + 0x58) = param_1[2];
  *(float *)(iVar3 + 0x5c) = param_1[3];
  *(float *)(iVar3 + 0x90) = param_1[8];
  *(float *)(iVar3 + 0x94) = param_1[9];
  *(float *)(iVar3 + 0x98) = param_1[10];
  *(float *)(iVar3 + 0x9c) = param_1[0xb];
LAB_00ecb1d6:
  __security_check_cookie(local_14 ^ (uint)auStack_154);
  return;
}

// 00ECB1F0  FUN_00ecb1f0  size=764  [run]
void __thiscall FUN_00ecb1f0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 auStack_104 [4];
  float fStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 local_a0 [40];
  undefined1 auStack_78 [8];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_104;
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != -1) {
    if ((iVar1 < 0) || (*(short *)(param_3 + 0x324) <= iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 * 0x70 + *(int *)(param_3 + 800);
    }
    local_114 = *(undefined4 *)(param_2 + 0x188);
    local_118 = *(undefined4 *)(param_2 + 0x184);
    D3DXMatrixTranslation(local_a0,*(undefined4 *)(param_2 + 0x180));
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c0 = 0;
    uStack_c4 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    uStack_d4 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e4 = 0;
    fStack_e8 = 0.0;
    fStack_ec = 0.0;
    uStack_b4 = 0x3f800000;
    uStack_c8 = 0x3f800000;
    uStack_dc = 0x3f800000;
    fStack_f0 = 1.0;
    if (*(float *)(param_2 + 0x1b8) != 0.0) {
      D3DXMatrixRotationZ(&fStack_70,*(undefined4 *)(param_2 + 0x1b8));
      D3DXMatrixMultiply(&fStack_f8,auStack_78,&fStack_f8);
    }
    if (*(float *)(param_2 + 0x1b4) != 0.0) {
      D3DXMatrixRotationY(&fStack_70,*(undefined4 *)(param_2 + 0x1b4));
      D3DXMatrixMultiply(&fStack_f8,auStack_78,&fStack_f8);
    }
    if (*(float *)(param_2 + 0x1b0) != 0.0) {
      D3DXMatrixRotationX(&fStack_70,*(undefined4 *)(param_2 + 0x1b0));
      D3DXMatrixMultiply(&fStack_f8,auStack_78,&fStack_f8);
    }
    D3DXMatrixMultiply(auStack_b0,&fStack_f0,auStack_b0);
    D3DXMatrixMultiply(&uStack_bc,param_2 + 0x200,&uStack_bc);
    D3DXVec3TransformNormal(&local_118,param_1,&uStack_c8);
    fStack_f0 = fStack_70 + fStack_f0;
    fStack_ec = fStack_6c + fStack_ec;
    fStack_e8 = fStack_68 + fStack_e8;
    if ((*(int *)(param_2 + 0x58) == 0) ||
       (puVar2 = (uint *)(*(int *)(param_2 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar2;
      if ((uVar4 + 0xf & 0xfffffff0) != uVar4) {
        local_114 = 3;
        local_118 = 0xecb3f0;
        local_118 = FUN_00f59ed0();
        FUN_00dd5650(&DAT_016597b4);
      }
    }
    local_114 = 0xecb403;
    uVar3 = FUN_00e9fe70();
    uStack_fc = *(undefined4 *)(uVar4 + 0xc);
    fStack_100 = *(float *)(uVar4 + 0x10);
    if ((*(uint *)(param_2 + 0x30) & 0x200) == 0) {
      local_118 = uStack_fc;
      local_114 = fStack_100;
      fVar5 = (float10)FUN_00edbf30(uVar3,&fStack_f0);
    }
    else {
      fVar5 = (float10)1;
    }
    if ((*(byte *)(param_2 + 0x30) & 0x10) == 0) {
      fStack_100 = 1.0;
    }
    else if (*(float *)(param_2 + 0x90) == 0.0) {
      fStack_100 = 0.0;
    }
    else {
      fStack_100 = *(float *)(param_2 + 0x9c) / *(float *)(param_2 + 0x90);
    }
    uStack_fc = param_4[1];
    uStack_f4 = param_4[2];
    fStack_f8 = fStack_100 * (float)fVar5 * (float)param_4[3];
    *(undefined4 *)(iVar1 + 0x20) = *param_4;
    *(undefined4 *)(iVar1 + 0x24) = uStack_fc;
    *(undefined4 *)(iVar1 + 0x28) = uStack_f4;
    *(float *)(iVar1 + 0x2c) = fStack_f8;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_104);
  return;
}

// 00ECB4F0  FUN_00ecb4f0  size=225  [run]
void __thiscall FUN_00ecb4f0(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar4 = 0;
  pbVar3 = *(byte **)(param_1 + 0x1c10);
  do {
    if ((*pbVar3 & 1) == 0) {
      puVar1 = (uint *)(*(byte **)(param_1 + 0x1c10) + uVar4 * 0x70);
      *puVar1 = *puVar1 | 1;
      puVar2 = (undefined4 *)(uVar4 * 0x70 + 0x10 + *(int *)(param_1 + 0x1c10));
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[3] = param_2[3];
      puVar2[4] = param_2[4];
      puVar2[5] = param_2[5];
      puVar2[6] = param_2[6];
      puVar2[7] = param_2[7];
      puVar2[8] = param_2[8];
      puVar2[9] = param_2[9];
      puVar2[10] = param_2[10];
      puVar2[0xb] = param_2[0xb];
      puVar2[0xc] = param_2[0xc];
      puVar2[0xd] = param_2[0xd];
      puVar2[0xe] = param_2[0xe];
      puVar2[0xf] = param_2[0xf];
      puVar2[0x10] = param_2[0x10];
      puVar2[0x11] = param_2[0x11];
      puVar2[0x12] = param_2[0x12];
      puVar2[0x13] = param_2[0x13];
      puVar2[0x14] = param_2[0x14];
      puVar2[0x15] = param_2[0x15];
      puVar2[0x16] = param_2[0x16];
      puVar2[0x17] = param_2[0x17];
      *(int *)(param_1 + 0x1c1c) = *(int *)(param_1 + 0x1c1c) + 1;
      break;
    }
    uVar4 = uVar4 + 1;
    pbVar3 = pbVar3 + 0x70;
  } while (uVar4 < 0x20);
  if (uVar4 == 0x20) {
    FUN_00dd5650(&DAT_016d6ef4);
  }
  return;
}

// 00ECB5E0  FUN_00ecb5e0  size=1051  [run]
undefined4 FUN_00ecb5e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ed0e30(0,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00ed1e30(1,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_00ed0ea0(2,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_00ed2e90(3,param_2);
        if (iVar1 != 0) {
          iVar1 = FUN_00ed2f00(4,param_2);
          if (iVar1 != 0) {
            iVar1 = FUN_00ed3ba0(5,param_2);
            if (iVar1 != 0) {
              iVar1 = FUN_00ed3c10(6,param_2);
              if (iVar1 != 0) {
                iVar1 = FUN_00ed1ea0(7,param_2);
                if (iVar1 != 0) {
                  iVar1 = FUN_00ed1f10(8,param_2);
                  if (iVar1 != 0) {
                    iVar1 = FUN_00ed1f80(9,param_2);
                    if (iVar1 != 0) {
                      iVar1 = FUN_00ed1ff0(10,param_2);
                      if (iVar1 != 0) {
                        iVar1 = FUN_00ed2f70(0xb,param_2);
                        if (iVar1 != 0) {
                          iVar1 = FUN_00ed2fe0(0xc,param_2);
                          if (iVar1 != 0) {
                            iVar1 = FUN_00ed0f10(0xd,param_2);
                            if (iVar1 != 0) {
                              iVar1 = FUN_00ed2060(0xe,param_2);
                              if (iVar1 != 0) {
                                iVar1 = FUN_00ed37a0(0xf,param_2);
                                if (iVar1 != 0) {
                                  iVar1 = FUN_00ed3810(0x10,param_2);
                                  if (iVar1 != 0) {
                                    iVar1 = FUN_00ed20d0(0x11,param_2);
                                    if (iVar1 != 0) {
                                      iVar1 = FUN_00ed0f80(0x12,param_2);
                                      if (iVar1 != 0) {
                                        iVar1 = FUN_00ed0ff0(0x13,param_2);
                                        if (iVar1 != 0) {
                                          iVar1 = FUN_00ed1060(0x14,param_2);
                                          if (iVar1 != 0) {
                                            iVar1 = FUN_00ed3c80(0x15,param_2);
                                            if (iVar1 != 0) {
                                              iVar1 = FUN_00ed3050(0x17,param_2);
                                              if (iVar1 != 0) {
                                                iVar1 = FUN_00ed30c0(0x18,param_2);
                                                if (iVar1 != 0) {
                                                  iVar1 = FUN_00ed10d0(0x19,param_2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = FUN_00ed1140(0x1a,param_2);
                                                    if (iVar1 != 0) {
                                                      iVar1 = FUN_00ed3130(0x1b,param_2);
                                                      if (iVar1 != 0) {
                                                        iVar1 = FUN_00ed31a0(0x1c,param_2);
                                                        if (iVar1 != 0) {
                                                          iVar1 = FUN_00ed3210(0x1d,param_2);
                                                          if (iVar1 != 0) {
                                                            iVar1 = FUN_00ed2140(0x1e,param_2);
                                                            if (iVar1 != 0) {
                                                              iVar1 = FUN_00ed3280(0x1f,param_2);
                                                              if (iVar1 != 0) {
                                                                iVar1 = FUN_00ed3880(0x20,param_2);
                                                                if (iVar1 != 0) {
                                                                  iVar1 = FUN_00ed32f0(0x21,param_2)
                                                                  ;
                                                                  if (iVar1 != 0) {
                                                                    iVar1 = FUN_00ed3cf0(0x22,
                                                  param_2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = FUN_00ed21b0(0x23,param_2);
                                                    if (iVar1 != 0) {
                                                      iVar1 = FUN_00ed3360(0x24,param_2);
                                                      if (iVar1 != 0) {
                                                        iVar1 = FUN_00ed33d0(0x26,param_2);
                                                        if (iVar1 != 0) {
                                                          iVar1 = FUN_00ed2220(0x27,param_2);
                                                          if (iVar1 != 0) {
                                                            iVar1 = FUN_00ed2290(0x28,param_2);
                                                            if (iVar1 != 0) {
                                                              iVar1 = FUN_00ed2300(0x29,param_2);
                                                              if (iVar1 != 0) {
                                                                iVar1 = FUN_00ed2370(0x2a,param_2);
                                                                if (iVar1 != 0) {
                                                                  iVar1 = FUN_00ed23e0(0x2b,param_2)
                                                                  ;
                                                                  if (iVar1 != 0) {
                                                                    iVar1 = FUN_00ed2450(0x2c,
                                                  param_2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = FUN_00ed24c0(0x2d,param_2);
                                                    if (iVar1 != 0) {
                                                      iVar1 = FUN_00ed3440(0x2e,param_2);
                                                      if (iVar1 != 0) {
                                                        iVar1 = FUN_00ed2530(0x2f,param_2);
                                                        if (iVar1 != 0) {
                                                          iVar1 = FUN_00ed25a0(0x30,param_2);
                                                          if (iVar1 != 0) {
                                                            iVar1 = FUN_00ed38f0(0x31,param_2);
                                                            if (iVar1 != 0) {
                                                              iVar1 = FUN_00ed11b0(0x32,param_2);
                                                              if (iVar1 != 0) {
                                                                iVar1 = FUN_00ed2610(0x33,param_2);
                                                                if (iVar1 != 0) {
                                                                  iVar1 = FUN_00ed2680(0x34,param_2)
                                                                  ;
                                                                  if (iVar1 != 0) {
                                                                    iVar1 = FUN_00ed34b0(0x35,
                                                  param_2);
                                                  if (iVar1 != 0) {
                                                    iVar1 = FUN_00ed26f0(0x5a,param_2);
                                                    if (iVar1 != 0) {
                                                      iVar1 = FUN_00ed3960(0x8000,param_2);
                                                      if (iVar1 != 0) {
                                                        iVar1 = FUN_00ed39d0(0x8001,param_2);
                                                        if (iVar1 != 0) {
                                                          iVar1 = FUN_00ed3a40(0x8002,param_2);
                                                          if (iVar1 != 0) {
                                                            iVar1 = FUN_00ed3ab0(0x8003,param_2);
                                                            if (iVar1 != 0) {
                                                              iVar1 = FUN_00ed1220(0x800a,param_2);
                                                              if (iVar1 != 0) {
                                                                uVar2 = FUN_009f7260(param_1,param_2
                                                                                    );
                                                                return uVar2;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00ECBCB0  FUN_00ecbcb0  size=112  [run]
void FUN_00ecbcb0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined3 local_c;
  undefined1 uStack_9;
  undefined2 uStack_8;
  undefined1 local_6;
  undefined1 local_5;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_c;
  _local_c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[param_3]);
  uStack_8 = 0x7477;
  local_6 = 0x61;
  local_5 = 0;
  uVar1 = FUN_00de3d80(0,&local_c);
  *param_1 = uVar1;
  local_6 = 0x70;
  uVar1 = FUN_00de3d80(1,&local_c);
  *param_2 = uVar1;
  __security_check_cookie(local_4 ^ (uint)&local_c);
  return;
}

// 00ECBD20  FUN_00ecbd20  size=195  [run]
void FUN_00ecbd20(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  undefined1 local_18;
  undefined1 *local_17;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  undefined1 local_c;
  undefined4 local_b;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_1c;
  local_19 = "0123456789abcdef"[param_3 & 0xf];
  local_1c = "0123456789abcdef"[param_3 >> 0xc & 0xf];
  local_1b = "0123456789abcdef"[param_3 >> 8 & 0xf];
  local_1a = "0123456789abcdef"[param_3 >> 4 & 0xf];
  local_18 = 0x2e;
  local_17 = &LAB_00746164;
  local_c = 0x2e;
  local_b = 0x747464;
  local_10 = local_1c;
  local_f = local_1b;
  local_e = local_1a;
  local_d = local_19;
  uVar1 = FUN_00de3d80(0,&local_1c);
  *param_1 = uVar1;
  uVar1 = FUN_00de3d80(1,&local_10);
  *param_2 = uVar1;
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

// 00ECBDF0  FUN_00ecbdf0  size=44  [run]
float10 FUN_00ecbdf0(float param_1,float *param_2)

{
  float10 fVar1;
  double local_8;
  
  fVar1 = (float10)FUN_00fe0930((double)param_1,&local_8);
  *param_2 = (float)local_8;
  return (float10)(float)fVar1;
}

// 00ECBF60  FUN_00ecbf60  size=43  [run]
void __thiscall FUN_00ecbf60(float *param_1,float *param_2,float param_3)

{
  *param_2 = param_3 * *param_1;
  param_2[1] = param_1[1] * param_3;
  param_2[2] = param_1[2] * param_3;
  param_2[3] = param_3 * param_1[3];
  return;
}

