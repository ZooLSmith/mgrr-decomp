// lib/havok/Source/Physics/Dynamics/World/Simulation/Multithreaded/hkpMultithreadedSimulation.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 011B2C20..011B2C20, 1 functions

#include "types.h"

// 011B2C20  FUN_011b2c20  size=455  [__FILE__]
void __thiscall FUN_011b2c20(int param_1,int param_2,int param_3,LPCRITICAL_SECTION param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined4 *puVar7;
  undefined1 local_214 [524];
  undefined4 local_8;
  
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar6 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar1 = "TtAgentJob.addToi";
    uVar2 = rdtsc();
    local_8 = (undefined4)uVar2;
    puVar1[1] = local_8;
    *(undefined4 **)((int)pvVar6 + 4) = puVar1 + 3;
  }
  EnterCriticalSection(param_4);
  if ((int)(*(uint *)(param_1 + 0x38) & 0x3fffffff) <= *(int *)(param_1 + 0x34)) {
    hkErrStream::hkErrStream(local_214,0x200);
    FUN_01018d00(
                "TOI event queue full, consider using HK_COLLIDABLE_QUALITY_DEBRIS for some objects or increase hkpWorldCinfo::m_sizeOfToiEventQueue"
                );
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xf0323454,local_214,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Physics\\Dynamics\\World\\Simulation\\Multithreaded\\hkpMultithreadedSimulation.cpp"
               ,0x41e);
    hkBaseObject::hkBaseObject_38();
    LeaveCriticalSection(param_4);
    return;
  }
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0x34) * 0x70 + *(int *)(param_1 + 0x30));
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  LeaveCriticalSection(param_4);
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar6 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar6 + 4) = puVar1 + 3;
  }
  *puVar7 = *(undefined4 *)(param_2 + 0x3030);
  *(undefined1 *)(puVar7 + 2) =
       *(undefined1 *)
        (*(char *)(param_3 + 0xc) * 0x40 + 0x1ee4 + *(int *)(*(int *)(param_1 + 0xc) + 0x78));
  puVar7[1] = *(undefined4 *)(param_2 + 0x3034);
  uVar3 = *(undefined4 *)(param_2 + 0x3014);
  uVar4 = *(undefined4 *)(param_2 + 0x3018);
  uVar5 = *(undefined4 *)(param_2 + 0x301c);
  puVar7[0x14] = *(undefined4 *)(param_2 + 0x3010);
  puVar7[0x15] = uVar3;
  puVar7[0x16] = uVar4;
  puVar7[0x17] = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0x3024);
  uVar4 = *(undefined4 *)(param_2 + 0x3028);
  uVar5 = *(undefined4 *)(param_2 + 0x302c);
  puVar7[0x18] = *(undefined4 *)(param_2 + 0x3020);
  puVar7[0x19] = uVar3;
  puVar7[0x1a] = uVar4;
  puVar7[0x1b] = uVar5;
  puVar7[3] = (int)*(char *)(*(int *)(param_3 + 0x10) + 0x10) + *(int *)(param_3 + 0x10);
  puVar7[4] = (int)*(char *)(*(int *)(param_3 + 0x14) + 0x10) + *(int *)(param_3 + 0x14);
  *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(param_2 + 0x3050);
  *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(param_2 + 0x3058);
  puVar7[10] = *(undefined4 *)(param_2 + 0x3060);
  puVar7[5] = *(undefined4 *)(param_3 + 8);
  puVar7[0xb] = *(undefined4 *)(param_2 + 0x3064);
  puVar7[0xc] = *(undefined4 *)(param_2 + 0x3068);
  puVar7[0xd] = *(undefined4 *)(param_2 + 0x306c);
  puVar7[0xe] = *(undefined4 *)(param_2 + 0x3070);
  puVar7[0xf] = *(undefined4 *)(param_2 + 0x3074);
  puVar7[0x10] = *(undefined4 *)(param_2 + 0x3078);
  puVar7[0x11] = *(undefined4 *)(param_2 + 0x307c);
  return;
}

