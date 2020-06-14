//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OITSUFlushableObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OITSUCache : OITSUFlushableObject
{
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (id)description;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)hasFlushableContent;
- (void)unload;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)p_addEntriesFromDictionary:(id)arg1;
- (id)p_objectForKey:(id)arg1;
- (id)p_createContentsDictionary;

@end

