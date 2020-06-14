//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKStepperSliderFormat_DEPRECATED : TSKFormat <NSCopying>
{
    int _displayFormatType;
    double _minimum;
    double _maximum;
    double _increment;
}

@property(readonly, nonatomic) int displayFormatType; // @synthesize displayFormatType=_displayFormatType;
@property(readonly, nonatomic) double increment; // @synthesize increment=_increment;
@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double minimum; // @synthesize minimum=_minimum;
- (id)asStepperSliderFormat;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFormatType:(int)arg1 minimum:(double)arg2 maximum:(double)arg3 increment:(double)arg4 displayFormatType:(int)arg5;
- (id)initWithFormatType:(int)arg1;

@end

