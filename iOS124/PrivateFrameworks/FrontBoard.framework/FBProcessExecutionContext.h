//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/NSCopying-Protocol.h>
#import <FrontBoard/NSMutableCopying-Protocol.h>

@class NSArray, NSDictionary, NSURL;
@protocol FBProcessWatchdogProviding;

@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying>
{
    NSArray *_arguments;
    NSDictionary *_environment;
    NSURL *_standardOutputURL;
    NSURL *_standardErrorURL;
    _Bool _waitForDebugger;
    _Bool _disableASLR;
    _Bool _checkForLeaks;
    long long _launchIntent;
    unsigned int _launchAssertionFlags;
    id <FBProcessWatchdogProviding> _watchdogProvider;
    double _watchdogExtension;
    double _watchdogScaleFactor;
}

@property(nonatomic) double watchdogScaleFactor; // @synthesize watchdogScaleFactor=_watchdogScaleFactor;
@property(nonatomic) double watchdogExtension; // @synthesize watchdogExtension=_watchdogExtension;
@property(retain, nonatomic) id <FBProcessWatchdogProviding> watchdogProvider; // @synthesize watchdogProvider=_watchdogProvider;
@property(nonatomic) unsigned int launchAssertionFlags; // @synthesize launchAssertionFlags=_launchAssertionFlags;
@property(nonatomic) long long launchIntent; // @synthesize launchIntent=_launchIntent;
@property(nonatomic) _Bool checkForLeaks; // @synthesize checkForLeaks=_checkForLeaks;
@property(nonatomic) _Bool disableASLR; // @synthesize disableASLR=_disableASLR;
@property(nonatomic) _Bool waitForDebugger; // @synthesize waitForDebugger=_waitForDebugger;
@property(retain, nonatomic) NSURL *standardErrorURL; // @synthesize standardErrorURL=_standardErrorURL;
@property(retain, nonatomic) NSURL *standardOutputURL; // @synthesize standardOutputURL=_standardOutputURL;
@property(copy, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)_launchAssertionFlags;
- (id)_initWithExecutionContext:(id)arg1;
- (id)init;

@end

