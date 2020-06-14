//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>

@class CNCardGroup, CNContactView, UITableViewCell;

@protocol ABContactViewDataSource <NSObject, UITableViewDataSource>

@optional
- (UITableViewCell *)contactView:(CNContactView *)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(CNCardGroup *)arg3;
- (long long)contactView:(CNContactView *)arg1 numberOfItemsInGroup:(CNCardGroup *)arg2;
@end

