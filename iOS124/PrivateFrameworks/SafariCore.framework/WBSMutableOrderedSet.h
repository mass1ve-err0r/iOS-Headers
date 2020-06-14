//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;

@interface WBSMutableOrderedSet : NSObject
{
    NSMutableOrderedSet *_mutableOrderedSet;
    unsigned long long _maximumCount;
}

- (void).cxx_destruct;
- (void)_moveObjectAtIndexToLast:(unsigned long long)arg1;
- (void)markObjectAsRecentlyUsed:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectAtIndexWithoutAffectingRecency:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *array;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (id)init;

@end

