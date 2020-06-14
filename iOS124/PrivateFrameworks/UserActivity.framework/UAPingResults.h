//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserActivity/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface UAPingResults : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_devices;
    NSMutableDictionary *_errorsMap;
    NSMutableDictionary *_resultsMap;
    double _pingAvg;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedFormatter;
@property double pingAvg; // @synthesize pingAvg=_pingAvg;
@property(retain) NSMutableDictionary *resultsMap; // @synthesize resultsMap=_resultsMap;
@property(retain) NSMutableDictionary *errorsMap; // @synthesize errorsMap=_errorsMap;
@property(retain) NSMutableDictionary *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (id)statusStringForResultStatus:(long long)arg1;
- (id)toDictionary;
- (void)updatePingAverageWithInterval:(double)arg1;
- (double)averagePingTime;
- (void)addKeysForDevice:(id)arg1;
- (void)incrementResultForStatus:(long long)arg1 andDevice:(id)arg2;
- (void)clear;
- (void)updateDevice:(id)arg1 withError:(id)arg2;
- (void)updateDevice:(id)arg1 withStatus:(long long)arg2;
- (void)addDevice:(id)arg1;
- (id)errors;
- (id)resultCountsForDevice:(id)arg1;
- (id)dateDeviceLastSeen:(id)arg1;
- (long long)statusForDevice:(id)arg1;
- (id)seenDevices;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

