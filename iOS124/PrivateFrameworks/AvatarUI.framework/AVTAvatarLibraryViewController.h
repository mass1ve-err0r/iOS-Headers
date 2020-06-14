//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AvatarUI/AVTAvatarLibraryModelDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>

@class AVTAvatarLibraryModel, AVTUIEnvironment, NSString, UICollectionView, UILongPressGestureRecognizer, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarLibraryViewControllerDelegate;

@interface AVTAvatarLibraryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarLibraryModelDelegate>
{
    id <AVTAvatarLibraryViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_longPressGesture;
    AVTAvatarLibraryModel *_model;
    _AVTAvatarRecordImageProvider *_imageProvider;
    AVTUIEnvironment *_environment;
}

@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) _AVTAvatarRecordImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(readonly, nonatomic) AVTAvatarLibraryModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <AVTAvatarLibraryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)insertItemsAtIndexes:(id)arg1 deleteItemsAtIndexes:(id)arg2 reloadItemsAtIndexes:(id)arg3;
- (void)dismissController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentUIViewController:(id)arg1;
- (void)presetEditorViewController:(id)arg1;
- (void)didUpdateLibraryItems:(id)arg1;
- (void)didEditRecord:(id)arg1;
- (void)didDeleteRecord:(id)arg1;
- (void)didAddRecord:(id)arg1;
- (void)didTapDoneButton:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)updateVisibleHeaders;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didLongPress:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithModel:(id)arg1 imageProvider:(id)arg2 environment:(id)arg3;
- (id)initWithAvatarStore:(id)arg1 environment:(id)arg2;
- (id)initWithAvatarStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

