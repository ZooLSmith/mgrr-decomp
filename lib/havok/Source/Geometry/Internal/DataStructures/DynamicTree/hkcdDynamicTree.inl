// lib/havok/Source/Geometry/Internal/DataStructures/DynamicTree/hkcdDynamicTree.inl
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0123CAE0..0123CAE0, 1 functions

#include "types.h"

// 0123CAE0  FUN_0123cae0  size=357  [__FILE__]
void __thiscall FUN_0123cae0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  undefined1 local_260 [512];
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_2c = 0;
  local_20 = 0;
  local_14 = 0;
  local_1c = 0;
  local_18 = 0;
  local_24 = 0x80000000;
  FUN_010959d0(&local_2c);
  FUN_01239e20(&local_60);
  for (; param_2 <= param_3; param_2 = param_2 + param_4) {
    FUN_010974b0(*(undefined4 *)(param_1 + 0x18),1,param_2,0x10);
    FUN_01096ea0();
    FUN_01239e20(&local_40);
    if (local_40 < local_60) {
      hkErrStream::hkErrStream(local_260,0x200);
      puVar2 = &DAT_017e9e30;
      iVar1 = param_2;
      fVar3 = local_40;
      FUN_01018d00(&DAT_017e9e2c);
      FUN_01018dc0(iVar1);
      FUN_01018d00(puVar2);
      FUN_01018e60(fVar3);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (0,0xffffffff,local_260,
                 "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Geometry/Internal/DataStructures/DynamicTree/hkcdDynamicTree.inl"
                 ,0x29d);
      hkBaseObject::hkBaseObject_38();
      FUN_010959d0(&local_2c);
      local_60 = local_40;
      uStack_5c = uStack_3c;
      uStack_58 = uStack_38;
      uStack_54 = uStack_34;
    }
  }
  FUN_010959d0(param_1);
  local_28 = 0;
  if (-1 < (int)local_24) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,(local_24 & 0x3fffffff) * 0x30);
  }
  return;
}

