//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VSRemoteKeepAlive-Protocol.h"

@class NSString, VSServerKeepAliveManager;
@protocol OS_os_transaction;

@interface VSKeepAliveClient : NSObject <VSRemoteKeepAlive>
{
    VSServerKeepAliveManager *_manager;
    _Bool _isActive;
    long long _activity;
    _Bool _keepSessionActive;
    NSObject<OS_os_transaction> *_transaction;
    struct __CFRunLoopSource *_registryRunLoopSource;
}

- (void).cxx_destruct;
- (oneway void)cancel;
- (oneway void)maintainWithAudioType:(long long)arg1 keepAudioSessionActive:(_Bool)arg2;
- (_Bool)_shouldChangeAudioSession;
- (void)setManager:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

