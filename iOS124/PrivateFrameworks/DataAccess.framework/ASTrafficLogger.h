//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface ASTrafficLogger : NSObject
{
    NSFileHandle *_lookasideFileHandle;
    NSString *_lookasideFilePath;
    _Bool _isOutgoingTraffic;
    _Bool _didFlushLogs;
}

+ (id)_logQueue;
@property(nonatomic) _Bool isOutgoingTraffic; // @synthesize isOutgoingTraffic=_isOutgoingTraffic;
- (void).cxx_destruct;
- (void)logPlainTextData:(id)arg1;
- (void)logWBXMLData:(id)arg1;
- (void)dealloc;
- (void)flushLogs;
- (void)_moveLogFileContentsAtPath:(id)arg1;
- (void)_openLookasideFile;

@end

