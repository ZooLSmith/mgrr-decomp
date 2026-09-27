// src/managers/triggermanager/actions/TrgActEnmMsg.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C874C0..00C88350, 3 functions

#include "mgrr.h"

// 00C874C0  Trigger::Act::ENM_MSG  size=169  [class]
undefined4 __fastcall Trigger::Act::ENM_MSG(int param_1)

{
  int iVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac6f4);
    return 0;
  }
  local_30 = *(undefined4 *)(param_1 + 8);
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0xffffffff;
  local_4 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_3c = 0;
  local_2c = 0;
  local_34 = 0x1010000;
  local_48 = *(undefined4 *)(iVar1 + 0x28);
  local_44 = *(undefined4 *)(iVar1 + 0x2c);
  local_38 = *(undefined4 *)(iVar1 + 0x30);
  FUN_00c5e350(0,&local_54,&local_30);
  return 1;
}

// 00C87590  Trigger::Act::ENM_MSG_2  size=144  [class]
undefined4 __fastcall Trigger::Act::ENM_MSG_2(int param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac6f4);
    return 0;
  }
  local_4c = 0xffffffff;
  local_10 = 0;
  local_48 = 0xffffffff;
  local_c = 0;
  local_44 = 0xffffffff;
  local_8 = 0;
  local_38 = 0xffffffff;
  local_54 = 0;
  local_3c = *(undefined4 *)(param_1 + 0xc);
  local_50 = 0;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_4 = *(undefined4 *)(param_1 + 0x10);
  local_40 = 0xfffffffe;
  local_2c = 0;
  local_34 = 0x1010000;
  FUN_00c5e350(0,&local_54,&local_30);
  return 1;
}

// 00C88350  Trigger::Act::ENM_MSG_3  size=189  [class]
undefined4 __fastcall Trigger::Act::ENM_MSG_3(int param_1)

{
  int iVar1;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac6f4);
    return 0;
  }
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4c = 0xffffffff;
  local_38 = 0xffffffff;
  local_3c = 0;
  local_2c = 0;
  local_48 = *(undefined4 *)(iVar1 + 0x28);
  local_44 = *(undefined4 *)(iVar1 + 0x2c);
  local_40 = *(undefined4 *)(iVar1 + 0x30);
  local_54 = 0;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_50 = 0;
  local_4 = *(undefined4 *)(param_1 + 0xc);
  local_34 = 0x1010000;
  FUN_00c5e350(0,&local_54,&local_30);
  return 1;
}

