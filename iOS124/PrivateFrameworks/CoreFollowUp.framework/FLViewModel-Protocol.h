//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFollowUp/NSObject-Protocol.h>

@class FLFollowUpItem, NSArray;

@protocol FLViewModel <NSObject>
- (void)setItemChangeHandler:(void (^)(void))arg1;
- (NSArray *)allPendingItems;

@optional
- (void)refreshItemsForItem:(FLFollowUpItem *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)refreshItems:(NSArray *)arg1 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (NSArray *)groups;
@end

