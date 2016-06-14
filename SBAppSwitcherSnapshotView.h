//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

@class CAShapeLayer, NSObject<OS_dispatch_queue>, SBAppSwitcherSettings, SBApplication, SBDisplayItem, SBFakeStatusBarView, SBZoomableCrossfadeView, UIView, _SBAppSwitcherSnapshotContext;

@interface SBAppSwitcherSnapshotView : SBSwitcherWallpaperPageContentView
{
    SBDisplayItem *_displayItem;
    SBApplication *_application;
    UIView *_containerView;
    SBAppSwitcherSettings *_settings;
    _SBAppSwitcherSnapshotContext *_snapshotContext;
    SBFakeStatusBarView *_fakeStatusBar;
    float _cornerRadius;
    CAShapeLayer *_solidColorBackstopLayer;
    SBZoomableCrossfadeView *_updateCrossfadeView;
    SBZoomableCrossfadeView *_zoomUpCrossfadeView;
    _SBAppSwitcherSnapshotContext *_zoomUpSnapshotContext;
    _SBAppSwitcherSnapshotContext *_deferredUpdateSnapshotContext;
    BOOL _isVisible;
    BOOL _presenting;
    BOOL _interactive;
    BOOL _invalidated;
    BOOL _loadedImage;
    BOOL _needsZoomUpImage;
    BOOL _needsTwoAppZoomUpBackground;
    BOOL _preferDownscaledSnapshot;
    int _appSnapshotUpdatedSequenceID;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    BOOL _shouldTransitionToDefaultPng;
    struct CGRect _statusBarLayoutFrame;
}

+ (id)_fallbackDefaultBackgroundColor;
+ (id)appSwitcherSnapshotViewForDisplayItem:(id)arg1 orientation:(int)arg2 preferringDownscaledSnapshot:(BOOL)arg3 loadAsync:(BOOL)arg4 withQueue:(id)arg5;
@property(nonatomic) struct CGRect statusBarLayoutFrame; // @synthesize statusBarLayoutFrame=_statusBarLayoutFrame;
@property BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) SBZoomableCrossfadeView *updateCrossfadeView; // @synthesize updateCrossfadeView=_updateCrossfadeView;
@property(nonatomic) BOOL shouldTransitionToDefaultPng; // @synthesize shouldTransitionToDefaultPng=_shouldTransitionToDefaultPng;
@property(readonly, copy, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
- (void).cxx_destruct;
- (void)_prepareStatusBarIfNeededForTransitionRequest:(id)arg1 initialProgress:(float)arg2;
- (void)_createStatusBarIfNeeded;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateTranslucency;
- (struct CGAffineTransform)_rotationTransformForOrientation;
- (int)_transformOrientation;
- (int)_containerOrientation;
- (struct CGRect)_snapshotImageFrameForContext:(id)arg1;
- (void)_snapshotImageLoaded:(struct CGImage *)arg1 forSnapshotContext:(id)arg2 downscaled:(BOOL)arg3;
- (void)_loadImageAsyncFromSnapshotContext:(id)arg1;
- (void)_loadImageAsyncFromSnapshotContext:(id)arg1 displayItem:(id)arg2;
- (BOOL)_queue_keepGoing;
- (struct CGImage *)_queue_createDecodedImageIfPossible:(struct CGImage *)arg1;
- (id)_contextForAvailableSnapshotWithLayoutState:(id)arg1 preferringDownscaled:(BOOL)arg2 defaultImageOnly:(BOOL)arg3;
- (void)_loadSnapshotAsyncPreferringDownscaled:(BOOL)arg1;
- (void)_loadZoomUpSnapshotSyncForTransitionRequest:(id)arg1;
- (void)_loadSnapshotSyncPreferringDownscaled:(BOOL)arg1;
- (id)_syncImageFromSnapshot:(id)arg1;
- (void)_layoutContainer;
- (struct CGRect)_frameForBackstopLayer;
- (void)_crossfadeToNewSnapshotImage:(id)arg1 withSnapshotContext:(id)arg2;
- (void)_crossfadeToZoomUpViewIfNecessaryForTransitionRequest:(id)arg1;
- (BOOL)_needsDifferentSnapshotForMedusaForLayoutState:(id)arg1;
- (void)_setCornerRadiusIfNecessaryForSnapshotImageView:(id)arg1;
- (void)_configureSnapshotImageView:(id)arg1;
- (void)_snapshotChanged:(id)arg1;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)_layoutFakeStatusBar;
- (void)interactionDidEnd:(BOOL)arg1;
- (void)viewDismissing:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4;
- (void)invalidate;
- (void)setOrientation:(int)arg1 orientationBehavior:(int)arg2 preferringDownscaledSnapshot:(BOOL)arg3;
- (void)layoutSubviews;
- (float)cornerRadius;
- (void)setCornerRadius:(float)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDisplayItem:(id)arg1 application:(id)arg2 orientation:(int)arg3 preferringDownscaledSnapshot:(BOOL)arg4 async:(BOOL)arg5 withQueue:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

@end
