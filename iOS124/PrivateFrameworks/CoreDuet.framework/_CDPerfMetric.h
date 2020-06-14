//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, _CDPerfMetricFamily;

@interface _CDPerfMetric : NSObject
{
    NSDictionary *_dictionary;
    NSString *_name;
    NSString *_string;
    _CDPerfMetricFamily *_family;
}

+ (id)perfMetricForFetchRequest:(id)arg1 type:(id)arg2;
@property(readonly) __weak _CDPerfMetricFamily *family; // @synthesize family=_family;
@property(readonly) NSString *string; // @synthesize string=_string;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)elapsedTimeHistogram;
@property(readonly) unsigned long long errorCount;
@property(readonly) unsigned long long lastResultCount;
@property(readonly) NSDate *lastUpdate;
@property(readonly) double averageElapsedTime;
@property(readonly) double maximumElapsedTime;
@property(readonly) double minimumElapsedTime;
@property(readonly) double lastElapsedTime;
@property(readonly) unsigned long long count;
- (id)_stringWithIndex:(unsigned long long)arg1;
- (id)_histogramWithIndex:(unsigned long long)arg1;
- (unsigned long long)_unsignedIntegerCounterWithIndex:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 dictionary:(id)arg4;

@end

