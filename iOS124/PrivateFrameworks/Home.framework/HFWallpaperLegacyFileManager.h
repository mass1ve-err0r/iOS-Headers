//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface HFWallpaperLegacyFileManager : NSObject
{
    NSURL *_wallpaperFolderURL;
}

@property(retain, nonatomic) NSURL *wallpaperFolderURL; // @synthesize wallpaperFolderURL=_wallpaperFolderURL;
- (void).cxx_destruct;
- (id)filenameForType:(long long)arg1 variant:(long long)arg2;
- (id)clearAllWallpapers;
- (void)migrateCache:(CDUnknownBlockType)arg1;
- (id)init;

@end

