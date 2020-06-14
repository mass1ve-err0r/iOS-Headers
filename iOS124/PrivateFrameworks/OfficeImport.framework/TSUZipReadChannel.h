//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUReadChannel-Protocol.h>

@class NSString, TSUZipArchive, TSUZipEntry;
@protocol TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipReadChannel : NSObject <TSUReadChannel>
{
    TSUZipEntry *_entry;
    TSUZipArchive *_archive;
    _Bool _validateCRC;
    id <TSUReadChannel> _archiveReadChannel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValid;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)close;
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (_Bool)processData:(id)arg1 CRC:(unsigned int *)arg2 isDone:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long *)arg2;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

