//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODRiTunesStoreDaemonProtocol-Protocol.h"

@class NSString;

@interface ODRiTunesStoreDaemonClient : NSObject <ODRiTunesStoreDaemonProtocol>
{
}

+ (id)displayStringForReason:(unsigned long long)arg1;
+ (id)_downloadManifestFromURL:(id)arg1 error:(id *)arg2;
- (void)cancelDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)resumeDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)pauseDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)applicationDownloadInitiatedForApplication:(id)arg1 manifestURL:(id)arg2 reason:(unsigned long long)arg3 jobID:(long long)arg4 replyBlock:(CDUnknownBlockType)arg5;
- (id)interface;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

