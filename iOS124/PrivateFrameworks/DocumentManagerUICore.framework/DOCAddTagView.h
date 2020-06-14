//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <DocumentManagerUICore/UITextFieldDelegate-Protocol.h>

@class CAShapeLayer, DOCTagIconView, NSString, UILabel, UITextField, UIVisualEffectView;
@protocol DOCAddTagTextFieldDelegate;

@interface DOCAddTagView : UIView <UITextFieldDelegate>
{
    id <DOCAddTagTextFieldDelegate> _delegate;
    DOCTagIconView *_tagDotView;
    UILabel *_addNewTagLabel;
    UIVisualEffectView *_addNewTagLabelWrapper;
    UITextField *_tagNameTextField;
    CAShapeLayer *_borderLayer;
}

@property(readonly, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(readonly, nonatomic) UITextField *tagNameTextField; // @synthesize tagNameTextField=_tagNameTextField;
@property(readonly, nonatomic) UIVisualEffectView *addNewTagLabelWrapper; // @synthesize addNewTagLabelWrapper=_addNewTagLabelWrapper;
@property(readonly, nonatomic) UILabel *addNewTagLabel; // @synthesize addNewTagLabel=_addNewTagLabel;
@property(readonly, nonatomic) DOCTagIconView *tagDotView; // @synthesize tagDotView=_tagDotView;
@property(nonatomic) __weak id <DOCAddTagTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *text;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)cancel;
- (void)commit;
- (void)layoutSubviews;
- (void)configureBorderPath;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

