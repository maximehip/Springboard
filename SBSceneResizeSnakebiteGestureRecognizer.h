//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class UITouch;

@interface SBSceneResizeSnakebiteGestureRecognizer : UIGestureRecognizer
{
    BOOL _beganTrackingNearDivider;
    BOOL _ignoresTouchesMoved;
    BOOL _waitingForInvalidTouchToBecomeValid;
    float _dividerPosition;
    float _velocity;
    float _distanceTraveledFromInitialLocation;
    float _absoluteDistanceTraveled;
    UITouch *_leftTouch;
    UITouch *_rightTouch;
    UITouch *_singleTrackingTouch;
    UITouch *_waitingTouch;
    float _previousTouchPosition;
    id <SBSceneResizeSnakebiteGestureDebugDelegate> _debugDelegate;
    double _initialSingleTouchTimestamp;
    struct CGPoint _initialWaitingTouchLocation;
    struct CGPoint _initialTouchLocation;
    double _previousTouchTimestamp;
}

@property(nonatomic) __weak id <SBSceneResizeSnakebiteGestureDebugDelegate> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
@property(nonatomic, getter=isWaitingForInvalidTouchToBecomeValid) BOOL waitingForInvalidTouchToBecomeValid; // @synthesize waitingForInvalidTouchToBecomeValid=_waitingForInvalidTouchToBecomeValid;
@property(nonatomic) double previousTouchTimestamp; // @synthesize previousTouchTimestamp=_previousTouchTimestamp;
@property(nonatomic) float previousTouchPosition; // @synthesize previousTouchPosition=_previousTouchPosition;
@property(nonatomic) struct CGPoint initialTouchLocation; // @synthesize initialTouchLocation=_initialTouchLocation;
@property(nonatomic) struct CGPoint initialWaitingTouchLocation; // @synthesize initialWaitingTouchLocation=_initialWaitingTouchLocation;
@property(nonatomic, getter=_ignoresTouchesMoved, setter=_setIgnoresTouchesMoved:) BOOL ignoresTouchesMoved; // @synthesize ignoresTouchesMoved=_ignoresTouchesMoved;
@property(retain, nonatomic, getter=_waitingTouch, setter=_setWaitingTouch:) UITouch *waitingTouch; // @synthesize waitingTouch=_waitingTouch;
@property(retain, nonatomic, getter=_singleTrackingTouch, setter=_setSingleTrackingTouch:) UITouch *singleTrackingTouch; // @synthesize singleTrackingTouch=_singleTrackingTouch;
@property(retain, nonatomic, getter=_rightTouch, setter=_setRightTouch:) UITouch *rightTouch; // @synthesize rightTouch=_rightTouch;
@property(retain, nonatomic, getter=_leftTouch, setter=_setLeftTouch:) UITouch *leftTouch; // @synthesize leftTouch=_leftTouch;
@property(nonatomic) BOOL beganTrackingNearDivider; // @synthesize beganTrackingNearDivider=_beganTrackingNearDivider;
@property(nonatomic) double initialSingleTouchTimestamp; // @synthesize initialSingleTouchTimestamp=_initialSingleTouchTimestamp;
@property(nonatomic) float absoluteDistanceTraveled; // @synthesize absoluteDistanceTraveled=_absoluteDistanceTraveled;
@property(nonatomic) float distanceTraveledFromInitialLocation; // @synthesize distanceTraveledFromInitialLocation=_distanceTraveledFromInitialLocation;
@property(nonatomic) float velocity; // @synthesize velocity=_velocity;
@property(nonatomic, setter=_setDividerPosition:) float dividerPosition; // @synthesize dividerPosition=_dividerPosition;
- (void).cxx_destruct;
- (void)_debugRegionsDidChange;
- (void)_stopDrawingDebugRegions;
- (void)_drawDebugRegions;
- (void)_updateStatsForTouchPosition:(float)arg1 timestamp:(double)arg2;
- (void)_handleTouchesMovedForSingleTouchTracking:(id)arg1 withEvent:(id)arg2;
- (void)_handleTouchesMovedForMultipleTouchTracking:(id)arg1 withEvent:(id)arg2;
- (void)_clearTrackingTouches;
- (BOOL)_shouldContinueTrackingInvalidTouchWithDistanceFromDivider:(float)arg1;
- (BOOL)_shouldConsiderSingleTouchTrackingAsFailed;
- (void)_startTrackingWithSingleTouch:(id)arg1;
- (BOOL)_canStartAnyKindOfTrackingWithTouch:(id)arg1;
- (void)_startTrackingWithTouch:(id)arg1 andTouch:(id)arg2;
- (BOOL)_checkOngoingValidityOfLeftTouch:(id)arg1 rightTouch:(id)arg2;
- (BOOL)_checkInitialValidityOfTouch:(id)arg1 andTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)interfaceOrientedLocationInView:(id)arg1;
- (BOOL)willAllowResizeForSingleTouch:(id)arg1;
- (BOOL)_singleTouchStartedInPinningAreaWithLocation:(struct CGPoint)arg1;
- (BOOL)_shouldStartTrackingSingleTouchAtLocation:(struct CGPoint)arg1 distanceFromDivider:(float)arg2;
- (float)_viewOffsetForNormalizedLocation:(float)arg1;
- (float)_normalizedLocationForViewOffset:(float)arg1;
- (float)_dividerViewOffset;
- (struct CGRect)_interfaceOrientedBounds;
- (struct CGPoint)_interfaceOrientedPoint:(struct CGPoint)arg1;
- (struct CGRect)_convertViewRect:(struct CGRect)arg1 toInterfaceOrientation:(int)arg2;
- (struct CGPoint)_convertViewPoint:(struct CGPoint)arg1 toInterfaceOrientation:(int)arg2;
- (int)_interfaceOrientation;

// Remaining properties
@property(nonatomic) __weak id <SBSceneResizeSnakebiteGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

