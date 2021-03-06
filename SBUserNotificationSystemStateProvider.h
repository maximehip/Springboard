//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UNSSystemStateProviding.h"

@class NSString;

@interface SBUserNotificationSystemStateProvider : NSObject <UNSSystemStateProviding>
{
}

- (id)_newsstandApplicationWithBundleIdentifier:(id)arg1;
- (id)_applicationWithBundleIdentifier:(id)arg1;
- (void)handleNewsstandNotificationForApplication:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldThrottleContentNotificationForApplicatin:(id)arg1 onDate:(id)arg2 withLastCount:(unsigned int *)arg3 onDay:(int *)arg4;
- (BOOL)isNewsstandContentBackgroundModeSupportedForApplication:(id)arg1;
- (BOOL)isNewsstandApplication:(id)arg1;
- (BOOL)isSystemApplication:(id)arg1;
- (BOOL)isInternalApplication:(id)arg1;
- (id)displayNameForApplication:(id)arg1;
- (BOOL)shouldShowUserNotificationPermissionAlertForBundleIdentifier:(id)arg1;
- (BOOL)shouldSuppressUserNotificationPermissionAlertForBundleIdentifier:(id)arg1;
- (BOOL)shouldUseDefaultDataProviderForBundleIdentifier:(id)arg1;
- (void)handleContentAvailableNotificationForApplication:(id)arg1 userInfo:(id)arg2 priority:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)isRemoteNotificationBackgroundModeSupportedForApplication:(id)arg1;
- (BOOL)isBackgroundAppRefreshSupportedForApplication:(id)arg1;
- (BOOL)isApplicationRestricted:(id)arg1;
- (BOOL)isApplicationInstalled:(id)arg1;
- (id)bulletinBoardQueue;
- (id)dataProviderConnection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

