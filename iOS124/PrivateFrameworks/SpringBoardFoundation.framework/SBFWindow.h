//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NSNumber, _SBFKeyWindowStack;

@interface SBFWindow : UIWindow
{
    _SBFKeyWindowStack *_keyWindowStack;
    NSNumber *_isHiddenOverride;
}

@property(retain, nonatomic, setter=_setKeyWindowStack:) _SBFKeyWindowStack *_keyWindowStack; // @synthesize _keyWindowStack;
- (void).cxx_destruct;
- (void)_resignKeyFromKeyWindowStack;
- (void)_makeKeyFromKeyWindowStack;
- (_Bool)_isEffectivelyHiddenForKeyWindowStack;
- (void)setHidden:(_Bool)arg1;
- (void)makeKeyWindow;
- (_Bool)_canBecomeKeyWindow;
- (void)resignAsKeyWindow;
- (void)dealloc;

@end

