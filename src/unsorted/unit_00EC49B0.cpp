// src/unsorted/unit_00EC49B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC49B0..00EC6E40, 18 functions

#include "types.h"

// 00EC49B0  FUN_00ec49b0  size=493  [run]
bool FUN_00ec49b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00f9f050(&DAT_016d9180);
  if (iVar1 != 0) {
    iVar1 = FUN_00f9f050(&DAT_016d9198);
    if (iVar1 != 0) {
      iVar1 = FUN_00f9f050(&DAT_016d91b0);
      if (iVar1 != 0) {
        iVar1 = FUN_00f9f050(&DAT_016d91d0);
        if (iVar1 != 0) {
          iVar1 = FUN_00f9f050(&DAT_016d91f0);
          if (iVar1 != 0) {
            iVar1 = FUN_00f9f050(&DAT_016d9210);
            if (iVar1 != 0) {
              iVar1 = FUN_00f9f050(&DAT_016d9238);
              if (iVar1 != 0) {
                iVar1 = FUN_00f9f050(&DAT_016d9260);
                if (iVar1 != 0) {
                  iVar1 = FUN_00f9f050(&DAT_016d9288);
                  if (iVar1 != 0) {
                    iVar1 = FUN_00f9f050(&DAT_016d92a8);
                    if (iVar1 != 0) {
                      iVar1 = FUN_00f9f050(&DAT_016d92c0);
                      if (iVar1 != 0) {
                        iVar1 = FUN_00f9f050(&DAT_016d92e8);
                        if (iVar1 != 0) {
                          iVar1 = FUN_00f9f050(&DAT_016d9310);
                          if (iVar1 != 0) {
                            iVar1 = FUN_00f9f050(&DAT_016d9338);
                            if (iVar1 != 0) {
                              iVar1 = FUN_00f9f050(&DAT_016d9360);
                              if (iVar1 != 0) {
                                iVar1 = FUN_00f9f050(&DAT_016d9388);
                                if (iVar1 != 0) {
                                  iVar1 = FUN_00f9f050(&DAT_016d93b0);
                                  if (iVar1 != 0) {
                                    iVar1 = FUN_00f9f050(&DAT_016d93d8);
                                    if (iVar1 != 0) {
                                      iVar1 = FUN_00f9f050(&DAT_016d9400);
                                      if (iVar1 != 0) {
                                        iVar1 = FUN_00f9f050(&DAT_016d9428);
                                        if (iVar1 != 0) {
                                          iVar1 = FUN_00f9f050(&DAT_016d9450);
                                          if (iVar1 != 0) {
                                            iVar1 = FUN_00f9f050(&DAT_016d9478);
                                            if (iVar1 != 0) {
                                              iVar1 = FUN_009ce370();
                                              return iVar1 != 0;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// 00EC4BA0  FUN_00ec4ba0  size=225  [run]
void FUN_00ec4ba0(void)

{
  FUN_009ce380();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  FUN_00f9cb70();
  return;
}

// 00EC4C90  FUN_00ec4c90  size=5028  [run]
undefined4 FUN_00ec4c90(void)

{
  int iVar1;
  
  iVar1 = cEspShaderBase::vf08();
  if (iVar1 != 0) {
    iVar1 = cEspShaderPixelNoClip::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d47a8,"g_EspShaderPixelNoClip");
    }
    iVar1 = cEspShaderMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4818,"g_EspShaderMask");
    }
    iVar1 = cEspShaderMask2::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4880,"g_EspShaderMask2");
    }
    iVar1 = EspShaderMask_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d48f0,"g_EspShaderMask_TexBlend");
    }
    iVar1 = cEspShaderBump::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4950,"g_EspShaderBump");
    }
    iVar1 = cEspShaderShimmer::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d49b8,"g_EspShaderShimmer");
    }
    iVar1 = cEspShaderShimmer2::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4a28,"g_EspShaderShimmer2");
    }
    iVar1 = EspShaderShimmer_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4a90,"g_EspShaderShimmer_TexBlend");
    }
    iVar1 = cEspShaderShimmerBlur::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4b10,"g_EspShaderShimmerBlur");
    }
    iVar1 = cEspShaderShimmerBlurSoftParticle::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4b88,"g_EspShaderShimmerBlurSoftParticle");
    }
    iVar1 = cEspShaderShimmerSoftPt::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4bf8,"g_EspShaderShimmerSoftPt");
    }
    iVar1 = cEspShaderShimmerSoftPtVC::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4c78,"g_EspShaderShimmerSoftPtVC");
    }
    iVar1 = cEspShaderTile::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4ce0,"g_EspShaderTile");
    }
    iVar1 = cEspShaderLine::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4d40,"g_EspShaderLine");
    }
    iVar1 = cEspShaderPointLight::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4dd0,"g_EspShaderPointLight");
    }
    iVar1 = cEspShaderPointLight3D::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4e38,"g_EspShaderPointLight3D");
    }
    iVar1 = cEspShaderPointLight3D_Fog::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4e98,"g_EspShaderPointLight3D_Fog");
    }
    iVar1 = cEspShaderPsMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4ef8,"g_EspShaderPsMask");
    }
    iVar1 = cEspShaderPsMask_Edge::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4f78,"g_EspShaderPsMask_Edge");
    }
    iVar1 = cEspShaderPsMask_Edge_Mul::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d4ff8,"g_EspShaderPsMask_Edge_Mul");
    }
    iVar1 = cEspShaderPsMask_EdgeOnly::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5060,"g_EspShaderPsMask_EdgeOnly");
    }
    iVar1 = cEspShaderPsMask_EdgeMulOnly::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d50f0,"g_EspShaderPsMask_EdgeMulOnly");
    }
    iVar1 = cEspShaderPsMask_SP::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5170,"g_EspShaderPsMask_SP");
    }
    iVar1 = cEspShaderAlMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d51d8,"g_EspShaderAlMask");
    }
    iVar1 = cEspShaderAlMaskVC::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5240,"g_EspShaderAlMaskVC");
    }
    iVar1 = EspShaderAlMask_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d52d0,"g_EspShaderAlMask_TexBlend");
    }
    iVar1 = EspShaderAlMaskVC_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5398,"g_EspShaderAlMaskVC_TexBlend");
    }
    iVar1 = cEspShaderSoftPT::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5408,"g_EspShaderSoftPT");
    }
    iVar1 = cEspShaderSoftPT_CA::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d54c8,"g_EspShaderSoftPT_CA");
    }
    iVar1 = cEspShaderSoftPT3D::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5528,"g_EspShaderSoftPT3D");
    }
    iVar1 = cEspShaderSoftPT3D_Fog::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5590,"g_EspShaderSoftPT3D_Fog");
    }
    iVar1 = cEspShaderSoftPT3DMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d55f8,"g_EspShaderSoftPT3DMask");
    }
    iVar1 = cEspShaderSoftPT3DMaskVC::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5660,"g_EspShaderSoftPT3DMaskVC");
    }
    iVar1 = cEspShaderSoftPT3DAlMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d56c8,"g_EspShaderSoftPT3DAlMask");
    }
    iVar1 = cEspShaderSoftPT3DAlMaskVC::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5738,"g_EspShaderSoftPT3DAlMaskVC");
    }
    iVar1 = EspShaderSoftPT3DAlMask_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d57a0,"g_EspShaderSoftPT3DAlMask_TexBlend");
    }
    iVar1 = cEspShaderSoftPTSubFade::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5830,"g_EspShaderSoftPTSubFade");
    }
    iVar1 = cEspShaderSoftPT3DSubFade::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d58b8,"g_EspShaderSoftPT3DSubFade");
    }
    iVar1 = cEspShaderSoftPTToneCurve::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5928,"g_EspShaderSoftPTToneCurve");
    }
    iVar1 = EspShaderSoftPT3DToneCurve_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5998,"g_EspShaderSoftPT3DToneCurve_TexBlend");
    }
    iVar1 = cEspShaderSoftPTToneCurveAlpha::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5a30,"g_EspShaderSoftPTToneCurveAlpha");
    }
    iVar1 = cEspShaderSoftPT3DToneCurve::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5b28,"g_EspShaderSoftPT3DToneCurve");
    }
    iVar1 = cEspShaderSoftPT3DToneCurveAlpha::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5b98,"g_EspShaderSoftPT3DToneCurveAlpha");
    }
    iVar1 = cEspShaderSoftPTMono::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5c00,"g_EspShaderSoftPTMono");
    }
    iVar1 = cEspShaderSoftPT3DMono::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5c60,"g_EspShaderSoftPT3DMono");
    }
    iVar1 = cEspShaderMono::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5cc8,"g_EspShaderMono");
    }
    iVar1 = EspShaderMonoBrightness::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5d30,"g_EspShaderMonoBrightness");
    }
    iVar1 = EspShaderMonoBrightnessAlmaskTexblend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5d98,"g_EspShaderMonoBrightnessAlmaskTexblend");
    }
    iVar1 = EspShaderMonoBrightnessAlmaskTexblendSoftPT::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5e00,"g_EspShaderMonoBrightnessAlmaskTexblendSoftPT");
    }
    iVar1 = cEspShaderMonoMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5e60,"g_EspShaderMonoMask");
    }
    iVar1 = cEspShaderWaterVelocity::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5ec8,"g_EspShaderWaterVelocity");
    }
    iVar1 = cEspShaderWaterComp::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d5f90,"g_EspShaderWaterComp");
    }
    iVar1 = cEspShaderWaterDraw::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6030,"g_EspShaderWaterDraw");
    }
    iVar1 = cEspShaderWaterWave::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d60d0,"g_EspShaderWaterWave");
    }
    iVar1 = cEspShaderSubFade::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6138,"g_EspShaderSubFade");
    }
    iVar1 = cEspShaderShimmerSubFade::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d61a0,"g_EspShaderShimmerSubFade");
    }
    iVar1 = cEspShaderFalseVolumeParticle::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6220,"g_EspShaderFalseVolumeParticle");
    }
    iVar1 = cEspShaderToneCurve::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d62d8,"g_EspShaderToneCurve");
    }
    iVar1 = cEspShaderToneCurveMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6358,"g_EspShaderToneCurveMask");
    }
    iVar1 = cEspShaderToneCurveMaskSp::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d63c8,"g_EspShaderToneCurveMaskSp");
    }
    iVar1 = cEspShaderToneCurveAlMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6428,"g_EspShaderToneCurveAlMask");
    }
    iVar1 = EspShaderToneCurveAlMaskVC::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d64e0,"g_EspShaderToneCurveAlMaskVC");
    }
    iVar1 = cEspShaderToneCurveAlMaskSp::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6578,"g_EspShaderToneCurveAlMaskSp");
    }
    iVar1 = EspShaderToneCurveMaskSp_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d65d8,"g_EspShaderToneCurveMaskSp_TexBlend");
    }
    iVar1 = EspShaderToneCurveAlMaskSp_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6638,"g_EspShaderToneCurveAlMaskSp_TexBlend");
    }
    iVar1 = cEspShaderToneCurveAlpha::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d66a0,"g_EspShaderToneCurveAlpha");
    }
    iVar1 = cEspShaderToneCurveMaskAlpha::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6708,"g_EspShaderToneCurveMaskAlpha");
    }
    iVar1 = cEspShaderToneCurveAlphaMaskSp::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6770,"g_EspShaderToneCurveAlphaMaskSp");
    }
    iVar1 = cEspShaderToneCurveAlphaAlMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d67d8,"g_EspShaderToneCurveAlphaAlMask");
    }
    iVar1 = cEspShaderToneCurveAlphaAlMaskSp::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6840,"g_EspShaderToneCurveAlphaAlMaskSp");
    }
    iVar1 = cEspShaderMultiParticle::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d68a8,"g_EspShaderMultiParticle");
    }
    iVar1 = cEspShaderMultiMoveParticle::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6968,"g_EspShaderMultiMoveParticle");
    }
    iVar1 = cEspShaderMultiParticleBillbord::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d69d0,"g_EspShaderMultiParticleBillbord");
    }
    iVar1 = cEspShaderMultiParticleBillbordAtl::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6a38,"g_EspShaderMultiParticleBillbordAtl");
    }
    iVar1 = cEspShaderMultiMoveParticleBillbord::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6ae8,"g_EspShaderMultiMoveParticleBillbord");
    }
    iVar1 = cEspShaderMultiMoveParticleBillbordAtl::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6b50,"g_EspShaderMultiMoveParticleBillbordAtl");
    }
    iVar1 = EspShaderMultiMoveParticleBillbord_Shimmer::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6c08,"g_EspShaderMultiMoveParticleBillbord_Shimmer");
    }
    iVar1 = cEspShaderMultiMoveParticleCylinder::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6cb8,"g_EspShaderMultiMoveParticleCylinder");
    }
    iVar1 = cEspShaderMultiMoveParticleCylinderBillbord::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6d50,"g_EspShaderMultiMoveParticleCylinderBillbord");
    }
    iVar1 = EspShaderMultiMoveParticleSSB::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6dd0,"g_EspShaderMultiMoveParticleSSB");
    }
    iVar1 = EspShaderMultiMoveParticleSSBAtl::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6e48,"g_EspShaderMultiMoveParticleSSBAtl");
    }
    iVar1 = cEspShaderMultiParticleWater::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6ea8,"g_EspShaderMultiParticleWater");
    }
    iVar1 = cEspShaderMultiParticle3D::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6f18,"g_EspShaderMultiParticle3D");
    }
    iVar1 = cEspShaderMultiMoveParticleWater::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d6f90,"g_EspShaderMultiMoveParticleWater");
    }
    iVar1 = cEspShaderMultiMoveLine::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7008,"g_EspShaderMultiMoveLine");
    }
    iVar1 = cEspShaderPolyLine::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7080,"g_EspShaderPolyLine");
    }
    iVar1 = cEspShaderMultiDirBillbord::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7108,"g_EspShaderMultiDirBillbord");
    }
    iVar1 = cEspShaderPointLight2::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7188,"g_EspShaderPointLight2");
    }
    iVar1 = cEspShaderRangeLight::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7210,"g_EspShaderRangeLight");
    }
    iVar1 = cEspShaderRangeLightTex::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7290,"g_EspShaderRangeLightTex");
    }
    iVar1 = cEspShaderScreenBlur::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7318,"g_EspShaderScreenBlur");
    }
    iVar1 = cEspShaderProjection::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7398,"g_EspShaderProjection");
    }
    iVar1 = cEspShaderProjectionTile::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7418,"g_EspShaderProjectionTile");
    }
    iVar1 = cEspShaderProjection_Fog::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d74a0,"g_EspShaderProjection_Fog");
    }
    iVar1 = cEspShaderProjection_Fog_Mul::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7520,"g_EspShaderProjection_Fog_Mul");
    }
    iVar1 = cEspShaderBlurMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d75a8,"g_EspShaderBlurMask");
    }
    iVar1 = cEspShaderBlurMaskSoftPt3D::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7628,"g_EspShaderBlurMaskSoftPt3D");
    }
    iVar1 = EffectShaderWaterFluidNormalMap::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d76b0,"g_EffectShaderWaterFluidNormalMap");
    }
    iVar1 = EffectShaderWaterFluidWaveSimulate::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d77a8,"g_EffectShaderWaterFluidWaveSimulate");
    }
    iVar1 = EspShaderLuminance::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7858,"g_EspShaderLuminance");
    }
    iVar1 = EspShaderLuminanceMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d78a8,"g_EspShaderLuminanceMask");
    }
    iVar1 = EspShaderLuminanceMaskVC::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d78f8,"g_EspShaderLuminanceMaskVC");
    }
    iVar1 = EspShaderLuminanceAlMask::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7948,"g_EspShaderLuminanceAlMask");
    }
    iVar1 = EspShaderLuminanceAlMaskVC::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d79b8,"g_EspShaderLuminanceAlMaskVC");
    }
    iVar1 = EspShaderLuminanceShimmer::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7a08,"g_EspShaderLuminanceShimmer");
    }
    iVar1 = EspShaderScreenDirtDetection::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7a58,"g_EspShaderScreenDirtDetection");
    }
    iVar1 = EspShaderScreenMaskDetection::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7aa8,"g_EspShaderScreenMaskDetection");
    }
    iVar1 = EspShaderToneCurve_TA::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7af8,"g_EspShaderToneCurve_TA");
    }
    iVar1 = EspShaderToneCurveSp_TA::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7b48,"g_EspShaderToneCurveSp_TA");
    }
    iVar1 = EspShaderToneCurveMask_TA::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7b98,"g_EspShaderToneCurveMask_TA");
    }
    iVar1 = EspShaderToneCurveMaskSp_TA::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7be8,"g_EspShaderToneCurveMaskSp_TA");
    }
    iVar1 = EspShaderToneCurveAlMask_TA::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7c38,"g_EspShaderToneCurveAlMask_TA");
    }
    iVar1 = EspShaderToneCurveAlMaskSp_TA::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7c88,"g_EspShaderToneCurveAlMaskSp_TA");
    }
    iVar1 = EspShaderTexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7cd8,"g_EspShaderTexBlend");
    }
    iVar1 = EspShaderSoftPT3D_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7d48,"g_EspShaderSoftPT3D_TexBlend");
    }
    iVar1 = EspShaderToneCurve_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7d98,"g_EspShaderToneCurve_TexBlend");
    }
    iVar1 = EspShaderToneCurveAlpha_TexBlend::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7de8,"g_EspShaderToneCurveAlpha_TexBlend");
    }
    iVar1 = cEspShaderBlockNoize::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7e38,"g_EspShaderBlockNoize");
    }
    iVar1 = cEspShaderBase_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7e88,"g_EspShaderBase_G");
    }
    iVar1 = cEspShaderBase_M_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7ed8,"g_EspShaderBase_M_G");
    }
    iVar1 = cEspShaderBase_A_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7f28,"g_EspShaderBase_A_G");
    }
    iVar1 = cEspShaderBase_S_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7f78,"g_EspShaderBase_S_G");
    }
    iVar1 = cEspShaderBase_B_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d7fc8,"g_EspShaderBase_B_G");
    }
    iVar1 = cEspShaderBase_MS_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8030,"g_EspShaderBase_MS_G");
    }
    iVar1 = cEspShaderBase_AS_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8098,"g_EspShaderBase_AS_G");
    }
    iVar1 = cEspShaderBase_SB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8100,"g_EspShaderBase_SB_G");
    }
    iVar1 = cEspShaderBase_MB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8168,"g_EspShaderBase_MB_G");
    }
    iVar1 = cEspShaderBase_AB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d81d0,"g_EspShaderBase_AB_G");
    }
    iVar1 = cEspShaderBase_MSB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8220,"g_EspShaderBase_MSB_G");
    }
    iVar1 = cEspShaderBase_ASB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8270,"g_EspShaderBase_ASB_G");
    }
    iVar1 = cEspShaderToneCurveRGB_MB::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d82c0,"g_EspShaderToneCurveRGB_MB");
    }
    iVar1 = cEspShaderToneCurveRGB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8310,"g_EspShaderToneCurveRGB_G");
    }
    iVar1 = cEspShaderToneCurveRGB_S_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8360,"g_EspShaderToneCurveRGB_S_G");
    }
    iVar1 = cEspShaderToneCurveRGB_M_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d83b0,"g_EspShaderToneCurveRGB_M_G");
    }
    iVar1 = cEspShaderToneCurveRGB_MS_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8420,"g_EspShaderToneCurveRGB_MS_G");
    }
    iVar1 = cEspShaderToneCurveRGB_A_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8470,"g_EspShaderToneCurveRGB_A_G");
    }
    iVar1 = cEspShaderToneCurveRGB_AS_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d84e0,"g_EspShaderToneCurveRGB_AS_G");
    }
    iVar1 = cEspShaderToneCurveRGB_B_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8530,"g_EspShaderToneCurveRGB_B_G");
    }
    iVar1 = cEspShaderToneCurveRGB_SB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d85a0,"g_EspShaderToneCurveRGB_SB_G");
    }
    iVar1 = cEspShaderToneCurveRGB_MB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8610,"g_EspShaderToneCurveRGB_MB_G");
    }
    iVar1 = cEspShaderToneCurveRGB_MSB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8680,"g_EspShaderToneCurveRGB_MSB_G");
    }
    iVar1 = cEspShaderToneCurveRGB_AB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d86f0,"g_EspShaderToneCurveRGB_AB_G");
    }
    iVar1 = cEspShaderToneCurveRGB_ASB_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8760,"g_EspShaderToneCurveRGB_ASB_G");
    }
    iVar1 = cEspShaderToneCurveA_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d87b0,"g_EspShaderToneCurveA_G");
    }
    iVar1 = cEspShaderToneCurveA_S_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8800,"g_EspShaderToneCurveA_S_G");
    }
    iVar1 = cEspShaderToneCurveA_M_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8850,"g_EspShaderToneCurveA_M_G");
    }
    iVar1 = cEspShaderToneCurveA_MS_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d88a0,"g_EspShaderToneCurveA_MS_G");
    }
    iVar1 = cEspShaderToneCurveA_A_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d88f0,"g_EspShaderToneCurveA_A_G");
    }
    iVar1 = cEspShaderToneCurveA_AS_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8940,"g_EspShaderToneCurveA_AS_G");
    }
    iVar1 = cEspShaderToneCurveA_B_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8990,"g_EspShaderToneCurveA_B_G");
    }
    iVar1 = cEspShaderToneCurveRGBA_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d89e0,"g_EspShaderToneCurveRGBA_G");
    }
    iVar1 = cEspShaderToneCurveRGBA_S_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8a50,"g_EspShaderToneCurveRGBA_S_G");
    }
    iVar1 = cEspShaderToneCurveRGBA_M_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8ac0,"g_EspShaderToneCurveRGBA_M_G");
    }
    iVar1 = cEspShaderToneCurveRGBA_MS_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8b30,"g_EspShaderToneCurveRGBA_MS_G");
    }
    iVar1 = cEspShaderToneCurveRGBA_A_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8ba0,"g_EspShaderToneCurveRGBA_A_G");
    }
    iVar1 = cEspShaderToneCurveRGBA_AS_G::vf08();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d8c10,"g_EspShaderToneCurveRGBA_AS_G");
    }
    iVar1 = FUN_009e8540();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00EC6040  FUN_00ec6040  size=1945  [run]
void FUN_00ec6040(void)

{
  FUN_009d5ea0();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderLine::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  cEspShaderShimmer_DAF::vf04();
  FUN_00f5b4b0();
  return;
}

// 00EC67E0  FUN_00ec67e0  size=294  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00ec67e0(int *param_1)

{
  DAT_01eddb08 = *param_1;
  DAT_01eddb0c = param_1[1];
  _DAT_01eddb10 = param_1[2];
  DAT_01eddb14 = param_1[3];
  _DAT_01eddb18 = param_1[4];
  DAT_01eddb04 = &DAT_01be1010 + param_1[1] * 0x50;
  DAT_01eddb00 = &DAT_01be1010 + *param_1 * 0x50;
  _DAT_01eddafc = &DAT_01be1010 + param_1[2] * 0x50;
  _DAT_01eddaf8 = &DAT_01be1010 + param_1[3] * 0x50;
  DAT_018d6350 = param_1[4];
  DAT_01eddaf0 = 0;
  _DAT_01ede148 = 0;
  _DAT_01ede144 = 0;
  _DAT_01ede140 = 0;
  _DAT_01ede13c = 0;
  DAT_01eddaec = param_1[1] + 9;
  _DAT_01ede134 = 0;
  _DAT_01ede130 = 0;
  _DAT_01ede12c = 0;
  _DAT_01ede128 = 0;
  _DAT_01ede120 = 0;
  _DAT_01ede11c = 0;
  _DAT_01ede118 = 0;
  _DAT_01ede114 = 0;
  _DAT_01ede14c = 0x3f800000;
  _DAT_01ede138 = 0x3f800000;
  _DAT_01ede124 = 0x3f800000;
  _DAT_01ede110 = 0x3f800000;
  D3DXMatrixInverse(&DAT_01ede150,0,&DAT_01ede110);
  FUN_00dd7240();
  return 1;
}

// 00EC6910  FUN_00ec6910  size=10  [run]
void FUN_00ec6910(void)

{
  FUN_00dd7270();
  return;
}

// 00EC6920  FUN_00ec6920  size=6  [run]
undefined * FUN_00ec6920(void)

{
  return &DAT_01ede150;
}

// 00EC6930  FUN_00ec6930  size=6  [run]
undefined4 FUN_00ec6930(void)

{
  return DAT_01eddb04;
}

// 00EC6940  FUN_00ec6940  size=6  [run]
undefined4 FUN_00ec6940(void)

{
  return DAT_01eddb00;
}

// 00EC6970  FUN_00ec6970  size=6  [run]
undefined4 FUN_00ec6970(void)

{
  return DAT_01eddaf0;
}

// 00EC6980  FUN_00ec6980  size=32  [run]
bool FUN_00ec6980(int param_1)

{
  if (DAT_01eddb0c == param_1) {
    return true;
  }
  return DAT_01eddb08 == param_1;
}

// 00EC69A0  FUN_00ec69a0  size=6  [run]
undefined4 FUN_00ec69a0(void)

{
  return DAT_01eddaec;
}

// 00EC69C0  FUN_00ec69c0  size=6  [run]
undefined4 FUN_00ec69c0(void)

{
  return DAT_018d6350;
}

// 00EC69D0  FUN_00ec69d0  size=225  [run]
void FUN_00ec69d0(void)

{
  undefined1 local_34 [48];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_34;
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  FUN_00f9bf20(local_34);
  FUN_00a28210(&DAT_01be1010 + DAT_01eddb0c * 0x50,0,0,1);
  FUN_00f98b60(0,0,0,1);
  FUN_00a28210(&DAT_01be1010 + DAT_01eddb08 * 0x50,0,0,1);
  FUN_00f98b60(0,0,0,1);
  FUN_00a28210(&DAT_01be1010 + DAT_01eddb14 * 0x50,0,0,1);
  FUN_00f98b60(0,0,0,1);
  DAT_01eddaf0 = 1;
  thunk_FUN_00fa5730(local_34,1);
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  __security_check_cookie(local_4 ^ (uint)local_34);
  return;
}

// 00EC6AC0  FUN_00ec6ac0  size=19  [run]
void FUN_00ec6ac0(int param_1)

{
  if (param_1 != -1) {
    FUN_00f9a2a0();
    return;
  }
  return;
}

// 00EC6B10  FUN_00ec6b10  size=736  [run]
void FUN_00ec6b10(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  float10 fVar5;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar3 = FUN_00f9a380(&local_3c,*(undefined4 *)(unaff_ESI + 0x18));
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_ESI + 0x78) = *(undefined4 *)(unaff_ESI + 0x84);
    *(undefined4 *)(unaff_ESI + 0x70) = *(undefined4 *)(unaff_ESI + 0x7c);
    *(undefined4 *)(unaff_ESI + 0x74) = *(undefined4 *)(unaff_ESI + 0x80);
    return;
  }
  local_40 = 0.0;
  if ((((*(float *)(unaff_ESI + 0x50) == *(float *)(unaff_ESI + 0x60)) &&
       (*(float *)(unaff_ESI + 0x54) == *(float *)(unaff_ESI + 100))) &&
      (*(float *)(unaff_ESI + 0x58) == *(float *)(unaff_ESI + 0x68))) &&
     (*(float *)(unaff_ESI + 0x5c) == *(float *)(unaff_ESI + 0x6c))) {
    local_20 = *(float *)(unaff_ESI + 0x50) - *(float *)(unaff_ESI + 0x30);
    local_1c = *(float *)(unaff_ESI + 0x54) - *(float *)(unaff_ESI + 0x34);
    local_18 = *(float *)(unaff_ESI + 0x58) - *(float *)(unaff_ESI + 0x38);
    fVar5 = (float10)FUN_00fdef70();
    local_40 = (float)fVar5;
  }
  else {
    local_30 = *(float *)(unaff_ESI + 0x60) - *(float *)(unaff_ESI + 0x50);
    local_2c = *(float *)(unaff_ESI + 100) - *(float *)(unaff_ESI + 0x54);
    local_28 = *(float *)(unaff_ESI + 0x68) - *(float *)(unaff_ESI + 0x58);
    local_24 = *(float *)(unaff_ESI + 0x6c) - *(float *)(unaff_ESI + 0x5c);
    if (((*(float *)(unaff_ESI + 0x50) != *(float *)(unaff_ESI + 0x30)) ||
        (*(float *)(unaff_ESI + 0x54) != *(float *)(unaff_ESI + 0x34))) ||
       ((*(float *)(unaff_ESI + 0x58) != *(float *)(unaff_ESI + 0x38) ||
        (*(float *)(unaff_ESI + 0x5c) != *(float *)(unaff_ESI + 0x3c))))) {
      local_20 = *(float *)(unaff_ESI + 0x30) - *(float *)(unaff_ESI + 0x50);
      local_1c = *(float *)(unaff_ESI + 0x34) - *(float *)(unaff_ESI + 0x54);
      local_18 = *(float *)(unaff_ESI + 0x38) - *(float *)(unaff_ESI + 0x58);
      FUN_00ddf460(&local_30,&local_30);
      local_40 = local_18 * local_28 + local_20 * local_30 + local_1c * local_2c;
    }
  }
  local_38 = *(float *)(unaff_ESI + 0x48) * 0.5;
  fVar5 = (float10)FUN_00fe0ac0();
  local_34 = (float)fVar5 * local_40 + (float)fVar5 * local_40;
  fVar1 = *(float *)(unaff_ESI + 0x4c) * local_34;
  if (local_34 == 0.0) {
    local_34 = 0.0;
  }
  else {
    local_34 = *(float *)(unaff_ESI + 0x20) / local_34;
  }
  local_38 = 0.0;
  if (fVar1 != 0.0) {
    local_38 = *(float *)(unaff_ESI + 0x1c) / fVar1;
  }
  iVar3 = FUN_00fdbc60();
  iVar4 = FUN_00fdbc60();
  *(int *)(unaff_ESI + 0x74) = iVar3 * iVar4;
  iVar3 = FUN_00f99150();
  if (iVar3 == 2) {
    *(int *)(unaff_ESI + 0x74) = *(int *)(unaff_ESI + 0x74) * 2;
  }
  else if (iVar3 == 4) {
    *(int *)(unaff_ESI + 0x74) = *(int *)(unaff_ESI + 0x74) * 4;
  }
  else if (iVar3 == 8) {
    *(int *)(unaff_ESI + 0x74) = *(int *)(unaff_ESI + 0x74) * 8;
  }
  *(int *)(unaff_ESI + 0x70) = local_3c;
  if (*(int *)(unaff_ESI + 0x74) == 0) {
    *(undefined4 *)(unaff_ESI + 0x78) = 0;
    return;
  }
  fVar1 = (float)local_3c / (float)*(int *)(unaff_ESI + 0x74);
  uVar2 = 0;
  if ((0.0 < fVar1) && (uVar2 = 0x3f800000, fVar1 <= 1.0)) {
    *(float *)(unaff_ESI + 0x78) = fVar1;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x78) = uVar2;
  return;
}

// 00EC6DF0  FUN_00ec6df0  size=3  [run]
undefined4 __fastcall FUN_00ec6df0(undefined4 param_1)

{
  return param_1;
}

// 00EC6E40  FUN_00ec6e40  size=346  [run]
undefined4 __thiscall FUN_00ec6e40(int param_1,float param_2,float param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_1 + 0xb);
  if (*(byte *)(param_1 + 10) == bVar1) {
    return 1;
  }
  if (param_3 <= *(float *)(param_1 + 0x14)) {
    return 1;
  }
  fVar2 = *(float *)(param_1 + 0x18) * param_2 + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x10) = fVar2;
  param_2._0_2_ = (ushort)(int)ROUND(fVar2);
  *(ushort *)(param_1 + 0xc) = param_2._0_2_;
  if ((param_2._0_2_ <= bVar1) && (param_2._0_2_ < *(ushort *)(param_1 + 0xe))) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x1c) & 0x40000000) == 0) {
    if (-1 < (int)*(uint *)(param_1 + 0x1c)) {
      FUN_00dd5650(&DAT_016d6e1c);
      if (*(byte *)(param_1 + 0xb) != 0) {
        *(float *)(param_1 + 0x10) = (float)*(byte *)(param_1 + 0xb);
        return 0;
      }
      *(float *)(param_1 + 0x10) = (float)(int)(*(ushort *)(param_1 + 0xe) - 1);
      return 0;
    }
    fVar2 = (float)*(byte *)(param_1 + 10);
    *(float *)(param_1 + 0x10) = fVar2;
    fVar3 = (float)*(ushort *)(param_1 + 0xe);
    if (fVar3 < fVar2 == (fVar3 == fVar2)) goto LAB_00ec6f66;
    fVar2 = (float)(int)(*(ushort *)(param_1 + 0xe) - 1);
  }
  else if (bVar1 == 0) {
    fVar2 = (float)(int)(*(ushort *)(param_1 + 0xe) - 1);
  }
  else {
    fVar2 = (float)bVar1;
  }
  *(float *)(param_1 + 0x10) = fVar2;
LAB_00ec6f66:
  param_2._0_2_ = (ushort)(int)ROUND(*(float *)(param_1 + 0x10));
  *(ushort *)(param_1 + 0xc) = param_2._0_2_;
  return 1;
}

