//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@interface FCColor : NSObject <NSCopying>
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

+ (id)clearColor;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithPBColor:(id)arg1;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) double blue; // @synthesize blue=_blue;
@property(readonly, nonatomic) double green; // @synthesize green=_green;
@property(readonly, nonatomic) double red; // @synthesize red=_red;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)legibleColor;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
- (void)readDeconstructedRepresentationWithAcccessor:(CDUnknownBlockType)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)init;
- (id)pbColor;

@end

