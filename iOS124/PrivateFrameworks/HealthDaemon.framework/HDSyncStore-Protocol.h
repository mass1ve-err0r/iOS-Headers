//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDProfile, NSArray, NSError, NSSet, NSString, NSUUID;

@protocol HDSyncStore <NSObject>
@property(readonly) long long syncStoreType;
@property(readonly) int protocolVersion;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (_Bool)shouldEnforceSequenceOrdering;
- (_Bool)shouldContinueAfterAnchorValidationError:(NSError *)arg1;
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (_Bool)enforceSyncEntityOrdering;
- (_Bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (NSSet *)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (NSArray *)orderedSyncEntities;
- (NSString *)syncStoreDefaultSourceBundleIdentifier;
- (NSUUID *)databaseIdentifier;
- (NSUUID *)syncStoreIdentifier;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (HDProfile *)profile;
@end

