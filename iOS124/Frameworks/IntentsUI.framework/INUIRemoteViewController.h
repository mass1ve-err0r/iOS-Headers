//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <IntentsUI/INUIExtensionHostContextDelegate-Protocol.h>
#import <IntentsUI/_INUIRemoteViewControllerHosting-Protocol.h>

@class INUIExtensionRequestInfo, INUIExtensionViewControllerConfiguration, NSExtension, NSString, _INUIExtensionHostContext;
@protocol INUIRemoteViewControllerDelegate, NSCopying;

@interface INUIRemoteViewController : _UIRemoteViewController <_INUIRemoteViewControllerHosting, INUIExtensionHostContextDelegate>
{
    _Bool _needsStateUpdate;
    INUIExtensionRequestInfo *_requestInfo;
    id <INUIRemoteViewControllerDelegate> _delegate;
    INUIExtensionViewControllerConfiguration *_configuration;
    _INUIExtensionHostContext *_extensionHostContext;
    NSExtension *_activeExtension;
    id <NSCopying> _currentRequestIdentifier;
    struct CGSize _preferredContentSize;
}

+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)_attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)_requestRemoteViewControllerWithRequestInfo:(id)arg1 delegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (void)requestRemoteViewControllerWithRequestInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(retain, nonatomic) id <NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property(retain, nonatomic) NSExtension *activeExtension; // @synthesize activeExtension=_activeExtension;
@property(retain, nonatomic) _INUIExtensionHostContext *extensionHostContext; // @synthesize extensionHostContext=_extensionHostContext;
@property(nonatomic) _Bool needsStateUpdate; // @synthesize needsStateUpdate=_needsStateUpdate;
@property(copy, nonatomic) INUIExtensionViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <INUIRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic, setter=_setRequestInfo:) INUIExtensionRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
- (void).cxx_destruct;
- (void)serviceViewControllerDesiresConstrainedSize:(struct CGSize)arg1;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 context:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(CDUnknownBlockType)arg3;
- (void)extensionHostContext:(id)arg1 wantsToHandleIntent:(id)arg2;
- (void)_updateExtensionContextStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_queryRepresentedPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestCancellation;
- (void)setIdealConfiguration:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)disconnect;
- (void)viewServiceDidTerminateWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

