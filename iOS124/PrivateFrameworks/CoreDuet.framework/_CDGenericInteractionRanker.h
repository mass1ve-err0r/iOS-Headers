//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDInteractionRanking-Protocol.h>

@class NSArray, NSDate, NSSet, NSString;

@interface _CDGenericInteractionRanker : NSObject <_CDInteractionRanking>
{
    _Bool _requireAllSeedContacts;
    NSDate *_referenceDate;
    NSArray *_seedContacts;
    NSString *_referenceLocationUUID;
    NSSet *_referenceKeywords;
    NSSet *_allowedIdentifiers;
    NSSet *_allowedPersonIds;
    NSSet *_allowedPersonIdType;
    NSString *_contactPrefix;
    double _timeHalfLife;
    double _timeOfDayHalfLife;
    double _timeOfWeekHalfLife;
    double _timeWeight;
    double _timeOfDayWeight;
    double _timeOfWeekWeight;
    double _c;
    double _sameWeekPeriodWeight;
    double _diffWeekPeriodWeight;
    double _outgoingWeight;
    double _socialWeight;
    double _locationWeight;
    double _keywordWeight;
    double _contactNameKeywordMatchWeight;
    unsigned long long _rankAggregationMethod;
}

+ (_Bool)isDateInWeekend:(id)arg1;
@property(nonatomic) unsigned long long rankAggregationMethod; // @synthesize rankAggregationMethod=_rankAggregationMethod;
@property double contactNameKeywordMatchWeight; // @synthesize contactNameKeywordMatchWeight=_contactNameKeywordMatchWeight;
@property double keywordWeight; // @synthesize keywordWeight=_keywordWeight;
@property double locationWeight; // @synthesize locationWeight=_locationWeight;
@property _Bool requireAllSeedContacts; // @synthesize requireAllSeedContacts=_requireAllSeedContacts;
@property double socialWeight; // @synthesize socialWeight=_socialWeight;
@property double outgoingWeight; // @synthesize outgoingWeight=_outgoingWeight;
@property double diffWeekPeriodWeight; // @synthesize diffWeekPeriodWeight=_diffWeekPeriodWeight;
@property double sameWeekPeriodWeight; // @synthesize sameWeekPeriodWeight=_sameWeekPeriodWeight;
@property double c; // @synthesize c=_c;
@property double timeOfWeekWeight; // @synthesize timeOfWeekWeight=_timeOfWeekWeight;
@property double timeOfDayWeight; // @synthesize timeOfDayWeight=_timeOfDayWeight;
@property double timeWeight; // @synthesize timeWeight=_timeWeight;
@property double timeOfWeekHalfLife; // @synthesize timeOfWeekHalfLife=_timeOfWeekHalfLife;
@property double timeOfDayHalfLife; // @synthesize timeOfDayHalfLife=_timeOfDayHalfLife;
@property double timeHalfLife; // @synthesize timeHalfLife=_timeHalfLife;
@property(retain) NSString *contactPrefix; // @synthesize contactPrefix=_contactPrefix;
@property(retain) NSSet *allowedPersonIdType; // @synthesize allowedPersonIdType=_allowedPersonIdType;
@property(retain) NSSet *allowedPersonIds; // @synthesize allowedPersonIds=_allowedPersonIds;
@property(retain) NSSet *allowedIdentifiers; // @synthesize allowedIdentifiers=_allowedIdentifiers;
@property(retain) NSSet *referenceKeywords; // @synthesize referenceKeywords=_referenceKeywords;
@property(retain) NSString *referenceLocationUUID; // @synthesize referenceLocationUUID=_referenceLocationUUID;
@property(retain) NSArray *seedContacts; // @synthesize seedContacts=_seedContacts;
@property(retain) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
- (void).cxx_destruct;
- (_Bool)contactIsAllowed:(id)arg1;
- (double)rankContact:(id)arg1;
- (_Bool)canRankContacts;
- (id)rankInteraction:(id)arg1;
- (id)init;

@end

