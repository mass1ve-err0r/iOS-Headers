//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextFieldContent_Internal-Protocol.h>

@class UITextField;

@protocol _UITextFieldContentViewContext <_UITextFieldContent_Internal>
- (double)_passcodeStyleAlpha;
- (_Bool)_isPasscodeStyle;
- (struct _NSRange)_unobscuredSecureRange;
- (struct CGPoint)textContainerOrigin;
- (UITextField *)_ownerField;
@end
