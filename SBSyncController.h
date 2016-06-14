//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, SBAppStatusBarSettingsAssertion, SBFAuthenticationAssertion;

@interface SBSyncController : NSObject
{
    int _restoreState;
    int _resetState;
    int _restoreTimerState;
    NSTimer *_restoreTimer;
    NSTimer *_progressTimer;
    BOOL _showingResetUI;
    BOOL _appsChangedDuringSync;
    int _restoreStartedNotifyToken;
    int _restoreEndedNotifyToken;
    SBFAuthenticationAssertion *_disableDeviceLockAssertion;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    BOOL _isAppSyncing;
    BOOL _inExtendedAppSyncCoalescePeriod;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_appInstallationNotification;
- (void)_setupRestoreTimer;
- (void)_restoreTimerFired:(id)arg1;
- (BOOL)_isBackupAgentRunning;
- (void)_invalidateRestoreTimer;
- (void)_didEndResetting;
- (void)_delayedBeginReset;
- (void)_updateProgress;
- (void)_delayedQuitApplications;
- (void)_didEndRestoring:(int)arg1;
- (void)_rebootNow;
- (void)_killApplicationsIfNecessary;
- (void)_notifyRestoreCanProceed;
- (void)_syncSessionDidEnd;
- (void)_syncSessionDidBegin;
- (void)_setRestoreState:(int)arg1;
- (void)_resetEnded:(id)arg1;
- (void)_resetStarted:(id)arg1;
- (void)_wirelessSyncEnded:(id)arg1;
- (void)_wirelessSyncBegan:(id)arg1;
- (BOOL)isInUse;
- (void)beginResetting:(BOOL)arg1;
- (int)resetState;
- (BOOL)isResetting;
- (void)cancelRestoring;
- (void)beginRestoring;
- (int)restoreState;
- (BOOL)isRestoring;
- (void)finishedTerminatingApplications;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;

@end
