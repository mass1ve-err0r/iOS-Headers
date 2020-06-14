//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject
{
    NSMutableDictionary *_photoLibrariesByPath;
}

@property(retain) NSMutableDictionary *photoLibrariesByPath; // @synthesize photoLibrariesByPath=_photoLibrariesByPath;
- (void).cxx_destruct;
- (void)enumeratePhotoLibrariesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllPhotoLibraries;
- (void)removePhotoLibraryAtURL:(id)arg1;
- (void)addPhotoLibraryAtURL:(id)arg1;
- (void)saveToPersistentStorage;
@property(readonly) unsigned long long count;
- (id)init;

@end

