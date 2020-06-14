//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadDataConsumer.h"

@class NSArray, NSString;

@interface FilesystemDownloadDataConsumer : DownloadDataConsumer
{
    long long _bytesWritten;
    int _fd;
    _Bool _hasConsumedData;
    NSArray *_hashes;
    struct CC_MD5state_st _md5Context;
    long long _numberOfBytesToHash;
    NSString *_path;
    unsigned long long _resumptionOffset;
    long long _verifiedBytes;
}

- (unsigned long long)resumptionOffset;
- (_Bool)hasConsumedData;
- (void).cxx_destruct;
- (void)_truncateToSize:(long long)arg1;
- (_Bool)_openFile;
- (_Bool)_hashAndWriteData:(id)arg1 error:(id *)arg2;
- (_Bool)_checkHashForByteCount:(long long)arg1;
- (void)truncate;
- (void)suspend;
- (void)reset;
- (_Bool)finish:(id *)arg1;
- (unsigned long long)diskUsage;
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1 MD5Hashes:(id)arg2 numberOfBytesToHash:(long long)arg3;

@end

