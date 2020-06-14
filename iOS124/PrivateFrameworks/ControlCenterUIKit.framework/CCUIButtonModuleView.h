//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <ControlCenterUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class CCUICAPackageDescription, CCUICAPackageView, NSString, UIColor, UIImage, UIImageView, UIView;

@interface CCUIButtonModuleView : UIControl <UIGestureRecognizerDelegate>
{
    UIView *_highlightedBackgroundView;
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    UIImage *_glyphImage;
    UIColor *_glyphColor;
    UIImage *_selectedGlyphImage;
    UIColor *_selectedGlyphColor;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    struct NSDirectionalEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) struct NSDirectionalEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(copy, nonatomic) NSString *glyphState; // @synthesize glyphState=_glyphState;
@property(retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // @synthesize glyphPackageDescription=_glyphPackageDescription;
@property(retain, nonatomic) UIColor *selectedGlyphColor; // @synthesize selectedGlyphColor=_selectedGlyphColor;
@property(retain, nonatomic) UIImage *selectedGlyphImage; // @synthesize selectedGlyphImage=_selectedGlyphImage;
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
- (void).cxx_destruct;
- (void)_setGlyphState:(id)arg1;
- (void)_setGlyphPackageDescription:(id)arg1;
- (void)_setGlyphImage:(id)arg1;
- (void)_updateForStateChange;
- (void)_handlePressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

