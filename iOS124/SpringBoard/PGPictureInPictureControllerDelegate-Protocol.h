//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PGPictureInPictureController, PGPictureInPictureViewController;

@protocol PGPictureInPictureControllerDelegate <NSObject>

@optional
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 didHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 willHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 willDestroyPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureController:(PGPictureInPictureController *)arg1 didCreatePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
@end
