//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DFramebuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DRenderProcessor : NSObject
{
    TSCH3DFramebuffer *_activeFramebuffer;
}

+ (id)processor;
+ (void)initialize;
@property(retain, nonatomic) TSCH3DFramebuffer *activeFramebuffer; // @synthesize activeFramebuffer=_activeFramebuffer;
- (void)resetBuffers;
- (void)endFrame;
- (void)beginFrame;
- (void)setRenderHints:(const struct RenderHints *)arg1;
- (struct RenderHints)renderHints;
- (void)popRenderState;
- (void)pushRenderState;
- (void)setRenderState:(const struct RenderState *)arg1;
- (struct RenderState)renderState;
- (void)updateRenderState;
- (void)popState;
- (void)pushState;
- (id)effects;
- (void)texcoords:(id)arg1;
- (void)normals:(id)arg1;
- (void)geometry:(id)arg1;
- (void)dealloc;
- (_Bool)canRenderPrefilteredLines;

@end
