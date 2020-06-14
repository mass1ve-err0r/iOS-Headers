/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDiagnosticTestResult : HKMedicalRecord <HDCoding, HKConceptIndexable, NSCopying, NSSecureCoding> {
    HKConcept * _bodySite;
    NSArray * _bodySiteCodings;
    NSString * _category;
    NSString * _comments;
    HKConcept * _diagnosticTest;
    NSArray * _diagnosticTestCodings;
    HKMedicalDate * _effectiveEndDate;
    HKMedicalDate * _effectiveStartDate;
    HKConcept * _interpretation;
    NSArray * _interpretationCodings;
    HKMedicalDate * _issueDate;
    HKConcept * _method;
    NSArray * _methodCodings;
    NSArray * _performers;
    NSArray * _referenceRanges;
    HKConcept * _status;
    HKMedicalCoding * _statusCoding;
    HKInspectableValueCollection * _value;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKConcept *bodySite;
@property (readonly, copy) NSArray *bodySiteCodings;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSString *comments;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKConcept *diagnosticTest;
@property (readonly, copy) NSArray *diagnosticTestCodings;
@property (readonly, copy) HKDiagnosticTestResultType *diagnosticTestResultType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKConcept *interpretation;
@property (readonly, copy) NSArray *interpretationCodings;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (readonly, copy) HKConcept *method;
@property (readonly, copy) NSArray *methodCodings;
@property (readonly, copy) NSArray *performers;
@property (readonly, copy) NSArray *referenceRanges;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKInspectableValueCollection *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newDiagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodings:(id)arg13 value:(id)arg14 referenceRanges:(id)arg15 effectiveStartDate:(id)arg16 category:(id)arg17 issueDate:(id)arg18 effectiveEndDate:(id)arg19 statusCoding:(id)arg20 interpretationCodings:(id)arg21 comments:(id)arg22 bodySiteCodings:(id)arg23 methodCodings:(id)arg24 performers:(id)arg25 config:(id /* block */)arg26;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 diagnosticTestCodings:(id)arg12 value:(id)arg13 referenceRanges:(id)arg14 effectiveStartDate:(id)arg15 category:(id)arg16 issueDate:(id)arg17 effectiveEndDate:(id)arg18 statusCoding:(id)arg19 interpretationCodings:(id)arg20 comments:(id)arg21 bodySiteCodings:(id)arg22 methodCodings:(id)arg23 performers:(id)arg24;
+ (id)diagnosticTestResultWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 diagnosticTestCodings:(id)arg13 value:(id)arg14 referenceRanges:(id)arg15 effectiveStartDate:(id)arg16 category:(id)arg17 issueDate:(id)arg18 effectiveEndDate:(id)arg19 statusCoding:(id)arg20 interpretationCodings:(id)arg21 comments:(id)arg22 bodySiteCodings:(id)arg23 methodCodings:(id)arg24 performers:(id)arg25;
+ (id)indexableConceptKeyPaths;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setBodySite:(id)arg1;
- (void)_setBodySiteCodings:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setComments:(id)arg1;
- (void)_setDiagnosticTest:(id)arg1;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setInterpretation:(id)arg1;
- (void)_setInterpretationCodings:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setMethod:(id)arg1;
- (void)_setMethodCodings:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setReferenceRanges:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setValue:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)bodySite;
- (id)bodySiteCodings;
- (id)bodySiteCodingsCollection;
- (id)bodySiteCodingsContext;
- (id)category;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)comments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticTest;
- (id)diagnosticTestCodings;
- (id)diagnosticTestCodingsCollection;
- (id)diagnosticTestCodingsContext;
- (id)diagnosticTestResultType;
- (id)effectiveEndDate;
- (id)effectiveStartDate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interpretation;
- (id)interpretationCodings;
- (id)interpretationCodingsCollection;
- (id)interpretationCodingsContext;
- (bool)isEquivalent:(id)arg1;
- (id)issueDate;
- (id)medicalRecordCodings;
- (id)method;
- (id)methodCodings;
- (id)methodCodingsCollection;
- (id)methodCodingsContext;
- (id)performers;
- (id)referenceRanges;
- (id)status;
- (id)statusCoding;
- (id)statusCodingCollection;
- (id)statusCodingContext;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
+ (bool)supportsDistinctByKeyPath:(id)arg1;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (void)_displayItemsForCodedValueCollection:(id)arg1 healthRecordsStore:(id)arg2 preferredStyle:(long long)arg3 completion:(id /* block */)arg4;
- (void)_displayItemsForValuePreferedStyle:(long long)arg1 healthRecordsStore:(id)arg2 completion:(id /* block */)arg3;
- (id)chartValue;
- (id)chartableCodedQuantitySet;
- (id)codings;
- (void)fetchConceptRoomItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchDetailItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchObservationDetailItemsWithHealthRecordsStore:(id)arg1 style:(long long)arg2 completion:(id /* block */)arg3;
- (long long)recordCategoryType;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end