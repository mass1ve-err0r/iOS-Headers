//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/_PKColorPickerViewDelegate-Protocol.h>

@class UIColor, _PKColorPickerView;
@protocol PKColorPickerDelegate;

@interface PKColorPicker : UIViewController <_PKColorPickerViewDelegate>
{
    id <PKColorPickerDelegate> _delegate;
    _PKColorPickerView *_colorPickerView;
}

+ (id)_representableColorForColor:(id)arg1;
@property(retain, nonatomic) _PKColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property(nonatomic) __weak id <PKColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_colorPickerViewUserDidTouchUpInside:(id)arg1;
- (void)_colorPickerViewDidChangeSelectedColor:(id)arg1;
- (id)_colorPickerView;
- (void)_setInitialColorForSpringLoading:(id)arg1;
- (void)_setSelectedColorForPoint:(struct CGPoint)arg1;
- (struct CGSize)preferredContentSize;
@property(retain, nonatomic) UIColor *selectedColor;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

@end

