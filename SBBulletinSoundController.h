//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"
#import "SBBulletinBusyClient.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SBBulletinSoundController : NSObject <BBObserverDelegate, SBBulletinBusyClient>
{
    NSMutableArray *_blockQueue;
    NSMutableDictionary *_playingSounds;
    NSMutableSet *_internalBulletinsWePlayedSoundsFor;
    NSMutableSet *_bulletinsRequiringExplicitKill;
    BOOL _deviceIsLocked;
    BOOL _quietModeEnabled;
    unsigned int _quietModeState;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)arg1;
- (void).cxx_destruct;
- (void)bulletinWindowStoppedBeingBusy;
- (BOOL)isLockScreenActive;
- (BOOL)isDeviceUILocked;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned int)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned int)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)_enqueueBlock:(CDUnknownBlockType)arg1 forFeed:(unsigned int)arg2 bulletin:(id)arg3;
- (BOOL)_shouldHonorPlaySoundRequestForBulletin:(id)arg1;
- (void)_hardwareButtonPressed:(id)arg1;
- (BOOL)_playSoundForBulletin:(id)arg1 playedInternally:(BOOL)arg2;
- (void)_stopSoundWithID:(id)arg1 internalOnly:(BOOL)arg2;
- (unsigned int)quietModeState;
- (BOOL)quietModeEnabled;
- (void)killSounds;
- (void)killSoundForBulletin:(id)arg1;
- (BOOL)isPlayingSoundForBulletin:(id)arg1;
- (BOOL)playSoundForBulletin:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
