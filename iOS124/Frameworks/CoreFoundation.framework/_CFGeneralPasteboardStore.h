//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/_CFPasteboardStore.h>

#import <CoreFoundation/NSXPCListenerDelegate-Protocol.h>
#import <CoreFoundation/UAPasteboardClientProtocol-Protocol.h>

@class NSObject, NSString, _CFRemotePasteboardCache;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CFGeneralPasteboardStore : _CFPasteboardStore <NSXPCListenerDelegate, UAPasteboardClientProtocol>
{
    long long _localOnlyGeneration;
    _CFRemotePasteboardCache *_remotePasteboardCache;
    NSObject<OS_dispatch_queue> *_remotePasteboardNotificationQueue;
}

+ (id)generalPasteboard;
- (void)pasteboardWillBeFetched:(CDUnknownBlockType)arg1;
- (void)remotePasteboardAvailable:(_Bool)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (void)_onqueue_handleNewEntries:(struct __CFArray *)arg1 forMessage:(id)arg2 shouldInvalidateClientMetadata:(_Bool *)arg3;
- (id)_onqueue_cacheForGeneration:(long long)arg1;
- (long long)_onqueue_nextGenerationCount;
- (void)notifyRemoteGenerationBecameAvailable:(unsigned char)arg1;
- (void)_onqueue_notifyRemoteGenerationBecameAvailable:(unsigned char)arg1;
- (void)handleMakeGenerationLocal:(id)arg1;
- (id)_initWithName:(struct __CFString *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

