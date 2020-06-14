//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHBaseStyle.h>

__attribute__((visibility("hidden")))
@interface TSCHChartAxisStyle : TSCHBaseStyle
{
}

+ (id)identifierForCategoryStyleWithRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)presetStyleDescriptorForCategoryStyleOrdinal:(unsigned long long)arg1;
+ (id)identifierForValueStyleWithRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)presetStyleDescriptorForValueStyleOrdinal:(unsigned long long)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)imageFillProperties;
+ (id)properties;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg1;
- (void)p_upgrade3DChartPropertiesFrom2DProperties:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;

@end

