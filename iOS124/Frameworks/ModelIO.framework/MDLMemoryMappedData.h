//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDLMemoryMappedData : NSObject
{
    struct __sFILE *_file;
    char *_mappedAddr;
    char *_fileStart;
    long long _mappedFileSize;
    long long _length;
}

- (id)dataNoCopy;
- (void)dealloc;
- (id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;

@end

