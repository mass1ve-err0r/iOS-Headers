//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet;

@interface PHImportTimerCollection : NSObject
{
    unsigned char _mediaType;
    unsigned long long _fileSize;
    NSMutableArray *_timers;
    NSMutableIndexSet *_runningTimers;
    unsigned char _aspectRatio;
}

@property unsigned char aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void).cxx_destruct;
- (double)duration:(unsigned char)arg1;
- (void)processTimesOfType:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)stopTiming:(id)arg1;
- (id)startTiming:(unsigned char)arg1 subtype:(unsigned char)arg2;
- (id)description;
- (id)initForMediaType:(unsigned char)arg1 fileSize:(unsigned long long)arg2;

@end

