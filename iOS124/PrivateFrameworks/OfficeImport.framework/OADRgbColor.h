//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADRgbColor : OADColor
{
    float mRed;
    float mGreen;
    float mBlue;
}

+ (id)white;
+ (id)black;
+ (id)rgbColorWithTSUColor:(id)arg1;
+ (id)rgbColorWithWhiteByte:(float)arg1;
+ (id)rgbColorWithWhite:(float)arg1;
+ (id)rgbColorWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
+ (id)rgbColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isBlack;
- (_Bool)isWhite;
- (unsigned char)blueByte;
- (unsigned char)greenByte;
- (unsigned char)redByte;
- (float)blue;
- (float)green;
- (float)red;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)rgbColorWithFraction:(float)arg1 ofRgbColor:(id)arg2;
- (id)initWithWhiteByte:(float)arg1;
- (id)initWithWhite:(float)arg1;
- (id)initWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;

@end

