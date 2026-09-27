// src/misc/effect.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4E370..00F4E370, 1 functions

#include "types.h"

// 00F4E370  effect::utility::FixedFactory<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>::vf00  size=30  [class]
undefined4 __thiscall
effect::utility::
FixedFactory<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
::vf00(undefined4 param_1,byte param_2)

{
  Hw::
  cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
  ::
  cHwLFFreeListTemp<effect::utility::MappedData<eEffDataManager,cEffectData*,effect::utility::MappedFixedVector2<eEffDataManager,cEffectData*>_>_>
            ();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

