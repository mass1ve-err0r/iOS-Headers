//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <ChatKit/CKAdaptivePresentedControllerProtocol-Protocol.h>

@class NSArray, NSString;
@protocol CKAlertControllerDelegate;

@interface CKAlertController : UIAlertController <CKAdaptivePresentedControllerProtocol>
{
    id <CKAlertControllerDelegate> _alertDelegate;
}

@property(nonatomic) __weak id <CKAlertControllerDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
- (void).cxx_destruct;
- (_Bool)preserveModalPresentationStyle;
- (_Bool)wantsWindowedPresentation;
- (void)addAction:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)allowsRotation;

// Remaining properties
@property(readonly, nonatomic) NSArray *actions; // @dynamic actions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

