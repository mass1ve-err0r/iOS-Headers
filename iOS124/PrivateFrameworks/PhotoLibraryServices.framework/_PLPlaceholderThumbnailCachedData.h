//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface _PLPlaceholderThumbnailCachedData : NSObject
{
    NSData *_imageData;
    int _width;
    int _height;
    int _bytesPerRow;
    int _dataWidth;
    int _dataHeight;
    int _imageDataOffset;
}

- (void)dealloc;
- (id)imageDataWithWidth:(int *)arg1 height:(int *)arg2 bytesPerRow:(int *)arg3 dataWidth:(int *)arg4 dataHeight:(int *)arg5 imageDataOffset:(int *)arg6;
- (id)initWithImageData:(id)arg1 width:(int)arg2 height:(int)arg3 bytesPerRow:(int)arg4 dataWidth:(int)arg5 dataHeight:(int)arg6 imageDataOffset:(int)arg7;

@end

