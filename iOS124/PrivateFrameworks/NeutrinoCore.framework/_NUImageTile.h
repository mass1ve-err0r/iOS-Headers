//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NUPurgeableStorage, OS_dispatch_queue;

@interface _NUImageTile : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <NUPurgeableStorage> _storage;
    unsigned long long _useCount;
    unsigned long long _accessCount;
    _Bool _wasPurged;
}

- (void).cxx_destruct;
- (_Bool)isValid;
- (long long)copyFromTile:(id)arg1 region:(id)arg2;
- (long long)writeStorageInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (long long)readStorageInRegion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_visitRead:(CDUnknownBlockType)arg1;
- (_Bool)_markAsUnpurgeable;
- (void)_markAsPurgeable;
- (_Bool)_decrementAccessCount;
- (_Bool)_incrementAccessCount;
- (_Bool)_decrementUseCount;
- (_Bool)decrementAccessAndUseCount;
- (_Bool)decrementAccessAndUseCountButLeaveAccessedIfLastUse;
- (_Bool)decrementAccessCount;
- (_Bool)incrementAccessCount;
- (_Bool)decrementUseCount;
- (void)incrementUseCount;
- (_Bool)isShared;
- (unsigned long long)accessCount;
- (unsigned long long)useCount;
- (void)returnToStorageFactory:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

@end

