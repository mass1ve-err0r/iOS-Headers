//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveEventTracker/NSObject-Protocol.h>

@class NSString, PETStringPairs;

@protocol PETLoggingOutlet <NSObject>
- (void)logErrorForEvent:(NSString *)arg1 featureId:(NSString *)arg2 reason:(NSString *)arg3;
- (void)logDoubleValue:(double)arg1 forEvent:(NSString *)arg2 featureId:(NSString *)arg3 stringifiedProperties:(PETStringPairs *)arg4 metaData:(PETStringPairs *)arg5;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(NSString *)arg2 featureId:(NSString *)arg3 stringifiedProperties:(PETStringPairs *)arg4 metaData:(PETStringPairs *)arg5;
- (void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(NSString *)arg2 featureId:(NSString *)arg3 stringifiedProperties:(PETStringPairs *)arg4 metaData:(PETStringPairs *)arg5;
@end

