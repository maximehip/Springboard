//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardParticipating.h"

@class NCNotificationRequest, NCNotificationSectionSettings;

@protocol SBDashBoardNotificationDestination <SBDashBoardParticipating>
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1;
- (void)updateNotificationRequest:(NCNotificationRequest *)arg1;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1;
@end

