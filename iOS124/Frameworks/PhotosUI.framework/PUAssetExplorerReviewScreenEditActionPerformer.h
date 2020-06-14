//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetExplorerReviewScreenActionPerformer.h>

@protocol PUPhotoEditViewControllerSessionDelegate, PUReviewAssetProvider, PUVideoEditViewControllerSessionDelegate;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenEditActionPerformer : PUAssetExplorerReviewScreenActionPerformer
{
    id <PUReviewAssetProvider> _reviewAssetProvider;
    id <PUPhotoEditViewControllerSessionDelegate> _photoDelegate;
    id <PUVideoEditViewControllerSessionDelegate> _videoDelegate;
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(nonatomic) __weak id <PUVideoEditViewControllerSessionDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property(nonatomic) __weak id <PUPhotoEditViewControllerSessionDelegate> photoDelegate; // @synthesize photoDelegate=_photoDelegate;
@property(retain, nonatomic) id <PUReviewAssetProvider> reviewAssetProvider; // @synthesize reviewAssetProvider=_reviewAssetProvider;
- (void).cxx_destruct;
- (void)_presentEditViewControllerForReviewAsset:(id)arg1;
- (void)performUserInteractionTask;

@end

