//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTCoreModelColorPalette, NSArray, NSDictionary;

@interface AVTCoreModelCategory : NSObject
{
    AVTCoreModelColorPalette *_colorPalette;
    AVTCoreModelColorPalette *_secondaryColorPalette;
    NSArray *_presets;
    struct NSDictionary *_tags;
    NSArray *_rows;
    long long _presetCategory;
}

@property(readonly, nonatomic) long long presetCategory; // @synthesize presetCategory=_presetCategory;
@property(readonly, copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(readonly, copy, nonatomic) NSDictionary *tags; // @synthesize tags=_tags;
@property(readonly, copy, nonatomic) NSArray *presets; // @synthesize presets=_presets;
@property(readonly, nonatomic) AVTCoreModelColorPalette *secondaryColorPalette; // @synthesize secondaryColorPalette=_secondaryColorPalette;
@property(readonly, nonatomic) AVTCoreModelColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPresetCategory:(long long)arg1 colorPalette:(id)arg2 secondaryColorPalette:(id)arg3 presets:(id)arg4 tags:(struct NSDictionary *)arg5 rows:(id)arg6;

@end

