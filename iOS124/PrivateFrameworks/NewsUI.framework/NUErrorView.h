//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NUErrorMessage, NUTrait, UILabel;

@interface NUErrorView : UIView
{
    NUErrorMessage *_errorMessage;
    long long _textAlignment;
    unsigned long long _verticalAlignment;
    UILabel *_label;
    NUTrait *_labelMaxWidthTrait;
}

@property(retain, nonatomic) NUTrait *labelMaxWidthTrait; // @synthesize labelMaxWidthTrait=_labelMaxWidthTrait;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NUErrorMessage *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void).cxx_destruct;
- (id)attributedStringForErrorMessage:(id)arg1;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)errorMessage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithErrorMessage:(id)arg1;

@end

