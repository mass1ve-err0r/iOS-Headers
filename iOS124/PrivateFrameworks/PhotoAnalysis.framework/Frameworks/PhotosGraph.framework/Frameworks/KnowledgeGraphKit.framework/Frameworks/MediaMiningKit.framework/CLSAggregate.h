//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSAggregate : NSObject
{
    _Bool _allowWeeklyUpdates;
    NSString *_primaryDomain;
}

+ (id)sharedCLSAggregate;
@property(readonly, nonatomic) _Bool allowWeeklyUpdates; // @synthesize allowWeeklyUpdates=_allowWeeklyUpdates;
@property(retain, nonatomic) NSString *primaryDomain; // @synthesize primaryDomain=_primaryDomain;
- (void).cxx_destruct;
- (id)_keysForWeeklyReporting;
- (id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2;
- (id)_messageTracerMethodConstructionHintsForKey:(id)arg1;
- (id)_aggdMethodConstructionHintsForKey:(id)arg1;
- (void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2;
- (void)_recordAGGDValue:(id)arg1 forKey:(id)arg2;
- (void)recordValue:(id)arg1 forKey:(id)arg2;
- (void)incrementValueForKey:(id)arg1;
- (id)_messageTracerMethodConstructionHints;
- (id)_aggdMethodConstructionHints;
- (id)_getSubdomain:(id)arg1;
- (id)_doubleValueTypeKeys;
- (id)_stringValueTypeKeys;
- (id)_needsParsingKeys;
- (id)_scalarToAddKeys;
- (id)_distributionKeys;
- (id)_registeredKeysLookupTable;
- (id)_allRegisteredKeys;
- (void)invalidateForWeeklyUpdates;
- (id)init;

@end

