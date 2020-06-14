//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/_WKFormInputSession-Protocol.h>

@class NSArray, NSString, UIView;
@protocol NSSecureCoding, _WKFocusedElementInfo;

__attribute__((visibility("hidden")))
@interface WKFormInputSession : NSObject <_WKFormInputSession>
{
    struct WeakObjCPtr<WKContentView> _contentView;
    struct RetainPtr<WKFocusedElementInfo> _focusedElementInfo;
    struct RetainPtr<UIView> _customInputView;
    struct RetainPtr<UIView> _customInputAccessoryView;
    struct RetainPtr<NSArray<UITextSuggestion *>> _suggestions;
    _Bool _accessoryViewShouldNotShow;
    _Bool _forceSecureTextEntry;
    _Bool _requiresStrongPasswordAssistance;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reloadFocusedElementContextView;
- (void)invalidate;
@property(readonly, nonatomic) _Bool requiresStrongPasswordAssistance;
@property(copy, nonatomic) NSArray *suggestions;
- (void)endEditing;
@property(retain, nonatomic) UIView *customInputAccessoryView;
@property(retain, nonatomic) UIView *customInputView;
@property(nonatomic) _Bool forceSecureTextEntry;
@property(nonatomic) _Bool accessoryViewShouldNotShow;
@property(copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) NSObject<NSSecureCoding> *userObject;
@property(readonly, nonatomic) id <_WKFocusedElementInfo> focusedElementInfo;
- (id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2 requiresStrongPasswordAssistance:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

