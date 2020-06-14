//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKUIMmapFile, NSData, NSString;

@interface CLKUIAtlasBacking : NSObject
{
    NSData *_data;
    CLKUIMmapFile *_mmapFile;
    NSString *_uuid;
    struct CLKUIAtlasBackingStructure _structure;
}

+ (id)atlasBackingWithBytes:(const void *)arg1 length:(unsigned long long)arg2 mmapFile:(id)arg3 uuid:(id)arg4;
+ (id)atlasBackingWithArt:(id)arg1 uuid:(id)arg2;
+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 mipmap:(_Bool)arg3;
+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2;
@property(readonly, nonatomic) struct CLKUIAtlasBackingStructure structure; // @synthesize structure=_structure;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(nonatomic) unsigned char filter; // @dynamic filter;
@property(nonatomic) unsigned char wrap; // @dynamic wrap;
@property(readonly, nonatomic) _Bool mipmaps;
@property(readonly, nonatomic) unsigned char format; // @dynamic format;
@property(readonly, nonatomic) unsigned long long mipCount;
@property(readonly, nonatomic) unsigned long long bytesPerPixel; // @dynamic bytesPerPixel;
@property(readonly, nonatomic) unsigned long long planeLength; // @dynamic planeLength;
@property(readonly, nonatomic) unsigned long long planes; // @dynamic planes;
@property(readonly, nonatomic) unsigned long long height; // @dynamic height;
@property(readonly, nonatomic) unsigned long long width; // @dynamic width;
@property(readonly, nonatomic) unsigned long long length; // @dynamic length;
@property(readonly, nonatomic) const void *bytes; // @dynamic bytes;
- (_Bool)writeToFile:(id)arg1 error:(id *)arg2;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 mmapFile:(id)arg3;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure)arg2 data:(id)arg3;

@end

