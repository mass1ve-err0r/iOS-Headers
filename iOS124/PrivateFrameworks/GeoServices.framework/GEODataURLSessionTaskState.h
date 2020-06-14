//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOCapturedState.h>

@class GEONSURLSessionTaskState;

@interface GEODataURLSessionTaskState : GEOCapturedState
{
    long long _rawPointer;
    unsigned int _taskIdentifier;
    GEONSURLSessionTaskState *_backingTask;
    unsigned int _cachedDataLength;
    unsigned int _receivedDataLength;
    double _now;
    double _startTime;
    double _endTime;
    _Bool _backingTaskNeedsResume;
    int _requestKind;
}

+ (const char *)decoderType;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

