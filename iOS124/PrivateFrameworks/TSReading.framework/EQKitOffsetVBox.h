//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/EQKitVBox.h>

@interface EQKitOffsetVBox : EQKitVBox
{
    double mOffset;
}

@property(readonly, nonatomic) double offset; // @synthesize offset=mOffset;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2 offset:(double)arg3;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2;
- (id)initWithChildBoxes:(id)arg1;
- (id)init;

@end

