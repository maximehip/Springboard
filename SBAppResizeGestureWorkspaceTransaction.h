//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBMainDisplaySceneLayoutResizeUIManagerDelegate.h"

@class FBUIApplicationSceneDeactivationAssertion, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer, SBLayoutElementViewController, SBMainDisplaySceneLayoutResizeUIManager, SBMainDisplaySceneLayoutViewController, SBMainWorkspaceTransaction, SBWorkspaceTransitionRequest;

@interface SBAppResizeGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBMainDisplaySceneLayoutResizeUIManagerDelegate>
{
    NSMutableArray *_transactionCompletionBlocks;
    NSMutableArray *_finalActionCompletionBlocks;
    NSMutableDictionary *_cachedSnapshotViews;
    NSMutableDictionary *_cachedPlaceholderViews;
    double _previousSlideOffPercent;
    SBWorkspaceTransitionRequest *_suspendPrimaryApplicationWorkspaceTransitionRequest;
    SBWorkspaceTransitionRequest *_suspendSideApplicationWorkspaceTransitionRequest;
    BOOL _resizingSpeculatively;
    BOOL _hasResizedSpeculatively;
    BOOL _slidingOffOverlaySideApp;
    BOOL _finishingWithOverlaySideAppDismissal;
    BOOL _lastGestureWasFullResizeGesture;
    BOOL _performingFinalAction;
    SBMainDisplaySceneLayoutViewController *_layoutViewController;
    SBLayoutElementViewController *_primaryLayoutElementController;
    SBLayoutElementViewController *_sideLayoutElementController;
    FBUIApplicationSceneDeactivationAssertion *_appDeactivationAssertion;
    SBMainDisplaySceneLayoutResizeUIManager *_resizeUIManager;
    unsigned int _lastResizeGestureRegion;
    SBMainWorkspaceTransaction *_currentWorkspaceTransaction;
    NSDate *_currentWorkspaceTransactionStartDate;
    NSTimer *_longPressPinTimer;
    NSTimer *_pinUnpinTapTimer;
    unsigned int _pendingFinalActionCount;
    unsigned int _currentGestureIdentifier;
}

+ (float)_rubberbandingStartScreenEdgeMargin;
+ (id)resizeGestureZoomAnimationFactory;
+ (id)resizeGestureZoomAnimationSettings;
@property(nonatomic) unsigned int currentGestureIdentifier; // @synthesize currentGestureIdentifier=_currentGestureIdentifier;
@property(nonatomic) unsigned int pendingFinalActionCount; // @synthesize pendingFinalActionCount=_pendingFinalActionCount;
@property(nonatomic, getter=isPerformingFinalAction) BOOL performingFinalAction; // @synthesize performingFinalAction=_performingFinalAction;
@property(retain, nonatomic) NSTimer *pinUnpinTapTimer; // @synthesize pinUnpinTapTimer=_pinUnpinTapTimer;
@property(retain, nonatomic) NSTimer *longPressPinTimer; // @synthesize longPressPinTimer=_longPressPinTimer;
@property(nonatomic) BOOL lastGestureWasFullResizeGesture; // @synthesize lastGestureWasFullResizeGesture=_lastGestureWasFullResizeGesture;
@property(nonatomic, getter=isFinishingWithOverlaySideAppDismissal) BOOL finishingWithOverlaySideAppDismissal; // @synthesize finishingWithOverlaySideAppDismissal=_finishingWithOverlaySideAppDismissal;
@property(nonatomic, getter=isSlidingOffOverlaySideApp) BOOL slidingOffOverlaySideApp; // @synthesize slidingOffOverlaySideApp=_slidingOffOverlaySideApp;
@property(nonatomic) BOOL hasResizedSpeculatively; // @synthesize hasResizedSpeculatively=_hasResizedSpeculatively;
@property(nonatomic, getter=isResizingSpeculatively) BOOL resizingSpeculatively; // @synthesize resizingSpeculatively=_resizingSpeculatively;
@property(copy, nonatomic) NSDate *currentWorkspaceTransactionStartDate; // @synthesize currentWorkspaceTransactionStartDate=_currentWorkspaceTransactionStartDate;
@property(retain, nonatomic) SBMainWorkspaceTransaction *currentWorkspaceTransaction; // @synthesize currentWorkspaceTransaction=_currentWorkspaceTransaction;
@property(nonatomic) unsigned int lastResizeGestureRegion; // @synthesize lastResizeGestureRegion=_lastResizeGestureRegion;
@property(retain, nonatomic) SBMainDisplaySceneLayoutResizeUIManager *resizeUIManager; // @synthesize resizeUIManager=_resizeUIManager;
@property(readonly, nonatomic) FBUIApplicationSceneDeactivationAssertion *appDeactivationAssertion; // @synthesize appDeactivationAssertion=_appDeactivationAssertion;
@property(readonly, nonatomic) SBLayoutElementViewController *sideLayoutElementController; // @synthesize sideLayoutElementController=_sideLayoutElementController;
@property(readonly, nonatomic) SBLayoutElementViewController *primaryLayoutElementController; // @synthesize primaryLayoutElementController=_primaryLayoutElementController;
@property(readonly, nonatomic) SBMainDisplaySceneLayoutViewController *layoutViewController; // @synthesize layoutViewController=_layoutViewController;
- (void).cxx_destruct;
- (void)resizeUIManager:(id)arg1 willChangeToState:(unsigned int)arg2;
- (void)resizeUIManager:(id)arg1 willChangeDisplayModeOfAppController:(id)arg2 toDisplayMode:(int)arg3;
- (id)resizeUIManager:(id)arg1 cachedResizingPlaceholderViewForLayoutElementViewController:(id)arg2;
- (void)resizeUIManager:(id)arg1 didCreateResizingPlacholderView:(id)arg2 forLayoutElementViewController:(id)arg3;
- (id)resizeUIManager:(id)arg1 cachedSceneSnapshotViewForLayoutElementViewController:(id)arg2;
- (void)resizeUIManager:(id)arg1 didCreateSceneSnapshotView:(id)arg2 forLayoutElementViewController:(id)arg3;
- (void)_finishWithCompletionType:(int)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_didInterruptWithReason:(id)arg1;
- (BOOL)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (id)_workspaceTransitionRequestForCurrentLayoutStateWithSuspendingPrimaryApplication:(BOOL)arg1 suspendingSideApplication:(BOOL)arg2;
- (void)_tellElementViewsWeEndedResize;
- (void)_tellElementViewsWeWillBeginResize;
- (void)_invalidateTimers;
- (void)_pinUnpinTapTimerDidFire:(id)arg1;
- (void)_longPressPinTimerDidFire:(id)arg1;
- (void)_performWhenCurrentFinalActionCompletesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_performWhenCurrentWorkspaceTransactionCompletesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (void)_restartResizeUIWithGestureRecognizer:(id)arg1;
- (id)_transactionForExecutingApplicationTransitionContext:(id)arg1 eventLabel:(id)arg2;
- (struct CGRect)_appFrameForElementWithRole:(int)arg1 inLayoutState:(id)arg2 withSideAppPresentationStyle:(int)arg3 sideAppWidth:(int)arg4 inCoordinateSpace:(id)arg5 withHeight:(float)arg6;
- (void)_animateElementViewsForFinalAction:(unsigned int)arg1 animationFactory:(id)arg2 initialVelocity:(float)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned int)_requiredResizeUIStateBeforeDismissingResizeUIForFinalAction:(unsigned int)arg1;
- (unsigned int)_requiredResizeUIStateBeforeAnimatingViewsForFinalAction:(unsigned int)arg1;
- (unsigned int)_affectedLayoutRolesForFinalAction:(unsigned int)arg1;
- (BOOL)_shouldObscureAppsBeforePerformingFinalAction:(unsigned int)arg1;
- (id)_transitionContextForFinalAction:(unsigned int)arg1;
- (unsigned int)_finalActionForGestureState:(int)arg1 gestureRegion:(unsigned int)arg2 distanceTraveled:(float)arg3 numberOfTouches:(unsigned int)arg4;
- (void)_performFinalAction:(unsigned int)arg1 velocity:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_resizeGestureFinishedWithState:(int)arg1 gestureRegion:(unsigned int)arg2 velocity:(float)arg3 distanceTraveled:(float)arg4 numberOfTouches:(unsigned int)arg5;
- (void)_resizeGestureFinishedWithState:(int)arg1 dividerPosition:(float)arg2 velocity:(float)arg3 absoluteDistanceTraveled:(float)arg4 directionalDistanceTraveled:(float)arg5 numberOfTouches:(unsigned int)arg6;
- (void)_resizeGestureDidUpdate:(id)arg1;
- (void)_beginSpeculativeResizeIfAppropriate;
- (BOOL)_canTransitionIntoFullResizeWithLayoutState:(id)arg1;
- (void)_updateResizeUIFromGestureRecognizer:(id)arg1;
- (void)_updateSlideOffUIWithDistance:(float)arg1 gestureRecognizer:(id)arg2;
- (void)_updateSlideOffUIFromGestureRecognizer:(id)arg1;
- (void)_updateFullResizeUIFromGestureRecognizer:(id)arg1;
- (void)_getSideAppTransform:(struct CGAffineTransform *)arg1 forSideTranslationAmount:(float)arg2 sideScaleAmount:(float)arg3;
- (void)_getPrimaryAppTransform:(struct CGAffineTransform *)arg1 forPrimaryTranslationAmount:(float)arg2 primaryScaleAmount:(float)arg3;
- (void)_getPrimaryAppTransform:(struct CGAffineTransform *)arg1 sideAppTransform:(struct CGAffineTransform *)arg2 forPrimaryTranslationAmount:(float)arg3 primaryScaleAmount:(float)arg4 sideTranslationAmount:(float)arg5 sideScaleAmount:(float)arg6;
- (void)_getPrimaryAppTransform:(struct CGAffineTransform *)arg1 sideAppTransform:(struct CGAffineTransform *)arg2 grabberHorizontalOffset:(float *)arg3 forResizeGestureRegion:(unsigned int)arg4 location:(float)arg5 allowRubberbanding:(BOOL)arg6;
- (void)_getPrimaryAppFrame:(struct CGRect *)arg1 sideAppFrame:(struct CGRect *)arg2 grabberHorizontalOffset:(float *)arg3 forResizeGestureLocation:(float)arg4 region:(unsigned int)arg5 allowRubberbanding:(BOOL)arg6;
- (float)_maxRubberBandOffsetForAppWidth:(float)arg1;
- (float)_rubberBandOffsetForOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 outside:(char *)arg5;
- (int)_sideAppWidthForResizeGestureRegion:(unsigned int)arg1;
- (BOOL)_isResizeGestureInSpeculativeResizeRegionForLocation:(float)arg1;
- (unsigned int)_resizeGestureRegionForLocation:(float)arg1;
- (void)_bailOutOfResizeUIInAnUnsightlyManner;
- (void)_dismissResizeUI;
- (void)_dismissResizeUIAnimated:(BOOL)arg1;
- (id)resizeGestureRecognizer;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 layoutViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

