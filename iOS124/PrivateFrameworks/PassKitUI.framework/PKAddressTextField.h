//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@class PKUniqueAddressField, UIColor;
@protocol PKAddressTextFieldDelegate;

@interface PKAddressTextField : UITextField
{
    _Bool _isInvalid;
    PKUniqueAddressField *_addressField;
    long long _style;
    id <PKAddressTextFieldDelegate> _addressDelegate;
    UIColor *_defaultColor;
    UIColor *_invalidColor;
}

@property(retain, nonatomic) UIColor *invalidColor; // @synthesize invalidColor=_invalidColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(readonly, nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(nonatomic) __weak id <PKAddressTextFieldDelegate> addressDelegate; // @synthesize addressDelegate=_addressDelegate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) PKUniqueAddressField *addressField; // @synthesize addressField=_addressField;
- (void).cxx_destruct;
- (void)setIsInvalid:(_Bool)arg1 showErrorGlyph:(_Bool)arg2;
- (void)insertTextSuggestion:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

