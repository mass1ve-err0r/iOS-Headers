//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ODROperation.h"

@class NSURL, ODRAssetPackManifest;

@interface ODRManifestDownloadOperation : ODROperation
{
    NSURL *_URL;
    ODRAssetPackManifest *_manifest;
}

@property(retain, nonatomic) ODRAssetPackManifest *manifest; // @synthesize manifest=_manifest;
- (void).cxx_destruct;
- (_Bool)run;
- (id)initWithURL:(id)arg1;

@end

