//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSString, NSURL, SBApplication;

@interface SBCallPermissionAlertItem : SBAlertItem
{
    NSURL *_url;
    SBApplication *_appHandlingURL;
    NSString *_sender;
}

- (void).cxx_destruct;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)initWithURL:(id)arg1 applicationHandlingURL:(id)arg2 sender:(id)arg3;

@end

