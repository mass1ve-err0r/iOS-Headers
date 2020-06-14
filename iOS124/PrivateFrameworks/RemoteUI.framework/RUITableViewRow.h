//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/RUIWebContainerViewDelegate-Protocol.h>
#import <RemoteUI/UIPickerViewDelegate-Protocol.h>
#import <RemoteUI/UITextFieldDelegate-Protocol.h>

@class NSData, NSDate, NSDateFormatter, NSDictionary, NSMutableArray, NSString, RUIDetailButtonElement, RUIPage, RemoteUITableViewCell, UIControl, UISwitch, UIView;
@protocol RUITableViewRowDelegate, RUITextFieldChangeObserver;

@interface RUITableViewRow : RUIElement <RUIWebContainerViewDelegate, UIPickerViewDelegate, UITextFieldDelegate>
{
    RemoteUITableViewCell *_tableCell;
    NSMutableArray *_selectOptions;
    long long _selectedRow;
    NSDate *_date;
    NSDate *_dateMax;
    NSDate *_dateMin;
    UISwitch *_switchControl;
    _Bool _switchValue;
    _Bool _rowInvalid;
    NSDictionary *_deleteAction;
    NSData *_data;
    float _cachedHeight;
    NSDateFormatter *_datePickerFormatter;
    _Bool _configured;
    _Bool _selected;
    _Bool _focused;
    _Bool _showingProgressIndicator;
    id <RUITableViewRowDelegate> _delegate;
    long long _datePickerMode;
    UIView *_pickerView;
    double _height;
    id <RUITextFieldChangeObserver> _textFieldChangeObserver;
    RUIPage *_linkedPage;
    RUIDetailButtonElement *_detailButton;
    long long _alignment;
}

+ (void)resetLocale;
+ (id)_formatterForYearAndMonth;
+ (id)_formatterForMonthAndDay;
+ (id)_formatterForShortDate;
+ (id)_formatterForDateYMD;
+ (id)_timeZoneAdjustedDateFromDate:(id)arg1;
+ (void)initialize;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) RUIDetailButtonElement *detailButton; // @synthesize detailButton=_detailButton;
@property(nonatomic) __weak RUIPage *linkedPage; // @synthesize linkedPage=_linkedPage;
@property(nonatomic) __weak id <RUITextFieldChangeObserver> textFieldChangeObserver; // @synthesize textFieldChangeObserver=_textFieldChangeObserver;
@property(nonatomic, getter=isShowingProgressIndicator) _Bool showingProgressIndicator; // @synthesize showingProgressIndicator=_showingProgressIndicator;
@property(nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(readonly, nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) NSDate *dateMax; // @synthesize dateMax=_dateMax;
@property(retain, nonatomic) NSDate *dateMin; // @synthesize dateMin=_dateMin;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *deleteAction; // @synthesize deleteAction=_deleteAction;
@property(nonatomic) _Bool rowInvalid; // @synthesize rowInvalid=_rowInvalid;
@property(nonatomic) __weak id <RUITableViewRowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;
- (void)detailLabelActivatedLinkFromCell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)sourceURL;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setEditableTextFieldValue:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
@property(readonly, nonatomic) _Bool indentWhileEditing;
- (_Bool)rowSupportsLoadingIndicator;
- (void)switchCanceled;
- (void)_switchFlipped:(id)arg1;
- (void)clearCachedHeight;
- (float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (void)_datePickerChanged:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)selectOptions;
- (void)populatePostbackDictionary:(id)arg1;
- (_Bool)supportsAutomaticSelection;
- (void)setValueFromString:(id)arg1;
- (void)setValueFromString:(id)arg1 notify:(_Bool)arg2;
- (_Bool)setSelectPageRowValue:(id)arg1;
- (void)setSelectRowValue:(id)arg1;
- (id)tableCell;
- (_Bool)loadAccessoryImage;
- (void)accessoryImageLoaded;
@property(readonly, nonatomic) UIControl *control;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
- (long long)tableCellStyle;
- (Class)tableCellClass;
- (void)setEnabled:(_Bool)arg1;
- (void)_updateContentForDisabledState;
- (void)_updateTextColors;
- (id)radioGroupSelectedColor;
- (id)textColorForAttributeName:(id)arg1;
- (id)dateFormatterCalendarIdentifier;
- (void)setAttributes:(id)arg1;
- (id)_datePickerFormatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

