// src/lib/InputTextArchive.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C67810..00EA72B0, 31 functions

#include "mgrr.h"

// 00C67810  lib::InputTextArchive<char_const*,32>::vf08  size=3  [class]
undefined1 lib::InputTextArchive<char_const*,32>::vf08(void)

{
  return 0;
}

// 00C67820  lib::InputTextArchive<char_const*,32>::vf0C  size=3  [class]
undefined1 lib::InputTextArchive<char_const*,32>::vf0C(void)

{
  return 1;
}

// 00C67830  lib::InputTextArchive<char_const*,32>::vf10  size=5  [class]
undefined1 lib::InputTextArchive<char_const*,32>::vf10(void)

{
  return 1;
}

// 00C67840  lib::InputTextArchive<char_const*,32>::vf14  size=5  [class]
undefined1 lib::InputTextArchive<char_const*,32>::vf14(void)

{
  return 1;
}

// 00C67970  lib::InputTextArchive<char_const*,32>::vf00  size=3  [class]
undefined1 lib::InputTextArchive<char_const*,32>::vf00(void)

{
  return 1;
}

// 00E91480  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>  size=83  [class]
undefined4 * __fastcall
lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = sys::InputXmlArchive::vftable;
  FUN_00e0a0d0(&DAT_01b7bcf0);
  param_1[0x1e] = param_1 + 2;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = vftable;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  return param_1;
}

// 00E916F0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4  size=79  [class]
undefined4 * __fastcall
lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = sys::InputBxmArchive::vftable;
  param_1[3] = 0;
  param_1[2] = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  cXmlBinary::cXmlBinary();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vftable;
  return param_1;
}

// 00E91C60  lib::InputTextArchive<char_const*,32>::vf04  size=3  [class]
undefined1 lib::InputTextArchive<char_const*,32>::vf04(void)

{
  return 0;
}

// 00E938C0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_2  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_2
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99cf0(param_1);
  return;
}

// 00E958B0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_9  size=79  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_9
               (undefined4 param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char local_4;
  
  local_14 = 0;
  local_18 = vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    local_4 = *local_c;
    pcVar1 = local_c + 1;
  } while (local_4 != '\0');
  local_8 = param_2;
  FUN_00c6da10(&local_18,param_1);
  return;
}

// 00E95960  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_10  size=79  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_10
               (undefined4 param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char local_4;
  
  local_14 = 0;
  local_18 = vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    local_4 = *local_c;
    pcVar1 = local_c + 1;
  } while (local_4 != '\0');
  local_8 = param_2;
  FUN_00a692d0(&local_18,param_1);
  return;
}

// 00E95A80  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_24  size=131  [class]
undefined4
lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_24
          (int param_1,char *param_2)

{
  char cVar1;
  int unaff_ESI;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00e99cf0(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00e99cf0(param_1 + 4);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(unaff_ESI + 0x1c))(param_1 + 8);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

// 00E95BE0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_25  size=131  [class]
undefined4
lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_25
          (int param_1,char *param_2)

{
  char cVar1;
  int unaff_ESI;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  cVar1 = FUN_00e99cf0(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00e99cf0(param_1 + 4);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(unaff_ESI + 0x1c))(param_1 + 8);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

// 00E971D0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_7  size=75  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_7
               (undefined4 param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char local_4;
  
  local_14 = 0;
  local_18 = vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    local_4 = *local_c;
    pcVar1 = local_c + 1;
  } while (local_4 != '\0');
  local_8 = param_2;
  FUN_00e95140(&local_18);
  return;
}

// 00E97280  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_8  size=79  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_8
               (undefined4 param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char local_4;
  
  local_14 = 0;
  local_18 = vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    local_4 = *local_c;
    pcVar1 = local_c + 1;
  } while (local_4 != '\0');
  local_8 = param_2;
  StaticArray<char,256>::StaticArray<char,256>(&local_18,param_1);
  return;
}

// 00E97860  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_5  size=79  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_5
               (undefined4 param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char local_4;
  
  local_14 = 0;
  local_18 = vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    local_4 = *local_c;
    pcVar1 = local_c + 1;
  } while (local_4 != '\0');
  local_8 = param_2;
  FUN_00e947d0(&local_18,param_1);
  return;
}

// 00E97A80  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_6  size=79  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_6
               (undefined4 param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char local_4;
  
  local_14 = 0;
  local_18 = vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    local_4 = *local_c;
    pcVar1 = local_c + 1;
  } while (local_4 != '\0');
  local_8 = param_2;
  FUN_00e972d0(&local_18,param_1);
  return;
}

// 00E9B310  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>  size=79  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>
               (undefined4 param_1,char *param_2)

{
  char *pcVar1;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char local_4;
  
  local_14 = 0;
  local_18 = vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    local_4 = *local_c;
    pcVar1 = local_c + 1;
  } while (local_4 != '\0');
  local_8 = param_2;
  FUN_00e9a600(&local_18,param_1);
  return;
}

// 00E9BEB0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_23  size=105  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_23
               (undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined **local_18;
  undefined4 local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char local_4;
  
  local_14 = 0;
  local_18 = vftable;
  local_10 = param_2;
  pcVar1 = param_2;
  do {
    local_c = pcVar1;
    local_4 = *local_c;
    pcVar1 = local_c + 1;
  } while (local_4 != '\0');
  local_8 = param_2;
  cVar2 = vf00();
  if (cVar2 != '\0') {
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
    ::
    DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_2
              (&local_18);
    return;
  }
  FUN_00e9bc30(&local_18);
  return;
}

// 00EA6F40  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_22  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_22
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99ca0(param_1);
  return;
}

// 00EA6F90  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_21  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_21
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e995f0(param_1);
  return;
}

// 00EA6FE0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_20  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_20
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e995f0(param_1);
  return;
}

// 00EA7030  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_13  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_13
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99620(param_1);
  return;
}

// 00EA7080  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_12  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_12
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99650(param_1);
  return;
}

// 00EA70D0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_11  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_11
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99680(param_1);
  return;
}

// 00EA7120  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_16  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_16
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e996b0(param_1);
  return;
}

// 00EA7170  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_15  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_15
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e996e0(param_1);
  return;
}

// 00EA71C0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_14  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_14
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_00e98bb0(param_1);
  return;
}

// 00EA7210  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_19  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_19
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_00e98c40(param_1);
  return;
}

// 00EA7260  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_18  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_18
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00e99cf0(param_1);
  return;
}

// 00EA72B0  lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_17  size=76  [class]
void lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_17
               (undefined4 param_1,char *param_2)

{
  char cVar1;
  
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_00e98cd0(param_1);
  return;
}

