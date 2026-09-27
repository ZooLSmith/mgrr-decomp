// lib/havok/Source/Common/Internal/GeometryProcessing/Mesh/hkgpMesh.h
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010A8EE0..010A8EE0, 1 functions

#include "mgrr.h"
#include "hkgpMesh.h"

// 010A8EE0  hkgpMesh::IConvexOverlap::IConvexShape::vf04  size=98  [__FILE__]
undefined4 hkgpMesh::IConvexOverlap::IConvexShape::vf04(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_210 [524];
  
  hkErrStream::hkErrStream(local_210,0x200);
  FUN_01018d00("Not implemented");
  iVar2 = (**(code **)(*DAT_01f8fc58 + 0xc))
                    (3,0xcfa7dfcc,local_210,
                     "Y:\\Build\\20111220_200011_StandardPackages\\Source\\Common/Internal/GeometryProcessing/Mesh/hkgpMesh.h"
                     ,0x11d);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  ::hkBaseObject::hkBaseObject_38();
  return 0;
}

