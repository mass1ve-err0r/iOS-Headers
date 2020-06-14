//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

#import <EventKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITableViewCell;

@interface EKCalendarTitleEditItem : EKCalendarEditItem <UITextFieldDelegate>
{
    UITableViewCell *_cell;
}

- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)saveStateToCalendar:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

