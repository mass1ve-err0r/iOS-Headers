//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class FAContactsSearchController, NSArray;

@protocol AAUIContactsSearchDelegate <NSObject>
- (void)contactsSearchController:(FAContactsSearchController *)arg1 didFinishSearchWithSuccess:(_Bool)arg2;
- (void)contactsSearchController:(FAContactsSearchController *)arg1 didFindSortedResult:(NSArray *)arg2;
@end

