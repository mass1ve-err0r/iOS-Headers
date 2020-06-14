//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamTracker : HMFObject <HMFLogging>
{
    NSMutableSet *_currentStreamIdentifiers;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
+ (id)sharedTracker;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableSet *currentStreamIdentifiers; // @synthesize currentStreamIdentifiers=_currentStreamIdentifiers;
- (void).cxx_destruct;
- (void)endStream:(id)arg1;
- (_Bool)startStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

