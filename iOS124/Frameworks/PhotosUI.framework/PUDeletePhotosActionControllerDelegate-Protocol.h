//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUDeletePhotosActionController, UIViewController;

@protocol PUDeletePhotosActionControllerDelegate <NSObject>
- (void)deletePhotosActionController:(PUDeletePhotosActionController *)arg1 presentConfirmationViewController:(UIViewController *)arg2;

@optional
- (long long)preferredAlertControllerStyleForDeletePhotosActionController:(PUDeletePhotosActionController *)arg1;
@end

