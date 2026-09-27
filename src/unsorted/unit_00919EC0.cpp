// src/unsorted/unit_00919EC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00919EC0..0091D010, 55 functions

#include "mgrr.h"

// 00919EC0  FUN_00919ec0  size=170  [run]
void __thiscall FUN_00919ec0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_00860de0();
    FUN_01005140(param_2);
    if ((DAT_01885d68 != 1) &&
       (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0)
       ) {
      piVar1 = (int *)(iVar2 + 8);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
        FUN_00dd7300();
      }
    }
  }
  return;
}

// 00919F70  FUN_00919f70  size=105  [run]
void __thiscall FUN_00919f70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_00912060(param_2);
    FUN_00915690(param_3);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 0091A1C0  FUN_0091a1c0  size=281  [run]
void __fastcall FUN_0091a1c0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    if ((*param_1 != 0) && (uVar2 = *(uint *)(*param_1 + 0xc), uVar2 != 0)) {
      puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar3 = *puVar3 | 0x80000;
      puVar3[0x15] = 0;
      *puVar3 = *puVar3 | 0x800000;
      puVar3[0x19] = 0;
      *puVar3 = *puVar3 | 0x200000;
      puVar3[0x17] = 0;
      *puVar3 = *puVar3 | 0x400000;
      puVar3[0x18] = 0;
      *puVar3 = *puVar3 | 0x100000;
      puVar3[0x16] = 0;
      *puVar3 = *puVar3 | 0x1000000;
      puVar3[0x1a] = 0;
      *puVar3 = *puVar3 | 0x2000000;
      puVar3[0x1b] = 0;
      *puVar3 = *puVar3 | 0x4000000;
      puVar3[0x1c] = 0;
      *puVar3 = *puVar3 | 0x8000000;
      puVar3[0x1d] = 0;
      *puVar3 = *puVar3 | 0x10000000;
      puVar3[0x1e] = 0;
      *puVar3 = *puVar3 | 0x20000000;
      puVar3[0x1f] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 0091A2E0  FUN_0091a2e0  size=98  [run]
void __thiscall FUN_0091a2e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_009158d0(param_2,param_3);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 0091A350  FUN_0091a350  size=98  [run]
void __thiscall FUN_0091a350(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_00915930(param_2,param_3);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 0091A3C0  FUN_0091a3c0  size=109  [run]
void __thiscall
FUN_0091a3c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_00915b40(param_2,param_3,param_4,param_5);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 0091A490  FUN_0091a490  size=74  [run]
void __fastcall FUN_0091a490(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0xe8) != '\x05') {
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar1 + 0xe0) + 0x44))(&DAT_01701b10);
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar1 + 0xe0) + 0x40))(&DAT_01701b10);
  }
  return;
}

// 0091A4E0  FUN_0091a4e0  size=24  [run]
void __thiscall FUN_0091a4e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00918630(*param_1,param_2,param_3);
  return;
}

// 0091A520  FUN_0091a520  size=151  [run]
void __thiscall FUN_0091a520(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_3;
  uStack_1c = param_3[1];
  uStack_18 = param_3[2];
  uStack_14 = param_3[3];
  iVar1 = *param_1;
  uStack_28 = param_2[2];
  uStack_24 = param_2[3];
  uStack_2c = param_2[1];
  local_30 = *param_2;
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar1 + 0xe0) + 0x40))(&local_30);
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar1 + 0xe0) + 0x44))(&uStack_24);
  return;
}

// 0091A5E0  FUN_0091a5e0  size=19  [run]
void __thiscall FUN_0091a5e0(undefined4 *param_1,undefined4 param_2)

{
  FUN_00918920(*param_1,param_2);
  return;
}

// 0091A620  FUN_0091a620  size=19  [run]
void __thiscall FUN_0091a620(undefined4 *param_1,undefined4 param_2)

{
  FUN_00918990(*param_1,param_2);
  return;
}

// 0091A640  FUN_0091a640  size=135  [run]
void __thiscall FUN_0091a640(int *param_1,float *param_2)

{
  int iVar1;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = *param_2;
  fStack_1c = param_2[1];
  fStack_18 = param_2[2];
  fStack_14 = param_2[3];
  iVar1 = *param_1;
  if (((local_20 != 0.0) || (fStack_1c != 0.0)) || (fStack_18 != 0.0)) {
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar1 + 0xe0) + 0x40))(&local_20);
  }
  return;
}

// 0091A6D0  FUN_0091a6d0  size=19  [run]
void __thiscall FUN_0091a6d0(undefined4 *param_1,undefined4 param_2)

{
  FUN_00918b10(*param_1,param_2);
  return;
}

// 0091A6F0  FUN_0091a6f0  size=135  [run]
void __thiscall FUN_0091a6f0(int *param_1,float *param_2)

{
  int iVar1;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = *param_2;
  fStack_1c = param_2[1];
  fStack_18 = param_2[2];
  fStack_14 = param_2[3];
  iVar1 = *param_1;
  if (((local_20 != 0.0) || (fStack_1c != 0.0)) || (fStack_18 != 0.0)) {
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar1 + 0xe0) + 0x44))(&local_20);
  }
  return;
}

// 0091A7E0  FUN_0091a7e0  size=19  [run]
void __thiscall FUN_0091a7e0(undefined4 *param_1,undefined4 param_2)

{
  FUN_00918d40(*param_1,param_2);
  return;
}

// 0091A800  FUN_0091a800  size=19  [run]
void __thiscall FUN_0091a800(undefined4 *param_1,undefined4 param_2)

{
  FUN_00918e20(*param_1,param_2);
  return;
}

// 0091A820  FUN_0091a820  size=19  [run]
void __thiscall FUN_0091a820(undefined4 *param_1,undefined4 param_2)

{
  FUN_00918ec0(*param_1,param_2);
  return;
}

// 0091A840  FUN_0091a840  size=19  [run]
void __thiscall FUN_0091a840(undefined4 *param_1,undefined4 param_2)

{
  FUN_00918fa0(*param_1,param_2);
  return;
}

// 0091A880  FUN_0091a880  size=24  [run]
void __thiscall FUN_0091a880(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_009190d0(*param_1,param_2,param_3);
  return;
}

// 0091A8A0  FUN_0091a8a0  size=10  [run]
void __fastcall FUN_0091a8a0(undefined4 *param_1)

{
  FUN_009182d0(*param_1);
  return;
}

// 0091A8B0  FUN_0091a8b0  size=76  [run]
void __fastcall FUN_0091a8b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 0x3c);
    }
  }
  *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xffff7fe0 | uVar2 & 0x1f;
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_01194ef0(iVar1,0,1);
  }
  FUN_0118fe70();
  return;
}

// 0091A900  FUN_0091a900  size=35  [run]
bool __thiscall FUN_0091a900(int *param_1,short param_2)

{
  short sVar1;
  
  if (*param_1 != 0) {
    sVar1 = FUN_00912c40(*param_1);
    return sVar1 == param_2;
  }
  return false;
}

// 0091A930  FUN_0091a930  size=19  [run]
void __thiscall FUN_0091a930(undefined4 *param_1,undefined4 param_2)

{
  FUN_009183c0(*param_1,param_2);
  return;
}

// 0091A950  FUN_0091a950  size=35  [run]
void __thiscall FUN_0091a950(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) ^ (*(uint *)(iVar1 + 0x2c) ^ param_2) & 0x1f;
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_01194ef0(iVar1,0,1);
  }
  return;
}

// 0091A980  FUN_0091a980  size=19  [run]
void __thiscall FUN_0091a980(undefined4 *param_1,undefined4 param_2)

{
  FUN_00918440(*param_1,param_2);
  return;
}

// 0091A9A0  FUN_0091a9a0  size=38  [run]
void __thiscall FUN_0091a9a0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(uint *)(iVar1 + 0x2c) = (uint)*(ushort *)(iVar1 + 0x2c) | param_2 << 0x10;
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_01194ef0(iVar1,0,1);
  }
  return;
}

// 0091A9D0  FUN_0091a9d0  size=12  [run]
void __fastcall FUN_0091a9d0(undefined4 *param_1)

{
  FUN_009184c0(*param_1);
  return;
}

// 0091A9E0  FUN_0091a9e0  size=22  [run]
bool __fastcall FUN_0091a9e0(int *param_1)

{
  if (*param_1 == 0) {
    return false;
  }
  return *(char *)(*param_1 + 0xe8) == '\x05';
}

// 0091AA00  FUN_0091aa00  size=45  [run]
undefined4 __fastcall FUN_0091aa00(int *param_1)

{
  char cVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  cVar1 = *(char *)(*param_1 + 0xe8);
  if ((cVar1 != '\x05') && (cVar1 != '\x04')) {
    return 0;
  }
  return 1;
}

// 0091AA30  FUN_0091aa30  size=17  [run]
bool __fastcall FUN_0091aa30(int *param_1)

{
  return *(char *)(*param_1 + 0xe8) == '\x04';
}

// 0091AB40  FUN_0091ab40  size=132  [run]
void __thiscall FUN_0091ab40(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_004066f0();
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != puVar2 + *(int *)(param_1 + 0xc) * 6) {
    do {
      FUN_00918d40(*puVar2,param_2);
      puVar2 = puVar2 + 6;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091ABD0  FUN_0091abd0  size=139  [run]
void __thiscall FUN_0091abd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_004066f0();
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != puVar2 + *(int *)(param_1 + 0xc) * 6) {
    do {
      FUN_009190d0(*puVar2,param_3,param_2);
      puVar2 = puVar2 + 6;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091AC60  FUN_0091ac60  size=132  [run]
void __thiscall FUN_0091ac60(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_004066f0();
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != puVar2 + *(int *)(param_1 + 0xc) * 6) {
    do {
      FUN_00918ec0(*puVar2,param_2);
      puVar2 = puVar2 + 6;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091ACF0  FUN_0091acf0  size=252  [run]
void __thiscall FUN_0091acf0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  FUN_004066f0();
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != piVar3 + *(int *)(param_1 + 0xc) * 6) {
    do {
      if (param_2 == 0) {
        iVar1 = *piVar3;
        if ((((byte)*(uint *)(iVar1 + 0x2c) & 0x1f) != 0x1f) &&
           (*(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xffff7fff | 0x1f,
           *(int *)(iVar1 + 8) != 0)) {
          FUN_01194ef0(iVar1,0,1);
        }
      }
      else {
        iVar1 = *piVar3;
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(uint *)(iVar1 + 0xc);
          if (uVar2 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 0x3c);
          }
        }
        *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xffff7fe0 | uVar2 & 0x1f;
        if (*(int *)(iVar1 + 8) != 0) {
          FUN_01194ef0(iVar1,0,1);
        }
        FUN_0118fe70();
      }
      piVar3 = piVar3 + 6;
    } while (piVar3 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar3 = *piVar3 + -1;
    if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091ADF0  FUN_0091adf0  size=132  [run]
void __thiscall FUN_0091adf0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_004066f0();
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != puVar2 + *(int *)(param_1 + 0xc) * 6) {
    do {
      FUN_00917bd0(*puVar2,param_2);
      puVar2 = puVar2 + 6;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091AE80  FUN_0091ae80  size=132  [run]
void __thiscall FUN_0091ae80(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_004066f0();
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != puVar2 + *(int *)(param_1 + 0xc) * 6) {
    do {
      FUN_00917c50(*puVar2,param_2);
      puVar2 = puVar2 + 6;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091AFB0  FUN_0091afb0  size=462  [run]
void __thiscall FUN_0091afb0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  
  FUN_004066f0();
  pvVar6 = ThreadLocalStoragePointer;
  iVar5 = _tls_index;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 != piVar8 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar8;
      if (DAT_01885d68 != 1) {
        iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      if ((iVar2 != 0) && (uVar4 = *(uint *)(iVar2 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 1;
        puVar7[2] = puVar7[2] | param_2;
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar8 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
    *piVar8 = *piVar8 + -1;
    if (((*piVar8 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091B190  FUN_0091b190  size=464  [run]
void __thiscall FUN_0091b190(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  
  FUN_004066f0();
  pvVar6 = ThreadLocalStoragePointer;
  iVar5 = _tls_index;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 != piVar8 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar8;
      if (DAT_01885d68 != 1) {
        iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      if ((iVar2 != 0) && (uVar4 = *(uint *)(iVar2 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 1;
        puVar7[2] = puVar7[2] & ~param_2;
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar8 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
    *piVar8 = *piVar8 + -1;
    if (((*piVar8 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091B370  FUN_0091b370  size=152  [run]
uint __fastcall FUN_0091b370(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  FUN_004066f0();
  piVar3 = *(int **)(param_1 + 8);
  uVar4 = 0;
  if (piVar3 != piVar3 + *(int *)(param_1 + 0xc) * 6) {
    piVar1 = piVar3 + *(int *)(param_1 + 0xc) * 6;
    do {
      uVar2 = 0;
      if (*piVar3 != 0) {
        uVar2 = *(uint *)(*piVar3 + 0xc);
        if (uVar2 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 8);
        }
      }
      piVar3 = piVar3 + 6;
      uVar4 = uVar4 | uVar2;
    } while (piVar3 != piVar1);
  }
  if (DAT_01885d68 != 1) {
    piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar3 = *piVar3 + -1;
    if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return uVar4;
}

// 0091B410  FUN_0091b410  size=463  [run]
void __thiscall FUN_0091b410(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  
  FUN_004066f0();
  pvVar6 = ThreadLocalStoragePointer;
  iVar5 = _tls_index;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 != piVar8 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar8;
      if (DAT_01885d68 != 1) {
        iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      if ((iVar2 != 0) && (uVar4 = *(uint *)(iVar2 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 2;
        puVar7[3] = puVar7[3] | param_2;
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar8 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
    *piVar8 = *piVar8 + -1;
    if (((*piVar8 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091B5F0  FUN_0091b5f0  size=465  [run]
void __thiscall FUN_0091b5f0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  
  FUN_004066f0();
  pvVar6 = ThreadLocalStoragePointer;
  iVar5 = _tls_index;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 != piVar8 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar8;
      if (DAT_01885d68 != 1) {
        iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      if ((iVar2 != 0) && (uVar4 = *(uint *)(iVar2 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 2;
        puVar7[3] = puVar7[3] & ~param_2;
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar8 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
    *piVar8 = *piVar8 + -1;
    if (((*piVar8 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091B870  FUN_0091b870  size=463  [run]
void __thiscall FUN_0091b870(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  
  FUN_004066f0();
  pvVar6 = ThreadLocalStoragePointer;
  iVar5 = _tls_index;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 != piVar8 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar8;
      if (DAT_01885d68 != 1) {
        iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      if ((iVar2 != 0) && (uVar4 = *(uint *)(iVar2 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 4;
        puVar7[4] = puVar7[4] | param_2;
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar8 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
    *piVar8 = *piVar8 + -1;
    if (((*piVar8 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091BA50  FUN_0091ba50  size=465  [run]
void __thiscall FUN_0091ba50(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  
  FUN_004066f0();
  pvVar6 = ThreadLocalStoragePointer;
  iVar5 = _tls_index;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 != piVar8 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar8;
      if (DAT_01885d68 != 1) {
        iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      if ((iVar2 != 0) && (uVar4 = *(uint *)(iVar2 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 4;
        puVar7[4] = puVar7[4] & ~param_2;
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar8 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
    *piVar8 = *piVar8 + -1;
    if (((*piVar8 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091BCD0  FUN_0091bcd0  size=463  [run]
void __thiscall FUN_0091bcd0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  
  FUN_004066f0();
  pvVar6 = ThreadLocalStoragePointer;
  iVar5 = _tls_index;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 != piVar8 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar8;
      if (DAT_01885d68 != 1) {
        iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      if ((iVar2 != 0) && (uVar4 = *(uint *)(iVar2 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 8;
        puVar7[5] = puVar7[5] | param_2;
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar8 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
    *piVar8 = *piVar8 + -1;
    if (((*piVar8 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091BEB0  FUN_0091beb0  size=465  [run]
void __thiscall FUN_0091beb0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  int *piVar8;
  
  FUN_004066f0();
  pvVar6 = ThreadLocalStoragePointer;
  iVar5 = _tls_index;
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 != piVar8 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar8;
      if (DAT_01885d68 != 1) {
        iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      if ((iVar2 != 0) && (uVar4 = *(uint *)(iVar2 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 8;
        puVar7[5] = puVar7[5] & ~param_2;
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)pvVar6 + iVar5 * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar8 = (int *)(*(int *)((int)pvVar6 + iVar5 * 4) + 4);
    *piVar8 = *piVar8 + -1;
    if (((*piVar8 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091C130  FUN_0091c130  size=325  [run]
void __thiscall FUN_0091c130(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = param_1;
  FUN_004066f0();
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 != piVar5 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        uVar6 = *(uint *)(iVar2 + 0xc);
        puVar4 = (uint *)(-(uint)(uVar6 != 0) & uVar6);
        *puVar4 = *puVar4 | 0x80000000;
        puVar4[0x21] = param_2;
        uVar6 = param_2;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar5 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar5 = *piVar5 + -1;
    if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320(uVar6);
    }
  }
  return;
}

// 0091C280  FUN_0091c280  size=351  [run]
void __thiscall FUN_0091c280(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_004066f0();
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != piVar3 + *(int *)(param_1 + 0xc) * 6) {
    do {
      if (*piVar3 != 0) {
        if (DAT_01885d68 != 1) {
          iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
        }
        local_20 = *param_2;
        uStack_1c = param_2[1];
        uStack_18 = param_2[2];
        uStack_14 = param_2[3];
        FUN_0119fea0(&local_20);
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar3 = piVar3 + 6;
    } while (piVar3 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar3 = *piVar3 + -1;
    if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091C3E0  FUN_0091c3e0  size=359  [run]
void __thiscall FUN_0091c3e0(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  
  FUN_004066f0();
  piVar6 = *(int **)(param_1 + 8);
  if (piVar6 != piVar6 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar6;
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        uVar4 = *(uint *)(iVar2 + 0xc);
        puVar5 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        if ((int)param_2 < 0x20) {
          if (param_2 < 0x20) {
            *puVar5 = *puVar5 | 1 << ((byte)param_2 & 0x1f);
          }
        }
        else if (param_2 - 0x20 < 0x20) {
          puVar5[1] = puVar5[1] | 1 << ((byte)(param_2 - 0x20) & 0x1f);
        }
        puVar5[param_2 + 2] = param_3;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar6 = piVar6 + 6;
    } while (piVar6 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091C550  FUN_0091c550  size=367  [run]
void __thiscall FUN_0091c550(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  
  FUN_004066f0();
  piVar6 = *(int **)(param_1 + 8);
  if (piVar6 != piVar6 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar2 = *piVar6;
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        uVar4 = *(uint *)(iVar2 + 0xc);
        puVar5 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        if ((int)param_2 < 0x20) {
          if (param_2 < 0x20) {
            *puVar5 = *puVar5 | 1 << ((byte)param_2 & 0x1f);
          }
        }
        else if (param_2 - 0x20 < 0x20) {
          puVar5[1] = puVar5[1] | 1 << ((byte)(param_2 - 0x20) & 0x1f);
        }
        puVar5[param_2 + 2] = param_3;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
      piVar6 = piVar6 + 6;
    } while (piVar6 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091C6C0  FUN_0091c6c0  size=152  [run]
void __thiscall FUN_0091c6c0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  FUN_004066f0();
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != piVar2 + *(int *)(param_1 + 0xc) * 6) {
    do {
      iVar1 = *piVar2;
      *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) & 0xffffffe0 | param_2 & 0x1f;
      if (*(int *)(iVar1 + 8) != 0) {
        FUN_01194ef0(iVar1,0,1);
      }
      piVar2 = piVar2 + 6;
    } while (piVar2 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar2 = *piVar2 + -1;
    if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091C760  FUN_0091c760  size=132  [run]
void __thiscall FUN_0091c760(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_004066f0();
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != puVar2 + *(int *)(param_1 + 0xc) * 6) {
    do {
      FUN_00918440(*puVar2,param_2);
      puVar2 = puVar2 + 6;
    } while (puVar2 != (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 0091CAF0  FUN_0091caf0  size=342  [run]
void __fastcall FUN_0091caf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  FUN_004066f0();
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 != piVar5 + *(int *)(param_1 + 0xc) * 6) {
    do {
      FUN_0119f5b0(1,1,0);
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        puVar4 = (uint *)(-(uint)(*(uint *)(iVar2 + 0xc) != 0) & *(uint *)(iVar2 + 0xc));
        *puVar4 = *puVar4 | 0x1000;
        puVar4[0xe] = 1;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar5 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar5 = *piVar5 + -1;
    if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 0091CC50  FUN_0091cc50  size=335  [run]
void __fastcall FUN_0091cc50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  FUN_004066f0();
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 != piVar5 + *(int *)(param_1 + 0xc) * 6) {
    do {
      FUN_0119f5b0(5,1,0);
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        if (DAT_01885d68 != 1) {
          iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar3 + 4);
          *piVar1 = *piVar1 + 1;
        }
        puVar4 = (uint *)(-(uint)(*(uint *)(iVar2 + 0xc) != 0) & *(uint *)(iVar2 + 0xc));
        *puVar4 = *puVar4 | 0x1000;
        puVar4[0xe] = 5;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
        if (*(int *)(iVar2 + 8) != 0) {
          FUN_01194ef0(iVar2,0,1);
        }
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar5 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar5 = *piVar5 + -1;
    if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 0091CDA0  FUN_0091cda0  size=610  [run]
void FUN_0091cda0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_108;
  float local_104;
  undefined4 local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_ac;
  float local_a8;
  float local_a0;
  undefined1 auStack_98 [8];
  undefined1 local_90 [64];
  undefined1 auStack_50 [76];
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != -1) {
    iVar4 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) == 0) {
      iVar4 = param_1;
    }
    if ((iVar2 < 0) || (*(short *)(iVar4 + 0x358) <= iVar2)) {
      param_1 = 0;
    }
    else {
      param_1 = iVar2 * 0xb0 + *(int *)(iVar4 + 0x350);
    }
  }
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) & 0xfffb;
  local_c0 = *(undefined4 *)(param_1 + 0x40);
  local_bc = *(undefined4 *)(param_1 + 0x44);
  local_b8 = *(undefined4 *)(param_1 + 0x48);
  local_ac = SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                  *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                  *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18));
  local_a8 = SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                  *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                  *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28));
  fVar3 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
               *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
               *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
  fVar1 = *(float *)(param_1 + 0x28);
  local_108 = *(float *)(param_1 + 0x38) / fVar3;
  fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x18) / fVar3));
  local_104 = (float)fVar5;
  fVar6 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)local_108);
  local_a0 = (float)fVar6;
  fVar7 = (float10)fpatan((float10)*(float *)(param_1 + 0x14) / (float10)local_a8,
                          (float10)*(float *)(param_1 + 0x10) / (float10)local_ac);
  fVar6 = (float10)0;
  local_c8 = (float)fVar6;
  local_cc = (float)fVar6;
  local_d0 = (float)fVar6;
  local_d4 = (float)fVar6;
  local_dc = (float)fVar6;
  local_e0 = (float)fVar6;
  local_e4 = (float)fVar6;
  local_e8 = (float)fVar6;
  local_f0 = (float)fVar6;
  local_f4 = (float)fVar6;
  local_f8 = (float)fVar6;
  local_fc = (float)fVar6;
  local_c4 = 0x3f800000;
  local_d8 = 0x3f800000;
  local_ec = 0x3f800000;
  local_100 = 0x3f800000;
  if (fVar6 != fVar7) {
    D3DXMatrixRotationZ(local_90,(float)fVar7);
    D3DXMatrixMultiply(&local_108,auStack_98,&local_108);
    fVar5 = (float10)local_104;
  }
  if ((float10)0 != fVar5) {
    D3DXMatrixRotationY(local_90,(float)fVar5);
    D3DXMatrixMultiply(&local_108,auStack_98,&local_108);
  }
  if (local_a0 != 0.0) {
    D3DXMatrixRotationX(local_90,local_a0);
    D3DXMatrixMultiply(&local_108,auStack_98,&local_108);
  }
  local_d0 = (float)local_c0;
  local_cc = (float)local_bc;
  local_c8 = (float)local_b8;
  FUN_01005190(&local_100);
  FUN_011a0170(auStack_50);
  return;
}

// 0091D010  FUN_0091d010  size=294  [run]
void FUN_0091d010(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int unaff_EDI;
  int iStack_64;
  undefined4 uStack_60;
  int aiStack_5c [22];
  
  iVar2 = *(int *)(param_2 + 8);
  iVar1 = param_1;
  if (iVar2 != -1) {
    iVar1 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) == 0) {
      iVar1 = param_1;
    }
    if ((iVar2 < 0) || (*(short *)(iVar1 + 0x358) <= iVar2)) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar2 * 0xb0 + *(int *)(iVar1 + 0x350);
    }
  }
  *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
  FUN_01005140(aiStack_5c + 3);
  piVar3 = (int *)(iVar1 + 0x10);
  piVar4 = aiStack_5c + 3;
  piVar5 = piVar3;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  aiStack_5c[2] = param_1 + 0x70;
  FUN_00ddd140(aiStack_5c + 3,aiStack_5c[2]);
  D3DXMatrixMultiply(piVar3,aiStack_5c + 3,piVar3);
  if (*(int *)(iStack_64 + 0x3028) != 0) {
    if (*(int *)(iStack_64 + 0x3024) != -1) {
      param_1 = FUN_00a12210(*(int *)(iStack_64 + 0x3024));
    }
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    FUN_01005140(aiStack_5c);
    piVar4 = (int *)(param_1 + 0x10);
    piVar5 = aiStack_5c;
    piVar3 = piVar4;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_00ddd140(aiStack_5c,uStack_60);
    D3DXMatrixMultiply(piVar4,aiStack_5c,piVar4);
    D3DXMatrixMultiply(piVar4,unaff_EDI + 0x3030,piVar4);
  }
  return;
}

