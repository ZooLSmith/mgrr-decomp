// src/misc/esp36.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0610..00F36730, 10 functions

#include "mgrr.h"
#include "esp36.h"

// 00ED0610  esp36::esp36  size=18  [class]
undefined4 * __fastcall esp36::esp36(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0A40  esp36::vf00  size=30  [class]
undefined4 __thiscall esp36::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF3380  FUN_00ef3380  size=581  [callgraph]
void __thiscall FUN_00ef3380(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  iVar7 = *(int *)(param_1 + 0x450) + -1;
  if (iVar7 != 0) {
    local_40 = *param_3 - *param_2;
    local_3c = param_3[1] - param_2[1];
    local_38 = param_3[2] - param_2[2];
    local_34 = param_3[3] - param_2[3];
    local_30 = *param_2 - *param_3;
    local_2c = param_2[1] - param_3[1];
    local_28 = param_2[2] - param_3[2];
    fVar8 = (float10)FUN_00fdef70();
    fVar1 = (float)fVar8;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      fVar4 = (float)iVar7;
      if (iVar7 < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      fVar5 = local_3c * local_3c + local_40 * local_40 + local_38 * local_38;
      if (fVar5 < 0.0 == (fVar5 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
      if (*(int *)(param_1 + 0x4a0) != 0) {
        **(float **)(param_1 + 0x4a0) = *param_2;
        *(float *)(*(int *)(param_1 + 0x4a0) + 4) = param_2[1];
        *(float *)(*(int *)(param_1 + 0x4a0) + 8) = param_2[2];
      }
      uVar6 = 0;
      if (*(int *)(param_1 + 0x450) != 0) {
        iVar7 = 0;
        do {
          fVar5 = (float)(int)uVar6;
          if ((int)uVar6 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar5 = fVar5 * (fVar1 / fVar4);
          uVar6 = uVar6 + 1;
          fVar2 = param_2[1];
          fVar3 = param_2[2];
          *(float *)(iVar7 + *(int *)(param_1 + 0x4a0)) = *param_2 + fVar5 * local_40;
          *(float *)(iVar7 + 4 + *(int *)(param_1 + 0x4a0)) = fVar2 + local_3c * fVar5;
          *(float *)(iVar7 + 8 + *(int *)(param_1 + 0x4a0)) = fVar3 + fVar5 * local_38;
          iVar7 = iVar7 + 0xc;
        } while (uVar6 < *(uint *)(param_1 + 0x450));
        return;
      }
    }
  }
  return;
}

// 00EF35D0  FUN_00ef35d0  size=836  [callgraph]
void __thiscall FUN_00ef35d0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [4];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 auStack_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_a4;
  iVar1 = FUN_00fdbc60();
  iVar2 = FUN_00fdbc60();
  if (iVar1 != iVar2) {
    pfVar3 = *(float **)(param_1 + 0x4a0);
    local_6c = *pfVar3;
    iVar1 = *(int *)(param_1 + 0x50);
    local_68 = pfVar3[1];
    local_64 = pfVar3[2];
    D3DXVec3TransformNormal(&local_6c,pfVar3,iVar1 + 0x10);
    local_6c = *(float *)(iVar1 + 0x40) + local_6c;
    local_68 = *(float *)(iVar1 + 0x44) + local_68;
    local_64 = *(float *)(iVar1 + 0x48) + local_64;
    fStack_90 = *param_2 - local_6c;
    fStack_94 = param_2[1] - local_68;
    fStack_88 = param_2[2] - local_64;
    fStack_98 = fStack_94 * fStack_94 + fStack_90 * fStack_90 + fStack_88 * fStack_88;
    fStack_8c = fStack_94;
    fStack_70 = fStack_90;
    fVar5 = (float10)FUN_00fdef70();
    fStack_98 = (float)fVar5;
    if (fStack_98 < 0.0 == (fStack_98 == 0.0)) {
      fStack_94 = *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x110);
      if (fStack_94 < fStack_98) {
        fStack_98 = fStack_90 * fStack_90 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
        if (fStack_98 < 0.0 == (fStack_98 == 0.0)) {
          FUN_00ddf460(&fStack_90,&fStack_90);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_90 = 0.0;
          fStack_8c = 1.0;
          fStack_88 = 0.0;
        }
        D3DXMatrixInverse(auStack_60,0,*(int *)(param_1 + 0x50) + 0x10);
        D3DXVec3TransformNormal(auStack_9c,auStack_9c,&local_6c);
        pfVar3 = *(float **)(param_1 + 0x4a0);
        fStack_90 = fStack_94 * fStack_90;
        fStack_8c = fStack_8c * fStack_94;
        fStack_88 = fStack_88 * fStack_94;
        fStack_84 = fStack_94 * fStack_84;
        *pfVar3 = *pfVar3 + fStack_90;
        pfVar3[1] = pfVar3[1] + fStack_8c;
        fStack_28 = fStack_88 + pfVar3[2];
      }
      else {
        D3DXMatrixInverse(auStack_60,0,*(int *)(param_1 + 0x50) + 0x10);
        D3DXVec3TransformNormal(&fStack_8c,param_2,&local_6c);
        fStack_80 = fStack_30 + fStack_80;
        pfVar3 = *(float **)(param_1 + 0x4a0);
        fStack_7c = fStack_2c + fStack_7c;
        fStack_28 = fStack_28 + fStack_78;
        *pfVar3 = fStack_80;
        pfVar3[1] = fStack_7c;
        fStack_78 = fStack_28;
      }
      pfVar3[2] = fStack_28;
      iVar1 = FUN_00fdbc60();
      iVar2 = FUN_00fdbc60();
      if ((iVar1 != iVar2) && (iVar1 = *(int *)(param_1 + 0x450) + -1, iVar1 != 0)) {
        iVar2 = iVar1 * 0xc;
        do {
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x4a0) + iVar2);
          *puVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4a0) + -0xc + iVar2);
          iVar2 = iVar2 + -0xc;
          iVar1 = iVar1 + -1;
          puVar4[1] = puVar4[-2];
          puVar4[2] = puVar4[-1];
        } while (iVar1 != 0);
        __security_check_cookie(local_14 ^ (uint)auStack_a4);
        return;
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_a4);
  return;
}

// 00EF3920  FUN_00ef3920  size=1560  [callgraph]
void __thiscall FUN_00ef3920(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_3c;
  iVar5 = *(int *)(param_1 + 0x4b8);
  if (iVar5 == 0) {
    uVar6 = 0;
    iVar5 = 0;
    if (*(int *)(param_1 + 0x450) != 0) {
      do {
        local_10 = *(float *)(*(int *)(param_1 + 0x4a0) + iVar5);
        iVar3 = *(int *)(param_1 + 0x50);
        iVar2 = *(int *)(param_1 + 0x4a0) + iVar5;
        local_c = *(float *)(iVar2 + 4);
        local_8 = *(float *)(iVar2 + 8);
        D3DXVec3TransformNormal(&local_10,iVar2,iVar3 + 0x10);
        local_10 = local_10 + *(float *)(iVar3 + 0x40);
        local_c = *(float *)(iVar3 + 0x44) + local_c;
        local_8 = *(float *)(iVar3 + 0x48) + local_8;
        if ((*(int *)(param_1 + 0x4bc) == 0) &&
           ((uVar6 == 0 || (uVar6 == *(int *)(param_1 + 0x450) - 1U)))) {
          iVar3 = *(int *)(param_1 + 0x458);
          *(float *)(iVar3 + iVar5) = local_10;
          *(float *)(iVar3 + 4 + iVar5) = local_c;
          fVar1 = local_8;
        }
        else {
          fStack_34 = *param_3 - local_10;
          local_30 = param_3[1] - local_c;
          fStack_2c = *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x110);
          local_3c = local_30 * local_30 + fStack_34 * fStack_34 +
                     (param_3[2] - local_8) * (param_3[2] - local_8);
          fVar7 = (float10)FUN_00fdef70();
          local_3c = (float)fVar7;
          if (fStack_2c < local_3c) {
            fStack_34 = *param_2 - local_10;
            local_30 = param_2[2] - local_8;
            local_3c = (param_2[1] - local_c) * (param_2[1] - local_c) + fStack_34 * fStack_34 +
                       local_30 * local_30;
            fVar7 = (float10)FUN_00fdef70();
            local_3c = (float)fVar7;
            if (fStack_2c < local_3c) {
              fVar7 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4ac),
                                            *(undefined4 *)(param_1 + 0x4ac));
              local_3c = (float)fVar7;
              fVar7 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b0),
                                            *(undefined4 *)(param_1 + 0x4b0));
              fStack_34 = (float)fVar7;
              fVar7 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b4),
                                            *(undefined4 *)(param_1 + 0x4b4));
              fStack_14 = (float)fVar7;
              iVar3 = *(int *)(param_1 + 0x458);
              fStack_28 = local_10 + local_3c;
              fStack_24 = local_c + fStack_34;
              fVar1 = local_8 + fStack_14;
              *(float *)(iVar3 + iVar5) = fStack_28;
              *(float *)(iVar3 + 4 + iVar5) = fStack_24;
              fStack_20 = fVar1;
            }
            else {
              iVar3 = *(int *)(param_1 + 0x458);
              *(float *)(iVar3 + iVar5) = local_10;
              *(float *)(iVar3 + 4 + iVar5) = local_c;
              fVar1 = local_8;
            }
          }
          else {
            iVar3 = *(int *)(param_1 + 0x458);
            *(float *)(iVar3 + iVar5) = local_10;
            *(float *)(iVar3 + 4 + iVar5) = local_c;
            fVar1 = local_8;
          }
        }
        *(float *)(iVar3 + 8 + iVar5) = fVar1;
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar6 < *(uint *)(param_1 + 0x450));
      __security_check_cookie(local_4 ^ (uint)&local_3c);
      return;
    }
  }
  else {
    uVar6 = FUN_00fdbc60();
    iVar3 = FUN_00fdbc60();
    iVar2 = FUN_00fdbc60();
    if ((iVar2 != iVar3) && (iVar3 % iVar5 == 0)) {
      FUN_00ed89f0();
    }
    local_38 = *(float *)(param_1 + 0x4b8);
    local_3c = (float)(int)local_38;
    if ((int)local_38 < 0) {
      local_3c = local_3c + 4.2949673e+09;
    }
    local_3c = local_3c - 0.0;
    local_30 = 0.0;
    if (local_3c != 0.0) {
      local_38 = (float)(uVar6 % (uint)local_38);
      fVar1 = (float)(int)local_38;
      if ((int)local_38 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_30 = (fVar1 - 0.0) / local_3c;
      local_3c = fVar1 - 0.0;
    }
    uVar6 = 0;
    if (*(int *)(param_1 + 0x450) != 0) {
      do {
        iVar3 = *(int *)(param_1 + 0x50);
        iVar2 = uVar6 * 0xc;
        local_10 = *(float *)(iVar2 + *(int *)(param_1 + 0x4a0));
        iVar5 = iVar2 + *(int *)(param_1 + 0x4a0);
        local_c = *(float *)(iVar5 + 4);
        local_8 = *(float *)(iVar5 + 8);
        D3DXVec3TransformNormal(&local_10,iVar5,iVar3 + 0x10);
        local_10 = *(float *)(iVar3 + 0x40) + local_10;
        local_c = *(float *)(iVar3 + 0x44) + local_c;
        local_8 = *(float *)(iVar3 + 0x48) + local_8;
        if (*(int *)(param_1 + 0x4bc) == 0) {
          if (uVar6 != 0) {
            if (uVar6 != *(int *)(param_1 + 0x450) - 1U) goto LAB_00ef3d4f;
            iVar5 = *(int *)(param_1 + 0x458);
            *(float *)(iVar5 + iVar2) = local_10;
            *(float *)(iVar5 + 4 + iVar2) = local_c;
            fVar1 = local_8;
            goto LAB_00ef3f12;
          }
          pfVar4 = *(float **)(param_1 + 0x458);
          *pfVar4 = local_10;
          pfVar4[1] = local_c;
          pfVar4[2] = local_8;
        }
        else {
LAB_00ef3d4f:
          fStack_34 = *param_3 - local_10;
          local_3c = param_3[1] - local_c;
          fStack_2c = *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x110);
          local_38 = local_3c * local_3c + fStack_34 * fStack_34 +
                     (param_3[2] - local_8) * (param_3[2] - local_8);
          fVar7 = (float10)FUN_00fdef70();
          local_38 = (float)fVar7;
          if (fStack_2c < local_38) {
            local_3c = *param_2 - local_10;
            fStack_34 = param_2[2] - local_8;
            local_38 = (param_2[1] - local_c) * (param_2[1] - local_c) + local_3c * local_3c +
                       fStack_34 * fStack_34;
            fVar7 = (float10)FUN_00fdef70();
            local_38 = (float)fVar7;
            if (fStack_2c < local_38) {
              iVar5 = *(int *)(param_1 + 0x4a8);
              pfVar4 = (float *)(*(int *)(param_1 + 0x4a4) + iVar2);
              fStack_28 = *pfVar4 + local_30 *
                                    (*(float *)(iVar5 + iVar2) -
                                    *(float *)(*(int *)(param_1 + 0x4a4) + iVar2));
              fStack_24 = (*(float *)(iVar5 + 4 + iVar2) - pfVar4[1]) * local_30 + pfVar4[1];
              fStack_20 = (*(float *)(iVar5 + 8 + iVar2) - pfVar4[2]) * local_30 + pfVar4[2];
              iVar5 = *(int *)(param_1 + 0x458);
              fStack_1c = fStack_28 + local_10;
              fStack_18 = fStack_24 + local_c;
              fVar1 = fStack_20 + local_8;
              *(float *)(iVar5 + iVar2) = fStack_1c;
              *(float *)(iVar5 + 4 + iVar2) = fStack_18;
              fStack_14 = fVar1;
            }
            else {
              iVar5 = *(int *)(param_1 + 0x458);
              *(float *)(iVar5 + iVar2) = local_10;
              *(float *)(iVar5 + 4 + iVar2) = local_c;
              fVar1 = local_8;
            }
          }
          else {
            iVar5 = *(int *)(param_1 + 0x458);
            *(float *)(iVar5 + iVar2) = local_10;
            *(float *)(iVar5 + 4 + iVar2) = local_c;
            fVar1 = local_8;
          }
LAB_00ef3f12:
          *(float *)(iVar5 + 8 + iVar2) = fVar1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x450));
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_3c);
  return;
}

// 00EF3F40  esp36::thunk_vf1C  size=5  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp36::thunk_vf1C(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar6 = FUN_00f99ca0();
  uVar3 = *(uint *)(param_1 + 0x450);
  fVar4 = (float)(int)(uVar3 - 1);
  if ((int)(uVar3 - 1) < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fVar4 = *(float *)(param_1 + 0x474) / fVar4;
  fVar1 = *(float *)(param_1 + 0x478);
  if (*(int *)(param_1 + 0x480) == 1) {
    fVar5 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x46c) - 1.0 < fVar5) {
      if (*(float *)(param_1 + 0x460) <= *(float *)(param_1 + 0x46c)) {
        fStack_8 = *(float *)(param_1 + 0x460);
      }
      else {
        fStack_8 = *(float *)(param_1 + 0x46c);
      }
      if (fStack_8 < 3.0) {
        fStack_8 = 3.0;
      }
      uVar10 = 0;
      fVar4 = ((fVar5 - _DAT_018d6c5c) / (_DAT_018d6c58 + fStack_8)) * fVar4;
      fVar5 = *(float *)(param_1 + 0x474) - 0.01;
      if (uVar3 == 0) {
        FUN_00f99d30();
        return;
      }
      pfVar8 = (float *)(iVar6 + 8);
      do {
        uVar9 = *(uint *)(param_1 + 0x38);
        fStack_8 = fVar1;
        fStack_4 = fVar1;
        if ((uVar9 & 0x40000) == 0) {
          if ((uVar9 & 0x80000) == 0) {
            fStack_4 = 0.0;
            fStack_c = (float)(int)uVar10;
            if ((int)uVar10 < 0) {
              fStack_c = fStack_c + 4.2949673e+09;
            }
          }
          else {
            fStack_8 = 0.0;
            fStack_c = (float)(int)uVar10;
            if ((int)uVar10 < 0) {
              fStack_c = fStack_c + 4.2949673e+09;
            }
          }
          fStack_c = fStack_c * fVar4;
          if (fVar5 < fStack_c) {
            fStack_c = fVar5;
          }
        }
        else {
          if ((uVar9 & 0x80000) == 0) {
            fStack_4 = 0.0;
            fVar2 = (float)(int)uVar10;
            if ((int)uVar10 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
          }
          else {
            fStack_8 = 0.0;
            fVar2 = (float)(int)uVar10;
            if ((int)uVar10 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
          }
          fStack_c = 1.0 - fVar2 * fVar4;
          if (fStack_c < 0.0) {
            fStack_c = 0.0;
          }
        }
        fVar2 = *(float *)(param_1 + 0x488);
        uVar10 = uVar10 + 1;
        *pfVar8 = fStack_8;
        pfVar8[1] = fVar2 + fStack_c;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-2] = fStack_4;
        pfVar8[-1] = fVar2 + fStack_c;
        pfVar8 = pfVar8 + 4;
      } while (uVar10 < uVar3);
      FUN_00f99d30();
      return;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x38);
  uVar9 = 0;
  if ((uVar10 & 0x40000) == 0) {
    if ((uVar10 & 0x80000) == 0) {
      if (3 < (int)uVar3) {
        iVar11 = 2;
        pfVar8 = (float *)(iVar6 + 0x14);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-5] = 0.0;
          pfVar8[-4] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-3] = fVar1;
          pfVar8[-2] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)(iVar11 + -1);
          if (iVar11 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-1] = 0.0;
          *pfVar8 = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[1] = fVar1;
          pfVar8[2] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)iVar11;
          if (iVar11 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[3] = 0.0;
          pfVar8[4] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[5] = fVar1;
          pfVar8[6] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)(iVar11 + 1);
          if (iVar11 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 4;
          fVar2 = *(float *)(param_1 + 0x488);
          iVar11 = iVar11 + 4;
          pfVar8[7] = 0.0;
          pfVar8[8] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[9] = fVar1;
          pfVar8[10] = fVar2 + fVar5 * fVar4;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar9 < uVar3 - 3);
      }
      if (uVar9 < uVar3) {
        pfVar8 = (float *)(uVar9 * 0x10 + iVar6 + 4);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 1;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-1] = 0.0;
          *pfVar8 = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[1] = fVar1;
          pfVar8[2] = fVar2 + fVar5 * fVar4;
          pfVar8 = pfVar8 + 4;
        } while (uVar9 < uVar3);
      }
    }
    else {
      if (3 < (int)uVar3) {
        iVar11 = 2;
        pfVar8 = (float *)(iVar6 + 0x1c);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-5] = 0.0;
          pfVar8[-4] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-7] = fVar1;
          pfVar8[-6] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)(iVar11 + -1);
          if (iVar11 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-1] = 0.0;
          *pfVar8 = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-3] = fVar1;
          pfVar8[-2] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)iVar11;
          if (iVar11 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[3] = 0.0;
          pfVar8[4] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[1] = fVar1;
          pfVar8[2] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)(iVar11 + 1);
          if (iVar11 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 4;
          fVar2 = *(float *)(param_1 + 0x488);
          iVar11 = iVar11 + 4;
          pfVar8[7] = 0.0;
          pfVar8[8] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[5] = fVar1;
          pfVar8[6] = fVar2 + fVar5 * fVar4;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar9 < uVar3 - 3);
      }
      if (uVar9 < uVar3) {
        puVar7 = (undefined4 *)(uVar9 * 0x10 + iVar6 + 8);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 1;
          fVar2 = *(float *)(param_1 + 0x488);
          *puVar7 = 0;
          puVar7[1] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          puVar7[-2] = fVar1;
          puVar7[-1] = fVar2 + fVar5 * fVar4;
          puVar7 = puVar7 + 4;
        } while (uVar9 < uVar3);
        FUN_00f99d30();
        return;
      }
    }
    FUN_00f99d30();
    return;
  }
  if ((uVar10 & 0x80000) == 0) {
    if (3 < (int)uVar3) {
      iVar11 = 2;
      pfVar8 = (float *)(iVar6 + 0x14);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-5] = 0.0;
        pfVar8[-4] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-3] = fVar1;
        pfVar8[-2] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar11 + -1);
        if (iVar11 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-1] = 0.0;
        *pfVar8 = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[1] = fVar1;
        pfVar8[2] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)iVar11;
        if (iVar11 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[3] = 0.0;
        pfVar8[4] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[5] = fVar1;
        pfVar8[6] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar11 + 1);
        if (iVar11 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 4;
        fVar2 = *(float *)(param_1 + 0x488);
        iVar11 = iVar11 + 4;
        pfVar8[7] = 0.0;
        pfVar8[8] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[9] = fVar1;
        pfVar8[10] = (fVar2 + 1.0) - fVar5 * fVar4;
        pfVar8 = pfVar8 + 0x10;
      } while (uVar9 < uVar3 - 3);
    }
    if (uVar9 < uVar3) {
      pfVar8 = (float *)(uVar9 * 0x10 + iVar6 + 4);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 1;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-1] = 0.0;
        *pfVar8 = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[1] = fVar1;
        pfVar8[2] = (fVar2 + 1.0) - fVar5 * fVar4;
        pfVar8 = pfVar8 + 4;
      } while (uVar9 < uVar3);
      FUN_00f99d30();
      return;
    }
  }
  else {
    if (3 < (int)uVar3) {
      iVar11 = 2;
      pfVar8 = (float *)(iVar6 + 0x1c);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-5] = 0.0;
        pfVar8[-4] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-7] = fVar1;
        pfVar8[-6] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar11 + -1);
        if (iVar11 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-1] = 0.0;
        *pfVar8 = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-3] = fVar1;
        pfVar8[-2] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)iVar11;
        if (iVar11 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[3] = 0.0;
        pfVar8[4] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[1] = fVar1;
        pfVar8[2] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar11 + 1);
        if (iVar11 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 4;
        fVar2 = *(float *)(param_1 + 0x488);
        iVar11 = iVar11 + 4;
        pfVar8[7] = 0.0;
        pfVar8[8] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[5] = fVar1;
        pfVar8[6] = (fVar2 + 1.0) - fVar5 * fVar4;
        pfVar8 = pfVar8 + 0x10;
      } while (uVar9 < uVar3 - 3);
    }
    if (uVar9 < uVar3) {
      puVar7 = (undefined4 *)(iVar6 + 8 + uVar9 * 0x10);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 1;
        fVar2 = *(float *)(param_1 + 0x488);
        *puVar7 = 0;
        puVar7[1] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        puVar7[-2] = fVar1;
        puVar7[-1] = (fVar2 + 1.0) - fVar5 * fVar4;
        puVar7 = puVar7 + 4;
      } while (uVar9 < uVar3);
    }
  }
  FUN_00f99d30();
  return;
}

// 00F04AD0  esp36::thunk_vf20  size=5  [class]
/* WARNING: Removing unreachable block (ram,0x00ef4248) */
/* WARNING: Removing unreachable block (ram,0x00ef4376) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall esp36::thunk_vf20(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_94 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_54;
  float *pfStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint uStack_14;
  
  uStack_14 = DAT_018e8764 ^ (uint)auStack_94;
  uStack_48 = param_2;
  iStack_4c = param_1;
  pfStack_50 = (float *)FUN_00f99ca0();
  pfVar3 = (float *)FUN_00e9fe70();
  pfVar4 = (float *)FUN_00e9feb0();
  fStack_80 = *pfVar4 - *pfVar3;
  fStack_7c = pfVar4[1] - pfVar3[1];
  fStack_78 = pfVar4[2] - pfVar3[2];
  fStack_74 = pfVar4[3] - pfVar3[3];
  fStack_90 = fStack_80 * fStack_80 + fStack_7c * fStack_7c + fStack_78 * fStack_78;
  if (fStack_90 < 0.0 == (fStack_90 == 0.0)) {
    FUN_00ddf460(&fStack_80,&fStack_80);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_80 = 0.0;
    fStack_7c = 1.0;
    fStack_78 = 0.0;
  }
  if (*(int *)(param_1 + 0x484) != 0) {
    if ((_DAT_01ee1250 & 1) == 0) {
      _DAT_01ee1250 = _DAT_01ee1250 | 1;
      _DAT_01ee1240 = 0.2;
      _DAT_01ee1244 = 0.5;
      _DAT_01ee1248 = 0.0;
      _DAT_01ee124c = 0.0;
    }
    fStack_80 = fStack_80 + _DAT_01ee1240;
    fStack_7c = fStack_7c + _DAT_01ee1244;
    fStack_78 = fStack_78 + _DAT_01ee1248;
    fStack_74 = fStack_74 + _DAT_01ee124c;
    fStack_90 = fStack_80 * fStack_80 + fStack_7c * fStack_7c + fStack_78 * fStack_78;
    if (fStack_90 < 0.0 == (fStack_90 == 0.0)) {
      FUN_00ddf460(&fStack_80,&fStack_80);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_80 = 0.0;
      fStack_7c = 1.0;
      fStack_78 = 0.0;
    }
  }
  iStack_44 = *(int *)(param_1 + 0x458);
  if (iStack_44 == 0) {
    __security_check_cookie(uStack_14 ^ (uint)auStack_94);
    return;
  }
  uVar8 = *(uint *)(param_1 + 0x450);
  uVar9 = 0;
  fStack_90 = 0.0;
  if (uVar8 != 0) {
    pfVar3 = (float *)(iStack_44 + 4);
    pfVar4 = pfStack_50;
    do {
      if (uVar8 - 1 <= (uint)fStack_90) {
        pfVar3 = (float *)(iStack_44 + (int)fStack_90 * 0xc);
        pfVar4 = pfStack_50 + uVar9 * 3;
        fVar1 = pfVar3[1];
        fVar2 = pfVar3[2];
        *pfVar4 = fStack_40 + *(float *)(iStack_44 + (int)fStack_90 * 0xc);
        pfVar4[1] = fStack_3c + fVar1;
        pfVar4[2] = fStack_38 + fVar2;
        fStack_8c = *pfVar3 - fStack_40;
        fStack_88 = pfVar3[1] - fStack_3c;
        fStack_84 = pfVar3[2] - fStack_38;
        pfVar3 = pfStack_50 + uVar9 * 3 + 3;
        uVar9 = uVar9 + 2;
        *pfVar3 = fStack_8c;
        pfVar3[1] = fStack_88;
        pfVar3[2] = fStack_84;
        param_1 = iStack_4c;
        break;
      }
      fStack_20 = pfVar3[2] - pfVar3[-1];
      fStack_1c = pfVar3[3] - *pfVar3;
      fStack_18 = pfVar3[4] - pfVar3[1];
      if (((fStack_20 != 0.0) || (fStack_1c != 0.0)) || (fStack_18 != 0.0)) {
        fStack_54 = fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c;
        if (fStack_54 < 0.0 != (fStack_54 == 0.0)) {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_20 = 0.0;
          fStack_1c = 1.0;
          fStack_18 = 0.0;
        }
        D3DXVec3Normalize(&fStack_20,&fStack_20);
        fStack_70 = fStack_18 * fStack_7c - fStack_1c * fStack_78;
        fStack_6c = fStack_20 * fStack_78 - fStack_80 * fStack_18;
        fStack_68 = fStack_80 * fStack_1c - fStack_20 * fStack_7c;
        fStack_2c = fStack_70;
        fStack_28 = fStack_6c;
        fStack_24 = fStack_68;
        if (((fStack_70 != 0.0) || (fStack_6c != 0.0)) || (fStack_68 != 0.0)) {
          fStack_54 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
          if (fStack_54 < 0.0 != (fStack_54 == 0.0)) {
            FUN_00dd5650(&DAT_0163d0ac);
            fStack_2c = 0.0;
            fStack_28 = 1.0;
            fStack_24 = 0.0;
          }
          D3DXVec3Normalize(&fStack_2c,&fStack_2c);
          fStack_54 = *(float *)(iStack_4c + 0x100);
          uVar9 = uVar9 + 2;
          fStack_40 = fStack_54 * fStack_2c;
          fStack_3c = fStack_54 * fStack_28;
          fStack_38 = fStack_54 * fStack_24;
          fVar1 = *pfVar3;
          fVar2 = pfVar3[1];
          *pfVar4 = fStack_40 + pfVar3[-1];
          pfVar4[1] = fVar1 + fStack_3c;
          pfVar4[2] = fStack_38 + fVar2;
          fStack_8c = pfVar3[-1] - fStack_40;
          fStack_88 = *pfVar3 - fStack_3c;
          fStack_84 = pfVar3[1] - fStack_38;
          pfVar4[3] = fStack_8c;
          pfVar4[4] = fStack_88;
          pfVar4[5] = fStack_84;
          pfVar4 = pfVar4 + 6;
          fStack_2c = fStack_40;
          fStack_28 = fStack_3c;
          fStack_24 = fStack_38;
        }
      }
      uVar8 = *(uint *)(iStack_4c + 0x450);
      fStack_90 = (float)((int)fStack_90 + 1);
      pfVar3 = pfVar3 + 3;
      param_1 = iStack_4c;
    } while ((uint)fStack_90 < uVar8);
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar5 == (uint *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar5;
    if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
      uVar6 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
  }
  fStack_90 = *(float *)(uVar8 + 8);
  if (fStack_90 != 0.0) {
    pfVar3 = (float *)FUN_00e9fe70();
    fStack_70 = *pfVar3 - *(float *)(param_1 + 400);
    fStack_6c = pfVar3[1] - *(float *)(param_1 + 0x194);
    fStack_68 = pfVar3[2] - *(float *)(param_1 + 0x198);
    fStack_64 = pfVar3[3] - *(float *)(param_1 + 0x19c);
    fVar1 = 0.0;
    if (((fStack_70 == 0.0) && (fStack_6c == 0.0)) && (fStack_68 == 0.0)) {
      fStack_70 = 0.0;
      fStack_6c = 0.0;
    }
    else {
      FUN_00ddf460(&fStack_70,&fStack_70);
      fStack_70 = fStack_90 * fStack_70;
      fStack_6c = fStack_6c * fStack_90;
      fVar1 = fStack_90 * fStack_68;
    }
    uVar8 = 0;
    if (3 < (int)uVar9) {
      iVar7 = (uVar9 - 4 >> 2) + 1;
      uVar8 = iVar7 * 4;
      pfVar3 = pfStack_50 + 5;
      do {
        iVar7 = iVar7 + -1;
        pfVar3[-5] = fStack_70 + pfVar3[-5];
        pfVar3[-4] = fStack_6c + pfVar3[-4];
        pfVar3[-3] = fVar1 + pfVar3[-3];
        pfVar3[-2] = pfVar3[-2] + fStack_70;
        pfVar3[-1] = fStack_6c + pfVar3[-1];
        *pfVar3 = fVar1 + *pfVar3;
        pfVar3[1] = fStack_70 + pfVar3[1];
        pfVar3[2] = fStack_6c + pfVar3[2];
        pfVar3[3] = fVar1 + pfVar3[3];
        pfVar3[4] = pfVar3[4] + fStack_70;
        pfVar3[5] = pfVar3[5] + fStack_6c;
        pfVar3[6] = fVar1 + pfVar3[6];
        pfVar3 = pfVar3 + 0xc;
      } while (iVar7 != 0);
    }
    fStack_68 = fVar1;
    if (uVar8 < uVar9) {
      iVar7 = uVar9 - uVar8;
      pfVar3 = pfStack_50 + uVar8 * 3 + 2;
      do {
        iVar7 = iVar7 + -1;
        pfVar3[-2] = fStack_70 + pfVar3[-2];
        pfVar3[-1] = fStack_6c + pfVar3[-1];
        *pfVar3 = fVar1 + *pfVar3;
        pfVar3 = pfVar3 + 3;
      } while (iVar7 != 0);
    }
  }
  FUN_00f99d30();
  __security_check_cookie(uStack_14 ^ (uint)auStack_94);
  return;
}

// 00F1ADC0  esp36::vf08  size=664  [class]
void __fastcall esp36::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffbfff;
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x460);
  *(float *)(param_1 + 0x460) =
       *(float *)(param_1 + 0x460) +
       *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x110) * 1.001;
  iVar6 = *(int *)(param_1 + 0x50);
  *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + 1.0;
  local_20 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  local_1c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_18 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_14 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  if (iVar6 != 0) {
    D3DXVec3TransformNormal(&local_20,&local_20,iVar6 + 0x10);
    local_20 = *(float *)(iVar6 + 0x40) + local_20;
    local_1c = *(float *)(iVar6 + 0x44) + local_1c;
    local_18 = *(float *)(iVar6 + 0x48) + local_18;
  }
  local_30 = *(float *)(param_1 + 0x4c0);
  iVar6 = *(int *)(param_1 + 0x4cc);
  local_2c = *(float *)(param_1 + 0x4c4);
  local_28 = *(float *)(param_1 + 0x4c8);
  if (iVar6 != 0) {
    D3DXVec3TransformNormal(&local_30,&local_30,iVar6 + 0x10);
    local_30 = *(float *)(iVar6 + 0x40) + local_30;
    local_2c = *(float *)(iVar6 + 0x44) + local_2c;
    local_28 = *(float *)(iVar6 + 0x48) + local_28;
  }
  if (*(int *)(param_1 + 0x4d0) == 0) {
    FUN_00ef3380(&local_20,&local_30);
    FUN_00ef1980();
  }
  else if (*(int *)(param_1 + 0x4d0) == 1) {
    FUN_00ef35d0(&local_30);
    FUN_00ef3920(&local_20,&local_30);
  }
  pfVar7 = *(float **)(param_1 + 0x458);
  iVar6 = *(int *)(param_1 + 0x450);
  fVar2 = pfVar7[iVar6 * 3 + -2];
  fVar3 = pfVar7[1];
  fVar4 = pfVar7[iVar6 * 3 + -1];
  fVar5 = pfVar7[2];
  *(float *)(param_1 + 0x130) = (*pfVar7 + pfVar7[iVar6 * 3 + -3]) * 0.5;
  *(float *)(param_1 + 0x134) = (fVar2 + fVar3) * 0.5;
  *(float *)(param_1 + 0x138) = (fVar4 + fVar5) * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  fVar8 = (float10)FUN_00fdef70();
  *(float *)(param_1 + 300) = (float)fVar8;
  FUN_00ed6110();
  return;
}

// 00F2AFC0  esp36::vf10  size=371  [class]
void __fastcall esp36::vf10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  int local_4;
  
  if (DAT_01edd490 != 0) {
    iVar2 = cPrimHeap::allocBuffer(0x180,0x20);
    if (iVar2 != 0) {
      iVar2 = cEspDrawStrip::cEspDrawStrip();
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x78) = 0;
        *(undefined4 *)(iVar2 + 0x74) = 0;
        *(undefined4 *)(iVar2 + 0x70) = 0;
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 100) = 0;
        *(undefined4 *)(iVar2 + 0x60) = 0;
        *(undefined4 *)(iVar2 + 0x5c) = 0;
        *(undefined4 *)(iVar2 + 0x58) = 0;
        *(undefined4 *)(iVar2 + 0x50) = 0;
        *(undefined4 *)(iVar2 + 0x4c) = 0;
        *(undefined4 *)(iVar2 + 0x48) = 0;
        *(undefined4 *)(iVar2 + 0x44) = 0;
        *(undefined4 *)(iVar2 + 0x7c) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x68) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x54) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0x40) = 0x3f800000;
        FUN_00efed20();
        piVar1 = param_1 + 0xf2;
        FUN_00edfcd0(piVar1);
        FUN_00f26b40(iVar2);
        iVar4 = param_1[0x21];
        iVar3 = param_1[10];
        FUN_00f45d50();
        local_14 = iVar2;
        local_10 = param_1;
        local_c = piVar1;
        local_8 = iVar3;
        local_4 = iVar4;
        FUN_00f49500(&local_14);
        iVar4 = param_1[0x114];
        iVar3 = FUN_00f51070(iVar2 + 0xd0,0xc,iVar4 * 2);
        if (iVar3 == 0) {
          FUN_009cca90(param_1,&DAT_016dc950);
          return;
        }
        (**(code **)(*param_1 + 0x20))(iVar2 + 0xd0);
        iVar4 = FUN_00f51070(iVar2 + 0xf8,8,iVar4 * 2);
        if (iVar4 == 0) {
          FUN_009cca90(param_1,&DAT_016dc96c);
          return;
        }
        (**(code **)(*param_1 + 0x1c))(iVar2 + 0xf8);
        FUN_00edfcd0(piVar1);
        uVar5 = FUN_00e9fe70();
        uVar6 = FUN_00e9fe60(uVar5);
        FUN_00edc9e0(iVar2,iVar2,piVar1,uVar6,uVar5);
        return;
      }
    }
  }
  FUN_009cca90(param_1,&DAT_016dc928);
  return;
}

// 00F36730  esp36::vf04  size=844  [class]
/* WARNING: Removing unreachable block (ram,0x00f369e7) */
/* WARNING: Removing unreachable block (ram,0x00f36981) */
/* WARNING: Removing unreachable block (ram,0x00f36a39) */

undefined4 __thiscall
esp36::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  short sVar12;
  float local_30;
  float local_2c;
  float local_28;
  
  iVar8 = esp27::vf04(param_2,param_3,param_4);
  if (iVar8 != 0) {
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar9 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar9 == (uint *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = *puVar9;
      if ((uVar10 + 0xf & 0xfffffff0) != uVar10) {
        uVar11 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar11);
      }
    }
    sVar12 = 0;
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    if (uVar10 != 0) {
      sVar12 = *(short *)(uVar10 + 0xc);
      *(int *)(param_1 + 0x4d0) = (int)*(char *)(uVar10 + 0x12);
    }
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 0.0;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar9 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar9 != (uint *)0x0)) {
      uVar10 = *puVar9;
      if ((uVar10 + 0xf & 0xfffffff0) != uVar10) {
        uVar11 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar11);
      }
      if (uVar10 != 0) {
        *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(uVar10 + 0x10);
        *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(uVar10 + 0x14);
        *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(uVar10 + 0x18);
        local_30 = *(float *)(uVar10 + 0x1c);
        local_2c = *(float *)(uVar10 + 0x20);
        local_28 = *(float *)(uVar10 + 0x24);
      }
    }
    iVar8 = FUN_00a7c9b0(&DAT_01ee11f4);
    if (iVar8 != 0) {
      iVar8 = FUN_00a7c990(&DAT_01ee11f4);
      if (((iVar8 == 0) && (iVar8 = FUN_00a81330(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c800(), iVar8 != 0)) {
        iVar8 = FUN_00a12290((int)sVar12);
      }
      else {
        iVar8 = 0;
      }
      *(int *)(param_1 + 0x4cc) = iVar8;
      if (iVar8 == 0) {
        FUN_009cca90(param_1,&DAT_016dc864,(int)sVar12);
        return 0;
      }
      if (*(short *)(param_1 + 0x400) != -1) {
        FUN_009cca90(param_1,&DAT_016dc8f8);
        return 0;
      }
      if (*(int *)(param_1 + 0x4d0) == 1) {
        fVar1 = *(float *)(param_1 + 0x180);
        uVar10 = 0;
        fVar2 = *(float *)(param_1 + 0x170);
        fVar3 = *(float *)(param_1 + 0x184);
        fVar4 = *(float *)(param_1 + 0x174);
        fVar5 = *(float *)(param_1 + 0x188);
        fVar6 = *(float *)(param_1 + 0x178);
        if (*(int *)(param_1 + 0x450) != 0) {
          iVar8 = 0;
          do {
            iVar7 = *(int *)(param_1 + 0x4a0);
            *(float *)(iVar7 + iVar8) = fVar1 + fVar2;
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + 0xc;
            *(float *)(iVar7 + -8 + iVar8) = fVar3 + fVar4;
            *(float *)(iVar7 + -4 + iVar8) = fVar5 + fVar6;
          } while (uVar10 < *(uint *)(param_1 + 0x450));
        }
      }
      uVar10 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
      *(uint *)(param_1 + 0x114) = uVar10;
      *(float *)(param_1 + 0x4c0) =
           (1.0 - (float)(uVar10 >> 8) * 5.960465e-08 * 2.0) * local_30 +
           *(float *)(param_1 + 0x4c0);
      uVar10 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
      *(uint *)(param_1 + 0x114) = uVar10;
      *(float *)(param_1 + 0x4c4) =
           (1.0 - (float)(uVar10 >> 8) * 5.960465e-08 * 2.0) * local_2c +
           *(float *)(param_1 + 0x4c4);
      uVar10 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
      *(uint *)(param_1 + 0x114) = uVar10;
      *(float *)(param_1 + 0x4c8) =
           (1.0 - (float)(uVar10 >> 8) * 5.960465e-08 * 2.0) * local_28 +
           *(float *)(param_1 + 0x4c8);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffbfff;
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dc7bc);
  }
  return 0;
}

