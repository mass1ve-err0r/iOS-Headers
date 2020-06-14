//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIRefreshControlHosting-Protocol.h>

@class NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting>
{
    UIScrollView *_scrollView;
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
}

- (void).cxx_destruct;
- (void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (void)incrementInsetHeight:(double)arg1;
- (void)decrementInsetHeight:(double)arg1;
@property(readonly) __weak UIScrollView *scrollView;
@property(readonly) _Bool refreshControlInsetsAffectScrollViewRubberBanding;
- (id)initWithScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

