//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCDirectoryEnumerator : NSObject
{
    NSMutableArray *_stack;
    _Bool _recursive;
    int *_err;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(_Bool)arg2 error:(int *)arg3;

@end

