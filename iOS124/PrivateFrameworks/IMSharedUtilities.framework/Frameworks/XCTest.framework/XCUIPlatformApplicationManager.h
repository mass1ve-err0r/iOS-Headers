//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCUIApplicationManaging-Protocol.h>

@class NSString;
@protocol XCUIPlatformApplicationServicesProviding;

@interface XCUIPlatformApplicationManager : NSObject <XCUIApplicationManaging>
{
    id <XCUIPlatformApplicationServicesProviding> _platformApplicationServicesProvider;
}

+ (_Bool)_shouldRetryForLaunchError:(id)arg1;
@property(readonly) id <XCUIPlatformApplicationServicesProviding> platformApplicationServicesProvider; // @synthesize platformApplicationServicesProvider=_platformApplicationServicesProvider;
- (void).cxx_destruct;
- (void)launchProcessWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environmentVariables:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithPlatformApplicationServicesProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

