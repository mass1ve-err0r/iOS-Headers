//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <HomeUI/UITextViewDelegate-Protocol.h>

@class NSMutableArray, NSString, UITextView;
@protocol HUAboutResidentDeviceFooterViewDelegate;

@interface HUAboutResidentDeviceFooterView : UITableViewHeaderFooterView <UITextViewDelegate>
{
    id <HUAboutResidentDeviceFooterViewDelegate> _delegate;
    UITextView *_messageView;
    NSMutableArray *_constraints;
    struct UIEdgeInsets _messageInsets;
}

@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UITextView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) struct UIEdgeInsets messageInsets; // @synthesize messageInsets=_messageInsets;
@property(nonatomic) id <HUAboutResidentDeviceFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_linkTextAttributes;
- (id)_textAttributes;
- (void)_setupViews;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)updateConstraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

