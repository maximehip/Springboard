//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBLayoutElementPinResizeGrabberView, SBSceneDimmingView, SBUIChevronView;

@interface SBLayoutElementAdornmentView : UIView
{
    SBSceneDimmingView *_dimmingView;
    int _dimmingLevel;
    int _sideSwitcherGrabberStyle;
    SBUIChevronView *_sideSwitcherGrabberView;
    SBLayoutElementPinResizeGrabberView *_pinResizeGrabberView;
    float _pinResizeGrabberHorizontalOffset;
    float _pinResizeGrabberVerticalOffset;
    BOOL _sideSwitcherGrabberPressed;
}

+ (id)sideSwitcherGrabberView;
@property(readonly, nonatomic) SBLayoutElementPinResizeGrabberView *pinResizeGrabberView; // @synthesize pinResizeGrabberView=_pinResizeGrabberView;
@property(readonly, nonatomic) SBSceneDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic, getter=isSideSwitcherGrabberPressed) BOOL sideSwitcherGrabberPressed; // @synthesize sideSwitcherGrabberPressed=_sideSwitcherGrabberPressed;
@property(nonatomic) float pinResizeGrabberVerticalOffset; // @synthesize pinResizeGrabberVerticalOffset=_pinResizeGrabberVerticalOffset;
@property(nonatomic) float pinResizeGrabberHorizontalOffset; // @synthesize pinResizeGrabberHorizontalOffset=_pinResizeGrabberHorizontalOffset;
@property(nonatomic) int sideSwitcherGrabberStyle; // @synthesize sideSwitcherGrabberStyle=_sideSwitcherGrabberStyle;
@property(nonatomic) int dimmingLevel; // @synthesize dimmingLevel=_dimmingLevel;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)_updateGrabberColorAndVisibility;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)_pinResizeGrabberHitTestFrame;
@property(readonly, nonatomic) struct CGRect pinResizeGrabberFrame;
- (void)setWantsPinResizeGrabber:(BOOL)arg1 withPercent:(float)arg2;
@property(nonatomic) BOOL wantsPinResizeGrabber;
- (void)setDimmingLevel:(int)arg1 withPercent:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

