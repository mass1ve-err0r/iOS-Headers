//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/NSObject-Protocol.h>

@class NSData, NSLocale, WFAirQualityConditions, WFLocation;

@protocol WFAirQualityDataParser <NSObject>
+ (WFAirQualityConditions *)parseAirQualityData:(NSData *)arg1 location:(WFLocation *)arg2 locale:(NSLocale *)arg3 error:(id *)arg4;
@end

