//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKInlineInkPicker, UIButton, UIVisualEffectView;

@interface _PKFloatingInkPickerView : UIView
{
    unsigned long long _position;
    UIVisualEffectView *_dockView;
    PKInlineInkPicker *_inkPicker;
    UIButton *_undoButton;
    UIButton *_redoButton;
    UIButton *_shapeButton;
    struct CGPoint _dragStartOrigin;
}

@property(nonatomic) struct CGPoint dragStartOrigin; // @synthesize dragStartOrigin=_dragStartOrigin;
@property(retain, nonatomic) UIButton *shapeButton; // @synthesize shapeButton=_shapeButton;
@property(retain, nonatomic) UIButton *redoButton; // @synthesize redoButton=_redoButton;
@property(retain, nonatomic) UIButton *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) PKInlineInkPicker *inkPicker; // @synthesize inkPicker=_inkPicker;
@property(retain, nonatomic) UIVisualEffectView *dockView; // @synthesize dockView=_dockView;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
- (void).cxx_destruct;
- (void)setPositionForProjectedOrigin:(struct CGPoint)arg1;
- (void)didPanInkPicker:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

