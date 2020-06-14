//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKDevice, NSLock, NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAnisetteServiceProtocol;

@interface AKAnisetteProvisioningController : NSObject
{
    NSXPCConnection *_anisetteServiceConnection;
    NSLock *_connectionLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    AKDevice *_targetDevice;
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;
}

@property(retain, nonatomic) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
@property(retain, nonatomic) AKDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
- (void).cxx_destruct;
- (id)_anisetteServiceConnection;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 error:(id *)arg2;
- (void)anisetteDataForURLRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)anisetteDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)anisetteDataForURLRequest:(id)arg1 error:(id *)arg2;
- (id)anisetteDataWithError:(id *)arg1;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)provisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initForDevice:(id)arg1 provider:(id)arg2;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (id)init;

@end

