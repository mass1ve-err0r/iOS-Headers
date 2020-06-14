//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKVOToken : NSObject
{
    NSString *_keypath;
    long long _index;
    CDUnknownBlockType _block;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *keypath; // @synthesize keypath=_keypath;
- (void).cxx_destruct;
@property(readonly, nonatomic) void *context;
- (id)description;
- (id)initWithKeyPath:(id)arg1 index:(long long)arg2 block:(CDUnknownBlockType)arg3;

@end

