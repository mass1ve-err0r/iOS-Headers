//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKObjectType.h>

@interface HKCharacteristicType : HKObjectType
{
}

- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)arg1;
- (id)_relatedCategoryType;
- (id)_relatedQuantityType;
- (id)_canoncialUnit;
- (_Bool)_validateQuantity:(id)arg1 withCompatibleUnit:(id)arg2 error:(id *)arg3;
- (_Bool)_validateWheelchairUse:(id)arg1 error:(id *)arg2;
- (_Bool)_validateFitzpatrickSkinType:(id)arg1 error:(id *)arg2;
- (_Bool)_validateBloodType:(id)arg1 error:(id *)arg2;
- (_Bool)_validateBiologicalSex:(id)arg1 error:(id *)arg2;
- (_Bool)_validateDateOfBirth:(id)arg1 error:(id *)arg2;
- (_Bool)_validateCharacteristic:(id)arg1 error:(id *)arg2;

@end

