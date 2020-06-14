//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/SFUDataRepresentation.h>

#import <TSUtility/SFUZipArchiveDataRepresentation-Protocol.h>

@class NSString, SFUFileDataRepresentation;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation>
{
    SFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)path;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (_Bool)isEncrypted;
- (long long)dataLength;
- (_Bool)isReadable;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

