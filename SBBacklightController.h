//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CMPocketStateDelegate.h"
#import "SBDashBoardExternalEventHandling.h"

@class CMPocketStateManager, NSMutableSet, NSString, NSTimer, SBIdleTimerDefaults;

@interface SBBacklightController : NSObject <CMPocketStateDelegate, SBDashBoardExternalEventHandling>
{
    SBIdleTimerDefaults *_idleTimerDefaults;
    double _minimumLockIdleTime;
    NSTimer *_autoLockTimer;
    double _lastTimeIdleCausedDim;
    double _nextLockDurationAfterDim;
    unsigned int _disableAutoDimming:1;
    NSMutableSet *_idleTimerDisabledReasons;
    CMPocketStateManager *_pocketStateManager;
    int _pocketStateType;
    BOOL _isPendingScreenUnblankAfterCACommit;
    BOOL _undimmedForBulletinSinceLastUserEvent;
    BOOL _allowIdleTimerToBeReset;
    BOOL _useDashBoard;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isPendingScreenUnblankAfterCACommit; // @synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit;
- (void).cxx_destruct;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (double)defaultLockScreenDimInterval;
- (void)_resetLockScreenIdleTimerWithDuration:(double)arg1 mode:(int)arg2;
- (BOOL)_lockScreenWantsUserEventNotifications;
- (double)_currentLockScreenIdleTimerInterval;
- (void)_sendResetIdleTimerAction;
- (void)resetLockScreenIdleTimerWithDuration:(double)arg1;
- (void)resetLockScreenIdleTimer;
- (void)cancelLockScreenIdleTimer;
- (BOOL)handleEvent:(id)arg1;
- (BOOL)wouldHandleButtonEvent:(id)arg1;
@property(readonly, nonatomic) int participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)pocketStateManager:(id)arg1 didUpdateState:(int)arg2;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (void)preventIdleSleep;
- (void)allowIdleSleep;
- (void)startFadeOutAnimationFromLockSource:(int)arg1;
- (void)_batterySaverModeDidChange:(id)arg1;
- (void)startAllowingIdleTimer;
- (void)_requestedUserEventNotificationOccurred;
- (void)_userEventPresenceTimerExpired;
- (void)_userEventOccurred;
- (void)_userEventsDidIdle;
- (void)_lockScreenDimTimerFired;
- (void)_didIdle;
- (void)dimForIdleWarning;
- (void)_autoLockTimerFired:(id)arg1;
- (void)_startFadeOutAnimationFromLockSource:(int)arg1;
- (void)reloadDefaults;
- (void)autoLockPrefsChanged;
- (void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 silently:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBacklightFactor:(float)arg1 source:(int)arg2;
- (BOOL)shouldTurnOnScreenForBacklightSource:(int)arg1;
- (void)setBacklightFactorPending:(float)arg1;
- (id)idleTimerDisabledReasons;
@property(readonly, nonatomic) BOOL screenIsDim;
@property(readonly, nonatomic) BOOL screenIsOn;
- (void)_deferredScreenUnblankDone;
- (void)turnOnScreenFullyWithBacklightSource:(int)arg1;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)adjustIdleLockDuration:(double *)arg1 idleDimDuration:(double *)arg2;
- (void)_resetIdleTimerAndUndim:(BOOL)arg1 source:(int)arg2;
- (void)resetIdleTimerAndUndimForSource:(int)arg1;
- (void)resetIdleTimer;
- (void)_undimFromSource:(int)arg1;
- (double)_nextLockTimeDuration;
- (double)_nextIdleTimeDuration;
- (void)clearIdleTimer;
- (void)restoreBacklightFactorForProx;
- (void)setBacklightFactorToZeroForProx;
- (void)_cancelSetBacklightFactorToZeroAfterDelay;
- (void)_setBacklightFactorToZeroForProx;
- (void)_clearAutoLockTimer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
