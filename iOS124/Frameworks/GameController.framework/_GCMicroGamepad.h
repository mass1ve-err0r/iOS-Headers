//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCMicroGamepad.h>

#import <GameController/GCNamedProfile-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, NSString, _GCControllerButtonInput, _GCControllerDirectionPad;

@interface _GCMicroGamepad : GCMicroGamepad <GCNamedProfile, NSSecureCoding>
{
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    _GCControllerDirectionPad *_dpad;
    _GCControllerButtonInput *_button0;
    _GCControllerButtonInput *_button1;
    _Bool _dpadFlippedY;
}

+ (_Bool)supportsSecureCoding;
- (id)buttonX;
- (id)buttonA;
- (id)dpad;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)valueChangedHandler;
- (id)controller;
- (void).cxx_destruct;
- (_Bool)supportsDpadTaps;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
@property(readonly) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(_Bool)arg2;
- (id)initWithController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

