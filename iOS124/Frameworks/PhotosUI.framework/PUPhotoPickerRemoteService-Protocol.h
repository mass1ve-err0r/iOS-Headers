//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoPickerSelectionService-Protocol.h>
#import <PhotosUI/PUPhotoPickerTestSupportHandler-Protocol.h>

@class NSData;

@protocol PUPhotoPickerRemoteService <PUPhotoPickerSelectionService, PUPhotoPickerTestSupportHandler>
- (void)performTraitCollectionUpdateUsingData:(NSData *)arg1 completion:(void (^)(NSNumber *))arg2;
- (void)invalidatePhotoPickerRemoteServices;
@end
