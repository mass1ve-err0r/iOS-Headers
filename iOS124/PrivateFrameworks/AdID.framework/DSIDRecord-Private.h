//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AdCore/DSIDRecord.h>

@class NSString;

@interface DSIDRecord (Private)
- (_Bool)isEqual:(id)arg1;
- (_Bool)LATStatusChangeInProgress;
- (void)handleIDFAReset:(CDUnknownBlockType)arg1;
- (void)setLimitAdTrackingStatus:(_Bool)arg1 timestamp:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendSegmentsAndLATToAdPlatformsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateDeviceLATStatusWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendLATStatusToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)sendSegmentDataToAdPlatforms:(CDUnknownBlockType)arg1;
- (void)retrieveSegmentDataFromiTunes:(CDUnknownBlockType)arg1;
- (_Bool)isActiveRecord;
- (void)reconcileIDFAandLAT;
- (void)resetiAdIDsAndDPID:(CDUnknownBlockType)arg1;
- (void)resetiAdIDs;
- (void)ensureiAdIDs;
- (void)removeIDForClientType:(long long)arg1;
- (_Bool)hasIDForClientType:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *IDFA; // @dynamic IDFA;
@property(nonatomic) _Bool accountIsT13; // @dynamic accountIsT13;
@property(nonatomic) _Bool accountIsU13; // @dynamic accountIsU13;
@property(nonatomic) _Bool accountIsU18; // @dynamic accountIsU18;
@property(retain, nonatomic) NSString *iAdIDBeforeReset; // @dynamic iAdIDBeforeReset;
@property(retain, nonatomic) NSString *iCloudDSID; // @dynamic iCloudDSID;
@property(nonatomic) int lastSegmentServedTimestamp; // @dynamic lastSegmentServedTimestamp;
@property(nonatomic) int lastSentSegmentDataTimestamp; // @dynamic lastSentSegmentDataTimestamp;
@property(nonatomic) int limitAdTrackingTimestamp; // @dynamic limitAdTrackingTimestamp;
@property(retain, nonatomic) NSString *segmentData; // @dynamic segmentData;
@property(nonatomic) int segmentDataTimestamp; // @dynamic segmentDataTimestamp;
@end

