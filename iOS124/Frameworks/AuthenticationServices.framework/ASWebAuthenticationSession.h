//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFAuthenticationSession;

@interface ASWebAuthenticationSession : NSObject
{
    SFAuthenticationSession *_authenticationSession;
}

- (void).cxx_destruct;
- (void)cancel;
- (_Bool)start;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 usingEphemeralSession:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

