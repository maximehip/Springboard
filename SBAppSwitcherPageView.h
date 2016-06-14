//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBAppSwitcherSoftOutlineShadowView, SBDisplayItem, UIView<SBAppSwitcherPageContentView>;

@interface SBAppSwitcherPageView : UIView
{
    UIView *_hitTestBlocker;
    UIView<SBAppSwitcherPageContentView> *_view;
    UIView *_overlayView;
    SBDisplayItem *_displayItem;
    UIView *_contentDarkeningView;
    int _shadowStyle;
    float _shadowAlpha;
    float _cornerRadius;
    SBAppSwitcherSoftOutlineShadowView *_shadowView;
    UIView *auxiliaryView;
    id <SBAppSwitcherPageViewDelegate> _delegate;
}

+ (float)shadowOutset;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) float shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) int shadowStyle; // @synthesize shadowStyle=_shadowStyle;
@property(retain, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
@property(nonatomic) __weak id <SBAppSwitcherPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIView *auxiliaryView; // @synthesize auxiliaryView;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlayView;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGAffineTransform)_overlayTransform;
- (struct CGAffineTransform)_scaleTransform;
- (struct CGPoint)_centerForSubviewLayout;
- (struct CGRect)_viewFrame;
- (void)_updateCornerRadius;
- (void)_setupShadowImage;
- (void)_updateShadow;
- (void)transitionDidEnd:(BOOL)arg1 forPresentation:(BOOL)arg2;
- (void)interactionDidEnd:(BOOL)arg1;
- (void)updateTransitionProgress:(float)arg1;
- (void)viewDismissing:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(BOOL)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4;
- (void)invalidate;
@property(nonatomic) struct CGRect shadowClippingFrame;
@property(nonatomic) BOOL shouldClipShadow;
@property(nonatomic) float darkeningAlpha;
@property(nonatomic) float contentAlpha;
@property(nonatomic) float overlayAlpha;
- (void)setBlocksTouches:(BOOL)arg1;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)setView:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)_orderSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

