//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <PassKitUI/PKAccessibleLayoutSupport-Protocol.h>

@class PKContinuousButton, PKPaymentBalance, PKPaymentPass, PKPaymentPassAction, UILabel;
@protocol PKAccessibleLayoutObserverDelegate;

@interface PKPassProductCell : UITableViewCell <PKAccessibleLayoutSupport>
{
    UILabel *_titleView;
    UILabel *_detailView;
    PKContinuousButton *_actionButton;
    PKPaymentPassAction *_action;
    double _topPadding;
    double _middlePadding;
    id <PKAccessibleLayoutObserverDelegate> _accessibleLayoutObserverDelegate;
    long long _accessibleLayout;
    PKPaymentPass *_pass;
    PKPaymentBalance *_balance;
    CDUnknownBlockType _actionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
@property(copy, nonatomic) PKPaymentBalance *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(nonatomic) long long accessibleLayout; // @synthesize accessibleLayout=_accessibleLayout;
@property(nonatomic) __weak id <PKAccessibleLayoutObserverDelegate> accessibleLayoutObserverDelegate; // @synthesize accessibleLayoutObserverDelegate=_accessibleLayoutObserverDelegate;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)_updateContent;
- (void)_actionButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_applyStyles;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

