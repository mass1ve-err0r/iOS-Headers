//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (TKConstraintBasedLayout)
- (id)_tk_autolayoutTrace;
- (id)_tk_recursiveAutolayoutTraceAtLevel:(long long)arg1 anyDescendantHasAmbiguousLayout:(_Bool *)arg2;
- (id)tk_firstCommonAncestorWithView:(id)arg1;
- (unsigned long long)_tl_depth;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;
- (void)tk_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;
- (id)tk_addedConstraintFotLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3 withMultiplier:(double)arg4;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2 withMultiplier:(double)arg3;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3 withOffset:(double)arg4;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2;
- (id)tk_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3 withMultiplier:(double)arg4;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2 withMultiplier:(double)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3 withOffset:(double)arg4;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofItem:(id)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2 withOffset:(double)arg3;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfItem:(id)arg2;
- (void)tk_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;
@end

