//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVURLAsset.h>

#import <AVFoundation/AVFragmentMinding-Protocol.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding>
{
    AVFragmentedAssetInternal *_fragmentedAsset;
}

+ (id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
@property(readonly, nonatomic, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (id)trackWithTrackID:(int)arg1;
@property(readonly, nonatomic) NSArray *tracks;
- (Class)_classForAssetTracks;
- (_Bool)_mindsFragments;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end

