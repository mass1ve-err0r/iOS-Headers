/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCAddTagView : UIView <UITextFieldDelegate> {
    UILabel * _addNewTagLabel;
    CAShapeLayer * _borderLayer;
    <DOCAddTagTextFieldDelegate> * _delegate;
    DOCTagDotView * _tagDotView;
    UITextField * _tagNameTextField;
}

@property (nonatomic, readonly) UILabel *addNewTagLabel;
@property (nonatomic, readonly) CAShapeLayer *borderLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DOCAddTagTextFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) DOCTagDotView *tagDotView;
@property (nonatomic, readonly) UITextField *tagNameTextField;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)addNewTagLabel;
- (id)borderLayer;
- (void)cancel;
- (void)commit;
- (void)configureBorderPath;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)tagDotView;
- (id)tagNameTextField;
- (id)text;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
