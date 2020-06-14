//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKHeroImageView-Protocol.h>

@class NSString, UIImageView;

@interface PKWatchHeroImageView : UIView <PKHeroImageView>
{
    UIImageView *_watchView;
    UIImageView *_bridgeWallpaperImageView;
}

- (void).cxx_destruct;
- (id)_watchDeviceImage;
- (id)_bridgeWallpaperImage;
- (id)_bridgeHeroImage;
- (struct CGSize)_heroBackgroundImageSize;
- (struct CGSize)_heroWatchImageSize;
- (id)_resizeImage:(id)arg1 toSize:(struct CGSize)arg2;
@property(readonly, nonatomic) _Bool isCompactWatch;
- (struct CGSize)imageSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
