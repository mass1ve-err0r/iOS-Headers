//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UILabel;

@interface _UIAccessDeniedView : UIView
{
    UIImageView *_lockView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSString *_title;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_textColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

