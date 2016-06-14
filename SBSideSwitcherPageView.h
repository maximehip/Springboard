//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAppSwitcherPageView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SBIconView, SBIconViewMap, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface SBSideSwitcherPageView : SBAppSwitcherPageView <UIGestureRecognizerDelegate>
{
    BOOL _shouldShowAppIconAsOverlay;
    BOOL _isShowingAppIconAsOverlay;
    BOOL _isActivating;
    SBIconViewMap *_iconViewMap;
    SBIconView *_iconViewSetAsOverlay;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UILongPressGestureRecognizer *_pressDownGestureRecognizer;
}

@property(nonatomic) BOOL shouldShowAppIconAsOverlay; // @synthesize shouldShowAppIconAsOverlay=_shouldShowAppIconAsOverlay;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_unsquishAfterDelay:(double)arg1;
- (void)_squishAfterDelay:(double)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_handlePressDownGesture:(id)arg1;
- (void)layoutSubviews;
- (void)invalidate;
- (struct CGAffineTransform)_overlayTransform;
- (void)_removeAppIconAsOverlayIfNecessary;
- (void)_configureAppIconAsOverlayIfNecessary;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
@property(nonatomic) __weak id <SBSideSwitcherPageViewDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
