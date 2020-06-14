//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPPowerLog : NSObject
{
    NSMutableDictionary *_eventsByBundleID;
    NSObject<OS_dispatch_source> *_logUpdateTimer;
    NSObject<OS_dispatch_queue> *_logQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // @synthesize logQueue=_logQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *logUpdateTimer; // @synthesize logUpdateTimer=_logUpdateTimer;
@property(retain) NSMutableDictionary *eventsByBundleID; // @synthesize eventsByBundleID=_eventsByBundleID;
- (void).cxx_destruct;
- (void)updatePowerLogs;
- (id)newEventFromEvent:(id)arg1 usingLogEvent:(id)arg2;
- (void)logEvent:(id)arg1 withName:(id)arg2;
- (void)startLogUpdateTimer;
- (void)cancelLogUpdateTimer;
- (id)init;

@end

