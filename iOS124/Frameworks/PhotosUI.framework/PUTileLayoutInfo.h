//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class NSIndexPath, NSString, PUTileIdentifier;
@protocol PUTilingCoordinateSystem;

@interface PUTileLayoutInfo : NSObject <NSCopying>
{
    PUTileIdentifier *_tileIdentifier;
    double _alpha;
    double _zPosition;
    id <PUTilingCoordinateSystem> _coordinateSystem;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGRect _contentsRect;
    struct UIEdgeInsets _hitTestOutset;
    CDStruct_6c514524 _expandedRectInsets;
    struct CGAffineTransform _transform;
}

@property(nonatomic) CDStruct_6c514524 expandedRectInsets; // @synthesize expandedRectInsets=_expandedRectInsets;
@property(retain, nonatomic, setter=_setCoordinateSystem:) id <PUTilingCoordinateSystem> coordinateSystem; // @synthesize coordinateSystem=_coordinateSystem;
@property(readonly, nonatomic) struct UIEdgeInsets hitTestOutset; // @synthesize hitTestOutset=_hitTestOutset;
@property(readonly, nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(nonatomic, setter=_setZPosition:) double zPosition; // @synthesize zPosition=_zPosition;
@property(nonatomic, setter=_setTransform:) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic, setter=_setAlpha:) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic, setter=_setSize:) struct CGSize size; // @synthesize size=_size;
@property(nonatomic, setter=_setCenter:) struct CGPoint center; // @synthesize center=_center;
@property(retain, nonatomic, setter=_setTileIdentifier:) PUTileIdentifier *tileIdentifier; // @synthesize tileIdentifier=_tileIdentifier;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) struct CGRect frame;
- (id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3;
- (id)layoutInfoWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 alpha:(double)arg3 tranform:(struct CGAffineTransform)arg4 zPosition:(double)arg5 coordinateSystem:(id)arg6;
- (id)layoutInfoWithCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 tranform:(struct CGAffineTransform)arg3;
- (id)layoutInfoWithZPosition:(double)arg1;
- (id)layoutInfoWithAlpha:(double)arg1;
- (id)layoutInfoWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;
- (id)layoutInfoWithCoordinateSystem:(id)arg1;
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;
- (id)clone;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(readonly, nonatomic) NSString *tileKind;
@property(readonly, nonatomic) NSString *dataSourceIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(struct CGRect)arg7 hitTestOutset:(struct UIEdgeInsets)arg8 coordinateSystem:(id)arg9;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(struct CGRect)arg7 coordinateSystem:(id)arg8;
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;
- (id)init;
- (struct CGPoint)parallaxOffset;
- (struct UIEdgeInsets)cropInsets;

@end

