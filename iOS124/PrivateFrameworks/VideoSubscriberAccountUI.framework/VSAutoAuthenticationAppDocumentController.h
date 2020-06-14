//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>

#import <VideoSubscriberAccountUI/VSAutoAuthenticationViewModelDelegate-Protocol.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationAppDocumentController : VSAppDocumentController <VSAutoAuthenticationViewModelDelegate>
{
    IKViewElement *_buttonLockupElement;
}

@property(retain, nonatomic) IKViewElement *buttonLockupElement; // @synthesize buttonLockupElement=_buttonLockupElement;
- (void).cxx_destruct;
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2;
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 error:(id *)arg2;
- (id)_autoAuthenticationViewModelWithViewModel:(id)arg1;
- (void)autoAuthenticationViewModelDidManualSignInButton:(id)arg1;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (id)_newViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

