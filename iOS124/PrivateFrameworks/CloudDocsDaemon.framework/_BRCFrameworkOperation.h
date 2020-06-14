//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCancellable-Protocol.h>

@class NSObject, NSString;
@protocol BROperationClient;

__attribute__((visibility("hidden")))
@interface _BRCFrameworkOperation : _BRCOperation <BRCancellable>
{
    _Bool _startedFinish;
    _Bool _ignoreMissingRemoteClientProxy;
    NSObject<BROperationClient> *_remoteClientProxy;
}

@property(nonatomic) _Bool ignoreMissingRemoteClientProxy; // @synthesize ignoreMissingRemoteClientProxy=_ignoreMissingRemoteClientProxy;
@property(retain, nonatomic) NSObject<BROperationClient> *remoteClientProxy; // @synthesize remoteClientProxy=_remoteClientProxy;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)start;
- (oneway void)invalidate;
- (id)descriptionAdditionalStringWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

