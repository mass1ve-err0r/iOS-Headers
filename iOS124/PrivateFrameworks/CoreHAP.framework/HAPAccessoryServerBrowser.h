//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol HAPKeyStore, OS_dispatch_queue;

@interface HAPAccessoryServerBrowser : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    long long _linkType;
    id <HAPKeyStore> _keyStore;
}

@property(retain, nonatomic) id <HAPKeyStore> keyStore; // @synthesize keyStore=_keyStore;
@property(readonly, nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)matchAccessoryServerWithSetupID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end

