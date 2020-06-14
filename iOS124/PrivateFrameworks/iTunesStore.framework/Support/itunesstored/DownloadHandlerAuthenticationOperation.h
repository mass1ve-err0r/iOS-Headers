//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "DownloadHandlerObserver-Protocol.h"

@class DownloadSessionProperties, NSObject, NSString, NSURLCredential;
@protocol OS_dispatch_semaphore;

@interface DownloadHandlerAuthenticationOperation : ISOperation <DownloadHandlerObserver>
{
    CDUnknownBlockType _outputBlock;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    long long _sessionID;
    DownloadSessionProperties *_sessionProperties;
    long long _state;
    NSURLCredential *_urlCredential;
}

- (void)_setURLCredential:(id)arg1;
- (void)_setState:(long long)arg1;
- (id)_openSession;
- (void)downloadHandlerManager:(id)arg1 sessionsDidChange:(id)arg2;
- (void)run;
- (void)cancel;
@property(readonly) NSURLCredential *URLCredential;
@property(copy) CDUnknownBlockType outputBlock;
@property(readonly) DownloadSessionProperties *sessionProperties;
@property(readonly) long long downloadSessionState;
- (void)dealloc;
- (id)initWithSessionProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

