//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSObject, Protocol;

@interface NSProtocolChecker : NSProxy
{
}

+ (id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (const char *)_localClassNameForClass;
- (id)methodSignatureForSelector:(SEL)arg1;
- (struct objc_method_description *)methodDescriptionForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
@property(readonly, retain) NSObject *target;
@property(readonly) Protocol *protocol;

@end

