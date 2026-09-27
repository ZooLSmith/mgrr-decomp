// src/unsorted/unit_00A73340.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A73340..00A73340, 1 functions

#include "types.h"

// 00A73340  FUN_00a73340  size=109  [run]
void __fastcall FUN_00a73340(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)(param_1 + 4);
  iVar2 = 0xff;
  do {
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined4 *)(puVar1 + 8) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 0x26) = 0;
    *(undefined4 *)(puVar1 + 0x28) = 0;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    puVar1 = puVar1 + 0x36;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}

