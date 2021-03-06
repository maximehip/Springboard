//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSTransactionObserver.h"
#import "SBTouchTemplateGestureRecognizerDelegate.h"
#import "SBWallpaperObserver.h"
#import "UIWindowDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSCountedSet, NSString, SBAppStatusBarSettingsAssertion, SBAppSwitcherSettings, SBDismissOnlyAlertItem, SBHomeScreenWindow, SBIconContentView, SBScrunchAppsSystemGestureWorkspaceTransaction, SBScrunchSystemGestureRecognizer, SBSwitchAppList, SBSwitchAppSystemGestureRecognizer, SBSwitchAppSystemGestureWorkspaceTransaction, SBSwitcherForcePressSystemGestureRecognizer, SBSwitcherSlideUpSystemGestureRecognizer, UIStatusBar, UIView;

@interface SBUIController : NSObject <SBWallpaperObserver, _UISettingsKeyObserver, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, UIWindowDelegate>
{
    SBHomeScreenWindow *_window;
    SBIconContentView *_iconsView;
    UIView *_contentView;
    UIStatusBar *_fakeSpringBoardStatusBar;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    unsigned int _ignoringEvents:1;
    unsigned int _lastVolumeDownToControl:1;
    unsigned int _isBatteryCharging:1;
    unsigned int _isOnAC:1;
    unsigned int _isConnectedToExternalChargingAccessory:1;
    unsigned int _isConnectedToUnsupportedChargingAccessory:1;
    unsigned int _isConnectedToChargeIncapablePowerSource:1;
    id _volumeHandler;
    float _batteryCapacity;
    BOOL _supportsDetailedBatteryCapacity;
    int _batteryLoggingStartCapacity;
    SBDismissOnlyAlertItem *_unsupportedChargerAlert;
    SBAppSwitcherSettings *_switcherSettings;
    SBScrunchSystemGestureRecognizer *_scrunchSystemGestureRecognizer;
    SBScrunchAppsSystemGestureWorkspaceTransaction *_scrunchAppsTransaction;
    SBSwitcherSlideUpSystemGestureRecognizer *_switcherSlideUpGestureRecognizer;
    SBSwitcherForcePressSystemGestureRecognizer *_switcherForcePressRecognizer;
    SBSwitchAppSystemGestureWorkspaceTransaction *_switchAppTransaction;
    SBSwitchAppSystemGestureRecognizer *_switchAppSystemGestureRecognizer;
    SBSwitchAppList *_switchAppList;
    int _ignoreSwitchAppListClearRequests;
    BOOL _handlingHomePress;
    NSCountedSet *_contentRequiringReasons;
    BOOL _wasTornDownWhenBeganRequiring;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (struct CGAffineTransform)_transformAndFrame:(struct CGRect *)arg1 forLaunchImageContextHostViewWithOrientation:(int)arg2 statusBarHeight:(float)arg3 inJailRect:(struct CGRect)arg4;
+ (struct CGAffineTransform)_transformForStatusBarWithOrientation:(int)arg1 scaleFactor:(float)arg2;
+ (id)_effectiveStatusBarSettingsForSnapshot:(id)arg1 application:(id)arg2;
+ (struct CGRect)_referenceBoundsForApp:(id)arg1;
+ (void)addStatusBarToView:(id)arg1 withSize:(struct CGSize)arg2 destinationFrame:(struct CGRect)arg3 interfaceOrientation:(int)arg4 scaleFactor:(float)arg5 styleRequest:(id)arg6 statusBarDescriptor:(id)arg7 hidden:(BOOL)arg8;
+ (id)zoomViewWithIOSurfaceSnapshotOfApp:(id)arg1 sceneID:(id)arg2 screen:(id)arg3 statusBarDescriptor:(id)arg4;
+ (id)zoomViewForApplication:(id)arg1 sceneID:(id)arg2 interfaceOrientation:(int)arg3 statusBarDescriptor:(id)arg4 imageName:(id)arg5 decodeImage:(BOOL)arg6;
+ (id)zoomViewForApplication:(id)arg1 sceneID:(id)arg2 interfaceOrientation:(int)arg3 statusBarDescriptor:(id)arg4 decodeImage:(BOOL)arg5;
+ (id)zoomViewForApplication:(id)arg1 screen:(id)arg2 interfaceOrientation:(int)arg3 snapshot:(id)arg4 snapshotSize:(struct CGSize)arg5 statusBarDescriptor:(id)arg6 decodeImage:(BOOL)arg7;
+ (id)zoomViewForContextHostView:(id)arg1 application:(id)arg2 sceneID:(id)arg3 statusBarDescriptor:(id)arg4;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 remainderFrame:(struct CGRect *)arg2 orientation:(int)arg3 statusBarStyleRequest:(id)arg4 hidden:(BOOL)arg5;
+ (struct CGRect)statusBarFrameForSnapshotFrame:(struct CGRect)arg1 orientation:(int)arg2 statusBarStyleRequest:(id)arg3 hidden:(BOOL)arg4;
@property(nonatomic) BOOL wasTornDownWhenBeganRequiring; // @synthesize wasTornDownWhenBeganRequiring=_wasTornDownWhenBeganRequiring;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_legibilityPrototypeSettings;
- (id)_currentFolderLegibilitySettings;
- (id)_legibilitySettings;
- (void)updateStatusBarLegibility;
- (void)_updateLegibility;
- (void)wallpaperDidChangeForVariant:(int)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (void)programmaticSwitchAppGestureMoveToRight;
- (void)programmaticSwitchAppGestureMoveToLeft;
- (void)_programmaticSwitchAppToApp:(id)arg1 reverseAnimation:(BOOL)arg2;
- (BOOL)_isIgnoringSwitchAppListClearRequests;
- (void)_endIgnoringSwitchAppListClearRequests;
- (void)_beginIgnoringSwitchAppListClearRequests;
- (void)clearSwitchAppList;
- (id)_switchAppList;
- (void)_switchAppGestureBegan:(float)arg1;
- (void)_handleSwitchAppGesture:(id)arg1;
- (BOOL)_switchAppSystemGestureShouldBegin:(id)arg1;
- (void)_handleSwitcherForcePressGesture:(id)arg1;
- (BOOL)_appSwitcherForcePressSystemGestureShouldBegin:(id)arg1;
- (void)_handleSwitcherSlideUpGesture:(id)arg1;
- (BOOL)_appSwitcherSystemGestureShouldBegin:(id)arg1;
- (void)_scrunchGestureBegan;
- (void)_handleScrunchGesture:(id)arg1;
- (BOOL)_scrunchSystemGestureShouldBegin:(id)arg1;
- (unsigned char)headsetBatteryCapacity;
- (BOOL)isHeadsetBatteryCharging;
- (BOOL)isHeadsetDocked;
- (void)disableAnimationForNextIconRotation;
- (void)setAllowIconRotation:(BOOL)arg1 forReason:(id)arg2;
- (void)forceIconInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)noteStatusBarHeightChanged:(id)arg1;
- (BOOL)supportsDetailedBatteryCapacity;
- (BOOL)isConnectedToUnsupportedChargingAccessory;
- (void)setIsConnectedToUnsupportedChargingAccessory:(BOOL)arg1;
- (void)externalChargingAccessoriesChanged;
- (void)ACPowerChanged;
- (void)_possiblyWakeForPowerStatusChangeWithUnlockSource:(int)arg1;
- (BOOL)isConnectedToChargeIncapablePowerSource;
- (BOOL)isConnectedToExternalChargingSource;
- (BOOL)isOnAC;
- (BOOL)isBatteryCharging;
- (int)batteryCapacityAsPercentage;
- (float)batteryCapacity;
- (void)playConnectedToPowerSoundIfNecessary;
- (void)updateBatteryState:(id)arg1;
- (void)cancelVolumeEvent;
- (void)handleVolumeEvent:(struct __IOHIDEvent *)arg1;
- (BOOL)_ignoringEvents;
- (void)_resumeEventsIfNecessary;
- (void)requestApplicationEventsEnabledIfNecessary;
- (void)_ignoreEvents;
- (BOOL)_allowSwitcherGesture;
- (BOOL)isAppSwitcherShowing;
- (void)_accessibilityWillBeginAppSwitcherRevealAnimation;
- (BOOL)handleMenuDoubleTap;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_awayControllerActivated:(id)arg1;
- (BOOL)clickedMenuButton;
- (BOOL)isHandlingHomeButtonPress;
- (BOOL)_handleButtonEventToSuspendDisplays:(BOOL)arg1 displayWasSuspendedOut:(char *)arg2;
- (int)_dismissSheetsAndDetermineAlertStateForMenuClickOrSystemGesture;
- (void)_switchToHomeScreenWallpaperAnimated:(BOOL)arg1;
- (void)stopRestoringIconList;
- (void)endRequiringContentForReason:(id)arg1;
- (void)beginRequiringContentForReason:(id)arg1;
- (BOOL)_isIconListAndBarTornDown;
- (void)tearDownIconListAndBar;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)restoreContentAndUnscatterIconsAnimated:(BOOL)arg1;
- (void)restoreContentUpdatingStatusBar:(BOOL)arg1;
- (void)restoreContent;
- (void)_closeOpenFolderIfNecessary;
- (void)_hideKeyboard;
- (void)_deviceLockStateChanged:(id)arg1;
- (void)activateApplication:(id)arg1 fromIcon:(id)arg2 location:(int)arg3;
- (void)activateApplication:(id)arg1;
- (id)alertItemForPreventingLaunchOfApp:(id)arg1;
- (void)launchIcon:(id)arg1 fromLocation:(int)arg2 context:(id)arg3;
- (void)getRotationContentSettings:(CDStruct_3421d26a *)arg1 forWindow:(id)arg2;
- (id)window;
- (id)contentView;
- (void)animateFakeStatusBarWithParameters:(id)arg1 transition:(id)arg2;
- (void)setFakeSpringBoardStatusBarVisible:(BOOL)arg1;
- (id)_fakeSpringBoardStatusBar;
- (id)fakeStatusBarStyleRequestForStyle:(int)arg1;
- (void)configureFakeSpringBoardStatusBarWithStyleRequest:(id)arg1;
- (BOOL)isFakeStatusBarStyleEffectivelyDoubleHeight:(int)arg1;
- (void)configureFakeSpringBoardStatusBarWithDefaultStyleRequestForStyle:(int)arg1;
- (void)removeFakeSpringBoardStatusBar;
- (BOOL)promptUnlockForAppActivation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_setHidden:(BOOL)arg1;
- (void)_addRemoveSwitcherGesture;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

