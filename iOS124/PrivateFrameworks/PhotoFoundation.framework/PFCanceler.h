//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFCanceler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PFCanceler : NSObject <PFCanceler>
{
    NSObject<OS_dispatch_queue> *_serializer;
    _Bool _isCanceled;
    struct PFAsyncDispatchMulticaster *_multicaster;
}

+ (_Bool)supportsNotifyOnCancel;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancel;
- (_Bool)isCanceled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

