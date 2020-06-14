//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConditionRecordType, HKInspectableValue, HKMedicalCoding, HKMedicalDate, NSArray, NSString;

@interface HKConditionRecord : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    NSArray *_conditionCodings;
    NSArray *_categoryCodings;
    NSString *_asserter;
    HKInspectableValue *_abatement;
    HKInspectableValue *_onset;
    HKMedicalDate *_recordedDate;
    HKMedicalCoding *_clinicalStatusCoding;
    HKMedicalCoding *_verificationStatusCoding;
    NSArray *_severityCodings;
    NSArray *_bodySitesCodings;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 conditionCodings:(id)arg10 categoryCodings:(id)arg11 asserter:(id)arg12 abatement:(id)arg13 onset:(id)arg14 recordedDate:(id)arg15 clinicalStatusCoding:(id)arg16 verificationStatusCoding:(id)arg17 severityCodings:(id)arg18 bodySitesCodings:(id)arg19;
+ (id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(_Bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 conditionCodings:(id)arg9 categoryCodings:(id)arg10 asserter:(id)arg11 abatement:(id)arg12 onset:(id)arg13 recordedDate:(id)arg14 clinicalStatusCoding:(id)arg15 verificationStatusCoding:(id)arg16 severityCodings:(id)arg17 bodySitesCodings:(id)arg18;
+ (id)defaultDisplayString;
+ (id)verificationStatusCodingPreferredSystems;
+ (id)severityCodingsPreferredSystems;
+ (id)conditionCodingsPreferredSystems;
+ (id)clinicalStatusCodingPreferredSystems;
+ (id)categoryCodingsPreferredSystems;
+ (id)bodySitesCodingsPreferredSystems;
- (void).cxx_destruct;
@property(readonly, copy) HKConditionRecordType *conditionRecordType;
- (id)_validateConfiguration;
- (void)_setBodySitesCodings:(id)arg1;
@property(readonly, copy) NSArray *bodySitesCodings;
- (void)_setSeverityCodings:(id)arg1;
@property(readonly, copy) NSArray *severityCodings;
- (void)_setVerificationStatusCoding:(id)arg1;
@property(readonly, copy) HKMedicalCoding *verificationStatusCoding;
- (void)_setClinicalStatusCoding:(id)arg1;
@property(readonly, copy) HKMedicalCoding *clinicalStatusCoding;
- (void)_setRecordedDate:(id)arg1;
@property(readonly, copy) HKMedicalDate *recordedDate;
- (void)_setOnset:(id)arg1;
@property(readonly, copy) HKInspectableValue *onset;
- (void)_setAbatement:(id)arg1;
@property(readonly, copy) HKInspectableValue *abatement;
- (void)_setAsserter:(id)arg1;
@property(readonly, copy) NSString *asserter;
- (void)_setCategoryCodings:(id)arg1;
@property(readonly, copy) NSArray *categoryCodings;
- (void)_setConditionCodings:(id)arg1;
@property(readonly, copy) NSArray *conditionCodings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)medicalRecordPreferredSystems;
- (id)medicalRecordCodings;
- (id)indexKeywords;
- (id)verificationStatusCodingTasks;
- (id)severityCodingsTasks;
- (id)conditionCodingsTasks;
- (id)clinicalStatusCodingTasks;
- (id)categoryCodingsTasks;
- (id)bodySitesCodingsTasks;

@end

