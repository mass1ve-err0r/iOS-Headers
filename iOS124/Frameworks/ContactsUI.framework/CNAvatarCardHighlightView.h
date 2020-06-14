//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface CNAvatarCardHighlightView : UIView
{
    CALayer *_highlightLayer;
}

@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool highlighted;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIColor *highlightColor;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

@end

