//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNPersonsModelDataSource-Protocol.h>
#import <Vision/VNPersonsModelFaceModelDataProvider-Protocol.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;
@protocol VNPersonsModelDataDelegate;

__attribute__((visibility("hidden")))
@interface VNPersonsModelData : NSObject <VNPersonsModelDataSource, VNPersonsModelFaceModelDataProvider>
{
    unsigned long long _maximumIdentities;
    NSMutableArray *_personUniqueIdentifiers;
    NSMutableDictionary *_personUniqueIdentifierToSerialNumberMapping;
    NSMutableDictionary *_serialNumberToFaceObservationsMapping;
    NSMutableIndexSet *_availablePersonSerialNumbers;
    NSDate *_lastModificationDate;
    id <VNPersonsModelDataDelegate> _delegate;
}

@property(nonatomic) __weak id <VNPersonsModelDataDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelPersonsCount;
- (id)personsModel:(id)arg1 faceObservationAtIndex:(unsigned long long)arg2 forPersonAtIndex:(unsigned long long)arg3;
- (unsigned long long)personsModel:(id)arg1 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)personsModel:(id)arg1 indexOfPersonWithUniqueIdentifier:(id)arg2;
- (id)personsModel:(id)arg1 uniqueIdentifierOfPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)arg1;
- (_Bool)removePersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removeFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)addFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSDate *lastModificationDate;
- (id)_accessToMutableFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (void)_removeExistingFaceObservations:(id)arg1 fromPersonWithUniqueIdentifier:(id)arg2;
- (void)_removeExistingFaceObservations:(id)arg1 fromIdentityWithSerialNumber:(id)arg2;
- (void)_removePersonWithUniqueIdentifier:(id)arg1;
- (void)_removeAllFaceObservationsFromIdentityWithSerialNumber:(id)arg1;
- (_Bool)_addUniqueFaceObservations:(id)arg1 toPersonWithUniqueIdentifier:(id)arg2 error:(id *)arg3;
- (id)_uniqueFaceObservationsWithRegistrationState:(_Bool)arg1 forFaceObservations:(id)arg2 ofPersonWithUniqueIdentifier:(id)arg3 error:(id *)arg4;
- (id)_requestNewIdentitySerialNumberAndReturnError:(id *)arg1;
- (void)_modelWasModified;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

