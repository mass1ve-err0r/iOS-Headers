//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudServices/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSString, SESWrapper;
@protocol OS_dispatch_queue;

@interface SecureBackup : NSObject <NSSecureCoding>
{
    _Bool _deleteAll;
    _Bool _emcsMode;
    _Bool _fmipRecovery;
    _Bool _icdp;
    _Bool _idmsRecovery;
    _Bool _silent;
    _Bool _stingray;
    _Bool _synchronize;
    _Bool _useCachedPassphrase;
    _Bool _useRecoveryPET;
    _Bool _usesMultipleiCSC;
    _Bool _usesRandomPassphrase;
    _Bool _usesRecoveryKey;
    NSString *_appleID;
    NSString *_authToken;
    NSDate *_backOffDate;
    NSData *_certData;
    NSString *_countryDialCode;
    NSString *_countryCode;
    NSString *_dsid;
    NSString *_emcsCred;
    NSDictionary *_emcsDict;
    NSString *_encodedMetadata;
    NSDictionary *_escrowRecord;
    NSString *_escrowProxyURL;
    NSString *_fmipUUID;
    NSString *_iCloudEnv;
    NSData *_iCloudIdentityData;
    NSString *_iCloudPassword;
    NSData *_idmsData;
    NSDictionary *_metadata;
    NSDictionary *_metadataHash;
    NSString *_oldEMCSCred;
    NSString *_passphrase;
    NSString *_recordID;
    NSString *_recoveryKey;
    NSString *_smsTarget;
    NSString *_verificationToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_error;
    NSString *_activityLabel;
    NSString *_activityUUID;
    SESWrapper *_ses;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SESWrapper *ses; // @synthesize ses=_ses;
@property(copy, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(copy, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *verificationToken; // @synthesize verificationToken=_verificationToken;
@property(nonatomic) _Bool usesRecoveryKey; // @synthesize usesRecoveryKey=_usesRecoveryKey;
@property(nonatomic) _Bool usesRandomPassphrase; // @synthesize usesRandomPassphrase=_usesRandomPassphrase;
@property(nonatomic) _Bool usesMultipleiCSC; // @synthesize usesMultipleiCSC=_usesMultipleiCSC;
@property(nonatomic) _Bool useRecoveryPET; // @synthesize useRecoveryPET=_useRecoveryPET;
@property(nonatomic) _Bool useCachedPassphrase; // @synthesize useCachedPassphrase=_useCachedPassphrase;
@property(nonatomic) _Bool synchronize; // @synthesize synchronize=_synchronize;
@property(nonatomic) _Bool stingray; // @synthesize stingray=_stingray;
@property(nonatomic) _Bool silent; // @synthesize silent=_silent;
@property(copy, nonatomic) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(copy, nonatomic) NSString *oldEMCSCred; // @synthesize oldEMCSCred=_oldEMCSCred;
@property(retain, nonatomic) NSDictionary *metadataHash; // @synthesize metadataHash=_metadataHash;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool idmsRecovery; // @synthesize idmsRecovery=_idmsRecovery;
@property(retain, nonatomic) NSData *idmsData; // @synthesize idmsData=_idmsData;
@property(copy, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
@property(retain, nonatomic) NSData *iCloudIdentityData; // @synthesize iCloudIdentityData=_iCloudIdentityData;
@property(copy, nonatomic) NSString *iCloudEnv; // @synthesize iCloudEnv=_iCloudEnv;
@property(nonatomic) _Bool icdp; // @synthesize icdp=_icdp;
@property(copy, nonatomic) NSString *fmipUUID; // @synthesize fmipUUID=_fmipUUID;
@property(nonatomic) _Bool fmipRecovery; // @synthesize fmipRecovery=_fmipRecovery;
@property(copy, nonatomic) NSString *escrowProxyURL; // @synthesize escrowProxyURL=_escrowProxyURL;
@property(retain, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(copy, nonatomic) NSString *encodedMetadata; // @synthesize encodedMetadata=_encodedMetadata;
@property(nonatomic) _Bool emcsMode; // @synthesize emcsMode=_emcsMode;
@property(retain, nonatomic) NSDictionary *emcsDict; // @synthesize emcsDict=_emcsDict;
@property(copy, nonatomic) NSString *emcsCred; // @synthesize emcsCred=_emcsCred;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(nonatomic) _Bool deleteAll; // @synthesize deleteAll=_deleteAll;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *countryDialCode; // @synthesize countryDialCode=_countryDialCode;
@property(retain, nonatomic) NSData *certData; // @synthesize certData=_certData;
@property(retain, nonatomic) NSDate *backOffDate; // @synthesize backOffDate=_backOffDate;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void).cxx_destruct;
- (id)srpRecoveryBlobFromSRPInitResponse:(id)arg1;
- (id)srpInitNonce;
- (void)notificationOccurred:(id)arg1;
- (void)setBackOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)backOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)backupWithInfo:(id)arg1;
- (void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)changeSMSTargetWithInfo:(id)arg1;
- (_Bool)changeSMSTargetWithError:(id *)arg1;
- (void)getCountrySMSCodesWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (id)startSMSChallengeWithInfo:(id)arg1 results:(id *)arg2;
- (id)startSMSChallengeWithError:(id *)arg1;
- (void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)uncachePassphraseWithInfo:(id)arg1;
- (void)cachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)cachePassphraseWithInfo:(id)arg1;
- (void)stashRecoveryDataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)disableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)disableWithInfo:(id)arg1;
- (_Bool)disableWithError:(id *)arg1;
- (void)recoverWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (id)recoverWithInfo:(id)arg1 results:(id *)arg2;
- (id)recoverWithError:(id *)arg1;
- (void)enableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)enableWithInfo:(id)arg1;
- (_Bool)enableWithError:(id *)arg1;
- (void)updateMetadataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)updateMetadataWithInfo:(id)arg1;
- (_Bool)updateMetadataWithError:(id *)arg1;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;
- (id)getAccountInfoWithInfo:(id)arg1 results:(id *)arg2;
- (id)getAccountInfoWithError:(id *)arg1;
- (void)stateCaptureWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setBackOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)backOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)backupWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)changeSMSTargetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getCountrySMSCodesWithResults:(CDUnknownBlockType)arg1;
- (void)startSMSChallengeWithResults:(CDUnknownBlockType)arg1;
- (void)uncachePassphrase;
- (void)uncacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)uncachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cachePassphrase;
- (void)updateMetadataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stashRecoveryDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)disableWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recoverWithResults:(CDUnknownBlockType)arg1;
- (void)enableWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getAccountInfoWithResults:(CDUnknownBlockType)arg1;
- (void)populateWithInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithUserActivityLabel:(id)arg1;
- (id)_CreateSecureBackupConnection;

@end

