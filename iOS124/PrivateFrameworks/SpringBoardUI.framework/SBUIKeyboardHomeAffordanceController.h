//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/MTLumaDodgePillBackgroundLuminanceObserver-Protocol.h>

@class MTLumaDodgePillView, NSHashTable, NSString, SBUIKeyboardHomeAffordanceAssertion;

@interface SBUIKeyboardHomeAffordanceController : NSObject <MTLumaDodgePillBackgroundLuminanceObserver>
{
    NSHashTable *_assertions;
    SBUIKeyboardHomeAffordanceAssertion *_topMostAssertion;
    MTLumaDodgePillView *_pillView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) MTLumaDodgePillView *pillView; // @synthesize pillView=_pillView;
@property(nonatomic) __weak SBUIKeyboardHomeAffordanceAssertion *topMostAssertion; // @synthesize topMostAssertion=_topMostAssertion;
@property(retain, nonatomic) NSHashTable *assertions; // @synthesize assertions=_assertions;
- (void).cxx_destruct;
- (void)updateFrameForHomeAffordanceWithAdditionalMargin:(double)arg1;
- (void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg1;
- (void)createHomeAffordanceIfNecessary;
- (id)pillContainingView;
- (void)updateHomeAffordanceMargin;
- (void)updateTopMostAssertion;
- (void)unregisterAssertion:(id)arg1;
- (void)registerAssertion:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

