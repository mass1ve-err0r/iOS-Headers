//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PLCloudSharedAlbum, PLCloudSharedComment, PLManagedAsset;

@protocol PXCloudFeedNavigating <NSObject>
- (_Bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(PLCloudSharedAlbum *)arg1;
- (_Bool)cloudFeedCommentIsAvailableForNavigation:(PLCloudSharedComment *)arg1;
- (_Bool)cloudFeedAssetIsAvailableForNavigation:(PLManagedAsset *)arg1;
@end

