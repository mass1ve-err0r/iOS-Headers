//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface WebMainThreadInvoker : NSProxy
{
    id target;
    id exception;
}

- (void)handleException:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1;

@end

