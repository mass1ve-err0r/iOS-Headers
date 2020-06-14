//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDStroke.h>

@class TSDStrokePattern, TSUColor;

@interface TSDMutableStroke : TSDStroke
{
}

+ (id)emptyStroke;
+ (id)stroke;
- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool dontClearBackground; // @dynamic dontClearBackground;

// Remaining properties
@property(nonatomic) double actualWidth; // @dynamic actualWidth;
@property(nonatomic) int cap; // @dynamic cap;
@property(retain, nonatomic) TSUColor *color; // @dynamic color;
@property(nonatomic) int join; // @dynamic join;
@property(nonatomic) double miterLimit; // @dynamic miterLimit;
@property(retain, nonatomic) TSDStrokePattern *pattern; // @dynamic pattern;
@property(nonatomic) double width; // @dynamic width;

@end

