// src/lib/Archive.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C67850..00E913F0, 15 functions

#include "types.h"

// 00C67850  lib::Archive::vf6C  size=5  [class]
undefined1 lib::Archive::vf6C(void)

{
  return 0;
}

// 00C67860  lib::Archive::vf68  size=5  [class]
undefined1 lib::Archive::vf68(void)

{
  return 0;
}

// 00C67870  lib::Archive::vf64  size=5  [class]
undefined1 lib::Archive::vf64(void)

{
  return 0;
}

// 00C67880  lib::Archive::vf60  size=5  [class]
undefined1 lib::Archive::vf60(void)

{
  return 0;
}

// 00C67890  lib::Archive::vf5C  size=5  [class]
undefined1 lib::Archive::vf5C(void)

{
  return 0;
}

// 00C678A0  lib::Archive::vf58  size=5  [class]
undefined1 lib::Archive::vf58(void)

{
  return 0;
}

// 00C678B0  lib::Archive::vf54  size=5  [class]
undefined1 lib::Archive::vf54(void)

{
  return 0;
}

// 00C678C0  lib::Archive::vf50  size=5  [class]
undefined1 lib::Archive::vf50(void)

{
  return 0;
}

// 00C678D0  lib::Archive::vf4C  size=5  [class]
undefined1 lib::Archive::vf4C(void)

{
  return 0;
}

// 00C678E0  lib::Archive::vf48  size=5  [class]
undefined1 lib::Archive::vf48(void)

{
  return 0;
}

// 00C678F0  lib::Archive::vf44  size=5  [class]
undefined1 lib::Archive::vf44(void)

{
  return 0;
}

// 00C67900  lib::Archive::vf74  size=5  [class]
undefined1 lib::Archive::vf74(void)

{
  return 0;
}

// 00C67910  lib::Archive::vf70  size=5  [class]
undefined1 lib::Archive::vf70(void)

{
  return 0;
}

// 00C67930  lib::Archive::vf78  size=31  [class]
undefined4 * __thiscall lib::Archive::vf78(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E913F0  lib::Archive::Archive  size=35  [class]
void __fastcall lib::Archive::Archive(undefined4 *param_1)

{
  *param_1 = sys::InputXmlArchive::vftable;
  param_1[0x20] = vftable;
  FUN_00e09a00();
  *param_1 = vftable;
  return;
}

