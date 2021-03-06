//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBPluginBundleController.h"

@class SBLockScreenPluginAction, SBLockScreenPluginContext, UIViewController<SBLockScreenPluginViewController>;

@protocol SBLockScreenPluginController <SBPluginBundleController>
@property(readonly, nonatomic) id <SBLockScreenPluginAppearance> pluginAppearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property(readonly, nonatomic) int pluginPriority;
@property(nonatomic) __weak id <SBLockScreenPluginAgent> pluginAgent;

@optional
@property(readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
- (BOOL)pluginHandleEvent:(int)arg1;
- (void)pluginDidDeactivateWithContext:(SBLockScreenPluginContext *)arg1;
- (void)pluginWillActivateWithContext:(SBLockScreenPluginContext *)arg1;
@end

