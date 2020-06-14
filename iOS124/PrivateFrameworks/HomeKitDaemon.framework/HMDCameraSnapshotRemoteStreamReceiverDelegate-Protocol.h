//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID, HMDCameraSnapshotRemoteStreamReceiver, HMDSnapshotFile, NSError;

@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate <NSObject>
- (void)snapshotStreamReceiver:(HMDCameraSnapshotRemoteStreamReceiver *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSessionID *)arg4;
- (void)snapshotStreamReceiver:(HMDCameraSnapshotRemoteStreamReceiver *)arg1 didStartGettingImage:(NSError *)arg2 sessionID:(HMDCameraSessionID *)arg3;
@end

