// src/enemy/em0060/Em0060Config.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0044D990..0044D990, 1 functions

#include "mgrr.h"

// 0044D990  Em0060Config::initializeBattleParameterConfig  size=1849  [class]
void __fastcall Em0060Config::initializeBattleParameterConfig(int param_1)

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
    FUN_00dd5650(&DAT_0163da50);
  }
  uVar4 = FUN_00ac8660(0,0x39);
  *(undefined4 *)(param_1 + 0x18fc) = uVar4;
  uVar4 = FUN_00ac8660(0,0x31);
  *(undefined4 *)(param_1 + 0x1900) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x32);
  *(float *)(param_1 + 0x1904) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x35);
  *(undefined4 *)(param_1 + 0x1908) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x36);
  *(float *)(param_1 + 0x190c) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x25);
  *(undefined4 *)(param_1 + 0x1910) = uVar4;
  uVar4 = FUN_00ac8660(0,0x2b);
  *(undefined4 *)(param_1 + 0x1920) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x2c);
  *(float *)(param_1 + 0x1928) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x3c);
  *(undefined4 *)(param_1 + 0x1930) = uVar4;
  uVar4 = FUN_00ac8660(0,0x3d);
  *(undefined4 *)(param_1 + 0x1940) = uVar4;
  uVar4 = FUN_00ac8660(0,0x3e);
  *(undefined4 *)(param_1 + 0x1950) = uVar4;
  uVar4 = FUN_00ac8660(0,0x3f);
  *(undefined4 *)(param_1 + 0x1960) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x4e);
  *(float *)(param_1 + 0x1970) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x4f);
  *(float *)(param_1 + 0x1978) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(0,0x50);
  *(float *)(param_1 + 0x1980) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(0,0x51);
  *(float *)(param_1 + 0x1988) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x59);
  *(undefined4 *)(param_1 + 0x1998) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x58);
  *(float *)(param_1 + 0x1990) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x5e);
  *(float *)(param_1 + 0x19a0) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x5f);
  *(float *)(param_1 + 0x19a8) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,100);
  *(float *)(param_1 + 0x19b0) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x68);
  *(float *)(param_1 + 0x19b8) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x69);
  *(float *)(param_1 + 0x19c0) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x6a);
  *(float *)(param_1 + 0x19c8) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x70);
  *(float *)(param_1 + 0x19d0) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x74);
  *(float *)(param_1 + 0x19d8) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x78);
  *(float *)(param_1 + 0x19e0) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x26);
  *(float *)(param_1 + 0x1918) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x2c);
  *(float *)(param_1 + 0x1928) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x44);
  *(float *)(param_1 + 0x1938) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x45);
  *(float *)(param_1 + 0x1948) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x46);
  *(float *)(param_1 + 0x1958) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x47);
  *(float *)(param_1 + 0x1968) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x27);
  *(undefined4 *)(param_1 + 0x1914) = uVar4;
  uVar4 = FUN_00ac8660(0,0x2d);
  *(undefined4 *)(param_1 + 0x1924) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x2e);
  *(float *)(param_1 + 0x192c) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x40);
  *(undefined4 *)(param_1 + 0x1934) = uVar4;
  uVar4 = FUN_00ac8660(0,0x41);
  *(undefined4 *)(param_1 + 0x1944) = uVar4;
  uVar4 = FUN_00ac8660(0,0x42);
  *(undefined4 *)(param_1 + 0x1954) = uVar4;
  uVar4 = FUN_00ac8660(0,0x3f);
  *(undefined4 *)(param_1 + 0x1964) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x52);
  *(float *)(param_1 + 0x1974) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x53);
  *(float *)(param_1 + 0x197c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(0,0x54);
  *(float *)(param_1 + 0x1984) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(0,0x55);
  *(float *)(param_1 + 0x198c) = (float)fVar5;
  uVar4 = FUN_00ac8660(0,0x5b);
  *(undefined4 *)(param_1 + 0x199c) = uVar4;
  fVar5 = (float10)FUN_00ac85c0(5,0x5a);
  *(float *)(param_1 + 0x1994) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x60);
  *(float *)(param_1 + 0x19a4) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x61);
  *(float *)(param_1 + 0x19ac) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x65);
  *(float *)(param_1 + 0x19b4) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x6b);
  *(float *)(param_1 + 0x19bc) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x6c);
  *(float *)(param_1 + 0x19c4) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x6d);
  *(float *)(param_1 + 0x19cc) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x71);
  *(float *)(param_1 + 0x19d4) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x75);
  *(float *)(param_1 + 0x19dc) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x79);
  *(float *)(param_1 + 0x19e4) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x28);
  *(float *)(param_1 + 0x191c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x2e);
  *(float *)(param_1 + 0x192c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x48);
  *(float *)(param_1 + 0x193c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x49);
  *(float *)(param_1 + 0x194c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x4a);
  *(float *)(param_1 + 0x195c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x4b);
  *(float *)(param_1 + 0x196c) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x85);
  *(float *)(param_1 + 0x19f0) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x86);
  *(float *)(param_1 + 0x19f4) = (float)fVar5;
  fVar5 = (float10)FUN_00ac85c0(5,0x83);
  *(float *)(param_1 + 0x19e8) = (float)(fVar5 * (float10)60.0);
  fVar5 = (float10)FUN_00ac85c0(5,0x84);
  *(float *)(param_1 + 0x19ec) = (float)(fVar5 * (float10)60.0);
  fVar5 = (float10)FUN_00ac85c0(5,0x88);
  *(float *)(param_1 + 0x19fc) = (float)fVar5;
  *(undefined4 *)(param_1 + 0x1a00) = 0;
  *(undefined4 *)(param_1 + 0x1a04) = 0;
  *(undefined4 *)(param_1 + 0x1a0c) = 0;
  *(undefined4 *)(param_1 + 0x1a14) = 0;
  *(undefined4 *)(param_1 + 0x1a10) = 0;
  *(undefined4 *)(param_1 + 0x1a50) = 0;
  *(undefined4 *)(param_1 + 0x1a34) = 0;
  *(undefined4 *)(param_1 + 0x1a54) = 0;
  *(undefined4 *)(param_1 + 0x1a38) = 0;
  *(undefined4 *)(param_1 + 0x1a58) = 0;
  *(undefined4 *)(param_1 + 0x1a3c) = 0;
  *(undefined4 *)(param_1 + 0x1a5c) = 0;
  *(undefined4 *)(param_1 + 0x1a40) = 0;
  *(undefined4 *)(param_1 + 0x1a60) = 0;
  *(undefined4 *)(param_1 + 0x1a44) = 0;
  *(undefined4 *)(param_1 + 0x1a64) = 0;
  *(undefined4 *)(param_1 + 0x1a48) = 0;
  *(undefined4 *)(param_1 + 0x1a68) = 0;
  *(undefined4 *)(param_1 + 0x1a4c) = 0;
  *(undefined4 *)(param_1 + 0x1a6c) = 0;
  *(undefined4 *)(param_1 + 0x1a18) = 0;
  *(undefined4 *)(param_1 + 0x1a74) = 0;
  *(undefined4 *)(param_1 + 0x1a1c) = 0;
  *(undefined4 *)(param_1 + 0x1a7c) = 0;
  *(undefined4 *)(param_1 + 0x1a20) = 0;
  *(undefined4 *)(param_1 + 0x1a24) = 0;
  *(undefined4 *)(param_1 + 0x1a28) = 0;
  *(undefined4 *)(param_1 + 0x1a2c) = 0;
  *(undefined4 *)(param_1 + 0x1a30) = 0;
  *(undefined4 *)(param_1 + 0x1a78) = 0;
  *(undefined4 *)(param_1 + 0x1a88) = 0;
  uVar4 = FUN_00ac84d0(0xb);
  *(undefined4 *)(param_1 + 0x1ac8) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0xb);
  *(undefined4 *)(param_1 + 0x1acc) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0xb);
  *(undefined4 *)(param_1 + 0x1ad4) = uVar4;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0xb);
  *(undefined1 *)(param_1 + 0x1ad0) = uVar1;
  uVar4 = FUN_00ac84d0(0xc);
  *(undefined4 *)(param_1 + 0x1ad8) = uVar4;
  puVar6 = (undefined4 *)0xc;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))();
  *(undefined4 *)(param_1 + 0x1adc) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))();
  *(undefined4 *)(param_1 + 0x1ae4) = uVar4;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0xc);
  *(undefined1 *)(param_1 + 0x1ae0) = uVar1;
  uVar4 = FUN_00ac84d0(0xd);
  *(undefined4 *)(param_1 + 0x1ae8) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0xd);
  *(undefined4 *)(param_1 + 0x1aec) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0xd);
  *(undefined4 *)(param_1 + 0x1af4) = uVar4;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0xd);
  *(undefined1 *)(param_1 + 0x1af0) = uVar1;
  *(undefined4 *)(param_1 + 0x19f8) = 0x3f800000;
  if (*(int *)(param_1 + 0x4a0) == 1) {
    fVar5 = (float10)FUN_00ac85c0(5,0x8f);
    *(float *)(param_1 + 0x19f8) = (float)fVar5;
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1ac8) = uVar4;
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1ad8) = uVar4;
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1ae8) = uVar4;
    FUN_00ac85c0(5,0x8d);
    FUN_00ac85c0(5,0x8e);
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1910) = uVar4;
    uRam0000000c = FUN_00fdbc60();
    uVar4 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1920) = uVar4;
    uVar4 = FUN_00fdbc60();
    *puVar6 = uVar4;
  }
  return;
}

