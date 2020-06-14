//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODRDiagnosticsProtocol-Protocol.h"

@interface ODRDiagnosticsClient : NSObject <ODRDiagnosticsProtocol>
{
}

- (id)_prettyHashesString:(id)arg1;
- (void)prefetchThenRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)prefetchSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withPrefetchCompletion:(CDUnknownBlockType)arg3;
- (void)prefetchAndRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setSpaceReduction:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)getSpaceReductionWithReply:(CDUnknownBlockType)arg1;
- (void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)getSimulatedBandwidthWithReply:(CDUnknownBlockType)arg1;
- (void)purgeAssetWithIdentifier:(id)arg1 withRequestCompletion:(CDUnknownBlockType)arg2;
- (void)purgeAllAssetsForApplication:(id)arg1 withRequestCompletion:(CDUnknownBlockType)arg2;
- (void)testPurgeBytes:(long long)arg1 urgency:(int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)purgeBytes:(long long)arg1 odrOnly:(_Bool)arg2 urgency:(int)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)nonPurgeableAssetsWithReply:(CDUnknownBlockType)arg1;
- (void)purgeableAssetsWithReply:(CDUnknownBlockType)arg1;
- (void)registerManifest:(id)arg1 forBundleID:(id)arg2 withRequestCompletion:(CDUnknownBlockType)arg3;
- (void)fetchManifestForAdamID:(id)arg1 externalVersionID:(id)arg2 variant:(id)arg3 withFetchCompletion:(CDUnknownBlockType)arg4;
- (void)resumeRequestWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pauseRequestWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelRequestWithUUID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)loadSourceURL:(id)arg1 intoDestinationURL:(id)arg2 isUrgent:(_Bool)arg3 isStreaming:(_Bool)arg4 withRequestCompletion:(CDUnknownBlockType)arg5;
- (void)setSampler:(id)arg1 enabled:(_Bool)arg2 samplingInterval:(double)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)cancelMaintenanceWithReply:(CDUnknownBlockType)arg1;
- (void)performMaintenanceWithReply:(CDUnknownBlockType)arg1;
- (void)statusWithReply:(CDUnknownBlockType)arg1;
- (void)fakeWorkWithCount:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)assetsForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)manifestDictionaryForBundleID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)interface;
- (id)initWithConnection:(id)arg1;

@end

