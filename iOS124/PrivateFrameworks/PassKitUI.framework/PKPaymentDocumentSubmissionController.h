//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKDocumentRequest, UIImage;
@protocol PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentDocumentSubmissionController : NSObject
{
    long long _state;
    long long _side;
    id <PKPaymentDocumentSubmissionControllerDelegate> _delegate;
    PKDocumentRequest *_selectedDocument;
    UIImage *_frontID;
    UIImage *_backID;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    long long _context;
    unsigned long long _featureIdentifier;
}

@property(nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(retain, nonatomic) id <PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(retain, nonatomic) UIImage *backID; // @synthesize backID=_backID;
@property(retain, nonatomic) UIImage *frontID; // @synthesize frontID=_frontID;
@property(retain, nonatomic) PKDocumentRequest *selectedDocument; // @synthesize selectedDocument=_selectedDocument;
@property(nonatomic) __weak id <PKPaymentDocumentSubmissionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long side; // @synthesize side=_side;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)stateChanged;
- (void)terminateSetupFlowFromViewController:(id)arg1;
- (void)userWantsToCancelFromViewController:(id)arg1;
- (void)tryUploadAgain;
- (void)userWantsToWithdraw;
- (void)contactApplePressed;
- (void)uploadID;
- (void)scanAgain;
- (void)captureFailedWithError:(id)arg1;
- (void)userRejectedCapturedID;
- (void)userApprovedCapturedID;
- (void)userWantsToContinue;
- (void)capturedImage:(id)arg1;
- (id)nextViewController;
- (id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 acceptableDocuments:(id)arg3 featureIdentifier:(unsigned long long)arg4;

@end

