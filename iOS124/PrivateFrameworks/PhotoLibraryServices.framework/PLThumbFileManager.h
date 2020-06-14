//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLThumbPersistenceManager-Protocol.h>

@class NSString;

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager>
{
    _Bool _readOnly;
    int _shortSideLengthInPixels;
    NSString *_path;
    NSString *_filename;
}

+ (void)deleteAllEntriesWithIdentifier:(id)arg1 basePath:(id)arg2;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)_debugDescription;
- (_Bool)validateData:(id)arg1 withToken:(id)arg2;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (_Bool)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (_Bool)usesThumbIdentifiers;
@property(readonly, nonatomic) _Bool isReadOnly;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithBaseDirectory:(id)arg1 filename:(id)arg2 shortSideLengthInPixels:(int)arg3 readOnly:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

