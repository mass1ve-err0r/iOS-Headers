//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKApplyExplanationViewController.h>

#import <PassKitUI/PKApplyFlowControllerProtocol-Protocol.h>

@class CLInUseAssertion, NSString, PKAccountFlowController, PKApplyOfferCreditCardView, UIView;

@interface PKApplyOfferViewController : PKApplyExplanationViewController <PKApplyFlowControllerProtocol>
{
    PKAccountFlowController *_accountController;
    PKApplyOfferCreditCardView *_offerView;
    NSString *_offerTermsIdentifier;
    CLInUseAssertion *_inUseAssertion;
    UIView *_heroView;
    UIView *_cardImageShadowView;
}

- (void).cxx_destruct;
- (void)_termsAccepted:(_Bool)arg1;
- (void)_openTermsAndConditions;
- (void)_setupForBroadwayApplication:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

