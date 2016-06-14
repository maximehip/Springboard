//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class BKSDisplayRenderOverlay, BSAnimationSettings, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController
{
    BKSDisplayRenderOverlay *_overlay;
    BSAnimationSettings *_animationSettings;
    BOOL _waitsForAppActivation;
    SBSceneLayoutAnimationWrapperView *_layoutWrapperView;
}

@property(nonatomic) BOOL waitsForAppActivation; // @synthesize waitsForAppActivation=_waitsForAppActivation;
@property(retain, nonatomic) BSAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (BOOL)_shouldDismissBanner;
- (id)_animationProgressDependencies;
- (BOOL)_waitsForApplicationActivationIfNecessary;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

