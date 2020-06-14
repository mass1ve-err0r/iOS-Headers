//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, CAShapeLayer, TSDBezierPath, TSDRep;

@interface TSDKnob : NSObject
{
    int mType;
    struct CGPoint mPosition;
    _Bool mOffsetValid;
    struct CGPoint mOffset;
    double mRadius;
    unsigned long long mTag;
    TSDRep *mRep;
    _Bool mWorksWhenRepLocked;
    _Bool mWorksWhenInVersionBrowsingMode;
    _Bool mShouldDisplayDirectlyOverRep;
    CALayer *mLayer;
    TSDBezierPath *mHitRegionPath;
    CAShapeLayer *mHitRegionLayer;
}

@property(readonly, nonatomic) TSDRep *rep; // @synthesize rep=mRep;
@property(copy, nonatomic) TSDBezierPath *hitRegionPath; // @synthesize hitRegionPath=mHitRegionPath;
@property(nonatomic) _Bool shouldDisplayDirectlyOverRep; // @synthesize shouldDisplayDirectlyOverRep=mShouldDisplayDirectlyOverRep;
@property(nonatomic) _Bool worksWhenInVersionBrowsingMode; // @synthesize worksWhenInVersionBrowsingMode=mWorksWhenInVersionBrowsingMode;
@property(nonatomic) _Bool worksWhenRepLocked; // @synthesize worksWhenRepLocked=mWorksWhenRepLocked;
@property(nonatomic) unsigned long long tag; // @synthesize tag=mTag;
@property(nonatomic) double radius; // @synthesize radius=mRadius;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=mOffset;
@property(nonatomic) _Bool offsetValid; // @synthesize offsetValid=mOffsetValid;
@property(nonatomic) struct CGPoint position; // @synthesize position=mPosition;
@property(nonatomic) int type; // @synthesize type=mType;
- (id)description;
- (_Bool)obscuresKnob:(id)arg1;
- (_Bool)overlapsWithKnob:(id)arg1;
- (void)updateHitRegionPathForRep:(id)arg1;
- (double)i_rotationInDegreesForKnobOnRep:(id)arg1;
- (struct CGRect)boundingBoxOfHitRegionForRep:(id)arg1 scale:(double)arg2;
- (id)hitRegionLayerForRep:(id)arg1;
@property(readonly, nonatomic) CALayer *layer;
- (id)knobImage;
- (int)dragType;
- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)initWithType:(int)arg1 position:(struct CGPoint)arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;

@end

