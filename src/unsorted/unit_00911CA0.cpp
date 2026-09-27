// src/unsorted/unit_00911CA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00911CA0..00913ED0, 57 functions

#include "types.h"

// 00911CA0  FUN_00911ca0  size=17  [run]
void __fastcall FUN_00911ca0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_01006780();
    return;
  }
  return;
}

// 00911CC0  FUN_00911cc0  size=20  [run]
bool __fastcall FUN_00911cc0(int *param_1)

{
  if (*param_1 != 0) {
    return *(int *)(*param_1 + 8) != 0;
  }
  return false;
}

// 00911CE0  FUN_00911ce0  size=41  [run]
void __thiscall FUN_00911ce0(int *param_1,int param_2)

{
  if ((*param_1 != 0) && (*(int *)(*param_1 + 8) != 0)) {
    if (param_2 != 0) {
      FUN_0118fe70();
      return;
    }
    FUN_0118fb50();
  }
  return;
}

// 00911D10  FUN_00911d10  size=175  [run]
undefined4 * __thiscall FUN_00911d10(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_14;
  
  if (*param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = local_14;
    return param_2;
  }
  FUN_00860de0();
  bVar6 = DAT_01885d68 != 1;
  iVar5 = *param_1;
  uVar2 = *(undefined4 *)(iVar5 + 0x124);
  uVar3 = *(undefined4 *)(iVar5 + 0x128);
  uVar4 = *(undefined4 *)(iVar5 + 300);
  *param_2 = *(undefined4 *)(iVar5 + 0x120);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  if ((bVar6) &&
     (iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar5 + 4) == 0))
  {
    piVar1 = (int *)(iVar5 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return param_2;
}

// 00911DC0  FUN_00911dc0  size=131  [run]
void __thiscall FUN_00911dc0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_00860de0();
    iVar2 = *param_1;
    *param_2 = *(undefined4 *)(iVar2 + 0x120);
    param_2[1] = *(undefined4 *)(iVar2 + 0x124);
    param_2[2] = *(undefined4 *)(iVar2 + 0x128);
    param_2[3] = *(undefined4 *)(iVar2 + 300);
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

// 00911E50  FUN_00911e50  size=113  [run]
void __thiscall FUN_00911e50(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_00860de0();
    FUN_00ddd760(param_2,*param_1 + 0x160,5);
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

// 00911ED0  FUN_00911ed0  size=131  [run]
void __thiscall FUN_00911ed0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_00860de0();
    iVar2 = *param_1;
    *param_2 = *(undefined4 *)(iVar2 + 0x160);
    param_2[1] = *(undefined4 *)(iVar2 + 0x164);
    param_2[2] = *(undefined4 *)(iVar2 + 0x168);
    param_2[3] = *(undefined4 *)(iVar2 + 0x16c);
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

// 00911F60  FUN_00911f60  size=114  [run]
void __thiscall FUN_00911f60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_00860de0();
    FUN_00911dc0(param_2);
    FUN_00911e50(param_3);
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

// 00911FE0  FUN_00911fe0  size=114  [run]
void __thiscall FUN_00911fe0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_00860de0();
    FUN_00911dc0(param_2);
    FUN_00911ed0(param_3);
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

// 00912060  FUN_00912060  size=145  [run]
void __thiscall FUN_00912060(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*param_1 != 0) {
    local_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = 0;
    FUN_004066f0();
    FUN_011a00e0(&local_20);
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

// 00912100  FUN_00912100  size=62  [run]
void FUN_00912100(undefined4 *param_1)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_1;
  uStack_1c = param_1[1];
  uStack_18 = param_1[2];
  uStack_14 = param_1[3];
  FUN_011a00e0(&local_20);
  return;
}

// 00912140  FUN_00912140  size=122  [run]
void __thiscall FUN_00912140(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 local_20 [28];
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_00ddb590(local_20,param_2);
    FUN_011a0110(local_20);
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

// 009121C0  FUN_009121c0  size=94  [run]
void __thiscall FUN_009121c0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_011a0110(param_2);
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

// 00912220  FUN_00912220  size=105  [run]
void __thiscall FUN_00912220(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_00912060(param_2);
    FUN_00912140(param_3);
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

// 00912290  FUN_00912290  size=98  [run]
void __thiscall FUN_00912290(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_011a0140(param_2,param_3);
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

// 00912300  FUN_00912300  size=157  [run]
void __thiscall FUN_00912300(int *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  float local_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    iVar2 = *param_1;
    uStack_14 = *(undefined4 *)(iVar2 + 300);
    local_20 = *param_2 + *(float *)(iVar2 + 0x120);
    fStack_1c = param_2[1] + *(float *)(iVar2 + 0x124);
    fStack_18 = param_2[2] + *(float *)(iVar2 + 0x128);
    FUN_011a00e0(&local_20);
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

// 00912480  FUN_00912480  size=22  [run]
void FUN_00912480(void)

{
  FUN_0119fef0();
  return;
}

// 009124A0  FUN_009124a0  size=16  [run]
uint __fastcall FUN_009124a0(int *param_1)

{
  if (*param_1 != 0) {
    return *(uint *)(*param_1 + 0x78) & 0xfffffffe;
  }
  return 0;
}

// 009124B0  FUN_009124b0  size=3  [run]
undefined4 FUN_009124b0(void)

{
  return 0;
}

// 009124C0  FUN_009124c0  size=98  [run]
void __fastcall FUN_009124c0(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_0119f5b0(1,1,0);
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

// 00912530  FUN_00912530  size=124  [run]
void __thiscall FUN_00912530(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_004066f0();
  if (((*param_1 == 0) || (uVar2 = *(uint *)(*param_1 + 0xc), uVar2 == 0)) ||
     (*(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x38) != 5)) {
    FUN_0119f5b0(param_2,1,0);
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

// 00912660  FUN_00912660  size=22  [run]
void __thiscall FUN_00912660(int param_1,undefined4 *param_2,int param_3)

{
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 8) + param_3 * 0x18);
  return;
}

// 00912680  FUN_00912680  size=34  [run]
undefined4 __thiscall FUN_00912680(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x181c) <= param_2) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x1818) + 8 + param_2 * 0x18);
}

// 009126E0  FUN_009126e0  size=129  [run]
void __fastcall FUN_009126e0(int param_1)

{
  int *piVar1;
  
  FUN_004066f0();
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != piVar1 + *(int *)(param_1 + 0xc) * 6) {
    do {
      if (*piVar1 != 0) {
        FUN_0118fe70();
      }
      piVar1 = piVar1 + 6;
    } while (piVar1 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 00912800  FUN_00912800  size=131  [run]
void __thiscall FUN_00912800(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_004066f0();
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0xc) * 0x18) {
    do {
      FUN_0119fef0(param_2 != 0);
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18);
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

// 00912890  FUN_00912890  size=153  [run]
void __fastcall FUN_00912890(int param_1)

{
  int *piVar1;
  
  FUN_004066f0();
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != piVar1 + *(int *)(param_1 + 0xc) * 6) {
    do {
      if (*(int *)(*piVar1 + 8) == 0) {
        FUN_011929d0(*piVar1,1);
        FUN_0118fe70();
        FUN_010060a0();
      }
      piVar1 = piVar1 + 6;
    } while (piVar1 != (int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 0x18));
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

// 00912930  FUN_00912930  size=109  [run]
undefined4 FUN_00912930(long *param_1,undefined4 param_2,char *param_3,rsize_t param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char local_20 [32];
  
  iVar3 = FUN_00fdbbd0(param_2,param_3);
  if (iVar3 != 0) {
    pcVar1 = param_3 + 1;
    do {
      cVar2 = *param_3;
      param_3 = param_3 + 1;
    } while (cVar2 != '\0');
    _strncpy_s(local_20,0x20,param_3 + (iVar3 - (int)pcVar1),param_4);
    local_20[param_4] = '\0';
    lVar4 = _strtol(local_20,(char **)0x0,param_5);
    *param_1 = lVar4;
    return 1;
  }
  return 0;
}

// 009129A0  FUN_009129a0  size=89  [run]
uint FUN_009129a0(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = param_4;
  uVar2 = param_3;
  uVar1 = param_2;
  iVar4 = FUN_00912930(&param_2,param_1,param_3,3,param_4);
  if (iVar4 != 0) {
    return param_2 & 0xffff;
  }
  iVar4 = FUN_00912930(&param_2,param_1,uVar2,2,uVar3);
  if (iVar4 == 0) {
    param_2 = uVar1;
  }
  return param_2;
}

// 00912A30  FUN_00912a30  size=34  [run]
uint FUN_00912a30(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0xc), uVar1 != 0)) {
    return *(uint *)((-(uint)(uVar1 != 0) & uVar1) + 8) & param_2;
  }
  return 0;
}

// 00912A60  FUN_00912a60  size=34  [run]
uint FUN_00912a60(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0xc), uVar1 != 0)) {
    return *(uint *)((-(uint)(uVar1 != 0) & uVar1) + 0xc) & param_2;
  }
  return 0;
}

// 00912A90  FUN_00912a90  size=34  [run]
uint FUN_00912a90(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0xc), uVar1 != 0)) {
    return *(uint *)((-(uint)(uVar1 != 0) & uVar1) + 0x10) & param_2;
  }
  return 0;
}

// 00912AC0  FUN_00912ac0  size=34  [run]
uint FUN_00912ac0(int param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0xc), uVar1 != 0)) {
    return *(uint *)((-(uint)(uVar1 != 0) & uVar1) + 0x14) & param_2;
  }
  return 0;
}

// 00912B40  FUN_00912b40  size=40  [run]
bool FUN_00912b40(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x78) & 0xfffffffe, uVar1 != 0)) {
    iVar2 = FUN_00fdbbd0(uVar1,param_2);
    return iVar2 != 0;
  }
  return false;
}

// 00912B70  FUN_00912b70  size=118  [run]
undefined4 FUN_00912b70(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((param_1 == 0) || (uVar2 = *(uint *)(param_1 + 0x78) & 0xfffffffe, uVar2 == 0)) {
    return 0;
  }
  pcVar3 = (char *)FUN_00fdbbd0(uVar2,param_2);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar5 - (int)(param_2 + 1)) < (uint)((int)pcVar4 - (int)(pcVar3 + 1))) {
    pcVar4 = param_2 + 1;
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    if (('/' < pcVar3[(int)param_2 - (int)pcVar4]) && (pcVar3[(int)param_2 - (int)pcVar4] < ':')) {
      return 1;
    }
  }
  return 0;
}

// 00912BF0  FUN_00912bf0  size=79  [run]
bool FUN_00912bf0(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (pcVar1 = (char *)(*(uint *)(param_1 + 0x78) & 0xfffffffe), pcVar1 != (char *)0x0)) {
    pcVar1 = _strrchr(pcVar1,0x2e);
    if (pcVar1 != (char *)0x0) {
      iVar2 = FUN_00e03ea0(pcVar1 + 1);
      return iVar2 == param_2;
    }
    iVar2 = FUN_00e03ea0(0);
    return iVar2 == param_2;
  }
  return false;
}

// 00912C40  FUN_00912c40  size=92  [run]
undefined4 FUN_00912c40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x78) & 0xfffffffe;
  if (uVar3 != 0) {
    iVar1 = FUN_00fdbbd0(uVar3,&DAT_0164cd24);
    if (iVar1 == 0) {
      iVar1 = FUN_00fdbbd0(uVar3,&DAT_0164cd1c);
      if (iVar1 == 0) {
        iVar1 = FUN_00fdbbd0(uVar3,&DAT_0164cd18);
        if (iVar1 == 0) {
          uVar2 = FUN_009129a0(uVar3,0xffffffff,&DAT_0164cd14,0x10);
          return uVar2;
        }
      }
    }
  }
  return 0xffffffff;
}

// 00912D80  FUN_00912d80  size=29  [run]
void FUN_00912d80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_01194ef0(param_1,0,1);
  }
  return;
}

// 00912DD0  FUN_00912dd0  size=153  [run]
void FUN_00912dd0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    FUN_004066f0();
    if (((byte)*(uint *)(param_1 + 0x2c) & 0x1f) == 0x1f) {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffff7fff | 0x1f;
      if (*(int *)(param_1 + 8) != 0) {
        FUN_01194ef0(param_1,0,1);
      }
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 00912EA0  FUN_00912ea0  size=101  [run]
bool FUN_00912ea0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return false;
  }
  FUN_004066f0();
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return ((byte)uVar2 & 0x1f) != 0x1f;
}

// 00912F30  FUN_00912f30  size=107  [run]
bool FUN_00912f30(int param_1)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return false;
  }
  FUN_004066f0();
  pcVar3 = (char *)FUN_0118fae0(&param_1);
  cVar2 = *pcVar3;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return cVar2 != '\0';
}

// 00913100  FUN_00913100  size=110  [run]
void FUN_00913100(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    if ((*(int *)(param_1 + 0x2c) != param_2) &&
       (*(int *)(param_1 + 0x2c) = param_2, *(int *)(param_1 + 8) != 0)) {
      FUN_01194ef0(param_1,0,1);
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

// 00913180  FUN_00913180  size=98  [run]
void FUN_00913180(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    if (*(int *)(param_1 + 8) != 0) {
      FUN_01194ef0(param_1,0,1);
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

// 00913410  FUN_00913410  size=106  [run]
void FUN_00913410(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    param_1 = param_2;
    FUN_0100b3c0(&param_1);
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

// 009134A0  FUN_009134a0  size=106  [run]
void FUN_009134a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    param_1 = param_2;
    FUN_0100b3c0(&param_1);
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

// 00913530  FUN_00913530  size=112  [run]
float10 FUN_00913530(int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  FUN_00860de0();
  sVar2 = *(short *)(param_1 + 0x194);
  if ((DAT_01885d68 != 1) &&
     (iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar3 + 4) == 0))
  {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return (float10)(float)((int)sVar2 << 0x10);
}

// 009135A0  FUN_009135a0  size=104  [run]
void FUN_009135a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    *(short *)(param_1 + 0x194) = (short)((uint)param_2 >> 0x10);
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

// 009136A0  FUN_009136a0  size=104  [run]
void FUN_009136a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    *(short *)(param_1 + 0x196) = (short)((uint)param_2 >> 0x10);
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

// 00913830  FUN_00913830  size=85  [run]
void FUN_00913830(int param_1,float *param_2)

{
  if (((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) {
    FUN_0118fe70();
    (**(code **)(*(int *)(param_1 + 0xe0) + 0x50))(param_2);
  }
  return;
}

// 00913890  FUN_00913890  size=85  [run]
void FUN_00913890(int param_1,float *param_2)

{
  if (((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) {
    FUN_0118fe70();
    (**(code **)(*(int *)(param_1 + 0xe0) + 0x58))(param_2);
  }
  return;
}

// 009138F0  FUN_009138f0  size=90  [run]
void FUN_009138f0(int param_1,float *param_2,undefined4 param_3)

{
  if (((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) {
    FUN_0118fe70();
    (**(code **)(*(int *)(param_1 + 0xe0) + 0x54))(param_2,param_3);
  }
  return;
}

// 00913AF0  FUN_00913af0  size=112  [run]
float10 FUN_00913af0(int param_1)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  FUN_00860de0();
  fVar3 = (float10)FUN_011a2a30();
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    piVar1 = (int *)(iVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return (float10)(float)fVar3;
}

// 00913B60  FUN_00913b60  size=61  [run]
void FUN_00913b60(undefined4 param_1,undefined4 *param_2)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  FUN_0119fea0(&local_20);
  return;
}

// 00913C30  FUN_00913c30  size=129  [run]
void FUN_00913c30(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    FUN_00860de0();
    *param_2 = *(undefined4 *)(param_1 + 0x140);
    param_2[1] = *(undefined4 *)(param_1 + 0x144);
    param_2[2] = *(undefined4 *)(param_1 + 0x148);
    param_2[3] = *(undefined4 *)(param_1 + 0x14c);
    if ((DAT_01885d68 != 1) &&
       (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0)
       ) {
      piVar1 = (int *)(iVar2 + 8);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
        FUN_00dd7300();
        return;
      }
    }
  }
  return;
}

// 00913CE0  FUN_00913ce0  size=111  [run]
undefined4 FUN_00913ce0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_00860de0();
  FUN_0119fa20(param_2);
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    piVar1 = (int *)(iVar2 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return 1;
}

// 00913D50  FUN_00913d50  size=259  [run]
undefined4 FUN_00913d50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  if (param_1 == 0) {
    if ((DAT_01885d68 != 1) && (iVar3 = *(int *)((int)pvVar4 + iVar3 * 4), *(int *)(iVar3 + 4) == 0)
       ) {
      piVar1 = (int *)(iVar3 + 8);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
        FUN_00dd7300();
      }
    }
    return 0;
  }
  FUN_0118f7b0();
  FUN_0119fa20(local_e0);
  if ((DAT_01885d68 != 1) && (iVar3 = *(int *)((int)pvVar4 + iVar3 * 4), *(int *)(iVar3 + 4) == 0))
  {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return local_dc;
}

// 00913E60  FUN_00913e60  size=102  [run]
float10 FUN_00913e60(void)

{
  float local_130 [4];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  undefined4 local_50;
  
  FUN_0118f7b0();
  FUN_0119fa20(local_e0);
  local_130[0] = 0.0;
  local_130[1] = 0.0;
  local_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  local_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  FUN_01272980(local_dc,local_50,local_130);
  return (float10)local_130[0];
}

// 00913ED0  FUN_00913ed0  size=94  [run]
void FUN_00913ed0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    FUN_011a0170(param_2);
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

