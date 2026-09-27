// lib/havok/Source/Physics/Dynamics/World/Simulation/Continuous/hkpContinuousSimulation.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 011B71B0..011B71B0, 1 functions

#include "mgrr.h"

// 011B71B0  FUN_011b71b0  size=327  [__FILE__]
void __thiscall FUN_011b71b0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_210 [524];
  
  if (*(uint *)(param_1 + 0x34) == (*(uint *)(param_1 + 0x38) & 0x3fffffff)) {
    hkErrStream::hkErrStream(local_210,0x200);
    FUN_01018d00(
                "TOI event queue full, consider using HK_COLLIDABLE_QUALITY_DEBRIS for some objects or increase hkpWorldCinfo::m_sizeOfToiEventQueue"
                );
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xf0323454,local_210,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Dynamics\\World\\Simulation\\Continuous\\hkpContinuousSimulation.cpp"
               ,0x458);
    hkBaseObject::hkBaseObject_38();
    return;
  }
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x34) * 0x70 + *(int *)(param_1 + 0x30));
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *puVar4 = *(undefined4 *)(param_2 + 0x3030);
  *(undefined1 *)(puVar4 + 2) =
       *(undefined1 *)
        (*(char *)(param_3 + 0xc) * 0x40 + 0x1ee4 + *(int *)(*(int *)(param_1 + 0xc) + 0x78));
  puVar4[1] = *(undefined4 *)(param_2 + 0x3034);
  uVar1 = *(undefined4 *)(param_2 + 0x3014);
  uVar2 = *(undefined4 *)(param_2 + 0x3018);
  uVar3 = *(undefined4 *)(param_2 + 0x301c);
  puVar4[0x14] = *(undefined4 *)(param_2 + 0x3010);
  puVar4[0x15] = uVar1;
  puVar4[0x16] = uVar2;
  puVar4[0x17] = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x3024);
  uVar2 = *(undefined4 *)(param_2 + 0x3028);
  uVar3 = *(undefined4 *)(param_2 + 0x302c);
  puVar4[0x18] = *(undefined4 *)(param_2 + 0x3020);
  puVar4[0x19] = uVar1;
  puVar4[0x1a] = uVar2;
  puVar4[0x1b] = uVar3;
  puVar4[3] = (int)*(char *)(*(int *)(param_3 + 0x10) + 0x10) + *(int *)(param_3 + 0x10);
  puVar4[4] = (int)*(char *)(*(int *)(param_3 + 0x14) + 0x10) + *(int *)(param_3 + 0x14);
  *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(param_2 + 0x3050);
  *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_2 + 0x3058);
  puVar4[10] = *(undefined4 *)(param_2 + 0x3060);
  puVar4[5] = *(undefined4 *)(param_3 + 8);
  puVar4[0xb] = *(undefined4 *)(param_2 + 0x3064);
  puVar4[0xc] = *(undefined4 *)(param_2 + 0x3068);
  puVar4[0xd] = *(undefined4 *)(param_2 + 0x306c);
  puVar4[0xe] = *(undefined4 *)(param_2 + 0x3070);
  puVar4[0xf] = *(undefined4 *)(param_2 + 0x3074);
  puVar4[0x10] = *(undefined4 *)(param_2 + 0x3078);
  puVar4[0x11] = *(undefined4 *)(param_2 + 0x307c);
  return;
}

