// src/unsorted/unit_009DFB70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DFB70..009E0150, 2 functions

#include "types.h"

// 009DFB70  FUN_009dfb70  size=1489  [run]
undefined4 FUN_009dfb70(int param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 **ppuVar3;
  void *_Src;
  float *pfVar4;
  float *pfVar5;
  float unaff_EDI;
  float **ppfStack_e4;
  undefined4 **ppuStack_e0;
  float **ppfStack_dc;
  float **ppfStack_d8;
  undefined4 **ppuStack_d4;
  float **ppfStack_d0;
  float *pfStack_cc;
  float *pfStack_c8;
  float *pfStack_c4;
  undefined4 **ppuStack_c0;
  undefined4 **ppuStack_bc;
  float *pfStack_b8;
  undefined4 **ppuStack_b4;
  float *pfStack_b0;
  float **ppfVar6;
  float *pfStack_98;
  float fStack_94;
  float *local_90;
  float *local_8c;
  float *local_88;
  float fStack_84;
  float *local_80;
  float local_7c;
  float local_78;
  float local_74;
  float *local_70;
  undefined4 *local_6c;
  float *local_68;
  float fStack_64;
  undefined4 *local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_30;
  float fStack_28;
  float fStack_24;
  
  if ((*(byte *)(param_1 + 0x364) & 4) == 0) {
    pfVar4 = (float *)FUN_00e9fe70();
    pfVar5 = (float *)FUN_00e9feb0();
    local_60 = (undefined4 *)(*pfVar5 - *pfVar4);
    local_5c = pfVar5[1] - pfVar4[1];
    local_58 = pfVar5[2] - pfVar4[2];
    local_54 = pfVar5[3] - pfVar4[3];
    pfVar4 = (float *)FUN_00e9fe70();
    local_70 = (float *)(*(float *)(param_1 + 0x130) - *pfVar4);
    local_6c = (undefined4 *)(*(float *)(param_1 + 0x134) - pfVar4[1]);
    local_68 = (float *)(*(float *)(param_1 + 0x138) - pfVar4[2]);
    fVar1 = (float)local_6c * local_5c + (float)local_70 * (float)local_60 +
            (float)local_68 * local_58;
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      return 9;
    }
    local_80 = (float *)((float)local_60 * -1.0);
    local_7c = local_5c * -1.0;
    local_78 = local_58 * -1.0;
    local_74 = local_54 * -1.0;
    fVar1 = local_78 * local_78 + (float)local_80 * (float)local_80 + local_7c * local_7c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460();
    }
    else {
      FUN_00dd5650();
      local_88 = (float *)0x0;
      local_90 = (float *)0x0;
      local_8c = (float *)0x3f800000;
    }
    if ((float)local_88 * (float)local_68 +
        (float)local_90 * (float)local_70 + (float)local_8c * (float)local_6c <
        SQRT(*(float *)(param_1 + 0x144) * *(float *)(param_1 + 0x144) +
             *(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x140) +
             *(float *)(param_1 + 0x148) * *(float *)(param_1 + 0x148))) {
      return 10;
    }
  }
  else {
    _Src = (void *)FUN_00e9fe90();
    pfStack_b0 = (float *)0x9dfba0;
    FID_conflict__memcpy(&local_50,_Src,0x40);
    local_80 = (float *)(*(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x140));
    local_7c = *(float *)(param_1 + 0x134) - *(float *)(param_1 + 0x144);
    ppfVar6 = &local_90;
    local_78 = *(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x148);
    local_70 = (float *)(*(float *)(param_1 + 0x130) + *(float *)(param_1 + 0x140));
    local_6c = (undefined4 *)(*(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x134));
    local_68 = (float *)(*(float *)(param_1 + 0x148) + *(float *)(param_1 + 0x138));
    local_74 = 1.0;
    pfStack_b0 = (float *)0x9dfc2b;
    local_60 = local_80;
    local_5c = local_7c;
    local_58 = local_78;
    D3DXVec3TransformNormal();
    pfStack_98 = (float *)(fStack_28 + (float)pfStack_98);
    fStack_94 = fStack_24 + fStack_94;
    if (!NAN(fStack_94) && 0.0 < fStack_94 != (fStack_94 == 0.0)) {
      return 1;
    }
    pfStack_b0 = &local_5c;
    local_8c = (float *)local_6c;
    ppuStack_b4 = &local_8c;
    local_88 = local_68;
    pfStack_b8 = (float *)&stack0xffffff64;
    fStack_84 = local_74;
    local_80 = (float *)0x3f800000;
    ppuStack_bc = (undefined4 **)0x9dfca0;
    D3DXVec3TransformNormal();
    fStack_30 = fStack_30 + unaff_EDI;
    if (!NAN(fStack_30) && 0.0 < fStack_30 != (fStack_30 == 0.0)) {
      return 2;
    }
    ppuStack_bc = &local_68;
    pfStack_98 = local_88;
    ppuStack_c0 = &pfStack_98;
    fStack_94 = local_74;
    pfStack_c4 = (float *)&stack0xffffff58;
    local_90 = local_70;
    local_8c = (float *)0x3f800000;
    pfStack_c8 = (float *)0x9dfd15;
    D3DXVec3TransformNormal();
    pfVar5 = local_80;
    pfVar4 = local_8c;
    ppuStack_b4 = (undefined4 **)(fStack_44 + (float)ppuStack_b4);
    pfStack_b0 = (float *)(fStack_40 + (float)pfStack_b0);
    fStack_3c = fStack_3c + (float)ppfVar6;
    if (!NAN(fStack_3c) && 0.0 < fStack_3c != (fStack_3c == 0.0)) {
      return 3;
    }
    pfStack_c8 = &local_74;
    pfStack_cc = (float *)&stack0xffffff5c;
    ppfStack_d0 = (float **)&ppuStack_b4;
    pfStack_98 = (float *)0x3f800000;
    ppuStack_d4 = (undefined4 **)0x9dfd8a;
    D3DXVec3TransformNormal();
    ppuStack_c0 = (undefined4 **)(local_50 + (float)ppuStack_c0);
    ppuStack_bc = (undefined4 **)(fStack_4c + (float)ppuStack_bc);
    pfStack_b8 = (float *)(fStack_48 + (float)pfStack_b8);
    if (!NAN((float)pfStack_b8) && 0.0 < (float)pfStack_b8 != ((float)pfStack_b8 == 0.0)) {
      return 4;
    }
    if (((float)local_8c < (float)pfVar4 - 1.1920929e-07) ||
       ((float)pfVar4 + 1.1920929e-07 < (float)local_8c)) {
      ppuStack_d4 = &local_80;
      pfStack_b0 = local_90;
      ppfStack_d8 = &pfStack_b0;
      ppfStack_dc = (float **)&ppuStack_c0;
      ppuStack_e0 = (undefined4 **)0x9dfe31;
      pfVar2 = local_88;
      ppuVar3 = (undefined4 **)0x3f800000;
      D3DXVec3TransformNormal();
      ppuStack_b4 = ppuVar3;
      pfStack_b8 = pfVar2;
      pfStack_cc = (float *)(local_5c + (float)pfStack_cc);
      pfStack_c8 = (float *)(local_58 + (float)pfStack_c8);
      pfStack_c4 = (float *)(local_54 + (float)pfStack_c4);
      if (!NAN((float)pfStack_c4) && 0.0 < (float)pfStack_c4 != ((float)pfStack_c4 == 0.0)) {
        return 5;
      }
      ppuStack_e0 = &local_8c;
      ppuStack_bc = (undefined4 **)pfVar4;
      ppfStack_e4 = (float **)&ppuStack_bc;
      pfStack_b0 = (float *)0x3f800000;
      D3DXVec3TransformNormal();
      ppfStack_d8 = (float **)((float)local_68 + (float)ppfStack_d8);
      ppuStack_d4 = (undefined4 **)(fStack_64 + (float)ppuStack_d4);
      ppfStack_d0 = (float **)((float)local_60 + (float)ppfStack_d0);
      if (!NAN((float)ppfStack_d0) && 0.0 < (float)ppfStack_d0 != ((float)ppfStack_d0 == 0.0)) {
        return 6;
      }
      pfStack_c8 = pfStack_b8;
      pfStack_c4 = (float *)ppuStack_b4;
      ppuStack_c0 = (undefined4 **)pfVar5;
      ppuStack_bc = (undefined4 **)0x3f800000;
      D3DXVec3TransformNormal(&ppfStack_d8,&pfStack_c8,&pfStack_98);
      ppfStack_e4 = (float **)(local_74 + (float)ppfStack_e4);
      ppuStack_e0 = (undefined4 **)((float)local_70 + (float)ppuStack_e0);
      ppfStack_dc = (float **)((float)local_6c + (float)ppfStack_dc);
      if (!NAN((float)ppfStack_dc) && 0.0 < (float)ppfStack_dc != ((float)ppfStack_dc == 0.0)) {
        return 7;
      }
      ppuStack_d4 = (undefined4 **)pfStack_c4;
      ppfStack_d0 = (float **)ppuStack_c0;
      pfStack_cc = (float *)ppuStack_bc;
      pfStack_c8 = (float *)0x3f800000;
      D3DXVec3TransformNormal(&ppfStack_e4,&ppuStack_d4,&stack0xffffff5c);
      local_78 = local_78 + (float)&pfStack_cc;
      if (!NAN(local_78) && 0.0 < local_78 != (local_78 == 0.0)) {
        return 8;
      }
    }
  }
  return 0;
}

// 009E0150  FUN_009e0150  size=34  [run]
void FUN_009e0150(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_50 [76];
  
  FUN_009d5e00(param_1,local_50,param_2);
  return;
}

