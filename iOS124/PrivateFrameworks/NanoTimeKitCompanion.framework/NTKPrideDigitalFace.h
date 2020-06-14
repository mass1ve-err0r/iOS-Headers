//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKPrideDigitalFace : NTKFace
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (_Bool)isAvailableForDevice:(id)arg1;
+ (_Bool)isRestrictedForDevice:(id)arg1;
+ (void)callBlockWhenFaceBecomesAvailable:(CDUnknownBlockType)arg1;
+ (_Bool)releaseImminent;
+ (id)releaseDate;
+ (id)_debugReleaseDate;
+ (void)setEnabledState:(unsigned long long)arg1;
+ (unsigned long long)enabledState;
+ (void)_setWasAvailable;
+ (_Bool)_wasAvailable;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_hasOptionsForCustomEditMode:(long long)arg1;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_customEditModeForUniqueConfiguration;
- (id)_customEditModes;
- (id)_orderedComplicationSlots;
- (id)_complicationSlotDescriptors;

@end

