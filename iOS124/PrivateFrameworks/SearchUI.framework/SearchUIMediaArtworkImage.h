//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIMediaArtworkImage : SearchUIImage
{
    NSString *_persistentID;
    NSString *_spotlightIdentifier;
    long long _mediaEntityType;
}

@property long long mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(retain) NSString *spotlightIdentifier; // @synthesize spotlightIdentifier=_spotlightIdentifier;
@property(retain) NSString *persistentID; // @synthesize persistentID=_persistentID;
- (void).cxx_destruct;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (Class)classForCoder;
- (id)initWithSpotlightIdentifier:(id)arg1;
- (id)initWithSFImage:(id)arg1;

@end

