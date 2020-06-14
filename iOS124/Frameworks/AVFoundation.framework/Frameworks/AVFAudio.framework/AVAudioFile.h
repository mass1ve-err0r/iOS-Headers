//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioFormat, NSURL;

@interface AVAudioFile : NSObject
{
    void *_impl;
}

@property(readonly, nonatomic) NSURL *url;
@property(nonatomic) long long framePosition;
@property(readonly, nonatomic) long long length;
@property(readonly, nonatomic) AVAudioFormat *processingFormat;
@property(readonly, nonatomic) AVAudioFormat *fileFormat;
- (_Bool)readIntoBuffer:(id)arg1 frameCount:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)writeFromBuffer:(id)arg1 error:(id *)arg2;
- (_Bool)readIntoBuffer:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id *)arg3;
- (id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned long long)arg3 interleaved:(_Bool)arg4 error:(id *)arg5;
- (id)initForWriting:(id)arg1 settings:(id)arg2 error:(id *)arg3;
- (id)initForReading:(id)arg1 commonFormat:(unsigned long long)arg2 interleaved:(_Bool)arg3 error:(id *)arg4;
- (id)initForReading:(id)arg1 error:(id *)arg2;

@end

