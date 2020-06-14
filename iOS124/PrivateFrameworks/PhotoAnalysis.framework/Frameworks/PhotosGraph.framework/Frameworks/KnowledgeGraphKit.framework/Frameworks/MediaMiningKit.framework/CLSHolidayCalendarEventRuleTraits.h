//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CLSHolidayCalendarEventRuleTraits : NSObject
{
    _Bool _containsMePerson;
    unsigned long long _numberOfPeople;
    unsigned long long _peopleTrait;
    unsigned long long _locationTrait;
    NSSet *_categories;
}

@property(retain, nonatomic) NSSet *categories; // @synthesize categories=_categories;
@property(nonatomic) unsigned long long locationTrait; // @synthesize locationTrait=_locationTrait;
@property(nonatomic) unsigned long long peopleTrait; // @synthesize peopleTrait=_peopleTrait;
@property(nonatomic) unsigned long long numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
@property(nonatomic) _Bool containsMePerson; // @synthesize containsMePerson=_containsMePerson;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

