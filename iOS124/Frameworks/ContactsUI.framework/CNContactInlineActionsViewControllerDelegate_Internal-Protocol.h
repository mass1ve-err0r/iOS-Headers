//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactInlineActionsViewControllerDelegate-Protocol.h>

@class CNContactInlineActionsViewController, CNContactProperty, NSString;

@protocol CNContactInlineActionsViewControllerDelegate_Internal <CNContactInlineActionsViewControllerDelegate>

@optional
- (void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(CNContactInlineActionsViewController *)arg1;
- (void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(CNContactInlineActionsViewController *)arg1;
- (_Bool)contactInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 shouldPerformActionOfType:(NSString *)arg2 withContactProperty:(CNContactProperty *)arg3;
@end

