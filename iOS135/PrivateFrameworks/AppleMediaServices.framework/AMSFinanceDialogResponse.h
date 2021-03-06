/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSFinanceDialogResponse : NSObject <AMSFinancePerformable> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    bool  _containsCommerceUIURL;
    NSDictionary * _dialogDictionary;
    AMSDialogRequest * _dialogRequest;
    NSString * _proxyBundleId;
}

@property (nonatomic, copy) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, readonly) bool containsCommerceUIURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dialogDictionary;
@property (nonatomic, readonly) AMSDialogRequest *dialogRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *proxyBundleId;
@property (readonly) Class superclass;

+ (id)_URLForCommerceUIFromURL:(id)arg1 account:(id)arg2;
+ (long long)_actionTypeFromButtonDictionary:(id)arg1;
+ (id)_createActionFromButtonDictionary:(id)arg1 kind:(long long)arg2 title:(id)arg3 account:(id)arg4 bag:(id)arg5;
+ (id)_createRequestButtonsFromDialogDictionary:(id)arg1 kind:(long long)arg2 account:(id)arg3 bag:(id)arg4;
+ (id)_createRequestFromDialogDictionary:(id)arg1 kind:(long long)arg2 account:(id)arg3 bag:(id)arg4;
+ (bool)_isCommerceUIURL:(id)arg1 actionType:(long long)arg2 URLType:(long long)arg3 bag:(id)arg4;
+ (long long)dialogKindFromPayload:(id)arg1;

- (void).cxx_destruct;
- (id)_sendDialogOverIDSIfNeeded:(id)arg1 taskInfo:(id)arg2 didSend:(bool*)arg3;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (bool)containsCommerceUIURL;
- (id)dialogDictionary;
- (id)dialogRequest;
- (id)initWithDialogDictionary:(id)arg1 kind:(long long)arg2 account:(id)arg3 clientInfo:(id)arg4 bag:(id)arg5;
- (id)initWithDialogRequest:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 bag:(id)arg4;
- (id)performWithTaskInfo:(id)arg1;
- (id)proxyBundleId;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setProxyBundleId:(id)arg1;

@end
