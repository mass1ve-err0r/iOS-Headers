//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotIDSStream.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>
#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class HMDSnapshotFile, IDSSession, NSObject, NSString;
@protocol HMDCameraSnapshotIDSStreamReceiverDelegate, OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <IDSServiceDelegate, IDSSessionDelegate, HMFLogging>
{
    HMDSnapshotFile *_snapshotFile;
    IDSSession *_idsSession;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HMDCameraSnapshotIDSStreamReceiverDelegate> _delegate;
}

+ (id)logCategory;
@property(nonatomic) __weak id <HMDCameraSnapshotIDSStreamReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property(readonly, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)_callFileReceived:(id)arg1;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 queue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

