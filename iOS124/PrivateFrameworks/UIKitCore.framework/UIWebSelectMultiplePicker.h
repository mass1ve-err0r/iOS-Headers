//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPickerView.h>

#import <UIKitCore/UIPickerViewDataSource-Protocol.h>
#import <UIKitCore/UIPickerViewDelegate-Protocol.h>
#import <UIKitCore/UIWebFormControl-Protocol.h>

@class DOMHTMLSelectElement, NSArray, NSString;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    DOMHTMLSelectElement *_selectionNode;
    NSArray *_cachedItems;
    id <UIWebSelectedItemPrivate> _singleSelectionItem;
    unsigned long long _singleSelectionIndex;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    double _layoutWidth;
}

@property(retain, nonatomic) id <UIWebSelectedItemPrivate> _singleSelectionItem; // @synthesize _singleSelectionItem;
@property(retain, nonatomic) NSArray *_cachedItems; // @synthesize _cachedItems;
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // @synthesize _selectionNode;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(_Bool)arg4;
- (int)_itemIndexForRowIndex:(int)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)layoutSubviews;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

