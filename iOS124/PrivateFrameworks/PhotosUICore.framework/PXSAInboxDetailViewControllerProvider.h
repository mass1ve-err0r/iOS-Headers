//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXInboxModelDetailViewControllerProvider-Protocol.h>

@class NSString;

@interface PXSAInboxDetailViewControllerProvider : NSObject <PXInboxModelDetailViewControllerProvider>
{
}

- (id)_sharedAlbumViewControllerForSectionInfo:(id)arg1 fromViewController:(id)arg2;
- (void)navigateToInboxModel:(id)arg1 inSharedAlbumActivityFeedViewController:(id)arg2;
- (void)popViewControllerForModel:(id)arg1 fromViewController:(id)arg2 toNavigableForYouViewController:(id)arg3;
- (id)viewControllerForInboxModel:(id)arg1 fromViewController:(id)arg2;
- (long long)presentationTypeForInboxModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

