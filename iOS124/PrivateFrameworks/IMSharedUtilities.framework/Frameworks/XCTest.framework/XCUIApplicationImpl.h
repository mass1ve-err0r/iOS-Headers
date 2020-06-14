//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCAccessibilityElement, XCUIApplicationProcess;
@protocol XCUIDevice;

@interface XCUIApplicationImpl : NSObject
{
    _Bool _codeCoverageEnabled;
    _Bool _hasValidAlertCount;
    NSString *_path;
    NSString *_bundleID;
    XCUIApplicationProcess *_currentProcess;
    id <XCUIDevice> _device;
}

+ (_Bool)shouldWaitForAutomationSessionWhenUsingPlatformLauncher:(_Bool)arg1;
+ (id)keyPathsForValuesAffectingActivated;
+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingSuspended;
+ (id)keyPathsForValuesAffectingRunning;
+ (id)keyPathsForValuesAffectingState;
+ (id)keyPathsForValuesAffectingHasCurrentProcess;
@property _Bool hasValidAlertCount; // @synthesize hasValidAlertCount=_hasValidAlertCount;
@property _Bool codeCoverageEnabled; // @synthesize codeCoverageEnabled=_codeCoverageEnabled;
@property(readonly) id <XCUIDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) XCUIApplicationProcess *currentProcess; // @synthesize currentProcess=_currentProcess;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (_Bool)waitForViewControllerViewDidDisappearWithTimeout:(double)arg1 error:(id *)arg2;
- (void)handleCrashUnderSymbol:(id)arg1;
- (void)terminate;
- (void)_waitOnActivationExpectation:(id)arg1;
- (id)_activationExpectation;
- (void)waitForAccessibilityActive;
- (void)_waitForValidPID;
- (void)_launchUsingPlatformWithArguments:(id)arg1 environment:(id)arg2;
- (void)_launchUsingXcodeWithArguments:(id)arg1 environment:(id)arg2;
- (void)_waitForLaunchProgressWithToken:(id)arg1;
- (void)_launchWithRequest:(id)arg1;
- (void)_activateForPlatform;
- (void)_activate;
- (void)serviceOpenRequest:(id)arg1;
@property(readonly) _Bool activated;
@property(readonly) _Bool foreground;
@property(readonly) _Bool background;
@property(readonly) _Bool suspended;
@property(readonly) _Bool running;
- (void)_awaitValidCurrentProcess;
- (void)resetAlertCount;
@property(readonly) unsigned long long alertCount;
- (_Bool)waitForState:(unsigned long long)arg1 timeout:(double)arg2;
@property(nonatomic) unsigned long long state;
@property(nonatomic) int processID;
@property(readonly) int bridgedProcessID;
@property(readonly) XCAccessibilityElement *bridgedProcessAccessibilityElement;
@property(readonly) XCAccessibilityElement *accessibilityElement;
- (_Bool)hasCurrentProcess;
- (id)description;
- (id)initWithPath:(id)arg1 bundleID:(id)arg2;
- (id)initWithPath:(id)arg1 bundleID:(id)arg2 device:(id)arg3;

@end

