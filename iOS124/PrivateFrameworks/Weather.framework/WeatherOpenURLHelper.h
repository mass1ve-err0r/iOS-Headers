//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WeatherOpenURLHelper : NSObject
{
}

+ (id)transientCityFromURLComponents:(id)arg1;
+ (id)cityFromURLComponents:(id)arg1 listedCities:(id)arg2;
+ (void)presentAddTransientCityDialog:(id)arg1 usingController:(id)arg2;
+ (void)displayCity:(id)arg1 usingController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2;
+ (id)URLForWeatherCityComponents:(id)arg1;
+ (id)URLForCity:(id)arg1;

@end

