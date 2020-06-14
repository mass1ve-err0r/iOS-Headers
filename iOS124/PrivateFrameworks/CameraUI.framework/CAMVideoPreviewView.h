//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer;

@interface CAMVideoPreviewView : UIView
{
    _Bool _square;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    UIView *_previewLayerView;
    long long _previewViewAspectMode;
}

@property(nonatomic, getter=isSquare) _Bool square; // @synthesize square=_square;
@property(nonatomic) long long previewViewAspectMode; // @synthesize previewViewAspectMode=_previewViewAspectMode;
@property(readonly, nonatomic) UIView *previewLayerView; // @synthesize previewLayerView=_previewLayerView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)_frameForSubviewsAccountForSquare:(_Bool)arg1;
- (void)_updateAspectModeForSublayers;
- (void)setSquare:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

