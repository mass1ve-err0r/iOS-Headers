//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyEditingCell.h>

#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate>
{
    UITextField *_textField;
}

@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)textFieldChanged:(id)arg1;
- (id)firstResponderItem;
- (void)prepareForReuse;
- (void)updateValueWithPropertyItem:(id)arg1;
- (id)variableConstraints;
- (id)constantConstraints;
- (id)valueView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

