//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetActionPerformer.h>

@class PXCMMPhotoKitImportStatusManager, PXSectionedSelectionManager;

@interface PXCMMAssetActionPerformer : PXAssetActionPerformer
{
    PXSectionedSelectionManager *_cmmSelectionManager;
    PXCMMPhotoKitImportStatusManager *_importStatusManager;
}

@property(retain, nonatomic) PXCMMPhotoKitImportStatusManager *importStatusManager; // @synthesize importStatusManager=_importStatusManager;
@property(retain, nonatomic) PXSectionedSelectionManager *cmmSelectionManager; // @synthesize cmmSelectionManager=_cmmSelectionManager;
- (void).cxx_destruct;

@end

