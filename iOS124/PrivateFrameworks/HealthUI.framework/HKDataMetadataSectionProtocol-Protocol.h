//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, UINavigationController, UITableView, UITableViewCell;

@protocol HKDataMetadataSectionProtocol
- (void)willDisplayCell:(UITableViewCell *)arg1 forIndex:(unsigned long long)arg2 tableView:(UITableView *)arg3;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(UINavigationController *)arg2 animated:(_Bool)arg3;
- (UITableViewCell *)cellForIndex:(unsigned long long)arg1 tableView:(UITableView *)arg2;
- (unsigned long long)numberOfRowsInSection;
- (NSString *)sectionFooter;
- (NSString *)sectionTitle;
@end

