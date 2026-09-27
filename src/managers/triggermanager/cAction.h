// REFINED
// Trigger::cAction<T> -- per-action-type wrapper around a trigger action record.
// Refined from RTTI (bases: Trigger::cActionAbstract) and the raw decompilation of
// src/managers/triggermanager/cAction.cpp. Each instantiation provides its own member
// definitions as explicit specializations in cAction.cpp.
#pragma once

namespace Trigger {

class cActionAbstract;

// action types used as template arguments (defined by their own files)
class cActArray;
class cActCamera;
class cActSubphase;
class cActTeleportExplicit;
class cActTeleportIndex;
class cActDoorOpen;
class cActStaFlagOn;
class cActCamOff;
class cActVerseStart;
class cActVerseEnd;
class cActSoftEvent;
class cActPhase;
class cActEnemy;
class cActEnemyRetreatByName;
class cActEnemyRetreatByNumber;
class cActEnemyClearByName;
class cActEnemyClearByNumber;
class cActEffect;
class cActResult;
class cActTurnOff;
class cActSE;
class cActFuncall;
class cActTask;
class cActAnimation;
class cActAnimationOrigin;
class cActTerminate;
class cActFollowPath;
class cActCameraDistance;
class cActCameraDistanceOff;
class cActCameraFocus;
class cActCameraFocusOff;
class cActCameraAngle;
class cActCameraAngleOff;
class cActPhaseSubphase;
class cActDoorClose;
class cActDebugMessage;
class cActStage;
class cActSubstage;
class cActText;
class cActTextOut;
class cActFlagOn;
class cActFlagOff;
class cActLoadRoom;
class cActUnloadRoom;
class cActMoveShounen;
class cActPosIndex;
class cActEmMsg;
class cActScene;
class cActEmMsgDirect;
class cActCollision;
class cActBgm;
class cActBgmSimple;
class cActSESimple;
class cActSound;
class cActCollisionOff;
class cActSeEntity;
class cActRoomEvent;
class cActEffectRoom;
class cActPlayerDie;
class cActEnemyMove;
class cActReqBehaviorInstruction;
class cActRaderMap;
class cActRadioInfoStart;
class cActRadioInfoEnd;
class cActConversationStart;
class cActConversationEnd;
class cActPathWayStart;
class cActPathWayEnd;
class cActTutorialStart;
class cActTutorialEnd;
class cActAreaBarrierOff;
class cActResultSetDisp;
class cActEmAnimation;
class cActPlAnimation;
class cActResultSetEndDisp;
class cActPlayerDeadDemo;
class cActHackEnd;
class cActCamFlag;
class cActObjAttach;
class cActQTEButtonDisp;
class cActMoviePlay;
class cActForceBattleFlag;
class cActGimmickEnable;
class cActFileRead;
class cActFileRelease;
class cActSceneMovie;
class cActStopObjectType;
class cActMvObjectType;
class cActGameFlagOn;
class cActGameFlagOff;
class cActSendSignal;
class cActSendSignalContext;
class cActCodecStart;
class cActObjMeshTrans;
class cActPlayerEffectOn;
class cActPlayerEffectOff;
class cActQTEButtonDispOff;
class cActObjectivePosSet;
class cActJammingDispStart;
class cActJammingDispEnd;
class cActReqGpBehaviorInstruction;
class cActStaFlagOff;
class cActUIAnimStart;
class cActSetNextCodec;
class cActStpFlagOff;
class cActStpFlagOn;
class cActSetUIAnimStartNone;
class cActSetGameoverNormalFlag;
class cActScrMeshOn;
class cActScrMeshOff;
class cActVmPlay;
class cActItemGet;
class cActActionMessageStart;
class cActActionMessageFlagClear;
class cActResultRecStart;
class cActResultRecEnd;
class cActScrCollisionOn;
class cActScrCollisionOff;
class cActEffectRoomLoop;
class cActEffectRoomLoopOff;
class cActMesDispOffSkip;
class cActEmMsgDirectByNumber;
class cActCodecEnd;
class cActAntiqScrMove;
class cActAntiqScrReqEnd;
class cActBattleAreaOn;
class cActBattleAreaOff;
class cActReqShotMissile;
class cActEmAnimationByNumber;
class cActObjectDisp;
class cActDoorLock;
class cActObjectCollision;
class cActVrComplete;
class cActVrMistake;
class cActGimmickFinish;
class cActGimmickRevert;
class cActEnemyHide;
class cActEnemyAppear;
class cActGimmickRevivalCancel;
class cActEffectOff;
class cActCodecEndAll;
class cActVrGoalPoint;
class cActFade;
class cActScrMeshOnAll;
class cActScrMeshOffAll;
class cActDoorDispOn;
class cActDoorDispOff;
class cActAddExp;
class cActCodecStartForSkip;
class cActItemDelInstallation;
class cActItemDelDropAll;
class cActGenericFlag;
class cActEnemyAppearResetPosByNumber;
class cActEnemyGroupAppearResetPosByNumber;
class cActEnemyDestroyByNumber;
class cActReqVrStart;
class cActPlayerMaxHp;
class cActPlayerMaxDryCell;
class cActSeObject;
class cActItemOnOff;
class cActNoCodecMenu;
class cActVrTimerStop;
class cActCamFocusLock;
class cActCamFocusLockOff;
class cActVrReturn;
class cActPlKgkPos;
class cActVrBm6000On;
class cActVrBm6000Off;
class cActPlKgkStop;
class cActDoorCloseDelay;
class cActDoorOpenDelay;
class cActFlagOnDlc2;
class cActFlagOffDlc2;
class cActFlagOnDlc3;
class cActFlagOffDlc3;
class cActResultRecStartClear;
class cActMainTrgActive;
class cActMainTrgSleep;
class cActSubTrgActive;
class cActSubTrgSleep;
class cActMainTrgAddFunc;
class cActSubTrgAddFunc;
class cActMainTrgDelFunc;
class cActSubTrgDelFunc;

// RTTI base: Trigger::cActionAbstract (vftable 0x016A89A8). The base header is not
// included here to keep this header self-contained; the only field used is at +0x04.
template <class T>
class cAction /* : public cActionAbstract */ {
public:
    // vftable, in slot order (slot = byte offset)
    virtual void *vf00();                         // +0x00  address of this action type's static descriptor
    virtual cAction *vf04(unsigned char flags);   // +0x04  scalar deleting destructor
    virtual void vf08();                          // +0x08
    virtual void vf0C();                          // +0x0C
    virtual void vf10();                          // +0x10
    virtual void vf14();                          // +0x14
    virtual int vf18();                           // +0x18
    virtual void vf1C(int *record);               // +0x1C  stores the action record
    virtual int vf20();                           // +0x20  record id (record[1]) or -1

    // fields (absolute byte offsets)
    int *&record() { return *(int **)((char *)this + 0x4); }   // +0x04  action record; record[1] = id
};

} // namespace Trigger
