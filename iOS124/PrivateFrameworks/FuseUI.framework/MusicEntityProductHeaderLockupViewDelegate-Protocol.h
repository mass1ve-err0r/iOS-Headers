//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicEntityProductHeaderLockupView, UIButton;

@protocol MusicEntityProductHeaderLockupViewDelegate <NSObject>

@optional
- (void)productHeaderLockupViewTintColorDidChange:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidUpdateEditableText:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectShareButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectLikeDislikeButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectRefreshButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectEditButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectDownloadProgressButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupView:(MusicEntityProductHeaderLockupView *)arg1 didSelectCameraButton:(UIButton *)arg2;
- (void)productHeaderLockupViewDidSelectAddSongsButton:(MusicEntityProductHeaderLockupView *)arg1;
@end

