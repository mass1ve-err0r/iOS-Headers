//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject
{
    WebScriptWorldPrivate *_private;
}

+ (id)scriptWorldForJavaScriptContext:(id)arg1;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext *)arg1;
+ (id)world;
+ (id)standardWorld;
+ (id)findOrCreateWorld:(struct DOMWrapperWorld *)arg1;
- (void)dealloc;
- (void)unregisterWorld;
- (id)init;
- (id)initWithWorld:(Ref_526bc8c1 *)arg1;

@end

