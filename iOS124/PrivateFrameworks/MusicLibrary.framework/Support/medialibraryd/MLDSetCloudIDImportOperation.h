//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MLDImportOperation.h"

@class NSArray;

@interface MLDSetCloudIDImportOperation : MLDImportOperation
{
    NSArray *_trackInfo;
    NSArray *_playlistInfo;
}

- (void).cxx_destruct;
- (_Bool)_importPlaylistsUsingImportSession:(struct ML3ImportSession *)arg1;
- (_Bool)_importTracksUsingImportSession:(struct ML3ImportSession *)arg1;
- (_Bool)_performImportWithTransaction:(id)arg1;
- (void)main;
- (unsigned long long)importSource;

@end

