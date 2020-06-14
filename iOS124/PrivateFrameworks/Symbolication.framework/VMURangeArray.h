//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/NSCopying-Protocol.h>

@interface VMURangeArray : NSObject <NSCopying>
{
    unsigned int _count;
    struct _VMURange *_ranges;
    unsigned int _max;
    _Bool _sorted;
}

- (id)description;
- (unsigned int)count;
- (struct _VMURange *)ranges;
- (unsigned long long)sumLengths;
- (struct _VMURange)largestRange;
- (struct _VMURange)range;
- (struct _VMURange)subrangeNotExcludedBySelfForRange:(struct _VMURange)arg1;
- (_Bool)intersectsRange:(struct _VMURange)arg1;
- (_Bool)intersectsLocation:(unsigned long long)arg1;
- (void)removeAllRanges;
- (void)removeRangeAtIndex:(unsigned int)arg1;
- (void)insertRange:(struct _VMURange)arg1 atIndex:(unsigned int)arg2;
- (struct _VMURange)rangeForLocation:(unsigned long long)arg1;
- (unsigned long long)indexForLocation:(unsigned long long)arg1;
- (struct _VMURange)rangeAtIndex:(unsigned int)arg1;
- (void)addRanges:(id)arg1;
- (void)addRange:(struct _VMURange)arg1;
- (void)sort;
- (void)setCapacity:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRanges:(const struct _VMURange *)arg1 count:(unsigned int)arg2;
- (id)init;

@end

