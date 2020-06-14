//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _OSLogCollectionReference;

__attribute__((visibility("hidden")))
@interface _OSLogChunkFileReference : NSObject
{
    _OSLogCollectionReference *_oslcr;
    char *_path;
    unsigned long long _xot;
    unsigned long long _xet;
}

@property(readonly, nonatomic) unsigned long long xattrEndTime; // @synthesize xattrEndTime=_xet;
@property(readonly, nonatomic) unsigned long long xattrOldestTime; // @synthesize xattrOldestTime=_xot;
@property(readonly, nonatomic) char *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)copyMappedChunkFile:(id *)arg1;
- (_Bool)readXattrForTimespan:(id *)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 subpath:(const char *)arg2;

@end

