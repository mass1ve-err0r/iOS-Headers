//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPrintFormatter.h>

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter
{
    UIView *_view;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect)rectForPageAtIndex:(long long)arg1;
- (long long)_recalcPageCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithView:(id)arg1;

@end

