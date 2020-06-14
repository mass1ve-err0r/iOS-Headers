//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDataMetadataSimpleSection.h>

@class HKDisplayTypeController, HKUnitPreferenceController, NSObject;
@protocol HKDataMetadataObject;

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection
{
    NSObject<HKDataMetadataObject> *_object;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
}

@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(readonly, nonatomic) NSObject<HKDataMetadataObject> *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)_loadMetadataValues;
- (id)initWithWorkoutEvent:(id)arg1;
- (id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;

@end

