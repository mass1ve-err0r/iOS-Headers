//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, SKUIColorScheme, UILabel;

@interface SKUIProductInformationView : UIView
{
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInset;
    NSArray *_informationLines;
    NSMutableArray *_imageValues;
    NSMutableArray *_keyLabels;
    UIView *_separatorView;
    UILabel *_titleLabel;
    NSMutableArray *_valueLabels;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) NSArray *informationLines; // @synthesize informationLines=_informationLines;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (double)_keyWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *title;
@property(nonatomic) _Bool hidesSeparatorView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

