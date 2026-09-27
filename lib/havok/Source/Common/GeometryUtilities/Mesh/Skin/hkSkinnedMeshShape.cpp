// lib/havok/Source/Common/GeometryUtilities/Mesh/Skin/hkSkinnedMeshShape.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010655A0..010655A0, 1 functions

#include "mgrr.h"
#include "hkSkinnedMeshShape.h"

// 010655A0  hkSkinnedMeshShape::vf1C  size=1622  [__FILE__]
void __fastcall hkSkinnedMeshShape::vf1C(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined1 local_7a8 [528];
  undefined1 local_598 [512];
  undefined1 local_398 [248];
  undefined1 local_2a0 [264];
  undefined1 *local_198;
  undefined4 local_194;
  uint local_190;
  undefined1 local_18c [136];
  undefined1 local_104 [20];
  char local_f0;
  int local_ec;
  int *local_e8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined2 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  ushort local_70;
  undefined2 local_6e;
  int local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  short local_28;
  short local_26;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_198 = local_18c;
  local_190 = 0x80000080;
  local_194 = 1;
  local_18c[0] = 0;
  local_38 = param_1;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  local_44 = iVar2;
  local_30 = (**(code **)(*param_1 + 0x14))();
  hkErrStream::hkErrStream(local_398,0x200);
  FUN_01018d00("---------------------------------------------------");
  (**(code **)(*DAT_01f8fc58 + 0xc))
            (0,0xffffffff,local_398,
             "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\GeometryUtilities\\Mesh\\Skin\\hkSkinnedMeshShape.cpp"
             ,0x3d);
  ::hkBaseObject::hkBaseObject_38();
  FUN_010262e0(&local_198,"Num bone sections: %d. Num parts: %d.",iVar2,local_30);
  hkErrStream::hkErrStream(local_398,0x200);
  FUN_010192f0(&local_198);
  (**(code **)(*DAT_01f8fc58 + 0xc))
            (0,0xffffffff,local_398,
             "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\GeometryUtilities\\Mesh\\Skin\\hkSkinnedMeshShape.cpp"
             ,0x3f);
  ::hkBaseObject::hkBaseObject_38();
  local_20 = 0;
  if (0 < iVar2) {
    do {
      FUN_01065290();
      (**(code **)(*param_1 + 0x10))(local_20,&local_2c);
      piVar5 = local_2c;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x80000000;
      local_34 = local_2c;
      uVar3 = (**(code **)(*local_2c + 0xc))();
      FUN_010262e0(&local_198,"Bone section %d. Start bone %d, numBones %d. Num sections %d",
                   local_20,(int)local_28,(int)local_26,uVar3);
      hkErrStream::hkErrStream(local_398,0x200);
      FUN_010192f0(&local_198);
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (0,0xffffffff,local_398,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\GeometryUtilities\\Mesh\\Skin\\hkSkinnedMeshShape.cpp"
                 ,0x4a);
      ::hkBaseObject::hkBaseObject_38();
      local_24 = 0;
      if (0 < local_30) {
        do {
          (**(code **)(*param_1 + 0x18))(local_24,&local_80);
          if (((int)local_28 <= (int)(uint)local_70) &&
             ((int)(uint)local_70 < (int)local_26 + (int)local_28)) {
            (**(code **)(*piVar5 + 0x10))(local_6e,3,local_104);
            FUN_010262e0(&local_198,
                         "Part %d. Bone %d. Sub-mesh %d. Start vertex %d. NumVerts %d. Start Index %d. NumIndices %d."
                         ,local_24,local_70,local_6e,local_80,local_7c,local_78,local_74);
            hkErrStream::hkErrStream(local_398,0x200);
            FUN_010192f0(&local_198);
            (**(code **)(*DAT_01f8fc58 + 0xc))
                      (0,0xffffffff,local_398,
                       "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\GeometryUtilities\\Mesh\\Skin\\hkSkinnedMeshShape.cpp"
                       ,0x59);
            ::hkBaseObject::hkBaseObject_38();
            piVar5 = local_e8;
            local_8c = local_7c;
            local_90 = local_80;
            local_88 = 0;
            local_84 = 1;
            local_3c = local_e8;
            (**(code **)(*local_e8 + 0x1c))(&local_90,local_7a8);
            FUN_0106e670();
            (**(code **)(*piVar5 + 0x14))(local_2a0);
            uVar3 = FUN_0106e770(1,0);
            local_40 = local_7c;
            if ((int)(local_14 & 0x3fffffff) < local_7c) {
              FUN_0100a210();
            }
            local_18 = local_40;
            (**(code **)(*piVar5 + 0x24))(local_7a8,uVar3,local_1c);
            iVar2 = 0;
            if (0 < local_7c) {
              iVar6 = 0;
              do {
                uVar1 = *(undefined8 *)(local_1c + iVar6);
                local_98 = *(undefined8 *)(local_1c + 8 + iVar6);
                local_a0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                dVar7 = (double)local_a0._4_4_;
                local_a0._0_4_ = (float)uVar1;
                dVar8 = (double)(float)local_a0;
                local_a0 = uVar1;
                FUN_010262e0(&local_198,"Vtx %d.\t(%f, %f, %f)",iVar2 + local_80,dVar8,dVar7,
                             (double)(float)local_98);
                hkErrStream::hkErrStream(local_598,0x200);
                FUN_010192f0();
                (**(code **)(*DAT_01f8fc58 + 0xc))();
                ::hkBaseObject::hkBaseObject_38();
                iVar2 = iVar2 + 1;
                iVar6 = iVar6 + 0x10;
                piVar5 = local_3c;
              } while (iVar2 < local_7c);
            }
            (**(code **)(*piVar5 + 0x34))();
            iVar2 = local_ec;
            if (local_f0 == '\x01') {
              iVar6 = 0;
              if (0 < local_74) {
                do {
                  iVar4 = local_78 + iVar6;
                  FUN_010262e0(&local_198,"Tri (%d, %d, %d).",(int)*(short *)(iVar2 + iVar4 * 2),
                               (int)*(short *)(iVar2 + 2 + iVar4 * 2),
                               (int)*(short *)(iVar2 + 4 + iVar4 * 2));
                  hkErrStream::hkErrStream();
                  FUN_010192f0(&local_198);
                  (**(code **)(*DAT_01f8fc58 + 0xc))();
                  ::hkBaseObject::hkBaseObject_38();
                  iVar6 = iVar6 + 3;
                } while (iVar6 < local_74);
              }
            }
            else if ((local_f0 == '\x02') && (iVar6 = 0, 0 < local_74)) {
              do {
                iVar4 = local_78 + iVar6;
                FUN_010262e0(&local_198,"Tri (%d, %d, %d).",*(undefined4 *)(iVar2 + iVar4 * 4),
                             *(undefined4 *)(iVar2 + 4 + iVar4 * 4),
                             *(undefined4 *)(iVar2 + 8 + iVar4 * 4));
                hkErrStream::hkErrStream();
                FUN_010192f0(&local_198);
                (**(code **)(*DAT_01f8fc58 + 0xc))();
                ::hkBaseObject::hkBaseObject_38();
                iVar6 = iVar6 + 3;
              } while (iVar6 < local_74);
            }
            (**(code **)(*local_34 + 0x14))(local_104);
            piVar5 = local_34;
            param_1 = local_38;
          }
          local_24 = local_24 + 1;
        } while (local_24 < local_30);
      }
      local_18 = 0;
      if (-1 < (int)local_14) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 << 4);
      }
      local_1c = 0;
      local_14 = 0x80000000;
      if (local_2c != (int *)0x0) {
        FUN_010060a0();
      }
      local_20 = local_20 + 1;
      local_2c = (int *)0x0;
    } while (local_20 < local_44);
  }
  local_194 = 0;
  if (-1 < (int)local_190) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_198,local_190 & 0x3fffffff);
  }
  return;
}

