/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
 */

@interface PREResponsesClient : NSObject <PREResponsesProtocol> {
    PREXPCClientHelpers * _clientHelpers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)init;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 modelFilePath:(id)arg7 modelConfigPath:(id)arg8 espressoBinFilePath:(id)arg9 espressoShapeFilePath:(id)arg10 lexiconFilePath:(id)arg11 registerDisplayed:(bool)arg12 completion:(id /* block */)arg13;
- (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(bool)arg3 isUsingQuickResponses:(bool)arg4 locale:(id)arg5 modelConfigPath:(id)arg6;

@end