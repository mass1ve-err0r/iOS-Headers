//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying>
{
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

- (id)_errorLogArray;
@property(readonly, nonatomic) NSArray *events;
@property(readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
- (id)extendedLogData;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithLogArray:(id)arg1;
- (id)init;
- (id)_common_init;

@end

