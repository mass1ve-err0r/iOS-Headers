//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@interface WFTemperatureUnitResponse : WFResponse <NSSecureCoding>
{
    int _temperatureUnit;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int temperatureUnit; // @synthesize temperatureUnit=_temperatureUnit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

