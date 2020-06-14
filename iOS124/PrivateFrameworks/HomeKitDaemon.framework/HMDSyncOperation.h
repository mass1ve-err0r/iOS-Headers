//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperationOptions, HMFTimer, NSString, NSUUID;

@interface HMDSyncOperation : HMFObject
{
    NSUUID *_identifier;
    unsigned long long _operationType;
    HMFTimer *_delayTimer;
    CDUnknownBlockType _operationBlock;
    HMDSyncOperationOptions *_options;
}

+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudFetchSyncOperationWithCloudConflict:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
+ (id)cloudVerifyAccountSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudForcePushSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cloudPushSyncOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)cancelOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) HMDSyncOperationOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(retain, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *zoneName;
- (id)description;
- (id)_initWithOperationType:(unsigned long long)arg1 options:(id)arg2 syncBlock:(CDUnknownBlockType)arg3;

@end

