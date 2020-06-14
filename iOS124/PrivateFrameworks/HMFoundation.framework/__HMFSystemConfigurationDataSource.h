//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFSystemInfoNameDataSource-Protocol.h>

@class HMFUnfairLock, NSObject, NSString;
@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __HMFSystemConfigurationDataSource : HMFObject <HMFSystemInfoNameDataSource>
{
    HMFUnfairLock *_lock;
    id <HMFSystemInfoNameDataSourceDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    struct __SCDynamicStore *_store;
}

@property(readonly, nonatomic) struct __SCDynamicStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMFSystemInfoNameDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

