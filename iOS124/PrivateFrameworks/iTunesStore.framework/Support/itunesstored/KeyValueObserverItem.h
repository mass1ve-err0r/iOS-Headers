//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KeyValueObserverItem : NSObject
{
    CDUnknownBlockType _block;
    NSString *_keyPath;
    id _object;
}

@property(readonly, nonatomic) id object; // @synthesize object=_object;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)dealloc;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

