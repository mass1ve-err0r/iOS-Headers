//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFControlItem.h>

@class NSString;

@interface HFTemperatureUnitControlItem : HFControlItem
{
    NSString *_temperatureUnitCharacteristicType;
}

+ (Class)valueClass;
@property(readonly, copy, nonatomic) NSString *temperatureUnitCharacteristicType; // @synthesize temperatureUnitCharacteristicType=_temperatureUnitCharacteristicType;
- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;

@end

