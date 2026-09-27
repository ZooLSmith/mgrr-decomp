// src/unsorted/unit_00CB3CC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3CC0..00CB3CC0, 1 functions

#include "mgrr.h"

// 00CB3CC0  FUN_00cb3cc0  size=107  [run]
void FUN_00cb3cc0(int param_1,char *param_2)

{
  char cVar1;
  char *_DstBuf;
  int iVar2;
  
  _DstBuf = (char *)(param_1 + 0x34);
  _DstBuf[0] = '\0';
  _DstBuf[1] = '\0';
  _DstBuf[2] = '\0';
  _DstBuf[3] = '\0';
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  _vsprintf_s(_DstBuf,0x20,param_2,&stack0x0000000c);
  do {
    cVar1 = *_DstBuf;
    _DstBuf = _DstBuf + 1;
  } while (cVar1 != '\0');
  iVar2 = (int)_DstBuf - (param_1 + 0x35);
  if ((*(int *)(param_1 + 0xf98) != 0) && (iVar2 < *(int *)(param_1 + 0x58))) {
    FUN_00ca91c0();
  }
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x54) = iVar2;
  return;
}

