//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface VCIntentDefinitionSyncStateModel : NSObject
{
    NSMutableDictionary *_model;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_persistencePath;
    _Bool _needsSave;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)readWithBlock:(CDUnknownBlockType)arg1;
- (void)modifyWithBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)deleteSyncStateForService:(id)arg1 andBundleID:(id)arg2;
- (void)setSyncState:(id)arg1 forService:(id)arg2 andBundleID:(id)arg3;
- (id)syncStatesForService:(id)arg1;
- (id)syncStateForService:(id)arg1 andBundleID:(id)arg2;
- (void)_save;
- (id)_data;
- (id)initWithPersistencePath:(id)arg1;

@end

