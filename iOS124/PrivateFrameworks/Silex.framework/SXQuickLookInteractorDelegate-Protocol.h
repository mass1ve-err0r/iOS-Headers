//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class UIImage;

@protocol SXQuickLookInteractorDelegate <NSObject>
- (void)failedToLoadThumbnail;
- (void)didLoadThumbnail:(UIImage *)arg1;
@end

