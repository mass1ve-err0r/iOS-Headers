//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardCreditAccountItem, UILabel;

@interface PKCreditBalanceCell : PKDashboardCollectionViewCell
{
    _Bool _isCompactUI;
    _Bool _useAccssibilityLayout;
    PKDashboardCreditAccountItem *_item;
    UILabel *_labelBalance;
    UILabel *_labelAmount;
    UILabel *_labelCreditAvailable;
}

@property(nonatomic) _Bool useAccssibilityLayout; // @synthesize useAccssibilityLayout=_useAccssibilityLayout;
@property(readonly, nonatomic) UILabel *labelCreditAvailable; // @synthesize labelCreditAvailable=_labelCreditAvailable;
@property(readonly, nonatomic) UILabel *labelAmount; // @synthesize labelAmount=_labelAmount;
@property(readonly, nonatomic) UILabel *labelBalance; // @synthesize labelBalance=_labelBalance;
@property(retain, nonatomic) PKDashboardCreditAccountItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

