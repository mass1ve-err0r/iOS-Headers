//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIRemoveControlMinusButton.h>

__attribute__((visibility("hidden")))
@interface UIRemoveControlMultiSelectButton : UIRemoveControlMinusButton
{
    unsigned int _isHighlighted:1;
    unsigned int _isSelected:1;
}

+ (id)minusCenterImage;
+ (id)plusImage;
+ (id)minusImage;
+ (float)defaultWidth;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 highlighted:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHiding:(_Bool)arg1;
- (_Bool)isHiding;
- (_Bool)isRotating;
- (_Bool)isRotated;
- (void)toggleRotate:(_Bool)arg1;
- (id)initWithRemoveControl:(id)arg1;

@end

