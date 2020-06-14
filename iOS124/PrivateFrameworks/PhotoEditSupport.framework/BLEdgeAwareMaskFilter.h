//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@interface BLEdgeAwareMaskFilter : CIFilter
{
    float *_cubeData;
    CDStruct_76a42933 _currentInputColor;
    CIFilter *_ciColorCubeFilter;
    CDStruct_76a42933 _inputColor;
}

@property CDStruct_76a42933 inputColor; // @synthesize inputColor=_inputColor;
- (void).cxx_destruct;
- (id)outputImage;
- (_Bool)isDataUpToDate;
- (void)setInputImage:(id)arg1;
- (id)cubeData;
- (unsigned long long)dataLength;
- (void)labFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 lunminance:(float *)arg4 a:(float *)arg5 b:(float *)arg6;
- (void)dealloc;
- (id)init;

@end

