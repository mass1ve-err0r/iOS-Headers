//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWSampleLogData : NSObject
{
    _Bool _pollingClient;
    NSString *_identifier;
    unsigned long long _samplingInterval;
    unsigned long long _cumulativeSamplingTime;
    unsigned long long _samplingStartTime;
}

@property(nonatomic) unsigned long long samplingStartTime; // @synthesize samplingStartTime=_samplingStartTime;
@property(nonatomic) unsigned long long cumulativeSamplingTime; // @synthesize cumulativeSamplingTime=_cumulativeSamplingTime;
@property(nonatomic) _Bool pollingClient; // @synthesize pollingClient=_pollingClient;
@property(nonatomic) unsigned long long samplingInterval; // @synthesize samplingInterval=_samplingInterval;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

