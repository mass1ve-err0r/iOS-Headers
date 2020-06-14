//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPReplicaEdit.h>

@class MSPVectorTimestamp, NSData;

@interface MSPReplicaEditUpdateContents : MSPReplicaEdit
{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
}

@property(readonly, nonatomic) MSPVectorTimestamp *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property(readonly, nonatomic) NSData *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toContents:(id)arg2 contentsTimestamp:(id)arg3;
- (id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)arg1;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;

@end

