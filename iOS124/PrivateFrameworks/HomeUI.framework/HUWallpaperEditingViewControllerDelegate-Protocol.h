//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFWallpaper, HUWallpaperEditingViewController, UIImage;

@protocol HUWallpaperEditingViewControllerDelegate <NSObject>
- (void)wallpaperEditingDidCancel:(HUWallpaperEditingViewController *)arg1;
- (void)wallpaperEditing:(HUWallpaperEditingViewController *)arg1 didFinishWithWallpaper:(HFWallpaper *)arg2 image:(UIImage *)arg3;
@end

