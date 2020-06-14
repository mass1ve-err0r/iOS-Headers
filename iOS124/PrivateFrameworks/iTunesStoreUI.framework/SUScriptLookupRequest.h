//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSLookupRequest;

@interface SUScriptLookupRequest : SUScriptObject
{
    SSLookupRequest *_request;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) long long localizationStyleServer;
@property(readonly) long long localizationStyleDevice;
@property long long localizationStyle;
@property(copy) NSString *keyProfile;
@property(retain) id authenticatesIfNeeded;
- (id)_className;
- (id)valueForRequestParameter:(id)arg1;
- (void)startWithLookupFunction:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)dealloc;
- (id)init;

@end

