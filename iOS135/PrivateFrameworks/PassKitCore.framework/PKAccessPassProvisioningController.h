/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccessPassProvisioningController : NSObject {
    PKAccessPassProvisioningCoordinator * _coordinator;
}

@property (nonatomic) <PKAccessPassProvisioningControllerDelegate> *delegate;

+ (bool)canAddAccessPassWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)presentWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
