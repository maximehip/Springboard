//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface SBLockScreenViewRequesterTracker : NSObject
{
    NSMutableSet *_requesters;
}

- (void).cxx_destruct;
- (BOOL)hasRequesters;
- (void)setRequested:(BOOL)arg1 forRequester:(id)arg2;
- (void)removeRequester:(id)arg1;
- (void)addRequester:(id)arg1;

@end
