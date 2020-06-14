//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPDatabase, TSPDistributableArchiveOutputStream, TSPDistributableFileManager;

__attribute__((visibility("hidden")))
@interface TSPDistributableWriter : NSObject
{
    TSPDistributableArchiveOutputStream *_outputStream;
    set_713dd2e1 *_encodedIds;
    struct set<int, std::__1::less<int>, std::__1::allocator<int>> *_typesSeen;
    _Atomic _Bool _isCancelled;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    unsigned long long _processedEntriesCount;
}

- (void).cxx_destruct;
- (_Bool)goAndReportProgress:(_Bool)arg1 error:(id *)arg2 context:(id)arg3;
- (void)cancel;
- (void)dealloc;
- (id)initWithTangierPath:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned int)arg4;
- (_Bool)_processEntry:(id)arg1 tocEntries:(id)arg2 progressContext:(id)arg3 error:(id *)arg4;
- (id)_initWithDatabase:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned int)arg4 includeToc:(_Bool)arg5;

@end

