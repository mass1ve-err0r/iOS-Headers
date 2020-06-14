//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents, NSString;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

@interface CLSHolidayCalendarEventDateRule : NSObject
{
    id <CLSHolidayCalendarEventDateRuleDelegate> _delegate;
    NSDateComponents *_simpleRuleComponents;
    long long _startYear;
    long long _endYear;
    long long _offsetDays;
    NSString *_relativeToRuleUUID;
}

@property(copy, nonatomic) NSString *relativeToRuleUUID; // @synthesize relativeToRuleUUID=_relativeToRuleUUID;
@property(nonatomic) long long offsetDays; // @synthesize offsetDays=_offsetDays;
@property(nonatomic) long long endYear; // @synthesize endYear=_endYear;
@property(nonatomic) long long startYear; // @synthesize startYear=_startYear;
@property(copy, nonatomic) NSDateComponents *simpleRuleComponents; // @synthesize simpleRuleComponents=_simpleRuleComponents;
@property(nonatomic) __weak id <CLSHolidayCalendarEventDateRuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_stringDescriptionForDateRuleComponentValue:(long long)arg1;
- (id)debugDescription;
- (_Bool)matchesExplicitYear:(long long)arg1;
- (_Bool)hasExplicitYear;
- (_Bool)hasEndYear;
- (_Bool)hasStartYear;
- (id)localDateByEvaluatingRuleForYear:(long long)arg1;
- (id)initWithEventDescription:(id)arg1;

@end

