//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDFitnessMachineStateTimer;
@protocol HDFitnessMachineStateTimersDelegate, OS_dispatch_queue;

@interface HDFitnessMachineStateTimers : NSObject
{
    id <HDFitnessMachineStateTimersDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    HDFitnessMachineStateTimer *_fieldDetectTimer;
    HDFitnessMachineStateTimer *_tagReadTimer;
    HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer *_userAcceptanceTimer;
    HDFitnessMachineStateTimer *_waitForMachineStartTimer;
    HDFitnessMachineStateTimer *_pauseTimer;
    HDFitnessMachineStateTimer *_disconnectTimer;
    HDFitnessMachineStateTimer *_retryConnectionTimer;
    HDFitnessMachineStateTimer *_mfaTimer;
}

@property(retain, nonatomic) HDFitnessMachineStateTimer *mfaTimer; // @synthesize mfaTimer=_mfaTimer;
@property(retain, nonatomic) HDFitnessMachineStateTimer *retryConnectionTimer; // @synthesize retryConnectionTimer=_retryConnectionTimer;
@property(retain, nonatomic) HDFitnessMachineStateTimer *disconnectTimer; // @synthesize disconnectTimer=_disconnectTimer;
@property(retain, nonatomic) HDFitnessMachineStateTimer *pauseTimer; // @synthesize pauseTimer=_pauseTimer;
@property(retain, nonatomic) HDFitnessMachineStateTimer *waitForMachineStartTimer; // @synthesize waitForMachineStartTimer=_waitForMachineStartTimer;
@property(retain, nonatomic) HDFitnessMachineStateTimer *userAcceptanceTimer; // @synthesize userAcceptanceTimer=_userAcceptanceTimer;
@property(retain, nonatomic) HDFitnessMachineStateTimer *machineIdentityVerificationTimer; // @synthesize machineIdentityVerificationTimer=_machineIdentityVerificationTimer;
@property(retain, nonatomic) HDFitnessMachineStateTimer *tagReadTimer; // @synthesize tagReadTimer=_tagReadTimer;
@property(retain, nonatomic) HDFitnessMachineStateTimer *fieldDetectTimer; // @synthesize fieldDetectTimer=_fieldDetectTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HDFitnessMachineStateTimersDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isMfaTimerValid;
- (void)cancelMfaTimeout;
- (void)beginMfaTimeout;
- (_Bool)isRetryConnectionTimerValid;
- (void)cancelRetryConnectionTimeout;
- (void)beginRetryConnectionTimeout;
- (_Bool)isDisconnectTimerValid;
- (void)cancelDisconnectTimeout;
- (void)beginDisconnectTimeout;
- (_Bool)isPauseTimerValid;
- (void)cancelPauseTimeout;
- (void)beginPauseTimeout;
- (_Bool)isWaitForMachineStartTimerValid;
- (void)cancelWaitForMachineStartTimeout;
- (void)beginWaitForMachineStartTimeout;
- (_Bool)isUserAcceptanceTimerValid;
- (void)cancelUserAcceptanceTimeout;
- (void)beginUserAcceptanceTimeout;
- (_Bool)isMachineIdentityVerificationTimerValid;
- (void)cancelMachineIdentityVerificationTimeout;
- (void)beginMachineIdentityVerificationTimeout;
- (_Bool)isTagReadTimerValid;
- (void)cancelTagReadTimeout;
- (void)beginTagReadTimeout;
- (_Bool)isFieldDetectTimerValid;
- (void)cancelFieldDetectTimeout;
- (void)beginFieldDetectTimeout;
- (void)cancelAllTimers;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

@end

