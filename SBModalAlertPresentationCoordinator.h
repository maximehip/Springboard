//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, SBModalAlertPresenter;

@interface SBModalAlertPresentationCoordinator : NSObject
{
    id <SBModalAlertPresentationCoordinatorDelegate> _delegate;
    NSMutableSet *_activeModalAlertPresenters;
    SBModalAlertPresenter *_springBoardModalAlertPresenter;
    id <BSInvalidatable> _hideApplicationModalAlertsAssertionWhileSBModalAlertsActive;
}

@property(retain, nonatomic, getter=_getSpringBoardPresenter, setter=_setSpringBoardPresenter:) SBModalAlertPresenter *springBoardPresenter; // @synthesize springBoardPresenter=_springBoardModalAlertPresenter;
@property(nonatomic) __weak id <SBModalAlertPresentationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_hideApplicationModalAlertsWithFence:(BOOL)arg1;
- (void)_showApplicationModalAlertsWithFence:(BOOL)arg1;
- (id)_fencingTransitionContext:(BOOL)arg1;
- (void)_setNotifyStateThatSpringBoardIsShowingAMiniAlert:(BOOL)arg1;
- (void)_noteSpringBoardModalAlertStateChanged:(BOOL)arg1;
- (void)_removeModalAlertPresenter:(id)arg1;
- (void)_addModalAlertPresenterIfNecessary:(id)arg1;
- (id)hideApplicationModalAlertsForReason:(id)arg1;
@property(readonly, nonatomic, getter=canShowApplicationModalAlerts) BOOL canShowApplicationModalAlerts; // @dynamic canShowApplicationModalAlerts;
@property(readonly, nonatomic, getter=isShowingSystemModalAlert) BOOL showingSystemModalAlert; // @dynamic showingSystemModalAlert;
@property(readonly, nonatomic, getter=isShowingModalAlert) BOOL showingModalAlert; // @dynamic showingModalAlert;
- (id)init;

@end

