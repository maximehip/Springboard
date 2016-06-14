//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplicationHosting.h"
#import "SBDashBoardViewPresenting.h"

@class _UILegibilitySettings;

@protocol SBDashBoardPageViewControllerProtocol <SBDashBoardViewPresenting, SBApplicationHosting>
+ (unsigned int)requiredCapabilities;
+ (BOOL)isAvailableForConfiguration;
@property(readonly, nonatomic) BOOL authenticated;
@property(nonatomic, getter=isTransitioning) BOOL transitioning;
@property(nonatomic) __weak id <SBDashBoardViewControllerProtocol> dashBoardViewController;

@optional
- (void)updateLegibilityForSettings:(_UILegibilitySettings *)arg1;
@end

