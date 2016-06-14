//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDateTimeOverrideObserver.h"

@class NSArray, NSDateFormatter, NSHashTable, NSString, NSTimer, SBQuietModeStateAggregator, SBSStatusBarStyleOverridesAssertion, SBStatusBarDefaults, SBUserSessionController;

@interface SBStatusBarStateAggregator : NSObject <SBDateTimeOverrideObserver>
{
    SBStatusBarDefaults *_statusBarDefaults;
    BOOL _cachedShowRSSI;
    BOOL _cachedShowGSMRSSI;
    unsigned int _coalescentBlockDepth;
    BOOL _hasPostedOnce;
    unsigned int _itemPostState[32];
    BOOL _nonItemDataChanged;
    CDStruct_f23da3d9 _data;
    int _actions;
    NSHashTable *_postObservers;
    BOOL _notifyingPostObservers;
    int _showsRecordingOverrides;
    NSDateFormatter *_timeItemDateFormatter;
    NSTimer *_timeItemTimer;
    NSString *_timeItemTimeString;
    NSString *_serviceString;
    NSString *_serviceCrossfadeString;
    NSArray *_countryCodesShowingEmergencyOnlyStatus;
    unsigned int _airplaneTransitionToken;
    BOOL _suppressCellServiceForAirplaneModeTransition;
    BOOL _showsActivityIndicatorOnHomeScreen;
    int _activityIndicatorEverywhereCount;
    int _syncActivityIndicatorCount;
    NSString *_activityDisplayIdentifier;
    BOOL _showingNotChargingItem;
    NSString *_batteryDetailString;
    BOOL _alarmEnabled;
    BOOL _applyingAssistantStyle;
    int _locationStatusBarIconType;
    SBSStatusBarStyleOverridesAssertion *_siriEyesFreeStatusBarStyleOverrideAssertion;
    SBSStatusBarStyleOverridesAssertion *_tetheringStatusBarStyleOverrideAssertion;
    SBUserSessionController *_lazy_userSessionController;
    NSString *_personName;
    NSString *_overridePersonName;
    SBQuietModeStateAggregator *_quietModeStateAggregator;
}

+ (int)_thermalColorForLevel:(int)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic, getter=_userSessionController, setter=_setUserSessionController:) SBUserSessionController *userSessionController; // @synthesize userSessionController=_lazy_userSessionController;
- (void).cxx_destruct;
- (void)_updateLocationState;
- (void)_buildLocationState;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)_noteNotChargingStatusChanged;
- (void)_setShowingNotChargingItem;
- (BOOL)_shouldShowNotChargingItem;
- (BOOL)_shouldShowEmergencyOnlyStatus;
- (id)_sbCarrierNameForOperator:(id)arg1;
- (id)_displayStringForRegistrationStatus:(int)arg1;
- (id)_displayStringForSIMStatus:(id)arg1;
- (BOOL)_simStatusMeansLocked:(id)arg1;
- (void)_noteAirplaneModeChanged;
- (BOOL)_shouldShowPersonName;
- (void)_resetTimeItemFormatter;
- (void)_restartTimeItemTimer;
- (void)_stopTimeItemTimer;
- (void)_requestActions:(int)arg1;
- (void)_notifyNonItemDataChanged;
- (void)_notifyItemChanged:(int)arg1;
- (BOOL)_setItem:(int)arg1 enabled:(BOOL)arg2;
- (void)_postItem:(int)arg1 withState:(unsigned int)arg2;
- (void)updateStatusBarItem:(int)arg1;
- (void)_updateTetheringState;
- (void)_removeTetheringStatusBarStyleOverrideAssertion;
- (void)_updatePersonNameItem;
- (void)_updateCarPlayItem;
- (void)_updateThermalColorItem;
- (void)_updateAssistantItem;
- (void)_removeAssistantEyesFreeStatusBarStyleOverride;
- (void)_updateAirplayItem;
- (void)_updateQuietModeItem;
- (void)_updateRotationLockItem;
- (void)_updateLocationItem;
- (void)_updateActivityItem;
- (void)_updateCallForwardingItem;
- (void)_updateVPNItem;
- (void)_updateAlarmItem;
- (void)_updateTTYItem;
- (void)_updateBluetoothBatteryItem;
- (void)_updateBluetoothItem;
- (void)_updateBatteryItems:(id)arg1;
- (void)_updateAllInternalBatteryItems;
- (void)_updateDataNetworkItem;
- (void)_updateServiceItem;
- (void)_updateSignalStrengthItem;
- (void)_updateAirplaneMode;
- (void)_updateTimeItems;
- (void)_updateLockItem;
- (void)_registerForNotifications;
- (void)removePostingObserver:(id)arg1;
- (void)addPostingObserver:(id)arg1;
- (void)setQuietModeStateAggregator:(id)arg1;
- (void)sendStatusBarActions:(int)arg1;
- (void)setUserNameOverride:(id)arg1;
- (void)setShowsSyncActivityIndicator:(BOOL)arg1;
- (void)setShowsActivityIndicatorEverywhere:(BOOL)arg1;
- (void)setShowsActivityIndicatorOnHomeScreen:(BOOL)arg1;
- (void)setAlarmEnabled:(BOOL)arg1;
- (void)setShowsOverridesForRecording:(BOOL)arg1;
- (void)_tickRefCount:(int *)arg1 up:(BOOL)arg2 withTransitionBlock:(CDUnknownBlockType)arg3;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (const CDStruct_f23da3d9 *)_statusBarData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

