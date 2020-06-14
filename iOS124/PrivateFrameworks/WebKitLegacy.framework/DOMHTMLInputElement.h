//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

#import <WebKitLegacy/UITextInputTraits-Protocol.h>

@class DOMFileList, DOMHTMLFormElement, NSString, NSURL, UITextInputPasswordRules;

@interface DOMHTMLInputElement : DOMHTMLElement <UITextInputTraits>
{
}

- (void)insertTextSuggestion:(id)arg1;
- (id)_autofillContext;
- (void)setValueForUser:(id)arg1;
- (void)click;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setRangeText:(id)arg1;
- (void)select;
- (void)setCustomValidity:(id)arg1;
- (_Bool)checkValidity;
- (void)stepDown:(int)arg1;
- (void)stepUp:(int)arg1;
- (void)setCapture:(_Bool)arg1;
- (_Bool)capture;
@property(readonly, copy) NSURL *absoluteImageURL;
@property(readonly, copy) NSString *altDisplayString;
@property(copy) NSString *accessKey;
- (void)setIncremental:(_Bool)arg1;
- (_Bool)incremental;
@property(copy) NSString *useMap;
@property(copy) NSString *align;
- (void)setSelectionDirection:(id)arg1;
- (id)selectionDirection;
@property int selectionEnd;
@property int selectionStart;
- (id)labels;
- (id)validationMessage;
@property(readonly) _Bool willValidate;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;
- (void)setValueAsNumber:(double)arg1;
- (double)valueAsNumber;
- (void)setValueAsDate:(double)arg1;
- (double)valueAsDate;
@property(copy) NSString *value;
@property(copy) NSString *defaultValue;
@property(copy) NSString *type;
- (void)setStep:(id)arg1;
- (id)step;
@property(copy) NSString *src;
@property(copy) NSString *size;
- (void)setRequired:(_Bool)arg1;
- (_Bool)required;
@property _Bool readOnly;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (void)setPattern:(id)arg1;
- (id)pattern;
@property(copy) NSString *name;
@property _Bool multiple;
- (void)setMin:(id)arg1;
- (id)min;
@property int maxLength;
- (void)setMax:(id)arg1;
- (id)max;
- (id)list;
@property _Bool indeterminate;
- (void)setHeight:(unsigned int)arg1;
- (unsigned int)height;
- (void)setFormTarget:(id)arg1;
- (id)formTarget;
- (void)setFormNoValidate:(_Bool)arg1;
- (_Bool)formNoValidate;
- (void)setFormMethod:(id)arg1;
- (id)formMethod;
- (void)setFormEnctype:(id)arg1;
- (id)formEnctype;
- (void)setFormAction:(id)arg1;
- (id)formAction;
@property(retain) DOMFileList *files;
@property(readonly) DOMHTMLFormElement *form;
@property _Bool disabled;
- (void)setDirName:(id)arg1;
- (id)dirName;
@property _Bool checked;
@property _Bool defaultChecked;
@property _Bool autofocus;
- (void)setAutocomplete:(id)arg1;
- (id)autocomplete;
@property(copy) NSString *alt;
@property(copy) NSString *accept;
- (_Bool)_isTextField;
- (_Bool)_isEdited;
- (int)_autocapitalizeType;
- (void)setValueAsNumberWithChangeEvent:(double)arg1;
- (void)setValueWithChangeEvent:(id)arg1;
- (int)structuralComplexityContribution;
- (void)_setAutofilled:(_Bool)arg1;
- (_Bool)_isAutofilled;
- (id)endPosition;
- (id)startPosition;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

