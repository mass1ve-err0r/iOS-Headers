//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBProcessExecutionContext.h>

@class NSArray, NSDictionary, NSURL;
@protocol FBProcessWatchdogProviding;

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSArray *arguments; // @dynamic arguments;
@property(nonatomic) _Bool checkForLeaks; // @dynamic checkForLeaks;
@property(nonatomic) _Bool disableASLR; // @dynamic disableASLR;
@property(copy, nonatomic) NSDictionary *environment; // @dynamic environment;
@property(nonatomic) long long launchIntent; // @dynamic launchIntent;
@property(retain, nonatomic) NSURL *standardErrorURL; // @dynamic standardErrorURL;
@property(retain, nonatomic) NSURL *standardOutputURL; // @dynamic standardOutputURL;
@property(nonatomic) _Bool waitForDebugger; // @dynamic waitForDebugger;
@property(nonatomic) double watchdogExtension; // @dynamic watchdogExtension;
@property(retain, nonatomic) id <FBProcessWatchdogProviding> watchdogProvider; // @dynamic watchdogProvider;
@property(nonatomic) double watchdogScaleFactor; // @dynamic watchdogScaleFactor;

@end

