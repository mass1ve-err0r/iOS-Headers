//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

@class SXUnitConverter, UIColor;

@interface SXDataTableBorder : SXJSONObject
{
    double _width;
    SXUnitConverter *unitConverter;
}

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;
@property(retain, nonatomic) SXUnitConverter *unitConverter; // @synthesize unitConverter;
- (void).cxx_destruct;
@property(readonly, nonatomic) double width; // @synthesize width=_width;

// Remaining properties
@property(readonly, nonatomic) struct _SXConvertibleValue actualWidth; // @dynamic actualWidth;
@property(readonly, nonatomic) UIColor *color; // @dynamic color;

@end

