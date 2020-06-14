//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSIndexExtensionDelegate-Protocol.h>

@class NSCondition, NSDictionary, NSString, _MDIndexExtensionLoader;
@protocol OS_dispatch_queue;

@interface _MDIndexExtensionManager : NSObject <CSIndexExtensionDelegate>
{
    NSObject<OS_dispatch_queue> *_notifyQueue;
    _MDIndexExtensionLoader *_extensionLoader;
    NSDictionary *_indexExtensionsByBundleID;
    NSDictionary *_fileProviderBundleMap;
    NSObject<OS_dispatch_queue> *_queue;
    NSCondition *_extensionsCondition;
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    long long _loaderCallbackCount;
}

+ (void)setMemoryPressureStatus:(unsigned long long)arg1;
+ (id)sharedManager;
@property(nonatomic) long long loaderCallbackCount; // @synthesize loaderCallbackCount=_loaderCallbackCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionManagerQueue; // @synthesize extensionManagerQueue=_extensionManagerQueue;
@property(retain, nonatomic) NSCondition *extensionsCondition; // @synthesize extensionsCondition=_extensionsCondition;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *fileProviderBundleMap; // @synthesize fileProviderBundleMap=_fileProviderBundleMap;
@property(retain, nonatomic) NSDictionary *indexExtensionsByBundleID; // @synthesize indexExtensionsByBundleID=_indexExtensionsByBundleID;
@property(retain, nonatomic) _MDIndexExtensionLoader *extensionLoader; // @synthesize extensionLoader=_extensionLoader;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
- (void).cxx_destruct;
- (void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_performJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performJob:(id)arg1 extensions:(id)arg2 count:(unsigned long long)arg3 throttle:(id)arg4 perExtensionCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_didRetryJobWithBundleID:(id)arg1;
- (void)_willRunJobWithBundleID:(id)arg1;
- (id)extensions;
- (id)anyExtensionWithBlock:(CDUnknownBlockType)arg1;
- (id)allExtensionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_waitForLoadLocked;
- (void)_notifyForLoadedExtensions;
- (void)findExtensionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadExtensions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

