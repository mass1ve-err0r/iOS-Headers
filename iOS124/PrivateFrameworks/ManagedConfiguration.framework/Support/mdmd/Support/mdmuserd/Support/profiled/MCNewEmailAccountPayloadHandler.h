//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class DeliveryAccount, MailAccount, NSConditionLock, NSDictionary, NSError, NSThread;

@interface MCNewEmailAccountPayloadHandler : MCNewPayloadHandler
{
    NSConditionLock *_validationLock;
    NSThread *_validationThread;
    NSDictionary *_setAsideAccountInfo;
    _Bool _wasInstalledByMDM;
    MailAccount *_incomingAccount;
    _Bool _incomingAccountUsesSSL;
    DeliveryAccount *_outgoingAccount;
    _Bool _outgoingAccountUsesSSL;
    _Bool _validationDone;
    _Bool _validationResult;
    NSError *_validationError;
}

+ (id)unhashedAccountIdentifierWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;
+ (id)MCACAccountIdentifierWithOutgoingAccountInfo:(id)arg1;
+ (id)MCACAccountIdentifierWithIncomingAccountInfo:(id)arg1;
- (void).cxx_destruct;
- (void)unsetAside;
- (void)setAside;
- (void)remove;
- (void)_remove;
- (id)_removeAccountWithPersistentResourceID:(id)arg1 fromArray:(id)arg2 outArray:(id *)arg3;
- (_Bool)isInstalled;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (id)_installWithIncomingAccountInfo:(id)arg1 outgoingAccountInfo:(id)arg2 isInstalledByMDM:(_Bool)arg3;
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(_Bool)arg3;
- (id)_errorFromValidationError:(id)arg1;
- (void)_validateIncomingAccountOnThread;
- (id)_outgoingAccountWithAccountInfo:(id)arg1;
- (id)_outgoingAccountInfoDictionaryWithUserInput:(id)arg1;
- (id)_incomingAccountWithAccountInfo:(id)arg1;
- (id)_incomingAccountInfoDictionaryWithUserInput:(id)arg1 isPreflight:(_Bool)arg2 outError:(id *)arg3;
- (id)_persistentIDForCertificateUUID:(id)arg1 notFoundLocErrorString:(id)arg2 badLocErrorString:(id)arg3 outError:(id *)arg4;
- (id)_authSchemeForAuthenticationMethod:(id)arg1;
- (id)userInputFields;
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;

@end

