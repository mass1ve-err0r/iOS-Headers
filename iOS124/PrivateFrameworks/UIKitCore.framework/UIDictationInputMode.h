//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UISpecializedInputMode.h>

@class UIKeyboardInputMode, UITouch;

@interface UIDictationInputMode : UISpecializedInputMode
{
    UITouch *_triggeringTouch;
    UIKeyboardInputMode *_currentInputModeForDictation;
}

+ (_Bool)currentInputModeSupportsDictation;
@property(retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation; // @synthesize currentInputModeForDictation=_currentInputModeForDictation;
@property(retain, nonatomic) UITouch *triggeringTouch; // @synthesize triggeringTouch=_triggeringTouch;
- (_Bool)includeBarHeight;
- (Class)viewControllerClass;
- (void)dealloc;

@end

