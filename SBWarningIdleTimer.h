//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBCompoundIdleTimerDelegate.h"
#import "SBIdleTimer.h"

@class NSString, SBCompoundIdleTimer;

@interface SBWarningIdleTimer : NSObject <SBCompoundIdleTimerDelegate, SBIdleTimer>
{
    id <SBIdleTimerDelegate> _delegate;
    SBCompoundIdleTimer *_compoundTimer;
    int _resetPolicy;
    BOOL _isTransitioningToExpire;
    BOOL _inExpireStage;
    BOOL _warnOnly;
}

@property(nonatomic) __weak id <SBIdleTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)idleTimerDidReceiveUserEvent:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)compoundTimer:(id)arg1 didMoveFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)compoundTimer:(id)arg1 willMoveFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTimer:(id)arg1;
- (void)reset;
- (id)initWithCompoundTimer:(id)arg1 warnOnly:(BOOL)arg2 resetPolicy:(int)arg3;
- (id)initWithWarnTimer:(id)arg1 expireTimer:(id)arg2 resetPolicy:(int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

