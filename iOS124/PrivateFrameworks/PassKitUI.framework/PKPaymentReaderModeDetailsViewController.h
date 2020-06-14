//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>

@class NSObject, NSString, PKPaymentSetupProduct;
@protocol OS_dispatch_group;

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController
{
    _Bool _termsAccepted;
    NSObject<OS_dispatch_group> *_nextScreenGroup;
    NSString *_titleText;
    NSString *_subtitleText;
    PKPaymentSetupProduct *_product;
}

+ (_Bool)readerModeProvisioningIsSupported;
@property(readonly, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (id)footerView;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (void)_downloadCardArtIfNecessary:(CDUnknownBlockType)arg1;
- (void)_pushReaderModeProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)_prepareForProvisioningViewController;
- (void)_showTerms;
- (void)_registerLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleNextButtonTapped:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4;

@end

