//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface PKPeerPaymentActionTransferToBankCell : UITableViewCell
{
    _Bool _isRTL;
    UILabel *_feeLabel;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIImageView *_checkmarkImageView;
    _Bool _showCheckmark;
    NSString *_titleText;
    NSString *_subtitleText;
    NSString *_feeText;
}

@property(nonatomic) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(copy, nonatomic) NSString *feeText; // @synthesize feeText=_feeText;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

