//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

__attribute__((visibility("hidden")))
@interface OADPatternFill : OADFill
{
    OADColor *mFgColor;
    OADColor *mBgColor;
    OADPattern *mPattern;
}

+ (id)defaultProperties;
- (id)namedImageDataWithBlipCollection:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (void)setColor:(id)arg1;
- (_Bool)isPatternOverridden;
- (void)setPattern:(id)arg1;
- (id)pattern;
- (_Bool)isBgColorOverridden;
- (void)setBgColor:(id)arg1;
- (id)bgColor;
- (_Bool)isFgColorOverridden;
- (void)setFgColor:(id)arg1;
- (id)fgColor;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

