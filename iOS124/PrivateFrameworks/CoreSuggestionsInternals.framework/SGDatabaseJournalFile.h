//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGDatabaseJournalFile : NSObject
{
    NSString *_path;
    unsigned long long _len;
    int _fd;
    _Bool _written;
    _Bool _dead;
}

- (void).cxx_destruct;
- (id)description;
- (void)unlink;
- (void)clear;
- (id)read;
- (void)write:(id)arg1;
- (void)dealloc;
- (void)destroyAndUnlinkIfEmpty;
- (void)destroy;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

