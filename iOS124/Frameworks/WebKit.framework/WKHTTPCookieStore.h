//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKHTTPCookieStore : NSObject <WKObject>
{
    struct ObjectStorage<API::HTTPCookieStore> _cookieStore;
    struct HashMap<const void *, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>, WTF::PtrHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver>>>> _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) struct Object *_apiObject;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)deleteCookie:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCookie:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAllCookies:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

