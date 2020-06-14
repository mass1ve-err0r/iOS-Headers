//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSDialogTextField : NSObject
{
    NSString *_placeholder;
    _Bool _secure;
    NSString *_text;
    long long _keyboardType;
    id _textField;
    long long _tag;
    NSString *_title;
}

+ (id)textFieldWithTitle:(id)arg1 uiTextField:(id)arg2;
+ (id)textFieldWithTitle:(id)arg1 nsTextField:(id)arg2;
+ (id)textFieldWithTitle:(id)arg1 secure:(_Bool)arg2;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool secure; // @synthesize secure=_secure;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (void).cxx_destruct;
- (void)_setupTextField:(id)arg1;
- (id)generateUITextField;
- (id)generateNSTextField;

@end

