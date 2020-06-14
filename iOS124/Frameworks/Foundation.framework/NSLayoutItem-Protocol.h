//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject-Protocol.h>

@class NSArray, NSISEngine, NSISLinearExpression, NSISVariable, NSLayoutAnchor, NSLayoutConstraint, NSLayoutRect, NSString;
@protocol NSLayoutItem;

@protocol NSLayoutItem <NSObject>
- (_Bool)nsli_isFlipped;
- (unsigned long long)nsli_autoresizingMask;
- (_Bool)nsli_descriptionIncludesPointer;
- (NSString *)nsli_description;
- (_Bool)nsli_resolvedValue:(double *)arg1 forSymbolicConstant:(NSString *)arg2 inConstraint:(NSLayoutConstraint *)arg3 error:(id *)arg4;
- (_Bool)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(double)arg3 container:(id <NSLayoutItem>)arg4;
- (_Bool)nsli_lowerAttribute:(int)arg1 intoExpression:(NSISLinearExpression *)arg2 withCoefficient:(double)arg3 forConstraint:(NSLayoutConstraint *)arg4;
- (id <NSLayoutItem>)nsli_superitem;
- (struct CGSize)nsli_convertSizeFromEngineSpace:(struct CGSize)arg1;
- (struct CGSize)nsli_convertSizeToEngineSpace:(struct CGSize)arg1;
- (NSISEngine *)nsli_layoutEngine;

@optional
@property(setter=nsli_setPiercingToken:) unsigned long long nsli_piercingToken;
- (NSLayoutRect *)nsli_layoutRect;
- (NSISVariable *)nsli_boundsHeightVariable;
- (NSISVariable *)nsli_boundsWidthVariable;
- (NSISVariable *)nsli_minYVariable;
- (NSISVariable *)nsli_minXVariable;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (NSArray *)nsli_installedConstraints;
- (_Bool)nsli_removeConstraint:(NSLayoutConstraint *)arg1;
- (void)nsli_addConstraint:(NSLayoutConstraint *)arg1 mutuallyExclusiveConstraints:(id *)arg2;
- (void)nsli_addConstraint:(NSLayoutConstraint *)arg1;
- (struct CGSize)nsli_engineToUserScalingCoefficients;
- (NSLayoutAnchor *)nsli_layoutAnchorForAttribute:(long long)arg1;
- (id <NSLayoutItem>)nsli_ancestorSharedWithItem:(id <NSLayoutItem>)arg1;
- (id <NSLayoutItem>)nsli_itemDescribingLayoutDirectionForConstraint:(NSLayoutConstraint *)arg1 toItem:(id <NSLayoutItem>)arg2;
- (id <NSLayoutItem>)nsli_layoutMarginsItem;
- (_Bool)nsli_isRTL;
- (_Bool)nsli_lowersExpressionRelativeToConstraintContainer;
- (_Bool)nsli_isLegalConstraintItem;
- (_Bool)nsli_canHostIndependentVariableAnchor;
@end

