//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMapTable.h>

@interface NSMapTable (TSUAdditions)
- (void)tsu_enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_allObjects;
- (id)tsu_allKeys;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

