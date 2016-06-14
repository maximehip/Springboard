//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

@class NSString, SBWorkspaceEntity;

@interface SBAutoPiPWorkspaceTransaction : SBWorkspaceTransaction
{
    int _pidToPiP;
    SBWorkspaceEntity *_entityToPiP;
    int _transitionStyle;
    int _inferredTransitionStyle;
    NSString *_reason;
}

@property(readonly, copy, nonatomic) SBWorkspaceEntity *entityToPiP; // @synthesize entityToPiP=_entityToPiP;
@property(nonatomic) int transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void).cxx_destruct;
- (int)_transitionStyle;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1;

@end
