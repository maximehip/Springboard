//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class NSString, SBAnimationSettings, SBBounceSettings, SBHorizontalScrollFailureRecognizerSettings, SBLockScreenMesaSettings, SBLockScreenPasscodeSettings;

@interface SBLockScreenSettings : SBUISettings
{
    BOOL _showNowPlaying;
    BOOL _showContinuityIcon;
    BOOL _showUserPicture;
    BOOL _showLogoutButton;
    BOOL _alwaysPutPluginsBelowScrollView;
    BOOL _killsInsecureDrawingApps;
    SBBounceSettings *_verticalBounceSettings;
    SBBounceSettings *_horizontalBounceSettings;
    SBLockScreenPasscodeSettings *_passcodeSettings;
    SBLockScreenMesaSettings *_mesaSettings;
    SBHorizontalScrollFailureRecognizerSettings *_horizontalScrollFailureRecognizerSettings;
    SBAnimationSettings *_unlockToPhoneWallpaperOutSettings;
    SBAnimationSettings *_unlockToPhoneWallpaperInSettings;
    SBAnimationSettings *_unlockWallpaperOutSettings;
    SBAnimationSettings *_unlockWallpaperInSettings;
    float _mainToCameraViewSlideCompletionPercentage;
    float _mainToTodayViewSlideCompletionPercentage;
    float _unlockSlideForIdleTimerDisabledPercentage;
    float _unlockSlideForIdleTimerDisabledPercentageIPad;
    float _notificationScrollForIdleTimerDisabledOffset;
    float _notificationScrollForIdleTimerDisabledOffsetIPad;
    float _appGrabberSlideUpVelocityThreshold;
    float _unlockSwipeWallpaperAlpha;
    NSString *_lockScreenCode;
}

+ (void)_restartSpringBoard;
+ (id)settingsControllerModule;
@property(copy, nonatomic) NSString *lockScreenCode; // @synthesize lockScreenCode=_lockScreenCode;
@property BOOL killsInsecureDrawingApps; // @synthesize killsInsecureDrawingApps=_killsInsecureDrawingApps;
@property BOOL alwaysPutPluginsBelowScrollView; // @synthesize alwaysPutPluginsBelowScrollView=_alwaysPutPluginsBelowScrollView;
@property float unlockSwipeWallpaperAlpha; // @synthesize unlockSwipeWallpaperAlpha=_unlockSwipeWallpaperAlpha;
@property float appGrabberSlideUpVelocityThreshold; // @synthesize appGrabberSlideUpVelocityThreshold=_appGrabberSlideUpVelocityThreshold;
@property float notificationScrollForIdleTimerDisabledOffsetIPad; // @synthesize notificationScrollForIdleTimerDisabledOffsetIPad=_notificationScrollForIdleTimerDisabledOffsetIPad;
@property float notificationScrollForIdleTimerDisabledOffset; // @synthesize notificationScrollForIdleTimerDisabledOffset=_notificationScrollForIdleTimerDisabledOffset;
@property float unlockSlideForIdleTimerDisabledPercentageIPad; // @synthesize unlockSlideForIdleTimerDisabledPercentageIPad=_unlockSlideForIdleTimerDisabledPercentageIPad;
@property float unlockSlideForIdleTimerDisabledPercentage; // @synthesize unlockSlideForIdleTimerDisabledPercentage=_unlockSlideForIdleTimerDisabledPercentage;
@property float mainToTodayViewSlideCompletionPercentage; // @synthesize mainToTodayViewSlideCompletionPercentage=_mainToTodayViewSlideCompletionPercentage;
@property float mainToCameraViewSlideCompletionPercentage; // @synthesize mainToCameraViewSlideCompletionPercentage=_mainToCameraViewSlideCompletionPercentage;
@property(retain) SBAnimationSettings *unlockWallpaperInSettings; // @synthesize unlockWallpaperInSettings=_unlockWallpaperInSettings;
@property(retain) SBAnimationSettings *unlockWallpaperOutSettings; // @synthesize unlockWallpaperOutSettings=_unlockWallpaperOutSettings;
@property(retain) SBAnimationSettings *unlockToPhoneWallpaperInSettings; // @synthesize unlockToPhoneWallpaperInSettings=_unlockToPhoneWallpaperInSettings;
@property(retain) SBAnimationSettings *unlockToPhoneWallpaperOutSettings; // @synthesize unlockToPhoneWallpaperOutSettings=_unlockToPhoneWallpaperOutSettings;
@property(retain) SBHorizontalScrollFailureRecognizerSettings *horizontalScrollFailureRecognizerSettings; // @synthesize horizontalScrollFailureRecognizerSettings=_horizontalScrollFailureRecognizerSettings;
@property(retain) SBLockScreenMesaSettings *mesaSettings; // @synthesize mesaSettings=_mesaSettings;
@property(retain) SBLockScreenPasscodeSettings *passcodeSettings; // @synthesize passcodeSettings=_passcodeSettings;
@property(retain) SBBounceSettings *horizontalBounceSettings; // @synthesize horizontalBounceSettings=_horizontalBounceSettings;
@property(retain) SBBounceSettings *verticalBounceSettings; // @synthesize verticalBounceSettings=_verticalBounceSettings;
@property BOOL showLogoutButton; // @synthesize showLogoutButton=_showLogoutButton;
@property BOOL showUserPicture; // @synthesize showUserPicture=_showUserPicture;
@property BOOL showContinuityIcon; // @synthesize showContinuityIcon=_showContinuityIcon;
@property BOOL showNowPlaying; // @synthesize showNowPlaying=_showNowPlaying;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end

