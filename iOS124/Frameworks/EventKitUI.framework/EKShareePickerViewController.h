//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/EKEventAttendeePickerDelegate-Protocol.h>

@class EKCalendarShareePicker, NSArray, NSString;
@protocol EKShareePickerViewControllerDelegate;

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate>
{
    EKCalendarShareePicker *_picker;
    id <EKShareePickerViewControllerDelegate> _delegate;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(nonatomic) __weak id <EKShareePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)eventAttendeePicker:(id)arg1 getValidationStatusForAddress:(id)arg2;
- (void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(unsigned long long)arg2 forAddress:(id)arg3;
- (struct CGSize)preferredContentSize;
@property(copy, nonatomic) NSArray *sharees;
- (id)_createRecipientFromSharee:(id)arg1;
- (id)_recipientFromSharee:(id)arg1;
- (id)_createShareeFromRecipient:(id)arg1;
- (id)_shareeFromRecipient:(id)arg1;
- (void)add;
- (void)cancel;
- (void)viewDidLoad;
- (void)setSearchAccountID:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

