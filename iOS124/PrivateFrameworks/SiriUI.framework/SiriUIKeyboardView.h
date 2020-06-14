//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>

#import <SiriUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, SiriUIAudioRoutePickerButton, SiriUIContentButton, SiriUIHelpButton, UITextField;
@protocol SiriUIKeyboardViewDelegate;

@interface SiriUIKeyboardView : UIInputView <UITextFieldDelegate>
{
    SiriUIHelpButton *_helpButton;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIContentButton *_reportBugButton;
    double _interKeyboardAccessoryViewPadding;
    double _verticalCompensation;
    NSArray *_originalInstalledLanguageIdentifiers;
    UITextField *_textField;
    id <SiriUIKeyboardViewDelegate> _delegate;
}

+ (double)_paddingBetweenKeyboardAndInputAccessoryViewWhenMinimized:(_Bool)arg1;
+ (id)inputAccessoryViewBackgroundColor;
+ (double)heightForWidthSizeClass:(_Bool)arg1;
+ (double)_keyboardAccessoryViewHeight;
+ (double)_textFieldHeight;
+ (id)_textFieldFont;
@property(nonatomic) __weak id <SiriUIKeyboardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)dealloc;
- (double)_visibleHeightFromNotification:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_undoTextFieldEdit:(id)arg1;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1;
- (void)_configureReportButtonForAccessibility;
- (void)_configureReportBugButton;
- (_Bool)_showsReportBugButton;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)setAudioRoutePickerBluetoothOn:(_Bool)arg1;
- (void)setShowAudioRoutePicker:(_Bool)arg1;
- (void)_configureAudioRoutePickerForAccessibility;
- (id)_createTextFieldWithFrame:(struct CGRect)arg1;
- (void)_helpButtonLongPressed:(id)arg1;
- (void)_helpButtonTapped:(id)arg1;
- (id)_createHelpButton:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setText:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (struct CGRect)_defaultFrame;
- (id)initWithFrame:(struct CGRect)arg1 inputViewStyle:(long long)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

