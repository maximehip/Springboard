//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class BBBulletin, NSArray;

@interface SBBulletinModalAlert : SBAlertItem
{
    BBBulletin *_bulletin;
    NSArray *_buttons;
    NSArray *_bulletinButtonIndices;
    BOOL _playedSound;
    SBBulletinModalAlert *_superseded;
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSArray *bulletinButtonIndices; // @synthesize bulletinButtonIndices=_bulletinButtonIndices;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)_preventLockOver;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)willDeactivateForReason:(int)arg1;
- (void)didActivate;
- (void)willActivate;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)_actionsWithOptions;
- (id)_snoozeAppearance;
- (id)_optionsAppearance;
- (id)_dismissAppearance;
- (id)_defaultAppearance;
- (id)_snoozeAction;
- (id)_dismissAction;
- (id)_defaultAction;
- (id)_defaultActions;
- (id)_actionsFromBulletin;
- (void)_configureSheetWithBulletinActions;
- (void)_configureSheetWithBulletinButtons;
- (void)deactivateForReason:(int)arg1;
- (void)_handleActionGroup:(id)arg1;
- (void)_handleAction:(id)arg1;
- (void)dealloc;
- (id)initWithBulletin:(id)arg1 supersededAlert:(id)arg2;
- (id)initWithBulletin:(id)arg1;

@end

