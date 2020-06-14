//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIAccessibility/NSObject-Protocol.h>

@class NSArray, NSString, UIFocusAnimationCoordinator, UIFocusUpdateContext, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@protocol UIFocusEnvironment <NSObject>
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (_Bool)shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;

@optional
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
- (NSString *)soundIdentifierForFocusUpdateInContext:(UIFocusUpdateContext *)arg1;
@end

