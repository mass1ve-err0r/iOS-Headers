//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIGift, SKUIGiftRecipientTableViewCell, SKUIGiftTextTableViewCell, UITextView;
@protocol UITextFieldDelegate;

@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection
{
    double _footerHeight;
    NSString *_footerString;
    SKUIGift *_gift;
    UITextView *_messagingTextView;
    SKUIGiftRecipientTableViewCell *_recipientTableViewCell;
    id <UITextFieldDelegate> _textFieldDelegate;
    double _textViewCellHeight;
    SKUIGiftTextTableViewCell *_messageCell;
}

@property(retain, nonatomic) SKUIGiftTextTableViewCell *messageCell; // @synthesize messageCell=_messageCell;
@property(nonatomic) id <UITextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
@property(retain, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;
- (void).cxx_destruct;
- (id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_recipientTableViewCell;
- (id)_footerString;
- (id)_attributedPlaceholderWithString:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithGiftConfiguration:(id)arg1;

@end

