//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDragAnimating-Protocol.h>

@class UIDragItem;

@protocol UICollectionViewDropPlaceholderContext <UIDragAnimating>
@property(readonly, nonatomic) UIDragItem *dragItem;
- (void)setNeedsCellUpdate;
- (_Bool)deletePlaceholder;
- (_Bool)commitInsertionWithDataSourceUpdates:(void (^)(NSIndexPath *))arg1;
@end

