// src/scene/SceneModelSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A0C9A0..00A197B0, 8 functions

#include "mgrr.h"
#include "SceneModelSystem.h"

// 00A0C9A0  SceneModelSystem::createModel  size=18  [class]
undefined4 SceneModelSystem::createModel(void)

{
  FUN_00dd5650(&DAT_0165c75c);
  return 0;
}

// 00A0C9E0  SceneModelSystem::vf10  size=12  [class]
void SceneModelSystem::vf10(void)

{
  FUN_00a006c0();
  return;
}

// 00A0C9F0  SceneModelSystem::destroyModel  size=14  [class]
void SceneModelSystem::destroyModel(void)

{
  FUN_00dd5650(&DAT_0165c790);
  return;
}

// 00A18A40  FUN_00a18a40  size=147  [callgraph]
undefined4 __thiscall FUN_00a18a40(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = (undefined4 *)FUN_00a0d3d0();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar1 = *(undefined4 **)(param_1 + 0x18);
      if ((puVar2 < puVar1) || (puVar1 + *(int *)(param_1 + 0x1c) * 6 <= puVar2)) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (uint)((int)puVar2 - (int)puVar1) / 0x18;
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        *(undefined4 **)(param_1 + 0x38) = puVar2;
      }
      if (*(int *)(param_1 + 0x3c) == 0) {
        puVar2[2] = 0;
      }
      else {
        *(undefined4 **)(*(int *)(param_1 + 0x3c) + 0xc) = puVar2;
        puVar2[2] = *(undefined4 *)(param_1 + 0x3c);
      }
      *(undefined4 **)(param_1 + 0x3c) = puVar2;
      *(uint *)(param_2 + 0x33c) = uVar3;
      puVar2[1] = param_2;
      puVar2[3] = 0;
      puVar2[4] = 0;
      return 1;
    }
  }
  return 0;
}

// 00A18AE0  FUN_00a18ae0  size=86  [callgraph]
void __fastcall FUN_00a18ae0(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 1;
  FUN_00dd7290(1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_00a16030(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  FUN_00a0ce90(0x100,*(undefined4 *)(param_1 + 0x54));
  return;
}

// 00A18B40  FUN_00a18b40  size=123  [callgraph]
void __fastcall FUN_00a18b40(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x20),0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00dd7340();
  if (*(int *)(param_1 + 0xac) != 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xac),0);
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

// 00A18BC0  SceneModelSystem::vf08  size=31  [class]
void __fastcall SceneModelSystem::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x18) < 1) {
    FUN_00dd5650(&DAT_0165ca38);
    return;
  }
  FUN_00a18a40();
  return;
}

// 00A197B0  SceneModelSystem::vf00  size=30  [class]
undefined4 __thiscall SceneModelSystem::vf00(undefined4 param_1,byte param_2)

{
  ModelSystem::ModelSystem();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

