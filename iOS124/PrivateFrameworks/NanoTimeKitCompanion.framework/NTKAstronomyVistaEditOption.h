//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKAstronomyVistaEditOption : NTKEnumeratedEditOption
{
}

+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)optionWithAstronomyVista:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) unsigned long long astronomyVista;
- (long long)swatchStyle;

@end

