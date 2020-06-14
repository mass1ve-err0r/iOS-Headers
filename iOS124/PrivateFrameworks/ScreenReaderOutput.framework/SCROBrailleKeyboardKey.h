//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderOutput/SCROBrailleKey.h>

#import <ScreenReaderOutput/NSSecureCoding-Protocol.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding>
{
    unsigned int _modifiers;
    unsigned int _keyCode;
    unsigned int _virtualKeyCode;
    NSString *_keyString;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int virtualKeyCode; // @synthesize virtualKeyCode=_virtualKeyCode;
@property(nonatomic) unsigned int keyCode; // @synthesize keyCode=_keyCode;
@property(nonatomic) unsigned int modifiers; // @synthesize modifiers=_modifiers;
@property(retain, nonatomic) NSString *keyString; // @synthesize keyString=_keyString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

