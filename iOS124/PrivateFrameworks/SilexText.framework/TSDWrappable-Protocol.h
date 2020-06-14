//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexText/NSObject-Protocol.h>

@class TSDAbstractLayout, TSDWrapPolygon;

@protocol TSDWrappable <NSObject>
@property(readonly, nonatomic) _Bool hasAlpha;
- (int)wrapFitType;
- (int)wrapDirection;
- (int)wrapType;
- (_Bool)isHTMLWrap;
- (TSDWrapPolygon *)wrapPolygon;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (TSDAbstractLayout *)parent;
@end

