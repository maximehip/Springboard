//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SBRemoteAlertAdapter;

@protocol SBRemoteAlertAdapterDelegate <NSObject>
- (void)remoteAlertAdapter:(SBRemoteAlertAdapter *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteAlertAdapterDidRequestDismissal:(SBRemoteAlertAdapter *)arg1;
- (void)remoteAlertAdapterDidDeactivate:(SBRemoteAlertAdapter *)arg1;
- (void)remoteAlertAdapterDidActivate:(SBRemoteAlertAdapter *)arg1;
@end

