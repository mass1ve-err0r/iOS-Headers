//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTCellSpec.h>

__attribute__((visibility("hidden")))
@interface TSTCellRangeControlSpec : TSTCellSpec
{
    int _interactionType;
    int _legacyDisplayFormatType;
    double _minimum;
    double _maximum;
    double _increment;
}

+ (id)instanceWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
+ (id)cellSpecFromTSKFormat:(id)arg1;
+ (id)sliderSpecWithMinimum:(double)arg1 maximum:(double)arg2 increment:(double)arg3;
+ (id)stepperSpecWithMinimum:(double)arg1 maximum:(double)arg2 increment:(double)arg3;
+ (id)defaultRangeControlSpecOfType:(int)arg1;
+ (double)defaultCellValueForInteractionType:(int)arg1;
+ (_Bool)legalRangeControlMinimum:(double)arg1 maximum:(double)arg2 increment:(double)arg3;
@property(readonly, nonatomic) int legacyDisplayFormatType; // @synthesize legacyDisplayFormatType=_legacyDisplayFormatType;
@property(readonly, nonatomic) double increment; // @synthesize increment=_increment;
@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double minimum; // @synthesize minimum=_minimum;
- (int)interactionType;
- (void)saveToArchive:(struct CellSpecArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
- (id)tskStepperSliderFormatWithDisplayFormatType:(int)arg1;
- (_Bool)validateFormatAndValue:(id)arg1;
- (double)valueFromString:(id)arg1 locale:(id)arg2;
- (double)recomputedValueFromValue:(double)arg1 changed:(_Bool *)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)asRangeControlSpec;
- (id)initWithInteractionType:(int)arg1 minimum:(double)arg2 maximum:(double)arg3 increment:(double)arg4;

@end

