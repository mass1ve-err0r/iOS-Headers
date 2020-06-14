//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OADColor, OADFontReference;

__attribute__((visibility("hidden")))
@interface OADTableTextStyle : NSObject
{
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (id)defaultStyle;
+ (int)defaultItalic;
+ (int)defaultBold;
+ (id)defaultFontReference;
+ (id)defaultColor;
- (id)description;
- (void)applyOverridesFrom:(id)arg1;
- (id)shallowCopy;
- (void)setItalic:(int)arg1;
- (int)italic;
- (void)setBold:(int)arg1;
- (int)bold;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setFontReference:(id)arg1;
- (id)fontReference;
- (void)dealloc;
- (id)init;

@end

