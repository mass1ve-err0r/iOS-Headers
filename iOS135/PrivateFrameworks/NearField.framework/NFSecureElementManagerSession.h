/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFSecureElementManagerSession : NFSession <NFAppletCollection, NFSecureElementManagerSessionCallbacks> {
    NSMutableDictionary * _appletsById;
    NFWeakReference * _delegate;
    bool  _hasApplets;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFSecureElementManagerSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_appletsById;
- (void)_setApplets:(id)arg1;
- (bool)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3;
- (bool)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 error:(id*)arg4;
- (bool)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 expressInfo:(id)arg4 error:(id*)arg5;
- (bool)addExpressKeyID:(id)arg1 forApplet:(id)arg2 type:(unsigned char)arg3 authorization:(id)arg4 expressInfo:(id)arg5 error:(id*)arg6;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (id)checkExpressAppletCompatibility:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)deleteAllApplets:(bool)arg1;
- (bool)deleteAllApplets:(bool)arg1 error:(id*)arg2;
- (bool)deleteApplets:(id)arg1 queueServerConnection:(bool)arg2;
- (bool)deleteApplets:(id)arg1 queueServerConnection:(bool)arg2 error:(id*)arg3;
- (void)didEndUnexpectedly;
- (void)didExitRestrictedMode:(id)arg1;
- (bool)didExitRestrictedMode:(id)arg1 error:(id*)arg2;
- (bool)disableAuthorizationForApplet:(id)arg1 andKey:(id)arg2 authorization:(id)arg3 error:(id*)arg4;
- (bool)disableAuthorizationForApplet:(id)arg1 andKeys:(id)arg2 authorization:(id)arg3 error:(id*)arg4;
- (bool)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2;
- (bool)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2 error:(id*)arg3;
- (id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2;
- (id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2 error:(id*)arg3;
- (id)expressAppletIdentifiers;
- (id)expressAppletIdentifiersWithError:(id*)arg1;
- (bool)expressModesEnabled;
- (bool)expressModesEnabledWithError:(id*)arg1;
- (id)felicaAppletState:(id)arg1;
- (id)felicaAppletState:(id)arg1 error:(id*)arg2;
- (long long)getAndResetLPEMCounter:(id*)arg1;
- (id)getAttackCounterLogForSEID:(id)arg1;
- (id)getAttackCounterLogForSEID:(id)arg1 error:(id*)arg2;
- (bool)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2;
- (bool)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2 error:(id*)arg3;
- (id)getExpressConfigWithError:(id*)arg1;
- (id)getOSUpdateLog;
- (id)getSignedPlatformDataForSeid:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)performPeerPaymentEnrollment:(id)arg1 error:(id*)arg2;
- (bool)powerCycleSEID:(id)arg1 error:(id*)arg2;
- (bool)refreshSecureElement:(id)arg1;
- (bool)refreshSecureElement:(id)arg1 error:(id*)arg2;
- (bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2;
- (bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 error:(id*)arg3;
- (bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(bool)arg3;
- (bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(bool)arg3 error:(id*)arg4;
- (bool)removeExpressKeyID:(id)arg1 forApplet:(id)arg2 restoreAuthorization:(bool)arg3 error:(id*)arg4;
- (bool)restoreAuthorizarionForKeys:(id)arg1 onApplet:(id)arg2 error:(id*)arg3;
- (bool)restoreAuthorizationForAllAppletsExcept:(id)arg1;
- (bool)restoreAuthorizationForAllAppletsExcept:(id)arg1 error:(id*)arg2;
- (unsigned int)runScript:(id)arg1 forSEID:(id)arg2 results:(id*)arg3 lastStatus:(unsigned long long*)arg4;
- (unsigned int)runScript:(id)arg1 parameters:(id)arg2 outputResults:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)setExpressConfig:(id)arg1 error:(id*)arg2;
- (bool)setExpressConfig:(id)arg1 restoreAuthorization:(bool)arg2 error:(id*)arg3;
- (bool)setExpressModesEnabled:(bool)arg1;
- (bool)setExpressModesEnabled:(bool)arg1 error:(id*)arg2;
- (id)signChallenge:(id)arg1 certs:(id*)arg2;
- (id)signChallenge:(id)arg1 certs:(id*)arg2 error:(id*)arg3;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id*)arg3;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id*)arg3 error:(id*)arg4;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 sigInfo:(id*)arg3 error:(id*)arg4;
- (id)signChallenge:(id)arg1 useOSVersion:(bool)arg2 signatureInfo:(id*)arg3;
- (id)signChallenge:(id)arg1 useOSVersion:(bool)arg2 signatureInfo:(id*)arg3 error:(id*)arg4;
- (id)stateInformation;
- (id)stateInformationWithError:(id*)arg1;
- (id)stateInformationWithRedirectInfo:(id)arg1 error:(id*)arg2;
- (id)transceive:(id)arg1 forSEID:(id)arg2;
- (id)transceive:(id)arg1 forSEID:(id)arg2 error:(id*)arg3;
- (id)transceiveMultiple:(id)arg1 forSEID:(id)arg2 error:(id*)arg3;
- (id)transitAppletState:(id)arg1 error:(id*)arg2;
- (unsigned int)validateSEPairings:(id*)arg1;

@end