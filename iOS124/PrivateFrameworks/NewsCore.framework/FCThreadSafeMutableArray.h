//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSArray, NSMutableArray;

@interface FCThreadSafeMutableArray : NSObject
{
    NFUnfairLock *_lock;
    NSMutableArray *_array;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *readOnlyArray;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end

