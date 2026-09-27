// lib/wwise/unit_009CB6E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CB6E0..009CB6E0, 1 functions

#include "mgrr.h"

// 009CB6E0  FUN_009cb6e0  size=486  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009cb6e0(void)

{
  int local_4;
  
  local_4 = 0;
  FUN_00dec4d0(&local_4,"sound/WwiseInfoDLC.wai",&DAT_01b7c320,0x1000,0);
  FUN_00df1d90(local_4);
  thunk_FUN_00df48f0("sound/bgm/BGM.bnk");
  thunk_FUN_00df48f0("sound/bgm/BGM_DLC2.bnk");
  thunk_FUN_00df48f0("sound/bgm/BGM_DLC3.bnk");
  local_4 = 0;
  FUN_00dec4d0(&local_4,"sound/SeFootstep_DLC3.bin",&DAT_01b7c320,0x1000,0);
  DAT_01b781f8 = local_4;
  DAT_01b781fc = *(int *)(local_4 + 4) + local_4;
  FUN_00dd7240();
  local_4 = 0;
  FUN_00dec4d0(&local_4,"sound/SeCollision_DLC3.bin",&DAT_01b7c320,0x1000,0);
  DAT_01b78200 = local_4;
  DAT_01b78204 = *(int *)(local_4 + 4) + local_4;
  _DAT_01b78208 = *(int *)(local_4 + 0xc) + local_4;
  FUN_00e5e1b0("bgm_init");
  FUN_00df3d30("bgm_SB_Distance1");
  FUN_00df3d30("bgm_SB_Distance2");
  FUN_00df3d30("bgm_SB_Distance3");
  FUN_00df3d30("bgm_SB_Distance4");
  FUN_00df3d30("bgm_SB_Distance5");
  FUN_00df3d30("bgm_SB_EscapeResetTime");
  FUN_00df3d30("bgm_SB_NoEnemyDelayTime");
  FUN_00df3d30("bgm_boost");
  FUN_00df3d30("bgm_boost_Battle");
  FUN_00df3d30("bgm_boost_Zangeki");
  FUN_00df3d30("bgm_boost_max");
  DAT_01b781dc = AK::SoundEngine::GetIDFromString("bgm_statusSB_mode");
  thunk_FUN_00dede80(&DAT_01b781d8,"auto2");
  thunk_FUN_00dede80(&DAT_01b781d4,"auto3");
  thunk_FUN_00dede80(&DAT_01b781d0,&DAT_01659094);
  thunk_FUN_00dede80(&DAT_01b781cc,"always_stage");
  thunk_FUN_00dede80(&DAT_01b781c8,"always_stealth");
  thunk_FUN_00dede80(&DAT_01b781c4,"always_battle");
  thunk_FUN_00dede80(&DAT_01b781c0,"nothing");
  thunk_FUN_00dede80(&DAT_01b781bc,&DAT_01659054);
  Hw::Wwise::StateWatcher(DAT_01b781dc);
  return;
}

