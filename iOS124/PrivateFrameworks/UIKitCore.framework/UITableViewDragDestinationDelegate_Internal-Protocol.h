//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewDragDestinationDelegate-Protocol.h>

@class NSIndexPath, UITableView;
@protocol UIDropSession;

@protocol UITableViewDragDestinationDelegate_Internal <UITableViewDragDestinationDelegate>

@optional
- (NSIndexPath *)_tableView:(UITableView *)arg1 targetIndexPathForProposedIndexPath:(NSIndexPath *)arg2 currentIndexPath:(NSIndexPath *)arg3 dropSession:(id <UIDropSession>)arg4;
@end
