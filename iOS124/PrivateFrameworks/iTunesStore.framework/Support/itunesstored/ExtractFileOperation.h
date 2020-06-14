//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString;

@interface ExtractFileOperation : ISOperation
{
    long long _activeFileBytesCopied;
    NSString *_activeFilePath;
    NSString *_destinationFilePath;
    NSDictionary *_fileAttributes;
    double _lastSnapshotTime;
    NSString *_sourceFilePath;
    int _sourceFileType;
}

@property int sourceFileType; // @synthesize sourceFileType=_sourceFileType;
@property(retain) NSString *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
@property(copy) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
@property(retain) NSString *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
- (void)_updateProgressWithByteCount:(long long)arg1;
- (_Bool)_performBOMCopy:(id *)arg1;
- (id)_newBOMCopierOptions;
- (void)_initializeProgress;
- (void)_copierUpdatedFileWithPath:(const char *)arg1 size:(long long)arg2;
- (void)_copierStartedFileWithPath:(const char *)arg1 size:(long long)arg2;
- (void)_copierFinishedFileWithPath:(const char *)arg1 size:(long long)arg2;
- (_Bool)_applyFileAttributesToDirectory:(id)arg1 error:(id *)arg2;
- (void)run;
- (void)dealloc;

@end

