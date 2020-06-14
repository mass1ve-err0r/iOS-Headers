//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>
#import <PassKitUI/PKDashboardMessagesViewDelegate-Protocol.h>

@class NSMutableArray, NSString, PKDashboardMessagesView, PKPassGroupView, UIScrollView;

@interface PKDashboardPassMessagePresenter : NSObject <PKDashboardMessagesViewDelegate, PKDashboardItemPresenter>
{
    PKPassGroupView *_groupView;
    PKDashboardMessagesView *_sampleMessageView;
    NSMutableArray *_tablesViews;
    UIScrollView *_scrollView;
    unsigned long long _currentIndex;
    NSString *_currentIdentifier;
}

- (void).cxx_destruct;
- (unsigned long long)_indexForIdentifier:(id)arg1 inMessages:(id)arg2;
- (void)messagesView:(id)arg1 scrolledToMessageWithIdentifier:(id)arg2;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_identifierForItem:(id)arg1;
- (id)collectionViewCellClasses;
- (Class)itemClass;
- (id)initWithPassGroupView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

