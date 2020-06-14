//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PUImportPowerController : NSObject
{
    _Bool _backgrounded;
    int _assertionIdentifierGenerator;
    unsigned int _assertionID;
    NSMutableDictionary *_assertionReasonsByIdentifier;
    NSObject<OS_dispatch_queue> *_powerControllerQueue;
    unsigned long long _backgroundTaskIdentifier;
    double _powerAssertionStartTime;
}

+ (id)sharedController;
@property(nonatomic, getter=isBackgrounded) _Bool backgrounded; // @synthesize backgrounded=_backgrounded;
@property(nonatomic) double powerAssertionStartTime; // @synthesize powerAssertionStartTime=_powerAssertionStartTime;
@property(nonatomic) unsigned int assertionID; // @synthesize assertionID=_assertionID;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *powerControllerQueue; // @synthesize powerControllerQueue=_powerControllerQueue;
@property(readonly, nonatomic) NSMutableDictionary *assertionReasonsByIdentifier; // @synthesize assertionReasonsByIdentifier=_assertionReasonsByIdentifier;
@property(readonly, nonatomic) int assertionIdentifierGenerator; // @synthesize assertionIdentifierGenerator=_assertionIdentifierGenerator;
- (void).cxx_destruct;
- (void)startBackgroundTaskIfNeeded;
- (void)endBackgroundTaskIfNeeded;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
@property(readonly, nonatomic) _Bool hasPowerAssertion;
- (void)releasePowerAssertion;
- (void)takePowerAssertion;
- (void)releasePowerAssertionIfNeeded;
- (void)takePowerAssertionIfNeeded;
- (void)removePowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)addPowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (unsigned int)generateAssertionIdentifier;
- (id)description;
- (void)dealloc;
- (id)init;

@end

