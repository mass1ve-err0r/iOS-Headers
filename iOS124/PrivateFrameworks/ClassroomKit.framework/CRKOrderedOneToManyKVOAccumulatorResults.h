//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet;

@interface CRKOrderedOneToManyKVOAccumulatorResults : NSObject
{
    NSIndexSet *_insertions;
    NSIndexSet *_deletions;
    NSIndexSet *_replacements;
    NSArray *_moves;
}

@property(retain, nonatomic) NSArray *moves; // @synthesize moves=_moves;
@property(retain, nonatomic) NSIndexSet *replacements; // @synthesize replacements=_replacements;
@property(retain, nonatomic) NSIndexSet *deletions; // @synthesize deletions=_deletions;
@property(retain, nonatomic) NSIndexSet *insertions; // @synthesize insertions=_insertions;
- (void).cxx_destruct;
- (id)resultsByExcludingLocalDeletions:(id)arg1;
@property(readonly, nonatomic) long long netCountChange;
- (id)description;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;

@end

