//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOutputStream;

__attribute__((visibility("hidden")))
@interface _GSUJSONWriter : NSObject
{
    NSOutputStream *outputStream;
    int kind;
    char *dataBuffer;
    unsigned long long dataBufferLen;
    unsigned long long dataLen;
    _Bool freeDataBuffer;
    char *tempBuffer;
    unsigned long long tempBufferLen;
    long long totalDataWritten;
}

- (long long)appendString:(id)arg1 range:(struct _NSRange)arg2;
- (void)resizeTemporaryBuffer:(unsigned long long)arg1;
- (long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;

@end

