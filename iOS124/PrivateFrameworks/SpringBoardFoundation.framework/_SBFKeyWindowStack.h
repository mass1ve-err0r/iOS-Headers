//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>

@class NSMutableOrderedSet, NSString, SBFWindow;

@interface _SBFKeyWindowStack : NSObject <BSDescriptionProviding>
{
    SBFWindow *_expectedKeyWindow;
    NSMutableOrderedSet *_windowStack;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_keyWindowDidChangeNotification:(id)arg1;
- (_Bool)_isWindowEligibleForKeyness:(id)arg1;
- (id)_evaluateForNewKeyWindowWithReason:(id)arg1;
- (void)noteWindowUnhidden:(id)arg1;
- (void)noteWindowHidden:(id)arg1;
- (void)noteWindowDeallocated:(id)arg1;
- (void)popKeyWindow:(id)arg1 reason:(id)arg2;
- (void)popKeyWindow:(id)arg1;
- (_Bool)pushKeyWindow:(id)arg1;
- (id)expectedKeyWindow;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

