//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VUIPerfMetricsAppLaunchController : NSObject
{
    NSDictionary *_appLaunchData;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *appLaunchData; // @synthesize appLaunchData=_appLaunchData;
- (void).cxx_destruct;
- (void)_setAppLaunchFieldWithData:(id)arg1;
- (void)recordAppLaunchEventWithEventType:(id)arg1;
- (id)init;

@end

