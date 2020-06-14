//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface CKMessageEntryAudioHintView : UIView
{
    UIButton *_referenceButton;
    UILabel *_hintLabel;
    UIImageView *_hintImageView;
    UIButton *_hintButton;
    struct UIEdgeInsets _coverInsets;
}

@property(retain, nonatomic) UIButton *hintButton; // @synthesize hintButton=_hintButton;
@property(retain, nonatomic) UIImageView *hintImageView; // @synthesize hintImageView=_hintImageView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) struct UIEdgeInsets coverInsets; // @synthesize coverInsets=_coverInsets;
@property(retain, nonatomic) UIButton *referenceButton; // @synthesize referenceButton=_referenceButton;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)initWithReferenceButton:(id)arg1 coverInsets:(struct UIEdgeInsets)arg2;

@end

