//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

#import <UIKitCore/UIPressesEventTerminalRegistration-Protocol.h>

@class NSArray, NSString, UIPressesEvent;

@interface UIHBClickGestureRecognizer : UIGestureRecognizer <UIPressesEventTerminalRegistration>
{
    UIPressesEvent *_registeredEventForTerminalEvents;
    unsigned long long _lastSeenClickCount;
    _Bool _recognizesOnPressPhaseBegan;
    unsigned long long _clickCount;
}

@property(nonatomic) _Bool recognizesOnPressPhaseBegan; // @synthesize recognizesOnPressPhaseBegan=_recognizesOnPressPhaseBegan;
@property(nonatomic) unsigned long long clickCount; // @synthesize clickCount=_clickCount;
- (void).cxx_destruct;
- (void)pressesEventDidReceiveTerminal:(id)arg1;
- (void)_processPresses:(id)arg1;
- (void)_fail;
- (void)_succeed;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *allowedPressTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

