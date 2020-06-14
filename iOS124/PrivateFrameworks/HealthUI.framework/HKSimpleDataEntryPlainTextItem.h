//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKSimpleDataEntryItem.h>

#import <HealthUI/HKSimpleDataEntryCellDelegate-Protocol.h>

@class HKSimpleDataEntryPlainTextCell, NSString;

@interface HKSimpleDataEntryPlainTextItem : HKSimpleDataEntryItem <HKSimpleDataEntryCellDelegate>
{
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSString *_text;
    long long _intention;
}

- (void).cxx_destruct;
- (void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2;
- (void)doneButtonTapped:(id)arg1;
- (void)updateCellDisplay;
- (id)cell;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 defaultText:(id)arg3 intention:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

