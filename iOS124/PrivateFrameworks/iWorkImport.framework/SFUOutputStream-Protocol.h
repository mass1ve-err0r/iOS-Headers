//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/SFUSimpleOutputStream-Protocol.h>

@protocol SFUInputStream, SFUOutputStream;

@protocol SFUOutputStream <SFUSimpleOutputStream>
- (id <SFUOutputStream>)closeLocalStream;
- (void)close;
- (id <SFUInputStream>)inputStream;
- (_Bool)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canSeek;
@end

