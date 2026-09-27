// lib/havok/unit_00907F20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00907F20..00907F20, 1 functions

#include "types.h"

// 00907F20  hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector_2  size=86  [run]
undefined4 * hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector_2(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd29b0(0x40,0x10,0,0);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x40);
  *(undefined4 *)((int)_Dst + 10) = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  *(undefined1 *)((int)_Dst + 0x1b) = 1;
  _Dst[8] = 0;
  _Dst[9] = 0;
  *_Dst = RayCastPenetrationWork::vftable;
  _Dst[10] = vftable;
  *(undefined1 *)(_Dst + 0xb) = 0;
  return _Dst;
}

