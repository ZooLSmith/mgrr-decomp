// lib/havok/unit_0090EFE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090EFE0..0090EFE0, 1 functions

#include "types.h"

// 0090EFE0  hkpAllCdPointCollector::hkpAllCdPointCollector_29  size=117  [run]
undefined4 * hkpAllCdPointCollector::hkpAllCdPointCollector_29(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd29b0(0x1e0,0x10,0,0);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x1e0);
  *(undefined4 *)((int)_Dst + 10) = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  *(undefined1 *)((int)_Dst + 0x1b) = 1;
  _Dst[8] = 0;
  _Dst[9] = 0;
  *_Dst = RayCastClosestPointsWork::vftable;
  _Dst[0xd] = 0x7f7fffee;
  _Dst[0xc] = vftable;
  _Dst[0x10] = _Dst + 0x14;
  _Dst[0x12] = 0x80000008;
  _Dst[0x11] = 0;
  _Dst[0xd] = 0x7f7fffee;
  return _Dst;
}

