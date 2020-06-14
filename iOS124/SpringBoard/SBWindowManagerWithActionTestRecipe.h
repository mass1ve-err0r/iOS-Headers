//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class BKSProcessAssertion, FBApplicationUpdateScenesTransaction, NSString;

@interface SBWindowManagerWithActionTestRecipe : NSObject <SBTestRecipe>
{
    BKSProcessAssertion *_assertion;
    FBApplicationUpdateScenesTransaction *_currentTransaction;
}

+ (id)title;
@property(retain, nonatomic) FBApplicationUpdateScenesTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)takeProcessAssertionWithSequenceNumber:(int)arg1;
- (void)invalidateProcessAssertion;
- (void)handleVolumeIncrease;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

