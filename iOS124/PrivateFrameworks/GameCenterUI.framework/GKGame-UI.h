//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKGame.h>

@interface GKGame (UI)
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (struct CGSize)serverImageSizeForIconStyle:(long long)arg1;
- (id)logoImageWithMaximumSize:(struct CGSize)arg1;
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)loadIconForSize:(struct CGSize)arg1 scale:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_imageSourceForIconSize:(struct CGSize)arg1;
- (id)URLStringForImageWithShineIfNeeded;
- (id)cachedIconForStyle:(long long)arg1;
- (id)iconForStyle:(long long)arg1;
- (id)imageSourceForIconStyle:(long long)arg1;
- (id)macBrushForIconStyle:(long long)arg1;
- (id)imageSourceForiOSIconStyle:(long long)arg1;
- (id)_imageURLForIconStyle:(long long)arg1;
@end

