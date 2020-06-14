//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@class NSFileHandle;

@interface PBRemotePasteboardItemProviderInputStream : NSInputStream
{
    NSFileHandle *_fileHandle;
    int _fd;
}

+ (id)inputStreamWithFileHandle:(id)arg1;
- (void).cxx_destruct;
- (_Bool)hasBytesAvailable;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)initWithFileHandle:(id)arg1;

@end

