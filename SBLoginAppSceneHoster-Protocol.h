//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBApplication, UIView;

@protocol SBLoginAppSceneHoster <NSObject>
@property(nonatomic) BOOL deferHIDEvents;
@property(readonly, nonatomic) SBApplication *hostedApp;
@property(readonly, nonatomic) NSString *hostedSceneIdentifier;
@property(readonly, nonatomic) NSString *hostedAppBundleID;
@property(readonly, nonatomic) UIView *contentView;
@property(nonatomic) __weak id <SBLoginAppSceneHosterDelegate> delegate;
- (void)updateSettingsWithTransitionBlock:(FBSSceneTransitionContext * (^)(FBSMutableSceneSettings *))arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end

