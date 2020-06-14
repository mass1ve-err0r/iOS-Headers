//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTAWDMetric-Protocol.h>

@class NSString, PBCodable;
@protocol NSCopying;

@interface IDSRegistrationControlChosenMetric : NSObject <CUTAWDMetric>
{
    long long _registrationType;
    long long _registrationControlStatus;
    _Bool _isInterestingRegion;
}

@property(readonly, nonatomic) _Bool isInterestingRegion; // @synthesize isInterestingRegion=_isInterestingRegion;
@property(readonly, nonatomic) long long registrationControlStatus; // @synthesize registrationControlStatus=_registrationControlStatus;
@property(readonly, nonatomic) long long registrationType; // @synthesize registrationType=_registrationType;
@property(readonly) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly) NSString *name;
- (id)initWithRegistrationType:(long long)arg1 registrationControlStatus:(long long)arg2 isInterestingRegion:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

