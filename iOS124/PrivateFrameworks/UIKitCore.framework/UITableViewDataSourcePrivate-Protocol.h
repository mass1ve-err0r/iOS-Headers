//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewDataSource-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableView;

@protocol UITableViewDataSourcePrivate <UITableViewDataSource>

@optional
- (NSString *)tableView:(UITableView *)arg1 detailTextForHeaderInSection:(long long)arg2;
- (NSArray *)_tableView:(UITableView *)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 indexPathForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
@end

