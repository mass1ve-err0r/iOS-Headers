//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSString, PUPhotoStreamComposeServiceViewController;

@protocol PUPhotoStreamComposeServiceDelegate <NSObject>
- (void)photoStreamComposeServiceDidCancel:(PUPhotoStreamComposeServiceViewController *)arg1;
- (void)photoStreamComposeService:(PUPhotoStreamComposeServiceViewController *)arg1 didPostComment:(NSString *)arg2;
@end

