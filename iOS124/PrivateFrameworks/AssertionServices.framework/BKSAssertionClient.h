//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSAssertionClientMultiplexer, BKSProcessAssertionClient, BKSTerminationAssertionClient;

__attribute__((visibility("hidden")))
@interface BKSAssertionClient : NSObject
{
    BKSAssertionClientMultiplexer *_multiplexer;
    BKSProcessAssertionClient *_processAssertionClient;
    BKSTerminationAssertionClient *_terminationAssertionClient;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BKSAssertionClientMultiplexer *multiplexer;
@property(readonly, nonatomic) BKSTerminationAssertionClient *terminationAssertionClient;
@property(readonly, nonatomic) BKSProcessAssertionClient *processAssertionClient;
- (void)dealloc;
- (id)init;

@end

