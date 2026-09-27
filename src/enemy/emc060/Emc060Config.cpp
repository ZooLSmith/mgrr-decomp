// src/enemy/emc060/Emc060Config.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 007837A0..007837A0, 1 functions

#include "types.h"

// 007837A0  Emc060Config::initializeBattleParameterConfig  size=1849  [class]
void __fastcall Emc060Config::initializeBattleParameterConfig(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 *puVar6;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x7c);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x7d);
  if ((iVar2 != 1) || (iVar3 != 9999)) {
    FUN_00dd5650(&DAT_01647c60);
  }
  uVar4 = FUN_00ac8660(0,0x39);
  *(undefined4 *)(param_1 + 0x19cc) = uVar4;
  uVar4 = FUN_00ac8660(0,0x31);
  *(undefined4 *)(param_1 + 0x19d0) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x32);
  *(float *)(param_1 + 0x19d4) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x35);
  *(undefined4 *)(param_1 + 0x19d8) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x36);
  *(float *)(param_1 + 0x19dc) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x25);
  *(undefined4 *)(param_1 + 0x19e0) = uVar4;
  uVar4 = FUN_00ac8660(0,0x2b);
  *(undefined4 *)(param_1 + 0x19f0) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x2c);
  *(float *)(param_1 + 0x19f8) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x3c);
  *(undefined4 *)(param_1 + 0x1a00) = uVar4;
  uVar4 = FUN_00ac8660(0,0x3d);
  *(undefined4 *)(param_1 + 0x1a10) = uVar4;
  uVar4 = FUN_00ac8660(0,0x3e);
  *(undefined4 *)(param_1 + 0x1a20) = uVar4;
  uVar4 = FUN_00ac8660(0,0x3f);
  *(undefined4 *)(param_1 + 0x1a30) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x4e);
  *(float *)(param_1 + 0x1a40) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x4f);
  *(float *)(param_1 + 0x1a48) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(0,0x50);
  *(float *)(param_1 + 0x1a50) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(0,0x51);
  *(float *)(param_1 + 0x1a58) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x59);
  *(undefined4 *)(param_1 + 0x1a68) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x58);
  *(float *)(param_1 + 0x1a60) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x5e);
  *(float *)(param_1 + 0x1a70) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x5f);
  *(float *)(param_1 + 0x1a78) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,100);
  *(float *)(param_1 + 0x1a80) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x68);
  *(float *)(param_1 + 0x1a88) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x69);
  *(float *)(param_1 + 0x1a90) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x6a);
  *(float *)(param_1 + 0x1a98) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x70);
  *(float *)(param_1 + 0x1aa0) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x74);
  *(float *)(param_1 + 0x1aa8) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x78);
  *(float *)(param_1 + 0x1ab0) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x26);
  *(float *)(param_1 + 0x19e8) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x2c);
  *(float *)(param_1 + 0x19f8) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x44);
  *(float *)(param_1 + 0x1a08) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x45);
  *(float *)(param_1 + 0x1a18) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x46);
  *(float *)(param_1 + 0x1a28) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x47);
  *(float *)(param_1 + 0x1a38) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x27);
  *(undefined4 *)(param_1 + 0x19e4) = uVar4;
  uVar4 = FUN_00ac8660(0,0x2d);
  *(undefined4 *)(param_1 + 0x19f4) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x2e);
  *(float *)(param_1 + 0x19fc) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x40);
  *(undefined4 *)(param_1 + 0x1a04) = uVar4;
  uVar4 = FUN_00ac8660(0,0x41);
  *(undefined4 *)(param_1 + 0x1a14) = uVar4;
  uVar4 = FUN_00ac8660(0,0x42);
  *(undefined4 *)(param_1 + 0x1a24) = uVar4;
  uVar4 = FUN_00ac8660(0,0x3f);
  *(undefined4 *)(param_1 + 0x1a34) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x52);
  *(float *)(param_1 + 0x1a44) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x53);
  *(float *)(param_1 + 0x1a4c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(0,0x54);
  *(float *)(param_1 + 0x1a54) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(0,0x55);
  *(float *)(param_1 + 0x1a5c) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x5b);
  *(undefined4 *)(param_1 + 0x1a6c) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x5a);
  *(float *)(param_1 + 0x1a64) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x60);
  *(float *)(param_1 + 0x1a74) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x61);
  *(float *)(param_1 + 0x1a7c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x65);
  *(float *)(param_1 + 0x1a84) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x6b);
  *(float *)(param_1 + 0x1a8c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x6c);
  *(float *)(param_1 + 0x1a94) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x6d);
  *(float *)(param_1 + 0x1a9c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x71);
  *(float *)(param_1 + 0x1aa4) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x75);
  *(float *)(param_1 + 0x1aac) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x79);
  *(float *)(param_1 + 0x1ab4) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x28);
  *(float *)(param_1 + 0x19ec) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x2e);
  *(float *)(param_1 + 0x19fc) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x48);
  *(float *)(param_1 + 0x1a0c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x49);
  *(float *)(param_1 + 0x1a1c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x4a);
  *(float *)(param_1 + 0x1a2c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x4b);
  *(float *)(param_1 + 0x1a3c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x85);
  *(float *)(param_1 + 0x1ac0) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x86);
  *(float *)(param_1 + 0x1ac4) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x83);
  *(float *)(param_1 + 0x1ab8) = (float)(fVar5 * (float10)60.0);
  fVar5 = (float10)FUN_00ac85c0(5,0x84);
  *(float *)(param_1 + 0x1abc) = (float)(fVar5 * (float10)60.0);
  fVar5 = (float10)FUN_00ac85c0(5,0x88);
  *(float *)(param_1 + 0x1acc) = (float)fVar5;
  *(undefined4 *)(param_1 + 0x1ad0) = 0;
  *(undefined4 *)(param_1 + 0x1ad4) = 0;
  *(undefined4 *)(param_1 + 0x1adc) = 0;
  *(undefined4 *)(param_1 + 0x1ae4) = 0;
  *(undefined4 *)(param_1 + 0x1ae0) = 0;
  *(undefined4 *)(param_1 + 0x1b20) = 0;
  *(undefined4 *)(param_1 + 0x1b04) = 0;
  *(undefined4 *)(param_1 + 0x1b24) = 0;
  *(undefined4 *)(param_1 + 0x1b08) = 0;
  *(undefined4 *)(param_1 + 0x1b28) = 0;
  *(undefined4 *)(param_1 + 0x1b0c) = 0;
  *(undefined4 *)(param_1 + 0x1b2c) = 0;
  *(undefined4 *)(param_1 + 0x1b10) = 0;
  *(undefined4 *)(param_1 + 0x1b30) = 0;
  *(undefined4 *)(param_1 + 0x1b14) = 0;
  *(undefined4 *)(param_1 + 0x1b34) = 0;
  *(undefined4 *)(param_1 + 0x1b18) = 0;
  *(undefined4 *)(param_1 + 0x1b38) = 0;
  *(undefined4 *)(param_1 + 0x1b1c) = 0;
  *(undefined4 *)(param_1 + 0x1b3c) = 0;
  *(undefined4 *)(param_1 + 0x1ae8) = 0;
  *(undefined4 *)(param_1 + 0x1b44) = 0;
  *(undefined4 *)(param_1 + 0x1aec) = 0;
  *(undefined4 *)(param_1 + 0x1b4c) = 0;
  *(undefined4 *)(param_1 + 0x1af0) = 0;
  *(undefined4 *)(param_1 + 0x1af4) = 0;
  *(undefined4 *)(param_1 + 0x1af8) = 0;
  *(undefined4 *)(param_1 + 0x1afc) = 0;
  *(undefined4 *)(param_1 + 0x1b00) = 0;
  *(undefined4 *)(param_1 + 0x1b48) = 0;
  *(undefined4 *)(param_1 + 7000) = 0;
  uVar4 = FUN_00ac84d0(0xb);
  *(undefined4 *)(param_1 + 0x1b98) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0xb);
  *(undefined4 *)(param_1 + 0x1b9c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0xb);
  *(undefined4 *)(param_1 + 0x1ba4) = uVar4;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0xb);
  *(undefined1 *)(param_1 + 0x1ba0) = uVar1;
  uVar4 = FUN_00ac84d0(0xc);
  *(undefined4 *)(param_1 + 0x1ba8) = uVar4;
  puVar6 = (undefined4 *)0xc;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))();
  *(undefined4 *)(param_1 + 0x1bac) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))();
  *(undefined4 *)(param_1 + 0x1bb4) = uVar4;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0xc);
  *(undefined1 *)(param_1 + 0x1bb0) = uVar1;
  uVar4 = FUN_00ac84d0(0xd);
  *(undefined4 *)(param_1 + 0x1bb8) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0xd);
  *(undefined4 *)(param_1 + 0x1bbc) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0xd);
  *(undefined4 *)(param_1 + 0x1bc4) = uVar4;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0xd);
  *(undefined1 *)(param_1 + 0x1bc0) = uVar1;
  *(undefined4 *)(param_1 + 0x1ac8) = 0x3f800000;
  if (*(int *)(param_1 + 0x4a0) == 1) {
    fVar5 = (float10)FUN_00ac85c0(5,0x8f);
    *(float *)(param_1 + 0x1ac8) = (float)fVar5;
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1b98) = uVar4;
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1ba8) = uVar4;
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1bb8) = uVar4;
    FUN_00ac85c0(5,0x8d);
    FUN_00ac85c0(5,0x8e);
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x19e0) = uVar4;
    uRam0000000c = FUN_00fdbc60();
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x19f0) = uVar4;
    uVar4 = FUN_00fdbc60();
    *puVar6 = uVar4;
  }
  return;
}

