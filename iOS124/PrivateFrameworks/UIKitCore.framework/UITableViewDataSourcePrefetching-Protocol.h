//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UITableView;

@protocol UITableViewDataSourcePrefetching <NSObject>
- (void)tableView:(UITableView *)arg1 prefetchRowsAtIndexPaths:(NSArray *)arg2;

@optional
- (void)tableView:(UITableView *)arg1 cancelPrefetchingForRowsAtIndexPaths:(NSArray *)arg2;
@end

