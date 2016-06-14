//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBApplicationServerCarPlayDelegate.h"

@class NSString;

@interface SBApplicationCarPlayService : NSObject <SBApplicationServerCarPlayDelegate>
{
}

+ (id)sharedInstance;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchApplicationForBundleIdentifier:(id)arg3 inVehicle:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)applicationServer:(id)arg1 client:(id)arg2 resetAppIdentifierOrderForVehicleId:(id)arg3;
- (void)applicationServer:(id)arg1 client:(id)arg2 setIconOrder:(id)arg3 hiddenIcons:(id)arg4 forVehicleId:(id)arg5;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchIconOrderForVehicleId:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_iconControllerForVehicleId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

