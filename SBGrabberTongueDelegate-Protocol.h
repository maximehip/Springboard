//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBGrabberTongue;

@protocol SBGrabberTongueDelegate <NSObject>
- (BOOL)grabberTongueRequiredOutsideGrabberFreeRegion:(SBGrabberTongue *)arg1;
- (BOOL)grabberTongueRequiredForWholeEdge:(SBGrabberTongue *)arg1;
- (BOOL)grabberTongueOrPullEnabled:(SBGrabberTongue *)arg1;

@optional
- (void)grabberTongueWillPresent:(SBGrabberTongue *)arg1;
- (void)grabberTongueCanceledPulling:(SBGrabberTongue *)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
- (void)grabberTongueEndedPulling:(SBGrabberTongue *)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
- (void)grabberTongueUpdatedPulling:(SBGrabberTongue *)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
- (void)grabberTongueBeganPulling:(SBGrabberTongue *)arg1 withDistance:(float)arg2 andVelocity:(float)arg3;
- (float)grabberTongueWidthOfActiveEdge:(SBGrabberTongue *)arg1;
- (float)grabberTongueWidthOfGrabberFreeRegion:(SBGrabberTongue *)arg1;
- (float)grabberTongueCenterOnEdge:(SBGrabberTongue *)arg1;
@end

