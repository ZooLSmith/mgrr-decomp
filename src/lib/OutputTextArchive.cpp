// src/lib/OutputTextArchive.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E932F0..00EA8170, 23 functions

#include "types.h"

// 00E932F0  lib::OutputTextArchive<lib::Array<char>,32>::vf00  size=3  [class]
undefined1 lib::OutputTextArchive<lib::Array<char>,32>::vf00(void)

{
  return 0;
}

// 00E93430  lib::OutputTextArchive<lib::Array<char>,32>::vf04  size=3  [class]
undefined1 lib::OutputTextArchive<lib::Array<char>,32>::vf04(void)

{
  return 0;
}

// 00E93860  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_3  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_3
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e99470(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E95850  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_7  size=86  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_7
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_1;
  local_c = 0;
  local_10 = vftable;
  local_8 = param_1;
  local_4 = 0;
  uVar2 = FUN_00c6da10(&local_10,param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E95A00  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_8  size=128  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_8
               (int *param_1,int param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  local_4[0] = 0;
  uVar1 = FUN_00e99470(param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_00e99470(param_2 + 4);
    if ((char)uVar1 != '\0') {
      uVar1 = (**(code **)(unaff_ESI + 0x1c))(param_2 + 8);
      if ((char)uVar1 != '\0') {
        local_4[0] = 0;
        uVar1 = (**(code **)(*param_1 + 8))(local_4);
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffff00;
}

// 00E95B60  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_9  size=128  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_9
               (int *param_1,int param_2)

{
  uint uVar1;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  local_4[0] = 0;
  uVar1 = FUN_00e99470(param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_00e99470(param_2 + 4);
    if ((char)uVar1 != '\0') {
      uVar1 = (**(code **)(unaff_ESI + 0x1c))(param_2 + 8);
      if ((char)uVar1 != '\0') {
        local_4[0] = 0;
        uVar1 = (**(code **)(*param_1 + 8))(local_4);
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffff00;
}

// 00E97220  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_6  size=86  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_6
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_1;
  local_c = 0;
  local_10 = vftable;
  local_8 = param_1;
  local_4 = 0;
  uVar2 = StaticArray<char,256>::StaticArray<char,256>(&local_10,param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E97800  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_4  size=86  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_4
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_1;
  local_c = 0;
  local_10 = vftable;
  local_8 = param_1;
  local_4 = 0;
  uVar2 = FUN_00e947d0(&local_10,param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E97A20  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_5  size=86  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_5
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_1;
  local_c = 0;
  local_10 = vftable;
  local_8 = param_1;
  local_4 = 0;
  uVar2 = FUN_00e972d0(&local_10,param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E9B2B0  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_2  size=86  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_2
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_1;
  local_c = 0;
  local_10 = vftable;
  local_8 = param_1;
  local_4 = 0;
  uVar2 = FUN_00e9a600(&local_10,param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00E9BE40  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>  size=112  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>
               (int *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined **local_10;
  undefined4 local_c;
  int *local_8;
  undefined1 local_4;
  
  piVar1 = param_1;
  local_c = 0;
  local_10 = vftable;
  local_8 = param_1;
  local_4 = 0;
  cVar2 = vf00();
  if (cVar2 == '\0') {
    uVar3 = FUN_00e9bc30(&local_10);
  }
  else {
    uVar3 = DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
            ::
            DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_2
                      (&local_10);
  }
  if ((char)uVar3 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar3 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar3;
  }
  return uVar3 & 0xffffff00;
}

// 00EA7D40  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_15  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_15
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e99150(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA7DA0  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_14  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_14
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e99170(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA7E00  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_18  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_18
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e99170(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA7E60  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_17  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_17
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e991d0(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA7EC0  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_16  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_16
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e99230(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA7F20  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_21  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_21
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e99290(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA7F80  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_20  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_20
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e992f0(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA7FF0  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_19  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_19
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e99350(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8050  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_11  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_11
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e993b0(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA80B0  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_10  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_10
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e99410(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8110  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_13  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_13
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e99470(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

// 00EA8170  lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_12  size=83  [class]
uint lib::OutputTextArchive<lib::Array<char>,32>::OutputTextArchive<lib::Array<char>,32>_12
               (int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_00e994e0(param_2);
  if ((char)uVar2 != '\0') {
    param_1 = (int *)((uint)param_1 & 0xffffff00);
    uVar2 = (**(code **)(*piVar1 + 8))(&param_1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

