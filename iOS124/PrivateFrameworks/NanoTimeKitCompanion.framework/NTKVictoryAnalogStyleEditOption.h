//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKVictoryAnalogStyleEditOption : NTKEnumeratedEditOption
{
}

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)optionWithStyle:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
@property(readonly, nonatomic) unsigned long long style;
- (long long)swatchStyle;

@end

