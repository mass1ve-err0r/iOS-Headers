//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionGroupView.h>

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView
{
    _Bool _scrollableHeaderViewHasRealContent;
    UIAlertController *_alertController;
}

@property(nonatomic) _Bool scrollableHeaderViewHasRealContent; // @synthesize scrollableHeaderViewHasRealContent=_scrollableHeaderViewHasRealContent;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void).cxx_destruct;
- (_Bool)_shouldInstallContentGuideConstraints;
- (_Bool)_shouldShowSeparatorAboveActionsSequenceView;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (id)_alertController;
- (id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;

@end

