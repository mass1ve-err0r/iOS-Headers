//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQZEntryInputStream-Protocol.h>

@class NSString;
@protocol GQZEntryInputStream;

__attribute__((visibility("hidden")))
@interface GQZInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s mStream;
    id <GQZEntryInputStream> mInput;
}

- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned long long *)arg2;
- (void)dealloc;
- (id)initWithInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

