//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion;

@interface XPCClientBackgroundTask : NSObject
{
    CDUnknownBlockType _invalidationBlock;
    BKSProcessAssertion *_processAssertion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BKSProcessAssertion *processAssertion;
@property(readonly, nonatomic) CDUnknownBlockType invalidationBlock;
- (void)dealloc;
- (id)initWithProcessAssertion:(id)arg1 invalidationBlock:(CDUnknownBlockType)arg2;

@end

