//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface MTUIShadowInfo : NSObject
{
    UIColor *_color;
    double _radius;
    double _scale;
    struct CGSize _offset;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)initWithColor:(id)arg1 radius:(double)arg2 offset:(struct CGSize)arg3 scale:(double)arg4;

@end

