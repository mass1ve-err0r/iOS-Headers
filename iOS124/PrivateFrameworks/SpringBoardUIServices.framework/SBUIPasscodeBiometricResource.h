//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUIServices/SBUIBiometricResource-Protocol.h>

@class NSString, SBUIBiometricResource;
@protocol SBUIPasscodeBiometricMatchingAssertionFactory;

@interface SBUIPasscodeBiometricResource : NSObject <SBUIBiometricResource>
{
    SBUIBiometricResource *_biometricResource;
    id <SBUIPasscodeBiometricMatchingAssertionFactory> _overrideMatchingAssertionFactory;
}

- (void).cxx_destruct;
- (void)resumeMatchingAdvisory:(_Bool)arg1;
- (void)resumeMatchingForAssertion:(id)arg1 advisory:(_Bool)arg2;
- (void)refreshMatchMode;
- (id)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)arg1 forReason:(id)arg2;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (id)acquireFaceDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long biometricLockoutState;
@property(readonly, nonatomic, getter=isMatchingEnabled) _Bool matchingEnabled;
@property(readonly, nonatomic, getter=isMatchingAllowed) _Bool matchingAllowed;
@property(readonly, nonatomic, getter=isPearlDetectEnabled) _Bool pearlDetectEnabled;
@property(readonly, nonatomic) _Bool hasPearlSupport;
@property(readonly, nonatomic, getter=isFingerDetectEnabled) _Bool fingerDetectEnabled;
@property(readonly, nonatomic, getter=isFingerOn) _Bool fingerOn;
@property(readonly, nonatomic) _Bool hasBiometricAuthenticationCapabilityEnabled;
@property(readonly, nonatomic) _Bool hasEnrolledIdentities;
- (id)initWithBiometricResource:(id)arg1 overrideMatchingAssertionFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

