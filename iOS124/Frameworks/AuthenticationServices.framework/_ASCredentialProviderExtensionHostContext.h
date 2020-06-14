//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <AuthenticationServices/_ASCredentialProviderExtensionHostContextProtocol-Protocol.h>

@class NSString;
@protocol _ASCredentialProviderExtensionHostContextDelegate;

@interface _ASCredentialProviderExtensionHostContext : NSExtensionContext <_ASCredentialProviderExtensionHostContextProtocol>
{
    id <_ASCredentialProviderExtensionHostContextDelegate> _delegate;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(nonatomic) __weak id <_ASCredentialProviderExtensionHostContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareToCompleteExtensionConfigurationRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareToCancelRequestWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareToCompleteRequestWithSelectedCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

