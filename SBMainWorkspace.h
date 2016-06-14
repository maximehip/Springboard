//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspace.h"

#import "BSTransactionObserver.h"
#import "BSWatchdogDelegate.h"
#import "FBApplicationProcessObserver.h"
#import "FBProcessManagerObserver.h"
#import "FBSceneManagerObserver.h"
#import "FBSystemServiceDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "SBReachabilityObserver.h"
#import "SBStarkScreenControllerObserver.h"
#import "SBStarkScreenManagerObserver.h"

@class BSEventQueueLock, BSWatchdog, FBDisplayLayoutTransition, FBSceneManager, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer, SBAlertManager, SBAppStatusBarSettingsAssertion, SBMainAlertManager, SBScreenTimeTrackingController, SBWindow, SBWindowSelfHostWrapper, SBWorkspaceTransaction;

@interface SBMainWorkspace : SBWorkspace <BSTransactionObserver, SBAlertManagerDelegate, SBAlertManagerObserver, SBStarkScreenManagerObserver, SBStarkScreenControllerObserver, SBReachabilityObserver, FBSystemServiceDelegate, FBProcessManagerObserver, FBApplicationProcessObserver, BSWatchdogDelegate, FBSceneManagerObserver, MCProfileConnectionObserver>
{
    BOOL _initialized;
    FBSceneManager *_sceneManager;
    SBMainAlertManager *_alertManager;
    BSEventQueueLock *_suspensionLock;
    BOOL _alertManagerIsDeactivatingAlert;
    BOOL _alertManagerIsActivatingLockAlert;
    BOOL _medusaEnabled;
    SBScreenTimeTrackingController *_screenTimeTrackingController;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    SBWorkspaceTransaction *_currentTransaction;
    BSEventQueueLock *_currentTransactionLock;
    BSWatchdog *_transactionWatchdog;
    NSTimer *_relaunchTimer;
    NSMutableArray *_applicationsToRelaunch;
    SBWindow *_reachabilityWindow;
    SBWindowSelfHostWrapper *_reachabilityHostWrapper;
    SBWindow *_reachabilityEffectWindow;
    NSMutableDictionary *_extensionHandlersByType;
    NSMutableSet *_foregroundAppPidsWhenDisplaySecureModeWasEnabled;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableDictionary *_appActivationFlagsForSceneUpdates;
    NSMutableSet *_activeSuspendedWorkspaceTransitions;
}

+ (id)debugDescription;
+ (id)_sharedInstanceWithNilCheckPolicy:(int)arg1;
+ (id)_instanceIfExists;
+ (id)sharedInstance;
+ (void)start;
@property(readonly, nonatomic) NSSet *foregroundAppPidsWhenDisplaySecureModeWasEnabled; // @synthesize foregroundAppPidsWhenDisplaySecureModeWasEnabled=_foregroundAppPidsWhenDisplaySecureModeWasEnabled;
@property(readonly, nonatomic) BOOL alertManagerIsActivatingLockAlert; // @synthesize alertManagerIsActivatingLockAlert=_alertManagerIsActivatingLockAlert;
@property(retain, nonatomic) SBWorkspaceTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(readonly, nonatomic) FBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(readonly, nonatomic, getter=isMedusaEnabled) BOOL medusaEnabled; // @synthesize medusaEnabled=_medusaEnabled;
- (void).cxx_destruct;
- (id)_handlerForExtensionPoint:(id)arg1;
- (void)_unregisterHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (void)_registerHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_exitReachabilityModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleReachabilityModeDeactivated;
- (void)handleRevealNotificationCenterGesture:(id)arg1;
- (void)handleCancelReachabilityRecognizer:(id)arg1;
- (void)handleReachabilityModeActivated;
- (void)_disableReachabilityImmediately:(BOOL)arg1;
- (void)starkScreenController:(id)arg1 didChangeStateFromState:(int)arg2;
- (void)starkScreenManagerDidChangeCurrentController:(id)arg1;
- (void)starkScreenManagerWillChangeCurrentController:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)watchdogFired:(id)arg1;
- (void)watchdogStarted:(id)arg1;
- (void)alertManager:(id)arg1 didRemoveAlert:(id)arg2 fromWindow:(id)arg3;
- (void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 topAlertDidChangeOrientationEventsEnabled:(id)arg2;
- (void)alertManager:(id)arg1 topAlert:(id)arg2 didChangeStatusBarVisibility:(BOOL)arg3;
- (void)alertManager:(id)arg1 topAlert:(id)arg2 requestsWallpaperStyleChangeWithAnimationFactory:(id)arg3;
- (void)alertManager:(id)arg1 didChangeTopAlertFromAlert:(id)arg2 toAlert:(id)arg3;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3;
- (void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(BOOL)arg3;
- (void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (unsigned int)alertManager:(id)arg1 defaultSupportedInterfaceOrientationsForAlert:(id)arg2;
- (int)alertManager:(id)arg1 defaultInterfaceOrientationForPresentationOfAlert:(id)arg2;
- (BOOL)alertManager:(id)arg1 defaultShouldAutorotateForAlert:(id)arg2;
- (id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2;
- (BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
- (float)sceneLevelForAlerts;
- (struct CGRect)sceneFrameForAlerts:(id)arg1;
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(BOOL)arg2;
- (void)systemService:(id)arg1 dataReset:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg2;
- (void)_attemptUnlockToApplication:(id)arg1 showPasscode:(BOOL)arg2 origin:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleOpenURLRequest:(id)arg1 application:(id)arg2 options:(id)arg3 activationSettings:(id)arg4 origin:(id)arg5 withResult:(CDUnknownBlockType)arg6;
- (void)_handleOpenApplicationRequest:(id)arg1 options:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (id)_validateRequestToOpenApplication:(id)arg1 options:(id)arg2 origin:(id)arg3 error:(out id *)arg4;
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (void)applicationProcessDebuggingStateDidChange:(id)arg1;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (void)applicationProcessDidLaunch:(id)arg1;
- (void)applicationProcessWillLaunch:(id)arg1;
- (void)processDidExit:(id)arg1;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3 success:(BOOL)arg4;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned int)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)_noteSceneUpdateDidActivateApp:(BOOL)arg1 withSceneIdentifier:(id)arg2;
- (void)_releaseStatusBarAssertion;
- (void)_acquireStatusBarAsssertionForStyle:(int)arg1 hidden:(BOOL)arg2 legibilitySettings:(id)arg3;
- (int)_statusBarStyleOverridesToCancelWithoutConsideringAlerts;
- (int)_statusBarStyleOverridesToCancel;
- (void)updateInterruptedByCallSettingsFrom:(id)arg1 to:(id)arg2;
- (BOOL)_applicationProcessExited:(id)arg1 withContext:(id)arg2;
- (BOOL)_handleSetupExited:(id)arg1;
- (void)_deviceWillDisableDisplaySecureMode:(id)arg1;
- (void)_deviceWillEnableDisplaySecureMode:(id)arg1;
- (void)_invalidateRelaunchTimer;
- (void)_memoryPressureRelieved:(id)arg1;
- (void)_memoryPressureWarn:(id)arg1;
- (void)_launchNextPendedAutoLaunchApp;
- (void)_scheduleRelaunchTimerIfNecessary;
- (void)_handleBuddyLaunchFinished;
- (id)_workspaceApplicationForBundleIdentifier:(id)arg1;
- (id)_workspaceApplicationForApplication:(id)arg1;
- (id)_applicationForIdentifier:(id)arg1;
- (void)_updateFrontMostApplicationEventPort;
- (void)_finishInitialization;
- (void)_resume;
- (void)_suspend;
- (void)_updateMedusaEnablementAndNotify:(BOOL)arg1;
- (void)_medusaPrefMayHaveChanged;
- (id)_selectTransactionForAppActivationRequest:(id)arg1 canDeactivateAlerts:(BOOL)arg2;
- (id)_selectTransactionForAppActivationRequest:(id)arg1;
- (id)_selectTransactionForAppExited:(id)arg1;
- (id)_selectTransactionForAppRelaunch:(id)arg1;
- (id)_selectTransactionForAppActivationUnderMainScreenLockRequest:(id)arg1;
- (id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)_selectTransactionForReturningToTheLockScreenWithRequest:(id)arg1 fromApp:(id)arg2;
- (id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg1 forceToBuddy:(BOOL)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)_selectTransactionForReturningToTheLockScreenWithResult:(CDUnknownBlockType)arg1;
- (id)_selectTransactionForAlertActivationRequest:(id)arg1;
- (BOOL)_setCurrentTransactionForRequest:(id)arg1 fallbackProvider:(CDUnknownBlockType)arg2;
- (BOOL)_executeApplicationTransitionRequest:(id)arg1;
- (BOOL)_executeAlertTransitionRequest:(id)arg1;
- (void)_determineSourceForTransitionRequest:(id)arg1;
- (BOOL)_preflightTransitionRequest:(id)arg1;
- (BOOL)_executeTransitionRequest:(id)arg1 options:(unsigned int)arg2 validator:(CDUnknownBlockType)arg3;
- (void)_initializeAndObserveDefaults;
- (id)layoutController;
@property(readonly, nonatomic) double autoLockTime;
@property(readonly, nonatomic) double autoDimTime;
@property(readonly, nonatomic, getter=isSpringBoardActive) BOOL springBoardActive;
- (id)transactionForTransitionRequestDeactivatingAlerts:(id)arg1;
- (id)transactionForTransitionRequest:(id)arg1;
- (id)_transactionForTransitionRequest:(id)arg1 canDeactivateAlerts:(BOOL)arg2;
- (BOOL)executeTransitionRequest:(id)arg1 withValidator:(CDUnknownBlockType)arg2;
- (BOOL)executeTransitionRequest:(id)arg1;
- (BOOL)requestTransitionWithOptions:(unsigned int)arg1 builder:(CDUnknownBlockType)arg2 validator:(CDUnknownBlockType)arg3;
- (BOOL)requestTransitionWithBuilder:(CDUnknownBlockType)arg1;
- (id)createRequestForApplicationActivation:(id)arg1 options:(unsigned int)arg2;
- (id)createRequestWithOptions:(unsigned int)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1 eventQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

