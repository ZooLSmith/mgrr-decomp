// src/unsorted/unit_00E21150.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E21150..00E22A70, 35 functions

#include "mgrr.h"

// 00E21150  FUN_00e21150  size=94  [run]
void __thiscall FUN_00e21150(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffU - param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 2) < uVar1 + param_2) {
    FUN_00e207e0();
    return;
  }
  return;
}

// 00E211B0  FUN_00e211b0  size=94  [run]
void __thiscall FUN_00e211b0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffU - param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 2) < uVar1 + param_2) {
    FUN_00e208d0();
    return;
  }
  return;
}

// 00E21260  FUN_00e21260  size=94  [run]
void __thiscall FUN_00e21260(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if (0x3fffffffU - param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 2) < uVar1 + param_2) {
    FUN_00e209c0();
    return;
  }
  return;
}

// 00E212C0  FUN_00e212c0  size=36  [run]
void FUN_00e212c0(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00e1e780(param_3);
  }
  return;
}

// 00E21330  FUN_00e21330  size=121  [run]
int FUN_00e21330(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_014a79b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00e212c0(param_4,param_3,param_1);
    param_3 = param_3 + 0x1c;
  }
  ExceptionList = local_10;
  return param_3;
}

// 00E213A9  Catch@00e213a9  size=39  [run]
void Catch_00e213a9(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (iVar3 != iVar1) {
    uVar2 = *(undefined4 *)(unaff_EBP + 0x14);
    do {
      FUN_00e1e810(uVar2,iVar3);
      iVar3 = iVar3 + 0x1c;
    } while (iVar3 != iVar1);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E213E0  FUN_00e213e0  size=67  [run]
int * __thiscall FUN_00e213e0(int *param_1,byte param_2)

{
  if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E21430  FUN_00e21430  size=97  [run]
void __thiscall FUN_00e21430(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined4 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e21150(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + ((int)param_2 - (int)puVar2 >> 2) * 4);
      param_1[1] = param_1[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e21150(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}

// 00E214A0  FUN_00e214a0  size=97  [run]
void __thiscall FUN_00e214a0(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined4 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e211b0(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + ((int)param_2 - (int)puVar2 >> 2) * 4);
      param_1[1] = param_1[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e211b0(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}

// 00E21510  FUN_00e21510  size=97  [run]
void __thiscall FUN_00e21510(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined4 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e21260(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + ((int)param_2 - (int)puVar2 >> 2) * 4);
      param_1[1] = param_1[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e21260(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}

// 00E215C0  FUN_00e215c0  size=72  [run]
void __fastcall FUN_00e215c0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00e1fad0(*param_1,param_1[1],param_1 + 3,param_1);
    if (DAT_01b7b790 != (code *)0x0) {
      (*DAT_01b7b790)(*param_1);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E216A0  FUN_00e216a0  size=97  [run]
void __thiscall FUN_00e216a0(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined4 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e21150(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + ((int)param_2 - (int)puVar2 >> 2) * 4);
      param_1[1] = param_1[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e21150(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}

// 00E21710  FUN_00e21710  size=97  [run]
void __thiscall FUN_00e21710(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined4 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e211b0(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + ((int)param_2 - (int)puVar2 >> 2) * 4);
      param_1[1] = param_1[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e211b0(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}

// 00E217C0  FUN_00e217c0  size=97  [run]
void __thiscall FUN_00e217c0(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if ((param_2 < puVar1) && (puVar2 = (undefined4 *)*param_1, puVar2 <= param_2)) {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e21260(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *(undefined4 *)(*param_1 + ((int)param_2 - (int)puVar2 >> 2) * 4);
      param_1[1] = param_1[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)param_1[2]) {
      FUN_00e21260(1);
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = *param_2;
    }
  }
  param_1[1] = param_1[1] + 4;
  return;
}

// 00E21AC0  FUN_00e21ac0  size=19  [run]
void FUN_00e21ac0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_00e20b00(param_3);
  }
  return;
}

// 00E21B10  FUN_00e21b10  size=37  [run]
void __thiscall FUN_00e21b10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00e21330(param_2,param_3,param_4,param_1 + 0xc,0,param_4);
  return;
}

// 00E21D90  FUN_00e21d90  size=290  [run]
void __thiscall FUN_00e21d90(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a79d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x9249249 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error("vector<T> too long");
  }
  if ((uint)((param_1[2] - *param_1) / 0x1c) < param_2) {
    if (DAT_01b7b794 == (code *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = (*DAT_01b7b794)(param_2 * 0x1c);
    }
    local_8 = 0;
    FUN_00e21b10(*param_1,param_1[1],local_18);
    local_8 = 0xffffffff;
    iVar1 = param_1[1];
    iVar2 = *param_1;
    if (iVar2 != 0) {
      FUN_00e1fad0(iVar2,param_1[1],param_1 + 3,param_2);
      if (DAT_01b7b790 != (code *)0x0) {
        (*DAT_01b7b790)(*param_1);
      }
    }
    param_1[2] = local_18 + param_2 * 0x1c;
    param_1[1] = local_18 + ((iVar1 - iVar2) / 0x1c) * 0x1c;
    *param_1 = local_18;
  }
  ExceptionList = local_10;
  return;
}

// 00E21EB2  Catch@00e21eb2  size=27  [run]
void Catch_00e21eb2(void)

{
  int unaff_EBP;
  
  if (DAT_01b7b790 != (code *)0x0) {
    (*DAT_01b7b790)(*(undefined4 *)(unaff_EBP + -0x14));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E21ED0  FUN_00e21ed0  size=49  [run]
void FUN_00e21ed0(undefined4 param_1,int *param_2)

{
  if ((*param_2 != 0) && (DAT_01b7b790 != (code *)0x0)) {
    (*DAT_01b7b790)(*param_2);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

// 00E21F10  FUN_00e21f10  size=121  [run]
int FUN_00e21f10(int param_1,int param_2,int param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_014a79f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_00e21ac0(param_4,param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  ExceptionList = local_10;
  return param_3;
}

// 00E21F89  Catch@00e21f89  size=39  [run]
void Catch_00e21f89(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int iVar3;
  
  iVar3 = *(int *)(unaff_EBP + -0x14);
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (iVar3 != iVar1) {
    uVar2 = *(undefined4 *)(unaff_EBP + 0x14);
    do {
      FUN_00e21ed0(uVar2,iVar3);
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != iVar1);
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E22080  FUN_00e22080  size=129  [run]
void __thiscall FUN_00e22080(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1[1] - *param_1) / 0x1c;
  if (0x9249249U - param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error("vector<T> too long");
  }
  if ((uint)((param_1[2] - *param_1) / 0x1c) < uVar1 + param_2) {
    FUN_00e21d90();
    return;
  }
  return;
}

// 00E22110  FUN_00e22110  size=58  [run]
void FUN_00e22110(int *param_1,int *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if ((*param_1 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(*param_1);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

// 00E22180  FUN_00e22180  size=141  [run]
void __thiscall FUN_00e22180(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  uVar1 = param_1[1];
  if ((param_2 < uVar1) && (uVar2 = *param_1, uVar2 <= param_2)) {
    if (uVar1 == param_1[2]) {
      FUN_00e22080(1);
    }
    param_2 = *param_1 + ((int)(param_2 - uVar2) / 0x1c) * 0x1c;
    puVar3 = (undefined1 *)param_1[1];
  }
  else {
    if (uVar1 == param_1[2]) {
      FUN_00e22080(1);
    }
    puVar3 = (undefined1 *)param_1[1];
  }
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar3 + 0x14) = 0xf;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *puVar3 = 0;
    FUN_00e1b3f0(param_2,0,0xffffffff);
  }
  param_1[1] = param_1[1] + 0x1c;
  return;
}

// 00E22380  FUN_00e22380  size=37  [run]
void __thiscall FUN_00e22380(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00e21f10(param_2,param_3,param_4,param_1 + 0xc,0,param_4);
  return;
}

// 00E223B0  FUN_00e223b0  size=136  [run]
void __fastcall FUN_00e223b0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_10 [4];
  
  piVar1 = param_1 + 0xf;
  *param_1 = 0;
  FUN_00e1e550(piVar1);
  piVar2 = param_1 + 0x13;
  FUN_00e20630(piVar2);
  FUN_00e20680(param_1 + 1);
  FUN_00e20680(param_1 + 8);
  if (local_10 != piVar1) {
    iVar3 = *piVar1;
    *piVar1 = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if ((iVar3 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar3);
    }
  }
  if (local_10 != piVar2) {
    iVar3 = *piVar2;
    *piVar2 = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    if ((iVar3 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar3);
    }
  }
  return;
}

// 00E224F0  FUN_00e224f0  size=230  [run]
void __thiscall FUN_00e224f0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_014a7a10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xfffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 4) < param_2) {
    if (DAT_01b7b794 == (code *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*DAT_01b7b794)(param_2 << 4);
    }
    local_8 = 0;
    FUN_00e22380(*param_1,param_1[1],iVar3);
    local_8 = 0xffffffff;
    iVar1 = param_1[1];
    iVar2 = *param_1;
    if (iVar2 != 0) {
      FUN_00e22110(iVar2,iVar1,param_1 + 3,param_2);
      if (DAT_01b7b790 != (code *)0x0) {
        (*DAT_01b7b790)(*param_1);
      }
    }
    param_1[2] = param_2 * 0x10 + iVar3;
    param_1[1] = (iVar1 - iVar2 & 0xfffffff0U) + iVar3;
    *param_1 = iVar3;
  }
  ExceptionList = local_10;
  return;
}

// 00E225D6  Catch@00e225d6  size=27  [run]
void Catch_00e225d6(void)

{
  int unaff_EBP;
  
  if (DAT_01b7b790 != (code *)0x0) {
    (*DAT_01b7b790)(*(undefined4 *)(unaff_EBP + -0x14));
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

// 00E22600  FUN_00e22600  size=72  [run]
void __fastcall FUN_00e22600(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00e22110(*param_1,param_1[1],param_1 + 3,param_1);
    if (DAT_01b7b790 != (code *)0x0) {
      (*DAT_01b7b790)(*param_1);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E22650  FUN_00e22650  size=60  [run]
undefined4 * __thiscall FUN_00e22650(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_1 != param_2) {
    FUN_00e215c0();
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}

// 00E226F0  FUN_00e226f0  size=94  [run]
void __thiscall FUN_00e226f0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 4;
  if (0xfffffffU - param_2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::length_error::length_error("vector<T> too long");
  }
  if ((uint)(param_1[2] - *param_1 >> 4) < uVar1 + param_2) {
    FUN_00e224f0();
    return;
  }
  return;
}

// 00E22750  FUN_00e22750  size=100  [run]
void __thiscall FUN_00e22750(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  if ((param_2 < uVar1) && (uVar2 = *param_1, uVar2 <= param_2)) {
    if (uVar1 == param_1[2]) {
      FUN_00e226f0(1);
    }
    if (param_1[1] != 0) {
      FUN_00e20b00((param_2 - uVar2 & 0xfffffff0) + *param_1);
      param_1[1] = param_1[1] + 0x10;
      return;
    }
  }
  else {
    if (uVar1 == param_1[2]) {
      FUN_00e226f0(1);
    }
    if (param_1[1] != 0) {
      FUN_00e20b00(param_2);
    }
  }
  param_1[1] = param_1[1] + 0x10;
  return;
}

// 00E22850  FUN_00e22850  size=100  [run]
void __thiscall FUN_00e22850(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  if ((param_2 < uVar1) && (uVar2 = *param_1, uVar2 <= param_2)) {
    if (uVar1 == param_1[2]) {
      FUN_00e226f0(1);
    }
    if (param_1[1] != 0) {
      FUN_00e20b00((param_2 - uVar2 & 0xfffffff0) + *param_1);
      param_1[1] = param_1[1] + 0x10;
      return;
    }
  }
  else {
    if (uVar1 == param_1[2]) {
      FUN_00e226f0(1);
    }
    if (param_1[1] != 0) {
      FUN_00e20b00(param_2);
    }
  }
  param_1[1] = param_1[1] + 0x10;
  return;
}

// 00E22950  FUN_00e22950  size=60  [run]
undefined4 * __thiscall FUN_00e22950(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_1 != param_2) {
    FUN_00e22600();
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}

// 00E22A70  FUN_00e22a70  size=272  [run]
void __fastcall FUN_00e22a70(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14;
  int local_10 [3];
  undefined1 local_4 [4];
  
  piVar1 = (int *)(param_1 + 0x60);
  if (local_10 != piVar1) {
    iVar2 = *piVar1;
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if ((iVar2 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar2);
    }
  }
  piVar1 = (int *)(param_1 + 0x70);
  if (local_10 != piVar1) {
    iVar2 = *piVar1;
    *piVar1 = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (iVar2 != 0) {
      FUN_00e22110(iVar2,uVar3,local_4,local_14);
      if (DAT_01b7b790 != (code *)0x0) {
        (*DAT_01b7b790)(iVar2);
      }
    }
  }
  piVar1 = (int *)(param_1 + 0x80);
  if (local_10 != piVar1) {
    iVar2 = *piVar1;
    *piVar1 = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (iVar2 != 0) {
      FUN_00e1fad0(iVar2,uVar3,local_4,local_14);
      if (DAT_01b7b790 != (code *)0x0) {
        (*DAT_01b7b790)(iVar2);
      }
    }
  }
  piVar1 = (int *)(param_1 + 0x90);
  if (local_10 != piVar1) {
    iVar2 = *piVar1;
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((iVar2 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar2);
    }
  }
  piVar1 = (int *)(param_1 + 0xa4);
  if (local_10 != piVar1) {
    iVar2 = *piVar1;
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    if ((iVar2 != 0) && (DAT_01b7b790 != (code *)0x0)) {
      (*DAT_01b7b790)(iVar2);
    }
  }
  return;
}

