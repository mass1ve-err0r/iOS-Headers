//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/PLTilePlaceholderView-Protocol.h>

@class NSString, PLRoundProgressView, UIButton;
@protocol PLPhotoTileCloudPlaceholderViewDelegate;

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView>
{
    PLRoundProgressView *_loadingIndicatorView;
    UIView *_loadingContainerView;
    UIButton *_loadingErrorButton;
    _Bool _indicatorIsVisible;
    _Bool _showingError;
    _Bool _showingLoading;
    struct CGRect _imageRect;
    _Bool _toolbarVisible;
    double _lastViewPhaseChangeDate;
    id <PLPhotoTileCloudPlaceholderViewDelegate> _delegate;
}

- (void)layoutSubviews;
- (void)setImageRect:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_retryDownload;
- (void)setRetryDelegate:(id)arg1;
- (void)setToolbarVisible:(_Bool)arg1;
- (void)showErrorIndicator;
- (void)showLoadingIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

