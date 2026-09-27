// src/managers/triggermanager/cActRoomEvent.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C8B270..00C92990, 6 functions

#include "mgrr.h"

// 00C8B270  Trigger::cActRoomEvent::vf08  size=1  [class]
void Trigger::cActRoomEvent::vf08(void)

{
  return;
}

// 00C8B280  Trigger::cActRoomEvent::vf0C  size=1  [class]
void Trigger::cActRoomEvent::vf0C(void)

{
  return;
}

// 00C8B290  Trigger::cActRoomEvent::vf10  size=1  [class]
void Trigger::cActRoomEvent::vf10(void)

{
  return;
}

// 00C8B2A0  Trigger::cActRoomEvent::vf14  size=1  [class]
void Trigger::cActRoomEvent::vf14(void)

{
  return;
}

// 00C92980  Trigger::cActRoomEvent::vf00  size=6  [class]
undefined * Trigger::cActRoomEvent::vf00(void)

{
  return &DAT_01dbe110;
}

// 00C92990  Trigger::cActRoomEvent::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActRoomEvent::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

