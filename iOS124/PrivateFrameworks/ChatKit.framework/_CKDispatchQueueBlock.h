//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _CKDispatchQueueBlock : NSObject
{
    CDUnknownBlockType _block;
    NSString *_key;
    long long _priority;
    unsigned long long _fifo;
}

@property(nonatomic, setter=setFIFO:) unsigned long long fifo; // @synthesize fifo=_fifo;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)cancel;
- (long long)compare:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 key:(id)arg2 priority:(long long)arg3 fifo:(unsigned long long)arg4;
- (id)description;

@end

