//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPhotosGlobalFooterViewModel.h>

#import <PhotosUICore/PXAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXCPLServiceUIDelegate-Protocol.h>
#import <PhotosUICore/PXCloudQuotaControllerDelegate-Protocol.h>

@class NSArray, NSString, PXCPLServiceUI, PXCloudQuotaController, PXPhotoKitAssetsDataSourceManager;

@interface PXCPLFooterViewModel : PXPhotosGlobalFooterViewModel <PXCPLServiceUIDelegate, PXCloudQuotaControllerDelegate, PXAssetsDataSourceManagerObserver>
{
    PXCPLServiceUI *_serviceUI;
    PXCloudQuotaController *_cloudQuotaController;
    NSArray *_syncProgressAlbums;
    unsigned long long _photoCount;
    unsigned long long _videoCount;
    unsigned long long _otherCount;
    PXPhotoKitAssetsDataSourceManager *_assetsDataSourceManager;
}

@property(readonly, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
- (void).cxx_destruct;
- (id)presentingViewControllerForCloudQuotaController:(id)arg1;
- (void)cloudQuotaController:(id)arg1 presentInformationBanner:(id)arg2;
- (_Bool)serviceUI:(id)arg1 performAction:(long long)arg2;
- (void)serviceUI:(id)arg1 progressDidChange:(float)arg2;
- (void)serviceUI:(id)arg1 statusDidChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateServiceUI;
- (void)_updateTitle;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

