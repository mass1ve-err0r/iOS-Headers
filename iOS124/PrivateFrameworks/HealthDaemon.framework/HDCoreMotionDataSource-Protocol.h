//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@protocol HDCoreMotionDatum;

@protocol HDCoreMotionDataSource <NSObject>
- (void)hd_stopStreaming;
- (void)hd_beginStreamingFromDatum:(id <HDCoreMotionDatum>)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

