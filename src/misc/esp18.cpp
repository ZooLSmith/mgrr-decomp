// src/misc/esp18.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E1140..00F407C0, 7 functions

#include "types.h"

// 009E1140  esp18::preTrans  size=309  [class]
undefined4 __thiscall esp18::preTrans(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (uint *)param_2[1];
  uVar3 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = puVar1;
  param_1[2] = uVar3;
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
      uVar3 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (uVar2 != 0) {
      if ((*(uint *)(uVar2 + 4) & 0x20000000) != 0) {
        return 0;
      }
      param_1[6] = param_1[6] | *(uint *)(uVar2 + 4);
      param_1[7] = param_1[7] | *(uint *)(uVar2 + 8);
      if (param_2[4] != (uint)*(byte *)(uVar2 + 0x14)) {
        return 0;
      }
      iVar4 = FUN_009d4a00();
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_009d4a40();
      if (iVar4 != 0) {
        iVar5 = FUN_00f20580(*(undefined2 *)(iVar4 + 4),param_1 + 3,0);
        if (iVar5 == 0) {
          FUN_009cca90(param_2[3],&DAT_0165a8d4,*(undefined2 *)(iVar4 + 4));
          return 0;
        }
        if (((*(uint *)(uVar2 + 4) & 0x8000000) != 0) &&
           (iVar5 = FUN_00f20580(*(undefined2 *)(iVar4 + 6),param_1 + 4,0), iVar5 == 0)) {
          FUN_009cca90(param_2[3],&DAT_0165a8ac,*(undefined2 *)(iVar4 + 6));
          return 0;
        }
        uVar3 = FUN_009d64a0();
        param_1[5] = uVar3;
        return 1;
      }
      FUN_009cca90(param_2[3],&DAT_0165a8f4);
      return 0;
    }
  }
  FUN_009cca90(param_2[3],&DAT_0165a934);
  return 0;
}

// 00ED85A0  esp18::vf14  size=82  [class]
void __fastcall esp18::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x48c) != -1) {
    FUN_00ec9eb0(*(int *)(param_1 + 0x48c));
    *(undefined4 *)(param_1 + 0x48c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x4a0) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x4a0));
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  return;
}

// 00EF13F0  esp18::vf18  size=129  [class]
undefined4 __thiscall esp18::vf18(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 100) != param_2) &&
      ((*(int **)(param_1 + 0x420) == (int *)0x0 ||
       (**(int **)(param_1 + 0x420) != *(int *)(param_2 + 8))))) &&
     ((*(int **)(param_1 + 0x424) == (int *)0x0 ||
      (**(int **)(param_1 + 0x424) != *(int *)(param_2 + 8))))) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x4a4)) {
      piVar1 = (int *)(*(int *)(param_1 + 0x4a0) + 0x10);
      do {
        if ((((int *)piVar1[-1] != (int *)0x0) && (*(int *)piVar1[-1] == *(int *)(param_2 + 8))) ||
           (((int *)*piVar1 != (int *)0x0 && (*(int *)*piVar1 == *(int *)(param_2 + 8))))) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 5;
      } while (iVar2 < *(int *)(param_1 + 0x4a4));
    }
    return 0;
  }
  return 1;
}

// 00F17630  esp18::esp18  size=48  [class]
undefined4 * __fastcall esp18::esp18(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *param_1 = vftable;
  param_1[0x123] = 0xffffffff;
  return param_1;
}

// 00F32270  esp18::preTrans_2  size=2075  [class]
void __thiscall
esp18::preTrans_2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  float local_20;
  int *local_1c;
  int local_18;
  float local_14;
  int local_10;
  undefined3 local_c;
  undefined1 uStack_9;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_20;
  iVar6 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar6 == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_20);
    return;
  }
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar7 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar7 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar7;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      FUN_00f59ed0();
      FUN_00dd5650();
    }
    if (psVar1 != (short *)0x0) {
      *(int *)(param_1 + 0x45c) = (int)*psVar1;
      *(int *)(param_1 + 0x458) = (int)psVar1[1];
      *(int *)(param_1 + 0x460) = (int)psVar1[2];
      *(int *)(param_1 + 0x464) = (int)psVar1[3];
      *(int *)(param_1 + 0x468) = (int)psVar1[4];
      *(float *)(param_1 + 0x474) = (float)(int)psVar1[5] * -2.0;
      *(float *)(param_1 + 0x47c) = (float)(int)psVar1[6];
      local_20 = (float)(int)psVar1[7];
      *(float *)(param_1 + 0x480) = (float)(int)local_20;
      *(int *)(param_1 + 0x484) = (int)(char)psVar1[8];
      if (psVar1[5] < 0) {
        iVar6 = FUN_00f98a90();
        local_20 = (float)-(int)psVar1[5];
        *(float *)(param_1 + 0x46c) =
             (float)(int)local_20 * 0.01 * (float)(iVar6 / 2) + *(float *)(param_1 + 0x46c);
        iVar6 = FUN_00f98aa0();
        local_20 = (float)-(int)psVar1[5];
        *(float *)(param_1 + 0x470) =
             (float)(int)local_20 * 0.01 * (float)(iVar6 / 2) + *(float *)(param_1 + 0x470);
        *(undefined4 *)(param_1 + 0x474) = 0xc0000000;
      }
      *(int *)(param_1 + 0x494) = (int)*(char *)((int)psVar1 + 0x13);
      *(uint *)(param_1 + 0x498) = (uint)(*(char *)((int)psVar1 + 0x17) != '\0');
    }
  }
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar7 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar7 != (undefined4 *)0x0)) {
    puVar7 = (undefined4 *)*puVar7;
    if ((undefined4 *)((int)puVar7 + 0xfU & 0xfffffff0) != puVar7) {
      FUN_00f59ed0();
      FUN_00dd5650();
    }
    if (puVar7 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x490) = *puVar7;
      *(undefined4 *)(param_1 + 0x4b8) = puVar7[0xb];
      *(undefined4 *)(param_1 + 0x4ac) = puVar7[0xc];
      *(undefined4 *)(param_1 + 0x4b0) = puVar7[0xd];
      *(undefined4 *)(param_1 + 0x4b4) = puVar7[0xe];
    }
  }
  if (*(float *)(param_1 + 0x490) == 0.0) {
    *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x46c);
  iVar6 = FUN_00f98a90();
  local_20 = (float)(iVar6 / 2);
  *(float *)(param_1 + 0x46c) = (float)(int)local_20 + *(float *)(param_1 + 0x46c);
  iVar6 = FUN_00f98aa0();
  local_20 = (float)(iVar6 / 2) + *(float *)(param_1 + 0x470);
  *(float *)(param_1 + 0x470) = local_20;
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x474);
  *(float *)(param_1 + 0x474) =
       *(float *)(param_1 + 0x46c) * ((*(float *)(param_1 + 0x474) + 90.0) / 100.0);
  *(float *)(param_1 + 0x478) = ((*(float *)(param_1 + 0x478) + 90.0) / 100.0) * local_20;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
  iVar6 = *(int *)(param_1 + 0x45c);
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
      uVar2 = **(uint **)(param_1 + 0x58);
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        FUN_00f59ed0();
        FUN_00dd5650();
      }
      if (uVar2 != 0) {
        if (*(uint *)(param_1 + 0x460) == (uint)*(byte *)(uVar2 + 0x14)) goto LAB_00f32a6b;
        goto LAB_00f32667;
      }
    }
    FUN_009cca90(param_1,&DAT_016dba08);
    goto LAB_00f32a74;
  }
  if (iVar6 == 1) {
    *(undefined4 *)(param_1 + 0x450) = 0;
    FUN_009df6d0();
    iVar6 = FUN_00f4b0b0();
    FUN_009df740();
    *(int *)(param_1 + 0x454) = iVar6;
    *(undefined4 *)(param_1 + 0x460) = 0xff;
    if (iVar6 == 0) {
      FUN_009cca90(param_1,&DAT_016dba60);
      goto LAB_00f32a74;
    }
LAB_00f32667:
    uVar2 = *(uint *)(param_1 + 0x464);
    if ((uVar2 < 0x169) && (uVar3 = *(uint *)(param_1 + 0x468), uVar3 < 0x169)) {
      if (uVar2 < uVar3) {
        FUN_009cca90(param_1,&DAT_016dbb50,uVar2,uVar3);
        goto LAB_00f32a74;
      }
      if (*(float *)(param_1 + 0x47c) < 0.0) {
        FUN_009cca90(param_1,&DAT_016dbba8,(double)*(float *)(param_1 + 0x47c));
        goto LAB_00f32a74;
      }
      if (*(float *)(param_1 + 0x480) < 0.0) {
        FUN_009cca90(param_1,&DAT_016dbbdc,(double)*(float *)(param_1 + 0x480));
        goto LAB_00f32a74;
      }
      if (*(float *)(param_1 + 0x47c) < *(float *)(param_1 + 0x480)) {
        FUN_009cca90(param_1,&DAT_016dbc14,(double)*(float *)(param_1 + 0x480),
                     (double)*(float *)(param_1 + 0x47c));
        goto LAB_00f32a74;
      }
      if (*(float *)(*(int *)(param_1 + 0x24) + 0x84) != 0.0) {
        uVar8 = FUN_00ec9d50();
        *(undefined4 *)(param_1 + 0x48c) = uVar8;
      }
      *(undefined2 *)(param_1 + 0x428) = 1;
      if ((*(int *)(param_1 + 100) == 0) ||
         (iVar6 = FUN_00f4a2a0(0xf9,(int *)(param_1 + 0x4a8)), iVar6 == 0)) {
        iVar6 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
                cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
        if (*(int *)(iVar6 + 0x40c) == 0) goto LAB_00f32a6b;
        *(int *)(param_1 + 0x4a8) = *(int *)(iVar6 + 0x40c);
      }
      local_10 = FUN_009d4a40();
      if (local_10 == 0) goto LAB_00f32a74;
      uVar12 = FUN_00fddccc(*(undefined4 *)(param_1 + 0x458),1000);
      local_8 = *(undefined4 *)(&DAT_016d4768 + (int)uVar12 * 4);
      _local_c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar12 >> 0x20)]);
      iVar6 = FUN_00de3d80(0,&local_c);
      local_18 = iVar6;
      if (iVar6 == 0) {
        FUN_009cca90(param_1,&DAT_016dbc68);
        goto LAB_00f32a74;
      }
      *(undefined4 *)(param_1 + 0x4a4) = 0;
      uVar2 = *(uint *)(iVar6 + 4);
      lVar5 = (ulonglong)uVar2 * 0x14;
      iVar9 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5,&DAT_01b7bdf8
                          );
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        FUN_00401040(iVar9,0x14,uVar2,FUN_00f3a4a0);
      }
      *(int *)(param_1 + 0x4a0) = iVar9;
      fVar4 = *(float *)(iVar6 + 4);
      if (iVar9 != 0) {
        local_20 = 0.0;
        local_14 = fVar4;
        if (fVar4 != 0.0) {
          do {
            uVar10 = FUN_00f5a050();
            uVar11 = FUN_00f5a080();
            puVar7 = (undefined4 *)(*(int *)(param_1 + 0x4a0) + *(int *)(param_1 + 0x4a4) * 0x14);
            uVar8 = *(undefined4 *)(iVar6 + 0x18);
            puVar7[1] = uVar11;
            local_1c = puVar7 + 4;
            puVar7[2] = uVar8;
            *puVar7 = uVar10;
            puVar7[3] = 0;
            *local_1c = 0;
            iVar6 = FUN_009d49d0();
            if (iVar6 == 0) {
              FUN_009cca90(param_1);
            }
            else if ((((*(uint *)(iVar6 + 4) & 0x20000000) == 0) &&
                     (*(uint *)(param_1 + 0x460) == (uint)*(byte *)(iVar6 + 0x14))) &&
                    (iVar9 = FUN_009d4a00(), iVar9 != 0)) {
              iVar9 = FUN_009d4a40();
              if (iVar9 == 0) {
                FUN_009cca90(param_1);
              }
              else {
                iVar9 = FUN_00f20580();
                if (iVar9 == 0) {
                  FUN_009cca90();
                }
                else {
                  if ((*(uint *)(iVar6 + 4) & 0x8000000) == 0) {
                    if ((0xfd < *(ushort *)(local_10 + 4)) &&
                       ((*(int *)(param_1 + 100) == 0 ||
                        (iVar6 = FUN_00f4a2a0(0xf9,local_1c), iVar6 == 0)))) {
                      iVar6 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
                              cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
                      if (*(int *)(iVar6 + 0x40c) == 0) {
                        FUN_009cca90();
                        goto LAB_00f329f4;
                      }
                      *local_1c = *(int *)(iVar6 + 0x40c);
                    }
                  }
                  else {
                    iVar6 = FUN_00f20580();
                    if (iVar6 == 0) {
                      FUN_009cca90();
                      goto LAB_00f329f4;
                    }
                  }
                  *(int *)(param_1 + 0x4a4) = *(int *)(param_1 + 0x4a4) + 1;
                }
              }
            }
LAB_00f329f4:
            local_20 = (float)((int)local_20 + 1);
            iVar6 = local_18;
          } while ((uint)local_20 < (uint)local_14);
        }
        if (0 < *(int *)(param_1 + 0x4a4)) {
          *(undefined4 *)(param_1 + 0x488) = 0;
          iVar6 = FUN_009d4a80();
          if ((iVar6 != 0) && (*(char *)(iVar6 + 0x12) == '\x01')) {
            *(undefined4 *)(param_1 + 0x488) = 1;
          }
          __security_check_cookie(local_4 ^ (uint)&local_20);
          return;
        }
        goto LAB_00f32a74;
      }
    }
  }
  else {
    if (iVar6 == 2) {
      FUN_009cca90(param_1,&DAT_016dba7c);
      *(undefined4 *)(param_1 + 0x454) = 0;
      goto LAB_00f32a74;
    }
    if (iVar6 == 3) {
      *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x60);
      goto LAB_00f32667;
    }
  }
LAB_00f32a6b:
  FUN_009cca90();
LAB_00f32a74:
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}

// 00F32A90  esp18::vf10  size=5594  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp18::vf10(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint *puVar7;
  double *pdVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float fStack_1c8;
  float local_1c4;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_19c;
  float local_198;
  uint local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  undefined8 local_180;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  int iStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float fStack_124;
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [12];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [18];
  undefined1 auStack_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&uStack_1f4;
  if (((*(uint *)(param_1 + 0x30) & 0xc0000000) != 0) ||
     ((*(int *)(param_1 + 0x488) == 1 && (iVar4 = FUN_009cdea0(), iVar4 == 0)))) goto LAB_00f3405c;
  if (*(int *)(param_1 + 0x498) == 0) {
    *(undefined4 *)(param_1 + 0x49c) = 0;
  }
  else {
    if ((DAT_01edd490 == 0) ||
       (puVar5 = (undefined4 *)cPrimHeap::allocBuffer(8,0x20), puVar5 == (undefined4 *)0x0)) {
      puVar5 = (undefined4 *)0x0;
    }
    *(undefined4 **)(param_1 + 0x49c) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      FUN_009cca90(param_1,&DAT_016dbe28);
      __security_check_cookie(local_14 ^ (uint)&uStack_1f4);
      return;
    }
    *puVar5 = *(undefined4 *)(param_1 + 0x48c);
    *(undefined4 *)(*(int *)(param_1 + 0x49c) + 4) = 0;
  }
  FUN_00f3e9e0(param_1);
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (pfVar6 = (float *)(*(int *)(param_1 + 0x58) + 0x30), pfVar6 == (float *)0x0)) {
    local_19c = 0.0;
  }
  else {
    local_19c = *pfVar6;
    if ((float)((int)local_19c + 0xfU & 0xfffffff0) != local_19c) {
      uVar9 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar9);
    }
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar7 = (uint *)(*(int *)(param_1 + 0x58) + 0x10), puVar7 == (uint *)0x0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = *puVar7;
    if ((uVar11 + 0xf & 0xfffffff0) != uVar11) {
      uVar9 = FUN_00f59ed0(1);
      FUN_00dd5650(&DAT_016597b4,uVar9);
    }
  }
  local_194 = uVar11;
  if (*(int *)(param_1 + 0x488) == 1) {
    FUN_009cdeb0(&local_190);
    local_190 = local_190 + *(float *)(uVar11 + 4);
    local_18c = *(float *)(uVar11 + 8) + local_18c;
    local_188 = *(float *)(uVar11 + 0xc) + local_188;
  }
  else {
    local_190 = *(float *)(param_1 + 400);
    local_18c = *(float *)(param_1 + 0x194);
    local_188 = *(float *)(param_1 + 0x198);
    local_184 = *(float *)(param_1 + 0x19c);
  }
  FUN_00ea0000(&local_150,&local_190);
  if (local_148 == 0.0) {
    local_150 = 0.0;
    local_14c = 0.0;
    local_148 = 0.0;
    local_144 = 0x3f800000;
  }
  else {
    local_180 = (double)local_150;
    iVar4 = FUN_00f98a90();
    local_1ec = (float)(iVar4 / 2);
    local_150 = (float)local_180 - (float)(int)local_1ec;
    local_180 = (double)local_14c;
    iVar4 = FUN_00f98aa0();
    local_1ec = (float)(iVar4 / 2);
    local_14c = (float)local_180 - (float)(int)local_1ec;
  }
  if (*(int *)(param_1 + 0x48c) == -1) {
LAB_00f33196:
    local_1ec = ABS(local_148);
    if (0.0 < local_1ec) {
      *(float *)(param_1 + 400) = local_150;
      *(float *)(param_1 + 0x194) = local_14c;
      *(undefined4 *)(param_1 + 0x198) = 0xc59c4000;
      *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
      local_1e8 = *(float *)(param_1 + 0x25c);
      if ((*(int *)(param_1 + 0x48c) == -1) || (*(int *)(param_1 + 0x49c) != 0)) {
LAB_00f3326e:
        local_1ec = ABS(*(float *)(param_1 + 400));
        if (local_1ec <= *(float *)(param_1 + 0x46c)) {
          if (*(float *)(param_1 + 0x474) < local_1ec != (*(float *)(param_1 + 0x474) == local_1ec))
          {
            local_1ec = local_1ec - *(float *)(param_1 + 0x474);
            local_1e8 = (1.0 - local_1ec /
                               (*(float *)(param_1 + 0x46c) - *(float *)(param_1 + 0x474))) *
                        local_1e8;
            if (local_1e8 < 0.01 != (local_1e8 == 0.01)) goto LAB_00f34050;
          }
          local_1ec = ABS(*(float *)(param_1 + 0x194));
          if (local_1ec <= *(float *)(param_1 + 0x470)) {
            if (*(float *)(param_1 + 0x478) < local_1ec !=
                (*(float *)(param_1 + 0x478) == local_1ec)) {
              local_1ec = local_1ec - *(float *)(param_1 + 0x478);
              local_1e8 = (1.0 - local_1ec /
                                 (*(float *)(param_1 + 0x470) - *(float *)(param_1 + 0x478))) *
                          local_1e8;
              if (local_1e8 <= 0.01) goto LAB_00f34050;
            }
            uVar9 = FUN_00e9fe70();
            fVar1 = local_19c;
            if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
              fVar12 = (float10)FUN_00edbf30(uVar9,&local_190,*(undefined4 *)((int)local_19c + 0xc),
                                             *(undefined4 *)((int)local_19c + 0x10));
            }
            else {
              fVar12 = (float10)1;
            }
            local_1c4 = (float)fVar12;
            local_1e8 = local_1c4 * local_1e8;
            if (0.01 < local_1e8) {
              uVar9 = FUN_00e9fe70();
              local_1e4 = *(float *)((int)fVar1 + 0x60);
              local_1ec = *(float *)((int)fVar1 + 100);
              if ((*(uint *)(param_1 + 0x30) & 0x200) == 0) {
                fVar12 = (float10)FUN_00edc040(uVar9,&local_190,local_1e4,local_1ec);
                local_1c4 = (float)fVar12;
              }
              else {
                local_1c4 = 1.0;
              }
              local_1e8 = local_1c4 * local_1e8;
              if (0.01 < local_1e8) {
                fVar1 = (float)*(int *)(param_1 + 0x464);
                if (*(int *)(param_1 + 0x464) < 0) {
                  fVar1 = fVar1 + 4.2949673e+09;
                }
                fVar3 = local_1ec;
                if (fVar1 != 0.0) {
                  local_1c0 = 0.0;
                  local_1b8 = 0.0;
                  local_a8[0] = 0.0;
                  local_ac = 0.0;
                  local_b0 = 0.0;
                  local_b4 = 0;
                  local_bc = 0;
                  local_c0 = 0.0;
                  local_c4 = 0.0;
                  local_c8 = 0.0;
                  local_d0 = 0;
                  local_d4 = 0;
                  local_d8 = 0;
                  local_dc = 0;
                  local_a8[1] = 1.0;
                  local_b8 = 0x3f800000;
                  local_cc = 0x3f800000;
                  local_e0 = 0x3f800000;
                  if (*(int *)(param_1 + 0x50) != 0) {
                    FID_conflict__memcpy
                              (local_a8 + 2,(void *)(*(int *)(param_1 + 0x50) + 0x10),0x40);
                    local_a8[0xe] = 0.0;
                    local_a8[0xf] = 0.0;
                    local_a8[0x10] = 0.0;
                    D3DXMatrixMultiply(&local_e0,&local_e0,local_a8 + 2);
                  }
                  local_a8[0x10] = 0.0;
                  local_a8[0xf] = 0.0;
                  local_a8[0xe] = 0.0;
                  local_a8[0xd] = 0.0;
                  local_a8[0xb] = 0.0;
                  local_a8[10] = 0.0;
                  local_a8[9] = 0.0;
                  local_a8[8] = 0.0;
                  local_a8[6] = 0.0;
                  local_a8[5] = 0.0;
                  local_a8[4] = 0.0;
                  local_a8[3] = 0.0;
                  local_a8[0x11] = 1.0;
                  local_a8[0xc] = 1.0;
                  local_a8[7] = 1.0;
                  local_a8[2] = 1.0;
                  if (*(float *)(param_1 + 0x1b8) != 0.0) {
                    D3DXMatrixRotationZ(auStack_60,*(undefined4 *)(param_1 + 0x1b8));
                    D3DXMatrixMultiply(local_a8,local_a8 + 0x10,local_a8);
                  }
                  if (*(float *)(param_1 + 0x1b4) != 0.0) {
                    D3DXMatrixRotationY(auStack_60,*(undefined4 *)(param_1 + 0x1b4));
                    D3DXMatrixMultiply(local_a8,local_a8 + 0x10,local_a8);
                  }
                  if (*(float *)(param_1 + 0x1b0) != 0.0) {
                    D3DXMatrixRotationX(auStack_60,*(undefined4 *)(param_1 + 0x1b0));
                    D3DXMatrixMultiply(local_a8,local_a8 + 0x10,local_a8);
                  }
                  D3DXMatrixMultiply(&local_e0,local_a8 + 2,&local_e0);
                  local_1ec = 0.0;
                  local_1e8 = 0.0;
                  local_1e4 = 7.0;
                  local_1e0 = 0.0;
                  D3DXVec3TransformNormal((int)&local_180 + 4,&local_1ec,auStack_ec);
                  local_c8 = local_188 + local_c8;
                  local_c4 = local_184 + local_c4;
                  local_c0 = (float)local_180 + local_c0;
                  uStack_1f4 = 0;
                  uStack_1f0 = 0;
                  local_1ec = 0.0;
                  D3DXVec3TransformNormal(&local_1d8,&stack0xfffffe08,auStack_f8);
                  fVar1 = (float)local_1c0 + local_b0;
                  local_1c0._4_4_ = local_ac + local_1c0._4_4_;
                  local_1c0 = (double)CONCAT44(local_1c0._4_4_,fVar1);
                  local_1b8 = local_a8[0] + local_1b8;
                  local_1ec = local_1c0._4_4_ * local_1c0._4_4_ + fVar1 * fVar1 +
                              local_1b8 * local_1b8;
                  if (local_1ec < 0.0 == (local_1ec == 0.0)) {
                    FUN_00ddf460(&local_1c0,&local_1c0);
                  }
                  else {
                    FUN_00dd5650(&DAT_0163d0ac);
                    local_1c0 = 0.0078125;
                    local_1b8 = 0.0;
                  }
                  pfVar6 = (float *)FUN_00e9fe70();
                  local_1b0 = *pfVar6 - local_190;
                  local_1ac = pfVar6[1] - local_18c;
                  local_1a8 = pfVar6[2] - local_188;
                  local_1a4 = pfVar6[3] - local_184;
                  local_1ec = local_1ac * local_1ac + local_1b0 * local_1b0 + local_1a8 * local_1a8;
                  if (local_1ec < 0.0 == (local_1ec == 0.0)) {
                    FUN_00ddf460(&local_1b0,&local_1b0);
                  }
                  else {
                    FUN_00dd5650(&DAT_0163d0ac);
                    local_1b0 = 0.0;
                    local_1ac = 1.0;
                    local_1a8 = 0.0;
                  }
                  local_1ec = local_1a8 * local_1b8 +
                              local_1ac * local_1c0._4_4_ + (float)local_1c0 * local_1b0;
                  fVar12 = (float10)FUN_00fdc4e0();
                  iVar4 = *(int *)(param_1 + 0x464);
                  local_180 = (double)CONCAT44(local_180._4_4_,iVar4);
                  local_1ec = (((float)fVar12 + (float)fVar12) * 360.0) / 6.2831855;
                  fVar1 = (float)iVar4;
                  if (iVar4 < 0) {
                    fVar1 = fVar1 + 4.2949673e+09;
                  }
                  if (fVar1 < local_1ec) goto LAB_00f34050;
                  iVar10 = *(int *)(param_1 + 0x468);
                  local_180 = (double)CONCAT44(local_180._4_4_,iVar10);
                  fVar3 = (float)iVar10;
                  if (iVar10 < 0) {
                    fVar3 = fVar3 + 4.2949673e+09;
                  }
                  if (fVar3 < local_1ec != (fVar3 == local_1ec)) {
                    iVar4 = iVar4 - iVar10;
                    local_180 = (double)CONCAT44(local_180._4_4_,iVar4);
                    fVar1 = (float)iVar4;
                    if (iVar4 < 0) {
                      fVar1 = fVar1 + 4.2949673e+09;
                    }
                    local_1ec = 1.0 - (local_1ec - fVar3) / fVar1;
                    local_1e8 = local_1ec * local_1e8;
                    fVar3 = local_1ec;
                    if (local_1e8 <= 0.01) goto LAB_00f34050;
                  }
                }
                local_1ec = fVar3;
                if (0.0 < *(float *)(param_1 + 0x47c)) {
                  pfVar6 = (float *)FUN_00e9fe70();
                  local_1e0 = local_190 - *pfVar6;
                  local_1dc = local_18c - pfVar6[1];
                  local_1d8 = local_188 - pfVar6[2];
                  local_1e4 = local_1d8 * local_1d8 + local_1dc * local_1dc + local_1e0 * local_1e0;
                  local_1ec = *(float *)(param_1 + 0x47c) * *(float *)(param_1 + 0x47c);
                  if (local_1ec < local_1e4) goto LAB_00f34050;
                  local_1ec = *(float *)(param_1 + 0x480) * *(float *)(param_1 + 0x480);
                  if (local_1ec < local_1e4) {
                    fVar12 = (float10)FUN_00fdef70();
                    local_1ec = (float)fVar12;
                    local_1e8 = (1.0 - (local_1ec - *(float *)(param_1 + 0x480)) /
                                       (*(float *)(param_1 + 0x47c) - *(float *)(param_1 + 0x480)))
                                * local_1e8;
                    if (local_1e8 <= 0.01) goto LAB_00f34050;
                  }
                }
                iStack_15c = -1;
                iVar4 = FUN_009d4a80();
                if (iVar4 != 0) {
                  iStack_15c = *(char *)(iVar4 + 0x11) + -1;
                }
                if (*(int *)(param_1 + 0x494) == 0) {
LAB_00f33b14:
                  local_198 = 0.0;
                  if (*(int *)(param_1 + 0x484) != 0) {
                    iVar4 = FUN_00e9fef0();
                    local_198 = -*(float *)(iVar4 + 8);
                  }
                  fVar1 = *(float *)(param_1 + 400);
                  if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
                    fVar12 = (float10)FUN_0043f4b0(*(undefined4 *)(param_1 + 400),0xb727c5ac);
                  }
                  else {
                    fVar12 = (float10)FUN_0043f490(*(undefined4 *)(param_1 + 400),0x3727c5ac);
                  }
                  *(float *)(param_1 + 400) = (float)fVar12;
                  if (*(float *)(param_1 + 400) == 0.0) {
                    fStack_124 = 0.0;
                  }
                  else {
                    fStack_124 = *(float *)(param_1 + 0x194) / *(float *)(param_1 + 400);
                  }
                  local_1b0 = *(float *)(param_1 + 400);
                  local_1ac = *(float *)(param_1 + 0x194);
                  local_1a8 = *(float *)(param_1 + 0x198);
                  local_1a4 = *(float *)(param_1 + 0x19c);
                  iVar4 = FUN_00f98a90();
                  local_194 = 0;
                  local_1ec = (float)iVar4 * 0.5;
                  local_180 = (double)CONCAT44(local_180._4_4_,1.0 / local_1ec);
                  local_19c = 0.0;
                  fStack_158 = 0.0;
                  fStack_154 = 1.0;
                  local_1e0 = 0.0;
                  if (0 < (int)*(float *)(param_1 + 0x4a4)) {
                    local_1c4 = 0.0;
                    local_1ec = *(float *)(param_1 + 0x4a4);
                    do {
                      iVar10 = *(int *)(param_1 + 0x4a0) + (int)local_1c4;
                      local_1e4 = (float)FUN_009d49d0();
                      puVar7 = (uint *)FUN_009d4a00();
                      iVar4 = FUN_009d4a40();
                      *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(iVar10 + 0xc);
                      *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(iVar10 + 0x10);
                      *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(iVar4 + 0x25);
                      *(ushort *)(param_1 + 0x432) = (ushort)*(byte *)(iVar4 + 0x1e);
                      *(float *)(param_1 + 0x1c0) = (float)puVar7[0x11] * 0.017453292;
                      *(float *)(param_1 + 0x1c4) = (float)puVar7[0x12] * 0.017453292;
                      *(float *)(param_1 + 0x1c8) = (float)puVar7[0x13] * 0.017453292 + local_198;
                      *(uint *)(param_1 + 0x250) = puVar7[0x32];
                      *(uint *)(param_1 + 0x254) = puVar7[0x33];
                      *(uint *)(param_1 + 600) = puVar7[0x34];
                      *(float *)(param_1 + 0x25c) = (float)puVar7[0x35] * local_1e8;
                      if ((*puVar7 & 0x100000) == 0) {
                        *(uint *)(param_1 + 0x100) = puVar7[0x21];
                        fVar1 = (float)puVar7[0x21];
                      }
                      else {
                        *(float *)(param_1 + 0x100) = (float)puVar7[0x21] * (float)puVar7[0x58];
                        fVar1 = (float)puVar7[0x20] * (float)puVar7[0x58];
                      }
                      *(float *)(param_1 + 0x104) = fVar1;
                      if (local_194 == 0) {
                        local_1e0 = (float)puVar7[1];
                        local_1dc = (float)puVar7[2];
                        if (local_1e0 == 0.0) {
                          local_19c = 0.0;
                        }
                        else {
                          local_19c = *(float *)(param_1 + 400) / local_1e0;
                        }
                        if (local_1dc == 0.0) {
                          fStack_158 = 0.0;
                        }
                        else {
                          fStack_158 = *(float *)(param_1 + 0x194) / local_1dc;
                        }
                        fStack_154 = 1.0;
                        if ((-1 < iStack_15c) &&
                           (local_1e4 = local_19c * local_19c + fStack_158 * fStack_158,
                           local_1e4 < 0.20249999)) {
                          fVar12 = (float10)FUN_00fdef70();
                          local_1e4 = (float)fVar12;
                          fStack_154 = local_1e4 / 0.45;
                        }
                      }
                      else {
                        if ((*(byte *)((int)local_1e4 + 4) & 0x20) == 0) {
                          if (local_19c != 0.0) {
                            *(float *)(param_1 + 400) =
                                 (local_1e0 +
                                 *(float *)(param_1 + 0x490) * ((float)puVar7[1] - local_1e0)) *
                                 local_19c;
                          }
                          if (fStack_158 != 0.0) {
                            fVar1 = fStack_124 * *(float *)(param_1 + 400);
                            goto LAB_00f33e62;
                          }
                        }
                        else {
                          *(uint *)(param_1 + 400) = puVar7[1];
                          fVar1 = (float)puVar7[2];
LAB_00f33e62:
                          *(float *)(param_1 + 0x194) = fVar1;
                        }
                        if (iStack_15c < (int)local_194) {
                          *(float *)(param_1 + 0x25c) = fStack_154 * *(float *)(param_1 + 0x25c);
                        }
                        if (((*(uint *)((int)local_1e4 + 4) & 0x100000) != 0) &&
                           (((*(float *)(param_1 + 400) != local_1b0 ||
                             (*(float *)(param_1 + 0x194) != local_1ac)) ||
                            ((*(float *)(param_1 + 0x198) != local_1a8 ||
                             (*(float *)(param_1 + 0x19c) != local_1a4)))))) {
                          local_170 = local_1b0 - *(float *)(param_1 + 400);
                          local_16c = local_1ac - *(float *)(param_1 + 0x194);
                          local_1c0 = (double)*(float *)(param_1 + 0x1c8);
                          fVar12 = (float10)FUN_00fdecda();
                          fStack_1c8 = (float)fVar12;
                          *(float *)(param_1 + 0x1c8) = (float)local_1c0 - (fStack_1c8 - 1.5707964);
                        }
                        if ((*(byte *)((int)local_1e4 + 8) & 1) != 0) {
                          fStack_1c8 = ABS(*(float *)(param_1 + 400) - local_1b0) * (float)local_180
                          ;
                          fVar1 = fStack_1c8 * *(float *)(param_1 + 0x100);
                          *(float *)(param_1 + 0x100) = fVar1;
                          fStack_1c8 = *(float *)(param_1 + 0x104) * fStack_1c8;
                          *(float *)(param_1 + 0x104) = fStack_1c8;
                          if ((char)puVar7[0x1e] == '\0') {
                            if ((*puVar7 & 0x100000) == 0) {
                              *(float *)(param_1 + 0x100) =
                                   (float)puVar7[0x24] + (float)puVar7[0x26] * fVar1;
                              *(float *)(param_1 + 0x104) =
                                   fStack_1c8 * (float)puVar7[0x26] + (float)puVar7[0x24];
                            }
                            else {
                              fStack_1c8 = (float)puVar7[0x28] * (float)puVar7[0x24] +
                                           fVar1 * (float)puVar7[0x26] * (float)puVar7[0x29];
                              *(float *)(param_1 + 0x100) = fStack_1c8;
                              *(float *)(param_1 + 0x104) =
                                   (float)puVar7[0x28] * (float)puVar7[0x24] +
                                   fStack_1c8 * (float)puVar7[0x27] * (float)puVar7[0x29];
                            }
                          }
                        }
                      }
                      iVar4 = cEspDrawWork::cEspDrawWork_2(0xffffffff,iVar10);
                      if (iVar4 != 0) {
                        local_194 = local_194 + 1;
                      }
                      local_1c4 = (float)((int)local_1c4 + 0x14);
                      local_1ec = (float)((int)local_1ec + -1);
                    } while (local_1ec != 0.0);
                  }
                }
                else {
                  local_1ec = _DAT_018d4824;
                  local_1e4 = _DAT_018d5df8;
                  local_198 = _DAT_018d4830;
                  if (_DAT_018d4824 <= _DAT_018d5df8) {
                    fVar12 = (float10)FUN_00e04780(_DAT_018d4824,_DAT_018d5df8,_DAT_018d4830);
                    local_1e8 = (float)(fVar12 * (float10)local_1e8);
                    if (0.01 < local_1e8) goto LAB_00f33b14;
                  }
                }
              }
            }
          }
        }
      }
      else {
        fVar12 = (float10)FUN_00eca1e0(*(int *)(param_1 + 0x48c));
        local_1ec = (float)fVar12;
        if (local_1ec < 0.0 == (local_1ec == 0.0)) {
          local_1ec = local_1ec * 1.6666666;
          fVar12 = (float10)FUN_0043f4b0(local_1ec,0x3f800000);
          local_1e8 = (float)(fVar12 * (float10)local_1e8);
          if (local_1e8 < 0.01 == (local_1e8 == 0.01)) goto LAB_00f3326e;
        }
      }
    }
  }
  else {
    local_198 = *(float *)(param_1 + 0x25c);
    uVar11 = *(uint *)(param_1 + 0x30);
    uVar2 = *(undefined2 *)(param_1 + 0x4e);
    *(float *)(param_1 + 400) = local_190;
    local_1e4 = (float)(uVar11 >> 9 & 1);
    *(float *)(param_1 + 0x194) = local_18c;
    *(float *)(param_1 + 0x198) = local_188;
    *(float *)(param_1 + 0x19c) = local_184;
    if (*(float *)(param_1 + 0x4b8) != 0.0) {
      local_1b0 = *(float *)(param_1 + 400);
      local_1ac = *(float *)(param_1 + 0x194);
      local_1a8 = *(float *)(param_1 + 0x198);
      local_1a4 = *(float *)(param_1 + 0x19c);
      pdVar8 = (double *)FUN_00e9fe70();
      local_1c0 = *pdVar8;
      local_1b8 = *(float *)(pdVar8 + 1);
      local_1b4 = *(float *)((int)pdVar8 + 0xc);
      local_140 = *(float *)(param_1 + 0x4ac);
      local_13c = *(float *)(param_1 + 0x4b0);
      local_138 = *(float *)(param_1 + 0x4b4);
      local_1c4 = *(float *)(param_1 + 0x4b8) * *(float *)(param_1 + 0x4b8);
      local_1e0 = local_140 - *(float *)pdVar8;
      local_1dc = local_13c - *(float *)((int)pdVar8 + 4);
      local_1d8 = local_138 - local_1b8;
      local_1ec = local_1d8 * local_1d8 + local_1e0 * local_1e0 + local_1dc * local_1dc;
      if (local_1ec < local_1c4) {
        fVar1 = local_140 - local_1b0;
        fVar3 = local_13c - local_1ac;
        local_180 = (double)CONCAT44(fVar3,fVar1);
        local_178 = local_138 - local_1a8;
        local_1ec = fVar3 * fVar3 + fVar1 * fVar1 + local_178 * local_178;
        if (local_1c4 < local_1ec) {
          local_1e0 = *(float *)pdVar8 - local_1b0;
          local_1dc = *(float *)((int)pdVar8 + 4) - local_1ac;
          local_1d8 = local_1b8 - local_1a8;
          local_1d4 = local_1b4 - local_1a4;
          if (((local_1e0 != 0.0) || (local_1dc != 0.0)) || (local_1d8 != 0.0)) {
            FUN_00ddf460(&local_170,&local_1e0);
            fVar1 = local_170 * (float)local_180 + local_16c * local_180._4_4_ +
                    local_168 * local_178;
            local_1d4 = fVar1 * local_164;
            local_1e0 = fVar1 * local_170 + local_1b0;
            local_1dc = local_1ac + fVar1 * local_16c;
            local_1c0 = (double)CONCAT44(local_1dc,local_1e0);
            local_1b8 = local_1a8 + local_168 * fVar1;
            local_1b4 = local_1a4 + local_1d4;
            local_1e0 = local_140 - local_1e0;
            local_1dc = local_13c - local_1dc;
            local_1d8 = local_138 - local_1b8;
            local_1ec = local_1c4 -
                        (local_1d8 * local_1d8 + local_1dc * local_1dc + local_1e0 * local_1e0);
            fVar12 = (float10)FUN_00fdef70();
            local_1ec = -(float)fVar12;
            local_1e0 = local_1ec * local_170;
            local_1dc = local_1ec * local_16c;
            local_1d8 = local_1ec * local_168;
            local_1d4 = local_1ec * local_164;
            *(float *)(param_1 + 400) = (float)local_1c0 + local_1e0;
            *(float *)(param_1 + 0x194) = local_1dc + local_1c0._4_4_;
            *(float *)(param_1 + 0x198) = local_1d8 + local_1b8;
            *(float *)(param_1 + 0x19c) = local_1d4 + local_1b4;
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x4a8);
    *(undefined2 *)(param_1 + 0x432) = 1;
    *(undefined1 *)(param_1 + 0x440) = 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(local_194 + 0x84);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(local_194 + 0x84);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
    if (*(float *)(param_1 + 0x10c) != 1.0) {
      *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x108);
    }
    *(undefined2 *)(param_1 + 0x4e) = 0xfffe;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffeff;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
    iVar4 = cEspDrawWork::cEspDrawWork_2(*(undefined4 *)(param_1 + 0x48c),param_1 + 0x54);
    *(undefined2 *)(param_1 + 0x4e) = uVar2;
    if ((uVar11 >> 8 & 1) == 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffeff;
    }
    else {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
    }
    if (local_1e4 == 0.0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffdff;
    }
    else {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
    }
    *(float *)(param_1 + 0x25c) = local_198;
    if (iVar4 != 0) goto LAB_00f33196;
  }
LAB_00f34050:
  FUN_00f3ea40();
LAB_00f3405c:
  __security_check_cookie(local_14 ^ (uint)&uStack_1f4);
  return;
}

// 00F407C0  esp18::vf00  size=72  [class]
undefined4 * __thiscall esp18::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

