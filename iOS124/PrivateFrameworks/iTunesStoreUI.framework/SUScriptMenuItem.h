//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptMenuItem : SUScriptObject
{
    _Bool _enabled;
    NSString *_title;
    id _userInfo;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_sendDidChange;
@property(retain) id userInfo;
@property(retain) NSString *title;
@property _Bool enabled;
- (id)_className;
- (void)dealloc;
- (id)init;

@end

