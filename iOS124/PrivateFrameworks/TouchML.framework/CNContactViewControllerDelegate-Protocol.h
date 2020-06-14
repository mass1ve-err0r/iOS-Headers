//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/NSObject-Protocol.h>

@class CNContact, CNContactProperty, CNContactViewController;

@protocol CNContactViewControllerDelegate <NSObject>

@optional
- (void)contactViewController:(CNContactViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (_Bool)contactViewController:(CNContactViewController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
@end

