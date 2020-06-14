//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSessionID, HMDCameraSnapshotMetrics, HMDSnapshotCompletionTimer, NSMutableArray, NSString;
@protocol HMDCameraGetSnapshotProtocol;

@interface HMDSnapshotSession : HMFObject <HMFLogging>
{
    HMDCameraSessionID *_sessionID;
    id <HMDCameraGetSnapshotProtocol> _snapshotGetter;
    HMDSnapshotCompletionTimer *_snapshotCompletionTimer;
    NSMutableArray *_sessionMessages;
    unsigned long long _streamingTierType;
    HMDCameraSnapshotMetrics *_snapshotMetrics;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDCameraSnapshotMetrics *snapshotMetrics; // @synthesize snapshotMetrics=_snapshotMetrics;
@property(readonly, nonatomic) unsigned long long streamingTierType; // @synthesize streamingTierType=_streamingTierType;
@property(readonly, nonatomic) NSMutableArray *sessionMessages; // @synthesize sessionMessages=_sessionMessages;
@property(retain, nonatomic) HMDSnapshotCompletionTimer *snapshotCompletionTimer; // @synthesize snapshotCompletionTimer=_snapshotCompletionTimer;
@property(readonly, nonatomic) id <HMDCameraGetSnapshotProtocol> snapshotGetter; // @synthesize snapshotGetter=_snapshotGetter;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)respond:(id)arg1 payload:(id)arg2;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 accessory:(id)arg2 snapshotGetter:(id)arg3 message:(id)arg4 waitPeriod:(double)arg5 streamingTierType:(unsigned long long)arg6 cameraLocallyReachable:(_Bool)arg7 snapshotForNotification:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

