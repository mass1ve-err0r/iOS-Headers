/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebDelegateAction : NSObject <AMSUIWebActionRunnable> {
    AMSUIWebClientContext * _context;
    NSDictionary * _delegateData;
}

@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSDictionary *delegateData;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)delegateData;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setContext:(id)arg1;
- (void)setDelegateData:(id)arg1;

@end