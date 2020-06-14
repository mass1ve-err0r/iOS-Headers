//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBReusableViewMap, SBWindow, UIView;
@protocol SBReusableView;

@protocol SBReusableViewMapDelegate <NSObject>
- (SBWindow *)windowForRecycledViewsInViewMap:(SBReusableViewMap *)arg1;
- (unsigned long long)viewMap:(SBReusableViewMap *)arg1 maxRecycledViewsOfClass:(Class)arg2;

@optional
- (_Bool)viewMap:(SBReusableViewMap *)arg1 shouldRecycleView:(UIView<SBReusableView> *)arg2;
@end

