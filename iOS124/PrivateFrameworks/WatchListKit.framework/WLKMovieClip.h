//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WLKMovieClipAsset, WLKMovieClipPreviewArtwork;

@interface WLKMovieClip : NSObject
{
    NSString *_title;
    WLKMovieClipPreviewArtwork *_previewArtwork;
    NSArray *_assets;
}

+ (id)movieClipsWithArray:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) WLKMovieClipPreviewArtwork *previewArtwork; // @synthesize previewArtwork=_previewArtwork;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)_supportHD;
@property(readonly, nonatomic) WLKMovieClipAsset *preferredAsset;
- (id)init;
- (id)_init;
- (id)initWithDictionary:(id)arg1;

@end

