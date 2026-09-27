// src/misc/cRadioModelParamData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1F40..00CDABF0, 3 functions

#include "types.h"

// 00CC1F40  cRadioModelParamData::cRadioModelParamData_2  size=7  [class]
void __fastcall cRadioModelParamData::cRadioModelParamData_2(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 00CDABD0  cRadioModelParamData::cRadioModelParamData  size=32  [class]
undefined4 * __fastcall cRadioModelParamData::cRadioModelParamData(undefined4 *param_1)

{
  *param_1 = vftable;
  _memset(param_1 + 4,0,0xc80);
  return param_1;
}

// 00CDABF0  cRadioModelParamData::vf00  size=31  [class]
undefined4 * __thiscall cRadioModelParamData::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

