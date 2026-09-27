// lib/msvc/stl/unit_00E20E10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E20E10..00E210A0, 4 functions

#include "mgrr.h"

// 00E20E10  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf20  size=525  [run]
void __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::vf20
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 **param_5,undefined1 param_6,char param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 **ppuStack_6c;
  int *local_54;
  undefined1 local_50 [4];
  _Lockit local_4c [4];
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 ***local_40;
  undefined1 local_3c;
  undefined4 *puStack_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 *apuStack_24 [2];
  uint uStack_1c;
  uint uStack_10;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_54;
  local_44 = param_2;
  local_50[0] = param_6;
  if (((uint)param_5[5] & 0x4000) == 0) {
    ppuStack_6c = param_5;
    (**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4);
    __security_check_cookie(uStack_1c ^ (uint)&ppuStack_6c);
    return;
  }
  piVar1 = (int *)*param_5[0xc];
  ppuStack_6c = (undefined4 **)0xe20e8c;
  local_54 = piVar1;
  _Lockit::_Lockit((_Lockit *)&local_40,0);
  if (piVar1[1] != -1) {
    piVar1[1] = piVar1[1] + 1;
  }
  FUN_00fda874();
  ppuStack_6c = (undefined4 **)0xe20eab;
  local_54 = (int *)FUN_00e1be30();
  ppuStack_6c = (undefined4 **)0xe20ebd;
  _Lockit::_Lockit(local_4c,0);
  iVar2 = piVar1[1];
  if ((iVar2 != 0) && (iVar2 != -1)) {
    piVar1[1] = iVar2 + -1;
  }
  iVar2 = piVar1[1];
  FUN_00fda874();
  puVar6 = (undefined4 *)(~-(uint)(iVar2 != 0) & (uint)piVar1);
  if (puVar6 != (undefined4 *)0x0) {
    ppuStack_6c = (undefined4 **)0xe20eed;
    (**(code **)*puVar6)();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c = 0;
  if (param_7 == '\0') {
    pcVar5 = *(code **)(*local_54 + 0x10);
  }
  else {
    pcVar5 = *(code **)(*local_54 + 0x14);
  }
  ppuStack_6c = (undefined4 **)0xe20f1e;
  (*pcVar5)();
  ppuStack_6c = apuStack_24;
  FUN_00e205b0();
  if (0xf < uStack_10) {
    ppuStack_6c = (undefined4 **)apuStack_24[0];
    FUN_00dd4920();
  }
  piVar1 = local_54;
  ppuVar7 = (undefined4 **)param_5[8];
  if (((int)param_5[9] < 0) ||
     ((((int)param_5[9] < 1 && (ppuVar7 == (undefined4 **)0x0)) || (ppuVar7 <= puStack_30)))) {
    ppuVar7 = (undefined4 **)0x0;
  }
  else {
    ppuVar7 = (undefined4 **)((int)ppuVar7 - (int)puStack_30);
  }
  if (((uint)param_5[5] & 0x1c0) != 0x40) {
    ppuStack_6c = ppuVar7;
    puVar6 = (undefined4 *)FUN_00e1aa30(param_1,local_50,param_2,param_3,local_54);
    param_2 = *puVar6;
    param_3 = puVar6[1];
    ppuVar7 = (undefined4 **)0x0;
  }
  if (local_2c < 0x10) {
    local_40 = &local_40;
  }
  ppuStack_6c = (undefined4 **)puStack_30;
  puVar6 = (undefined4 *)FUN_00e1a9c0(param_1,local_50,param_2,param_3,local_40);
  uVar3 = *puVar6;
  uVar4 = puVar6[1];
  param_5[8] = (undefined4 *)0x0;
  param_5[9] = (undefined4 *)0x0;
  FUN_00e1aa30(param_1,uStack_48,uVar3,uVar4,piVar1,ppuVar7);
  if (0xf < local_2c) {
    ppuStack_6c = (undefined4 **)0xe21004;
    FUN_00dd4920();
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffa8);
  return;
}

// 00E21020  std::numpunct<char>::vf0C  size=57  [run]
undefined1 * __thiscall std::numpunct<char>::vf0C(int param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00e1e430(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return param_2;
}

// 00E21060  std::numpunct<char>::vf10  size=57  [run]
undefined1 * __thiscall std::numpunct<char>::vf10(int param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00e1e430(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return param_2;
}

// 00E210A0  std::numpunct<char>::vf14  size=57  [run]
undefined1 * __thiscall std::numpunct<char>::vf14(int param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = *(char **)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00e1e430(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  return param_2;
}

