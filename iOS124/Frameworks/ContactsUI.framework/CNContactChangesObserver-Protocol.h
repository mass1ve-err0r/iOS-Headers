//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, NSString;

@protocol CNContactChangesObserver <NSObject>
- (void)contactDidChange:(CNContact *)arg1;

@optional
- (void)contactWithIdentifierWasDeleted:(NSString *)arg1;
@end

