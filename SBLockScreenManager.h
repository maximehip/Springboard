//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "PKPassLibraryDelegate.h"
#import "SBAlertObserver.h"
#import "SBDashBoardViewControllerDelegate.h"
#import "SBFPrivateAuthenticationObserver.h"
#import "SBLockScreenViewControllerDelegate.h"
#import "SBMesaUnlockBehaviorDelegate.h"
#import "SBPassKitPrearmTriggerDelegate.h"
#import "SBPasscodeEntryAlertViewControllerDelegate.h"
#import "SBUIBiometricEventMonitorDelegate.h"
#import "SBUIBiometricEventObserver.h"
#import "SBWallpaperColorProvider.h"

@class NSMutableSet, NSString, PKPassLibrary, SBDashBoardViewController, SBFAuthenticationAssertion, SBFUserAuthenticationController, SBLiftToWakeManager, SBLockScreenAutoUnlockAggregateRule, SBLockScreenDisabledAssertionManager, SBLockScreenUnlockRequest, SBLockScreenViewControllerBase, SBPassKitPrearmTrigger, SBPasscodeEntryAlertViewController;

@interface SBLockScreenManager : NSObject <BSDescriptionProviding, SBLockScreenViewControllerDelegate, SBUIBiometricEventObserver, SBUIBiometricEventMonitorDelegate, PKPassLibraryDelegate, SBPassKitPrearmTriggerDelegate, SBPasscodeEntryAlertViewControllerDelegate, SBAlertObserver, SBFPrivateAuthenticationObserver, SBDashBoardViewControllerDelegate, SBWallpaperColorProvider, SBMesaUnlockBehaviorDelegate>
{
    SBLockScreenViewControllerBase *_lockScreenViewController;
    BOOL _allowDisablePasscodeLockAssertion;
    BOOL _allowUILockUnlock;
    BOOL _isUILocked;
    BOOL _isWaitingToLockUI;
    SBLockScreenUnlockRequest *_unlockRequest;
    BOOL _uiHasBeenLockedOnce;
    BOOL _uiUnlocking;
    SBPasscodeEntryAlertViewController *_passcodeEntryController;
    SBFAuthenticationAssertion *_sustainAuthenticationWhileUIUnlockedAssertion;
    SBLockScreenDisabledAssertionManager *_lockScreenDisabledAssertionManager;
    BOOL _isInLostMode;
    BOOL _bioAuthenticatedWhileMenuButtonDown;
    NSMutableSet *_bioUnlockingDisabledRequesters;
    SBLockScreenAutoUnlockAggregateRule *_autoUnlockRuleAggregator;
    SBPassKitPrearmTrigger *_prearmTrigger;
    BOOL _presentingPassKitInterface;
    BOOL _justDismissedPassKitInterface;
    PKPassLibrary *_passLibrary;
    BOOL _didMatchBeforeTriggerTimeout;
    BOOL _useDashBoard;
    BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    id <SBFLockOutStatusProvider> _lockOutController;
    SBFUserAuthenticationController *_userAuthController;
    SBLiftToWakeManager *_liftToWakeManager;
    CDUnknownBlockType _unlockActionBlock;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)arg1;
@property(copy, nonatomic) CDUnknownBlockType unlockActionBlock; // @synthesize unlockActionBlock=_unlockActionBlock;
@property(retain, nonatomic, getter=_liftToWakeManager, setter=_setLiftToWakeManager:) SBLiftToWakeManager *liftToWakeManager; // @synthesize liftToWakeManager=_liftToWakeManager;
@property(retain, nonatomic, getter=_userAuthController, setter=_setUserAuthController:) SBFUserAuthenticationController *userAuthController; // @synthesize userAuthController=_userAuthController;
@property(retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id <SBFLockOutStatusProvider> lockOutController; // @synthesize lockOutController=_lockOutController;
@property(readonly) BOOL bioAuthenticatedWhileMenuButtonDown; // @synthesize bioAuthenticatedWhileMenuButtonDown=_bioAuthenticatedWhileMenuButtonDown;
@property(nonatomic, getter=isUIUnlocking) BOOL UIUnlocking; // @synthesize UIUnlocking=_uiUnlocking;
@property(readonly) BOOL isWaitingToLockUI; // @synthesize isWaitingToLockUI=_isWaitingToLockUI;
@property(readonly) BOOL isUILocked; // @synthesize isUILocked=_isUILocked;
@property(readonly, nonatomic) SBLockScreenViewControllerBase *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void).cxx_destruct;
- (void)extendedKeybagLockStateChanged:(BOOL)arg1;
- (void)alertDidDeactivate:(id)arg1;
- (void)passcodeEntryAlertViewControllerWantsEmergencyCall:(id)arg1;
- (BOOL)passcodeEntryAlertViewController:(id)arg1 authenticatePasscode:(id)arg2;
- (void)paymentServiceReceivedInterruption;
- (void)contactlessInterfaceDidDismissFromSource:(int)arg1;
- (void)_handlePassKitDismissal;
- (void)mesaUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (void)mesaUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (BOOL)biometricEventMonitorShouldRelockAfterBioUnlock:(id)arg1;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned int)arg2;
- (void)noteMenuButtonDoublePress;
- (void)noteMenuButtonSinglePress;
- (void)triggerDidFire:(id)arg1;
- (void)triggerDidTimeoutForDoubleTap:(id)arg1;
- (void)triggerDidTimeoutForFingerOn:(id)arg1;
- (BOOL)_shouldUnlockUIOnKeyDownEvent;
- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent *)arg1;
- (BOOL)_shouldBeInSetupMode;
- (void)_maybeLaunchSetupForcingCheckIfNotBricked:(BOOL)arg1;
- (void)activationChanged:(id)arg1;
- (void)enableLostModePlugin;
- (BOOL)isInLostMode;
- (void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)arg1;
- (void)activateLostModeForRemoteLock:(BOOL)arg1;
- (void)_lockFeaturesForRemoteLock:(BOOL)arg1;
- (void)remoteLock:(BOOL)arg1;
- (void)_frontmostDisplayChanged:(id)arg1;
- (void)_lockScreenDimmed:(id)arg1;
- (void)_handleBacklightFadeEnded;
- (void)_handleBacklightLevelChanged:(id)arg1;
- (void)_resetOrRestoreStateChanged:(id)arg1;
- (void)_deviceBlockedChanged:(id)arg1;
- (void)_deviceLockedChanged:(id)arg1;
- (void)attemptUnlockWithMesa;
- (void)attemptUnlockWithPasscode:(id)arg1;
- (BOOL)_attemptUnlockWithPasscode:(id)arg1 mesa:(BOOL)arg2 finishUIUnlock:(BOOL)arg3;
- (BOOL)_attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(BOOL)arg2;
- (void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (void)_playAuthenticationFeedbackForSuccess:(BOOL)arg1;
- (void)_postLockCompletedNotification:(BOOL)arg1;
- (void)_noteStartupTransitionDidBegin;
- (void)_noteStartupTransitionWillBegin;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_performLockScreenAlertDeactivationTransition;
- (void)_performLockScreenAlertActivationTransitionAnimated:(BOOL)arg1 dimInAnimation:(BOOL)arg2 animationProvider:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_prepareWallpaperForUnlockedMode;
- (void)_prepareWallpaperForLockedMode;
- (BOOL)_shouldProvideMesaFailureFeedback;
- (void)updateSpringBoardStatusBarForLockScreenTeardown;
- (BOOL)unlockWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isPasscodeEntryAlertVisible;
- (BOOL)_setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPasscodeVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_runUnlockActionBlock:(BOOL)arg1;
- (BOOL)isLockScreenDisabledForAssertion;
- (void)removeLockScreenDisableAssertion:(id)arg1;
- (void)addLockScreenDisableAssertion:(id)arg1;
- (void)_handleExternalUIUnlock:(id)arg1;
- (BOOL)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2;
- (BOOL)unlockUIFromSource:(int)arg1 withOptions:(id)arg2;
- (BOOL)_canAttemptRealUIUnlockIgnoringBacklightNonsenseWithReason:(out id *)arg1;
- (void)_sendUILockStateChangedNotification;
- (void)_lockUI;
- (void)_reallySetUILocked:(BOOL)arg1;
- (void)_setUILocked:(BOOL)arg1;
- (void)_createAuthenticationAssertion;
- (void)_clearAuthenticationLockAssertion;
- (void)_relockUIForButtonPress:(BOOL)arg1 afterCall:(BOOL)arg2;
- (void)_activateLockScreenAnimated:(BOOL)arg1 animationProvider:(CDUnknownBlockType)arg2 automatically:(BOOL)arg3 inScreenOffMode:(BOOL)arg4 dimInAnimation:(BOOL)arg5 dismissNotificationCenter:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (id)averageColorForCurrentWallpaperInScreenRect:(struct CGRect)arg1;
- (void)dashBoardController:(id)arg1 unlockWithRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dashBoardViewControllerIrisPlayingDidFinish:(id)arg1;
@property(readonly) BOOL isBioUnlockingDisabled;
- (void)setBioUnlockingDisabled:(BOOL)arg1 forRequester:(id)arg2;
- (BOOL)handleTransitionRequest:(id)arg1;
@property(readonly, nonatomic) id <SBAlertingNotificationDestination> notificationDestination;
@property(readonly, nonatomic) SBDashBoardViewController *dashBoardViewController;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2;
@property(readonly) BOOL isLockScreenVisible;
@property(readonly) BOOL isLockScreenActive;
@property(readonly) BOOL shouldPlayLockSound;
@property(readonly) BOOL shouldHandlePocketStateChanges;
- (BOOL)shouldLockUIAfterEndingCall;
- (BOOL)_shouldLockAfterEndingFaceTimeCall;
- (BOOL)_shouldLockAfterEndingTelephonyCall;
- (BOOL)hasUIEverBeenLocked;
- (id)_newLockScreenController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

