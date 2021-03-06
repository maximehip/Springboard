//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBLockScreenActionProvider.h"
#import "SBLockScreenPluginAgent.h"
#import "_UISettingsKeyObserver.h"

@class NSMutableDictionary, NSString, SBLockScreenPlugin, SBLockScreenTestPluginSettings;

@interface SBLockScreenPluginManager : NSObject <SBLockScreenPluginAgent, _UISettingsKeyObserver, SBLockScreenActionProvider>
{
    NSMutableDictionary *_plugins;
    SBLockScreenPlugin *_activePlugin;
    SBLockScreenPlugin *_displayedPlugin;
    id <SBLockScreenPluginManagerDelegate> _delegate;
    SBLockScreenTestPluginSettings *_testSettings;
    BOOL _enabled;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <SBLockScreenPluginManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBLockScreenPlugin *displayedPlugin; // @synthesize displayedPlugin=_displayedPlugin;
@property(readonly, nonatomic) SBLockScreenPlugin *activePlugin; // @synthesize activePlugin=_activePlugin;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)lockScreenActionContext;
- (BOOL)pluginController:(id)arg1 sendAction:(id)arg2;
- (void)pluginController:(id)arg1 updateAppearance:(id)arg2;
- (void)deactivatePluginController:(id)arg1;
- (void)activatePluginController:(id)arg1;
- (id)_pluginForPluginController:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)_handlePluginDisabled:(id)arg1 withContext:(id)arg2;
- (BOOL)_loadLockScreenPluginWithContext:(id)arg1;
- (void)_setDisplayedPlugin:(id)arg1;
- (void)_setActivePlugin:(id)arg1 displayedPlugin:(id)arg2;
- (void)_refreshLockScreenPlugin;
- (id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)arg1;
- (void)_handleUIRelock;
- (BOOL)_sendEventToPlugin:(CDUnknownBlockType)arg1;
- (BOOL)handleEvent:(int)arg1;
- (BOOL)disableLockScreenPluginWithContext:(id)arg1;
- (BOOL)enableLockScreenPluginWithContext:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

