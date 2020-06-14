//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLRectJSExports-Protocol.h>

@class TMLPoint, TMLSize;

@interface TMLRect : NSObject <TMLRectJSExports, NSCopying>
{
    struct CGRect _rect;
}

+ (void)initializeJSContext:(id)arg1;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)description;
- (id)max:(double)arg1:(double)arg2;
- (id)min:(double)arg1:(double)arg2;
- (id)integral;
- (id)applyAffineTransform:(id)arg1;
@property(readonly, nonatomic) TMLPoint *maxpoint;
@property(readonly, nonatomic) TMLPoint *midpoint;
@property(readonly, nonatomic) TMLPoint *minpoint;
@property(readonly, nonatomic) double maxy;
@property(readonly, nonatomic) double midy;
@property(readonly, nonatomic) double miny;
@property(readonly, nonatomic) double maxx;
@property(readonly, nonatomic) double midx;
@property(readonly, nonatomic) double minx;
- (id)atOrigin:(id)arg1;
- (id)atOriginX:(double)arg1 y:(double)arg2;
- (id)withHeight:(double)arg1;
- (id)withWidth:(double)arg1;
- (id)offset:(double)arg1:(double)arg2;
- (id)originInset:(double)arg1:(double)arg2;
- (id)inset:(double)arg1:(double)arg2;
@property(readonly, nonatomic) TMLSize *size;
@property(readonly, nonatomic) TMLPoint *origin;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double y;
@property(readonly, nonatomic) double x;
- (id)CGRectValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRect:(struct CGRect)arg1;

@end

