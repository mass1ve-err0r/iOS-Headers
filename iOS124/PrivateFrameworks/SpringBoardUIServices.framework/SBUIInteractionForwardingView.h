//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSHashTable, NSSet;

@interface SBUIInteractionForwardingView : UIView
{
    NSHashTable *_ignoreAlphaSubviewsTable;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeIgnoreAlphaSubview:(id)arg1;
- (void)addIgnoreAlphaSubview:(id)arg1;
@property(copy, nonatomic) NSSet *ignoreAlphaSubviews;

@end

