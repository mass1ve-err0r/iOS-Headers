//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface NTKSolarRichComplicationCircularViewColorPoint : NSObject
{
    UIColor *_color1;
    UIColor *_color2;
    UIColor *_color3;
    double _position1;
    double _position2;
    double _position3;
    double _progress;
}

+ (id)allPoints;
+ (id)pointWithColor1:(id)arg1 color2:(id)arg2 color3:(id)arg3 position1:(double)arg4 position2:(double)arg5 position3:(double)arg6 progress:(double)arg7;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) double position3; // @synthesize position3=_position3;
@property(readonly, nonatomic) double position2; // @synthesize position2=_position2;
@property(readonly, nonatomic) double position1; // @synthesize position1=_position1;
@property(readonly, nonatomic) UIColor *color3; // @synthesize color3=_color3;
@property(readonly, nonatomic) UIColor *color2; // @synthesize color2=_color2;
@property(readonly, nonatomic) UIColor *color1; // @synthesize color1=_color1;
- (void).cxx_destruct;

@end

