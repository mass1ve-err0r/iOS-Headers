//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NADAppSerializer, NSFileManager, NSURL;

@interface NADEntityStore : NSObject
{
    CDUnknownBlockType _identifierBlock;
    NADAppSerializer *_serializer;
    NSFileManager *_fileManager;
    NSURL *_directory;
}

@property(readonly, nonatomic) NSURL *directory; // @synthesize directory=_directory;
- (void).cxx_destruct;
- (id)directoryForEntity:(id)arg1;
- (void)_createDirectoryIfNeeded;
- (void)clearStore;
- (void)removeEntity:(id)arg1;
- (void)addEntity:(id)arg1;
- (id)allEntities;
- (id)initWithDirectory:(id)arg1 serializer:(id)arg2 identifierBlock:(CDUnknownBlockType)arg3;

@end

