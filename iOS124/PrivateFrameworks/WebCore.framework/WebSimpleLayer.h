//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebSimpleLayer : CALayer
{
    _Bool _isRenderingInContext;
}

@property(readonly, nonatomic) _Bool isRenderingInContext; // @synthesize isRenderingInContext=_isRenderingInContext;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)display;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (id)actionForKey:(id)arg1;
- (void)renderInContext:(struct CGContext *)arg1;

@end

