//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPassFrontFaceView.h>

@class UIImageView;

@interface PKPassBoardingPassFrontFaceView : PKPassFrontFaceView
{
    UIImageView *_transitImageView;
    UIImageView *_footerImageView;
}

- (void).cxx_destruct;
- (id)_transitGlyphForTransitType:(long long)arg1;
- (void)layoutSubviews;
- (void)setShowsBarcodeView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)createBodyContentViews;
- (id)templateForLayoutMode:(long long)arg1;

@end

