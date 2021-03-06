//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSTransactionObserver.h"

@class NSString, SBMainSwitcherViewController, SBSwitcherForcePressSystemGestureTransaction;

@interface SBMainSwitcherGestureCoordinator : NSObject <BSTransactionObserver>
{
    SBSwitcherForcePressSystemGestureTransaction *_switcherForcePressTransaction;
    BOOL _waitingForTransactionCreation;
    SBMainSwitcherViewController *_switcherController;
    BOOL _switcherAnimationRevealing;
    BOOL _slideUpGestureRevealedOrDismissedSwitcher;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)transactionDidComplete:(id)arg1;
- (void)_releaseOrientationLock;
- (void)_lockOrientation;
- (BOOL)isAppSwitcherShowing;
- (void)_slideUpGestureCancelled;
- (void)_slideUpGestureEndedWithCompletionType:(int)arg1 cumulativePercentage:(float)arg2;
- (void)_slideUpGestureChanged:(float)arg1;
- (void)_slideUpGestureBegan;
- (void)_handleSwitcherSlideUpGesture:(id)arg1;
- (void)_forcePressGestureBeganWithGesture:(id)arg1;
- (void)_handleSwitcherForcePressGesture:(id)arg1;
- (void)handleSwitcherSlideUpGesture:(id)arg1;
- (void)handleSwitcherForcePressGesture:(id)arg1;
- (id)initWithMainSwitcherController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

