// lib/msvc/stl/unit_00E16640.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E16640..00E16940, 13 functions

#include "mgrr.h"

// 00E16640  std::runtime_error::vf00  size=30  [run]
undefined4 __thiscall std::runtime_error::vf00(undefined4 param_1,byte param_2)

{
  exception::exception_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E166E0  std::ctype<char>::vf08  size=21  [run]
void __thiscall std::ctype<char>::vf08(int param_1,byte param_2)

{
  __Tolower((uint)param_2,(_Ctypevec *)(param_1 + 8));
  return;
}

// 00E16700  std::ctype<char>::vf04  size=46  [run]
byte * __thiscall std::ctype<char>::vf04(int param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  
  if (param_2 != param_3) {
    do {
      iVar1 = __Tolower((uint)*param_2,(_Ctypevec *)(param_1 + 8));
      *param_2 = (byte)iVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

// 00E16730  std::ctype<char>::vf10  size=21  [run]
void __thiscall std::ctype<char>::vf10(int param_1,byte param_2)

{
  __Toupper((uint)param_2,(_Ctypevec *)(param_1 + 8));
  return;
}

// 00E16750  std::ctype<char>::vf0C  size=46  [run]
byte * __thiscall std::ctype<char>::vf0C(int param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  
  if (param_2 != param_3) {
    do {
      iVar1 = __Toupper((uint)*param_2,(_Ctypevec *)(param_1 + 8));
      *param_2 = (byte)iVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

// 00E16780  std::ctype<char>::vf18  size=7  [run]
undefined1 std::ctype<char>::vf18(undefined1 param_1)

{
  return param_1;
}

// 00E16790  std::ctype<char>::vf14  size=34  [run]
int std::ctype<char>::vf14(void *param_1,int param_2,void *param_3)

{
  FID_conflict__memcpy(param_3,param_1,param_2 - (int)param_1);
  return param_2;
}

// 00E167C0  std::ctype<char>::vf20  size=7  [run]
undefined1 std::ctype<char>::vf20(undefined1 param_1)

{
  return param_1;
}

// 00E167D0  std::ctype<char>::vf1C  size=34  [run]
int std::ctype<char>::vf1C(void *param_1,int param_2,undefined4 param_3,void *param_4)

{
  FID_conflict__memcpy(param_4,param_1,param_2 - (int)param_1);
  return param_2;
}

// 00E16800  std::locale::facet::facet_3  size=58  [run]
void __fastcall std::locale::facet::facet_3(undefined4 *param_1)

{
  *param_1 = ctype<char>::vftable;
  if (0 < (int)param_1[5]) {
    _free((void *)param_1[4]);
    *param_1 = vftable;
    return;
  }
  if ((int)param_1[5] < 0) {
    FUN_00dd4940(param_1[4]);
  }
  *param_1 = vftable;
  return;
}

// 00E16840  std::ctype<char>::vf00  size=69  [run]
undefined4 * __thiscall std::ctype<char>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((int)param_1[5] < 1) {
    if ((int)param_1[5] < 0) {
      FUN_00dd4940(param_1[4]);
    }
  }
  else {
    _free((void *)param_1[4]);
  }
  *param_1 = locale::facet::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E168D0  std::system_error::vf00  size=30  [run]
undefined4 __thiscall std::system_error::vf00(undefined4 param_1,byte param_2)

{
  exception::exception_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E16940  std::ios_base::failure::failure  size=243  [run]
void __thiscall std::ios_base::failure::failure(int param_1,uint param_2,char *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined **local_14 [3];
  undefined4 local_8;
  undefined4 local_4;
  
  *(uint *)(param_1 + 0xc) = param_2 & 0x17;
  uVar2 = *(uint *)(param_1 + 0x10) & param_2 & 0x17;
  if (uVar2 == 0) {
    return;
  }
  if ((char)param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,0);
  }
  if ((uVar2 & 4) != 0) {
    uVar1 = FUN_00fdaebc();
    param_3 = "ios_base::badbit set";
    exception::exception((exception *)local_14,&param_3);
    local_8 = 1;
    local_14[0] = vftable;
    local_4 = uVar1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_14,&DAT_01878e1c);
  }
  if ((uVar2 & 2) != 0) {
    uVar1 = FUN_00fdaebc();
    param_3 = "ios_base::failbit set";
    exception::exception((exception *)local_14,&param_3);
    local_8 = 1;
    local_14[0] = vftable;
    local_4 = uVar1;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_14,&DAT_01878e1c);
  }
  uVar1 = FUN_00fdaebc();
  param_3 = "ios_base::eofbit set";
  exception::exception((exception *)local_14,&param_3);
  local_8 = 1;
  local_14[0] = vftable;
  local_4 = uVar1;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_01878e1c);
}

