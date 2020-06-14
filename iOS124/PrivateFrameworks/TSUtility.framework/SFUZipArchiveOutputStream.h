//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUSimpleOutputStream-Protocol.h>

@class NSData, NSMutableArray, NSString, SFUCryptoKey, SFUMoveableFileOutputStream, SFUZipFreeSpaceEntry, SFUZipOutputEntry;
@protocol SFUOutputStream;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream>
{
    SFUMoveableFileOutputStream *mOutputStream;
    SFUCryptoKey *mCryptoKey;
    NSData *mPassphraseHint;
    NSData *mEncryptedDocumentUuid;
    NSMutableArray *mEntries;
    SFUZipOutputEntry *mCurrentEntry;
    SFUZipOutputEntry *mLastEntryInFile;
    id <SFUOutputStream> mEntryOutputStream;
    char *mBuffer;
    NSMutableArray *mFreeList;
    SFUZipFreeSpaceEntry *mCurrentFreeSpace;
    unsigned long long mFreeBytes;
}

+ (unsigned long long)approximateBytesForEntryHeaderWithName:(id)arg1;
- (unsigned int)crc32ForEntry:(id)arg1;
- (void)reset;
- (unsigned long long)freeBytes;
- (void)flush;
- (id)entriesAtPath:(id)arg1;
- (id)entryNames;
- (void)moveToPath:(id)arg1;
- (void)close;
- (void)setEncryptedDocumentUuid:(id)arg1;
- (void)removeEntryWithName:(id)arg1;
- (_Bool)canRemoveEntryWithName:(id)arg1;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)setCrc32ForCurrentEntry:(unsigned int)arg1;
- (id)beginUncompressedUnknownSizeEntryWithName:(id)arg1;
- (void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(_Bool)arg2;
- (void)beginEntryWithName:(id)arg1 isCompressed:(_Bool)arg2 uncompressedSize:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (id)initWithPath:(id)arg1;
- (id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg1;
- (void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(_Bool)arg2;
- (unsigned long long)writeLocalFileHeaderForEntry:(id)arg1;
- (void)coalesceAndTruncateFreeSpace;
- (void)finishEntry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

