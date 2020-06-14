//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCentralMessageDispatcher, HMDDevice, HMFTimer, NSMapTable, NSMutableArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDResidentCommunicationHandler : HMFObject <HMFLogging, HMFTimerDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMapTable *_deviceMapping;
    NSMutableArray *_pendingReadRequests;
    NSMapTable *_dispatchedReadRequests;
    HMFTimer *_multiReadCoalesceTimer;
    NSUUID *_homeUUID;
    HMDCentralMessageDispatcher *_remoteDispatcher;
}

+ (id)logCategory;
+ (void)_clearAllPendingRequests:(id)arg1 error:(id)arg2;
+ (void)_clearAllGeneratedRequests:(id)arg1 error:(id)arg2;
+ (id)createResponseSubset:(id)arg1 overallError:(id)arg2 readRequest:(id)arg3 error:(id *)arg4;
+ (void)_processResponseForMultireadRequest:(id)arg1 overallError:(id)arg2 response:(id)arg3;
@property(readonly, nonatomic) __weak HMDCentralMessageDispatcher *remoteDispatcher; // @synthesize remoteDispatcher=_remoteDispatcher;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(retain, nonatomic) HMFTimer *multiReadCoalesceTimer; // @synthesize multiReadCoalesceTimer=_multiReadCoalesceTimer;
@property(readonly, nonatomic) NSMapTable *dispatchedReadRequests; // @synthesize dispatchedReadRequests=_dispatchedReadRequests;
@property(readonly, nonatomic) NSMutableArray *pendingReadRequests; // @synthesize pendingReadRequests=_pendingReadRequests;
@property(retain, nonatomic) NSMapTable *deviceMapping; // @synthesize deviceMapping=_deviceMapping;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_processResponse:(id)arg1 overallError:(id)arg2 messageIdentifier:(id)arg3;
- (void)_sendMultipleCharacteristicRead;
- (void)timerDidFire:(id)arg1;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3;
- (long long)preferredDeviceType;
@property(readonly, nonatomic) HMDDevice *preferredDevice;
- (id)deviceForType:(long long)arg1;
- (_Bool)containsDevice:(id)arg1;
- (void)_removeDeviceForType:(long long)arg1;
- (void)removeDeviceForType:(long long)arg1;
- (void)setDevice:(id)arg1 forType:(long long)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithHomeUUID:(id)arg1 remoteDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

