//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, PSUICellularPlanUniversalReference, UITextField;

@interface PSUICellularPlanLabelListController : PSListController <UITextFieldDelegate>
{
    NSArray *_predefinedLabels;
    NSString *_validatedCustomLabelText;
    UITextField *_textField;
    PSUICellularPlanUniversalReference *_planReference;
}

@property(retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // @synthesize planReference=_planReference;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSString *validatedCustomLabelText; // @synthesize validatedCustomLabelText=_validatedCustomLabelText;
@property(retain, nonatomic) NSArray *predefinedLabels; // @synthesize predefinedLabels=_predefinedLabels;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)dismissKeyboard;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

