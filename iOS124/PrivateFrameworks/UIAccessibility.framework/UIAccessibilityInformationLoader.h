//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject
{
    NSTimer *_coalesceTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setNeedsLoadAccessibilityInformationOnMainThread;
- (void)_coalesceTimerFired:(id)arg1;
- (void)_loadAccessibilityInformationOnMainThread:(_Bool)arg1;
- (void)setNeedsLoadAccessibilityInformation;
- (void)loadAccessibilityInformation;
- (id)_init;

@end

