//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/UITableViewDataSource-Protocol.h>

@class NSArray, NSIndexPath, UITableView;

@protocol MPUActionTableViewDataSource <UITableViewDataSource>
+ (NSArray *)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
+ (NSArray *)actionCellConfigurationClasses;
- (_Bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)reloadActionRowsAnimated:(_Bool)arg1;
- (long long)numberOfBottomActionRowsInTableView:(UITableView *)arg1;
- (long long)numberOfTopActionRowsInTableView:(UITableView *)arg1;
- (long long)numberOfActionRowsInTableView:(UITableView *)arg1;
- (Class)cellConfigurationForIndexPath:(NSIndexPath *)arg1;
@end

