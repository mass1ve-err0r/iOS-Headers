//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITableViewPlaceholderContextDelegate-Protocol.h>

@class NSIndexPath, UIDragItem, UIDragPreviewParameters, UIDragPreviewTarget, UITableView, UITableViewCell, _UITableViewDropPlaceholderContextImpl;
@protocol UIDragAnimating;

@protocol _UITableViewDropCoordinatorDelegate <_UITableViewPlaceholderContextDelegate>
- (void)insertPlaceholderAtIndexPath:(NSIndexPath *)arg1 withContext:(_UITableViewDropPlaceholderContextImpl *)arg2 previewParametersProvider:(UIDragPreviewParameters * (^)(UITableViewCell *))arg3;
- (id <UIDragAnimating>)animateDragItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (id <UIDragAnimating>)animateDragItem:(UIDragItem *)arg1 toCell:(UITableViewCell *)arg2 withPreviewParameters:(UIDragPreviewParameters *)arg3;
- (id <UIDragAnimating>)animateDragItem:(UIDragItem *)arg1 toRowAtIndexPath:(NSIndexPath *)arg2;
- (id <UIDragAnimating>)animateDragItem:(UIDragItem *)arg1 intoRowAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect)arg3;
- (UITableView *)tableView;
@end

