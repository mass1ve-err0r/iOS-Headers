//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@protocol MSPCloudRecord;

@protocol MSPReplicaRecordFromCloud <NSObject>
+ (id)tombstone;
@property(readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) _Bool tombstoneRepresentedByCloudRecord;
- (id)initWithCloudRecord:(id <MSPCloudRecord>)arg1;
@end

