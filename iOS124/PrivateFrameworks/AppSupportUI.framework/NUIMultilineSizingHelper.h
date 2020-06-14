//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface NUIMultilineSizingHelper : NSObject
{
    UIView *_view;
    struct objc_super _view_super;
    double _preferredMaxLayoutWidth;
    struct {
        unsigned int isContainerView:1;
        unsigned int determiningPreferredMaxLayoutWidth:1;
        unsigned int inSecondConstraintsPass:1;
    } _flags;
}

- (void).cxx_destruct;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(_Bool)arg1;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)updateConstraints;
- (double)preferredMaxLayoutWidth;
- (id)initWithView:(id)arg1 class:(Class)arg2;

@end

