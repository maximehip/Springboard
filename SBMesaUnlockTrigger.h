//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBMesaUnlockTrigger : NSObject
{
    id <SBMesaUnlockTriggerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBMesaUnlockTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fingerOff;
- (void)fingerOn;
- (void)menuButtonUp;
- (void)menuButtonDown;
- (void)significantUserInteractionOccurred;
- (void)screenOff;
- (BOOL)bioUnlock;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;

@end

