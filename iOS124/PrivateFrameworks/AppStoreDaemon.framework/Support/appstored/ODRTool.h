//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableSet, ODRiTunesStoreDaemonClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ODRTool : NSObject
{
    NSMutableSet *_bundleIDs;
    NSMutableSet *_dirtyProgress;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSLock *_lock;
    ODRiTunesStoreDaemonClient *_ondemandProxy;
    NSMutableDictionary *_progress;
    NSObject<OS_dispatch_source> *_progressTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_startProgressTimer;
- (id)_mediaAssetsForDownloadID:(long long)arg1;
- (void)_markDirtyProgress:(id)arg1;
- (void)_finishODRDownloadForBundleID:(id)arg1;
- (void)_endWithBundleID:(id)arg1;
- (id)_createProgressForBundleID:(id)arg1 usingDownload:(id)arg2;
- (void)_commitProgressTimer;
- (void)_beginWithBundleID:(id)arg1;
- (unsigned long long)_appDownloadReasonForDownload:(id)arg1 proxy:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startODRDownloadForBundleID:(id)arg1 downloadID:(long long)arg2 jobID:(long long)arg3;
- (_Bool)hasInitialODRAssetsForDownloadID:(long long)arg1;
- (_Bool)isODRRunningForBundleID:(id)arg1;
- (id)init;

@end

