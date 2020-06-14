//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UITextInputTraits, UIView;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField
{
    UIView *_springView;
    UIView *_springViewParent;
}

- (void).cxx_destruct;
- (struct CGSize)_viewSize;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (void)notePasscodeFieldTextDidChange;
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) __weak UITextInputTraits *textInputTraits;
- (void)layoutSubviews;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;

@end

