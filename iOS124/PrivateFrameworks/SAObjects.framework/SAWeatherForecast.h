//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, SAWeatherCondition;

@interface SAWeatherForecast : AceObject <SAAceSerializable>
{
}

+ (id)forecastWithDictionary:(id)arg1 context:(id)arg2;
+ (id)forecast;
@property(copy, nonatomic) NSNumber *timeIndex;
@property(copy, nonatomic) NSNumber *isUserRequested;
@property(retain, nonatomic) SAWeatherCondition *condition;
@property(copy, nonatomic) NSNumber *chanceOfPrecipitation;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

