//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WebAllowDenyPolicyListener-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener>
{
    Function_f7a043c0 _completionHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldClearCache;
- (void)denyOnlyThisRequest;
- (void)deny;
- (void)allow;
- (id)initWithCompletionHandler:(Function_f7a043c0 *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

