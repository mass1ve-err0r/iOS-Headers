//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreHLSAssetInfo, NSURL;

@interface MPStoreHLSAssetInfo : NSObject
{
    ICStoreHLSAssetInfo *_internalInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream;
@property(readonly, copy, nonatomic) NSURL *alternateKeyServerURL;
@property(readonly, copy, nonatomic) NSURL *alternateKeyCertificateURL;
@property(readonly, copy, nonatomic) NSURL *alternatePlaylistURL;
@property(readonly, copy, nonatomic) NSURL *keyServerURL;
@property(readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property(readonly, copy, nonatomic) NSURL *playlistURL;
- (id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg1;

@end

