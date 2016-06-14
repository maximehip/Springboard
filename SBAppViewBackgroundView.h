//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBAppViewBackgroundView.h"

@class NSString;

@interface SBAppViewBackgroundView : UIView <SBAppViewBackgroundView>
{
    BOOL _hasDiscreteWallpaperEffect;
    int _wallpaperStyle;
}

@property(nonatomic) int wallpaperStyle; // @synthesize wallpaperStyle=_wallpaperStyle;
@property(nonatomic) BOOL hasDiscreteWallpaperEffect; // @synthesize hasDiscreteWallpaperEffect=_hasDiscreteWallpaperEffect;
- (void)_recalulateBackgroundColor;
- (BOOL)_isTranslucent;
- (int)_backgroundStyle;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

