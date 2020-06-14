//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXHorizontalCollectionGadget.h>

#import <PhotosUI/PLNavigableCollectionContainer-Protocol.h>
#import <PhotosUI/PUCloudSharedAlbumViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUStackedAlbumTransitionDelegate-Protocol.h>

@class NSString, NSUserActivity, PUAlbumDropSessionController, PUAlbumListViewControllerSpec, PUAlbumsGadgetProvider, PUPhotoPinchGestureRecognizer, PUSessionInfo;

@interface PUHorizontalAlbumListGadget : PXHorizontalCollectionGadget <PUStackedAlbumTransitionDelegate, PUCloudSharedAlbumViewControllerDelegate, PLNavigableCollectionContainer>
{
    PUAlbumsGadgetProvider *_provider;
    PUSessionInfo *_sessionInfo;
    PUPhotoPinchGestureRecognizer *_pinchGestureRecognizer;
    PUAlbumDropSessionController *_dropSessionController;
    NSUserActivity *_siriActionActivity;
}

@property(retain, nonatomic) NSUserActivity *siriActionActivity; // @synthesize siriActionActivity=_siriActionActivity;
@property(readonly, nonatomic) PUAlbumDropSessionController *dropSessionController; // @synthesize dropSessionController=_dropSessionController;
@property(readonly, nonatomic) PUPhotoPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) PUAlbumsGadgetProvider *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)_updateCollectionViewLayout;
- (void)_navigateToCollection:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_canUseStackedAlbumTransitionToNavigationToCollection:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)sharedAlbumDeletedBySharedAlbumViewController:(id)arg1;
- (id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(_Bool)arg2 forPHCollection:(id)arg3;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(_Bool)arg2 forCollection:(id)arg3;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (void)setGadgetSpec:(id)arg1;
- (const struct __CFString *)accessoryButtonEventTrackerKey;
- (id)accessoryButtonTitle;
- (unsigned long long)accessoryButtonType;
- (unsigned long long)gadgetType;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canNavigateToCollection:(id)arg1;
@property(readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec;
- (void)viewDidLoad;
- (id)initWithAlbumsGadgetProvider:(id)arg1;
- (id)init;
- (id)px_gridPresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

