//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyEventMap.h>

@interface TIKeyEventMap_zh : TIKeyEventMap
{
}

+ (id)punctuationMap_zh_Hant;
+ (id)punctuationMap_zh_Hans;
+ (_Bool)supportsSecureCoding;
+ (id)sharedInstance;
- (id)remapKeyWithString:(id)arg1 stringWithoutModifiers:(id)arg2 modifierFlags:(unsigned long long)arg3 keyboardState:(id)arg4;
- (_Bool)isURLOrEmailKeyboardInKeyboardState:(id)arg1;
- (id)punctuationMap;

@end

