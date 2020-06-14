//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/SUScriptNavigationItem-Protocol.h>

@class NSNumber, NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem>
{
    SUScriptFunction *_shouldFocusFunction;
    NSString *_style;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (_Bool)_styleIsValid:(id)arg1;
- (id)_newTextField;
- (double)_defaultWidth;
- (id)_boxedNativeTextField;
- (id)_keyboardType;
- (id)_copyValue;
- (id)_copyPlaceholder;
- (id)_autocorrectionType;
- (id)_autocapitalizationType;
@property(retain) NSNumber *width;
@property(retain) NSString *value;
@property(readonly) NSString *style;
@property(retain) WebScriptObject *shouldFocusFunction;
@property(retain) NSString *placeholder;
@property(retain) NSString *keyboardType;
@property(retain) NSString *autocorrectionType;
@property(retain) NSString *autocapitalizationType;
- (id)_className;
- (_Bool)focus;
- (_Bool)blur;
- (id)buttonItem;
- (void)setNativeObjectWithTextField:(id)arg1;
- (void)setNativeObjectWithSearchBar:(id)arg1;
- (void)setNativeObjectWithBarButtonItem:(id)arg1;
@property(readonly, nonatomic) _Bool canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithTextFieldStyle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

