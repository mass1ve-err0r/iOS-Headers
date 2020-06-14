//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCacheDelegate;

@interface NSCache : NSObject
{
    id _delegate;
    void *_private[5];
    void *_reserved;
}

- (void)__apply:(CDUnknownBlockType)arg1;
- (id)allObjects;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(_Bool)arg1;
- (_Bool)evictsObjectsWhenApplicationEntersBackground;
@property _Bool evictsObjectsWithDiscardedContent;
- (unsigned long long)minimumObjectCount;
- (void)setMinimumObjectCount:(unsigned long long)arg1;
@property unsigned long long countLimit;
@property unsigned long long totalCostLimit;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
@property id <NSCacheDelegate> delegate;
@property(copy) NSString *name;
- (void)dealloc;
- (id)init;

@end

