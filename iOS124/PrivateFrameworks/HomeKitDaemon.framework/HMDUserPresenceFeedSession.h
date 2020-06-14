//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCentralMessageDispatcher, HMDDevice, HMDHomeManager, HMDUser, HMDUserPresenceFeedRetryTimer, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, HMUserPresenceAuthorization, HMUserPresenceCompute, NSDate, NSString, NSUUID;
@protocol HMDUserPresenceFeedSessionDelegate, OS_dispatch_queue;

@interface HMDUserPresenceFeedSession : NSObject <HMFLogging, HMFTimerDelegate>
{
    id <HMDUserPresenceFeedSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    NSUUID *_targetUUID;
    HMDCentralMessageDispatcher *_remoteMessageDispatcher;
    HMDDevice *_residentDevice;
    HMDUser *_user;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    HMUserPresenceCompute *_presenceComputeStatus;
    HMDUserPresenceRegion *_presenceRegionStatus;
    HMDUserPresenceUpdateReason *_reason;
    NSDate *_statusChangeDate;
    NSUUID *_sessionID;
    HMDUserPresenceFeedRetryTimer *_statusUpdateRetryTimer;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDUserPresenceFeedRetryTimer *statusUpdateRetryTimer; // @synthesize statusUpdateRetryTimer=_statusUpdateRetryTimer;
@property(readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSDate *statusChangeDate; // @synthesize statusChangeDate=_statusChangeDate;
@property(retain, nonatomic) HMDUserPresenceUpdateReason *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDUserPresenceRegion *presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
@property(readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // @synthesize presenceComputeStatus=_presenceComputeStatus;
@property(readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) HMDDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
@property(readonly, nonatomic) HMDCentralMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property(readonly, nonatomic) NSUUID *targetUUID; // @synthesize targetUUID=_targetUUID;
@property(readonly, nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak id <HMDUserPresenceFeedSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_callDelegate;
- (void)timerDidFire:(id)arg1;
- (void)_handleStatusUpdateMessageError:(id)arg1 responseTime:(double)arg2;
- (void)_send;
- (void)send;
- (id)logIdentifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 homeManager:(id)arg2 workQueue:(id)arg3 targetUUID:(id)arg4 remoteMessageDispatcher:(id)arg5 residentDevice:(id)arg6 user:(id)arg7 presenceAuthStatus:(id)arg8 presenceComputeStatus:(id)arg9 presenceRegionStatus:(id)arg10 reason:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

