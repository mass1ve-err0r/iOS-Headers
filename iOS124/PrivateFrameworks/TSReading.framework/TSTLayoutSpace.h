//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTCoordinateArray, TSTLayout, TSTLayoutSpaceBundle, TSTMasterLayout;

@interface TSTLayoutSpace : NSObject
{
    TSTLayoutSpaceBundle *mBundle;
    int mLayoutSpaceType;
    struct {
        _Bool coordinates;
        _Bool tableOffset;
    } mInvalidFlags;
    CDStruct_58eae27c mGridRange;
    _Bool mHeaderColumnsRepeat;
    _Bool mHeaderRowsRepeat;
    double mViewScale;
    struct CGAffineTransform mTransformToCanvas;
    struct CGAffineTransform mTransformFromCanvas;
    struct CGAffineTransform mTransformToDevice;
    struct CGAffineTransform mTransformFromDevice;
    _Bool mDrawBlackAndWhite;
    _Bool mDrawPreventAntialias;
    struct CGPoint mTableOffset;
    TSTCoordinateArray *mHeaderRowColumnCoordinates;
    TSTCoordinateArray *mBodyColumnCoordinates;
    TSTCoordinateArray *mHeaderColumnRowCoordinates;
    TSTCoordinateArray *mBodyRowCoordinates;
    struct CGRect mCachedFrame;
    struct CGRect mCachedAlignedFrame;
    struct CGRect mCachedStrokeFrame;
    struct CGRect mCachedAlignedStrokeFrame;
    _Bool mLayoutDirectionIsLeftToRight;
    struct _opaque_pthread_rwlock_t mLock;
}

@property(nonatomic) struct CGPoint tableOffset; // @synthesize tableOffset=mTableOffset;
@property(nonatomic) _Bool drawPreventAntialias; // @synthesize drawPreventAntialias=mDrawPreventAntialias;
@property(nonatomic) _Bool drawBlackAndWhite; // @synthesize drawBlackAndWhite=mDrawBlackAndWhite;
@property(nonatomic) struct CGAffineTransform transformFromDevice; // @synthesize transformFromDevice=mTransformFromDevice;
@property(nonatomic) struct CGAffineTransform transformToDevice; // @synthesize transformToDevice=mTransformToDevice;
@property(nonatomic) struct CGAffineTransform transformFromCanvas; // @synthesize transformFromCanvas=mTransformFromCanvas;
@property(nonatomic) struct CGAffineTransform transformToCanvas; // @synthesize transformToCanvas=mTransformToCanvas;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) _Bool headerRowsRepeat; // @synthesize headerRowsRepeat=mHeaderRowsRepeat;
@property(nonatomic) _Bool headerColumnsRepeat; // @synthesize headerColumnsRepeat=mHeaderColumnsRepeat;
@property(readonly, nonatomic) _Bool layoutDirectionIsLeftToRight; // @synthesize layoutDirectionIsLeftToRight=mLayoutDirectionIsLeftToRight;
@property(readonly, nonatomic) int layoutSpaceType; // @synthesize layoutSpaceType=mLayoutSpaceType;
@property(readonly, nonatomic) TSTLayoutSpaceBundle *bundle; // @synthesize bundle=mBundle;
- (int)validateCoordinateCache:(id)arg1;
- (void)validateCachedFrames;
- (int)validateTableOffset:(id)arg1;
- (int)validate:(id)arg1;
- (void)invalidateTableOffset;
- (void)invalidateCoordinates;
- (void)unlock;
- (void)lockForWrite;
- (void)lockForRead;
- (id)description;
- (void)dealloc;
- (id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2;
@property(readonly, nonatomic) _Bool isCorner;
@property(readonly, nonatomic) _Bool isRows;
@property(readonly, nonatomic) _Bool isColumns;
@property(readonly, nonatomic) _Bool isRepeat;
@property(readonly, nonatomic) _Bool isFrozen;
@property(readonly, nonatomic) _Bool isMain;
- (_Bool)p_getLayoutDirectionLeftToRight;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
@property(readonly, nonatomic) TSTLayout *layout;

@end

