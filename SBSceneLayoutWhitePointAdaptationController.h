//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBMainDisplaySceneLayoutViewController;

@interface SBSceneLayoutWhitePointAdaptationController : NSObject
{
    SBMainDisplaySceneLayoutViewController *_layoutViewController;
}

+ (BOOL)_isInteractiveUpdateEnabled;
+ (double)_defaultAnimationDuration;
+ (id)_harmonySettings;
+ (id)_defaultAnimationSettings;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_applicationForLayoutElement:(id)arg1;
- (int)_whitePointAdaptivityStyleForLayoutElement:(id)arg1;
- (id)_whitePointAdaptivityStylesForLayoutState;
- (int)_whitePointAdaptivityStyleForActiveAlert;
- (void)_updateWhitePointAdaptationStrengthWithFromApplications:(id)arg1 toApplications:(id)arg2 fromAlert:(id)arg3 toAlert:(id)arg4 fromPercentage:(double)arg5 toPercentage:(double)arg6 animationSettings:(id)arg7 interactive:(BOOL)arg8;
- (void)_updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 fromPercentage:(double)arg2 toPercentage:(double)arg3 animationSettings:(id)arg4 cancelled:(BOOL)arg5 interactive:(BOOL)arg6;
- (void)_updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1;
- (BOOL)_loggingEnabled;
- (void)updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 fromPercentage:(double)arg2 toPercentage:(double)arg3 animationSettings:(id)arg4 interactive:(BOOL)arg5;
- (void)updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 animationTransitionContext:(id)arg2;
- (void)updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1;
- (void)updateWhitePointAdaptationStrength;
- (id)init;

@end

