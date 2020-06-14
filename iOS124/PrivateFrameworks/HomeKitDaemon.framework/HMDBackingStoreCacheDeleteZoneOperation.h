//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheZone;

@interface HMDBackingStoreCacheDeleteZoneOperation : HMDBackingStoreOperation
{
    CDUnknownBlockType _creationBlock;
    HMDBackingStoreCacheZone *_zone;
}

@property(retain, nonatomic) HMDBackingStoreCacheZone *zone; // @synthesize zone=_zone;
@property(copy, nonatomic) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithZone:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end
