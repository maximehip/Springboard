//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLayoutContext.h"

@protocol SBMainDisplayLayoutContext <SBLayoutContext>
@property(readonly, nonatomic) int externallyManagedSideAppWidth;
@property(readonly, nonatomic) int externallyManagedSideAppPresentationStyle;
@property(readonly, nonatomic) int sideAppWidth;
@property(readonly, nonatomic) int sideAppPresentationStyle;
- (BOOL)includesStatusBarForLayoutRole:(int)arg1;
- (int)wallpaperModeForLayoutRole:(int)arg1;
- (int)wallpaperMode;
@end
