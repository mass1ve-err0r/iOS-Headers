//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUOutputStream-Protocol.h>

@class NSString;
@protocol SFUOutputStream;

@interface SFUOffsetOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mOutputStream;
    long long mInitialOffset;
}

- (id)closeLocalStream;
- (void)close;
- (id)inputStream;
- (_Bool)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

