//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherForecastSnippet : SAUISnippet
{
}

+ (id)forecastSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)forecastSnippet;
@property(retain, nonatomic) SAUIImageResource *attributionImage;
@property(retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property(copy, nonatomic) NSArray *aceWeathers;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

