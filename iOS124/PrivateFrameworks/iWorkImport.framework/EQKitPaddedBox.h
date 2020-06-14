//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitBox.h>

__attribute__((visibility("hidden")))
@interface EQKitPaddedBox : EQKitBox
{
    EQKitBox *mBox;
    double mHeight;
    double mDepth;
    double mWidth;
    double mLspace;
    double mVoffset;
}

@property(readonly, nonatomic) double voffset; // @synthesize voffset=mVoffset;
@property(readonly, nonatomic) double lspace; // @synthesize lspace=mLspace;
@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=mBox;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (struct CGRect)erasableBounds;
@property(readonly, nonatomic) double depth;
@property(readonly, nonatomic) double height;
- (double)opticalAlignWidth;
@property(readonly, nonatomic) double width;
- (void)dealloc;
- (id)initWithBox:(id)arg1 height:(double)arg2 width:(double)arg3 depth:(double)arg4 lspace:(double)arg5 voffset:(double)arg6;
- (id)init;

@end

