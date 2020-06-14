//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageThresholdBinaryInverse : MPSUnaryImageKernel
{
    CDStruct_ce7c4229 filterInfo;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) const float *transform;
@property(readonly, nonatomic) float maximumValue;
@property(readonly, nonatomic) float thresholdValue;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 thresholdValue:(float)arg2 maximumValue:(float)arg3 linearGrayColorTransform:(const float *)arg4;

@end

