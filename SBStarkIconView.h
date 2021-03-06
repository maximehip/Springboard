//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconView.h"

@interface SBStarkIconView : SBIconView
{
    BOOL _sb_focused;
}

+ (float)_labelHeight;
+ (struct CGSize)maxLabelSize;
+ (struct CGRect)_rectForLayoutMetric:(int)arg1;
+ (struct CGSize)defaultIconSize;
+ (struct UIEdgeInsets)minimumInterIconSpacing;
+ (struct UIEdgeInsets)iconImagePaddingInsets;
+ (BOOL)canShowLabelAccessoryView;
+ (int)_defaultIconFormat;
@property(nonatomic, setter=sb_setIsFocused:) BOOL sb_focused; // @synthesize sb_focused=_sb_focused;
- (struct CGRect)_frameForLabel;
- (void)prepareForReuse;
- (id)_labelImageParameters;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)canBecomeFocused;

@end

