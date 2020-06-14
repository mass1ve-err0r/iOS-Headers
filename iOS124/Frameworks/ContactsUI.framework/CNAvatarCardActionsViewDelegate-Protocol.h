//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNAvatarCardActionsView, NSArray, NSString, UIViewController;

@protocol CNAvatarCardActionsViewDelegate <NSObject>
- (UIViewController *)viewControllerForCardActionsView:(CNAvatarCardActionsView *)arg1;

@optional
- (void)dismissViewControllerForCardActionsView:(CNAvatarCardActionsView *)arg1 animated:(_Bool)arg2;
- (void)cardActionsView:(CNAvatarCardActionsView *)arg1 didShowActions:(NSArray *)arg2;
- (NSArray *)cardActionsView:(CNAvatarCardActionsView *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
@end

