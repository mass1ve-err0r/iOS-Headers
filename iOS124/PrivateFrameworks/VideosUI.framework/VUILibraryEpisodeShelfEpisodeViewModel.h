//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIMediaItem;
@protocol VUIMediaEntityAssetController;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeShelfEpisodeViewModel : NSObject
{
    VUIMediaItem *_episode;
    NSObject<VUIMediaEntityAssetController> *_assetController;
}

@property(retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController; // @synthesize assetController=_assetController;
@property(retain, nonatomic) VUIMediaItem *episode; // @synthesize episode=_episode;
- (void).cxx_destruct;

@end

