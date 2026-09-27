// lib/havok/unit_010C47B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010C47B0..010DA3E0, 900 functions

#include "mgrr.h"
#include "hkAlignSceneToNodeOptions.h"
#include "hkBaseObject.h"
#include "hkBuiltinTypeRegistry.h"
#include "hkDefaultBuiltinTypeRegistry.h"
#include "hkDefaultClassNameRegistry.h"
#include "hkTypeInfoRegistry.h"
#include "hkgpIndexedMesh.h"
#include "hkgpMesh.h"
#include "hkxAnimatedFloat.h"
#include "hkxAnimatedMatrix.h"
#include "hkxAnimatedQuaternion.h"
#include "hkxAnimatedVector.h"
#include "hkxAttributeHolder.h"
#include "hkxBlob.h"
#include "hkxBlobMeshShape.h"
#include "hkxCamera.h"
#include "hkxEdgeSelectionChannel.h"
#include "hkxEnum.h"
#include "hkxEnvironment.h"
#include "hkxIndexBuffer.h"
#include "hkxLight.h"
#include "hkxMaterial.h"
#include "hkxMaterialEffect.h"
#include "hkxMaterialShader.h"
#include "hkxMaterialShaderSet.h"
#include "hkxMesh.h"
#include "hkxMeshSection.h"
#include "hkxNode.h"
#include "hkxNodeSelectionSet.h"
#include "hkxScene.h"
#include "hkxSkinBinding.h"
#include "hkxSparselyAnimatedBool.h"
#include "hkxSparselyAnimatedEnum.h"
#include "hkxSparselyAnimatedInt.h"
#include "hkxSparselyAnimatedString.h"
#include "hkxTextureFile.h"
#include "hkxTextureInplace.h"
#include "hkxTriangleSelectionChannel.h"
#include "hkxVertexBuffer.h"
#include "hkxVertexFloatDataChannel.h"
#include "hkxVertexIntDataChannel.h"
#include "hkxVertexSelectionChannel.h"
#include "hkxVertexVectorDataChannel.h"

// 010C47B0  FUN_010c47b0  size=563  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_010c47b0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  iVar7 = *param_3;
  iVar3 = param_3[1];
  uVar4 = *(undefined4 *)(iVar7 + 8 + iVar3 * 4);
  uVar5 = *(undefined4 *)(iVar7 + 8 + (9 >> ((char)iVar3 * '\x02' & 0x1fU) & 3U) * 4);
  uVar6 = (uint)((*(uint *)(iVar7 + 0x14 + iVar3 * 4) & 0xfffffffc) == 0);
  piVar9 = (int *)(param_1 + 0x30);
  iVar7 = (-(uint)(*(int *)(param_1 + 0x34) + uVar6 != 0) & 0xfffffffe) + 4;
  uVar8 = *(uint *)(param_1 + 0x38) & 0x3fffffff;
  if ((int)uVar8 < iVar7) {
    iVar3 = uVar8 * 2;
    if (iVar7 < iVar3) {
      iVar7 = iVar3;
    }
    iVar7 = FUN_0100a210(&PTR_vftable_018e9b94,piVar9,iVar7,8);
    if (iVar7 == 1) {
      *(undefined1 *)(param_1 + 0x648) = 1;
      if ((_DAT_0209a9b8 & 1) == 0) {
        _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
        DAT_0209a9b0 = 0;
        DAT_0209a9b4 = 0;
      }
      *param_2 = DAT_0209a9b0;
      param_2[1] = DAT_0209a9b4;
      return param_2;
    }
  }
  iVar7 = *param_3;
  iVar3 = param_3[1];
  if (*(uint *)(param_1 + 0x34) == (*(uint *)(param_1 + 0x38) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar9,8);
  }
  piVar1 = (int *)(*piVar9 + *(int *)(param_1 + 0x34) * 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar7;
    piVar1[1] = 9 >> ((char)iVar3 * '\x02' & 0x1fU) & 3;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  iVar7 = *param_3;
  iVar3 = param_3[1];
  if (*(uint *)(param_1 + 0x34) == (*(uint *)(param_1 + 0x38) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar9,8);
  }
  piVar1 = (int *)(*piVar9 + *(int *)(param_1 + 0x34) * 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar7;
    piVar1[1] = 0x12 >> ((char)iVar3 * '\x02' & 0x1fU) & 3;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  if (uVar6 == 0) {
    uVar6 = *(uint *)(*param_3 + 0x14 + param_3[1] * 4);
    if (*(uint *)(param_1 + 0x34) == (*(uint *)(param_1 + 0x38) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar9,8);
    }
    puVar2 = (uint *)(*piVar9 + *(int *)(param_1 + 0x34) * 8);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = uVar6 & 0xfffffffc;
      puVar2[1] = 9 >> ((byte)uVar6 & 3) * '\x02' & 3;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar6 = *(uint *)(*param_3 + 0x14 + param_3[1] * 4);
    if (*(uint *)(param_1 + 0x34) == (*(uint *)(param_1 + 0x38) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar9,8);
    }
    puVar2 = (uint *)(*piVar9 + *(int *)(param_1 + 0x34) * 8);
    if (puVar2 != (uint *)0x0) {
      *puVar2 = uVar6 & 0xfffffffc;
      puVar2[1] = 0x12 >> ((byte)uVar6 & 3) * '\x02' & 3;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  FUN_010c3830();
  FUN_010bd640(param_2,param_3,uVar4,uVar5);
  return param_2;
}

// 010C49F0  FUN_010c49f0  size=15  [run]
void FUN_010c49f0(void)

{
  FUN_010c3ea0();
  return;
}

// 010C4A00  FUN_010c4a00  size=228  [run]
int * __thiscall FUN_010c4a00(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = 0;
  param_1[2] = -0x80000000;
  param_1[1] = 0;
  param_1[3] = 0;
  if (0 < (int)param_2) {
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,((int)param_2 < 0) - 1 & param_2,0xc);
  }
  iVar2 = (param_1[1] - param_2) + -1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*param_1 + param_2 * 0xc + 8 + iVar2 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 << 4);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      piVar3 = piVar3 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_2;
  if (0 < (int)param_2) {
    iVar2 = 0;
    do {
      *(undefined4 *)(*param_1 + 4 + iVar2) = 0;
      iVar2 = iVar2 + 0xc;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_1;
}

// 010C4AF0  hkgpMesh::IConvexOverlap::IConvexShape::IConvexShape_2  size=1317  [run]
void hkgpMesh::IConvexOverlap::IConvexShape::IConvexShape_2(void)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  float *pfVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  undefined8 uVar30;
  int local_150 [8];
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined **local_ac;
  float *local_a8;
  undefined4 local_a4;
  float local_a0 [4];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  char local_38;
  char local_37;
  undefined1 local_36;
  float local_34;
  int local_30;
  float local_2c;
  undefined1 local_25;
  int local_24;
  float local_20;
  int local_1c;
  int *local_18;
  char local_11;
  
  uVar30 = FUN_01098e00();
  local_30 = (int)uVar30;
  iVar9 = *(int *)((int)((ulonglong)uVar30 >> 0x20) + 8);
  if (iVar9 != 0) {
    local_20 = 0.0;
    if (0 < iVar9) {
      local_24 = 0;
      do {
        local_2c = (float)(*(int *)(local_1c + 4) + local_24);
        iVar9 = 0;
        local_18 = (int *)((int)local_2c + 0x60);
        puVar8 = (undefined4 *)((int)local_2c + 0x40);
        do {
          *puVar8 = puVar8[-0x10];
          puVar8[1] = puVar8[-0xf];
          puVar8[2] = puVar8[-0xe];
          puVar8[3] = puVar8[-0xd];
          uVar2 = FUN_0109fcc0(*local_18,puVar8 + -8,puVar8,8,1);
          local_18 = local_18 + 1;
          *(undefined1 *)((int)local_2c + 0x68 + iVar9) = uVar2;
          iVar9 = iVar9 + 1;
          puVar8 = puVar8 + 4;
        } while (iVar9 < 2);
        local_24 = local_24 + 0x70;
        local_20 = (float)((int)local_20 + 1);
      } while ((int)local_20 < *(int *)(local_1c + 8));
    }
    piVar4 = (int *)(local_1c + 4);
    local_18 = piVar4;
    do {
      pfVar6 = (float *)(piVar4[1] * 0x70 + -0x70 + *piVar4);
      pfVar10 = local_a0;
      for (iVar9 = 0x1c; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar10 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar10 = pfVar10 + 1;
      }
      piVar4[1] = piVar4[1] + -1;
      local_11 = '\x01';
      uVar7 = 0;
      if ((local_38 == '\0') || (local_37 == '\0')) {
LAB_010c4d60:
        fVar15 = local_34;
        if ((int)local_34 < 5) {
          local_f0 = (local_90 - local_a0[0]) * 0.5 + local_a0[0];
          fStack_ec = (fStack_8c - local_a0[1]) * 0.5 + local_a0[1];
          fStack_e8 = (fStack_88 - local_a0[2]) * 0.5 + local_a0[2];
          fStack_e4 = (fStack_84 - local_a0[3]) * 0.5 + local_a0[3];
          fVar19 = (local_70 - local_80) * 0.5 + local_80;
          fVar20 = (fStack_6c - fStack_7c) * 0.5 + fStack_7c;
          fVar21 = (fStack_68 - fStack_78) * 0.5 + fStack_78;
          fVar22 = (fStack_64 - fStack_74) * 0.5 + fStack_74;
          local_20 = (local_3c + local_40) * 0.5;
          fVar16 = fVar19 * fVar19;
          fVar17 = fVar20 * fVar20;
          fVar18 = fVar21 * fVar21;
          fVar23 = fVar17 + fVar16 + fVar18;
          fVar24 = fVar17 + fVar16 + fVar18;
          fVar25 = fVar17 + fVar16 + fVar18;
          fVar18 = fVar17 + fVar16 + fVar18;
          auVar26._0_12_ = ZEXT812(0);
          auVar26._12_4_ = 0;
          uVar11 = -(uint)(0.0 - fVar23 < 0.0);
          uVar12 = -(uint)(0.0 - fVar24 < 0.0);
          uVar13 = -(uint)(0.0 - fVar25 < 0.0);
          uVar14 = -(uint)(0.0 - fVar18 < 0.0);
          auVar27._4_4_ = fVar24;
          auVar27._0_4_ = fVar23;
          auVar27._8_4_ = fVar25;
          auVar27._12_4_ = fVar18;
          auVar27 = rsqrtps(auVar26,auVar27);
          fVar16 = auVar27._0_4_;
          fVar17 = auVar27._4_4_;
          fVar28 = auVar27._8_4_;
          fVar29 = auVar27._12_4_;
          auVar1._4_4_ = uVar12;
          auVar1._0_4_ = uVar11;
          auVar1._8_4_ = uVar13;
          auVar1._12_4_ = uVar14;
          iVar9 = movmskps(uVar7,auVar1);
          local_c0 = (float)((uint)((float)(~-(uint)(fVar23 <= 0.0) &
                                           (uint)((3.0 - fVar16 * fVar23 * fVar16) * fVar16 * 0.5))
                                   * fVar19) & uVar11 | ~uVar11 & (uint)fVar19);
          fStack_bc = (float)((uint)((float)(~-(uint)(fVar24 <= 0.0) &
                                            (uint)((3.0 - fVar17 * fVar24 * fVar17) * fVar17 * 0.5))
                                    * fVar20) & uVar12 | ~uVar12 & (uint)fVar20);
          fStack_b8 = (float)((uint)((float)(~-(uint)(fVar25 <= 0.0) &
                                            (uint)((3.0 - fVar28 * fVar25 * fVar28) * fVar28 * 0.5))
                                    * fVar21) & uVar13 | ~uVar13 & (uint)fVar21);
          fStack_b4 = (float)((uint)((float)(~-(uint)(fVar18 <= 0.0) &
                                            (uint)((3.0 - fVar29 * fVar18 * fVar29) * fVar29 * 0.5))
                                    * fVar22) & uVar14 | ~uVar14 & (uint)fVar22);
          if (iVar9 != 0) {
            local_d0 = local_f0;
            fStack_cc = fStack_ec;
            fStack_c8 = fStack_e8;
            fStack_c4 = fStack_e4;
            local_11 = FUN_0109fcc0(local_20,&local_c0,&local_d0,8,1);
            piVar4 = local_18;
            if (local_18[1] == (local_18[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,local_18,0x70);
            }
            pfVar6 = (float *)(piVar4[1] * 0x70 + *piVar4);
            piVar4[1] = piVar4[1] + 1;
            *pfVar6 = local_a0[0];
            pfVar6[1] = local_a0[1];
            pfVar6[2] = local_a0[2];
            pfVar6[3] = local_a0[3];
            pfVar6[8] = local_80;
            pfVar6[9] = fStack_7c;
            pfVar6[10] = fStack_78;
            pfVar6[0xb] = fStack_74;
            pfVar6[0xc] = local_70;
            pfVar6[0xd] = fStack_6c;
            pfVar6[0xe] = fStack_68;
            pfVar6[0xf] = fStack_64;
            pfVar6[0x10] = local_60;
            pfVar6[0x11] = fStack_5c;
            pfVar6[0x12] = fStack_58;
            pfVar6[0x13] = fStack_54;
            pfVar6[0x14] = local_50;
            pfVar6[0x15] = fStack_4c;
            pfVar6[0x16] = fStack_48;
            pfVar6[0x17] = fStack_44;
            pfVar6[0x18] = local_40;
            pfVar6[0x19] = local_3c;
            *(char *)(pfVar6 + 0x1a) = local_38;
            *(char *)((int)pfVar6 + 0x69) = local_37;
            pfVar6[4] = local_f0;
            pfVar6[5] = fStack_ec;
            pfVar6[6] = fStack_e8;
            pfVar6[7] = fStack_e4;
            pfVar6[0x1b] = fVar15;
            pfVar6[0xc] = local_c0;
            pfVar6[0xd] = fStack_bc;
            pfVar6[0xe] = fStack_b8;
            pfVar6[0xf] = fStack_b4;
            *(undefined1 *)((int)pfVar6 + 0x6a) = local_36;
            pfVar6[0x14] = local_d0;
            pfVar6[0x15] = fStack_cc;
            pfVar6[0x16] = fStack_c8;
            pfVar6[0x17] = fStack_c4;
            fVar15 = (float)((int)fVar15 + 1);
            pfVar6[0x19] = local_20;
            *(char *)((int)pfVar6 + 0x69) = local_11;
            pfVar6[0x1b] = fVar15;
            if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar4,0x70);
            }
            pfVar6 = (float *)(piVar4[1] * 0x70 + *piVar4);
            piVar4[1] = piVar4[1] + 1;
            pfVar6[4] = local_90;
            pfVar6[5] = fStack_8c;
            pfVar6[6] = fStack_88;
            pfVar6[7] = fStack_84;
            pfVar6[8] = local_80;
            pfVar6[9] = fStack_7c;
            pfVar6[10] = fStack_78;
            pfVar6[0xb] = fStack_74;
            pfVar6[0xc] = local_70;
            pfVar6[0xd] = fStack_6c;
            pfVar6[0xe] = fStack_68;
            pfVar6[0xf] = fStack_64;
            pfVar6[0x10] = local_60;
            pfVar6[0x11] = fStack_5c;
            pfVar6[0x12] = fStack_58;
            pfVar6[0x13] = fStack_54;
            pfVar6[0x14] = local_50;
            pfVar6[0x15] = fStack_4c;
            pfVar6[0x16] = fStack_48;
            pfVar6[0x17] = fStack_44;
            pfVar6[0x18] = local_40;
            pfVar6[0x19] = local_3c;
            *(char *)(pfVar6 + 0x1a) = local_38;
            *(char *)((int)pfVar6 + 0x69) = local_37;
            *pfVar6 = local_f0;
            pfVar6[1] = fStack_ec;
            pfVar6[2] = fStack_e8;
            pfVar6[3] = fStack_e4;
            *(undefined1 *)((int)pfVar6 + 0x6a) = local_36;
            pfVar6[0x1b] = local_34;
            pfVar6[8] = local_c0;
            pfVar6[9] = fStack_bc;
            pfVar6[10] = fStack_b8;
            pfVar6[0xb] = fStack_b4;
            pfVar6[0x10] = local_d0;
            pfVar6[0x11] = fStack_cc;
            pfVar6[0x12] = fStack_c8;
            pfVar6[0x13] = fStack_c4;
            pfVar6[0x18] = local_20;
            *(char *)(pfVar6 + 0x1a) = local_11;
            pfVar6[0x1b] = fVar15;
          }
        }
      }
      else {
        local_e0 = (local_50 - local_60) * 0.5 + local_60;
        fStack_dc = (fStack_4c - fStack_5c) * 0.5 + fStack_5c;
        fStack_d8 = (fStack_48 - fStack_58) * 0.5 + fStack_58;
        fStack_d4 = (fStack_44 - fStack_54) * 0.5 + fStack_54;
        if (local_30 == 0) {
LAB_010c4c27:
          local_2c = (local_3c + local_40) * 0.5;
          FUN_010ace80();
          FUN_0109f160(&local_e0,local_150,1);
          fVar15 = SQRT(local_110) * (float)(int)((uint)(fStack_10c._0_1_ == '\0') * 2 + -1);
          piVar4 = local_18;
          uVar7 = extraout_ECX;
          if ((local_2c * 0.99 < fVar15) && (fVar15 < local_2c * 2.0)) {
            local_130 = local_a0[0];
            fStack_12c = local_a0[1];
            fStack_128 = local_a0[2];
            fStack_124 = local_a0[3];
            local_a8 = &local_130;
            local_120 = local_90;
            fStack_11c = fStack_8c;
            fStack_118 = fStack_88;
            fStack_114 = fStack_84;
            local_110 = local_60;
            fStack_10c = fStack_5c;
            fStack_108 = fStack_58;
            fStack_104 = fStack_54;
            local_100 = local_50;
            fStack_fc = fStack_4c;
            fStack_f8 = fStack_48;
            fStack_f4 = fStack_44;
            local_ac = ExternShape::vftable;
            local_a4 = 4;
            cVar3 = FUN_010a0bd0(&local_ac,local_2c * -0.01,1);
            uVar7 = extraout_ECX_00;
            if (cVar3 == '\0') {
              local_11 = cVar3;
              FUN_01023d50(&PTR_vftable_018e9b94,&local_60,2);
              uVar7 = extraout_ECX_01;
            }
            local_ac = vftable;
            piVar4 = local_18;
            if (local_11 == '\0') goto LAB_010c4fff;
          }
          goto LAB_010c4d60;
        }
        pcVar5 = (char *)FUN_010782f0(&local_25,&local_e0,1,0);
        piVar4 = local_18;
        if (*pcVar5 != '\0') goto LAB_010c4c27;
      }
LAB_010c4fff:
    } while (*(int *)(local_1c + 8) != 0);
  }
  return;
}

// 010C50B0  FUN_010c50b0  size=106  [run]
void FUN_010c50b0(undefined4 param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  *param_4 = 0;
  param_4[0x18] = 0;
  iVar3 = 0;
  puVar2 = param_4;
  while( true ) {
    iVar1 = FUN_010bdd20(&param_2);
    if (iVar1 != 0) {
      FUN_010bd5b0(iVar1);
      *puVar2 = 1;
      FUN_010c49f0(&param_2);
    }
    param_2 = *(uint *)(param_2 + 0x14 + param_3 * 4);
    if ((param_2 & 0xfffffffc) == 0) break;
    param_3 = param_2 & 3;
    param_2 = param_2 & 0xfffffffc;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x18;
    if (1 < iVar3) {
      return;
    }
  }
  return;
}

// 010C5120  FUN_010c5120  size=253  [run]
void __fastcall FUN_010c5120(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(**(code **)(PTR_vftable_018e9b94 + 4))(0x10);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    return;
  }
  *piVar1 = 0;
  piVar1[2] = -0x80000000;
  piVar1[1] = 0;
  piVar1[3] = 0;
  FUN_0100a210(&PTR_vftable_018e9b94,piVar1,0x407,0xc);
  iVar3 = piVar1[1] + -0x408;
  if (-1 < iVar3) {
    piVar4 = (int *)(*piVar1 + 0x305c + iVar3 * 0xc);
    do {
      piVar4[-1] = 0;
      if (-1 < *piVar4) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar4[-2],*piVar4 << 4);
      }
      piVar4[-2] = 0;
      *piVar4 = -0x80000000;
      piVar4 = piVar4 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = 0x407 - piVar1[1];
  puVar2 = (undefined4 *)(*piVar1 + piVar1[1] * 0xc);
  if (0 < iVar3) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  piVar1[1] = 0x407;
  iVar3 = 0;
  do {
    *(undefined4 *)(*piVar1 + 4 + iVar3) = 0;
    iVar3 = iVar3 + 0xc;
  } while (iVar3 < 0x3054);
  *param_1 = piVar1;
  return;
}

// 010C5230  hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::vf04  size=8  [run]
void hkgpJobQueue::Box<hkgpMeshInternals::ConcaveEdgeJob::Handle>::vf04(void)

{
  hkgpMesh::IConvexOverlap::IConvexShape::IConvexShape_2();
  return;
}

// 010C5240  FUN_010c5240  size=184  [run]
int * __thiscall FUN_010c5240(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*param_1 + 8 + iVar3 * 0xc);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 << 4);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  *param_1 = 0;
  param_1[2] = -0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 010C5300  FUN_010c5300  size=517  [run]
void __thiscall FUN_010c5300(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  
  if (*param_1 == 0) {
    FUN_010c5120();
  }
  iVar6 = *(int *)(*param_2 + 8 + param_2[1] * 4);
  iVar7 = *(int *)(*param_2 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4);
  piVar9 = (int *)*param_1;
  uVar8 = *(int *)(iVar6 + 0xc) * 0x3442a5 + *(int *)(iVar6 + 8) * 0x21528000 ^
          *(int *)(iVar7 + 0xc) * 0x1958e9 + *(int *)(iVar7 + 8) * -0x538b8000;
  piVar3 = (int *)(*piVar9 + (uVar8 % (uint)piVar9[1]) * 0xc);
  iVar1 = piVar3[1];
  iVar2 = 0;
  if (iVar1 < 1) {
LAB_010c53b6:
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*piVar3;
    piVar10 = piVar3;
    do {
      if ((*piVar10 == iVar6) && (piVar10[1] == iVar7)) {
        if (iVar2 == -1) goto LAB_010c53b6;
        piVar3 = piVar3 + iVar2 * 4;
        goto LAB_010c53c3;
      }
      iVar2 = iVar2 + 1;
      piVar10 = piVar10 + 4;
    } while (iVar2 < iVar1);
    piVar3 = (int *)0x0;
  }
LAB_010c53c3:
  if (piVar3 == (int *)0x0) {
    piVar9[3] = piVar9[3] + 1;
    piVar3 = (int *)(*piVar9 + (uVar8 % (uint)piVar9[1]) * 0xc);
    if (piVar3[1] == (*(uint *)(*piVar9 + 8 + (uVar8 % (uint)piVar9[1]) * 0xc) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar3,0x10);
    }
    puVar4 = (undefined4 *)(piVar3[1] * 0x10 + *piVar3);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[3] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    puVar5 = (undefined8 *)(piVar3[1] * 0x10 + *piVar3);
    piVar3[1] = piVar3[1] + 1;
    *puVar5 = CONCAT44(iVar7,iVar6);
    puVar5[1] = (ulonglong)uVar8;
    piVar3 = (int *)(*piVar3 + -0x10 + piVar3[1] * 0x10);
    iVar6 = param_1[1];
    if ((iVar6 == 0) || (*(int *)(iVar6 + 0x600) == 0)) {
      iVar6 = FUN_010aca60();
    }
    if (iVar6 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(iVar6 + 0x600);
      *(int *)(iVar6 + 0x600) = *piVar9;
      piVar9[8] = iVar6;
      *(int *)(iVar6 + 0x60c) = *(int *)(iVar6 + 0x60c) + 1;
      *piVar9 = (int)(piVar9 + 3);
      piVar9[1] = 0;
      piVar9[2] = -0x7ffffffe;
    }
    piVar3[3] = (int)piVar9;
  }
  piVar3 = (int *)piVar3[3];
  iVar6 = 0;
  if (0 < param_3[1]) {
    do {
      uVar8 = piVar3[1];
      iVar7 = 0;
      if (0 < (int)uVar8) {
        piVar9 = (int *)*piVar3;
        do {
          if (*piVar9 == *(int *)(*param_3 + iVar6 * 4)) {
            if (iVar7 != -1) goto LAB_010c54f6;
            break;
          }
          iVar7 = iVar7 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar7 < (int)uVar8);
      }
      iVar7 = *param_3;
      if (uVar8 == (piVar3[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar3,4);
      }
      *(undefined4 *)(*piVar3 + piVar3[1] * 4) = *(undefined4 *)(iVar7 + iVar6 * 4);
      piVar3[1] = piVar3[1] + 1;
LAB_010c54f6:
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_3[1]);
  }
  return;
}

// 010C5510  FUN_010c5510  size=52  [run]
void __fastcall FUN_010c5510(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010c5240(0);
    (**(code **)(PTR_vftable_018e9b94 + 8))(*param_1,0x10);
    *param_1 = 0;
  }
  FUN_010b0d10();
  return;
}

// 010C5550  FUN_010c5550  size=15  [run]
void FUN_010c5550(void)

{
  FUN_010c5300();
  return;
}

// 010C5560  FUN_010c5560  size=83  [run]
void FUN_010c5560(undefined4 param_1,uint param_2,uint param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = param_4;
  while( true ) {
    if (*pcVar2 != '\0') {
      FUN_010c5550(&param_2,pcVar2 + 4);
    }
    param_2 = *(uint *)(param_2 + 0x14 + param_3 * 4);
    if ((param_2 & 0xfffffffc) == 0) break;
    param_3 = param_2 & 3;
    param_2 = param_2 & 0xfffffffc;
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x18;
    if (1 < iVar1) {
      return;
    }
  }
  return;
}

// 010C5670  FUN_010c5670  size=38  [run]
void FUN_010c5670(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010C56A0  hkBaseObject::hkBaseObject_244  size=137  [run]
void __fastcall hkBaseObject::hkBaseObject_244(undefined4 *param_1)

{
  *param_1 = hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>
             ::vftable;
  FUN_010c1b70(1);
  FUN_010c5510();
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 8);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  param_1[2] = hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>::Edge,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Vertex,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Triangle,hkContainerHeapAllocator>
               ::vftable;
  FUN_010b7a50();
  FUN_010b3280();
  FUN_010b79e0();
  FUN_010b3210();
  param_1[2] = vftable;
  *param_1 = vftable;
  return;
}

// 010C5730  hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>::vf00  size=180  [run]
undefined4 * __thiscall
hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>
::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  FUN_010c1b70(1);
  FUN_010c5510();
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 8);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  param_1[2] = hkgpAbstractMesh<hkgpTriangulatorType<hkContainerHeapAllocator,hkgpTriangulatorBase::VertexBase,hkgpTriangulatorBase::TriangleBase,hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkgpTriangulatorBase::SparseEdgeDataPolicy<hkgpTriangulatorBase::DefaultEdgeData<hkContainerHeapAllocator>,hkContainerHeapAllocator>,-1,4,15,0>::Edge,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Vertex,hkgpTriangulatorType<struct_hkContainerHeapAllocator,struct_hkgpTriangulatorBase::VertexBase,struct_hkgpTriangulatorBase::TriangleBase,struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkgpTriangulatorBase::SparseEdgeDataPolicy<struct_hkgpTriangulatorBase::DefaultEdgeData<struct_hkContainerHeapAllocator>,struct_hkContainerHeapAllocator>,-1,4,15,0>::Triangle,hkContainerHeapAllocator>
               ::vftable;
  FUN_010b7a50();
  FUN_010b3280();
  FUN_010b79e0();
  FUN_010b3210();
  param_1[2] = ::hkBaseObject::vftable;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010C57F0  FUN_010c57f0  size=4636  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_010c57f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4,int *param_5,
            char param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_84 [4];
  undefined1 *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74 [8];
  undefined1 local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar12 = *param_5;
  uVar19 = param_5[1];
  uVar10 = param_5[2];
  cVar6 = (char)uVar10;
  local_3c = uVar19;
  local_38 = uVar10;
  if (iVar12 == 0) {
    iVar12 = FUN_010bd050();
    if (iVar12 != 0) {
      *(undefined4 *)(iVar12 + 0xc) = param_3;
      *(undefined4 *)(iVar12 + 8) = param_2;
      *(undefined4 *)(iVar12 + 0x10) = 0xfffffffd;
      uVar20 = 9 >> (cVar6 * '\x02' & 0x1fU) & 3;
      iVar13 = *(int *)(uVar19 + 8 + (9 >> (char)uVar20 * '\x02' & 3U) * 4);
      iVar1 = *(int *)(*(int *)(uVar19 + 8 + uVar20 * 4) + 8);
      iVar2 = *(int *)(iVar13 + 8);
      uVar10 = uVar20;
      uVar11 = uVar19;
      if ((iVar2 <= iVar1) &&
         (((iVar2 < iVar1 ||
           (*(int *)(iVar13 + 0xc) < *(int *)(*(int *)(uVar19 + 8 + uVar20 * 4) + 0xc))) &&
          (uVar8 = *(uint *)(uVar19 + 0x14 + uVar20 * 4), (uVar8 & 0xfffffffc) != 0)))) {
        uVar10 = uVar8 & 3;
        uVar11 = uVar8 & 0xfffffffc;
      }
      local_28 = 1 << (sbyte)uVar10 & (uint)*(ushort *)(uVar11 + 0x22) & 7;
      *(ushort *)(uVar11 + 0x22) = *(ushort *)(uVar11 + 0x22) & (~(ushort)local_28 | 0xfff8);
      uVar8 = 0x12 >> (cVar6 * '\x02' & 0x1fU) & 3;
      iVar13 = *(int *)(uVar19 + 8 + uVar8 * 4);
      iVar1 = *(int *)(uVar19 + 8 + (9 >> (char)uVar8 * '\x02' & 3U) * 4);
      iVar2 = *(int *)(iVar13 + 8);
      iVar3 = *(int *)(iVar1 + 8);
      uVar10 = uVar19;
      uVar11 = uVar8;
      if (((iVar3 <= iVar2) && ((iVar3 < iVar2 || (*(int *)(iVar1 + 0xc) < *(int *)(iVar13 + 0xc))))
          ) && (uVar9 = *(uint *)(uVar19 + 0x14 + uVar8 * 4), (uVar9 & 0xfffffffc) != 0)) {
        uVar10 = uVar9 & 0xfffffffc;
        uVar11 = uVar9 & 3;
      }
      local_20 = 1 << (sbyte)uVar11 & (uint)*(ushort *)(uVar10 + 0x22) & 7;
      *(ushort *)(uVar10 + 0x22) = *(ushort *)(uVar10 + 0x22) & (~(ushort)local_20 | 0xfff8);
      uVar5 = *(undefined4 *)(uVar19 + 8 + uVar20 * 4);
      uVar4 = *(undefined4 *)(uVar19 + 8 + uVar8 * 4);
      uVar10 = FUN_010bd750();
      if (uVar10 != 0) {
        *(undefined4 *)(uVar10 + 8) = uVar5;
        *(undefined4 *)(uVar10 + 0xc) = uVar4;
        *(int *)(uVar10 + 0x10) = iVar12;
        *(undefined4 *)(uVar10 + 0x22) = 0;
      }
      local_30 = *(undefined4 *)(uVar19 + 8 + local_38 * 4);
      uVar5 = *(undefined4 *)(uVar19 + 8 + uVar8 * 4);
      uVar11 = FUN_010bd750();
      iVar13 = local_8;
      if (uVar11 != 0) {
        *(undefined4 *)(uVar11 + 8) = uVar5;
        *(uint *)(uVar11 + 0xc) = local_30;
        *(int *)(uVar11 + 0x10) = iVar12;
        *(undefined4 *)(uVar11 + 0x22) = 0;
      }
      if ((uVar10 != 0) && (uVar11 != 0)) {
        *(int *)(uVar19 + 8 + uVar8 * 4) = iVar12;
        *(ushort *)(uVar10 + 0x22) =
             *(ushort *)(uVar10 + 0x22) ^
             (*(ushort *)(uVar10 + 0x22) ^ *(ushort *)(uVar19 + 0x22)) & 0x10;
        *(ushort *)(uVar10 + 0x22) =
             (*(ushort *)(uVar19 + 0x22) ^ *(ushort *)(uVar10 + 0x22)) & 0x1f ^
             *(ushort *)(uVar19 + 0x22);
        *(undefined2 *)(uVar10 + 0x24) = *(undefined2 *)(uVar19 + 0x24);
        *(ushort *)(uVar11 + 0x22) =
             *(ushort *)(uVar11 + 0x22) ^
             (*(ushort *)(uVar11 + 0x22) ^ *(ushort *)(uVar19 + 0x22)) & 0x10;
        *(ushort *)(uVar11 + 0x22) =
             (*(ushort *)(uVar19 + 0x22) ^ *(ushort *)(uVar11 + 0x22)) & 0x1f ^
             *(ushort *)(uVar19 + 0x22);
        *(undefined2 *)(uVar11 + 0x24) = *(undefined2 *)(uVar19 + 0x24);
        uVar9 = *(uint *)(uVar19 + 0x14 + uVar20 * 4);
        uVar16 = uVar9 & 3;
        uVar9 = uVar9 & 0xfffffffc;
        *(uint *)(uVar10 + 0x14) = uVar9 + uVar16;
        if (uVar9 != 0) {
          *(uint *)(uVar9 + 0x14 + uVar16 * 4) = uVar10;
        }
        uVar9 = *(uint *)(uVar19 + 0x14 + uVar8 * 4);
        uVar16 = uVar9 & 3;
        uVar9 = uVar9 & 0xfffffffc;
        *(uint *)(uVar11 + 0x14) = uVar9 + uVar16;
        if (uVar9 != 0) {
          *(uint *)(uVar9 + 0x14 + uVar16 * 4) = uVar11;
        }
        *(uint *)(uVar10 + 0x18) = uVar11 + 2;
        *(uint *)(uVar11 + 0x1c) = uVar10 + 1;
        *(uint *)(uVar10 + 0x1c) = uVar20 + uVar19;
        *(uint *)(uVar19 + 0x14 + uVar20 * 4) = uVar10 + 2;
        *(uint *)(uVar11 + 0x18) = uVar8 + uVar19;
        *(uint *)(uVar19 + 0x14 + uVar8 * 4) = uVar11 + 1;
        if (local_28 != 0) {
          iVar12 = *(int *)(*(int *)(uVar10 + 8) + 8);
          iVar1 = *(int *)(*(int *)(uVar10 + 0xc) + 8);
          if ((iVar12 < iVar1) ||
             (((iVar12 <= iVar1 &&
               (*(int *)(*(int *)(uVar10 + 8) + 0xc) <= *(int *)(*(int *)(uVar10 + 0xc) + 0xc))) ||
              (uVar20 = *(uint *)(uVar10 + 0x14), (uVar20 & 0xfffffffc) == 0)))) {
            bVar15 = 0;
            uVar20 = uVar10;
          }
          else {
            bVar15 = (byte)uVar20 & 3;
            uVar20 = uVar20 & 0xfffffffc;
          }
          uVar7 = *(ushort *)(uVar20 + 0x22);
          *(ushort *)(uVar20 + 0x22) = ((1 << bVar15 | uVar7) ^ uVar7) & 7 ^ uVar7;
        }
        if (local_20 != 0) {
          iVar12 = *(int *)(*(int *)(uVar11 + 0xc) + 8);
          iVar1 = *(int *)(*(int *)(uVar11 + 8) + 8);
          if (((iVar1 < iVar12) ||
              ((iVar1 <= iVar12 &&
               (*(int *)(*(int *)(uVar11 + 8) + 0xc) <= *(int *)(*(int *)(uVar11 + 0xc) + 0xc)))))
             || (uVar20 = *(uint *)(uVar11 + 0x14), (uVar20 & 0xfffffffc) == 0)) {
            bVar15 = 0;
            uVar20 = uVar11;
          }
          else {
            bVar15 = (byte)uVar20 & 3;
            uVar20 = uVar20 & 0xfffffffc;
          }
          *(ushort *)(uVar20 + 0x22) = *(ushort *)(uVar20 + 0x22) | 1 << bVar15 & 7U;
        }
        uVar5 = *(undefined4 *)(uVar10 + 0x10);
        local_40 = 2;
        if (param_4 != '\0') {
          piVar18 = (int *)(local_8 + 0x30);
          iVar12 = *(int *)(local_8 + 0x34) + 3;
          uVar20 = *(uint *)(local_8 + 0x38) & 0x3fffffff;
          local_44 = uVar10;
          if ((int)uVar20 < iVar12) {
            iVar1 = uVar20 * 2;
            if (iVar12 < iVar1) {
              iVar12 = iVar1;
            }
            iVar12 = FUN_0100a210(&PTR_vftable_018e9b94,piVar18,iVar12,8);
            if (iVar12 == 1) {
              *(undefined1 *)(local_8 + 0x648) = 1;
              if ((_DAT_0209a9b8 & 1) == 0) {
                _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
                DAT_0209a9b0 = 0;
                DAT_0209a9b4 = 0;
              }
              goto LAB_010c69e8;
            }
          }
          if (*(uint *)(iVar13 + 0x34) == (*(uint *)(iVar13 + 0x38) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar18,8);
          }
          puVar14 = (uint *)(*piVar18 + *(int *)(iVar13 + 0x34) * 8);
          if (puVar14 != (uint *)0x0) {
            *puVar14 = uVar10;
            puVar14[1] = 0;
          }
          *(int *)(iVar13 + 0x34) = *(int *)(iVar13 + 0x34) + 1;
          if (*(uint *)(iVar13 + 0x34) == (*(uint *)(iVar13 + 0x38) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar18,8);
          }
          puVar14 = (uint *)(*piVar18 + *(int *)(iVar13 + 0x34) * 8);
          if (puVar14 != (uint *)0x0) {
            *puVar14 = uVar11;
            puVar14[1] = 0;
          }
          *(int *)(iVar13 + 0x34) = *(int *)(iVar13 + 0x34) + 1;
          if (*(uint *)(iVar13 + 0x34) == (*(uint *)(iVar13 + 0x38) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar18,8);
          }
          puVar14 = (uint *)(*piVar18 + *(int *)(iVar13 + 0x34) * 8);
          if (puVar14 != (uint *)0x0) {
            *puVar14 = uVar19;
            puVar14[1] = local_38;
          }
          *(int *)(iVar13 + 0x34) = *(int *)(iVar13 + 0x34) + 1;
          FUN_010c3830();
          puVar14 = (uint *)FUN_010bd0b0(local_54,&local_44,uVar5);
          local_40 = puVar14[1];
          uVar10 = *puVar14;
        }
        *(uint *)(local_8 + 0x244 +
                 ((*(int *)(*(int *)(uVar10 + 0xc) + 0xc) + *(int *)(*(int *)(uVar10 + 8) + 0xc) * 2
                   + *(int *)(*(int *)(uVar10 + 0x10) + 0xc) >> 0xd) * 0x10 +
                 (*(int *)(*(int *)(uVar10 + 0xc) + 8) + *(int *)(*(int *)(uVar10 + 8) + 8) * 2 +
                  *(int *)(*(int *)(uVar10 + 0x10) + 8) >> 0xd)) * 4) = uVar10;
        *(ushort *)(uVar10 + 0x22) = *(ushort *)(uVar10 + 0x22) | 8;
        param_1[1] = uVar10;
        *param_1 = 0;
        param_1[2] = local_40;
        return param_1;
      }
      if ((_DAT_0209a9b8 & 1) == 0) {
        _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
        DAT_0209a9b0 = 0;
        DAT_0209a9b4 = 0;
      }
LAB_010c69e8:
      iVar13 = DAT_0209a9b4;
      iVar12 = DAT_0209a9b0;
      *param_1 = 10;
      param_1[1] = iVar12;
      param_1[2] = iVar13;
      return param_1;
    }
    if ((_DAT_0209a9b8 & 1) == 0) {
      _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
      DAT_0209a9b0 = 0;
      DAT_0209a9b4 = 0;
    }
  }
  else {
    if (iVar12 != 1) {
      if (iVar12 == 2) {
        iVar12 = *(int *)(uVar19 + 8 + uVar10 * 4);
        if ((*(byte *)(iVar12 + 0x10) & 1) != 0) {
          *param_1 = 1;
          param_1[1] = uVar19;
          param_1[2] = uVar10;
          return param_1;
        }
        puVar14 = (uint *)(iVar12 + 0x10);
        *puVar14 = *puVar14 | 1;
        param_1[2] = uVar10;
        param_1[1] = uVar19;
        *param_1 = 0;
        return param_1;
      }
      if ((_DAT_0209a9b8 & 1) == 0) {
        _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
        DAT_0209a9b0 = 0;
        DAT_0209a9b4 = 0;
      }
      *param_1 = 0xb;
      goto LAB_010c6584;
    }
    if (param_6 == '\0') {
      iVar12 = *(int *)(uVar19 + 8 + uVar10 * 4);
      iVar13 = *(int *)(iVar12 + 8);
      iVar1 = *(int *)(uVar19 + 8 + (9 >> (cVar6 * '\x02' & 0x1fU) & 3U) * 4);
      iVar2 = *(int *)(iVar1 + 8);
      uVar11 = uVar19;
      uVar20 = uVar10;
      if (((iVar2 <= iVar13) &&
          ((iVar2 < iVar13 || (*(int *)(iVar1 + 0xc) < *(int *)(iVar12 + 0xc))))) &&
         (uVar8 = *(uint *)(uVar19 + 0x14 + uVar10 * 4), (uVar8 & 0xfffffffc) != 0)) {
        uVar11 = uVar8 & 0xfffffffc;
        uVar20 = uVar8 & 3;
      }
      if (((uint)*(ushort *)(uVar11 + 0x22) & 1 << ((byte)uVar20 & 0x1f) & 7) != 0) {
        iVar12 = param_5[1];
        iVar13 = param_5[2];
        *param_1 = 2;
        param_1[1] = iVar12;
        param_1[2] = iVar13;
        return param_1;
      }
    }
    local_c = FUN_010bd050();
    if (local_c != 0) {
      *(undefined4 *)(local_c + 8) = param_2;
      *(undefined4 *)(local_c + 0xc) = param_3;
      *(undefined4 *)(local_c + 0x10) = 0xfffffffd;
      iVar12 = *(int *)(uVar19 + 8 + uVar10 * 4);
      iVar13 = *(int *)(iVar12 + 8);
      uVar8 = 9 >> (cVar6 * '\x02' & 0x1fU) & 3;
      iVar1 = *(int *)(uVar19 + 8 + uVar8 * 4);
      iVar2 = *(int *)(iVar1 + 8);
      uVar11 = uVar10;
      uVar20 = uVar19;
      if ((iVar2 <= iVar13) &&
         (((iVar2 < iVar13 || (*(int *)(iVar1 + 0xc) < *(int *)(iVar12 + 0xc))) &&
          (uVar9 = *(uint *)(uVar19 + 0x14 + uVar10 * 4), (uVar9 & 0xfffffffc) != 0)))) {
        uVar11 = uVar9 & 3;
        uVar20 = uVar9 & 0xfffffffc;
      }
      local_10 = 1 << ((byte)uVar11 & 0x1f) & (uint)*(ushort *)(uVar20 + 0x22) & 7;
      *(ushort *)(uVar20 + 0x22) = *(ushort *)(uVar20 + 0x22) & (~(ushort)local_10 | 0xfff8);
      local_80 = local_74;
      local_68 = local_5c;
      local_84[0] = 0;
      local_7c = 0;
      local_78 = 0x80000002;
      local_6c = 0;
      local_64 = 0;
      local_60 = 0x80000002;
      if (local_10 != 0) {
        FUN_010c50b0(local_8,uVar19,uVar10,local_84);
      }
      iVar12 = local_8;
      uVar10 = *(uint *)(uVar19 + 0x14 + uVar10 * 4);
      if ((uVar10 & 0xfffffffc) == 0) {
        uVar20 = 0x12 >> ((char)local_38 * '\x02' & 0x1fU) & 3;
        iVar12 = *(int *)(uVar19 + 8 + uVar20 * 4);
        iVar13 = *(int *)(uVar19 + 8 + (9 >> (char)uVar20 * '\x02' & 3U) * 4);
        iVar1 = *(int *)(iVar12 + 8);
        iVar2 = *(int *)(iVar13 + 8);
        uVar10 = uVar19;
        uVar11 = uVar20;
        if (((iVar2 <= iVar1) &&
            ((iVar2 < iVar1 || (*(int *)(iVar13 + 0xc) < *(int *)(iVar12 + 0xc))))) &&
           (uVar9 = *(uint *)(uVar19 + 0x14 + uVar20 * 4), (uVar9 & 0xfffffffc) != 0)) {
          uVar10 = uVar9 & 0xfffffffc;
          uVar11 = uVar9 & 3;
        }
        local_30 = 1 << (sbyte)uVar11 & (uint)*(ushort *)(uVar10 + 0x22) & 7;
        *(ushort *)(uVar10 + 0x22) = *(ushort *)(uVar10 + 0x22) & (~(ushort)local_30 | 0xfff8);
        uVar5 = *(undefined4 *)(uVar19 + 8 + uVar20 * 4);
        uVar4 = *(undefined4 *)(uVar19 + 8 + local_38 * 4);
        uVar10 = FUN_010bd750();
        if (uVar10 == 0) {
LAB_010c5f24:
          if ((_DAT_0209a9b8 & 1) == 0) {
            _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
            DAT_0209a9b0 = 0;
            DAT_0209a9b4 = 0;
          }
          iVar12 = DAT_0209a9b4;
          param_1[1] = DAT_0209a9b0;
          *param_1 = 10;
          param_1[2] = iVar12;
          FUN_010c28d0();
          return param_1;
        }
        *(undefined4 *)(uVar10 + 8) = uVar5;
        *(int *)(uVar10 + 0x10) = local_c;
        *(undefined4 *)(uVar10 + 0xc) = uVar4;
        *(undefined4 *)(uVar10 + 0x22) = 0;
        *(uint *)(local_8 + 0x244 +
                 ((*(int *)(*(int *)(uVar10 + 0xc) + 0xc) + *(int *)(*(int *)(uVar10 + 8) + 0xc) * 2
                   + *(int *)(*(int *)(uVar10 + 0x10) + 0xc) >> 0xd) * 0x10 +
                 (*(int *)(*(int *)(uVar10 + 0xc) + 8) + *(int *)(*(int *)(uVar10 + 8) + 8) * 2 +
                  *(int *)(*(int *)(uVar10 + 0x10) + 8) >> 0xd)) * 4) = uVar10;
        *(ushort *)(uVar10 + 0x22) = *(ushort *)(uVar10 + 0x22) | 8;
        uVar7 = (*(ushort *)(uVar19 + 0x22) ^ *(ushort *)(uVar10 + 0x22)) & 0x10 ^
                *(ushort *)(uVar10 + 0x22);
        *(ushort *)(uVar10 + 0x22) = uVar7;
        *(ushort *)(uVar10 + 0x22) =
             (*(ushort *)(uVar19 + 0x22) ^ uVar7) & 0x1f ^ *(ushort *)(uVar19 + 0x22);
        *(undefined2 *)(uVar10 + 0x24) = *(undefined2 *)(uVar19 + 0x24);
        *(int *)(uVar19 + 8 + local_38 * 4) = local_c;
        uVar11 = *(uint *)(uVar19 + 0x14 + uVar20 * 4);
        uVar9 = uVar11 & 3;
        uVar11 = uVar11 & 0xfffffffc;
        *(uint *)(uVar10 + 0x14) = uVar9 + uVar11;
        if (uVar11 != 0) {
          *(uint *)(uVar11 + 0x14 + uVar9 * 4) = uVar10;
        }
        if ((_DAT_0209a9b8 & 1) == 0) {
          _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
          DAT_0209a9b0 = 0;
          DAT_0209a9b4 = 0;
        }
        *(int *)(uVar10 + 0x18) = DAT_0209a9b4 + DAT_0209a9b0;
        if (DAT_0209a9b0 != 0) {
          *(uint *)(DAT_0209a9b0 + 0x14 + DAT_0209a9b4 * 4) = uVar10 + 1;
        }
        *(uint *)(uVar10 + 0x1c) = uVar20 + uVar19;
        *(uint *)(uVar19 + 0x14 + uVar20 * 4) = uVar10 + 2;
        if (local_30 != 0) {
          iVar12 = *(int *)(*(int *)(uVar10 + 8) + 8);
          iVar13 = *(int *)(*(int *)(uVar10 + 0xc) + 8);
          if (((iVar12 < iVar13) ||
              ((iVar12 <= iVar13 &&
               (*(int *)(*(int *)(uVar10 + 8) + 0xc) <= *(int *)(*(int *)(uVar10 + 0xc) + 0xc)))))
             || (uVar11 = *(uint *)(uVar10 + 0x14), (uVar11 & 0xfffffffc) == 0)) {
            bVar15 = 0;
            uVar11 = uVar10;
          }
          else {
            bVar15 = (byte)uVar11 & 3;
            uVar11 = uVar11 & 0xfffffffc;
          }
          uVar7 = *(ushort *)(uVar11 + 0x22);
          *(ushort *)(uVar11 + 0x22) = ((1 << bVar15 | uVar7) ^ uVar7) & 7 ^ uVar7;
        }
        if ((param_6 != '\0') && (local_10 != 0)) {
          iVar12 = *(int *)(*(int *)(uVar10 + 0xc) + 8);
          iVar13 = *(int *)(*(int *)(uVar10 + 0x10) + 8);
          if ((iVar12 < iVar13) ||
             (((iVar12 <= iVar13 &&
               (*(int *)(*(int *)(uVar10 + 0xc) + 0xc) <= *(int *)(*(int *)(uVar10 + 0x10) + 0xc)))
              || (uVar11 = *(uint *)(uVar10 + 0x18), (uVar11 & 0xfffffffc) == 0)))) {
            bVar15 = 1;
            uVar11 = uVar10;
          }
          else {
            bVar15 = (byte)uVar11 & 3;
            uVar11 = uVar11 & 0xfffffffc;
          }
          *(ushort *)(uVar11 + 0x22) = *(ushort *)(uVar11 + 0x22) | 1 << bVar15 & 7U;
          uVar20 = *(uint *)(uVar10 + 0x1c) & 0xfffffffc;
          uVar11 = 9 >> ((byte)*(uint *)(uVar10 + 0x1c) & 3) * '\x02' & 3;
          iVar12 = *(int *)(*(int *)(uVar20 + 8 + uVar11 * 4) + 8);
          iVar13 = *(int *)(uVar20 + 8 + (9 >> (char)uVar11 * '\x02' & 3U) * 4);
          iVar1 = *(int *)(iVar13 + 8);
          if (((iVar1 <= iVar12) &&
              ((iVar1 < iVar12 ||
               (*(int *)(iVar13 + 0xc) < *(int *)(*(int *)(uVar20 + 8 + uVar11 * 4) + 0xc))))) &&
             (uVar9 = *(uint *)(uVar20 + 0x14 + uVar11 * 4), (uVar9 & 0xfffffffc) != 0)) {
            uVar11 = uVar9 & 3;
            uVar20 = uVar9 & 0xfffffffc;
          }
          uVar7 = *(ushort *)(uVar20 + 0x22);
          *(ushort *)(uVar20 + 0x22) = ((1 << (sbyte)uVar11 | uVar7) ^ uVar7) & 7 ^ uVar7;
          FUN_010c5560(local_8,uVar10,1,local_84);
          FUN_010c5560(local_8,*(uint *)(uVar10 + 0x1c) & 0xfffffffc,*(uint *)(uVar10 + 0x1c) & 3,
                       local_84);
        }
        iVar12 = local_8;
        if (param_4 == '\0') goto LAB_010c64b5;
        piVar18 = (int *)(local_8 + 0x30);
        iVar13 = *(int *)(local_8 + 0x34) + 2;
        uVar11 = *(uint *)(local_8 + 0x38) & 0x3fffffff;
        if ((int)uVar11 < iVar13) {
          iVar1 = uVar11 * 2;
          if (iVar13 < iVar1) {
            iVar13 = iVar1;
          }
          iVar13 = FUN_0100a210(&PTR_vftable_018e9b94,piVar18,iVar13,8);
          if (iVar13 == 1) {
            *(undefined1 *)(local_8 + 0x648) = 1;
            goto joined_r0x010c6410;
          }
        }
        if (*(uint *)(iVar12 + 0x34) == (*(uint *)(iVar12 + 0x38) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar18,8);
        }
        puVar14 = (uint *)(*piVar18 + *(int *)(iVar12 + 0x34) * 8);
        if (puVar14 != (uint *)0x0) {
          *puVar14 = uVar19;
          puVar14[1] = uVar8;
        }
        *(int *)(iVar12 + 0x34) = *(int *)(iVar12 + 0x34) + 1;
        if (*(uint *)(iVar12 + 0x34) == (*(uint *)(iVar12 + 0x38) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar18,8);
        }
        puVar14 = (uint *)(*piVar18 + *(int *)(iVar12 + 0x34) * 8);
        if (puVar14 != (uint *)0x0) {
          *puVar14 = uVar10;
          puVar14[1] = 0;
        }
        *(int *)(iVar12 + 0x34) = *(int *)(iVar12 + 0x34) + 1;
      }
      else {
        local_44 = uVar10 & 0xfffffffc;
        uVar20 = 0x12 >> (cVar6 * '\x02' & 0x1fU) & 3;
        iVar13 = *(int *)(*(int *)(uVar19 + 8 + uVar20 * 4) + 8);
        local_40 = uVar10 & 3;
        iVar1 = *(int *)(uVar19 + 8 + (9 >> (char)uVar20 * '\x02' & 3U) * 4);
        iVar2 = *(int *)(iVar1 + 8);
        uVar10 = uVar20;
        uVar11 = uVar19;
        if (((iVar2 <= iVar13) &&
            ((iVar2 < iVar13 ||
             (*(int *)(iVar1 + 0xc) < *(int *)(*(int *)(uVar19 + 8 + uVar20 * 4) + 0xc))))) &&
           (uVar9 = *(uint *)(uVar19 + 0x14 + uVar20 * 4), (uVar9 & 0xfffffffc) != 0)) {
          uVar10 = uVar9 & 3;
          uVar11 = uVar9 & 0xfffffffc;
        }
        local_20 = 1 << (sbyte)uVar10 & (uint)*(ushort *)(uVar11 + 0x22) & 7;
        local_30 = local_40 * 2;
        *(ushort *)(uVar11 + 0x22) = *(ushort *)(uVar11 + 0x22) & (~(ushort)local_20 | 0xfff8);
        uVar9 = 0x12 >> (sbyte)local_30 & 3;
        iVar13 = *(int *)(local_44 + 8 + (9 >> (char)uVar9 * '\x02' & 3U) * 4);
        iVar1 = *(int *)(local_44 + 8 + uVar9 * 4);
        iVar2 = *(int *)(iVar13 + 8);
        iVar3 = *(int *)(iVar1 + 8);
        uVar10 = uVar9;
        uVar11 = local_44;
        if ((iVar2 <= iVar3) &&
           (((iVar2 < iVar3 || (*(int *)(iVar13 + 0xc) < *(int *)(iVar1 + 0xc))) &&
            (uVar16 = *(uint *)(local_44 + 0x14 + uVar9 * 4), (uVar16 & 0xfffffffc) != 0)))) {
          uVar10 = uVar16 & 3;
          uVar11 = uVar16 & 0xfffffffc;
        }
        local_28 = 1 << (sbyte)uVar10 & (uint)*(ushort *)(uVar11 + 0x22) & 7;
        *(ushort *)(uVar11 + 0x22) = *(ushort *)(uVar11 + 0x22) & (~(ushort)local_28 | 0xfff8);
        local_18 = *(int *)(uVar19 + 8 + local_38 * 4);
        local_14 = *(undefined4 *)(uVar19 + 8 + uVar20 * 4);
        uVar10 = FUN_010bd750();
        if (uVar10 != 0) {
          *(int *)(uVar10 + 8) = local_14;
          *(int *)(uVar10 + 0xc) = local_18;
          *(int *)(uVar10 + 0x10) = local_c;
          *(undefined4 *)(uVar10 + 0x22) = 0;
          *(uint *)(iVar12 + 0x244 +
                   ((*(int *)(local_18 + 0xc) + *(int *)(*(int *)(uVar10 + 8) + 0xc) * 2 +
                     *(int *)(*(int *)(uVar10 + 0x10) + 0xc) >> 0xd) * 0x10 +
                   (*(int *)(local_18 + 8) + *(int *)(*(int *)(uVar10 + 8) + 8) * 2 +
                    *(int *)(*(int *)(uVar10 + 0x10) + 8) >> 0xd)) * 4) = uVar10;
          *(ushort *)(uVar10 + 0x22) = *(ushort *)(uVar10 + 0x22) | 8;
        }
        local_14 = *(int *)(local_44 + 8 + local_40 * 4);
        local_18 = *(undefined4 *)(local_44 + 8 + uVar9 * 4);
        uVar11 = FUN_010bd750();
        if (uVar11 != 0) {
          *(int *)(uVar11 + 8) = local_18;
          *(int *)(uVar11 + 0x10) = local_c;
          *(int *)(uVar11 + 0xc) = local_14;
          *(undefined4 *)(uVar11 + 0x22) = 0;
          *(uint *)(local_8 + 0x244 +
                   ((*(int *)(local_14 + 0xc) + *(int *)(*(int *)(uVar11 + 8) + 0xc) * 2 +
                     *(int *)(*(int *)(uVar11 + 0x10) + 0xc) >> 0xd) * 0x10 +
                   (*(int *)(*(int *)(uVar11 + 0xc) + 8) + *(int *)(*(int *)(uVar11 + 8) + 8) * 2 +
                    *(int *)(*(int *)(uVar11 + 0x10) + 8) >> 0xd)) * 4) = uVar11;
          *(ushort *)(uVar11 + 0x22) = *(ushort *)(uVar11 + 0x22) | 8;
        }
        if ((uVar10 == 0) || (uVar11 == 0)) {
joined_r0x010c6410:
          if ((_DAT_0209a9b8 & 1) == 0) {
            _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
            DAT_0209a9b0 = 0;
            DAT_0209a9b4 = 0;
          }
          iVar13 = DAT_0209a9b4;
          iVar12 = DAT_0209a9b0;
          *param_1 = 10;
          param_1[1] = iVar12;
          param_1[2] = iVar13;
          FUN_010c28d0();
          return param_1;
        }
        *(ushort *)(uVar10 + 0x22) =
             *(ushort *)(uVar10 + 0x22) ^
             (*(ushort *)(uVar19 + 0x22) ^ *(ushort *)(uVar10 + 0x22)) & 0x10;
        *(ushort *)(uVar10 + 0x22) =
             (*(ushort *)(uVar19 + 0x22) ^ *(ushort *)(uVar10 + 0x22)) & 0x1f ^
             *(ushort *)(uVar19 + 0x22);
        *(undefined2 *)(uVar10 + 0x24) = *(undefined2 *)(uVar19 + 0x24);
        *(ushort *)(uVar11 + 0x22) =
             *(ushort *)(uVar11 + 0x22) ^
             (*(ushort *)(uVar11 + 0x22) ^ *(ushort *)(local_44 + 0x22)) & 0x10;
        *(ushort *)(uVar11 + 0x22) =
             (*(ushort *)(local_44 + 0x22) ^ *(ushort *)(uVar11 + 0x22)) & 0x1f ^
             *(ushort *)(local_44 + 0x22);
        *(undefined2 *)(uVar11 + 0x24) = *(undefined2 *)(local_44 + 0x24);
        *(int *)(local_44 + 8 + local_40 * 4) = local_c;
        *(int *)(uVar19 + 8 + local_38 * 4) = local_c;
        uVar16 = *(uint *)(uVar19 + 0x14 + uVar20 * 4);
        uVar17 = uVar16 & 3;
        uVar16 = uVar16 & 0xfffffffc;
        *(uint *)(uVar10 + 0x14) = uVar17 + uVar16;
        if (uVar16 != 0) {
          *(uint *)(uVar16 + 0x14 + uVar17 * 4) = uVar10;
        }
        local_1c = *(uint *)(local_44 + 0x14 + uVar9 * 4);
        uVar16 = local_1c & 3;
        local_1c = local_1c & 0xfffffffc;
        *(uint *)(uVar11 + 0x14) = uVar16 + local_1c;
        if (local_1c != 0) {
          *(uint *)(local_1c + 0x14 + uVar16 * 4) = uVar11;
        }
        *(uint *)(uVar10 + 0x18) = local_40 + local_44;
        *(uint *)(local_44 + 0x14 + local_40 * 4) = uVar10 + 1;
        *(uint *)(uVar11 + 0x18) = local_38 + uVar19;
        *(uint *)(uVar19 + 0x14 + local_38 * 4) = uVar11 + 1;
        *(uint *)(uVar10 + 0x1c) = uVar20 + uVar19;
        *(uint *)(uVar19 + 0x14 + uVar20 * 4) = uVar10 + 2;
        *(uint *)(uVar11 + 0x1c) = uVar9 + local_44;
        *(uint *)(local_44 + 0x14 + uVar9 * 4) = uVar11 + 2;
        if (local_20 != 0) {
          iVar12 = *(int *)(*(int *)(uVar10 + 8) + 8);
          iVar13 = *(int *)(*(int *)(uVar10 + 0xc) + 8);
          if (((iVar12 < iVar13) ||
              ((iVar12 <= iVar13 &&
               (*(int *)(*(int *)(uVar10 + 8) + 0xc) <= *(int *)(*(int *)(uVar10 + 0xc) + 0xc)))))
             || (local_24 = *(uint *)(uVar10 + 0x14), (local_24 & 0xfffffffc) == 0)) {
            bVar15 = 0;
            local_24 = uVar10;
          }
          else {
            bVar15 = (byte)local_24 & 3;
            local_24 = local_24 & 0xfffffffc;
          }
          uVar7 = *(ushort *)(local_24 + 0x22);
          *(ushort *)(local_24 + 0x22) = ((1 << bVar15 | uVar7) ^ uVar7) & 7 ^ uVar7;
        }
        if (local_28 != 0) {
          iVar12 = *(int *)(*(int *)(uVar11 + 8) + 8);
          iVar13 = *(int *)(*(int *)(uVar11 + 0xc) + 8);
          if ((iVar12 < iVar13) ||
             (((iVar12 <= iVar13 &&
               (*(int *)(*(int *)(uVar11 + 8) + 0xc) <= *(int *)(*(int *)(uVar11 + 0xc) + 0xc))) ||
              (local_2c = *(uint *)(uVar11 + 0x14), (local_2c & 0xfffffffc) == 0)))) {
            bVar15 = 0;
            local_2c = uVar11;
          }
          else {
            bVar15 = (byte)local_2c & 3;
            local_2c = local_2c & 0xfffffffc;
          }
          uVar7 = *(ushort *)(local_2c + 0x22);
          *(ushort *)(local_2c + 0x22) = ((1 << bVar15 | uVar7) ^ uVar7) & 7 ^ uVar7;
        }
        if ((param_6 != '\0') && (local_10 != 0)) {
          iVar12 = *(int *)(*(int *)(uVar10 + 0xc) + 8);
          iVar13 = *(int *)(*(int *)(uVar10 + 0x10) + 8);
          if (((iVar12 < iVar13) ||
              ((iVar12 <= iVar13 &&
               (*(int *)(*(int *)(uVar10 + 0xc) + 0xc) <= *(int *)(*(int *)(uVar10 + 0x10) + 0xc))))
              ) || (local_2c = *(uint *)(uVar10 + 0x18), (local_2c & 0xfffffffc) == 0)) {
            bVar15 = 1;
            local_2c = uVar10;
          }
          else {
            bVar15 = (byte)local_2c & 3;
            local_2c = local_2c & 0xfffffffc;
          }
          uVar7 = *(ushort *)(local_2c + 0x22);
          *(ushort *)(local_2c + 0x22) = ((1 << bVar15 | uVar7) ^ uVar7) & 7 ^ uVar7;
          iVar12 = *(int *)(*(int *)(uVar11 + 0xc) + 8);
          iVar13 = *(int *)(*(int *)(uVar11 + 0x10) + 8);
          if ((iVar12 < iVar13) ||
             (((iVar12 <= iVar13 &&
               (*(int *)(*(int *)(uVar11 + 0xc) + 0xc) <= *(int *)(*(int *)(uVar11 + 0x10) + 0xc)))
              || (uVar20 = *(uint *)(uVar11 + 0x18), (uVar20 & 0xfffffffc) == 0)))) {
            bVar15 = 1;
            uVar20 = uVar11;
          }
          else {
            bVar15 = (byte)uVar20 & 3;
            uVar20 = uVar20 & 0xfffffffc;
          }
          *(ushort *)(uVar20 + 0x22) = *(ushort *)(uVar20 + 0x22) | 1 << bVar15 & 7U;
          FUN_010c5560(local_8,uVar10,1,local_84);
          FUN_010c5560(local_8,*(uint *)(uVar11 + 0x18) & 0xfffffffc,*(uint *)(uVar11 + 0x18) & 3,
                       local_84);
        }
        if (param_4 == '\0') goto LAB_010c64b5;
        iVar12 = *(int *)(local_8 + 0x34) + 4;
        uVar20 = *(uint *)(local_8 + 0x38) & 0x3fffffff;
        if ((int)uVar20 < iVar12) {
          iVar13 = uVar20 * 2;
          if (iVar12 < iVar13) {
            iVar12 = iVar13;
          }
          iVar12 = FUN_0100a210(&PTR_vftable_018e9b94,local_8 + 0x30,iVar12,8);
          if (iVar12 == 1) {
            *(undefined1 *)(local_8 + 0x648) = 1;
            goto LAB_010c5f24;
          }
        }
        if (*(uint *)(local_8 + 0x34) == (*(uint *)(local_8 + 0x38) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,local_8 + 0x30,8);
        }
        puVar14 = (uint *)(*(int *)(local_8 + 0x30) + *(int *)(local_8 + 0x34) * 8);
        if (puVar14 != (uint *)0x0) {
          *puVar14 = uVar19;
          puVar14[1] = uVar8;
        }
        *(int *)(local_8 + 0x34) = *(int *)(local_8 + 0x34) + 1;
        local_30 = 9 >> ((byte)local_30 & 0x1f) & 3;
        if (*(uint *)(local_8 + 0x34) == (*(uint *)(local_8 + 0x38) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,local_8 + 0x30,8);
        }
        puVar14 = (uint *)(*(int *)(local_8 + 0x30) + *(int *)(local_8 + 0x34) * 8);
        if (puVar14 != (uint *)0x0) {
          *puVar14 = local_44;
          puVar14[1] = local_30;
        }
        *(int *)(local_8 + 0x34) = *(int *)(local_8 + 0x34) + 1;
        if (*(uint *)(local_8 + 0x34) == (*(uint *)(local_8 + 0x38) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,local_8 + 0x30,8);
        }
        puVar14 = (uint *)(*(int *)(local_8 + 0x30) + *(int *)(local_8 + 0x34) * 8);
        if (puVar14 != (uint *)0x0) {
          *puVar14 = uVar10;
          puVar14[1] = 0;
        }
        *(int *)(local_8 + 0x34) = *(int *)(local_8 + 0x34) + 1;
        if (*(uint *)(local_8 + 0x34) == (*(uint *)(local_8 + 0x38) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,local_8 + 0x30,8);
        }
        puVar14 = (uint *)(*(int *)(local_8 + 0x30) + *(int *)(local_8 + 0x34) * 8);
        if (puVar14 != (uint *)0x0) {
          *puVar14 = uVar11;
          puVar14[1] = 0;
        }
        *(int *)(local_8 + 0x34) = *(int *)(local_8 + 0x34) + 1;
      }
      uVar5 = *(undefined4 *)(uVar19 + 8 + local_38 * 4);
      FUN_010c3830();
      puVar14 = (uint *)FUN_010bd0b0(local_4c,&local_3c,uVar5);
      local_38 = puVar14[1];
      uVar19 = *puVar14;
LAB_010c64b5:
      *param_1 = 0;
      param_1[1] = uVar19;
      param_1[2] = local_38;
      FUN_010c28d0();
      return param_1;
    }
    if ((_DAT_0209a9b8 & 1) == 0) {
      _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
      DAT_0209a9b0 = 0;
      DAT_0209a9b4 = 0;
    }
  }
  *param_1 = 10;
LAB_010c6584:
  iVar12 = DAT_0209a9b4;
  param_1[1] = DAT_0209a9b0;
  param_1[2] = iVar12;
  return param_1;
}

// 010C6A10  FUN_010c6a10  size=4806  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010c6a10(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5,char param_6
                 ,int param_7)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  sbyte sVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  uint uVar23;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if ((param_2 == param_4) && (param_3 == param_5)) {
    if ((_DAT_0209a9b8 & 1) == 0) {
      _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
      DAT_0209a9b0 = 0;
      DAT_0209a9b4 = 0;
    }
    *param_1 = 9;
  }
  else {
    FUN_010bdf40(&local_50,param_2,param_3);
    if (local_50 == 2) {
      local_10 = *(int *)(local_4c + 8 + local_48 * 4);
      iVar18 = *(int *)(local_4c + 8 + (9 >> ((char)local_48 * '\x02' & 0x1fU) & 3U) * 4);
      uVar23 = local_4c;
      for (iVar18 = (*(int *)(iVar18 + 8) - *(int *)(local_10 + 8)) *
                    (param_5 - *(int *)(local_10 + 0xc)) -
                    (*(int *)(iVar18 + 0xc) - *(int *)(local_10 + 0xc)) *
                    (param_4 - *(int *)(local_10 + 8)); uVar15 = local_48, iVar18 < 0;
          iVar18 = (*(int *)(iVar14 + 8) - iVar18) * (param_5 - iVar4) -
                   (*(int *)(iVar14 + 0xc) - iVar4) * (param_4 - iVar18)) {
        uVar15 = *(uint *)(uVar23 + 0x14 + local_48 * 4);
        uVar23 = uVar15 & 0xfffffffc;
        local_48 = 9 >> ((byte)uVar15 & 3) * '\x02' & 3;
        iVar18 = *(int *)(uVar23 + 8 + local_48 * 4);
        iVar14 = *(int *)(uVar23 + 8 + (9 >> (char)local_48 * '\x02' & 3U) * 4);
        iVar4 = *(int *)(iVar18 + 0xc);
        iVar18 = *(int *)(iVar18 + 8);
      }
      do {
        if (uVar23 == 0) {
LAB_010c701d:
          if ((_DAT_0209a9b8 & 1) == 0) {
            _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
            DAT_0209a9b0 = 0;
            DAT_0209a9b4 = 0;
          }
          *param_1 = 8;
LAB_010c7259:
          uVar23 = DAT_0209a9b4;
          param_1[1] = DAT_0209a9b0;
          param_1[2] = uVar23;
          return;
        }
        cVar12 = (char)uVar15;
        uVar13 = 0x12 >> (cVar12 * '\x02' & 0x1fU) & 3;
        iVar18 = *(int *)(uVar23 + 8 + uVar13 * 4);
        iVar14 = *(int *)(uVar23 + 8 + (9 >> (char)uVar13 * '\x02' & 3U) * 4);
        iVar4 = *(int *)(iVar18 + 0xc);
        local_18 = *(int *)(iVar18 + 8);
        if (0 < (int)((*(int *)(iVar14 + 8) - local_18) * (param_5 - iVar4) -
                     (*(int *)(iVar14 + 0xc) - iVar4) * (param_4 - local_18))) {
          if (uVar23 == 0) goto LAB_010c701d;
          local_20 = 9 >> (cVar12 * '\x02' & 0x1fU) & 3;
          iVar18 = *(int *)(uVar23 + 8 + local_20 * 4);
          local_24 = uVar23;
          if ((*(int *)(iVar18 + 8) == param_4) && (*(uint *)(iVar18 + 0xc) == param_5)) {
            iVar14 = *(int *)(uVar23 + 8 + uVar15 * 4);
            iVar4 = *(int *)(iVar14 + 8);
            uVar13 = uVar23;
            uVar19 = uVar15;
            if ((*(int *)(iVar18 + 8) <= iVar4) &&
               (((*(int *)(iVar18 + 8) < iVar4 || (*(int *)(iVar18 + 0xc) < *(int *)(iVar14 + 0xc)))
                && (uVar5 = *(uint *)(uVar23 + 0x14 + uVar15 * 4), (uVar5 & 0xfffffffc) != 0)))) {
              uVar13 = uVar5 & 0xfffffffc;
              uVar19 = uVar5 & 3;
            }
            if (((uint)*(ushort *)(uVar13 + 0x22) & 1 << ((byte)uVar19 & 0x1f) & 7) != 0) {
              param_1[2] = uVar15;
              param_1[1] = uVar23;
              *param_1 = 1;
              return;
            }
            iVar14 = *(int *)(uVar23 + 8 + uVar15 * 4);
            iVar4 = *(int *)(iVar14 + 8);
            uVar13 = uVar15;
            uVar19 = uVar23;
            if (((*(int *)(iVar18 + 8) <= iVar4) &&
                ((*(int *)(iVar18 + 8) < iVar4 || (*(int *)(iVar18 + 0xc) < *(int *)(iVar14 + 0xc)))
                )) && (uVar5 = *(uint *)(uVar23 + 0x14 + uVar15 * 4), (uVar5 & 0xfffffffc) != 0)) {
              uVar13 = uVar5 & 3;
              uVar19 = uVar5 & 0xfffffffc;
            }
            uVar2 = *(ushort *)(uVar19 + 0x22);
            *(ushort *)(uVar19 + 0x22) = ((1 << ((byte)uVar13 & 0x1f) | uVar2) ^ uVar2) & 7 ^ uVar2;
            local_2c = uVar23;
            local_28 = uVar15;
            local_8 = local_20;
            if (param_7 != 0) {
              FUN_010c5550(&local_2c,param_7);
            }
            iVar18 = local_c;
            if (param_6 == '\0') goto LAB_010c7cc8;
            uVar6 = *(undefined4 *)(uVar23 + 8 + uVar15 * 4);
            uVar7 = *(undefined4 *)(uVar23 + 8 + local_8 * 4);
            uVar13 = (uint)((*(uint *)(uVar23 + 0x14 + uVar15 * 4) & 0xfffffffc) == 0);
            piVar22 = (int *)(local_c + 0x30);
            iVar14 = (-(uint)(*(int *)(local_c + 0x34) + uVar13 != 0) & 0xfffffffe) + 4;
            uVar19 = *(uint *)(local_c + 0x38) & 0x3fffffff;
            if ((int)uVar19 < iVar14) {
              iVar4 = uVar19 * 2;
              if (iVar14 < iVar4) {
                iVar14 = iVar4;
              }
              iVar14 = FUN_0100a210(&PTR_vftable_018e9b94,piVar22,iVar14,8);
              if (iVar14 == 1) {
                *(undefined1 *)(local_c + 0x648) = 1;
                uVar23 = DAT_0209a9b0;
                uVar15 = DAT_0209a9b4;
                if ((_DAT_0209a9b8 & 1) == 0) {
                  _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
                  DAT_0209a9b0 = 0;
                  DAT_0209a9b4 = 0;
                  uVar23 = DAT_0209a9b0;
                  uVar15 = DAT_0209a9b4;
                }
                goto LAB_010c7cc8;
              }
            }
            if (*(uint *)(iVar18 + 0x34) == (*(uint *)(iVar18 + 0x38) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar22,8);
            }
            puVar1 = (uint *)(*piVar22 + *(int *)(iVar18 + 0x34) * 8);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar23;
              puVar1[1] = local_8;
            }
            *(int *)(iVar18 + 0x34) = *(int *)(iVar18 + 0x34) + 1;
            local_40 = 0x12 >> (cVar12 * '\x02' & 0x1fU) & 3;
            if (*(uint *)(iVar18 + 0x34) == (*(uint *)(iVar18 + 0x38) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar22,8);
            }
            puVar1 = (uint *)(*piVar22 + *(int *)(iVar18 + 0x34) * 8);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar23;
              puVar1[1] = local_40;
            }
            *(int *)(iVar18 + 0x34) = *(int *)(iVar18 + 0x34) + 1;
            if (uVar13 == 0) {
              uVar13 = *(uint *)(uVar23 + 0x14 + uVar15 * 4);
              local_34 = uVar13 & 0xfffffffc;
              local_30 = 9 >> ((byte)uVar13 & 3) * '\x02' & 3;
              if (*(uint *)(iVar18 + 0x34) == (*(uint *)(iVar18 + 0x38) & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,piVar22,8);
              }
              puVar1 = (uint *)(*piVar22 + *(int *)(iVar18 + 0x34) * 8);
              if (puVar1 != (uint *)0x0) {
                *puVar1 = local_34;
                puVar1[1] = local_30;
              }
              *(int *)(iVar18 + 0x34) = *(int *)(iVar18 + 0x34) + 1;
              uVar23 = *(uint *)(uVar23 + 0x14 + uVar15 * 4);
              if (*(uint *)(iVar18 + 0x34) == (*(uint *)(iVar18 + 0x38) & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,piVar22,8);
              }
              puVar1 = (uint *)(*piVar22 + *(int *)(iVar18 + 0x34) * 8);
              if (puVar1 != (uint *)0x0) {
                *puVar1 = uVar23 & 0xfffffffc;
                puVar1[1] = 0x12 >> ((byte)uVar23 & 3) * '\x02' & 3;
              }
              *(int *)(iVar18 + 0x34) = *(int *)(iVar18 + 0x34) + 1;
            }
            FUN_010c3830();
            FUN_010bd640(&local_3c,&local_2c,uVar6,uVar7);
            uVar23 = local_3c;
            uVar15 = local_38;
            goto LAB_010c7cc8;
          }
          if (param_4 == param_2) {
            if (param_4 == 0) {
              if ((int)param_5 < (int)param_3) goto LAB_010c701d;
            }
            else if ((param_4 == 0x7fff) && ((int)param_3 < (int)param_5)) goto LAB_010c701d;
          }
          if (param_5 == param_3) {
            if (param_5 == 0) {
              if (param_2 < param_4) goto LAB_010c701d;
            }
            else if ((param_5 == 0x7fff) && (param_4 < param_2)) goto LAB_010c701d;
          }
          local_1c = (int *)(uVar23 + 8 + local_20 * 4);
          piVar22 = (int *)(uVar23 + 8 + (9 >> (char)local_20 * '\x02' & 3U) * 4);
          iVar18 = *(int *)(*local_1c + 0xc);
          iVar14 = *(int *)(*local_1c + 8);
          uVar13 = local_20;
          for (iVar18 = (*(int *)(*piVar22 + 8) - iVar14) * (param_5 - iVar18) -
                        (*(int *)(*piVar22 + 0xc) - iVar18) * (param_4 - iVar14);
              bVar3 = (byte)uVar13, iVar18 < 0;
              iVar18 = (*(int *)(*piVar22 + 8) - iVar14) * (param_5 - iVar18) -
                       (*(int *)(*piVar22 + 0xc) - iVar18) * (param_4 - iVar14)) {
            iVar18 = *(int *)(*local_1c + 8);
            iVar14 = *(int *)(*piVar22 + 8);
            uVar19 = local_24;
            bVar16 = bVar3;
            if ((iVar14 <= iVar18) &&
               (((iVar14 < iVar18 || (*(int *)(*piVar22 + 0xc) < *(int *)(*local_1c + 0xc))) &&
                (uVar5 = *(uint *)(local_24 + 0x14 + uVar13 * 4), (uVar5 & 0xfffffffc) != 0)))) {
              uVar19 = uVar5 & 0xfffffffc;
              bVar16 = (byte)uVar5 & 3;
            }
            if (((uint)*(ushort *)(uVar19 + 0x22) & 1 << bVar16 & 7) != 0) {
              iVar18 = *(int *)(local_24 + 8 + uVar13 * 4);
              iVar14 = *(int *)(iVar18 + 8);
              iVar18 = *(int *)(iVar18 + 0xc);
              if ((param_2 - iVar14) * (param_5 - iVar18) - (param_4 - iVar14) * (param_3 - iVar18)
                  == 0) {
                *param_1 = 4;
                param_1[1] = local_24;
                param_1[2] = uVar13;
                return;
              }
              uVar23 = 9 >> bVar3 * '\x02' & 3;
              iVar18 = *(int *)(local_24 + 8 + uVar23 * 4);
              iVar14 = *(int *)(iVar18 + 0xc);
              iVar18 = *(int *)(iVar18 + 8);
              param_1[1] = local_24;
              if ((param_2 - iVar18) * (param_5 - iVar14) - (param_4 - iVar18) * (param_3 - iVar14)
                  == 0) {
                param_1[2] = uVar23;
                *param_1 = 4;
                return;
              }
              *param_1 = 3;
              param_1[2] = uVar13;
              return;
            }
            local_34 = *(uint *)(local_24 + 0x14 + uVar13 * 4);
            local_30 = local_34 & 3;
            sVar17 = (char)local_30 * '\x02';
            local_34 = local_34 & 0xfffffffc;
            uVar13 = 0x12 >> sVar17 & 3;
            iVar18 = *(int *)(local_34 + 8 + uVar13 * 4);
            iVar14 = (*(int *)(iVar18 + 8) - *(int *)(local_10 + 8)) *
                     (param_5 - *(int *)(local_10 + 0xc)) -
                     (*(int *)(iVar18 + 0xc) - *(int *)(local_10 + 0xc)) *
                     (param_4 - *(int *)(local_10 + 8));
            if (iVar14 < 0) {
              uVar13 = 9 >> sVar17 & 3;
            }
            else if ((iVar14 < 1) &&
                    ((*(int *)(iVar18 + 8) != param_4 || (*(uint *)(iVar18 + 0xc) != param_5)))) {
              *param_1 = 4;
              param_1[1] = local_34;
              param_1[2] = 0x12 >> (char)local_30 * '\x02' & 3;
              return;
            }
            piVar22 = (int *)(local_34 + 8 + (9 >> (char)uVar13 * '\x02' & 3U) * 4);
            local_1c = (int *)(local_34 + 8 + uVar13 * 4);
            iVar18 = *(int *)(*local_1c + 0xc);
            iVar14 = *(int *)(*local_1c + 8);
            local_24 = local_34;
          }
          iVar18 = *(int *)(local_24 + 8 + uVar13 * 4);
          if (local_10 == iVar18) {
            if ((_DAT_0209a9b8 & 1) == 0) {
              _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
              DAT_0209a9b0 = 0;
              DAT_0209a9b4 = 0;
            }
            uVar15 = DAT_0209a9b4;
            uVar23 = DAT_0209a9b0;
            *param_1 = 9;
            param_1[1] = uVar23;
            param_1[2] = uVar15;
            return;
          }
          iVar14 = *(int *)(local_24 + 8 + (9 >> bVar3 * '\x02' & 3U) * 4);
          if ((*(int *)(iVar14 + 8) - *(int *)(iVar18 + 8)) * (param_5 - *(int *)(iVar18 + 0xc)) -
              (*(int *)(iVar14 + 0xc) - *(int *)(iVar18 + 0xc)) * (param_4 - *(int *)(iVar18 + 8))
              != 0) {
            if ((_DAT_0209a9b8 & 1) == 0) {
              _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
              DAT_0209a9b0 = 0;
              DAT_0209a9b4 = 0;
            }
            *param_1 = 7;
            goto LAB_010c7259;
          }
          local_14 = *(int *)(iVar18 + 8);
          if ((local_14 != param_4) || (local_18 = *(uint *)(iVar18 + 0xc), local_18 != param_5)) {
            *param_1 = 7;
            param_1[1] = local_24;
            param_1[2] = uVar13;
            return;
          }
          iVar14 = *(int *)(local_10 + 8);
          if (((iVar14 == local_14) && ((iVar14 == 0 || (iVar14 == 0x7fff)))) ||
             ((uVar19 = *(uint *)(local_10 + 0xc), uVar19 == local_18 &&
              ((uVar19 == 0 || (uVar19 == 0x7fff)))))) {
            *param_1 = 8;
            param_1[1] = local_24;
            param_1[2] = uVar13;
            return;
          }
          iVar14 = *(int *)(uVar23 + 8 + local_20 * 4);
          iVar4 = *(int *)(uVar23 + 8 + uVar15 * 4);
          iVar8 = *(int *)(iVar4 + 0xc);
          iVar4 = *(int *)(iVar4 + 8);
          if ((*(int *)(iVar14 + 8) - iVar4) * (local_18 - iVar8) -
              (*(int *)(iVar14 + 0xc) - iVar8) * (local_14 - iVar4) == 0) {
            param_1[1] = uVar23;
            *param_1 = 4;
            param_1[2] = local_20;
            return;
          }
          iVar14 = *(int *)(uVar23 + 8 + uVar15 * 4);
          iVar4 = *(int *)(iVar14 + 0xc);
          iVar8 = *(int *)(uVar23 + 8 + local_20 * 4);
          iVar14 = *(int *)(iVar14 + 8);
          if ((int)((*(int *)(iVar8 + 8) - iVar14) * (local_18 - iVar4) -
                   (*(int *)(iVar8 + 0xc) - iVar4) * (local_14 - iVar14)) < 0) {
            *param_1 = 4;
            param_1[1] = local_24;
            param_1[2] = uVar13;
            return;
          }
          param_2 = 0;
          iVar14 = *(int *)(uVar23 + 8 + local_20 * 4);
          uVar19 = local_20;
          local_20 = uVar13;
          while (uVar5 = uVar15, uVar13 = uVar23, local_28 = uVar19, cVar12 = (char)uVar5,
                uVar23 = uVar13, iVar14 != iVar18) {
            iVar14 = *(int *)(uVar13 + 8 + (9 >> (char)local_28 * '\x02' & 3U) * 4);
            iVar4 = *(int *)(local_10 + 0xc);
            local_18 = *(uint *)(iVar18 + 0xc);
            if (0 < (int)((*(int *)(iVar14 + 0xc) - iVar4) *
                          (*(int *)(iVar18 + 8) - *(int *)(local_10 + 8)) -
                         (*(int *)(iVar14 + 8) - *(int *)(local_10 + 8)) * (local_18 - iVar4))) {
              local_1c = (int *)(*(int *)(iVar18 + 8) - *(int *)(local_10 + 8));
              do {
                uVar15 = *(uint *)(uVar23 + 0x14 + local_28 * 4);
                uVar23 = uVar15 & 0xfffffffc;
                local_28 = 9 >> ((byte)uVar15 & 3) * '\x02' & 3;
                iVar14 = *(int *)(uVar23 + 8 + (9 >> (char)local_28 * '\x02' & 3U) * 4);
              } while (0 < (*(int *)(iVar14 + 0xc) - iVar4) * (int)local_1c -
                           (*(int *)(iVar14 + 8) - *(int *)(local_10 + 8)) *
                           (*(int *)(iVar18 + 0xc) - iVar4));
            }
            iVar14 = *(int *)(uVar23 + 8 + local_28 * 4);
            iVar4 = *(int *)(uVar23 + 8 + (9 >> (char)local_28 * '\x02' & 3U) * 4);
            iVar8 = *(int *)(uVar13 + 8 + uVar5 * 4);
            iVar9 = *(int *)(iVar8 + 0xc);
            iVar8 = *(int *)(iVar8 + 8);
            if ((*(int *)(iVar14 + 8) - iVar8) * (*(int *)(iVar4 + 0xc) - iVar9) -
                (*(int *)(iVar14 + 0xc) - iVar9) * (*(int *)(iVar4 + 8) - iVar8) < 1) {
              param_2 = param_2 + 1;
            }
            else {
              param_5 = 0;
              uVar23 = 9 >> (cVar12 * '\x02' & 0x1fU) & 3;
              iVar14 = *(int *)(uVar13 + 8 + (9 >> (char)uVar23 * '\x02' & 3U) * 4);
              uVar15 = uVar13;
              while (cVar12 = (char)uVar23, iVar14 != iVar4) {
                uVar19 = *(uint *)(uVar15 + 0x14 + uVar23 * 4);
                if ((uVar19 & 0xfffffffc) == 0) {
LAB_010c78e6:
                  param_5 = param_5 + 1;
                  iVar14 = 9;
LAB_010c78f5:
                  uVar23 = iVar14 >> ((byte)uVar19 & 3) * '\x02';
                }
                else {
                  iVar14 = *(int *)(uVar15 + 8 + (9 >> cVar12 * '\x02' & 3U) * 4);
                  iVar8 = *(int *)(*(int *)(uVar15 + 8 + uVar23 * 4) + 8);
                  iVar9 = *(int *)(iVar14 + 8);
                  uVar21 = uVar23;
                  uVar20 = uVar15;
                  if (iVar9 <= iVar8) {
                    if (iVar8 <= iVar9) {
                      iVar8 = *(int *)(*(int *)(uVar15 + 8 + uVar23 * 4) + 0xc);
                      iVar14 = *(int *)(iVar14 + 0xc);
                      if ((iVar8 < iVar14) || (iVar8 <= iVar14)) goto LAB_010c7541;
                    }
                    uVar21 = uVar19 & 3;
                    uVar20 = uVar19 & 0xfffffffc;
                  }
LAB_010c7541:
                  if (((uint)*(ushort *)(uVar20 + 0x22) & 1 << (sbyte)uVar21 & 7) != 0)
                  goto LAB_010c78e6;
                  local_20 = uVar19 & 3;
                  local_24 = uVar19 & 0xfffffffc;
                  uVar21 = 0x12 >> cVar12 * '\x02' & 3;
                  iVar14 = *(int *)(uVar15 + 8 + uVar21 * 4);
                  uVar19 = *(uint *)(local_24 + 8 + (0x12 >> (char)local_20 * '\x02' & 3U) * 4);
                  local_1c = *(int **)(iVar14 + 0xc);
                  iVar14 = *(int *)(iVar14 + 8);
                  local_18 = uVar19;
                  if ((*(int *)(*(int *)(uVar15 + 8 + uVar23 * 4) + 8) - iVar14) *
                      (*(int *)(uVar19 + 0xc) - (int)local_1c) -
                      (*(int *)(*(int *)(uVar15 + 8 + uVar23 * 4) + 0xc) - (int)local_1c) *
                      (*(int *)(uVar19 + 8) - iVar14) < 1) {
LAB_010c78e2:
                    uVar19 = *(uint *)(uVar15 + 0x14 + uVar23 * 4);
                    goto LAB_010c78e6;
                  }
                  iVar14 = *(int *)(local_24 + 8 + local_20 * 4);
                  local_1c = *(int **)(uVar15 + 8 + uVar21 * 4);
                  local_18 = *(uint *)(uVar19 + 0xc);
                  if ((int)((local_1c[3] - local_18) * (*(int *)(iVar14 + 8) - *(int *)(uVar19 + 8))
                           - (local_1c[2] - *(int *)(uVar19 + 8)) *
                             (*(int *)(iVar14 + 0xc) - local_18)) < 1) goto LAB_010c78e2;
                  iVar14 = *(int *)(uVar15 + 8 + (9 >> (char)uVar21 * '\x02' & 3U) * 4);
                  iVar8 = *(int *)(*(int *)(uVar15 + 8 + uVar21 * 4) + 8);
                  iVar9 = *(int *)(iVar14 + 8);
                  uVar19 = uVar21;
                  uVar20 = uVar15;
                  if ((iVar9 <= iVar8) &&
                     (((iVar9 < iVar8 ||
                       (*(int *)(iVar14 + 0xc) < *(int *)(*(int *)(uVar15 + 8 + uVar21 * 4) + 0xc)))
                      && (uVar10 = *(uint *)(uVar15 + 0x14 + uVar21 * 4), (uVar10 & 0xfffffffc) != 0
                         )))) {
                    uVar19 = uVar10 & 3;
                    uVar20 = uVar10 & 0xfffffffc;
                  }
                  local_18 = 1 << (sbyte)uVar19 & (uint)*(ushort *)(uVar20 + 0x22) & 7;
                  *(ushort *)(uVar20 + 0x22) =
                       *(ushort *)(uVar20 + 0x22) & (~(ushort)local_18 | 0xfff8);
                  uVar19 = *(uint *)(uVar15 + 0x14 + uVar23 * 4);
                  uVar20 = uVar19 & 0xfffffffc;
                  uVar19 = 0x12 >> ((byte)uVar19 & 3) * '\x02' & 3;
                  iVar14 = *(int *)(*(int *)(uVar20 + 8 + uVar19 * 4) + 8);
                  iVar8 = *(int *)(uVar20 + 8 + (9 >> (char)uVar19 * '\x02' & 3U) * 4);
                  iVar9 = *(int *)(iVar8 + 8);
                  if (((iVar9 <= iVar14) &&
                      ((iVar9 < iVar14 ||
                       (*(int *)(iVar8 + 0xc) < *(int *)(*(int *)(uVar20 + 8 + uVar19 * 4) + 0xc))))
                      ) && (uVar10 = *(uint *)(uVar20 + 0x14 + uVar19 * 4),
                           (uVar10 & 0xfffffffc) != 0)) {
                    uVar19 = uVar10 & 3;
                    uVar20 = uVar10 & 0xfffffffc;
                  }
                  local_1c = (int *)(1 << (sbyte)uVar19 & (uint)*(ushort *)(uVar20 + 0x22) & 7);
                  *(ushort *)(uVar20 + 0x22) =
                       *(ushort *)(uVar20 + 0x22) & (~(ushort)local_1c | 0xfff8);
                  uVar19 = *(uint *)(uVar15 + 0x14 + uVar23 * 4);
                  local_44 = uVar19 & 0xfffffffc;
                  uVar19 = uVar19 & 3;
                  uVar20 = 0x12 >> (char)uVar19 * '\x02' & 3;
                  *(undefined4 *)(uVar15 + 8 + uVar23 * 4) =
                       *(undefined4 *)(local_44 + 8 + uVar20 * 4);
                  *(undefined4 *)(local_44 + 8 + uVar19 * 4) =
                       *(undefined4 *)(uVar15 + 8 + uVar21 * 4);
                  local_3c = *(uint *)(uVar15 + 0x14 + uVar21 * 4);
                  local_38 = local_3c & 3;
                  local_3c = local_3c & 0xfffffffc;
                  *(uint *)(local_44 + 0x14 + uVar19 * 4) = local_3c + local_38;
                  if (local_3c != 0) {
                    *(uint *)(local_3c + 0x14 + local_38 * 4) = local_44 + uVar19;
                  }
                  local_4c = *(uint *)(local_44 + 0x14 + uVar20 * 4);
                  uVar19 = local_4c & 3;
                  local_4c = local_4c & 0xfffffffc;
                  *(uint *)(uVar15 + 0x14 + uVar23 * 4) = local_4c + uVar19;
                  if (local_4c != 0) {
                    *(uint *)(local_4c + 0x14 + uVar19 * 4) = uVar15 + uVar23;
                  }
                  *(uint *)(uVar15 + 0x14 + uVar21 * 4) = local_44 + uVar20;
                  if (local_44 != 0) {
                    *(uint *)(local_44 + 0x14 + uVar20 * 4) = uVar21 + uVar15;
                  }
                  if (local_18 != 0) {
                    uVar23 = *(uint *)(uVar15 + 0x14 + uVar21 * 4);
                    uVar19 = uVar23 & 0xfffffffc;
                    uVar23 = 9 >> ((byte)uVar23 & 3) * '\x02' & 3;
                    iVar14 = *(int *)(uVar19 + 8 + (9 >> (char)uVar23 * '\x02' & 3U) * 4);
                    iVar8 = *(int *)(*(int *)(uVar19 + 8 + uVar23 * 4) + 8);
                    iVar9 = *(int *)(iVar14 + 8);
                    if (((iVar9 <= iVar8) &&
                        ((iVar9 < iVar8 ||
                         (*(int *)(iVar14 + 0xc) < *(int *)(*(int *)(uVar19 + 8 + uVar23 * 4) + 0xc)
                         )))) && (uVar20 = *(uint *)(uVar19 + 0x14 + uVar23 * 4),
                                 (uVar20 & 0xfffffffc) != 0)) {
                      uVar23 = uVar20 & 3;
                      uVar19 = uVar20 & 0xfffffffc;
                    }
                    uVar2 = *(ushort *)(uVar19 + 0x22);
                    *(ushort *)(uVar19 + 0x22) = ((1 << (sbyte)uVar23 | uVar2) ^ uVar2) & 7 ^ uVar2;
                  }
                  if (local_1c != (int *)0x0) {
                    uVar19 = 9 >> (char)uVar21 * '\x02' & 3;
                    iVar14 = *(int *)(uVar15 + 8 + (9 >> (char)uVar19 * '\x02' & 3U) * 4);
                    iVar8 = *(int *)(uVar15 + 8 + uVar19 * 4);
                    iVar9 = *(int *)(iVar8 + 8);
                    iVar11 = *(int *)(iVar14 + 8);
                    uVar23 = uVar15;
                    if ((iVar11 <= iVar9) &&
                       (((iVar11 < iVar9 || (*(int *)(iVar14 + 0xc) < *(int *)(iVar8 + 0xc))) &&
                        (uVar20 = *(uint *)(uVar15 + 0x14 + uVar19 * 4), (uVar20 & 0xfffffffc) != 0)
                        ))) {
                      uVar19 = uVar20 & 3;
                      uVar23 = uVar20 & 0xfffffffc;
                    }
                    uVar2 = *(ushort *)(uVar23 + 0x22);
                    *(ushort *)(uVar23 + 0x22) = ((1 << (sbyte)uVar19 | uVar2) ^ uVar2) & 7 ^ uVar2;
                  }
                  if (param_5 == 0) {
                    uVar19 = *(uint *)(uVar15 + 0x14 + uVar21 * 4);
                    iVar14 = 0x12;
                    goto LAB_010c78f5;
                  }
                  uVar23 = *(uint *)(uVar15 + 0x14 + uVar21 * 4);
                  uVar23 = *(uint *)((uVar23 & 0xfffffffc) + 0x14 +
                                    (9 >> ((byte)uVar23 & 3) * '\x02' & 3U) * 4);
                  param_5 = param_5 + -1;
                  uVar19 = uVar23;
                }
                uVar15 = uVar19 & 0xfffffffc;
                uVar23 = uVar23 & 3;
                iVar14 = *(int *)(uVar15 + 8 + (9 >> (char)uVar23 * '\x02' & 3U) * 4);
              }
              uVar23 = *(uint *)(uVar15 + 0x14 + (9 >> cVar12 * '\x02' & 3U) * 4);
              local_28 = uVar23 & 3;
              uVar23 = uVar23 & 0xfffffffc;
              if (param_2 != 0) {
                piVar22 = (int *)(0x12 >> (char)local_28 * '\x02' & 3);
                iVar14 = *(int *)(uVar23 + 8 + (int)piVar22 * 4);
                iVar4 = *(int *)(local_10 + 8);
                local_14 = *(int *)(iVar18 + 8);
                local_1c = piVar22;
                if (0 < (*(int *)(iVar14 + 0xc) - *(int *)(local_10 + 0xc)) * (local_14 - iVar4) -
                        (*(int *)(iVar14 + 8) - iVar4) *
                        (*(int *)(iVar18 + 0xc) - *(int *)(local_10 + 0xc))) {
                  local_18 = *(int *)(iVar18 + 8) - iVar4;
                  local_1c = *(int **)(local_10 + 0xc);
                  do {
                    uVar23 = *(uint *)(uVar23 + 0x14 + (int)piVar22 * 4);
                    local_28 = uVar23 & 3;
                    uVar23 = uVar23 & 0xfffffffc;
                    piVar22 = (int *)(0x12 >> (char)local_28 * '\x02' & 3);
                    iVar14 = *(int *)(uVar23 + 8 + (int)piVar22 * 4);
                  } while (0 < (int)((*(int *)(iVar14 + 0xc) - (int)local_1c) * local_18 -
                                    (*(int *)(iVar14 + 8) - iVar4) *
                                    (*(int *)(iVar18 + 0xc) - (int)local_1c)));
                }
                local_28 = 0x12 >> (char)local_28 * '\x02' & 3;
                param_2 = param_2 + -1;
              }
            }
            uVar19 = 9 >> (char)local_28 * '\x02' & 3;
            iVar14 = *(int *)(uVar23 + 8 + uVar19 * 4);
            uVar15 = local_28;
            local_34 = uVar13;
            local_30 = uVar5;
          }
          iVar18 = *(int *)(uVar13 + 8 + uVar5 * 4);
          iVar14 = *(int *)(iVar18 + 8);
          local_8 = 9 >> (cVar12 * '\x02' & 0x1fU) & 3;
          iVar4 = *(int *)(uVar13 + 8 + local_8 * 4);
          iVar8 = *(int *)(iVar4 + 8);
          uVar15 = uVar5;
          uVar19 = uVar13;
          if (((iVar8 <= iVar14) &&
              ((iVar8 < iVar14 || (*(int *)(iVar4 + 0xc) < *(int *)(iVar18 + 0xc))))) &&
             (uVar21 = *(uint *)(uVar13 + 0x14 + uVar5 * 4), (uVar21 & 0xfffffffc) != 0)) {
            uVar15 = uVar21 & 3;
            uVar19 = uVar21 & 0xfffffffc;
          }
          uVar2 = *(ushort *)(uVar19 + 0x22);
          *(ushort *)(uVar19 + 0x22) = ((1 << ((byte)uVar15 & 0x1f) | uVar2) ^ uVar2) & 7 ^ uVar2;
          local_2c = uVar13;
          local_28 = uVar5;
          if (param_7 != 0) {
            FUN_010c5550(&local_2c,param_7);
          }
          iVar18 = local_c;
          uVar15 = uVar5;
          if (param_6 != '\0') {
            uVar6 = *(undefined4 *)(uVar13 + 8 + local_8 * 4);
            uVar7 = *(undefined4 *)(uVar13 + 8 + uVar5 * 4);
            uVar23 = (uint)((*(uint *)(uVar13 + 0x14 + uVar5 * 4) & 0xfffffffc) == 0);
            piVar22 = (int *)(local_c + 0x30);
            iVar14 = (-(uint)(*(int *)(local_c + 0x34) + uVar23 != 0) & 0xfffffffe) + 4;
            uVar15 = *(uint *)(local_c + 0x38) & 0x3fffffff;
            if ((int)uVar15 < iVar14) {
              iVar4 = uVar15 * 2;
              if (iVar14 < iVar4) {
                iVar14 = iVar4;
              }
              iVar14 = FUN_0100a210(&PTR_vftable_018e9b94,piVar22,iVar14,8);
              if (iVar14 == 1) {
                *(undefined1 *)(local_c + 0x648) = 1;
                uVar23 = DAT_0209a9b0;
                uVar15 = DAT_0209a9b4;
                if ((_DAT_0209a9b8 & 1) == 0) {
                  _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
                  DAT_0209a9b0 = 0;
                  DAT_0209a9b4 = 0;
                  uVar23 = DAT_0209a9b0;
                  uVar15 = DAT_0209a9b4;
                }
                goto LAB_010c7c8a;
              }
            }
            if (*(uint *)(iVar18 + 0x34) == (*(uint *)(iVar18 + 0x38) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar22,8);
            }
            puVar1 = (uint *)(*piVar22 + *(int *)(iVar18 + 0x34) * 8);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar13;
              puVar1[1] = local_8;
            }
            *(int *)(iVar18 + 0x34) = *(int *)(iVar18 + 0x34) + 1;
            local_48 = 0x12 >> (cVar12 * '\x02' & 0x1fU) & 3;
            if (*(uint *)(iVar18 + 0x34) == (*(uint *)(iVar18 + 0x38) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar22,8);
            }
            puVar1 = (uint *)(*piVar22 + *(int *)(iVar18 + 0x34) * 8);
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar13;
              puVar1[1] = local_48;
            }
            *(int *)(iVar18 + 0x34) = *(int *)(iVar18 + 0x34) + 1;
            if (uVar23 == 0) {
              uVar23 = *(uint *)(uVar13 + 0x14 + uVar5 * 4);
              local_3c = uVar23 & 0xfffffffc;
              local_38 = 9 >> ((byte)uVar23 & 3) * '\x02' & 3;
              if (*(uint *)(iVar18 + 0x34) == (*(uint *)(iVar18 + 0x38) & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,piVar22,8);
              }
              puVar1 = (uint *)(*piVar22 + *(int *)(iVar18 + 0x34) * 8);
              if (puVar1 != (uint *)0x0) {
                *puVar1 = local_3c;
                puVar1[1] = local_38;
              }
              *(int *)(iVar18 + 0x34) = *(int *)(iVar18 + 0x34) + 1;
              uVar23 = *(uint *)(uVar13 + 0x14 + uVar5 * 4);
              if (*(uint *)(iVar18 + 0x34) == (*(uint *)(iVar18 + 0x38) & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,piVar22,8);
              }
              puVar1 = (uint *)(*piVar22 + *(int *)(iVar18 + 0x34) * 8);
              if (puVar1 != (uint *)0x0) {
                *puVar1 = uVar23 & 0xfffffffc;
                puVar1[1] = 0x12 >> ((byte)uVar23 & 3) * '\x02' & 3;
              }
              *(int *)(iVar18 + 0x34) = *(int *)(iVar18 + 0x34) + 1;
            }
            FUN_010c3830();
            FUN_010bd640(&local_44,&local_2c,uVar7,uVar6);
            uVar23 = local_44;
            uVar15 = local_40;
          }
LAB_010c7c8a:
          *(uint *)(local_c + 0x244 +
                   ((*(int *)(*(int *)(uVar23 + 0xc) + 0xc) +
                     *(int *)(*(int *)(uVar23 + 8) + 0xc) * 2 +
                     *(int *)(*(int *)(uVar23 + 0x10) + 0xc) >> 0xd) * 0x10 +
                   (*(int *)(*(int *)(uVar23 + 0xc) + 8) + *(int *)(*(int *)(uVar23 + 8) + 8) * 2 +
                    *(int *)(*(int *)(uVar23 + 0x10) + 8) >> 0xd)) * 4) = uVar23;
          *(ushort *)(uVar23 + 0x22) = *(ushort *)(uVar23 + 0x22) | 8;
LAB_010c7cc8:
          param_1[2] = uVar15;
          param_1[1] = uVar23;
          *param_1 = 0;
          return;
        }
        uVar15 = *(uint *)(uVar23 + 0x14 + uVar13 * 4);
        uVar23 = uVar15 & 0xfffffffc;
        uVar15 = uVar15 & 3;
      } while( true );
    }
    if ((_DAT_0209a9b8 & 1) == 0) {
      _DAT_0209a9b8 = _DAT_0209a9b8 | 1;
      DAT_0209a9b0 = 0;
      DAT_0209a9b4 = 0;
    }
    *param_1 = 6;
  }
  uVar23 = DAT_0209a9b4;
  param_1[1] = DAT_0209a9b0;
  param_1[2] = uVar23;
  return;
}

// 010C7CE0  FUN_010c7ce0  size=62  [run]
undefined4 FUN_010c7ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_10 [12];
  
  FUN_010bdf40(local_10,param_2,param_3);
  FUN_010c57f0(param_1,param_2,param_3,param_4,local_10,0);
  return param_1;
}

// 010C7D20  FUN_010c7d20  size=50  [run]
undefined4
FUN_010c7d20(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_010c6a10(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),param_4,param_5);
  return param_1;
}

// 010C7D60  FUN_010c7d60  size=65  [run]
undefined4 FUN_010c7d60(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_10 [12];
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  FUN_010bdf40(local_10,uVar1,uVar2);
  FUN_010c57f0(param_1,uVar1,uVar2,param_3,local_10,0);
  return param_1;
}

// 010C7DB0  FUN_010c7db0  size=50  [run]
undefined4
FUN_010c7db0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  FUN_010c6a10(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),param_4,param_5);
  return param_1;
}

// 010C7DF0  FUN_010c7df0  size=8  [run]
undefined4 FUN_010c7df0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010C7E00  FUN_010c7e00  size=8  [run]
undefined4 FUN_010c7e00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010C7E10  FUN_010c7e10  size=22  [run]
void __thiscall FUN_010c7e10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

// 010C7E60  FUN_010c7e60  size=21  [run]
void __thiscall FUN_010c7e60(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  return;
}

// 010C7EA0  FUN_010c7ea0  size=31  [run]
void __thiscall
FUN_010c7ea0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  return;
}

// 010C7EC0  FUN_010c7ec0  size=14  [run]
undefined4 __thiscall FUN_010c7ec0(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 8 + param_2 * 4);
}

// 010C7F00  FUN_010c7f00  size=9  [run]
void FUN_010c7f00(void)

{
  FUN_01010160();
  return;
}

// 010C7F70  FUN_010c7f70  size=14  [run]
void __thiscall FUN_010c7f70(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010C7F80  FUN_010c7f80  size=20  [run]
uint FUN_010c7f80(char param_1)

{
  return 0x12 >> (param_1 * '\x02' & 0x1fU) & 3;
}

// 010C7FE0  FUN_010c7fe0  size=18  [run]
int __thiscall FUN_010c7fe0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010C8040  FUN_010c8040  size=15  [run]
int __thiscall FUN_010c8040(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010C80B0  FUN_010c80b0  size=15  [run]
int __thiscall FUN_010c80b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010C80F0  FUN_010c80f0  size=27  [run]
undefined4 __thiscall FUN_010c80f0(int *param_1,int *param_2)

{
  return CONCAT31((int3)((uint)(param_1[1] + *param_1) >> 8),
                  param_1[1] + *param_1 != param_2[1] + *param_2);
}

// 010C8130  FUN_010c8130  size=18  [run]
int __thiscall FUN_010c8130(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010C8160  FUN_010c8160  size=15  [run]
int __thiscall FUN_010c8160(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010C8180  FUN_010c8180  size=32  [run]
void __thiscall FUN_010c8180(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010C81C0  FUN_010c81c0  size=34  [run]
void FUN_010c81c0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010C8210  FUN_010c8210  size=52  [run]
undefined4 __thiscall FUN_010c8210(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 010C8250  FUN_010c8250  size=26  [run]
void __thiscall FUN_010c8250(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010C8270  FUN_010c8270  size=28  [run]
void __thiscall FUN_010c8270(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010C8290  FUN_010c8290  size=11  [run]
int FUN_010c8290(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010C82A0  FUN_010c82a0  size=21  [run]
bool FUN_010c82a0(uint *param_1,uint *param_2)

{
  return *param_1 < *param_2;
}

// 010C82C0  FUN_010c82c0  size=8  [run]
undefined4 FUN_010c82c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010C82D0  FUN_010c82d0  size=8  [run]
undefined4 FUN_010c82d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010C8340  FUN_010c8340  size=58  [run]
bool FUN_010c8340(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0x10) + *(int *)(*(int *)(param_1 + 0xc) + 0x10) +
         *(int *)(*(int *)(param_1 + 8) + 0x10) <
         *(int *)(*(int *)(param_2 + 0x10) + 0x10) + *(int *)(*(int *)(param_2 + 0xc) + 0x10) +
         *(int *)(*(int *)(param_2 + 8) + 0x10);
}

// 010C8380  FUN_010c8380  size=39  [run]
void FUN_010c8380(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010C83B0  hkgpIndexedMesh::IVertexRemoval::vf00  size=50  [run]
undefined4 * __thiscall hkgpIndexedMesh::IVertexRemoval::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010C8400  FUN_010c8400  size=39  [run]
void FUN_010c8400(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010C8430  hkgpIndexedMesh::ITriangleRemoval::vf00  size=50  [run]
undefined4 * __thiscall hkgpIndexedMesh::ITriangleRemoval::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = IVertexRemoval::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010C84A0  FUN_010c84a0  size=32  [run]
void __thiscall FUN_010c84a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = 0x12 >> ((char)uVar1 * '\x02' & 0x1fU) & 3;
  return;
}

// 010C84E0  FUN_010c84e0  size=89  [run]
undefined4 __thiscall FUN_010c84e0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if ((*(int *)(*param_1 + 8 + param_1[1] * 4) !=
         *(int *)(iVar1 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4)) ||
       (*(int *)(*param_1 + 8 + (9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4) !=
        *(int *)(iVar1 + 8 + param_2[1] * 4))) {
      return 0;
    }
  }
  return 1;
}

// 010C8540  FUN_010c8540  size=15  [run]
void __thiscall FUN_010c8540(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  return;
}

// 010C8550  FUN_010c8550  size=25  [run]
void FUN_010c8550(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010C8570  FUN_010c8570  size=21  [run]
void FUN_010c8570(undefined4 param_1)

{
  FUN_01010c40(&PTR_vftable_018e9b94,param_1);
  return;
}

// 010C8610  FUN_010c8610  size=46  [run]
void __thiscall FUN_010c8610(int *param_1,int *param_2)

{
  *(int *)(*param_1 + 0x14 + param_1[1] * 4) = *param_2 + param_2[1];
  if (*param_2 != 0) {
    *(int *)(*param_2 + 0x14 + param_2[1] * 4) = param_1[1] + *param_1;
  }
  return;
}

// 010C8640  FUN_010c8640  size=49  [run]
uint FUN_010c8640(uint param_1,uint param_2)

{
  if (param_1 < param_2) {
    return param_2 * 0x1958e9 ^ param_1 * 0x3442a5;
  }
  return param_1 * 0x1958e9 ^ param_2 * 0x3442a5;
}

// 010C8690  FUN_010c8690  size=28  [run]
void __thiscall FUN_010c8690(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 010C86B0  FUN_010c86b0  size=54  [run]
void __thiscall FUN_010c86b0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_1[1] + -1;
  iVar1 = (param_1[1] - param_2) * 4;
  puVar2 = (undefined4 *)(*param_1 + param_2 * 4);
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 010C86F0  FUN_010c86f0  size=13  [run]
void __thiscall FUN_010c86f0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010C8700  FUN_010c8700  size=57  [run]
void __thiscall FUN_010c8700(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010C8740  FUN_010c8740  size=25  [run]
void __thiscall FUN_010c8740(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010C8760  FUN_010c8760  size=52  [run]
undefined4 __thiscall FUN_010c8760(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 010C87A0  FUN_010c87a0  size=45  [run]
undefined4 __thiscall FUN_010c87a0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,4);
    return uVar1;
  }
  return 0;
}

// 010C87E0  FUN_010c87e0  size=20  [run]
void __thiscall FUN_010c87e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  return;
}

// 010C8800  FUN_010c8800  size=23  [run]
int __thiscall FUN_010c8800(int *param_1,uint param_2)

{
  return *param_1 + (param_2 % (uint)param_1[1]) * 0xc;
}

// 010C8820  FUN_010c8820  size=32  [run]
void __thiscall FUN_010c8820(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010C8860  FUN_010c8860  size=48  [run]
void __thiscall FUN_010c8860(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 8);
    iVar2 = (*param_1 + param_1[1] * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 010C8890  FUN_010c8890  size=61  [run]
void __thiscall FUN_010c8890(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010C88D0  FUN_010c88d0  size=63  [run]
void __thiscall FUN_010c88d0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010C8910  FUN_010c8910  size=40  [run]
void FUN_010c8910(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010C8940  FUN_010c8940  size=284  [run]
void FUN_010c8940(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar1 = *(int *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar3 = param_3;
    iVar6 = param_2;
    do {
      iVar4 = *(int *)(*(int *)(iVar1 + 8) + 0x10) + *(int *)(*(int *)(iVar1 + 0x10) + 0x10) +
              *(int *)(*(int *)(iVar1 + 0xc) + 0x10);
      iVar5 = *(int *)(param_1 + iVar6 * 4);
      for (iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0x10) + *(int *)(*(int *)(iVar5 + 0xc) + 0x10)
                   + *(int *)(*(int *)(*(int *)(param_1 + iVar6 * 4) + 8) + 0x10); iVar5 < iVar4;
          iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0x10) + *(int *)(*(int *)(iVar5 + 0xc) + 0x10) +
                  *(int *)(*(int *)(iVar5 + 8) + 0x10)) {
        iVar5 = *(int *)(param_1 + 4 + iVar6 * 4);
        iVar6 = iVar6 + 1;
      }
      iVar5 = *(int *)(param_1 + iVar3 * 4);
      for (iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0x10) + *(int *)(*(int *)(iVar5 + 0xc) + 0x10)
                   + *(int *)(*(int *)(*(int *)(param_1 + iVar3 * 4) + 8) + 0x10); iVar4 < iVar5;
          iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0x10) + *(int *)(*(int *)(iVar5 + 0xc) + 0x10) +
                  *(int *)(*(int *)(iVar5 + 8) + 0x10)) {
        iVar5 = *(int *)(param_1 + -4 + iVar3 * 4);
        iVar3 = iVar3 + -1;
      }
      if (iVar3 < iVar6) break;
      if (iVar3 != iVar6) {
        uVar2 = *(undefined4 *)(param_1 + iVar3 * 4);
        *(undefined4 *)(param_1 + iVar3 * 4) = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = uVar2;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar6 <= iVar3);
    if (param_2 < iVar3) {
      FUN_010c8940(param_1,param_2,iVar3,param_4);
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}

// 010C8A60  FUN_010c8a60  size=102  [run]
void __fastcall FUN_010c8a60(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(0x610);
  if (iVar2 != 0) {
    iVar4 = 0x1f;
    piVar1 = (int *)(iVar2 + 0x5d0);
    piVar5 = (int *)0;
    do {
      piVar3 = piVar1;
      *piVar3 = (int)piVar5;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + -0xc;
      piVar5 = piVar3;
    } while (-1 < iVar4);
    *(int **)(iVar2 + 0x600) = piVar3;
    *(undefined4 *)(iVar2 + 0x60c) = 0;
    *(undefined4 *)(iVar2 + 0x604) = 0;
    *(int *)(iVar2 + 0x608) = *param_1;
    *param_1 = iVar2;
    if (*(int *)(iVar2 + 0x608) != 0) {
      *(int *)(*(int *)(iVar2 + 0x608) + 0x604) = iVar2;
    }
  }
  return;
}

// 010C8AD0  FUN_010c8ad0  size=102  [run]
void __fastcall FUN_010c8ad0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(PTR_vftable_018e9b94 + 4))(0xa10);
  if (iVar2 != 0) {
    iVar4 = 0x1f;
    piVar1 = (int *)(iVar2 + 0x9b0);
    piVar5 = (int *)0;
    do {
      piVar3 = piVar1;
      *piVar3 = (int)piVar5;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + -0x14;
      piVar5 = piVar3;
    } while (-1 < iVar4);
    *(int **)(iVar2 + 0xa00) = piVar3;
    *(undefined4 *)(iVar2 + 0xa0c) = 0;
    *(undefined4 *)(iVar2 + 0xa04) = 0;
    *(int *)(iVar2 + 0xa08) = *param_1;
    *param_1 = iVar2;
    if (*(int *)(iVar2 + 0xa08) != 0) {
      *(int *)(*(int *)(iVar2 + 0xa08) + 0xa04) = iVar2;
    }
  }
  return;
}

// 010C8B50  FUN_010c8b50  size=143  [run]
void FUN_010c8b50(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  do {
    uVar1 = *(uint *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar4 = param_3;
    iVar5 = param_2;
    do {
      uVar2 = *(uint *)(param_1 + iVar5 * 4);
      while (uVar2 < uVar1) {
        iVar5 = iVar5 + 1;
        uVar2 = *(uint *)(param_1 + iVar5 * 4);
      }
      uVar2 = *(uint *)(param_1 + iVar4 * 4);
      while (uVar1 < uVar2) {
        iVar4 = iVar4 + -1;
        uVar2 = *(uint *)(param_1 + iVar4 * 4);
      }
      if (iVar4 < iVar5) break;
      if (iVar4 != iVar5) {
        uVar3 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar4);
    if (param_2 < iVar4) {
      FUN_010c8b50(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar5;
    if (param_3 <= iVar5) {
      return;
    }
  } while( true );
}

// 010C8C50  FUN_010c8c50  size=89  [run]
undefined4 __thiscall FUN_010c8c50(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if ((*(int *)(*param_1 + 8 + param_1[1] * 4) !=
         *(int *)(iVar1 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4)) ||
       (*(int *)(*param_1 + 8 + (9 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4) !=
        *(int *)(iVar1 + 8 + param_2[1] * 4))) {
      return 0;
    }
  }
  return 1;
}

// 010C8CC0  FUN_010c8cc0  size=39  [run]
void FUN_010c8cc0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010C8CF0  hkgpIndexedMesh::IEdgeCollapse::vf00  size=50  [run]
undefined4 * __thiscall hkgpIndexedMesh::IEdgeCollapse::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = IVertexRemoval::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010C8D50  FUN_010c8d50  size=58  [run]
void __thiscall FUN_010c8d50(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010C8D90  FUN_010c8d90  size=53  [run]
undefined4 __thiscall FUN_010c8d90(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 010C8DD0  FUN_010c8dd0  size=46  [run]
undefined4 __thiscall FUN_010c8dd0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,4);
    return uVar1;
  }
  return 0;
}

// 010C8E00  FUN_010c8e00  size=67  [run]
void __thiscall FUN_010c8e00(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010C8E50  FUN_010c8e50  size=33  [run]
void FUN_010c8e50(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_010c8940(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 010C8E80  FUN_010c8e80  size=61  [run]
void __fastcall FUN_010c8e80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010C8EC0  FUN_010c8ec0  size=63  [run]
void __fastcall FUN_010c8ec0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010C8FA0  FUN_010c8fa0  size=151  [run]
int __thiscall FUN_010c8fa0(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    iVar1 = *param_2;
    piVar2 = (int *)(*param_1 + param_3 * 8);
    do {
      if (iVar1 == 0) {
        return param_3;
      }
      if ((*(int *)(*piVar2 + 8 + piVar2[1] * 4) ==
           *(int *)(iVar1 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4)) &&
         (*(int *)(*piVar2 + 8 + (9 >> ((char)piVar2[1] * '\x02' & 0x1fU) & 3U) * 4) ==
          *(int *)(iVar1 + 8 + param_2[1] * 4))) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar2 = piVar2 + 2;
    } while (param_3 < param_4);
  }
  return -1;
}

// 010C9040  FUN_010c9040  size=51  [run]
int __thiscall FUN_010c9040(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010C9080  FUN_010c9080  size=33  [run]
void FUN_010c9080(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_010c8b50(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 010C90B0  FUN_010c90b0  size=46  [run]
void FUN_010c90b0(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0x80000000;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010C90E0  FUN_010c90e0  size=56  [run]
void __thiscall FUN_010c90e0(int *param_1,undefined4 param_2)

{
  param_1 = (int *)*param_1;
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010C9130  hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::vf0C  size=5  [run]
undefined1 hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::vf0C(void)

{
  return 1;
}

// 010C9140  hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::vf04  size=3  [run]
void hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::vf04(void)

{
  return;
}

// 010C9150  hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::vf08  size=3  [run]
void hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::vf08(void)

{
  return;
}

// 010C9160  hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::vf00  size=50  [run]
undefined4 * __thiscall
hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkgpIndexedMesh::IVertexRemoval::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010C91C0  FUN_010c91c0  size=68  [run]
void __thiscall FUN_010c91c0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010C9240  FUN_010c9240  size=182  [run]
int * __thiscall FUN_010c9240(int *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
  iVar2 = piVar1[1];
  param_2 = 0;
  if (0 < iVar2) {
    piVar1 = (int *)*piVar1;
    iVar3 = *param_3;
    piVar4 = piVar1;
    while (iVar3 != 0) {
      if ((*(int *)(*piVar4 + 8 + piVar4[1] * 4) ==
           *(int *)(iVar3 + 8 + (9 >> ((char)param_3[1] * '\x02' & 0x1fU) & 3U) * 4)) &&
         (*(int *)(*piVar4 + 8 + (9 >> ((char)piVar4[1] * '\x02' & 0x1fU) & 3U) * 4) ==
          *(int *)(iVar3 + 8 + param_3[1] * 4))) break;
      param_2 = param_2 + 1;
      piVar4 = piVar4 + 2;
      if (iVar2 <= (int)param_2) {
        return (int *)0x0;
      }
    }
    if (param_2 != -1) {
      return piVar1 + param_2 * 2;
    }
  }
  return (int *)0x0;
}

// 010C9300  FUN_010c9300  size=340  [run]
void __thiscall FUN_010c9300(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  
  param_1[3] = param_1[3] + -1;
  local_8 = 0;
  iVar1 = *(int *)(*param_1 + 4 + (param_2 % (uint)param_1[1]) * 0xc);
  piVar3 = (int *)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
  if (0 < iVar1) {
    piVar2 = (int *)*piVar3;
    iVar5 = *param_3;
    piVar4 = piVar2;
    while (iVar5 != 0) {
      if ((*(int *)(*piVar4 + 8 + piVar4[1] * 4) ==
           *(int *)(iVar5 + 8 + (9 >> ((char)param_3[1] * '\x02' & 0x1fU) & 3U) * 4)) &&
         (*(int *)(*piVar4 + 8 + (9 >> ((char)piVar4[1] * '\x02' & 0x1fU) & 3U) * 4) ==
          *(int *)(iVar5 + 8 + param_3[1] * 4))) break;
      local_8 = local_8 + 1;
      piVar4 = piVar4 + 2;
      if (iVar1 <= local_8) {
        return;
      }
    }
    if (-1 < local_8) {
      local_8 = 0;
      piVar4 = piVar2;
      if (0 < iVar1) {
        do {
          if (iVar5 == 0) goto LAB_010c941b;
          if ((*(int *)(*piVar4 + 8 + piVar4[1] * 4) ==
               *(int *)(iVar5 + 8 + (9 >> ((char)param_3[1] * '\x02' & 0x1fU) & 3U) * 4)) &&
             (*(int *)(*piVar4 + 8 + (9 >> ((char)piVar4[1] * '\x02' & 0x1fU) & 3U) * 4) ==
              *(int *)(iVar5 + 8 + param_3[1] * 4))) goto LAB_010c941b;
          local_8 = local_8 + 1;
          piVar4 = piVar4 + 2;
        } while (local_8 < iVar1);
      }
      local_8 = -1;
LAB_010c941b:
      iVar1 = iVar1 + -1;
      piVar3[1] = iVar1;
      if (iVar1 != local_8) {
        piVar3 = piVar2 + local_8 * 2;
        iVar1 = iVar1 * 8 - (int)piVar3;
        iVar5 = 2;
        do {
          *piVar3 = *(int *)((int)piVar2 + iVar1 + (int)piVar3);
          piVar3 = piVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}

// 010C9460  FUN_010c9460  size=61  [run]
void __fastcall FUN_010c9460(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010C94A0  FUN_010c94a0  size=27  [run]
void __thiscall FUN_010c94a0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffc0;
  return;
}

// 010C94C0  FUN_010c94c0  size=40  [run]
void FUN_010c94c0(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_010c8b50(param_1,0,param_2 + -1,0);
  }
  return;
}

// 010C94F0  FUN_010c94f0  size=63  [run]
void __fastcall FUN_010c94f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010C9530  FUN_010c9530  size=89  [run]
int __thiscall FUN_010c9530(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x80000000;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0xc;
}

// 010C9610  FUN_010c9610  size=45  [run]
void __thiscall FUN_010c9610(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + param_1[1] * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = 9 >> ((byte)uVar1 & 3) * '\x02' & 3;
  return;
}

// 010C9640  FUN_010c9640  size=46  [run]
uint * __thiscall FUN_010c9640(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14 + (0x12 >> ((char)param_1[1] * '\x02' & 0x1fU) & 3U) * 4);
  *param_2 = uVar1 & 0xfffffffc;
  param_2[1] = uVar1 & 3;
  return param_2;
}

// 010C9670  FUN_010c9670  size=46  [run]
int __fastcall FUN_010c9670(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010C96A0  FUN_010c96a0  size=66  [run]
undefined4 __thiscall FUN_010c96a0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  param_1[1] = param_1[1] + 1;
  param_1 = (int *)*param_1;
  uVar2 = *param_2;
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 4);
  *puVar1 = uVar2;
  param_1[1] = param_1[1] + 1;
  return CONCAT31((int3)((uint)puVar1 >> 8),1);
}

// 010C9720  FUN_010c9720  size=362  [run]
void __thiscall FUN_010c9720(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8;
  
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 8))(param_2);
  }
  piVar5 = param_2 + 2;
  local_8 = 3;
  do {
    uVar2 = piVar5[3];
    if ((uVar2 & 0xfffffffc) != 0) {
      *(undefined4 *)((uVar2 & 0xfffffffc) + 0x14 + (uVar2 & 3) * 4) = 0;
    }
    piVar5[3] = 0;
    iVar3 = *piVar5;
    piVar1 = (int *)(iVar3 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*(int *)(iVar3 + 0x10) == 0) {
      if (param_3 != (int *)0x0) {
        (**(code **)(*param_3 + 4))(*piVar5);
      }
      piVar1 = (int *)*piVar5;
      iVar3 = *piVar1;
      piVar4 = (int *)piVar1[1];
      if (iVar3 != 0) {
        *(int **)(iVar3 + 4) = piVar4;
      }
      if (piVar4 == (int *)0x0) {
        *(int *)(param_1 + 0xc) = iVar3;
      }
      else {
        *piVar4 = iVar3;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      iVar3 = piVar1[8];
      piVar1 = (int *)(iVar3 + 0x60c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (*(int *)(iVar3 + 0x604) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 0x608);
        }
        else {
          *(undefined4 *)(*(int *)(iVar3 + 0x604) + 0x608) = *(undefined4 *)(iVar3 + 0x608);
        }
        if (*(int *)(iVar3 + 0x608) != 0) {
          *(undefined4 *)(*(int *)(iVar3 + 0x608) + 0x604) = *(undefined4 *)(iVar3 + 0x604);
        }
        (**(code **)(PTR_vftable_018e9b94 + 8))(iVar3,0x610);
      }
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar3 = *param_2;
  piVar5 = (int *)param_2[1];
  if (iVar3 != 0) {
    *(int **)(iVar3 + 4) = piVar5;
  }
  if (piVar5 == (int *)0x0) {
    *(int *)(param_1 + 0x1c) = iVar3;
  }
  else {
    *piVar5 = iVar3;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  iVar3 = param_2[0x10];
  piVar5 = (int *)(iVar3 + 0xa0c);
  *piVar5 = *piVar5 + -1;
  if (*piVar5 == 0) {
    if (*(int *)(iVar3 + 0xa04) == 0) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 0xa08);
    }
    else {
      *(undefined4 *)(*(int *)(iVar3 + 0xa04) + 0xa08) = *(undefined4 *)(iVar3 + 0xa08);
    }
    if (*(int *)(iVar3 + 0xa08) != 0) {
      *(undefined4 *)(*(int *)(iVar3 + 0xa08) + 0xa04) = *(undefined4 *)(iVar3 + 0xa04);
    }
    (**(code **)(PTR_vftable_018e9b94 + 8))(iVar3,0xa10);
  }
  return;
}

// 010C9890  FUN_010c9890  size=263  [run]
void FUN_010c9890(uint param_1,uint param_2,int *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x28);
  param_3[1] = 0;
  if ((param_3[2] & 0x3fffffffU) == 0) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
  }
  puVar1 = (uint *)(*param_3 + param_3[1] * 8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  param_3[1] = param_3[1] + 1;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x10;
  if (param_3[1] + 2 < *(int *)(param_4 + 4)) {
    do {
      iVar3 = 9;
      if ((param_3[1] & 1U) == 0) {
        iVar3 = 0x12;
      }
      param_2 = *(uint *)(param_1 + 0x14 + (iVar3 >> ((char)param_2 * '\x02' & 0x1fU) & 3U) * 4);
      param_1 = param_2 & 0xfffffffc;
      param_2 = param_2 & 3;
      if (param_1 == 0) {
        return;
      }
      if ((*(byte *)(param_1 + 0x2c) & 0x10) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x28) != iVar2) {
        return;
      }
      if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_3,8);
      }
      puVar1 = (uint *)(*param_3 + param_3[1] * 8);
      if (puVar1 != (uint *)0x0) {
        *puVar1 = param_1;
        puVar1[1] = param_2;
      }
      param_3[1] = param_3[1] + 1;
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x10;
    } while (param_3[1] + 2 < *(int *)(param_4 + 4));
  }
  return;
}

// 010C99A0  FUN_010c99a0  size=258  [run]
int FUN_010c99a0(uint param_1,uint param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int local_8;
  
  local_8 = 0;
  uVar3 = param_2;
  uVar2 = param_1;
  while( true ) {
    local_8 = local_8 + 1;
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
    }
    *(uint *)(*param_3 + param_3[1] * 4) = uVar2;
    param_3[1] = param_3[1] + 1;
    uVar2 = *(uint *)(uVar2 + 0x14 + (0x12 >> ((char)uVar3 * '\x02' & 0x1fU) & 3U) * 4);
    uVar3 = uVar2 & 3;
    uVar2 = uVar2 & 0xfffffffc;
    if (uVar2 == 0) break;
    if (uVar2 + uVar3 == param_1 + param_2) {
      return local_8;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x14 + param_2 * 4);
  bVar1 = (byte)uVar2;
  while (uVar2 = uVar2 & 0xfffffffc, uVar2 != 0) {
    local_8 = local_8 + 1;
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
    }
    *(uint *)(*param_3 + param_3[1] * 4) = uVar2;
    param_3[1] = param_3[1] + 1;
    uVar2 = *(uint *)(uVar2 + 0x14 + (9 >> (bVar1 & 3) * '\x02' & 3U) * 4);
    bVar1 = (byte)uVar2;
  }
  return local_8;
}

// 010C9AB0  FUN_010c9ab0  size=952  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_010c9ab0(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_24 [3];
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar8 = 0;
  local_c = param_1;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  if (((*param_2 == param_2[1]) || (param_2[1] == param_2[2])) || (param_2[2] == *param_2)) {
    return 0;
  }
  do {
    iVar3 = iVar8 * 4 - (int)local_24;
    puVar1 = (undefined4 *)((int)param_2 + (int)local_24 + iVar3);
    iVar3 = FUN_01010160(*(undefined4 *)((int)param_2 + (int)local_24 + iVar3),0);
    local_24[iVar8] = iVar3;
    if (iVar3 == 0) {
      iVar3 = FUN_010cb240();
      *(int *)(iVar3 + 0xc) = *(int *)(param_1 + 0x10) + -1;
      *(undefined4 *)(iVar3 + 8) = *puVar1;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      uVar2 = *puVar1;
      local_24[iVar8] = iVar3;
      FUN_010100a0(&PTR_vftable_018e9b94,uVar2,iVar3);
    }
    *(int *)(local_24[iVar8] + 0x10) = *(int *)(local_24[iVar8] + 0x10) + 1;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  local_8 = FUN_010cb2a0();
  *(int *)(local_8 + 8) = local_24[0];
  param_2 = (int *)(local_8 + 8);
  *(int *)(local_8 + 0xc) = local_24[1];
  *(int *)(local_8 + 0x10) = local_24[2];
  *(int *)(local_8 + 0x28) = param_4;
  *(undefined4 *)(local_8 + 0x20) = param_3;
  *(undefined4 *)(local_8 + 0x2c) = param_5;
  *(int *)(local_8 + 0x30) = *(int *)(param_1 + 0x20) + -1;
  *(undefined4 *)(local_8 + 0x24) = 0xffffffff;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 3;
  param_4 = 0;
LAB_010c9ba9:
  local_10 = *param_2;
  piVar4 = (int *)(local_8 + 8 + (9 >> ((char)param_4 * '\x02' & 0x1fU) & 3U) * 4);
  uVar5 = *(uint *)(*piVar4 + 8);
  if (*(uint *)(local_10 + 8) < uVar5) {
    iVar8 = 0x1958e9;
    iVar3 = 0x3442a5;
  }
  else {
    iVar3 = 0x1958e9;
    iVar8 = 0x3442a5;
  }
  uVar5 = (uVar5 * iVar8 ^ *(uint *)(local_10 + 8) * iVar3) % *(uint *)(param_1 + 0x38);
  iVar8 = 0;
  local_14 = *(int *)(*(int *)(param_1 + 0x34) + 4 + uVar5 * 0xc);
  if (0 < local_14) {
    local_18 = *(int **)(*(int *)(param_1 + 0x34) + uVar5 * 0xc);
    piVar6 = local_18;
    do {
      if ((*(int *)(*piVar6 + 8 + piVar6[1] * 4) == *piVar4) &&
         (*(int *)(*piVar6 + 8 + (9 >> ((char)piVar6[1] * '\x02' & 0x1fU) & 3U) * 4) == local_10)) {
        if ((iVar8 != -1) && (piVar6 = local_18 + iVar8 * 2, piVar6 != (int *)0x0)) {
          *(int *)(*piVar6 + 0x14 + piVar6[1] * 4) = param_4 + local_8;
          param_2[3] = piVar6[1] + *piVar6;
          if (*(uint *)(*param_2 + 8) < *(uint *)(*piVar4 + 8)) {
            iVar8 = 0x1958e9;
            iVar3 = 0x3442a5;
          }
          else {
            iVar3 = 0x1958e9;
            iVar8 = 0x3442a5;
          }
          uVar5 = (*(uint *)(*piVar4 + 8) * iVar8 ^ *(uint *)(*param_2 + 8) * iVar3) %
                  *(uint *)(param_1 + 0x38);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          iVar3 = 0;
          iVar8 = *(int *)(*(int *)(param_1 + 0x34) + 4 + uVar5 * 0xc);
          local_18 = (int *)(*(int *)(param_1 + 0x34) + uVar5 * 0xc);
          if (iVar8 < 1) goto LAB_010c9dde;
          piVar6 = (int *)*local_18;
          piVar7 = piVar6;
          goto LAB_010c9d32;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      piVar6 = piVar6 + 2;
    } while (iVar8 < local_14);
  }
  if ((_DAT_0209a9c4 & 1) == 0) {
    _DAT_0209a9c4 = _DAT_0209a9c4 | 1;
    DAT_0209a9bc = 0;
    DAT_0209a9c0 = 0;
  }
  param_2[3] = DAT_0209a9c0 + DAT_0209a9bc;
  if (DAT_0209a9bc != 0) {
    *(int *)(DAT_0209a9bc + 0x14 + DAT_0209a9c0 * 4) = param_4 + local_8;
  }
  if (*(uint *)(*param_2 + 8) < *(uint *)(*piVar4 + 8)) {
    iVar8 = 0x1958e9;
    iVar3 = 0x3442a5;
  }
  else {
    iVar3 = 0x1958e9;
    iVar8 = 0x3442a5;
  }
  uVar5 = (*(uint *)(*piVar4 + 8) * iVar8 ^ *(uint *)(*param_2 + 8) * iVar3) %
          *(uint *)(param_1 + 0x38);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  piVar4 = (int *)(*(int *)(param_1 + 0x34) + uVar5 * 0xc);
  if (piVar4[1] == (*(uint *)(*(int *)(param_1 + 0x34) + 8 + uVar5 * 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar4,8);
  }
  piVar6 = (int *)(*piVar4 + piVar4[1] * 8);
  piVar4[1] = piVar4[1] + 1;
  *piVar6 = local_8;
  piVar6[1] = param_4;
  goto LAB_010c9e3d;
  while( true ) {
    iVar3 = iVar3 + 1;
    piVar7 = piVar7 + 2;
    if (iVar8 <= iVar3) break;
LAB_010c9d32:
    param_1 = local_c;
    if ((*(int *)(*piVar7 + 8 + piVar7[1] * 4) == *piVar4) &&
       (*(int *)(*piVar7 + 8 + (9 >> ((char)piVar7[1] * '\x02' & 0x1fU) & 3U) * 4) == *param_2)) {
      if (iVar3 < 0) goto LAB_010c9dde;
      iVar3 = 0;
      piVar7 = piVar6;
      if (0 < iVar8) goto LAB_010c9d80;
      goto LAB_010c9dae;
    }
  }
  *(int *)(local_c + 0x44) = *(int *)(local_c + 0x44) + -2;
  goto LAB_010c9e3d;
  while( true ) {
    iVar3 = iVar3 + 1;
    piVar7 = piVar7 + 2;
    if (iVar8 <= iVar3) break;
LAB_010c9d80:
    if ((*(int *)(*piVar7 + 8 + piVar7[1] * 4) == *piVar4) &&
       (*(int *)(*piVar7 + 8 + (9 >> ((char)piVar7[1] * '\x02' & 0x1fU) & 3U) * 4) == *param_2))
    goto LAB_010c9db1;
  }
LAB_010c9dae:
  iVar3 = -1;
LAB_010c9db1:
  iVar8 = iVar8 + -1;
  local_18[1] = iVar8;
  if (iVar8 != iVar3) {
    piVar4 = piVar6 + iVar3 * 2;
    iVar8 = iVar8 * 8 - (int)piVar4;
    iVar3 = 2;
    do {
      *piVar4 = *(int *)((int)piVar6 + iVar8 + (int)piVar4);
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
LAB_010c9dde:
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -2;
LAB_010c9e3d:
  param_2 = param_2 + 1;
  param_4 = param_4 + 1;
  if (2 < param_4) {
    return local_8;
  }
  goto LAB_010c9ba9;
}

// 010C9E70  FUN_010c9e70  size=398  [run]
void __thiscall FUN_010c9e70(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  piVar4 = param_4;
  iVar8 = *(int *)(param_2 + 8 + param_3 * 4);
  iVar6 = *(int *)(param_2 + 8 + (9 >> ((char)param_3 * '\x02' & 0x1fU) & 3U) * 4);
  param_4[1] = 0;
  iVar5 = *(int *)(iVar6 + 0x10) + *(int *)(iVar8 + 0x10);
  if ((int)(param_4[2] & 0x3fffffffU) < iVar5) {
    iVar3 = (param_4[2] & 0x3fffffffU) * 2;
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar5,4);
  }
  iVar5 = FUN_010c99a0(param_2,param_3,piVar4);
  param_4 = (int *)CONCAT13(*(int *)(iVar8 + 0x10) == iVar5,param_4._0_3_);
  iVar5 = FUN_010c99a0(param_2,9 >> ((char)param_3 * '\x02' & 0x1fU) & 3,piVar4);
  if ((param_4._3_1_ == '\0') || (*(int *)(iVar6 + 0x10) != iVar5)) {
    piVar1 = *(int **)(param_1 + 0x1c);
    uVar2 = (uint)&param_4 & -(uint)(piVar1 != (int *)0x0);
    while (uVar2 != 0) {
      if ((((piVar1[2] == iVar8) || (piVar1[2] == iVar6)) || (piVar1[3] == iVar8)) ||
         (((piVar1[3] == iVar6 || (piVar1[4] == iVar8)) || (piVar1[4] == iVar6)))) {
        if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar4,4);
        }
        *(int **)(*piVar4 + piVar4[1] * 4) = piVar1;
        piVar4[1] = piVar4[1] + 1;
      }
      piVar1 = (int *)*piVar1;
      uVar2 = (uint)&param_4 & -(uint)(piVar1 != (int *)0x0);
    }
  }
  param_4 = (int *)((uint)param_4 & 0xffffff00);
  if (1 < piVar4[1]) {
    FUN_010c8b50(*piVar4,0,piVar4[1] + -1,param_4);
  }
  iVar8 = 0;
  if (piVar4[1] != 1 && -1 < piVar4[1] + -1) {
    do {
      puVar7 = (undefined4 *)(*piVar4 + iVar8 * 4);
      if (*(int *)(*piVar4 + iVar8 * 4) == puVar7[1]) {
        piVar4[1] = piVar4[1] + -1;
        iVar6 = (piVar4[1] - iVar8) * 4;
        if (0 < iVar6) {
          iVar6 = (iVar6 - 1U >> 2) + 1;
          do {
            *puVar7 = puVar7[1];
            puVar7 = puVar7 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < piVar4[1] + -1);
  }
  return;
}

// 010CA000  FUN_010ca000  size=87  [run]
void FUN_010ca000(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      local_10 = *(undefined4 *)(iVar1 + 4 + iVar2);
      local_14 = *(undefined4 *)(iVar1 + iVar2);
      local_c = *(undefined4 *)(iVar1 + iVar2 + 8);
      FUN_010c9ab0(&local_14,iVar3,*(undefined4 *)(iVar1 + iVar2 + 0xc),0);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}

// 010CA060  hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::DefaultEdgeCollapseInterface  size=896  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void hkgpIndexedMeshInternals::DefaultEdgeCollapseInterface::DefaultEdgeCollapseInterface
               (int param_1,int param_2,int *param_3,undefined ***param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined1 *local_124;
  int local_120;
  int local_11c;
  undefined1 local_118 [256];
  undefined **local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = vftable;
  if (param_4 == (undefined ***)0x0) {
    param_4 = &local_18;
  }
  if (param_3 != (int *)0x0) {
    if ((_DAT_0209a9c4 & 1) == 0) {
      _DAT_0209a9c4 = _DAT_0209a9c4 | 1;
      DAT_0209a9bc = 0;
      DAT_0209a9c0 = 0;
    }
    *param_3 = DAT_0209a9bc;
    param_3[1] = DAT_0209a9c0;
  }
  local_124 = local_118;
  local_120 = 0;
  local_11c = -0x7fffffc0;
  FUN_010c9e70(param_1,param_2,&local_124);
  piVar1 = *(int **)(param_1 + 8 + param_2 * 4);
  local_c = *(int *)(param_1 + 8 + (9 >> ((char)param_2 * '\x02' & 0x1fU) & 3U) * 4);
  cVar2 = (*(code *)(*param_4)[3])(&local_124,piVar1,local_c);
  if (cVar2 == '\0') {
    local_120 = 0;
    if (-1 < local_11c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_124,local_11c * 4);
      return;
    }
  }
  else {
    iVar5 = 0;
    if (0 < local_120) {
      do {
        piVar3 = (int *)(*(int *)(local_124 + iVar5 * 4) + 8);
        iVar4 = 3;
        do {
          if ((int *)*piVar3 == piVar1) {
            *piVar3 = local_c;
            piVar1[4] = piVar1[4] + -1;
            *(int *)(local_c + 0x10) = *(int *)(local_c + 0x10) + 1;
          }
          piVar3 = piVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_120);
    }
    (*(code *)(*param_4)[1])(piVar1);
    iVar5 = *piVar1;
    piVar3 = (int *)piVar1[1];
    if (iVar5 != 0) {
      *(int **)(iVar5 + 4) = piVar3;
    }
    if (piVar3 == (int *)0x0) {
      *(int *)(local_8 + 0xc) = iVar5;
    }
    else {
      *piVar3 = iVar5;
    }
    *(int *)(local_8 + 0x10) = *(int *)(local_8 + 0x10) + -1;
    iVar5 = piVar1[8];
    piVar1 = (int *)(iVar5 + 0x60c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(iVar5 + 0x604) == 0) {
        *(undefined4 *)(local_8 + 8) = *(undefined4 *)(iVar5 + 0x608);
      }
      else {
        *(undefined4 *)(*(int *)(iVar5 + 0x604) + 0x608) = *(undefined4 *)(iVar5 + 0x608);
      }
      if (*(int *)(iVar5 + 0x608) != 0) {
        *(undefined4 *)(*(int *)(iVar5 + 0x608) + 0x604) = *(undefined4 *)(iVar5 + 0x604);
      }
      (**(code **)(PTR_vftable_018e9b94 + 8))(iVar5,0x610);
    }
    iVar5 = 0;
    if (0 < local_120) {
      do {
        iVar4 = *(int *)(local_124 + iVar5 * 4);
        bVar8 = *(int *)(iVar4 + 8) == local_c;
        if (*(int *)(iVar4 + 0xc) == local_c) {
          bVar8 = bVar8 + 1;
        }
        if (*(int *)(iVar4 + 0x10) == local_c) {
          bVar8 = bVar8 + 1;
        }
        if (1 < bVar8) {
          FUN_010c9720(iVar4,param_4);
          local_120 = local_120 + -1;
          if (local_120 != iVar5) {
            *(undefined4 *)(local_124 + iVar5 * 4) = *(undefined4 *)(local_124 + local_120 * 4);
          }
          iVar5 = iVar5 + -1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_120);
    }
    local_14 = 0;
    if (0 < local_120) {
      do {
        param_4 = (undefined ***)0x0;
        local_8 = 0x14;
        do {
          iVar5 = *(int *)(local_124 + local_14 * 4);
          if (*(int *)(local_8 + -0xc + iVar5) == local_c) {
            if (param_3 != (int *)0x0) {
              *param_3 = iVar5;
              param_3[1] = (int)param_4;
            }
            if (((*(uint *)(local_8 + iVar5) & 0xfffffffc) == 0) && (local_10 = 0, 0 < local_120)) {
              do {
                iVar4 = *(int *)(local_124 + local_10 * 4);
                iVar7 = 0;
                iVar6 = 8;
                do {
                  if (((*(uint *)(iVar6 + 0xc + iVar4) & 0xfffffffc) == 0) &&
                     ((iVar4 == 0 ||
                      ((*(int *)(local_8 + -0xc + iVar5) ==
                        *(int *)(iVar4 + 8 + (9 >> ((char)iVar7 * '\x02' & 0x1fU) & 3U) * 4) &&
                       (*(int *)(iVar5 + 8 + (9 >> ((char)param_4 * '\x02' & 0x1fU) & 3U) * 4) ==
                        *(int *)(iVar6 + iVar4))))))) {
                    *(int *)(local_8 + iVar5) = iVar4 + iVar7;
                    local_10 = local_120;
                    if (iVar4 != 0) {
                      *(int *)(iVar4 + 0x14 + iVar7 * 4) = (int)param_4 + iVar5;
                    }
                    break;
                  }
                  iVar6 = iVar6 + 4;
                  iVar7 = iVar7 + 1;
                } while (iVar6 < 0x14);
                local_10 = local_10 + 1;
              } while (local_10 < local_120);
            }
          }
          param_4 = (undefined ***)((int)param_4 + 1);
          local_8 = local_8 + 4;
        } while (local_8 < 0x20);
        local_14 = local_14 + 1;
      } while (local_14 < local_120);
    }
    local_120 = 0;
    if (-1 < local_11c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_124,local_11c * 4);
    }
  }
  return;
}

// 010CA3F0  FUN_010ca3f0  size=1409  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_010ca3f0(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_2[1] + -1;
  local_14 = param_1;
  if (-1 < iVar3) {
    piVar6 = (int *)(*param_2 + 8 + iVar3 * 0xc);
    do {
      piVar6[-1] = 0;
      if (-1 < *piVar6) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar6[-2],*piVar6 * 4);
      }
      piVar6[-2] = 0;
      *piVar6 = -0x80000000;
      iVar3 = iVar3 + -1;
      piVar6 = piVar6 + -3;
    } while (-1 < iVar3);
  }
  param_2[1] = 0;
  if (-1 < param_2[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_2,(param_2[2] & 0x3fffffffU) * 0xc);
  }
  *param_2 = 0;
  param_2[2] = -0x80000000;
  param_3[1] = 0;
  if (-1 < param_3[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_3,param_3[2] * 4);
  }
  *param_3 = 0;
  param_3[2] = -0x80000000;
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    return;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = -0x80000000;
  if (0 < iVar3) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_28,iVar3,4);
  }
  for (puVar2 = *(undefined4 **)(param_1 + 0x1c); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    puVar2[0xb] = puVar2[0xb] & 0xffffffef;
    *(undefined4 **)(local_28 + local_24 * 4) = puVar2;
    local_24 = local_24 + 1;
  }
  local_10 = local_10 & 0xffffff00;
  if (1 < local_24) {
    FUN_010c8940(local_28,0,local_24 + -1,local_10);
  }
  local_34 = (int *)0x0;
  local_30 = 0;
  local_2c = -0x80000000;
  do {
    local_c = *param_5;
    if ((_DAT_0209a9c4 & 1) == 0) {
      _DAT_0209a9c4 = _DAT_0209a9c4 | 1;
      DAT_0209a9bc = 0;
      DAT_0209a9c0 = 0;
    }
    local_1c = DAT_0209a9bc;
    local_18 = DAT_0209a9c0;
    local_10 = 0;
    local_8 = 0;
    if (0 < local_24) {
      do {
        iVar3 = *(int *)(local_28 + local_8 * 4);
        puVar2 = (undefined4 *)(local_28 + local_8 * 4);
        if ((*(byte *)(iVar3 + 0x2c) & 0x10) == 0) {
          iVar5 = 0;
          do {
            FUN_010c9890(iVar3,iVar5,&local_34,param_5);
            iVar1 = 0;
            if (0 < local_30) {
              do {
                *(uint *)(local_34[iVar1 * 2] + 0x2c) =
                     *(uint *)(local_34[iVar1 * 2] + 0x2c) & 0xffffffef;
                iVar1 = iVar1 + 1;
              } while (iVar1 < local_30);
            }
            if (local_c <= local_30 + 2) {
              local_1c = iVar3;
              local_18 = iVar5;
              local_c = local_30 + 2;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 3);
          if ((local_1c != 0) && (local_10 = local_10 + 1, param_5[2] < (int)local_10)) break;
        }
        else {
          local_24 = local_24 + -1;
          iVar3 = (local_24 - local_8) * 4;
          if (0 < iVar3) {
            iVar3 = (iVar3 - 1U >> 2) + 1;
            do {
              *puVar2 = puVar2[1];
              puVar2 = puVar2 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          local_8 = local_8 + -1;
        }
        local_8 = local_8 + 1;
      } while (local_8 < local_24);
    }
    if (local_1c == 0) {
      iVar3 = 0;
      if (0 < local_24) {
        do {
          uVar7 = *(undefined4 *)(*(int *)(*(int *)(local_28 + iVar3 * 4) + 8) + 8);
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
          }
          *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar7;
          param_3[1] = param_3[1] + 1;
          uVar7 = *(undefined4 *)(*(int *)(*(int *)(local_28 + iVar3 * 4) + 0xc) + 8);
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
          }
          *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar7;
          param_3[1] = param_3[1] + 1;
          uVar7 = *(undefined4 *)(*(int *)(*(int *)(local_28 + iVar3 * 4) + 0x10) + 8);
          if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
          }
          *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar7;
          param_3[1] = param_3[1] + 1;
          uVar7 = *(undefined4 *)(*(int *)(local_28 + iVar3 * 4) + 0x20);
          if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_4,4);
          }
          *(undefined4 *)(*param_4 + param_4[1] * 4) = uVar7;
          param_4[1] = param_4[1] + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_24);
      }
      local_30 = 0;
      if (-1 < local_2c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c * 8);
      }
      local_34 = (int *)0x0;
      local_2c = 0x80000000;
      local_24 = 0;
      if (local_20 < 0) {
        return;
      }
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 4);
      return;
    }
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_2,0xc);
    }
    puVar2 = (undefined4 *)(*param_2 + param_2[1] * 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0x80000000;
    }
    piVar6 = (int *)(*param_2 + param_2[1] * 0xc);
    param_2[1] = param_2[1] + 1;
    FUN_010c9890(local_1c,local_18,&local_34,param_5);
    uVar7 = *(undefined4 *)(*(int *)(*local_34 + 8 + local_34[1] * 4) + 8);
    if (piVar6[1] == (piVar6[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar6,4);
    }
    *(undefined4 *)(*piVar6 + piVar6[1] * 4) = uVar7;
    piVar6[1] = piVar6[1] + 1;
    uVar4 = 0;
    if (0 < local_30) {
      do {
        if ((uVar4 & 1) == 0) {
          uVar7 = *(undefined4 *)
                   (*(int *)(local_34[uVar4 * 2] + 8 +
                            (9 >> ((char)local_34[uVar4 * 2 + 1] * '\x02' & 0x1fU) & 3U) * 4) + 8);
          if (piVar6[1] == (piVar6[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar6,4);
          }
          puVar2 = (undefined4 *)(*piVar6 + piVar6[1] * 4);
        }
        else {
          uVar7 = *(undefined4 *)
                   (*(int *)(local_34[uVar4 * 2] + 8 + local_34[uVar4 * 2 + 1] * 4) + 8);
          if (piVar6[1] == (piVar6[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar6,4);
          }
          puVar2 = (undefined4 *)(*piVar6 + piVar6[1] * 4);
        }
        *puVar2 = uVar7;
        piVar6[1] = piVar6[1] + 1;
        local_10 = *(int *)(local_34[uVar4 * 2] + 0x20);
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_4,4);
        }
        *(uint *)(*param_4 + param_4[1] * 4) = local_10;
        param_4[1] = param_4[1] + 1;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < local_30);
    }
    uVar7 = *(undefined4 *)
             (*(int *)(local_34[local_30 * 2 + -2] + 8 +
                      (0x12 >> ((char)local_34[local_30 * 2 + -1] * '\x02' & 0x1fU) & 3U) * 4) + 8);
    if (piVar6[1] == (piVar6[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar6,4);
    }
    *(undefined4 *)(*piVar6 + piVar6[1] * 4) = uVar7;
    piVar6[1] = piVar6[1] + 1;
  } while( true );
}

// 010CA980  FUN_010ca980  size=877  [run]
void __fastcall FUN_010ca980(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  uint local_10;
  int local_c;
  int *local_8;
  
  piVar4 = (int *)(param_1 + 0x48);
  iVar9 = *(int *)(param_1 + 0x4c) + -1;
  local_14 = piVar4;
  local_c = param_1;
  if (-1 < iVar9) {
    piVar7 = (int *)(*(int *)(param_1 + 0x48) + 8 + iVar9 * 0xc);
    do {
      piVar7[-1] = 0;
      if (-1 < *piVar7) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar7[-2],*piVar7 * 4);
      }
      piVar7[-2] = 0;
      *piVar7 = -0x80000000;
      iVar9 = iVar9 + -1;
      piVar7 = piVar7 + -3;
    } while (-1 < iVar9);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  piVar7 = *(int **)(local_c + 0x1c);
  uVar8 = (uint)&local_10 & -(uint)(piVar7 != (int *)0x0);
  while (uVar8 != 0) {
    piVar7[9] = -1;
    piVar7 = (int *)*piVar7;
    uVar8 = (uint)&local_10 & -(uint)(piVar7 != (int *)0x0);
  }
  piVar7 = *(int **)(local_c + 0x1c);
  uVar8 = (uint)&local_8 & -(uint)(piVar7 != (int *)0x0);
  while (local_8 = piVar7, uVar8 != 0) {
    if (piVar7[9] == -1) {
      local_2c = 0;
      local_28 = 0;
      local_24 = 0x80000000;
      FUN_0100a290(&PTR_vftable_018e9b94,&local_2c,4);
      *(int **)(local_2c + local_28 * 4) = piVar7;
      local_18 = *(undefined4 *)(local_c + 0x4c);
      local_28 = local_28 + 1;
      if (piVar4[1] == (piVar4[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar4,0xc);
      }
      puVar1 = (undefined4 *)(*piVar4 + piVar4[1] * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      piVar4[1] = piVar4[1] + 1;
      do {
        iVar9 = *(int *)(local_2c + -4 + local_28 * 4);
        local_28 = local_28 - 1;
        local_1c = iVar9;
        if (*(int *)(iVar9 + 0x24) == -1) {
          *(undefined4 *)(iVar9 + 0x24) = local_18;
          uVar8 = 1;
          puVar5 = (uint *)(iVar9 + 0x14);
          local_10 = 3;
          do {
            if (((*(uint *)(iVar9 + 0x2c) & uVar8) == 0) &&
               (uVar2 = *puVar5, (uVar2 & 0xfffffffc) != 0)) {
              if (local_28 == (local_24 & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,&local_2c,4);
                iVar9 = local_1c;
              }
              *(uint *)(local_2c + local_28 * 4) = uVar2 & 0xfffffffc;
              local_28 = local_28 + 1;
            }
            puVar5 = puVar5 + 1;
            uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
            local_10 = local_10 - 1;
          } while (local_10 != 0);
          local_10 = 0;
          piVar4 = local_14;
        }
      } while (0 < (int)local_28);
      local_28 = 0;
      if (-1 < (int)local_24) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 * 4);
      }
      local_2c = 0;
      local_24 = 0x80000000;
    }
    piVar7 = (int *)*local_8;
    uVar8 = (uint)&local_8 & -(uint)(piVar7 != (int *)0x0);
  }
  local_20 = *(int *)(local_c + 0x1c);
  local_1c = 0;
  if ((((local_20 != 0) &&
       (uVar8 = *(uint *)(*(int *)(local_20 + 8) + 8),
       uVar2 = *(uint *)(*(int *)(local_20 + 0xc) + 8), uVar2 <= uVar8)) && (uVar2 < uVar8)) &&
     ((*(uint *)(local_20 + 0x14) & 0xfffffffc) != 0)) {
    FUN_01094050();
  }
  uVar8 = (uint)&local_20 & -(uint)(local_20 != 0);
  iVar9 = local_20;
  do {
    if (uVar8 == 0) {
      return;
    }
    uVar8 = *(uint *)(iVar9 + 0x14 + local_1c * 4) & 0xfffffffc;
    local_10 = uVar8;
    if (uVar8 != 0) {
      iVar3 = *(int *)(uVar8 + 0x24);
      if ((*(int *)(iVar9 + 0x24) != iVar3) &&
         (((*(uint *)(iVar9 + 0x2c) | *(uint *)(uVar8 + 0x2c)) & 8) == 0)) {
        piVar4 = (int *)(*local_14 + *(int *)(iVar9 + 0x24) * 0xc);
        piVar7 = (int *)(*local_14 + iVar3 * 0xc);
        uVar2 = piVar4[1];
        iVar9 = 0;
        if (0 < (int)uVar2) {
          piVar6 = (int *)*piVar4;
          do {
            if (*piVar6 == iVar3) {
              if (iVar9 != -1) goto LAB_010cac73;
              break;
            }
            iVar9 = iVar9 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar9 < (int)uVar2);
        }
        if (uVar2 == (piVar4[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar4,4);
        }
        *(undefined4 *)(*piVar4 + piVar4[1] * 4) = *(undefined4 *)(uVar8 + 0x24);
        piVar4[1] = piVar4[1] + 1;
LAB_010cac73:
        uVar8 = piVar7[1];
        iVar3 = 0;
        if (0 < (int)uVar8) {
          piVar4 = (int *)*piVar7;
          do {
            if (*piVar4 == *(int *)(local_20 + 0x24)) {
              iVar9 = local_20;
              if (iVar3 != -1) goto LAB_010cacc9;
              break;
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar3 < (int)uVar8);
        }
        if (uVar8 == (piVar7[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar7,4);
        }
        *(undefined4 *)(*piVar7 + piVar7[1] * 4) = *(undefined4 *)(local_20 + 0x24);
        piVar7[1] = piVar7[1] + 1;
        iVar9 = local_20;
      }
    }
LAB_010cacc9:
    if (iVar9 != 0) {
      FUN_01094050();
      iVar9 = local_20;
    }
    uVar8 = (uint)&local_20 & -(uint)(iVar9 != 0);
  } while( true );
}

// 010CACF0  hkgpIndexedMesh::vf0C  size=449  [run]
void __fastcall hkgpIndexedMesh::vf0C(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  FUN_01094190();
  FUN_01094200();
  FUN_010102e0();
  iVar4 = *(int *)(param_1 + 0x38) + -1;
  piVar1 = (int *)(param_1 + 0x34);
  if (-1 < iVar4) {
    piVar5 = (int *)(*(int *)(param_1 + 0x34) + 8 + iVar4 * 0xc);
    do {
      piVar5[-1] = 0;
      if (-1 < *piVar5) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar5[-2],*piVar5 * 8);
      }
      piVar5[-2] = 0;
      *piVar5 = -0x80000000;
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + -3;
    } while (-1 < iVar4);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_01010c40(&PTR_vftable_018e9b94,0x407);
  iVar4 = *(int *)(param_1 + 0x38) + -1;
  if (-1 < iVar4) {
    piVar5 = (int *)(*piVar1 + 8 + iVar4 * 0xc);
    do {
      piVar5[-1] = 0;
      if (-1 < *piVar5) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar5[-2],*piVar5 * 8);
      }
      piVar5[-2] = 0;
      *piVar5 = -0x80000000;
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + -3;
    } while (-1 < iVar4);
  }
  uVar2 = *(uint *)(param_1 + 0x3c) & 0x3fffffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (uVar2 < 0x407) {
    uVar2 = uVar2 * 2;
    if (uVar2 < 0x408) {
      uVar2 = 0x407;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,uVar2,0xc);
  }
  iVar4 = *(int *)(param_1 + 0x38) + -0x408;
  if (-1 < iVar4) {
    piVar5 = (int *)(*piVar1 + 0x305c + iVar4 * 0xc);
    do {
      piVar5[-1] = 0;
      if (-1 < *piVar5) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar5[-2],*piVar5 * 8);
      }
      piVar5[-2] = 0;
      *piVar5 = -0x80000000;
      iVar4 = iVar4 + -1;
      piVar5 = piVar5 + -3;
    } while (-1 < iVar4);
  }
  iVar4 = 0x407 - *(int *)(param_1 + 0x38);
  puVar3 = (undefined4 *)(*piVar1 + *(int *)(param_1 + 0x38) * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0x80000000;
      }
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0x407;
  iVar4 = 0;
  do {
    *(undefined4 *)(*piVar1 + 4 + iVar4) = 0;
    iVar4 = iVar4 + 0xc;
  } while (iVar4 < 0x3054);
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

// 010CAEC0  hkgpIndexedMesh::hkgpIndexedMesh  size=88  [run]
undefined4 * __fastcall hkgpIndexedMesh::hkgpIndexedMesh(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = vftable;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xf] = 0x80000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0x80000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  vf0C();
  return param_1;
}

// 010CAF20  FUN_010caf20  size=223  [run]
int * __thiscall FUN_010caf20(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  iVar2 = param_2[1];
  iVar3 = *param_2;
  uVar8 = 9 >> ((char)iVar2 * '\x02' & 0x1fU) & 3;
  uVar4 = *(uint *)(*(int *)(iVar3 + 8 + uVar8 * 4) + 8);
  uVar5 = *(uint *)(*(int *)(iVar3 + 8 + iVar2 * 4) + 8);
  if (uVar5 < uVar4) {
    iVar6 = 0x1958e9;
    iVar7 = 0x3442a5;
  }
  else {
    iVar7 = 0x1958e9;
    iVar6 = 0x3442a5;
  }
  piVar1 = (int *)(*param_1 + ((uVar4 * iVar6 ^ uVar5 * iVar7) % (uint)param_1[1]) * 0xc);
  iVar6 = piVar1[1];
  param_2 = (int *)0x0;
  if (0 < iVar6) {
    piVar1 = (int *)*piVar1;
    piVar9 = piVar1;
    while (iVar3 != 0) {
      if ((*(int *)(*piVar9 + 8 + piVar9[1] * 4) == *(int *)(iVar3 + 8 + uVar8 * 4)) &&
         (*(int *)(*piVar9 + 8 + (9 >> ((char)piVar9[1] * '\x02' & 0x1fU) & 3U) * 4) ==
          *(int *)(iVar3 + 8 + iVar2 * 4))) break;
      param_2 = (int *)((int)param_2 + 1);
      piVar9 = piVar9 + 2;
      if (iVar6 <= (int)param_2) {
        return (int *)0x0;
      }
    }
    if (param_2 != (int *)0xffffffff) {
      return piVar1 + (int)param_2 * 2;
    }
  }
  return (int *)0x0;
}

// 010CB000  FUN_010cb000  size=404  [run]
void __thiscall FUN_010cb000(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_c;
  
  uVar6 = *(uint *)(*(int *)(*param_2 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4) + 8
                   );
  uVar1 = *(uint *)(*(int *)(*param_2 + 8 + param_2[1] * 4) + 8);
  if (uVar1 < uVar6) {
    iVar2 = 0x1958e9;
    iVar7 = 0x3442a5;
  }
  else {
    iVar7 = 0x1958e9;
    iVar2 = 0x3442a5;
  }
  uVar6 = (uVar6 * iVar2 ^ uVar1 * iVar7) % (uint)param_1[1];
  param_1[3] = param_1[3] + -1;
  local_c = 0;
  iVar2 = *(int *)(*param_1 + 4 + uVar6 * 0xc);
  piVar4 = (int *)(*param_1 + uVar6 * 0xc);
  if (iVar2 < 1) {
    return;
  }
  piVar3 = (int *)*piVar4;
  iVar7 = *param_2;
  piVar5 = piVar3;
  while (iVar7 != 0) {
    if ((*(int *)(*piVar5 + 8 + piVar5[1] * 4) ==
         *(int *)(iVar7 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4)) &&
       (*(int *)(*piVar5 + 8 + (9 >> ((char)piVar5[1] * '\x02' & 0x1fU) & 3U) * 4) ==
        *(int *)(iVar7 + 8 + param_2[1] * 4))) break;
    local_c = local_c + 1;
    piVar5 = piVar5 + 2;
    if (iVar2 <= local_c) {
      return;
    }
  }
  if (local_c < 0) {
    return;
  }
  local_c = 0;
  piVar5 = piVar3;
  if (0 < iVar2) {
    do {
      if (iVar7 == 0) goto LAB_010cb161;
      if ((*(int *)(*piVar5 + 8 + piVar5[1] * 4) ==
           *(int *)(iVar7 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4)) &&
         (*(int *)(*piVar5 + 8 + (9 >> ((char)piVar5[1] * '\x02' & 0x1fU) & 3U) * 4) ==
          *(int *)(iVar7 + 8 + param_2[1] * 4))) goto LAB_010cb161;
      local_c = local_c + 1;
      piVar5 = piVar5 + 2;
    } while (local_c < iVar2);
  }
  local_c = -1;
LAB_010cb161:
  iVar2 = iVar2 + -1;
  piVar4[1] = iVar2;
  if (iVar2 != local_c) {
    piVar4 = piVar3 + local_c * 2;
    iVar2 = iVar2 * 8 - (int)piVar4;
    iVar7 = 2;
    do {
      *piVar4 = *(int *)((int)piVar3 + iVar2 + (int)piVar4);
      piVar4 = piVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

// 010CB1A0  FUN_010cb1a0  size=61  [run]
void __fastcall FUN_010cb1a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CB1E0  FUN_010cb1e0  size=84  [run]
int __fastcall FUN_010cb1e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x80000000;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0xc;
}

// 010CB240  FUN_010cb240  size=93  [run]
int * __fastcall FUN_010cb240(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x600) == 0)) {
    iVar2 = FUN_010c8a60();
  }
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0x600);
    *(int *)(iVar2 + 0x600) = *piVar1;
    piVar1[8] = iVar2;
    *(int *)(iVar2 + 0x60c) = *(int *)(iVar2 + 0x60c) + 1;
    piVar1[1] = 0;
    *piVar1 = param_1[1];
    if (param_1[1] != 0) {
      *(int **)(param_1[1] + 4) = piVar1;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}

// 010CB2A0  FUN_010cb2a0  size=93  [run]
int * __fastcall FUN_010cb2a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xa00) == 0)) {
    iVar2 = FUN_010c8ad0();
  }
  if (iVar2 != 0) {
    piVar1 = *(int **)(iVar2 + 0xa00);
    *(int *)(iVar2 + 0xa00) = *piVar1;
    piVar1[0x10] = iVar2;
    *(int *)(iVar2 + 0xa0c) = *(int *)(iVar2 + 0xa0c) + 1;
    piVar1[1] = 0;
    *piVar1 = param_1[1];
    if (param_1[1] != 0) {
      *(int **)(param_1[1] + 4) = piVar1;
    }
    param_1[2] = param_1[2] + 1;
    param_1[1] = (int)piVar1;
    return piVar1;
  }
  return (int *)0x0;
}

// 010CB300  FUN_010cb300  size=93  [run]
int __thiscall FUN_010cb300(int *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  
  param_1[3] = param_1[3] + 1;
  piVar1 = (int *)(*param_1 + (param_2 % (uint)param_1[1]) * 0xc);
  if (piVar1[1] == (*(uint *)(*param_1 + 8 + (param_2 % (uint)param_1[1]) * 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
  }
  puVar2 = (undefined4 *)(*piVar1 + piVar1[1] * 8);
  piVar1[1] = piVar1[1] + 1;
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  return *piVar1 + -8 + piVar1[1] * 8;
}

// 010CB360  FUN_010cb360  size=251  [run]
void __thiscall FUN_010cb360(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar6 = uVar2;
  uVar5 = uVar1;
  while( true ) {
    piVar3 = (int *)*param_2;
    param_2[1] = param_2[1] + 1;
    if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar3,4);
    }
    *(uint *)(*piVar3 + piVar3[1] * 4) = uVar5;
    piVar3[1] = piVar3[1] + 1;
    uVar5 = *(uint *)(uVar5 + 0x14 + (0x12 >> ((char)uVar6 * '\x02' & 0x1fU) & 3U) * 4);
    uVar6 = uVar5 & 3;
    uVar5 = uVar5 & 0xfffffffc;
    if (uVar5 == 0) break;
    if (uVar5 + uVar6 == uVar2 + uVar1) {
      return;
    }
  }
  uVar1 = *(uint *)(uVar1 + 0x14 + uVar2 * 4);
  bVar4 = (byte)uVar1;
  while (uVar1 = uVar1 & 0xfffffffc, uVar1 != 0) {
    piVar3 = (int *)*param_2;
    param_2[1] = param_2[1] + 1;
    if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,piVar3,4);
    }
    *(uint *)(*piVar3 + piVar3[1] * 4) = uVar1;
    piVar3[1] = piVar3[1] + 1;
    uVar1 = *(uint *)(uVar1 + 0x14 + (9 >> (bVar4 & 3) * '\x02' & 3U) * 4);
    bVar4 = (byte)uVar1;
  }
  return;
}

// 010CB480  FUN_010cb480  size=160  [run]
int __thiscall FUN_010cb480(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(*(int *)(*param_2 + 8 + (9 >> ((char)param_2[1] * '\x02' & 0x1fU) & 3U) * 4) + 8
                   );
  uVar3 = *(uint *)(*(int *)(*param_2 + 8 + param_2[1] * 4) + 8);
  if (uVar3 < uVar6) {
    iVar4 = 0x1958e9;
    iVar5 = 0x3442a5;
  }
  else {
    iVar5 = 0x1958e9;
    iVar4 = 0x3442a5;
  }
  uVar6 = (uVar6 * iVar4 ^ uVar3 * iVar5) % (uint)param_1[1];
  param_1[3] = param_1[3] + 1;
  piVar1 = (int *)(*param_1 + uVar6 * 0xc);
  if (piVar1[1] == (*(uint *)(*param_1 + 8 + uVar6 * 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,8);
  }
  piVar2 = (int *)(*piVar1 + piVar1[1] * 8);
  piVar1[1] = piVar1[1] + 1;
  *piVar2 = *param_2;
  piVar2[1] = param_2[1];
  return *piVar1 + -8 + piVar1[1] * 8;
}

// 010CB520  FUN_010cb520  size=46  [run]
void FUN_010cb520(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0x80000000;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010CB550  FUN_010cb550  size=89  [run]
int __thiscall FUN_010cb550(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x80000000;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0xc;
}

// 010CB5B0  FUN_010cb5b0  size=199  [run]
void __thiscall FUN_010cb5b0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= param_3) {
      iVar3 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar3,0xc);
  }
  iVar3 = (param_1[1] - param_3) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*param_1 + param_3 * 0xc + 8 + iVar3 * 0xc);
    do {
      piVar2[-1] = 0;
      if (-1 < *piVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar2[-2],*piVar2 * 8);
      }
      piVar2[-2] = 0;
      *piVar2 = -0x80000000;
      piVar2 = piVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_3 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 010CB680  FUN_010cb680  size=103  [run]
void __fastcall FUN_010cb680(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 8);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -3;
    } while (-1 < iVar2);
  }
  param_1[3] = 0;
  param_1[1] = 0;
  return;
}

// 010CB6F0  FUN_010cb6f0  size=84  [run]
int __fastcall FUN_010cb6f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x80000000;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0xc;
}

// 010CB750  FUN_010cb750  size=207  [run]
void __thiscall FUN_010cb750(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    iVar2 = param_2;
    if (param_2 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar4 = (param_1[1] - param_2) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 8);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      piVar3 = piVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 010CB820  FUN_010cb820  size=296  [run]
void __thiscall FUN_010cb820(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_1[1] + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 8);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + -3;
    } while (-1 < iVar4);
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    iVar2 = param_2;
    if (param_2 < iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar4 = (param_1[1] - param_2) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 8);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + -3;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_2;
  if (0 < param_2) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*param_1 + 4 + iVar4) = 0;
      iVar4 = iVar4 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010CB970  FUN_010cb970  size=38  [run]
void FUN_010cb970(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010CB9A0  hkgpIndexedMesh::vf00  size=52  [run]
int __thiscall hkgpIndexedMesh::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_35();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010CB9E0  FUN_010cb9e0  size=15  [run]
int __thiscall FUN_010cb9e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010CBA50  FUN_010cba50  size=32  [run]
void __thiscall FUN_010cba50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010CBA90  FUN_010cba90  size=34  [run]
void FUN_010cba90(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010CBAE0  FUN_010cbae0  size=34  [run]
void FUN_010cbae0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010CBB30  FUN_010cbb30  size=26  [run]
void __thiscall FUN_010cbb30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CBB60  FUN_010cbb60  size=26  [run]
void __thiscall FUN_010cbb60(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CBB80  FUN_010cbb80  size=69  [run]
void __fastcall FUN_010cbb80(int param_1)

{
  bool bVar1;
  
  if (1 < *(int *)(param_1 + 4)) {
    while( true ) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x2c));
      if ((*(int *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0x40) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x2c));
      if (!bVar1) break;
      FUN_01019c40();
    }
  }
  return;
}

// 010CBBD0  FUN_010cbbd0  size=186  [run]
void __fastcall FUN_010cbbd0(int param_1)

{
  int *piVar1;
  
  do {
    do {
      FUN_01019c40();
      piVar1 = (int *)0x0;
      EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x2c));
      if (*(int *)(param_1 + 0x40) != 0) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + -4 + *(int *)(param_1 + 0x40) * 4);
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_01019c50(1);
        }
      }
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x2c));
    } while (piVar1 == (int *)0x0);
    if (piVar1 != (int *)0x1) {
      (**(code **)(*piVar1 + 4))();
      (**(code **)*piVar1)(1);
    }
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_01019c50(1);
    }
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x2c));
    FUN_01019c50(1);
  } while (piVar1 != (int *)0x1);
  FUN_01019c50(1);
  FUN_01019c50(1);
  return;
}

// 010CBC90  FUN_010cbc90  size=112  [run]
undefined4 FUN_010cbc90(void)

{
  int *piVar1;
  undefined1 local_44 [64];
  
  FUN_01005d80();
  piVar1 = (int *)FUN_01010f60();
  (**(code **)(*piVar1 + 0xc))(local_44,"hkgpJobsQueue",3);
  FUN_0100efa0(local_44);
  FUN_010cbbd0();
  FUN_0100f090();
  piVar1 = (int *)FUN_01010f60();
  (**(code **)(*piVar1 + 0x10))(local_44,3);
  hkMemoryAllocator::~hkMemoryAllocator();
  return 0;
}

// 010CBD00  FUN_010cbd00  size=126  [run]
void __thiscall FUN_010cbd00(int param_1,int *param_2)

{
  if (1 < *(int *)(param_1 + 4)) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x2c));
    if (*(uint *)(param_1 + 0x40) == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x3c),4);
    }
    *(int **)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x40) * 4) = param_2;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x2c));
    FUN_01019c50(1);
    return;
  }
  (**(code **)(*param_2 + 4))();
  (**(code **)*param_2)(1);
  return;
}

// 010CBD80  FUN_010cbd80  size=400  [run]
int * __thiscall FUN_010cbd80(int *param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  *param_1 = (int)(param_1 + 3);
  param_1[1] = 0;
  param_1[2] = -0x7ffffff8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = -0x80000000;
  if (param_2 < 1) {
    FUN_0100efe0(&param_2);
  }
  param_1[0x12] = 0;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x18);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_01015ac0(0);
  }
  param_1[0xb] = iVar2;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_01019c00(0,1000);
  }
  param_1[0xc] = iVar2;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_01019c00(0,1000);
  }
  param_1[0xd] = iVar2;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_01019c00(0,1000);
  }
  param_1[0xe] = iVar2;
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  iVar2 = param_2 - param_1[1];
  puVar5 = (undefined4 *)(*param_1 + param_1[1] * 4);
  if (0 < iVar2) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  param_1[1] = param_2;
  if ((1 < param_2) && (iVar2 = 0, 0 < param_2)) {
    do {
      pvVar1 = TlsGetValue(DAT_01f8fc4c);
      iVar3 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x10);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0101a970();
      }
      *(undefined4 *)(*param_1 + iVar2 * 4) = uVar4;
      FUN_0101a9a0(FUN_010cbc90,param_1,&DAT_016416fa,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return param_1;
}

// 010CBF10  FUN_010cbf10  size=473  [run]
void __fastcall FUN_010cbf10(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if (1 < param_1[1]) {
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xb]);
    iVar3 = 0;
    if (0 < param_1[1]) {
      do {
        if (param_1[0x10] == (param_1[0x11] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 0xf,4);
        }
        *(undefined4 *)(param_1[0xf] + param_1[0x10] * 4) = 1;
        param_1[0x10] = param_1[0x10] + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[1]);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xb]);
    FUN_01019c50(param_1[1]);
    FUN_010cbb80();
    iVar3 = 0;
    if (0 < param_1[1]) {
      do {
        FUN_01019c40();
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[1]);
    }
  }
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = *(int *)(*param_1 + iVar3 * 4);
      if (iVar2 != 0) {
        thunk_FUN_0101a980();
        pvVar1 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(iVar2,0x10);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  iVar3 = param_1[0xc];
  pcVar4 = TlsGetValue_exref;
  if (iVar3 != 0) {
    FUN_01019c30();
    pcVar4 = TlsGetValue_exref;
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(iVar3,4);
  }
  iVar3 = param_1[0xd];
  if (iVar3 != 0) {
    FUN_01019c30();
    iVar2 = (*pcVar4)(DAT_01f8fc4c);
    (**(code **)(**(int **)(iVar2 + 0x2c) + 8))(iVar3,4);
  }
  iVar3 = param_1[0xe];
  if (iVar3 != 0) {
    FUN_01019c30();
    iVar2 = (*pcVar4)(DAT_01f8fc4c);
    (**(code **)(**(int **)(iVar2 + 0x2c) + 8))(iVar3,4);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xb];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    iVar3 = (*pcVar4)(DAT_01f8fc4c);
    (**(code **)(**(int **)(iVar3 + 0x2c) + 8))(lpCriticalSection,0x18);
  }
  param_1[0x10] = 0;
  if ((param_1[0x11] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xf],param_1[0x11] * 4);
  }
  param_1[0xf] = 0;
  param_1[0x11] = -0x80000000;
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) != 0) {
    param_1[2] = -0x80000000;
    *param_1 = 0;
    return;
  }
  (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CC110  FUN_010cc110  size=13  [run]
void __thiscall FUN_010cc110(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010CC120  FUN_010cc120  size=57  [run]
void __thiscall FUN_010cc120(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010CC160  FUN_010cc160  size=32  [run]
void __thiscall FUN_010cc160(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010CC180  FUN_010cc180  size=61  [run]
void __thiscall FUN_010cc180(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CC1C0  FUN_010cc1c0  size=52  [run]
undefined4 __thiscall FUN_010cc1c0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 010CC200  FUN_010cc200  size=61  [run]
void __thiscall FUN_010cc200(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CC240  FUN_010cc240  size=31  [run]
void FUN_010cc240(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010CC260  FUN_010cc260  size=39  [run]
void FUN_010cc260(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 010CC290  FUN_010cc290  size=53  [run]
int __thiscall FUN_010cc290(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  thunk_FUN_0101a980();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 010CC2D0  FUN_010cc2d0  size=58  [run]
void __thiscall FUN_010cc2d0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010CC310  FUN_010cc310  size=88  [run]
void __thiscall FUN_010cc310(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_3 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_3;
  return;
}

// 010CC370  FUN_010cc370  size=61  [run]
void __fastcall FUN_010cc370(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CC3B0  FUN_010cc3b0  size=61  [run]
void __fastcall FUN_010cc3b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CC3F0  FUN_010cc3f0  size=89  [run]
void __thiscall FUN_010cc3f0(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_2 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_2;
  return;
}

// 010CC450  FUN_010cc450  size=61  [run]
void __fastcall FUN_010cc450(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CC490  FUN_010cc490  size=27  [run]
void __thiscall FUN_010cc490(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7ffffff8;
  return;
}

// 010CC4B0  FUN_010cc4b0  size=61  [run]
void __fastcall FUN_010cc4b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CC4F0  FUN_010cc4f0  size=61  [run]
void __fastcall FUN_010cc4f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CC530  FUN_010cc530  size=12  [run]
int __thiscall FUN_010cc530(int *param_1,int param_2)

{
  return *param_1 + param_2;
}

// 010CC550  FUN_010cc550  size=15  [run]
int __thiscall FUN_010cc550(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010CC560  FUN_010cc560  size=15  [run]
int __thiscall FUN_010cc560(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010CC590  FUN_010cc590  size=37  [run]
void FUN_010cc590(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_010d45c0();
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010CC5D0  FUN_010cc5d0  size=33  [run]
int * __thiscall FUN_010cc5d0(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  return param_1;
}

// 010CC600  FUN_010cc600  size=33  [run]
int * __thiscall FUN_010cc600(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  return param_1;
}

// 010CC630  FUN_010cc630  size=66  [run]
int __thiscall FUN_010cc630(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = FUN_01015be0(*(uint *)(*(int *)(param_1 + 4) + iVar2 * 8) & 0xfffffffe,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return -1;
}

// 010CC680  FUN_010cc680  size=155  [run]
int * __thiscall FUN_010cc680(int param_1,int *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  iVar4 = FUN_010cc630(param_3);
  local_10 = 0;
  local_c = 0;
  if (iVar4 < 0) {
    bVar3 = true;
    bVar2 = false;
    piVar5 = (int *)FUN_01441a20(&local_10);
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    bVar3 = false;
    bVar2 = true;
    if (*(int *)(iVar1 + 4 + iVar4 * 8) != 0) {
      FUN_01006000();
    }
    param_3 = *(int *)(iVar1 + 4 + iVar4 * 8);
    piVar5 = &param_3;
  }
  iVar4 = param_3;
  if (*piVar5 != 0) {
    FUN_01006000();
  }
  *param_2 = *piVar5;
  if ((bVar2) && (iVar4 != 0)) {
    FUN_010060a0();
  }
  if ((bVar3) && (local_8 != 0)) {
    FUN_010060a0();
  }
  return param_2;
}

// 010CC720  FUN_010cc720  size=104  [run]
int FUN_010cc720(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_010cc680(&param_1,param_1);
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_01441a80();
    uVar1 = FUN_010093a0();
    uVar1 = FUN_010093a0(uVar1);
    iVar2 = FUN_01015be0(uVar1);
    if (iVar2 != 0) {
      if (param_1 == 0) {
        return 0;
      }
      FUN_010060a0();
      return 0;
    }
  }
  iVar2 = param_1;
  if (param_1 != 0) {
    FUN_010060a0();
  }
  return iVar2;
}

// 010CC790  FUN_010cc790  size=21  [run]
void FUN_010cc790(undefined4 param_1)

{
  FUN_010cc720(param_1,&DAT_0209b028);
  return;
}

// 010CC7B0  FUN_010cc7b0  size=21  [run]
void FUN_010cc7b0(undefined4 param_1)

{
  FUN_010cc720(param_1,&DAT_0209afe0);
  return;
}

// 010CC7D0  FUN_010cc7d0  size=21  [run]
void FUN_010cc7d0(undefined4 param_1)

{
  FUN_010cc720(param_1,&DAT_0209acf8);
  return;
}

// 010CC7F0  FUN_010cc7f0  size=21  [run]
void FUN_010cc7f0(undefined4 param_1)

{
  FUN_010cc720(param_1,&DAT_0209af98);
  return;
}

// 010CC810  FUN_010cc810  size=21  [run]
void FUN_010cc810(undefined4 param_1)

{
  FUN_010cc720(param_1,&DAT_0209b580);
  return;
}

// 010CC830  FUN_010cc830  size=21  [run]
void FUN_010cc830(undefined4 param_1)

{
  FUN_010cc720(param_1,&DAT_0209b4a8);
  return;
}

// 010CC850  FUN_010cc850  size=21  [run]
void FUN_010cc850(undefined4 param_1)

{
  FUN_010cc720(param_1,&DAT_0209b4f0);
  return;
}

// 010CC870  FUN_010cc870  size=21  [run]
void FUN_010cc870(undefined4 param_1)

{
  FUN_010cc720(param_1,&DAT_0209b538);
  return;
}

// 010CC890  FUN_010cc890  size=216  [run]
undefined4 FUN_010cc890(undefined4 param_1,char param_2,undefined1 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar1 = FUN_010cc790(param_1);
  if (iVar1 != 0) {
    *param_3 = **(undefined1 **)(iVar1 + 8);
    return 0;
  }
  iVar1 = FUN_010cc7b0(param_1);
  if (iVar1 != 0) {
    *param_3 = **(int **)(iVar1 + 8) != 0;
    return 0;
  }
  if (param_2 != '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    pcVar4 = " attribute group";
    pcVar2 = " not found in ";
    FUN_01018d00("Bool attribute ");
    uVar3 = extraout_var;
    FUN_01018d00(param_1);
    FUN_01018d00(pcVar2);
    FUN_010192a0(uVar3);
    FUN_01018d00(pcVar4);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabbaab81,local_210,"Attributes\\hkxAttributeGroup.cpp",0x2f);
    hkBaseObject::hkBaseObject_38();
  }
  return 1;
}

// 010CC970  FUN_010cc970  size=228  [run]
undefined4 FUN_010cc970(undefined4 param_1,char param_2,uint *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar1 = FUN_010cc7b0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_010cc790(param_1);
    if (iVar1 != 0) {
      *param_3 = (uint)(**(char **)(iVar1 + 8) != '\0');
      return 0;
    }
    iVar1 = FUN_010cc7d0(param_1);
    if (iVar1 == 0) {
      if (param_2 != '\0') {
        hkErrStream::hkErrStream(local_210,0x200);
        pcVar4 = " attribute group";
        pcVar2 = " not found in ";
        FUN_01018d00("Integer attribute ");
        uVar3 = extraout_var;
        FUN_01018d00(param_1);
        FUN_01018d00(pcVar2);
        FUN_010192a0(uVar3);
        FUN_01018d00(pcVar4);
        (**(code **)(*DAT_01f8fc58 + 0xc))
                  (1,0xabbaab81,local_210,"Attributes\\hkxAttributeGroup.cpp",0x57);
        hkBaseObject::hkBaseObject_38();
      }
      return 1;
    }
  }
  *param_3 = **(uint **)(iVar1 + 8);
  return 0;
}

// 010CCA60  FUN_010cca60  size=9  [run]
void FUN_010cca60(void)

{
  FUN_010cc970();
  return;
}

// 010CCA70  FUN_010cca70  size=223  [run]
undefined4 FUN_010cca70(undefined4 param_1,char param_2,uint *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar1 = FUN_010cc7f0(param_1);
  if (iVar1 != 0) {
    *param_3 = **(uint **)(iVar1 + 8) & 0xfffffffe;
    return 0;
  }
  iVar1 = FUN_010cc7d0(param_1);
  if (iVar1 != 0) {
    FUN_010d4640(**(undefined4 **)(iVar1 + 8),param_3);
    return 0;
  }
  if (param_2 != '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    pcVar4 = " attribute group";
    pcVar2 = " not found in ";
    FUN_01018d00("String attribute ");
    uVar3 = extraout_var;
    FUN_01018d00(param_1);
    FUN_01018d00(pcVar2);
    FUN_010192a0(uVar3);
    FUN_01018d00(pcVar4);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabbaab81,local_210,"Attributes\\hkxAttributeGroup.cpp",0x7d);
    hkBaseObject::hkBaseObject_38();
  }
  return 1;
}

// 010CCB50  FUN_010ccb50  size=183  [run]
undefined4 FUN_010ccb50(undefined4 param_1,char param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 extraout_var;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_210 [524];
  
  iVar1 = FUN_010cc810(param_1);
  if (iVar1 != 0) {
    *param_3 = **(undefined4 **)(iVar1 + 8);
    return 0;
  }
  if (param_2 != '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    pcVar4 = " attribute group";
    pcVar2 = " not found in ";
    FUN_01018d00("Float attribute ");
    uVar3 = extraout_var;
    FUN_01018d00(param_1);
    FUN_01018d00(pcVar2);
    FUN_010192a0(uVar3);
    FUN_01018d00(pcVar4);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabbaab81,local_210,"Attributes\\hkxAttributeGroup.cpp",0x8e);
    hkBaseObject::hkBaseObject_38();
  }
  return 1;
}

// 010CCC10  FUN_010ccc10  size=185  [run]
undefined4 FUN_010ccc10(undefined4 param_1,char param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 extraout_var;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 local_210 [524];
  
  iVar4 = FUN_010cc830(param_1);
  if (iVar4 != 0) {
    puVar1 = *(undefined4 **)(iVar4 + 8);
    uVar6 = puVar1[1];
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    *param_3 = *puVar1;
    param_3[1] = uVar6;
    param_3[2] = uVar2;
    param_3[3] = uVar3;
    return 0;
  }
  if (param_2 != '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    pcVar7 = " attribute group";
    pcVar5 = " not found in ";
    FUN_01018d00("Float attribute ");
    uVar6 = extraout_var;
    FUN_01018d00(param_1);
    FUN_01018d00(pcVar5);
    FUN_010192a0(uVar6);
    FUN_01018d00(pcVar7);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabbaab81,local_210,"Attributes\\hkxAttributeGroup.cpp",0x9f);
    hkBaseObject::hkBaseObject_38();
  }
  return 1;
}

// 010CCCD0  FUN_010cccd0  size=185  [run]
undefined4 FUN_010cccd0(undefined4 param_1,char param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 extraout_var;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 local_210 [524];
  
  iVar4 = FUN_010cc850(param_1);
  if (iVar4 != 0) {
    puVar1 = *(undefined4 **)(iVar4 + 8);
    uVar6 = puVar1[1];
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    *param_3 = *puVar1;
    param_3[1] = uVar6;
    param_3[2] = uVar2;
    param_3[3] = uVar3;
    return 0;
  }
  if (param_2 != '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    pcVar7 = " attribute group";
    pcVar5 = " not found in ";
    FUN_01018d00("Quaternion attribute ");
    uVar6 = extraout_var;
    FUN_01018d00(param_1);
    FUN_01018d00(pcVar5);
    FUN_010192a0(uVar6);
    FUN_01018d00(pcVar7);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabbaab81,local_210,"Attributes\\hkxAttributeGroup.cpp",0xb0);
    hkBaseObject::hkBaseObject_38();
  }
  return 1;
}

// 010CCD90  FUN_010ccd90  size=209  [run]
undefined4 FUN_010ccd90(undefined4 param_1,char param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 extraout_var;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 local_210 [524];
  
  iVar4 = FUN_010cc870(param_1);
  if (iVar4 != 0) {
    puVar1 = *(undefined4 **)(iVar4 + 8);
    uVar6 = puVar1[1];
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    *param_3 = *puVar1;
    param_3[1] = uVar6;
    param_3[2] = uVar2;
    param_3[3] = uVar3;
    uVar6 = puVar1[5];
    uVar2 = puVar1[6];
    uVar3 = puVar1[7];
    param_3[4] = puVar1[4];
    param_3[5] = uVar6;
    param_3[6] = uVar2;
    param_3[7] = uVar3;
    uVar6 = puVar1[9];
    uVar2 = puVar1[10];
    uVar3 = puVar1[0xb];
    param_3[8] = puVar1[8];
    param_3[9] = uVar6;
    param_3[10] = uVar2;
    param_3[0xb] = uVar3;
    uVar6 = puVar1[0xd];
    uVar2 = puVar1[0xe];
    uVar3 = puVar1[0xf];
    param_3[0xc] = puVar1[0xc];
    param_3[0xd] = uVar6;
    param_3[0xe] = uVar2;
    param_3[0xf] = uVar3;
    return 0;
  }
  if (param_2 != '\0') {
    hkErrStream::hkErrStream(local_210,0x200);
    pcVar7 = " attribute group";
    pcVar5 = " not found in ";
    FUN_01018d00("Matrix attribute ");
    uVar6 = extraout_var;
    FUN_01018d00(param_1);
    FUN_01018d00(pcVar5);
    FUN_010192a0(uVar6);
    FUN_01018d00(pcVar7);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabbaab81,local_210,"Attributes\\hkxAttributeGroup.cpp",0xc1);
    hkBaseObject::hkBaseObject_38();
  }
  return 1;
}

// 010CCE70  FUN_010cce70  size=198  [run]
/* WARNING: Removing unreachable block (ram,0x010cce91) */

int __thiscall FUN_010cce70(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_010067a0(param_2);
  iVar3 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*(int *)(param_1 + 4) + 4 + iVar3 * 8);
    do {
      if (*piVar2 != 0) {
        FUN_010060a0();
      }
      *piVar2 = 0;
      FUN_01006770();
      piVar2 = piVar2 + -2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar1 = -*(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
  if (0 < iVar1) {
    do {
      if (iVar3 != 0) {
        FUN_010d45c0();
      }
      iVar3 = iVar3 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    FUN_010cd360(&PTR_vftable_018e9b94,0,*(undefined4 *)(param_2 + 4),*(int *)(param_2 + 8));
  }
  return param_1;
}

// 010CCF40  FUN_010ccf40  size=22  [run]
void __fastcall FUN_010ccf40(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CCF60  FUN_010ccf60  size=52  [run]
undefined4 __thiscall FUN_010ccf60(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 010CCFA0  FUN_010ccfa0  size=30  [run]
void __fastcall FUN_010ccfa0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_01006770();
  return;
}

// 010CCFC0  FUN_010ccfc0  size=42  [run]
int __thiscall FUN_010ccfc0(int param_1,int param_2)

{
  FUN_01006740(param_2);
  if (*(int *)(param_2 + 4) != 0) {
    FUN_01006000();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}

// 010CCFF0  FUN_010ccff0  size=39  [run]
void FUN_010ccff0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 010CD020  FUN_010cd020  size=74  [run]
int __thiscall FUN_010cd020(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010CD070  FUN_010cd070  size=80  [run]
void FUN_010cd070(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (0 < param_2) {
    iVar1 = param_1 - param_3;
    piVar2 = (int *)(param_3 + 4);
    do {
      if (param_1 != 0) {
        FUN_01006740(piVar2 + -1);
        if (*piVar2 != 0) {
          FUN_01006000();
        }
        *(int *)(iVar1 + (int)piVar2) = *piVar2;
      }
      param_1 = param_1 + 8;
      piVar2 = piVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010CD0C0  FUN_010cd0c0  size=53  [run]
void FUN_010cd0c0(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + 4 + param_2 * 8);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      FUN_01006770();
      piVar1 = piVar1 + -2;
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return;
}

// 010CD100  FUN_010cd100  size=158  [run]
void __thiscall FUN_010cd100(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,8);
  }
  iVar2 = (param_1[1] - param_3) + -1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*param_1 + param_3 * 8 + 4 + iVar2 * 8);
    do {
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = 0;
      FUN_01006770();
      piVar3 = piVar3 + -2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar1 = param_3 - param_1[1];
  iVar2 = *param_1 + param_1[1] * 8;
  if (0 < iVar1) {
    do {
      if (iVar2 != 0) {
        FUN_010d45c0();
      }
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 010CD1A0  FUN_010cd1a0  size=275  [run]
void __thiscall
FUN_010cd1a0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar2 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(param_2,param_1,iVar4,8);
  }
  iVar4 = param_4 + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + param_3 * 8 + 4 + iVar4 * 8);
    do {
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = 0;
      FUN_01006770();
      piVar3 = piVar3 + -2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  FUN_01019bd0(*param_1 + (param_3 + param_6) * 8,*param_1 + (param_3 + param_4) * 8,
               ((iVar1 - param_3) - param_4) * 8);
  iVar1 = *param_1 + param_3 * 8;
  if (param_6 < 1) {
    param_1[1] = iVar2;
    return;
  }
  iVar4 = iVar1 - param_5;
  piVar3 = (int *)(param_5 + 4);
  param_4 = param_6;
  do {
    if (iVar1 != 0) {
      FUN_01006740(piVar3 + -1);
      if (*piVar3 != 0) {
        FUN_01006000();
      }
      *(int *)(iVar4 + (int)piVar3) = *piVar3;
    }
    iVar1 = iVar1 + 8;
    piVar3 = piVar3 + 2;
    param_4 = param_4 + -1;
  } while (param_4 != 0);
  param_1[1] = iVar2;
  return;
}

// 010CD2C0  FUN_010cd2c0  size=158  [run]
void __thiscall FUN_010cd2c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
  }
  iVar2 = (param_1[1] - param_2) + -1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*param_1 + param_2 * 8 + 4 + iVar2 * 8);
    do {
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = 0;
      FUN_01006770();
      piVar3 = piVar3 + -2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar1 = param_2 - param_1[1];
  iVar2 = *param_1 + param_1[1] * 8;
  if (0 < iVar1) {
    do {
      if (iVar2 != 0) {
        FUN_010d45c0();
      }
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 010CD360  FUN_010cd360  size=30  [run]
void FUN_010cd360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_010cd1a0(param_1,param_2,0,param_3,param_4);
  return;
}

// 010CD380  FUN_010cd380  size=29  [run]
void FUN_010cd380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010cd360(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 010CD420  FUN_010cd420  size=15  [run]
int __thiscall FUN_010cd420(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010CD440  FUN_010cd440  size=28  [run]
void __thiscall FUN_010cd440(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010CD470  FUN_010cd470  size=52  [run]
undefined4 __thiscall FUN_010cd470(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 010CD4B0  FUN_010cd4b0  size=43  [run]
void FUN_010cd4b0(int param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    do {
      FUN_010cce70(param_2 + param_1);
      param_1 = param_1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 010CD4E0  FUN_010cd4e0  size=25  [run]
void __thiscall FUN_010cd4e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 010CD500  FUN_010cd500  size=39  [run]
void FUN_010cd500(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 010CD530  FUN_010cd530  size=106  [run]
int __thiscall FUN_010cd530(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar4 = 0;
  if (param_2 == 0) {
    return 0;
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(param_1 + 8);
      uVar2 = *(uint *)(iVar1 + iVar4);
      if ((uVar2 & 0xfffffffe) != 0) {
        iVar3 = FUN_01015be0(uVar2 & 0xfffffffe,param_2);
        if (iVar3 == 0) {
          return iVar1 + iVar4;
        }
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x10;
    } while (local_8 < *(int *)(param_1 + 0xc));
  }
  return 0;
}

// 010CD5A0  FUN_010cd5a0  size=135  [run]
int * __thiscall FUN_010cd5a0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if ((param_3 != 0) && (0 < *(int *)(param_1 + 0xc))) {
    iVar1 = 0;
    do {
      FUN_010cc680(&local_8,param_3);
      if (local_8 != 0) {
        FUN_01006000();
        *param_2 = local_8;
        if (local_8 == 0) {
          return param_2;
        }
        FUN_010060a0();
        return param_2;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  local_10 = 0;
  local_c = 0;
  FUN_01441a20(&local_10);
  return param_2;
}

// 010CD630  FUN_010cd630  size=112  [run]
int FUN_010cd630(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_010cd5a0(&param_1,param_1);
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_01441a80();
    uVar1 = FUN_010093a0();
    uVar1 = FUN_010093a0(uVar1);
    iVar2 = FUN_01015be0(uVar1);
    if (iVar2 != 0) {
      if (param_1 == 0) {
        return 0;
      }
      FUN_010060a0();
      return 0;
    }
  }
  iVar2 = param_1;
  if (param_1 != 0) {
    FUN_010060a0();
  }
  return iVar2;
}

// 010CD6A0  hkxAttributeHolder::hkxAttributeHolder  size=287  [run]
undefined4 * __thiscall hkxAttributeHolder::hkxAttributeHolder(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_8;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  piVar1 = param_1 + 2;
  *piVar1 = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  iVar5 = param_1[3];
  iVar3 = *(int *)(param_2 + 0xc);
  local_8 = iVar5;
  if (iVar3 <= iVar5) {
    local_8 = iVar3;
  }
  if ((int)(param_1[4] & 0x3fffffff) < iVar3) {
    iVar4 = (param_1[4] & 0x3fffffff) * 2;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar4,0x10);
  }
  iVar5 = iVar5 - iVar3;
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    FUN_010cda00();
  }
  iVar5 = *piVar1;
  if (0 < local_8) {
    iVar4 = *(int *)(param_2 + 8) - iVar5;
    local_10 = local_8;
    do {
      FUN_010cce70(iVar4 + iVar5);
      iVar5 = iVar5 + 0x10;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  piVar2 = (int *)(param_2 + 8);
  iVar5 = *piVar1 + local_8 * 0x10;
  param_2 = iVar3 - local_8;
  if (0 < param_2) {
    iVar4 = (*piVar2 + local_8 * 0x10) - iVar5;
    do {
      if (iVar5 != 0) {
        FUN_010065a0();
        *(undefined4 *)(iVar5 + 4) = 0;
        *(undefined4 *)(iVar5 + 8) = 0;
        *(undefined4 *)(iVar5 + 0xc) = 0x80000000;
        FUN_010cce70(iVar4 + iVar5);
      }
      iVar5 = iVar5 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  param_1[3] = iVar3;
  return param_1;
}

// 010CD7C0  hkxAttributeHolder::~hkxAttributeHolder  size=103  [run]
void __fastcall hkxAttributeHolder::~hkxAttributeHolder(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = param_1[3];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_010cda00();
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  return;
}

// 010CD870  FUN_010cd870  size=59  [run]
void __fastcall FUN_010cd870(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 4 + iVar2 * 8);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      FUN_01006770();
      piVar1 = piVar1 + -2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  return;
}

// 010CD8B0  FUN_010cd8b0  size=111  [run]
void __thiscall FUN_010cd8b0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 4 + iVar2 * 8);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      FUN_01006770();
      piVar1 = piVar1 + -2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CDA00  FUN_010cda00  size=113  [run]
void __fastcall FUN_010cda00(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4 + iVar2 * 8);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      FUN_01006770();
      piVar1 = piVar1 + -2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < *(int *)(param_1 + 0xc)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0xc) * 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  FUN_01006770();
  return;
}

// 010CDA80  FUN_010cda80  size=44  [run]
int __thiscall FUN_010cda80(int param_1,undefined4 param_2)

{
  FUN_010065a0();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  FUN_010cce70(param_2);
  return param_1;
}

// 010CDAB0  FUN_010cdab0  size=71  [run]
void FUN_010cdab0(int param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - param_1;
    do {
      if (param_1 != 0) {
        FUN_010065a0();
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0x80000000;
        FUN_010cce70(param_3 + param_1);
      }
      param_1 = param_1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010CDB00  FUN_010cdb00  size=53  [run]
int __thiscall FUN_010cdb00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_010cda00();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 010CDB40  FUN_010cdb40  size=36  [run]
void FUN_010cdb40(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_010cda00();
  }
  return;
}

// 010CDB70  FUN_010cdb70  size=261  [run]
int * __thiscall FUN_010cdb70(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_3[1];
  iVar4 = param_1[1];
  iVar3 = iVar1;
  if (iVar4 < iVar1) {
    iVar3 = iVar4;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  iVar4 = iVar4 - iVar1;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    FUN_010cda00();
  }
  iVar4 = *param_1;
  if (0 < iVar3) {
    iVar5 = *param_3 - iVar4;
    iVar2 = iVar3;
    do {
      FUN_010cce70(iVar5 + iVar4);
      iVar4 = iVar4 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *param_1 + iVar3 * 0x10;
  iVar4 = iVar1 - iVar3;
  if (0 < iVar4) {
    iVar3 = (*param_3 + iVar3 * 0x10) - iVar2;
    do {
      if (iVar2 != 0) {
        FUN_010065a0();
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0x80000000;
        FUN_010cce70(iVar3 + iVar2);
      }
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    param_1[1] = iVar1;
    return param_1;
  }
  param_1[1] = iVar1;
  return param_1;
}

// 010CDC80  FUN_010cdc80  size=44  [run]
undefined4 __fastcall FUN_010cdc80(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_010cda00();
  }
  param_1[1] = 0;
  return uVar2;
}

// 010CDCB0  FUN_010cdcb0  size=261  [run]
int * __thiscall FUN_010cdcb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2[1];
  iVar4 = param_1[1];
  iVar3 = iVar1;
  if (iVar4 < iVar1) {
    iVar3 = iVar4;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  iVar4 = iVar4 - iVar1;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    FUN_010cda00();
  }
  iVar4 = *param_1;
  if (0 < iVar3) {
    iVar5 = *param_2 - iVar4;
    iVar2 = iVar3;
    do {
      FUN_010cce70(iVar5 + iVar4);
      iVar4 = iVar4 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *param_1 + iVar3 * 0x10;
  iVar4 = iVar1 - iVar3;
  if (0 < iVar4) {
    iVar3 = (*param_2 + iVar3 * 0x10) - iVar2;
    do {
      if (iVar2 != 0) {
        FUN_010065a0();
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0x80000000;
        FUN_010cce70(iVar3 + iVar2);
      }
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    param_1[1] = iVar1;
    return param_1;
  }
  param_1[1] = iVar1;
  return param_1;
}

// 010CDDC0  FUN_010cddc0  size=93  [run]
void __thiscall FUN_010cddc0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_010cda00();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CDE20  FUN_010cde20  size=93  [run]
void __fastcall FUN_010cde20(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_010cda00();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CDE80  FUN_010cde80  size=93  [run]
void __fastcall FUN_010cde80(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_010cda00();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CDEE0  FUN_010cdee0  size=38  [run]
void FUN_010cdee0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010CDF10  hkxAttributeHolder::vf00  size=52  [run]
int __thiscall hkxAttributeHolder::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkxAttributeHolder();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010CDF60  FUN_010cdf60  size=15  [run]
int __thiscall FUN_010cdf60(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010CDF70  FUN_010cdf70  size=15  [run]
int __thiscall FUN_010cdf70(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010CDFD0  FUN_010cdfd0  size=34  [run]
void FUN_010cdfd0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010CE010  FUN_010ce010  size=26  [run]
void __thiscall FUN_010ce010(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CE040  FUN_010ce040  size=28  [run]
void __thiscall FUN_010ce040(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010CE070  FUN_010ce070  size=22  [run]
void __fastcall FUN_010ce070(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CE090  FUN_010ce090  size=39  [run]
void FUN_010ce090(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 010CE0C0  FUN_010ce0c0  size=31  [run]
int * __thiscall FUN_010ce0c0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 010CE0E0  FUN_010ce0e0  size=44  [run]
void __thiscall FUN_010ce0e0(int *param_1,int param_2)

{
  if (*param_1 != param_2) {
    if (param_2 != 0) {
      FUN_01006000();
    }
    if (*param_1 != 0) {
      FUN_010060a0();
    }
    *param_1 = param_2;
  }
  return;
}

// 010CE110  FUN_010ce110  size=127  [run]
int * __thiscall FUN_010ce110(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3;
  if (*(int *)(param_1 + 0x18) == param_3) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_01006000();
    }
    *param_2 = *(int *)(param_1 + 0x18);
    return param_2;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      FUN_010ce110(&param_3,iVar1);
      if (param_3 != 0) {
        FUN_01006000();
        *param_2 = param_3;
        if (param_3 != 0) {
          FUN_010060a0();
        }
        return param_2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  *param_2 = 0;
  return param_2;
}

// 010CE190  FUN_010ce190  size=85  [run]
void __thiscall FUN_010ce190(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x18) == param_2) && (*(int *)(param_1 + 0x18) != param_3)) {
    if (param_3 != 0) {
      FUN_01006000();
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_010060a0();
    }
    *(int *)(param_1 + 0x18) = param_3;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      FUN_010ce190(param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x2c));
  }
  return;
}

// 010CE1F0  FUN_010ce1f0  size=41  [run]
int __fastcall FUN_010ce1f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_010ce1f0();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  return iVar2;
}

// 010CE220  FUN_010ce220  size=92  [run]
int __thiscall FUN_010ce220(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x28) + iVar4 * 4);
      uVar2 = *(uint *)(iVar1 + 0x14);
      if (((uVar2 & 0xfffffffe) != 0) &&
         (iVar3 = FUN_01015be0(uVar2 & 0xfffffffe,param_2), iVar3 == 0)) {
        return iVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  return 0;
}

// 010CE280  FUN_010ce280  size=107  [run]
int __thiscall FUN_010ce280(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + iVar4 * 4);
      uVar1 = *(uint *)(iVar3 + 0x14);
      if (((uVar1 & 0xfffffffe) != 0) &&
         (iVar2 = FUN_01015be0(uVar1 & 0xfffffffe,param_2), iVar2 == 0)) {
        return iVar3;
      }
      iVar3 = FUN_010ce280(param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  return 0;
}

// 010CE2F0  FUN_010ce2f0  size=116  [run]
int __thiscall FUN_010ce2f0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
  }
  *(int *)(*param_3 + param_3[1] * 4) = param_1;
  iVar1 = 1;
  param_3[1] = param_3[1] + 1;
  if (param_1 != param_2) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        iVar1 = FUN_010ce2f0(param_2,param_3);
        if (iVar1 == 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x2c));
    }
    param_3[1] = param_3[1] + -1;
    return iVar1;
  }
  return 0;
}

// 010CE370  hkxNode::~hkxNode  size=278  [run]
void __fastcall hkxNode::~hkxNode(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = vftable;
  FUN_01006770();
  iVar1 = param_1[0xe];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[0xe] = 0;
  if (-1 < (int)param_1[0xf]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xd],param_1[0xf] * 8);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  iVar2 = param_1[0xb] + -1;
  iVar1 = param_1[10];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[0xb] = 0;
  if ((param_1[0xc] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[10],param_1[0xc] * 4);
  }
  param_1[10] = 0;
  param_1[0xc] = 0x80000000;
  param_1[8] = 0;
  if ((param_1[9] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[7],param_1[9] << 6);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[6] = 0;
  FUN_01006770();
  hkxAttributeHolder::~hkxAttributeHolder();
  return;
}

// 010CE490  FUN_010ce490  size=13  [run]
void __thiscall FUN_010ce490(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010CE4A0  FUN_010ce4a0  size=57  [run]
void __thiscall FUN_010ce4a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010CE4E0  FUN_010ce4e0  size=56  [run]
int __thiscall FUN_010ce4e0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010CE520  FUN_010ce520  size=39  [run]
void FUN_010ce520(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010CE550  FUN_010ce550  size=58  [run]
void __thiscall FUN_010ce550(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010CE590  FUN_010ce590  size=35  [run]
void FUN_010ce590(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
  }
  return;
}

// 010CE5C0  FUN_010ce5c0  size=61  [run]
int * __thiscall FUN_010ce5c0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010CE600  FUN_010ce600  size=41  [run]
undefined4 __fastcall FUN_010ce600(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_01006770();
  }
  param_1[1] = 0;
  return uVar2;
}

// 010CE630  FUN_010ce630  size=43  [run]
void FUN_010ce630(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010CE660  FUN_010ce660  size=93  [run]
void __thiscall FUN_010ce660(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CE700  FUN_010ce700  size=93  [run]
void __fastcall FUN_010ce700(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CE760  FUN_010ce760  size=97  [run]
void __thiscall FUN_010ce760(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CE7D0  FUN_010ce7d0  size=93  [run]
void __fastcall FUN_010ce7d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010CE830  FUN_010ce830  size=100  [run]
void __fastcall FUN_010ce830(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CE8A0  FUN_010ce8a0  size=100  [run]
void __fastcall FUN_010ce8a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CE910  FUN_010ce910  size=38  [run]
void FUN_010ce910(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010CE940  hkxNode::vf00  size=52  [run]
int __thiscall hkxNode::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkxNode();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010CE980  FUN_010ce980  size=8  [run]
undefined4 FUN_010ce980(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010CE9A0  FUN_010ce9a0  size=16  [run]
void FUN_010ce9a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010CE9B0  hkxScene::~hkxScene  size=43  [run]
void hkxScene::~hkxScene(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
  }
  return;
}

// 010CE9E0  hkxScene::hkxScene  size=79  [run]
undefined ** hkxScene::hkxScene(void)

{
  FUN_010065b0(0);
  FUN_010065b0(0);
  return vftable;
}

// 010CEAC0  FUN_010ceac0  size=22  [run]
void __fastcall FUN_010ceac0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CEAE0  FUN_010ceae0  size=22  [run]
void __fastcall FUN_010ceae0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CEB90  FUN_010ceb90  size=26  [run]
void __thiscall FUN_010ceb90(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CEBC0  FUN_010cebc0  size=26  [run]
void __thiscall FUN_010cebc0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CEBF0  FUN_010cebf0  size=26  [run]
void __thiscall FUN_010cebf0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CEC20  FUN_010cec20  size=26  [run]
void __thiscall FUN_010cec20(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CEC50  FUN_010cec50  size=26  [run]
void __thiscall FUN_010cec50(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CEC80  FUN_010cec80  size=26  [run]
void __thiscall FUN_010cec80(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CECB0  FUN_010cecb0  size=26  [run]
void __thiscall FUN_010cecb0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CECE0  FUN_010cece0  size=26  [run]
void __thiscall FUN_010cece0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010CED00  FUN_010ced00  size=22  [run]
void __fastcall FUN_010ced00(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CED20  FUN_010ced20  size=22  [run]
void __fastcall FUN_010ced20(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CED40  FUN_010ced40  size=22  [run]
void __fastcall FUN_010ced40(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CED60  FUN_010ced60  size=22  [run]
void __fastcall FUN_010ced60(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CED80  FUN_010ced80  size=22  [run]
void __fastcall FUN_010ced80(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CEDA0  FUN_010ceda0  size=22  [run]
void __fastcall FUN_010ceda0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010CEE40  FUN_010cee40  size=39  [run]
void FUN_010cee40(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010CEE70  FUN_010cee70  size=39  [run]
void FUN_010cee70(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010CEEA0  FUN_010ceea0  size=39  [run]
void FUN_010ceea0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010CEED0  FUN_010ceed0  size=39  [run]
void FUN_010ceed0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010CEF00  FUN_010cef00  size=39  [run]
void FUN_010cef00(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010CEF30  FUN_010cef30  size=39  [run]
void FUN_010cef30(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010CEF60  FUN_010cef60  size=39  [run]
void FUN_010cef60(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010CEF90  FUN_010cef90  size=39  [run]
void FUN_010cef90(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010CEFC0  FUN_010cefc0  size=61  [run]
int * __thiscall FUN_010cefc0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010CF000  FUN_010cf000  size=61  [run]
int * __thiscall FUN_010cf000(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010CF040  FUN_010cf040  size=61  [run]
int * __thiscall FUN_010cf040(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010CF080  FUN_010cf080  size=61  [run]
int * __thiscall FUN_010cf080(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010CF0C0  FUN_010cf0c0  size=61  [run]
int * __thiscall FUN_010cf0c0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010CF100  FUN_010cf100  size=61  [run]
int * __thiscall FUN_010cf100(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010CF140  FUN_010cf140  size=61  [run]
int * __thiscall FUN_010cf140(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010CF180  FUN_010cf180  size=61  [run]
int * __thiscall FUN_010cf180(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010CF1C0  FUN_010cf1c0  size=43  [run]
void FUN_010cf1c0(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010CF1F0  FUN_010cf1f0  size=43  [run]
void FUN_010cf1f0(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010CF220  FUN_010cf220  size=43  [run]
void FUN_010cf220(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010CF250  FUN_010cf250  size=43  [run]
void FUN_010cf250(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010CF280  FUN_010cf280  size=43  [run]
void FUN_010cf280(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010CF2B0  FUN_010cf2b0  size=43  [run]
void FUN_010cf2b0(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010CF2E0  FUN_010cf2e0  size=43  [run]
void FUN_010cf2e0(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010CF310  FUN_010cf310  size=43  [run]
void FUN_010cf310(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010CF540  FUN_010cf540  size=97  [run]
void __thiscall FUN_010cf540(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF5B0  FUN_010cf5b0  size=97  [run]
void __thiscall FUN_010cf5b0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF620  FUN_010cf620  size=97  [run]
void __thiscall FUN_010cf620(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF690  FUN_010cf690  size=97  [run]
void __thiscall FUN_010cf690(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF700  FUN_010cf700  size=97  [run]
void __thiscall FUN_010cf700(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF770  FUN_010cf770  size=97  [run]
void __thiscall FUN_010cf770(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF7E0  FUN_010cf7e0  size=97  [run]
void __thiscall FUN_010cf7e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF850  FUN_010cf850  size=97  [run]
void __thiscall FUN_010cf850(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF8C0  FUN_010cf8c0  size=100  [run]
void __fastcall FUN_010cf8c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF930  FUN_010cf930  size=100  [run]
void __fastcall FUN_010cf930(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CF9A0  FUN_010cf9a0  size=100  [run]
void __fastcall FUN_010cf9a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFA10  FUN_010cfa10  size=100  [run]
void __fastcall FUN_010cfa10(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFA80  FUN_010cfa80  size=100  [run]
void __fastcall FUN_010cfa80(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFAF0  FUN_010cfaf0  size=100  [run]
void __fastcall FUN_010cfaf0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFB60  FUN_010cfb60  size=100  [run]
void __fastcall FUN_010cfb60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFBD0  FUN_010cfbd0  size=100  [run]
void __fastcall FUN_010cfbd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFC40  FUN_010cfc40  size=100  [run]
void __fastcall FUN_010cfc40(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFCB0  FUN_010cfcb0  size=100  [run]
void __fastcall FUN_010cfcb0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFD20  FUN_010cfd20  size=100  [run]
void __fastcall FUN_010cfd20(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFD90  FUN_010cfd90  size=100  [run]
void __fastcall FUN_010cfd90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFE00  FUN_010cfe00  size=100  [run]
void __fastcall FUN_010cfe00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFE70  FUN_010cfe70  size=100  [run]
void __fastcall FUN_010cfe70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFEE0  FUN_010cfee0  size=100  [run]
void __fastcall FUN_010cfee0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFF50  FUN_010cff50  size=100  [run]
void __fastcall FUN_010cff50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010CFFC0  hkxScene::hkxScene  size=43  [run]
undefined4 * __thiscall hkxScene::hkxScene(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  return param_1;
}

// 010CFFF0  FUN_010cfff0  size=38  [run]
void FUN_010cfff0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D0020  hkxScene::vf00  size=52  [run]
int __thiscall hkxScene::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_142();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D0060  FUN_010d0060  size=8  [run]
undefined4 FUN_010d0060(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D00A0  FUN_010d00a0  size=21  [run]
void FUN_010d00a0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010d5390(param_2);
  }
  return;
}

// 010D00C0  FUN_010d00c0  size=65  [run]
void FUN_010d00c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D0130  FUN_010d0130  size=25  [run]
void __thiscall FUN_010d0130(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 010D0160  FUN_010d0160  size=39  [run]
void FUN_010d0160(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010D01A0  FUN_010d01a0  size=60  [run]
void __thiscall FUN_010d01a0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D01E0  FUN_010d01e0  size=60  [run]
void __fastcall FUN_010d01e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D0220  FUN_010d0220  size=60  [run]
void __fastcall FUN_010d0220(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D0260  FUN_010d0260  size=60  [run]
void __fastcall FUN_010d0260(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D02A0  FUN_010d02a0  size=100  [run]
undefined4 * __thiscall FUN_010d02a0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010D0310  FUN_010d0310  size=8  [run]
undefined4 FUN_010d0310(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0320  FUN_010d0320  size=8  [run]
undefined4 FUN_010d0320(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0350  FUN_010d0350  size=21  [run]
void FUN_010d0350(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkxVertexBuffer::hkxVertexBuffer(param_2);
  }
  return;
}

// 010D0370  FUN_010d0370  size=16  [run]
void FUN_010d0370(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D0380  FUN_010d0380  size=46  [run]
undefined4 FUN_010d0380(void)

{
  undefined4 local_80;
  
  hkxVertexBuffer::hkxVertexBuffer(0);
  return local_80;
}

// 010D03C0  FUN_010d03c0  size=12  [run]
void FUN_010d03c0(void)

{
  FUN_010d0430();
  return;
}

// 010D03E0  FUN_010d03e0  size=39  [run]
void FUN_010d03e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x54);
  }
  return;
}

// 010D0430  FUN_010d0430  size=237  [run]
void __fastcall FUN_010d0430(undefined4 *param_1)

{
  param_1[0xd] = 0;
  if ((param_1[0xe] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] & 0x3fffffff);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  param_1[10] = 0;
  if ((param_1[0xb] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[9],(param_1[0xb] & 0x3fffffff) * 2);
  }
  param_1[9] = 0;
  param_1[0xb] = 0x80000000;
  param_1[7] = 0;
  if ((param_1[8] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],param_1[8] * 4);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  param_1[4] = 0;
  if ((param_1[5] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return;
}

// 010D0520  FUN_010d0520  size=53  [run]
int __thiscall FUN_010d0520(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_010d0430();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x54);
  }
  return param_1;
}

// 010D0560  FUN_010d0560  size=8  [run]
undefined4 FUN_010d0560(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0570  FUN_010d0570  size=8  [run]
undefined4 FUN_010d0570(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0580  FUN_010d0580  size=25  [run]
undefined4 __thiscall FUN_010d0580(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  return param_1;
}

// 010D05B0  FUN_010d05b0  size=24  [run]
void FUN_010d05b0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010065b0(param_2);
  }
  return;
}

// 010D05E0  FUN_010d05e0  size=16  [run]
void FUN_010d05e0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D05F0  FUN_010d05f0  size=15  [run]
void FUN_010d05f0(void)

{
  FUN_01006770();
  return;
}

// 010D0600  hkxNode::~hkxNode  size=43  [run]
void hkxNode::~hkxNode(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
  }
  return;
}

// 010D0630  hkxNode::hkxNode  size=64  [run]
undefined ** hkxNode::hkxNode(void)

{
  FUN_010065b0(0);
  FUN_010065b0(0);
  return vftable;
}

// 010D06F0  hkxNode::hkxNode  size=43  [run]
undefined4 * __thiscall hkxNode::hkxNode(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  return param_1;
}

// 010D0720  FUN_010d0720  size=8  [run]
undefined4 FUN_010d0720(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0730  FUN_010d0730  size=8  [run]
undefined4 FUN_010d0730(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0740  FUN_010d0740  size=8  [run]
undefined4 FUN_010d0740(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D07B0  FUN_010d07b0  size=16  [run]
void FUN_010d07b0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D07D0  FUN_010d07d0  size=27  [run]
void FUN_010d07d0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010D07F0  hkxMaterial::~hkxMaterial  size=30  [run]
void hkxMaterial::~hkxMaterial(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
  }
  return;
}

// 010D0810  hkxMaterial::hkxMaterial  size=62  [run]
undefined ** hkxMaterial::hkxMaterial(void)

{
  FUN_010065b0(0);
  return vftable;
}

// 010D08B0  FUN_010d08b0  size=29  [run]
void __thiscall FUN_010d08b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010D08E0  FUN_010d08e0  size=28  [run]
void __thiscall FUN_010d08e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010D0910  FUN_010d0910  size=39  [run]
void FUN_010d0910(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010D0940  FUN_010d0940  size=22  [run]
void __fastcall FUN_010d0940(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010D09A0  FUN_010d09a0  size=61  [run]
int * __thiscall FUN_010d09a0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010D09E0  FUN_010d09e0  size=63  [run]
void __thiscall FUN_010d09e0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D0A20  FUN_010d0a20  size=47  [run]
void FUN_010d0a20(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + param_2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      piVar1 = piVar1 + -3;
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return;
}

// 010D0A50  FUN_010d0a50  size=63  [run]
void __fastcall FUN_010d0a50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D0AD0  FUN_010d0ad0  size=63  [run]
void __fastcall FUN_010d0ad0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D0B10  FUN_010d0b10  size=106  [run]
void __thiscall FUN_010d0b10(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + iVar2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D0B80  FUN_010d0b80  size=105  [run]
void __fastcall FUN_010d0b80(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + iVar2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D0BF0  FUN_010d0bf0  size=105  [run]
void __fastcall FUN_010d0bf0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + iVar2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D0C60  hkxMaterial::hkxMaterial  size=31  [run]
undefined4 * __thiscall hkxMaterial::hkxMaterial(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 010D0C80  FUN_010d0c80  size=38  [run]
void FUN_010d0c80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D0CB0  hkxMaterial::vf00  size=52  [run]
int __thiscall hkxMaterial::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkxMaterial();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D0CF0  FUN_010d0cf0  size=8  [run]
undefined4 FUN_010d0cf0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0D00  FUN_010d0d00  size=8  [run]
undefined4 FUN_010d0d00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0D10  FUN_010d0d10  size=34  [run]
undefined4 __thiscall FUN_010d0d10(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  return param_1;
}

// 010D0D50  FUN_010d0d50  size=36  [run]
void FUN_010d0d50(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
  }
  return;
}

// 010D0D90  FUN_010d0d90  size=21  [run]
void FUN_010d0d90(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkxEnvironment::~hkxEnvironment(param_2);
  }
  return;
}

// 010D0DB0  FUN_010d0db0  size=16  [run]
void FUN_010d0db0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D0DC0  FUN_010d0dc0  size=46  [run]
undefined4 FUN_010d0dc0(void)

{
  undefined4 local_30;
  
  hkxEnvironment::~hkxEnvironment(0);
  return local_30;
}

// 010D0DF0  FUN_010d0df0  size=24  [run]
void FUN_010d0df0(void)

{
  FUN_01006770();
  FUN_01006770();
  return;
}

// 010D0E10  FUN_010d0e10  size=19  [run]
void FUN_010d0e10(void)

{
  FUN_01006770();
  FUN_01006770();
  return;
}

// 010D0E30  FUN_010d0e30  size=39  [run]
void FUN_010d0e30(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 010D0E60  FUN_010d0e60  size=63  [run]
int __thiscall FUN_010d0e60(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010D0EA0  FUN_010d0ea0  size=8  [run]
undefined4 FUN_010d0ea0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0EB0  FUN_010d0eb0  size=8  [run]
undefined4 FUN_010d0eb0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0EC0  FUN_010d0ec0  size=25  [run]
undefined4 __thiscall FUN_010d0ec0(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  return param_1;
}

// 010D0EE0  FUN_010d0ee0  size=8  [run]
undefined4 FUN_010d0ee0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D0F00  FUN_010d0f00  size=24  [run]
void FUN_010d0f00(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010065b0(param_2);
  }
  return;
}

// 010D0F30  FUN_010d0f30  size=16  [run]
void FUN_010d0f30(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D0F50  FUN_010d0f50  size=16  [run]
void FUN_010d0f50(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D0F60  FUN_010d0f60  size=15  [run]
void FUN_010d0f60(void)

{
  FUN_01006770();
  return;
}

// 010D0F70  hkxSparselyAnimatedEnum::~hkxSparselyAnimatedEnum  size=18  [run]
void hkxSparselyAnimatedEnum::~hkxSparselyAnimatedEnum(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D0F90  hkxSparselyAnimatedEnum::hkxSparselyAnimatedEnum  size=6  [run]
undefined ** hkxSparselyAnimatedEnum::hkxSparselyAnimatedEnum(void)

{
  return vftable;
}

// 010D0FA0  hkxEnum::~hkxEnum  size=18  [run]
void hkxEnum::~hkxEnum(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D0FC0  hkxEnum::hkxEnum  size=6  [run]
undefined ** hkxEnum::hkxEnum(void)

{
  return vftable;
}

// 010D1020  FUN_010d1020  size=22  [run]
void __fastcall FUN_010d1020(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010D1050  FUN_010d1050  size=28  [run]
void __thiscall FUN_010d1050(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010D1070  FUN_010d1070  size=39  [run]
void FUN_010d1070(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 010D10A0  FUN_010d10a0  size=56  [run]
int __thiscall FUN_010d10a0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010D1100  FUN_010d1100  size=35  [run]
void FUN_010d1100(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
  }
  return;
}

// 010D1130  FUN_010d1130  size=41  [run]
undefined4 __fastcall FUN_010d1130(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_01006770();
  }
  param_1[1] = 0;
  return uVar2;
}

// 010D1160  FUN_010d1160  size=93  [run]
void __thiscall FUN_010d1160(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D11C0  FUN_010d11c0  size=93  [run]
void __fastcall FUN_010d11c0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D1230  FUN_010d1230  size=38  [run]
void FUN_010d1230(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D1260  hkBaseObject::hkBaseObject_107  size=115  [run]
void __fastcall hkBaseObject::hkBaseObject_107(undefined4 *param_1)

{
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D12F0  FUN_010d12f0  size=38  [run]
void FUN_010d12f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D1320  FUN_010d1320  size=30  [run]
void __fastcall FUN_010d1320(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  hkBaseObject::hkBaseObject_107();
  return;
}

// 010D1340  FUN_010d1340  size=93  [run]
void __fastcall FUN_010d1340(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D13A0  hkxSparselyAnimatedInt::vf00  size=52  [run]
int __thiscall hkxSparselyAnimatedInt::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_107();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D13F0  FUN_010d13f0  size=38  [run]
void FUN_010d13f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D1420  hkBaseObject::hkBaseObject_111  size=95  [run]
void __fastcall hkBaseObject::hkBaseObject_111(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 8);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D1480  hkxSparselyAnimatedEnum::vf00  size=73  [run]
int __thiscall hkxSparselyAnimatedEnum::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  ::hkBaseObject::hkBaseObject_107();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D14D0  hkxEnum::vf00  size=52  [run]
int __thiscall hkxEnum::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_111();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D1510  FUN_010d1510  size=8  [run]
undefined4 FUN_010d1510(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D1530  FUN_010d1530  size=21  [run]
void FUN_010d1530(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010065b0(param_2);
  }
  return;
}

// 010D1550  FUN_010d1550  size=12  [run]
void FUN_010d1550(void)

{
  FUN_010cda00();
  return;
}

// 010D1580  FUN_010d1580  size=22  [run]
undefined4 __thiscall FUN_010d1580(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  return param_1;
}

// 010D15A0  FUN_010d15a0  size=8  [run]
undefined4 FUN_010d15a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D15C0  FUN_010d15c0  size=21  [run]
void FUN_010d15c0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010d45e0(param_2);
  }
  return;
}

// 010D15E0  FUN_010d15e0  size=35  [run]
void FUN_010d15e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_01006770();
  return;
}

// 010D1610  FUN_010d1610  size=8  [run]
undefined4 FUN_010d1610(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D1630  FUN_010d1630  size=16  [run]
void FUN_010d1630(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D1640  hkxVertexVectorDataChannel::~hkxVertexVectorDataChannel  size=18  [run]
void hkxVertexVectorDataChannel::~hkxVertexVectorDataChannel(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D1660  hkxVertexVectorDataChannel::hkxVertexVectorDataChannel  size=6  [run]
undefined ** hkxVertexVectorDataChannel::hkxVertexVectorDataChannel(void)

{
  return vftable;
}

// 010D1680  FUN_010d1680  size=38  [run]
void FUN_010d1680(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D16B0  hkBaseObject::hkBaseObject_114  size=68  [run]
void __fastcall hkBaseObject::hkBaseObject_114(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D1700  hkxVertexVectorDataChannel::vf00  size=111  [run]
undefined4 * __thiscall hkxVertexVectorDataChannel::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D1770  FUN_010d1770  size=8  [run]
undefined4 FUN_010d1770(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D1790  FUN_010d1790  size=16  [run]
void FUN_010d1790(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D17A0  hkxVertexSelectionChannel::~hkxVertexSelectionChannel  size=18  [run]
void hkxVertexSelectionChannel::~hkxVertexSelectionChannel(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D17C0  hkxVertexSelectionChannel::hkxVertexSelectionChannel  size=6  [run]
undefined ** hkxVertexSelectionChannel::hkxVertexSelectionChannel(void)

{
  return vftable;
}

// 010D17E0  FUN_010d17e0  size=38  [run]
void FUN_010d17e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D1810  hkBaseObject::hkBaseObject_101  size=69  [run]
void __fastcall hkBaseObject::hkBaseObject_101(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D1860  hkxVertexSelectionChannel::vf00  size=112  [run]
undefined4 * __thiscall hkxVertexSelectionChannel::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D18D0  FUN_010d18d0  size=8  [run]
undefined4 FUN_010d18d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D18F0  FUN_010d18f0  size=16  [run]
void FUN_010d18f0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D1900  hkxVertexIntDataChannel::~hkxVertexIntDataChannel  size=18  [run]
void hkxVertexIntDataChannel::~hkxVertexIntDataChannel(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D1920  hkxVertexIntDataChannel::hkxVertexIntDataChannel  size=6  [run]
undefined ** hkxVertexIntDataChannel::hkxVertexIntDataChannel(void)

{
  return vftable;
}

// 010D1940  FUN_010d1940  size=38  [run]
void FUN_010d1940(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D1970  hkBaseObject::hkBaseObject_99  size=69  [run]
void __fastcall hkBaseObject::hkBaseObject_99(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D19C0  hkxVertexIntDataChannel::vf00  size=112  [run]
undefined4 * __thiscall hkxVertexIntDataChannel::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D1A30  FUN_010d1a30  size=8  [run]
undefined4 FUN_010d1a30(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D1A50  FUN_010d1a50  size=16  [run]
void FUN_010d1a50(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D1A60  hkxVertexFloatDataChannel::~hkxVertexFloatDataChannel  size=18  [run]
void hkxVertexFloatDataChannel::~hkxVertexFloatDataChannel(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D1A80  hkxVertexFloatDataChannel::hkxVertexFloatDataChannel  size=6  [run]
undefined ** hkxVertexFloatDataChannel::hkxVertexFloatDataChannel(void)

{
  return vftable;
}

// 010D1AB0  FUN_010d1ab0  size=38  [run]
void FUN_010d1ab0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D1AE0  hkBaseObject::hkBaseObject_102  size=69  [run]
void __fastcall hkBaseObject::hkBaseObject_102(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D1B30  hkxVertexFloatDataChannel::vf00  size=112  [run]
undefined4 * __thiscall hkxVertexFloatDataChannel::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D1BA0  FUN_010d1ba0  size=8  [run]
undefined4 FUN_010d1ba0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D1BC0  FUN_010d1bc0  size=16  [run]
void FUN_010d1bc0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D1BD0  hkxTriangleSelectionChannel::~hkxTriangleSelectionChannel  size=18  [run]
void hkxTriangleSelectionChannel::~hkxTriangleSelectionChannel(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D1BF0  hkxTriangleSelectionChannel::hkxTriangleSelectionChannel  size=6  [run]
undefined ** hkxTriangleSelectionChannel::hkxTriangleSelectionChannel(void)

{
  return vftable;
}

// 010D1C10  FUN_010d1c10  size=38  [run]
void FUN_010d1c10(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D1C40  hkBaseObject::hkBaseObject_103  size=69  [run]
void __fastcall hkBaseObject::hkBaseObject_103(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D1C90  hkxTriangleSelectionChannel::vf00  size=112  [run]
undefined4 * __thiscall hkxTriangleSelectionChannel::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D1D00  FUN_010d1d00  size=8  [run]
undefined4 FUN_010d1d00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D1D20  FUN_010d1d20  size=16  [run]
void FUN_010d1d20(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D1D30  hkxTextureInplace::~hkxTextureInplace  size=43  [run]
void hkxTextureInplace::~hkxTextureInplace(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
  }
  return;
}

// 010D1D60  hkxTextureInplace::hkxTextureInplace  size=64  [run]
undefined ** hkxTextureInplace::hkxTextureInplace(void)

{
  FUN_010065b0(0);
  FUN_010065b0(0);
  return vftable;
}

// 010D1DA0  hkxTextureInplace::hkxTextureInplace  size=43  [run]
undefined4 * __thiscall hkxTextureInplace::hkxTextureInplace(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  return param_1;
}

// 010D1DD0  FUN_010d1dd0  size=38  [run]
void FUN_010d1dd0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D1E00  hkBaseObject::hkBaseObject_106  size=81  [run]
void __fastcall hkBaseObject::hkBaseObject_106(undefined4 *param_1)

{
  FUN_01006770();
  FUN_01006770();
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] & 0x3fffffff);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D1E60  hkxTextureInplace::vf00  size=124  [run]
undefined4 * __thiscall hkxTextureInplace::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  FUN_01006770();
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] & 0x3fffffff);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D1EE0  FUN_010d1ee0  size=8  [run]
undefined4 FUN_010d1ee0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D1EF0  hkxTextureFile::hkxTextureFile  size=55  [run]
undefined4 * __thiscall hkxTextureFile::hkxTextureFile(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  return param_1;
}

// 010D1F30  hkBaseObject::~hkBaseObject  size=35  [run]
void __fastcall hkBaseObject::~hkBaseObject(undefined4 *param_1)

{
  FUN_01006770();
  FUN_01006770();
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 010D1F70  hkxTextureFile::~hkxTextureFile  size=52  [run]
void hkxTextureFile::~hkxTextureFile(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
  }
  return;
}

// 010D1FB0  FUN_010d1fb0  size=16  [run]
void FUN_010d1fb0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D1FC0  hkxTextureFile::hkxTextureFile  size=73  [run]
undefined ** hkxTextureFile::hkxTextureFile(void)

{
  FUN_010065b0(0);
  FUN_010065b0(0);
  FUN_010065b0(0);
  return vftable;
}

// 010D2010  FUN_010d2010  size=38  [run]
void FUN_010d2010(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D2040  hkxTextureFile::vf00  size=77  [run]
undefined4 * __thiscall hkxTextureFile::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  FUN_01006770();
  FUN_01006770();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D2090  FUN_010d2090  size=8  [run]
undefined4 FUN_010d2090(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D20B0  FUN_010d20b0  size=16  [run]
void FUN_010d20b0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D20C0  hkxSparselyAnimatedString::~hkxSparselyAnimatedString  size=18  [run]
void hkxSparselyAnimatedString::~hkxSparselyAnimatedString(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D20E0  hkxSparselyAnimatedString::hkxSparselyAnimatedString  size=6  [run]
undefined ** hkxSparselyAnimatedString::hkxSparselyAnimatedString(void)

{
  return vftable;
}

// 010D2100  FUN_010d2100  size=38  [run]
void FUN_010d2100(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D2130  hkBaseObject::hkBaseObject_92  size=144  [run]
void __fastcall hkBaseObject::hkBaseObject_92(undefined4 *param_1)

{
  int iVar1;
  
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  iVar1 = param_1[3];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D21C0  hkxSparselyAnimatedString::vf00  size=52  [run]
int __thiscall hkxSparselyAnimatedString::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_92();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D2200  FUN_010d2200  size=8  [run]
undefined4 FUN_010d2200(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D2220  FUN_010d2220  size=16  [run]
void FUN_010d2220(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D2230  hkxSparselyAnimatedInt::~hkxSparselyAnimatedInt  size=18  [run]
void hkxSparselyAnimatedInt::~hkxSparselyAnimatedInt(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D2250  hkxSparselyAnimatedInt::hkxSparselyAnimatedInt  size=6  [run]
undefined ** hkxSparselyAnimatedInt::hkxSparselyAnimatedInt(void)

{
  return vftable;
}

// 010D2260  FUN_010d2260  size=8  [run]
undefined4 FUN_010d2260(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D2280  FUN_010d2280  size=16  [run]
void FUN_010d2280(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D2290  hkxSparselyAnimatedBool::~hkxSparselyAnimatedBool  size=18  [run]
void hkxSparselyAnimatedBool::~hkxSparselyAnimatedBool(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D22B0  hkxSparselyAnimatedBool::hkxSparselyAnimatedBool  size=6  [run]
undefined ** hkxSparselyAnimatedBool::hkxSparselyAnimatedBool(void)

{
  return vftable;
}

// 010D22F0  FUN_010d22f0  size=11  [run]
void __fastcall FUN_010d22f0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010d22f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

// 010D2330  FUN_010d2330  size=57  [run]
void __thiscall FUN_010d2330(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D2370  FUN_010d2370  size=57  [run]
void __fastcall FUN_010d2370(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D23B0  FUN_010d23b0  size=57  [run]
void __fastcall FUN_010d23b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D2400  FUN_010d2400  size=38  [run]
void FUN_010d2400(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D2430  hkBaseObject::hkBaseObject_97  size=111  [run]
void __fastcall hkBaseObject::hkBaseObject_97(undefined4 *param_1)

{
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] & 0x3fffffff);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D24A0  hkxSparselyAnimatedBool::vf00  size=52  [run]
int __thiscall hkxSparselyAnimatedBool::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_97();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D24E0  FUN_010d24e0  size=8  [run]
undefined4 FUN_010d24e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D2500  FUN_010d2500  size=16  [run]
void FUN_010d2500(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D2510  hkxSkinBinding::~hkxSkinBinding  size=18  [run]
void hkxSkinBinding::~hkxSkinBinding(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D2530  hkxSkinBinding::hkxSkinBinding  size=6  [run]
undefined ** hkxSkinBinding::hkxSkinBinding(void)

{
  return vftable;
}

// 010D2560  FUN_010d2560  size=38  [run]
void FUN_010d2560(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D2590  hkBaseObject::hkBaseObject_96  size=158  [run]
void __fastcall hkBaseObject::hkBaseObject_96(undefined4 *param_1)

{
  int iVar1;
  
  param_1[7] = 0;
  if (-1 < (int)param_1[8]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],param_1[8] << 6);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  iVar1 = param_1[4];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 010D2630  hkxSkinBinding::vf00  size=52  [run]
int __thiscall hkxSkinBinding::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_96();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D2670  FUN_010d2670  size=8  [run]
undefined4 FUN_010d2670(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D2690  FUN_010d2690  size=16  [run]
void FUN_010d2690(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D26A0  hkxNodeSelectionSet::~hkxNodeSelectionSet  size=30  [run]
void hkxNodeSelectionSet::~hkxNodeSelectionSet(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
  }
  return;
}

// 010D26C0  hkxNodeSelectionSet::hkxNodeSelectionSet  size=53  [run]
undefined ** hkxNodeSelectionSet::hkxNodeSelectionSet(void)

{
  FUN_010065b0(0);
  return vftable;
}

// 010D2700  hkxNodeSelectionSet::hkxNodeSelectionSet  size=31  [run]
undefined4 * __thiscall
hkxNodeSelectionSet::hkxNodeSelectionSet(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 010D2720  FUN_010d2720  size=38  [run]
void FUN_010d2720(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D2750  FUN_010d2750  size=113  [run]
void __fastcall FUN_010d2750(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_01006770();
  iVar2 = *(int *)(param_1 + 0x18) + -1;
  iVar1 = *(int *)(param_1 + 0x14);
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < *(int *)(param_1 + 0x1c)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x1c) * 4);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  hkxAttributeHolder::~hkxAttributeHolder();
  return;
}

// 010D27D0  hkxNodeSelectionSet::vf00  size=52  [run]
int __thiscall hkxNodeSelectionSet::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_010d2750();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D2810  FUN_010d2810  size=8  [run]
undefined4 FUN_010d2810(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D2820  FUN_010d2820  size=8  [run]
undefined4 FUN_010d2820(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D2840  FUN_010d2840  size=16  [run]
void FUN_010d2840(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D2860  FUN_010d2860  size=21  [run]
void FUN_010d2860(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkxMesh::~hkxMesh(param_2);
  }
  return;
}

// 010D2880  FUN_010d2880  size=16  [run]
void FUN_010d2880(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D2890  FUN_010d2890  size=46  [run]
undefined4 FUN_010d2890(void)

{
  undefined4 local_30;
  
  hkxMesh::~hkxMesh(0);
  return local_30;
}

// 010D28C0  hkxMesh::UserChannelInfo::~UserChannelInfo  size=43  [run]
void hkxMesh::UserChannelInfo::~UserChannelInfo(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
  }
  return;
}

// 010D28F0  hkxMesh::UserChannelInfo::UserChannelInfo  size=64  [run]
undefined ** hkxMesh::UserChannelInfo::UserChannelInfo(void)

{
  FUN_010065b0(0);
  FUN_010065b0(0);
  return vftable;
}

// 010D2930  hkxMesh::UserChannelInfo::UserChannelInfo  size=43  [run]
undefined4 * __thiscall
hkxMesh::UserChannelInfo::UserChannelInfo(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  return param_1;
}

// 010D2960  FUN_010d2960  size=27  [run]
void FUN_010d2960(void)

{
  FUN_01006770();
  FUN_01006770();
  hkxAttributeHolder::~hkxAttributeHolder();
  return;
}

// 010D2980  FUN_010d2980  size=38  [run]
void FUN_010d2980(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D29B0  hkxMesh::UserChannelInfo::vf00  size=70  [run]
int __thiscall hkxMesh::UserChannelInfo::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  FUN_01006770();
  hkxAttributeHolder::~hkxAttributeHolder();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D2A00  FUN_010d2a00  size=8  [run]
undefined4 FUN_010d2a00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D2A20  FUN_010d2a20  size=16  [run]
void FUN_010d2a20(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D2A30  hkxMeshSection::~hkxMeshSection  size=18  [run]
void hkxMeshSection::~hkxMeshSection(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D2A50  hkxMeshSection::hkxMeshSection  size=6  [run]
undefined ** hkxMeshSection::hkxMeshSection(void)

{
  return vftable;
}

// 010D2A90  FUN_010d2a90  size=22  [run]
void __fastcall FUN_010d2a90(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010D2AF0  FUN_010d2af0  size=26  [run]
void __thiscall FUN_010d2af0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010D2B20  FUN_010d2b20  size=26  [run]
void __thiscall FUN_010d2b20(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010D2B40  FUN_010d2b40  size=22  [run]
void __fastcall FUN_010d2b40(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010D2B60  FUN_010d2b60  size=39  [run]
void FUN_010d2b60(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010D2BB0  FUN_010d2bb0  size=61  [run]
int * __thiscall FUN_010d2bb0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010D2BF0  FUN_010d2bf0  size=39  [run]
void FUN_010d2bf0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010D2C20  FUN_010d2c20  size=43  [run]
void FUN_010d2c20(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010D2C50  FUN_010d2c50  size=61  [run]
int * __thiscall FUN_010d2c50(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010D2CD0  FUN_010d2cd0  size=43  [run]
void FUN_010d2cd0(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010D2D00  FUN_010d2d00  size=97  [run]
void __thiscall FUN_010d2d00(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D2DB0  FUN_010d2db0  size=100  [run]
void __fastcall FUN_010d2db0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D2E20  FUN_010d2e20  size=97  [run]
void __thiscall FUN_010d2e20(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D2E90  FUN_010d2e90  size=100  [run]
void __fastcall FUN_010d2e90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D2F00  FUN_010d2f00  size=100  [run]
void __fastcall FUN_010d2f00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D2F70  FUN_010d2f70  size=100  [run]
void __fastcall FUN_010d2f70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D2FF0  FUN_010d2ff0  size=38  [run]
void FUN_010d2ff0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D3020  hkBaseObject::hkBaseObject_84  size=249  [run]
void __fastcall hkBaseObject::hkBaseObject_84(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[7];
  iVar2 = param_1[8] + -1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[8] = 0;
  if (-1 < (int)param_1[9]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[7],param_1[9] * 4);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[6] = 0;
  iVar2 = param_1[4] + -1;
  iVar1 = param_1[3];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  if (param_1[2] != 0) {
    FUN_010060a0();
    param_1[2] = 0;
    *param_1 = vftable;
    return;
  }
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 010D3120  hkxMeshSection::vf00  size=52  [run]
int __thiscall hkxMeshSection::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_84();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D3160  FUN_010d3160  size=8  [run]
undefined4 FUN_010d3160(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D3180  FUN_010d3180  size=21  [run]
void FUN_010d3180(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkxMaterialShaderSet::~hkxMaterialShaderSet(param_2);
  }
  return;
}

// 010D31A0  FUN_010d31a0  size=16  [run]
void FUN_010d31a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D31B0  FUN_010d31b0  size=46  [run]
undefined4 FUN_010d31b0(void)

{
  undefined4 local_30;
  
  hkxMaterialShaderSet::~hkxMaterialShaderSet(0);
  return local_30;
}

// 010D31E0  FUN_010d31e0  size=8  [run]
undefined4 FUN_010d31e0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D3200  FUN_010d3200  size=16  [run]
void FUN_010d3200(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D3210  hkxMaterialShader::~hkxMaterialShader  size=61  [run]
void hkxMaterialShader::~hkxMaterialShader(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
    FUN_010065b0(param_2);
  }
  return;
}

// 010D3250  hkxMaterialShader::hkxMaterialShader  size=82  [run]
undefined ** hkxMaterialShader::hkxMaterialShader(void)

{
  FUN_010065b0(0);
  FUN_010065b0(0);
  FUN_010065b0(0);
  FUN_010065b0(0);
  return vftable;
}

// 010D32C0  hkxMaterialShader::hkxMaterialShader  size=67  [run]
undefined4 * __thiscall hkxMaterialShader::hkxMaterialShader(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  return param_1;
}

// 010D3310  FUN_010d3310  size=38  [run]
void FUN_010d3310(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D3340  hkBaseObject::hkBaseObject_85  size=97  [run]
void __fastcall hkBaseObject::hkBaseObject_85(undefined4 *param_1)

{
  param_1[8] = 0;
  if (-1 < (int)param_1[9]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[7],param_1[9] & 0x3fffffff);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  FUN_01006770();
  FUN_01006770();
  FUN_01006770();
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 010D33B0  hkxMaterialShader::vf00  size=52  [run]
int __thiscall hkxMaterialShader::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_85();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D33F0  FUN_010d33f0  size=8  [run]
undefined4 FUN_010d33f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D3410  FUN_010d3410  size=16  [run]
void FUN_010d3410(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D3420  hkxMaterialEffect::~hkxMaterialEffect  size=30  [run]
void hkxMaterialEffect::~hkxMaterialEffect(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
  }
  return;
}

// 010D3440  hkxMaterialEffect::hkxMaterialEffect  size=53  [run]
undefined ** hkxMaterialEffect::hkxMaterialEffect(void)

{
  FUN_010065b0(0);
  return vftable;
}

// 010D3490  hkxMaterialEffect::hkxMaterialEffect  size=31  [run]
undefined4 * __thiscall hkxMaterialEffect::hkxMaterialEffect(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 010D34B0  FUN_010d34b0  size=38  [run]
void FUN_010d34b0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D34E0  hkBaseObject::hkBaseObject_87  size=73  [run]
void __fastcall hkBaseObject::hkBaseObject_87(undefined4 *param_1)

{
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] & 0x3fffffff);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 010D3530  hkxMaterialEffect::vf00  size=116  [run]
undefined4 * __thiscall hkxMaterialEffect::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] & 0x3fffffff);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  FUN_01006770();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D35B0  FUN_010d35b0  size=8  [run]
undefined4 FUN_010d35b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D35D0  FUN_010d35d0  size=16  [run]
void FUN_010d35d0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D35E0  hkxLight::~hkxLight  size=18  [run]
void hkxLight::~hkxLight(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D3600  hkxLight::hkxLight  size=6  [run]
undefined ** hkxLight::hkxLight(void)

{
  return vftable;
}

// 010D3640  FUN_010d3640  size=38  [run]
void FUN_010d3640(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D3670  hkxLight::vf00  size=53  [run]
undefined4 * __thiscall hkxLight::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D36B0  FUN_010d36b0  size=8  [run]
undefined4 FUN_010d36b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D36D0  FUN_010d36d0  size=16  [run]
void FUN_010d36d0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D36E0  hkxIndexBuffer::~hkxIndexBuffer  size=18  [run]
void hkxIndexBuffer::~hkxIndexBuffer(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D3700  hkxIndexBuffer::hkxIndexBuffer  size=6  [run]
undefined ** hkxIndexBuffer::hkxIndexBuffer(void)

{
  return vftable;
}

// 010D3730  FUN_010d3730  size=38  [run]
void FUN_010d3730(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D3760  hkBaseObject::hkBaseObject_89  size=113  [run]
void __fastcall hkBaseObject::hkBaseObject_89(undefined4 *param_1)

{
  param_1[7] = 0;
  if (-1 < (int)param_1[8]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],param_1[8] * 4);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 2);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D37E0  hkxIndexBuffer::vf00  size=52  [run]
int __thiscall hkxIndexBuffer::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_89();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D3820  FUN_010d3820  size=8  [run]
undefined4 FUN_010d3820(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D3840  FUN_010d3840  size=16  [run]
void FUN_010d3840(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D3850  hkxEdgeSelectionChannel::~hkxEdgeSelectionChannel  size=18  [run]
void hkxEdgeSelectionChannel::~hkxEdgeSelectionChannel(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D3870  hkxEdgeSelectionChannel::hkxEdgeSelectionChannel  size=6  [run]
undefined ** hkxEdgeSelectionChannel::hkxEdgeSelectionChannel(void)

{
  return vftable;
}

// 010D3890  FUN_010d3890  size=38  [run]
void FUN_010d3890(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D38C0  hkBaseObject::hkBaseObject_80  size=69  [run]
void __fastcall hkBaseObject::hkBaseObject_80(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D3910  hkxEdgeSelectionChannel::vf00  size=112  [run]
undefined4 * __thiscall hkxEdgeSelectionChannel::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D3980  FUN_010d3980  size=8  [run]
undefined4 FUN_010d3980(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D39C0  hkxCamera::~hkxCamera  size=18  [run]
void hkxCamera::~hkxCamera(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D39E0  FUN_010d39e0  size=16  [run]
void FUN_010d39e0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D39F0  hkxCamera::hkxCamera  size=6  [run]
undefined ** hkxCamera::hkxCamera(void)

{
  return vftable;
}

// 010D3A00  FUN_010d3a00  size=38  [run]
void FUN_010d3a00(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D3A30  hkxCamera::vf00  size=53  [run]
undefined4 * __thiscall hkxCamera::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D3A70  FUN_010d3a70  size=8  [run]
undefined4 FUN_010d3a70(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D3A90  FUN_010d3a90  size=16  [run]
void FUN_010d3a90(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D3AA0  hkxBlob::hkxBlob  size=37  [run]
void hkxBlob::hkxBlob(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = hkxBlobMeshShape::vftable;
    param_1[2] = vftable;
    FUN_010065b0(param_2);
  }
  return;
}

// 010D3AD0  hkxBlob::hkxBlob_4  size=60  [run]
undefined ** hkxBlob::hkxBlob_4(void)

{
  FUN_010065b0(0);
  return hkxBlobMeshShape::vftable;
}

// 010D3B20  FUN_010d3b20  size=38  [run]
void FUN_010d3b20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D3B50  hkBaseObject::hkBaseObject_81  size=65  [run]
void __fastcall hkBaseObject::hkBaseObject_81(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] & 0x3fffffff);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D3BA0  hkxBlob::hkxBlob  size=38  [run]
undefined4 * __thiscall hkxBlob::hkxBlob(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = hkxBlobMeshShape::vftable;
  param_1[2] = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 010D3BD0  hkxBlobMeshShape::vf0C  size=4  [run]
undefined4 hkxBlobMeshShape::vf0C(void)

{
  return 0xffffffff;
}

// 010D3BE0  hkxBlobMeshShape::vf10  size=3  [run]
void hkxBlobMeshShape::vf10(void)

{
  return;
}

// 010D3BF0  hkxBlobMeshShape::vf14  size=3  [run]
void hkxBlobMeshShape::vf14(void)

{
  return;
}

// 010D3C00  hkxBlobMeshShape::vf1C  size=12  [run]
void hkxBlobMeshShape::vf1C(void)

{
  FUN_01006780();
  return;
}

// 010D3C10  hkxBlobMeshShape::vf08  size=6  [run]
undefined * hkxBlobMeshShape::vf08(void)

{
  return &DAT_0209b3d0;
}

// 010D3C20  FUN_010d3c20  size=38  [run]
void FUN_010d3c20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D3C50  hkxBlobMeshShape::vf18  size=7  [run]
uint __fastcall hkxBlobMeshShape::vf18(int param_1)

{
  return *(uint *)(param_1 + 0x1c) & 0xfffffffe;
}

// 010D3C60  hkBaseObject::hkBaseObject_82  size=80  [run]
void __fastcall hkBaseObject::hkBaseObject_82(undefined4 *param_1)

{
  FUN_01006770();
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] & 0x3fffffff);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  param_1[2] = vftable;
  *param_1 = vftable;
  return;
}

// 010D3CB0  hkxBlob::vf00  size=108  [run]
undefined4 * __thiscall hkxBlob::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] & 0x3fffffff);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D3D20  hkxBlobMeshShape::vf00  size=123  [run]
undefined4 * __thiscall hkxBlobMeshShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] & 0x3fffffff);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  param_1[2] = ::hkBaseObject::vftable;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D3DA0  FUN_010d3da0  size=8  [run]
undefined4 FUN_010d3da0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D3DC0  FUN_010d3dc0  size=16  [run]
void FUN_010d3dc0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D3DD0  hkxBlob::~hkxBlob  size=18  [run]
void hkxBlob::~hkxBlob(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D3DF0  hkxBlob::hkxBlob  size=6  [run]
undefined ** hkxBlob::hkxBlob(void)

{
  return vftable;
}

// 010D3E00  FUN_010d3e00  size=8  [run]
undefined4 FUN_010d3e00(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D3E20  FUN_010d3e20  size=16  [run]
void FUN_010d3e20(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D3E30  hkxAttributeHolder::~hkxAttributeHolder  size=18  [run]
void hkxAttributeHolder::~hkxAttributeHolder(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D3E50  hkxAttributeHolder::hkxAttributeHolder  size=6  [run]
undefined ** hkxAttributeHolder::hkxAttributeHolder(void)

{
  return vftable;
}

// 010D3E60  FUN_010d3e60  size=8  [run]
undefined4 FUN_010d3e60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D3E80  FUN_010d3e80  size=16  [run]
void FUN_010d3e80(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D3E90  hkxAnimatedVector::~hkxAnimatedVector  size=18  [run]
void hkxAnimatedVector::~hkxAnimatedVector(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D3EB0  hkxAnimatedVector::hkxAnimatedVector  size=6  [run]
undefined ** hkxAnimatedVector::hkxAnimatedVector(void)

{
  return vftable;
}

// 010D3EE0  FUN_010d3ee0  size=38  [run]
void FUN_010d3ee0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D3F10  hkBaseObject::hkBaseObject_83  size=68  [run]
void __fastcall hkBaseObject::hkBaseObject_83(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D3F60  hkxAnimatedVector::vf00  size=111  [run]
undefined4 * __thiscall hkxAnimatedVector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D3FD0  FUN_010d3fd0  size=8  [run]
undefined4 FUN_010d3fd0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D3FF0  FUN_010d3ff0  size=16  [run]
void FUN_010d3ff0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D4000  hkxAnimatedQuaternion::~hkxAnimatedQuaternion  size=18  [run]
void hkxAnimatedQuaternion::~hkxAnimatedQuaternion(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D4020  hkxAnimatedQuaternion::hkxAnimatedQuaternion  size=6  [run]
undefined ** hkxAnimatedQuaternion::hkxAnimatedQuaternion(void)

{
  return vftable;
}

// 010D4060  FUN_010d4060  size=25  [run]
void __thiscall FUN_010d4060(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 010D40B0  FUN_010d40b0  size=60  [run]
void __thiscall FUN_010d40b0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D40F0  FUN_010d40f0  size=60  [run]
void __fastcall FUN_010d40f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D4130  FUN_010d4130  size=60  [run]
void __fastcall FUN_010d4130(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D4180  FUN_010d4180  size=38  [run]
void FUN_010d4180(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D41B0  hkBaseObject::hkBaseObject_146  size=68  [run]
void __fastcall hkBaseObject::hkBaseObject_146(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D4200  hkxAnimatedQuaternion::vf00  size=111  [run]
undefined4 * __thiscall hkxAnimatedQuaternion::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D4270  FUN_010d4270  size=8  [run]
undefined4 FUN_010d4270(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D4290  FUN_010d4290  size=16  [run]
void FUN_010d4290(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D42A0  hkxAnimatedMatrix::~hkxAnimatedMatrix  size=18  [run]
void hkxAnimatedMatrix::~hkxAnimatedMatrix(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D42C0  hkxAnimatedMatrix::hkxAnimatedMatrix  size=6  [run]
undefined ** hkxAnimatedMatrix::hkxAnimatedMatrix(void)

{
  return vftable;
}

// 010D42E0  FUN_010d42e0  size=38  [run]
void FUN_010d42e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D4310  hkBaseObject::hkBaseObject_147  size=68  [run]
void __fastcall hkBaseObject::hkBaseObject_147(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 6);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D4360  hkxAnimatedMatrix::vf00  size=111  [run]
undefined4 * __thiscall hkxAnimatedMatrix::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 6);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D43D0  FUN_010d43d0  size=8  [run]
undefined4 FUN_010d43d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D43F0  FUN_010d43f0  size=16  [run]
void FUN_010d43f0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D4400  hkxAnimatedFloat::~hkxAnimatedFloat  size=18  [run]
void hkxAnimatedFloat::~hkxAnimatedFloat(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010D4420  hkxAnimatedFloat::hkxAnimatedFloat  size=6  [run]
undefined ** hkxAnimatedFloat::hkxAnimatedFloat(void)

{
  return vftable;
}

// 010D4440  FUN_010d4440  size=38  [run]
void FUN_010d4440(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D4470  hkBaseObject::hkBaseObject_149  size=69  [run]
void __fastcall hkBaseObject::hkBaseObject_149(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D44C0  hkxAnimatedFloat::vf00  size=112  [run]
undefined4 * __thiscall hkxAnimatedFloat::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D4530  FUN_010d4530  size=8  [run]
undefined4 FUN_010d4530(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D4550  FUN_010d4550  size=21  [run]
void FUN_010d4550(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(param_2);
  }
  return;
}

// 010D4570  FUN_010d4570  size=16  [run]
void FUN_010d4570(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010D4580  FUN_010d4580  size=46  [run]
undefined4 FUN_010d4580(void)

{
  undefined4 local_30;
  
  hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(0);
  return local_30;
}

// 010D45B0  FUN_010d45b0  size=12  [run]
void FUN_010d45b0(void)

{
  FUN_01441a50();
  return;
}

// 010D45C0  FUN_010d45c0  size=19  [run]
int __fastcall FUN_010d45c0(int param_1)

{
  FUN_010065a0();
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}

// 010D45E0  FUN_010d45e0  size=22  [run]
undefined4 __thiscall FUN_010d45e0(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  return param_1;
}

// 010D4620  FUN_010d4620  size=15  [run]
int __thiscall FUN_010d4620(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010D4640  FUN_010d4640  size=65  [run]
undefined4 __thiscall FUN_010d4640(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 8);
    do {
      if (*piVar2 == param_2) {
        *param_3 = (*(int **)(param_1 + 8))[iVar1 * 2 + 1] & 0xfffffffe;
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  return 1;
}

// 010D4690  FUN_010d4690  size=80  [run]
undefined4 __thiscall FUN_010d4690(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = FUN_01015be0(param_2,*(uint *)(*(int *)(param_1 + 8) + 4 + iVar2 * 8) & 0xfffffffe);
      if (iVar1 == 0) {
        *param_3 = *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 8);
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return 1;
}

// 010D46E0  FUN_010d46e0  size=15  [run]
int __thiscall FUN_010d46e0(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 010D4800  FUN_010d4800  size=15  [run]
int __thiscall FUN_010d4800(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010D4820  FUN_010d4820  size=32  [run]
void __thiscall FUN_010d4820(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010D4850  FUN_010d4850  size=26  [run]
void __thiscall FUN_010d4850(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010D4870  FUN_010d4870  size=12  [run]
void FUN_010d4870(void)

{
  FUN_010ce2f0();
  return;
}

// 010D4880  FUN_010d4880  size=80  [run]
undefined4 __thiscall FUN_010d4880(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x14) + 0x14);
    if ((uVar1 & 0xfffffffe) != 0) {
      iVar2 = FUN_01015be0(uVar1 & 0xfffffffe,param_2);
      if (iVar2 == 0) {
        return *(undefined4 *)(param_1 + 0x14);
      }
    }
    uVar3 = FUN_010ce280(param_2);
    return uVar3;
  }
  return 0;
}

// 010D4B00  hkxScene::hkxScene  size=224  [run]
undefined4 * __fastcall hkxScene::hkxScene(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_010065a0();
  FUN_010065a0();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x80000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x80000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x80000000;
  *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0x3f800000;
  return param_1;
}

// 010D4BE0  hkBaseObject::hkBaseObject_142  size=814  [run]
void __fastcall hkBaseObject::hkBaseObject_142(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = hkxScene::vftable;
  iVar2 = param_1[0x1c] + -1;
  iVar1 = param_1[0x1b];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[0x1c] = 0;
  if (-1 < (int)param_1[0x1d]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x1b],param_1[0x1d] * 4);
  }
  param_1[0x1b] = 0;
  param_1[0x1d] = 0x80000000;
  iVar2 = param_1[0x19] + -1;
  iVar1 = param_1[0x18];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[0x19] = 0;
  if (-1 < (int)param_1[0x1a]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x18],param_1[0x1a] * 4);
  }
  param_1[0x18] = 0;
  param_1[0x1a] = 0x80000000;
  iVar2 = param_1[0x16] + -1;
  iVar1 = param_1[0x15];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[0x16] = 0;
  if (-1 < (int)param_1[0x17]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x15],param_1[0x17] * 4);
  }
  param_1[0x15] = 0;
  param_1[0x17] = 0x80000000;
  iVar2 = param_1[0x13] + -1;
  iVar1 = param_1[0x12];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[0x13] = 0;
  if (-1 < (int)param_1[0x14]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x12],param_1[0x14] * 4);
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0x80000000;
  iVar2 = param_1[0x10] + -1;
  iVar1 = param_1[0xf];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[0x10] = 0;
  if (-1 < (int)param_1[0x11]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xf],param_1[0x11] * 4);
  }
  param_1[0xf] = 0;
  param_1[0x11] = 0x80000000;
  iVar2 = param_1[0xd] + -1;
  iVar1 = param_1[0xc];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  iVar2 = param_1[10] + -1;
  iVar1 = param_1[9];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[10] = 0;
  if (-1 < (int)param_1[0xb]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[9],param_1[0xb] * 4);
  }
  param_1[9] = 0;
  param_1[0xb] = 0x80000000;
  iVar2 = param_1[7] + -1;
  iVar1 = param_1[6];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[7] = 0;
  if (-1 < (int)param_1[8]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],param_1[8] * 4);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  if (param_1[5] != 0) {
    FUN_010060a0();
  }
  param_1[5] = 0;
  FUN_01006770();
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 010D5010  FUN_010d5010  size=32  [run]
void __thiscall FUN_010d5010(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 010D5160  FUN_010d5160  size=61  [run]
void __thiscall FUN_010d5160(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D51A0  FUN_010d51a0  size=61  [run]
void __fastcall FUN_010d51a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D51E0  FUN_010d51e0  size=61  [run]
void __fastcall FUN_010d51e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D5220  FUN_010d5220  size=27  [run]
void __thiscall FUN_010d5220(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 010D5240  FUN_010d5240  size=61  [run]
void __fastcall FUN_010d5240(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D52A0  FUN_010d52a0  size=22  [run]
void __thiscall FUN_010d52a0(short *param_1,undefined4 param_2,short param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 010D52D0  FUN_010d52d0  size=15  [run]
int __thiscall FUN_010d52d0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010D52F0  FUN_010d52f0  size=22  [run]
void __thiscall FUN_010d52f0(short *param_1,undefined4 param_2,short param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 010D5320  FUN_010d5320  size=110  [run]
undefined4 __thiscall FUN_010d5320(int *param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  if (iVar1 != param_2[1]) {
    return 0;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    param_1 = (int *)*param_1;
    psVar2 = (short *)(*param_2 + 6);
    iVar3 = *param_2 - (int)param_1;
    do {
      if (((((short)param_1[1] != psVar2[-1]) || (*(short *)((int)param_1 + 6) != *psVar2)) ||
          (*param_1 != *(int *)(iVar3 + (int)param_1))) ||
         ((param_1[2] != *(int *)(psVar2 + 1) || ((char)param_1[3] != (char)psVar2[3])))) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      psVar2 = psVar2 + 8;
      param_1 = param_1 + 4;
    } while (iVar4 < iVar1);
  }
  return 1;
}

// 010D5390  FUN_010d5390  size=5  [run]
undefined4 __fastcall FUN_010d5390(undefined4 param_1)

{
  return param_1;
}

// 010D53A0  FUN_010d53a0  size=16  [run]
void __thiscall FUN_010d53a0(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}

// 010D53B0  FUN_010d53b0  size=22  [run]
void __thiscall FUN_010d53b0(short *param_1,undefined4 param_2,short param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 010D53D0  FUN_010d53d0  size=16  [run]
void __thiscall FUN_010d53d0(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}

// 010D53E0  FUN_010d53e0  size=22  [run]
void __thiscall FUN_010d53e0(short *param_1,undefined4 param_2,short param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 010D5400  FUN_010d5400  size=15  [run]
int __thiscall FUN_010d5400(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010D5430  FUN_010d5430  size=99  [run]
int __thiscall FUN_010d5430(int param_1,int *param_2)

{
  byte bVar1;
  
  switch((short)param_2[1]) {
  case 1:
    return *param_2 + *(int *)(param_1 + 0x38);
  case 2:
    return *param_2 + *(int *)(param_1 + 0x2c);
  case 3:
    return *param_2 + *(int *)(param_1 + 0x20);
  case 4:
    bVar1 = *(byte *)(param_2 + 3);
    if ((bVar1 == 3) || (bVar1 == 4)) {
      return *param_2 + *(int *)(param_1 + 8);
    }
    if (bVar1 < 3) {
      return *param_2 + *(int *)(param_1 + 0x14);
    }
  }
  return 0;
}

// 010D54B0  FUN_010d54b0  size=9  [run]
void FUN_010d54b0(void)

{
  FUN_010d5430();
  return;
}

// 010D54C0  FUN_010d54c0  size=578  [run]
void __thiscall FUN_010d54c0(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_424 [257];
  int local_20;
  int local_1c;
  short *local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;
  
  local_5 = FUN_010d5320(param_2 + 0x5c);
  FUN_01015ea0(local_424,0,0x404);
  if ((param_4 < *(int *)(param_1 + 0x44)) && (param_3 < *(int *)(param_2 + 0x44))) {
    if (local_5 == '\0') {
      local_1c = 0;
      if (0 < *(int *)(param_1 + 0x60)) {
        local_c = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x5c) + local_c;
          local_20 = local_424[*(ushort *)(iVar5 + 6)];
          iVar2 = 0;
          local_10 = 0;
          if (0 < *(int *)(param_2 + 0x60)) {
            local_14 = *(int *)(param_2 + 0x5c);
            local_18 = (short *)(local_14 + 6);
            do {
              if (*local_18 == *(short *)(iVar5 + 6)) {
                if (local_10 == local_424[*(ushort *)(iVar5 + 6)]) {
                  iVar2 = iVar2 * 0x10 + local_14;
                  if ((iVar2 != 0) && (*(short *)(iVar5 + 4) == *(short *)(iVar2 + 4))) {
                    local_424[*(ushort *)(iVar5 + 6)] = local_424[*(ushort *)(iVar5 + 6)] + 1;
                    local_14 = FUN_010d5430(iVar5);
                    iVar3 = FUN_010d54b0(iVar2);
                    uVar4 = 0;
                    switch(*(undefined2 *)(iVar5 + 4)) {
                    case 1:
                      uVar4 = (uint)*(byte *)(iVar2 + 0xc);
                      break;
                    case 2:
                      uVar4 = (uint)*(byte *)(iVar2 + 0xc) * 2;
                      break;
                    case 3:
                      uVar4 = (uint)*(byte *)(iVar2 + 0xc) * 4;
                      break;
                    case 4:
                      bVar1 = *(byte *)(iVar2 + 0xc);
                      if ((bVar1 == 3) || (bVar1 == 4)) {
                        uVar4 = 0x10;
                      }
                      else if (bVar1 < 3) {
                        uVar4 = (uint)bVar1 * 4;
                      }
                    }
                    FUN_01015e80(*(int *)(iVar5 + 8) * param_4 + local_14,
                                 *(int *)(iVar2 + 8) * param_3 + iVar3,uVar4);
                  }
                  break;
                }
                local_10 = local_10 + 1;
              }
              local_18 = local_18 + 8;
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_2 + 0x60));
          }
          local_c = local_c + 0x10;
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(param_1 + 0x60));
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar2 != 0) {
        FUN_01015e80(iVar2 * param_4 + *(int *)(param_1 + 0x38),
                     iVar2 * param_3 + *(int *)(param_2 + 0x38),iVar2);
      }
      iVar2 = *(int *)(param_1 + 0x54);
      if (iVar2 != 0) {
        FUN_01015e80(iVar2 * param_4 + *(int *)(param_1 + 0x2c),
                     iVar2 * param_3 + *(int *)(param_2 + 0x2c),iVar2);
      }
      iVar2 = *(int *)(param_1 + 0x50);
      if (iVar2 != 0) {
        FUN_01015e80(iVar2 * param_4 + *(int *)(param_1 + 0x20),
                     iVar2 * param_3 + *(int *)(param_2 + 0x20),iVar2);
      }
      iVar2 = *(int *)(param_1 + 0x4c);
      if (iVar2 != 0) {
        FUN_01015e80(iVar2 * param_4 + *(int *)(param_1 + 0x14),
                     iVar2 * param_3 + *(int *)(param_2 + 0x14),iVar2);
      }
      iVar2 = *(int *)(param_1 + 0x48);
      if (iVar2 != 0) {
        FUN_01015e80(iVar2 * param_4 + *(int *)(param_1 + 8),iVar2 * param_3 + *(int *)(param_2 + 8)
                     ,iVar2);
        return;
      }
    }
  }
  return;
}

// 010D5720  FUN_010d5720  size=36  [run]
void __fastcall FUN_010d5720(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

// 010D5750  FUN_010d5750  size=286  [run]
void __thiscall FUN_010d5750(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x50) * param_2;
  *(int *)(param_1 + 0x3c) = param_2;
  uVar1 = *(uint *)(param_1 + 0x38) & 0x3fffffff;
  if ((int)uVar1 < iVar3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x30,iVar2,1);
  }
  *(int *)(param_1 + 0x34) = iVar3;
  uVar4 = (uint)(*(int *)(param_1 + 0x4c) * param_2) >> 1;
  uVar1 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  if (uVar1 < uVar4) {
    uVar1 = uVar1 * 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x24,uVar1,2);
  }
  *(uint *)(param_1 + 0x28) = uVar4;
  uVar4 = (uint)(*(int *)(param_1 + 0x48) * param_2) >> 2;
  uVar1 = *(uint *)(param_1 + 0x20) & 0x3fffffff;
  if (uVar1 < uVar4) {
    uVar1 = uVar1 * 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x18,uVar1,4);
  }
  *(uint *)(param_1 + 0x1c) = uVar4;
  uVar4 = (uint)(*(int *)(param_1 + 0x44) * param_2) >> 2;
  uVar1 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
  if (uVar1 < uVar4) {
    uVar1 = uVar1 * 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0xc,uVar1,4);
  }
  *(uint *)(param_1 + 0x10) = uVar4;
  uVar4 = (uint)(*(int *)(param_1 + 0x40) * param_2) >> 4;
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if (uVar1 < uVar4) {
    uVar1 = uVar1 * 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,uVar1,0x10);
  }
  *(uint *)(param_1 + 4) = uVar4;
  return;
}

// 010D5870  hkxVertexBuffer::hkxVertexBuffer  size=31  [run]
undefined4 * __thiscall hkxVertexBuffer::hkxVertexBuffer(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010d5390(param_2);
  return param_1;
}

// 010D5890  FUN_010d5890  size=687  [run]
void __thiscall FUN_010d5890(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int extraout_EDX;
  int iVar9;
  uint uVar10;
  int iVar11;
  int local_c;
  int local_8;
  
  if ((param_2 != *(int *)(param_1 + 0x44)) || (cVar4 = FUN_010d5320(param_1 + 0x5c), cVar4 == '\0')
     ) {
    piVar1 = (int *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_010d5720();
    iVar9 = extraout_EDX;
    local_c = extraout_EDX;
    local_8 = extraout_EDX;
    if (extraout_EDX < param_3[1]) {
      do {
        iVar11 = *param_3 + local_8;
        if (*(uint *)(param_1 + 0x60) == (*(uint *)(param_1 + 100) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x10);
          iVar9 = 0;
        }
        piVar5 = (int *)(*(int *)(param_1 + 0x60) * 0x10 + *piVar1);
        if (piVar5 != (int *)0x0) {
          *piVar5 = iVar9;
          *(undefined2 *)(piVar5 + 1) = 0;
          *(undefined2 *)((int)piVar5 + 6) = 0;
          piVar5[2] = iVar9;
        }
        iVar3 = *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x60) = iVar3 + 1;
        puVar6 = (undefined4 *)(iVar3 * 0x10 + *piVar1);
        *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(iVar11 + 4);
        *(undefined2 *)((int)puVar6 + 6) = *(undefined2 *)(iVar11 + 6);
        *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(iVar11 + 0xc);
        switch(*(undefined2 *)(iVar11 + 4)) {
        case 1:
          *puVar6 = *(undefined4 *)(param_1 + 0x58);
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (uint)*(byte *)(iVar11 + 0xc);
          break;
        case 2:
          *puVar6 = *(undefined4 *)(param_1 + 0x54);
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uint)*(byte *)(iVar11 + 0xc) * 2;
          break;
        case 3:
          *puVar6 = *(undefined4 *)(param_1 + 0x50);
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (uint)*(byte *)(iVar11 + 0xc) * 4;
          break;
        case 4:
          bVar2 = *(byte *)(iVar11 + 0xc);
          if ((bVar2 == 3) || (bVar2 == 4)) {
            *puVar6 = *(undefined4 *)(param_1 + 0x48);
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x10;
          }
          else if (bVar2 < 3) {
            *puVar6 = *(undefined4 *)(param_1 + 0x4c);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)*(byte *)(iVar11 + 0xc) * 4;
          }
        }
        local_8 = local_8 + 0x10;
        local_c = local_c + 1;
      } while (local_c < param_3[1]);
    }
    local_c = iVar9;
    if (iVar9 < *(int *)(param_1 + 0x60)) {
      do {
        switch(*(undefined2 *)(*piVar1 + 4 + iVar9)) {
        case 1:
          uVar8 = *(undefined4 *)(param_1 + 0x58);
          break;
        case 2:
          uVar8 = *(undefined4 *)(param_1 + 0x54);
          break;
        case 3:
          uVar8 = *(undefined4 *)(param_1 + 0x50);
          break;
        case 4:
          bVar2 = *(byte *)(*param_3 + 0xc + iVar9);
          if ((bVar2 == 3) || (bVar2 == 4)) {
            uVar8 = *(undefined4 *)(param_1 + 0x48);
          }
          else {
            if (2 < bVar2) goto switchD_010d59e6_default;
            uVar8 = *(undefined4 *)(param_1 + 0x4c);
          }
          break;
        default:
          goto switchD_010d59e6_default;
        }
        *(undefined4 *)(*piVar1 + iVar9 + 8) = uVar8;
switchD_010d59e6_default:
        local_c = local_c + 1;
        iVar9 = iVar9 + 0x10;
      } while (local_c < *(int *)(param_1 + 0x60));
    }
    iVar9 = *(int *)(param_1 + 0x58) * param_2;
    *(int *)(param_1 + 0x44) = param_2;
    uVar7 = *(uint *)(param_1 + 0x40) & 0x3fffffff;
    if ((int)uVar7 < iVar9) {
      iVar11 = uVar7 * 2;
      if (iVar11 <= iVar9) {
        iVar11 = iVar9;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x38,iVar11,1);
    }
    *(int *)(param_1 + 0x3c) = iVar9;
    uVar10 = (uint)(*(int *)(param_1 + 0x54) * param_2) >> 1;
    uVar7 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
    if (uVar7 < uVar10) {
      uVar7 = uVar7 * 2;
      if (uVar7 <= uVar10) {
        uVar7 = uVar10;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x2c,uVar7,2);
    }
    *(uint *)(param_1 + 0x30) = uVar10;
    uVar10 = (uint)(*(int *)(param_1 + 0x50) * param_2) >> 2;
    uVar7 = *(uint *)(param_1 + 0x28) & 0x3fffffff;
    if (uVar7 < uVar10) {
      uVar7 = uVar7 * 2;
      if (uVar7 <= uVar10) {
        uVar7 = uVar10;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x20,uVar7,4);
    }
    *(uint *)(param_1 + 0x24) = uVar10;
    uVar10 = (uint)(*(int *)(param_1 + 0x4c) * param_2) >> 2;
    uVar7 = *(uint *)(param_1 + 0x1c) & 0x3fffffff;
    if (uVar7 < uVar10) {
      uVar7 = uVar7 * 2;
      if (uVar7 <= uVar10) {
        uVar7 = uVar10;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x14,uVar7,4);
    }
    *(uint *)(param_1 + 0x18) = uVar10;
    uVar10 = (uint)(*(int *)(param_1 + 0x48) * param_2) >> 4;
    uVar7 = *(uint *)(param_1 + 0x10) & 0x3fffffff;
    if (uVar7 < uVar10) {
      uVar7 = uVar7 * 2;
      if (uVar7 <= uVar10) {
        uVar7 = uVar10;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 8,uVar7,0x10);
    }
    *(uint *)(param_1 + 0xc) = uVar10;
  }
  return;
}

// 010D5B60  FUN_010d5b60  size=247  [run]
void __thiscall FUN_010d5b60(int param_1,int param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_010d5320(param_2 + 0x5c);
  if (param_3 != '\0') {
    FUN_010d5890(*(undefined4 *)(param_2 + 0x44),param_1 + 0x5c);
  }
  if (cVar1 == '\0') {
    uVar2 = 0;
    if (*(int *)(param_2 + 0x44) != 0) {
      do {
        FUN_010d54c0(param_2,uVar2,uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_2 + 0x44));
    }
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x44);
    if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_2 + 0x44)) {
      uVar2 = *(uint *)(param_1 + 0x44);
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_01015e80(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x38),
                   *(int *)(param_1 + 0x58) * uVar2);
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_01015e80(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_2 + 0x2c),
                   *(int *)(param_1 + 0x54) * uVar2);
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_01015e80(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x20),
                   *(int *)(param_1 + 0x50) * uVar2);
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_01015e80(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14),
                   *(int *)(param_1 + 0x4c) * uVar2);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_01015e80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8),
                   *(int *)(param_1 + 0x48) * uVar2);
      return;
    }
  }
  return;
}

// 010D5C80  FUN_010d5c80  size=76  [run]
int __thiscall FUN_010d5c80(int *param_1,short param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < param_1[1]) {
    psVar2 = (short *)(*param_1 + 6);
    do {
      if (*psVar2 == param_2) {
        if (iVar3 == param_3) {
          return iVar1 * 0x10 + *param_1;
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (iVar1 < param_1[1]);
  }
  return 0;
}

// 010D5CD0  FUN_010d5cd0  size=66  [run]
int __thiscall FUN_010d5cd0(int *param_1,short param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < param_1[1]) {
    psVar2 = (short *)(*param_1 + 6);
    do {
      if (*psVar2 == param_2) {
        if (iVar3 == param_3) {
          return iVar1 * 0x10 + *param_1;
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (iVar1 < param_1[1]);
  }
  return 0;
}

// 010D5D20  FUN_010d5d20  size=50  [run]
void FUN_010d5d20(int param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined2 *)(param_1 + 6);
    do {
      if (puVar1 != (undefined2 *)0x6) {
        *(undefined4 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
      }
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010D5D60  FUN_010d5d60  size=77  [run]
int __thiscall FUN_010d5d60(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 010D5DB0  FUN_010d5db0  size=55  [run]
void __thiscall FUN_010d5db0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 010D5DF0  FUN_010d5df0  size=72  [run]
int __fastcall FUN_010d5df0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  puVar2 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 010D5E40  FUN_010d5e40  size=56  [run]
void __thiscall FUN_010d5e40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 010D5E80  FUN_010d5e80  size=38  [run]
void FUN_010d5e80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D5EB0  hkBaseObject::hkBaseObject_134  size=76  [run]
void __fastcall hkBaseObject::hkBaseObject_134(undefined4 *param_1)

{
  param_1[0x18] = 0;
  if (-1 < (int)param_1[0x19]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x17],param_1[0x19] << 4);
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0x80000000;
  FUN_010d0430();
  *param_1 = vftable;
  return;
}

// 010D5F00  hkxVertexBuffer::vf00  size=119  [run]
undefined4 * __thiscall hkxVertexBuffer::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[0x18] = 0;
  if (-1 < (int)param_1[0x19]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x17],param_1[0x19] << 4);
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0x80000000;
  FUN_010d0430();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D5FA0  FUN_010d5fa0  size=20  [run]
void __thiscall FUN_010d5fa0(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 010D5FE0  FUN_010d5fe0  size=15  [run]
int __thiscall FUN_010d5fe0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010D6010  FUN_010d6010  size=46  [run]
void __thiscall FUN_010d6010(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = *param_2;
    if (iVar1 != 0) {
      FUN_01006000();
    }
    if (*param_1 != 0) {
      FUN_010060a0();
    }
    *param_1 = iVar1;
  }
  return;
}

// 010D6040  FUN_010d6040  size=54  [run]
void FUN_010d6040(undefined1 *param_1,int param_2,int param_3)

{
  if ((*(int *)(param_3 + 4) <= *(int *)(param_2 + 4)) &&
     ((*(int *)(param_2 + 4) != *(int *)(param_3 + 4) ||
      (*(int *)(param_3 + 8) <= *(int *)(param_2 + 8))))) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}

// 010D6080  FUN_010d6080  size=48  [run]
int __thiscall FUN_010d6080(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x84) + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x80) + iVar1 * 8);
    do {
      if (*piVar2 == param_2) {
        return piVar2[1];
      }
      piVar2 = piVar2 + -2;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return -1;
}

// 010D60B0  FUN_010d60b0  size=54  [run]
void __thiscall FUN_010d60b0(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x84) + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x80) + iVar1 * 8);
    do {
      if (*piVar2 == param_3) {
        *param_2 = 1;
        return;
      }
      piVar2 = piVar2 + -2;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  *param_2 = 0;
  return;
}

// 010D60F0  FUN_010d60f0  size=28  [run]
void __fastcall FUN_010d60f0(int param_1)

{
  FUN_010d64e0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_1);
  return;
}

// 010D6110  FUN_010d6110  size=98  [run]
void __thiscall FUN_010d6110(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = param_2;
  pcVar5 = (char *)FUN_010d60b0((int)&param_2 + 3,param_2);
  if (*pcVar5 == '\0') {
    iVar3 = *(int *)(param_1 + 0x84);
    iVar1 = iVar3 + 1;
    uVar6 = *(uint *)(param_1 + 0x88) & 0x3fffffff;
    if ((int)uVar6 < iVar1) {
      iVar7 = uVar6 * 2;
      if (iVar7 <= iVar1) {
        iVar7 = iVar1;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x80),iVar7,8);
    }
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x80) + iVar3 * 8);
    *puVar2 = uVar4;
    puVar2[1] = param_3;
  }
  return;
}

// 010D6180  hkxMaterial::~hkxMaterial  size=302  [run]
void __fastcall hkxMaterial::~hkxMaterial(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = vftable;
  param_1[0x21] = 0;
  if (-1 < (int)param_1[0x22]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x20],param_1[0x22] * 8);
  }
  param_1[0x20] = 0;
  param_1[0x22] = 0x80000000;
  if (param_1[0x1f] != 0) {
    FUN_010060a0();
  }
  param_1[0x1f] = 0;
  iVar2 = param_1[0x1d] + -1;
  iVar3 = param_1[0x1c];
  while (-1 < iVar2) {
    if (*(int *)(iVar3 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar3 + 4 + iVar2 * 4) = 0;
  }
  param_1[0x1d] = 0;
  if (-1 < (int)param_1[0x1e]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x1c],param_1[0x1e] * 4);
  }
  param_1[0x1c] = 0;
  param_1[0x1e] = 0x80000000;
  iVar3 = param_1[7] + -1;
  if (-1 < iVar3) {
    piVar1 = (int *)(param_1[6] + iVar3 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      piVar1 = piVar1 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  param_1[7] = 0;
  if (-1 < (int)param_1[8]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],(param_1[8] & 0x3fffffff) * 0xc);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  FUN_01006770();
  hkxAttributeHolder::~hkxAttributeHolder();
  return;
}

// 010D62B0  FUN_010d62b0  size=45  [run]
int * __thiscall FUN_010d62b0(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}

// 010D62E0  FUN_010d62e0  size=62  [run]
int * __thiscall FUN_010d62e0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = *param_2;
    if (iVar1 != 0) {
      FUN_01006000();
    }
    if (*param_1 != 0) {
      FUN_010060a0();
    }
    *param_1 = iVar1;
  }
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return param_1;
}

// 010D6320  FUN_010d6320  size=52  [run]
undefined4 __thiscall FUN_010d6320(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 010D6360  FUN_010d6360  size=289  [run]
void FUN_010d6360(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = (int *)(param_1 + -0xc + param_2 * 0xc);
  if (*piVar2 != 0) {
    FUN_01006000();
  }
  local_c = piVar2[2];
  local_10 = piVar2[1];
  local_14 = *piVar2;
  iVar5 = param_3 / 2;
  local_8 = iVar5;
  if (param_2 <= iVar5) {
    do {
      iVar6 = param_2 * 2;
      if (iVar6 < param_3) {
        iVar4 = *(int *)(param_1 + -8 + param_2 * 0x18);
        iVar1 = param_1 + param_2 * 0x18;
        if ((iVar4 < *(int *)(iVar1 + 4)) ||
           ((iVar4 == *(int *)(iVar1 + 4) && (*(int *)(iVar1 + -4) < *(int *)(iVar1 + 8))))) {
          iVar6 = iVar6 + 1;
        }
      }
      piVar2 = (int *)(param_1 + -0xc + iVar6 * 0xc);
      if ((piVar2[1] <= local_10) && ((local_10 != piVar2[1] || (piVar2[2] <= local_c)))) break;
      piVar3 = (int *)(param_1 + -0xc + param_2 * 0xc);
      if (piVar3 != piVar2) {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          FUN_01006000();
          iVar5 = local_8;
        }
        if (*piVar3 != 0) {
          FUN_010060a0();
          iVar5 = local_8;
        }
        *piVar3 = iVar1;
      }
      piVar3[1] = piVar2[1];
      piVar3[2] = piVar2[2];
      param_2 = iVar6;
    } while (iVar6 <= iVar5);
  }
  iVar5 = local_14;
  piVar2 = (int *)(param_1 + -0xc + param_2 * 0xc);
  if (piVar2 != &local_14) {
    if (local_14 != 0) {
      FUN_01006000();
    }
    if (*piVar2 != 0) {
      FUN_010060a0();
    }
    *piVar2 = iVar5;
  }
  piVar2[1] = local_10;
  piVar2[2] = local_c;
  if (iVar5 != 0) {
    FUN_010060a0();
  }
  return;
}

// 010D6490  FUN_010d6490  size=68  [run]
int __thiscall FUN_010d6490(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,8);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2 * 8;
}

// 010D64E0  FUN_010d64e0  size=253  [run]
void FUN_010d64e0(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = param_2;
  for (iVar2 = param_2 / 2; 0 < iVar2; iVar2 = iVar2 + -1) {
    FUN_010d6360(param_1,iVar2,param_2,param_3);
  }
  if (0 < param_2) {
    param_2 = param_2 * 0xc;
    do {
      if (*param_1 != 0) {
        FUN_01006000();
      }
      local_14 = param_1[1];
      local_10 = param_1[2];
      iVar2 = *param_1;
      piVar1 = (int *)(param_2 + -0xc + (int)param_1);
      if (param_1 != piVar1) {
        local_8 = *piVar1;
        if (local_8 != 0) {
          FUN_01006000();
        }
        if (*param_1 != 0) {
          FUN_010060a0();
        }
        *param_1 = local_8;
      }
      param_1[1] = piVar1[1];
      param_1[2] = piVar1[2];
      if (piVar1 != &local_18) {
        if (iVar2 != 0) {
          FUN_01006000();
        }
        if (*piVar1 != 0) {
          FUN_010060a0();
        }
        *piVar1 = iVar2;
      }
      param_2 = param_2 + -0xc;
      piVar1[1] = local_14;
      piVar1[2] = local_10;
      iVar3 = local_c + -1;
      local_c = iVar3;
      FUN_010d6360(param_1,1,iVar3,param_3);
      if (iVar2 != 0) {
        FUN_010060a0();
      }
    } while (0 < iVar3);
  }
  return;
}

// 010D65F0  FUN_010d65f0  size=69  [run]
int __thiscall FUN_010d65f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,8);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 8;
}

// 010D6640  FUN_010d6640  size=20  [run]
undefined4 __fastcall FUN_010d6640(undefined4 param_1)

{
  FUN_010065a0();
  FUN_010065a0();
  return param_1;
}

// 010D6660  FUN_010d6660  size=32  [run]
undefined1 __fastcall FUN_010d6660(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (((cVar1 < '!') || (cVar1 == '=')) || (cVar1 == ';')) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return 1;
}

// 010D6680  FUN_010d6680  size=66  [run]
int __thiscall FUN_010d6680(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = FUN_01015be0(*(uint *)(*(int *)(param_1 + 8) + iVar2 * 8) & 0xfffffffe,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return -1;
}

// 010D66E0  FUN_010d66e0  size=19  [run]
uint __thiscall FUN_010d66e0(int param_1,int param_2)

{
  return *(uint *)(*(int *)(param_1 + 8) + param_2 * 8) & 0xfffffffe;
}

// 010D6700  FUN_010d6700  size=20  [run]
uint __thiscall FUN_010d6700(int param_1,int param_2)

{
  return *(uint *)(*(int *)(param_1 + 8) + 4 + param_2 * 8) & 0xfffffffe;
}

// 010D6720  FUN_010d6720  size=151  [run]
void __thiscall FUN_010d6720(int param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 extraout_EDX;
  int iVar4;
  undefined1 *puVar5;
  
  FUN_010262a0();
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + 4 + iVar4 * 8);
      cVar2 = FUN_010d6660();
      puVar5 = &DAT_016cc5a8;
      if (cVar2 == '\0') {
        puVar5 = &DAT_016416fa;
      }
      cVar2 = FUN_010d6660();
      puVar3 = &DAT_016cc5a8;
      if (cVar2 == '\0') {
        puVar3 = &DAT_016416fa;
      }
      FUN_01026e40(param_2,"%s%s%s=%s%s%s",puVar5,extraout_EDX,puVar5,puVar3,uVar1 & 0xfffffffe,
                   puVar3);
      if (iVar4 < *(int *)(param_1 + 0xc) + -1) {
        FUN_010267c0(&DAT_017d7684);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  return;
}

// 010D67C0  FUN_010d67c0  size=42  [run]
uint __thiscall FUN_010d67c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_010d6680(param_2);
  if (iVar1 != -1) {
    return *(uint *)(*(int *)(param_1 + 8) + 4 + iVar1 * 8) & 0xfffffffe;
  }
  return 0;
}

// 010D67F0  FUN_010d67f0  size=298  [run]
undefined4 __thiscall FUN_010d67f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  iVar1 = FUN_010d6680(param_2);
  if (param_3 == 0) {
    if (iVar1 == -1) {
      return 1;
    }
    FUN_01006770();
    FUN_01006770();
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 != iVar1) {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 8);
      iVar1 = (*(int *)(param_1 + 8) + iVar2 * 8) - (int)puVar3;
      iVar2 = 2;
      do {
        *puVar3 = *(undefined4 *)(iVar1 + (int)puVar3);
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return 0;
    }
  }
  else {
    if (iVar1 != -1) {
      FUN_01006780(param_3);
      return 0;
    }
    FUN_010065a0();
    FUN_010065a0();
    FUN_01006780(param_2);
    FUN_01006780(param_3);
    if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),8);
    }
    if (*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 8 != 0) {
      FUN_01006740(local_c);
      FUN_01006740(local_8);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    FUN_01006770();
    FUN_01006770();
  }
  return 0;
}

// 010D6920  FUN_010d6920  size=49  [run]
undefined4 __fastcall FUN_010d6920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    uVar2 = FUN_01006770();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar2;
}

// 010D6960  FUN_010d6960  size=891  [run]
undefined4 FUN_010d6960(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 local_338 [512];
  undefined1 *local_138;
  undefined4 local_134;
  uint local_130;
  undefined1 local_12c [128];
  undefined1 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_a0 [140];
  int local_14;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_8;
  undefined1 local_7;
  
  local_138 = local_12c;
  local_130 = 0x80000080;
  local_a4 = 0x80000080;
  local_ac = local_a0;
  iVar8 = 0;
  local_134 = 1;
  local_12c[0] = 0;
  local_a8 = 1;
  local_a0[0] = 0;
  local_14 = FUN_01015cd0(param_1);
  iVar6 = 0;
  do {
    iVar5 = 4;
    if (iVar8 < local_14) {
      cVar1 = *(char *)(iVar8 + param_1);
      if (cVar1 < '!') {
        iVar5 = 0;
      }
      if (cVar1 == '\"') {
        iVar5 = 1;
      }
      else if (cVar1 == '=') {
        iVar5 = 2;
      }
      else if (cVar1 == ';') {
        iVar5 = 3;
      }
    }
    else {
      iVar5 = 5;
    }
    iVar4 = 6;
    iVar7 = 9;
    piVar2 = &DAT_017d7724;
    do {
      if ((piVar2[-1] == iVar6) && (*piVar2 == iVar5)) {
        iVar7 = piVar2[1];
        iVar4 = piVar2[2];
      }
      if ((piVar2[3] == iVar6) && (piVar2[4] == iVar5)) {
        iVar7 = piVar2[5];
        iVar4 = piVar2[6];
      }
      if ((piVar2[7] == iVar6) && (piVar2[8] == iVar5)) {
        iVar7 = piVar2[9];
        iVar4 = piVar2[10];
      }
      if ((piVar2[0xb] == iVar6) && (piVar2[0xc] == iVar5)) {
        iVar7 = piVar2[0xd];
        iVar4 = piVar2[0xe];
      }
      piVar2 = piVar2 + 0x10;
    } while ((int)piVar2 < 0x17d7924);
    switch(iVar4) {
    case 0:
      break;
    case 1:
      local_c = *(undefined1 *)(iVar8 + param_1);
      local_b = 0;
      FUN_010267c0(&local_c);
      break;
    case 2:
      local_8 = *(undefined1 *)(iVar8 + param_1);
      local_7 = 0;
      FUN_010267c0(&local_8);
      break;
    case 3:
      puVar9 = local_ac;
      goto LAB_010d6ace;
    case 4:
      puVar9 = (undefined1 *)0x0;
LAB_010d6ace:
      FUN_010d67f0(local_138,puVar9);
      uVar3 = FUN_01026140(&DAT_016416fa);
      FUN_01026740(uVar3);
      break;
    case 5:
      goto switchD_010d6a72_caseD_5;
    case 6:
      hkErrStream::hkErrStream(local_338,0x200);
      puVar10 = &DAT_017015cc;
      FUN_01018d00("Error parsing environment string: \'");
      FUN_01018d00(param_1);
      FUN_01018d00(puVar10);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xabba7881,local_338,"Environment\\hkxEnvironment.cpp",0x134);
      hkBaseObject::hkBaseObject_38();
      goto joined_r0x010d6c77;
    default:
      hkErrStream::hkErrStream(local_338,0x200);
      puVar10 = &DAT_017015cc;
      FUN_01018d00("Internal Error: Unknown action parsing environment string: \'");
      FUN_01018d00(param_1);
      FUN_01018d00(puVar10);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (1,0xabba0032,local_338,"Environment\\hkxEnvironment.cpp",0x140);
      hkBaseObject::hkBaseObject_38();
joined_r0x010d6c77:
      local_a8 = 0;
      if (-1 < (int)local_a4) {
        local_a8 = 0;
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_ac,local_a4 & 0x3fffffff);
      }
      local_134 = 0;
      local_a4 = 0x80000000;
      local_ac = (undefined1 *)0x0;
      if (-1 < (int)local_130) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_138,local_130 & 0x3fffffff);
      }
      return 1;
    }
    iVar8 = iVar8 + 1;
switchD_010d6a72_caseD_5:
    iVar6 = iVar7;
    if (iVar7 == 8) {
      local_a8 = 0;
      if (-1 < (int)local_a4) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_ac,local_a4 & 0x3fffffff);
      }
      local_ac = (undefined1 *)0x0;
      local_a4 = 0x80000000;
      local_134 = 0;
      if (-1 < (int)local_130) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_138,local_130 & 0x3fffffff);
      }
      return 0;
    }
  } while( true );
}

// 010D6D30  hkxEnvironment::~hkxEnvironment  size=11  [run]
void __fastcall hkxEnvironment::~hkxEnvironment(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 010D6D80  FUN_010d6d80  size=15  [run]
int __thiscall FUN_010d6d80(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010D6D90  FUN_010d6d90  size=15  [run]
int __thiscall FUN_010d6d90(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010D6DC0  FUN_010d6dc0  size=36  [run]
undefined4 __thiscall FUN_010d6dc0(undefined4 param_1,int param_2)

{
  FUN_01006740(param_2);
  FUN_01006740(param_2 + 4);
  return param_1;
}

// 010D6DF0  FUN_010d6df0  size=28  [run]
void __thiscall FUN_010d6df0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010D6E10  FUN_010d6e10  size=11  [run]
int FUN_010d6e10(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010D6E50  FUN_010d6e50  size=54  [run]
void FUN_010d6e50(int param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_01006740(param_3);
        FUN_01006740(param_3 + 4);
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010D6E90  FUN_010d6e90  size=81  [run]
void __thiscall FUN_010d6e90(int *param_1,undefined4 param_2,int param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  if (*param_1 + param_1[1] * 8 != 0) {
    FUN_01006740(param_3);
    FUN_01006740(param_3 + 4);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010D6EF0  FUN_010d6ef0  size=82  [run]
void __thiscall FUN_010d6ef0(int *param_1,int param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  if (*param_1 + param_1[1] * 8 != 0) {
    FUN_01006740(param_2);
    FUN_01006740(param_2 + 4);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010D6F50  FUN_010d6f50  size=42  [run]
void FUN_010d6f50(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
    FUN_01006770();
  }
  return;
}

// 010D6F80  FUN_010d6f80  size=48  [run]
undefined4 __fastcall FUN_010d6f80(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    uVar2 = FUN_01006770();
  }
  param_1[1] = 0;
  return uVar2;
}

// 010D6FB0  FUN_010d6fb0  size=82  [run]
void __thiscall FUN_010d6fb0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_01006770();
  FUN_01006770();
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 8);
    iVar2 = (*param_1 + param_1[1] * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 010D7010  FUN_010d7010  size=100  [run]
void __thiscall FUN_010d7010(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D7080  FUN_010d7080  size=100  [run]
void __fastcall FUN_010d7080(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D70F0  FUN_010d70f0  size=100  [run]
void __fastcall FUN_010d70f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010D7160  FUN_010d7160  size=38  [run]
void FUN_010d7160(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D7190  hkBaseObject::hkBaseObject_124  size=102  [run]
void __fastcall hkBaseObject::hkBaseObject_124(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 8);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D7200  hkxEnvironment::vf00  size=52  [run]
int __thiscall hkxEnvironment::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_124();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D7270  FUN_010d7270  size=15  [run]
int __thiscall FUN_010d7270(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010D7280  FUN_010d7280  size=15  [run]
int __thiscall FUN_010d7280(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010D72F0  FUN_010d72f0  size=52  [run]
int __thiscall FUN_010d72f0(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 4);
    do {
      if (*piVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 010D7360  FUN_010d7360  size=34  [run]
void FUN_010d7360(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 010D73A0  FUN_010d73a0  size=26  [run]
void __thiscall FUN_010d73a0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010D73D0  FUN_010d73d0  size=26  [run]
void __thiscall FUN_010d73d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010D73F0  FUN_010d73f0  size=22  [run]
void __fastcall FUN_010d73f0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010D7410  FUN_010d7410  size=22  [run]
void __fastcall FUN_010d7410(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010D7470  FUN_010d7470  size=57  [run]
void __thiscall FUN_010d7470(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010D74B0  FUN_010d74b0  size=164  [run]
void __thiscall
FUN_010d74b0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  FUN_01019bd0((param_3 + param_6) * 0x10 + *param_1,(param_4 + param_3) * 0x10 + *param_1,
               ((iVar1 - param_3) - param_4) * 0x10);
  puVar3 = (undefined8 *)(param_3 * 0x10 + *param_1);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      *puVar3 = *(undefined8 *)(param_5 + (int)puVar3);
      puVar3[1] = *(undefined8 *)(param_5 + 8 + (int)puVar3);
      puVar3 = puVar3 + 2;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

// 010D7560  FUN_010d7560  size=39  [run]
void FUN_010d7560(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010D7590  FUN_010d7590  size=39  [run]
void FUN_010d7590(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010D75C0  FUN_010d75c0  size=43  [run]
void __thiscall FUN_010d75c0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_010d87d0(param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  return;
}

// 010D75F0  FUN_010d75f0  size=179  [run]
void __thiscall FUN_010d75f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x18))) {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar1 = param_2 * 4;
    if (*(int *)(iVar2 + iVar1) != 0) {
      FUN_010060a0();
    }
    *(undefined4 *)(iVar2 + iVar1) = 0;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    if (*(int *)(param_1 + 0x18) != param_2) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1) =
           *(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 4);
    }
    iVar1 = *(int *)(param_1 + 0xc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + iVar1 * 4);
      iVar3 = *(int *)(iVar2 + 0x1c);
      if (*(int *)(iVar3 + param_2 * 4) != 0) {
        FUN_010060a0();
      }
      *(undefined4 *)(iVar3 + param_2 * 4) = 0;
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + -1;
      if (*(int *)(iVar2 + 0x20) != param_2) {
        *(undefined4 *)(*(int *)(iVar2 + 0x1c) + param_2 * 4) =
             *(undefined4 *)(*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x20) * 4);
      }
    }
  }
  return;
}

// 010D76B0  FUN_010d76b0  size=397  [run]
void __thiscall FUN_010d76b0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_c = 0xffffffff;
  local_8 = 0;
  local_10 = param_1;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(param_2 + 4);
      uVar2 = local_c;
      if (param_3 != (int *)0x0) {
        iVar4 = *(int *)(*(int *)(*(int *)(local_10 + 8) + local_8 * 4) + 0x18);
        local_c = param_3[1];
        uVar2 = 0;
        if (0 < (int)local_c) {
          piVar5 = (int *)*param_3;
          do {
            if (*piVar5 == iVar4) {
              if (uVar2 != 0xffffffff) goto LAB_010d7743;
              break;
            }
            uVar2 = uVar2 + 1;
            piVar5 = piVar5 + 1;
          } while ((int)uVar2 < (int)local_c);
        }
        if (local_c == (param_3[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
        }
        *(int *)(*param_3 + param_3[1] * 4) = iVar4;
        param_3[1] = param_3[1] + 1;
        uVar2 = local_c;
      }
LAB_010d7743:
      local_c = uVar2;
      local_28 = 0;
      local_24 = 0;
      local_1c = 0;
      local_18 = 0;
      local_20 = 0x80000000;
      local_14 = 0x80000000;
      FUN_010d88b0(&local_28,local_c);
      iVar4 = 0;
      if (0 < local_18) {
        iVar3 = 0;
        do {
          *(int *)(iVar3 + local_1c) = *(int *)(iVar3 + local_1c) + iVar1;
          piVar5 = (int *)(iVar3 + 4 + local_1c);
          *piVar5 = *piVar5 + iVar1;
          piVar5 = (int *)(iVar3 + 8 + local_1c);
          *piVar5 = *piVar5 + iVar1;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < local_18);
      }
      FUN_010d7ae0(&PTR_vftable_018e9b94,iVar1,local_28,local_24);
      FUN_010d7960(&PTR_vftable_018e9b94,*(undefined4 *)(param_2 + 0x10),local_1c,local_18);
      local_18 = 0;
      if ((local_14 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
      }
      local_1c = 0;
      local_14 = 0x80000000;
      local_24 = 0;
      if ((local_20 & 0x80000000) == 0) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 << 4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(local_10 + 0xc));
  }
  return;
}

// 010D7840  hkxMesh::~hkxMesh  size=11  [run]
void __fastcall hkxMesh::~hkxMesh(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 010D7850  hkBaseObject::hkBaseObject_120  size=203  [run]
void __fastcall hkBaseObject::hkBaseObject_120(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = hkxMesh::vftable;
  iVar2 = param_1[6] + -1;
  iVar1 = param_1[5];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  iVar2 = param_1[3] + -1;
  iVar1 = param_1[2];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D7920  FUN_010d7920  size=58  [run]
void __thiscall FUN_010d7920(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010D7960  FUN_010d7960  size=30  [run]
void FUN_010d7960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_010d74b0(param_1,param_2,0,param_3,param_4);
  return;
}

// 010D7980  FUN_010d7980  size=182  [run]
void __thiscall
FUN_010d7980(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar2 = param_1[1];
  iVar8 = (iVar2 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar8) {
    iVar6 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar8) {
      iVar6 = iVar8;
    }
    FUN_0100a210(param_2,param_1,iVar6,0x10);
  }
  FUN_01019bd0((param_3 + param_6) * 0x10 + *param_1,(param_3 + param_4) * 0x10 + *param_1,
               ((iVar2 - param_3) - param_4) * 0x10);
  puVar7 = (undefined4 *)(param_3 * 0x10 + *param_1);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar7;
    do {
      puVar1 = (undefined4 *)(param_5 + (int)puVar7);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar3;
      puVar7[2] = uVar4;
      puVar7[3] = uVar5;
      puVar7 = puVar7 + 4;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
    param_1[1] = iVar8;
    return;
  }
  param_1[1] = iVar8;
  return;
}

// 010D7A40  FUN_010d7a40  size=61  [run]
int * __thiscall FUN_010d7a40(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010D7A80  FUN_010d7a80  size=61  [run]
int * __thiscall FUN_010d7a80(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010D7AC0  FUN_010d7ac0  size=29  [run]
void FUN_010d7ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010d7960(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 010D7AE0  FUN_010d7ae0  size=30  [run]
void FUN_010d7ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_010d7980(param_1,param_2,0,param_3,param_4);
  return;
}

// 010D7B00  FUN_010d7b00  size=62  [run]
void __thiscall FUN_010d7b00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_2 * 4;
  if (*(int *)(iVar1 + iVar2) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(iVar1 + iVar2) = 0;
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + iVar2) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 010D7B40  FUN_010d7b40  size=43  [run]
void FUN_010d7b40(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010D7BB0  FUN_010d7bb0  size=43  [run]
void FUN_010d7bb0(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010D7BE0  FUN_010d7be0  size=29  [run]
void FUN_010d7be0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010d7ae0(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 010D7C00  FUN_010d7c00  size=62  [run]
void __thiscall FUN_010d7c00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_2 * 4;
  if (*(int *)(iVar1 + iVar2) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(iVar1 + iVar2) = 0;
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + iVar2) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 010D7C40  FUN_010d7c40  size=97  [run]
void __thiscall FUN_010d7c40(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D7CF0  FUN_010d7cf0  size=100  [run]
void __fastcall FUN_010d7cf0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D7D60  FUN_010d7d60  size=97  [run]
void __thiscall FUN_010d7d60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D7DD0  FUN_010d7dd0  size=100  [run]
void __fastcall FUN_010d7dd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D7E40  FUN_010d7e40  size=100  [run]
void __fastcall FUN_010d7e40(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D7EB0  FUN_010d7eb0  size=100  [run]
void __fastcall FUN_010d7eb0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D7F20  FUN_010d7f20  size=38  [run]
void FUN_010d7f20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D7F50  hkxMesh::vf00  size=52  [run]
int __thiscall hkxMesh::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_120();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D7FE0  FUN_010d7fe0  size=26  [run]
void __thiscall FUN_010d7fe0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010D8000  FUN_010d8000  size=22  [run]
void __fastcall FUN_010d8000(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 010D8050  FUN_010d8050  size=39  [run]
void FUN_010d8050(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 010D8080  FUN_010d8080  size=61  [run]
int * __thiscall FUN_010d8080(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 010D80C0  FUN_010d80c0  size=43  [run]
void FUN_010d80c0(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 010D8130  FUN_010d8130  size=97  [run]
void __thiscall FUN_010d8130(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D81A0  FUN_010d81a0  size=100  [run]
void __fastcall FUN_010d81a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D8210  FUN_010d8210  size=100  [run]
void __fastcall FUN_010d8210(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D82B0  hkxMaterialShaderSet::~hkxMaterialShaderSet  size=11  [run]
void __fastcall hkxMaterialShaderSet::~hkxMaterialShaderSet(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 010D82C0  FUN_010d82c0  size=38  [run]
void FUN_010d82c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D82F0  hkBaseObject::hkBaseObject_41  size=107  [run]
void __fastcall hkBaseObject::hkBaseObject_41(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[3] + -1;
  iVar1 = param_1[2];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 010D8360  hkxMaterialShaderSet::vf00  size=52  [run]
int __thiscall hkxMaterialShaderSet::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_41();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010D83B0  FUN_010d83b0  size=12  [run]
void FUN_010d83b0(void)

{
  FUN_01006780();
  return;
}

// 010D83C0  hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions  size=30  [run]
undefined4 * __fastcall hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_010065a0();
  return param_1;
}

// 010D83E0  hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions  size=31  [run]
undefined4 * __thiscall
hkAlignSceneToNodeOptions::hkAlignSceneToNodeOptions(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 010D8400  hkBaseObject::~hkBaseObject  size=19  [run]
void __fastcall hkBaseObject::~hkBaseObject(undefined4 *param_1)

{
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 010D8420  FUN_010d8420  size=38  [run]
void FUN_010d8420(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D8450  hkAlignSceneToNodeOptions::vf00  size=61  [run]
undefined4 * __thiscall hkAlignSceneToNodeOptions::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D84D0  FUN_010d84d0  size=52  [run]
void __thiscall FUN_010d84d0(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
    *param_1 = *param_2;
    return;
  }
  *param_1 = *param_2;
  return;
}

// 010D8530  FUN_010d8530  size=15  [run]
int __thiscall FUN_010d8530(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010D8540  FUN_010d8540  size=15  [run]
int __thiscall FUN_010d8540(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010D8570  FUN_010d8570  size=52  [run]
void __thiscall FUN_010d8570(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
    *param_1 = *param_2;
    return;
  }
  *param_1 = *param_2;
  return;
}

// 010D85D0  FUN_010d85d0  size=15  [run]
int __thiscall FUN_010d85d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010D8610  FUN_010d8610  size=11  [run]
int FUN_010d8610(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010D8620  FUN_010d8620  size=33  [run]
int * __thiscall FUN_010d8620(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  return param_1;
}

// 010D8650  FUN_010d8650  size=11  [run]
int FUN_010d8650(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010D86C0  FUN_010d86c0  size=51  [run]
void FUN_010d86c0(int *param_1,int param_2,int *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (int *)0x0) {
        if (*param_3 != 0) {
          FUN_01006000();
        }
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010D8700  FUN_010d8700  size=51  [run]
void FUN_010d8700(int *param_1,int param_2,int *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (int *)0x0) {
        if (*param_3 != 0) {
          FUN_01006000();
        }
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010D8740  FUN_010d8740  size=41  [run]
int __fastcall FUN_010d8740(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = FUN_010d8d40();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return iVar2;
}

// 010D8770  FUN_010d8770  size=93  [run]
void __thiscall
FUN_010d8770(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    while( true ) {
      iVar1 = FUN_010d8d40();
      if (param_2 < iVar1 + local_8) break;
      iVar2 = iVar2 + 1;
      local_8 = iVar1 + local_8;
      if (*(int *)(param_1 + 0x10) <= iVar2) {
        return;
      }
    }
    FUN_010d8d70(param_2 - local_8,param_3,param_4,param_5);
  }
  return;
}

// 010D87D0  FUN_010d87d0  size=212  [run]
void __thiscall FUN_010d87d0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  
  iVar10 = *(int *)(param_1 + 8);
  if (iVar10 != 0) {
    iVar12 = 0;
    iVar6 = 0;
    if (0 < *(int *)(iVar10 + 0x60)) {
      psVar11 = (short *)(*(int *)(iVar10 + 0x5c) + 6);
      do {
        if (*psVar11 == 1) {
          if (iVar12 == 0) {
            iVar6 = iVar6 * 0x10 + *(int *)(iVar10 + 0x5c);
            goto LAB_010d880d;
          }
          iVar12 = iVar12 + 1;
        }
        iVar6 = iVar6 + 1;
        psVar11 = psVar11 + 8;
      } while (iVar6 < *(int *)(iVar10 + 0x60));
    }
    iVar6 = 0;
LAB_010d880d:
    iVar10 = *(int *)(iVar10 + 0x44);
    if ((iVar6 != 0) && (0 < iVar10)) {
      puVar7 = (undefined4 *)FUN_010d5430(iVar6);
      iVar12 = *(int *)(iVar6 + 8);
      iVar9 = param_2[1];
      iVar6 = iVar9 + iVar10;
      if ((int)(param_2[2] & 0x3fffffffU) < iVar6) {
        iVar8 = (param_2[2] & 0x3fffffffU) * 2;
        if (iVar8 <= iVar6) {
          iVar8 = iVar6;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar8,0x10);
      }
      param_2[1] = iVar6;
      if (0 < iVar10) {
        iVar9 = iVar9 << 4;
        do {
          uVar2 = *puVar7;
          uVar3 = puVar7[1];
          uVar4 = puVar7[2];
          uVar5 = puVar7[3];
          puVar7 = (undefined4 *)((int)puVar7 + iVar12);
          puVar1 = (undefined4 *)(*param_2 + iVar9);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          iVar9 = iVar9 + 0x10;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
  }
  return;
}

// 010D88B0  FUN_010d88b0  size=470  [run]
void __thiscall FUN_010d88b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined1 local_230 [524];
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint uStack_14;
  uint local_10;
  undefined4 uStack_c;
  char local_5;
  
  local_20 = param_1;
  FUN_010d87d0(param_2);
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + local_1c * 4);
      uVar6 = *(uint *)(iVar2 + 0x1c) | *(uint *)(iVar2 + 0x10);
      cVar7 = 0 < (int)*(uint *)(iVar2 + 0x10);
      iVar8 = 0;
      local_24 = uVar6;
      local_5 = cVar7;
      if (0 < (int)uVar6) {
        do {
          uStack_c = param_3;
          if (*(char *)(iVar2 + 8) == '\x01') {
            if (cVar7 == '\0') {
              iVar1 = *(int *)(iVar2 + 0x18);
              local_18 = *(uint *)(iVar1 + iVar8 * 4);
              uStack_14 = *(uint *)(iVar1 + 4 + iVar8 * 4);
              local_10 = *(uint *)(iVar1 + 8 + iVar8 * 4);
            }
            else {
              iVar1 = *(int *)(iVar2 + 0xc);
              local_18 = (uint)*(ushort *)(iVar1 + iVar8 * 2);
              uStack_14 = (uint)*(ushort *)(iVar1 + 2 + iVar8 * 2);
              local_10 = (uint)*(ushort *)(iVar1 + 4 + iVar8 * 2);
            }
            iVar8 = iVar8 + 3;
LAB_010d89cb:
            if (*(uint *)(param_2 + 0x10) == (*(uint *)(param_2 + 0x14) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_2 + 0xc),0x10);
              uVar6 = local_24;
              cVar7 = local_5;
            }
            puVar5 = (undefined8 *)(*(int *)(param_2 + 0x10) * 0x10 + *(int *)(param_2 + 0xc));
            *puVar5 = CONCAT44(uStack_14,local_18);
            puVar5[1] = CONCAT44(uStack_c,local_10);
            *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
            param_1 = local_20;
          }
          else {
            if (*(char *)(iVar2 + 8) != '\x02') {
              hkErrStream::hkErrStream(local_230,0x200);
              FUN_01018d00("Unsupported index buffer type - Ignoring");
              (**(code **)(*DAT_01f8fc58 + 0xc))
                        (1,0xabbaa883,local_230,"Mesh\\hkxMeshSection.cpp",0x96);
              hkBaseObject::hkBaseObject_38();
              break;
            }
            if (1 < iVar8) {
              if (iVar8 == 2) {
                if (cVar7 == '\0') {
                  puVar4 = *(uint **)(iVar2 + 0x18);
                  local_18 = *puVar4;
                  uStack_14 = puVar4[1];
                  local_10 = puVar4[2];
                  iVar8 = 3;
                }
                else {
                  puVar3 = *(ushort **)(iVar2 + 0xc);
                  local_18 = (uint)*puVar3;
                  uStack_14 = (uint)puVar3[1];
                  local_10 = (uint)puVar3[2];
                  iVar8 = 3;
                }
              }
              else {
                iVar1 = *(int *)(param_2 + 0xc) + -0x10 + *(int *)(param_2 + 0x10) * 0x10;
                local_18 = *(uint *)(iVar1 + 8);
                uStack_14 = *(uint *)(iVar1 + 4);
                if (cVar7 == '\0') {
                  local_10 = *(uint *)(*(int *)(iVar2 + 0x18) + iVar8 * 4);
                  iVar8 = iVar8 + 1;
                }
                else {
                  local_10 = (uint)*(ushort *)(*(int *)(iVar2 + 0xc) + iVar8 * 2);
                  iVar8 = iVar8 + 1;
                }
              }
              goto LAB_010d89cb;
            }
            iVar8 = iVar8 + 1;
          }
        } while (iVar8 < (int)uVar6);
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x10));
  }
  return;
}

// 010D8A90  hkxMeshSection::hkxMeshSection  size=362  [run]
undefined4 * __thiscall hkxMeshSection::hkxMeshSection(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_c;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  piVar4 = param_1 + 3;
  *piVar4 = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = 0;
  piVar1 = param_1 + 7;
  param_1[9] = 0x80000000;
  *piVar1 = 0;
  param_1[8] = 0;
  local_c = 0;
  if (0 < *(int *)(param_2 + 0x10)) {
    do {
      piVar2 = (int *)(*(int *)(param_2 + 0xc) + local_c * 4);
      if (param_1[4] == (param_1[5] & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar4,4);
      }
      piVar3 = (int *)(*piVar4 + param_1[4] * 4);
      if (piVar3 != (int *)0x0) {
        if (*piVar2 != 0) {
          FUN_01006000();
        }
        *piVar3 = *piVar2;
      }
      param_1[4] = param_1[4] + 1;
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_2 + 0x10));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_2 + 0x20)) {
    do {
      piVar4 = (int *)(*(int *)(param_2 + 0x1c) + iVar5 * 4);
      if (param_1[8] == (param_1[9] & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
      }
      piVar2 = (int *)(*piVar1 + param_1[8] * 4);
      if (piVar2 != (int *)0x0) {
        if (*piVar4 != 0) {
          FUN_01006000();
        }
        *piVar2 = *piVar4;
      }
      param_1[8] = param_1[8] + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 0x20));
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_01006000();
  }
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  if (*(int *)(param_2 + 8) != 0) {
    FUN_01006000();
  }
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = *(undefined4 *)(param_2 + 8);
  return param_1;
}

// 010D8C00  FUN_010d8c00  size=76  [run]
void __thiscall FUN_010d8c00(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    if (*param_3 != 0) {
      FUN_01006000();
    }
    *piVar1 = *param_3;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010D8C50  FUN_010d8c50  size=76  [run]
void __thiscall FUN_010d8c50(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    if (*param_3 != 0) {
      FUN_01006000();
    }
    *piVar1 = *param_3;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010D8CA0  FUN_010d8ca0  size=77  [run]
void __thiscall FUN_010d8ca0(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    if (*param_2 != 0) {
      FUN_01006000();
    }
    *piVar1 = *param_2;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010D8CF0  FUN_010d8cf0  size=77  [run]
void __thiscall FUN_010d8cf0(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    if (*param_2 != 0) {
      FUN_01006000();
    }
    *piVar1 = *param_2;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010D8D40  FUN_010d8d40  size=37  [run]
int __fastcall FUN_010d8d40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (*(char *)(param_1 + 8) != '\x01') {
    return 0;
  }
  return iVar1 / 3;
}

// 010D8D70  FUN_010d8d70  size=272  [run]
undefined4 __thiscall
FUN_010d8d70(int param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (*(char *)(param_1 + 8) == '\x01') {
        param_2 = param_2 * 0xc;
        *param_3 = *(uint *)(param_2 + *(int *)(param_1 + 0x18));
        *param_4 = *(uint *)(param_2 + 4 + *(int *)(param_1 + 0x18));
        *param_5 = *(uint *)(param_2 + 8 + *(int *)(param_1 + 0x18));
        return 1;
      }
      if (*(char *)(param_1 + 8) == '\x02') {
        *param_3 = *(uint *)(*(int *)(param_1 + 0x18) + param_2 * 4);
        *param_4 = *(uint *)(*(int *)(param_1 + 0x18) + 4 + param_2 * 4);
        *param_5 = *(uint *)(*(int *)(param_1 + 0x18) + 8 + param_2 * 4);
        return 1;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 8) == '\x01') {
      param_2 = param_2 * 6;
      *param_3 = (uint)*(ushort *)(param_2 + *(int *)(param_1 + 0xc));
      *param_4 = (uint)*(ushort *)(param_2 + 2 + *(int *)(param_1 + 0xc));
      *param_5 = (uint)*(ushort *)(param_2 + 4 + *(int *)(param_1 + 0xc));
      return 1;
    }
    if (*(char *)(param_1 + 8) == '\x02') {
      *param_3 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + param_2 * 2);
      *param_4 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 2 + param_2 * 2);
      *param_5 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 4 + param_2 * 2);
      return 1;
    }
  }
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  *param_5 = 0xffffffff;
  return 0;
}

// 010D8E80  FUN_010d8e80  size=91  [run]
void FUN_010d8e80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_01006780(param_1);
  FUN_01441a50(param_2,param_3);
  iVar1 = FUN_01441a80();
  if (iVar1 != 0) {
    FUN_01441a80();
    uVar2 = FUN_010093a0();
    FUN_01006780(uVar2);
    return;
  }
  FUN_01006780(0);
  return;
}

// 010D8F00  FUN_010d8f00  size=18  [run]
int __thiscall FUN_010d8f00(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 010D8F40  FUN_010d8f40  size=29  [run]
void __thiscall FUN_010d8f40(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 010D8F60  FUN_010d8f60  size=42  [run]
uint __fastcall FUN_010d8f60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_01441a80();
  if (iVar1 != 0) {
    FUN_01441a80();
    uVar2 = FUN_010093a0();
    return uVar2;
  }
  return *(uint *)(param_1 + 4) & 0xfffffffe;
}

// 010D8FB0  FUN_010d8fb0  size=220  [run]
undefined4 __thiscall FUN_010d8fb0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((param_3 == 0) || (param_1[1] <= iVar3)) break;
    iVar1 = *param_1 + iVar4;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (*(int *)(iVar1 + 8) != param_3);
  if (iVar3 < param_1[1]) {
    iVar4 = iVar3 * 0xc;
    param_3 = iVar3;
    do {
      iVar3 = *param_1;
      iVar1 = FUN_01441a80();
      if (iVar1 == 0) {
        uVar2 = *(uint *)(iVar3 + 4 + iVar4) & 0xfffffffe;
      }
      else {
        FUN_01441a80();
        uVar2 = FUN_010093a0();
      }
      if (uVar2 != 0) {
        iVar3 = *param_1;
        iVar1 = FUN_01441a80();
        if (iVar1 == 0) {
          uVar2 = *(uint *)(iVar3 + 4 + iVar4) & 0xfffffffe;
        }
        else {
          FUN_01441a80();
          uVar2 = FUN_010093a0();
        }
        iVar3 = FUN_01015b90(param_2,uVar2);
        if (iVar3 == 0) {
          return *(undefined4 *)(*param_1 + 8 + param_3 * 0xc);
        }
      }
      param_3 = param_3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (param_3 < param_1[1]);
  }
  return 0;
}

// 010D9090  FUN_010d9090  size=118  [run]
undefined4 __thiscall FUN_010d9090(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    if ((param_3 == 0) || (param_1[1] <= iVar2)) break;
    iVar1 = *param_1 + iVar3;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0xc;
  } while (*(int *)(iVar1 + 8) != param_3);
  if (iVar2 < param_1[1]) {
    iVar3 = iVar2 * 0xc;
    do {
      if ((*(uint *)(iVar3 + *param_1) & 0xfffffffe) != 0) {
        iVar1 = FUN_01015b90(param_2,*(uint *)(iVar3 + *param_1) & 0xfffffffe);
        if (iVar1 == 0) {
          return *(undefined4 *)(*param_1 + 8 + iVar2 * 0xc);
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < param_1[1]);
  }
  return 0;
}

// 010D9110  FUN_010d9110  size=120  [run]
int __thiscall FUN_010d9110(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_010065a0();
  FUN_010065a0();
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_01006780(param_2);
  FUN_01441a50(param_3,param_4);
  iVar1 = FUN_01441a80();
  if (iVar1 != 0) {
    FUN_01441a80();
    uVar2 = FUN_010093a0();
    FUN_01006780(uVar2);
    return param_1;
  }
  FUN_01006780(0);
  return param_1;
}

// 010D9190  FUN_010d9190  size=166  [run]
int __thiscall FUN_010d9190(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_010065a0();
  FUN_010065a0();
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = 0;
  FUN_01006780(param_2);
  FUN_01441a20(param_3);
  iVar2 = param_2;
  if (piVar1 != &param_2) {
    if (param_2 != 0) {
      FUN_01006000();
    }
    if (*piVar1 != 0) {
      FUN_010060a0();
    }
    *piVar1 = iVar2;
  }
  if (param_2 != 0) {
    FUN_010060a0();
  }
  iVar2 = FUN_01441a80();
  if (iVar2 != 0) {
    FUN_01441a80();
    uVar3 = FUN_010093a0();
    FUN_01006780(uVar3);
    return param_1;
  }
  FUN_01006780(0);
  return param_1;
}

// 010D9240  FUN_010d9240  size=34  [run]
undefined4 __thiscall FUN_010d9240(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  FUN_010065b0(param_2);
  return param_1;
}

// 010D9270  FUN_010d9270  size=5  [run]
undefined4 __fastcall FUN_010d9270(undefined4 param_1)

{
  return param_1;
}

// 010D9290  FUN_010d9290  size=38  [run]
void __fastcall FUN_010d9290(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_01006770();
  FUN_01006770();
  return;
}

// 010D92C0  FUN_010d92c0  size=39  [run]
void FUN_010d92c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010D92F0  FUN_010d92f0  size=141  [run]
void __thiscall FUN_010d92f0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_01006780(param_2);
  FUN_01441a20(param_3);
  iVar2 = param_2;
  piVar1 = (int *)(param_1 + 8);
  if (piVar1 != &param_2) {
    if (param_2 != 0) {
      FUN_01006000();
    }
    if (*piVar1 != 0) {
      FUN_010060a0();
    }
    *piVar1 = iVar2;
  }
  if (param_2 != 0) {
    FUN_010060a0();
  }
  iVar2 = FUN_01441a80();
  if (iVar2 != 0) {
    FUN_01441a80();
    uVar3 = FUN_010093a0();
    FUN_01006780(uVar3);
    return;
  }
  FUN_01006780(0);
  return;
}

// 010D9380  FUN_010d9380  size=82  [run]
int __thiscall FUN_010d9380(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_01006770();
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010D93E0  FUN_010d93e0  size=64  [run]
void FUN_010d93e0(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + 8 + param_2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      FUN_01006770();
      FUN_01006770();
      piVar1 = piVar1 + -3;
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return;
}

// 010D9470  FUN_010d9470  size=123  [run]
void __thiscall FUN_010d9470(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      FUN_01006770();
      FUN_01006770();
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010D9600  FUN_010d9600  size=42  [run]
void __thiscall FUN_010d9600(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_2;
  while (iVar2 != 0) {
    (**(code **)(*param_1 + 0xc))(iVar2);
    piVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    iVar2 = *piVar1;
  }
  return;
}

// 010D9680  hkBuiltinTypeRegistry::vf18  size=86  [run]
void hkBuiltinTypeRegistry::vf18(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_0225bcd4;
  uVar1 = FUN_010093a0();
  (**(code **)(iVar2 + 0x1c))(param_2,uVar1);
  (**(code **)(*DAT_0225bcd8 + 0xc))(param_1);
  iVar2 = FUN_01009440();
  if (0 < iVar2) {
    (**(code **)(*DAT_0225ba90 + 0xc))(*(undefined4 *)(param_1 + 0x10),param_2);
  }
  return;
}

// 010D9740  FUN_010d9740  size=84  [run]
void FUN_010d9740(void)

{
  int *piVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  (**(code **)(*DAT_0225bcd4 + 0x24))(&DAT_0209b614);
  piVar1 = DAT_0225bcd8;
  puVar2 = &DAT_01f8fccc;
  ppuVar3 = &PTR_DAT_0164d8d8;
  do {
    (**(code **)(*piVar1 + 0xc))(puVar2);
    puVar2 = ppuVar3[1];
    ppuVar3 = ppuVar3 + 1;
  } while (puVar2 != (undefined *)0x0);
  FUN_0143ea90(&PTR_DAT_0164d8d8,&PTR_DAT_0164dfb0);
  return;
}

// 010D97C0  FUN_010d97c0  size=37  [run]
void FUN_010d97c0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010D97F0  FUN_010d97f0  size=38  [run]
void FUN_010d97f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D9820  hkDefaultBuiltinTypeRegistry::hkDefaultBuiltinTypeRegistry  size=27  [run]
undefined4 * __fastcall
hkDefaultBuiltinTypeRegistry::hkDefaultBuiltinTypeRegistry(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_010d9740();
  return param_1;
}

// 010D9860  FUN_010d9860  size=39  [run]
void FUN_010d9860(undefined4 param_1)

{
  if (DAT_0225bcd4 != 0) {
    FUN_01005e60();
    DAT_0225bcd4 = param_1;
    return;
  }
  DAT_0225bcd4 = param_1;
  return;
}

// 010D98A0  FUN_010d98a0  size=39  [run]
void FUN_010d98a0(undefined4 param_1)

{
  if (DAT_0225bcd8 != 0) {
    FUN_01005e60();
    DAT_0225bcd8 = param_1;
    return;
  }
  DAT_0225bcd8 = param_1;
  return;
}

// 010D98E0  FUN_010d98e0  size=27  [run]
uint __fastcall FUN_010d98e0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010D9900  FUN_010d9900  size=39  [run]
void FUN_010d9900(undefined4 param_1)

{
  if (DAT_0225ba90 != 0) {
    FUN_01005e60();
    DAT_0225ba90 = param_1;
    return;
  }
  DAT_0225ba90 = param_1;
  return;
}

// 010D9930  hkTypeInfoRegistry::hkTypeInfoRegistry  size=59  [run]
undefined4 * __thiscall
hkTypeInfoRegistry::hkTypeInfoRegistry(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_8;
  
  local_8 = (uint)param_1 & 0xffffff00;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_01025830(local_8);
  param_1[7] = param_3;
  param_1[6] = param_2;
  return param_1;
}

// 010D9980  FUN_010d9980  size=9  [run]
void FUN_010d9980(void)

{
  FUN_01025470();
  return;
}

// 010D99A0  FUN_010d99a0  size=9  [run]
void FUN_010d99a0(void)

{
  FUN_010253e0();
  return;
}

// 010D99B0  FUN_010d99b0  size=9  [run]
void FUN_010d99b0(void)

{
  FUN_01025400();
  return;
}

// 010D99C0  FUN_010d99c0  size=9  [run]
void FUN_010d99c0(void)

{
  FUN_01025440();
  return;
}

// 010D99D0  FUN_010d99d0  size=24  [run]
undefined4 FUN_010d99d0(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 010D99F0  hkTypeInfoRegistry::vf0C  size=22  [run]
void hkTypeInfoRegistry::vf0C(undefined4 *param_1)

{
  FUN_01025470(*param_1,param_1);
  return;
}

// 010D9A10  hkTypeInfoRegistry::vf10  size=58  [run]
int __thiscall hkTypeInfoRegistry::vf10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01025be0(param_3,0);
  if (iVar1 != 0) {
    FUN_0102cbc0(param_2,*(undefined4 *)(param_1 + 0x18));
    return iVar1;
  }
  return 0;
}

// 010D9A50  hkTypeInfoRegistry::vf14  size=42  [run]
int hkTypeInfoRegistry::vf14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01025be0(param_2,0);
  if (iVar1 != 0) {
    FUN_0102cc00(param_1);
  }
  return iVar1;
}

// 010D9A80  hkTypeInfoRegistry::vf18  size=113  [run]
void hkTypeInfoRegistry::vf18(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_010253c0();
  FUN_01025890((int)&param_1 + 3,uVar1);
  while (param_1._3_1_ != '\0') {
    uVar2 = FUN_01025400(uVar1);
    uVar3 = FUN_010253e0(uVar1);
    FUN_01025470(uVar3,uVar2);
    uVar1 = FUN_01025440(uVar1);
    FUN_01025890((int)&param_1 + 3,uVar1);
  }
  return;
}

// 010D9B00  hkTypeInfoRegistry::vf1C  size=21  [run]
void hkTypeInfoRegistry::vf1C(undefined4 param_1)

{
  FUN_01025be0(param_1,0);
  return;
}

// 010D9B20  hkBaseObject::~hkBaseObject  size=19  [run]
void __fastcall hkBaseObject::~hkBaseObject(undefined4 *param_1)

{
  FUN_01025870();
  *param_1 = vftable;
  return;
}

// 010D9B40  FUN_010d9b40  size=37  [run]
void FUN_010d9b40(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010D9B70  hkDefaultBuiltinTypeRegistry::vf0C  size=6  [run]
undefined4 hkDefaultBuiltinTypeRegistry::vf0C(void)

{
  return DAT_0225bcd8;
}

// 010D9B80  hkDefaultBuiltinTypeRegistry::vf10  size=6  [run]
undefined4 hkDefaultBuiltinTypeRegistry::vf10(void)

{
  return DAT_0225bcd4;
}

// 010D9B90  hkDefaultBuiltinTypeRegistry::vf14  size=6  [run]
undefined4 hkDefaultBuiltinTypeRegistry::vf14(void)

{
  return DAT_0225ba90;
}

// 010D9BA0  FUN_010d9ba0  size=37  [run]
void FUN_010d9ba0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010D9BD0  hkDefaultClassNameRegistry::hkDefaultClassNameRegistry  size=58  [run]
undefined4 * __fastcall hkDefaultClassNameRegistry::hkDefaultClassNameRegistry(undefined4 *param_1)

{
  uint local_8;
  
  local_8 = (uint)param_1 & 0xffffff00;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = hkDynamicClassNameRegistry::vftable;
  param_1[2] = "hk_2011.3.0-r1";
  FUN_01025830(local_8);
  *param_1 = vftable;
  return param_1;
}

// 010D9C10  hkBaseObject::~hkBaseObject  size=19  [run]
void __fastcall hkBaseObject::~hkBaseObject(undefined4 *param_1)

{
  FUN_01025870();
  *param_1 = vftable;
  return;
}

// 010D9C30  FUN_010d9c30  size=38  [run]
void FUN_010d9c30(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D9C60  hkDefaultClassNameRegistry::vf00  size=61  [run]
undefined4 * __thiscall hkDefaultClassNameRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01025870();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D9CA0  FUN_010d9ca0  size=37  [run]
void FUN_010d9ca0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010D9CD0  FUN_010d9cd0  size=38  [run]
void FUN_010d9cd0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010D9D00  hkTypeInfoRegistry::vf00  size=61  [run]
undefined4 * __thiscall hkTypeInfoRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01025870();
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D9D40  hkDefaultBuiltinTypeRegistry::vf00  size=53  [run]
undefined4 * __thiscall hkDefaultBuiltinTypeRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D9D80  hkBuiltinTypeRegistry::vf00  size=53  [run]
undefined4 * __thiscall hkBuiltinTypeRegistry::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010D9DC0  hkDefaultBuiltinTypeRegistry::vf1C  size=272  [run]
void hkDefaultBuiltinTypeRegistry::vf1C(void)

{
  uint uVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  uint local_8;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x20);
  uVar1 = local_8 >> 8;
  local_8 = uVar1 << 8;
  puVar3[1] = 0x10020;
  *puVar3 = hkDynamicClassNameRegistry::vftable;
  puVar3[2] = "hk_2011.3.0-r1";
  FUN_01025830(local_8);
  *puVar3 = hkDefaultClassNameRegistry::vftable;
  if (DAT_0225bcd4 != (undefined4 *)0x0) {
    FUN_01005e60();
  }
  DAT_0225bcd4 = puVar3;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x20);
  local_8 = uVar1 << 8;
  puVar3[1] = 0x10020;
  *puVar3 = hkTypeInfoRegistry::vftable;
  FUN_01025830(local_8);
  puVar3[6] = 1;
  puVar3[7] = 1;
  if (DAT_0225bcd8 != (undefined4 *)0x0) {
    FUN_01005e60();
  }
  DAT_0225bcd8 = puVar3;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x14);
  puVar3[1] = 0x10014;
  *puVar3 = hkVtableClassRegistry::vftable;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0xffffffff;
  if (DAT_0225ba90 != (undefined4 *)0x0) {
    FUN_01005e60();
  }
  DAT_0225ba90 = puVar3;
  FUN_010d9740();
  return;
}

// 010D9ED0  FUN_010d9ed0  size=8  [run]
undefined4 FUN_010d9ed0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D9EE0  FUN_010d9ee0  size=8  [run]
undefined4 FUN_010d9ee0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010D9F00  FUN_010d9f00  size=21  [run]
void FUN_010d9f00(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010d9240(param_2);
  }
  return;
}

// 010D9F30  FUN_010d9f30  size=21  [run]
void FUN_010d9f30(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010d9270(param_2);
  }
  return;
}

// 010D9F50  FUN_010d9f50  size=43  [run]
void FUN_010d9f50(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_01006770();
  FUN_01006770();
  return;
}

// 010D9F80  FUN_010d9f80  size=15  [run]
void FUN_010d9f80(void)

{
  FUN_010da040(0);
  return;
}

// 010D9F90  FUN_010d9f90  size=39  [run]
void FUN_010d9f90(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010DA040  FUN_010da040  size=162  [run]
int * __thiscall FUN_010da040(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*param_1 + 8 + iVar3 * 0xc);
    do {
      if (*piVar2 != 0) {
        FUN_010060a0();
      }
      *piVar2 = 0;
      FUN_01006770();
      FUN_01006770();
      piVar2 = piVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  *param_1 = 0;
  param_1[2] = -0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010DA0F0  FUN_010da0f0  size=14  [run]
void __thiscall FUN_010da0f0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 010DA100  FUN_010da100  size=15  [run]
void __thiscall FUN_010da100(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  return;
}

// 010DA120  FUN_010da120  size=38  [run]
undefined4 FUN_010da120(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  uVar1 = (uint)param_1 >> 0x18;
  uVar2 = (uint)param_1 >> 0x10;
  param_1 = CONCAT13((char)uVar3,
                     CONCAT12((char)((uint)uVar3 >> 8),CONCAT11((char)uVar2,(char)uVar1)));
  return param_1;
}

// 010DA150  FUN_010da150  size=114  [run]
void FUN_010da150(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2;
  if ((param_2 == -0x354ff2e2) && (param_3 == -0x2fee0532)) {
LAB_010da1b0:
    *param_1 = 1;
    return;
  }
  param_2._0_2_ = CONCAT11((char)((uint)param_2 >> 0x10),(char)((uint)param_2 >> 0x18));
  param_2._0_3_ = CONCAT12((char)((uint)iVar1 >> 8),(undefined2)param_2);
  param_2 = CONCAT13((char)iVar1,(undefined3)param_2);
  if (param_2 == -0x354ff2e2) {
    param_2._0_2_ = CONCAT11((char)((uint)param_3 >> 0x10),(char)((uint)param_3 >> 0x18));
    param_2._0_3_ = CONCAT12((char)((uint)param_3 >> 8),(undefined2)param_2);
    param_2 = CONCAT13((char)param_3,(undefined3)param_2);
    if (param_2 == -0x2fee0532) goto LAB_010da1b0;
  }
  *param_1 = 0;
  return;
}

// 010DA290  FUN_010da290  size=20  [run]
void FUN_010da290(void)

{
  char *pcVar1;
  char cVar2;
  char *in_EAX;
  
  cVar2 = *in_EAX;
  while ((cVar2 != '\0' && (cVar2 == ' '))) {
    pcVar1 = in_EAX + 1;
    in_EAX = in_EAX + 1;
    cVar2 = *pcVar1;
  }
  return;
}

// 010DA2B0  FUN_010da2b0  size=95  [run]
undefined4 FUN_010da2b0(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_01015d50();
  if (iVar1 != 0) {
    FUN_01015cd0();
    pcVar2 = (char *)FUN_010da290();
    if (*pcVar2 == '=') {
      pcVar2 = (char *)FUN_010da290();
      if (*pcVar2 == '\"') {
        pcVar2 = pcVar2 + 1;
        iVar1 = FUN_01015d60(pcVar2,0x22);
        if (iVar1 != 0) {
          FUN_010067c0(pcVar2,iVar1 - (int)pcVar2);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 010DA310  FUN_010da310  size=171  [run]
void FUN_010da310(undefined1 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = param_2 + 0x40;
  if (0 < *(int *)(param_2 + 0x14)) {
    do {
      iVar1 = FUN_01015b90(iVar5,PTR_s___classnames___01b1e0fc);
      if (iVar1 == 0) {
        iVar4 = 0;
        if (*(int *)(iVar5 + 0x18) != 6 && -1 < *(int *)(iVar5 + 0x18) + -6) goto LAB_010da363;
        goto LAB_010da3b3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar4 < *(int *)(param_2 + 0x14));
  }
LAB_010da340:
  *param_1 = 0;
  return;
  while( true ) {
    if (((*(char *)(iVar2 + 4) != '\t') ||
        (iVar3 = (**(code **)(*param_3 + 0x10))(iVar2 + 5), iVar3 == 0)) ||
       (iVar3 = hkCrc32StreamWriter::hkCrc32StreamWriter_3(0), iVar1 != iVar3)) goto LAB_010da340;
    iVar1 = FUN_01015cd0(iVar2 + 5);
    iVar4 = iVar4 + 6 + iVar1;
    if (*(int *)(iVar5 + 0x18) + -6 <= iVar4) break;
LAB_010da363:
    iVar2 = *(int *)(iVar5 + 0x14) + iVar4;
    iVar1 = *(int *)(iVar2 + param_2);
    iVar2 = iVar2 + param_2;
    if (*(char *)(iVar2 + 5) == -1) break;
  }
LAB_010da3b3:
  *param_1 = 1;
  return;
}

// 010DA3C0  FUN_010da3c0  size=21  [run]
void __fastcall FUN_010da3c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x010da3d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0209b610 + 0x10))();
    return;
  }
  return;
}

// 010DA3E0  FUN_010da3e0  size=21  [run]
void __fastcall FUN_010da3e0(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x010da3f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0209b610 + 0xc))();
    return;
  }
  return;
}

