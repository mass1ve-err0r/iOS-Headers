//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class TSULinkedPointerSetEntry;

__attribute__((visibility("hidden")))
@interface TSULinkedPointerSetEnumerator : NSEnumerator
{
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mLastUsed;
}

- (id)nextObject;
- (id)initWithFirstEntry:(id)arg1;

@end

