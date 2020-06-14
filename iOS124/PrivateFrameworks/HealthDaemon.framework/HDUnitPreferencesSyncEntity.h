//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDKeyValueSyncEntity.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>

@class NSString;

@interface HDUnitPreferencesSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>
{
}

+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (void)didReceiveValuesForKeys:(id)arg1 profile:(id)arg2;
+ (id)syncEntityIdentifier;
+ (long long)category;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

