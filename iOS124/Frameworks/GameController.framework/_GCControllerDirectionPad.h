//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerDirectionPad.h>

@class NSString, _GCControllerAxisInput;

@interface _GCControllerDirectionPad : GCControllerDirectionPad
{
    CDUnknownBlockType _valueChangedHandler;
    _GCControllerAxisInput *_xAxis;
    _GCControllerAxisInput *_yAxis;
    NSString *_descriptionName;
    _Bool _nonAnalog;
}

@property _Bool nonAnalog; // @synthesize nonAnalog=_nonAnalog;
- (id)yAxis;
- (id)xAxis;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)valueChangedHandler;
- (void).cxx_destruct;
- (_Bool)isAnalog;
- (id)right;
- (id)left;
- (id)down;
- (id)up;
- (id)description;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1 queue:(id)arg2;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1;
- (void)_fireValueChangedWithQueue:(id)arg1;
- (void)_fireValueChanged;
- (id)initWithFlippedY:(_Bool)arg1 digital:(_Bool)arg2 descriptionName:(id)arg3;
- (id)initWithFlippedY:(_Bool)arg1 digital:(_Bool)arg2;

@end

