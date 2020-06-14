//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPReplica.h>

#import <MapsSupport/MSPContainerStateSnapshot-Protocol.h>
#import <MapsSupport/MSPPropertyListReplicaDataSerialization-Protocol.h>
#import <MapsSupport/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface MSPHistoryReplica : MSPReplica <MSPContainerStateSnapshot, NSSecureCoding, MSPPropertyListReplicaDataSerialization>
{
}

+ (id)allowedEditClasses;
+ (void)switchForEdit:(id)arg1 caseIsInsertRecord:(CDUnknownBlockType)arg2 caseIsEditContents:(CDUnknownBlockType)arg3 caseIsEditModificationDate:(CDUnknownBlockType)arg4 caseIsDeleteTombstone:(CDUnknownBlockType)arg5;
+ (_Bool)supportsSecureCoding;
- (id)editsToMergeWithReplica:(id)arg1;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (id)_additionalEditsToUpdateContentsOfRecord:(id)arg1 identifier:(id)arg2;
- (id)editsToMergeWithReplica:(id)arg1 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg2;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)_sortedHistoryEntriesByApplyingEdits:(id)arg1 invalidEntryIdentifiers:(out id *)arg2;
@property(readonly, copy, nonatomic) NSArray *contents;
- (id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out _Bool *)arg3;
@property(readonly, nonatomic) NSData *propertyListDataRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(CDUnknownBlockType)arg2;
- (id)propertyListRepresentationDecoratingRecordsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id propertyListRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

