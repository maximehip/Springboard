//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

#import "BSTransactionObserver.h"
#import "FBSynchronizedTransactionDelegate.h"

@class NSString, SBWorkspaceTransaction;

@interface SBLockScreenSlideUpToAppWorkspaceTransaction : SBMainWorkspaceTransaction <BSTransactionObserver, FBSynchronizedTransactionDelegate>
{
    BOOL _launchedApp;
    SBWorkspaceTransaction *_earlyLaunchTransaction;
    SBWorkspaceTransaction *_deferredFinalLaunchTransaction;
    BOOL _gestureCompleted;
    BOOL _didBegin;
    BOOL _notifiedSlaves;
}

- (void).cxx_destruct;
- (void)_notifySlavesIfNecessary;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)addSlaveTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)launchAppUnderLockScreenWithTransaction:(id)arg1;
- (void)noteGestureCompletedSuccessfully:(BOOL)arg1 cleanupTransaction:(id)arg2;
- (BOOL)isGestureCompleted;
- (void)_begin;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

