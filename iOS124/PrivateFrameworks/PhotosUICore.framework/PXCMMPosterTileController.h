//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXCMMAssetsProgressListener, PXCMMPosterHeaderView, PXCMMViewModel, UIView;

@interface PXCMMPosterTileController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject>
{
    unsigned long long _activityType;
    PXCMMViewModel *_viewModel;
    PXCMMAssetsProgressListener *_assetsProgressListener;
    PXCMMPosterHeaderView *_posterHeaderView;
}

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateStatusString;
- (void)_updateContent;
- (void)_udpateTitles;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
@property(readonly, nonatomic) UIView *view;
- (id)initWithActivityType:(unsigned long long)arg1 viewModel:(id)arg2 assetsProgressListener:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

