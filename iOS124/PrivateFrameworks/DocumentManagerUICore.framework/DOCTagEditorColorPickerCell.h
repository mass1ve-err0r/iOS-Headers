//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DOCTagColorPicker, UIGestureRecognizer;

@interface DOCTagEditorColorPickerCell : UICollectionViewCell
{
    DOCTagColorPicker *_colorPickerView;
}

@property(retain, nonatomic) DOCTagColorPicker *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIGestureRecognizer *changeColorPanGestureRecognizer;
@property(readonly, nonatomic) long long selectedColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

