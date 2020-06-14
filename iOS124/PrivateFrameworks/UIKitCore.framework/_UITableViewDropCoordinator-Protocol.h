//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewDropCoordinator-Protocol.h>

@class NSArray, NSIndexPath, NSString, UIDragItem, UIDragPreviewTarget, UITableViewDropProposal;
@protocol UIDropSession, _UITableViewPlaceholderContext;

@protocol _UITableViewDropCoordinator <UITableViewDropCoordinator>
@property(readonly, nonatomic) id <UIDropSession> _dropSession;
@property(readonly, nonatomic) UITableViewDropProposal *_dropProposal;
@property(readonly, nonatomic) NSIndexPath *_destinationIndexPath;
@property(readonly, nonatomic) NSArray *_items;
- (void)_dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (id <_UITableViewPlaceholderContext>)_dropItem:(UIDragItem *)arg1 toPlaceholderInsertedAtIndexPath:(NSIndexPath *)arg2 withReuseIdentifier:(NSString *)arg3 rowHeight:(double)arg4 cellUpdateHandler:(void (^)(UITableViewCell *))arg5;
- (void)_dropItem:(UIDragItem *)arg1 toRowAtIndexPath:(NSIndexPath *)arg2;
@end

