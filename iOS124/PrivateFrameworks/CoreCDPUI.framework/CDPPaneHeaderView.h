//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BFFPaneHeaderView, UILabel;

@interface CDPPaneHeaderView : UIView
{
    BFFPaneHeaderView *_header;
}

- (void).cxx_destruct;
- (void)makeAllTheTextFits;
- (double)innerHeaderMaxY;
@property(readonly, nonatomic) UIView *_header;
- (void)layoutSubviews;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)setTitleText:(id)arg1;
@property(readonly, nonatomic) UILabel *textLabel;
@property(readonly, nonatomic) UILabel *subLabel;
@property(readonly, nonatomic) UILabel *detailTextLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

