//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class BLCacheDeleteStorageManager, BLService, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLDaemon : NSObject <NSXPCListenerDelegate>
{
    BLService *_libraryService;
    NSObject<OS_dispatch_queue> *_listenersReadyQueue;
    NSObject<OS_dispatch_queue> *_startupQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCListener *_libraryServiceListener;
    BLCacheDeleteStorageManager *_cacheDeleteManager;
}

+ (id)daemon;
@property(retain, nonatomic) BLCacheDeleteStorageManager *cacheDeleteManager; // @synthesize cacheDeleteManager=_cacheDeleteManager;
@property(retain, nonatomic) NSXPCListener *libraryServiceListener; // @synthesize libraryServiceListener=_libraryServiceListener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *startupQueue; // @synthesize startupQueue=_startupQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *listenersReadyQueue; // @synthesize listenersReadyQueue=_listenersReadyQueue;
@property(retain, nonatomic) BLService *libraryService; // @synthesize libraryService=_libraryService;
- (void).cxx_destruct;
- (void)sq_finishedStartingUp;
- (void)lrq_setupCacheDelete;
- (void)lrq_setupListeners;
- (void)lrq_setupBeforeListenersWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

