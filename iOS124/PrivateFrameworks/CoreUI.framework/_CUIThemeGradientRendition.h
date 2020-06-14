//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIThemeGradient;

__attribute__((visibility("hidden")))
@interface _CUIThemeGradientRendition : CUIThemeRendition
{
    CUIThemeGradient *gradient;
    double gradientAngle;
}

+ (struct __CUIThemeGradientRenditionInitializerStruct)_parseGradientInfoFromCSIHeader:(const struct _csiheader *)arg1;
+ (id)_nodesFromNodeList:(struct _csigradientdatanode *)arg1 count:(unsigned long long)arg2 header:(const struct _csiheader *)arg3;
- (unsigned int)gradientStyle;
- (id)gradient;
- (double)gradientDrawingAngle;
- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end

