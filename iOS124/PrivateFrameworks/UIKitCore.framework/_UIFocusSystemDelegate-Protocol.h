//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIFocusSystem, UIFocusUpdateContext;
@protocol UIFocusItemContainer, _UIFocusRegionContainer;

@protocol _UIFocusSystemDelegate <NSObject>

@optional
- (id <UIFocusItemContainer>)_focusItemContainerForFocusSystem:(UIFocusSystem *)arg1;
- (id <_UIFocusRegionContainer>)_focusMapContainerForFocusSystem:(UIFocusSystem *)arg1;
- (void)_focusSystem:(UIFocusSystem *)arg1 didFinishUpdatingFocusInContext:(UIFocusUpdateContext *)arg2;
- (_Bool)_focusSystem:(UIFocusSystem *)arg1 shouldRestoreFocusInContext:(UIFocusUpdateContext *)arg2;
- (_Bool)_focusSystem:(UIFocusSystem *)arg1 prefersDeferralForFocusUpdateInContext:(UIFocusUpdateContext *)arg2;
- (NSArray *)_preferredFocusEnvironmentsForFocusSystem:(UIFocusSystem *)arg1;
@end

