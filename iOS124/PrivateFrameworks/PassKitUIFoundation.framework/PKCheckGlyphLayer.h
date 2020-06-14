//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKMicaLayer.h>

@class CAGradientLayer, CAShapeLayer, UIColor;
@protocol PKCheckGlyphLayerDelegate;

@interface PKCheckGlyphLayer : PKMicaLayer
{
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_maskLayer;
    _Bool _covered;
    struct CATransform3D _uncoveredTransform;
    struct CATransform3D _coveredTransform;
    _Bool _revealed;
    id <PKCheckGlyphLayerDelegate> _checkGlyphDelegate;
    UIColor *_primaryColor;
}

@property(nonatomic) _Bool revealed; // @synthesize revealed=_revealed;
@property(readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(nonatomic) __weak id <PKCheckGlyphLayerDelegate> checkGlyphDelegate; // @synthesize checkGlyphDelegate=_checkGlyphDelegate;
- (void).cxx_destruct;
- (double)_updateCovered:(_Bool)arg1;
- (double)setCovered:(_Bool)arg1 animated:(_Bool)arg2;
- (double)setRevealed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPrimaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)setPrimaryColor:(struct UIColor *)arg1;
- (void)_createMask;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;
- (id)init;

@end

